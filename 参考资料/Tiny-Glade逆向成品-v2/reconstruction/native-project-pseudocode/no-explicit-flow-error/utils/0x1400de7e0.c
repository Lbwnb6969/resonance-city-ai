// VA 0x1400de7e0, PDB extent 162 bytes
// utils::curve::curve2_serialized_as_curve3::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::curve2_serialized_as_curve3::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 162 */

undefined8 pdb_1400de7e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lStack_58;
  byte *pbStack_50;
  longlong lStack_40;
  byte *pbStack_38;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_140082580(&lStack_58,param_1);
  uVar1 = pdb_14007fad0(&lStack_58,param_2);
  if (lStack_58 != 0) {
    pub_1406abac0(pbStack_50,lStack_58 * 0xc,4);
  }
  if (lStack_40 != 0) {
    pub_1406abac0(pbStack_38,lStack_40 << 2,4);
  }
  return uVar1;
}

