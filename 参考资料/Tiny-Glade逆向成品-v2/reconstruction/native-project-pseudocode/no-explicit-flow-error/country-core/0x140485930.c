// VA 0x140485930, PDB extent 332 bytes
// country_core::resources::stairs::stairs_state::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 332 */

longlong pdb_140485930(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
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
  lVar2 = pdb_140541a10(&uStack_28,&UNK_142f5d83e,6,param_1 + 0x20);
  if (lVar2 == 0) {
    if ((char)uStack_28 != '\0') {
LAB_140485994:
      lVar2 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
      return lVar2;
    }
    lVar2 = pdb_140541a10(&uStack_28,&UNK_142f5d844,5,param_1 + 0x38);
    if (lVar2 == 0) {
      if ((char)uStack_28 != '\0') goto LAB_140485994;
      lVar2 = pdb_14054d420(&uStack_28,&UNK_142f5d849,0xb,param_1);
      if (lVar2 == 0) {
        if ((char)uStack_28 != '\0') goto LAB_140485994;
        lVar2 = pdb_14054d420(&uStack_28,&UNK_142f5d854,10,param_1 + 0x10);
        if (((lVar2 == 0) && (lVar2 = 0, (uStack_28 & 1) == 0)) && (uStack_28._1_1_ != '\0')) {
          pdb_140172c20(*plStack_20,&UNK_142f5d74c,1);
          lVar2 = 0;
        }
      }
    }
  }
  return lVar2;
}

