// VA 0x1406001f0, PDB extent 192 bytes
// country_core::render::sparse_instance_buffer::SparseInstanceBuffer::allocated_items_upper_bound<country_core::resources::roofs::roof_buffers::WoodenGablePlankSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::sparse_instance_buffer::SparseInstanceBuffer::allocated_items_upper_bound<country_core::resources::roofs::roof_buffers::WoodenGablePlankSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
   Extent: 192 */

longlong pdb_1406001f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x78);
  puVar1 = (ulonglong *)(param_1 + 0x58);
  uVar3 = *(ulonglong *)(param_1 + 0x58);
  if (uVar3 < 0xfffffffffffffff0 && (char)(((uint)uVar3 & 8) >> 3) == '\0') {
    LOCK();
    uVar4 = *puVar1;
    if (uVar3 == uVar4) {
      *puVar1 = uVar3 + 0x10;
    }
    UNLOCK();
    if (uVar3 == uVar4) goto LAB_14060023a;
  }
  pdb_142dbb5f0(puVar1,0,param_3,1000000000);
LAB_14060023a:
  pdb_140e9a150(puVar1);
  pdb_140e9a150((ulonglong)puVar1 | 1);
  uVar4 = *(ulonglong *)(param_1 + 0x70);
  pdb_140e9a350(puVar1);
  pdb_140e9a350((ulonglong)puVar1 | 1);
  LOCK();
  puVar2 = (ulonglong *)(param_1 + 0x58);
  uVar3 = *puVar2;
  *puVar2 = *puVar2 - 0x10;
  UNLOCK();
  if ((uVar3 & 0xfffffffffffffff2) == 0x12) {
    pdb_142dbbf50(puVar1);
  }
  uVar6 = (uVar6 & 0x7ffffffffffff) * 0x100;
  lVar5 = 0;
  if (uVar4 <= uVar6) {
    lVar5 = uVar6 - uVar4;
  }
  return lVar5 << 5;
}

