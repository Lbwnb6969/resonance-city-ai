// VA 0x1428a08f0, PDB extent 630 bytes
// toolbar::mei::config::TemplateView::with_slot<system_onboarding::hint_popup::hint_draw::closure_env$0,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<system_onboarding::hint_popup::hint_draw::closure_env$0,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 630 */

void pdb_1428a08f0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uStack_f9;
  longlong lStack_f8;
  code *pcStack_f0;
  longlong *plStack_e8;
  code *pcStack_e0;
  longlong lStack_d8;
  undefined *puStack_d0;
  longlong *plStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  longlong *plStack_80;
  longlong lStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [40];
  
  lVar1 = param_1 + 0x10;
  lStack_70 = param_2;
  uStack_68 = param_3;
  lVar4 = pdb_14072cd40(lVar1);
  lStack_f8 = pdb_14072aeb0(&lStack_70);
  lStack_d8 = pdb_140315970(&lStack_f8);
  uVar2 = _UNK_1435ad320;
  uVar6 = _DAT_1435ad318;
  puStack_d0 = (undefined *)_DAT_1435ad318;
  plStack_c8 = (longlong *)_UNK_1435ad320;
  puStack_d0 = (undefined *)pdb_142b38eb0(&lStack_d8);
  lStack_d8 = lVar4;
  uVar5 = pdb_142b39020(&lStack_d8);
  cVar3 = pdb_14072c9c0(lVar1,uVar5);
  if (cVar3 == '\0') {
    if (*_DAT_143ca8e90 != 0) {
      pcStack_f0 = pdb_1402ed420;
      pcStack_e0 = pdb_1402ed420;
      lStack_d8 = 0;
      puStack_d0 = &UNK_1435ad27a;
      plStack_c8 = (longlong *)0x14;
      uStack_c0 = 0;
      puStack_b8 = &UNK_1435ad251;
      uStack_b0 = 0x28;
      uStack_a8 = 1;
      puStack_a0 = &UNK_1435ad27a;
      uStack_98 = 0x14;
      uStack_90 = 0xf100000001;
      puStack_88 = &UNK_1435ad233;
      lStack_f8 = param_1;
      plStack_e8 = &lStack_70;
      plStack_80 = &lStack_f8;
      pdb_140f332f0(&uStack_f9,&lStack_d8);
    }
    lVar4 = *(longlong *)(param_1 + 0x18);
    lStack_f8 = param_2;
    pcStack_f0 = (code *)param_3;
    lStack_d8 = pdb_14072aeb0(&lStack_f8);
    puStack_d0 = (undefined *)uVar6;
    plStack_c8 = (longlong *)uVar2;
    puStack_d0 = (undefined *)pdb_142b38eb0(&lStack_d8);
    lStack_d8 = lVar4;
    uVar6 = pdb_142b39020(&lStack_d8);
    pdb_14072caa0(auStack_60,lVar1,uVar6);
  }
  else {
    pdb_14072cd20(auStack_60,lVar1,uVar5);
  }
  pdb_140734440(&lStack_d8,auStack_60,&UNK_1435ad1ec,0x18);
  pdb_1407270c0(&lStack_f8,&lStack_d8,700);
  uVar6 = pdb_140726ff0(&lStack_f8);
  pdb_142b39190(uVar6,_DAT_142f57bc4);
  plStack_c8 = plStack_e8;
  lStack_d8 = lStack_f8;
  puStack_d0 = pcStack_f0;
  pdb_140727000(&lStack_f8,&lStack_d8,2);
  pdb_140727080(&lStack_d8,&lStack_f8,1);
  return;
}

