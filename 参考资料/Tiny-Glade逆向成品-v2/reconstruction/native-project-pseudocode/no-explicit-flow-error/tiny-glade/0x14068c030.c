// VA 0x14068c030, PDB extent 182 bytes
// tiny_glade::gui::settings::do_gui_escape_menu_settings::closure$4
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::gui::settings::do_gui_escape_menu_settings::closure$4
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
   Extent: 182 */

void pdb_14068c030(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  
  uVar2 = 9;
  uVar3 = pdb_140dc6290(&UNK_142f951c2,9);
  pdb_1407339e0(auStack_f0,param_3,uVar3,uVar2);
  pdb_140726180(auStack_d8,auStack_f0,9);
  pdb_140725f50(auStack_f0,auStack_d8,0x14);
  uVar3 = pdb_140725900(auStack_f0);
  cVar1 = pdb_140732b50(uVar3);
  if (cVar1 != '\0') {
    uVar3 = 3;
    if (*param_1 < 3) {
      cVar1 = pdb_140a005c0(param_1);
      if (cVar1 != '\0') {
        uStack_b8 = 0;
        uVar3 = 7;
      }
    }
    uStack_c0 = uVar3;
    pdb_140a003a0(param_2,&uStack_c0);
  }
  return;
}

