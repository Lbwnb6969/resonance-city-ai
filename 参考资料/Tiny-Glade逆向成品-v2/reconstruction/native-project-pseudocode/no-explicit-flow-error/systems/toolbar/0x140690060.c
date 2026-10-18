// VA 0x140690060, PDB extent 847 bytes
// toolbar::mei::config::TemplateView::with_slot<tiny_glade::gui::settings::ui_settings_keybindings::closure_env$9,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<tiny_glade::gui::settings::ui_settings_keybindings::closure_env$9,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 847 */

void pdb_140690060(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 auStack_118 [24];
  longlong lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  longlong lStack_e8;
  code *pcStack_e0;
  undefined8 *puStack_d8;
  code *pcStack_d0;
  ulonglong uStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  longlong *plStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lVar1 = param_1 + 0x10;
  lStack_100 = param_2;
  uStack_f8 = param_3;
  uStack_f0 = param_4;
  uVar4 = pdb_14072cd40(lVar1);
  lStack_e8 = pdb_14072aeb0(&lStack_100);
  uStack_c8 = pdb_140315970(&lStack_e8);
  uVar2 = _UNK_142f3b4f8;
  uVar6 = _DAT_142f3b4f0;
  pbStack_c0 = (byte *)_DAT_142f3b4f0;
  uStack_b8 = _UNK_142f3b4f8;
  pbStack_c0 = (byte *)pdb_1400affa0(&uStack_c8);
  uStack_c8 = uVar4;
  uVar5 = pdb_1400b0130(&uStack_c8);
  cVar3 = pdb_14072c9c0(lVar1,uVar5);
  if (cVar3 == '\0') {
    if (*_DAT_143ca8e90 != 0) {
      pcStack_e0 = pdb_1402ed420;
      pcStack_d0 = pdb_1402ed420;
      uStack_c8 = 0;
      pbStack_c0 = &UNK_142f9589f;
      uStack_b8 = 0x14;
      uStack_b0 = 0;
      puStack_a8 = &UNK_142f95876;
      uStack_a0 = 0x28;
      uStack_98 = 1;
      puStack_90 = &UNK_142f9589f;
      uStack_88 = 0x14;
      uStack_80 = 0xf100000001;
      puStack_78 = &UNK_142f95858;
      lStack_e8 = param_1;
      puStack_d8 = &lStack_100;
      plStack_70 = &lStack_e8;
      pdb_140f332f0(&uStack_61,&uStack_c8);
    }
    uVar4 = *(ulonglong *)(param_1 + 0x18);
    lStack_e8 = param_2;
    pcStack_e0 = (code *)param_3;
    uStack_c8 = pdb_14072aeb0(&lStack_e8);
    pbStack_c0 = (byte *)uVar6;
    uStack_b8 = uVar2;
    pbStack_c0 = (byte *)pdb_1400affa0(&uStack_c8);
    uStack_c8 = uVar4;
    uVar6 = pdb_1400b0130(&uStack_c8);
    pdb_14072caa0(auStack_118,lVar1,uVar6);
    uStack_c8 = 0;
    pbStack_c0 = (byte *)0x1;
    uStack_b8 = 0;
    pdb_140724ba0(&lStack_e8,&uStack_c8,1,0);
    uVar7 = pdb_14007ee60(_DAT_142f3e55c);
    pdb_140307630(auStack_118,1,0,&lStack_e8,uVar7,0x42700000,uStack_f0);
  }
  else {
    pdb_14072cd20(auStack_118,lVar1,uVar5);
    uStack_c8 = 0;
    pbStack_c0 = (byte *)0x1;
    uStack_b8 = 0;
    pdb_140724ba0(&lStack_e8,&uStack_c8,1,0);
    uVar7 = pdb_14007ee60(_DAT_142f3e55c);
    pdb_140307630(auStack_118,1,0,&lStack_e8,uVar7,0x42700000,uStack_f0);
  }
  if (uStack_c8 != 0) {
    pub_1406abac0(pbStack_c0,uStack_c8,1);
  }
  return;
}

