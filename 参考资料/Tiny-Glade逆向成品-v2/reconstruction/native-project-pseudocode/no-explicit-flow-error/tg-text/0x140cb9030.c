// VA 0x140cb9030, PDB extent 147 bytes
// tg_text::shape_stream::ShapeStream::encode_no_images
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::shape_stream::ShapeStream::encode_no_images
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
   Extent: 147 */

undefined8 * pdb_140cb9030(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uStack_30 = 0;
  uStack_28 = 4;
  uStack_20 = 0;
  pdb_140cb9100(&uStack_30,param_2,1,&UNK_14307ab78);
  param_1[2] = uStack_20;
  *param_1 = uStack_30;
  param_1[1] = uStack_28;
  return param_1;
}

