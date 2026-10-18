// VA 0x1414c6700, PDB extent 2919 bytes
// system_decorator::ui_systems::handle_splitting_wall_decorators::display_decorator_wall_parts_and_get_hovered_part_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/handle_splitting_wall_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::ui_systems::handle_splitting_wall_decorators::display_decorator_wall_parts_and_get_hovered_part_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/handle_splitting_wall_decorators.rs
   Extent: 2919 */

ulonglong pdb_1414c6700(float *param_1,longlong param_2,longlong *param_3,float *param_4,
                       undefined8 *param_5,undefined4 param_6,undefined8 param_7)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  code *pcVar12;
  undefined4 *puVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  longlong lVar16;
  byte *pbVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar24;
  undefined1 auVar23 [16];
  float fVar25;
  float fVar26;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar27 [16];
  float fVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  ulonglong uStack_1c8;
  byte *pbStack_1c0;
  undefined8 uStack_1b8;
  ulonglong uStack_1b0;
  undefined8 uStack_1a8;
  longlong lStack_1a0;
  ulonglong uStack_198;
  code *pcStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined4 *puStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_158;
  float fStack_150;
  code *pcStack_140;
  undefined8 uStack_138;
  float fStack_130;
  float fStack_12c;
  undefined4 uStack_120;
  float fStack_11c;
  ulonglong *puStack_118;
  code *pcStack_110;
  undefined4 *puStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  
  fVar11 = _DAT_142e36f38;
  uStack_f0 = 0xfffffffffffffffe;
  uStack_120 = param_6;
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  fVar20 = fVar5 * fVar5;
  fVar21 = fVar6 * fVar6;
  fVar31 = fVar2 * fVar2 + fVar1 * fVar1;
  fVar22 = _UNK_142e378f8 * fVar5 + _UNK_142e378f4 * fVar2 + _DAT_142e378f0 * fVar1;
  fVar22 = fVar22 + fVar22;
  fVar30 = fVar6 + fVar6;
  fVar25 = fVar30 * (fVar2 * _DAT_142e36f28 - fVar5 * 0.0) +
           fVar22 * fVar1 + (fVar21 - (fVar31 + fVar20)) * _DAT_142e378f0;
  fVar28 = fVar30 * (fVar5 * 0.0 - fVar1 * _DAT_142e36f28) +
           fVar22 * fVar2 + (fVar21 - (fVar31 + fVar20)) * _UNK_142e378f4;
  fVar29 = fVar30 * (fVar1 * 0.0 - fVar2 * 0.0) +
           fVar22 * fVar5 + (fVar21 - (fVar31 + fVar20)) * _UNK_142e378f8;
  fStack_130 = fVar30 * (fVar6 * 0.0 - fVar6 * 0.0) +
               fVar22 * fVar6 + (fVar21 - (fVar31 + fVar20)) * _UNK_142e378fc;
  fVar1 = *(float *)(param_2 + 0x18);
  fStack_150 = param_1[6];
  puStack_158 = *(undefined8 **)(param_1 + 4);
  fVar21 = (float)*(undefined8 *)(param_2 + 0x1c);
  fVar22 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x1c) >> 0x20);
  fVar30 = fVar29 * (fVar22 - fStack_150) +
           (fVar1 - SUB84(puStack_158,0)) * fVar25 +
           fVar28 * (fVar21 - (float)((ulonglong)puStack_158 >> 0x20));
  uStack_138 = (byte *)CONCAT44(fVar28,fVar28 * fVar30);
  fVar5 = *param_4;
  fVar6 = param_4[1];
  fVar20 = param_4[3];
  fVar2 = param_4[2];
  fVar42 = fVar6 + fVar6;
  fVar43 = fVar5 * (fVar5 + fVar5);
  fVar45 = fVar2 + fVar2;
  fVar31 = _UNK_142e378e4 - (fVar43 + fVar2 * fVar45);
  fVar33 = _DAT_142e36f28 - (fVar2 * fVar45 + fVar6 * fVar42);
  fVar41 = (fVar5 + fVar5) * fVar20;
  bVar3 = *(byte *)((longlong)param_3 + 0x59);
  uVar19 = (ulonglong)bVar3;
  fVar39 = (float)*(undefined8 *)(param_4 + 8);
  fVar40 = (float)((ulonglong)*(undefined8 *)(param_4 + 8) >> 0x20);
  fVar43 = _UNK_142e378e4 - (fVar43 + fVar6 * fVar42);
  fVar2 = param_4[7];
  lStack_1a0 = *param_3;
  uVar18 = uVar19 - 1;
  if ((longlong)uVar18 < 0) {
    fVar44 = (float)uVar18;
  }
  else {
    fVar44 = (float)(int)uVar18;
  }
  fVar7 = param_4[4];
  fVar8 = param_4[5];
  fVar9 = param_4[6];
  fVar46 = _DAT_142e36f28 - _DAT_142e36f28 / (float)bVar3;
  uVar32 = (uint)(lStack_1a0 == 2);
  auVar23._0_4_ = (int)(uVar32 << 0x1f) >> 0x1f;
  auVar23._4_4_ = (int)(uVar32 << 0x1f) >> 0x1f;
  auVar23._8_4_ = (int)(uVar32 << 0x1f) >> 0x1f;
  auVar23._12_4_ = (int)(uVar32 << 0x1f) >> 0x1f;
  auVar10._4_4_ = _UNK_142e378e4;
  auVar10._0_4_ = _DAT_142e378e0;
  auVar10._8_8_ = _UNK_142e378e8;
  auVar27 = ~auVar23 & ZEXT416((uint)_DAT_142e36f28) | auVar23 & auVar10;
  fVar26 = auVar27._0_4_;
  uVar32 = -(uint)(_DAT_142e36f28 == fVar26 && SUB164(auVar23 & auVar10,4) == 0.0);
  uStack_1a8 = *param_5;
  uVar4 = param_5[1];
  fStack_11c = _DAT_142e3a74c;
  uVar18 = 0;
  uStack_198 = 0;
  fStack_12c = fStack_130;
  do {
    if (uVar19 <= uVar18) {
      puStack_118 = (ulonglong *)&puStack_158;
      pcStack_110 = pdb_140f33df0;
      puStack_108 = &param_6;
      pcStack_100 = pdb_140905500;
      pdb_140f60760(&uStack_1c8,&UNK_143312fa0,&puStack_118);
      pcStack_110 = (code *)CONCAT44(pcStack_110._4_4_,fStack_150);
      puStack_118 = puStack_158;
      pdb_14007ee60();
      pbVar17 = pub_1406abab0(0x20,8);
      uStack_138 = pbStack_1c0;
      if (pbVar17 != (byte *)0x0) {
        pbVar17[0] = 1;
        pbVar17[1] = 0;
        pbVar17[2] = 0;
        pbVar17[3] = 0;
        pbVar17[4] = 0;
        pbVar17[5] = 0;
        pbVar17[6] = 0;
        pbVar17[7] = 0;
        pbVar17[8] = 1;
        pbVar17[9] = 0;
        pbVar17[10] = 0;
        pbVar17[0xb] = 0;
        pbVar17[0xc] = 0;
        pbVar17[0xd] = 0;
        pbVar17[0xe] = 0;
        pbVar17[0xf] = 0;
        *(ulonglong **)(pbVar17 + 0x10) = puStack_118;
        *(undefined4 *)(pbVar17 + 0x18) = pcStack_110._0_4_;
        pdb_1409baea0(&puStack_118,pbStack_1c0,uStack_1b8,pbVar17,&UNK_143312fb8);
        uStack_168 = uStack_f8;
        puStack_178 = puStack_108;
        pcStack_170 = pcStack_100;
        uStack_188 = puStack_118;
        pcStack_180 = pcStack_110;
        pdb_140b133a0(param_7,&uStack_188);
        if (uStack_1c8 != 0) {
          pub_1406abac0(uStack_138,uStack_1c8,1);
        }
        return uStack_198;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x20);
    }
    uStack_1b0 = uVar18;
    if ((uVar32 & 1) == 0) {
      if ((int)lStack_1a0 != 2) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143312fe8,0x28,&UNK_143313010);
      }
      uVar14 = pdb_140901b40(uStack_120,uStack_1a8);
      uVar15 = pdb_140c44ba0(bVar3);
      uStack_188._0_2_ = CONCAT11(uVar14,uVar15);
      lVar16 = pdb_141494370(uVar4,&uStack_188);
      if (lVar16 == 0) goto LAB_1414c6fa0;
      fVar34 = *(float *)(lVar16 + 0x3c) - *(float *)(lVar16 + 0x38);
    }
    else {
      uVar14 = pdb_140901b40(uStack_120,uStack_1a8);
      uVar15 = pdb_140c44ba0(uVar19);
      uStack_188._0_2_ = CONCAT11(uVar14,uVar15);
      lVar16 = pdb_141494370(uVar4,&uStack_188);
      if (lVar16 == 0) {
LAB_1414c6fa0:
        pcStack_110 = pdb_1414942d0;
        puStack_118 = &uStack_188;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14330e2c6,&puStack_118,&UNK_14330e2f8);
      }
      fVar34 = *(float *)(lVar16 + 0x30);
    }
    fVar34 = ((float)(longlong)uVar18 / fVar44 + fVar11) * fVar34 * fVar46;
    fVar35 = fVar34 * fVar26;
    fVar37 = fVar34 * auVar27._4_4_;
    fVar34 = fVar34 * 0.0;
    fVar36 = fVar34 * fVar40 * (fVar5 * fVar45 + fVar42 * fVar20) +
             fVar37 * fVar39 * (fVar5 * fVar42 - fVar45 * fVar20) + fVar35 * fVar2 * fVar33 + fVar7;
    fVar38 = fVar34 * fVar40 * (fVar6 * fVar45 - fVar41) +
             fVar37 * fVar39 * fVar31 + fVar35 * fVar2 * (fVar5 * fVar42 + fVar45 * fVar20) + fVar8;
    fVar34 = fVar34 * fVar40 * fVar43 +
             fVar37 * fVar39 * (fVar6 * fVar45 + fVar41) +
             fVar35 * fVar2 * (fVar5 * fVar45 - fVar42 * fVar20) + fVar9;
    if ((bVar3 == 3) && (uVar18 == 1)) {
      puStack_118 = &uStack_1b0;
      pcStack_110 = pdb_140f72a40;
      puStack_108 = &param_6;
      pcStack_100 = pdb_140905500;
      pdb_140f60760(&uStack_188,&UNK_143312fa0,&puStack_118);
      puVar13 = puStack_178;
      pcVar12 = pcStack_180;
      uStack_138 = (byte *)uStack_188;
      pdb_14007ee60();
      pbVar17 = pub_1406abab0(0x20,8);
      pcStack_140 = pcVar12;
      if (pbVar17 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x20);
      }
      pbVar17[0] = 1;
      pbVar17[1] = 0;
      pbVar17[2] = 0;
      pbVar17[3] = 0;
      pbVar17[4] = 0;
      pbVar17[5] = 0;
      pbVar17[6] = 0;
      pbVar17[7] = 0;
      pbVar17[8] = 1;
      pbVar17[9] = 0;
      pbVar17[10] = 0;
      pbVar17[0xb] = 0;
      pbVar17[0xc] = 0;
      pbVar17[0xd] = 0;
      pbVar17[0xe] = 0;
      pbVar17[0xf] = 0;
      *(ulonglong *)(pbVar17 + 0x10) = CONCAT44(fVar38,fVar36);
      *(float *)(pbVar17 + 0x18) = fVar34;
      pdb_1409baea0(&puStack_118,pcVar12,puVar13,pbVar17,&UNK_143313028);
      uStack_168 = uStack_f8;
      puStack_178 = puStack_108;
      pcStack_170 = pcStack_100;
      uStack_188 = puStack_118;
      pcStack_180 = pcStack_110;
      pdb_140b133a0(param_7,&uStack_188);
      uVar18 = 2;
      if (uStack_138 != (byte *)0x0) {
        pub_1406abac0((byte *)pcStack_140,(ulonglong)uStack_138,1);
      }
    }
    else {
      pcStack_140 = (code *)CONCAT44(pcStack_140._4_4_,uVar32);
      fVar35 = fVar38 - (fVar21 - fVar28 * fVar30);
      fVar37 = fVar34 - (fVar22 - fVar30 * fVar29);
      fVar24 = fVar36 - (fVar1 - fVar30 * fVar25);
      fVar35 = SQRT(fVar24 * fVar24 + fVar35 * fVar35 + fVar37 * fVar37);
      if (fVar35 < fStack_11c) {
        puStack_158 = (undefined8 *)CONCAT44(fVar38,fVar36);
        uStack_198 = uVar18;
        fStack_150 = fVar34;
        fStack_11c = fVar35;
      }
      puStack_118 = &uStack_1b0;
      pcStack_110 = pdb_140f72a40;
      puStack_108 = &param_6;
      pcStack_100 = pdb_140905500;
      pdb_140f60760(&uStack_188,&UNK_143312fa0,&puStack_118);
      puVar13 = puStack_178;
      pcVar12 = pcStack_180;
      uStack_138 = (byte *)uStack_188;
      pdb_14007ee60();
      pbVar17 = pub_1406abab0(0x20,8);
      pcStack_190 = pcVar12;
      if (pbVar17 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x20);
      }
      pbVar17[0] = 1;
      pbVar17[1] = 0;
      pbVar17[2] = 0;
      pbVar17[3] = 0;
      pbVar17[4] = 0;
      pbVar17[5] = 0;
      pbVar17[6] = 0;
      pbVar17[7] = 0;
      pbVar17[8] = 1;
      pbVar17[9] = 0;
      pbVar17[10] = 0;
      pbVar17[0xb] = 0;
      pbVar17[0xc] = 0;
      pbVar17[0xd] = 0;
      pbVar17[0xe] = 0;
      pbVar17[0xf] = 0;
      *(ulonglong *)(pbVar17 + 0x10) = CONCAT44(fVar38,fVar36);
      *(float *)(pbVar17 + 0x18) = fVar34;
      pdb_1409baea0(&puStack_118,pcVar12,puVar13,pbVar17,&UNK_143313058);
      uStack_168 = uStack_f8;
      puStack_178 = puStack_108;
      pcStack_170 = pcStack_100;
      uStack_188 = puStack_118;
      pcStack_180 = pcStack_110;
      pdb_140b133a0(param_7,&uStack_188);
      uVar18 = uVar18 + 1;
      uVar32 = (uint)pcStack_140;
      if (uStack_138 != (byte *)0x0) {
        pub_1406abac0((byte *)pcStack_190,(ulonglong)uStack_138,1);
      }
    }
  } while( true );
}

