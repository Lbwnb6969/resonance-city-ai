// VA 0x141a75e80, PDB extent 423 bytes
// country_core::render::sparse_instance_buffer::SparseInstanceBuffer::allocation_to_draw_multi_instanced<country_core::geometry::instanced_wall::BrickTransformSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::sparse_instance_buffer::SparseInstanceBuffer::allocation_to_draw_multi_instanced<country_core::geometry::instanced_wall::BrickTransformSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
   Extent: 423 */

void pdb_141a75e80(longlong *param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar8 = *(longlong *)(param_3 + 8);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143382230);
  }
  puVar7 = *(uint **)(lVar8 + 8);
  puVar1 = puVar7 + *(longlong *)(lVar8 + 0x10);
  lStack_68 = 0;
  lStack_60 = 4;
  lStack_58 = 0;
  uStack_50 = 0;
  uVar5 = 0;
  lVar8 = 0;
  while( true ) {
    do {
      if (puVar7 == puVar1) {
        iVar6 = uVar5 - (uint)uStack_50;
        if ((uint)uStack_50 <= uVar5 && iVar6 != 0) {
          if (lVar8 == lStack_68) {
            pdb_142d8d7f0(&lStack_68);
          }
          *(int *)(lStack_60 + lVar8 * 8) = (int)uStack_50;
          *(int *)(lStack_60 + 4 + lVar8 * 8) = iVar6;
          lStack_58 = lVar8 + 1;
        }
        param_1[2] = lStack_58;
        *param_1 = lStack_68;
        param_1[1] = lStack_60;
        return;
      }
      uVar4 = *puVar7;
      uVar3 = (ulonglong)uVar4;
      puVar7 = puVar7 + 1;
    } while (*(ulonglong *)(param_2 + 0x50) < uVar3 * 0x20 + 0x20);
    if (*(ulonglong *)(param_2 + 0x10) <= uVar3) break;
    uVar4 = uVar4 * 0x20;
    bVar2 = *(byte *)(*(longlong *)(param_2 + 8) + uVar3);
    if (uVar5 != uVar4) {
      iVar6 = uVar5 - (uint)uStack_50;
      if ((uint)uStack_50 <= uVar5 && iVar6 != 0) {
        if (lVar8 == lStack_68) {
          pdb_142d8d7f0(&lStack_68);
        }
        *(int *)(lStack_60 + lVar8 * 8) = (int)uStack_50;
        *(int *)(lStack_60 + 4 + lVar8 * 8) = iVar6;
        lVar8 = lVar8 + 1;
        lStack_58 = lVar8;
      }
      uStack_50 = (ulonglong)uVar4;
    }
    uVar5 = uVar4 + bVar2;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar3,*(ulonglong *)(param_2 + 0x10),&UNK_143382248);
}

