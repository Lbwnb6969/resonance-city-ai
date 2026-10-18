// VA 0x1419aa1e0, PDB extent 527 bytes
// utils::curve::Curve::is_on_right_side<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::is_on_right_side<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 527 */

undefined8 pdb_1419aa1e0(longlong param_1,float param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar11;
  
  fVar8 = (float)param_3;
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  if (uVar2 == 1) {
    uVar4 = 0;
  }
  else {
    uVar5 = (uVar2 - 1) + (ulonglong)(uVar2 == 0);
    uVar4 = uVar2 - 2;
    uVar3 = uVar4;
    if (uVar5 < uVar4) {
      uVar3 = uVar5;
    }
    if (uVar2 == uVar3) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar2,uVar2,&UNK_14335e558);
    }
    if (uVar5 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar3 + 1,uVar2,&UNK_14335e570);
    }
    uVar10 = *puVar1;
    uVar4 = 0;
    uVar3 = 0;
    fVar9 = _DAT_142e4bfe4;
    do {
      fVar14 = (float)uVar10;
      fVar11 = (float)((ulonglong)uVar10 >> 0x20);
      uVar10 = puVar1[uVar3 + 1];
      fVar12 = (float)((ulonglong)uVar10 >> 0x20);
      fVar15 = (float)uVar10 - fVar14;
      fVar16 = fVar12 - fVar11;
      fVar13 = fVar16 * fVar16 + fVar15 * fVar15;
      if (fVar13 <= _DAT_143006dc0) {
        fVar13 = _DAT_143006dc0;
      }
      fVar13 = ((fVar8 - fVar11) * fVar16 + (param_2 - fVar14) * fVar15) / fVar13;
      fVar15 = 0.0;
      if (0.0 <= fVar13) {
        fVar15 = fVar13;
      }
      fVar13 = _DAT_142e36f28;
      if (fVar15 <= _DAT_142e36f28) {
        fVar13 = fVar15;
      }
      fVar14 = param_2 - (fVar13 * (float)uVar10 + (_DAT_142e36f28 - fVar13) * fVar14);
      fVar13 = fVar8 - (fVar13 * fVar12 + (_DAT_142e36f28 - fVar13) * fVar11);
      fVar13 = SQRT(fVar13 * fVar13 + fVar14 * fVar14);
      uVar5 = uVar3;
      if (fVar9 <= fVar13) {
        fVar13 = fVar9;
        uVar5 = uVar4;
      }
      uVar4 = uVar5;
      uVar3 = uVar3 + 1;
      fVar9 = fVar13;
    } while (uVar2 - 1 != uVar3);
    if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar4,uVar2,&UNK_14335e528);
    }
  }
  uVar3 = uVar4 + 1;
  if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar3,uVar2,&UNK_14335e540);
  }
  uVar10 = *(undefined8 *)((longlong)puVar1 + uVar4 * 8 + 4);
  fVar9 = (float)uVar10;
  param_2 = param_2 - *(float *)(puVar1 + uVar4);
  fVar14 = fVar9 - *(float *)((longlong)puVar1 + uVar4 * 8 + 0xc);
  fVar8 = fVar8 - fVar9;
  fVar9 = *(float *)(puVar1 + uVar4) - (float)((ulonglong)uVar10 >> 0x20);
  fVar13 = (float)((ulonglong)param_3 >> 0x20) - 0.0;
  auVar6._0_4_ = param_2 * param_2;
  auVar6._4_4_ = fVar14 * fVar14;
  auVar6._8_8_ = 0;
  auVar7._0_4_ = fVar8 * fVar8 + auVar6._0_4_;
  auVar7._4_4_ = fVar9 * fVar9 + auVar6._4_4_;
  auVar7._8_4_ = fVar13 * fVar13 + 0.0;
  auVar7._12_4_ = 0;
  auVar6 = sqrtps(auVar6,auVar7);
  auVar6 = divps(_DAT_142e37950,auVar6);
  return CONCAT71((int7)(uVar3 >> 8),
                  fVar14 * auVar6._4_4_ * param_2 * auVar6._0_4_ <
                  auVar6._4_4_ * fVar9 * auVar6._0_4_ * fVar8);
}

