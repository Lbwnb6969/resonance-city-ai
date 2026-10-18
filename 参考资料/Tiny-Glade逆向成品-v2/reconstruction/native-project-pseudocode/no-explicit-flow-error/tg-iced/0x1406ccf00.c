// VA 0x1406ccf00, PDB extent 19 bytes
// tg_iced::gui_runner_sdl::impl$3::window_handle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/gui_runner_sdl.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_iced::gui_runner_sdl::impl$3::window_handle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/gui_runner_sdl.rs
   Extent: 19 */

void pdb_1406ccf00(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  param_1[2] = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *param_1 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = uVar1;
  return;
}

