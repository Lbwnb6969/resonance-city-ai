// VA 0x141473db0, PDB extent 416 bytes
// utils::geometry::brace::quarter_ellipse_midpoint_height_ratio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/brace.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::brace::quarter_ellipse_midpoint_height_ratio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/brace.rs
   Extent: 416 */

undefined8 pdb_141473db0(undefined8 param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar3 = (undefined4)((ulonglong)param_1 >> 0x20);
  fVar2 = (float)param_1;
  fVar6 = _DAT_14330bc48 * fVar2 + _DAT_143043160;
  fVar5 = _DAT_14330bc4c * fVar2 + _DAT_143043160;
  if (_DAT_142e36f50 <= fVar6) {
    fVar8 = fVar2 * 0.0 + 0.0;
    fVar4 = fVar6;
    fVar7 = fVar8;
    uVar1 = 0;
  }
  else {
    fVar7 = _DAT_14330bc50 * fVar2 + _DAT_143011014;
    fVar8 = _DAT_14330bc54 * fVar2 + _DAT_143011014;
    fVar4 = fVar5;
    fVar5 = fVar8;
    if (_DAT_142e36f50 <= fVar7) {
LAB_141473ef5:
      fVar8 = fVar4;
      fVar4 = fVar7;
      fVar7 = fVar6;
      uVar1 = 0;
    }
    else {
      fVar6 = _DAT_142e36f50 - _DAT_14330bc58 * fVar2;
      fVar5 = _DAT_14330bc58 * fVar2 + _DAT_142e36f50;
      fVar4 = fVar6;
      uVar1 = 0;
      if (fVar6 < _DAT_142e36f50) {
        fVar7 = _DAT_14330bc5c * fVar2 + _DAT_143043164;
        fVar8 = _DAT_14330bc60 * fVar2 + _DAT_143043164;
        fVar4 = fVar5;
        fVar5 = fVar8;
        if (_DAT_142e36f50 <= fVar7) goto LAB_141473ef5;
        fVar6 = _DAT_14330bc64 * fVar2 + _DAT_143043168;
        fVar5 = fVar2 * _DAT_14330bc68 + _DAT_143043168;
        fVar4 = fVar6;
        uVar1 = uVar3;
        if (fVar6 < _DAT_142e36f50) {
          fVar4 = fVar2 * 0.0 + _DAT_142e36f28;
          uVar3 = 0;
          fVar2 = _DAT_142e36f50;
          fVar8 = fVar5;
          fVar7 = fVar6;
          fVar5 = fVar4;
          if (fVar4 < _DAT_142e36f50) goto LAB_141473f3c;
        }
      }
    }
  }
  uVar3 = uVar1;
  fVar6 = (_DAT_142e36f50 - fVar7) / (fVar4 - fVar7);
  fVar2 = 0.0;
  if (0.0 <= fVar6) {
    fVar2 = fVar6;
  }
  fVar6 = _DAT_142e36f28;
  if (fVar2 <= _DAT_142e36f28) {
    fVar6 = fVar2;
  }
  fVar2 = (fVar5 - fVar8) * fVar6 + fVar8;
LAB_141473f3c:
  return CONCAT44(uVar3,fVar2);
}

