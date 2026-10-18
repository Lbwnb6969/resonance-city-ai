// VA 0x14100a890, PDB extent 12 bytes
// usdl_sys::event::mouse_button_from_raw
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/event.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl_sys::event::mouse_button_from_raw
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/event.rs
   Extent: 12 */

byte pdb_14100a890(byte param_1)

{
  if (5 < param_1) {
    param_1 = 0;
  }
  return param_1;
}

