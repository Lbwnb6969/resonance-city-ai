// VA 0x141473cd0, PDB extent 223 bytes
// utils::geometry::brace::quarter_ellipse_brace
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/brace.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::brace::quarter_ellipse_brace
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/brace.rs
   Extent: 223 */

undefined8 * pdb_141473cd0(undefined8 *param_1,float *param_2,float *param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 uStack_48;
  undefined4 *puStack_40;
  float *pfStack_38;
  undefined8 *puStack_30;
  float *pfStack_28;
  float *pfStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  auVar2._0_4_ = *param_3 - *param_2;
  auVar2._4_4_ = param_3[2] - param_2[2];
  auVar2._8_8_ = 0;
  fStack_50 = SQRT(auVar2._4_4_ * auVar2._4_4_ + auVar2._0_4_ * auVar2._0_4_);
  if (fStack_50 < _DAT_143009d64) {
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  auVar1._4_4_ = fStack_50;
  auVar1._0_4_ = fStack_50;
  auVar1._8_8_ = 0;
  auVar2 = divps(auVar2,auVar1);
  uStack_48 = auVar2._0_8_;
  fStack_4c = param_3[1] - param_2[1];
  puStack_40 = &uStack_54;
  puStack_30 = &uStack_48;
  pfStack_28 = &fStack_50;
  pfStack_20 = &fStack_4c;
  uStack_18 = 0;
  uStack_10 = 7;
  uStack_54 = param_4;
  pfStack_38 = param_2;
  pdb_141e3b9c0(param_1,&puStack_40);
  return param_1;
}

