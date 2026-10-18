// VA 0x140a211f0, PDB extent 47 bytes
// country_core::resources::walls::in_progress_wall::impl$4::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/in_progress_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::in_progress_wall::impl$4::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/in_progress_wall.rs
   Extent: 47 */

void pdb_140a211f0(char *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = 3;
  if (*param_1 != '\0') {
    uVar2 = 9;
  }
  puVar1 = &UNK_143036daa;
  if (*param_1 != '\0') {
    puVar1 = &UNK_1430374e2;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,puVar1,uVar2,*(code **)(param_2[1] + 0x18));
  return;
}

