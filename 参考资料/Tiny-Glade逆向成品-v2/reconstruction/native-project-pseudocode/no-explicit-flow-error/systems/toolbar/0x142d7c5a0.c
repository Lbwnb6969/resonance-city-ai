// VA 0x142d7c5a0, PDB extent 234 bytes
// std::io::cursor::impl$5::read_to_string<alloc::vec::Vec<u8,alloc::alloc::Global> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   std::io::cursor::impl$5::read_to_string<alloc::vec::Vec<u8,alloc::alloc::Global> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 234 */

undefined8 pdb_142d7c5a0(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int aiStack_40 [2];
  undefined8 uStack_38;
  ulonglong uStack_30;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  uVar2 = *(ulonglong *)(param_1 + 0x18);
  uVar3 = uVar2;
  if (uVar1 < uVar2) {
    uVar3 = uVar1;
  }
  pdb_140f69110(aiStack_40,uVar3 + *(longlong *)(param_1 + 8),uVar1 - uVar3);
  if (aiStack_40[0] == 1) {
    return 1;
  }
  lVar4 = pdb_140f5e0d0(param_2,uStack_30);
  if (lVar4 != -0x7fffffffffffffff) {
    return 1;
  }
  lVar4 = param_2[2];
  if ((ulonglong)(*param_2 - lVar4) < uStack_30) {
    pdb_142d7f1b0(param_2,lVar4,uStack_30,1,1);
    lVar4 = param_2[2];
  }
  else if (uStack_30 == 0) goto LAB_142d7c63a;
  pub_142e32760(lVar4 + param_2[1],uStack_38,uStack_30);
  lVar4 = param_2[2];
LAB_142d7c63a:
  param_2[2] = lVar4 + uStack_30;
  *(ulonglong *)(param_1 + 0x18) = uVar2 + uStack_30;
  return 0;
}

