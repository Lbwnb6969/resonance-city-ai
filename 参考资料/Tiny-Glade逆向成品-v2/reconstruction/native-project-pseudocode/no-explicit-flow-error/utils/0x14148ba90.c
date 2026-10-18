// VA 0x14148ba90, PDB extent 2149 bytes
// utils::curve::Curve::try_resample<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::try_resample<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 2149 */

undefined8 pdb_14148ba90(undefined8 param_1,longlong param_2,float param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  unkuint9 Var4;
  ulonglong uVar5;
  longlong lVar6;
  byte *pbVar7;
  float *pfVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_178;
  undefined8 *puStack_168;
  byte *pbStack_160;
  undefined8 *puStack_158;
  longlong lStack_150;
  ulonglong uStack_148;
  ulonglong uStack_140;
  float *pfStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  float fStack_114;
  undefined8 *puStack_110;
  byte *pbStack_108;
  undefined8 *puStack_100;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  if (uVar3 < 2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14330d760,0x28,&UNK_14330d788);
  }
  if ((param_3 == 0.0) && (!NAN(param_3))) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14330d7a0,0x27,&UNK_14330d7c8);
  }
  fVar13 = *(float *)(param_2 + 0x30);
  if ((fVar13 == 0.0) && (!NAN(fVar13))) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14330d7e0,0x24,&UNK_14330d808);
  }
  if (fVar13 <= _DAT_142e36f24) {
    fVar13 = _DAT_142e36f24;
  }
  fVar14 = param_3 / fVar13;
  if (_DAT_142e36f28 <= param_3 / fVar13) {
    fVar14 = _DAT_142e36f28;
  }
  fVar13 = (float)pub_142e32b00(_DAT_142e36f28 / fVar14);
  uVar5 = 0;
  if (0.0 <= fVar13) {
    uVar5 = (longlong)(fVar13 - _DAT_142e36f2c) & (longlong)fVar13 >> 0x3f | (longlong)fVar13;
  }
  uVar9 = 0xffffffffffffffff;
  if (fVar13 <= _DAT_142e36f30) {
    uVar9 = uVar5;
  }
  puVar10 = (undefined8 *)(uVar9 + 1 + (ulonglong)(uVar9 == 0));
  if (puVar10 < (undefined8 *)0x2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14330d868,0x1f,&UNK_14330d888);
  }
  Var4 = ZEXT89(puVar10);
  uVar5 = (longlong)puVar10 * 0xc;
  if (puVar10 < (undefined8 *)0xaaaaaaaaaaaaaab) goto LAB_14148bbea;
  uVar11 = 0;
  do {
    pdb_142dc7e2a(uVar11,uVar5);
LAB_14148bbea:
    if (uVar5 == 0) {
      pbStack_108 = (byte *)0x4;
      puVar10 = (undefined8 *)0x0;
      break;
    }
    pdb_14007ee60();
    uVar11 = 4;
    pbStack_108 = pub_1406abab0(uVar5,4);
  } while (pbStack_108 == (byte *)0x0);
  fVar23 = _DAT_142e36f28 / ((float)(unkint9)Var4 + _DAT_142e36f34);
  puStack_168 = *(undefined8 **)(param_2 + 8);
  uStack_128 = *puStack_168;
  fVar13 = *(float *)(puStack_168 + 1);
  fVar14 = _DAT_142e36f38 * fVar23 + _DAT_142e36f28;
  *(undefined8 *)pbStack_108 = uStack_128;
  *(float *)(pbStack_108 + 8) = fVar13;
  puStack_100 = (undefined8 *)0x1;
  lVar6 = (longlong)puStack_168 + uVar3 * 0xc;
  puStack_158 = *(undefined8 **)(param_2 + 0x20);
  uVar5 = *(ulonglong *)(param_2 + 0x28);
  lStack_150 = (longlong)puStack_158 + uVar5 * 4;
  uStack_140 = uVar3;
  if (uVar5 < uVar3) {
    uStack_140 = uVar5;
  }
  uStack_148 = 0;
  pfStack_138 = (float *)0x1;
  puVar12 = (undefined8 *)0x1;
  fVar26 = 0.0;
  fVar24 = 0.0;
  fVar22 = 0.0;
  uStack_120 = 0;
  fVar19 = 0.0;
  uStack_178 = uStack_128;
  pbStack_160 = (byte *)lVar6;
  fStack_114 = fVar13;
  puStack_110 = puVar10;
  while (pfVar8 = pfStack_138, pfStack_138 != (float *)0x0) {
    pfStack_138 = (float *)0x0;
    puVar10 = (undefined8 *)pdb_14007fa30(&puStack_168);
    if (puVar10 == (undefined8 *)0x0) goto LAB_14148bf72;
LAB_14148bd7b:
    uVar11 = *puVar10;
    fVar15 = (float)uVar11;
    fVar16 = (float)((ulonglong)uVar11 >> 0x20);
    fVar1 = *(float *)(puVar10 + 1);
    fVar2 = *pfVar8;
    fVar26 = fVar26 + (fVar2 - fVar19);
    fVar25 = fVar14;
    if (fVar26 <= fVar14) {
      fVar25 = fVar26;
    }
    fVar26 = (float)(-(uint)NAN(fVar26) & (uint)fVar14 | ~-(uint)NAN(fVar26) & (uint)fVar25);
    fVar25 = fVar24;
LAB_14148bdc0:
    if (fVar23 <= fVar26 - fVar22) {
      fVar22 = fVar22 + fVar23;
      uStack_f1 = 1;
      fVar24 = (float)pdb_140de8220(fVar19,fVar2);
      puVar12 = puStack_100;
      if ((puStack_100 == (undefined8 *)0x0) ||
         (pbStack_108 + (longlong)puStack_100 * 0xc == (byte *)0xc)) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14330d948);
      }
      fVar20 = fVar15 - (float)*(undefined8 *)(pbStack_108 + (longlong)puStack_100 * 0xc + -0xc);
      fVar21 = fVar16 - (float)((ulonglong)
                                *(undefined8 *)(pbStack_108 + (longlong)puStack_100 * 0xc + -0xc) >>
                               0x20);
      if (SQRT((fVar1 - *(float *)(pbStack_108 + (longlong)puStack_100 * 0xc + -4)) *
               (fVar1 - *(float *)(pbStack_108 + (longlong)puStack_100 * 0xc + -4)) +
               fVar21 * fVar21 + fVar20 * fVar20) <= fVar25) goto code_r0x00014148be47;
      fVar13 = 0.0;
      if (0.0 <= fVar24) {
        fVar13 = fVar24;
      }
      fVar24 = _DAT_142e36f28;
      if (fVar13 <= _DAT_142e36f28) {
        fVar24 = fVar13;
      }
      fVar25 = _DAT_142e36f28 - fVar24;
      fVar13 = fStack_114 * fVar25 + fVar1 * fVar24;
      uStack_128 = CONCAT44(fVar25 * uStack_178._4_4_ + fVar24 * fVar16,
                            fVar25 * (float)uStack_178 + fVar24 * fVar15);
      uStack_120 = 0;
      if (puStack_100 == puStack_110) {
        uStack_f1 = 1;
        pdb_142db7820(&puStack_110);
      }
      goto LAB_14148bec6;
    }
    if ((puVar12 == (undefined8 *)0x0) || (pbStack_108 + (longlong)puVar12 * 0xc == (byte *)0xc)) {
      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14330d930);
    }
    fVar24 = fVar15 - (float)*(undefined8 *)(pbStack_108 + (longlong)puVar12 * 0xc + -0xc);
    fVar19 = fVar16 - (float)((ulonglong)
                              *(undefined8 *)(pbStack_108 + (longlong)puVar12 * 0xc + -0xc) >> 0x20)
    ;
    fVar24 = SQRT((fVar1 - *(float *)(pbStack_108 + (longlong)puVar12 * 0xc + -4)) *
                  (fVar1 - *(float *)(pbStack_108 + (longlong)puVar12 * 0xc + -4)) +
                  fVar19 * fVar19 + fVar24 * fVar24);
    uVar17 = 0;
    uVar18 = 0;
    if (fVar24 <= fVar25) {
      fVar15 = (float)uStack_128;
      fVar16 = uStack_128._4_4_;
      uVar17 = (undefined4)uStack_120;
      uVar18 = uStack_120._4_4_;
    }
    fVar13 = (float)(~-(uint)(fVar25 < fVar24) & (uint)fVar13 |
                    -(uint)(fVar25 < fVar24) & (uint)fVar1);
    if (fVar24 <= fVar25) {
      fVar24 = fVar25;
    }
    uStack_128 = CONCAT44(fVar16,fVar15);
    uStack_120 = CONCAT44(uVar18,uVar17);
    fVar19 = fVar2;
    uStack_178 = uVar11;
    fStack_114 = fVar1;
  }
  if (uStack_148 < uStack_140) {
    uVar3 = uStack_148 + 1;
    puVar10 = (undefined8 *)(uStack_148 * 0xc + (longlong)puStack_168);
    pfVar8 = (float *)(uStack_148 * 4 + (longlong)puStack_158);
    uStack_148 = uVar3;
    if (puVar10 != (undefined8 *)0x0) goto LAB_14148bd7b;
  }
