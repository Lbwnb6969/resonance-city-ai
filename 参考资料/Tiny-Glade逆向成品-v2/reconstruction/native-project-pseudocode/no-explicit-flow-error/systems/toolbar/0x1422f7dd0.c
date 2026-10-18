// VA 0x1422f7dd0, PDB extent 2693 bytes
// toolbar::mei::widgets::ScrollingListView::with_items_undecorated<toolbar::menu::mods_workshop_tab::list_slot::closure_env$3>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::widgets::ScrollingListView::with_items_undecorated<toolbar::menu::mods_workshop_tab::list_slot::closure_env$3>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 2693 */

void pdb_1422f7dd0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined4 uVar4;
  code **ppcVar5;
  code *pcVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  code **ppcVar17;
  longlong lVar18;
  ushort uVar19;
  longlong lVar20;
  code **ppcVar21;
  uint uVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  code *pcStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  code **ppcStack_150;
  undefined8 *puStack_148;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_130;
  code **ppcStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  code **ppcStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  code *pcStack_e8;
  code *pcStack_e0;
  longlong lStack_d8;
  code *pcStack_d0;
  code **ppcStack_c8;
  code **ppcStack_c0;
  code **ppcStack_b8;
  code *pcStack_b0;
  code **ppcStack_a8;
  code *pcStack_a0;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  lVar12 = pdb_14116e5a0();
  fVar26 = _DAT_142fa5b20;
  fVar28 = _DAT_142e37878;
  fVar23 = *(float *)(lVar12 + 0x28) + _DAT_142e37878;
  fVar25 = (float)*(ulonglong *)(lVar12 + 0x20) * fVar23 + _DAT_142fa5b20;
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  fVar25 = fVar25 - (fVar23 * (float)*(ulonglong *)(lVar12 + 0x18) + _DAT_142fa5b20);
  fVar23 = 0.0;
  if (0.0 <= *(float *)(lVar12 + 0x30)) {
    fVar23 = *(float *)(lVar12 + 0x30);
  }
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  if (fVar23 <= fVar25) {
    fVar25 = fVar23;
  }
  *(float *)(lVar12 + 0x30) = fVar25;
  pdb_140de9710(lVar12 + 0x2c);
  uVar22 = -(uint)((float)((uint)(*(float *)(lVar12 + 0x2c) - *(float *)(lVar12 + 0x30)) &
                          _DAT_142e377e0) < _DAT_142e3b1d8);
  ppcVar5 = *(code ***)(lVar12 + 0x20);
  fVar23 = (float)(~uVar22 & (uint)*(float *)(lVar12 + 0x2c) |
                  (uint)*(float *)(lVar12 + 0x30) & uVar22);
  fVar28 = fVar28 + *(float *)(lVar12 + 0x28);
  fVar25 = (float)ppcVar5 * fVar28 + fVar26;
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  fVar26 = (float)*(ulonglong *)(lVar12 + 0x18) * fVar28 + fVar26;
  fVar25 = fVar25 - fVar26;
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  fVar10 = 0.0;
  if (0.0 <= fVar23) {
    fVar10 = fVar23;
  }
  if (fVar10 <= fVar25) {
    fVar25 = fVar10;
  }
  *(float *)(lVar12 + 0x2c) = fVar25;
  fVar23 = fVar25 / fVar28;
  if (fVar23 <= 0.0) {
    fVar23 = 0.0;
  }
  uVar16 = (longlong)(fVar23 - _DAT_142e36f2c) & (longlong)fVar23 >> 0x3f | (longlong)fVar23;
  if (fVar23 < 0.0) {
    uVar16 = 0;
  }
  if (_DAT_142e36f30 < fVar23) {
    uVar16 = 0xffffffffffffffff;
  }
  ppcVar17 = (code **)((uVar16 - 1) + (ulonglong)(uVar16 == 0));
  fVar26 = (fVar26 + fVar25) / fVar28;
  uVar16 = (longlong)(fVar26 - _DAT_142e36f2c) & (longlong)fVar26 >> 0x3f | (longlong)fVar26;
  if (fVar26 < 0.0) {
    uVar16 = 0;
  }
  if (_DAT_142e36f30 < fVar26) {
    uVar16 = 0xffffffffffffffff;
  }
  ppcVar21 = (code **)(uVar16 + 2);
  if (ppcVar5 < (code **)(uVar16 + 2)) {
    ppcVar21 = ppcVar5;
  }
  lVar13 = pdb_141172a70(param_1);
  lVar12 = *param_1;
  if (*(longlong *)(lVar12 + 0x1c8) != 0) {
    uVar4 = *(undefined4 *)(lVar13 + 0x28);
    plVar1 = param_1 + 1;
    uVar16 = pdb_1400af0a0(lVar12 + 0x1d0,plVar1);
    lVar13 = *(longlong *)(lVar12 + 0x1b0);
    bVar11 = (byte)(uVar16 >> 0x39);
    auVar24 = ZEXT216(CONCAT11(bVar11,bVar11));
    auVar24 = pshuflw(auVar24,auVar24,0);
    lVar18 = 0;
    while( true ) {
      uVar16 = uVar16 & *(ulonglong *)(lVar12 + 0x1b8);
      auVar35 = *(undefined1 (*) [16])(lVar13 + uVar16);
      auVar33[0] = -(auVar35[0] == auVar24[0]);
      auVar33[1] = -(auVar35[1] == auVar24[1]);
      auVar33[2] = -(auVar35[2] == auVar24[2]);
      auVar33[3] = -(auVar35[3] == auVar24[3]);
      auVar33[4] = -(auVar35[4] == auVar24[4]);
      auVar33[5] = -(auVar35[5] == auVar24[5]);
      auVar33[6] = -(auVar35[6] == auVar24[6]);
      auVar33[7] = -(auVar35[7] == auVar24[7]);
      auVar33[8] = -(auVar35[8] == auVar24[0]);
      auVar33[9] = -(auVar35[9] == auVar24[1]);
      auVar33[10] = -(auVar35[10] == auVar24[2]);
      auVar33[0xb] = -(auVar35[0xb] == auVar24[3]);
      auVar33[0xc] = -(auVar35[0xc] == auVar24[4]);
      auVar33[0xd] = -(auVar35[0xd] == auVar24[5]);
      auVar33[0xe] = -(auVar35[0xe] == auVar24[6]);
      auVar33[0xf] = -(auVar35[0xf] == auVar24[7]);
      uVar19 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf;
      uVar22 = (uint)uVar19;
      while (uVar19 != 0) {
        uVar8 = 0;
        for (uVar9 = uVar22; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        lVar20 = (uVar8 + uVar16 & *(ulonglong *)(lVar12 + 0x1b8)) * -0xd8;
        if (param_1[1] == *(longlong *)(lVar13 + -0xd8 + lVar20)) {
          lVar13 = lVar13 + lVar20;
          *(undefined4 *)(lVar13 + -0x7c) = 0;
          *(float *)(lVar13 + -0x78) = fVar28 * (float)ppcVar17 - fVar25;
          piVar14 = (int *)pdb_141172a70(param_1);
          if (*piVar14 == 1) {
            lVar12 = *param_1;
            if (*(longlong *)(lVar12 + 0x1c8) == 0) goto LAB_1422f82c1;
            ppcVar5 = *(code ***)(piVar14 + 2);
            uVar16 = pdb_1400af0a0(lVar12 + 0x1d0,plVar1);
            lVar13 = *(longlong *)(lVar12 + 0x1b0);
            bVar11 = (byte)(uVar16 >> 0x39);
            auVar24 = ZEXT216(CONCAT11(bVar11,bVar11));
            auVar24 = pshuflw(auVar24,auVar24,0);
            lVar18 = 0;
            goto LAB_1422f81a5;
          }
          lVar12 = *param_1;
          if (*(longlong *)(lVar12 + 0x1c8) == 0) goto LAB_1422f82c1;
          uVar16 = pdb_1400af0a0(lVar12 + 0x1d0,plVar1);
          lVar13 = *(longlong *)(lVar12 + 0x1b0);
          bVar11 = (byte)(uVar16 >> 0x39);
          auVar24 = ZEXT216(CONCAT11(bVar11,bVar11));
          auVar24 = pshuflw(auVar24,auVar24,0);
          lVar18 = 0;
          goto LAB_1422f8260;
        }
        uVar19 = (ushort)(uVar22 - 1) & (ushort)uVar22;
        uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar19);
      }
      auVar29[0] = -(auVar35[0] == -1);
      auVar29[1] = -(auVar35[1] == -1);
      auVar29[2] = -(auVar35[2] == -1);
      auVar29[3] = -(auVar35[3] == -1);
      auVar29[4] = -(auVar35[4] == -1);
      auVar29[5] = -(auVar35[5] == -1);
      auVar29[6] = -(auVar35[6] == -1);
      auVar29[7] = -(auVar35[7] == -1);
      auVar29[8] = -(auVar35[8] == -1);
      auVar29[9] = -(auVar35[9] == -1);
      auVar29[10] = -(auVar35[10] == -1);
      auVar29[0xb] = -(auVar35[0xb] == -1);
      auVar29[0xc] = -(auVar35[0xc] == -1);
      auVar29[0xd] = -(auVar35[0xd] == -1);
      auVar29[0xe] = -(auVar35[0xe] == -1);
      auVar29[0xf] = -(auVar35[0xf] == -1);
      if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar29 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar29 >> 0x3f,0) & 1) != 0) || (SUB161(auVar29 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar29 >> 0x4f,0) & 1) != 0) || (SUB161(auVar29 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar29 >> 0x5f,0) & 1) != 0) || (SUB161(auVar29 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar29 >> 0x6f,0) & 1) != 0) || (SUB161(auVar29 >> 0x77,0) & 1) != 0) ||
          auVar29[0xf] < '\0') break;
      uVar16 = uVar16 + lVar18 + 0x10;
      lVar18 = lVar18 + 0x10;
    }
  }
