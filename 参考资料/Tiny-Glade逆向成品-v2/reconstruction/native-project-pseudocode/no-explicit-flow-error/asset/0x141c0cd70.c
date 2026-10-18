// VA 0x141c0cd70, PDB extent 212 bytes
// asset::legacy_mod::legacy_textured_clutter_flags
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/legacy_mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: asset::legacy_mod::legacy_textured_clutter_flags
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/legacy_mod.rs
   Extent: 212 */

longlong * pdb_141c0cd70(longlong *param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  byte *pbVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  float *pfVar7;
  
  if (param_3 == 0) {
    pbVar3 = (byte *)0x4;
  }
  else {
    pdb_14007ee60();
    pbVar3 = pub_1406abab0(param_3 * 4,4);
    uVar2 = _DAT_142e37950;
    if (pbVar3 == (byte *)0x0) {
      pdb_142dc7e2a(4,param_3 * 4);
      pcVar1 = (code *)swi(3);
      plVar4 = (longlong *)(*pcVar1)();
      return plVar4;
    }
    pfVar7 = (float *)(param_2 + 8);
    lVar5 = 0;
    do {
      uVar6 = 0;
      if ((((pfVar7[-2] == 0.0) && (!NAN(pfVar7[-2]))) && (pfVar7[-1] == 0.0)) &&
         (((!NAN(pfVar7[-1]) && (*pfVar7 == 0.0)) && (!NAN(*pfVar7))))) {
        *(undefined8 *)(pfVar7 + -2) = uVar2;
        *pfVar7 = 1.0;
        uVar6 = 2;
      }
      *(undefined4 *)(pbVar3 + lVar5 * 4) = uVar6;
      lVar5 = lVar5 + 1;
      pfVar7 = pfVar7 + 3;
    } while (param_3 != lVar5);
  }
  *param_1 = param_3;
  param_1[1] = (longlong)pbVar3;
  param_1[2] = param_3;
  return param_1;
}

