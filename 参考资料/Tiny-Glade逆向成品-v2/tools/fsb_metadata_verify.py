"""Parse FSB5 variable sample headers and compare to actual FMOD decoding.

Header bit layout is cross-referenced to the primary python-fsb5 producer
source at https://github.com/HearthSim/python-fsb5/blob/master/FSB5.bt .
Unknown metadata chunks retain exact offsets, sizes and bytes; no codec
packet interpretation is invented. This tool does not execute FMOD.
"""
import argparse
import hashlib
import json
import pathlib
import struct

FREQUENCIES = {1:8000, 2:11000, 3:11025, 4:16000, 5:22050, 6:24000, 7:32000, 8:44100, 9:48000}


def parse(path):
    data = path.read_bytes()
    if data[:4] != b'FSB5':
        raise ValueError('missing FSB5 magic')
    version, count, header_size, name_size, payload_size, codec = struct.unpack_from('<6I', data, 4)
    if version != 1 or len(data) != 60 + header_size + name_size + payload_size:
        raise ValueError('unrecognized FSB5 version/extent')
    cursor, end = 60, 60 + header_size
    rows = []
    for index in range(count):
        start = cursor
        if cursor + 8 > end:
            raise ValueError('sample header overrun')
        raw = struct.unpack_from('<Q', data, cursor)[0]; cursor += 8
        more = raw & 1
        frequency_id = (raw >> 1) & 15
        channels = ((raw >> 5) & 1) + 1
        payload_offset = ((raw >> 6) & ((1 << 28) - 1)) * 16
        frames = raw >> 34
        frequency = FREQUENCIES.get(frequency_id)
        chunks = []
        while more:
            if cursor + 4 > end:
                raise ValueError('sample chunk header overrun')
            chunk_start = cursor
            word = struct.unpack_from('<I', data, cursor)[0]; cursor += 4
            more, size, type_ = word & 1, (word >> 1) & 0xffffff, word >> 25
            if cursor + size > end:
                raise ValueError('sample metadata overrun')
            chunk_data = data[cursor:cursor + size]; cursor += size
            chunk = {'offset': chunk_start, 'type': type_, 'bytes': size, 'data_hex': chunk_data.hex()}
            if type_ == 1:
                if size != 1:
                    raise ValueError('CHANNELS chunk size')
                channels = chunk_data[0]; chunk['channels'] = channels
            elif type_ == 2:
                if size != 4:
                    raise ValueError('FREQUENCY chunk size')
                frequency = struct.unpack('<I', chunk_data)[0]; chunk['sample_rate'] = frequency
            elif type_ == 3:
                if size != 8:
                    raise ValueError('LOOP chunk size')
                chunk['loop_start_frame'], chunk['loop_end_frame'] = struct.unpack('<II', chunk_data)
            elif type_ == 11 and size >= 4:
                chunk['vorbis_setup_crc32'] = struct.unpack_from('<I', chunk_data)[0]
            chunks.append(chunk)
        if frequency is None or payload_offset > payload_size:
            raise ValueError('invalid frequency or data offset')
        name = None
        if name_size:
            if index * 4 + 4 > name_size:
                raise ValueError('name offsets extent')
            name_offset = struct.unpack_from('<I', data, end + index*4)[0]
            if name_offset >= name_size:
                raise ValueError('invalid name offset')
            at = end + name_offset
            terminator = data.find(b'\0', at, end + name_size)
            if terminator < 0:
                raise ValueError('unterminated name')
            name = data[at:terminator].decode('utf-8')
        rows.append({'index': index, 'name': name, 'header_offset': start, 'header_bytes': cursor-start,
                     'frames': frames, 'sample_rate': frequency, 'channels': channels,
                     'payload_offset': payload_offset, 'metadata': chunks})
    if cursor != end:
        raise ValueError('unused sample header bytes')
    for i, row in enumerate(rows):
        next_offset = rows[i+1]['payload_offset'] if i+1 < len(rows) else payload_size
        if next_offset < row['payload_offset']:
            raise ValueError('nonmonotonic sample payload offsets')
        row['payload_extent_including_padding'] = next_offset - row['payload_offset']
    return {'file': str(path.resolve()), 'sha256': hashlib.sha256(data).hexdigest(), 'codec_raw': codec,
            'header_bytes': header_size, 'name_table_bytes': name_size, 'payload_bytes': payload_size,
            'samples_count': count, 'samples': rows}


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--input', type=pathlib.Path, required=True)
    p.add_argument('--decoded', type=pathlib.Path, required=True)
    p.add_argument('--out', type=pathlib.Path, required=True)
    args = p.parse_args()
    decoded = json.loads(args.decoded.read_text(encoding='utf-8'))
    banks = {b['source_sha256']: b for b in decoded['banks']}
    rows, errors = [], []
    paths = sorted(args.input.rglob('*.fsb')) if args.input.is_dir() else [args.input]
    for path in paths:
        row = parse(path)
        bank = banks.get(row['sha256'])
        if bank is None:
            errors.append({'bank': path.name, 'error': 'bank was not successfully decoded'})
        elif row['samples_count'] != bank['samples_count']:
            errors.append({'bank': path.name, 'error': 'sample count differs'})
        else:
            by_index = {s['index']: s for s in bank['samples']}
            for sample in row['samples']:
                actual = by_index[sample['index']]
                differences = {key: [sample[key], actual[key]] for key in ('name','frames','sample_rate','channels')
                               if sample[key] != actual[key]}
                if actual['pcm_bytes'] != actual['frames'] * actual['channels'] * actual['bits'] // 8:
                    differences['pcm_bytes'] = 'PCM block equation differs'
                if differences:
                    errors.append({'bank': path.name, 'index': sample['index'], 'differences': differences})
                sample['pcm_sha256'] = actual['pcm_sha256']
                sample['pcm_bytes'] = actual['pcm_bytes']
        rows.append(row)
    result = {'banks': len(rows), 'samples': sum(r['samples_count'] for r in rows),
              'errors': errors, 'records': rows,
              'header_layout_reference': 'https://github.com/HearthSim/python-fsb5/blob/master/FSB5.bt',
              'limits': 'Header metadata versus FMOD native PCM; no independent compressed-codec output equivalence.'}
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(result, ensure_ascii=False, indent=2), encoding='utf-8')
    print(json.dumps({k: result[k] for k in ('banks','samples','errors')}))
    return bool(errors)


if __name__ == '__main__':
    raise SystemExit(main())
