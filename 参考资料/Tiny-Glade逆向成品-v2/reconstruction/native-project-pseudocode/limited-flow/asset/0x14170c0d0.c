// VA 0x14170c0d0, PDB extent 49 bytes
// asset::texture::desc::impl$8::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture/desc.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset::texture::desc::impl$8::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture/desc.rs
   Extent: 49 */

void pdb_14170c0d0(byte *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_143329f0f;
  if (*param_1 != 0) {
    puVar1 = &UNK_143329f15;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,puVar1,(*param_1 ^ 1) * 2 + 4,*(code **)(param_2[1] + 0x18));
  return;
}

