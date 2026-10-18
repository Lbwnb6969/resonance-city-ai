// VA 0x140cb8ed0, PDB extent 164 bytes
// tg_text::shape_stream::ShapeStream::fill_color
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::shape_stream::ShapeStream::fill_color
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
   Extent: 164 */

longlong * pdb_140cb8ed0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2[2];
  if (lVar1 == *param_2) {
    pdb_142d7e6e0(param_2);
  }
  lVar2 = param_2[1];
  *(undefined8 *)(lVar2 + lVar1 * 0x20) = 0x8000000000000002;
  *(undefined4 *)(lVar2 + 8 + lVar1 * 0x20) = param_3;
  param_2[2] = lVar1 + 1;
  param_1[2] = lVar1 + 1;
  lVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar1;
  return param_1;
}

