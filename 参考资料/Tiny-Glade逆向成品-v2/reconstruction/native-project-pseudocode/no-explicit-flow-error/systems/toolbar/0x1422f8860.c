// VA 0x1422f8860, PDB extent 3127 bytes
// toolbar::mei::widgets::ScrollingListView::with_items_undecorated<toolbar::menu::mods_mine_tab::list_slot::closure_env$1>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::widgets::ScrollingListView::with_items_undecorated<toolbar::menu::mods_mine_tab::list_slot::closure_env$1>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 3127 */

longlong pdb_1422f8860(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  float *pfVar2;
  byte *pbVar3;
  undefined4 uVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  float *pfVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  float *pfVar18;
  float *pfVar19;
  float **arg0;
  longlong lVar20;
  ushort uVar21;
  longlong lVar22;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong uVar23;
  float *pfVar24;
  float *pfVar25;
  uint uVar26;
  byte bVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  undefined1 unaff_XMM8_Ba;
  undefined1 uVar46;
  undefined1 unaff_XMM8_Bb;
  undefined1 uVar47;
  undefined1 unaff_XMM8_Bc;
  undefined1 uVar48;
  byte bVar49;
  undefined1 unaff_XMM8_Bd;
  undefined1 uVar50;
  byte bVar51;
  undefined8 uStack_160;
  float *pfStack_158;
  float *pfStack_150;
  longlong lStack_148;
  float *pfStack_140;
  longlong *plStack_138;
  float fStack_130;
  undefined4 uStack_12c;
  float *pfStack_128;
  undefined8 uStack_120;
  float *pfStack_118;
  float *pfStack_110;
  float *pfStack_108;
  float *pfStack_f8;
  float *pfStack_f0;
  float *pfStack_e8;
  float *pfStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  float *pfStack_c8;
  float *pfStack_c0;
  float **ppfStack_b8;
  float *pfStack_b0;
  float *pfStack_a8;
  float *pfStack_a0;
  float *pfStack_98;
  undefined8 uStack_90;
  undefined8 uStack_50;
  
  uStack_90 = 0xfffffffffffffffe;
  lVar13 = pdb_14116e5a0();
  fVar32 = _DAT_142fa5b20;
  fVar45 = _DAT_142e37878;
  fVar28 = *(float *)(lVar13 + 0x28) + _DAT_142e37878;
  fVar31 = (float)*(ulonglong *)(lVar13 + 0x20) * fVar28 + _DAT_142fa5b20;
  fVar29 = (float)(CONCAT13(unaff_XMM8_Bd,
                            CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ^
                  CONCAT13(unaff_XMM8_Bd,
                           CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
  if (fVar31 <= fVar29) {
    fVar31 = fVar29;
  }
  fVar31 = fVar31 - (fVar28 * (float)*(ulonglong *)(lVar13 + 0x18) + _DAT_142fa5b20);
  fVar28 = 0.0;
  if (0.0 <= *(float *)(lVar13 + 0x30)) {
    fVar28 = *(float *)(lVar13 + 0x30);
  }
  if (fVar31 <= fVar29) {
    fVar31 = fVar29;
  }
  if (fVar28 <= fVar31) {
    fVar31 = fVar28;
  }
  *(float *)(lVar13 + 0x30) = fVar31;
  pdb_140de9710(lVar13 + 0x2c);
  uVar26 = -(uint)((float)((uint)(*(float *)(lVar13 + 0x2c) - *(float *)(lVar13 + 0x30)) &
                          _DAT_142e377e0) < _DAT_142e3b1d8);
  pfVar5 = *(float **)(lVar13 + 0x20);
  fVar28 = (float)(~uVar26 & (uint)*(float *)(lVar13 + 0x2c) |
                  (uint)*(float *)(lVar13 + 0x30) & uVar26);
  fVar45 = fVar45 + *(float *)(lVar13 + 0x28);
  fVar31 = (float)pfVar5 * fVar45 + fVar32;
  if (fVar31 <= fVar29) {
    fVar31 = fVar29;
  }
  fVar32 = (float)*(ulonglong *)(lVar13 + 0x18) * fVar45 + fVar32;
  fVar31 = fVar31 - fVar32;
  if (fVar31 <= fVar29) {
    fVar31 = fVar29;
  }
  fVar10 = 0.0;
  if (0.0 <= fVar28) {
    fVar10 = fVar28;
  }
  if (fVar10 <= fVar31) {
    fVar31 = fVar10;
  }
  *(float *)(lVar13 + 0x2c) = fVar31;
  fVar28 = fVar31 / fVar45;
  if (fVar31 / fVar45 <= fVar29) {
    fVar28 = fVar29;
  }
  uVar23 = (longlong)(fVar28 - _DAT_142e36f2c) & (longlong)fVar28 >> 0x3f | (longlong)fVar28;
  if (fVar28 < fVar29) {
    uVar23 = 0;
  }
  if (_DAT_142e36f30 < fVar28) {
    uVar23 = 0xffffffffffffffff;
  }
  pfVar24 = (float *)((uVar23 - 1) + (ulonglong)(uVar23 == 0));
  fVar32 = (fVar32 + fVar31) / fVar45;
  uVar23 = (longlong)(fVar32 - _DAT_142e36f2c) & (longlong)fVar32 >> 0x3f | (longlong)fVar32;
  if (fVar32 < fVar29) {
    uVar23 = 0;
  }
  if (_DAT_142e36f30 < fVar32) {
    uVar23 = 0xffffffffffffffff;
  }
  pfVar25 = (float *)(uVar23 + 2);
  if (pfVar5 < (float *)(uVar23 + 2)) {
    pfVar25 = pfVar5;
  }
  if ((longlong)pfVar24 < 0) {
    fVar29 = (float)pfVar24;
    uVar46 = SUB41(fVar29,0);
    uVar47 = (undefined1)((uint)fVar29 >> 8);
    uVar48 = (undefined1)((uint)fVar29 >> 0x10);
    uVar50 = (undefined1)((uint)fVar29 >> 0x18);
  }
  else {
    fVar29 = (float)(longlong)pfVar24;
    uVar46 = SUB41(fVar29,0);
    uVar47 = (undefined1)((uint)fVar29 >> 8);
    uVar48 = (undefined1)((uint)fVar29 >> 0x10);
    uVar50 = (undefined1)((uint)fVar29 >> 0x18);
  }
  lVar14 = pdb_141172a70(param_1);
  lVar13 = *param_1;
  if (*(longlong *)(lVar13 + 0x1c8) != 0) {
    uVar4 = *(undefined4 *)(lVar14 + 0x28);
    plVar1 = param_1 + 1;
    uVar23 = pdb_1400af0a0(lVar13 + 0x1d0,plVar1);
    lVar14 = *(longlong *)(lVar13 + 0x1b0);
    bVar27 = (byte)(uVar23 >> 0x39);
    auVar30 = ZEXT216(CONCAT11(bVar27,bVar27));
    auVar30 = pshuflw(auVar30,auVar30,0);
    lVar20 = 0;
    while( true ) {
      uVar23 = uVar23 & *(ulonglong *)(lVar13 + 0x1b8);
      auVar40 = *(undefined1 (*) [16])(lVar14 + uVar23);
      auVar42[0] = -(auVar40[0] == auVar30[0]);
      auVar42[1] = -(auVar40[1] == auVar30[1]);
      auVar42[2] = -(auVar40[2] == auVar30[2]);
      auVar42[3] = -(auVar40[3] == auVar30[3]);
      auVar42[4] = -(auVar40[4] == auVar30[4]);
      auVar42[5] = -(auVar40[5] == auVar30[5]);
      auVar42[6] = -(auVar40[6] == auVar30[6]);
      auVar42[7] = -(auVar40[7] == auVar30[7]);
      auVar42[8] = -(auVar40[8] == auVar30[0]);
      auVar42[9] = -(auVar40[9] == auVar30[1]);
      auVar42[10] = -(auVar40[10] == auVar30[2]);
      auVar42[0xb] = -(auVar40[0xb] == auVar30[3]);
      auVar42[0xc] = -(auVar40[0xc] == auVar30[4]);
      auVar42[0xd] = -(auVar40[0xd] == auVar30[5]);
      auVar42[0xe] = -(auVar40[0xe] == auVar30[6]);
      auVar42[0xf] = -(auVar40[0xf] == auVar30[7]);
      uVar21 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf;
      uVar26 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar26; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        lVar22 = (uVar7 + uVar23 & *(ulonglong *)(lVar13 + 0x1b8)) * -0xd8;
        if (param_1[1] == *(longlong *)(lVar14 + -0xd8 + lVar22)) {
          lVar14 = lVar14 + lVar22;
          *(undefined4 *)(lVar14 + -0x7c) = 0;
          *(float *)(lVar14 + -0x78) =
               fVar45 * (float)CONCAT13(uVar50,CONCAT12(uVar48,CONCAT11(uVar47,uVar46))) - fVar31;
          piVar15 = (int *)pdb_141172a70(param_1);
          if (*piVar15 != 1) {
            lVar13 = *param_1;
            if (*(longlong *)(lVar13 + 0x1c8) == 0) goto LAB_1422f8d59;
            uVar23 = pdb_1400af0a0(lVar13 + 0x1d0,plVar1);
            lVar14 = *(longlong *)(lVar13 + 0x1b0);
            bVar27 = (byte)(uVar23 >> 0x39);
            auVar30 = ZEXT216(CONCAT11(bVar27,bVar27));
            auVar30 = pshuflw(auVar30,auVar30,0);
            lVar20 = 0;
            goto LAB_1422f8cf4;
          }
          lVar13 = *param_1;
          if (*(longlong *)(lVar13 + 0x1c8) == 0) goto LAB_1422f8d59;
          pfVar5 = *(float **)(piVar15 + 2);
          uVar23 = pdb_1400af0a0(lVar13 + 0x1d0,plVar1);
          lVar14 = *(longlong *)(lVar13 + 0x1b0);
          bVar27 = (byte)(uVar23 >> 0x39);
          auVar30 = ZEXT216(CONCAT11(bVar27,bVar27));
          auVar30 = pshuflw(auVar30,auVar30,0);
          lVar20 = 0;
          goto LAB_1422f8c39;
        }
        uVar21 = (ushort)(uVar26 - 1) & (ushort)uVar26;
        uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar21);
      }
      auVar36[0] = -(auVar40[0] == -1);
      auVar36[1] = -(auVar40[1] == -1);
      auVar36[2] = -(auVar40[2] == -1);
      auVar36[3] = -(auVar40[3] == -1);
      auVar36[4] = -(auVar40[4] == -1);
      auVar36[5] = -(auVar40[5] == -1);
      auVar36[6] = -(auVar40[6] == -1);
      auVar36[7] = -(auVar40[7] == -1);
      auVar36[8] = -(auVar40[8] == -1);
      auVar36[9] = -(auVar40[9] == -1);
      auVar36[10] = -(auVar40[10] == -1);
      auVar36[0xb] = -(auVar40[0xb] == -1);
      auVar36[0xc] = -(auVar40[0xc] == -1);
      auVar36[0xd] = -(auVar40[0xd] == -1);
      auVar36[0xe] = -(auVar40[0xe] == -1);
      auVar36[0xf] = -(auVar40[0xf] == -1);
      if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar36 >> 0x17,0) & 1) != 0) || (SUB161(auVar36 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar36 >> 0x27,0) & 1) != 0) || (SUB161(auVar36 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar36 >> 0x3f,0) & 1) != 0) || (SUB161(auVar36 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar36 >> 0x4f,0) & 1) != 0) || (SUB161(auVar36 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar36 >> 0x5f,0) & 1) != 0) || (SUB161(auVar36 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar36 >> 0x6f,0) & 1) != 0) || (SUB161(auVar36 >> 0x77,0) & 1) != 0) ||
          auVar36[0xf] < '\0') break;
      uVar23 = uVar23 + lVar20 + 0x10;
      lVar20 = lVar20 + 0x10;
    }
  }
