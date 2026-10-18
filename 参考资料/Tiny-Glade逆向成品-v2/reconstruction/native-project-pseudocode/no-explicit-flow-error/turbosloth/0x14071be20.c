// VA 0x14071be20, PDB extent 123 bytes
// turbosloth::store::impl$4::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::store::impl$4::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 123 */

ulonglong * pdb_14071be20(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  byte *pbVar2;
  undefined1 uVar3;
  
  uVar3 = param_3 == 0;
  if (-1 < (longlong)param_3) goto LAB_14071be41;
  uVar3 = true;
  puVar1 = (ulonglong *)0x0;
  while( true ) {
    param_1 = puVar1;
    param_2 = param_3;
    pdb_142dc7e2a(param_1,param_3);
LAB_14071be41:
    if ((bool)uVar3) break;
    pdb_14007ee60();
    pbVar2 = pub_1406abab0(param_3,1);
    uVar3 = pbVar2 == (byte *)0x0;
    puVar1 = (ulonglong *)0x1;
    if (!(bool)uVar3) {
      pub_142e32760(pbVar2,param_2,param_3);
LAB_14071be81:
      *param_1 = param_3;
      param_1[1] = (ulonglong)pbVar2;
      param_1[2] = param_3;
      return param_1;
    }
  }
  pbVar2 = (byte *)0x1;
  goto LAB_14071be81;
}

