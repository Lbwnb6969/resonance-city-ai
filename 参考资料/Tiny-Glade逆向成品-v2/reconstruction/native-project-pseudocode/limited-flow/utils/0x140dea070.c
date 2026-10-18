// VA 0x140dea070, PDB extent 21 bytes
// utils::wall_space::_::impl$0::deserialize::impl$2::expecting
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/wall_space.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::wall_space::_::impl$0::deserialize::impl$2::expecting
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/wall_space.rs
   Extent: 21 */

void pdb_140dea070(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_1431fedd8,0x15,*(code **)(param_2[1] + 0x18));
  return;
}

