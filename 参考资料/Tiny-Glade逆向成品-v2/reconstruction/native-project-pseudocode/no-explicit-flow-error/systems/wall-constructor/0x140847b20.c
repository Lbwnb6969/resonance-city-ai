// VA 0x140847b20, PDB extent 29 bytes
// system_wall_constructor::utils::sine_wave::sine_wave_pack
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/sine_wave.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_wall_constructor::utils::sine_wave::sine_wave_pack
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/sine_wave.rs
   Extent: 29 */

undefined4 *
pdb_140847b20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_4;
  param_1[2] = param_3;
  param_1[3] = param_5;
  return param_1;
}

