// VA 0x1428ca6a0, PDB extent 1417 bytes
// system_color::set_wall_color_id::set_wall_color_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/set_wall_color_id.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::set_wall_color_id::set_wall_color_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/set_wall_color_id.rs
   Extent: 1417 */

void pdb_1428ca6a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7,longlong *param_8,
                  undefined8 *param_9)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 uVar25;
  char cVar26;
  int iVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined4 *puVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  ulonglong uVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong lStack_110;
  undefined4 *puStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  undefined4 *puStack_f0;
  undefined4 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 *puStack_b0;
  undefined1 auStack_a8 [14];
  undefined6 uStack_9a;
  undefined2 uStack_94;
  undefined6 uStack_92;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar8 = (ulonglong *)*param_3;
  lVar38 = param_3[1];
  uVar9 = *(ulonglong *)(lVar38 + 0x40);
  uVar32 = *puVar8;
  uVar28 = 0;
  if (uVar32 <= uVar9) {
    uVar28 = uVar9 - uVar32;
  }
  uVar10 = *(ulonglong *)(lVar38 + 0x10);
  uVar11 = *(ulonglong *)(lVar38 + 0x30);
  if (uVar11 + uVar10 < uVar28) {
    uVar28 = uVar11 + uVar10;
  }
  if (uVar28 == 0) {
    return;
  }
  uVar39 = 0;
  uVar28 = uVar32 - *(ulonglong *)(lVar38 + 0x18);
  if (uVar32 < *(ulonglong *)(lVar38 + 0x18)) {
    uVar28 = uVar39;
  }
  uVar33 = uVar32 - *(ulonglong *)(lVar38 + 0x38);
  if (uVar32 < *(ulonglong *)(lVar38 + 0x38)) {
    uVar33 = uVar39;
  }
  lVar37 = uVar28 * 0x18 + *(longlong *)(lVar38 + 8);
  uVar32 = uVar10 - uVar28;
  if (uVar10 < uVar28) {
    lVar37 = 8;
    uVar32 = uVar39;
  }
  lVar38 = uVar33 * 0x18 + *(longlong *)(lVar38 + 0x28);
  uVar28 = uVar11 - uVar33;
  if (uVar11 < uVar33) {
    lVar38 = 8;
    uVar28 = uVar39;
  }
  *puVar8 = (uVar9 - uVar32) - uVar28;
  auVar24 = _DAT_14305a4b0;
  auVar23 = _DAT_14305a4a0;
  fVar22 = _DAT_142e36f50;
  lVar1 = lVar37 + uVar32 * 0x18;
  lStack_c8 = lVar38 + uVar28 * 0x18;
  uVar35 = *param_5;
  puStack_b0 = (undefined4 *)param_5[2];
  uVar3 = *(undefined4 *)((longlong)param_5 + 0x1c);
  uStack_b8 = *param_9;
  uStack_d0 = *param_1;
  uStack_d8 = *param_2;
  uStack_c0 = *param_6;
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar12 = *param_4;
  puStack_e8 = (undefined4 *)param_4[2];
  uVar5 = *(undefined4 *)((longlong)param_7 + 0x1c);
  lVar13 = *param_7;
  puStack_f0 = (undefined4 *)param_7[2];
  uVar6 = *(undefined4 *)((longlong)param_8 + 0x1c);
  lVar14 = *param_8;
  puStack_108 = (undefined4 *)param_8[2];
  lStack_f8 = lVar12 + 0x20;
  lStack_100 = lVar13 + 0x20;
  lStack_110 = lVar14 + 0x20;
  uStack_e0 = uVar35;