LAB_1422f8d59:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
LAB_1422f8c39:
  uVar23 = uVar23 & *(ulonglong *)(lVar13 + 0x1b8);
  auVar40 = *(undefined1 (*) [16])(lVar14 + uVar23);
  auVar43[0] = -(auVar40[0] == auVar30[0]);
  auVar43[1] = -(auVar40[1] == auVar30[1]);
  auVar43[2] = -(auVar40[2] == auVar30[2]);
  auVar43[3] = -(auVar40[3] == auVar30[3]);
  auVar43[4] = -(auVar40[4] == auVar30[4]);
  auVar43[5] = -(auVar40[5] == auVar30[5]);
  auVar43[6] = -(auVar40[6] == auVar30[6]);
  auVar43[7] = -(auVar40[7] == auVar30[7]);
  auVar43[8] = -(auVar40[8] == auVar30[0]);
  auVar43[9] = -(auVar40[9] == auVar30[1]);
  auVar43[10] = -(auVar40[10] == auVar30[2]);
  auVar43[0xb] = -(auVar40[0xb] == auVar30[3]);
  auVar43[0xc] = -(auVar40[0xc] == auVar30[4]);
  auVar43[0xd] = -(auVar40[0xd] == auVar30[5]);
  auVar43[0xe] = -(auVar40[0xe] == auVar30[6]);
  auVar43[0xf] = -(auVar40[0xf] == auVar30[7]);
  uVar21 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(auVar43[0xf] >> 7) << 0xf;
  uVar26 = (uint)uVar21;
  while (uVar21 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar26; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    lVar22 = (uVar7 + uVar23 & *(ulonglong *)(lVar13 + 0x1b8)) * -0xd8;
    if (*plVar1 == *(longlong *)(lVar14 + -0xd8 + lVar22)) {
      lVar14 = lVar14 + lVar22;
      bVar27 = *(byte *)(lVar14 + -5);
      *(byte *)(lVar14 + -5) = bVar27 | 0xe0;
      if ((pfVar5 < pfVar24) || (pfVar25 <= pfVar5)) {
        *(byte *)(lVar14 + -5) = bVar27 | 0xe4;
      }
      if (pfVar25 <= pfVar24) goto code_r0x00014116e5a0;
      goto LAB_1422f8d8c;
    }
    uVar21 = (ushort)(uVar26 - 1) & (ushort)uVar26;
    uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar21);
  }
  auVar37[0] = -(auVar40[0] == -1);
  auVar37[1] = -(auVar40[1] == -1);
  auVar37[2] = -(auVar40[2] == -1);
  auVar37[3] = -(auVar40[3] == -1);
  auVar37[4] = -(auVar40[4] == -1);
  auVar37[5] = -(auVar40[5] == -1);
  auVar37[6] = -(auVar40[6] == -1);
  auVar37[7] = -(auVar40[7] == -1);
  auVar37[8] = -(auVar40[8] == -1);
  auVar37[9] = -(auVar40[9] == -1);
  auVar37[10] = -(auVar40[10] == -1);
  auVar37[0xb] = -(auVar40[0xb] == -1);
  auVar37[0xc] = -(auVar40[0xc] == -1);
  auVar37[0xd] = -(auVar40[0xd] == -1);
  auVar37[0xe] = -(auVar40[0xe] == -1);
  auVar37[0xf] = -(auVar40[0xf] == -1);
  if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar37 >> 0x17,0) & 1) != 0) || (SUB161(auVar37 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar37 >> 0x27,0) & 1) != 0) || (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar37 >> 0x37,0) & 1) != 0) || (SUB161(auVar37 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar37 >> 0x47,0) & 1) != 0) || (SUB161(auVar37 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar37 >> 0x57,0) & 1) != 0) || (SUB161(auVar37 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar37 >> 0x67,0) & 1) != 0) || (SUB161(auVar37 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar37 >> 0x77,0) & 1) != 0) || auVar37[0xf] < '\0') goto LAB_1422f8d59;
  uVar23 = uVar23 + lVar20 + 0x10;
  lVar20 = lVar20 + 0x10;
  goto LAB_1422f8c39;
