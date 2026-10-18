// VA 0x140a3aac0, PDB extent 52 bytes
// country_core::game_profile::profile_file_path
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_profile.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::game_profile::profile_file_path
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_profile.rs
   Extent: 52 */

undefined8 pdb_140a3aac0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = pdb_140dc7520();
  pdb_140f3e9e0(param_1,uVar1,param_2,&UNK_14303b8c0,0xb);
  return param_1;
}

