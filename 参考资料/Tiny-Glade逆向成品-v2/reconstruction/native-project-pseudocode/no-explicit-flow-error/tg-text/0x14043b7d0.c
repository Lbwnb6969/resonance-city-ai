// VA 0x14043b7d0, PDB extent 9 bytes
// tg_text::shape_stream::RawShapeStream::clear
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::shape_stream::RawShapeStream::clear
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
   Extent: 9 */

void pdb_14043b7d0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

