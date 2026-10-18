// VA 0x14173c310, PDB extent 291 bytes
// turbosloth::asset::impl$69::deserialize<rancor::Strategy<rkyv::de::pooling::alloc::Pool,rancor::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$69::deserialize<rancor::Strategy<rkyv::de::pooling::alloc::Pool,rancor::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 291 */

longlong * pdb_14173c310(longlong *param_1,longlong param_2)

{
  int iVar1;
  byte *pbVar2;
  ulonglong unaff_RDI;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_14150fa80(&lStack_70);
  if (SBORROW8(0,lStack_70)) {
    *param_1 = -0x8000000000000000;
  }
  else {
    if (*(char *)(param_2 + 8) == '\0') {
      unaff_RDI = (ulonglong)*(uint *)(param_2 + 0x10);
      if (unaff_RDI == 0) {
        unaff_RDI = 0;
        pbVar2 = (byte *)0x1;
      }
      else {
        lStack_50 = lStack_68;
        iVar1 = *(int *)(param_2 + 0xc);
        pdb_14007ee60();
        pbVar2 = pub_1406abab0(unaff_RDI,1);
        if (pbVar2 == (byte *)0x0) {
          lStack_58 = lStack_70;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(1,unaff_RDI);
        }
        pub_142e32760(pbVar2,param_2 + iVar1 + 0xc,unaff_RDI);
        lStack_68 = lStack_50;
      }
    }
    else {
      pbVar2 = (byte *)0x0;
    }
    *param_1 = lStack_70;
    param_1[1] = lStack_68;
    param_1[2] = lStack_60;
    param_1[3] = (longlong)pbVar2;
    param_1[4] = unaff_RDI;
  }
  return param_1;
}

