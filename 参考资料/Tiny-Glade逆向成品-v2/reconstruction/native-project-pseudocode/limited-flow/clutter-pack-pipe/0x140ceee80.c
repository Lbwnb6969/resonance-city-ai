// VA 0x140ceee80, PDB extent 23 bytes
// clutter_pack_pipe::impl$87::visit_asset_dependencies
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_pack_pipe::impl$87::visit_asset_dependencies
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 23 */

void pdb_140ceee80(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000140ceee94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x20))(param_2,*param_1,param_1[1]);
  return;
}

