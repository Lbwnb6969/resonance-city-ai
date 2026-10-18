// VA 0x1406903b0, PDB extent 840 bytes
// toolbar::mei::config::TemplateView::with_slot<tiny_glade::gui::gui_controls::key_bindings_sub_menu::closure_env$1,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<tiny_glade::gui::gui_controls::key_bindings_sub_menu::closure_env$1,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 840 */

void pdb_1406903b0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lStack_100;
  undefined8 uStack_f8;
  longlong lStack_f0;
  code *pcStack_e8;
  undefined8 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  longlong *plStack_78;
  undefined8 uStack_70;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lVar1 = param_1 + 0x10;
  uStack_61 = 1;
  lStack_100 = param_2;
  uStack_f8 = param_3;
  uStack_70 = param_4;
  uVar4 = pdb_14072cd40(lVar1);
  uStack_61 = 1;
  lStack_f0 = pdb_14072aeb0(&lStack_100);
  uStack_61 = 1;
  uStack_d0 = pdb_140315970(&lStack_f0);
  uVar2 = _UNK_142f3b4f8;
  uVar5 = _DAT_142f3b4f0;
  puStack_c8 = (undefined *)_DAT_142f3b4f0;
  uStack_c0 = _UNK_142f3b4f8;
  uStack_61 = 1;
  puStack_c8 = (undefined *)pdb_1400affa0(&uStack_d0);
  uStack_61 = 1;
  uStack_d0 = uVar4;
  uVar4 = pdb_1400b0130(&uStack_d0);
  uStack_61 = 1;
  cVar3 = pdb_14072c9c0(lVar1,uVar4);
  if (cVar3 == '\0') {
    if (*_DAT_143ca8e90 != 0) {
      pcStack_e8 = pdb_1402ed420;
      pcStack_d8 = pdb_1402ed420;
      uStack_d0 = 0;
      puStack_c8 = &UNK_142f9589f;
      uStack_c0 = 0x14;
      uStack_b8 = 0;
      puStack_b0 = &UNK_142f95876;
      uStack_a8 = 0x28;
      uStack_a0 = 1;
      puStack_98 = &UNK_142f9589f;
      uStack_90 = 0x14;
      uStack_88 = 0xf100000001;
      puStack_80 = &UNK_142f95858;
      uStack_61 = 1;
      lStack_f0 = param_1;
      puStack_e0 = &lStack_100;
      plStack_78 = &lStack_f0;
      pdb_140f332f0(&uStack_64,&uStack_d0);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uStack_62 = 1;
    lStack_f0 = param_2;
    pcStack_e8 = (code *)param_3;
    uStack_d0 = pdb_14072aeb0(&lStack_f0);
    puStack_c8 = (undefined *)uVar5;
    uStack_c0 = uVar2;
    uStack_62 = 1;
    puStack_c8 = (undefined *)pdb_1400affa0(&uStack_d0);
    uStack_62 = 1;
    uStack_d0 = uVar4;
    uVar5 = pdb_1400b0130(&uStack_d0);
    uStack_62 = 1;
    pdb_14072caa0(&uStack_d0,lVar1,uVar5);
    uStack_62 = 0;
    pdb_1406879b0(uStack_70,&uStack_d0);
  }
  else {
    uStack_63 = 1;
    pdb_14072cd20(&uStack_d0,lVar1,uVar4);
    uStack_63 = 0;
    pdb_1406879b0(uStack_70,&uStack_d0);
  }
  return;
}

