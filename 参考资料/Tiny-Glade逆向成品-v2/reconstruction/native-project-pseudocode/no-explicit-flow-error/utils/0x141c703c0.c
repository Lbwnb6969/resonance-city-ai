// VA 0x141c703c0, PDB extent 162 bytes
// utils::curve::curve2_serialized_as_curve3::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::curve2_serialized_as_curve3::serialize<serde_json::value::ser::Serializer>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 162 */

undefined8 pdb_141c703c0(undefined8 param_1)

{
  longlong lStack_58;
  byte *pbStack_50;
  longlong lStack_40;
  byte *pbStack_38;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_140082580(&lStack_58);
  pdb_1419a6960(param_1,&lStack_58);
  if (lStack_58 != 0) {
    pub_1406abac0(pbStack_50,lStack_58 * 0xc,4);
  }
  if (lStack_40 != 0) {
    pub_1406abac0(pbStack_38,lStack_40 << 2,4);
  }
  return param_1;
}

