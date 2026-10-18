// VA 0x14093a840, PDB extent 144 bytes
// country_core::systems::render_loop::vermeer::VermeerState::activate
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/vermeer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::vermeer::VermeerState::activate
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/vermeer.rs
   Extent: 144 */

void pdb_14093a840(longlong *param_1,undefined1 param_2,undefined1 param_3)

{
  if (((short)param_1[3] != 2) && (*param_1 != 0)) {
    pdb_14098a200(param_1);
  }
  *(undefined8 *)((longlong)param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1e) = param_2;
  *(undefined1 *)((longlong)param_1 + 0x1f) = param_3;
  return;
}

