// VA 0x1417dd440, PDB extent 39 bytes
// asset::texture::blob::impl$22::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture/blob.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset::texture::blob::impl$22::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture/blob.rs
   Extent: 39 */

void pdb_1417dd440(byte *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,&UNK_14333a770 + *(int *)(&UNK_14333a770 + (ulonglong)*param_1 * 4),
             *(undefined8 *)(&UNK_14333a748 + (ulonglong)*param_1 * 8),*(code **)(param_2[1] + 0x18)
            );
  return;
}

