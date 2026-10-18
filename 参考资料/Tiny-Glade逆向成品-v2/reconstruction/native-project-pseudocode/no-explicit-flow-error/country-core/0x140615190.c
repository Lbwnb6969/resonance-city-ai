// VA 0x140615190, PDB extent 416 bytes
// country_core::resources::session::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::session::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 416 */

longlong pdb_140615190(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uStack_40;
  longlong *plStack_38;
  
  lVar5 = *(longlong *)(param_1 + 0x28);
  lVar4 = *(longlong *)(param_1 + 0x30);
  lVar1 = *(longlong *)(param_1 + 0x70);
  plVar2 = (longlong *)*param_2;
  lVar3 = plVar2[2];
  if (*plVar2 == lVar3) {
    pdb_142d7f1b0(plVar2,lVar3,1,1,1);
    lVar3 = plVar2[2];
  }
  *(undefined1 *)(plVar2[1] + lVar3) = 0x7b;
  plVar2[2] = lVar3 + 1;
  uStack_40 = (undefined *)CONCAT62(uStack_40._2_6_,0x100);
  plStack_38 = param_2;
  lVar3 = pdb_14054a6d0(&uStack_40,&UNK_142f883b8,5,param_1 + 0x98);
  if (lVar3 == 0) {
    if ((char)uStack_40 != '\0') {
LAB_14061520f:
      uStack_40 = &UNK_142db862c;
      lVar5 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
      return lVar5;
    }
    lVar3 = pdb_14054cb80(&uStack_40,&UNK_142f883bd,8,param_1);
    if (lVar3 == 0) {
      if (!SBORROW8(0,lVar4)) {
        if ((char)uStack_40 != '\0') goto LAB_14061520f;
        lVar4 = pdb_140543c90(&uStack_40,&UNK_142f883c5,5,param_1 + 0x30);
        if (lVar4 != 0) {
          return lVar4;
        }
      }
      if (lVar5 != 0) {
        if ((char)uStack_40 == '\x01') goto LAB_14061520f;
        lVar5 = pdb_140542b70(&uStack_40,&UNK_142f883ca,0x10,param_1 + 0x18);
        if (lVar5 != 0) {
          return lVar5;
        }
      }
      if ((((SBORROW8(0,lVar1)) || (lVar3 = pdb_140615d50(&uStack_40,param_1 + 0x70), lVar3 == 0))
          && (lVar3 = 0, ((ulonglong)uStack_40 & 1) == 0)) && (uStack_40._1_1_ != '\0')) {
        pdb_140172c20(*plStack_38,&UNK_142f87fa8,1);
        lVar3 = 0;
      }
    }
  }
  return lVar3;
}

