// VA 0x1419a6840, PDB extent 281 bytes
// utils::curve::_::impl$0::serialize<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D,ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::_::impl$0::serialize<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D,ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 281 */

longlong pdb_1419a6840(longlong param_1,longlong *param_2)

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
  lVar2 = pdb_141b82db0(&uStack_28,&UNK_14335e231,6,param_1);
  if (lVar2 == 0) {
    if ((char)uStack_28 != '\0') {
LAB_1419a68a3:
      lVar2 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
      return lVar2;
    }
    lVar2 = pdb_141b80a90(&uStack_28,&UNK_14335e237,8,param_1 + 0x18);
    if (lVar2 == 0) {
      if ((char)uStack_28 != '\0') goto LAB_1419a68a3;
      lVar2 = pdb_141b82660(&uStack_28,&UNK_14335e23f,6,param_1 + 0x30);
      if (((lVar2 == 0) && (lVar2 = 0, (uStack_28 & 1) == 0)) && (uStack_28._1_1_ != '\0')) {
        pdb_140172c20(*plStack_20,&UNK_14335e230,1);
        lVar2 = 0;
      }
    }
  }
  return lVar2;
}

