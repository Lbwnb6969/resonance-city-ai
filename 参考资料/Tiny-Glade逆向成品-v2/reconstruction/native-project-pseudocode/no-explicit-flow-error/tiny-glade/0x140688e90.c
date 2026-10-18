// VA 0x140688e90, PDB extent 416 bytes
// tiny_glade::gui::gui_link_to_official_game::display_link_to_official_game::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_link_to_official_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   tiny_glade::gui::gui_link_to_official_game::display_link_to_official_game::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_link_to_official_game.rs
   Extent: 416 */

void pdb_140688e90(undefined4 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  
  pdb_140734440(&uStack_68,param_2,&UNK_142f9532f,0x3b);
  pdb_140727040(&uStack_50,&uStack_68,param_1);
  uVar2 = pdb_140726ff0(&uStack_50);
  pdb_14060a7e0(uVar2,_DAT_142f3e558);
  uStack_58 = uStack_40;
  uStack_68 = uStack_50;
  uStack_64 = uStack_4c;
  uStack_60 = uStack_48;
  uStack_5c = uStack_44;
  pdb_140727000(&uStack_50,&uStack_68,2);
  pdb_140727080(&uStack_68,&uStack_50,1);
  pdb_140734440(&uStack_68,param_2,&UNK_142f9536a,0x2a);
  pdb_140727040(&uStack_50,&uStack_68,param_1);
  uVar2 = pdb_140726ff0(&uStack_50);
  uVar1 = _DAT_142e37844;
  pdb_14060a7e0(uVar2,_DAT_142e37844);
  uStack_58 = uStack_40;
  uStack_68 = uStack_50;
  uStack_64 = uStack_4c;
  uStack_60 = uStack_48;
  uStack_5c = uStack_44;
  pdb_140727000(&uStack_50,&uStack_68,2);
  pdb_140727080(&uStack_68,&uStack_50,1);
  pdb_140734440(&uStack_68,param_2,&UNK_142f95394,0x34);
  pdb_140727040(&uStack_50,&uStack_68,param_1);
  uVar2 = pdb_140726ff0(&uStack_50);
  pdb_14060a7e0(uVar2,uVar1);
  uStack_58 = uStack_40;
  uStack_68 = uStack_50;
  uStack_64 = uStack_4c;
  uStack_60 = uStack_48;
  uStack_5c = uStack_44;
  pdb_140727000(&uStack_50,&uStack_68,2);
  pdb_140727080(&uStack_68,&uStack_50,1);
  return;
}

