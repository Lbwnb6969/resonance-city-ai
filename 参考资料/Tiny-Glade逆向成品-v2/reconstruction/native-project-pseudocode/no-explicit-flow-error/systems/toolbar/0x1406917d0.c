// VA 0x1406917d0, PDB extent 625 bytes
// toolbar::mei::config::TemplateView::with_slot<tiny_glade::gui::settings::ui_settings_keybindings::closure_env$11,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<tiny_glade::gui::settings::ui_settings_keybindings::closure_env$11,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 625 */

void pdb_1406917d0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uStack_141;
  longlong lStack_140;
  code *pcStack_138;
  longlong *plStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  longlong *plStack_c8;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [48];
  
  lVar1 = param_1 + 0x10;
  lStack_80 = param_2;
  uStack_78 = param_3;
  uVar3 = pdb_14072cd40(lVar1);
  lStack_140 = pdb_14072aeb0(&lStack_80);
  uStack_120 = pdb_140315970(&lStack_140);
  uVar5 = _UNK_142f3b4f8;
  uVar4 = _DAT_142f3b4f0;
  puStack_118 = (undefined *)_DAT_142f3b4f0;
  uStack_110 = _UNK_142f3b4f8;
  puStack_118 = (undefined *)pdb_1400affa0(&uStack_120);
  uStack_120 = uVar3;
  uVar3 = pdb_1400b0130(&uStack_120);
  cVar2 = pdb_14072c9c0(lVar1,uVar3);
  if (cVar2 == '\0') {
    if (*_DAT_143ca8e90 != 0) {
      pcStack_138 = pdb_1402ed420;
      pcStack_128 = pdb_1402ed420;
      uStack_120 = 0;
      puStack_118 = &UNK_142f9589f;
      uStack_110 = 0x14;
      uStack_108 = 0;
      puStack_100 = &UNK_142f95876;
      uStack_f8 = 0x28;
      uStack_f0 = 1;
      puStack_e8 = &UNK_142f9589f;
      uStack_e0 = 0x14;
      uStack_d8 = 0xf100000001;
      puStack_d0 = &UNK_142f95858;
      lStack_140 = param_1;
      plStack_130 = &lStack_80;
      plStack_c8 = &lStack_140;
      pdb_140f332f0(&uStack_141,&uStack_120);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    lStack_140 = param_2;
    pcStack_138 = (code *)param_3;
    uStack_120 = pdb_14072aeb0(&lStack_140);
    puStack_118 = (undefined *)uVar4;
    uStack_110 = uVar5;
    puStack_118 = (undefined *)pdb_1400affa0(&uStack_120);
    uStack_120 = uVar3;
    uVar4 = pdb_1400b0130(&uStack_120);
    pdb_14072caa0(auStack_70,lVar1,uVar4);
  }
  else {
    pdb_14072cd20(auStack_70,lVar1,uVar3);
  }
  uVar5 = 9;
  uVar4 = pdb_140dc6290(&UNK_142f951c2,9);
  pdb_1407339e0(&uStack_120,auStack_70,uVar4,uVar5);
  pdb_140726180(&lStack_140,&uStack_120,9);
  pdb_140725f50(&uStack_120,&lStack_140,0x14);
  uVar4 = pdb_140725900(&uStack_120);
  cVar2 = pdb_140732b50(uVar4);
  if (cVar2 != '\0') {
    puStack_118 = (undefined *)CONCAT71(puStack_118._1_7_,9);
    uStack_120 = 7;
    pdb_140a003a0(param_4,&uStack_120);
  }
  return;
}

