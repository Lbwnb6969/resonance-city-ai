// VA 0x140df2190, PDB extent 25 bytes
// utils::geometry::rectangle::Rectangle2d::with_expanded_size
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::with_expanded_size
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 25 */

undefined8 * pdb_140df2190(undefined8 *param_1,undefined8 *param_2,float param_3,float param_4)

{
  undefined8 uVar1;
  
  param_1[2] = CONCAT44(param_4 + (float)((ulonglong)param_2[2] >> 0x20),param_3 + (float)param_2[2]
                       );
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return param_1;
}

