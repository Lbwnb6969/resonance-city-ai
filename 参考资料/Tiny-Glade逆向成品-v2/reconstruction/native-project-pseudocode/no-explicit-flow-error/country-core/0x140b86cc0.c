// VA 0x140b86cc0, PDB extent 29 bytes
// country_core::resources::weather::Weather::fog_save_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/weather.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::weather::Weather::fog_save_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/weather.rs
   Extent: 29 */

void pdb_140b86cc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  uVar2 = *(undefined1 *)((longlong)param_2 + 0x14);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0xc) = uVar2;
  return;
}