LAB_1422f8d8c:
  pfVar11 = _UNK_14329c2b8;
  pfVar5 = _DAT_14329c2b0;
  lStack_148 = *param_2;
  plStack_138 = (longlong *)param_2[1];
  pfStack_140 = (float *)param_2[2];
  pfStack_f0 = (float *)param_2[3];
  pfStack_e8 = (float *)param_2[4];
  iVar9 = -(uint)(CONCAT13(uVar50,CONCAT12(uVar48,CONCAT11(uVar47,uVar46))) ==
                 CONCAT13(uVar50,CONCAT12(uVar48,CONCAT11(uVar47,uVar46))));
  bVar27 = (byte)((uint)iVar9 >> 8);
  bVar49 = (byte)((uint)iVar9 >> 0x10);
  bVar51 = (byte)((uint)iVar9 >> 0x18);
  arg0 = (float **)0x0;
LAB_1422f8dc9:
  pfStack_c0 = pfVar5;
  ppfStack_b8 = (float **)pfVar11;
  pfStack_150 = (float *)arg0;
  pfStack_c8 = pfVar24;
  pfStack_c0 = (float *)pdb_1400affa0(&pfStack_c8);
  pfStack_c8 = (float *)param_1[1];
  uVar16 = pdb_1400b0130(&pfStack_c8);
  pdb_14072caa0(&pfStack_c8,param_1,uVar16);
  pdb_14116f0d0(&pfStack_c8,0);
  pfVar6 = pfStack_c8;
  pfStack_108 = (float *)ppfStack_b8;
  pfStack_118 = pfStack_c8;
  pfStack_110 = pfStack_c0;
  if (*(longlong *)(pfStack_c8 + 0x72) == 0) {
LAB_1422f9260:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14329c430);
  }
  pfVar2 = (float *)((longlong)pfVar24 + 1);
  uVar17 = pdb_1400af0a0(pfStack_c8 + 0x74,&pfStack_c0);
  lVar13 = *(longlong *)(pfVar6 + 0x6c);
  uVar23 = *(ulonglong *)(pfVar6 + 0x6e);
  bVar12 = (byte)(uVar17 >> 0x39);
  auVar30 = ZEXT216(CONCAT11(bVar12,bVar12));
  auVar30 = pshuflw(auVar30,auVar30,0);
  lVar14 = 0;
  do {
    uVar17 = uVar17 & uVar23;
    auVar40 = *(undefined1 (*) [16])(lVar13 + uVar17);
    auVar39[0] = -(auVar40[0] == auVar30[0]);
    auVar39[1] = -(auVar40[1] == auVar30[1]);
    auVar39[2] = -(auVar40[2] == auVar30[2]);
    auVar39[3] = -(auVar40[3] == auVar30[3]);
    auVar39[4] = -(auVar40[4] == auVar30[4]);
    auVar39[5] = -(auVar40[5] == auVar30[5]);
    auVar39[6] = -(auVar40[6] == auVar30[6]);
    auVar39[7] = -(auVar40[7] == auVar30[7]);
    auVar39[8] = -(auVar40[8] == auVar30[0]);
    auVar39[9] = -(auVar40[9] == auVar30[1]);
    auVar39[10] = -(auVar40[10] == auVar30[2]);
    auVar39[0xb] = -(auVar40[0xb] == auVar30[3]);
    auVar39[0xc] = -(auVar40[0xc] == auVar30[4]);
    auVar39[0xd] = -(auVar40[0xd] == auVar30[5]);
    auVar39[0xe] = -(auVar40[0xe] == auVar30[6]);
    auVar39[0xf] = -(auVar40[0xf] == auVar30[7]);
    uVar21 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf;
    uVar26 = (uint)uVar21;
    while (uVar21 != 0) {
      uVar7 = 0;
      for (uVar8 = uVar26; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      lVar20 = (uVar7 + uVar17 & uVar23) * -0xd8;
      if (pfStack_c0 == *(float **)(lVar13 + -0xd8 + lVar20)) {
        lVar13 = lVar13 + lVar20;
        *(undefined4 *)(lVar13 + -0x88) = 0;
        *(undefined4 *)(lVar13 + -0x84) = uVar4;
        pfStack_108 = (float *)ppfStack_b8;
        pfStack_118 = pfStack_c8;
        pfStack_110 = pfStack_c0;
        if (*(float **)(lStack_148 + 0x10) <= pfVar24) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pfVar24,*(float **)(lStack_148 + 0x10),&UNK_1434d6f60);
        }
        pfVar19 = (float *)((longlong)pfVar24 * 0x10);
        pfVar6 = *(float **)((longlong)pfVar19 + *(longlong *)(lStack_148 + 8) + 8);
        if (*(int *)((longlong)pfVar19 + *(longlong *)(lStack_148 + 8)) != 1) {
          if (*pfVar6 != 1.4013e-45) goto LAB_1422f90b1;
          pfStack_c8 = *(float **)(pfVar6 + 2);
          lVar13 = *plStack_138;
          uVar16 = 1;
          pfVar19 = pfStack_c8;
          if ((lVar13 == 0) || (*(longlong *)(lVar13 + 0x30) == 0)) goto LAB_1422f90b3;
          pfStack_98 = pfStack_c8;
          uVar23 = pdb_1400af0a0(lVar13 + 0x38,&pfStack_c8);
          pfVar19 = *(float **)(lVar13 + 0x18);
          bVar12 = (byte)(uVar23 >> 0x39);
          auVar30 = ZEXT216(CONCAT11(bVar12,bVar12));
          auVar30 = pshuflw(auVar30,auVar30,0);
          lVar14 = 0;
          goto LAB_1422f9048;
        }
        uVar16 = *(undefined8 *)(pfVar6 + 4);
        lVar13 = pdb_140f3ecf0(*(undefined8 *)(pfVar6 + 2),uVar16);
        if (lVar13 == 0) {
LAB_1422f9185:
          pfStack_98 = (float *)0x1;
          pfStack_a0 = (float *)0x0;
          arg0 = (float **)0x0;
        }
        else {
          pdb_140f5fd10(&pfStack_c8,lVar13,uVar16);
          arg0 = ppfStack_b8;
          pfStack_98 = pfStack_c0;
          pfStack_a0 = pfStack_c8;
          if (SBORROW8(0,(longlong)pfStack_c8)) {
            if ((longlong)ppfStack_b8 < 0) {
              uVar16 = 0;
            }
            else {
              if (ppfStack_b8 == (float **)0x0) goto LAB_1422f9185;
              pdb_14007ee60();
              pfVar18 = (float *)pub_1406abab0((ulonglong)arg0,1);
              pfVar19 = pfStack_98;
              uVar16 = 1;
              if (pfVar18 != (float *)0x0) {
                pfStack_98 = pfVar18;
                pub_142e32760(pfVar18,pfVar19,arg0);
                pfStack_a0 = (float *)arg0;
                goto LAB_1422f919b;
              }
            }
            pdb_142dc7e2a(uVar16,arg0);
            goto LAB_1422f9276;
          }
        }
LAB_1422f919b:
        uVar16 = 0xf;
        pfStack_e0 = (float *)pdb_140dc6290(&UNK_1434d6f78);
        uStack_d0 = 0xffffffa0;
        pfStack_c8 = pfStack_f0;
        pfStack_c0 = pfStack_e8;
        uStack_d8 = uVar16;
        ppfStack_b8 = (float **)pfVar6;
        pdb_142991ac0(&pfStack_118,pfVar24,pfStack_98,arg0,&pfStack_e0,&pfStack_c8);
        pfVar6 = pfStack_a0;
        goto joined_r0x0001422f9136;
      }
      uVar21 = (ushort)(uVar26 - 1) & (ushort)uVar26;
      uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar21);
    }
    auVar33[0] = -(auVar40[0] == (byte)iVar9);
    auVar33[1] = -(auVar40[1] == bVar27);
    auVar33[2] = -(auVar40[2] == bVar49);
    auVar33[3] = -(auVar40[3] == bVar51);
    auVar33[4] = -(auVar40[4] == -1);
    auVar33[5] = -(auVar40[5] == -1);
    auVar33[6] = -(auVar40[6] == -1);
    auVar33[7] = -(auVar40[7] == -1);
    auVar33[8] = -(auVar40[8] == 0xff);
    auVar33[9] = -(auVar40[9] == 0xff);
    auVar33[10] = -(auVar40[10] == 0xff);
    auVar33[0xb] = -(auVar40[0xb] == 0xff);
    auVar33[0xc] = -(auVar40[0xc] == -1);
    auVar33[0xd] = -(auVar40[0xd] == -1);
    auVar33[0xe] = -(auVar40[0xe] == -1);
    auVar33[0xf] = -(auVar40[0xf] == -1);
    if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 || (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar33 >> 0x17,0) & 1) != 0) || (SUB161(auVar33 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar33 >> 0x27,0) & 1) != 0) || (SUB161(auVar33 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar33 >> 0x37,0) & 1) != 0) || (SUB161(auVar33 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar33 >> 0x47,0) & 1) != 0) || (SUB161(auVar33 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar33 >> 0x57,0) & 1) != 0) || (SUB161(auVar33 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar33 >> 0x67,0) & 1) != 0) || (SUB161(auVar33 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar33 >> 0x77,0) & 1) != 0) || auVar33[0xf] < '\0') goto LAB_1422f9260;
    uVar17 = uVar17 + lVar14 + 0x10;
    lVar14 = lVar14 + 0x10;
  } while( true );
