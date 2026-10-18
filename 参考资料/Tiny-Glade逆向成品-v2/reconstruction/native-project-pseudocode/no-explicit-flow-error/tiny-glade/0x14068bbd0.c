// VA 0x14068bbd0, PDB extent 460 bytes
// tiny_glade::gui::settings::ui_settings_keybindings::closure$8
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::gui::settings::ui_settings_keybindings::closure$8
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
   Extent: 460 */

void pdb_14068bbd0(undefined8 *param_1,undefined8 param_2)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_418 [984];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uVar8 = 0x11;
  uVar7 = pdb_140dc6290(&UNK_142f9569c,0x11);
  pdb_1407339e0(auStack_418,param_2,uVar7,uVar8);
  uVar7 = pdb_140725900(auStack_418);
  cVar6 = pdb_140732b50(uVar7);
  if (cVar6 != '\0') {
    puVar1 = (uint *)*param_1;
    if ((*puVar1 < 2) && (*(longlong *)(puVar1 + 4) != 0)) {
      pub_1406abac0(*(byte **)(puVar1 + 6),*(longlong *)(puVar1 + 4) * 0xc,4);
    }
    puVar1[0] = 3;
    puVar1[1] = 0;
    plVar2 = (longlong *)param_1[1];
    *(undefined4 *)plVar2[2] = *(undefined4 *)((longlong)plVar2 + 0x1c);
    lVar3 = *plVar2;
    lVar4 = *(longlong *)(lVar3 + 0x30);
    uVar7 = *(undefined8 *)(lVar3 + 0x40);
    if (lVar4 == *(longlong *)(lVar3 + 0x20)) {
      pdb_142d7e8a0(lVar3 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + lVar4 * 8) = uVar7;
    *(longlong *)(lVar3 + 0x30) = lVar4 + 1;
    *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 1;
    pdb_140a1edc0(auStack_418);
    puVar5 = (undefined8 *)param_1[2];
    *(undefined4 *)puVar5[2] = *(undefined4 *)((longlong)puVar5 + 0x1c);
    uStack_40 = *puVar5;
    pdb_1404ca870();
    pub_142e32760(uStack_40,auStack_418,0x3d8);
    *(undefined8 *)param_1[3] = 0;
  }
  uVar8 = 0xd;
  uVar7 = pdb_140dc6290(&UNK_142f956ad,0xd);
  pdb_1407339e0(auStack_418,param_2,uVar7,uVar8);
  uVar7 = pdb_140725900(auStack_418);
  cVar6 = pdb_140732b50(uVar7);
  if (cVar6 != '\0') {
    puVar1 = (uint *)*param_1;
    if ((*puVar1 < 2) && (*(longlong *)(puVar1 + 4) != 0)) {
      pub_1406abac0(*(byte **)(puVar1 + 6),*(longlong *)(puVar1 + 4) * 0xc,4);
    }
    puVar1[0] = 3;
    puVar1[1] = 0;
  }
  return;
}

