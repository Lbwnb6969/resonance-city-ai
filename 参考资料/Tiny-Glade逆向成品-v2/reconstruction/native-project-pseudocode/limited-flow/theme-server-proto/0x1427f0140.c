// VA 0x1427f0140, PDB extent 21 bytes
// theme_server_proto::_::impl$0::deserialize::impl$2::expecting
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/theme-server-proto/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: theme_server_proto::_::impl$0::deserialize::impl$2::expecting
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/theme-server-proto/src/lib.rs
   Extent: 21 */

void pdb_1427f0140(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_1435988cd,0x15,*(code **)(param_2[1] + 0x18));
  return;
}

