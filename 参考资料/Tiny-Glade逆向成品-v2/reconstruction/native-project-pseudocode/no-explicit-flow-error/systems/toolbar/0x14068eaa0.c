// VA 0x14068eaa0, PDB extent 556 bytes
// toolbar::mei::config::TemplateView::with_slot<tiny_glade::gui::settings::ui_settings_keybindings::closure_env$7,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<tiny_glade::gui::settings::ui_settings_keybindings::closure_env$7,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 556 */

void pdb_14068eaa0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uStack_d9;
  longlong lStack_d8;
  code *pcStack_d0;
  undefined8 *puStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  longlong *plStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  
  lVar1 = param_1 + 0x10;
  lStack_58 = param_2;
  uStack_50 = param_3;
  uVar3 = pdb_14072cd40(lVar1);
  lStack_d8 = pdb_14072aeb0(&lStack_58);
  uStack_b8 = pdb_140315970(&lStack_d8);
  uVar5 = _UNK_142f3b4f8;
  uVar4 = _DAT_142f3b4f0;
  puStack_b0 = (undefined *)_DAT_142f3b4f0;
  uStack_a8 = _UNK_142f3b4f8;
  puStack_b0 = (undefined *)pdb_1400affa0(&uStack_b8);
  uStack_b8 = uVar3;
  uVar3 = pdb_1400b0130(&uStack_b8);
  cVar2 = pdb_14072c9c0(lVar1,uVar3);
  if (cVar2 == '\0') {
    if (*_DAT_143ca8e90 != 0) {
      pcStack_d0 = pdb_1402ed420;
      pcStack_c0 = pdb_1402ed420;
      uStack_b8 = 0;
      puStack_b0 = &UNK_142f9589f;
      uStack_a8 = 0x14;
      uStack_a0 = 0;
      puStack_98 = &UNK_142f95876;
      uStack_90 = 0x28;
      uStack_88 = 1;
      puStack_80 = &UNK_142f9589f;
      uStack_78 = 0x14;
      uStack_70 = 0xf100000001;
      puStack_68 = &UNK_142f95858;
      lStack_d8 = param_1;
      puStack_c8 = &lStack_58;
      plStack_60 = &lStack_d8;
      pdb_140f332f0(&uStack_d9,&uStack_b8);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    lStack_d8 = param_2;
    pcStack_d0 = (code *)param_3;
    uStack_b8 = pdb_14072aeb0(&lStack_d8);
    puStack_b0 = (undefined *)uVar4;
    uStack_a8 = uVar5;
    puStack_b0 = (undefined *)pdb_1400affa0(&uStack_b8);
    uStack_b8 = uVar3;
    uVar4 = pdb_1400b0130(&uStack_b8);
    pdb_14072caa0(&lStack_d8,lVar1,uVar4);
  }
  else {
    pdb_14072cd20(&lStack_d8,lVar1,uVar3);
  }
  uVar5 = 10;
  uVar4 = pdb_140dc6290(&UNK_142f95670,10);
  pdb_140734440(&uStack_b8,&lStack_d8,uVar4,uVar5);
  uVar4 = pdb_140726ff0(&uStack_b8);
  pdb_14060a7e0(uVar4,_DAT_142e37994);
  return;
}

