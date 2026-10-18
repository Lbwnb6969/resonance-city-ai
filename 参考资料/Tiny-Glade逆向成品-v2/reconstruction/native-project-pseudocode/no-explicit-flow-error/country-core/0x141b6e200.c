// VA 0x141b6e200, PDB extent 471 bytes
// country_core::resources::critters::sheep::control::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::PrettyFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters/sheep/control.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::critters::sheep::control::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::PrettyFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters/sheep/control.rs
   Extent: 471 */

longlong pdb_141b6e200(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 uStack_40;
  longlong *plStack_38;
  
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
  uStack_40 = 0x100;
  plStack_38 = param_2;
  lVar5 = pdb_141b7c970(&uStack_40,&DAT_143397e34,5,param_1);
  plVar1 = plStack_38;
  if (lVar5 != 0) {
    return lVar5;
  }
  if ((uStack_40 & 1) != 0) {
    return 0;
  }
  if (uStack_40._1_1_ == '\0') {
    return 0;
  }
  plVar2 = (longlong *)*plStack_38;
  lVar5 = plStack_38[3] + -1;
  plStack_38[3] = lVar5;
  if ((char)plStack_38[4] == '\0') {
    lVar6 = plVar2[2];
LAB_141b6e325:
    if (*plVar2 != lVar6) goto LAB_141b6e32a;
  }
  else {
    lVar6 = plVar2[2];
    if (*plVar2 == lVar6) {
      pdb_142d7f1b0(plVar2,lVar6,1,1,1);
      lVar6 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar6) = 10;
    lVar6 = lVar6 + 1;
    plVar2[2] = lVar6;
    if (lVar5 == 0) goto LAB_141b6e325;
    uVar3 = plVar1[2];
    if (uVar3 != 0) {
      lVar4 = plVar1[1];
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
      goto LAB_141b6e325;
    }
    plVar2[2] = lVar6;
    if (*plVar2 != lVar6) goto LAB_141b6e32a;
  }
  pdb_142d7f1b0(plVar2,lVar6,1,1,1);
  lVar6 = plVar2[2];
LAB_141b6e32a:
  *(undefined1 *)(plVar2[1] + lVar6) = 0x7d;
  plVar2[2] = lVar6 + 1;
  return 0;
}

