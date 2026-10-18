// VA 0x14068b200, PDB extent 2215 bytes
// tiny_glade::gui::settings::ui_settings_keybindings::closure$4
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::settings::ui_settings_keybindings::closure$4
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
   Extent: 2215 */

void pdb_14068b200(longlong *param_1,longlong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 ***pppuVar8;
  longlong *plVar9;
  char cVar10;
  undefined8 uVar11;
  undefined8 ****ppppuVar12;
  int *piVar13;
  undefined *puVar14;
  longlong lVar15;
  undefined8 ****ppppuVar16;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined **ppuStack_1a8;
  undefined8 ****ppppuStack_1a0;
  code *pcStack_198;
  undefined1 auStack_190 [8];
  undefined8 ***pppuStack_188;
  longlong lStack_178;
  longlong *plStack_170;
  undefined1 auStack_168 [24];
  ulonglong uStack_150;
  byte *pbStack_148;
  undefined8 uStack_140;
  byte *pbStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 ****ppppuStack_c0;
  longlong lStack_b8;
  undefined4 *puStack_b0;
  undefined8 ****ppppuStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uVar5 = _DAT_142e382c0;
  uVar4 = _DAT_142e37884;
  uStack_80 = 0xfffffffffffffffe;
  plStack_170 = (longlong *)*param_1;
  piVar1 = (int *)param_1[1];
  lVar15 = plStack_170[1];
  lStack_178 = lVar15 + plStack_170[2] * 0xc;
  puStack_b0 = (undefined4 *)param_1[2];
  ppppuVar16 = (undefined8 ****)0x0;
  lStack_b8 = param_2;
  for (; plVar9 = plStack_170, lVar15 != lStack_178; lVar15 = lVar15 + 0xc) {
    pdb_140a17220(&uStack_150,lVar15,1,1);
    if ((*piVar1 == 1) && (*(undefined8 *****)(piVar1 + 2) == ppppuVar16)) {
      puVar14 = (undefined *)0x20;
      ppppuStack_a8 = (undefined8 ****)pdb_140dc6290(&UNK_142f955fb);
      pcStack_198 = pdb_1402ed400;
      ppppuStack_1a0 = &ppppuStack_a8;
      pcStack_a0 = (code *)puVar14;
      pdb_140f60760(&uStack_118,&UNK_142f9561b,&ppppuStack_1a0);
      pppuStack_120 = uStack_118;
      pbStack_138 = uStack_110;
      pdb_14036fdb0(&uStack_118,lStack_b8,uStack_110,ppuStack_108);
      pdb_14072c8c0(&ppppuStack_1a0,&uStack_118);
      if ((undefined8 ****)pppuStack_120 != (undefined8 ****)0x0) {
        pub_1406abac0(pbStack_138,(ulonglong)pppuStack_120,1);
      }
    }
    else {
      uVar11 = *(undefined8 *)(lStack_b8 + 8);
      ppppuStack_a8 = ppppuVar16;
      uStack_118 = (undefined8 ****)pdb_140315970(&ppppuStack_a8);
      ppuVar7 = _UNK_142f3b4f8;
      uVar6 = _DAT_142f3b4f0;
      uStack_110 = (byte *)_DAT_142f3b4f0;
      ppuStack_108 = _UNK_142f3b4f8;
      uStack_110 = (byte *)pdb_1400affa0(&uStack_118);
      uStack_118 = (undefined8 ****)uVar11;
      uVar11 = pdb_1400b0130(&uStack_118);
      pdb_14072caa0(&uStack_118,lStack_b8,uVar11);
      pdb_140734630(&ppppuStack_1a0,&uStack_118,&UNK_142f955d8,0x16);
      puStack_130 = &UNK_142f955ee;
      uStack_128 = 7;
      ppppuVar12 = (undefined8 ****)pdb_14072cd40(auStack_190);
      ppppuStack_a8 = (undefined8 ****)pdb_14072aeb0(&puStack_130);
      uStack_118 = (undefined8 ****)pdb_140315970(&ppppuStack_a8);
      uStack_110 = (byte *)uVar6;
      ppuStack_108 = ppuVar7;
      uStack_110 = (byte *)pdb_1400affa0(&uStack_118);
      uStack_118 = ppppuVar12;
      uVar11 = pdb_1400b0130(&uStack_118);
      cVar10 = pdb_14072c9c0(auStack_190,uVar11);
      if (cVar10 == '\0') {
        if (*_DAT_143ca8e90 != 0) {
          ppppuStack_a8 = &ppppuStack_1a0;
          pcStack_a0 = pdb_1402ed420;
          ppuStack_98 = &puStack_130;
          pcStack_90 = pdb_1402ed420;
          uStack_118 = (undefined8 ****)0x0;
          uStack_110 = &UNK_142f9589f;
          ppuStack_108 = (undefined **)0x14;
          uStack_100 = 0;
          puStack_f8 = &UNK_142f95876;
          uStack_f0 = 0x28;
          uStack_e8 = 1;
          puStack_e0 = &UNK_142f9589f;
          uStack_d8 = 0x14;
          uStack_d0 = 0xf100000001;
          puStack_c8 = &UNK_142f95858;
          ppppuStack_c0 = &ppppuStack_a8;
          pdb_140f332f0(&uStack_81,&uStack_118);
        }
        pppuVar8 = pppuStack_188;
        ppppuStack_a8 = (undefined8 ****)&UNK_142f955ee;
        pcStack_a0 = (code *)0x7;
        uStack_118 = (undefined8 ****)pdb_14072aeb0(&ppppuStack_a8);
        uStack_110 = (byte *)uVar6;
        ppuStack_108 = ppuVar7;
        uStack_110 = (byte *)pdb_1400affa0(&uStack_118);
        uStack_118 = (undefined8 ****)pppuVar8;
        uVar11 = pdb_1400b0130(&uStack_118);
        pdb_14072caa0(auStack_168,auStack_190,uVar11);
        pdb_14036fdb0(&ppppuStack_a8,auStack_168,pbStack_148,uStack_140);
        if (ppppuVar16 == (undefined8 ****)0x0) {
          pdb_14072c8c0(&uStack_118,&ppppuStack_a8);
        }
        else {
          ppuStack_108 = ppuStack_98;
          uStack_118 = ppppuStack_a8;
          uStack_110 = (byte *)pcStack_a0;
        }
        cVar10 = pdb_14072cd50(&uStack_118);
      }
      else {
        pdb_14072cd20(auStack_168,auStack_190,uVar11);
        pdb_14036fdb0(&ppppuStack_a8,auStack_168,pbStack_148,uStack_140);
        if (ppppuVar16 == (undefined8 ****)0x0) {
          pdb_14072c8c0(&uStack_118,&ppppuStack_a8);
        }
        else {
          ppuStack_108 = ppuStack_98;
          uStack_118 = ppppuStack_a8;
          uStack_110 = (byte *)pcStack_a0;
        }
        cVar10 = pdb_14072cd50(&uStack_118);
      }
      if (cVar10 != '\0') {
        *puStack_b0 = 2;
        *(undefined8 *****)(puStack_b0 + 2) = ppppuVar16;
      }
      puStack_130 = &UNK_142f955f5;
      uStack_128 = 6;
      ppppuVar12 = (undefined8 ****)pdb_14072cd40(auStack_190);
      ppppuStack_a8 = (undefined8 ****)pdb_14072aeb0(&puStack_130);
      uStack_118 = (undefined8 ****)pdb_140315970(&ppppuStack_a8);
      uStack_110 = (byte *)uVar6;
      ppuStack_108 = ppuVar7;
      uStack_110 = (byte *)pdb_1400affa0(&uStack_118);
      uStack_118 = ppppuVar12;
      uVar11 = pdb_1400b0130(&uStack_118);
      cVar10 = pdb_14072c9c0(auStack_190,uVar11);
      if (cVar10 == '\0') {
        if (*_DAT_143ca8e90 != 0) {
          ppppuStack_a8 = &ppppuStack_1a0;
          pcStack_a0 = pdb_1402ed420;
          ppuStack_98 = &puStack_130;
          pcStack_90 = pdb_1402ed420;
          uStack_118 = (undefined8 ****)0x0;
          uStack_110 = &UNK_142f9589f;
          ppuStack_108 = (undefined **)0x14;
          uStack_100 = 0;
          puStack_f8 = &UNK_142f95876;
          uStack_f0 = 0x28;
          uStack_e8 = 1;
          puStack_e0 = &UNK_142f9589f;
          uStack_d8 = 0x14;
          uStack_d0 = 0xf100000001;
          puStack_c8 = &UNK_142f95858;
          ppppuStack_c0 = &ppppuStack_a8;
          pdb_140f332f0(&uStack_81,&uStack_118);
        }
        pppuVar8 = pppuStack_188;
        ppppuStack_a8 = (undefined8 ****)&UNK_142f955f5;
        pcStack_a0 = (code *)0x6;
        uStack_118 = (undefined8 ****)pdb_14072aeb0(&ppppuStack_a8);
        uStack_110 = (byte *)uVar6;
        ppuStack_108 = ppuVar7;
        uStack_110 = (byte *)pdb_1400affa0(&uStack_118);
        uStack_118 = (undefined8 ****)pppuVar8;
        uVar11 = pdb_1400b0130(&uStack_118);
        pdb_14072caa0(auStack_168,auStack_190,uVar11);
        pdb_1403070b0(&uStack_118,auStack_168,&UNK_142f956de,0xd,&UNK_142f956eb,0x11);
        pdb_1407262e0(&ppppuStack_a8,&uStack_118,uVar5);
        pdb_140726320(&uStack_118,&ppppuStack_a8,uVar4,uVar4);
        uVar11 = pdb_140725900(&uStack_118);
        cVar10 = pdb_140732b50(uVar11);
      }
      else {
        pdb_14072cd20(auStack_168,auStack_190,uVar11);
        pdb_1403070b0(&uStack_118,auStack_168,&UNK_142f956de,0xd,&UNK_142f956eb,0x11);
        pdb_1407262e0(&ppppuStack_a8,&uStack_118,uVar5);
        pdb_140726320(&uStack_118,&ppppuStack_a8,uVar4,uVar4);
        uVar11 = pdb_140725900(&uStack_118);
        cVar10 = pdb_140732b50(uVar11);
      }
      if (cVar10 != '\0') {
        *puStack_b0 = 1;
        *(undefined8 *****)(puStack_b0 + 2) = ppppuVar16;
      }
    }
    if (uStack_150 != 0) {
      pub_1406abac0(pbStack_148,uStack_150,1);
    }
    ppppuVar16 = (undefined8 ****)((longlong)ppppuVar16 + 1);
  }
  uVar2 = plStack_170[2];
  if ((((uVar2 == 0) ||
       (piVar13 = (int *)(plStack_170[1] + uVar2 * 0xc + -0xc), piVar13 == (int *)0x0)) ||
      (*piVar13 != 0x92)) && (uVar2 < 2)) {
    pdb_14036fdb0(&uStack_1b8,lStack_b8,&UNK_142f955d5,3);
    if (plVar9[2] == 0) {
      pdb_14072c8c0(&uStack_118,&uStack_1b8);
      cVar10 = pdb_14072cd50(&uStack_118);
    }
    else {
      ppuStack_108 = ppuStack_1a8;
      uStack_118 = (undefined8 ****)CONCAT44(uStack_1b4,uStack_1b8);
      uStack_110 = (byte *)CONCAT44(uStack_1ac,uStack_1b0);
      cVar10 = pdb_14072cd50(&uStack_118);
    }
    if (cVar10 != '\0') {
      lVar15 = plVar9[2];
      if (lVar15 == *plVar9) {
        pdb_142d7f010(plVar9);
      }
      lVar3 = plVar9[1];
      *(undefined4 *)(lVar3 + 8 + lVar15 * 0xc) = 0;
      *(undefined8 *)(lVar3 + lVar15 * 0xc) = 0x92;
      plVar9[2] = lVar15 + 1;
      piVar1[0] = 1;
      piVar1[1] = 0;
      *(longlong *)(piVar1 + 2) = lVar15;
    }
  }
  return;
}

