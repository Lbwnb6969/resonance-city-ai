// VA 0x1428a0290, PDB extent 917 bytes
// toolbar::mei::config::TemplateView::with_slot<system_onboarding::hint_binding_renderer::render_hints::closure_env$3,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<system_onboarding::hint_binding_renderer::render_hints::closure_env$3,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 917 */

void pdb_1428a0290(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 uStack_f9;
  longlong lStack_f8;
  longlong lStack_f0;
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
  
  lVar8 = param_1 + 0x10;
  lStack_68 = param_2;
  uStack_60 = param_3;
  uVar7 = pdb_14072cd40(lVar8);
  lStack_e8 = pdb_14072aeb0(&lStack_68);
  uStack_c8 = pdb_140315970(&lStack_e8);
  uVar4 = _UNK_1435ad320;
  uVar3 = _DAT_1435ad318;
  puStack_c0 = (undefined *)_DAT_1435ad318;
  uStack_b8 = _UNK_1435ad320;
  puStack_c0 = (undefined *)pdb_142b38eb0(&uStack_c8);
  uStack_c8 = uVar7;
  uVar7 = pdb_142b39020(&uStack_c8);
  cVar6 = pdb_14072c9c0(lVar8,uVar7);
  if (cVar6 == '\0') {
    if (*_DAT_143ca8e90 != 0) {
      pcStack_e0 = pdb_1402ed420;
      pcStack_d0 = pdb_1402ed420;
      uStack_c8 = 0;
      puStack_c0 = &UNK_1435ad27a;
      uStack_b8 = 0x14;
      uStack_b0 = 0;
      puStack_a8 = &UNK_1435ad251;
      uStack_a0 = 0x28;
      uStack_98 = 1;
      puStack_90 = &UNK_1435ad27a;
      uStack_88 = 0x14;
      uStack_80 = 0xf100000001;
      puStack_78 = &UNK_1435ad233;
      lStack_e8 = param_1;
      puStack_d8 = &lStack_68;
      plStack_70 = &lStack_e8;
      pdb_140f332f0(&uStack_f9,&uStack_c8);
    }
    lStack_f8 = *param_4;
    lVar10 = param_4[1];
    plVar1 = (longlong *)param_4[2];
    puVar2 = (undefined1 *)param_4[3];
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    lStack_e8 = param_2;
    pcStack_e0 = (code *)param_3;
    uStack_c8 = pdb_14072aeb0(&lStack_e8);
    puStack_c0 = (undefined *)uVar3;
    uStack_b8 = uVar4;
    puStack_c0 = (undefined *)pdb_142b38eb0(&uStack_c8);
    uStack_c8 = uVar7;
    uVar7 = pdb_142b39020(&uStack_c8);
    pdb_14072caa0(&lStack_e8,lVar8,uVar7);
    if (*(longlong *)(lStack_f8 + 0x10) != 0) {
      lVar8 = *(longlong *)(lStack_f8 + 0x10) * 0x30;
      lStack_f0 = 0;
      lVar11 = *(longlong *)(lStack_f8 + 8);
      do {
        pcVar5 = pcStack_e0;
        lStack_f8 = lVar11 + 0x30;
        lVar9 = lStack_f0 + 1;
        uStack_c8 = pdb_140315970(&lStack_f0);
        puStack_c0 = (undefined *)uVar3;
        uStack_b8 = uVar4;
        puStack_c0 = (undefined *)pdb_142b38eb0(&uStack_c8);
        uStack_c8 = pcVar5;
        uVar7 = pdb_142b39020(&uStack_c8);
        pdb_14072caa0(&uStack_c8,&lStack_e8,uVar7);
        pdb_142b37b50(lVar11,lVar10,&uStack_c8,*plVar1 + 1,*puVar2);
        lVar8 = lVar8 + -0x30;
        lStack_f0 = lVar9;
        lVar11 = lStack_f8;
      } while (lVar8 != 0);
    }
  }
  else {
    lVar10 = *param_4;
    lVar11 = param_4[1];
    plVar1 = (longlong *)param_4[2];
    puVar2 = (undefined1 *)param_4[3];
    pdb_14072cd20(&lStack_e8,lVar8,uVar7);
    lVar8 = *(longlong *)(lVar10 + 0x10);
    if (lVar8 != 0) {
      lVar8 = lVar8 * 0x30;
      lStack_f0 = 0;
      lVar10 = *(longlong *)(lVar10 + 8);
      do {
        pcVar5 = pcStack_e0;
        lStack_f8 = lVar10 + 0x30;
        lVar9 = lStack_f0 + 1;
        uStack_c8 = pdb_140315970(&lStack_f0);
        puStack_c0 = (undefined *)uVar3;
        uStack_b8 = uVar4;
        puStack_c0 = (undefined *)pdb_142b38eb0(&uStack_c8);
        uStack_c8 = pcVar5;
        uVar7 = pdb_142b39020(&uStack_c8);
        pdb_14072caa0(&uStack_c8,&lStack_e8,uVar7);
        pdb_142b37b50(lVar10,lVar11,&uStack_c8,*plVar1 + 1,*puVar2);
        lVar8 = lVar8 + -0x30;
        lStack_f0 = lVar9;
        lVar10 = lStack_f8;
      } while (lVar8 != 0);
    }
  }
  return;
}

