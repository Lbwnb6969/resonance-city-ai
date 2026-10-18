// VA 0x141ee9a90, PDB extent 237 bytes
// std::io::cursor::impl$5::read_to_string<ref$<bytes::bytes::Bytes> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/theme-fetcher/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: std::io::cursor::impl$5::read_to_string<ref$<bytes::bytes::Bytes>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/theme-fetcher/src/lib.rs
   Extent: 237 */

undefined8 pdb_141ee9a90(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int aiStack_40 [2];
  undefined8 uStack_38;
  ulonglong uStack_30;
  
  uVar1 = param_1[1];
  uVar2 = *(ulonglong *)(*param_1 + 0x10);
  uVar3 = uVar1;
  if (uVar2 < uVar1) {
    uVar3 = uVar2;
  }
  pdb_140f69110(aiStack_40,uVar3 + *(longlong *)(*param_1 + 8),uVar2 - uVar3);
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
  else if (uStack_30 == 0) goto LAB_141ee9b2d;
  pub_142e32760(lVar4 + param_2[1],uStack_38,uStack_30);
  lVar4 = param_2[2];
LAB_141ee9b2d:
  param_2[2] = lVar4 + uStack_30;
  param_1[1] = uVar1 + uStack_30;
  return 0;
}

