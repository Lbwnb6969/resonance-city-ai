// VA 0x141a4ffa0, PDB extent 295 bytes
// country_core::meta_commander::commander_update::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::PrettyFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/meta_commander.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::meta_commander::commander_update::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::PrettyFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/meta_commander.rs
   Extent: 295 */

longlong pdb_141a4ffa0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  plVar1 = (longlong *)*param_2;
  param_2[3] = param_2[3] + 1;
  *(undefined1 *)(param_2 + 4) = 0;
  lVar2 = plVar1[2];
  if (*plVar1 == lVar2) {
    pdb_142d7f1b0(plVar1,lVar2,1,1,1);
    lVar2 = plVar1[2];
  }
  *(undefined1 *)(plVar1[1] + lVar2) = 0x7b;
  plVar1[2] = lVar2 + 1;
  uStack_38 = CONCAT22(uStack_38._2_2_,0x100);
  uStack_30 = param_2;
  lVar2 = pdb_141b7c2b0(&uStack_38,&UNK_14337d680,0x1b,param_1 + 0x18);
  if (lVar2 != 0) {
    return lVar2;
  }
  if ((char)uStack_38 == '\0') {
    lVar2 = pdb_141b7c2b0(&uStack_38,&UNK_14337d69b,0x15,param_1 + 0x20);
    if (lVar2 != 0) {
      return lVar2;
    }
    if ((char)uStack_38 == '\0') {
      lVar2 = pdb_141b7c2b0(&uStack_38,&UNK_14337d6b0,0x1e,param_1 + 0x28);
      if (lVar2 != 0) {
        return lVar2;
      }
      if ((char)uStack_38 == '\0') {
        lVar2 = pdb_141b84dc0(&uStack_38,&UNK_14337d6ce,0xf,param_1);
        if (lVar2 != 0) {
          return lVar2;
        }
        uStack_28 = uStack_38;
        uStack_24 = uStack_34;
        uStack_20 = (undefined4)uStack_30;
        uStack_1c = uStack_30._4_4_;
        pdb_1400bdf40(&uStack_28);
        return 0;
      }
    }
  }
  lVar2 = pdb_142db8610();
  return lVar2;
}

