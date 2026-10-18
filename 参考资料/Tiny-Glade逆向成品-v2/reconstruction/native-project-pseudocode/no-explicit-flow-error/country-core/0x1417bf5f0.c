// VA 0x1417bf5f0, PDB extent 222 bytes
// country_core::resources::walls::decorator::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 222 */

longlong pdb_1417bf5f0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 uStack_28;
  longlong *plStack_20;
  
  plVar1 = (longlong *)*param_2;
  lVar2 = plVar1[2];
  if (*plVar1 == lVar2) {
    pdb_142d7f1b0(plVar1,lVar2,1,1,1);
    lVar2 = plVar1[2];
  }
  *(undefined1 *)(plVar1[1] + lVar2) = 0x7b;
  plVar1[2] = lVar2 + 1;
  uStack_28 = 0x100;
  plStack_20 = param_2;
  lVar2 = pdb_141b806d0(&uStack_28,&UNK_143336abd,1,param_1);
  if (((lVar2 == 0) && ((uStack_28 & 1) == 0)) && (uStack_28._1_1_ != '\0')) {
    plVar1 = (longlong *)*plStack_20;
    lVar3 = plVar1[2];
    if (*plVar1 == lVar3) {
      pdb_142d7f1b0(plVar1,lVar3,1,1,1);
      lVar3 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar3) = 0x7d;
    plVar1[2] = lVar3 + 1;
  }
  return lVar2;
}

