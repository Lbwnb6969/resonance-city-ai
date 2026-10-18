// VA 0x140cb68f0, PDB extent 7 bytes
// tg_text::TextFragment::set_align
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::TextFragment::set_align
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 7 */

void pdb_140cb68f0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x256) = param_2;
  return;
}

