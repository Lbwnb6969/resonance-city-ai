// VA 0x1418c0570, PDB extent 381 bytes
// country_core::resources::history::history_chain::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB project procedure:
   country_core::resources::history::history_chain::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 381 */

undefined8 pdb_1418c0570(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined2 uStack_4c;
  byte abStack_49 [41];
  
  uVar1 = *param_1;
  uVar6 = -uVar1;
  if ((int)-uVar1 < 0) {
    uVar6 = uVar1;
  }
  lVar8 = 0xb;
  if (uVar6 < 10000) {
    uVar7 = (ulonglong)uVar6;
  }
  else {
    do {
      uVar3 = uVar6;
      uVar7 = (ulonglong)uVar3 / 10000;
      *(undefined2 *)((longlong)&uStack_4c + lVar8) =
           *(undefined2 *)(&UNK_143356798 + (ulonglong)((uVar3 % 10000) / 100) * 2);
      *(undefined2 *)(&stack0xffffffffffffffb6 + lVar8) =
           *(undefined2 *)(&UNK_143356798 + (ulonglong)((uVar3 % 10000) % 100) * 2);
      lVar8 = lVar8 + -4;
      uVar6 = uVar3 / 10000;
    } while (99999999 < uVar3);
    uVar6 = uVar3 / 10000;
  }
  uVar5 = uVar7;
  if (99 < uVar6) {
    uVar6 = (uint)((uVar7 & 0xffff) >> 2) / 0x19;
    uVar5 = (ulonglong)uVar6;
    *(undefined2 *)(&stack0xffffffffffffffb6 + lVar8) =
         *(undefined2 *)(&UNK_143356798 + (ulonglong)((int)uVar7 + uVar6 * -100 & 0xffff) * 2);
    lVar8 = lVar8 + -2;
  }
  if ((uint)uVar5 < 10) {
    abStack_49[lVar8] = (byte)uVar5 | 0x30;
    lVar8 = lVar8 + -1;
    plVar2 = (longlong *)*param_2;
  }
  else {
    *(undefined2 *)(&stack0xffffffffffffffb6 + lVar8) = *(undefined2 *)(&UNK_143356798 + uVar5 * 2);
    lVar8 = lVar8 + -2;
    plVar2 = (longlong *)*param_2;
  }
  if ((int)uVar1 < 0) {
    abStack_49[lVar8] = 0x2d;
    lVar8 = lVar8 + -1;
  }
  uVar7 = 0xb - lVar8;
  lVar4 = plVar2[2];
  if ((ulonglong)(*plVar2 - lVar4) < uVar7) {
    pdb_142d7f1b0(plVar2,lVar4,uVar7,1,1);
    lVar4 = plVar2[2];
  }
  else if (lVar8 == 0xb) goto LAB_1418c06b7;
  pub_142e32760(plVar2[1] + lVar4,abStack_49 + lVar8 + 1,uVar7);
LAB_1418c06b7:
  plVar2[2] = lVar4 + uVar7;
  return 0;
}

