// VA 0x142b50090, PDB extent 23 bytes
// utils::geometry::line_relation::LineInterval::line_segment
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/line_relation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::line_relation::LineInterval::line_segment
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/line_relation.rs
   Extent: 23 */

undefined8 * pdb_142b50090(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = _DAT_142e378e0;
  return param_1;
}

