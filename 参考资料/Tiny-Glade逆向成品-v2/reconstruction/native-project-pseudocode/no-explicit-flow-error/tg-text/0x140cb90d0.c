// VA 0x140cb90d0, PDB extent 9 bytes
// tg_text::shape_stream::ShapeStream::is_empty
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::shape_stream::ShapeStream::is_empty
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
   Extent: 9 */

bool pdb_140cb90d0(longlong param_1)

{
  return *(longlong *)(param_1 + 0x10) == 0;
}

