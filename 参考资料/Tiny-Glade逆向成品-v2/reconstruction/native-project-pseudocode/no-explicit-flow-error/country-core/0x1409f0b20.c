// VA 0x1409f0b20, PDB extent 2067 bytes
// country_core::systems::collision::world::RaycastMeshData::new_unindexed
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastMeshData::new_unindexed
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 2067 */

undefined8 *
pdb_1409f0b20(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  ulonglong uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulonglong *puStack_168;
  ulonglong uStack_160;
  byte *pbStack_158;
  ulonglong uStack_150;
  longlong lStack_148;
  undefined8 uStack_130;
  undefined8 uStack_120;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  longlong lStack_b0;
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  longlong *plStack_98;
  undefined8 uStack_90;
  ulonglong *puStack_88;
  ulonglong uStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  ulonglong uStack_68;
  byte *pbStack_60;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_160 = param_2[1];
  uVar1 = param_2[2];
  uStack_150 = param_3[1];
  lVar11 = param_3[2];
  uStack_49 = 1;
  uStack_4a = 1;
  uStack_4b = 1;
  pbStack_158 = (byte *)uVar1;
  lStack_148 = lVar11;
  puStack_c0 = param_2;
  puStack_b8 = param_3;
  lStack_b0 = uStack_150;
  uStack_a0 = uStack_160;
  plStack_98 = param_4;
  uVar5 = pdb_140bba960(&uStack_160);
  lVar2 = *plStack_98;
  if (!SBORROW8(0,lVar2)) {
    pbStack_158 = (byte *)plStack_98[1];
    uStack_150 = plStack_98[2];
    uStack_49 = 1;
    uStack_4a = 1;
    uStack_4b = 1;
    uStack_160 = uVar5;
    uVar5 = pdb_140bbad80(&uStack_160);
  }
  uVar12 = uVar1 * 0xc;
  uStack_80 = uVar12;
  if (uVar1 == 0) {
    pbStack_60 = (byte *)0x4;
  }
  else {
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(uVar12,4);
    if (pbVar6 == (byte *)0x0) {
      uStack_49 = 1;
      uStack_4a = 1;
      uStack_4b = 1;
      pdb_142dc7e2a(4,uVar12);
      goto LAB_1409f0f7b;
    }
    pbStack_60 = pbVar6;
    if (uVar1 == 1) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      lVar8 = 0;
      do {
        iVar4 = (int)lVar8;
        *(int *)(pbVar6 + lVar8 * 4) = iVar4;
        *(int *)(pbVar6 + lVar8 * 4 + 4) = iVar4 + 1;
        *(int *)(pbVar6 + lVar8 * 4 + 8) = iVar4 + 2;
        uVar12 = uVar12 + 2;
        *(int *)(pbVar6 + lVar8 * 4 + 0xc) = iVar4 + 3;
        *(int *)(pbVar6 + lVar8 * 4 + 0x10) = iVar4 + 4;
        *(int *)(pbVar6 + lVar8 * 4 + 0x14) = iVar4 + 5;
        lVar8 = lVar8 + 6;
      } while ((uVar1 & 0x3fffffffffffffe) != uVar12);
      if ((uVar1 & 1) == 0) goto LAB_1409f0cc3;
    }
    iVar4 = (int)uVar12;
    *(int *)(pbVar6 + uVar12 * 0xc) = iVar4 * 3;
    *(int *)(pbVar6 + uVar12 * 0xc + 4) = iVar4 * 3 + 1;
    *(int *)(pbVar6 + uVar12 * 0xc + 8) = iVar4 * 3 + 2;
  }
LAB_1409f0cc3:
  lVar8 = uStack_a0 + uVar1 * 0x24;
  uStack_160 = 0;
  uStack_120 = 0;
  uStack_e0 = uStack_a0;
  uStack_4c = 1;
  uStack_4d = 1;
  uStack_4e = 1;
  uStack_d8 = lVar8;
  uStack_68 = uVar1;
  pdb_1415f0ba0(&uStack_1a0,&uStack_160);
  uVar1 = uStack_68;
  uStack_178 = uStack_190;
  uStack_188 = uStack_1a0;
  uStack_184 = uStack_19c;
  uStack_180 = uStack_198;
  uStack_17c = uStack_194;
  if (uStack_68 == 0) {
    uStack_160 = 0;
    pbStack_158 = (byte *)0x4;
    uStack_150 = 0;
  }
  else {
    pdb_14007ee60();
    uVar12 = uStack_80;
    pbVar6 = pub_1406abab0(uStack_80,4);
    if (pbVar6 == (byte *)0x0) {
      uStack_4f = 1;
      pdb_142dc7e2a(4,uVar12);
LAB_1409f0f7b:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uStack_160 = uVar1;
    pbStack_158 = pbVar6;
    pub_142e32760(pbVar6,pbStack_60,uVar12);
    uStack_150 = uVar1;
  }
  uStack_4f = 0;
  puVar9 = &uStack_160;
  uStack_170 = pdb_141b3b1f0(&uStack_188);
  uStack_d0 = *puStack_c0;
  uStack_160 = 0;
  uStack_120 = 0;
  uStack_e0 = uStack_a0;
  uStack_d8 = uStack_a0;
  uStack_50 = 1;
  uStack_51 = 1;
  puVar10 = puVar9;
  puStack_168 = puVar9;
  lStack_c8 = lVar8;
  uStack_90 = uStack_170;
  uStack_a8 = pdb_140c6a130(&uStack_160);
  uStack_d0 = *puStack_b8;
  lStack_c8 = lStack_b0 + lVar11 * 0x24;
  uStack_160 = 0;
  uStack_120 = 0;
  uStack_e0 = lStack_b0;
  uStack_d8 = lStack_b0;
  uStack_52 = 1;
  lVar11 = lStack_b0;
  puStack_88 = puVar10;
  uStack_78 = pdb_140c6a240(&uStack_160);
  lStack_70 = lVar11;
  if (SBORROW8(0,lVar2)) {
    uVar7 = 0;
  }
  else {
    lStack_100 = plStack_98[1];
    lStack_e8 = lStack_100 + plStack_98[2] * 0x18;
    uStack_160 = 0;
    uStack_130 = 0;
    lStack_f8 = lStack_100;
    lStack_f0 = lVar2;
    uVar7 = pdb_140c6a510(&uStack_160);
  }
  *param_1 = uStack_a8;
  param_1[1] = puStack_88;
  param_1[2] = pbStack_60;
  param_1[3] = uStack_68;
  param_1[6] = uStack_78;
  param_1[7] = lStack_70;
  param_1[8] = uVar7;
  param_1[9] = lVar11;
  param_1[4] = uStack_90;
  param_1[5] = puVar9;
  uVar7 = _UNK_143033418;
  param_1[10] = _DAT_143033410;
  param_1[0xb] = uVar7;
  uVar7 = _UNK_143033428;
  param_1[0xc] = _DAT_143033420;
  param_1[0xd] = uVar7;
  param_1[0xe] = uVar5;
  return param_1;
}

