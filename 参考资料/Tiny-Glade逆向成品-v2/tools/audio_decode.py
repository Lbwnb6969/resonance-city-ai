"""Decode extracted FSB5 samples using the game's supplied FMOD codec DLL.

This executes FMOD library code in this Python process. It does not launch the
game, play sound, or write game files. Output is PCM/IEEE-float WAV plus metadata.
python audio_decode.py --dll PATH/fmod.dll --input FSB_DIRECTORY --out NEW_DIR
"""
import argparse
import array
import ctypes as c
import contextlib
import hashlib
import json
import math
import pathlib
import struct


def sha(path):
    with path.open('rb') as f:
        return hashlib.file_digest(f, 'sha256').hexdigest()


class FMOD:
    def __init__(self, path):
        self.library = c.CDLL(str(path.resolve()))
        V, U, I = c.c_void_p, c.c_uint, c.c_int
        self.functions = {}
        definitions = {
            'System_Create': [c.POINTER(V), U],
            'System_GetVersion': [V, c.POINTER(U)],
            'System_SetOutput': [V, I], 'System_Init': [V, I, U, V],
            'System_CreateSound': [V, c.c_char_p, U, V, c.POINTER(V)],
            'System_Release': [V], 'Sound_Release': [V],
            'Sound_GetNumSubSounds': [V, c.POINTER(I)],
            'Sound_GetSubSound': [V, I, c.POINTER(V)],
            'Sound_GetFormat': [V, c.POINTER(I), c.POINTER(I), c.POINTER(I), c.POINTER(I)],
            'Sound_GetDefaults': [V, c.POINTER(c.c_float), c.POINTER(I)],
            'Sound_GetLength': [V, c.POINTER(U), U],
            'Sound_GetName': [V, c.c_char_p, I],
            'Sound_ReadData': [V, V, U, c.POINTER(U)],
            'Sound_SeekData': [V, U],
        }
        for name, args in definitions.items():
            fn = getattr(self.library, 'FMOD_' + name)
            fn.argtypes, fn.restype = args, I
            self.functions[name] = fn
        self.system = V()
        # ABI from the exact libfmod version in shipped Cargo.lock.
        self.call('System_Create', c.byref(self.system), 0x20222)
        self.version = U()
        self.call('System_GetVersion', self.system, c.byref(self.version))
        self.call('System_SetOutput', self.system, 4)  # NOSOUND_NRT
        self.call('System_Init', self.system, 64, 0, None)

    def call(self, name, *args):
        result = self.functions[name](*args)
        if result:
            raise RuntimeError(f'FMOD_{name}: FMOD_RESULT={result}')
        return result

    def close(self):
        self.call('System_Release', self.system)

    def decode(self, fsb, output, hash_only=False):
        parent = c.c_void_p()
        self.call('System_CreateSound', self.system, str(fsb.resolve()).encode('utf-8'), 0x2000, None, c.byref(parent))
        samples = []
        try:
            count = c.c_int()
            self.call('Sound_GetNumSubSounds', parent, c.byref(count))
            for index in range(count.value):
                sound = c.c_void_p()
                self.call('Sound_GetSubSound', parent, index, c.byref(sound))
                # FSB subsounds share stream state. Establish the start position
                # explicitly before decoding each sample, including index zero.
                self.call('Sound_SeekData', sound, 0)
                name = c.create_string_buffer(2048)
                self.call('Sound_GetName', sound, name, len(name))
                typ, fmt, channels, bits = [c.c_int() for _ in range(4)]
                self.call('Sound_GetFormat', sound, c.byref(typ), c.byref(fmt), c.byref(channels), c.byref(bits))
                frequency, priority = c.c_float(), c.c_int()
                self.call('Sound_GetDefaults', sound, c.byref(frequency), c.byref(priority))
                length = c.c_uint()
                self.call('Sound_GetLength', sound, c.byref(length), 4)  # PCM bytes
                if fmt.value not in (1, 2, 3, 4, 5):
                    raise ValueError(f'unsupported decoded format {fmt.value}')
                rate = round(frequency.value)
                block = channels.value * bits.value // 8
                wave_format = 3 if fmt.value == 5 else 1
                # Float WAV includes a fact chunk. PCM uses a conventional fmt.
                fact = b'fact' + struct.pack('<II', 4, length.value // block) if wave_format == 3 else b''
                fmt_bytes = b'fmt ' + struct.pack('<IHHIIHH', 16, wave_format, channels.value, rate,
                                                 rate * block, block, bits.value)
                pad = length.value & 1
                header = b'RIFF' + struct.pack('<I', 4 + len(fmt_bytes) + len(fact) + 8 + length.value + pad)
                header += b'WAVE' + fmt_bytes + fact + b'data' + struct.pack('<I', length.value)
                dest = output / f'{index:05d}.wav'
                received, peak, invalid_floats = 0, 0.0, 0
                pcm_hash = hashlib.sha256()
                buffer = c.create_string_buffer(1024 * 1024)
                with (contextlib.nullcontext(None) if hash_only else dest.open('xb')) as f:
                    if f:
                        f.write(header)
                    while received < length.value:
                        read = c.c_uint()
                        result = self.functions['Sound_ReadData'](sound, buffer,
                            min(len(buffer), length.value - received), c.byref(read))
                        if result not in (0, 16):  # 16 FILE_EOF may accompany final bytes
                            raise RuntimeError(f'FMOD_Sound_ReadData: {result}')
                        if read.value == 0:
                            raise ValueError('decoder returned zero bytes before declared PCM length')
                        data = buffer.raw[:read.value]
                        if f:
                            f.write(data)
                        pcm_hash.update(data); received += read.value
                        if fmt.value == 5:
                            values = array.array('f'); values.frombytes(data)
                            invalid_floats += sum(not math.isfinite(x) for x in values)
                            peak = max(peak, max((abs(x) for x in values), default=0.0))
                    if pad and f:
                        f.write(b'\0')
                if received != length.value or received % block or invalid_floats:
                    raise ValueError('PCM length, block alignment or finite-float validation failed')
                samples.append({'index': index, 'name': name.value.decode('utf-8', 'replace'),
                    'decoded_format': fmt.value, 'channels': channels.value, 'bits': bits.value,
                    'sample_rate': rate, 'frames': received // block, 'pcm_bytes': received,
                    'seconds': received / block / rate, 'pcm_sha256': pcm_hash.hexdigest(),
                    'wav_file': None if hash_only else dest.name,
                    'wav_sha256': None if hash_only else sha(dest), 'max_abs_float': peak,
                    'nonfinite_float_samples': invalid_floats})
            return {'source': str(fsb), 'source_sha256': sha(fsb), 'samples_count': len(samples), 'samples': samples}
        finally:
            self.call('Sound_Release', parent)


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--dll', type=pathlib.Path, required=True)
    p.add_argument('--input', type=pathlib.Path, required=True)
    p.add_argument('--out', type=pathlib.Path, required=True)
    p.add_argument('--hash-only', action='store_true', help='Decode all PCM but retain hashes/metadata without large WAV files')
    p.add_argument('--reuse-complete', type=pathlib.Path, help='Reuse completed banks from an earlier verified decode directory')
    args = p.parse_args(); args.out.mkdir(parents=True, exist_ok=False)
    runtime = FMOD(args.dll)
    records, failures = [], []
    cache = {}
    if args.reuse_complete:
        for path in args.reuse_complete.rglob('samples.json'):
            cached = json.loads(path.read_text(encoding='utf-8'))
            cache[cached['source_sha256']] = (path, cached)
    try:
        paths = sorted(args.input.rglob('*.fsb')) if args.input.is_dir() else [args.input]
        for i, fsb in enumerate(paths):
            dest = args.out / f'{i:02d}-{fsb.stem}'; dest.mkdir()
            try:
                previous = cache.get(sha(fsb))
                if previous:
                    old_path, old_record = previous
                    record = dict(old_record)
                    record['reused_verified_record'] = str(old_path.resolve())
                    record['reused_record_sha256'] = sha(old_path)
                else:
                    record = runtime.decode(fsb, dest, args.hash_only)
                records.append(record)
                (dest / 'samples.json').write_text(json.dumps(record, ensure_ascii=False, indent=2), encoding='utf-8')
                print(json.dumps({'bank': fsb.name, 'samples': record['samples_count'],
                                  'pcm_bytes': sum(s['pcm_bytes'] for s in record['samples'])}), flush=True)
            except Exception as error:
                failures.append({'bank': str(fsb), 'error': str(error)})
                print(json.dumps(failures[-1]), flush=True)
    finally:
        runtime.close()
    report = {'dll': str(args.dll), 'dll_sha256': sha(args.dll), 'runtime_version': hex(runtime.version.value),
              'output_mode': 'NOSOUND_NRT', 'game_launched': False, 'banks': records,
              'hash_only_for_new_banks': args.hash_only,
              'bank_count': len(records), 'sample_count': sum(b['samples_count'] for b in records),
              'failures': failures, 'limits': ['FMOD codec execution; no independent Vorbis decoder equivalence check.',
                'WAV stores native decoded PCM; it does not recreate original Ogg packets or Studio events.']}
    (args.out / 'audio_decoding.json').write_text(json.dumps(report, ensure_ascii=False, indent=2), encoding='utf-8')
    print(json.dumps({'banks': len(records), 'samples': report['sample_count'], 'failures': failures}))
    return bool(failures)


if __name__ == '__main__':
    raise SystemExit(main())
