// VA 0x141adc4e0, PDB extent 332 bytes
// utils::geometry::rectangle::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::geometry::rectangle::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 332 */

longlong pdb_141adc4e0(longlong param_1,longlong *param_2)

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
  lVar2 = pdb_141b86df0(&uStack_28,&UNK_14338913d,0xb,param_1);
  if (lVar2 == 0) {
    if ((char)uStack_28 != '\0') {
LAB_141adc543:
      lVar2 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
      return lVar2;
    }
    lVar2 = pdb_141b82660(&uStack_28,&UNK_143389148,5,param_1 + 0x10);
    if (lVar2 == 0) {
      if ((char)uStack_28 != '\0') goto LAB_141adc543;
      lVar2 = pdb_141b82660(&uStack_28,&UNK_14338914d,6,param_1 + 0x14);
      if (lVar2 == 0) {
        if ((char)uStack_28 != '\0') goto LAB_141adc543;
        lVar2 = pdb_141b86df0(&uStack_28,&UNK_143389153,6,param_1 + 8);
        if (((lVar2 == 0) && (lVar2 = 0, (uStack_28 & 1) == 0)) && (uStack_28._1_1_ != '\0')) {
          pdb_140172c20(*plStack_20,&UNK_1433885d0,1);
          lVar2 = 0;
        }
      }
    }
  }
  return lVar2;
}

