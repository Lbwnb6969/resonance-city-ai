// VA 0x140a61840, PDB extent 21 bytes
// country_core::resources::stairs::stairs_state::impl$1::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::stairs::stairs_state::impl$1::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 21 */

uint pdb_140a61840(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0x28)) {
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  return uVar1;
}

