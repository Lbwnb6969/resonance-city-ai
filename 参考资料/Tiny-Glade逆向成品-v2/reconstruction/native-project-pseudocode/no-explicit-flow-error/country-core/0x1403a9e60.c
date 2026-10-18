// VA 0x1403a9e60, PDB extent 341 bytes
// country_core::resources::color_id::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/terrain_editing.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB project procedure:
   country_core::resources::color_id::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/terrain_editing.rs
   Extent: 341 */

undefined8 pdb_1403a9e60(uint *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined2 uStack_4c;
  byte abStack_49 [41];
  
  uVar4 = *param_1;
  lVar6 = 10;
  if (uVar4 < 10000) {
    uVar5 = (ulonglong)uVar4;
  }
  else {
    do {
      uVar1 = uVar4;
      uVar5 = (ulonglong)uVar1 / 10000;
      *(undefined2 *)((longlong)&uStack_4c + lVar6) =
           *(undefined2 *)(&UNK_142f4c470 + (ulonglong)((uVar1 % 10000) / 100) * 2);
      *(undefined2 *)(&stack0xffffffffffffffb6 + lVar6) =
           *(undefined2 *)(&UNK_142f4c470 + (ulonglong)((uVar1 % 10000) % 100) * 2);
      lVar6 = lVar6 + -4;
      uVar4 = uVar1 / 10000;
    } while (99999999 < uVar1);
    uVar4 = uVar1 / 10000;
  }
  uVar2 = uVar5;
  if (99 < uVar4) {
    uVar4 = (uint)((uVar5 & 0xffff) >> 2) / 0x19;
    uVar2 = (ulonglong)uVar4;
    *(undefined2 *)(&stack0xffffffffffffffb6 + lVar6) =
         *(undefined2 *)(&UNK_142f4c470 + (ulonglong)((int)uVar5 + uVar4 * -100 & 0xffff) * 2);
    lVar6 = lVar6 + -2;
  }
  param_2 = (longlong *)*param_2;
  if ((uint)uVar2 < 10) {
    abStack_49[lVar6] = (byte)uVar2 | 0x30;
    lVar6 = lVar6 + -1;
  }
  else {
    *(undefined2 *)(&stack0xffffffffffffffb6 + lVar6) = *(undefined2 *)(&UNK_142f4c470 + uVar2 * 2);
    lVar6 = lVar6 + -2;
  }
  uVar5 = 10 - lVar6;
  lVar3 = param_2[2];
  if ((ulonglong)(*param_2 - lVar3) < uVar5) {
    pdb_142d7f1b0(param_2,lVar3,uVar5,1,1);
    lVar3 = param_2[2];
  }
  else if (lVar6 == 10) goto LAB_1403a9f7f;
  pub_142e32760(param_2[1] + lVar3,abStack_49 + lVar6 + 1,uVar5);
LAB_1403a9f7f:
  param_2[2] = lVar3 + uVar5;
  return 0;
}

