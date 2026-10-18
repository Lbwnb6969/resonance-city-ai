// VA 0x1406883a0, PDB extent 498 bytes
// tiny_glade::gui::gui_escape_menu::do_gui_escape_menu::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_escape_menu.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_escape_menu::do_gui_escape_menu::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_escape_menu.rs
   Extent: 498 */

void pdb_1406883a0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 uVar9;
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  
  uVar7 = _DAT_142e36f50;
  uVar6 = _DAT_142e36f28;
  if (*(char *)(*(longlong *)*param_1 + 0xf1) == '\0') {
    cVar8 = pdb_140a27740(*(undefined8 *)param_1[1]);
  }
  else {
    cVar8 = pdb_140a27740(*(undefined8 *)param_1[1]);
    uVar6 = uVar7;
  }
  if (cVar8 != '\0') {
    pdb_140725b60(&uStack_d8,param_2,&UNK_142f95213,0x11);
    pdb_1407262e0(auStack_f0,&uStack_d8,uVar6);
    uVar9 = pdb_140725900(auStack_f0);
    cVar8 = pdb_140732b50(uVar9);
    if (cVar8 != '\0') {
      plVar2 = (longlong *)param_1[2];
      *(undefined4 *)plVar2[2] = *(undefined4 *)((longlong)plVar2 + 0x1c);
      lVar3 = *plVar2;
      lVar4 = *(longlong *)(lVar3 + 0x30);
      uVar9 = *(undefined8 *)(lVar3 + 0x40);
      if (lVar4 == *(longlong *)(lVar3 + 0x20)) {
        pdb_142d7e980(lVar3 + 0x20);
      }
      lVar1 = *(longlong *)(lVar3 + 0x28);
      *(undefined8 *)(lVar1 + lVar4 * 0x10) = uVar9;
      *(undefined1 *)(lVar1 + 8 + lVar4 * 0x10) = 1;
      *(longlong *)(lVar3 + 0x30) = lVar4 + 1;
      *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 1;
    }
  }
  pdb_140725b60(&uStack_d8,param_2,&UNK_142f95224,0xf);
  pdb_1407262e0(auStack_f0,&uStack_d8,uVar6);
  uVar9 = pdb_140725900(auStack_f0);
  cVar8 = pdb_140732b50(uVar9);
  if (cVar8 != '\0') {
    plVar2 = (longlong *)param_1[3];
    *(undefined4 *)plVar2[2] = *(undefined4 *)((longlong)plVar2 + 0x1c);
    lVar3 = *plVar2;
    lVar4 = *(longlong *)(lVar3 + 0x30);
    uVar9 = *(undefined8 *)(lVar3 + 0x40);
    if (lVar4 == *(longlong *)(lVar3 + 0x20)) {
      pdb_142d7e8a0(lVar3 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + lVar4 * 8) = uVar9;
    *(longlong *)(lVar3 + 0x30) = lVar4 + 1;
    *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 1;
    puVar5 = (undefined8 *)param_1[4];
    *(undefined4 *)puVar5[2] = *(undefined4 *)((longlong)puVar5 + 0x1c);
    uStack_d0 = 0;
    uStack_d8 = 8;
    pdb_140a003a0(*puVar5,&uStack_d8);
  }
  pdb_140725b60(&uStack_d8,param_2,&UNK_142f95233,0x12);
  pdb_1407262e0(auStack_f0,&uStack_d8,uVar6);
  uVar9 = pdb_140725900(auStack_f0);
  cVar8 = pdb_140732b50(uVar9);
  if (cVar8 != '\0') {
    *(undefined1 *)param_1[5] = 1;
  }
  return;
}

