// VA 0x141c6d9d0, PDB extent 303 bytes
// country_core::input::input_stream::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::PrettyFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::input::input_stream::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::PrettyFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
   Extent: 303 */

longlong pdb_141c6d9d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 auStack_28 [4];
  longlong *plStack_20;
  
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
  auStack_28[0] = 0x100;
  plStack_20 = param_2;
  lVar2 = pdb_141b85c90(auStack_28,&UNK_1433a31f3,0x11,param_1);
  if (lVar2 == 0) {
    if ((char)auStack_28[0] != '\0') {
LAB_141c6da3b:
      lVar2 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
      return lVar2;
    }
    lVar2 = pdb_141b7bb90(auStack_28,&UNK_1433a3204,0x1a,param_1 + 0x68);
    if (lVar2 == 0) {
      if ((char)auStack_28[0] != '\0') goto LAB_141c6da3b;
      lVar2 = pdb_141b80db0(auStack_28,&UNK_1433a321e,0x12,param_1 + 0xcc);
      if (lVar2 == 0) {
        if ((char)auStack_28[0] != '\0') goto LAB_141c6da3b;
        lVar2 = pdb_141b804d0(auStack_28,&UNK_1433a3230,0x15,param_1 + 0x70);
        if (lVar2 == 0) {
          pdb_1400bdf40(auStack_28);
          lVar2 = 0;
        }
      }
    }
  }
  return lVar2;
}

