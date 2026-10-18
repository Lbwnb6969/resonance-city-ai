// VA 0x14057a340, PDB extent 222 bytes
// tiny_glade::gui::gui_debug::nani_capacity_debug_ui::sparse_allocated
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_debug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::gui::gui_debug::nani_capacity_debug_ui::sparse_allocated
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_debug.rs
   Extent: 222 */

undefined8 pdb_14057a340(char param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_1 == '\f') {
    puVar1 = (undefined8 *)pdb_1405c60d0(param_2,&UNK_142f72800);
    if (puVar1 != (undefined8 *)0x0) {
      lVar2 = (**(code **)(puVar1[1] + 0x18))(*puVar1);
      if (lVar2 != 0) {
        pdb_1406001f0(lVar2);
        return 1;
      }
    }
  }
  else if (param_1 == '\v') {
    puVar1 = (undefined8 *)pdb_1405c60d0(param_2,&UNK_142f72798);
    if (puVar1 != (undefined8 *)0x0) {
      lVar2 = (**(code **)(puVar1[1] + 0x18))(*puVar1);
      if (lVar2 != 0) {
        pdb_1406001f0(lVar2);
        return 1;
      }
    }
  }
  else if (param_1 == '\x06') {
    puVar1 = (undefined8 *)pdb_1405c60d0(param_2,&UNK_142f727a8);
    if (puVar1 != (undefined8 *)0x0) {
      lVar2 = (**(code **)(puVar1[1] + 0x18))(*puVar1);
      if (lVar2 != 0) {
        pdb_1406001f0(lVar2);
        return 1;
      }
    }
  }
  return 0;
}

