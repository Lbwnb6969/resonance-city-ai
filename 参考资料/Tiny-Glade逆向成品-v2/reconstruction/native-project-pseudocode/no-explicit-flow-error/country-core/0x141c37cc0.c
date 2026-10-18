// VA 0x141c37cc0, PDB extent 518 bytes
// country_core::resources::clutter_packs::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::PrettyFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::clutter_packs::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::PrettyFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
   Extent: 518 */

longlong pdb_141c37cc0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 uStack_38;
  longlong *plStack_30;
  
  cVar1 = *(char *)(param_1 + 0x19);
  plVar2 = (longlong *)*param_2;
  param_2[3] = param_2[3] + 1;
  *(undefined1 *)(param_2 + 4) = 0;
  lVar6 = plVar2[2];
  if (*plVar2 == lVar6) {
    pdb_142d7f1b0(plVar2,lVar6,1,1,1);
    lVar6 = plVar2[2];
  }
  *(undefined1 *)(plVar2[1] + lVar6) = 0x7b;
  plVar2[2] = lVar6 + 1;
  uStack_38 = 0x100;
  plStack_30 = param_2;
  lVar6 = pdb_141b86510(&uStack_38,&DAT_1433a022f,4,param_1);
  if (lVar6 == 0) {
    if ((char)uStack_38 != '\0') {
LAB_141c37d37:
      lVar6 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
      return lVar6;
    }
    lVar6 = pdb_141b7f4c0(&uStack_38,&DAT_1433a0233,8,param_1 + 0x18);
    if (lVar6 == 0) {
      if (cVar1 != '\'') {
        if ((char)uStack_38 != '\0') goto LAB_141c37d37;
        lVar6 = pdb_141b83910(&uStack_38,&DAT_1433a023b,5,param_1 + 0x19);
        if (lVar6 != 0) {
          return lVar6;
        }
      }
      plVar2 = plStack_30;
      lVar6 = 0;
      if (((uStack_38 & 1) == 0) && (uStack_38._1_1_ != '\0')) {
        plVar3 = (longlong *)*plStack_30;
        lVar6 = plStack_30[3] + -1;
        plStack_30[3] = lVar6;
        if (((char)plStack_30[4] == '\x01') &&
           ((pdb_140172c20(plVar3,&UNK_1433a0338,1), lVar6 != 0 && (uVar4 = plVar2[2], uVar4 != 0)))
           ) {
          lVar5 = plVar2[1];
          lVar7 = plVar3[2];
          do {
            if ((ulonglong)(*plVar3 - lVar7) < uVar4) {
              pdb_142d7f1b0(plVar3,lVar7,uVar4,1,1);
              lVar7 = plVar3[2];
            }
            pub_142e32760(plVar3[1] + lVar7,lVar5,uVar4);
            lVar7 = lVar7 + uVar4;
            plVar3[2] = lVar7;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        lVar6 = plVar3[2];
        if (*plVar3 == lVar6) {
          pdb_142d7f1b0(plVar3,lVar6,1,1,1);
          lVar6 = plVar3[2];
        }
        *(undefined1 *)(plVar3[1] + lVar6) = 0x7d;
        plVar3[2] = lVar6 + 1;
        lVar6 = 0;
      }
    }
  }
  return lVar6;
}

