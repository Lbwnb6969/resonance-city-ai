// VA 0x140340490, PDB extent 728 bytes
// tiny_glade::gui::gui_link_to_official_game::display_link_to_official_game
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_link_to_official_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   tiny_glade::gui::gui_link_to_official_game::display_link_to_official_game
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_link_to_official_game.rs
   Extent: 728 */

void pdb_140340490(undefined8 *param_1,char *param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 auStack_b0 [3];
  longlong *plStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined1 auStack_50 [8];
  undefined *puStack_48;
  
  puVar1 = (ulonglong *)*param_1;
  lVar6 = param_1[1];
  uVar5 = *puVar1;
  uVar14 = 0;
  uVar15 = uVar5 - *(ulonglong *)(lVar6 + 0x18);
  if (uVar5 < *(ulonglong *)(lVar6 + 0x18)) {
    uVar15 = uVar14;
  }
  uVar13 = uVar5 - *(ulonglong *)(lVar6 + 0x38);
  if (uVar5 < *(ulonglong *)(lVar6 + 0x38)) {
    uVar13 = uVar14;
  }
  uVar5 = *(ulonglong *)(lVar6 + 0x30);
  uVar11 = uVar5 - uVar13;
  if (uVar13 > uVar5) {
    uVar11 = uVar14;
  }
  uVar2 = *(ulonglong *)(lVar6 + 0x10);
  uVar10 = uVar2 - uVar15;
  if (uVar15 > uVar2) {
    uVar10 = uVar14;
  }
  uVar14 = *(ulonglong *)(lVar6 + 0x40);
  *puVar1 = uVar14 - (uVar10 + uVar11);
  if (uVar15 <= uVar2 && uVar2 - uVar15 != 0 || uVar13 <= uVar5 && uVar5 - uVar13 != 0) {
    *puVar1 = uVar14;
    *param_2 = '\x01';
  }
  else if (*param_2 != '\x01') {
    return;
  }
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  param_3 = (longlong *)*param_3;
  puStack_d8 = &UNK_142f3e8a8;
  uStack_d0 = 0x18;
  uVar5 = pdb_14072aeb0(&puStack_d8);
  puVar12 = (undefined *)(uVar5 ^ 0xb1695320004fb443);
  puVar9 = puVar12;
  lVar6 = pdb_14072c2d0(param_3);
  *(undefined1 *)(lVar6 + 0x5e) = 0;
  *(undefined1 *)(lVar6 + 0xcb) = 1;
  if (((ulonglong)puVar9 & 1) == 0) {
    lVar6 = param_3[2];
    if (lVar6 == *param_3) {
      pdb_142d7f080(param_3);
    }
    lVar3 = param_3[1];
    *(undefined4 *)(lVar3 + lVar6 * 0x38) = 0;
    *(undefined **)(lVar3 + 0x30 + lVar6 * 0x38) = puVar12;
    param_3[2] = lVar6 + 1;
  }
  uStack_88 = 0;
  auStack_b0[0] = 0;
  plStack_98 = param_3;
  puStack_90 = puVar12;
  puStack_d8 = (undefined *)pdb_140315970(auStack_b0);
  uVar4 = _UNK_142f3b4f8;
  uVar8 = _DAT_142f3b4f0;
  uStack_d0 = _DAT_142f3b4f0;
  uStack_c8 = _UNK_142f3b4f8;
  uStack_d0 = pdb_1400affa0(&puStack_d8);
  puStack_d8 = puVar12;
  uVar7 = pdb_1400b0130(&puStack_d8);
  pdb_14072caa0(auStack_80,&plStack_98,uVar7);
  auStack_b0[0] = 0;
  puStack_d8 = (undefined *)pdb_140315970(auStack_b0);
  uStack_d0 = uVar8;
  uStack_c8 = uVar4;
  uStack_d0 = pdb_1400affa0(&puStack_d8);
  puStack_d8 = puStack_78;
  uVar7 = pdb_1400b0130(&puStack_d8);
  pdb_14072caa0(auStack_68,auStack_80,uVar7);
  auStack_b0[0] = 0;
  puStack_d8 = (undefined *)pdb_140315970(auStack_b0);
  uStack_d0 = uVar8;
  uStack_c8 = uVar4;
  uStack_d0 = pdb_1400affa0(&puStack_d8);
  puStack_d8 = puStack_60;
  uVar7 = pdb_1400b0130(&puStack_d8);
  pdb_14072caa0(auStack_50,auStack_68,uVar7);
  auStack_b0[0] = 0;
  puStack_d8 = (undefined *)pdb_140315970(auStack_b0);
  uStack_d0 = uVar8;
  uStack_c8 = uVar4;
  uStack_d0 = pdb_1400affa0(&puStack_d8);
  puStack_d8 = puStack_48;
  uVar8 = pdb_1400b0130(&puStack_d8);
  pdb_14072caa0(auStack_b0,auStack_50,uVar8);
  pdb_140734630(&puStack_d8,auStack_b0,&UNK_142f3e8c0,0xc);
  auStack_b0[0] = CONCAT44(auStack_b0[0]._4_4_,0x7b5a51ff);
  pdb_14068f3a0(&puStack_d8,&UNK_142f3e8cc,6,auStack_b0);
  pdb_140690700(&puStack_d8,&UNK_142f3e8d2,6,param_4);
  return;
}

