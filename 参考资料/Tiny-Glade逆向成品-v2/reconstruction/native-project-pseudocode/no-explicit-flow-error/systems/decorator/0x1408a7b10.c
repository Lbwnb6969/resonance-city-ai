// VA 0x1408a7b10, PDB extent 604 bytes
// system_decorator::decorator_visual::playermade_stairs::calculate_adjusted_ladder_positions
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::calculate_adjusted_ladder_positions
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/mod.rs
   Extent: 604 */

float * pdb_1408a7b10(float *param_1,longlong param_2,float *param_3,float *param_4,
                     undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined8 auStack_c0 [16];
  
  fVar9 = param_3[1];
  fVar6 = param_4[1];
  if (fVar9 <= fVar6) {
    lVar2 = pdb_140c01470(param_2 + 0x20);
    fVar12 = 0.0;
    if ((lVar2 != 0) && (lVar2 = param_2, *(char *)(param_2 + 0x38) == '\x01')) goto LAB_1408a7ba9;
  }
  else {
    lVar2 = pdb_140c01470(param_2);
    fVar12 = 0.0;
    if ((lVar2 != 0) && (*(char *)(param_2 + 0x18) == '\x01')) {
      lVar2 = param_2 + 0x20;
LAB_1408a7ba9:
      lVar2 = pdb_140c01470(lVar2);
      fVar12 = _DAT_14300b140;
      if (lVar2 != 0) {
        fVar12 = 0.0;
      }
    }
  }
  fVar8 = *param_3;
  fVar10 = param_3[2];
  fVar11 = *param_4;
  fVar7 = param_4[2];
  fVar3 = fVar8 - fVar11;
  fVar4 = fVar10 - fVar7;
  fVar5 = _DAT_142e36f28 / SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  auStack_c0[0] = CONCAT44(fVar5 * fVar4,fVar5 * fVar3);
  pdb_140df4520(&fStack_d0,auStack_c0);
  if (((fVar6 <= fVar9) || (*(byte *)(param_2 + 0x18) < 2)) ||
     (cVar1 = pdb_1408a7d70(param_5,param_6,param_7,param_8,1), cVar1 != '\0')) {
    fVar3 = 0.0;
    if ((fVar9 <= fVar6) || (*(byte *)(param_2 + 0x38) < 2)) goto LAB_1408a7c9e;
    cVar1 = pdb_1408a7d70(param_5,param_6,param_8,param_7,0);
    fVar3 = 0.0;
    if (cVar1 != '\0') goto LAB_1408a7c9e;
  }
  fVar3 = _DAT_142e37988;
LAB_1408a7c9e:
  if (fVar9 <= fVar6) {
    fVar8 = fVar8 + fStack_d0 * fVar3;
    fVar9 = fVar9 + fStack_cc * fVar3;
    fVar10 = fVar10 + fStack_c8 * fVar3;
    fVar11 = fVar11 + fStack_d0 * fVar12;
    fVar6 = fVar6 + fVar12 * fStack_cc;
    fVar7 = fVar7 + fVar12 * fStack_c8;
  }
  else {
    fVar8 = fVar8 - fStack_d0 * fVar12;
    fVar9 = fVar9 - fStack_cc * fVar12;
    fVar10 = fVar10 - fStack_c8 * fVar12;
    fVar11 = fVar11 - fStack_d0 * fVar3;
    fVar6 = fVar6 - fVar3 * fStack_cc;
    fVar7 = fVar7 - fVar3 * fStack_c8;
  }
  *param_1 = fVar8;
  param_1[1] = fVar9;
  param_1[2] = fVar10;
  param_1[3] = fVar11;
  *(ulonglong *)(param_1 + 4) = CONCAT44(fVar7,fVar6);
  return param_1;
}

