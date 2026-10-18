// VA 0x14100b390, PDB extent 18 bytes
// exr::meta::attribute::IntegerBounds::zero
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/syswm.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: exr::meta::attribute::IntegerBounds::zero
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/syswm.rs
   Extent: 18 */

undefined8 * pdb_14100b390(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}

