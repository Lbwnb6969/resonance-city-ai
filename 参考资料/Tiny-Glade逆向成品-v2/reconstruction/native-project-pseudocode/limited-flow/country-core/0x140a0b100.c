// VA 0x140a0b100, PDB extent 212 bytes
// country_core::systems::ui::resources::widget_params::impl$40::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::ui::resources::widget_params::impl$40::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
   Extent: 212 */

void pdb_140a0b100(char *param_1,undefined8 *param_2)

{
  char *pcStack_8;
  
  if (*param_1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_143035c0f,4,*(code **)(param_2[1] + 0x18));
    return;
  }
  if (*param_1 == '\x01') {
    pcStack_8 = param_1 + 1;
    pdb_140f66090(param_2,&UNK_143035c38,8,&pcStack_8,&UNK_143035c18);
    return;
  }
  pcStack_8 = param_1 + 4;
  pdb_140f66f00(param_2,&UNK_143035c60,0x19,&UNK_143035c79,5,param_1 + 1,&UNK_143035c40,
                &UNK_143035c7e,6,&pcStack_8,&UNK_143034bf8);
  return;
}

