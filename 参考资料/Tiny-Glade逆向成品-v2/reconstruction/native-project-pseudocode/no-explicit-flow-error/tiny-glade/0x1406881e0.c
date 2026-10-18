// VA 0x1406881e0, PDB extent 445 bytes
// tiny_glade::gui::gui_escape_menu::do_gui_escape_menu::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_escape_menu.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_escape_menu::do_gui_escape_menu::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_escape_menu.rs
   Extent: 445 */

void pdb_1406881e0(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  ulonglong uStack_50;
  byte *pbStack_48;
  undefined8 uStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  if (*_DAT_143ca4500 == '\0') {
    uStack_80 = param_1[3];
    uStack_70 = *param_1;
    uStack_60 = param_1[1];
    pcStack_78 = pdb_1402ed400;
    pcStack_68 = pdb_1402ed400;
    pcStack_58 = pdb_1402ed400;
    pdb_140f60760(&uStack_50,&UNK_142f95203,&uStack_80);
    pbStack_38 = pbStack_48;
    pdb_140734440(&uStack_80,param_2,pbStack_48,uStack_40);
    uVar1 = *(undefined4 *)param_1[2];
    uVar2 = pdb_140726ff0(&uStack_80);
    pdb_14060a7e0(uVar2,uVar1);
  }
  else {
    uStack_80 = *param_1;
    uStack_70 = param_1[1];
    pcStack_78 = pdb_1402ed400;
    pcStack_68 = pdb_1402ed400;
    pdb_140f60760(&uStack_50,&UNK_142f95209,&uStack_80);
    pbStack_38 = pbStack_48;
    pdb_140734440(&uStack_80,param_2,pbStack_48,uStack_40);
    uVar1 = *(undefined4 *)param_1[2];
    uVar2 = pdb_140726ff0(&uStack_80);
    pdb_14060a7e0(uVar2,uVar1);
  }
  if (uStack_50 != 0) {
    pub_1406abac0(pbStack_38,uStack_50,1);
  }
  return;
}

