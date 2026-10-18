// VA 0x140691c50, PDB extent 879 bytes
// toolbar::mei::config::TemplateView::with_slot<tiny_glade::gui::settings::ui_settings_keybindings::closure_env$0,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<tiny_glade::gui::settings::ui_settings_keybindings::closure_env$0,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 879 */

void pdb_140691c50(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_130 [24];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 *puStack_f8;
  ulonglong uStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  code *pcStack_78;
  byte *pbStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lVar1 = param_1 + 0x10;
  uStack_118 = param_2;
  uStack_110 = param_3;
  uVar3 = pdb_14072cd40(lVar1);
  uStack_90 = pdb_14072aeb0(&uStack_118);
  uStack_f0 = pdb_140315970(&uStack_90);
  uVar6 = _UNK_142f3b4f8;
  uVar5 = _DAT_142f3b4f0;
  pbStack_e8 = (byte *)_DAT_142f3b4f0;
  uStack_e0 = _UNK_142f3b4f8;
  pbStack_e8 = (byte *)pdb_1400affa0(&uStack_f0);
  uStack_f0 = uVar3;
  uVar4 = pdb_1400b0130(&uStack_f0);
  cVar2 = pdb_14072c9c0(lVar1,uVar4);
  if (cVar2 == '\0') {
    if (*_DAT_143ca8e90 != 0) {
      uStack_88 = pdb_1402ed420;
      pcStack_78 = pdb_1402ed420;
      uStack_f0 = 0;
      pbStack_e8 = &UNK_142f9589f;
      uStack_e0 = 0x14;
      uStack_d8 = 0;
      puStack_d0 = &UNK_142f95876;
      uStack_c8 = 0x28;
      uStack_c0 = 1;
      puStack_b8 = &UNK_142f9589f;
      uStack_b0 = 0x14;
      uStack_a8 = 0xf100000001;
      puStack_a0 = &UNK_142f95858;
      puStack_98 = &uStack_90;
      uStack_90 = param_1;
      puStack_80 = &uStack_118;
      pdb_140f332f0(&uStack_61,&uStack_f0);
    }
    uVar3 = *(ulonglong *)(param_1 + 0x18);
    uStack_90 = param_2;
    uStack_88 = (code *)param_3;
    uStack_f0 = pdb_14072aeb0(&uStack_90);
    pbStack_e8 = (byte *)uVar5;
    uStack_e0 = uVar6;
    pbStack_e8 = (byte *)pdb_1400affa0(&uStack_f0);
    uStack_f0 = uVar3;
    uVar5 = pdb_1400b0130(&uStack_f0);
    pdb_14072caa0(auStack_130,lVar1,uVar5);
    uVar6 = 0x22;
    uVar5 = pdb_140dc6290(&UNK_142f9567a,0x22);
    pdb_140f5f4f0(&uStack_f0,uVar5,uVar6);
    pbStack_70 = pbStack_e8;
    pdb_140734440(&uStack_90,auStack_130,pbStack_e8,uStack_e0);
    uVar5 = pdb_140726ff0(&uStack_90);
    pdb_14060a7e0(uVar5,_DAT_142f95198);
    puStack_f8 = puStack_80;
    uStack_108 = (undefined4)uStack_90;
    uStack_104 = uStack_90._4_4_;
    uStack_100 = (undefined4)uStack_88;
    uStack_fc = uStack_88._4_4_;
    pdb_1407270c0(&uStack_90,&uStack_108,800);
  }
  else {
    pdb_14072cd20(auStack_130,lVar1,uVar4);
    uVar6 = 0x22;
    uVar5 = pdb_140dc6290(&UNK_142f9567a,0x22);
    pdb_140f5f4f0(&uStack_f0,uVar5,uVar6);
    pbStack_70 = pbStack_e8;
    pdb_140734440(&uStack_90,auStack_130,pbStack_e8,uStack_e0);
    uVar5 = pdb_140726ff0(&uStack_90);
    pdb_14060a7e0(uVar5,_DAT_142f95198);
    puStack_f8 = puStack_80;
    uStack_108 = (undefined4)uStack_90;
    uStack_104 = uStack_90._4_4_;
    uStack_100 = (undefined4)uStack_88;
    uStack_fc = uStack_88._4_4_;
    pdb_1407270c0(&uStack_90,&uStack_108,800);
  }
  if (uStack_f0 != 0) {
    pub_1406abac0(pbStack_70,uStack_f0,1);
  }
  return;
}

