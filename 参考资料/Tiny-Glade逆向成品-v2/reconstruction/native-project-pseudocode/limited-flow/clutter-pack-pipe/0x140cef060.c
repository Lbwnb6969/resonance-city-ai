// VA 0x140cef060, PDB extent 176 bytes
// clutter_pack_pipe::impl$67::visit_asset_dependencies
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_pack_pipe::impl$67::visit_asset_dependencies
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 176 */

void pdb_140cef060(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong lVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_3 + 0x20);
  if (param_1[4] != 0) {
    lVar2 = param_1[4] * 0x60;
    lVar1 = param_1[3] + 0x40;
    do {
      pdb_14007ee60(lVar1 + -0x30,param_2,param_3);
      (*UNRECOVERED_JUMPTABLE)
                (param_2,*(undefined8 *)(lVar1 + -0x40),*(undefined8 *)(lVar1 + -0x38));
      pdb_14007ee60(lVar1,param_2,param_3);
      pdb_14007ee60(lVar1 + 0x18,param_2,param_3);
      pdb_14007ee60(lVar1 + 0x1c,param_2,param_3);
      lVar1 = lVar1 + 0x60;
      lVar2 = lVar2 + -0x60;
    } while (lVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140cef10d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,*param_1,param_1[1]);
  return;
}