LAB_1422f9048:
  uVar23 = uVar23 & *(ulonglong *)(lVar13 + 0x20);
  pbVar3 = (byte *)((longlong)pfVar19 + uVar23);
  auVar40[0] = -(*pbVar3 == auVar30[0]);
  auVar40[1] = -(pbVar3[1] == auVar30[1]);
  auVar40[2] = -(pbVar3[2] == auVar30[2]);
  auVar40[3] = -(pbVar3[3] == auVar30[3]);
  auVar40[4] = -(pbVar3[4] == auVar30[4]);
  auVar40[5] = -(pbVar3[5] == auVar30[5]);
  auVar40[6] = -(pbVar3[6] == auVar30[6]);
  auVar40[7] = -(pbVar3[7] == auVar30[7]);
  auVar40[8] = -(pbVar3[8] == auVar30[0]);
  auVar40[9] = -(pbVar3[9] == auVar30[1]);
  auVar40[10] = -(pbVar3[10] == auVar30[2]);
  auVar40[0xb] = -(pbVar3[0xb] == auVar30[3]);
  auVar40[0xc] = -(pbVar3[0xc] == auVar30[4]);
  auVar40[0xd] = -(pbVar3[0xd] == auVar30[5]);
  auVar40[0xe] = -(pbVar3[0xe] == auVar30[6]);
  auVar40[0xf] = -(pbVar3[0xf] == auVar30[7]);
  uVar21 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf;
  uVar26 = (uint)uVar21;
  while (uVar21 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar26; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    if (pfStack_98 ==
        *(float **)(pfVar19 + (uVar7 + uVar23 & *(ulonglong *)(lVar13 + 0x20)) * -2 + -2))
    goto LAB_1422f90b1;
    uVar21 = (ushort)(uVar26 - 1) & (ushort)uVar26;
    uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar21);
  }
  auVar34[0] = -(*pbVar3 == (byte)iVar9);
  auVar34[1] = -(pbVar3[1] == bVar27);
  auVar34[2] = -(pbVar3[2] == bVar49);
  auVar34[3] = -(pbVar3[3] == bVar51);
  auVar34[4] = -(pbVar3[4] == 0xff);
  auVar34[5] = -(pbVar3[5] == 0xff);
  auVar34[6] = -(pbVar3[6] == 0xff);
  auVar34[7] = -(pbVar3[7] == 0xff);
  auVar34[8] = -(pbVar3[8] == 0xff);
  auVar34[9] = -(pbVar3[9] == 0xff);
  auVar34[10] = -(pbVar3[10] == 0xff);
  auVar34[0xb] = -(pbVar3[0xb] == 0xff);
  auVar34[0xc] = -(pbVar3[0xc] == 0xff);
  auVar34[0xd] = -(pbVar3[0xd] == 0xff);
  auVar34[0xe] = -(pbVar3[0xe] == 0xff);
  auVar34[0xf] = -(pbVar3[0xf] == 0xff);
  if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar34 >> 0x17,0) & 1) != 0) || (SUB161(auVar34 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar34 >> 0x27,0) & 1) != 0) || (SUB161(auVar34 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar34 >> 0x37,0) & 1) != 0) || (SUB161(auVar34 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar34 >> 0x47,0) & 1) != 0) || (SUB161(auVar34 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar34 >> 0x57,0) & 1) != 0) || (SUB161(auVar34 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar34 >> 0x67,0) & 1) != 0) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') goto LAB_1422f9206;
  uVar23 = uVar23 + lVar14 + 0x10;
  lVar14 = lVar14 + 0x10;
  goto LAB_1422f9048;
