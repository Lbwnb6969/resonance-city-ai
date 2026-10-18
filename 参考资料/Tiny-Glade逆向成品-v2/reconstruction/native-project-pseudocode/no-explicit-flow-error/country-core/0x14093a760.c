// VA 0x14093a760, PDB extent 110 bytes
// country_core::systems::render_loop::vermeer::VermeerState::deactivate
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/vermeer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::vermeer::VermeerState::deactivate
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/vermeer.rs
   Extent: 110 */

void pdb_14093a760(longlong *param_1)

{
  if (((short)param_1[3] != 2) && (*param_1 != 0)) {
    pdb_14098a200(param_1);
  }
  *(undefined2 *)(param_1 + 3) = 2;
  return;
}

