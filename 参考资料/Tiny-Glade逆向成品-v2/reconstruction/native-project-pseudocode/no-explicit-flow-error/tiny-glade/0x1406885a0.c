// VA 0x1406885a0, PDB extent 550 bytes
// tiny_glade::gui::gui_escape_menu::do_gui_escape_menu::closure$10
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_escape_menu.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_escape_menu::do_gui_escape_menu::closure$10
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_escape_menu.rs
   Extent: 550 */

void pdb_1406885a0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uStack_108;
  byte *pbStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uVar3 = 0xc;
  uVar2 = pdb_140dc6290(&UNK_142f95273,0xc);
  pdb_140f5f4f0(&uStack_108,uVar2,uVar3);
  pbStack_30 = pbStack_100;
  pdb_1407339e0(&uStack_48,param_2,pbStack_100,uStack_f8);
  uVar2 = pdb_140725e80(&uStack_48);
  pdb_14060a7e0(uVar2,_DAT_142f95154);
  uStack_58 = uStack_38;
  uStack_68 = uStack_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  uVar2 = pdb_140725900(&uStack_68);
  cVar1 = pdb_140732b50(uVar2);
  if (uStack_108 != 0) {
    pub_1406abac0(pbStack_30,uStack_108,1);
  }
  if (cVar1 != '\0') {
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    uStack_108 = 9;
    pdb_140a003a0(*param_1,&uStack_108);
  }
  if (*_DAT_143ca4500 != '\x01') {
    uVar3 = 9;
    uVar2 = pdb_140dc6290(&UNK_142f9527f,9);
    pdb_140f5f4f0(&uStack_108,uVar2,uVar3);
    pbStack_30 = pbStack_100;
    pdb_1407339e0(&uStack_48,param_2,pbStack_100,uStack_f8);
    uVar2 = pdb_140725e80(&uStack_48);
    pdb_14060a7e0(uVar2,_DAT_142f95154);
    uStack_58 = uStack_38;
    uStack_68 = uStack_48;
    uStack_64 = uStack_44;
    uStack_60 = uStack_40;
    uStack_5c = uStack_3c;
    uVar2 = pdb_140725900(&uStack_68);
    cVar1 = pdb_140732b50(uVar2);
    if (uStack_108 != 0) {
      pub_1406abac0(pbStack_30,uStack_108,1);
    }
    if (cVar1 != '\0') {
      *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
      uStack_108 = 10;
      pdb_140a003a0(*param_1,&uStack_108);
    }
  }
  return;
}