LAB_1422f90b1:
  uVar16 = 0;
  goto LAB_1422f90b3;
LAB_1422f9206:
  uVar16 = 1;
  pfVar19 = pfStack_98;
LAB_1422f90b3:
  uStack_160 = uVar16;
  pfStack_158 = pfVar19;
  pdb_142328de0(&fStack_130,pfVar6 + 0x12);
  pfStack_98 = pfStack_128;
  pfStack_e0 = pfStack_128;
  uStack_d8 = uStack_120;
  uStack_d0 = 0xffffffa0;
  pfStack_c8 = (float *)&uStack_160;
  pfStack_c0 = pfStack_140;
  pfStack_b0 = pfStack_f0;
  pfStack_a8 = pfStack_e8;
  ppfStack_b8 = (float **)pfVar6;
  pdb_142992490(&pfStack_118,pfVar24,*(undefined8 *)(pfVar6 + 6),*(undefined8 *)(pfVar6 + 8),
                &pfStack_e0,&pfStack_c8);
  pfVar6 = (float *)CONCAT44(uStack_12c,fStack_130);
joined_r0x0001422f9136:
  if (pfVar6 != (float *)0x0) {
    pub_1406abac0((byte *)pfStack_98,(ulonglong)pfVar6,1);
  }
  pfStack_c8 = pfStack_118;
  bVar12 = pdb_141172f20(pfStack_118,pfStack_110,&pfStack_c8);
  if (bVar12 != 0) {
    pfStack_f8 = pfVar24;
  }
  arg0 = (float **)CONCAT71((int7)((ulonglong)pfStack_150 >> 8),(byte)pfStack_150 | bVar12);
  pfVar24 = pfVar2;
  if (pfVar2 == pfVar25) {
LAB_1422f9276:
    lVar13 = pdb_14116e5a0(param_1);
    if (((byte)arg0 & *(byte *)(lVar13 + 0x3a) & 1) != 0) {
      fVar31 = _DAT_142e37878 + *(float *)(lVar13 + 0x28);
      fVar29 = (float)pfStack_f8 * fVar31;
      fStack_130 = (*(float *)(lVar13 + 0x28) + fVar29) -
                   (fVar31 * (float)*(ulonglong *)(lVar13 + 0x18) + _DAT_142fa5b20);
      if (fStack_130 <= 0.0) {
        fStack_130 = 0.0;
      }
      if (fVar29 < fStack_130) {
        pfStack_e0 = (float *)CONCAT44(pfStack_e0._4_4_,fVar29);
        pfStack_c8 = &fStack_130;
        pfStack_c0 = (float *)pdb_140f705d0;
        ppfStack_b8 = &pfStack_e0;
        pfStack_b0 = (float *)pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_142fa5c78,&pfStack_c8,&UNK_142fa5d18);
      }
      if (fStack_130 <= *(float *)(lVar13 + 0x30)) {
        fStack_130 = *(float *)(lVar13 + 0x30);
      }
      if (fStack_130 <= fVar29) {
        fVar29 = fStack_130;
      }
      *(float *)(lVar13 + 0x30) = fVar29;
    }
    return lVar13;
  }
  goto LAB_1422f8dc9;
