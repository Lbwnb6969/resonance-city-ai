// VA 0x141c70310, PDB extent 176 bytes
// utils::curve::curve2_serialized_as_curve3::serialize<serde_json::value::ser::RawValueEmitter>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::curve2_serialized_as_curve3::serialize<serde_json::value::ser::RawValueEmitter>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 176 */

undefined1 * pdb_141c70310(undefined1 *param_1)

{
  undefined8 uVar1;
  longlong lStack_50;
  byte *pbStack_48;
  longlong lStack_38;
  byte *pbStack_30;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_140082580(&lStack_50);
  uVar1 = pdb_142db8610(&UNK_14335e2c1,5,3);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 6;
  if (lStack_50 != 0) {
    pub_1406abac0(pbStack_48,lStack_50 * 0xc,4);
  }
  if (lStack_38 != 0) {
    pub_1406abac0(pbStack_30,lStack_38 << 2,4);
  }
  return param_1;
}

