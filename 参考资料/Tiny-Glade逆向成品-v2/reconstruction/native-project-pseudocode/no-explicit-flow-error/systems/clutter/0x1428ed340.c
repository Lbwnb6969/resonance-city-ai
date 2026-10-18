// VA 0x1428ed340, PDB extent 676 bytes
// system_clutter::autoclutter::manage_autoclutter_entities::manage_autoclutter_entities::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/manage_autoclutter_entities.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::autoclutter::manage_autoclutter_entities::manage_autoclutter_entities::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/manage_autoclutter_entities.rs
   Extent: 676 */

void pdb_1428ed340(float *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = *(float *)(param_2 + 1);
  fVar2 = (float)((ulonglong)*param_2 >> 0x20);
  fVar1 = (float)*param_2;
  fVar3 = fVar1 * 0.0 + fVar6 * _DAT_142e377f0;
  fVar8 = (float)(_DAT_142e37820 ^ (uint)fVar1) - _DAT_142e377f0 * fVar2;
  fVar7 = _DAT_142e377f0 * fVar2 + fVar6;
  fVar4 = _DAT_142e36f28 / SQRT(fVar8 * fVar8 + fVar3 * fVar3 + fVar7 * fVar7);
  fVar7 = fVar7 * fVar4;
  fVar3 = fVar3 * fVar4;
  fVar4 = fVar4 * fVar8;
  fVar8 = fVar2 * fVar4 - fVar6 * fVar3;
  fVar10 = fVar6 * fVar7 - fVar1 * fVar4;
  fVar11 = fVar1 * fVar3 - fVar2 * fVar7;
  fVar9 = _DAT_142e36f28 / SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar8 * fVar8);
  fVar8 = fVar8 * fVar9;
  fVar11 = fVar9 * fVar11;
  if (fVar6 <= 0.0) {
    fVar7 = fVar10 * fVar9 - fVar7;
    if (fVar7 <= 0.0) {
      fVar7 = (_DAT_142e36f28 - fVar6) - fVar7;
      fVar5 = _DAT_142e36f50 / SQRT(fVar7);
      fVar6 = fVar7 * fVar5;
      fVar9 = (fVar3 + fVar8) * fVar5;
      fVar10 = (fVar4 + fVar1) * fVar5;
      fVar5 = (fVar11 - fVar2) * fVar5;
    }
    else {
      fVar7 = fVar7 + (_DAT_142e36f28 - fVar6);
      fVar5 = _DAT_142e36f50 / SQRT(fVar7);
      fVar6 = (fVar3 + fVar8) * fVar5;
      fVar9 = fVar7 * fVar5;
      fVar10 = (fVar11 + fVar2) * fVar5;
      fVar5 = (fVar1 - fVar4) * fVar5;
    }
  }
  else {
    fVar7 = fVar7 + fVar10 * fVar9;
    if (fVar7 <= 0.0) {
      fVar7 = (fVar6 + _DAT_142e36f28) - fVar7;
      fVar5 = _DAT_142e36f50 / SQRT(fVar7);
      fVar6 = fVar5 * (fVar1 + fVar4);
      fVar9 = fVar5 * (fVar2 + fVar11);
      fVar10 = fVar7 * fVar5;
      fVar5 = fVar5 * (fVar3 - fVar8);
    }
    else {
      fVar7 = fVar7 + fVar6 + _DAT_142e36f28;
      fVar5 = _DAT_142e36f50 / SQRT(fVar7);
      fVar6 = fVar5 * (fVar11 - fVar2);
      fVar9 = fVar5 * (fVar1 - fVar4);
      fVar10 = fVar5 * (fVar3 - fVar8);
      fVar5 = fVar5 * fVar7;
    }
  }
  *param_1 = fVar6;
  param_1[1] = fVar9;
  param_1[2] = fVar10;
  param_1[3] = fVar5;
  return;
}