LAB_1422f8d3e:
  auVar38[0] = -(auVar40[0] == -1);
  auVar38[1] = -(auVar40[1] == -1);
  auVar38[2] = -(auVar40[2] == -1);
  auVar38[3] = -(auVar40[3] == -1);
  auVar38[4] = -(auVar40[4] == -1);
  auVar38[5] = -(auVar40[5] == -1);
  auVar38[6] = -(auVar40[6] == -1);
  auVar38[7] = -(auVar40[7] == -1);
  auVar38[8] = -(auVar40[8] == -1);
  auVar38[9] = -(auVar40[9] == -1);
  auVar38[10] = -(auVar40[10] == -1);
  auVar38[0xb] = -(auVar40[0xb] == -1);
  auVar38[0xc] = -(auVar40[0xc] == -1);
  auVar38[0xd] = -(auVar40[0xd] == -1);
  auVar38[0xe] = -(auVar40[0xe] == -1);
  auVar38[0xf] = -(auVar40[0xf] == -1);
  if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 || (SUB161(auVar38 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar38 >> 0x17,0) & 1) != 0) || (SUB161(auVar38 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar38 >> 0x27,0) & 1) != 0) || (SUB161(auVar38 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar38 >> 0x37,0) & 1) != 0) || (SUB161(auVar38 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar38 >> 0x47,0) & 1) != 0) || (SUB161(auVar38 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar38 >> 0x57,0) & 1) != 0) || (SUB161(auVar38 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar38 >> 0x67,0) & 1) != 0) || (SUB161(auVar38 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar38 >> 0x77,0) & 1) != 0) || auVar38[0xf] < '\0') goto LAB_1422f8d59;
  uVar23 = uVar23 + lVar20 + 0x10;
  lVar20 = lVar20 + 0x10;
