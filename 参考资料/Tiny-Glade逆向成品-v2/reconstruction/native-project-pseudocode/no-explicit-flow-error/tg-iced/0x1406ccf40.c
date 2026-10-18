// VA 0x1406ccf40, PDB extent 29 bytes
// tg_iced::gui_runner_sdl::translate_mouse_button
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/gui_runner_sdl.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_iced::gui_runner_sdl::translate_mouse_button
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/gui_runner_sdl.rs
   Extent: 29 */

ulonglong pdb_1406ccf40(byte param_1)

{
  ulonglong uVar1;
  
  uVar1 = 6;
  if (param_1 < 4) {
    uVar1 = 0x1000200000006U >> ((param_1 & 3) << 4) & 0xffffffff;
  }
  return uVar1;
}

