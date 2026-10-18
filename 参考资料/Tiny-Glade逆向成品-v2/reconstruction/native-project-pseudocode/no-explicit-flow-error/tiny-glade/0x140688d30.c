// VA 0x140688d30, PDB extent 340 bytes
// tiny_glade::gui::gui_link_to_official_game::display_link_to_official_game::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_link_to_official_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::gui::gui_link_to_official_game::display_link_to_official_game::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_link_to_official_game.rs
   Extent: 340 */

void pdb_140688d30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong alStack_38 [3];
  
  pdb_1407339e0(alStack_38,param_2,&UNK_142f952e5,4);
  uVar3 = pdb_140725900(alStack_38);
  cVar2 = pdb_140732b50(uVar3);
  if (cVar2 != '\0') {
    plVar4 = *(longlong **)(param_1 + 8);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x10);
    }
    lVar1 = plVar4[2];
    if ((ulonglong)(*plVar4 - lVar1) < 8) {
      pdb_142d7f1b0(plVar4,lVar1,8,1,1);
    }
    *(code **)(plVar4[1] + lVar1) = pdb_140093310;
    plVar4[2] = lVar1 + 8;
  }
  pdb_1407339e0(alStack_38,param_2,&UNK_142f952e9,0x10);
  uVar3 = pdb_140725900(alStack_38);
  cVar2 = pdb_140732b50(uVar3);
  if (cVar2 != '\0') {
    plVar4 = *(longlong **)(param_1 + 8);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x10);
    }
    lVar1 = plVar4[2];
    if ((ulonglong)(*plVar4 - lVar1) < 8) {
      pdb_142d7f1b0(plVar4,lVar1,8,1,1);
    }
    *(code **)(plVar4[1] + lVar1) = pdb_140093310;
    plVar4[2] = lVar1 + 8;
    alStack_38[0] = pdb_140cad450(&UNK_142f952f9,0x36);
    if (alStack_38[0] != 0) {
      pdb_1404b38e0(alStack_38);
    }
  }
  return;
}

