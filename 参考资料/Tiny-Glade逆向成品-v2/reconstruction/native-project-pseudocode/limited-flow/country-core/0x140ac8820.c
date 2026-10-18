// VA 0x140ac8820, PDB extent 226 bytes
// country_core::systems::egui_input::EguiInputResource::on_mouse_button
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/egui_input.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::egui_input::EguiInputResource::on_mouse_button
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/egui_input.rs
   Extent: 226 */

void pdb_140ac8820(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140ac8849. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14304d1b8 + *(int *)(&UNK_14304d1b8 + (ulonglong)*(ushort *)(param_2 + 8) * 4)))()
  ;
  return;
}

