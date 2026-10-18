// VA 0x140cb8eb0, PDB extent 20 bytes
// tg_text::shape_stream::impl$1::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::shape_stream::impl$1::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
   Extent: 20 */

void pdb_140cb8eb0(undefined8 *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 1) = param_2;
  *param_1 = 0x8000000000000001;
  return;
}

