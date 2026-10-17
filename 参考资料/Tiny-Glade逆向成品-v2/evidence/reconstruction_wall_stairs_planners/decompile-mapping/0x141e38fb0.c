// Matched PDB: utils::curve::Curve::get_approx_u_from_pos<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
// VA 0x141e38fb0, PDB extent 676 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   utils::curve::Curve::get_approx_u_from_pos<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   Extent: 676 bytes. No whole-program auto-analysis. */

void pdb_141e38fb0(undefined *param_1,float param_2,float param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  if (uVar6 < 2) {
    pdb_142dc83b0(&UNK_1433ecc80,0x29,param_4);
LAB_141e39215:
    pdb_142dc83b0(&UNK_1433ecdf3,0x1d,param_4);
    uVar6 = param_4;
LAB_141e39229:
    uVar5 = pdb_142dc83b0(&UNK_1433ece78,0x22,uVar6);
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 8);
    fVar16 = (float)puVar2[1];
    fVar18 = (float)((ulonglong)puVar2[1] >> 0x20);
    fVar11 = (float)*puVar2;
    fVar14 = (float)((ulonglong)*puVar2 >> 0x20);
    fVar10 = fVar16 - fVar11;
    fVar12 = fVar18 - fVar14;
    fVar13 = fVar12 * fVar12 + fVar10 * fVar10;
    if (fVar13 <= _DAT_142e36f24) {
      fVar13 = _DAT_142e36f24;
    }
    fVar13 = ((param_3 - fVar14) * fVar12 + (param_2 - fVar11) * fVar10) / fVar13;
    fVar10 = 0.0;
    if (0.0 <= fVar13) {
      fVar10 = fVar13;
    }
    fVar13 = _DAT_142e36f28;
    if (fVar10 <= _DAT_142e36f28) {
      fVar13 = fVar10;
    }
    fVar10 = param_2 - (fVar13 * fVar16 + (_DAT_142e36f28 - fVar13) * fVar11);
    fVar12 = param_3 - (fVar13 * fVar18 + (_DAT_142e36f28 - fVar13) * fVar14);
    fVar14 = SQRT(fVar12 * fVar12 + fVar10 * fVar10);
    fVar11 = 0.0;
    fVar10 = _DAT_142e36f3c;
    fVar12 = _DAT_142e36f28;
    if ((_DAT_142e36f3c <= fVar14) ||
       ((0.0 <= fVar13 && (fVar11 = fVar13, fVar10 = fVar14, fVar13 <= _DAT_142e36f28)))) {
      uVar5 = 0;
      if (uVar6 != 2) {
        uVar7 = 1;
        lVar8 = 0x10;
        do {
          fVar14 = (float)*(undefined8 *)((longlong)puVar2 + lVar8);
          fVar9 = (float)((ulonglong)*(undefined8 *)((longlong)puVar2 + lVar8) >> 0x20);
          fVar15 = fVar14 - fVar16;
          fVar17 = fVar9 - fVar18;
          fVar13 = fVar17 * fVar17 + fVar15 * fVar15;
          if (fVar13 <= _DAT_142e36f24) {
            fVar13 = _DAT_142e36f24;
          }
          fVar13 = ((param_3 - fVar18) * fVar17 + (param_2 - fVar16) * fVar15) / fVar13;
          fVar15 = 0.0;
          if (0.0 <= fVar13) {
            fVar15 = fVar13;
          }
          fVar13 = _DAT_142e36f28;
          if (fVar15 <= _DAT_142e36f28) {
            fVar13 = fVar15;
          }
          fVar16 = param_2 - (fVar13 * fVar14 + (_DAT_142e36f28 - fVar13) * fVar16);
          fVar18 = param_3 - (fVar13 * fVar9 + (_DAT_142e36f28 - fVar13) * fVar18);
          fVar16 = SQRT(fVar18 * fVar18 + fVar16 * fVar16);
          if (fVar16 < fVar10) {
            if (fVar13 < 0.0) goto LAB_141e3917c;
            uVar5 = (ulonglong)uVar7;
            fVar11 = fVar13;
            fVar10 = fVar16;
            if (_DAT_142e36f28 < fVar13) goto LAB_141e3917c;
          }
          uVar4 = (uint)uVar5;
          lVar8 = lVar8 + 8;
          uVar7 = uVar7 + 1;
          fVar16 = fVar14;
          fVar18 = fVar9;
        } while (uVar6 << 3 != lVar8);
        goto LAB_141e39194;
      }
    }
    else {
LAB_141e3917c:
      param_1 = &UNK_1433eccc8;
      uVar4 = pdb_142dc83b0(&UNK_1433eccc8,0x2a,&UNK_1433eccf8);
LAB_141e39194:
      uVar5 = (ulonglong)uVar4;
    }
    uVar6 = param_4;
    if (uVar5 < *(ulonglong *)(param_1 + 0x28)) {
      uVar6 = uVar5 + 1;
      if (*(ulonglong *)(param_1 + 0x28) <= uVar6) goto LAB_141e39248;
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + uVar5 * 4);
      fVar16 = fVar11 * (float)((ulonglong)uVar1 >> 0x20) + (fVar12 - fVar11) * (float)uVar1;
      if (NAN(fVar16)) goto LAB_141e39215;
      uVar6 = param_4;
      if (ABS(fVar16) != INFINITY) {
        return;
      }
      goto LAB_141e39229;
    }
  }
  pdb_142dc81f2(uVar5);
LAB_141e39248:
  pdb_142dc81f2(uVar6);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

