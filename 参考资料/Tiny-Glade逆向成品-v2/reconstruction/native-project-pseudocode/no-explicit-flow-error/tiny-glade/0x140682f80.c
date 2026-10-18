// VA 0x140682f80, PDB extent 988 bytes
// tiny_glade::gui::gui_tod::do_time_of_day_screen
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_tod::do_time_of_day_screen
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod.rs
   Extent: 988 */

void pdb_140682f80(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5,undefined8 param_6,byte *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,longlong *param_12,
                  undefined8 param_13,undefined4 *param_14,undefined8 *param_15,undefined8 param_16)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char cVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  float fVar15;
  undefined1 uStack_e6;
  byte bStack_e5;
  float fStack_e4;
  longlong *plStack_e0;
  longlong *plStack_d8;
  byte *pbStack_d0;
  float *pfStack_c8;
  undefined8 *puStack_c0;
  longlong *plStack_b8;
  undefined8 uStack_b0;
  undefined4 *puStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  puVar6 = param_10;
  pbVar5 = param_7;
  uStack_68 = *param_14;
  uStack_64 = param_14[1];
  uStack_60 = param_14[2];
  uStack_5c = param_14[3];
  fVar15 = (float)param_14[4];
  uStack_54 = param_14[5];
  uStack_50 = param_14[6];
  uStack_4c = param_14[7];
  lStack_98 = *(longlong *)(param_14 + 8);
  fStack_58 = fVar15;
  cVar8 = pdb_140a00340(*param_9);
  if (cVar8 == '\0') {
    fVar15 = *(float *)(*param_12 + 0xa4);
    cVar8 = pdb_140938b60(*(undefined4 *)(*param_12 + 0xa0));
    if ((cVar8 != '\0') && (*pbVar5 == 0)) goto LAB_14068301f;
    lVar11 = *param_2;
    if (*(char *)(lVar11 + 10) == '\x01') {
      bVar9 = *(byte *)(lVar11 + 9) ^ 1;
      goto LAB_140683032;
    }
  }
  else {
LAB_14068301f:
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    lVar11 = *param_2;
    *(undefined1 *)(lVar11 + 10) = 0;
  }
  bVar9 = 0;
LAB_140683032:
  uVar13 = *(undefined4 *)((longlong)param_2 + 0x1c);
  puVar14 = (undefined4 *)param_2[2];
  *puVar14 = uVar13;
  *(byte *)(lVar11 + 8) = bVar9;
  pdb_140a6ad50(*puVar6);
  fStack_e4 = fVar15 / _DAT_142e4bfe4;
  bStack_e5 = 0;
  if (*(char *)(lVar11 + 10) == '\x01') {
    if (*(char *)(lVar11 + 8) != '\0') {
      if (*(char *)*param_8 == '\t') {
        *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
        lVar11 = *param_4;
        lVar2 = *(longlong *)(lVar11 + 0x30);
        uVar3 = *(undefined8 *)(lVar11 + 0x40);
        if (lVar2 == *(longlong *)(lVar11 + 0x20)) {
          pdb_142d7e980(lVar11 + 0x20);
        }
        lVar4 = *(longlong *)(lVar11 + 0x28);
        *(undefined8 *)(lVar4 + lVar2 * 0x10) = uVar3;
        *(undefined4 *)(lVar4 + 8 + lVar2 * 0x10) = 0x3000300;
        *(longlong *)(lVar11 + 0x30) = lVar2 + 1;
        *(longlong *)(lVar11 + 0x40) = *(longlong *)(lVar11 + 0x40) + 1;
      }
      *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
      lVar11 = *param_3;
      lVar2 = *(longlong *)(lVar11 + 0x30);
      uVar3 = *(undefined8 *)(lVar11 + 0x40);
      if (lVar2 == *(longlong *)(lVar11 + 0x20)) {
        pdb_142d7e8a0(lVar11 + 0x20);
      }
      *(undefined8 *)(*(longlong *)(lVar11 + 0x28) + lVar2 * 8) = uVar3;
      *(longlong *)(lVar11 + 0x30) = lVar2 + 1;
      *(longlong *)(lVar11 + 0x40) = *(longlong *)(lVar11 + 0x40) + 1;
    }
    uVar3 = param_16;
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    param_1 = (longlong *)*param_1;
    puStack_90 = &UNK_142f94750;
    uStack_88 = 3;
    uVar10 = pdb_14072aeb0(&puStack_90);
    uVar10 = uVar10 ^ 0xb1695320004fb443;
    uVar12 = uVar10;
    lVar11 = pdb_14072c2d0(param_1);
    *(undefined1 *)(lVar11 + 0x5e) = 0;
    if ((uVar12 & 1) == 0) {
      lVar11 = param_1[2];
      if (lVar11 == *param_1) {
        pdb_142d7f080(param_1);
      }
      lVar2 = param_1[1];
      *(undefined4 *)(lVar2 + lVar11 * 0x38) = 1;
      *(ulonglong *)(lVar2 + 0x30 + lVar11 * 0x38) = uVar10;
      param_1[2] = lVar11 + 1;
    }
    pbStack_d0 = (byte *)0x0;
    plStack_e0 = param_1;
    plStack_d8 = (longlong *)uVar10;
    pdb_140734630(&puStack_90,&plStack_e0,&UNK_142f94753,0x12);
    uVar7 = param_13;
    puVar6 = param_11;
    uStack_e6 = 0;
    plStack_e0 = (longlong *)&uStack_e6;
    puStack_c0 = param_11;
    uStack_b0 = uVar3;
    uStack_a0 = param_13;
    plStack_d8 = param_2;
    pbStack_d0 = &bStack_e5;
    pfStack_c8 = &fStack_e4;
    plStack_b8 = &param_6;
    puStack_a8 = &uStack_68;
    pdb_140692c10(&puStack_90,&UNK_142f9476f,10,&plStack_e0);
    uVar3 = param_16;
    uStack_e6 = 1;
    plStack_e0 = (longlong *)&uStack_e6;
    puStack_c0 = puVar6;
    uStack_b0 = param_16;
    uStack_a0 = uVar7;
    plStack_d8 = param_2;
    pbStack_d0 = &bStack_e5;
    pfStack_c8 = &fStack_e4;
    plStack_b8 = &param_6;
    puStack_a8 = &uStack_68;
    pdb_140692c10(&puStack_90,&UNK_142f94779,0xc,&plStack_e0);
    plStack_d8 = (longlong *)uVar7;
    pbStack_d0 = (byte *)param_5;
    pfStack_c8 = (float *)uVar3;
    plStack_e0 = &param_6;
    pdb_14068d5e0(&puStack_90,&UNK_142f94765,10,&plStack_e0);
    *(undefined4 *)param_15[2] = *(undefined4 *)((longlong)param_15 + 0x1c);
    bVar9 = pdb_14008e2b0(&puStack_90,*param_15,*(undefined1 *)(lStack_98 + 0x98),fStack_e4,*puVar6,
                          uVar3);
    bVar9 = bVar9 | bStack_e5;
    lVar11 = *param_2;
    puVar14 = (undefined4 *)param_2[2];
    uVar13 = *(undefined4 *)((longlong)param_2 + 0x1c);
  }
  else {
    bVar9 = 0;
  }
  *param_7 = bVar9;
  uVar1 = *(undefined1 *)(lVar11 + 10);
  *puVar14 = uVar13;
  *(undefined1 *)(lVar11 + 9) = uVar1;
  return;
}