LAB_1422f8cf4:
  uVar23 = uVar23 & *(ulonglong *)(lVar13 + 0x1b8);
  auVar40 = *(undefined1 (*) [16])(lVar14 + uVar23);
  auVar44[0] = -(auVar40[0] == auVar30[0]);
  auVar44[1] = -(auVar40[1] == auVar30[1]);
  auVar44[2] = -(auVar40[2] == auVar30[2]);
  auVar44[3] = -(auVar40[3] == auVar30[3]);
  auVar44[4] = -(auVar40[4] == auVar30[4]);
  auVar44[5] = -(auVar40[5] == auVar30[5]);
  auVar44[6] = -(auVar40[6] == auVar30[6]);
  auVar44[7] = -(auVar40[7] == auVar30[7]);
  auVar44[8] = -(auVar40[8] == auVar30[0]);
  auVar44[9] = -(auVar40[9] == auVar30[1]);
  auVar44[10] = -(auVar40[10] == auVar30[2]);
  auVar44[0xb] = -(auVar40[0xb] == auVar30[3]);
  auVar44[0xc] = -(auVar40[0xc] == auVar30[4]);
  auVar44[0xd] = -(auVar40[0xd] == auVar30[5]);
  auVar44[0xe] = -(auVar40[0xe] == auVar30[6]);
  auVar44[0xf] = -(auVar40[0xf] == auVar30[7]);
  uVar21 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf;
  uVar26 = (uint)uVar21;
  while( true ) {
    if (uVar21 == 0) goto LAB_1422f8d3e;
    uVar7 = 0;
    for (uVar8 = uVar26; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    lVar22 = (uVar7 + uVar23 & *(ulonglong *)(lVar13 + 0x1b8)) * -0xd8;
    if (*plVar1 == *(longlong *)(lVar14 + -0xd8 + lVar22)) break;
    uVar21 = (ushort)(uVar26 - 1) & (ushort)uVar26;
    uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar21);
  }
  pbVar3 = (byte *)(lVar14 + lVar22 + -5);
  *pbVar3 = *pbVar3 & 0x5f;
  if (pfVar24 < pfVar25) goto LAB_1422f8d8c;
