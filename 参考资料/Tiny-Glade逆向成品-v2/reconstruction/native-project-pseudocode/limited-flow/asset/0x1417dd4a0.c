// VA 0x1417dd4a0, PDB extent 45 bytes
// asset::texture::blob::impl$8::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture/blob.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset::texture::blob::impl$8::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture/blob.rs
   Extent: 45 */

void pdb_1417dd4a0(byte *param_1,undefined8 *param_2)

{
  uint uVar1;
  
  uVar1 = (*param_1 ^ 0x80) << 3;
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,*(undefined8 *)(&UNK_14333af90 + uVar1),
             *(undefined8 *)(&UNK_14333a790 + uVar1),*(code **)(param_2[1] + 0x18));
  return;
}

