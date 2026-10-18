// VA 0x141b6df20, PDB extent 442 bytes
// country_core::resources::critters::sheep::control::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::PrettyFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters/sheep/control.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::critters::sheep::control::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::PrettyFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters/sheep/control.rs
   Extent: 442 */

longlong pdb_141b6df20(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 uStack_38;
  longlong *plStack_30;
  
  plVar1 = (longlong *)*param_2;
  param_2[3] = param_2[3] + 1;
  *(undefined1 *)(param_2 + 4) = 0;
  lVar5 = plVar1[2];
  if (*plVar1 == lVar5) {
    pdb_142d7f1b0(plVar1,lVar5,1,1,1);
    lVar5 = plVar1[2];
  }
  *(undefined1 *)(plVar1[1] + lVar5) = 0x7b;
  plVar1[2] = lVar5 + 1;
  uStack_38 = 0x100;
  plStack_30 = param_2;
  lVar5 = pdb_141b80890(&uStack_38,&UNK_143397846,8,param_1 + 0x1c);
  if (lVar5 == 0) {
    if ((char)uStack_38 != '\0') {
LAB_141b6df94:
      lVar5 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
      return lVar5;
    }
    lVar5 = pdb_141b7a5d0(&uStack_38,&UNK_143397ddd,4,param_1);
    if (lVar5 == 0) {
      if ((char)uStack_38 != '\0') goto LAB_141b6df94;
      lVar5 = pdb_141b87110(&uStack_38,&UNK_143397de1,10,param_1 + 0x10);
      plVar1 = plStack_30;
      if (((lVar5 == 0) && (lVar5 = 0, (uStack_38 & 1) == 0)) && (uStack_38._1_1_ != '\0')) {
        plVar2 = (longlong *)*plStack_30;
        lVar5 = plStack_30[3] + -1;
        plStack_30[3] = lVar5;
        if ((((char)plStack_30[4] == '\x01') && (pdb_140172c20(plVar2,&UNK_143397f28,1), lVar5 != 0)
            ) && (uVar3 = plVar1[2], uVar3 != 0)) {
          lVar4 = plVar1[1];
          lVar6 = plVar2[2];
          do {
            if ((ulonglong)(*plVar2 - lVar6) < uVar3) {
              pdb_142d7f1b0(plVar2,lVar6,uVar3,1,1);
              lVar6 = plVar2[2];
            }
            pub_142e32760(plVar2[1] + lVar6,lVar4,uVar3);
            lVar6 = lVar6 + uVar3;
            plVar2[2] = lVar6;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
        pdb_140172c20(plVar2,&UNK_143397824,1);
        lVar5 = 0;
      }
    }
  }
  return lVar5;
}

