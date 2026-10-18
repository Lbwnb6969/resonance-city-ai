// VA 0x14287fb90, PDB extent 1980 bytes
// system_tree::ui_place_tree::place_tree
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/ui_place_tree.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_tree::ui_place_tree::place_tree
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/ui_place_tree.rs
   Extent: 1980 */

void pdb_14287fb90(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulonglong uVar17;
  byte *arg0;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  byte *pbStack_1e8;
  byte *pbStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined8 uStack_1c4;
  undefined4 uStack_1bc;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  byte *pbStack_1b0;
  ulonglong *puStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  undefined4 *puStack_190;
  undefined4 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 *puStack_170;
  longlong lStack_168;
  longlong lStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  longlong *plStack_130;
  byte *pbStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  ulonglong uStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  byte *pbStack_e0;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  byte *pbStack_c8;
  longlong *plStack_c0;
  byte *pbStack_b8;
  ulonglong uStack_b0;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  puStack_1a8 = (ulonglong *)*param_2;
  lVar20 = param_2[1];
  uVar2 = *puStack_1a8;
  uVar21 = 0;
  uVar17 = uVar2 - *(ulonglong *)(lVar20 + 0x18);
  if (uVar2 < *(ulonglong *)(lVar20 + 0x18)) {
    uVar17 = uVar21;
  }
  uVar19 = uVar2 - *(ulonglong *)(lVar20 + 0x38);
  if (uVar2 < *(ulonglong *)(lVar20 + 0x38)) {
    uVar19 = uVar21;
  }
  lStack_e8 = uVar17 * 0x18 + *(longlong *)(lVar20 + 8);
  uVar2 = *(ulonglong *)(lVar20 + 0x10) - uVar17;
  if (*(ulonglong *)(lVar20 + 0x10) < uVar17) {
    lStack_e8 = 8;
    uVar2 = uVar21;
  }
  lStack_f0 = uVar19 * 0x18 + *(longlong *)(lVar20 + 0x28);
  uVar17 = *(ulonglong *)(lVar20 + 0x30) - uVar19;
  if (*(ulonglong *)(lVar20 + 0x30) < uVar19) {
    lStack_f0 = 8;
    uVar17 = uVar21;
  }
  *puStack_1a8 = (*(longlong *)(lVar20 + 0x40) - uVar17) - uVar2;
  fVar12 = _UNK_142e37954;
  fVar11 = _DAT_142e37950;
  fVar10 = _DAT_142e36f50;
  lVar20 = lStack_e8 + uVar2 * 0x18;
  lStack_1a0 = lStack_f0 + uVar17 * 0x18;
  uStack_cc = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_178 = *param_1;
  puStack_170 = (undefined4 *)param_1[2];
  pbStack_1b0 = (byte *)*param_5;
  uStack_d0 = *(undefined4 *)((longlong)param_4 + 0x1c);
  uStack_180 = *param_4;
  puStack_188 = (undefined4 *)param_4[2];
  uStack_d4 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lStack_198 = *param_3;
  puStack_190 = (undefined4 *)param_3[2];
  fVar25 = (float)_DAT_1435aa2a0;
  uVar2 = (ulonglong)_DAT_1435aa2a0 >> 0x20;
  lStack_160 = lStack_198 + 0x20;
  if (lStack_e8 == 0) goto LAB_14287fd10;
LAB_14287fcef:
  if (lStack_e8 == lVar20) goto LAB_14287fd10;
  lVar18 = lStack_e8;
  lStack_e8 = lStack_e8 + 0x18;
  do {
    *puStack_1a8 = *puStack_1a8 + 1;
    *puStack_170 = uStack_cc;
    uStack_f8 = pdb_140a2fb30(uStack_178);
    uStack_b0 = uStack_f8;
    fVar23 = (float)pdb_140e02880(&uStack_b0);
    pbVar16 = pbStack_b8;
    uVar17 = uStack_b0 + 0xa0761d6478bd642f;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar17 ^ 0xe7037ed1a0b428db;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar17;
    uVar21 = SUB168(auVar5 * auVar7,8) ^ SUB168(auVar5 * auVar7,0);
    if ((uint)((int)uVar21 * 10) < 6) {
      uStack_b0 = uStack_b0 + 0x40ec3ac8f17ac85e;
      do {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uStack_b0 ^ 0xe7037ed1a0b428db;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uStack_b0;
        uVar17 = uVar17 + 0xa0761d6478bd642f;
        uVar21 = SUB168(auVar6 * auVar8,8) ^ SUB168(auVar6 * auVar8,0);
        uStack_b0 = uStack_b0 + 0xa0761d6478bd642f;
      } while ((uint)((int)uVar21 * 10) < 6);
    }
    uStack_b0 = uVar17;
    uStack_150 = *(undefined4 *)(lVar18 + 0x10);
    uStack_158 = *(undefined8 *)(lVar18 + 8);
    fVar24 = (float)pdb_140e02880(&uStack_b0);
    arg0 = pbStack_1b0;
    plStack_130 = (longlong *)pdb_142880b10(uStack_f8);
    pbStack_128 = arg0;
    uVar14 = pdb_1418bded0(&plStack_130);
    if ((longlong)arg0 < 0) {
      uVar22 = 0;
LAB_1428800ba:
      pdb_142dc7e2a(uVar22,pbVar16);
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    lStack_168 = lVar20;
    if (arg0 == (byte *)0x0) {
      pbVar15 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar22 = 1;
      pbVar15 = pub_1406abab0((ulonglong)arg0,1);
      pbVar16 = arg0;
      if (pbVar15 == (byte *)0x0) goto LAB_1428800ba;
      pub_142e32760(pbVar15,uVar14,arg0);
    }
    lVar20 = lStack_168;
    lVar18 = lStack_198;
    uStack_1c8 = uStack_150;
    uStack_1d0 = uStack_158;
    uStack_1c4 = CONCAT44(fVar24 * (float)uVar2 + (fVar12 - fVar24) * 0.0,
                          fVar23 * fVar25 + (fVar11 - fVar23) * fVar10);
    uStack_1bc = (undefined4)((uVar21 & 0xffffffff) * 10 >> 0x20);
    uStack_1b8 = 1;
    LOCK();
    *plStack_130 = *plStack_130 + -1;
    UNLOCK();
    pbStack_1e8 = arg0;
    pbStack_1e0 = pbVar15;
    uStack_1d8 = arg0;
    pbStack_c8 = arg0;
    pbStack_b8 = pbVar15;
    if (*plStack_130 == 0) {
      uStack_a1 = 1;
      pdb_1406ed6a0(&plStack_130);
    }
    uVar13 = uStack_1bc;
    uVar14 = uStack_1c4;
    uStack_110 = uStack_1c8;
    uStack_118 = uStack_1d0;
    uStack_a1 = 1;
    pdb_140f60be0(&plStack_130,&pbStack_1e8);
    uStack_10c = uVar14;
    uVar22 = uStack_10c;
    uStack_104 = uVar13;
    uStack_100 = uStack_1b8;
    plStack_c0 = plStack_130;
    pbStack_e0 = pbStack_128;
    uStack_10c._0_4_ = (undefined4)uVar14;
    uStack_10c._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
    uStack_158._0_4_ = uStack_120;
    uStack_158._4_4_ = uStack_11c;
    uStack_150 = (undefined4)uStack_118;
    uStack_14c = uStack_118._4_4_;
    uStack_148 = uStack_110;
    uStack_144 = (undefined4)uStack_10c;
    uStack_140 = uStack_10c._4_4_;
    uStack_13c = uVar13;
    uStack_138 = CONCAT71(uStack_ff,uStack_1b8);
    *puStack_190 = uStack_d4;
    lVar3 = *(longlong *)(lVar18 + 0x30);
    uVar14 = *(undefined8 *)(lVar18 + 0x40);
    uStack_10c = uVar22;
    if (lVar3 == *(longlong *)(lVar18 + 0x20)) {
      pdb_142d7eec0(lStack_160);
    }
    uVar17 = uStack_f8;
    lVar4 = *(longlong *)(lVar18 + 0x28);
    *(longlong **)(lVar4 + lVar3 * 0x48) = plStack_c0;
    *(byte **)(lVar4 + 8 + lVar3 * 0x48) = pbStack_e0;
    puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar3 * 0x48);
    *puVar1 = (undefined4)uStack_158;
    puVar1[1] = uStack_158._4_4_;
    puVar1[2] = uStack_150;
    puVar1[3] = uStack_14c;
    puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar3 * 0x48);
    *puVar1 = uStack_148;
    puVar1[1] = uStack_144;
    puVar1[2] = uStack_140;
    puVar1[3] = uStack_13c;
    *(undefined8 *)(lVar4 + 0x30 + lVar3 * 0x48) = uStack_138;
    *(ulonglong *)(lVar4 + 0x38 + lVar3 * 0x48) = uStack_f8;
    *(undefined8 *)(lVar4 + 0x40 + lVar3 * 0x48) = uVar14;
    *(longlong *)(lVar18 + 0x30) = lVar3 + 1;
    *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
    *puStack_188 = uStack_d0;
    pdb_14007ee60();
    pbVar16 = pub_1406abab0(0x58,8);
    if (pbVar16 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x58);
    }
    pbVar16[0] = 1;
    pbVar16[1] = 0;
    pbVar16[2] = 0;
    pbVar16[3] = 0;
    pbVar16[4] = 0;
    pbVar16[5] = 0;
    pbVar16[6] = 0;
    pbVar16[7] = 0;
    pbVar16[8] = 1;
    pbVar16[9] = 0;
    pbVar16[10] = 0;
    pbVar16[0xb] = 0;
    pbVar16[0xc] = 0;
    pbVar16[0xd] = 0;
    pbVar16[0xe] = 0;
    pbVar16[0xf] = 0;
    pbVar16[0x10] = 0;
    pbVar16[0x11] = 0;
    pbVar16[0x12] = 0;
    pbVar16[0x13] = 0;
    *(ulonglong *)(pbVar16 + 0x18) = uVar17;
    *(byte **)(pbVar16 + 0x20) = pbStack_c8;
    *(byte **)(pbVar16 + 0x28) = pbStack_b8;
    *(undefined4 *)(pbVar16 + 0x30) = (undefined4)uStack_1d8;
    *(undefined4 *)(pbVar16 + 0x34) = uStack_1d8._4_4_;
    *(undefined4 *)(pbVar16 + 0x38) = (undefined4)uStack_1d0;
    *(undefined4 *)(pbVar16 + 0x3c) = uStack_1d0._4_4_;
    *(undefined4 *)(pbVar16 + 0x40) = uStack_1c8;
    *(undefined4 *)(pbVar16 + 0x44) = (undefined4)uStack_1c4;
    *(undefined4 *)(pbVar16 + 0x48) = uStack_1c4._4_4_;
    *(undefined4 *)(pbVar16 + 0x4c) = uStack_1bc;
    *(ulonglong *)(pbVar16 + 0x50) = CONCAT71(uStack_1b7,uStack_1b8);
    plStack_130 = (longlong *)0xc;
    uStack_a1 = 0;
    pbStack_128 = pbVar16;
    pdb_140ae5180(uStack_180,&plStack_130,&UNK_1435aa300);
    if (lStack_e8 != 0) goto LAB_14287fcef;
LAB_14287fd10:
    if ((lStack_f0 == 0) || (lStack_f0 == lStack_1a0)) {
      return;
    }
    lStack_e8 = 0;
    lVar18 = lStack_f0;
    lStack_f0 = lStack_f0 + 0x18;
  } while( true );
}

