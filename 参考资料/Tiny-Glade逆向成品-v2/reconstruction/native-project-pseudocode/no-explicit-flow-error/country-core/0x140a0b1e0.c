// VA 0x140a0b1e0, PDB extent 210 bytes
// country_core::systems::ui::resources::widget_params::impl$42::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::ui::resources::widget_params::impl$42::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
   Extent: 210 */

void pdb_140a0b1e0(longlong param_1,undefined8 param_2)

{
  longlong lStack_8;
  
  lStack_8 = param_1 + 0x48;
  pdb_140f67100(param_2,&UNK_143035cc8,8,&UNK_143035cd0,0xe,param_1,&UNK_143035c88,&UNK_143035cde,
                0xd,param_1 + 0x18,&UNK_143035c88,&UNK_143035ceb,0xf,param_1 + 0x30,&UNK_143035c88,
                &UNK_143035cfa,8,&lStack_8,&UNK_143035ca8);
  return;
}

