// VA 0x14198c720, PDB extent 375 bytes
// country_core::resources::history::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 375 */

longlong pdb_14198c720(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 uStack_38;
  longlong *plStack_30;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  plVar2 = (longlong *)*param_2;
  lVar3 = plVar2[2];
  if (*plVar2 == lVar3) {
    pdb_142d7f1b0(plVar2,lVar3,1,1,1);
    lVar3 = plVar2[2];
  }
  *(undefined1 *)(plVar2[1] + lVar3) = 0x7b;
  plVar2[2] = lVar3 + 1;
  uStack_38 = 0x100;
  plStack_30 = param_2;
  lVar3 = pdb_141b79510(&uStack_38,&UNK_14335ca48,5,param_1);
  if (lVar3 == 0) {
    if (*(longlong *)(lVar4 + 0x28) != 0) {
      if ((char)uStack_38 != '\0') goto LAB_14198c7cf;
      lVar4 = pdb_141b802c0(&uStack_38,&UNK_14335ca4d,10,param_1 + 0x18);
      if (lVar4 != 0) {
        return lVar4;
      }
    }
    if ((*(longlong *)(lVar1 + 0x40) != 0) || (*(longlong *)(lVar1 + 0x58) != 0)) {
      if ((char)uStack_38 != '\0') {
LAB_14198c7cf:
        lVar4 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
        return lVar4;
      }
      lVar4 = pdb_141b7e260(&uStack_38,&UNK_14335ca57,6,param_1 + 0x20);
      if (lVar4 != 0) {
        return lVar4;
      }
    }
    lVar3 = 0;
    if (((uStack_38 & 1) == 0) && (uStack_38._1_1_ != '\0')) {
      plVar2 = (longlong *)*plStack_30;
      lVar4 = plVar2[2];
      if (*plVar2 == lVar4) {
        pdb_142d7f1b0(plVar2,lVar4,1,1,1);
        lVar4 = plVar2[2];
      }
      *(undefined1 *)(plVar2[1] + lVar4) = 0x7d;
      plVar2[2] = lVar4 + 1;
      lVar3 = 0;
    }
  }
  return lVar3;
}

