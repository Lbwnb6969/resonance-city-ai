// VA 0x1417dd470, PDB extent 34 bytes
// asset_pipe::texture_processing::impl$1::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture_processing.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset_pipe::texture_processing::impl$1::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture_processing.rs
   Extent: 34 */

void pdb_1417dd470(byte *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,&UNK_14333a784 + *(int *)(&UNK_14333a784 + (ulonglong)*param_1 * 4),3,
             *(code **)(param_2[1] + 0x18));
  return;
}

