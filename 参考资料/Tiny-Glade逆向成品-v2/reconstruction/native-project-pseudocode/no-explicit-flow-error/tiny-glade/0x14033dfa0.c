// VA 0x14033dfa0, PDB extent 3758 bytes
// tiny_glade::gui::gui_escape_menu::do_gui_escape_menu
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_escape_menu.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_escape_menu::do_gui_escape_menu
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_escape_menu.rs
   Extent: 3758 */

void pdb_14033dfa0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9,longlong *param_10,undefined8 param_11,longlong *param_12,
                  undefined8 param_13,longlong *param_14,undefined8 *param_15,longlong *param_16)

{
  char *pcVar1;
  ulonglong *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  char cVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  char cStack_1d6;
  char cStack_1d5;
  undefined4 uStack_1d4;
  undefined4 *puStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 *puStack_1c0;
  undefined4 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined4 *puStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  longlong lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 *puStack_178;
  longlong *plStack_170;
  undefined8 *puStack_168;
  char *pcStack_160;
  undefined4 *puStack_e8;
  char *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  pcStack_e0 = (char *)*param_2;
  pcVar1 = (char *)param_2[4];
  puVar2 = (ulonglong *)param_2[8];
  lVar15 = param_2[0xc];
  uStack_a8 = *param_3;
  uStack_a0 = param_3[1];
  uStack_98 = param_3[2];
  uStack_90 = param_3[3];
  lStack_190 = param_3[4];
  uStack_88 = *param_4;
  uStack_80 = param_4[1];
  uStack_78 = param_4[2];
  uStack_70 = param_4[3];
  uStack_68 = *(undefined4 *)(param_4 + 4);
  uStack_64 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_60 = *(undefined4 *)(param_4 + 5);
  uStack_5c = *(undefined4 *)((longlong)param_4 + 0x2c);
  uStack_58 = *(undefined4 *)(param_4 + 6);
  uStack_54 = *(undefined4 *)((longlong)param_4 + 0x34);
  uStack_50 = *(undefined4 *)(param_4 + 7);
  uStack_4c = *(undefined4 *)((longlong)param_4 + 0x3c);
  puVar19 = (undefined4 *)param_14[4];
  puStack_e8 = (undefined4 *)param_14[6];
  uStack_198 = *(undefined4 *)((longlong)param_14 + 0x3c);
  cStack_1d6 = '\0';
  cStack_1d5 = '\0';
  uStack_1d4 = *(undefined4 *)((longlong)param_6 + 0x1c);
  puStack_1d0 = (undefined4 *)param_6[2];
  *puStack_1d0 = uStack_1d4;
  ppuVar3 = (undefined **)*param_6;
  uStack_188 = (undefined **)&UNK_142f3e6fa;
  uStack_180 = (undefined8 *)0xa;
  uVar12 = pdb_14072aeb0(&uStack_188);
  puVar18 = (undefined8 *)(uVar12 ^ 0xb1695320004fb443);
  puVar17 = puVar18;
  lVar13 = pdb_14072c2d0(ppuVar3);
  *(undefined1 *)(lVar13 + 0x5e) = 0;
  if (((ulonglong)puVar17 & 1) == 0) {
    puVar4 = ppuVar3[2];
    if (puVar4 == *ppuVar3) {
      pdb_142d7f080(ppuVar3);
    }
    puVar5 = ppuVar3[1];
    *(undefined4 *)(puVar5 + (longlong)puVar4 * 0x38) = 2;
    *(undefined8 **)(puVar5 + (longlong)puVar4 * 0x38 + 0x30) = puVar18;
    ppuVar3[2] = puVar4 + 1;
  }
  puStack_1b8 = (undefined4 *)0x0;
  ppuStack_1c8 = ppuVar3;
  puStack_1c0 = puVar18;
  pdb_140734630(&uStack_188,&ppuStack_1c8,&UNK_142f3e704,9);
  puStack_d8 = &UNK_142f3e70d;
  uStack_d0 = 7;
  uStack_c8 = 1;
  uStack_c0 = 0;
  uStack_b8 = 1;
  uStack_b0 = 0;
  uStack_194 = 0x41a00000;
  if (*(char *)(lVar15 + 1) == '\0') {
    ppuStack_1c8 = &puStack_d8;
    puStack_1c0 = &uStack_c8;
    puStack_1b8 = &uStack_194;
    puStack_1b0 = &uStack_b8;
    pdb_140692a10(&uStack_188,&UNK_142f3e714,8,&ppuStack_1c8);
  }
  if (*pcVar1 == '\x01') {
    lVar13 = *param_1;
    cVar10 = pdb_140938b60(*(undefined4 *)(lVar13 + 0xe8),*(undefined4 *)(lVar13 + 0xec));
    if (cVar10 == '\0') {
LAB_14033e293:
      bVar9 = false;
    }
    else {
      cVar10 = pdb_140901040(*param_15);
      if (cVar10 == '\0') {
        cVar10 = pdb_140a00370(puVar2);
        if (cVar10 == '\0') {
          cStack_1d5 = '\x01';
          goto LAB_14033e293;
        }
        cStack_1d6 = '\x01';
        bVar9 = true;
      }
      else {
        puStack_1a0 = puVar19;
        uVar11 = pdb_140b68600();
        *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
        lVar6 = *param_7;
        lVar16 = *(longlong *)(lVar6 + 0x30);
        uVar7 = *(undefined8 *)(lVar6 + 0x40);
        if (lVar16 == *(longlong *)(lVar6 + 0x20)) {
          pdb_142d7e980(lVar6 + 0x20);
        }
        lVar8 = *(longlong *)(lVar6 + 0x28);
        *(undefined8 *)(lVar8 + lVar16 * 0x10) = uVar7;
        *(undefined4 *)(lVar8 + 8 + lVar16 * 0x10) = uVar11;
        *(longlong *)(lVar6 + 0x30) = lVar16 + 1;
        *(longlong *)(lVar6 + 0x40) = *(longlong *)(lVar6 + 0x40) + 1;
        bVar9 = false;
        puVar19 = puStack_1a0;
      }
    }
    cVar10 = pdb_140938b60(*(undefined4 *)(lVar13 + 0x108),*(undefined4 *)(lVar13 + 0x10c));
    if ((cVar10 != '\0') && ((int)*puVar2 != 8)) {
      *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
      lVar13 = *param_9;
      lVar6 = *(longlong *)(lVar13 + 0x30);
      uVar7 = *(undefined8 *)(lVar13 + 0x40);
      puStack_1a0 = puVar19;
      if (lVar6 == *(longlong *)(lVar13 + 0x20)) {
        pdb_142d7e8a0(lVar13 + 0x20);
      }
      *(undefined8 *)(*(longlong *)(lVar13 + 0x28) + lVar6 * 8) = uVar7;
      *(longlong *)(lVar13 + 0x30) = lVar6 + 1;
      *(longlong *)(lVar13 + 0x40) = *(longlong *)(lVar13 + 0x40) + 1;
      *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
      uStack_180 = (undefined8 *)CONCAT71(uStack_180._1_7_,1);
      uStack_188 = (undefined **)0x8;
      pdb_140a003a0(*param_5,&uStack_188);
      puVar19 = puStack_1a0;
    }
  }
  else {
    bVar9 = false;
  }
  cVar10 = pdb_140a00370(puVar2);
  if ((cVar10 == '\0') || (*(char *)(lVar15 + 1) != '\0')) {
    if ((int)*puVar2 == 3) {
      *puStack_1d0 = uStack_1d4;
      uStack_188 = (undefined **)&UNK_142f3e71c;
      uStack_180 = (undefined8 *)0x4;
      uVar12 = pdb_14072aeb0(&uStack_188);
      puVar18 = (undefined8 *)(uVar12 ^ 0xb1695320004fb443);
      puVar17 = puVar18;
      lVar15 = pdb_14072c2d0(ppuVar3);
      *(undefined1 *)(lVar15 + 0x5e) = 0;
      if (((ulonglong)puVar17 & 1) == 0) {
        puVar4 = ppuVar3[2];
        if (puVar4 == *ppuVar3) {
          pdb_142d7f080(ppuVar3);
        }
        puVar5 = ppuVar3[1];
        *(undefined4 *)(puVar5 + (longlong)puVar4 * 0x38) = 2;
        *(undefined8 **)(puVar5 + (longlong)puVar4 * 0x38 + 0x30) = puVar18;
        ppuVar3[2] = puVar4 + 1;
      }
      puStack_1b8 = (undefined4 *)0x0;
      ppuStack_1c8 = ppuVar3;
      puStack_1c0 = puVar18;
      pdb_140734630(&uStack_188,&ppuStack_1c8,&UNK_142f3e704,9);
      pdb_14068ecd0(&uStack_188,&UNK_142f3e73d,6,&cStack_1d5);
    }
    if (!bVar9) goto joined_r0x00014033e7f5;
  }
  else {
    *puStack_1d0 = uStack_1d4;
    ppuStack_1c8 = (undefined **)&UNK_142f3e71c;
    puStack_1c0 = (undefined8 *)0x4;
    uVar14 = pdb_14072aeb0(&ppuStack_1c8);
    uVar14 = uVar14 ^ 0xb1695320004fb443;
    uVar12 = uVar14;
    lVar15 = pdb_14072c2d0(ppuVar3);
    *(undefined1 *)(lVar15 + 0x5e) = 0;
    if ((uVar12 & 1) == 0) {
      puVar4 = ppuVar3[2];
      if (puVar4 == *ppuVar3) {
        pdb_142d7f080(ppuVar3);
      }
      puVar5 = ppuVar3[1];
      *(undefined4 *)(puVar5 + (longlong)puVar4 * 0x38) = 2;
      *(ulonglong *)(puVar5 + (longlong)puVar4 * 0x38 + 0x30) = uVar14;
      ppuVar3[2] = puVar4 + 1;
    }
    puStack_178 = (undefined4 *)0x0;
    uStack_188 = ppuVar3;
    uStack_180 = (undefined8 *)uVar14;
    pdb_140734630(&ppuStack_1c8,&uStack_188,&UNK_142f3e720,0x16);
    uStack_188 = (undefined **)&uStack_a8;
    uStack_180 = &uStack_88;
    puStack_178 = &uStack_68;
    plStack_170 = param_9;
    puStack_168 = param_5;
    pcStack_160 = &cStack_1d6;
    pdb_1406923c0(&ppuStack_1c8,&UNK_142f3e736,7,&uStack_188);
    if (cStack_1d6 == '\0') goto joined_r0x00014033e7f5;
  }
  *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
  uStack_188 = (undefined **)0x3;
  pdb_140a003a0(*param_5,&uStack_188);
  if (*pcStack_e0 != '\x10') {
    if (*pcStack_e0 == '\t') {
      *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
      lVar15 = *param_7;
      lVar13 = *(longlong *)(lVar15 + 0x30);
      uVar7 = *(undefined8 *)(lVar15 + 0x40);
      if (lVar13 == *(longlong *)(lVar15 + 0x20)) {
        pdb_142d7e980(lVar15 + 0x20);
      }
      lVar6 = *(longlong *)(lVar15 + 0x28);
      *(undefined8 *)(lVar6 + lVar13 * 0x10) = uVar7;
      *(undefined4 *)(lVar6 + 8 + lVar13 * 0x10) = 0x3000300;
      *(longlong *)(lVar15 + 0x30) = lVar13 + 1;
      *(longlong *)(lVar15 + 0x40) = *(longlong *)(lVar15 + 0x40) + 1;
      pdb_140b4b6a0(&uStack_188);
      *puStack_e8 = uStack_198;
      *(undefined4 **)(puVar19 + 4) = puStack_178;
      *puVar19 = (undefined4)uStack_188;
      puVar19[1] = uStack_188._4_4_;
      puVar19[2] = (undefined4)uStack_180;
      puVar19[3] = uStack_180._4_4_;
    }
    else {
      pdb_140b4b6a0(&uStack_188);
      *(undefined4 *)param_14[2] = *(undefined4 *)((longlong)param_14 + 0x1c);
      lVar15 = *param_14;
      lVar13 = *(longlong *)(lVar15 + 0x30);
      uVar7 = *(undefined8 *)(lVar15 + 0x40);
      if (lVar13 == *(longlong *)(lVar15 + 0x20)) {
        pdb_142d7e6e0(lVar15 + 0x20);
      }
      lVar6 = *(longlong *)(lVar15 + 0x28);
      lVar16 = lVar13 * 0x20;
      *(undefined4 **)(lVar6 + 0x10 + lVar16) = puStack_178;
      puVar19 = (undefined4 *)(lVar6 + lVar16);
      *puVar19 = (undefined4)uStack_188;
      puVar19[1] = uStack_188._4_4_;
      puVar19[2] = (undefined4)uStack_180;
      puVar19[3] = uStack_180._4_4_;
      *(undefined8 *)(lVar6 + 0x18 + lVar16) = uVar7;
      *(longlong *)(lVar15 + 0x30) = lVar13 + 1;
      *(longlong *)(lVar15 + 0x40) = *(longlong *)(lVar15 + 0x40) + 1;
    }
  }
  *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
  lVar15 = *param_8;
  lVar13 = *(longlong *)(lVar15 + 0x30);
  uVar7 = *(undefined8 *)(lVar15 + 0x40);
  if (lVar13 == *(longlong *)(lVar15 + 0x20)) {
    pdb_142d7e8a0(lVar15 + 0x20);
  }
  *(undefined8 *)(*(longlong *)(lVar15 + 0x28) + lVar13 * 8) = uVar7;
  *(longlong *)(lVar15 + 0x30) = lVar13 + 1;
  *(longlong *)(lVar15 + 0x40) = *(longlong *)(lVar15 + 0x40) + 1;
  *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
  lVar15 = *param_10;
  lVar13 = *(longlong *)(lVar15 + 0x30);
  uVar7 = *(undefined8 *)(lVar15 + 0x40);
  if (lVar13 == *(longlong *)(lVar15 + 0x20)) {
    pdb_142d7e980(lVar15 + 0x20);
  }
  lVar6 = *(longlong *)(lVar15 + 0x28);
  *(undefined8 *)(lVar6 + lVar13 * 0x10) = uVar7;
  *(undefined1 *)(lVar6 + 8 + lVar13 * 0x10) = 10;
  *(longlong *)(lVar15 + 0x30) = lVar13 + 1;
  *(longlong *)(lVar15 + 0x40) = *(longlong *)(lVar15 + 0x40) + 1;
  *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
  lVar15 = *param_9;
  lVar13 = *(longlong *)(lVar15 + 0x30);
  uVar7 = *(undefined8 *)(lVar15 + 0x40);
  if (lVar13 == *(longlong *)(lVar15 + 0x20)) {
    pdb_142d7e8a0(lVar15 + 0x20);
  }
  *(undefined8 *)(*(longlong *)(lVar15 + 0x28) + lVar13 * 8) = uVar7;
  *(longlong *)(lVar15 + 0x30) = lVar13 + 1;
  *(longlong *)(lVar15 + 0x40) = *(longlong *)(lVar15 + 0x40) + 1;
  *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
  lVar15 = *param_12;
  lVar13 = *(longlong *)(lVar15 + 0x30);
  uVar7 = *(undefined8 *)(lVar15 + 0x40);
  if (lVar13 == *(longlong *)(lVar15 + 0x20)) {
    pdb_142d7e8a0(lVar15 + 0x20);
  }
  *(undefined8 *)(*(longlong *)(lVar15 + 0x28) + lVar13 * 8) = uVar7;
  *(longlong *)(lVar15 + 0x30) = lVar13 + 1;
  *(longlong *)(lVar15 + 0x40) = *(longlong *)(lVar15 + 0x40) + 1;
joined_r0x00014033e7f5:
  if (cStack_1d5 != '\0') {
    *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
    lVar15 = *param_10;
    lVar13 = *(longlong *)(lVar15 + 0x30);
    uVar7 = *(undefined8 *)(lVar15 + 0x40);
    if (lVar13 == *(longlong *)(lVar15 + 0x20)) {
      pdb_142d7e980(lVar15 + 0x20);
    }
    lVar6 = *(longlong *)(lVar15 + 0x28);
    *(undefined8 *)(lVar6 + lVar13 * 0x10) = uVar7;
    *(undefined1 *)(lVar6 + 8 + lVar13 * 0x10) = 0xb;
    *(longlong *)(lVar15 + 0x30) = lVar13 + 1;
    *(longlong *)(lVar15 + 0x40) = *(longlong *)(lVar15 + 0x40) + 1;
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    uStack_188 = (undefined **)0x2;
    pdb_140a003a0(*param_5,&uStack_188);
  }
  lVar15 = 4;
  if (1 < *puVar2) {
    lVar15 = *puVar2 - 2;
  }
  if (lVar15 == 1) {
    if (*_DAT_143ca4500 == '\0') {
      *puStack_1d0 = uStack_1d4;
      uStack_188 = (undefined **)&UNK_142f3e743;
      uStack_180 = (undefined8 *)0xd;
      uVar14 = pdb_14072aeb0(&uStack_188);
      uVar14 = uVar14 ^ 0xb1695320004fb443;
      uVar12 = uVar14;
      lVar15 = pdb_14072c2d0(ppuVar3);
      *(undefined1 *)(lVar15 + 0x5e) = 0;
      *(undefined1 *)(lVar15 + 0xcb) = 1;
      if ((uVar12 & 1) == 0) {
        puVar4 = ppuVar3[2];
        if (puVar4 == *ppuVar3) {
          pdb_142d7f080(ppuVar3);
        }
        puVar5 = ppuVar3[1];
        *(undefined4 *)(puVar5 + (longlong)puVar4 * 0x38) = 2;
        *(ulonglong *)(puVar5 + (longlong)puVar4 * 0x38 + 0x30) = uVar14;
        ppuVar3[2] = puVar4 + 1;
      }
      puStack_1b8 = (undefined4 *)0x0;
      ppuStack_1c8 = ppuVar3;
      puStack_1c0 = (undefined8 *)uVar14;
      pdb_140734630(&uStack_188,&ppuStack_1c8,&UNK_142f3e750,0xc);
      pdb_14068de70(&uStack_188,&UNK_142f3e75c,10,param_11);
      pdb_14068da00(&uStack_188,&UNK_142f3e766,7,param_11);
    }
    else {
      *puStack_1d0 = uStack_1d4;
      uStack_188 = (undefined **)&UNK_142f3e76d;
      uStack_180 = (undefined8 *)0x8;
      uVar14 = pdb_14072aeb0(&uStack_188);
      uVar14 = uVar14 ^ 0xb1695320004fb443;
      uVar12 = uVar14;
      lVar15 = pdb_14072c2d0(ppuVar3);
      *(undefined1 *)(lVar15 + 0x5e) = 0;
      *(undefined1 *)(lVar15 + 0xcb) = 1;
      if ((uVar12 & 1) == 0) {
        puVar4 = ppuVar3[2];
        if (puVar4 == *ppuVar3) {
          pdb_142d7f080(ppuVar3);
        }
        puVar5 = ppuVar3[1];
        *(undefined4 *)(puVar5 + (longlong)puVar4 * 0x38) = 2;
        *(ulonglong *)(puVar5 + (longlong)puVar4 * 0x38 + 0x30) = uVar14;
        ppuVar3[2] = puVar4 + 1;
      }
      puStack_1b8 = (undefined4 *)0x0;
      ppuStack_1c8 = ppuVar3;
      puStack_1c0 = (undefined8 *)uVar14;
      pdb_140734630(&uStack_188,&ppuStack_1c8,&UNK_142f3e775,0xd);
      if ((_DAT_142f3e560 < *(float *)(lStack_190 + 0x400)) ||
         (2 < *(ulonglong *)(*param_16 + 0x10))) {
        pdb_140692e10(&uStack_188,&UNK_142f3e766,7,param_11);
      }
      pdb_140690900(&uStack_188,&UNK_142f3e76d,8,param_11);
    }
    *puStack_1d0 = uStack_1d4;
    uStack_188 = (undefined **)&UNK_142f3e782;
    uStack_180 = (undefined8 *)0xa;
    uVar14 = pdb_14072aeb0(&uStack_188);
    uVar14 = uVar14 ^ 0xb1695320004fb443;
    uVar12 = uVar14;
    lVar15 = pdb_14072c2d0(ppuVar3);
    *(undefined1 *)(lVar15 + 0x5e) = 0;
    *(undefined1 *)(lVar15 + 0xcb) = 1;
    if ((uVar12 & 1) == 0) {
      puVar4 = ppuVar3[2];
      if (puVar4 == *ppuVar3) {
        pdb_142d7f080(ppuVar3);
      }
      puVar5 = ppuVar3[1];
      *(undefined4 *)(puVar5 + (longlong)puVar4 * 0x38) = 1;
      *(ulonglong *)(puVar5 + (longlong)puVar4 * 0x38 + 0x30) = uVar14;
      ppuVar3[2] = puVar4 + 1;
    }
    puStack_1b8 = (undefined4 *)0x0;
    ppuStack_1c8 = ppuVar3;
    puStack_1c0 = (undefined8 *)uVar14;
    pdb_140734630(&uStack_188,&ppuStack_1c8,&UNK_142f3e78c,8);
    pdb_14068f5a0(&uStack_188,&UNK_142f3e794,4);
    pdb_14068e0e0(&uStack_188,&UNK_142f3e798,8,param_10,param_5);
    pdb_1406921c0(&uStack_188,&UNK_142f3e736,7,param_5);
    pdb_14068fc60(&uStack_188,&UNK_142f3e7a0,7,param_5);
  }
  else if (lVar15 == 2) {
    if (*_DAT_143ca4500 == '\0') {
      *puStack_1d0 = uStack_1d4;
      uStack_188 = (undefined **)&UNK_142f3e782;
      uStack_180 = (undefined8 *)0xa;
      uVar14 = pdb_14072aeb0(&uStack_188);
      uVar14 = uVar14 ^ 0xb1695320004fb443;
      uVar12 = uVar14;
      lVar15 = pdb_14072c2d0(ppuVar3);
      *(undefined1 *)(lVar15 + 0x5e) = 0;
      *(undefined1 *)(lVar15 + 0xcb) = 1;
      if ((uVar12 & 1) == 0) {
        puVar4 = ppuVar3[2];
        if (puVar4 == *ppuVar3) {
          pdb_142d7f080(ppuVar3);
        }
        puVar5 = ppuVar3[1];
        *(undefined4 *)(puVar5 + (longlong)puVar4 * 0x38) = 1;
        *(ulonglong *)(puVar5 + (longlong)puVar4 * 0x38 + 0x30) = uVar14;
        ppuVar3[2] = puVar4 + 1;
      }
      puStack_1b8 = (undefined4 *)0x0;
      ppuStack_1c8 = ppuVar3;
      puStack_1c0 = (undefined8 *)uVar14;
      pdb_140734630(&uStack_188,&ppuStack_1c8,&UNK_142f3e7a7,9);
      pdb_14068e300(&uStack_188,&UNK_142f3e794,4);
      pdb_14068d7e0(&uStack_188,&UNK_142f3e736,7,param_5,param_13);
    }
    else {
      *puStack_1d0 = uStack_1d4;
      uStack_188 = (undefined **)&UNK_142f3e782;
      uStack_180 = (undefined8 *)0xa;
      uVar14 = pdb_14072aeb0(&uStack_188);
      uVar14 = uVar14 ^ 0xb1695320004fb443;
      uVar12 = uVar14;
      lVar15 = pdb_14072c2d0(ppuVar3);
      *(undefined1 *)(lVar15 + 0x5e) = 0;
      *(undefined1 *)(lVar15 + 0xcb) = 1;
      if ((uVar12 & 1) == 0) {
        puVar4 = ppuVar3[2];
        if (puVar4 == *ppuVar3) {
          pdb_142d7f080(ppuVar3);
        }
        puVar5 = ppuVar3[1];
        *(undefined4 *)(puVar5 + (longlong)puVar4 * 0x38) = 1;
        *(ulonglong *)(puVar5 + (longlong)puVar4 * 0x38 + 0x30) = uVar14;
        ppuVar3[2] = puVar4 + 1;
      }
      puStack_1b8 = (undefined4 *)0x0;
      ppuStack_1c8 = ppuVar3;
      puStack_1c0 = (undefined8 *)uVar14;
      pdb_140734630(&uStack_188,&ppuStack_1c8,&UNK_142f3e7b0,0xe);
      pdb_1406925c0(&uStack_188,&UNK_142f3e794,4);
      if ((_DAT_142f3e560 < *(float *)(lStack_190 + 0x400)) ||
         (2 < *(ulonglong *)(*param_16 + 0x10))) {
        pdb_140691560(&uStack_188,&UNK_142f3e766,7,param_11);
      }
      pdb_140690f10(&uStack_188,&UNK_142f3e76d,8,param_11);
      pdb_14068d7e0(&uStack_188,&UNK_142f3e736,7,param_5,param_13);
    }
  }
  return;
}

