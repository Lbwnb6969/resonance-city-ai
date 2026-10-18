// VA 0x140641b80, PDB extent 426 bytes
// country_core::resources::grading_lut::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/grading_lut.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::grading_lut::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/grading_lut.rs
   Extent: 426 */

longlong pdb_140641b80(longlong param_1,longlong *param_2)

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
  lVar2 = pdb_14053e0d0(&uStack_28,&UNK_142f8b898,0xc,param_1 + 0x28);
  if (lVar2 == 0) {
    if ((char)uStack_28 != '\0') {
LAB_140641be4:
      lVar2 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
      return lVar2;
    }
    lVar2 = pdb_140542040(&uStack_28,&UNK_142f8b8a4,0x13,param_1);
    if (lVar2 == 0) {
      if ((char)uStack_28 != '\0') goto LAB_140641be4;
      lVar2 = pdb_1405432b0(&uStack_28,&UNK_142f8b8b7,0x10,param_1 + 0x18);
      if (lVar2 == 0) {
        if ((char)uStack_28 != '\0') goto LAB_140641be4;
        lVar2 = pdb_1405432b0(&uStack_28,&UNK_142f8b8c7,8,param_1 + 0x1c);
        if (lVar2 == 0) {
          if ((char)uStack_28 != '\0') goto LAB_140641be4;
          lVar2 = pdb_1405432b0(&uStack_28,&UNK_142f8b8cf,8,param_1 + 0x20);
          if (lVar2 == 0) {
            if ((char)uStack_28 != '\0') goto LAB_140641be4;
            lVar2 = pdb_1405432b0(&uStack_28,&UNK_142f8b8d7,10,param_1 + 0x24);
            if (((lVar2 == 0) && (lVar2 = 0, (uStack_28 & 1) == 0)) && (uStack_28._1_1_ != '\0')) {
              pdb_140172c20(*plStack_20,&UNK_142f8b610,1);
              lVar2 = 0;
            }
          }
        }
      }
    }
  }
  return lVar2;
}

