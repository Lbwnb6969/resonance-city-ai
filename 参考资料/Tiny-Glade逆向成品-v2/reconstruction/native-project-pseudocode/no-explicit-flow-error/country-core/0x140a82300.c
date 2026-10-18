// VA 0x140a82300, PDB extent 27 bytes
// country_core::input::ActiveInputModeTracker::mode
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::input::ActiveInputModeTracker::mode
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/mod.rs
   Extent: 27 */

bool pdb_140a82300(ulonglong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[2] < *param_1;
  if (*param_1 == param_1[2]) {
    bVar1 = (uint)param_1[3] < (uint)param_1[1];
  }
  return bVar1;
}

