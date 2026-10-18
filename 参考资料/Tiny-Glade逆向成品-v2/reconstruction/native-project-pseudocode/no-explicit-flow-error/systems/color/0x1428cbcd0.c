// VA 0x1428cbcd0, PDB extent 953 bytes
// system_color::set_gate_color_id::set_gate_color_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/set_gate_color_id.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::set_gate_color_id::set_gate_color_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/set_gate_color_id.rs
   Extent: 953 */

void pdb_1428cbcd0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined4 *puVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  undefined4 *puStack_c0;
  undefined8 uStack_b8;
  longlong lStack_b0;
  undefined1 auStack_a8 [8];
  undefined4 uStack_a0;
  undefined7 uStack_9b;
  undefined1 uStack_94;
  undefined7 uStack_93;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar5 = (ulonglong *)*param_3;
  lVar27 = param_3[1];
  uVar26 = *(ulonglong *)(lVar27 + 0x40);
  uVar23 = *puVar5;
  uVar20 = 0;
  if (uVar23 <= uVar26) {
    uVar20 = uVar26 - uVar23;
  }
  uVar6 = *(ulonglong *)(lVar27 + 0x10);
  uVar7 = *(ulonglong *)(lVar27 + 0x30);
  if (uVar7 + uVar6 < uVar20) {
    uVar20 = uVar7 + uVar6;
  }
  if (uVar20 == 0) {
    return;
  }
  uVar29 = 0;
  uVar20 = uVar23 - *(ulonglong *)(lVar27 + 0x18);
  if (uVar23 < *(ulonglong *)(lVar27 + 0x18)) {
    uVar20 = uVar29;
  }
  uVar28 = uVar23 - *(ulonglong *)(lVar27 + 0x38);
  if (uVar23 < *(ulonglong *)(lVar27 + 0x38)) {
    uVar28 = uVar29;
  }
  lVar21 = uVar20 * 0x18 + *(longlong *)(lVar27 + 8);
  uVar23 = uVar6 - uVar20;
  if (uVar6 < uVar20) {
    lVar21 = 8;
    uVar23 = uVar29;
  }
  lVar27 = uVar28 * 0x18 + *(longlong *)(lVar27 + 0x28);
  uVar20 = uVar7 - uVar28;
  if (uVar7 < uVar28) {
    lVar27 = 8;
    uVar20 = uVar29;
  }
  *puVar5 = (uVar26 - uVar23) - uVar20;
  auVar19 = _DAT_14305a4b0;
  auVar18 = _DAT_14305a4a0;
  fVar17 = _DAT_142e36f50;
  lStack_b0 = lVar21 + uVar23 * 0x18;
  lStack_d0 = lVar27 + uVar20 * 0x18;
  uVar8 = *param_4;
  uVar2 = *(undefined4 *)((longlong)param_6 + 0x1c);
  uStack_b8 = *param_6;
  puStack_c0 = (undefined4 *)param_6[2];
  uStack_c8 = *param_7;
  uStack_d8 = *param_1;
  uStack_e0 = *param_2;
  uVar3 = *(undefined4 *)((longlong)param_5 + 0x1c);
  lVar9 = *param_5;
  puStack_e8 = (undefined4 *)param_5[2];
  do {
    if ((lVar21 == 0) || (lVar21 == lStack_b0)) {
      if (lVar27 == 0) {
        return;
      }
      if (lVar27 == lStack_d0) {
        return;
      }
      lVar22 = lVar27 + 0x18;
      lVar10 = 0;
      lVar25 = lVar27;
    }
    else {
      lVar22 = lVar27;
      lVar10 = lVar21 + 0x18;
      lVar25 = lVar21;
    }
    lVar21 = lVar10;
    lVar27 = lVar22;
    *puVar5 = *puVar5 + 1;
    uVar26 = *(ulonglong *)(lVar25 + 8);
    lVar22 = pdb_140b54f80(uVar8,uVar26,&UNK_1435af4f8);
    if (lVar22 != 0) {
      *puStack_c0 = uVar2;
      uVar4 = *(undefined4 *)(lVar25 + 0x10);
      pdb_1409cf8b0(uStack_b8,uVar26,uVar4);
      uVar23 = pdb_140a6a860(uStack_c8,uVar26);
      if ((uVar23 & 1) != 0) {
        pdb_1410bdd80(uStack_d8,uStack_e0,uVar26 & 0xffffffff,uVar4);
      }
      if (*(char *)(lVar25 + 0x14) == '\x01') {
        lVar10 = *(longlong *)(lVar22 + 0x48);
        uStack_88 = auVar19._0_8_;
        auVar33 = auVar18;
        if (lVar10 != 0) {
          puVar11 = *(undefined4 **)(lVar22 + 0x40);
          uVar26 = lVar10 * 0xc - 0xc;
          auVar32._8_8_ = 0;
          auVar32._0_8_ = uVar26;
          puVar24 = puVar11;
          auVar31 = auVar19;
          if ((SUB164(auVar32 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 3 & 1) == 0) {
            puVar24 = puVar11 + 3;
            auVar33._4_4_ = puVar11[2];
            auVar33._0_4_ = *puVar11;
            auVar33._8_8_ = 0;
            auVar31 = minps(auVar19,auVar33);
            auVar13._4_4_ = puVar11[2];
            auVar13._0_4_ = *puVar11;
            auVar13._8_8_ = 0;
            auVar33 = maxps(auVar18,auVar13);
          }
          uStack_88 = auVar31._0_8_;
          if (0xb < uVar26) {
            do {
              auVar14._4_4_ = puVar24[2];
              auVar14._0_4_ = *puVar24;
              auVar14._8_8_ = 0;
              auVar32 = minps(auVar31,auVar14);
              auVar31._4_4_ = puVar24[2];
              auVar31._0_4_ = *puVar24;
              auVar31._8_8_ = 0;
              auVar33 = maxps(auVar33,auVar31);
              auVar15._4_4_ = puVar24[5];
              auVar15._0_4_ = puVar24[3];
              auVar15._8_8_ = 0;
              auVar31 = minps(auVar32,auVar15);
              uStack_88 = auVar31._0_8_;
              auVar16._4_4_ = puVar24[5];
              auVar16._0_4_ = puVar24[3];
              auVar16._8_8_ = 0;
              auVar33 = maxps(auVar33,auVar16);
              puVar24 = puVar24 + 6;
            } while (puVar24 != puVar11 + lVar10 * 3);
          }
        }
        uStack_80 = auVar33._0_8_;
        uStack_f0 = pdb_140deec20(&uStack_88);
        uStack_ec = auVar33._0_4_;
        fVar30 = (float)pdb_140930390(lVar22);
        pdb_140df4540(auStack_a8,&uStack_f0,fVar30 * fVar17);
        uStack_8c = uStack_a0;
        uStack_94 = auStack_a8[0];
        uStack_93 = auStack_a8._1_7_;
        *puStack_e8 = uVar3;
        lVar22 = *(longlong *)(lVar9 + 0x30);
        uVar12 = *(undefined8 *)(lVar9 + 0x40);
        if (lVar22 == *(longlong *)(lVar9 + 0x20)) {
          pdb_142d7e6e0(lVar9 + 0x20);
        }
        lVar10 = *(longlong *)(lVar9 + 0x28);
        lVar25 = lVar22 * 0x20;
        *(undefined8 *)(lVar10 + lVar25) = uVar12;
        *(undefined1 *)(lVar10 + 8 + lVar25) = 7;
        *(undefined4 *)(lVar10 + 0x18 + lVar25) = uStack_8c;
        puVar1 = (undefined8 *)(lVar10 + 9 + lVar25);
        *puVar1 = CONCAT17(uStack_94,uStack_9b);
        puVar1[1] = CONCAT17((undefined1)uStack_8c,uStack_93);
        *(longlong *)(lVar9 + 0x30) = lVar22 + 1;
        *(longlong *)(lVar9 + 0x40) = *(longlong *)(lVar9 + 0x40) + 1;
      }
    }
  } while( true );
}

