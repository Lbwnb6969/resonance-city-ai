// VA 0x1423228b0, PDB extent 110 bytes
// toolbar::menu::load::display_save_file_load_error
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/load.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::menu::load::display_save_file_load_error
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/load.rs
   Extent: 110 */

void pdb_1423228b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [40];
  
  uStack_40 = param_2;
  uStack_38 = param_3;
  pdb_141174160(auStack_30,param_1,&UNK_1434d9d1b,0x16,0);
  pdb_14118f670(auStack_30,&UNK_1434d9d31,6);
  pdb_14118e580(auStack_30,&UNK_1434d9d37,5,&uStack_40);
  return;
}