LAB_14148bf72:
  pbVar7 = pbStack_108 + (longlong)puVar12 * 0xc;
  if (pbVar7 == (byte *)0xc) {
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14330d8a0);
  }
  if (lVar6 == 0xc) {
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14330d8b8);
  }
  fVar14 = *(float *)(lVar6 + -0xc);
  uVar11 = *(undefined8 *)(lVar6 + -8);
  fVar22 = (float)((ulonglong)uVar11 >> 0x20);
  fVar23 = (float)uVar11 - *(float *)(pbVar7 + -8);
  fVar19 = fVar22 - *(float *)(pbVar7 + -4);
  fVar23 = fVar19 * fVar19 +
           fVar23 * fVar23 +
           (fVar14 - *(float *)(pbVar7 + -0xc)) * (fVar14 - *(float *)(pbVar7 + -0xc));
  if (fVar23 <= 0.0) {
    if (fVar24 <= SQRT(fVar23)) goto LAB_14148c0b8;
    if (puVar12 == puStack_110) {
      uStack_f1 = 1;
      pdb_142db7820(&puStack_110);
    }
    *(float *)(pbStack_108 + (longlong)puVar12 * 0xc) = (float)uStack_128;
    *(float *)((longlong)(pbStack_108 + (longlong)puVar12 * 0xc) + 4) = uStack_128._4_4_;
    *(float *)(pbStack_108 + (longlong)puVar12 * 0xc + 8) = fVar13;
    puVar10 = (undefined8 *)((longlong)puVar12 + 1);
    fVar13 = fVar13 - fVar22;
    fVar23 = uStack_128._4_4_ - (float)uVar11;
    puStack_100 = puVar10;
    if (fVar13 * fVar13 +
        fVar23 * fVar23 + ((float)uStack_128 - fVar14) * ((float)uStack_128 - fVar14) <= 0.0) {
      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14330d8d0,0x47,&UNK_14330d918);
    }
    if (puVar10 == puStack_110) {
      uStack_f1 = 1;
      pdb_142db7820(&puStack_110);
    }
    pbVar7 = pbStack_108 + (longlong)puVar10 * 0xc;
    *(float *)(pbStack_108 + (longlong)puVar10 * 0xc) = fVar14;
    lVar6 = 2;
  }
  else {
    if (puVar12 == puStack_110) {
      uStack_f1 = 1;
      pdb_142db7820(&puStack_110);
    }
    pbVar7 = pbStack_108 + (longlong)puVar12 * 0xc;
    *(float *)(pbStack_108 + (longlong)puVar12 * 0xc) = fVar14;
    lVar6 = 1;
  }
  *(undefined8 *)(pbVar7 + 4) = uVar11;
  puStack_100 = (undefined8 *)(lVar6 + (longlong)puVar12);
LAB_14148c0b8:
  puStack_158 = puStack_100;
  puStack_168 = puStack_110;
  pbStack_160 = pbStack_108;
  uStack_f1 = 0;
  pdb_140080930(param_1,&puStack_168,param_4);
  return param_1;
code_r0x00014148be47:
  if (0.0 < fVar25) {
    if (puStack_100 == puStack_110) {
      uStack_f1 = 1;
      pdb_142db7820(&puStack_110);
    }
LAB_14148bec6:
    *(undefined8 *)(pbStack_108 + (longlong)puVar12 * 0xc) = uStack_128;
    *(float *)(pbStack_108 + (longlong)puVar12 * 0xc + 8) = fVar13;
    puVar12 = (undefined8 *)((longlong)puVar12 + 1);
    fVar25 = 0.0;
    puStack_100 = puVar12;
  }
  goto LAB_14148bdc0;
}

