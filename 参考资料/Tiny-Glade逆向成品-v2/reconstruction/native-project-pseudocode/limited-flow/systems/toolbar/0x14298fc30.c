// VA 0x14298fc30, PDB extent 4996 bytes
// toolbar::photomode::photomode_buttons::photomode_buttons
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/photomode/photomode_buttons.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000142990ab7) overlaps instruction at (ram,0x000142990ab6)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::photomode::photomode_buttons::photomode_buttons
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/photomode/photomode_buttons.rs
   Extent: 4996 */

void pdb_14298fc30(undefined8 *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,undefined8 *param_6,undefined8 *param_7,longlong *param_8,
                  ulonglong *param_9,undefined8 *param_10,longlong *param_11,longlong param_12,
                  undefined8 *param_13,undefined8 *param_14,longlong *param_15)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  char cVar7;
  byte bVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  uint *puVar14;
  undefined7 uVar17;
  byte *pbVar15;
  char *pcVar16;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  int *piVar22;
  ulonglong uVar23;
  ulonglong *puVar24;
  ushort uVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  byte *pbVar29;
  undefined *puVar30;
  ulonglong *puVar31;
  ulonglong *puVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong *puVar35;
  longlong lVar36;
  ulonglong *puVar37;
  ulonglong *puVar38;
  ulonglong *puVar39;
  ulonglong *puVar40;
  bool bVar41;
  float10 in_ST0;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined1 auStack_300 [40];
  longlong lStack_2d8;
  longlong lStack_2d0;
  longlong lStack_2c8;
  longlong lStack_2c0;
  longlong *plStack_2b8;
  byte *pbStack_2b0;
  undefined8 uStack_2a8;
  longlong alStack_2a0 [3];
  longlong lStack_288;
  byte *pbStack_280;
  longlong lStack_270;
  undefined4 *puStack_268;
  longlong lStack_260;
  undefined4 *puStack_258;
  undefined4 *puStack_250;
  undefined4 *puStack_248;
  undefined4 *puStack_240;
  undefined8 uStack_238;
  undefined4 *puStack_230;
  undefined4 *puStack_228;
  longlong lStack_220;
  byte *pbStack_218;
  byte *pbStack_210;
  longlong lStack_208;
  undefined8 uStack_200;
  byte *pbStack_170;
  undefined4 *puStack_168;
  char *pcStack_160;
  undefined4 *puStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  longlong lStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 *puStack_110;
  undefined8 uStack_108;
  char *pcStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined *puStack_d8;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  longlong lStack_c0;
  byte *pbStack_b8;
  ulonglong *puStack_b0;
  undefined4 uStack_a4;
  longlong lStack_a0;
  ulonglong uStack_98;
  longlong *plStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  puVar28 = &uStack_2a8;
  uStack_80 = 0xfffffffffffffffe;
  lStack_a0 = param_11[4];
  lStack_2d8 = param_11[8];
  lStack_2d0 = param_11[9];
  lStack_2c8 = param_11[10];
  lStack_2c0 = param_11[0xb];
  if (*(char *)*param_1 != '\x10') {
    return;
  }
  pcStack_100 = (char *)*param_14;
  puStack_110 = (undefined4 *)param_11[6];
  uStack_cc = *(undefined4 *)((longlong)param_11 + 0x3c);
  if (*(char *)*param_14 != '\0') {
    *(undefined4 *)param_15[2] = *(undefined4 *)((longlong)param_15 + 0x1c);
    param_15 = (longlong *)*param_15;
    pbStack_218 = &UNK_14360951f;
    pbStack_210 = (byte *)0x18;
    uVar9 = pdb_140bbbcb0(&pbStack_218);
    pbVar29 = (byte *)(uVar9 ^ 0xb1695320004fb443);
    pbVar15 = pbVar29;
    lVar10 = pdb_14072c2d0(param_15);
    *(undefined1 *)(lVar10 + 0x5e) = 0;
    *(undefined1 *)(lVar10 + 0xcb) = 1;
    if (((ulonglong)pbVar15 & 1) == 0) {
      lVar10 = param_15[2];
      if (lVar10 == *param_15) {
        pdb_142d7f080(param_15);
      }
      lVar36 = param_15[1];
      *(undefined4 *)(lVar36 + lVar10 * 0x38) = 1;
      *(byte **)(lVar36 + 0x30 + lVar10 * 0x38) = pbVar29;
      param_15[2] = lVar10 + 1;
    }
    lVar10 = _UNK_14329c338;
    uVar12 = _DAT_14329c330;
    uStack_2a8 = 0;
    pbStack_218 = (byte *)0x0;
    pbStack_210 = (byte *)_DAT_14329c330;
    lStack_208 = _UNK_14329c338;
    plStack_2b8 = param_15;
    pbStack_2b0 = pbVar29;
    pbStack_210 = (byte *)pdb_1400affa0(&pbStack_218);
    pbStack_218 = pbVar29;
    uVar11 = pdb_1400b0130(&pbStack_218);
    pdb_14072caa0(&lStack_288,&plStack_2b8,uVar11);
    pcStack_160 = (char *)*param_13;
    if (*pcStack_160 == '\0') {
      puVar30 = &UNK_143609537;
      uVar11 = 0x18;
    }
    else {
      if (*pcStack_160 != '\x01') goto LAB_142990f27;
      puVar30 = &UNK_14360954f;
      uVar11 = 0x12;
    }
    pbStack_218 = (byte *)0x0;
    pbStack_210 = (byte *)uVar12;
    lStack_208 = lVar10;
    pbStack_210 = (byte *)pdb_1400affa0(&pbStack_218);
    pbStack_218 = pbStack_280;
    uVar12 = pdb_1400b0130(&pbStack_218);
    pdb_14072caa0(&pbStack_218,&lStack_288,uVar12);
    pdb_141174160(auStack_300,&pbStack_218,puVar30,uVar11,0);
    pdb_141186520(alStack_2a0,auStack_300,&UNK_143609561,6);
    uVar11 = 2;
    uVar12 = pdb_140dc6290(&UNK_143609567,2);
    pdb_1407339e0(&pbStack_218,alStack_2a0,uVar12,uVar11);
    pdb_140725f50(&pbStack_150,&pbStack_218,0x15);
    pbVar15 = pbStack_150;
    if (*(longlong *)(pbStack_150 + 0x1c8) != 0) {
      uVar13 = pdb_1400af0a0(pbStack_150 + 0x1d0,&pbStack_148);
      lVar10 = *(longlong *)(pbVar15 + 0x1b0);
      uVar9 = *(ulonglong *)(pbVar15 + 0x1b8);
      bVar8 = (byte)(uVar13 >> 0x39);
      auVar42 = ZEXT216(CONCAT11(bVar8,bVar8));
      auVar42 = pshuflw(auVar42,auVar42,0);
      lVar36 = 0;
      while( true ) {
        uVar13 = uVar13 & uVar9;
        pcVar16 = (char *)(lVar10 + uVar13);
        auVar44[0] = -(*pcVar16 == auVar42[0]);
        auVar44[1] = -(pcVar16[1] == auVar42[1]);
        auVar44[2] = -(pcVar16[2] == auVar42[2]);
        auVar44[3] = -(pcVar16[3] == auVar42[3]);
        auVar44[4] = -(pcVar16[4] == auVar42[4]);
        auVar44[5] = -(pcVar16[5] == auVar42[5]);
        auVar44[6] = -(pcVar16[6] == auVar42[6]);
        auVar44[7] = -(pcVar16[7] == auVar42[7]);
        auVar44[8] = -(pcVar16[8] == auVar42[0]);
        auVar44[9] = -(pcVar16[9] == auVar42[1]);
        auVar44[10] = -(pcVar16[10] == auVar42[2]);
        auVar44[0xb] = -(pcVar16[0xb] == auVar42[3]);
        auVar44[0xc] = -(pcVar16[0xc] == auVar42[4]);
        auVar44[0xd] = -(pcVar16[0xd] == auVar42[5]);
        auVar44[0xe] = -(pcVar16[0xe] == auVar42[6]);
        auVar44[0xf] = -(pcVar16[0xf] == auVar42[7]);
        uVar25 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf
        ;
        uVar18 = (uint)uVar25;
        while (uVar25 != 0) {
          uVar2 = 0;
          for (uVar3 = uVar18; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          lVar26 = (uVar2 + uVar13 & uVar9) * -0xd8;
          if (pbStack_148 == *(byte **)(lVar10 + -0xd8 + lVar26)) {
            if ((*(byte *)(lVar10 + lVar26 + -6) & 0x30) != 0) {
              *(undefined4 *)param_14[2] = *(undefined4 *)((longlong)param_14 + 0x1c);
              *pcStack_100 = '\0';
            }
            goto LAB_14298ffb9;
          }
          uVar25 = (ushort)(uVar18 - 1) & (ushort)uVar18;
          uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar25);
        }
        auVar43[0] = -(*pcVar16 == -1);
        auVar43[1] = -(pcVar16[1] == -1);
        auVar43[2] = -(pcVar16[2] == -1);
        auVar43[3] = -(pcVar16[3] == -1);
        auVar43[4] = -(pcVar16[4] == -1);
        auVar43[5] = -(pcVar16[5] == -1);
        auVar43[6] = -(pcVar16[6] == -1);
        auVar43[7] = -(pcVar16[7] == -1);
        auVar43[8] = -(pcVar16[8] == -1);
        auVar43[9] = -(pcVar16[9] == -1);
        auVar43[10] = -(pcVar16[10] == -1);
        auVar43[0xb] = -(pcVar16[0xb] == -1);
        auVar43[0xc] = -(pcVar16[0xc] == -1);
        auVar43[0xd] = -(pcVar16[0xd] == -1);
        auVar43[0xe] = -(pcVar16[0xe] == -1);
        auVar43[0xf] = -(pcVar16[0xf] == -1);
        if ((((((((((((((((SUB161(auVar43 >> 7,0) & 1) != 0 || (SUB161(auVar43 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar43 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar43 >> 0x1f,0) & 1) != 0) || (SUB161(auVar43 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar43 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar43 >> 0x37,0) & 1) != 0) || (SUB161(auVar43 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar43 >> 0x47,0) & 1) != 0) || (SUB161(auVar43 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar43 >> 0x57,0) & 1) != 0) || (SUB161(auVar43 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar43 >> 0x67,0) & 1) != 0) || (SUB161(auVar43 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar43 >> 0x77,0) & 1) != 0) || auVar43[0xf] < '\0') break;
        uVar13 = uVar13 + lVar36 + 0x10;
        lVar36 = lVar36 + 0x10;
      }
    }
    pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
LAB_142990f27:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143609593,0x28,&UNK_1436095c0);
  }
  pcStack_160 = (char *)*param_13;
LAB_14298ffb9:
  puVar32 = (ulonglong *)*param_3;
  lVar10 = param_3[1];
  uVar9 = *puVar32;
  uVar27 = 0;
  uVar13 = uVar9 - *(ulonglong *)(lVar10 + 0x18);
  if (uVar9 < *(ulonglong *)(lVar10 + 0x18)) {
    uVar13 = uVar27;
  }
  uVar33 = uVar9 - *(ulonglong *)(lVar10 + 0x38);
  if (uVar9 < *(ulonglong *)(lVar10 + 0x38)) {
    uVar33 = uVar27;
  }
  puVar39 = (ulonglong *)(uVar13 * 0x10 + *(longlong *)(lVar10 + 8));
  uVar9 = *(ulonglong *)(lVar10 + 0x10) - uVar13;
  if (*(ulonglong *)(lVar10 + 0x10) < uVar13) {
    puVar39 = (ulonglong *)0x8;
    uVar9 = uVar27;
  }
  puVar37 = (ulonglong *)(uVar33 * 0x10 + *(longlong *)(lVar10 + 0x28));
  uVar13 = *(ulonglong *)(lVar10 + 0x30) - uVar33;
  if (*(ulonglong *)(lVar10 + 0x30) < uVar33) {
    puVar37 = (ulonglong *)0x8;
    uVar13 = uVar27;
  }
  *puVar32 = (*(longlong *)(lVar10 + 0x40) - uVar13) - uVar9;
  uVar12 = _DAT_143607fc0;
  lStack_c0 = *param_11;
  plStack_90 = *(longlong **)(param_12 + 8);
  if (*(longlong **)(param_12 + 8) == (longlong *)0x0) {
    plStack_90 = *(longlong **)(param_12 + 0x10);
  }
  puStack_b0 = puVar39 + uVar9 * 2;
  uStack_c8 = puVar37 + uVar13 * 2;
  lVar10 = *param_2;
  lVar36 = param_2[1];
  uStack_a4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_12c = *(undefined4 *)((longlong)param_8 + 0x1c);
  lStack_270 = *param_8;
  puStack_268 = (undefined4 *)param_8[2];
  uStack_128 = *(undefined4 *)((longlong)param_4 + 0x1c);
  lStack_260 = *param_4;
  puStack_258 = (undefined4 *)param_4[2];
  uStack_124 = *(undefined4 *)((longlong)param_6 + 0x1c);
  uStack_108 = *param_6;
  puStack_250 = (undefined4 *)param_6[2];
  uStack_120 = *(undefined4 *)((longlong)param_5 + 0x1c);
  puStack_248 = (undefined4 *)param_5[2];
  uStack_e0 = *(undefined4 *)((longlong)param_10 + 0x1c);
  puStack_d8 = (undefined *)*param_10;
  puStack_168 = (undefined4 *)param_10[2];
  uVar9 = *param_9;
  puStack_240 = (undefined4 *)param_9[2];
  uStack_11c = *(undefined4 *)((longlong)param_9 + 0x1c);
  uStack_118 = *(undefined4 *)((longlong)param_7 + 0x1c);
  uStack_238 = *param_7;
  puStack_230 = (undefined4 *)param_7[2];
  uStack_dc = *(undefined4 *)((longlong)param_14 + 0x1c);
  puStack_158 = (undefined4 *)param_14[2];
  puStack_228 = (undefined4 *)param_11[2];
  uStack_114 = *(undefined4 *)((longlong)param_11 + 0x1c);
  lStack_f8 = *param_5;
  pbStack_170 = (byte *)(*param_5 + 9);
  lStack_220 = *param_11 + 0x20;
  lStack_f0 = lStack_a0 + 0x20;
  uStack_98 = uVar9;
LAB_1429901e4:
  do {
    do {
      do {
        do {
          if ((puVar39 == (ulonglong *)0x0) || (puVar39 == puStack_b0)) {
            if ((puVar37 == (ulonglong *)0x0) || (puVar37 == uStack_c8)) {
              puVar31 = *(ulonglong **)(lVar10 + 0xf8);
              puVar32 = (ulonglong *)((longlong)puVar31 + *(longlong *)(lVar10 + 0x100) * 4);
              if (*(char *)(lVar10 + 0x108) != '\0') {
                puVar38 = (ulonglong *)0x0;
                lVar26 = 2;
                uVar13 = 0;
                puVar35 = (ulonglong *)0x0;
                uStack_c8 = (ulonglong *)((ulonglong)uStack_c8._4_4_ << 0x20);
                goto LAB_142990a03;
              }
              puVar38 = (ulonglong *)0x0;
              uStack_c8 = (ulonglong *)((ulonglong)uStack_c8._4_4_ << 0x20);
              lVar26 = 8;
              puVar35 = (ulonglong *)0x0;
              uVar13 = 0;
              goto LAB_142990c46;
            }
            puVar38 = puVar37 + 2;
            puVar40 = (ulonglong *)0x0;
            puVar39 = puVar37;
          }
          else {
            puVar40 = puVar39 + 2;
            puVar38 = puVar37;
          }
          *puVar32 = *puVar32 + 1;
          uVar27 = *puVar39;
          piVar22 = (int *)((ulonglong)~(uint)uVar27 * 0x18 + *(longlong *)(lVar36 + 8));
          puVar37 = puVar38;
          puVar39 = puVar40;
        } while ((*(ulonglong *)(lVar36 + 0x10) <= (ulonglong)~(uint)uVar27) ||
                (piVar22[4] != (int)(uVar27 >> 0x20)));
        uVar33 = *(ulonglong *)(piVar22 + 2);
      } while (*piVar22 == 0);
      uVar23 = uVar33 >> 0x20;
      uVar34 = uVar33 & 0xffffffff;
    } while ((*(ulonglong *)(lVar10 + 0x38) <= uVar34) ||
            (uVar13 = uVar33 >> 6 & 0x3ffffff,
            (*(ulonglong *)(*(longlong *)(lVar10 + 0x28) + uVar13 * 8) >> (uVar33 & 0x3f) & 1) == 0)
            );
    if (uVar34 < *(ulonglong *)(lVar36 + 0x108)) {
      lVar19 = uVar34 * 0xa0 + *(longlong *)(lVar36 + 0x100);
    }
    else {
      lVar19 = 0;
    }
    puVar35 = (ulonglong *)(uVar23 * 9);
    if (*(ulonglong *)(lVar10 + 0x110) <
        *(ulonglong *)(*(longlong *)(lVar36 + 0x1a0) + 0x40 + uVar23 * 0x48)) {
      lVar26 = *(longlong *)(lVar36 + 0x1a0) + uVar23 * 0x48;
      puVar35 = *(ulonglong **)(lVar26 + 0x38);
      if (puVar35[*(ulonglong *)(lVar10 + 0x110)] == 0) goto LAB_142990300;
      lVar26 = *(longlong *)
                (*(longlong *)(lVar26 + 0x18) + 0x10 +
                ~puVar35[*(ulonglong *)(lVar10 + 0x110)] * 0x30);
      puVar24 = *(ulonglong **)(lVar10 + 0x120);
      if (puVar24 < *(ulonglong **)(lVar19 + 0x88)) goto LAB_142990313;
      break;
    }
LAB_142990300:
    lVar26 = 0;
    puVar24 = *(ulonglong **)(lVar10 + 0x120);
    if (*(ulonglong **)(lVar19 + 0x88) <= puVar24) break;
LAB_142990313:
    lVar20 = (longlong)puVar24 * 8;
    puVar24 = puVar40;
  } while (*(longlong *)(*(longlong *)(lVar19 + 0x80) + lVar20) != 0);
  bVar8 = *(byte *)(lVar26 + (ulonglong)(uint)~piVar22[1]);
  puVar31 = (ulonglong *)(ulonglong)bVar8;
  bVar4 = bVar8 - 4;
  if (bVar8 < 4) {
    bVar4 = 2;
  }
  puVar30 = &UNK_1436095d8;
  puVar14 = (uint *)(&UNK_1436095d8 + *(int *)(&UNK_1436095d8 + (ulonglong)bVar4 * 4));
  bVar5 = (byte)puVar14;
  iVar21 = (int)puVar14;
  uVar17 = (undefined7)((ulonglong)puVar14 >> 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar4) {
  case 0:
    if ((*pcStack_160 == '\0') || (*pcStack_160 == '\x01')) {
      *puStack_158 = uStack_dc;
      *pcStack_100 = '\x01';
      break;
    }
    puVar30 = &UNK_143609570;
    pdb_140314c70(&lStack_2d8,&UNK_143609570);
    uVar11 = pdb_140dc7520();
    pdb_140f3e9e0(&pbStack_150,uVar11,puVar30,&UNK_143609588,0xb);
    uStack_81 = 1;
    pbStack_b8 = pbStack_148;
    cVar7 = pdb_140f3ea80(pbStack_148,lStack_140);
    if (cVar7 != '\0') {
      uStack_200 = CONCAT71(uStack_137,uStack_138);
      lStack_208 = lStack_140;
      pbStack_218 = pbStack_150;
      pbStack_210 = pbStack_148;
      uStack_81 = 0;
      alStack_2a0[0] = pdb_1423218c0(&pbStack_218);
      uVar9 = uStack_98;
      if (alStack_2a0[0] != 0) {
        uStack_81 = 0;
        pdb_1404b38e0(alStack_2a0);
        uVar9 = uStack_98;
      }
      break;
    }
    uStack_81 = 1;
    pdb_140dbd540(&pbStack_218,&pbStack_150);
    uStack_200 = CONCAT71(uStack_200._1_7_,uStack_138);
    uStack_81 = 1;
    lStack_288 = pdb_142b5a6a0(&pbStack_218);
    if (lStack_288 == 0) {
      uStack_200 = CONCAT71(uStack_137,uStack_138);
      lStack_208 = lStack_140;
      pbStack_218 = pbStack_150;
      pbStack_210 = pbStack_148;
      uStack_81 = 0;
      alStack_2a0[0] = pdb_1423218c0(&pbStack_218);
      uVar9 = uStack_98;
      if (alStack_2a0[0] != 0) {
        uStack_81 = 0;
        pdb_1404b38e0(alStack_2a0);
        uVar9 = uStack_98;
      }
      break;
    }
    uStack_81 = 1;
    pdb_1404b38e0(&lStack_288);
    uVar9 = uStack_98;
    if (pbStack_150 != (byte *)0x0) {
      pub_1406abac0(pbStack_b8,(ulonglong)pbStack_150,1);
      uVar9 = uStack_98;
    }
    goto code_r0x0001429907a7;
  case 1:
    if (*_DAT_143ca4500 == '\0') {
      uVar6 = pdb_140b6adb0(lStack_f8 + 9);
    }
    else {
      uVar6 = pdb_140b6adc0(lStack_f8 + 9);
    }
    *puStack_110 = uStack_cc;
    lVar26 = *(longlong *)(lStack_a0 + 0x30);
    uVar11 = *(undefined8 *)(lStack_a0 + 0x40);
    if (lVar26 == *(longlong *)(lStack_a0 + 0x20)) {
      pbStack_b8 = (byte *)CONCAT71(pbStack_b8._1_7_,uVar6);
      uStack_e8 = *(undefined8 *)(lStack_a0 + 0x40);
      pdb_142d7e980(lStack_f0);
      uVar11 = uStack_e8;
      uVar6 = pbStack_b8._0_1_;
    }
    lVar19 = *(longlong *)(lStack_a0 + 0x28);
    *(undefined8 *)(lVar19 + lVar26 * 0x10) = uVar11;
    *(undefined1 *)(lVar19 + 8 + lVar26 * 0x10) = uVar6;
    *(longlong *)(lStack_a0 + 0x30) = lVar26 + 1;
    *(longlong *)(lStack_a0 + 0x40) = *(longlong *)(lStack_a0 + 0x40) + 1;
    uVar9 = uStack_98;
    break;
  case 2:
    *puStack_110 = uStack_cc;
    pbVar15 = *(byte **)(lStack_a0 + 0x30);
    uVar11 = *(undefined8 *)(lStack_a0 + 0x40);
    if (pbVar15 == *(byte **)(lStack_a0 + 0x20)) {
      uStack_e8 = *(undefined8 *)(lStack_a0 + 0x40);
      pbStack_b8 = pbVar15;
      pdb_142d7e980(lStack_f0);
      pbVar15 = pbStack_b8;
      uVar11 = uStack_e8;
      uVar9 = uStack_98;
    }
    lVar26 = *(longlong *)(lStack_a0 + 0x28);
    *(undefined8 *)(lVar26 + (longlong)pbVar15 * 0x10) = uVar11;
    *(byte *)(lVar26 + 8 + (longlong)pbVar15 * 0x10) = bVar8;
    *(byte **)(lStack_a0 + 0x30) = pbVar15 + 1;
    goto code_r0x000142990643;
  case 3:
  case 4:
  case 6:
    break;
  case 5:
    *puStack_110 = uStack_cc;
    lVar26 = *(longlong *)(lStack_a0 + 0x30);
    pbVar15 = *(byte **)(lStack_a0 + 0x40);
    if (lVar26 == *(longlong *)(lStack_a0 + 0x20)) {
      pbStack_b8 = *(byte **)(lStack_a0 + 0x40);
      pdb_142d7e980(lStack_f0);
      pbVar15 = pbStack_b8;
      uVar9 = uStack_98;
    }
    lVar19 = *(longlong *)(lStack_a0 + 0x28);
    *(byte **)(lVar19 + lVar26 * 0x10) = pbVar15;
    *(undefined1 *)(lVar19 + 8 + lVar26 * 0x10) = 4;
    *(longlong *)(lStack_a0 + 0x30) = lVar26 + 1;
code_r0x000142990643:
    *(longlong *)(lStack_a0 + 0x40) = *(longlong *)(lStack_a0 + 0x40) + 1;
    break;
  case 7:
    *puStack_230 = uStack_118;
    pbStack_210 = (byte *)((ulonglong)pbStack_210 & 0xffffffffffffff00);
    pbStack_218 = (byte *)0xb;
    pdb_140a003a0(uStack_238,&pbStack_218);
    uVar9 = uStack_98;
    break;
  case 8:
    cVar7 = pdb_14093a8d0(uVar9);
    *puStack_240 = uStack_11c;
    if (cVar7 == '\0') {
      pdb_14093a840(uVar9,CONCAT71((uint7)(uint3)((uint)uStack_11c >> 8),1),0);
    }
    else {
      pdb_14093a760();
    }
    break;
  case 9:
    *puStack_168 = uStack_e0;
    pdb_1409aa280(&pbStack_218,puStack_d8);
    lVar26 = lStack_208;
    for (pbVar15 = pbStack_218; uVar9 = uStack_98, pbVar15 != pbStack_210; pbVar15 = pbVar15 + 0x40)
    {
      if ((lVar26 != 0) && (pbVar15 != (byte *)0x0)) {
        pbVar15[0x3c] = pbVar15[0x3c] ^ 1;
      }
      lVar26 = lVar26 + 1;
    }
    break;
  case 10:
    *puStack_168 = uStack_e0;
    pdb_1409aa280(&pbStack_218,puStack_d8);
    lVar26 = lStack_208;
    for (pbVar15 = pbStack_218; uVar9 = uStack_98, pbVar15 != pbStack_210; pbVar15 = pbVar15 + 0x40)
    {
      if ((lVar26 != 0) && (pbVar15 != (byte *)0x0)) {
        pbVar15[0x3d] = pbVar15[0x3d] ^ 1;
      }
      lVar26 = lVar26 + 1;
    }
    break;
  case 0xb:
    *puStack_248 = uStack_120;
    *(byte *)(lStack_f8 + 0xd) = *(byte *)(lStack_f8 + 0xd) ^ 1;
    break;
  case 0xc:
    *puStack_250 = uStack_124;
    puVar14 = (uint *)pdb_140a368d0(uStack_108);
    iVar21 = *puVar14 - 2;
    uVar18 = 2;
    if (*puVar14 < 2) {
      iVar21 = 2;
    }
    if (iVar21 != 0) {
      if (iVar21 == 1) {
        unaff_XMM7_Da = (undefined4)*(undefined8 *)(puVar14 + 1);
        unaff_XMM7_Db = (undefined4)((ulonglong)*(undefined8 *)(puVar14 + 1) >> 0x20);
        uVar18 = 0;
      }
      else {
        unaff_XMM8_Da = (undefined4)*(undefined8 *)(puVar14 + 4);
        unaff_XMM8_Db = (undefined4)((ulonglong)*(undefined8 *)(puVar14 + 4) >> 0x20);
        uVar18 = 3;
      }
    }
    *puVar14 = uVar18;
    *(ulonglong *)(puVar14 + 1) = CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
    *(ulonglong *)(puVar14 + 4) = CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
    uVar9 = uStack_98;
    break;
  case 0xd:
    pdb_140b4b6a0(&pbStack_218);
    *puStack_228 = uStack_114;
    lVar26 = *(longlong *)(lStack_c0 + 0x30);
    pbVar15 = *(byte **)(lStack_c0 + 0x40);
    if (lVar26 == *(longlong *)(lStack_c0 + 0x20)) {
      pbStack_b8 = *(byte **)(lStack_c0 + 0x40);
      pdb_142d7e6e0(lStack_220);
      pbVar15 = pbStack_b8;
    }
    lVar19 = *(longlong *)(lStack_c0 + 0x28);
    lVar20 = lVar26 * 0x20;
    *(longlong *)(lVar19 + 0x10 + lVar20) = lStack_208;
    *(ulonglong *)(lVar19 + lVar20) = (ulonglong)pbStack_218;
    ((ulonglong *)(lVar19 + lVar20))[1] = (ulonglong)pbStack_210;
    *(byte **)(lVar19 + 0x18 + lVar20) = pbVar15;
    *(longlong *)(lStack_c0 + 0x30) = lVar26 + 1;
    *(longlong *)(lStack_c0 + 0x40) = *(longlong *)(lStack_c0 + 0x40) + 1;
    *puStack_268 = uStack_12c;
    *(undefined1 *)(lStack_270 + 0xd4) = 0;
    *puStack_258 = uStack_128;
    *(undefined1 *)(lStack_260 + 1) = 0;
    uVar9 = uStack_98;
    break;
  case 0xe:
    uVar27 = CONCAT71(uVar17,bVar5 + 0x39);
    goto LAB_142990d49;
  default:
    uVar27 = uStack_98 & 0xffffffff;
    goto code_r0x000142990c14;
  case 0x14:
    *puVar14 = *puVar14 + iVar21;
    cRam0000000650e2ecbd = cRam0000000650e2ecbd + -0x28;
    *(byte *)puVar24 = (byte)*puVar24 | bVar5;
    *(byte *)puVar14 = (char)*puVar14 + bVar5;
    goto code_r0x000142990e65;
  case 0x15:
    plStack_90 = (longlong *)uVar13;
    goto code_r0x000142990ddb;
  case 0x16:
    *puVar14 = *puVar14 + iVar21;
    cRam0000000650e2ecbd = cRam0000000650e2ecbd + -0x28;
    *(byte *)puVar24 = (byte)*puVar24 | bVar5;
    *(byte *)puVar14 = (char)*puVar14 + bVar5;
    goto code_r0x000142990e22;
  case 0x18:
    bVar8 = (bVar5 + 0x81) -
            (0xfffffffebc9f6a27U <
            (ulonglong)(longlong)*(int *)(&UNK_1436095d8 + (ulonglong)bVar4 * 4));
    goto code_r0x000142990d79;
  case 0x19:
    goto code_r0x000142990a94;
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x22:
    *(byte *)puVar14 = (char)*puVar14 + bVar5;
    UNK_143609591 = UNK_143609591 + bVar5;
    *puVar14 = *puVar14 + iVar21;
    *(byte *)puVar14 = (char)*puVar14 + bVar5;
    goto code_r0x0001429909a8;
  case 0x1f:
    uVar18 = *puVar14;
    *(float *)((longlong)puVar31 + -0x74b301ff) = (float)in_ST0;
    pcVar16 = (char *)((ulonglong)puVar28 & 0xffffffff);
    puVar28 = (undefined8 *)(CONCAT71(uVar17,bVar5 + (char)uVar18 + -0x6b) & 0xffffffff);
    *(byte *)puVar24 = (byte)*puVar24 | (byte)pcVar16;
    *pcVar16 = *pcVar16 + (byte)pcVar16;
    goto code_r0x000142990b8e;
  case 0x20:
    uVar27 = (ulonglong)puVar14 & 0xffffffff;
    cVar7 = bVar5 + (char)*puVar14;
    *(byte *)((longlong)puVar24 + -0x77) = *(byte *)((longlong)puVar24 + -0x77) + cVar7;
    bVar41 = cVar7 == 'G';
    goto code_r0x000142990b12;
  case 0x21:
    puVar14 = (uint *)0x2;
    goto code_r0x000142990b49;
  case 0x23:
    puVar32 = (ulonglong *)((ulonglong)puVar14 & 0xffffffff);
    goto LAB_142990ab6;
  }
code_r0x0001429907a7:
  puVar31 = (ulonglong *)plStack_90[2];
  if ((ulonglong)(*plStack_90 - (longlong)puVar31) < 0x20) {
    lVar26 = 0x20;
code_r0x0001429909a8:
    pdb_142d7f1b0(plStack_90,puVar31,lVar26);
    uVar9 = uStack_98;
  }
  lVar26 = plStack_90[1];
  *(code **)(lVar26 + (longlong)puVar31) = pdb_1411ae9e0;
  *(ulonglong *)(lVar26 + 8 + (longlong)puVar31) = uVar27;
  *(undefined8 *)(lVar26 + 0x10 + (longlong)puVar31) = uVar12;
  *(undefined4 *)(lVar26 + 0x18 + (longlong)puVar31) = 0;
  *(undefined1 *)(lVar26 + 0x1c + (longlong)puVar31) = 0;
  plStack_90[2] = (longlong)(puVar31 + 4);
  goto LAB_1429901e4;
code_r0x000142990c14:
  do {
    *(undefined4 *)(puVar28[0x43] + (longlong)puVar40 * 4) =
         *(undefined4 *)((longlong)puVar28 + 0x204);
    *(char *)(uVar27 + 2) = (char)puVar14;
LAB_142990a03:
    do {
      puVar14 = (uint *)(ulonglong)*(uint *)(puVar28 + 0x3c);
      if (*(uint *)(puVar28 + 0x3c) == (uint)puVar38) {
        if (puVar31 == puVar32) {
          return;
        }
        while( true ) {
          puVar38 = *(ulonglong **)
                     (*(longlong *)(lVar36 + 0x1a0) + 0x10 + (ulonglong)(uint)*puVar31 * 0x48);
          if (puVar38 != (ulonglong *)0x0) break;
          puVar31 = (ulonglong *)((longlong)puVar31 + 4);
          if (puVar31 == puVar32) {
            return;
          }
        }
        lVar19 = *(longlong *)(lVar36 + 0x1a0) + (ulonglong)(uint)*puVar31 * 0x48;
        puVar14 = *(uint **)(lVar19 + 0x38);
        if (*(ulonglong *)(lVar10 + 0x110) < *(ulonglong *)(lVar19 + 0x40)) {
          puVar30 = *(undefined **)(lVar19 + 0x18);
          if (*(ulonglong *)(puVar14 + *(ulonglong *)(lVar10 + 0x110) * 2) == 0) goto LAB_142990a86;
          puVar35 = *(ulonglong **)
                     (puVar30 +
                     ~*(ulonglong *)(puVar14 + *(ulonglong *)(lVar10 + 0x110) * 2) * 0x30 + 0x10);
        }
        else {
          puVar30 = *(undefined **)(lVar19 + 0x18);
LAB_142990a86:
          puVar35 = (ulonglong *)0x0;
        }
        puVar31 = (ulonglong *)((longlong)puVar31 + 4);
        puVar24 = *(ulonglong **)(lVar10 + 0x118);
code_r0x000142990a94:
        uVar13 = *(ulonglong *)
                  (puVar30 + ~*(ulonglong *)(puVar14 + (longlong)puVar24 * 2) * 0x30 + 0x10);
        puVar28[0x43] =
             *(undefined8 *)
              (puVar30 + ~*(ulonglong *)(puVar14 + (longlong)puVar24 * 2) * 0x30 + 0x28);
        puVar14 = (uint *)0x0;
      }
LAB_142990ab6:
      puVar40 = (ulonglong *)((ulonglong)puVar14 & 0xffffffff);
      *(int *)(puVar28 + 0x3c) = (int)puVar14 + 1;
      bVar8 = *(byte *)((longlong)puVar35 + (longlong)puVar40);
      bVar4 = bVar8 - 4;
      if (bVar8 < 4) {
        bVar4 = (byte)lVar26;
      }
    } while (10 < bVar4 - 2);
    uVar27 = (longlong)puVar40 * 3 + uVar13;
    switch((uint)bVar4) {
    case 2:
      bVar41 = bVar8 == *(byte *)puVar28[0x27];
      *(undefined4 *)(puVar28[0x43] + (longlong)puVar40 * 4) =
           *(undefined4 *)((longlong)puVar28 + 0x204);
code_r0x000142990b12:
      *(bool *)(uVar27 + 2) = bVar41;
    default:
      goto LAB_142990a03;
    case 8:
      goto code_r0x000142990be3;
    case 9:
      puVar28[0x3f] = puVar35;
      puVar28[0x41] = uVar13;
      pcVar16 = (char *)pdb_1409aa260(puVar28[0x3a]);
      uVar13 = puVar28[0x41];
code_r0x000142990b8e:
      puVar35 = (ulonglong *)puVar28[0x3f];
      lVar26 = 2;
      uVar9 = puVar28[0x42];
      puVar14 = (uint *)(ulonglong)(byte)pcVar16[0x3c];
      break;
    case 10:
      puVar28[0x3f] = puVar35;
      puVar28[0x41] = uVar13;
      lVar19 = pdb_1409aa260(puVar28[0x3a]);
      uVar13 = puVar28[0x41];
      puVar35 = (ulonglong *)puVar28[0x3f];
      lVar26 = 2;
      uVar9 = puVar28[0x42];
      puVar14 = (uint *)(ulonglong)*(byte *)(lVar19 + 0x3d);
      break;
    case 0xc:
      puVar28[0x3f] = puVar35;
      puVar28[0x41] = uVar13;
      puVar14 = (uint *)pdb_140a368d0(puVar28[0x34]);
      uVar13 = puVar28[0x41];
      puVar35 = (ulonglong *)puVar28[0x3f];
      lVar26 = 2;
code_r0x000142990b49:
      uVar9 = puVar28[0x42];
      uVar18 = *puVar14;
      *(undefined4 *)(puVar28[0x43] + (longlong)puVar40 * 4) =
           *(undefined4 *)((longlong)puVar28 + 0x204);
      *(bool *)(uVar27 + 2) = uVar18 < 2;
      goto LAB_142990a03;
    }
  } while( true );
code_r0x000142990be3:
  puVar28[0x3f] = puVar35;
  puVar28[0x41] = uVar13;
  puVar14 = (uint *)pdb_14093a8d0(uVar9);
  uVar13 = puVar28[0x41];
  puVar35 = (ulonglong *)puVar28[0x3f];
  lVar26 = 2;
  uVar9 = puVar28[0x42];
  goto code_r0x000142990c14;
LAB_142990d49:
  puVar40 = (ulonglong *)(ulonglong)~*(uint *)(lVar26 + 8 + uVar27 * 0x10);
  bVar8 = *(byte *)((longlong)puVar35 + (longlong)puVar40);
  bVar4 = bVar8 - 4;
  if (bVar8 < 4) {
    bVar4 = 2;
  }
  puVar30 = (undefined *)(ulonglong)(bVar4 - 2);
  if (10 < bVar4 - 2) goto LAB_142990c46;
code_r0x000142990d79:
  uVar27 = (longlong)puVar40 * 3 + uVar13;
  plStack_90 = (longlong *)uVar13;
  puStack_b0 = puVar35;
  lStack_a0 = lVar26;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(puVar30) {
  case (undefined *)0x0:
    bVar4 = *pbStack_170;
    *(undefined4 *)(lStack_c0 + (longlong)puVar40 * 4) = uStack_a4;
    *(bool *)(uVar27 + 2) = bVar8 == bVar4;
    break;
  case (undefined *)0x1:
  case (undefined *)0x2:
  case (undefined *)0x3:
  case (undefined *)0x4:
  case (undefined *)0x5:
  case (undefined *)0x9:
    break;
  case (undefined *)0x6:
    uVar6 = pdb_14093a8d0(uVar9);
    goto code_r0x000142990ecc;
  case (undefined *)0x7:
    puVar30 = puStack_d8;
code_r0x000142990e22:
    plStack_90 = (longlong *)uVar13;
    lVar26 = pdb_1409aa260(puVar30);
    uVar6 = *(undefined1 *)(lVar26 + 0x3c);
    goto code_r0x000142990ecc;
  case (undefined *)0x8:
    puVar30 = puStack_d8;
code_r0x000142990e65:
    plStack_90 = (longlong *)uVar13;
    lVar26 = pdb_1409aa260(puVar30);
    uVar6 = *(undefined1 *)(lVar26 + 0x3d);
code_r0x000142990ecc:
    *(undefined4 *)(lStack_c0 + (longlong)puVar40 * 4) = uStack_a4;
    *(undefined1 *)(uVar27 + 2) = uVar6;
    lVar26 = lStack_a0;
    puVar35 = puStack_b0;
    uVar13 = (ulonglong)plStack_90;
    uVar9 = uStack_98;
    break;
  default:
    puVar14 = (uint *)pdb_140a368d0(uStack_108);
code_r0x000142990ddb:
    uVar18 = *puVar14;
    *(undefined4 *)(lStack_c0 + (longlong)puVar40 * 4) = uStack_a4;
    *(bool *)(uVar27 + 2) = uVar18 < 2;
    lVar26 = lStack_a0;
    puVar35 = puStack_b0;
    uVar13 = (ulonglong)plStack_90;
    uVar9 = uStack_98;
  }
LAB_142990c46:
  if ((int)uStack_c8 == (int)puVar38) {
    if (puVar31 == puVar32) {
      return;
    }
    while( true ) {
      lVar26 = (ulonglong)(uint)*puVar31 * 0xa0;
      puVar38 = *(ulonglong **)(*(longlong *)(lVar36 + 0x100) + 0x58 + lVar26);
      if (puVar38 != (ulonglong *)0x0) break;
      puVar31 = (ulonglong *)((longlong)puVar31 + 4);
      if (puVar31 == puVar32) {
        return;
      }
    }
    lVar26 = *(longlong *)(lVar36 + 0x100) + lVar26;
    uVar13 = (ulonglong)*(uint *)(lVar26 + 0x94);
    lVar20 = *(longlong *)(lVar36 + 0x1a0);
    lVar19 = lVar20 + uVar13 * 0x48;
    lVar1 = *(longlong *)(lVar20 + 0x38 + uVar13 * 0x48);
    if (*(ulonglong *)(lVar10 + 0x110) < *(ulonglong *)(lVar20 + 0x40 + uVar13 * 0x48)) {
      uVar13 = *(ulonglong *)(lVar1 + *(ulonglong *)(lVar10 + 0x110) * 8);
      lVar19 = *(longlong *)(lVar19 + 0x18);
      if (uVar13 == 0) goto LAB_142990cfd;
      puVar35 = *(ulonglong **)(lVar19 + 0x10 + ~uVar13 * 0x30);
    }
    else {
      lVar19 = *(longlong *)(lVar19 + 0x18);
LAB_142990cfd:
      puVar35 = (ulonglong *)0x0;
    }
    puVar31 = (ulonglong *)((longlong)puVar31 + 4);
    lVar20 = ~*(ulonglong *)(lVar1 + *(longlong *)(lVar10 + 0x118) * 8) * 0x30;
    uVar13 = *(ulonglong *)(lVar19 + 0x10 + lVar20);
    lStack_c0 = *(longlong *)(lVar19 + 0x28 + lVar20);
    lVar26 = *(longlong *)(lVar26 + 0x50);
    uStack_c8 = (ulonglong *)CONCAT44(uStack_c8._4_4_,1);
    uVar27 = 0;
    goto LAB_142990d49;
  }
  uVar27 = (ulonglong)uStack_c8 & 0xffffffff;
  uStack_c8 = (ulonglong *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8 + 1);
  goto LAB_142990d49;
}

