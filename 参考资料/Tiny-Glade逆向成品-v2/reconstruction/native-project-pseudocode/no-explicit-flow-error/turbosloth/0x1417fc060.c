// VA 0x1417fc060, PDB extent 449 bytes
// turbosloth::store::PackageManifest::load<ref$<std::path::Path> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::store::PackageManifest::load<ref$<std::path::Path> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 449 */

ulonglong * pdb_1417fc060(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  byte *pbVar2;
  ulonglong uStack_60;
  byte *pbStack_58;
  ulonglong uStack_50;
  byte *pbStack_40;
  byte *pbStack_38;
  ulonglong uStack_30;
  byte *pbStack_28;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_140f3e9e0(&uStack_60,param_2,param_3,&UNK_14333e12c,0xc);
  pbStack_20 = pbStack_58;
  pdb_140f55fb0(&pbStack_40,pbStack_58,uStack_50);
  if (uStack_60 != 0) {
    pub_1406abac0(pbStack_20,uStack_60,1);
  }
  pbStack_28 = pbStack_38;
  if (SBORROW8(0,(longlong)pbStack_40)) {
    param_1[1] = (ulonglong)pbStack_38;
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  pbStack_20 = pbStack_40;
  pbStack_40 = pbStack_38;
  pbStack_38 = (byte *)uStack_30;
  if (uStack_30 < 8) {
    pbVar2 = (byte *)pdb_141c8a290(0x2500000003);
  }
  else {
    pbVar2 = pbStack_28 + 8;
    pbStack_38 = (byte *)(uStack_30 - 8);
    pbStack_40 = pbVar2;
    uVar1 = pdb_140947f90(*(undefined8 *)pbStack_28);
    if (((uVar1 & 1) == 0) &&
       (pdb_141ad5f50(&uStack_60,&pbStack_40), pbVar2 = pbStack_58, !SBORROW8(0,uStack_60))) {
      *param_1 = uStack_60;
      param_1[1] = (ulonglong)pbStack_58;
      param_1[2] = uStack_50;
      goto joined_r0x0001417fc180;
    }
  }
  uVar1 = pdb_14256b2d0(0x15,pbVar2);
  param_1[1] = uVar1;
  *param_1 = 0x8000000000000000;
joined_r0x0001417fc180:
  if (pbStack_20 != (byte *)0x0) {
    pub_1406abac0(pbStack_28,(ulonglong)pbStack_20,1);
  }
  return param_1;
}

