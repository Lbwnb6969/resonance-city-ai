// VA 0x14141e8d0, PDB extent 2750 bytes
// system_wall_constructor::construct_arches::wooden_arch_frame::create_wooden_arch_cornerpiece_params<system_wall_constructor::construct_arches::wooden_arch_frame::create_wooden_arch_cornerpieces_for_lintel::closure$0::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/wooden_arch_frame.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_arches::wooden_arch_frame::create_wooden_arch_cornerpiece_params<system_wall_constructor::construct_arches::wooden_arch_frame::create_wooden_arch_cornerpieces_for_lintel::closure$0::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/wooden_arch_frame.rs
   Extent: 2750 */

undefined8 *
pdb_14141e8d0(undefined8 *param_1,float *param_2,float *param_3,ulonglong param_4,undefined1 param_5
             ,longlong *param_6)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  undefined8 uVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float afStack_1b4 [3];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  float fStack_180;
  undefined4 uStack_17c;
  byte *pbStack_178;
  undefined8 uStack_170;
  byte abStack_164 [4];
  float fStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  float fStack_154;
  byte *pbStack_150;
  code *pcStack_148;
  float *pfStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  ulonglong uStack_128;
  byte *pbStack_120;
  ulonglong uStack_118;
  float fStack_10c;
  byte *pbStack_108;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  fVar2 = *param_3;
  fVar24 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = *param_2;
  fVar14 = fVar2 - fVar6;
  fVar19 = fVar3 - fVar5;
  fVar23 = SQRT(fVar19 * fVar19 + fVar14 * fVar14);
  fVar20 = _DAT_142e36f28 / fVar23;
  uVar9 = (uint)((int)fVar20 - 1U < 0x7fffff ||
                (int)ABS(fVar20) - 0x800000U < 0x7f000000 && -1 < (int)fVar20);
  pbStack_150 = (byte *)(CONCAT44((int)(uVar9 << 0x1f) >> 0x1f,(int)(uVar9 << 0x1f) >> 0x1f) &
                        CONCAT44(fVar20 * fVar19,fVar20 * fVar14));
  pdb_140df4520(afStack_1b4,&pbStack_150);
  fVar14 = _DAT_142e37848;
  fVar19 = (float)afStack_1b4._4_8_;
  fVar20 = SUB84(afStack_1b4._4_8_,4);
  if (fVar20 * fVar20 + afStack_1b4[0] * afStack_1b4[0] + fVar19 * fVar19 <= _DAT_142e37848) {
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  pbStack_108 = (byte *)CONCAT44(pbStack_108._4_4_,fVar4);
  if (fVar23 <= _DAT_142e37848) {
    fVar23 = _DAT_142e37848;
  }
  fVar26 = *(float *)(param_4 + 0xc) * fVar23;
  fVar4 = *(float *)(param_4 + 0x10);
  fStack_fc = *(float *)(param_4 + 0x1c);
  fStack_f8 = *(float *)(param_4 + 0x20);
  fStack_f4 = *(float *)(param_4 + 0x24);
  pdb_14007ee60();
  pbVar10 = pub_1406abab0(0x54,4);
  if (pbVar10 == (byte *)0x0) {
    uVar18 = pdb_142dc7e2a(4,0x54);
LAB_14141f14e:
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar18,param_4,&UNK_143308728);
  }
  uStack_128 = 7;
  uStack_118 = 0;
  fStack_160 = *(float *)(param_6 + 7);
  pbStack_120 = pbVar10;
  if (fStack_160 < 0.0) {
    abStack_164[0] = 0;
    abStack_164[1] = 0;
    abStack_164[2] = 0;
    abStack_164[3] = 0;
    pbStack_150 = abStack_164;
    pcStack_148 = pdb_140f705d0;
    pfStack_140 = &fStack_180;
    pcStack_138 = pdb_140f705d0;
    fStack_180 = fStack_160;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_1433085f2,&pbStack_150,&UNK_143308690);
  }
  lVar7 = param_6[2];
  pcStack_148 = *(code **)(lVar7 + 0x10);
  if (pcStack_148 == (code *)0x1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143308560);
  }
  if (pcStack_148 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143308518,0x2d,&UNK_143308548);
  }
  uStack_15c = (undefined4)param_6[6];
  uStack_158 = *(undefined4 *)((longlong)param_6 + 0x34);
  uVar13 = param_6[4];
  lVar8 = *param_6;
  param_4 = param_6[1];
  auStack_198 = ZEXT416(*(uint *)(param_6 + 3));
  auStack_1a8 = ZEXT416(*(uint *)((longlong)param_6 + 0x2c));
  pbStack_150 = *(byte **)(lVar7 + 8);
  pfStack_140 = (float *)pdb_140ade410;
  pcStack_138 = (code *)0x0;
  uStack_130 = 0;
  fStack_10c = fVar24;
  uVar18 = pdb_14141df70(&pbStack_150);
  uVar11 = uStack_130 & 0xffffffff;
  if (param_4 <= uVar11) goto LAB_14141f14e;
  uVar12 = uVar11 + 1;
  if (param_4 <= uVar12) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar12,param_4,&UNK_143308728);
  }
  fVar24 = *(float *)(lVar8 + 4 + uVar11 * 0xc);
  if (((*(float *)(lVar8 + 4 + uVar12 * 0xc) - fVar24) * uStack_130._4_4_ + fVar24 + _DAT_142f95158)
      - fStack_10c <= _DAT_142e3c670) {
    if (fVar26 <= fVar14) {
      fVar26 = fVar14;
    }
    if (fStack_fc <= fVar14) {
      fStack_fc = fVar14;
    }
    if (fStack_f8 <= fVar14) {
      fStack_f8 = fVar14;
    }
    if (fStack_f4 <= 0.0) {
      fStack_f4 = 0.0;
    }
    fVar24 = fVar26 * 0.0;
    pbStack_108 = (byte *)CONCAT44(pbStack_108._4_4_,pbStack_108._0_4_ - fVar26);
    fStack_154 = fStack_10c - fVar26;
    fVar14 = _DAT_142e36f28 - fVar4;
    auStack_1a8._4_4_ = auStack_1a8._0_4_;
    auStack_1a8._0_4_ = (int)(uVar13 >> 0x20);
    auStack_1a8._8_8_ = 0;
    auStack_198._4_8_ = uVar13 & 0xffffffff;
    auStack_198._12_4_ = 0;
    uVar13 = 0;
    while (uVar13 < 7) {
      fVar22 = (float)(longlong)uVar13 / _DAT_142e37900;
      fVar15 = (float)pub_142e329e0();
      fVar16 = (float)pub_142e32b30();
      uVar11 = *(ulonglong *)(lVar7 + 0x10);
      if (uVar11 == 1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143308560);
      }
      if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143308518,0x2d,&UNK_143308548);
      }
      fVar15 = fVar15 * fVar23;
      fVar17 = fVar16 * fVar26 * 0.0;
      fVar25 = _DAT_142e36f28 - fVar22;
      pbStack_150 = *(byte **)(lVar7 + 8);
      pfStack_140 = (float *)pdb_140ade410;
      pcStack_138 = (code *)0x0;
      uStack_130 = 0;
      pcStack_148 = (code *)uVar11;
      pdb_14141df70(&pbStack_150);
      uVar11 = uStack_118;
      uVar12 = uStack_130 & 0xffffffff;
      if (param_4 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar12,param_4,&UNK_143308728);
      }
      uVar1 = uVar12 + 1;
      if (param_4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar1,param_4,&UNK_143308728);
      }
      fVar27 = *(float *)(lVar8 + 4 + uVar12 * 0xc);
      fVar27 = (*(float *)(lVar8 + 4 + uVar1 * 0xc) - fVar27) * uStack_130._4_4_ + fVar27 +
               _DAT_142f95158;
      if (uStack_118 == uStack_128) {
        pdb_142db7820(&uStack_128);
      }
      uVar13 = uVar13 + 1;
      fVar21 = (fVar16 * fVar26 + (fStack_154 - fVar15 * fVar19)) * fVar4 +
               (fStack_10c * fVar22 + fVar25 * pbStack_108._0_4_) * fVar14;
      fVar21 = (fVar27 - fVar21) * fVar22 + fVar21;
      fVar16 = fVar27;
      if (fVar21 <= fVar27) {
        fVar16 = fVar21;
      }
      *(float *)(pbStack_120 + uVar11 * 0xc) =
           (fVar22 * fVar2 + fVar25 * (fVar6 - fVar24)) * fVar14 +
           (fVar17 + ((fVar2 - fVar24) - fVar15 * afStack_1b4[0])) * fVar4;
      *(uint *)(pbStack_120 + uVar11 * 0xc + 4) =
           ~-(uint)NAN(fVar21) & (uint)fVar16 | -(uint)NAN(fVar21) & (uint)fVar27;
      *(float *)(pbStack_120 + uVar11 * 0xc + 8) =
           (fVar22 * fVar3 + fVar25 * (fVar5 - fVar24)) * fVar14 +
           (fVar17 + ((fVar3 - fVar24) - fVar15 * fVar20)) * fVar4;
      uStack_118 = uVar11 + 1;
    }
    if (1 < uStack_118) {
      pbStack_150 = pbStack_120;
      pcStack_148 = (code *)uStack_118;
      pfStack_140 = (float *)0x0;
      pcStack_138 = (code *)uStack_118;
      pdb_1413efab0(&fStack_180,&pbStack_150);
      pbStack_108 = pbStack_178;
      pdb_1407fbce0(param_1,pbStack_178,uStack_170,3,fStack_fc,fStack_f8,fStack_f4,param_5);
      if (CONCAT44(uStack_17c,fStack_180) != 0) {
        pub_1406abac0(pbStack_108,CONCAT44(uStack_17c,fStack_180) * 0x18,4);
      }
      goto LAB_14141ec19;
    }
  }
  *param_1 = 0x8000000000000000;
LAB_14141ec19:
  if (uStack_128 != 0) {
    pub_1406abac0(pbStack_120,uStack_128 * 0xc,4);
  }
  return param_1;
}