LAB_1422f82c1:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
LAB_1422f8260:
  uVar16 = uVar16 & *(ulonglong *)(lVar12 + 0x1b8);
  pcVar3 = (char *)(lVar13 + uVar16);
  auVar35[0] = -(*pcVar3 == auVar24[0]);
  auVar35[1] = -(pcVar3[1] == auVar24[1]);
  auVar35[2] = -(pcVar3[2] == auVar24[2]);
  auVar35[3] = -(pcVar3[3] == auVar24[3]);
  auVar35[4] = -(pcVar3[4] == auVar24[4]);
  auVar35[5] = -(pcVar3[5] == auVar24[5]);
  auVar35[6] = -(pcVar3[6] == auVar24[6]);
  auVar35[7] = -(pcVar3[7] == auVar24[7]);
  auVar35[8] = -(pcVar3[8] == auVar24[0]);
  auVar35[9] = -(pcVar3[9] == auVar24[1]);
  auVar35[10] = -(pcVar3[10] == auVar24[2]);
  auVar35[0xb] = -(pcVar3[0xb] == auVar24[3]);
  auVar35[0xc] = -(pcVar3[0xc] == auVar24[4]);
  auVar35[0xd] = -(pcVar3[0xd] == auVar24[5]);
  auVar35[0xe] = -(pcVar3[0xe] == auVar24[6]);
  auVar35[0xf] = -(pcVar3[0xf] == auVar24[7]);
  uVar19 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
  uVar22 = (uint)uVar19;
  while (uVar19 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar22; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    lVar20 = (uVar8 + uVar16 & *(ulonglong *)(lVar12 + 0x1b8)) * -0xd8;
    if (*plVar1 == *(longlong *)(lVar13 + -0xd8 + lVar20)) {
      pbVar2 = (byte *)(lVar13 + lVar20 + -5);
      *pbVar2 = *pbVar2 & 0x5f;
      goto LAB_1422f82f4;
    }
    uVar19 = (ushort)(uVar22 - 1) & (ushort)uVar22;
    uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar19);
  }
  auVar31[0] = -(*pcVar3 == -1);
  auVar31[1] = -(pcVar3[1] == -1);
  auVar31[2] = -(pcVar3[2] == -1);
  auVar31[3] = -(pcVar3[3] == -1);
  auVar31[4] = -(pcVar3[4] == -1);
  auVar31[5] = -(pcVar3[5] == -1);
  auVar31[6] = -(pcVar3[6] == -1);
  auVar31[7] = -(pcVar3[7] == -1);
  auVar31[8] = -(pcVar3[8] == -1);
  auVar31[9] = -(pcVar3[9] == -1);
  auVar31[10] = -(pcVar3[10] == -1);
  auVar31[0xb] = -(pcVar3[0xb] == -1);
  auVar31[0xc] = -(pcVar3[0xc] == -1);
  auVar31[0xd] = -(pcVar3[0xd] == -1);
  auVar31[0xe] = -(pcVar3[0xe] == -1);
  auVar31[0xf] = -(pcVar3[0xf] == -1);
  if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar31 >> 0x17,0) & 1) != 0) || (SUB161(auVar31 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar31 >> 0x27,0) & 1) != 0) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar31 >> 0x37,0) & 1) != 0) || (SUB161(auVar31 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar31 >> 0x47,0) & 1) != 0) || (SUB161(auVar31 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar31 >> 0x57,0) & 1) != 0) || (SUB161(auVar31 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar31 >> 0x67,0) & 1) != 0) || (SUB161(auVar31 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar31 >> 0x77,0) & 1) != 0) || auVar31[0xf] < '\0') goto LAB_1422f82c1;
  uVar16 = uVar16 + lVar18 + 0x10;
  lVar18 = lVar18 + 0x10;
  goto LAB_1422f8260;
