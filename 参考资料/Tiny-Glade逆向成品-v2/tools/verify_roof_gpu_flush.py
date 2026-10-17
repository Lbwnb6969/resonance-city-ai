"""Verify the portable roof sparse GPU flush/reclaim model."""
import argparse, json, pathlib, struct
from roof_sparse_reference import SparseRoofStorage
from roof_gpu_flush_reference import RoofGpuFlush, MockVulkanSink


def record(tag):
    b = bytearray(64)
    struct.pack_into('<I', b, 0, tag)
    return bytes(b)


def run():
    s = SparseRoofStorage(max_pages=2, initial_pages=1)
    # Three adjacent/non-adjacent dirty slots. The bytes make destination and
    # range slicing independently observable in the mock sink.
    for slot in (0, 1, 3):
        s.usage[slot] = 1
        s.allocated |= 1 << slot
        p, off = s.location(slot, 0)
        s.pages[p][off:off + 64] = record(slot)
        s.dirty |= 1 << slot
    f = RoofGpuFlush(s)
    sink = MockVulkanSink()
    a = f.flush(sink)
    checks = {
        'coalesced_slot_ranges': a.dirty_ranges == [(0, 64), (96, 128)],
        'page_split_count': len(sink.writes) == 2,
        'byte_offsets': [w['destination_offset'] for w in sink.writes] == [0, 6144],
        'byte_sizes': [w['size'] for w in sink.writes] == [4096, 2048],
        'dirty_exchanged': s.dirty == 0,
    }

    # clear keeps dirty set while dropping liveness; flush still emits the
    # complete slot and then the slot is reusable in LIFO order.
    s2 = SparseRoofStorage(max_pages=1, initial_pages=1)
    s2.usage[2] = 1; s2.allocated = 1 << 2; s2.dirty = 1 << 2
    f2 = RoofGpuFlush(s2); f2.defer_drop([2]); sink2 = MockVulkanSink(); b = f2.flush(sink2)
    checks.update({
        'deferred_reclaim': b.dropped_slots == [2] and s2.usage[2] == 0,
        'reclaim_clears_allocated': (s2.allocated & (1 << 2)) == 0,
        'reclaim_free_lifo': s2.free_slots[-1] == 2,
        'clear_dirty_upload': b.dirty_ranges == [(64, 96)] and len(sink2.writes) == 1,
    })

    # Growing from one to two pages forces a full allocated-slot reupload.
    s3 = SparseRoofStorage(max_pages=2, initial_pages=1)
    s3.usage[0] = 1; s3.allocated = 1; s3.dirty = 1
    s3.pages.append(bytearray(s3.PAGE_BYTES))
    s3.free_slots = [256]
    s3.usage[256] = 1; s3.allocated |= 1 << 256
    p, off = s3.location(256, 0); s3.pages[p][off:off + 64] = record(256)
    f3 = RoofGpuFlush(s3); f3.gpu_capacity_bytes = s3.PAGE_BYTES; sink3 = MockVulkanSink(); c = f3.flush(sink3)
    checks.update({
        'growth_detected': c.grew_gpu_buffer,
        'growth_forces_allocated_upload': c.dirty_mask_before == ((1 << 0) | (1 << 256)),
        'growth_writes_both_pages': len(sink3.writes) == 2,
    })
    return {
        'passed': all(checks.values()), 'checks': checks,
        'first_flush': {'ranges': a.dirty_ranges, 'writes': [{k:v for k,v in w.items() if k != 'data'} for w in sink.writes]},
        'clear_flush': {'ranges': b.dirty_ranges, 'writes': [{k:v for k,v in w.items() if k != 'data'} for w in sink2.writes]},
        'growth_flush': {'ranges': c.dirty_ranges, 'writes': [{k:v for k,v in w.items() if k != 'data'} for w in sink3.writes]},
        'native_metadata': {
            'gpu_flush_va': '0x141f482c0',
            'upload_va': '0x142818d40',
            'record_size': 64, 'slot_records': 32, 'page_records': 8192,
            'upload_range_scaling': 'record_start/end << 6; destination page offset in bytes',
            'concurrency': 'single-thread reference; parking_lot lock contention is not modeled',
        },
    }


if __name__ == '__main__':
    parser = argparse.ArgumentParser(); parser.add_argument('--out', type=pathlib.Path, required=True)
    args = parser.parse_args(); value = run(); args.out.write_text(json.dumps(value, indent=2)); print(json.dumps(value, indent=2))
    raise SystemExit(0 if value['passed'] else 1)
