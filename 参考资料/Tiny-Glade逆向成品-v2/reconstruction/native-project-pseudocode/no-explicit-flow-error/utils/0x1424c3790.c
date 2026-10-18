// VA 0x1424c3790, PDB extent 3019 bytes
// utils::rdp::Rdp::new_with_opts<glam::f32::vec3::Vec3>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/rdp.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::rdp::Rdp::new_with_opts<glam::f32::vec3::Vec3>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/rdp.rs
   Extent: 3019 */

ulonglong *
pdb_1424c3790(ulonglong *param_1,float *param_2,ulonglong param_3,float param_4,float param_5)

{
  longlong lVar1;
  ulonglong *puVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  code *pcVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float *pfVar15;
  ulonglong uVar16;
  byte *unaff_R12;
  undefined8 uVar17;
  ulonglong unaff_R15;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  ulonglong uStack_1b0;
  ulonglong uStack_1a8;
  ulonglong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  float *pfStack_148;
  ulonglong uStack_140;
  float fStack_138;
  float fStack_134;
  longlong lStack_130;
  byte *pbStack_128;
  longlong lStack_120;
  ulonglong uStack_118;
  byte *pbStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  if (param_3 < 3) {
    if (param_3 == 0) {
      pbVar10 = (byte *)0x8;
      pbVar11 = (byte *)0x4;
      uVar13 = 0;
LAB_1424c3f83:
      *param_1 = uVar13;
      param_1[1] = (ulonglong)pbVar10;
      param_1[2] = uVar13;
      param_1[3] = param_3;
      param_1[4] = (ulonglong)pbVar11;
      param_1[5] = param_3;
      return param_1;
    }
    uVar13 = param_3 * 8;
    pdb_14007ee60();
    pbVar10 = pub_1406abab0(uVar13,8);
    if (pbVar10 == (byte *)0x0) {
      pdb_142dc7e2a(8,uVar13);
    }
    else {
      pbVar10[0] = 0;
      pbVar10[1] = 0;
      pbVar10[2] = 0;
      pbVar10[3] = 0;
      pbVar10[4] = 0;
      pbVar10[5] = 0;
      pbVar10[6] = 0;
      pbVar10[7] = 0;
      if (param_3 != 1) {
        pbVar10[8] = 1;
        pbVar10[9] = 0;
        pbVar10[10] = 0;
        pbVar10[0xb] = 0;
        pbVar10[0xc] = 0;
        pbVar10[0xd] = 0;
        pbVar10[0xe] = 0;
        pbVar10[0xf] = 0;
      }
      unaff_R15 = param_3 * 0xc;
      pdb_14007ee60();
      pbVar11 = pub_1406abab0(unaff_R15,4);
      unaff_R12 = pbVar10;
      if (pbVar11 != (byte *)0x0) {
        pub_142e32760(pbVar11,param_2,unaff_R15);
        uVar13 = param_3;
        goto LAB_1424c3f83;
      }
    }
    uStack_100 = uVar13;
    pbStack_f8 = unaff_R12;
    pdb_142dc7e2a(4,unaff_R15);
  }
  else {
    lStack_130 = 0;
    pbStack_128 = (byte *)0x8;
    lStack_120 = 0;
    uStack_118 = 0;
    pbStack_110 = (byte *)0x8;
    uStack_108 = 0;
    pdb_142d896b0(&uStack_118);
    lVar1 = lStack_120;
    pbStack_110[0] = 0;
    pbStack_110[1] = 0;
    pbStack_110[2] = 0;
    pbStack_110[3] = 0;
    pbStack_110[4] = 0;
    pbStack_110[5] = 0;
    pbStack_110[6] = 0;
    pbStack_110[7] = 0;
    uStack_108 = 1;
    if (lStack_120 == lStack_130) {
      pdb_142d7e830(&lStack_130);
    }
    pbVar10 = pbStack_128 + lVar1 * 0x18;
    pbVar10[0] = 0;
    pbVar10[1] = 0;
    pbVar10[2] = 0;
    pbVar10[3] = 0;
    pbVar10[4] = 0;
    pbVar10[5] = 0;
    pbVar10[6] = 0;
    pbVar10[7] = 0;
    *(ulonglong *)(pbStack_128 + lVar1 * 0x18 + 8) = param_3 - 1;
    pbStack_128[lVar1 * 0x18 + 0x10] = 0;
    lStack_120 = lVar1 + 1;
    fVar29 = SQRT((param_2[2] - param_2[param_3 * 3 + -1]) *
                  (param_2[2] - param_2[param_3 * 3 + -1]) +
                  (param_2[1] - param_2[param_3 * 3 + -2]) *
                  (param_2[1] - param_2[param_3 * 3 + -2]) +
                  (*param_2 - param_2[param_3 * 3 + -3]) * (*param_2 - param_2[param_3 * 3 + -3]));
    uStack_100 = CONCAT44(uStack_100._4_4_,
                          (int)CONCAT71((int7)(param_3 * 3 >> 8),fVar29 < _DAT_143057f74));
    pbStack_f8 = (byte *)CONCAT44(pbStack_f8._4_4_,param_5 * param_5);
    fVar26 = param_5 * param_5;
    fVar25 = _DAT_143006dc0;
    while ((uVar13 = uStack_108, pbVar10 = pbStack_110, lVar8 = lStack_120, lVar1 = lStack_120,
           lStack_120 != 0 && (lVar1 = lStack_120 + -1, pbStack_128[lVar1 * 0x18 + 0x10] != 2))) {
      puVar2 = (ulonglong *)(pbStack_128 + lVar1 * 0x18);
      uVar5 = *(ulonglong *)(pbStack_128 + lVar1 * 0x18 + 8);
      uVar6 = *puVar2;
      if ((uVar5 - uVar6) + 1 < 3) {
        fVar27 = fVar26;
        lStack_120 = lVar1;
        if (uStack_108 == uStack_118) {
          pdb_142d896b0(&uStack_118);
        }
LAB_1424c39a0:
        *(ulonglong *)(pbStack_110 + uVar13 * 8) = uVar5;
        uStack_108 = uVar13 + 1;
        fVar26 = fVar27;
      }
      else {
        if (param_3 <= uVar6) {
          lStack_120 = lVar1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar6,param_3,&UNK_143510998);
        }
        if (param_3 <= uVar5) {
          lStack_120 = lVar1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar5,param_3,&UNK_1435109b0);
        }
        if (uVar5 < uVar6) {
          lStack_120 = lVar1;
          pdb_142dc8420(uVar6,uVar5,param_3,&UNK_1435109c8);
          goto LAB_1424c409c;
        }
        fVar37 = 0.0;
        fVar27 = pbStack_f8._0_4_;
        fStack_138 = param_4;
        fStack_134 = fVar29;
        if ((uVar5 == uVar6) || (uVar6 * 0xc + 0xc == uVar5 * 0xc)) {
          uVar12 = 0;
        }
        else {
          fVar19 = (float)*(undefined8 *)(param_2 + uVar6 * 3);
          fVar20 = (float)((ulonglong)*(undefined8 *)(param_2 + uVar6 * 3) >> 0x20);
          fVar3 = param_2[uVar6 * 3 + 2];
          uVar17 = *(undefined8 *)(param_2 + uVar5 * 3);
          fVar30 = (float)uVar17;
          fVar32 = (float)((ulonglong)uVar17 >> 0x20);
          fVar4 = param_2[uVar5 * 3 + 2];
          uVar14 = ((uVar5 * 0xc + uVar6 * -0xc) - 0xc) / 0xc;
          fVar21 = fVar30 - fVar19;
          fVar22 = fVar32 - fVar20;
          fVar23 = fVar4 - fVar3;
          fVar24 = fVar23 * fVar23 + fVar22 * fVar22 + fVar21 * fVar21;
          if (fVar24 <= fVar25) {
            fVar24 = fVar25;
          }
          if ((fVar26 != 0.0) || (NAN(fVar26))) {
            uStack_198 = CONCAT44(fVar20,fVar20);
            uStack_190 = 0;
            uStack_188 = CONCAT44(fVar32,fVar32);
            uStack_180 = 0;
            uStack_178 = CONCAT44(fVar19,fVar3);
            uStack_170 = 0;
            uStack_160 = 0;
            pfVar15 = param_2 + uVar6 * 3 + 5;
            uVar12 = 0;
            uVar16 = 1;
            do {
              fVar35 = (float)*(undefined8 *)(pfVar15 + -2);
              fVar33 = (float)((ulonglong)*(undefined8 *)(pfVar15 + -2) >> 0x20);
              fVar25 = *pfVar15;
              fVar26 = fVar35 - fVar19;
              fVar28 = fVar33 - fVar20;
              fVar36 = fVar25 - fVar3;
              fVar31 = (fVar23 * fVar36 + fVar22 * fVar28 + fVar21 * fVar26) / fVar24;
              fVar38 = _DAT_142e36f28 - fVar31;
              fVar39 = fVar33 - (fVar32 * fVar31 + fVar20 * fVar38);
              fVar34 = fVar25 - (fVar31 * fVar4 + fVar38 * fVar3);
              fVar31 = fVar35 - (fVar31 * fVar30 + fVar38 * fVar19);
              fVar31 = SQRT(fVar31 * fVar31 + fVar39 * fVar39 + fVar34 * fVar34);
              uStack_168 = uVar17;
              if (0x7f7fffff < (uint)ABS(fVar31)) goto LAB_1424c401b;
              if (((fVar37 < fVar31) &&
                  (pbStack_f8._0_4_ <= fVar36 * fVar36 + fVar28 * fVar28 + fVar26 * fVar26)) &&
                 (pbStack_f8._0_4_ <=
                  (fVar25 - fVar4) * (fVar25 - fVar4) +
                  (fVar33 - fVar32) * (fVar33 - fVar32) + (fVar35 - fVar30) * (fVar35 - fVar30))) {
                uVar12 = uVar16;
                fVar37 = fVar31;
              }
              pfVar15 = pfVar15 + 3;
              bVar18 = uVar16 != uVar14;
              uVar16 = uVar16 + 1;
            } while (bVar18);
          }
          else {
            pfVar15 = param_2 + uVar6 * 3 + 5;
            fVar37 = 0.0;
            uVar12 = 0;
            uVar16 = 1;
            do {
              fVar26 = (float)*(undefined8 *)(pfVar15 + -2);
              fVar28 = (float)((ulonglong)*(undefined8 *)(pfVar15 + -2) >> 0x20);
              fVar31 = ((*pfVar15 - fVar3) * fVar23 +
                       (fVar28 - fVar20) * fVar22 + (fVar26 - fVar19) * fVar21) / fVar24;
              fVar35 = _DAT_142e36f28 - fVar31;
              fVar28 = fVar28 - (fVar32 * fVar31 + fVar20 * fVar35);
              fVar25 = *pfVar15 - (fVar31 * fVar4 + fVar35 * fVar3);
              fVar26 = fVar26 - (fVar31 * fVar30 + fVar35 * fVar19);
              fVar25 = SQRT(fVar26 * fVar26 + fVar28 * fVar28 + fVar25 * fVar25);
              if (0x7f7fffff < (uint)ABS(fVar25)) {
LAB_1424c401b:
                lStack_120 = lVar1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_1435109e0,0x26,&UNK_143510a08);
              }
              uVar9 = uVar16;
              if (fVar25 <= fVar37) {
                fVar25 = fVar37;
                uVar9 = uVar12;
              }
              uVar12 = uVar9;
              fVar37 = fVar25;
              pfVar15 = pfVar15 + 3;
              bVar18 = uVar16 != uVar14;
              uVar16 = uVar16 + 1;
            } while (bVar18);
          }
        }
        if ((fVar37 <= param_4) && ((fVar29 < fVar37 & (byte)uStack_100) == 0)) {
          fVar25 = _DAT_143006dc0;
          lStack_120 = lVar1;
          if (uStack_108 == uStack_118) {
            pdb_142d896b0(&uStack_118);
          }
          goto LAB_1424c39a0;
        }
        uVar5 = uVar12 + uVar6;
        *puVar2 = uVar5;
        *(undefined1 *)(puVar2 + 2) = 0;
        fVar25 = _DAT_143006dc0;
        fVar26 = fVar27;
        if (uVar12 < 3) {
          if (uStack_108 == uStack_118) {
            pdb_142d896b0(&uStack_118);
          }
          *(ulonglong *)(pbStack_110 + uVar13 * 8) = uVar5;
          uStack_108 = uVar13 + 1;
          uStack_100 = uStack_100 & 0xffffffff00000000;
        }
        else {
          if (lStack_120 == lStack_130) {
            pdb_142d7e830(&lStack_130);
          }
          *(ulonglong *)(pbStack_128 + lVar8 * 0x18) = uVar6;
          *(ulonglong *)(pbStack_128 + lVar8 * 0x18 + 8) = uVar5;
          pbStack_128[lVar8 * 0x18 + 0x10] = 0;
          lStack_120 = lVar8 + 1;
          uStack_100 = uStack_100 & 0xffffffff00000000;
        }
      }
    }
    lStack_120 = lVar1;
    uVar5 = uStack_108 * 8;
    if (uVar5 < 0x7ffffffffffffff9 && uStack_108 >> 0x3d == 0) {
      if (uVar5 == 0) {
        pbStack_f8 = (byte *)0x8;
        uStack_100 = 0;
        uVar6 = uStack_100;
joined_r0x0001424c4010:
        uStack_100 = uVar6;
        if (uVar13 != 0) {
          pub_142e32760(pbStack_f8,pbVar10,uVar5);
        }
        pbStack_150 = pbStack_110 + uStack_108 * 8;
        pbStack_158 = pbStack_110;
        pfStack_148 = param_2;
        uStack_140 = param_3;
        pdb_1413ebb70(&uStack_1b0,&pbStack_158);
        *param_1 = uStack_100;
        param_1[1] = (ulonglong)pbStack_f8;
        param_1[2] = uVar13;
        param_1[5] = uStack_1a0;
        param_1[3] = uStack_1b0;
        param_1[4] = uStack_1a8;
        if (uStack_118 != 0) {
          pub_1406abac0(pbStack_110,uStack_118 << 3,8);
        }
        if (lStack_130 == 0) {
          return param_1;
        }
        pub_1406abac0(pbStack_128,lStack_130 * 0x18,8);
        return param_1;
      }
      pdb_14007ee60();
      uVar17 = 8;
      pbStack_f8 = pub_1406abab0(uVar5,8);
      uVar6 = uVar13;
      if (pbStack_f8 != (byte *)0x0) goto joined_r0x0001424c4010;
    }
    else {
      uVar17 = 0;
    }
    pdb_142dc7e2a(uVar17,uVar5);
  }
LAB_1424c409c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}