LAB_1422f81a5:
  uVar16 = uVar16 & *(ulonglong *)(lVar12 + 0x1b8);
  pcVar3 = (char *)(lVar13 + uVar16);
  auVar34[0] = -(*pcVar3 == auVar24[0]);
  auVar34[1] = -(pcVar3[1] == auVar24[1]);
  auVar34[2] = -(pcVar3[2] == auVar24[2]);
  auVar34[3] = -(pcVar3[3] == auVar24[3]);
  auVar34[4] = -(pcVar3[4] == auVar24[4]);
  auVar34[5] = -(pcVar3[5] == auVar24[5]);
  auVar34[6] = -(pcVar3[6] == auVar24[6]);
  auVar34[7] = -(pcVar3[7] == auVar24[7]);
  auVar34[8] = -(pcVar3[8] == auVar24[0]);
  auVar34[9] = -(pcVar3[9] == auVar24[1]);
  auVar34[10] = -(pcVar3[10] == auVar24[2]);
  auVar34[0xb] = -(pcVar3[0xb] == auVar24[3]);
  auVar34[0xc] = -(pcVar3[0xc] == auVar24[4]);
  auVar34[0xd] = -(pcVar3[0xd] == auVar24[5]);
  auVar34[0xe] = -(pcVar3[0xe] == auVar24[6]);
  auVar34[0xf] = -(pcVar3[0xf] == auVar24[7]);
  uVar19 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf;
  uVar22 = (uint)uVar19;
  while (uVar19 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar22; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    lVar20 = (uVar8 + uVar16 & *(ulonglong *)(lVar12 + 0x1b8)) * -0xd8;
    if (*plVar1 == *(longlong *)(lVar13 + -0xd8 + lVar20)) {
      lVar13 = lVar13 + lVar20;
      bVar11 = *(byte *)(lVar13 + -5);
      *(byte *)(lVar13 + -5) = bVar11 | 0xe0;
      if ((ppcVar5 < ppcVar17) || (ppcVar21 <= ppcVar5)) {
        *(byte *)(lVar13 + -5) = bVar11 | 0xe4;
      }
LAB_1422f82f4:
      lStack_130 = *param_2;
      puStack_148 = (undefined8 *)param_2[1];
      lStack_140 = param_2[2];
      pcStack_d0 = (code *)param_2[3];
      lStack_138 = param_2[4];
      uVar15 = 0;
      lVar12 = lStack_130;
joined_r0x0001422f832c:
      if (ppcVar21 <= ppcVar17) {
        lVar12 = pdb_14116e5a0(param_1);
        if (((byte)uVar15 & *(byte *)(lVar12 + 0x3a) & 1) != 0) {
          fVar28 = _DAT_142e37878 + *(float *)(lVar12 + 0x28);
          fVar25 = (float)ppcStack_c8 * fVar28;
          fVar28 = (*(float *)(lVar12 + 0x28) + fVar25) -
                   (fVar28 * (float)*(ulonglong *)(lVar12 + 0x18) + _DAT_142fa5b20);
          if (fVar28 <= 0.0) {
            fVar28 = 0.0;
          }
          if (fVar25 < fVar28) {
            pcStack_170 = (code *)CONCAT44(pcStack_170._4_4_,fVar28);
            pcStack_e8 = (code *)CONCAT44(pcStack_e8._4_4_,fVar25);
            ppcStack_b8 = &pcStack_170;
            pcStack_b0 = pdb_140f705d0;
            ppcStack_a8 = &pcStack_e8;
            pcStack_a0 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_142fa5c78,&ppcStack_b8,&UNK_142fa5d18);
          }
          if (fVar28 <= *(float *)(lVar12 + 0x30)) {
            fVar28 = *(float *)(lVar12 + 0x30);
          }
          if (fVar28 <= fVar25) {
            fVar25 = fVar28;
          }
          *(float *)(lVar12 + 0x30) = fVar25;
        }
        return;
      }
      uStack_158 = uVar15;
      ppcStack_b8 = ppcVar17;
      pcStack_b0 = _DAT_14329c2b0;
      ppcStack_a8 = (code **)_UNK_14329c2b8;
      pcStack_b0 = (code *)pdb_1400affa0(&ppcStack_b8);
      ppcStack_b8 = (code **)param_1[1];
      uVar15 = pdb_1400b0130(&ppcStack_b8);
      pdb_14072caa0(&ppcStack_b8,param_1,uVar15);
      pdb_14116f0d0(&ppcStack_b8,0);
      ppcVar5 = ppcStack_b8;
      uStack_118 = ppcStack_a8;
      ppcStack_128 = ppcStack_b8;
      pcStack_120 = pcStack_b0;
      if (ppcStack_b8[0x39] != (code *)0x0) {
        ppcStack_150 = (code **)((longlong)ppcVar17 + 1);
        uVar16 = pdb_1400af0a0(ppcStack_b8 + 0x3a,&pcStack_b0);
        pcVar6 = ppcVar5[0x36];
        pcVar7 = ppcVar5[0x37];
        bVar11 = (byte)(uVar16 >> 0x39);
        auVar24 = ZEXT216(CONCAT11(bVar11,bVar11));
        auVar24 = pshuflw(auVar24,auVar24,0);
        lVar13 = 0;
        while( true ) {
          uVar16 = uVar16 & (ulonglong)pcVar7;
          auVar35 = *(undefined1 (*) [16])(pcVar6 + uVar16);
          auVar32[0] = -(auVar35[0] == auVar24[0]);
          auVar32[1] = -(auVar35[1] == auVar24[1]);
          auVar32[2] = -(auVar35[2] == auVar24[2]);
          auVar32[3] = -(auVar35[3] == auVar24[3]);
          auVar32[4] = -(auVar35[4] == auVar24[4]);
          auVar32[5] = -(auVar35[5] == auVar24[5]);
          auVar32[6] = -(auVar35[6] == auVar24[6]);
          auVar32[7] = -(auVar35[7] == auVar24[7]);
          auVar32[8] = -(auVar35[8] == auVar24[0]);
          auVar32[9] = -(auVar35[9] == auVar24[1]);
          auVar32[10] = -(auVar35[10] == auVar24[2]);
          auVar32[0xb] = -(auVar35[0xb] == auVar24[3]);
          auVar32[0xc] = -(auVar35[0xc] == auVar24[4]);
          auVar32[0xd] = -(auVar35[0xd] == auVar24[5]);
          auVar32[0xe] = -(auVar35[0xe] == auVar24[6]);
          auVar32[0xf] = -(auVar35[0xf] == auVar24[7]);
          uVar19 = (ushort)(SUB161(auVar32 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar32[0xf] >> 7) << 0xf;
          uVar22 = (uint)uVar19;
          while (uVar19 != 0) {
            uVar8 = 0;
            for (uVar9 = uVar22; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            lVar18 = (uVar8 + uVar16 & (ulonglong)pcVar7) * -0xd8;
            if (pcStack_b0 == *(code **)(pcVar6 + lVar18 + -0xd8)) {
              *(undefined4 *)(pcVar6 + lVar18 + -0x88) = 0;
              *(undefined4 *)(pcVar6 + lVar18 + -0x84) = uVar4;
              uStack_118 = ppcStack_a8;
              ppcStack_128 = ppcStack_b8;
              pcStack_120 = pcStack_b0;
              if (*(code ***)(lVar12 + 0x10) <= ppcVar17) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(ppcVar17,*(code ***)(lVar12 + 0x10),&UNK_1434d6fc0);
              }
              pcVar6 = *(code **)(*(longlong *)(lVar12 + 8) + (longlong)ppcVar17 * 8);
              if ((SBORROW8(0,*(longlong *)pcVar6)) ||
                 (pdb_140f60be0(&ppcStack_b8,pcVar6), SBORROW8(0,(longlong)ppcStack_b8))) {
                pcStack_e8 = pcVar6 + 0x18;
                pcStack_e0 = pdb_140c91ab0;
                pdb_140f60760(&ppcStack_108,&UNK_1434d6fd8,&pcStack_e8);
              }
              else {
                uStack_f8 = ppcStack_a8;
                ppcStack_108 = ppcStack_b8;
                pcStack_100 = pcStack_b0;
              }
              lVar12 = *(longlong *)(pcVar6 + 0x18);
              pdb_142328f40(&ppcStack_b8,lVar12,*puStack_148,lStack_140,
                            *(longlong *)(pcStack_d0 + 0x20));
              pcVar7 = pcStack_100;
              ppcStack_c0 = ppcStack_b8;
              if (SBORROW8(0,(longlong)ppcStack_b8)) {
                pcStack_170 = (code *)0x0;
              }
              else {
                uStack_168 = ppcStack_a8;
                uStack_160 = pcStack_a0._0_4_;
                pcStack_170 = pcStack_b0;
              }
              pcStack_e8 = pcStack_d0;
              lStack_d8 = lStack_138;
              pcStack_e0 = pcVar6;
              pdb_142990fc0(&ppcStack_128,lVar12,pcStack_100,uStack_f8,&pcStack_170,&pcStack_e8);
              if ((!SBORROW8(0,(longlong)ppcStack_c0)) && (ppcStack_c0 != (code **)0x0)) {
                pub_1406abac0((byte *)pcStack_b0,(ulonglong)ppcStack_c0,1);
              }
              lVar12 = lStack_130;
              if (ppcStack_108 != (code **)0x0) {
                pub_1406abac0((byte *)pcVar7,(ulonglong)ppcStack_108,1);
              }
              ppcStack_b8 = ppcStack_128;
              bVar11 = pdb_141172f20(ppcStack_128,pcStack_120,&ppcStack_b8);
              if (bVar11 != 0) {
                ppcStack_c8 = ppcVar17;
              }
              uVar15 = CONCAT71((int7)((ulonglong)uStack_158 >> 8),(byte)uStack_158 | bVar11);
              ppcVar17 = ppcStack_150;
              goto joined_r0x0001422f832c;
            }
            uVar19 = (ushort)(uVar22 - 1) & (ushort)uVar22;
            uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar19);
          }
          auVar27[0] = -(auVar35[0] == -1);
          auVar27[1] = -(auVar35[1] == -1);
          auVar27[2] = -(auVar35[2] == -1);
          auVar27[3] = -(auVar35[3] == -1);
          auVar27[4] = -(auVar35[4] == -1);
          auVar27[5] = -(auVar35[5] == -1);
          auVar27[6] = -(auVar35[6] == -1);
          auVar27[7] = -(auVar35[7] == -1);
          auVar27[8] = -(auVar35[8] == -1);
          auVar27[9] = -(auVar35[9] == -1);
          auVar27[10] = -(auVar35[10] == -1);
          auVar27[0xb] = -(auVar35[0xb] == -1);
          auVar27[0xc] = -(auVar35[0xc] == -1);
          auVar27[0xd] = -(auVar35[0xd] == -1);
          auVar27[0xe] = -(auVar35[0xe] == -1);
          auVar27[0xf] = -(auVar35[0xf] == -1);
          if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar27 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar27 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar27 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar27 >> 0x2f,0) & 1) != 0) || (SUB161(auVar27 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar27 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar27 >> 0x47,0) & 1) != 0) || (SUB161(auVar27 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar27 >> 0x57,0) & 1) != 0) || (SUB161(auVar27 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar27 >> 0x67,0) & 1) != 0) || (SUB161(auVar27 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar27 >> 0x77,0) & 1) != 0) || auVar27[0xf] < '\0') break;
          uVar16 = uVar16 + lVar13 + 0x10;
          lVar13 = lVar13 + 0x10;
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14329c430);
    }
    uVar19 = (ushort)(uVar22 - 1) & (ushort)uVar22;
    uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar19);
  }
  auVar30[0] = -(*pcVar3 == -1);
  auVar30[1] = -(pcVar3[1] == -1);
  auVar30[2] = -(pcVar3[2] == -1);
  auVar30[3] = -(pcVar3[3] == -1);
  auVar30[4] = -(pcVar3[4] == -1);
  auVar30[5] = -(pcVar3[5] == -1);
  auVar30[6] = -(pcVar3[6] == -1);
  auVar30[7] = -(pcVar3[7] == -1);
  auVar30[8] = -(pcVar3[8] == -1);
  auVar30[9] = -(pcVar3[9] == -1);
  auVar30[10] = -(pcVar3[10] == -1);
  auVar30[0xb] = -(pcVar3[0xb] == -1);
  auVar30[0xc] = -(pcVar3[0xc] == -1);
  auVar30[0xd] = -(pcVar3[0xd] == -1);
  auVar30[0xe] = -(pcVar3[0xe] == -1);
  auVar30[0xf] = -(pcVar3[0xf] == -1);
  if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar30 >> 0x17,0) & 1) != 0) || (SUB161(auVar30 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar30 >> 0x27,0) & 1) != 0) || (SUB161(auVar30 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar30 >> 0x37,0) & 1) != 0) || (SUB161(auVar30 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar30 >> 0x47,0) & 1) != 0) || (SUB161(auVar30 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar30 >> 0x57,0) & 1) != 0) || (SUB161(auVar30 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar30 >> 0x67,0) & 1) != 0) || (SUB161(auVar30 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar30 >> 0x77,0) & 1) != 0) || auVar30[0xf] < '\0') goto LAB_1422f82c1;
  uVar16 = uVar16 + lVar18 + 0x10;
  lVar18 = lVar18 + 0x10;
  goto LAB_1422f81a5;
}

