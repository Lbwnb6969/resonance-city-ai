// VA 0x142167e50, PDB extent 928 bytes
// system_color::set_halftimber_color_id::set_halftimber_color_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/set_halftimber_color_id.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::set_halftimber_color_id::set_halftimber_color_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/set_halftimber_color_id.rs
   Extent: 928 */

void pdb_142167e50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined4 *puVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  undefined4 *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined4 uStack_a0;
  undefined7 uStack_9b;
  undefined1 uStack_94;
  undefined7 uStack_93;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar5 = (ulonglong *)*param_3;
  lVar21 = param_3[1];
  uVar6 = *(ulonglong *)(lVar21 + 0x40);
  uVar26 = *puVar5;
  uVar22 = 0;
  if (uVar26 <= uVar6) {
    uVar22 = uVar6 - uVar26;
  }
  uVar7 = *(ulonglong *)(lVar21 + 0x10);
  uVar8 = *(ulonglong *)(lVar21 + 0x30);
  if (uVar8 + uVar7 < uVar22) {
    uVar22 = uVar8 + uVar7;
  }
  if (uVar22 == 0) {
    return;
  }
  uVar30 = 0;
  uVar22 = uVar26 - *(ulonglong *)(lVar21 + 0x18);
  if (uVar26 < *(ulonglong *)(lVar21 + 0x18)) {
    uVar22 = uVar30;
  }
  uVar27 = uVar26 - *(ulonglong *)(lVar21 + 0x38);
  if (uVar26 < *(ulonglong *)(lVar21 + 0x38)) {
    uVar27 = uVar30;
  }
  lVar28 = uVar22 * 0x18 + *(longlong *)(lVar21 + 8);
  uVar26 = uVar7 - uVar22;
  if (uVar7 < uVar22) {
    lVar28 = 8;
    uVar26 = uVar30;
  }
  lVar21 = uVar27 * 0x18 + *(longlong *)(lVar21 + 0x28);
  uVar22 = uVar8 - uVar27;
  if (uVar8 < uVar27) {
    lVar21 = 8;
    uVar22 = uVar30;
  }
  *puVar5 = (uVar6 - uVar26) - uVar22;
  auVar20 = _DAT_14305a4b0;
  auVar19 = _DAT_14305a4a0;
  fVar18 = _DAT_142e36f50;
  lStack_b8 = lVar28 + uVar26 * 0x18;
  lStack_c0 = lVar21 + uVar22 * 0x18;
  uVar2 = *(undefined4 *)((longlong)param_6 + 0x1c);
  uVar9 = *param_6;
  puStack_b0 = (undefined4 *)param_6[2];
  uVar10 = *param_7;
  uStack_c8 = *param_1;
  uStack_d0 = *param_2;
  uStack_d8 = *param_4;
  uVar3 = *(undefined4 *)((longlong)param_5 + 0x1c);
  lVar11 = *param_5;
  puStack_e0 = (undefined4 *)param_5[2];
  do {
    if ((lVar28 == 0) || (lVar28 == lStack_b8)) {
      if (lVar21 == 0) {
        return;
      }
      if (lVar21 == lStack_c0) {
        return;
      }
      lVar28 = 0;
      lVar23 = lVar21 + 0x18;
      lVar29 = lVar21;
    }
    else {
      lVar23 = lVar21;
      lVar29 = lVar28;
      lVar28 = lVar28 + 0x18;
    }
    lVar21 = lVar23;
    *puVar5 = *puVar5 + 1;
    *puStack_b0 = uVar2;
    uVar6 = *(ulonglong *)(lVar29 + 8);
    uVar4 = *(undefined4 *)(lVar29 + 0x10);
    pdb_1409cf8b0(uVar9,uVar6,uVar4);
    uVar26 = uVar6;
    uVar22 = pdb_140a6a860(uVar10,uVar6);
    if ((uVar22 & 1) != 0) {
      pdb_1410bd870(uStack_c8,uStack_d0,uVar26 & 0xffffffff,uVar4);
    }
    if ((*(char *)(lVar29 + 0x14) == '\x01') &&
       (lVar23 = pdb_140b54f80(uStack_d8,uVar6,&UNK_143465ec8), lVar23 != 0)) {
      lVar29 = *(longlong *)(lVar23 + 0x48);
      uStack_88 = auVar20._0_8_;
      auVar34 = auVar19;
      if (lVar29 != 0) {
        puVar12 = *(undefined4 **)(lVar23 + 0x40);
        uVar6 = lVar29 * 0xc - 0xc;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar6;
        puVar24 = puVar12;
        auVar32 = auVar20;
        if ((SUB164(auVar33 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 3 & 1) == 0) {
          puVar24 = puVar12 + 3;
          auVar34._4_4_ = puVar12[2];
          auVar34._0_4_ = *puVar12;
          auVar34._8_8_ = 0;
          auVar32 = minps(auVar20,auVar34);
          auVar14._4_4_ = puVar12[2];
          auVar14._0_4_ = *puVar12;
          auVar14._8_8_ = 0;
          auVar34 = maxps(auVar19,auVar14);
        }
        uStack_88 = auVar32._0_8_;
        if (0xb < uVar6) {
          do {
            auVar15._4_4_ = puVar24[2];
            auVar15._0_4_ = *puVar24;
            auVar15._8_8_ = 0;
            auVar33 = minps(auVar32,auVar15);
            auVar32._4_4_ = puVar24[2];
            auVar32._0_4_ = *puVar24;
            auVar32._8_8_ = 0;
            auVar34 = maxps(auVar34,auVar32);
            auVar16._4_4_ = puVar24[5];
            auVar16._0_4_ = puVar24[3];
            auVar16._8_8_ = 0;
            auVar32 = minps(auVar33,auVar16);
            uStack_88 = auVar32._0_8_;
            auVar17._4_4_ = puVar24[5];
            auVar17._0_4_ = puVar24[3];
            auVar17._8_8_ = 0;
            auVar34 = maxps(auVar34,auVar17);
            puVar24 = puVar24 + 6;
          } while (puVar24 != puVar12 + lVar29 * 3);
        }
      }
      uStack_80 = auVar34._0_8_;
      uStack_e8 = pdb_140deec20(&uStack_88);
      uStack_e4 = auVar34._0_4_;
      fVar31 = (float)pdb_140930390(lVar23);
      pdb_140df4540(auStack_a8,&uStack_e8,fVar31 * fVar18);
      uStack_8c = uStack_a0;
      uStack_94 = auStack_a8[0];
      uStack_93 = auStack_a8._1_7_;
      *puStack_e0 = uVar3;
      lVar23 = *(longlong *)(lVar11 + 0x30);
      uVar13 = *(undefined8 *)(lVar11 + 0x40);
      if (lVar23 == *(longlong *)(lVar11 + 0x20)) {
        pdb_142d7e6e0(lVar11 + 0x20);
      }
      lVar29 = *(longlong *)(lVar11 + 0x28);
      lVar25 = lVar23 * 0x20;
      *(undefined8 *)(lVar29 + lVar25) = uVar13;
      *(undefined1 *)(lVar29 + 8 + lVar25) = 0xc;
      *(undefined4 *)(lVar29 + 0x18 + lVar25) = uStack_8c;
      puVar1 = (undefined8 *)(lVar29 + 9 + lVar25);
      *puVar1 = CONCAT17(uStack_94,uStack_9b);
      puVar1[1] = CONCAT17((undefined1)uStack_8c,uStack_93);
      *(longlong *)(lVar11 + 0x30) = lVar23 + 1;
      *(longlong *)(lVar11 + 0x40) = *(longlong *)(lVar11 + 0x40) + 1;
    }
  } while( true );
}

