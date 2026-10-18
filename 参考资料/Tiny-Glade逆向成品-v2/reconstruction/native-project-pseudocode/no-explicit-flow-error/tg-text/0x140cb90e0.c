// VA 0x140cb90e0, PDB extent 27 bytes
// tg_text::shape_stream::RawShapeStream::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::shape_stream::RawShapeStream::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
   Extent: 27 */

undefined8 * pdb_140cb90e0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = 0;
  return param_1;
}

