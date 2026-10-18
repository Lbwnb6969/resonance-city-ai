// VA 0x14170c1f0, PDB extent 47 bytes
// asset::texture::desc::impl$52::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture/desc.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset::texture::desc::impl$52::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture/desc.rs
   Extent: 47 */

void pdb_14170c1f0(char *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = 7;
  if (*param_1 != '\0') {
    uVar2 = 0x11;
  }
  puVar1 = &UNK_14332a0c3;
  if (*param_1 != '\0') {
    puVar1 = &UNK_14332a0ca;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,puVar1,uVar2,*(code **)(param_2[1] + 0x18));
  return;
}

