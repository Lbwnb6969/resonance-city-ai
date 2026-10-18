// VA 0x14084d5b0, PDB extent 2485 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_rope_bridge::distort_rope_curve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_rope_bridge.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_rope_bridge::distort_rope_curve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_rope_bridge.rs
   Extent: 2485 */

void pdb_14084d5b0(undefined8 param_1,float *param_2,ulonglong param_3,longlong param_4,
                  ulonglong param_5,undefined8 param_6,undefined8 param_7,ulonglong param_8,
                  undefined1 param_9,undefined8 param_10)

{
  ulonglong uVar1;
  float fVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  float fVar5;
  longlong lVar6;
  byte *pbVar7;
  float *pfVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  longlong lStack_1c0;
  ulonglong uStack_1b8;
  float *pfStack_1b0;
  float *pfStack_1a8;
  ulonglong uStack_1a0;
  ulonglong *puStack_198;
  undefined8 uStack_190;
  ulonglong *puStack_188;
  undefined8 *puStack_180;
  float *pfStack_178;
  ulonglong *puStack_170;
  float *pfStack_168;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  undefined8 uStack_130;
  ulonglong uStack_128;
  float *pfStack_120;
  ulonglong uStack_118;
  float fStack_110;
  float fStack_10c;
  longlong lStack_108;
  float fStack_fc;
  ulonglong uStack_f8;
  byte *pbStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  byte *pbStack_d8;
  ulonglong uStack_d0;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  undefined8 extraout_XMM0_Qb_00;
  
  uVar11 = param_8;
  uStack_c0 = 0xfffffffffffffffe;
  uStack_c1 = param_9;
  uStack_130 = param_1;
  lStack_108 = param_4;
  if (param_3 == 0) {
    uStack_e0 = 0;
    pbStack_d8 = (byte *)0x4;
    uStack_d0 = 0;
    pbVar7 = (byte *)0x4;
LAB_14084d6bf:
    uStack_138 = uVar11;
    uStack_e8 = 0;
    uStack_f8 = param_3;
    pbStack_f0 = pbVar7;
    if (param_5 == 0) {
      pfVar8 = (float *)0x4;
      uVar11 = 0;
LAB_14084d84c:
      fStack_fc = 0.0;
      uStack_128 = param_5;
      pfStack_120 = pfVar8;
      uStack_118 = param_5;
      if (uVar11 == param_3) {
        pdb_142d89720();
      }
      uVar9 = uStack_e8;
      pbVar7 = pbStack_d8 + uVar11 * 4;
      pbVar7[0] = 0;
      pbVar7[1] = 0;
      pbVar7[2] = 0;
      pbVar7[3] = 0;
      uStack_d0 = uVar11 + 1;
      if (uStack_e8 == uStack_f8) {
        pdb_142d89720();
      }
      pbVar7 = pbStack_f0 + uVar9 * 4;
      pbVar7[0] = 0;
      fVar16 = _DAT_14300a33c;
      fVar5 = _DAT_142f57bcc;
      fVar25 = _DAT_142e36f50;
      fVar18 = _DAT_142e36f28;
      pbVar7[1] = 0;
      pbVar7[2] = 0;
      pbVar7[3] = 0;
      fVar26 = 0.0;
      fVar27 = 0.0;
      uVar11 = 0;
      while( true ) {
        uVar10 = uStack_d0;
        uStack_e8 = uVar9 + 1;
        if (param_3 - 1 <= uVar11) {
          if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(0,0,&UNK_14300c450);
          }
          fVar18 = *pfVar8;
          fVar25 = (float)uStack_138;
          fVar18 = (float)pdb_1414a2190(param_10,*param_2 / fVar18 + _DAT_14300c248 * fVar25,
                                        param_2[1] / fVar18 + _DAT_14300c24c * fVar25,
                                        param_2[2] / fVar18 - fVar25 * _DAT_14300c280);
          fVar18 = fVar18 * _DAT_142f94714;
          fStack_10c = fVar18;
          if (param_2 + param_3 * 3 != (float *)0xc) {
            if (pfVar8 + param_5 != (float *)0x4) {
              auVar19._0_8_ = pdb_1414a2190(param_10);
              auVar19._8_8_ = extraout_XMM0_Qb_00;
              auVar20._4_12_ = auVar19._4_12_;
              auVar20._0_4_ = ((float)auVar19._0_8_ * _DAT_142f94714 - fVar18) + _DAT_142f94714;
              fVar18 = (float)pub_142e32a70(auVar20._0_8_);
              fVar25 = (float)(~-(uint)(fVar18 < 0.0) & (uint)fVar18 |
                              (uint)(fVar18 + fVar5) & -(uint)(fVar18 < 0.0)) + _DAT_142f95164;
              fVar18 = (float)pub_142e32b00((fVar26 - fVar25) / fVar5);
              fStack_110 = (fVar18 * fVar5 + fVar25) - fVar26;
              lStack_1c0 = lStack_108;
              pfStack_1b0 = &fStack_fc;
              puStack_198 = &uStack_e0;
              uStack_190 = param_10;
              puStack_188 = &uStack_128;
              puStack_180 = &param_8;
              pfStack_178 = &fStack_10c;
              puStack_170 = &uStack_f8;
              pfStack_168 = &fStack_110;
              puStack_160 = &uStack_c1;
              uStack_158 = param_6;
              uStack_150 = param_7;
              uStack_148 = 0;
              uStack_1b8 = param_5;
              pfStack_1a8 = param_2;
              uStack_1a0 = param_3;
              uStack_140 = param_3;
              pdb_141499ea0(uStack_130,&lStack_1c0);
              if (uStack_128 != 0) {
                pub_1406abac0((byte *)pfStack_120,uStack_128 << 2,4);
              }
              if (uStack_f8 != 0) {
                pub_1406abac0(pbStack_f0,uStack_f8 << 2,4);
              }
              if (uStack_e0 != 0) {
                pub_1406abac0(pbStack_d8,uStack_e0 << 2,4);
              }
              return;
            }
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_14300c480);
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14300c468);
        }
        if (param_3 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar11,param_3,&UNK_14300c498);
        }
        uVar1 = uVar11 + 1;
        if (param_3 <= uVar1) break;
        fVar17 = (param_2[uVar11 * 3 + 2] - param_2[uVar1 * 3 + 2]) *
                 (param_2[uVar11 * 3 + 2] - param_2[uVar1 * 3 + 2]) +
                 (param_2[uVar11 * 3 + 1] - param_2[uVar1 * 3 + 1]) *
                 (param_2[uVar11 * 3 + 1] - param_2[uVar1 * 3 + 1]) +
                 (param_2[uVar11 * 3] - param_2[uVar1 * 3]) *
                 (param_2[uVar11 * 3] - param_2[uVar1 * 3]);
        fVar28 = SQRT(fVar17);
        fVar27 = fVar27 + fVar28;
        fStack_fc = fVar27;
        if (param_5 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(fVar17,param_5,&UNK_14300c4c8);
        }
        if (param_5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar1,param_5,&UNK_14300c4e0);
        }
        fVar17 = pfVar8[uVar11];
        fVar2 = pfVar8[uVar1];
        if (uStack_d0 == uStack_e0) {
          pdb_142d89720(&uStack_e0);
        }
        uVar9 = uStack_e8;
        *(float *)(pbStack_d8 + uVar10 * 4) = fVar27;
        uStack_d0 = uVar10 + 1;
        if (uStack_e8 == uStack_f8) {
          pdb_142d89720(&uStack_f8);
        }
        fVar26 = fVar26 + (fVar28 / fVar16) * fVar5 * (fVar18 / fVar2 + fVar18 / fVar17) * fVar25;
        *(float *)(pbStack_f0 + uVar9 * 4) = fVar26;
        uVar11 = uVar1;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar1,param_3,&UNK_14300c4b0);
    }
    uVar9 = param_5 * 4;
    pdb_14007ee60();
    pfVar8 = (float *)pub_1406abab0(uVar9,4);
    lVar6 = lStack_108;
    fVar27 = _UNK_14300c27c;
    fVar26 = _UNK_14300c278;
    fVar16 = _UNK_14300c274;
    fVar5 = _UNK_14300c26c;
    fVar25 = _UNK_14300c268;
    fVar18 = _UNK_14300c264;
    auVar19 = _DAT_142e3c640;
    if (pfVar8 != (float *)0x0) {
      if (param_5 < 4) {
        uVar10 = 0;
        fVar18 = _DAT_14300c258;
        fVar25 = _DAT_14300c254;
        fVar5 = _DAT_142e36f28;
      }
      else {
        uVar10 = param_5 & 0x1ffffffffffffffc;
        uVar11 = 0;
        fVar17 = DAT_142e3c640._4_4_;
        fVar28 = DAT_142e3c640._8_4_;
        fVar2 = DAT_142e3c640._12_4_;
        do {
          auVar21 = maxps(ZEXT816(0),*(undefined1 (*) [16])(lVar6 + uVar11));
          auVar21 = minps(auVar19,auVar21);
          fVar22 = auVar21._4_4_;
          fVar23 = auVar21._8_4_;
          fVar24 = auVar21._12_4_;
          fVar22 = fVar22 * fVar22 * fVar22;
          fVar23 = fVar23 * fVar23 * fVar23;
          fVar24 = fVar24 * fVar24 * fVar24;
          uVar12 = pub_142e32a10();
          auVar4._4_8_ = extraout_XMM0_Qb;
          auVar4._0_4_ = fVar22 * fVar16 + (fVar17 - fVar22) * fVar18;
          auVar21._0_8_ = auVar4._0_8_ << 0x20;
          auVar21._8_4_ = fVar23 * fVar26 + (fVar28 - fVar23) * fVar25;
          auVar21._12_4_ = fVar24 * fVar27 + (fVar2 - fVar24) * fVar5;
          uVar13 = pub_142e32a10(auVar21._8_8_);
          uVar14 = pub_142e32a10();
          uVar15 = pub_142e32a10();
          *(undefined8 *)((longlong)pfVar8 + uVar11) = CONCAT44(uVar15,uVar14);
          ((undefined8 *)((longlong)pfVar8 + uVar11))[1] = CONCAT44(uVar12,uVar13);
          uVar11 = uVar11 + 0x10;
        } while ((uVar9 & 0xfffffffffffffff0) != uVar11);
        uVar11 = uStack_d0;
        fVar18 = _DAT_14300c258;
        fVar25 = _DAT_14300c254;
        fVar5 = _DAT_142e36f28;
        if (param_5 == uVar10) goto LAB_14084d84c;
      }
      do {
        fVar16 = *(float *)(lVar6 + uVar10 * 4);
        fVar26 = 0.0;
        if (0.0 <= fVar16) {
          fVar26 = fVar16;
        }
        fVar16 = fVar5;
        if (fVar26 <= fVar5) {
          fVar16 = fVar26;
        }
        fVar16 = fVar16 * fVar16 * fVar16;
        fVar16 = (float)pub_142e32a10(fVar16 * fVar18 + (fVar5 - fVar16) * fVar25);
        pfVar8[uVar10] = fVar16;
        uVar10 = uVar10 + 1;
        uVar11 = uStack_d0;
      } while (param_5 != uVar10);
      goto LAB_14084d84c;
    }
  }
  else {
    uVar9 = param_3 * 4;
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(uVar9,4);
    if (pbVar7 != (byte *)0x0) {
      uStack_d0 = 0;
      uStack_e0 = param_3;
      pbStack_d8 = pbVar7;
      pdb_14007ee60();
      pbVar7 = pub_1406abab0(uVar9,4);
      if (pbVar7 == (byte *)0x0) {
        pdb_142dc7e2a(4,uVar9);
        goto LAB_14084dd56;
      }
      goto LAB_14084d6bf;
    }
    pdb_142dc7e2a(4,uVar9);
  }
  pdb_142dc7e2a(4,uVar9);
LAB_14084dd56:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

