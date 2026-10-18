// VA 0x1418bdee0, PDB extent 126 bytes
// asset::prefab::PrefabName::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset::prefab::PrefabName::new
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab.rs
   Extent: 126 */

byte * pdb_1418bdee0(undefined8 param_1,ulonglong param_2)

{
  byte *arg1;
  byte *pbVar1;
  ulonglong arg0;
  
  arg0 = param_2;
  arg1 = (byte *)pdb_140f606e0(1);
  pbVar1 = arg1;
  if (arg0 != 0) {
    pdb_14007ee60();
    pbVar1 = pub_1406abab0(arg0,(ulonglong)arg1);
  }
  if (pbVar1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(arg1,arg0);
  }
  pbVar1[0] = 1;
  pbVar1[1] = 0;
  pbVar1[2] = 0;
  pbVar1[3] = 0;
  pbVar1[4] = 0;
  pbVar1[5] = 0;
  pbVar1[6] = 0;
  pbVar1[7] = 0;
  pbVar1[8] = 1;
  pbVar1[9] = 0;
  pbVar1[10] = 0;
  pbVar1[0xb] = 0;
  pbVar1[0xc] = 0;
  pbVar1[0xd] = 0;
  pbVar1[0xe] = 0;
  pbVar1[0xf] = 0;
  pub_142e32760(pbVar1 + 0x10,param_1,param_2);
  return pbVar1;
}

