// VA 0x140101270, PDB extent 149 bytes
// country_core::resources::walls::inner_wall_state::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::inner_wall_state::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
   Extent: 149 */

undefined8 pdb_140101270(uint *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auStack_38 [24];
  
  param_2 = (longlong *)*param_2;
  uVar4 = *param_1;
  if (0x7f7fffff < (uVar4 & 0x7fffffff)) {
    uVar4 = 0;
  }
  puVar1 = (undefined1 *)pdb_140de3c80(uVar4,auStack_38);
  uVar3 = (longlong)puVar1 - (longlong)auStack_38;
  lVar2 = param_2[2];
  if ((ulonglong)(*param_2 - lVar2) < uVar3) {
    pdb_142d7f1b0(param_2,lVar2,uVar3,1,1);
    lVar2 = param_2[2];
  }
  else if (puVar1 == auStack_38) goto LAB_1401012cf;
  pub_142e32760(param_2[1] + lVar2,auStack_38,uVar3);
LAB_1401012cf:
  param_2[2] = lVar2 + uVar3;
  return 0;
}

