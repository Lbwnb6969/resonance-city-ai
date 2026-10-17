"""Recovered roof sparse page/slot layout, single-thread CPU reference.

VA 0x141f49fd0 uses 64-byte records, 32 records/slot, 256 slots/page,
0x80000 bytes/page, slot-level dirty/ownership bitmaps and a LIFO free list.
This reference models successful writes and page doubling; parking_lot locking,
GPU upload and resource destruction are outside the single-thread model.
"""
from dataclasses import dataclass,field

class SparseRoofStorage:
    RECORD_SIZE=64;SLOT_RECORDS=32;PAGE_SLOTS=256;PAGE_BYTES=0x80000
    def __init__(self,max_pages=2,initial_pages=1):
        self.max_pages=max_pages;self.pages=[bytearray(self.PAGE_BYTES) for _ in range(initial_pages)]
        self.usage=[0]*(max_pages*self.PAGE_SLOTS)
        self.free_slots=list(range(initial_pages*self.PAGE_SLOTS-1,-1,-1))
        self.dirty=0;self.allocated=0
    def allocate_slot(self):
        if not self.free_slots:
            old=len(self.pages);new=min(self.max_pages,old*2)
            if new==old:return None
            self.pages.extend(bytearray(self.PAGE_BYTES) for _ in range(new-old))
            self.free_slots.extend(range(new*self.PAGE_SLOTS-1,old*self.PAGE_SLOTS-1,-1))
        slot=self.free_slots.pop();self.usage[slot]=0;self.allocated|=1<<slot
        return slot
    def location(self,slot,index):
        return slot>>8,(((slot&255)<<5)|index)<<6
    def write(self,slot,record):
        n=self.usage[slot];page,offset=self.location(slot,n)
        self.pages[page][offset:offset+64]=record;self.usage[slot]=n+1;self.dirty|=1<<slot
        return page,offset
    def read_slot(self,slot):
        page,offset=self.location(slot,0)
        return bytes(self.pages[page][offset:offset+self.usage[slot]*64])
    def clear(self,slots=None):
        """VA 0x141f4a6c0 clear fastpath.

        The writer's owned-slot list is consumed in reverse into its free list.
        For every owned slot the usage byte and *allocated/liveness* bitmap are
        cleared.  The dirty bitmap is intentionally left set: the following
        GPU flush must upload the now-empty records so deleted instances vanish
        from the GPU buffer.
        """
        if slots is None:slots=[i for i,u in enumerate(self.usage) if u]
        freed=[]
        for slot in slots:
            if self.usage[slot]==0:continue
            self.usage[slot]=0
            self.allocated &= ~(1<<slot)
            freed.append(slot)
        # clear's Vec move copies the owned vector from its tail first.  This
        # preserves the exact LIFO reuse order of the native implementation.
        self.free_slots.extend(reversed(freed))
        return slots

@dataclass
class SparseRoofWriter:
    storage:SparseRoofStorage
    current_slot:int|None=None
    owned_slots:list=field(default_factory=list)
    def push(self,record):
        if len(record)!=64:raise ValueError('Roof record must be 64 bytes')
        if self.current_slot is None or self.storage.usage[self.current_slot]>=32:
            slot=self.storage.allocate_slot()
            if slot is None:return False
            self.current_slot=slot;self.owned_slots.append(slot)
        self.storage.write(self.current_slot,record);return True
    def records(self):return b''.join(self.storage.read_slot(slot) for slot in self.owned_slots)
    def dispatch_ranges(self):
        # Corresponds to page-local first_instance used by the compute shader.
        return [{'page':slot>>8,'first_instance':(slot&255)<<5,'instance_count':self.storage.usage[slot]}
                for slot in self.owned_slots]
    def clear(self):
        slots=list(self.owned_slots);self.storage.clear(slots);self.owned_slots=[];self.current_slot=None;return slots

def to_draw_ranges(storage,mask=None):
    """VA 0x141a78250; coalesce consecutive nonempty slot records into draw ranges."""
    slots=range(len(storage.usage)) if mask is None else mask
    ranges=[];start=None;last=None
    for slot in slots:
        if storage.usage[slot]==0:continue
        first=(slot&255)*32;end=first+storage.usage[slot]
        if start is None:start,last=first,end
        elif first==last:last=end
        else:ranges.append((start,last-start));start,last=first,end
    if start is not None:ranges.append((start,last-start))
    return ranges
