// VA 0x1419a9230, PDB extent 2241 bytes
// utils::curve::Curve::crashy_resample<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::crashy_resample<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 2241 */

undefined8 * pdb_1419a9230(undefined8 *param_1,longlong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  unkuint9 Var3;
  undefined8 *puVar4;
  longlong lVar5;
  byte *pbVar6;
  float *pfVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uStack_188;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulonglong uStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  float *pfStack_110;
  float fStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulonglong uStack_f0;
  undefined1 uStack_e1;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  uVar9 = *(ulonglong *)(param_2 + 0x10);
  if (uVar9 < 2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335e588,0x28,&UNK_14335e5b0);
  }
  if ((param_3 == 0.0) && (!NAN(param_3))) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335e5c8,0x27,&UNK_14335e5f0);
  }
  fVar12 = *(float *)(param_2 + 0x30);
  if ((fVar12 == 0.0) && (!NAN(fVar12))) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335e608,0x24,&UNK_14335e630);
  }
  if (fVar12 <= _DAT_142e36f24) {
    fVar12 = _DAT_142e36f24;
  }
  fVar13 = param_3 / fVar12;
  if (_DAT_142e36f28 <= param_3 / fVar12) {
    fVar13 = _DAT_142e36f28;
  }
  fVar12 = (float)pub_142e32b00(_DAT_142e36f28 / fVar13);
  uVar11 = 0;
  if (0.0 <= fVar12) {
    uVar11 = (longlong)(fVar12 - _DAT_142e36f2c) & (longlong)fVar12 >> 0x3f | (longlong)fVar12;
  }
  uVar10 = 0xffffffffffffffff;
  if (fVar12 <= _DAT_142e36f30) {
    uVar10 = uVar11;
  }
  uVar11 = uVar10 + 1 + (ulonglong)(uVar10 == 0);
  if (uVar11 < 2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335e720,0x1f,&UNK_14335e740);
  }
  Var3 = (unkuint9)uVar11;
  uVar10 = uVar11 * 0xc;
  if (uVar11 < 0xaaaaaaaaaaaaaab) goto LAB_1419a938e;
  uVar8 = 0;
  do {
    pdb_142dc7e2a(uVar8,uVar10);
LAB_1419a938e:
    if (uVar10 == 0) {
      uStack_f8 = (byte *)0x4;
      uVar11 = 0;
      break;
    }
    pdb_14007ee60();
    uVar8 = 4;
    uStack_f8 = pub_1406abab0(uVar10,4);
  } while (uStack_f8 == (byte *)0x0);
  fVar22 = _DAT_142e36f28 / ((float)(unkint9)Var3 + _DAT_142e36f34);
  puStack_140 = *(undefined8 **)(param_2 + 8);
  uStack_158 = *puStack_140;
  fVar12 = *(float *)(puStack_140 + 1);
  fVar13 = _DAT_142e36f38 * fVar22 + _DAT_142e36f28;
  *(undefined8 *)uStack_f8 = uStack_158;
  *(float *)(uStack_f8 + 8) = fVar12;
  uStack_f0 = 1;
  lVar5 = (longlong)puStack_140 + uVar9 * 0xc;
  uStack_130 = *(longlong *)(param_2 + 0x20);
  uVar10 = *(ulonglong *)(param_2 + 0x28);
  lStack_128 = uStack_130 + uVar10 * 4;
  uStack_118 = uVar9;
  if (uVar10 < uVar9) {
    uStack_118 = uVar10;
  }
  uStack_120 = 0;
  pfStack_110 = (float *)0x1;
  uVar9 = 1;
  fVar25 = 0.0;
  fVar23 = 0.0;
  fVar21 = 0.0;
  uStack_150 = 0;
  fVar18 = 0.0;
  uStack_188 = uStack_158;
  uStack_138 = lVar5;
  fStack_104 = fVar12;
  uStack_100 = uVar11;
  while (pfVar7 = pfStack_110, pfStack_110 != (float *)0x0) {
    pfStack_110 = (float *)0x0;
    puVar4 = (undefined8 *)pdb_14007fa30(&puStack_140);
    if (puVar4 == (undefined8 *)0x0) goto LAB_1419a9712;
LAB_1419a951b:
    uVar8 = *puVar4;
    fVar14 = (float)uVar8;
    fVar15 = (float)((ulonglong)uVar8 >> 0x20);
    fVar1 = *(float *)(puVar4 + 1);
    fVar2 = *pfVar7;
    fVar25 = fVar25 + (fVar2 - fVar18);
    fVar24 = fVar13;
    if (fVar25 <= fVar13) {
      fVar24 = fVar25;
    }
    fVar25 = (float)(-(uint)NAN(fVar25) & (uint)fVar13 | ~-(uint)NAN(fVar25) & (uint)fVar24);
    fVar24 = fVar23;
LAB_1419a9560:
    if (fVar22 <= fVar25 - fVar21) {
      fVar21 = fVar21 + fVar22;
      uStack_e1 = 1;
      fVar23 = (float)pdb_140de8220(fVar18,fVar2);
      uVar9 = uStack_f0;
      if ((uStack_f0 == 0) || (uStack_f8 + uStack_f0 * 0xc == (byte *)0xc)) {
        uStack_e1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14335e818);
      }
      fVar19 = fVar14 - (float)*(undefined8 *)(uStack_f8 + uStack_f0 * 0xc + -0xc);
      fVar20 = fVar15 - (float)((ulonglong)*(undefined8 *)(uStack_f8 + uStack_f0 * 0xc + -0xc) >>
                               0x20);
      if (SQRT((fVar1 - *(float *)(uStack_f8 + uStack_f0 * 0xc + -4)) *
               (fVar1 - *(float *)(uStack_f8 + uStack_f0 * 0xc + -4)) +
               fVar20 * fVar20 + fVar19 * fVar19) <= fVar24) goto code_r0x0001419a95e7;
      fVar12 = 0.0;
      if (0.0 <= fVar23) {
        fVar12 = fVar23;
      }
      fVar23 = _DAT_142e36f28;
      if (fVar12 <= _DAT_142e36f28) {
        fVar23 = fVar12;
      }
      fVar24 = _DAT_142e36f28 - fVar23;
      fVar12 = fStack_104 * fVar24 + fVar1 * fVar23;
      uStack_158 = CONCAT44(fVar24 * uStack_188._4_4_ + fVar23 * fVar15,
                            fVar24 * (float)uStack_188 + fVar23 * fVar14);
      uStack_150 = 0;
      if (uStack_f0 == uStack_100) {
        uStack_e1 = 1;
        pdb_142db7820(&uStack_100);
      }
      goto LAB_1419a9666;
    }
    if ((uVar9 == 0) || (uStack_f8 + uVar9 * 0xc == (byte *)0xc)) {
      uStack_e1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14335e800);
    }
    fVar23 = fVar14 - (float)*(undefined8 *)(uStack_f8 + uVar9 * 0xc + -0xc);
    fVar18 = fVar15 - (float)((ulonglong)*(undefined8 *)(uStack_f8 + uVar9 * 0xc + -0xc) >> 0x20);
    fVar23 = SQRT((fVar1 - *(float *)(uStack_f8 + uVar9 * 0xc + -4)) *
                  (fVar1 - *(float *)(uStack_f8 + uVar9 * 0xc + -4)) +
                  fVar18 * fVar18 + fVar23 * fVar23);
    uVar16 = 0;
    uVar17 = 0;
    if (fVar23 <= fVar24) {
      fVar14 = (float)uStack_158;
      fVar15 = uStack_158._4_4_;
      uVar16 = (undefined4)uStack_150;
      uVar17 = uStack_150._4_4_;
    }
    fVar12 = (float)(~-(uint)(fVar24 < fVar23) & (uint)fVar12 |
                    -(uint)(fVar24 < fVar23) & (uint)fVar1);
    if (fVar23 <= fVar24) {
      fVar23 = fVar24;
    }
    uStack_158 = CONCAT44(fVar15,fVar14);
    uStack_150 = CONCAT44(uVar17,uVar16);
    fVar18 = fVar2;
    uStack_188 = uVar8;
    fStack_104 = fVar1;
  }
  if (uStack_120 < uStack_118) {
    uVar11 = uStack_120 + 1;
    puVar4 = (undefined8 *)(uStack_120 * 0xc + (longlong)puStack_140);
    pfVar7 = (float *)(uStack_120 * 4 + uStack_130);
    uStack_120 = uVar11;
    if (puVar4 != (undefined8 *)0x0) goto LAB_1419a951b;
  }
