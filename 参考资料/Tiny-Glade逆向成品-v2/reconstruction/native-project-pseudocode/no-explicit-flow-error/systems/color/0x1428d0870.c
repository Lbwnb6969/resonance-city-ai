// VA 0x1428d0870, PDB extent 697 bytes
// system_color::radial_menu::RadialMenuRing::bounds
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/radial_menu/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::radial_menu::RadialMenuRing::bounds
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/radial_menu/mod.rs
   Extent: 697 */

undefined8 pdb_1428d0870(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  longlong lStack_f8;
  longlong lStack_f0;
  float *pfStack_e8;
  longlong lStack_e0;
  float *pfStack_d8;
  undefined8 uStack_d0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  longlong lStack_98;
  byte *pbStack_90;
  longlong lStack_88;
  byte *pbStack_80;
  float fStack_78;
  float afStack_74 [21];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  afStack_74[1] = -NAN;
  afStack_74[2] = -NAN;
  afStack_74[0] = *(float *)(param_2 + 100);
  lStack_f8 = *(longlong *)(param_2 + 8);
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  if (uVar3 == 0) {
    lVar8 = 0;
  }
  else {
    if (uVar3 < 4) {
      uVar5 = 0;
      lVar8 = 0;
    }
    else {
      uVar5 = uVar3 & 0xfffffffffffffffc;
      puVar7 = (undefined4 *)(lStack_f8 + 0x90);
      lVar8 = 0;
      lVar10 = 0;
      lVar11 = 0;
      lVar12 = 0;
      uVar9 = uVar5;
      do {
        uVar1 = puVar7[-0x14];
        uVar2 = *puVar7;
        auVar13[0] = -(*(char *)(puVar7 + -0x1e) == DAT_1435ae840);
        auVar13[1] = -((char)uVar1 == UNK_1435ae841);
        auVar13[2] = -((char)((uint)uVar1 >> 8) == UNK_1435ae842);
        auVar13[3] = -((char)((uint)uVar1 >> 0x10) == UNK_1435ae843);
        auVar13[4] = -(UNK_1435ae844 == '\0');
        auVar13[5] = -(UNK_1435ae845 == '\0');
        auVar13[6] = -(UNK_1435ae846 == '\0');
        auVar13[7] = -(UNK_1435ae847 == '\0');
        auVar13[8] = -(UNK_1435ae848 == '\0');
        auVar13[9] = -(UNK_1435ae849 == '\0');
        auVar13[10] = -(UNK_1435ae84a == '\0');
        auVar13[0xb] = -(UNK_1435ae84b == '\0');
        auVar13[0xc] = -(UNK_1435ae84c == '\0');
        auVar13[0xd] = -(UNK_1435ae84d == '\0');
        auVar13[0xe] = -(UNK_1435ae84e == '\0');
        auVar13[0xf] = -(UNK_1435ae84f == '\0');
        auVar22._8_4_ = 0xffffffff;
        auVar22._0_8_ = 0xffffffffffffffff;
        auVar22._12_4_ = 0xffffffff;
        auVar13 = auVar13 ^ auVar22;
        auVar21._0_14_ = auVar13._0_14_;
        auVar21[0xe] = auVar13[7];
        auVar21[0xf] = auVar13[7];
        auVar20._14_2_ = auVar21._14_2_;
        auVar20._0_13_ = auVar13._0_13_;
        auVar20[0xd] = auVar13[6];
        auVar19._13_3_ = auVar20._13_3_;
        auVar19._0_12_ = auVar13._0_12_;
        auVar19[0xc] = auVar13[6];
        auVar18._12_4_ = auVar19._12_4_;
        auVar18._0_11_ = auVar13._0_11_;
        auVar18[0xb] = auVar13[5];
        auVar17._11_5_ = auVar18._11_5_;
        auVar17._0_10_ = auVar13._0_10_;
        auVar17[10] = auVar13[5];
        auVar16._10_6_ = auVar17._10_6_;
        auVar16._0_9_ = auVar13._0_9_;
        auVar16[9] = auVar13[4];
        auVar15._9_7_ = auVar16._9_7_;
        auVar15._0_8_ = auVar13._0_8_;
        auVar15[8] = auVar13[4];
        auVar14._8_8_ = auVar15._8_8_;
        auVar14[7] = auVar13[3];
        auVar14[6] = auVar13[3];
        auVar14[5] = auVar13[2];
        auVar14[4] = auVar13[2];
        auVar14[3] = auVar13[1];
        auVar14[2] = auVar13[1];
        auVar14[0] = auVar13[0];
        auVar14[1] = auVar14[0];
        auVar22 = pshuflw(auVar14,auVar14,0xd4);
        auVar23._12_4_ = auVar22._12_4_;
        auVar23._0_8_ = auVar22._0_8_;
        auVar23._8_4_ = auVar22._4_4_;
        auVar23 = auVar23 & _DAT_143065930;
        lVar11 = lVar11 + auVar23._0_8_;
        lVar12 = lVar12 + auVar23._8_8_;
        auVar25[0] = -(*(char *)(puVar7 + -10) == DAT_1435ae840);
        auVar25[1] = -((char)uVar2 == UNK_1435ae841);
        auVar25[2] = -((char)((uint)uVar2 >> 8) == UNK_1435ae842);
        auVar25[3] = -((char)((uint)uVar2 >> 0x10) == UNK_1435ae843);
        auVar25[4] = -(UNK_1435ae844 == '\0');
        auVar25[5] = -(UNK_1435ae845 == '\0');
        auVar25[6] = -(UNK_1435ae846 == '\0');
        auVar25[7] = -(UNK_1435ae847 == '\0');
        auVar25[8] = -(UNK_1435ae848 == '\0');
        auVar25[9] = -(UNK_1435ae849 == '\0');
        auVar25[10] = -(UNK_1435ae84a == '\0');
        auVar25[0xb] = -(UNK_1435ae84b == '\0');
        auVar25[0xc] = -(UNK_1435ae84c == '\0');
        auVar25[0xd] = -(UNK_1435ae84d == '\0');
        auVar25[0xe] = -(UNK_1435ae84e == '\0');
        auVar25[0xf] = -(UNK_1435ae84f == '\0');
        auVar4._8_4_ = 0xffffffff;
        auVar4._0_8_ = 0xffffffffffffffff;
        auVar4._12_4_ = 0xffffffff;
        auVar25 = auVar25 ^ auVar4;
        auVar33._0_14_ = auVar25._0_14_;
        auVar33[0xe] = auVar25[7];
        auVar33[0xf] = auVar25[7];
        auVar32._14_2_ = auVar33._14_2_;
        auVar32._0_13_ = auVar25._0_13_;
        auVar32[0xd] = auVar25[6];
        auVar31._13_3_ = auVar32._13_3_;
        auVar31._0_12_ = auVar25._0_12_;
        auVar31[0xc] = auVar25[6];
        auVar30._12_4_ = auVar31._12_4_;
        auVar30._0_11_ = auVar25._0_11_;
        auVar30[0xb] = auVar25[5];
        auVar29._11_5_ = auVar30._11_5_;
        auVar29._0_10_ = auVar25._0_10_;
        auVar29[10] = auVar25[5];
        auVar28._10_6_ = auVar29._10_6_;
        auVar28._0_9_ = auVar25._0_9_;
        auVar28[9] = auVar25[4];
        auVar27._9_7_ = auVar28._9_7_;
        auVar27._0_8_ = auVar25._0_8_;
        auVar27[8] = auVar25[4];
        auVar26._8_8_ = auVar27._8_8_;
        auVar26[7] = auVar25[3];
        auVar26[6] = auVar25[3];
        auVar26[5] = auVar25[2];
        auVar26[4] = auVar25[2];
        auVar26[3] = auVar25[1];
        auVar26[2] = auVar25[1];
        auVar26[0] = auVar25[0];
        auVar26[1] = auVar26[0];
        auVar22 = pshuflw(auVar23,auVar26,0xd4);
        auVar24._12_4_ = auVar22._12_4_;
        auVar24._0_8_ = auVar22._0_8_;
        auVar24._8_4_ = auVar22._4_4_;
        lVar8 = lVar8 + SUB168(auVar24 & _DAT_143065930,0);
        lVar10 = lVar10 + SUB168(auVar24 & _DAT_143065930,8);
        puVar7 = puVar7 + 0x28;
        uVar9 = uVar9 - 4;
      } while (uVar9 != 0);
      lVar8 = lVar10 + lVar12 + lVar8 + lVar11;
      if (uVar3 == uVar5) goto LAB_1428d09d7;
    }
    lVar10 = uVar3 - uVar5;
    pcVar6 = (char *)(lStack_f8 + uVar5 * 0x28 + 0x18);
    do {
      lVar8 = lVar8 + (ulonglong)(*pcVar6 != '\x06');
      pcVar6 = pcVar6 + 0x28;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
LAB_1428d09d7:
  fStack_78 = ((((*(float *)(param_2 + 0x6c) + *(float *)(param_2 + 0x70)) *
                ((float)lVar8 + _DAT_142e36f34)) / afStack_74[0]) * _DAT_142e36f38 + _DAT_143033138
              + *(float *)(param_2 + 0x68)) * afStack_74[0];
  lStack_f0 = lStack_f8 + uVar3 * 0x28;
  pfStack_e8 = &fStack_78;
  pfStack_d8 = afStack_74;
  lStack_e0 = param_2;
  pdb_1420f3dc0(&lStack_98,&lStack_f8);
  pbStack_a0 = pbStack_90 + lStack_88 * 0x10;
  lStack_f8 = 0;
  uStack_d0 = 0;
  pbStack_80 = pbStack_90;
  pbStack_a8 = pbStack_90;
  pdb_142b3da00(param_1,&lStack_f8);
  if (lStack_98 != 0) {
    pub_1406abac0(pbStack_80,lStack_98 << 4,4);
  }
  return param_1;
}

