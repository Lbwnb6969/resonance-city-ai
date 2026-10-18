// VA 0x1413fa980, PDB extent 1633 bytes
// utils::curve::Curve::try_resample_approx_pt_count_remap<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D,glam::f32::vec2::Vec2,glam::f32::vec2::Vec2 (*)(glam::f32::vec2::Vec2)>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x0001413fad00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::try_resample_approx_pt_count_remap<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D,glam::f32::vec2::Vec2,glam::f32::vec2::Vec2
   (*)(glam::f32::vec2::Vec2)>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 1633 */

void pdb_1413fa980(undefined8 param_1,longlong param_2,ulonglong param_3,undefined4 param_4)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  ulonglong uStack_138;
  undefined1 auStack_128 [16];
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulonglong uStack_100;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  if (param_3 < 2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1433067e8,0x1f,&UNK_143306808);
  }
  uVar7 = param_3 * 8;
  uVar10 = param_4;
  if (uVar7 < 0x7ffffffffffffffd && param_3 >> 0x3d == 0) goto LAB_1413faa46;
  uVar2 = 0;
  do {
    param_1 = uVar2;
    pdb_142dc7e2a(param_1,uVar7);
    uVar10 = param_4;
LAB_1413faa46:
    param_4 = uVar10;
    pdb_14007ee60();
    uStack_108 = pub_1406abab0(uVar7,4);
    uVar2 = 4;
  } while (uStack_108 == (byte *)0x0);
  uStack_100 = 0;
  uVar7 = *(ulonglong *)(param_2 + 0x10);
  uStack_110 = param_3;
  if (uVar7 == 0) {
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_143306820);
  }
  fVar23 = _DAT_142e36f28 / ((float)param_3 + _DAT_142e36f34);
  puVar5 = *(undefined8 **)(param_2 + 8);
  uVar2 = *puVar5;
  fVar20 = (float)uVar2;
  fVar21 = (float)((ulonglong)uVar2 >> 0x20);
  auStack_128 = ZEXT416((uint)(_DAT_142e36f38 * fVar23 + _DAT_142e36f28));
  *(undefined8 *)uStack_108 = uVar2;
  uStack_100 = 1;
  puStack_118 = puVar5 + uVar7;
  lVar3 = *(longlong *)(param_2 + 0x20);
  if (*(ulonglong *)(param_2 + 0x28) < uVar7) {
    uVar7 = *(ulonglong *)(param_2 + 0x28);
  }
  fVar25 = 0.0;
  fVar22 = 0.0;
  fVar13 = 0.0;
  fVar19 = 0.0;
  uVar9 = 1;
  uVar4 = (ulonglong)(uVar7 != 0);
  if (uVar4 < uVar7) {
    uVar8 = uVar4 + 1;
    fVar15 = fVar20;
    fVar24 = fVar21;
    if (uVar7 == 0) {
      uVar4 = uVar8;
      uVar8 = 2;
    }
    do {
      fVar26 = (float)puVar5[uVar4];
      fVar27 = (float)((ulonglong)puVar5[uVar4] >> 0x20);
      fVar1 = *(float *)(lVar3 + uVar4 * 4);
      fVar25 = fVar25 + (fVar1 - fVar13);
      fVar12 = (float)auStack_128._0_4_;
      if (fVar25 <= (float)auStack_128._0_4_) {
        fVar12 = fVar25;
      }
      fVar25 = (float)(-(uint)NAN(fVar25) & auStack_128._0_4_ | ~-(uint)NAN(fVar25) & (uint)fVar12);
LAB_1413fab88:
      if (fVar23 <= fVar25 - fVar19) {
        fVar19 = fVar19 + fVar23;
        uStack_f1 = 1;
        fVar12 = (float)pdb_140de8220(fVar13);
        uVar9 = uStack_100;
        if ((uStack_100 == 0) || (uStack_108 + uStack_100 * 8 + -8 == (byte *)0x0)) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1433068e0);
        }
        uVar2 = *(undefined8 *)(uStack_108 + uStack_100 * 8 + -8);
        fVar17 = fVar26 - (float)uVar2;
        fVar18 = fVar27 - (float)((ulonglong)uVar2 >> 0x20);
        if (SQRT(fVar18 * fVar18 + fVar17 * fVar17) <= fVar22) goto code_r0x0001413fabf5;
        fVar20 = 0.0;
        if (0.0 <= fVar12) {
          fVar20 = fVar12;
        }
        fVar21 = _DAT_142e36f28;
        if (fVar20 <= _DAT_142e36f28) {
          fVar21 = fVar20;
        }
        fVar20 = (_DAT_142e36f28 - fVar21) * fVar15 + fVar21 * fVar26;
        fVar21 = (_DAT_142e36f28 - fVar21) * fVar24 + fVar21 * fVar27;
        if (uStack_100 == uStack_110) {
          uStack_f1 = 1;
          pdb_142db07d0(&uStack_110);
        }
        goto LAB_1413fac58;
      }
      if ((uVar9 == 0) || (uStack_108 + uVar9 * 8 + -8 == (byte *)0x0)) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1433068c8);
      }
      uVar2 = *(undefined8 *)(uStack_108 + uVar9 * 8 + -8);
      fVar13 = fVar26 - (float)uVar2;
      fVar15 = fVar27 - (float)((ulonglong)uVar2 >> 0x20);
      fVar13 = SQRT(fVar15 * fVar15 + fVar13 * fVar13);
      fVar15 = fVar13;
      if (fVar13 <= fVar22) {
        fVar15 = fVar22;
      }
      uVar14 = (int)((uint)(fVar22 < fVar13) << 0x1f) >> 0x1f;
      uVar16 = (int)((uint)(fVar22 < fVar13) << 0x1f) >> 0x1f;
      fVar20 = (float)(~uVar14 & (uint)fVar20 | (uint)fVar26 & uVar14);
      fVar21 = (float)(~uVar16 & (uint)fVar21 | (uint)fVar27 & uVar16);
      bVar11 = uVar8 < uVar7;
      uVar4 = uVar8;
      uVar8 = uVar8 + (uVar8 < uVar7);
      fVar13 = fVar1;
      fVar22 = fVar15;
      fVar15 = fVar26;
      fVar24 = fVar27;
    } while (bVar11);
  }
  if (uStack_108 + uVar9 * 8 + -8 == (byte *)0x0) {
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143306838);
  }
  puVar5 = puStack_118 + -1;
  if (puVar5 == (undefined8 *)0x0) {
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143306850);
  }
  fVar19 = (float)*puVar5;
  fVar25 = (float)((ulonglong)*puVar5 >> 0x20);
  uVar2 = *(undefined8 *)(uStack_108 + uVar9 * 8 + -8);
  fVar23 = fVar19 - (float)uVar2;
  fVar13 = fVar25 - (float)((ulonglong)uVar2 >> 0x20);
  fVar23 = fVar13 * fVar13 + fVar23 * fVar23;
  if (fVar23 <= 0.0) {
    if (fVar22 <= SQRT(fVar23)) goto LAB_1413fae25;
    if (uVar9 == uStack_110) {
      uStack_f1 = 1;
      pdb_142db07d0(&uStack_110,puVar5,uVar10);
    }
    *(ulonglong *)(uStack_108 + uVar9 * 8) = CONCAT44(fVar21,fVar20);
    uVar7 = uVar9 + 1;
    uStack_100 = uVar7;
    if ((fVar21 - fVar25) * (fVar21 - fVar25) + (fVar20 - fVar19) * (fVar20 - fVar19) <= 0.0) {
      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143306868,0x47,&UNK_1433068b0);
    }
    if (uVar7 == uStack_110) {
      uStack_f1 = 1;
      pdb_142db07d0(&uStack_110);
    }
    pbVar6 = uStack_108 + uVar7 * 8;
    *(float *)(uStack_108 + uVar7 * 8) = fVar19;
    lVar3 = 2;
  }
  else {
    if (uVar9 == uStack_110) {
      uStack_f1 = 1;
      pdb_142db07d0(&uStack_110);
    }
    pbVar6 = uStack_108 + uVar9 * 8;
    *(float *)(uStack_108 + uVar9 * 8) = fVar19;
    lVar3 = 1;
  }
  *(float *)(pbVar6 + 4) = fVar25;
  uStack_100 = lVar3 + uVar9;
LAB_1413fae25:
  uStack_138 = uStack_100;
  uStack_148 = (undefined4)uStack_110;
  uStack_144 = uStack_110._4_4_;
  uStack_140 = (undefined4)uStack_108;
  uStack_13c = uStack_108._4_4_;
  uStack_f1 = 0;
  pdb_140080c90(param_1,&uStack_148,uVar10);
  return;
code_r0x0001413fabf5:
  if (0.0 < fVar22) {
    if (uStack_100 == uStack_110) {
      uStack_f1 = 1;
      pdb_142db07d0(&uStack_110);
    }
LAB_1413fac58:
    *(ulonglong *)(uStack_108 + uVar9 * 8) = CONCAT44(fVar21,fVar20);
    uVar9 = uVar9 + 1;
    fVar22 = 0.0;
    uStack_100 = uVar9;
  }
  goto LAB_1413fab88;
}