LAB_1419a9712:
  pbVar6 = uStack_f8 + uVar9 * 0xc;
  if (pbVar6 == (byte *)0xc) {
    uStack_e1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14335e770);
  }
  if (lVar5 == 0xc) {
    uStack_e1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14335e788);
  }
  fVar13 = *(float *)(lVar5 + -0xc);
  uVar8 = *(undefined8 *)(lVar5 + -8);
  fVar21 = (float)((ulonglong)uVar8 >> 0x20);
  fVar22 = (float)uVar8 - *(float *)(pbVar6 + -8);
  fVar18 = fVar21 - *(float *)(pbVar6 + -4);
  fVar22 = fVar18 * fVar18 +
           fVar22 * fVar22 +
           (fVar13 - *(float *)(pbVar6 + -0xc)) * (fVar13 - *(float *)(pbVar6 + -0xc));
  if (fVar22 <= 0.0) {
    if (fVar23 <= SQRT(fVar22)) goto LAB_1419a9856;
    if (uVar9 == uStack_100) {
      uStack_e1 = 1;
      pdb_142db7820(&uStack_100);
    }
    *(float *)(uStack_f8 + uVar9 * 0xc) = (float)uStack_158;
    *(float *)((longlong)(uStack_f8 + uVar9 * 0xc) + 4) = uStack_158._4_4_;
    *(float *)(uStack_f8 + uVar9 * 0xc + 8) = fVar12;
    uVar11 = uVar9 + 1;
    fVar12 = fVar12 - fVar21;
    fVar22 = uStack_158._4_4_ - (float)uVar8;
    uStack_f0 = uVar11;
    if (fVar12 * fVar12 +
        fVar22 * fVar22 + ((float)uStack_158 - fVar13) * ((float)uStack_158 - fVar13) <= 0.0) {
      uStack_e1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14335e7a0,0x47,&UNK_14335e7e8);
    }
    if (uVar11 == uStack_100) {
      uStack_e1 = 1;
      pdb_142db7820(&uStack_100);
    }
    pbVar6 = uStack_f8 + uVar11 * 0xc;
    *(float *)(uStack_f8 + uVar11 * 0xc) = fVar13;
    lVar5 = 2;
  }
  else {
    if (uVar9 == uStack_100) {
      uStack_e1 = 1;
      pdb_142db7820(&uStack_100);
    }
    pbVar6 = uStack_f8 + uVar9 * 0xc;
    *(float *)(uStack_f8 + uVar9 * 0xc) = fVar13;
    lVar5 = 1;
  }
  *(undefined8 *)(pbVar6 + 4) = uVar8;
  uStack_f0 = lVar5 + uVar9;
