// VA 0x1414736b0, PDB extent 89 bytes
// utils::geometry::intersect::Triangle::intersect_triangle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/intersect.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::intersect::Triangle::intersect_triangle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/intersect.rs
   Extent: 89 */

undefined8 pdb_1414736b0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_48 = *(undefined4 *)(param_2 + 4);
  uStack_68 = *param_2;
  uStack_60 = param_2[1];
  uStack_58 = param_2[2];
  uStack_50 = param_2[3];
  uStack_18 = param_3[8];
  uStack_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  uStack_28 = param_3[4];
  uStack_24 = param_3[5];
  uStack_20 = param_3[6];
  uStack_1c = param_3[7];
  pdb_1424c5110(uStack_38,&uStack_68,&uStack_38);
  return param_1;
}

