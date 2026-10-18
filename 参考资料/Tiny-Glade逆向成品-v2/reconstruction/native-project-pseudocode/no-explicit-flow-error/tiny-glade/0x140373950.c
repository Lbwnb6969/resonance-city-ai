// VA 0x140373950, PDB extent 537 bytes
// tiny_glade::gui::settings::ui_settings_controls
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::settings::ui_settings_controls
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
   Extent: 537 */

void pdb_140373950(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 *param_7)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined *puStack_70;
  undefined8 uStack_68;
  longlong lStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_58 = *param_6;
  pcVar1 = (char *)*param_7;
  uVar4 = *(undefined8 *)(param_2 + 8);
  puStack_70 = &UNK_142f44a80;
  uStack_68 = 0xd;
  plStack_50 = param_1;
  uStack_98 = pdb_14072aeb0(&puStack_70);
  uStack_90 = CONCAT44(_UNK_142f3b4f4,_DAT_142f3b4f0);
  uStack_88 = _UNK_142f3b4f8;
  uStack_84 = _UNK_142f3b4fc;
  uStack_90 = pdb_1400affa0(&uStack_98);
  uStack_98 = uVar4;
  uVar4 = pdb_1400b0130(&uStack_98);
  pdb_14072caa0(&puStack_70,param_2,uVar4);
  pdb_140734630(&uStack_98,&puStack_70,&UNK_142f44a8d,0x12);
  pdb_14068d3c0(&puStack_70,&uStack_98,&UNK_142f44a9f,4);
  *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
  pdb_1402a4ac0(param_3,&puStack_70,param_4,*param_5);
  pdb_1407344f0(&puStack_70,0,_DAT_142f3e558);
  uVar5 = 0x22;
  uVar4 = pdb_140dc6290(&UNK_142f44aa3,0x22);
  pdb_1407339e0(&uStack_98,&puStack_70,uVar4,uVar5);
  uVar4 = pdb_140725900(&uStack_98);
  cVar3 = pdb_140732b50(uVar4);
  if (cVar3 != '\0') {
    if ((*plStack_50 != 0xc) && ((uint)*plStack_50 < 2)) {
      pdb_1404c91b0(plStack_50);
    }
    *plStack_50 = 7;
    *(undefined1 *)(plStack_50 + 1) = 10;
  }
  lVar2 = lStack_58;
  if (((lStack_58 != 0) && (pcVar1 != (char *)0x0)) && (*pcVar1 != '\0')) {
    uVar5 = 0x29;
    uVar4 = pdb_140dc6290(&UNK_142f44ac5,0x29);
    pdb_1407339e0(&uStack_98,&puStack_70,uVar4,uVar5);
    uVar4 = pdb_140725900(&uStack_98);
    cVar3 = pdb_140732b50(uVar4);
    if (cVar3 != '\0') {
      pdb_140a3da90(lVar2,pcVar1 + 8);
    }
  }
  return;
}

