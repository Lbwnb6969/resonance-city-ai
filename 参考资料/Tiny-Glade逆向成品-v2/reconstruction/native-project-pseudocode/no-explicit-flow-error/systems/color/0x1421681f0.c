// VA 0x1421681f0, PDB extent 1225 bytes
// system_color::set_halftimber_color_id::set_wooden_wall_color_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/set_halftimber_color_id.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::set_halftimber_color_id::set_wooden_wall_color_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/set_halftimber_color_id.rs
   Extent: 1225 */

void pdb_1421681f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 *param_6,undefined8 *param_7,longlong *param_8,
                  undefined8 *param_9)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  char cVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  undefined4 *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint uVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong lStack_110;
  undefined4 *puStack_108;
  undefined4 *puStack_100;
  undefined4 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined4 uStack_a0;
  undefined7 uStack_9c;
  undefined1 uStack_95;
  undefined7 uStack_94;
  undefined4 uStack_8d;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar6 = (ulonglong *)*param_3;
  lVar31 = param_3[1];
  uVar29 = *(ulonglong *)(lVar31 + 0x40);
  uVar28 = *puVar6;
  uVar23 = 0;
  if (uVar28 <= uVar29) {
    uVar23 = uVar29 - uVar28;
  }
  uVar7 = *(ulonglong *)(lVar31 + 0x10);
  uVar8 = *(ulonglong *)(lVar31 + 0x30);
  if (uVar8 + uVar7 < uVar23) {
    uVar23 = uVar8 + uVar7;
  }
  if (uVar23 == 0) {
    return;
  }
  uVar32 = 0;
  uVar23 = uVar28 - *(ulonglong *)(lVar31 + 0x18);
  if (uVar28 < *(ulonglong *)(lVar31 + 0x18)) {
    uVar23 = uVar32;
  }
  uVar33 = uVar28 - *(ulonglong *)(lVar31 + 0x38);
  if (uVar28 < *(ulonglong *)(lVar31 + 0x38)) {
    uVar33 = uVar32;
  }
  lVar22 = uVar23 * 0x18 + *(longlong *)(lVar31 + 8);
  uVar28 = uVar7 - uVar23;
  if (uVar7 < uVar23) {
    lVar22 = 8;
    uVar28 = uVar32;
  }
  lVar31 = uVar33 * 0x18 + *(longlong *)(lVar31 + 0x28);
  uVar23 = uVar8 - uVar33;
  if (uVar8 < uVar33) {
    lVar31 = 8;
    uVar23 = uVar32;
  }
  *puVar6 = (uVar29 - uVar28) - uVar23;
  auVar18 = _DAT_14305a4b0;
  auVar17 = _DAT_14305a4a0;
  fVar16 = _DAT_142e36f50;
  lStack_d0 = lVar22 + uVar28 * 0x18;
  lStack_d8 = lVar31 + uVar23 * 0x18;
  uVar2 = *(undefined4 *)((longlong)param_6 + 0x1c);
  uStack_b0 = *param_6;
  puStack_b8 = (undefined4 *)param_6[2];
  uStack_c0 = *param_9;
  uStack_e0 = *param_1;
  uStack_e8 = *param_2;
  uStack_c8 = *param_4;
  uVar3 = *(undefined4 *)((longlong)param_7 + 0x1c);
  uStack_f0 = *param_7;
  puStack_f8 = (undefined4 *)param_7[2];
  uVar4 = *(undefined4 *)((longlong)param_8 + 0x1c);
  lVar9 = *param_8;
  puStack_100 = (undefined4 *)param_8[2];
  uVar5 = *(undefined4 *)((longlong)param_5 + 0x1c);
  lVar34 = *param_5;
  puStack_108 = (undefined4 *)param_5[2];
  lStack_110 = lVar34;
  do {
    if ((lVar22 == 0) || (lVar22 == lStack_d0)) {
      if (lVar31 == 0) {
        return;
      }
      if (lVar31 == lStack_d8) {
        return;
      }
      lVar25 = lVar31 + 0x18;
      lVar24 = 0;
      lVar27 = lVar31;
    }
    else {
      lVar25 = lVar31;
      lVar24 = lVar22 + 0x18;
      lVar27 = lVar22;
    }
    lVar22 = lVar24;
    *puVar6 = *puVar6 + 1;
    *puStack_b8 = uVar2;
    uVar29 = *(ulonglong *)(lVar27 + 8);
    uVar21 = *(uint *)(lVar27 + 0x10);
    pdb_1409cf8b0(uStack_b0,uVar29,uVar21);
    uVar28 = uVar29;
    uVar23 = pdb_140a6a860(uStack_c0,uVar29);
    if ((uVar23 & 1) != 0) {
      pdb_1410bdbd0(uStack_e0,uStack_e8,uVar28 & 0xffffffff,uVar21);
    }
    lVar24 = pdb_140b54f80(uStack_c8,uVar29,&UNK_143465ee0);
    lVar31 = lVar25;
    if (lVar24 != 0) {
      cVar19 = pdb_1408ff980(lVar24 + 0x29f);
      if (cVar19 != '\0') {
        *puStack_f8 = uVar3;
        lVar25 = pdb_1428d8570(uStack_f0,uVar29);
        uVar29 = (ulonglong)uVar21;
        pdb_1409cf8c0(&uStack_9c);
        iVar20 = pdb_140947ef0(&uStack_9c);
        uVar21 = (uint)uVar29;
        if (iVar20 != 0) {
          uVar30 = 0x1000000;
          if (iVar20 != 1) {
            uVar30 = 0x2000000;
          }
          uVar21 = pdb_1409012c0(uVar29 & 0xffffffff);
          uVar21 = uVar21 | uVar30;
        }
        lVar34 = lStack_110;
        *(uint *)(lVar25 + 0x58) = uVar21;
        *puStack_100 = uVar4;
        lVar25 = *(longlong *)(lVar9 + 0x30);
        uVar10 = *(undefined8 *)(lVar9 + 0x40);
        if (lVar25 == *(longlong *)(lVar9 + 0x20)) {
          pdb_142d7e8a0(lVar9 + 0x20);
        }
        *(undefined8 *)(*(longlong *)(lVar9 + 0x28) + lVar25 * 8) = uVar10;
        *(longlong *)(lVar9 + 0x30) = lVar25 + 1;
        *(longlong *)(lVar9 + 0x40) = *(longlong *)(lVar9 + 0x40) + 1;
      }
      if (*(char *)(lVar27 + 0x14) == '\x01') {
        lVar25 = *(longlong *)(lVar24 + 0x48);
        uStack_88 = auVar18._0_8_;
        auVar38 = auVar17;
        if (lVar25 != 0) {
          puVar11 = *(undefined4 **)(lVar24 + 0x40);
          uVar29 = lVar25 * 0xc - 0xc;
          auVar37._8_8_ = 0;
          auVar37._0_8_ = uVar29;
          puVar26 = puVar11;
          auVar36 = auVar18;
          if ((SUB164(auVar37 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 3 & 1) == 0) {
            puVar26 = puVar11 + 3;
            auVar38._4_4_ = puVar11[2];
            auVar38._0_4_ = *puVar11;
            auVar38._8_8_ = 0;
            auVar36 = minps(auVar18,auVar38);
            auVar12._4_4_ = puVar11[2];
            auVar12._0_4_ = *puVar11;
            auVar12._8_8_ = 0;
            auVar38 = maxps(auVar17,auVar12);
          }
          uStack_88 = auVar36._0_8_;
          if (0xb < uVar29) {
            do {
              auVar13._4_4_ = puVar26[2];
              auVar13._0_4_ = *puVar26;
              auVar13._8_8_ = 0;
              auVar37 = minps(auVar36,auVar13);
              auVar36._4_4_ = puVar26[2];
              auVar36._0_4_ = *puVar26;
              auVar36._8_8_ = 0;
              auVar38 = maxps(auVar38,auVar36);
              auVar14._4_4_ = puVar26[5];
              auVar14._0_4_ = puVar26[3];
              auVar14._8_8_ = 0;
              auVar36 = minps(auVar37,auVar14);
              uStack_88 = auVar36._0_8_;
              auVar15._4_4_ = puVar26[5];
              auVar15._0_4_ = puVar26[3];
              auVar15._8_8_ = 0;
              auVar38 = maxps(auVar38,auVar15);
              puVar26 = puVar26 + 6;
            } while (puVar26 != puVar11 + lVar25 * 3);
          }
        }
        uStack_80 = auVar38._0_8_;
        uStack_118 = pdb_140deec20(&uStack_88);
        uStack_114 = auVar38._0_4_;
        fVar35 = (float)pdb_140930390(lVar24);
        pdb_140df4540(auStack_a8,&uStack_118,fVar35 * fVar16);
        uStack_8d = uStack_a0;
        uStack_95 = auStack_a8[0];
        uStack_94 = auStack_a8._1_7_;
        *puStack_108 = uVar5;
        lVar25 = *(longlong *)(lVar34 + 0x30);
        uVar10 = *(undefined8 *)(lVar34 + 0x40);
        if (lVar25 == *(longlong *)(lVar34 + 0x20)) {
          pdb_142d7e6e0(lVar34 + 0x20);
        }
        lVar24 = *(longlong *)(lVar34 + 0x28);
        lVar27 = lVar25 * 0x20;
        *(undefined8 *)(lVar24 + lVar27) = uVar10;
        *(undefined1 *)(lVar24 + 8 + lVar27) = 0xc;
        *(undefined4 *)(lVar24 + 0x18 + lVar27) = uStack_8d;
        puVar1 = (undefined8 *)(lVar24 + 9 + lVar27);
        *puVar1 = CONCAT17(uStack_95,uStack_9c);
        puVar1[1] = CONCAT17((undefined1)uStack_8d,uStack_94);
        *(longlong *)(lVar34 + 0x30) = lVar25 + 1;
        *(longlong *)(lVar34 + 0x40) = *(longlong *)(lVar34 + 0x40) + 1;
      }
    }
  } while( true );
}

