// VA 0x141c6e1d0, PDB extent 441 bytes
// country_core::resources::ui_settings::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::PrettyFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ui_settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::ui_settings::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::PrettyFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ui_settings.rs
   Extent: 441 */

longlong pdb_141c6e1d0(longlong param_1,longlong *param_2)

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
  lVar2 = pdb_141b80db0(auStack_28,&UNK_1433a32e4,0xe,param_1);
  if (lVar2 == 0) {
    if ((char)auStack_28[0] != '\0') {
LAB_141c6e23b:
      lVar2 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
      return lVar2;
    }
    lVar2 = pdb_141b856f0(auStack_28,&UNK_1433a32f2,0x11,param_1 + 8);
    if (lVar2 == 0) {
      if ((char)auStack_28[0] != '\0') goto LAB_141c6e23b;
      lVar2 = pdb_141b841d0(auStack_28,&UNK_1433a3303,0x11,param_1 + 9);
      if (lVar2 == 0) {
        if ((char)auStack_28[0] != '\0') goto LAB_141c6e23b;
        lVar2 = pdb_141b841d0(auStack_28,&UNK_1433a3314,0x13,param_1 + 10);
        if (lVar2 == 0) {
          if ((char)auStack_28[0] != '\0') goto LAB_141c6e23b;
          lVar2 = pdb_141b841d0(auStack_28,&UNK_1433a3327,9,param_1 + 0xb);
          if (lVar2 == 0) {
            if ((char)auStack_28[0] != '\0') goto LAB_141c6e23b;
            lVar2 = pdb_141b841d0(auStack_28,&UNK_1433a3330,0xd,param_1 + 0xc);
            if (lVar2 == 0) {
              if ((char)auStack_28[0] != '\0') goto LAB_141c6e23b;
              lVar2 = pdb_141b80db0(auStack_28,&UNK_1433a333d,0x12,param_1 + 4);
              if (lVar2 == 0) {
                pdb_1400bdf40(auStack_28);
                lVar2 = 0;
              }
            }
          }
        }
      }
    }
  }
  return lVar2;
}

