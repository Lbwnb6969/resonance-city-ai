// VA 0x141a760b0, PDB extent 118 bytes
// country_core::render::sparse_instance_buffer::SparseInstanceBuffer::show<country_core::geometry::instanced_wall::BrickTransformSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::sparse_instance_buffer::SparseInstanceBuffer::show<country_core::geometry::instanced_wall::BrickTransformSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
   Extent: 118 */

void pdb_141a760b0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar3 = *(longlong *)(param_2 + 8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143382358);
  }
  lVar4 = *(longlong *)(lVar3 + 0x10);
  if (lVar4 != 0) {
    lVar3 = *(longlong *)(lVar3 + 8);
    lVar5 = *(longlong *)(param_1 + 0x18);
    uVar6 = *(ulonglong *)(param_1 + 0x20);
    lVar8 = 0;
    do {
      uVar2 = *(uint *)(lVar3 + lVar8);
      uVar7 = (ulonglong)(uVar2 >> 6);
      if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar7,uVar6,&UNK_143382188);
      }
      LOCK();
      puVar1 = (ulonglong *)(lVar5 + uVar7 * 8);
      *puVar1 = *puVar1 | 1L << ((byte)uVar2 & 0x3f);
      UNLOCK();
      lVar8 = lVar8 + 4;
    } while (lVar4 << 2 != lVar8);
  }
  return;
}

