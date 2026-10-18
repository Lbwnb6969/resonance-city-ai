// VA 0x140a39720, PDB extent 35 bytes
// country_core::game_config::impl$11::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::game_config::impl$11::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
   Extent: 35 */

void pdb_140a39720(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _UNK_14303aaa8;
  *param_1 = _DAT_14303aaa0;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x100000000060306;
  return;
}

