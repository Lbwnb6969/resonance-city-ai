// VA 0x140687fa0, PDB extent 573 bytes
// tiny_glade::gui::gui_escape_menu::do_gui_escape_menu::closure$14
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_escape_menu.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::gui::gui_escape_menu::do_gui_escape_menu::closure$14
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_escape_menu.rs
   Extent: 573 */

void pdb_140687fa0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uStack_108;
  byte *pbStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  byte *pbStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uVar4 = 9;
  uVar3 = pdb_140dc6290(&UNK_142f951c2,9);
  pdb_140f5f4f0(&uStack_108,uVar3,uVar4);
  pbStack_38 = pbStack_100;
  pdb_1407339e0(auStack_50,param_3,pbStack_100,uStack_f8);
  pdb_140726180(auStack_68,auStack_50,9);
  pdb_140725f50(auStack_50,auStack_68,0x14);
  uVar3 = pdb_140725a70(auStack_50);
  uVar3 = pdb_140732b10(uVar3);
  cVar2 = pdb_140732b50(uVar3);
  if (uStack_108 != 0) {
    pub_1406abac0(pbStack_38,uStack_108,1);
  }
  if (cVar2 != '\0') {
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    uStack_108 = 3;
    pdb_140a003a0(*param_1,&uStack_108);
  }
  uVar4 = 9;
  uVar3 = pdb_140dc6290(&UNK_142f951cb,9);
  pdb_140f5f4f0(&uStack_108,uVar3,uVar4);
  pbStack_38 = pbStack_100;
  pdb_1407339e0(auStack_50,param_3,pbStack_100,uStack_f8);
  uVar3 = pdb_140725900(auStack_50);
  cVar2 = pdb_140732b50(uVar3);
  if (uStack_108 != 0) {
    pub_1406abac0(pbStack_38,uStack_108,1);
  }
  if (cVar2 != '\0') {
    plVar5 = *(longlong **)(param_2 + 8);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = *(longlong **)(param_2 + 0x10);
    }
    lVar1 = plVar5[2];
    if ((ulonglong)(*plVar5 - lVar1) < 8) {
      pdb_142d7f1b0(plVar5,lVar1,8,1,1);
    }
    *(code **)(plVar5[1] + lVar1) = pdb_140093310;
    plVar5[2] = lVar1 + 8;
  }
  return;
}

