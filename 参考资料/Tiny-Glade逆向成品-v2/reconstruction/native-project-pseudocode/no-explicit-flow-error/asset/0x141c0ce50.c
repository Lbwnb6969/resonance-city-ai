// VA 0x141c0ce50, PDB extent 110 bytes
// asset::legacy_mod::needs_legacy_textured_upgrade
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/legacy_mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset::legacy_mod::needs_legacy_textured_upgrade
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/legacy_mod.rs
   Extent: 110 */

bool pdb_141c0ce50(char param_1,longlong param_2,longlong param_3)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_1 != '\0') {
    return false;
  }
  lVar4 = 0;
  do {
    while( true ) {
      bVar5 = param_3 * 0xc == lVar4;
      bVar3 = !bVar5;
      if (bVar5) {
        return bVar3;
      }
      if ((((*(float *)(param_2 + lVar4) == 0.0) && (!NAN(*(float *)(param_2 + lVar4)))) &&
          (fVar2 = *(float *)(param_2 + 4 + lVar4), fVar2 == 0.0)) && (!NAN(fVar2))) break;
      lVar4 = lVar4 + 0xc;
    }
    pfVar1 = (float *)(param_2 + 8 + lVar4);
    lVar4 = lVar4 + 0xc;
  } while (*pfVar1 != 0.0);
  return bVar3;
}

