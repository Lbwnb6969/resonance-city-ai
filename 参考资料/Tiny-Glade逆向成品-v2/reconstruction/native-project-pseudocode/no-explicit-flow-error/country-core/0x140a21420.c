// VA 0x140a21420, PDB extent 39 bytes
// country_core::meta_commander::MetaCommander::peek
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/meta_commander.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::meta_commander::MetaCommander::peek
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/meta_commander.rs
   Extent: 39 */

longlong pdb_140a21420(ulonglong *param_1)

{
  ulonglong uVar1;
  
  if (param_1[3] != 0) {
    uVar1 = 0;
    if (*param_1 <= param_1[2]) {
      uVar1 = *param_1;
    }
    return (param_1[2] - uVar1) * 0x38 + param_1[1];
  }
  return 0;
}

