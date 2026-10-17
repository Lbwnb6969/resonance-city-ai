"""Read-only Tiny Glade history/snapshot inspector; standard library only.

Snapshot format established from installed user saves, not a guessed file carve.
python save_inspector.py audit --root ".../Saved Games/Tiny Glade" --out audit.json
python save_inspector.py extract file.snapshot --out NEW_DIRECTORY
python save_inspector.py repack extracted-directory --out NEW_FILE.snapshot
Repack preserves the exact original JSON and compressed bytes for byte equality.
"""
import argparse
import collections
import hashlib
import json
import pathlib
import struct
import zlib


def digest(data):
    return hashlib.sha256(data).hexdigest()


def chunks(data):
    offset = 0
    result = []
    while offset < len(data):
        if offset + 16 > len(data):
            raise ValueError(f'truncated chunk header at {offset}')
        magic = data[offset:offset + 8]
        length = struct.unpack_from('<Q', data, offset + 8)[0]
        end = offset + 16 + length
        if end > len(data):
            raise ValueError(f'chunk {magic!r} extends past EOF')
        result.append((magic, data[offset + 16:end], offset))
        offset = end
    return result


def inflate(data):
    obj = zlib.decompressobj(-15)
    raw = obj.decompress(data) + obj.flush()
    if not obj.eof or obj.unused_data or obj.unconsumed_tail:
        raise ValueError('DEFLATE stream incomplete or trailing bytes')
    return raw


def decode(magic, payload):
    if magic == b'Snapshot':
        return json.loads(payload), None
    if magic in (b'PathRast', b'WaterRas', b'GardenRa', b'Cobblest', b'PlantExe'):
        if len(payload) < 8:
            raise ValueError('missing uncompressed size')
        size = struct.unpack_from('<Q', payload)[0]
        raw = inflate(payload[8:])
        if size != len(raw):
            raise ValueError(f'raster expected {size} bytes, found {len(raw)}')
        return None, raw
    if magic in (b'Terrain\0', b'Grass2\0\0'):
        return None, inflate(payload)
    # Preserve newer/unknown chunk payloads without claiming to decode them.
    return None, None


def snapshot(path):
    data = path.read_bytes()
    parts = chunks(data)
    if not parts or parts[0][0] != b'Snapshot':
        raise ValueError('expected Snapshot as the first chunk')
    decoded = [decode(m, p) for m, p, _ in parts]
    scene = decoded[0][0]
    raster_names = scene.get('Raster', [])
    if len(parts) < 1 + len(raster_names):
        raise ValueError('JSON raster list exceeds available chunks')
    for name, (magic, _, _) in zip(raster_names, parts[1:]):
        if name.encode('ascii')[:8].ljust(8, b'\0') != magic:
            raise ValueError('JSON raster order differs from chunk order')
    rebuilt = b''.join(m + struct.pack('<Q', len(p)) + p for m, p, _ in parts)
    if rebuilt != data:
        raise ValueError('chunk reconstruction changed bytes')
    return {
        'file': str(path), 'bytes': len(data), 'sha256': digest(data),
        'version': scene.get('Version'), 'json_keys': sorted(scene),
        'scene_counts': {k: len(v) for k, v in scene.items() if isinstance(v, (list, dict))},
        'chunks': [{'magic_hex': m.hex(), 'name': m.rstrip(b'\0').decode('ascii'),
                    'logical_name': raster_names[i - 1] if 1 <= i <= len(raster_names) else m.rstrip(b'\0').decode('ascii'),
                    'offset': o, 'payload_bytes': len(p),
                    'payload_sha256': digest(p),
                    'decoded_bytes': len(d[1]) if d[1] is not None else None,
                    'decoded_sha256': digest(d[1]) if d[1] is not None else None,
                    'decoded': d[0] is not None or d[1] is not None}
                   for i, ((m, p, o), d) in enumerate(zip(parts, decoded))],
        'byte_identical_roundtrip': True,
    }, parts, decoded


def schema_walk(value, counter, prefix='$'):
    counter[prefix + ':' + type(value).__name__] += 1
    if isinstance(value, dict):
        for k, v in value.items():
            # Dynamic numeric indices are dictionary entries, not named fields.
            key = '*' if k.isdecimal() else k
            schema_walk(v, counter, prefix + '.' + key)
    elif isinstance(value, list):
        for v in value:
            schema_walk(v, counter, prefix + '[]')


