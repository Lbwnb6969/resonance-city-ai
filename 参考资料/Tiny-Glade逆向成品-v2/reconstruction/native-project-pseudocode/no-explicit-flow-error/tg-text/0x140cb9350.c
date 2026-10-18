// VA 0x140cb9350, PDB extent 25 bytes
// tg_text::shape_stream::impl$2::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::shape_stream::impl$2::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
   Extent: 25 */

void pdb_140cb9350(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0x8000000000000000;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return;
}

