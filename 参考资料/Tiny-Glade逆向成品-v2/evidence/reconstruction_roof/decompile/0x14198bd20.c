// Matched PDB: country_core::resources::roofs::roof_shape::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// VA 0x14198bd20, PDB extent 425 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   country_core::resources::roofs::roof_shape::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Extent: 425 bytes. No whole-program auto-analysis. */

longlong pdb_14198bd20(longlong param_1,longlong *param_2)

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
  lVar2 = pdb_141b82660(&uStack_28,&UNK_14335c68f,10,param_1 + 8);
  if (lVar2 == 0) {
    if ((char)uStack_28 != '\0') {
LAB_14198bd84:
      lVar2 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
      return lVar2;
    }
    lVar2 = pdb_141b82660(&uStack_28,&UNK_14335c699,9,param_1 + 0xc);
    if (lVar2 == 0) {
      if ((char)uStack_28 != '\0') goto LAB_14198bd84;
      lVar2 = pdb_141b86df0(&uStack_28,&UNK_14335c6a2,0xd,param_1);
      if (lVar2 == 0) {
        if ((char)uStack_28 != '\0') goto LAB_14198bd84;
        lVar2 = pdb_141b82660(&uStack_28,&UNK_14335c6af,0xf,param_1 + 0x10);
        if (lVar2 == 0) {
          lVar2 = pdb_14198fd00(&uStack_28,param_1 + 0x18);
          if (lVar2 == 0) {
            if ((char)uStack_28 != '\0') goto LAB_14198bd84;
            lVar2 = pdb_141b82660(&uStack_28,&UNK_14335c6c7,0xe,param_1 + 0x14);
            if (lVar2 == 0) {
              lVar2 = pdb_14198fd20(&uStack_28,param_1 + 0x19);
              if (((lVar2 == 0) && (lVar2 = 0, (uStack_28 & 1) == 0)) && (uStack_28._1_1_ != '\0'))
              {
                pdb_140172c20(*plStack_20,&UNK_14335c4c0,1);
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

