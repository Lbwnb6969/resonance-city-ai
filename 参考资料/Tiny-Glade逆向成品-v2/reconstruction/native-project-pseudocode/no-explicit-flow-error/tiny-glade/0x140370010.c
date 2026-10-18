// VA 0x140370010, PDB extent 1504 bytes
// tiny_glade::gui::settings::ui_settings_game
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::settings::ui_settings_game
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
   Extent: 1504 */

void pdb_140370010(byte *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5,longlong *param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 *puStack_68;
  byte *pbStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  bVar10 = *param_1;
  cVar7 = '\x01';
  if (1 < bVar10) {
    cVar7 = bVar10 - 2;
  }
  if (cVar7 == '\0') {
    uVar12 = 0x25;
    pbStack_60 = param_1;
    uVar11 = pdb_140dc6290(&UNK_142f44849,0x25);
    pdb_140724ba0(&uStack_b0,param_4,1,0);
    uVar15 = pdb_140724c30();
    uVar1 = *(undefined4 *)((longlong)param_5 + 0x1c);
    puStack_68 = (undefined4 *)param_5[2];
    *puStack_68 = uVar1;
    lVar2 = *param_5;
    uStack_90 = param_4;
    bVar8 = pdb_14030bc20(param_3,uVar11,uVar12,&uStack_b0,uVar15,lVar2 + 0x122);
    bVar10 = *param_2;
    *param_2 = bVar8 | bVar10;
    uVar12 = 0xf;
    uStack_98 = param_3;
    uVar11 = pdb_140dc6290(&UNK_142f4486e,0xf);
    pdb_140724ba0(&uStack_88,uStack_90,1,0);
    uVar15 = pdb_140724c30();
    puVar5 = puStack_68;
    *puStack_68 = uVar1;
    uStack_b0 = lVar2 + 0x118;
    uStack_a0 = 0x40a00000;
    uStack_9c = uStack_9c & 0xffffff00;
    uStack_a8 = _DAT_142e3c660;
    bVar9 = pdb_140308ef0(uStack_98,uVar11,uVar12,&uStack_88,uVar15,&uStack_b0);
    bVar9 = bVar9 | bVar8 | bVar10;
    *param_2 = bVar9;
    uVar12 = 0x23;
    uVar11 = pdb_140dc6290(&UNK_142f4487d,0x23);
    pdb_140724ba0(&uStack_b0,uStack_90,1,0);
    uVar15 = pdb_140724c30();
    *puVar5 = uVar1;
    bVar10 = pdb_14030ab10(uStack_98,uVar11,uVar12,&uStack_b0,uVar15,lVar2 + 0x121);
    bVar10 = bVar10 | bVar9;
    *param_2 = bVar10;
    uVar13 = 0x25;
    uVar11 = pdb_140dc6290(&UNK_142f448a0,0x25);
    uVar14 = 0x29;
    uVar12 = pdb_140dc6290(&UNK_142f448c5,0x29);
    pdb_140724ba0(&uStack_b0,uStack_90,uVar12,uVar14);
    uVar15 = pdb_140724c30();
    uVar12 = uStack_90;
    *puVar5 = uVar1;
    bVar8 = pdb_14030bc20(uStack_98,uVar11,uVar13,&uStack_b0,uVar15,lVar2 + 0x123);
    uVar11 = uStack_98;
    *param_2 = bVar8 | bVar10;
    uVar14 = 0x1f;
    uVar13 = pdb_140dc6290(&UNK_142f448ee,0x1f);
    pdb_140734440(&uStack_b0,uVar11,uVar13,uVar14);
    uVar13 = pdb_140726ff0(&uStack_b0);
    pdb_14060a7e0(uVar13,_DAT_142f3e558);
    uStack_78 = CONCAT44(uStack_9c,uStack_a0);
    uStack_88 = (undefined4)uStack_b0;
    uStack_84 = uStack_b0._4_4_;
    uStack_80 = (undefined4)uStack_a8;
    uStack_7c = uStack_a8._4_4_;
    pdb_1407270c0(&uStack_b0,&uStack_88,700);
    uVar13 = pdb_140725900(&uStack_b0);
    cVar7 = pdb_140732b60(uVar13);
    if (cVar7 != '\0') {
      uVar14 = 0x23;
      uVar13 = pdb_140dc6290(&UNK_142f4490d,0x23);
      pdb_140724ba0(&uStack_b0,uVar12,uVar13,uVar14);
      pdb_140724bc0(&uStack_b0);
    }
    uVar14 = 0x20;
    uVar13 = pdb_140dc6290(&UNK_142f44930,0x20);
    pdb_1407339e0(&uStack_b0,uVar11,uVar13,uVar14);
    uVar13 = pdb_140725e80(&uStack_b0);
    pdb_14060a7e0(uVar13,_DAT_142e37994);
    uStack_48 = CONCAT44(uStack_9c,uStack_a0);
    uStack_58 = (undefined4)uStack_b0;
    uStack_54 = uStack_b0._4_4_;
    uStack_50 = (undefined4)uStack_a8;
    uStack_4c = uStack_a8._4_4_;
    uVar13 = pdb_140725900(&uStack_58);
    cVar7 = pdb_140732b60(uVar13);
    if (cVar7 != '\0') {
      uVar14 = 0x24;
      uVar13 = pdb_140dc6290(&UNK_142f44950,0x24);
      pdb_140724ba0(&uStack_b0,uVar12,uVar13,uVar14);
      pdb_140724bc0(&uStack_b0);
    }
    uVar13 = pdb_140725900(&uStack_58);
    cVar7 = pdb_140732b50(uVar13);
    pbVar6 = pbStack_60;
    if (cVar7 != '\0') {
      *pbStack_60 = 0;
    }
    uVar14 = 0x20;
    uVar13 = pdb_140dc6290(&UNK_142f44974,0x20);
    pdb_1407339e0(&uStack_b0,uVar11,uVar13,uVar14);
    uVar11 = pdb_140725e80(&uStack_b0);
    pdb_14060a7e0(uVar11,_DAT_142e37994);
    uStack_78 = CONCAT44(uStack_9c,uStack_a0);
    uStack_88 = (undefined4)uStack_b0;
    uStack_84 = uStack_b0._4_4_;
    uStack_80 = (undefined4)uStack_a8;
    uStack_7c = uStack_a8._4_4_;
    uVar11 = pdb_140725900(&uStack_88);
    cVar7 = pdb_140732b60(uVar11);
    if (cVar7 != '\0') {
      uVar13 = 0x21;
      uVar11 = pdb_140dc6290(&UNK_142f44994,0x21);
      pdb_140724ba0(&uStack_b0,uVar12,uVar11,uVar13);
      pdb_140724bc0(&uStack_b0);
    }
    uVar11 = pdb_140725900(&uStack_88);
    cVar7 = pdb_140732b50(uVar11);
    if (cVar7 != '\0') {
      *pbVar6 = 1;
    }
  }
  else if (cVar7 == '\x01') {
    uVar12 = 10;
    uVar11 = pdb_140dc6290(&UNK_142f449b5,10);
    pdb_140734440(&uStack_b0,param_3,uVar11,uVar12);
    uVar12 = 0x11;
    uVar11 = pdb_140dc6290(&UNK_142f449bf,0x11);
    pdb_1407339e0(&uStack_b0,param_3,uVar11,uVar12);
    uVar11 = pdb_140725e80(&uStack_b0);
    pdb_14060a7e0(uVar11,_DAT_142f3e558);
    uStack_88 = (undefined4)uStack_b0;
    uStack_84 = uStack_b0._4_4_;
    uStack_80 = (undefined4)uStack_a8;
    uStack_7c = uStack_a8._4_4_;
    uVar11 = pdb_140725900(&uStack_88);
    cVar7 = pdb_140732b50(uVar11);
    if (cVar7 != '\0') {
      *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
      lVar2 = *param_6;
      lVar3 = *(longlong *)(lVar2 + 0x30);
      uVar11 = *(undefined8 *)(lVar2 + 0x40);
      if (lVar3 == *(longlong *)(lVar2 + 0x20)) {
        pdb_142d7e980(lVar2 + 0x20);
      }
      lVar4 = *(longlong *)(lVar2 + 0x28);
      *(undefined8 *)(lVar4 + lVar3 * 0x10) = uVar11;
      *(byte *)(lVar4 + 8 + lVar3 * 0x10) = bVar10 & 1;
      *(longlong *)(lVar2 + 0x30) = lVar3 + 1;
      *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + 1;
      *param_1 = 4;
      *param_2 = 1;
    }
    uVar12 = 0xd;
    uVar11 = pdb_140dc6290(&UNK_142f449d0,0xd);
    pdb_1407339e0(&uStack_b0,param_3,uVar11,uVar12);
    uVar11 = pdb_140725900(&uStack_b0);
    cVar7 = pdb_140732b50(uVar11);
    if (cVar7 != '\0') {
      *param_1 = 2;
    }
  }
  else {
    uVar12 = 0x21;
    uVar11 = pdb_140dc6290(&UNK_142f449dd,0x21);
    pdb_140734440(&uStack_b0,param_3,uVar11,uVar12);
  }
  return;
}

