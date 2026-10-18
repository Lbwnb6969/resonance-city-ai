// VA 0x140692e10, PDB extent 623 bytes
// toolbar::mei::config::TemplateView::with_slot<tiny_glade::gui::gui_escape_menu::do_gui_escape_menu::closure_env$3,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<tiny_glade::gui::gui_escape_menu::do_gui_escape_menu::closure_env$3,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 623 */

void pdb_140692e10(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 uStack_e9;
  longlong lStack_e8;
  code *pcStack_e0;
  undefined8 *puStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
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
  longlong lStack_68;
  undefined8 uStack_60;
  
  lVar1 = param_1 + 0x10;
  lStack_68 = param_2;
  uStack_60 = param_3;
  uVar5 = pdb_14072cd40(lVar1);
  lStack_e8 = pdb_14072aeb0(&lStack_68);
  uStack_c8 = pdb_140315970(&lStack_e8);
  uVar2 = _UNK_142f3b4f8;
  uVar6 = _DAT_142f3b4f0;
  puStack_c0 = (undefined *)_DAT_142f3b4f0;
  uStack_b8 = _UNK_142f3b4f8;
  puStack_c0 = (undefined *)pdb_1400affa0(&uStack_c8);
  uStack_c8 = uVar5;
  uVar5 = pdb_1400b0130(&uStack_c8);
  cVar3 = pdb_14072c9c0(lVar1,uVar5);
  if (cVar3 == '\0') {
    if (*_DAT_143ca8e90 != 0) {
      pcStack_e0 = pdb_1402ed420;
      pcStack_d0 = pdb_1402ed420;
      uStack_c8 = 0;
      puStack_c0 = &UNK_142f9589f;
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
      puStack_d8 = &lStack_68;
      plStack_70 = &lStack_e8;
      pdb_140f332f0(&uStack_e9,&uStack_c8);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    lStack_e8 = param_2;
    pcStack_e0 = (code *)param_3;
    uStack_c8 = pdb_14072aeb0(&lStack_e8);
    puStack_c0 = (undefined *)uVar6;
    uStack_b8 = uVar2;
    puStack_c0 = (undefined *)pdb_1400affa0(&uStack_c8);
    uStack_c8 = uVar5;
    uVar6 = pdb_1400b0130(&uStack_c8);
    pdb_14072caa0(&lStack_e8,lVar1,uVar6);
  }
  else {
    pdb_14072cd20(&lStack_e8,lVar1,uVar5);
  }
  bVar4 = pdb_14072ce40(&lStack_e8);
  puVar7 = &UNK_142f951d4;
  if (bVar4 != 0) {
    puVar7 = &UNK_142f951e7;
  }
  pdb_140306cd0(&uStack_c8,&lStack_e8,&UNK_142f951f8,0xb,puVar7,(ulonglong)(bVar4 ^ 1) * 2 + 0x11,
                0x428c0000);
  uVar6 = pdb_140725900(&uStack_c8);
  cVar3 = pdb_140732b50(uVar6);
  if (cVar3 != '\0') {
    pdb_14033ee50(param_4);
  }
  return;
}

