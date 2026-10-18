// VA 0x140b7e570, PDB extent 11 bytes
// country_core::systems::save::load_completion_checker::SessionLoadReadiness::deny_load
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/load_completion_checker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::load_completion_checker::SessionLoadReadiness::deny_load
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/load_completion_checker.rs
   Extent: 11 */

bool pdb_140b7e570(char *param_1)

{
  return (byte)(*param_1 - 1U) < 2;
}