LAB_1419a9856:
  uStack_168 = uStack_f0;
  uStack_178 = (undefined4)uStack_100;
  uStack_174 = uStack_100._4_4_;
  uStack_170 = (undefined4)uStack_f8;
  uStack_16c = uStack_f8._4_4_;
  uStack_e1 = 0;
  pdb_1419aa3f0(&puStack_140,&uStack_178);
  if (SBORROW8(0,(longlong)puStack_140)) {
    uStack_178 = (undefined4)uStack_138;
    uStack_174 = uStack_138._4_4_;
    uStack_170 = (undefined4)uStack_130;
    uStack_16c = uStack_130._4_4_;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14335e278,0x2b,&uStack_178,&UNK_14335e258,&UNK_14335e648);
  }
  param_1[6] = pfStack_110;
  param_1[4] = uStack_120;
  param_1[5] = uStack_118;
  param_1[2] = uStack_130;
  param_1[3] = lStack_128;
  *param_1 = puStack_140;
  param_1[1] = uStack_138;
  return param_1;
code_r0x0001419a95e7:
  if (0.0 < fVar24) {
    if (uStack_f0 == uStack_100) {
      uStack_e1 = 1;
      pdb_142db7820(&uStack_100);
    }
LAB_1419a9666:
    *(undefined8 *)(uStack_f8 + uVar9 * 0xc) = uStack_158;
    *(float *)(uStack_f8 + uVar9 * 0xc + 8) = fVar12;
    uVar9 = uVar9 + 1;
    fVar24 = 0.0;
    uStack_f0 = uVar9;
  }
  goto LAB_1419a9560;
}

