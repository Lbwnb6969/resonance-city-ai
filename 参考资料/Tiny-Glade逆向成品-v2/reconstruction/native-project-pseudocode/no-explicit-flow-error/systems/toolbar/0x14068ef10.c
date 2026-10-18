// VA 0x14068ef10, PDB extent 615 bytes
// toolbar::mei::config::TemplateView::with_slot<tiny_glade::gui::gui_controls::key_bindings_sub_menu::closure_env$0,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<tiny_glade::gui::gui_controls::key_bindings_sub_menu::closure_env$0,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 615 */

void pdb_14068ef10(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uStack_f9;
  longlong lStack_f8;
  code *pcStack_f0;
  undefined8 *puStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  longlong *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar1 = param_1 + 0x10;
  uStack_78 = param_2;
  uStack_70 = param_3;
  uVar4 = pdb_14072cd40(lVar1);
  lStack_f8 = pdb_14072aeb0(&uStack_78);
  uStack_d8 = pdb_140315970(&lStack_f8);
  uVar2 = _UNK_142f3b4f8;
  uVar5 = _DAT_142f3b4f0;
  puStack_d0 = (undefined *)_DAT_142f3b4f0;
  uStack_c8 = _UNK_142f3b4f8;
  puStack_d0 = (undefined *)pdb_1400affa0(&uStack_d8);
  uStack_d8 = uVar4;
  uVar4 = pdb_1400b0130(&uStack_d8);
  cVar3 = pdb_14072c9c0(lVar1,uVar4);
  if (cVar3 == '\0') {
    if (*_DAT_143ca8e90 != 0) {
      pcStack_f0 = pdb_1402ed420;
      pcStack_e0 = pdb_1402ed420;
      uStack_d8 = 0;
      puStack_d0 = &UNK_142f9589f;
      uStack_c8 = 0x14;
      uStack_c0 = 0;
      puStack_b8 = &UNK_142f95876;
      uStack_b0 = 0x28;
      uStack_a8 = 1;
      puStack_a0 = &UNK_142f9589f;
      uStack_98 = 0x14;
      uStack_90 = 0xf100000001;
      puStack_88 = &UNK_142f95858;
      plStack_80 = &lStack_f8;
      lStack_f8 = param_1;
      puStack_e8 = &uStack_78;
      pdb_140f332f0(&uStack_f9,&uStack_d8);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uStack_68 = param_2;
    uStack_60 = param_3;
    uStack_d8 = pdb_14072aeb0(&uStack_68);
    puStack_d0 = (undefined *)uVar5;
    uStack_c8 = uVar2;
    puStack_d0 = (undefined *)pdb_1400affa0(&uStack_d8);
    uStack_d8 = uVar4;
    uVar5 = pdb_1400b0130(&uStack_d8);
    pdb_14072caa0(&lStack_f8,lVar1,uVar5);
  }
  else {
    pdb_14072cd20(&lStack_f8,lVar1,uVar4);
  }
  if (*param_4 == 0) {
    pdb_140734440(&uStack_d8,&lStack_f8,*param_5,param_5[1]);
    uVar5 = pdb_140726ff0(&uStack_d8);
    pdb_14060a7e0(uVar5,_DAT_142f57bc4);
  }
  else {
    pdb_140306cd0(&uStack_d8,&lStack_f8,*param_5,param_5[1],*param_4,param_4[1],0x42400000);
  }
  return;
}

