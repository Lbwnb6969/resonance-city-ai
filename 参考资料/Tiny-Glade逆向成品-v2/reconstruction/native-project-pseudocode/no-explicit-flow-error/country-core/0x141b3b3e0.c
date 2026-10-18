// VA 0x141b3b3e0, PDB extent 15 bytes
// parry3d::shape::shape::impl$9::as_typed_shape
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: parry3d::shape::shape::impl$9::as_typed_shape
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 15 */

undefined8 * pdb_141b3b3e0(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = 5;
  return param_1;
}

