// VA 0x140de83c0, PDB extent 47 bytes
// utils::mouse_ss_to_cs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::mouse_ss_to_cs
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 47 */

float pdb_140de83c0(float param_1,undefined8 param_2,float param_3)

{
  return param_1 / param_3 + param_1 / param_3 + _DAT_142e36f34;
}

