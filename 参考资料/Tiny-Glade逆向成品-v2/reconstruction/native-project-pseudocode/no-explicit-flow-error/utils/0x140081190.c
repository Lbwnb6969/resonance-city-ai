// VA 0x140081190, PDB extent 513 bytes
// utils::curve::Curve::get_approx_coord_from_pos<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::get_approx_coord_from_pos<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 513 */

int pdb_140081190(longlong param_1,float param_2,float param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  iVar3 = 0;
  if (1 < uVar1) {
    puVar2 = *(undefined8 **)(param_1 + 8);
    uVar8 = puVar2[1];
    fVar14 = (float)*puVar2;
    fVar9 = (float)((ulonglong)*puVar2 >> 0x20);
    fVar11 = (float)((ulonglong)uVar8 >> 0x20);
    fVar6 = (float)uVar8 - fVar14;
    fVar7 = fVar11 - fVar9;
    fVar10 = fVar7 * fVar7 + fVar6 * fVar6;
    if (fVar10 <= _DAT_142e36f24) {
      fVar10 = _DAT_142e36f24;
    }
    fVar10 = ((param_3 - fVar9) * fVar7 + (param_2 - fVar14) * fVar6) / fVar10;
    fVar6 = 0.0;
    if (0.0 <= fVar10) {
      fVar6 = fVar10;
    }
    fVar10 = _DAT_142e36f28;
    if (fVar6 <= _DAT_142e36f28) {
      fVar10 = fVar6;
    }
    fVar6 = param_2 - (fVar10 * (float)uVar8 + (_DAT_142e36f28 - fVar10) * fVar14);
    fVar7 = param_3 - (fVar10 * fVar11 + (_DAT_142e36f28 - fVar10) * fVar9);
    fVar11 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
    fVar7 = 0.0;
    fVar6 = _DAT_142e36f3c;
    if ((fVar11 < _DAT_142e36f3c) &&
       ((fVar10 < 0.0 || (fVar7 = fVar10, fVar6 = fVar11, _DAT_142e36f28 < fVar10)))) {
LAB_140081378:
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(fVar7,0x2a,&UNK_142e37330);
    }
    if (uVar1 != 2) {
      iVar4 = 1;
      iVar3 = 0;
      lVar5 = 0x10;
      do {
        fVar11 = (float)uVar8;
        fVar14 = (float)((ulonglong)uVar8 >> 0x20);
        uVar8 = *(undefined8 *)((longlong)puVar2 + lVar5);
        fVar9 = (float)((ulonglong)uVar8 >> 0x20);
        fVar12 = (float)uVar8 - fVar11;
        fVar13 = fVar9 - fVar14;
        fVar10 = fVar13 * fVar13 + fVar12 * fVar12;
        if (fVar10 <= _DAT_142e36f24) {
          fVar10 = _DAT_142e36f24;
        }
        fVar10 = ((param_3 - fVar14) * fVar13 + (param_2 - fVar11) * fVar12) / fVar10;
        fVar12 = 0.0;
        if (0.0 <= fVar10) {
          fVar12 = fVar10;
        }
        fVar10 = _DAT_142e36f28;
        if (fVar12 <= _DAT_142e36f28) {
          fVar10 = fVar12;
        }
        fVar11 = param_2 - (fVar10 * (float)uVar8 + (_DAT_142e36f28 - fVar10) * fVar11);
        fVar14 = param_3 - (fVar10 * fVar9 + (_DAT_142e36f28 - fVar10) * fVar14);
        fVar11 = SQRT(fVar14 * fVar14 + fVar11 * fVar11);
        if (fVar11 < fVar6) {
          if (fVar10 < 0.0) goto LAB_140081378;
          fVar7 = fVar10;
          fVar6 = fVar11;
          iVar3 = iVar4;
          if (_DAT_142e36f28 < fVar10) goto LAB_140081378;
        }
        lVar5 = lVar5 + 8;
        iVar4 = iVar4 + 1;
      } while (uVar1 << 3 != lVar5);
    }
  }
  return iVar3;
}

