// VA 0x140a003a0, PDB extent 120 bytes
// country_core::resources::gui::NextEscMenuState::set
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::gui::NextEscMenuState::set
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
   Extent: 120 */

void pdb_140a003a0(longlong *param_1,undefined8 param_2)

{
  if ((*param_1 != 0xc) && ((uint)*param_1 < 2)) {
    pdb_1404c91b0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000142e32760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memcpy(param_1,param_2,0xa0);
  return;
}

