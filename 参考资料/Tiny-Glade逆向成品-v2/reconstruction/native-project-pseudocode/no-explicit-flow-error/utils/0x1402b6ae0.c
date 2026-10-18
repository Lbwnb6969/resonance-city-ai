// VA 0x1402b6ae0, PDB extent 361 bytes
// utils::geometry::circle::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::geometry::circle::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 361 */

longlong pdb_1402b6ae0(longlong param_1,longlong *param_2)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined2 uStack_38;
  longlong *plStack_30;
  
  fVar1 = *(float *)(param_1 + 0xc);
  plVar2 = (longlong *)*param_2;
  lVar3 = plVar2[2];
  if (*plVar2 == lVar3) {
    pdb_142d7f1b0(plVar2,lVar3,1,1,1);
    lVar3 = plVar2[2];
  }
  *(undefined1 *)(plVar2[1] + lVar3) = 0x7b;
  plVar2[2] = lVar3 + 1;
  uStack_38 = 0x100;
  plStack_30 = param_2;
  lVar3 = pdb_14054c7e0(&uStack_38,&UNK_142e67f89,6,param_1);
  if (lVar3 == 0) {
    if ((char)uStack_38 != '\0') {
LAB_1402b6b52:
      lVar3 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
      return lVar3;
    }
    lVar3 = pdb_1405432b0(&uStack_38,&UNK_142e67f8f,6,param_1 + 8);
    if (lVar3 == 0) {
      if ((fVar1 != 0.0) || (NAN(fVar1))) {
        if ((char)uStack_38 != '\0') goto LAB_1402b6b52;
        lVar3 = pdb_14053f240(&uStack_38,&UNK_142e67f95,8,param_1 + 0xc);
        if (lVar3 != 0) {
          return lVar3;
        }
      }
      lVar3 = 0;
      if (((uStack_38 & 1) == 0) && (uStack_38._1_1_ != '\0')) {
        plVar2 = (longlong *)*plStack_30;
        lVar3 = plVar2[2];
        if (*plVar2 == lVar3) {
          pdb_142d7f1b0(plVar2,lVar3,1,1,1);
          lVar3 = plVar2[2];
        }
        *(undefined1 *)(plVar2[1] + lVar3) = 0x7d;
        plVar2[2] = lVar3 + 1;
        lVar3 = 0;
      }
    }
  }
  return lVar3;
}

