// VA 0x140ae7200, PDB extent 21 bytes
// country_core::systems::ui_clutter::ui_focus_decoclutter::impl$0::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_clutter/ui_focus_decoclutter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui_clutter::ui_focus_decoclutter::impl$0::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_clutter/ui_focus_decoclutter.rs
   Extent: 21 */

undefined4 * pdb_140ae7200(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}

