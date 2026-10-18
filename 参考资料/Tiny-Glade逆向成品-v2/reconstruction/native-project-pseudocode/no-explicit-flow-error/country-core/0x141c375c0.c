// VA 0x141c375c0, PDB extent 347 bytes
// country_core::components::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB project procedure:
   country_core::components::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/mod.rs
   Extent: 347 */

undefined8 pdb_141c375c0(ulonglong *param_1,longlong *param_2)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 uStack_4c;
  byte abStack_49 [41];
  
  uVar5 = *param_1;
  lVar7 = 0x14;
  uVar3 = uVar5;
  if (9999 < uVar5) {
    do {
      uVar3 = uVar5 / 10000;
      iVar6 = (int)uVar5 + (int)uVar3 * -10000;
      uVar2 = (uint)(iVar6 * 0x147b) >> 0x13;
      *(undefined2 *)((longlong)&uStack_4c + lVar7) =
           *(undefined2 *)(&UNK_1433a0270 + (ulonglong)uVar2 * 2);
      *(undefined2 *)(&stack0xffffffffffffffb6 + lVar7) =
           *(undefined2 *)(&UNK_1433a0270 + (ulonglong)(iVar6 + uVar2 * -100 & 0xffff) * 2);
      lVar7 = lVar7 + -4;
      bVar1 = 99999999 < uVar5;
      uVar5 = uVar3;
    } while (bVar1);
  }
  if (99 < uVar3) {
    iVar6 = (int)uVar3;
    uVar2 = ((uint)(uVar3 >> 2) & 0xffff) * 0x147b >> 0x11;
    uVar3 = (ulonglong)uVar2;
    *(undefined2 *)(&stack0xffffffffffffffb6 + lVar7) =
         *(undefined2 *)(&UNK_1433a0270 + (ulonglong)(iVar6 + uVar2 * -100 & 0xffff) * 2);
    lVar7 = lVar7 + -2;
  }
  param_2 = (longlong *)*param_2;
  if (uVar3 < 10) {
    abStack_49[lVar7] = (byte)uVar3 | 0x30;
    lVar7 = lVar7 + -1;
  }
  else {
    *(undefined2 *)(&stack0xffffffffffffffb6 + lVar7) = *(undefined2 *)(&UNK_1433a0270 + uVar3 * 2);
    lVar7 = lVar7 + -2;
  }
  uVar5 = 0x14 - lVar7;
  lVar4 = param_2[2];
  if ((ulonglong)(*param_2 - lVar4) < uVar5) {
    pdb_142d7f1b0(param_2,lVar4,uVar5,1,1);
    lVar4 = param_2[2];
  }
  else if (lVar7 == 0x14) goto LAB_141c376e5;
  pub_142e32760(param_2[1] + lVar4,abStack_49 + lVar7 + 1,uVar5);
LAB_141c376e5:
  param_2[2] = lVar4 + uVar5;
  return 0;
}

