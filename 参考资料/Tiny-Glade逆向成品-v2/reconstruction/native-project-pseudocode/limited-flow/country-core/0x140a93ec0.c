// VA 0x140a93ec0, PDB extent 86 bytes
// country_core::render::render_config::impl$5::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::render_config::impl$5::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
   Extent: 86 */

void pdb_140a93ec0(char *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*param_1 == '\0') {
    uVar2 = 10;
    puVar1 = (undefined *)pdb_140dc6290(&UNK_14304539c,10);
  }
  else if (*param_1 == '\x01') {
    puVar1 = &UNK_1430453a6;
    uVar2 = 4;
  }
  else {
    puVar1 = &UNK_1430453aa;
    uVar2 = 5;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,puVar1,uVar2,*(code **)(param_2[1] + 0x18));
  return;
}

