// VA 0x1402361b0, PDB extent 417 bytes
// country_core::resources::time_of_day::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::PrettyFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/time_of_day.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::time_of_day::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::PrettyFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/time_of_day.rs
   Extent: 417 */

longlong pdb_1402361b0(longlong param_1,longlong *param_2)

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
  lVar2 = pdb_14054a4d0(auStack_28,&UNK_142e631ab,7,param_1);
  if (lVar2 == 0) {
    if ((char)auStack_28[0] != '\0') {
LAB_14023621b:
      lVar2 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
      return lVar2;
    }
    lVar2 = pdb_140543f00(auStack_28,&UNK_142e631b2,0x12,param_1 + 0x30);
    if (lVar2 == 0) {
      if ((char)auStack_28[0] != '\0') goto LAB_14023621b;
      lVar2 = pdb_140543f00(auStack_28,&UNK_142e631c4,0x14,param_1 + 0x34);
      if (lVar2 == 0) {
        if ((char)auStack_28[0] != '\0') goto LAB_14023621b;
        lVar2 = pdb_140543f00(auStack_28,&UNK_142e631d8,0x11,param_1 + 0x38);
        if (lVar2 == 0) {
          if ((char)auStack_28[0] != '\0') goto LAB_14023621b;
          lVar2 = pdb_140543f00(auStack_28,&UNK_142e631e9,0x14,param_1 + 0x3c);
          if (lVar2 == 0) {
            lVar2 = pdb_140236570(auStack_28,param_1 + 0x40);
            if (lVar2 == 0) {
              if ((char)auStack_28[0] != '\0') goto LAB_14023621b;
              lVar2 = pdb_140543f00(auStack_28,&UNK_142e63205,10,param_1 + 0x4c);
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

