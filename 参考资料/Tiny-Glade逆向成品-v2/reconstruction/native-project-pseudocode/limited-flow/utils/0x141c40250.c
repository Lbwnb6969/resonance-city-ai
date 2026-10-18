// VA 0x141c40250, PDB extent 21 bytes
// utils::circular_f32::_::impl$0::deserialize::impl$0::expecting
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/circular_f32.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::circular_f32::_::impl$0::deserialize::impl$0::expecting
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/circular_f32.rs
   Extent: 21 */

void pdb_141c40250(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_1433a0612,0x10,*(code **)(param_2[1] + 0x18));
  return;
}