def audit(root):
    snapshots, histories, errors = [], [], []
    schema = collections.Counter()
    variants = collections.Counter()
    operations = collections.Counter()
    # Include caches and backups, report each category explicitly.
    for path in sorted(root.rglob('*.snapshot')):
        try:
            rec, _, _ = snapshot(path)
            rec['file'] = path.relative_to(root).as_posix()
            snapshots.append(rec)
        except Exception as exc:
            errors.append({'file': path.relative_to(root).as_posix(), 'error': str(exc)})
    for path in sorted(root.rglob('*.json')):
        if not (path.name == 'history.json' or path.name.startswith('history-backup-')):
            continue
        try:
            data = path.read_bytes()
            obj = json.loads(data)
            h = obj['History']
            chain = h['edit_chain']
            schema_walk(obj, schema)
            for entry in chain:
                for edit in entry.get('edits', []):
                    for name, val in edit.items():
                        variants[name] += 1
                        if isinstance(val, dict):
                            for k in val:
                                operations[name + '.' + k] += 1
            refs = h.get('snapshots', [])
            missing = [r['snapshot_id'] for r in refs
                       if not (path.parent / 'snapshots' / (str(r['snapshot_id']) + '.snapshot')).exists()]
            histories.append({'file': path.relative_to(root).as_posix(),
                              'bytes': len(data), 'sha256': digest(data),
                              'version': obj.get('Version'), 'keys': sorted(obj),
                              'history_fields': sorted(h),
                              'chain_index': h.get('chain_index'),
                              'history_start': h.get('history_start'),
                              'edit_chain_length': len(chain),
                              'snapshots': refs, 'missing_snapshot_references': missing})
        except Exception as exc:
            errors.append({'file': path.relative_to(root).as_posix(), 'error': str(exc)})
    return {'root': str(root), 'snapshot_count': len(snapshots),
            'history_count': len(histories), 'errors': errors,
            'snapshots': snapshots, 'histories': histories,
            'edit_variants': dict(variants), 'edit_operation_fields': dict(operations),
            'observed_schema_paths': dict(sorted(schema.items())),
            'limitations': ['Only recorded saves establish coverage.',
                            'No game execution, replay, or semantic equivalence test.',
                            'Raster dimensions and terrain sample units need code corroboration.',
                            'Repack preserves compressed streams; it does not recompress edited scenes.']}


def write_new(path, data):
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open('xb') as f:
        f.write(data)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    sub = parser.add_subparsers(dest='command', required=True)
    a = sub.add_parser('audit')
    a.add_argument('--root', type=pathlib.Path, required=True)
    a.add_argument('--out', type=pathlib.Path, required=True)
    e = sub.add_parser('extract')
    e.add_argument('snapshot', type=pathlib.Path)
    e.add_argument('--out', type=pathlib.Path, required=True)
    r = sub.add_parser('repack')
    r.add_argument('directory', type=pathlib.Path)
    r.add_argument('--out', type=pathlib.Path, required=True)
    args = parser.parse_args()
    if args.command == 'audit':
        report = audit(args.root)
        write_new(args.out, json.dumps(report, ensure_ascii=False, indent=2).encode())
        print(json.dumps({k: report[k] for k in ['snapshot_count', 'history_count', 'errors', 'edit_variants']}, ensure_ascii=False))
        return 1 if report['errors'] else 0
    if args.command == 'extract':
        rec, parts, decoded = snapshot(args.snapshot)
        args.out.mkdir(parents=True, exist_ok=False)
        for i, ((magic, payload, _), (_, raw)) in enumerate(zip(parts, decoded)):
            write_new(args.out / f'{i:02}.payload', payload)
            if raw is not None:
                write_new(args.out / f'{i:02}.decoded.bin', raw)
        write_new(args.out / 'scene.json', json.dumps(decoded[0][0], ensure_ascii=False, indent=2).encode())
        write_new(args.out / 'manifest.json', json.dumps(rec, ensure_ascii=False, indent=2).encode())
        print(json.dumps({'chunks': len(parts), 'sha256': rec['sha256']}))
    else:
        manifest = json.loads((args.directory / 'manifest.json').read_text(encoding='utf-8'))
        parts = []
        for i, record in enumerate(manifest['chunks']):
            payload = (args.directory / f'{i:02}.payload').read_bytes()
            if digest(payload) != record['payload_sha256']:
                raise ValueError('payload changed; exact preservation repack rejected')
            parts.append(bytes.fromhex(record['magic_hex']) + struct.pack('<Q', len(payload)) + payload)
        data = b''.join(parts)
        if digest(data) != manifest['sha256']:
            raise ValueError('repacked identity mismatch')
        write_new(args.out, data)
        print(json.dumps({'bytes': len(data), 'sha256': digest(data), 'identical': True}))
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
