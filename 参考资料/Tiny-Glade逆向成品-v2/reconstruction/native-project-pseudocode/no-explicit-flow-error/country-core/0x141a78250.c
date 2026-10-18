// VA 0x141a78250, PDB extent 535 bytes
// country_core::render::sparse_instance_buffer::impl$3::to_draw_multi_instanced<country_core::resources::roof_tile_ssbo::RoofTileSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000141a783a4) */
/* Matched PDB project procedure:
   country_core::render::sparse_instance_buffer::impl$3::to_draw_multi_instanced<country_core::resources::roof_tile_ssbo::RoofTileSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
   Extent: 535 */

void pdb_141a78250(longlong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  uint uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar11 = *(ulonglong **)(param_2 + 0x18);
  puVar1 = puVar11 + *(longlong *)(param_2 + 0x20);
  lStack_70 = 0;
  lStack_68 = 4;
  lStack_60 = 0;
  lStack_58 = 0;
  iVar9 = 0;
  uVar7 = 0;
  uStack_4c = 0;
  while (puVar11 != puVar1) {
    iVar5 = iVar9 << 6;
    while( true ) {
      iVar9 = iVar9 + 1;
      uVar10 = *puVar11;
      puVar11 = puVar11 + 1;
      if (uVar10 != 0) break;
      iVar5 = iVar5 + 0x40;
      if (puVar11 == puVar1) goto LAB_141a783a9;
    }
    do {
      iVar8 = 0;
      for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
        iVar8 = iVar8 + 1;
      }
      uVar10 = uVar10 - 1 & uVar10;
      uVar4 = (ulonglong)(uint)(iVar8 + iVar5);
      if (uVar4 * 0x20 + 0x20 <= *(ulonglong *)(param_2 + 0x50)) {
        if (*(ulonglong *)(param_2 + 0x10) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar4,*(ulonglong *)(param_2 + 0x10),&UNK_143382248);
        }
        uVar6 = (iVar8 + iVar5) * 0x20;
        bVar2 = *(byte *)(*(longlong *)(param_2 + 8) + uVar4);
        uVar3 = uStack_4c;
        if ((uVar7 != uVar6) &&
           (iVar8 = uVar7 - uStack_4c, uVar3 = uVar6, uStack_4c <= uVar7 && iVar8 != 0)) {
          if (lStack_58 == lStack_70) {
            pdb_142d8d7f0(&lStack_70);
          }
          *(uint *)(lStack_68 + lStack_58 * 8) = uStack_4c;
          *(int *)(lStack_68 + 4 + lStack_58 * 8) = iVar8;
          lStack_60 = lStack_58 + 1;
          lStack_58 = lStack_60;
        }
        uStack_4c = uVar3;
        uVar7 = uVar6 + bVar2;
      }
    } while (uVar10 != 0);
  }
LAB_141a783a9:
  iVar9 = uVar7 - uStack_4c;
  if (uStack_4c <= uVar7 && iVar9 != 0) {
    if (lStack_58 == lStack_70) {
      pdb_142d8d7f0(&lStack_70);
    }
    *(uint *)(lStack_68 + lStack_58 * 8) = uStack_4c;
    *(int *)(lStack_68 + 4 + lStack_58 * 8) = iVar9;
    lStack_60 = lStack_58 + 1;
  }
  param_1[2] = lStack_60;
  *param_1 = lStack_70;
  param_1[1] = lStack_68;
  return;
}

