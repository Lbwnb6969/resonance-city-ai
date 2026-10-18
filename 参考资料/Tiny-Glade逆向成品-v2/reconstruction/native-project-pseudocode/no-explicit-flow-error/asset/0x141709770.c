// VA 0x141709770, PDB extent 400 bytes
// asset::mesh::impl$9::deserialize<rancor::Strategy<rkyv::de::pooling::alloc::Pool,rancor::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/mesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   asset::mesh::impl$9::deserialize<rancor::Strategy<rkyv::de::pooling::alloc::Pool,rancor::Error> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/mesh.rs
   Extent: 400 */

ulonglong * pdb_141709770(ulonglong *param_1,int *param_2,undefined8 param_3)

{
  ulonglong arg0;
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  byte *pbVar5;
  ulonglong uVar6;
  byte *pbStack_48;
  
  uVar1 = param_2[1];
  uVar6 = (ulonglong)uVar1;
  arg0 = uVar6 * 4;
  if (uVar6 == 0) {
    pbStack_48 = (byte *)0x4;
    uVar2 = param_2[3];
  }
  else {
    pdb_14007ee60();
    pbStack_48 = pub_1406abab0(arg0,4);
    if (pbStack_48 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,arg0);
    }
    pub_142e32760(pbStack_48,(longlong)*param_2 + (longlong)param_2,arg0);
    uVar2 = param_2[3];
  }
  uVar3 = (ulonglong)uVar2;
  if (uVar3 == 0) {
    pbVar5 = (byte *)0x8;
  }
  else {
    pdb_14007ee60();
    pbVar5 = pub_1406abab0(uVar3 * 0x38,8);
    if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,uVar3 * 0x38);
    }
  }
  cVar4 = pdb_14170bdd0((longlong)param_2[2] + (longlong)(param_2 + 2),uVar3,param_3,pbVar5);
  if (cVar4 == '\0') {
    param_1[4] = (ulonglong)pbVar5;
    param_1[5] = uVar3;
    *param_1 = uVar6;
    param_1[1] = (ulonglong)pbStack_48;
    param_1[2] = uVar6;
    param_1[3] = uVar3;
  }
  else {
    *param_1 = 0x8000000000000000;
    if (uVar1 != 0) {
      pub_1406abac0(pbStack_48,arg0,4);
    }
  }
  return param_1;
}

