// VA 0x140bbc1d0, PDB extent 426 bytes
// country_core::resources::glade_color_customization::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_color_customization.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::glade_color_customization::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_color_customization.rs
   Extent: 426 */

longlong pdb_140bbc1d0(longlong param_1,longlong *param_2)

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
  lVar2 = pdb_141b7dc80(&uStack_28,&UNK_14306275b,0xc,param_1);
  if (lVar2 == 0) {
    if ((char)uStack_28 != '\0') {
LAB_140bbc233:
      lVar2 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
      return lVar2;
    }
    lVar2 = pdb_141b7dc80(&uStack_28,&UNK_143062440,0xc,param_1 + 4);
    if (lVar2 == 0) {
      if ((char)uStack_28 != '\0') goto LAB_140bbc233;
      lVar2 = pdb_141b7dc80(&uStack_28,&UNK_143062767,10,param_1 + 8);
      if (lVar2 == 0) {
        if ((char)uStack_28 != '\0') goto LAB_140bbc233;
        lVar2 = pdb_141b7aaa0(&uStack_28,&UNK_143062771,10,param_1 + 0x10);
        if (lVar2 == 0) {
          if ((char)uStack_28 != '\0') goto LAB_140bbc233;
          lVar2 = pdb_141b85940(&uStack_28,&UNK_143062460,9,param_1 + 0x11);
          if (lVar2 == 0) {
            if ((char)uStack_28 != '\0') goto LAB_140bbc233;
            lVar2 = pdb_141b7dc80(&uStack_28,&UNK_143062488,0xb,param_1 + 0xc);
            if (((lVar2 == 0) && (lVar2 = 0, (uStack_28 & 1) == 0)) && (uStack_28._1_1_ != '\0')) {
              pdb_140172c20(*plStack_20,&UNK_143062635,1);
              lVar2 = 0;
            }
          }
        }
      }
    }
  }
  return lVar2;
}

