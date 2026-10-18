// VA 0x1406887d0, PDB extent 364 bytes
// tiny_glade::gui::gui_escape_menu::do_gui_escape_menu::closure$9
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_escape_menu.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::gui::gui_escape_menu::do_gui_escape_menu::closure$9
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_escape_menu.rs
   Extent: 364 */

void pdb_1406887d0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined1 auStack_38 [24];
  
  pdb_1403070b0(&uStack_d8,param_2,&UNK_142f95288,3,&UNK_142f95224,0xf);
  uVar2 = pdb_140725900(&uStack_d8);
  cVar1 = pdb_140732b50(uVar2);
  if (cVar1 != '\0') {
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    uStack_d0 = 0;
    uStack_d8 = 8;
    pdb_140a003a0(*param_1,&uStack_d8);
  }
  pdb_1403070b0(&uStack_d8,param_2,&UNK_142f9528b,8,&UNK_142f95233,0x12);
  pdb_140726180(auStack_38,&uStack_d8,3);
  uVar2 = pdb_140725900(auStack_38);
  cVar1 = pdb_140732b50(uVar2);
  if (cVar1 != '\0') {
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    uStack_d0 = 3;
    uStack_d8 = 7;
    pdb_140a003a0(*param_1,&uStack_d8);
  }
  pdb_1403070b0(&uStack_d8,param_2,&UNK_142f95293,4,&UNK_142f95297,0xe);
  uVar2 = pdb_140725900(&uStack_d8);
  cVar1 = pdb_140732b50(uVar2);
  if (cVar1 != '\0') {
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    uStack_d8 = 4;
    pdb_140a003a0(*param_1,&uStack_d8);
  }
  return;
}

