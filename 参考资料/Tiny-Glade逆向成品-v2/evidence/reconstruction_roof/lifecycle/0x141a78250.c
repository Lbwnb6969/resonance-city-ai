// Matched PDB: country_core::render::sparse_instance_buffer::impl$3::to_draw_multi_instanced<country_core::resources::roof_tile_ssbo::RoofTileSsbo>
// VA 0x141a78250, PDB extent 535 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Removing unreachable block (ram,0x000141a783a4) */
/* Matched PDB:
   country_core::render::sparse_instance_buffer::impl$3::to_draw_multi_instanced<country_core::resources::roof_tile_ssbo::RoofTileSsbo>
   Extent: 535 bytes. No whole-program auto-analysis. */

void pdb_141a78250(longlong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  uint uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar12 = *(ulonglong **)(param_2 + 0x18);
  puVar1 = puVar12 + *(longlong *)(param_2 + 0x20);
  lStack_70 = 0;
  lStack_68 = 4;
  lStack_60 = 0;
  lStack_58 = 0;
  iVar10 = 0;
  uVar8 = 0;
  uStack_4c = 0;
  while (puVar12 != puVar1) {
    iVar6 = iVar10 << 6;
    while( true ) {
      iVar10 = iVar10 + 1;
      uVar11 = *puVar12;
      puVar12 = puVar12 + 1;
      if (uVar11 != 0) break;
      iVar6 = iVar6 + 0x40;
      if (puVar12 == puVar1) goto LAB_141a783a9;
    }
    do {
      iVar9 = 0;
      for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
        iVar9 = iVar9 + 1;
      }
      uVar11 = uVar11 - 1 & uVar11;
      uVar5 = (ulonglong)(uint)(iVar9 + iVar6);
      if (uVar5 * 0x20 + 0x20 <= *(ulonglong *)(param_2 + 0x50)) {
        if (*(ulonglong *)(param_2 + 0x10) <= uVar5) {
          pdb_142dc81f2(uVar5,*(ulonglong *)(param_2 + 0x10),&UNK_143382248);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar7 = (iVar9 + iVar6) * 0x20;
        bVar2 = *(byte *)(*(longlong *)(param_2 + 8) + uVar5);
        uVar4 = uStack_4c;
        if ((uVar8 != uVar7) &&
           (iVar9 = uVar8 - uStack_4c, uVar4 = uVar7, uStack_4c <= uVar8 && iVar9 != 0)) {
          if (lStack_58 == lStack_70) {
            pdb_142d8d7f0(&lStack_70);
          }
          *(uint *)(lStack_68 + lStack_58 * 8) = uStack_4c;
          *(int *)(lStack_68 + 4 + lStack_58 * 8) = iVar9;
          lStack_60 = lStack_58 + 1;
          lStack_58 = lStack_60;
        }
        uStack_4c = uVar4;
        uVar8 = uVar7 + bVar2;
      }
    } while (uVar11 != 0);
  }
LAB_141a783a9:
  iVar10 = uVar8 - uStack_4c;
  if (uStack_4c <= uVar8 && iVar10 != 0) {
    if (lStack_58 == lStack_70) {
      pdb_142d8d7f0(&lStack_70);
    }
    *(uint *)(lStack_68 + lStack_58 * 8) = uStack_4c;
    *(int *)(lStack_68 + 4 + lStack_58 * 8) = iVar10;
    lStack_60 = lStack_58 + 1;
  }
  param_1[2] = lStack_60;
  *param_1 = lStack_70;
  param_1[1] = lStack_68;
  return;
}

