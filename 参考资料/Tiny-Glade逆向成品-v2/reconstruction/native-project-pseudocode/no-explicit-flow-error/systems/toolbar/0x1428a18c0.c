// VA 0x1428a18c0, PDB extent 590 bytes
// toolbar::mei::config::TemplateView::with_slot<system_onboarding::hint_popup::hint_draw::closure_env$3,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<system_onboarding::hint_popup::hint_draw::closure_env$3,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 590 */

void pdb_1428a18c0(longlong param_1,longlong param_2,undefined8 param_3,ulonglong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  uVar3 = _UNK_1435ad320;
  uVar6 = _DAT_1435ad318;
  puStack_c0 = (undefined *)_DAT_1435ad318;
  uStack_b8 = _UNK_1435ad320;
  puStack_c0 = (undefined *)pdb_142b38eb0(&uStack_c8);
  uStack_c8 = uVar5;
  uVar5 = pdb_142b39020(&uStack_c8);
  cVar4 = pdb_14072c9c0(lVar1,uVar5);
  if (cVar4 == '\0') {
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
      pdb_140f332f0(&uStack_e9,&uStack_c8);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    lStack_e8 = param_2;
    pcStack_e0 = (code *)param_3;
    uStack_c8 = pdb_14072aeb0(&lStack_e8);
    puStack_c0 = (undefined *)uVar6;
    uStack_b8 = uVar3;
    puStack_c0 = (undefined *)pdb_142b38eb0(&uStack_c8);
    uStack_c8 = uVar5;
    uVar6 = pdb_142b39020(&uStack_c8);
    pdb_14072caa0(&lStack_e8,lVar1,uVar6);
  }
  else {
    pdb_14072cd20(&lStack_e8,lVar1,uVar5);
  }
  uVar2 = *param_4;
  if (uVar2 < 4) {
    pdb_1428a2040(&uStack_c8,&lStack_e8,&UNK_1435ad1e0,0xc,
                  *(undefined8 *)(&UNK_1435ad158 + uVar2 * 0x10),0xf,0x41880000);
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar2,4,&UNK_1435ad1c8);
}

