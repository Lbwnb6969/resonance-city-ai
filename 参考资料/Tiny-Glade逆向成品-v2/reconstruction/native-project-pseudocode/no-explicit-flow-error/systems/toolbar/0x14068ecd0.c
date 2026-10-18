// VA 0x14068ecd0, PDB extent 572 bytes
// toolbar::mei::config::TemplateView::with_slot<tiny_glade::gui::gui_escape_menu::do_gui_escape_menu::closure_env$2,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<tiny_glade::gui::gui_escape_menu::do_gui_escape_menu::closure_env$2,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 572 */

void pdb_14068ecd0(longlong param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uStack_101;
  longlong lStack_100;
  code *pcStack_f8;
  longlong *plStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  longlong *plStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [48];
  
  lVar1 = param_1 + 0x10;
  lStack_80 = param_2;
  uStack_78 = param_3;
  uVar4 = pdb_14072cd40(lVar1);
  lStack_100 = pdb_14072aeb0(&lStack_80);
  uStack_e0 = pdb_140315970(&lStack_100);
  uVar2 = _UNK_142f3b4f8;
  uVar5 = _DAT_142f3b4f0;
  puStack_d8 = (undefined *)_DAT_142f3b4f0;
  uStack_d0 = _UNK_142f3b4f8;
  puStack_d8 = (undefined *)pdb_1400affa0(&uStack_e0);
  uStack_e0 = uVar4;
  uVar4 = pdb_1400b0130(&uStack_e0);
  cVar3 = pdb_14072c9c0(lVar1,uVar4);
  if (cVar3 == '\0') {
    if (*_DAT_143ca8e90 != 0) {
      pcStack_f8 = pdb_1402ed420;
      pcStack_e8 = pdb_1402ed420;
      uStack_e0 = 0;
      puStack_d8 = &UNK_142f9589f;
      uStack_d0 = 0x14;
      uStack_c8 = 0;
      puStack_c0 = &UNK_142f95876;
      uStack_b8 = 0x28;
      uStack_b0 = 1;
      puStack_a8 = &UNK_142f9589f;
      uStack_a0 = 0x14;
      uStack_98 = 0xf100000001;
      puStack_90 = &UNK_142f95858;
      lStack_100 = param_1;
      plStack_f0 = &lStack_80;
      plStack_88 = &lStack_100;
      pdb_140f332f0(&uStack_101,&uStack_e0);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    lStack_100 = param_2;
    pcStack_f8 = (code *)param_3;
    uStack_e0 = pdb_14072aeb0(&lStack_100);
    puStack_d8 = (undefined *)uVar5;
    uStack_d0 = uVar2;
    puStack_d8 = (undefined *)pdb_1400affa0(&uStack_e0);
    uStack_e0 = uVar4;
    uVar5 = pdb_1400b0130(&uStack_e0);
    pdb_14072caa0(auStack_70,lVar1,uVar5);
  }
  else {
    pdb_14072cd20(auStack_70,lVar1,uVar4);
  }
  pdb_140725b60(&uStack_e0,auStack_70,&UNK_142f952a5,9);
  pdb_140726490(&lStack_100,&uStack_e0,0x14);
  uVar5 = pdb_140725900(&lStack_100);
  cVar3 = pdb_140732b50(uVar5);
  if (cVar3 != '\0') {
    *param_4 = 1;
  }
  return;
}

