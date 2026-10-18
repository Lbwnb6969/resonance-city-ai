// VA 0x140100a40, PDB extent 300 bytes
// country_core::render::atmosphere::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::PrettyFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/atmosphere.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::atmosphere::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::PrettyFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/atmosphere.rs
   Extent: 300 */

longlong pdb_140100a40(longlong param_1,longlong *param_2)

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
  lVar2 = pdb_14053f870(auStack_28,&UNK_142e42d44,0xe,param_1);
  if (lVar2 == 0) {
    if ((char)auStack_28[0] != '\0') {
LAB_140100aab:
      lVar2 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
      return lVar2;
    }
    lVar2 = pdb_14053f870(auStack_28,&UNK_142e42d52,0xf,param_1 + 0xc);
    if (lVar2 == 0) {
      if ((char)auStack_28[0] != '\0') goto LAB_140100aab;
      lVar2 = pdb_14053f870(auStack_28,&UNK_142e42d61,0xd,param_1 + 0x18);
      if (lVar2 == 0) {
        if ((char)auStack_28[0] != '\0') goto LAB_140100aab;
        lVar2 = pdb_14053f870(auStack_28,&UNK_142e42d6e,0xe,param_1 + 0x24);
        if (lVar2 == 0) {
          pdb_1400bdf40(auStack_28);
          lVar2 = 0;
        }
      }
    }
  }
  return lVar2;
}

