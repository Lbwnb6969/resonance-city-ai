// VA 0x141a76030, PDB extent 120 bytes
// country_core::render::sparse_instance_buffer::SparseInstanceBuffer::hide<country_core::geometry::instanced_wall::BrickTransformSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::sparse_instance_buffer::SparseInstanceBuffer::hide<country_core::geometry::instanced_wall::BrickTransformSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
   Extent: 120 */

void pdb_141a76030(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar3 = *(longlong *)(param_2 + 8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143382340);
  }
  lVar4 = *(longlong *)(lVar3 + 0x10);
  if (lVar4 != 0) {
    lVar3 = *(longlong *)(lVar3 + 8);
    lVar5 = *(longlong *)(param_1 + 0x18);
    uVar6 = *(ulonglong *)(param_1 + 0x20);
    lVar9 = 0;
    do {
      uVar2 = *(uint *)(lVar3 + lVar9);
      uVar8 = (ulonglong)(uVar2 >> 6);
      if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar8,uVar6,&UNK_1433821a0);
      }
      bVar7 = (byte)uVar2 & 0x3f;
      LOCK();
      puVar1 = (ulonglong *)(lVar5 + uVar8 * 8);
      *puVar1 = *puVar1 & (-2L << bVar7 | 0xfffffffffffffffeU >> 0x40 - bVar7);
      UNLOCK();
      lVar9 = lVar9 + 4;
    } while (lVar4 << 2 != lVar9);
  }
  return;
}

