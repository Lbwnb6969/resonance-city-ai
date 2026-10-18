// VA 0x1408fdc00, PDB extent 50 bytes
// country_core::startup::init_photomode_state::impl$1::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/init_photomode_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::init_photomode_state::impl$1::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/init_photomode_state.rs
   Extent: 50 */

void pdb_1408fdc00(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = _DAT_142e36f28;
  if (DAT_143cb2d0c == '\0') {
    uVar1 = _DAT_142e3788c;
  }
  *param_1 = uVar1;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined8 *)(param_1 + 1) = 0xffffffff;
  return;
}

