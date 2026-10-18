// VA 0x1422d1580, PDB extent 242 bytes
// toolbar::menu::credits::impl$2::prepare_layout
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/credits.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::credits::impl$2::prepare_layout
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/credits.rs
   Extent: 242 */

undefined8 * pdb_1422d1580(undefined8 *param_1,longlong param_2,longlong param_3)

{
  float *pfVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *(float *)(param_3 + 0x44) * 0.0 + *(float *)(param_3 + 0x48);
  bVar2 = **(byte **)(param_3 + 0x18);
  if ((bVar2 & 2) != 0) {
    *(float *)(param_2 + 0x10) = fVar3;
  }
  fVar5 = *(float *)(param_3 + 0x4c);
  if ((bVar2 & 4) == 0) {
    pfVar1 = (float *)(param_2 + 8);
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) + *(float *)(param_2 + 0xc) * fVar5;
    pdb_140de9710(param_2 + 0xc,*(undefined4 *)(param_2 + 0x14),fVar5,_DAT_142e36f28);
    fVar3 = *(float *)(param_2 + 8);
    if (fVar3 < *(float *)(param_2 + 0x18)) {
      pdb_140de9710(pfVar1,*(float *)(param_2 + 0x18),fVar5,_DAT_142e37830);
      fVar3 = *pfVar1;
    }
    if (*(float *)(param_2 + 0x1c) < fVar3) {
      pdb_140de9710(pfVar1,*(float *)(param_2 + 0x1c),fVar5,_DAT_142e37830);
    }
  }
  else {
    fVar4 = *(float *)(param_2 + 0x10) - fVar3;
    if (fVar5 <= _DAT_142e37934) {
      fVar5 = _DAT_142e37934;
    }
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) + fVar4;
    *(float *)(param_2 + 0xc) = fVar4 / fVar5;
    *(float *)(param_2 + 0x10) = fVar3;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}