code_r0x00014116e5a0:
  lVar13 = *param_1;
  if (*(longlong *)(lVar13 + 0x1c8) != 0) {
    uStack_50 = 0x14116e5ca;
    uVar23 = pdb_1400af0a0(lVar13 + 0x1d0,param_1 + 1);
    lVar14 = *(longlong *)(lVar13 + 0x1b0);
    bVar27 = (byte)(uVar23 >> 0x39);
    auVar30 = ZEXT216(CONCAT11(bVar27,bVar27));
    auVar30 = pshuflw(auVar30,auVar30,0);
    lVar20 = 0;
    while( true ) {
      uVar23 = uVar23 & *(ulonglong *)(lVar13 + 0x1b8);
      auVar40 = *(undefined1 (*) [16])(lVar14 + uVar23);
      auVar41[0] = -(auVar40[0] == auVar30[0]);
      auVar41[1] = -(auVar40[1] == auVar30[1]);
      auVar41[2] = -(auVar40[2] == auVar30[2]);
      auVar41[3] = -(auVar40[3] == auVar30[3]);
      auVar41[4] = -(auVar40[4] == auVar30[4]);
      auVar41[5] = -(auVar40[5] == auVar30[5]);
      auVar41[6] = -(auVar40[6] == auVar30[6]);
      auVar41[7] = -(auVar40[7] == auVar30[7]);
      auVar41[8] = -(auVar40[8] == auVar30[0]);
      auVar41[9] = -(auVar40[9] == auVar30[1]);
      auVar41[10] = -(auVar40[10] == auVar30[2]);
      auVar41[0xb] = -(auVar40[0xb] == auVar30[3]);
      auVar41[0xc] = -(auVar40[0xc] == auVar30[4]);
      auVar41[0xd] = -(auVar40[0xd] == auVar30[5]);
      auVar41[0xe] = -(auVar40[0xe] == auVar30[6]);
      auVar41[0xf] = -(auVar40[0xf] == auVar30[7]);
      uVar21 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe | (ushort)(auVar41[0xf] >> 7) << 0xf;
      uVar26 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar26; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        lVar22 = (uVar7 + uVar23 & *(ulonglong *)(lVar13 + 0x1b8)) * -0xd8;
        if (param_1[1] == *(longlong *)(lVar14 + -0xd8 + lVar22)) {
          lVar14 = lVar14 + lVar22;
          if (*(longlong *)(lVar14 + -0x38) == 0) goto LAB_14116e6e2;
          uStack_50 = 0x14116e67e;
          lVar13 = (**(code **)(*(longlong *)(lVar14 + -0x30) + 0x28))();
          uStack_50 = 0x14116e68f;
          (**(code **)(lVar14 + 0x18))(&stack0xffffffffffffffd8,lVar13);
          auVar30[0] = -((char)unaff_R12 == DAT_14329bc50);
          auVar30[1] = -((char)((ulonglong)unaff_R12 >> 8) == UNK_14329bc51);
          auVar30[2] = -((char)((ulonglong)unaff_R12 >> 0x10) == UNK_14329bc52);
          auVar30[3] = -((char)((ulonglong)unaff_R12 >> 0x18) == UNK_14329bc53);
          auVar30[4] = -((char)((ulonglong)unaff_R12 >> 0x20) == UNK_14329bc54);
          auVar30[5] = -((char)((ulonglong)unaff_R12 >> 0x28) == UNK_14329bc55);
          auVar30[6] = -((char)((ulonglong)unaff_R12 >> 0x30) == UNK_14329bc56);
          auVar30[7] = -((char)((ulonglong)unaff_R12 >> 0x38) == UNK_14329bc57);
          auVar30[8] = -((char)unaff_R13 == UNK_14329bc58);
          auVar30[9] = -((char)((ulonglong)unaff_R13 >> 8) == UNK_14329bc59);
          auVar30[10] = -((char)((ulonglong)unaff_R13 >> 0x10) == UNK_14329bc5a);
          auVar30[0xb] = -((char)((ulonglong)unaff_R13 >> 0x18) == UNK_14329bc5b);
          auVar30[0xc] = -((char)((ulonglong)unaff_R13 >> 0x20) == UNK_14329bc5c);
          auVar30[0xd] = -((char)((ulonglong)unaff_R13 >> 0x28) == UNK_14329bc5d);
          auVar30[0xe] = -((char)((ulonglong)unaff_R13 >> 0x30) == UNK_14329bc5e);
          auVar30[0xf] = -((char)((ulonglong)unaff_R13 >> 0x38) == UNK_14329bc5f);
          if ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar30[0xf] >> 7) << 0xf) == 0xffff) {
            return lVar13;
          }
          goto LAB_14116e6ca;
        }
        uVar21 = (ushort)(uVar26 - 1) & (ushort)uVar26;
        uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar21);
      }
      auVar35[0] = -(auVar40[0] == -1);
      auVar35[1] = -(auVar40[1] == -1);
      auVar35[2] = -(auVar40[2] == -1);
      auVar35[3] = -(auVar40[3] == -1);
      auVar35[4] = -(auVar40[4] == -1);
      auVar35[5] = -(auVar40[5] == -1);
      auVar35[6] = -(auVar40[6] == -1);
      auVar35[7] = -(auVar40[7] == -1);
      auVar35[8] = -(auVar40[8] == -1);
      auVar35[9] = -(auVar40[9] == -1);
      auVar35[10] = -(auVar40[10] == -1);
      auVar35[0xb] = -(auVar40[0xb] == -1);
      auVar35[0xc] = -(auVar40[0xc] == -1);
      auVar35[0xd] = -(auVar40[0xd] == -1);
      auVar35[0xe] = -(auVar40[0xe] == -1);
      auVar35[0xf] = -(auVar40[0xf] == -1);
      if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar35 >> 0x17,0) & 1) != 0) || (SUB161(auVar35 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar35 >> 0x27,0) & 1) != 0) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar35 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar35 >> 0x3f,0) & 1) != 0) || (SUB161(auVar35 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar35 >> 0x4f,0) & 1) != 0) || (SUB161(auVar35 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar35 >> 0x5f,0) & 1) != 0) || (SUB161(auVar35 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar35 >> 0x6f,0) & 1) != 0) || (SUB161(auVar35 >> 0x77,0) & 1) != 0) ||
          auVar35[0xf] < '\0') break;
      uVar23 = uVar23 + lVar20 + 0x10;
      lVar20 = lVar20 + 0x10;
    }
  }
  uStack_50 = 0x14116e6ca;
  pdb_142dc8110(&UNK_14329c448,0xb,&UNK_14329c510);
LAB_14116e6ca:
  uStack_50 = 0x14116e6e2;
  pdb_142dc8110(&UNK_14329c4d8,8,&UNK_14329c528);
LAB_14116e6e2:
                    /* WARNING: Subroutine does not return */
  uStack_50 = 0x14116e6fa;
  pdb_142dc83d0(&UNK_14329c470,0x97,&UNK_14329c5e0);
}

