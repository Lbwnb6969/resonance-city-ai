// VA 0x1406d0960, PDB extent 4 bytes
// usdl::rect::Rect::y
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/rect.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::rect::Rect::y
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/rect.rs
   Extent: 4 */

undefined4 pdb_1406d0960(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

