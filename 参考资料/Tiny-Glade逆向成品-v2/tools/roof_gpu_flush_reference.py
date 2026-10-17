"""Single-thread reference for ``SparseInstanceBufferWriter::gpu_flush``.

The native implementation at VA 0x141f482c0 drains deferred allocation drops,
atomically takes the slot dirty bitmap, coalesces dirty slots into record
ranges, splits those ranges at the 8192-record page boundary, and forwards
each range to ``TypedStorageBuffer::gpu_write_ranges_nonoverlapping``
(0x142818d40).  This module keeps that behavior usable without Vulkan: a sink
receives the exact destination byte offset and source bytes for every write.
It intentionally models one caller thread; parking_lot contention and actual
GPU lifetime management remain outside the source reconstruction.
"""
from dataclasses import dataclass, field
from typing import Protocol
from roof_sparse_reference import SparseRoofStorage


class WriteSink(Protocol):
    def write_buffer(self, destination_offset: int, data: bytes,
                     first_record: int, end_record: int, page: int) -> None: ...


@dataclass
class MockVulkanSink:
    """Capture the writes that the native GPU upload would issue."""
    writes: list = field(default_factory=list)

    def write_buffer(self, destination_offset, data, first_record, end_record, page):
        self.writes.append({
            "destination_offset": int(destination_offset),
            "size": len(data),
            "first_record": int(first_record),
            "end_record": int(end_record),
            "page": int(page),
            "sha256": __import__("hashlib").sha256(data).hexdigest(),
            "data": bytes(data),
        })


@dataclass
class FlushResult:
    dropped_slots: list
    dirty_mask_before: int
    dirty_ranges: list
    page_ranges: list
    grew_gpu_buffer: bool
    gpu_capacity_bytes: int


class RoofGpuFlush:
    """GPU flush/reclaim companion for :class:`SparseRoofStorage`.

    ``storage.dirty`` and ``storage.allocated`` are slot bitmaps.  A dirty bit
    denotes the complete 32-record slot, including an empty slot after
    ``clear``.  ``deferred_drops`` contains ownership vectors moved by the
    allocation destructor; those slots are reclaimed before taking dirty bits.
    """
    SLOT_RECORDS = 32
    PAGE_RECORDS = 8192
    RECORD_SIZE = 64
    PAGE_BYTES = PAGE_RECORDS * RECORD_SIZE

    def __init__(self, storage: SparseRoofStorage):
        self.storage = storage
        self.deferred_drops: list[list[int]] = []
        self.gpu_capacity_bytes = len(storage.pages) * self.PAGE_BYTES

    def defer_drop(self, slots):
        """Move an allocation's owned-slot vector to the next flush."""
        slots = list(slots)
        if slots:
            self.deferred_drops.append(slots)

    def _reclaim_deferred(self):
        reclaimed = []
        for owned in self.deferred_drops:
            # Native clear/drop transfers vectors from tail to free-list first.
            for slot in reversed(owned):
                if 0 <= slot < len(self.storage.usage):
                    self.storage.usage[slot] = 0
                    self.storage.allocated &= ~(1 << slot)
                    self.storage.free_slots.append(slot)
                    reclaimed.append(slot)
        self.deferred_drops.clear()
        return reclaimed

    @staticmethod
    def _bits_to_ranges(mask, capacity_slots):
        """Return half-open record ranges from dirty slot bits."""
        out = []
        bit = 0
        while mask:
            low = mask & -mask
            slot = low.bit_length() - 1
            if slot >= capacity_slots:
                raise IndexError(f"dirty slot {slot} >= GPU capacity {capacity_slots}")
            first = slot * RoofGpuFlush.SLOT_RECORDS
            end = first + RoofGpuFlush.SLOT_RECORDS
            if out and out[-1][1] == first:
                out[-1] = (out[-1][0], end)
            else:
                out.append((first, end))
            mask ^= low
        return out

    def _page_ranges(self, ranges):
        out = []
        for first, end in ranges:
            while first < end:
                page = first // self.PAGE_RECORDS
                boundary = (page + 1) * self.PAGE_RECORDS
                stop = min(end, boundary)
                out.append((page, first, stop))
                first = stop
        return out

    def flush(self, sink: WriteSink) -> FlushResult:
        dropped = self._reclaim_deferred()
        required = len(self.storage.pages) * self.PAGE_BYTES
        grew = required > self.gpu_capacity_bytes
        if grew:
            self.gpu_capacity_bytes = required
            # Buffer recreation forces a complete upload of all allocated slots.
            self.storage.dirty |= self.storage.allocated
        before = self.storage.dirty
        self.storage.dirty = 0  # exchange(mask, 0), before range coalescing
        capacity_slots = self.gpu_capacity_bytes // (self.SLOT_RECORDS * self.RECORD_SIZE)
        ranges = self._bits_to_ranges(before, capacity_slots)
        page_ranges = self._page_ranges(ranges)
        for page, first, end in page_ranges:
            local_first = first - page * self.PAGE_RECORDS
            local_end = end - page * self.PAGE_RECORDS
            page_data = self.storage.pages[page]
            data = bytes(page_data[local_first * self.RECORD_SIZE:local_end * self.RECORD_SIZE])
            # 0x142818d40 scales each pair by 64 before issuing the API write.
            destination = page * self.PAGE_BYTES + local_first * self.RECORD_SIZE
            sink.write_buffer(destination, data, first, end, page)
        return FlushResult(dropped, before, ranges, page_ranges, grew, self.gpu_capacity_bytes)

