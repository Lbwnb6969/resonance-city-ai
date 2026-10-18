// VA 0x140a31a70, PDB extent 82 bytes
// country_core::game_config::GameConfig::upgrade
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::game_config::GameConfig::upgrade
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
   Extent: 82 */

void pdb_140a31a70(longlong param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x88) == '\0') {
    iVar2 = *(int *)(param_1 + 0x80);
    fVar1 = *(float *)(param_1 + 0x84);
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (iVar2 == 1) {
      if (((fVar1 != _DAT_142e36f28) || (NAN(fVar1) || NAN(_DAT_142e36f28))) &&
         (_DAT_143015150 < fVar1)) {
        *(undefined4 *)(param_1 + 0x88) = 1;
        *(float *)(param_1 + 0x8c) = fVar1;
        return;
      }
    }
  }
  return;
}