LAB_1428ca8aa:
  do {
    if ((lVar37 == 0) || (lVar37 == lVar1)) {
      if (lVar38 == 0) {
        return;
      }
      if (lVar38 == lStack_c8) {
        return;
      }
      lVar37 = 0;
      lVar36 = lVar38;
      lVar38 = lVar38 + 0x18;
    }
    else {
      lVar36 = lVar37;
      lVar37 = lVar37 + 0x18;
    }
    *puVar8 = *puVar8 + 1;
    uVar9 = *(ulonglong *)(lVar36 + 8);
    iVar27 = pdb_1409cf7d0(uVar35,uVar9);
    *puStack_b0 = uVar3;
    uVar7 = *(undefined4 *)(lVar36 + 0x10);
    pdb_1409cf8b0(uVar35,uVar9,uVar7);
    uVar32 = uVar9;
    uVar28 = pdb_140a6a860(uStack_b8,uVar9);
    if ((uVar28 & 1) != 0) {
      pdb_1410bdf30(uStack_d0,uStack_d8,uVar32 & 0xffffffff,uVar7);
    }
    lVar29 = pdb_140b54f80(uStack_c0,uVar9,&UNK_1435af2f0);
  } while (lVar29 == 0);
  if (*(char *)(lVar36 + 0x14) != '\0') {
    uVar25 = pdb_1408ff990(lVar29 + 0x2a3);
    lVar15 = *(longlong *)(lVar29 + 0x48);
    uStack_88 = auVar24._0_8_;
    auVar43 = auVar23;
    if (lVar15 != 0) {
      puVar16 = *(undefined4 **)(lVar29 + 0x40);
      uVar32 = lVar15 * 0xc - 0xc;
      auVar42._8_8_ = 0;
      auVar42._0_8_ = uVar32;
      puVar30 = puVar16;
      auVar41 = auVar24;
      if ((SUB164(auVar42 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 3 & 1) == 0) {
        puVar30 = puVar16 + 3;
        auVar43._4_4_ = puVar16[2];
        auVar43._0_4_ = *puVar16;
        auVar43._8_8_ = 0;
        auVar41 = minps(auVar24,auVar43);
        auVar18._4_4_ = puVar16[2];
        auVar18._0_4_ = *puVar16;
        auVar18._8_8_ = 0;
        auVar43 = maxps(auVar23,auVar18);
      }
      uStack_88 = auVar41._0_8_;
      if (0xb < uVar32) {
        do {
          auVar19._4_4_ = puVar30[2];
          auVar19._0_4_ = *puVar30;
          auVar19._8_8_ = 0;
          auVar42 = minps(auVar41,auVar19);
          auVar41._4_4_ = puVar30[2];
          auVar41._0_4_ = *puVar30;
          auVar41._8_8_ = 0;
          auVar43 = maxps(auVar43,auVar41);
          auVar20._4_4_ = puVar30[5];
          auVar20._0_4_ = puVar30[3];
          auVar20._8_8_ = 0;
          auVar41 = minps(auVar42,auVar20);
          uStack_88 = auVar41._0_8_;
          auVar21._4_4_ = puVar30[5];
          auVar21._0_4_ = puVar30[3];
          auVar21._8_8_ = 0;
          auVar43 = maxps(auVar43,auVar21);
          puVar30 = puVar30 + 6;
        } while (puVar30 != puVar16 + lVar15 * 3);
      }
    }
    uStack_80 = auVar43._0_8_;
    uStack_118 = pdb_140deec20(&uStack_88);
    uStack_114 = auVar43._0_4_;
    fVar40 = (float)pdb_140930390(lVar29);
    pdb_140df4540(auStack_a8,&uStack_118,fVar40 * fVar22);
    uStack_8c = (undefined2)auStack_a8._8_4_;
    uStack_8a = SUB42(auStack_a8._8_4_,2);
    uStack_94 = (undefined2)auStack_a8._0_8_;
    uStack_92 = SUB86(auStack_a8._0_8_,2);
    *puStack_e8 = uVar4;
    lVar15 = *(longlong *)(lVar12 + 0x30);
    uVar35 = *(undefined8 *)(lVar12 + 0x40);
    if (lVar15 == *(longlong *)(lVar12 + 0x20)) {
      pdb_142d7e6e0(lStack_f8);
    }
    lVar17 = *(longlong *)(lVar12 + 0x28);
    lVar31 = lVar15 * 0x20;
    *(undefined8 *)(lVar17 + lVar31) = uVar35;
    *(undefined1 *)(lVar17 + 8 + lVar31) = 6;
    *(undefined1 *)(lVar17 + 9 + lVar31) = uVar25;
    *(undefined2 *)(lVar17 + 0x1a + lVar31) = uStack_8a;
    puVar2 = (undefined8 *)(lVar17 + 10 + lVar31);
    *puVar2 = CONCAT26(uStack_94,uStack_9a);
    puVar2[1] = CONCAT26(uStack_8c,uStack_92);
    *(longlong *)(lVar12 + 0x30) = lVar15 + 1;
    *(longlong *)(lVar12 + 0x40) = *(longlong *)(lVar12 + 0x40) + 1;
    uVar35 = uStack_e0;
  }
  cVar26 = pdb_140901380(lVar29 + 0x29f);
  if ((cVar26 == '\0') || ((6 < *(int *)(lVar36 + 0x10) - 4U && (*(int *)(lVar36 + 0x10) != 0xc))))
  goto LAB_1428cab70;
  *puStack_f0 = uVar5;
  lVar36 = *(longlong *)(lVar13 + 0x30);
  uVar34 = *(undefined8 *)(lVar13 + 0x40);
  lVar29 = lVar13;
  if (lVar36 == *(longlong *)(lVar13 + 0x20)) {
    pdb_142d7e980(lStack_100);
  }
  goto LAB_1428ca885;
LAB_1428cab70:
  cVar26 = pdb_140901380(lVar29 + 0x29f);
  if ((cVar26 != '\0') &&
     ((((iVar27 - 4U < 7 || (iVar27 == 0xc)) && (6 < *(int *)(lVar36 + 0x10) - 4U)) &&
      (*(int *)(lVar36 + 0x10) != 0xc)))) {
    *puStack_108 = uVar6;
    lVar36 = *(longlong *)(lVar14 + 0x30);
    uVar34 = *(undefined8 *)(lVar14 + 0x40);
    lVar29 = lVar14;
    if (lVar36 == *(longlong *)(lVar14 + 0x20)) {
      pdb_142d7e980(lStack_110);
    }
LAB_1428ca885:
    lVar15 = *(longlong *)(lVar29 + 0x28);
    *(undefined8 *)(lVar15 + lVar36 * 0x10) = uVar34;
    *(ulonglong *)(lVar15 + 8 + lVar36 * 0x10) = uVar9;
    *(longlong *)(lVar29 + 0x30) = lVar36 + 1;
    *(longlong *)(lVar29 + 0x40) = *(longlong *)(lVar29 + 0x40) + 1;
  }
  goto LAB_1428ca8aa;
}

