// VA 0x1428a0630, PDB extent 702 bytes
// toolbar::mei::config::TemplateView::with_slot<system_onboarding::hint_binding_renderer::render_hints::closure$0::closure_env$0,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<system_onboarding::hint_binding_renderer::render_hints::closure$0::closure_env$0,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 702 */

void pdb_1428a0630(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined1 uStack_109;
  longlong lStack_108;
  code *pcStack_100;
  longlong *plStack_f8;
  code *pcStack_f0;
  longlong lStack_e8;
  undefined *puStack_e0;
  longlong *plStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  longlong *plStack_90;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [48];
  
  lVar1 = param_1 + 0x10;
  lStack_80 = param_2;
  uStack_78 = param_3;
  lVar6 = pdb_14072cd40(lVar1);
  lStack_108 = pdb_14072aeb0(&lStack_80);
  lStack_e8 = pdb_140315970(&lStack_108);
  uVar2 = _UNK_1435ad320;
  uVar8 = _DAT_1435ad318;
  puStack_e0 = (undefined *)_DAT_1435ad318;
  plStack_d8 = (longlong *)_UNK_1435ad320;
  puStack_e0 = (undefined *)pdb_142b38eb0(&lStack_e8);
  lStack_e8 = lVar6;
  uVar7 = pdb_142b39020(&lStack_e8);
  cVar5 = pdb_14072c9c0(lVar1,uVar7);
  if (cVar5 == '\0') {
    if (*_DAT_143ca8e90 != 0) {
      pcStack_100 = pdb_1402ed420;
      pcStack_f0 = pdb_1402ed420;
      lStack_e8 = 0;
      puStack_e0 = &UNK_1435ad27a;
      plStack_d8 = (longlong *)0x14;
      uStack_d0 = 0;
      puStack_c8 = &UNK_1435ad251;
      uStack_c0 = 0x28;
      uStack_b8 = 1;
      puStack_b0 = &UNK_1435ad27a;
      uStack_a8 = 0x14;
      uStack_a0 = 0xf100000001;
      puStack_98 = &UNK_1435ad233;
      lStack_108 = param_1;
      plStack_f8 = &lStack_80;
      plStack_90 = &lStack_108;
      pdb_140f332f0(&uStack_109,&lStack_e8);
    }
    uVar7 = *param_4;
    uVar4 = param_4[1];
    puVar3 = (undefined4 *)param_4[2];
    lVar6 = *(longlong *)(param_1 + 0x18);
    lStack_108 = param_2;
    pcStack_100 = (code *)param_3;
    lStack_e8 = pdb_14072aeb0(&lStack_108);
    puStack_e0 = (undefined *)uVar8;
    plStack_d8 = (longlong *)uVar2;
    puStack_e0 = (undefined *)pdb_142b38eb0(&lStack_e8);
    lStack_e8 = lVar6;
    uVar8 = pdb_142b39020(&lStack_e8);
    pdb_14072caa0(auStack_70,lVar1,uVar8);
    pdb_140734440(&lStack_e8,auStack_70,uVar7,uVar4);
    pdb_140727040(&lStack_108,&lStack_e8,0x505050ff);
    uVar9 = *puVar3;
  }
  else {
    uVar8 = *param_4;
    uVar2 = param_4[1];
    puVar3 = (undefined4 *)param_4[2];
    pdb_14072cd20(auStack_70,lVar1,uVar7);
    pdb_140734440(&lStack_e8,auStack_70,uVar8,uVar2);
    pdb_140727040(&lStack_108,&lStack_e8,0x505050ff);
    uVar9 = *puVar3;
  }
  uVar8 = pdb_140726ff0(&lStack_108);
  pdb_142b39190(uVar8,uVar9);
  plStack_d8 = plStack_f8;
  lStack_e8 = lStack_108;
  puStack_e0 = pcStack_100;
  pdb_140727080(&lStack_108,&lStack_e8,1);
  pdb_1407270c0(&lStack_e8,&lStack_108,700);
  return;
}

