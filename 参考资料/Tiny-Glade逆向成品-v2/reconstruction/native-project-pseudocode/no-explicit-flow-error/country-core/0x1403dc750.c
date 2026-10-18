// VA 0x1403dc750, PDB extent 403 bytes
// country_core::resources::history::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 403 */

longlong pdb_1403dc750(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 uStack_38;
  longlong *plStack_30;
  
  lVar4 = *(longlong *)(param_1 + 0x18) + 0x10;
  pdb_140ae3060(lVar4);
  lVar5 = *(longlong *)(param_1 + 0x20) + 0x10;
  pdb_140ae3040(lVar5);
  plVar1 = (longlong *)*param_2;
  lVar3 = plVar1[2];
  if (*plVar1 == lVar3) {
    pdb_142d7f1b0(plVar1,lVar3,1,1,1);
    lVar3 = plVar1[2];
  }
  *(undefined1 *)(plVar1[1] + lVar3) = 0x7b;
  plVar1[2] = lVar3 + 1;
  uStack_38 = 0x100;
  plStack_30 = param_2;
  lVar3 = pdb_14054b300(&uStack_38,&UNK_142f504e4,5,param_1);
  if (lVar3 == 0) {
    cVar2 = pdb_140ae3060(lVar4);
    if (cVar2 == '\0') {
      if ((char)uStack_38 != '\0') goto LAB_1403dc85b;
      lVar3 = pdb_140543df0(&uStack_38,&UNK_142f504e9,10,param_1 + 0x18);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    cVar2 = pdb_140ae3040(lVar5);
    if (cVar2 == '\0') {
      if ((char)uStack_38 != '\0') {
LAB_1403dc85b:
        lVar3 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
        return lVar3;
      }
      lVar3 = pdb_140542ef0(&uStack_38,&UNK_142f504f3,6,param_1 + 0x20);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    lVar3 = 0;
    if (((uStack_38 & 1) == 0) && (uStack_38._1_1_ != '\0')) {
      plVar1 = (longlong *)*plStack_30;
      lVar3 = plVar1[2];
      if (*plVar1 == lVar3) {
        pdb_142d7f1b0(plVar1,lVar3,1,1,1);
        lVar3 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar3) = 0x7d;
      plVar1[2] = lVar3 + 1;
      lVar3 = 0;
    }
  }
  return lVar3;
}

