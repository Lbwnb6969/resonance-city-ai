// VA 0x14068bda0, PDB extent 649 bytes
// tiny_glade::gui::settings::ui_settings_keybindings::closure$5
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::settings::ui_settings_keybindings::closure$5
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
   Extent: 649 */

void pdb_14068bda0(undefined8 *param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong arg0;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [3];
  undefined1 auStack_58 [24];
  
  plVar2 = (longlong *)*param_1;
  if (*plVar2 == 0) {
    uVar8 = 0x1e;
    uVar6 = pdb_140dc6290(&UNK_142f956c0,0x1e);
    pdb_1407339e0(&uStack_88,param_2,uVar6,uVar8);
    uVar6 = pdb_140725a70(&uStack_88);
    uVar6 = pdb_140732b10(uVar6);
    cVar5 = pdb_140732b50(uVar6);
    if (cVar5 != '\0') {
      *(undefined1 *)param_1[1] = 1;
      plVar2 = (longlong *)param_1[2];
      *(undefined4 *)plVar2[2] = *(undefined4 *)((longlong)plVar2 + 0x1c);
      lVar9 = *plVar2;
      lVar4 = *(longlong *)(lVar9 + 0x30);
      uVar6 = *(undefined8 *)(lVar9 + 0x40);
      if (lVar4 == *(longlong *)(lVar9 + 0x20)) {
        pdb_142d7e8a0(lVar9 + 0x20);
      }
      *(undefined8 *)(*(longlong *)(lVar9 + 0x28) + lVar4 * 8) = uVar6;
      *(longlong *)(lVar9 + 0x30) = lVar4 + 1;
      *(longlong *)(lVar9 + 0x40) = *(longlong *)(lVar9 + 0x40) + 1;
      puVar7 = (undefined8 *)param_1[3];
      *(undefined4 *)puVar7[2] = *(undefined4 *)((longlong)puVar7 + 0x1c);
      lVar9 = param_1[5];
      uVar3 = *(ulonglong *)(lVar9 + 0x10);
      arg0 = uVar3 * 0xc;
      if (uVar3 < 0xaaaaaaaaaaaaaab) goto LAB_14068bf4d;
      lVar9 = 0;
      do {
        puVar7 = (undefined8 *)pdb_142dc7e2a(lVar9,arg0);
LAB_14068bf4d:
        uVar6 = *puVar7;
        uVar1 = *(undefined1 *)param_1[4];
        uVar8 = *(undefined8 *)(lVar9 + 8);
        if (arg0 == 0) {
          uStack_80 = (byte *)0x4;
          uStack_88 = 0;
          break;
        }
        pdb_14007ee60();
        lVar9 = 4;
        uStack_80 = pub_1406abab0(arg0,4);
        uStack_88 = uVar3;
      } while (uStack_80 == (byte *)0x0);
      uStack_78 = 0;
      if (uVar3 != 0) {
        pub_142e32760(uStack_80,uVar8,arg0);
        uStack_78 = uVar3;
      }
      pdb_140a13470(uVar6,uVar1,&uStack_88);
    }
    uVar8 = 6;
    uVar6 = pdb_140dc6290(&UNK_142f956ba,6);
    pdb_1407339e0(&uStack_88,param_2,uVar6,uVar8);
    pdb_140725f50(auStack_70,&uStack_88,0x14);
    uVar6 = pdb_140725900(auStack_70);
    cVar5 = pdb_140732b50(uVar6);
    if (cVar5 == '\0') {
      return;
    }
  }
  else {
    uVar3 = *(ulonglong *)(param_2 + 8);
    auStack_70[0] = 0;
    uStack_88 = pdb_140315970(auStack_70);
    uStack_80 = (byte *)CONCAT44(_UNK_142f3b4f4,_DAT_142f3b4f0);
    uStack_78 = CONCAT44(_UNK_142f3b4fc,_UNK_142f3b4f8);
    uStack_80 = (byte *)pdb_1400affa0(&uStack_88);
    uStack_88 = uVar3;
    uVar6 = pdb_1400b0130(&uStack_88);
    pdb_14072caa0(auStack_58,param_2,uVar6);
    uVar8 = 6;
    uVar6 = pdb_140dc6290(&UNK_142f956ba,6);
    pdb_1407339e0(&uStack_88,auStack_58,uVar6,uVar8);
    pdb_140725f50(auStack_70,&uStack_88,0x14);
    uVar6 = pdb_140725900(auStack_70);
    cVar5 = pdb_140732b50(uVar6);
    if (cVar5 == '\0') {
      return;
    }
    if (*plVar2 != 0) {
      *(undefined4 *)param_1[6] = 3;
      return;
    }
  }
  *(undefined1 *)param_1[1] = 1;
  return;
}

