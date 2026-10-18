// VA 0x14068d3c0, PDB extent 541 bytes
// toolbar::mei::config::TemplateView::into_slot<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::config::TemplateView::into_slot<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 541 */

undefined8 pdb_14068d3c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uStack_f9;
  longlong lStack_f8;
  code *pcStack_f0;
  undefined8 *puStack_e8;
  code *pcStack_e0;
  longlong lStack_d8;
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
  
  plVar1 = (longlong *)(param_2 + 0x10);
  uStack_78 = param_3;
  uStack_70 = param_4;
  lVar4 = pdb_14072cd40(plVar1);
  lStack_f8 = pdb_14072aeb0(&uStack_78);
  lStack_d8 = pdb_140315970(&lStack_f8);
  uVar2 = _UNK_142f3b4f8;
  uVar6 = _DAT_142f3b4f0;
  puStack_d0 = (undefined *)_DAT_142f3b4f0;
  uStack_c8 = _UNK_142f3b4f8;
  puStack_d0 = (undefined *)pdb_1400affa0(&lStack_d8);
  lStack_d8 = lVar4;
  uVar5 = pdb_1400b0130(&lStack_d8);
  cVar3 = pdb_14072c9c0(plVar1,uVar5);
  if (cVar3 == '\0') {
    if (*_DAT_143ca8e90 != 0) {
      pcStack_f0 = pdb_1402ed420;
      pcStack_e0 = pdb_1402ed420;
      lStack_d8 = 0;
      puStack_d0 = &UNK_142f9589f;
      uStack_c8 = 0x14;
      uStack_c0 = 0;
      puStack_b8 = &UNK_142f95876;
      uStack_b0 = 0x28;
      uStack_a8 = 1;
      puStack_a0 = &UNK_142f9589f;
      uStack_98 = 0x14;
      uStack_90 = 0xd400000001;
      puStack_88 = &UNK_142f95858;
      lStack_f8 = param_2;
      puStack_e8 = &uStack_78;
      plStack_80 = &lStack_f8;
      pdb_140f332f0(&uStack_f9,&lStack_d8);
    }
    lStack_f8 = *plVar1;
    lVar4 = *(longlong *)(param_2 + 0x18);
    puStack_e8 = *(undefined8 **)(param_2 + 0x20);
    pcStack_f0 = (code *)lVar4;
    uStack_68 = param_3;
    uStack_60 = param_4;
    lStack_d8 = pdb_14072aeb0(&uStack_68);
    puStack_d0 = (undefined *)uVar6;
    uStack_c8 = uVar2;
    puStack_d0 = (undefined *)pdb_1400affa0(&lStack_d8);
    lStack_d8 = lVar4;
    uVar6 = pdb_1400b0130(&lStack_d8);
    pdb_14072cbe0(param_1,&lStack_f8,uVar6);
  }
  else {
    uStack_c8 = *(undefined8 *)(param_2 + 0x20);
    lStack_d8 = *plVar1;
    puStack_d0 = *(undefined **)(param_2 + 0x18);
    pdb_14072cd20(param_1,&lStack_d8,uVar5);
  }
  return param_1;
}

