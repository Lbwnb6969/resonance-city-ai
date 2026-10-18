// VA 0x1414851c0, PDB extent 545 bytes
// system_wall_constructor::construct_wooden_walls::construct_wall_boards::top_rim_merlon_ranges
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::top_rim_merlon_ranges
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
   Extent: 545 */

undefined8 * pdb_1414851c0(undefined8 *param_1,float param_2,float param_3,char param_4)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float *pfStack_50;
  float *pfStack_48;
  float *pfStack_40;
  float *pfStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong auStack_20 [3];
  
  fVar3 = param_3 - param_2;
  if (fVar3 <= 0.0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
  }
  else {
    fStack_5c = param_2;
    fStack_58 = param_3;
    if (param_4 == '\0') {
      fVar2 = (float)pub_142e32b00(fVar3 / _DAT_14330a260);
      if (fVar2 <= _DAT_142e36f28) {
        fVar2 = _DAT_142e36f28;
      }
      uVar1 = 0;
      if (0.0 <= fVar2) {
        uVar1 = (longlong)(fVar2 - _DAT_142e36f2c) & (longlong)fVar2 >> 0x3f | (longlong)fVar2;
      }
      uStack_30 = 0xffffffffffffffff;
      if (fVar2 <= _DAT_142e36f30) {
        uStack_30 = uVar1;
      }
      fStack_54 = fVar3 / (float)uStack_30;
      fStack_60 = fStack_54 * _DAT_142e36f50;
      pfStack_50 = &fStack_5c;
      pfStack_48 = &fStack_54;
      pfStack_40 = &fStack_60;
      pfStack_38 = (float *)0x0;
      pdb_1413ed750(param_1,&pfStack_50);
    }
    else {
      fVar2 = (float)pub_142e32b00((fVar3 / _DAT_14330a248 + _DAT_142e36f28) * _DAT_142e36f50);
      if (fVar2 <= _DAT_142e37830) {
        fVar2 = _DAT_142e37830;
      }
      uVar1 = 0;
      if (0.0 <= fVar2) {
        uVar1 = (longlong)(fVar2 - _DAT_142e36f2c) & (longlong)fVar2 >> 0x3f | (longlong)fVar2;
      }
      uStack_28 = 0xffffffffffffffff;
      if (fVar2 <= _DAT_142e36f30) {
        uStack_28 = uVar1;
      }
      uVar1 = uStack_28 * 2 - 1;
      if ((longlong)uVar1 < 0) {
        fStack_60 = (float)(uVar1 >> 1 | 1);
        fStack_60 = fStack_60 + fStack_60;
      }
      else {
        fStack_60 = (float)(longlong)uVar1;
      }
      fStack_60 = fVar3 / fStack_60;
      pfStack_50 = &fStack_5c;
      pfStack_48 = &fStack_60;
      pfStack_40 = (float *)auStack_20;
      pfStack_38 = &fStack_58;
      uStack_30 = 0;
      auStack_20[0] = uStack_28;
      pdb_1413eea80(param_1,&pfStack_50);
    }
  }
  return param_1;
}

