// VA 0x140726690, PDB extent 1358 bytes
// toolbar::mei::widgets::text_hint_popup
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::text_hint_popup
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 1358 */

void pdb_140726690(longlong *param_1,ulonglong param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 unaff_RSI;
  ulonglong unaff_RDI;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  int iVar15;
  ulonglong in_R10;
  longlong lVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float unaff_XMM6_Da;
  float fVar25;
  float unaff_XMM6_Db;
  float fVar26;
  float unaff_XMM7_Da;
  float unaff_XMM7_Db;
  ulonglong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulonglong uStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  ulonglong uStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  ulonglong uStack_98;
  undefined8 uStack_90;
  longlong *plStack_88;
  ulonglong uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  ulonglong uStack_68;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3[0x39] != 0) {
    uVar6 = pdb_1400af0a0(plVar3 + 0x3a,param_1 + 1);
    lVar8 = plVar3[0x36];
    bVar17 = (byte)(uVar6 >> 0x39);
    auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
    auVar18 = pshuflw(auVar18,auVar18,0);
    lVar12 = param_1[1];
    lVar11 = 0;
    while( true ) {
      uVar6 = uVar6 & plVar3[0x37];
      auVar23 = *(undefined1 (*) [16])(lVar8 + uVar6);
      auVar22[0] = -(auVar23[0] == auVar18[0]);
      auVar22[1] = -(auVar23[1] == auVar18[1]);
      auVar22[2] = -(auVar23[2] == auVar18[2]);
      auVar22[3] = -(auVar23[3] == auVar18[3]);
      auVar22[4] = -(auVar23[4] == auVar18[4]);
      auVar22[5] = -(auVar23[5] == auVar18[5]);
      auVar22[6] = -(auVar23[6] == auVar18[6]);
      auVar22[7] = -(auVar23[7] == auVar18[7]);
      auVar22[8] = -(auVar23[8] == auVar18[0]);
      auVar22[9] = -(auVar23[9] == auVar18[1]);
      auVar22[10] = -(auVar23[10] == auVar18[2]);
      auVar22[0xb] = -(auVar23[0xb] == auVar18[3]);
      auVar22[0xc] = -(auVar23[0xc] == auVar18[4]);
      auVar22[0xd] = -(auVar23[0xd] == auVar18[5]);
      auVar22[0xe] = -(auVar23[0xe] == auVar18[6]);
      auVar22[0xf] = -(auVar23[0xf] == auVar18[7]);
      uVar14 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
      uVar7 = (ulonglong)uVar14;
      while (uVar14 != 0) {
        uVar13 = 0;
        for (uVar4 = (uint)uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        lVar16 = (uVar13 + uVar6 & plVar3[0x37]) * -0xd8;
        if (lVar12 == *(longlong *)(lVar8 + -0xd8 + lVar16)) {
          lVar8 = lVar8 + lVar16;
          if (*(int *)(lVar8 + -0x28) != 1) {
            return;
          }
          if (plVar3[0x39] == 0) goto LAB_140726a0e;
          unaff_XMM6_Da = (float)*(undefined8 *)(lVar8 + -0x24);
          unaff_XMM6_Db = (float)((ulonglong)*(undefined8 *)(lVar8 + -0x24) >> 0x20);
          unaff_XMM7_Da = (float)*(undefined8 *)(lVar8 + -0x1c);
          unaff_XMM7_Db = (float)((ulonglong)*(undefined8 *)(lVar8 + -0x1c) >> 0x20);
          uVar6 = pdb_1400af0a0(plVar3 + 0x3a,param_1 + 1);
          puVar10 = (undefined *)plVar3[0x36];
          bVar17 = (byte)(uVar6 >> 0x39);
          auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
          auVar18 = pshuflw(auVar18,auVar18,0);
          lVar8 = 0;
          goto LAB_1407267de;
        }
        iVar15 = (uint)uVar7 - 1;
        uVar14 = (ushort)iVar15 & (ushort)uVar7;
        uVar7 = (ulonglong)CONCAT22((short)((uint)iVar15 >> 0x10),uVar14);
        in_R10 = uVar7;
      }
      auVar19[0] = -(auVar23[0] == -1);
      auVar19[1] = -(auVar23[1] == -1);
      auVar19[2] = -(auVar23[2] == -1);
      auVar19[3] = -(auVar23[3] == -1);
      auVar19[4] = -(auVar23[4] == -1);
      auVar19[5] = -(auVar23[5] == -1);
      auVar19[6] = -(auVar23[6] == -1);
      auVar19[7] = -(auVar23[7] == -1);
      auVar19[8] = -(auVar23[8] == -1);
      auVar19[9] = -(auVar23[9] == -1);
      auVar19[10] = -(auVar23[10] == -1);
      auVar19[0xb] = -(auVar23[0xb] == -1);
      auVar19[0xc] = -(auVar23[0xc] == -1);
      auVar19[0xd] = -(auVar23[0xd] == -1);
      auVar19[0xe] = -(auVar23[0xe] == -1);
      auVar19[0xf] = -(auVar23[0xf] == -1);
      unaff_RSI = param_3;
      unaff_RDI = param_2;
      if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar19 >> 0x4f,0) & 1) != 0) || (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar19 >> 0x5f,0) & 1) != 0) || (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar19 >> 0x6f,0) & 1) != 0) || (SUB161(auVar19 >> 0x77,0) & 1) != 0) ||
          auVar19[0xf] < '\0') break;
      uVar6 = uVar6 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
  puVar10 = &UNK_142fa60f8;
  pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
  param_3 = unaff_RSI;
  param_2 = unaff_RDI;
LAB_14072685b:
  if ((puVar10[in_R10 - 6] & 1) == 0) {
    return;
  }
  uStack_f8 = param_2;
  uStack_f0 = param_3;
  uVar7 = pdb_140bbbcb0(&uStack_f8);
  uVar7 = uVar7 ^ 0xb1695320004fb443;
  uVar6 = uVar7;
  lVar8 = pdb_14072c2d0(plVar3);
  *(undefined1 *)(lVar8 + 0x5e) = 0;
  if ((uVar6 & 1) == 0) {
    fVar25 = unaff_XMM6_Da * _DAT_142fa5c60;
    fVar26 = unaff_XMM6_Db * _UNK_142fa5c64;
    lVar8 = plVar3[2];
    if (lVar8 == *plVar3) {
      pdb_142d7f080(plVar3);
    }
    lVar12 = plVar3[1];
    lVar11 = lVar8 * 0x38;
    *(undefined4 *)(lVar12 + lVar11) = 4;
    puVar2 = (undefined8 *)(lVar12 + 4 + lVar11);
    *puVar2 = CONCAT44(fVar26 + unaff_XMM7_Db,fVar25 + unaff_XMM7_Da);
    puVar2[1] = 0;
    *(undefined4 *)(lVar12 + 0x14 + lVar11) = 0;
    *(ulonglong *)(lVar12 + 0x30 + lVar11) = uVar7;
    plVar3[2] = lVar8 + 1;
  }
  uStack_78 = 0;
  uStack_f8 = 0;
  uStack_f0 = _DAT_14329c330;
  uStack_e8 = _UNK_14329c338;
  plStack_88 = plVar3;
  uStack_80 = uVar7;
  uStack_f0 = pdb_1400affa0(&uStack_f8);
  uStack_f8 = uVar7;
  uVar9 = pdb_1400b0130(&uStack_f8);
  pdb_14072caa0(&uStack_b0,&plStack_88,uVar9);
  uVar6 = uStack_b0;
  if (*(longlong *)(uStack_b0 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(uStack_b0 + 0x1d0,&lStack_a8);
    lVar8 = *(longlong *)(uVar6 + 0x1b0);
    uVar6 = *(ulonglong *)(uVar6 + 0x1b8);
    bVar17 = (byte)(uVar7 >> 0x39);
    auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
    auVar18 = pshuflw(auVar18,auVar18,0);
    lVar12 = 0;
    while( true ) {
      uVar7 = uVar7 & uVar6;
      auVar23 = *(undefined1 (*) [16])(lVar8 + uVar7);
      auVar24[0] = -(auVar23[0] == auVar18[0]);
      auVar24[1] = -(auVar23[1] == auVar18[1]);
      auVar24[2] = -(auVar23[2] == auVar18[2]);
      auVar24[3] = -(auVar23[3] == auVar18[3]);
      auVar24[4] = -(auVar23[4] == auVar18[4]);
      auVar24[5] = -(auVar23[5] == auVar18[5]);
      auVar24[6] = -(auVar23[6] == auVar18[6]);
      auVar24[7] = -(auVar23[7] == auVar18[7]);
      auVar24[8] = -(auVar23[8] == auVar18[0]);
      auVar24[9] = -(auVar23[9] == auVar18[1]);
      auVar24[10] = -(auVar23[10] == auVar18[2]);
      auVar24[0xb] = -(auVar23[0xb] == auVar18[3]);
      auVar24[0xc] = -(auVar23[0xc] == auVar18[4]);
      auVar24[0xd] = -(auVar23[0xd] == auVar18[5]);
      auVar24[0xe] = -(auVar23[0xe] == auVar18[6]);
      auVar24[0xf] = -(auVar23[0xf] == auVar18[7]);
      uVar14 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar13; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar11 = (uVar4 + uVar7 & uVar6) * -0xd8;
        if (lStack_a8 == *(longlong *)(lVar8 + -0xd8 + lVar11)) {
          *(undefined4 *)(lVar8 + lVar11 + -0x14) = 0x43fa0000;
          uStack_b8 = uStack_a0;
          uStack_c8 = uStack_b0;
          lStack_c0 = lStack_a8;
          pdb_141174160(&uStack_f8,&uStack_c8,&UNK_142fa5e88,0xf,0);
          pdb_141186520(auStack_70,&uStack_f8,&UNK_142fa5e97,7);
          uStack_98 = param_2;
          uStack_90 = param_3;
          uStack_f8 = pdb_140bbbcb0(&uStack_98);
          uStack_f0 = _DAT_14329c260;
          uStack_e8 = _UNK_14329c268;
          uStack_f0 = pdb_1400affa0(&uStack_f8);
          uStack_f8 = uStack_68;
          uVar9 = pdb_1400b0130(&uStack_f8);
          pdb_14072caa0(&uStack_f8,auStack_70,uVar9);
          uVar9 = pdb_14116ee90(&uStack_f8,0);
          pdb_14119b6b0(uVar9,param_2,param_3);
          uStack_b8 = uStack_e8;
          uStack_c8 = uStack_f8;
          lStack_c0 = uStack_f0;
          uVar9 = pdb_14116e180(&uStack_c8);
          pdb_14119b2b0(uVar9);
          uStack_e8 = uStack_b8;
          uStack_f8 = uStack_c8;
          uStack_f0 = lStack_c0;
          uVar9 = pdb_14116e180(&uStack_f8);
          pdb_140cb5a70(uVar9,3);
          uStack_b8 = uStack_e8;
          uStack_c8 = uStack_f8;
          lStack_c0 = uStack_f0;
          uVar9 = pdb_14116e180(&uStack_c8);
          pdb_140cb68f0(uVar9,2);
          uStack_e8 = uStack_b8;
          uStack_f8 = uStack_c8;
          uStack_f0 = lStack_c0;
          uVar9 = pdb_14116e180(&uStack_f8);
          pdb_140cb5df0(uVar9,_DAT_142fa5c70);
          return;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar21[0] = -(auVar23[0] == -1);
      auVar21[1] = -(auVar23[1] == -1);
      auVar21[2] = -(auVar23[2] == -1);
      auVar21[3] = -(auVar23[3] == -1);
      auVar21[4] = -(auVar23[4] == -1);
      auVar21[5] = -(auVar23[5] == -1);
      auVar21[6] = -(auVar23[6] == -1);
      auVar21[7] = -(auVar23[7] == -1);
      auVar21[8] = -(auVar23[8] == -1);
      auVar21[9] = -(auVar23[9] == -1);
      auVar21[10] = -(auVar23[10] == -1);
      auVar21[0xb] = -(auVar23[0xb] == -1);
      auVar21[0xc] = -(auVar23[0xc] == -1);
      auVar21[0xd] = -(auVar23[0xd] == -1);
      auVar21[0xe] = -(auVar23[0xe] == -1);
      auVar21[0xf] = -(auVar23[0xf] == -1);
      if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') break;
      uVar7 = uVar7 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
LAB_1407267de:
  uVar6 = uVar6 & plVar3[0x37];
  pcVar1 = puVar10 + uVar6;
  auVar23[0] = -(*pcVar1 == auVar18[0]);
  auVar23[1] = -(pcVar1[1] == auVar18[1]);
  auVar23[2] = -(pcVar1[2] == auVar18[2]);
  auVar23[3] = -(pcVar1[3] == auVar18[3]);
  auVar23[4] = -(pcVar1[4] == auVar18[4]);
  auVar23[5] = -(pcVar1[5] == auVar18[5]);
  auVar23[6] = -(pcVar1[6] == auVar18[6]);
  auVar23[7] = -(pcVar1[7] == auVar18[7]);
  auVar23[8] = -(pcVar1[8] == auVar18[0]);
  auVar23[9] = -(pcVar1[9] == auVar18[1]);
  auVar23[10] = -(pcVar1[10] == auVar18[2]);
  auVar23[0xb] = -(pcVar1[0xb] == auVar18[3]);
  auVar23[0xc] = -(pcVar1[0xc] == auVar18[4]);
  auVar23[0xd] = -(pcVar1[0xd] == auVar18[5]);
  auVar23[0xe] = -(pcVar1[0xe] == auVar18[6]);
  auVar23[0xf] = -(pcVar1[0xf] == auVar18[7]);
  uVar14 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
  uVar13 = (uint)uVar14;
  while (uVar14 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar13; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    in_R10 = (uVar4 + uVar6 & plVar3[0x37]) * -0xd8;
    if (lVar12 == *(longlong *)(puVar10 + (in_R10 - 0xd8))) goto LAB_14072685b;
    uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
    uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
  }
  auVar20[0] = -(*pcVar1 == -1);
  auVar20[1] = -(pcVar1[1] == -1);
  auVar20[2] = -(pcVar1[2] == -1);
  auVar20[3] = -(pcVar1[3] == -1);
  auVar20[4] = -(pcVar1[4] == -1);
  auVar20[5] = -(pcVar1[5] == -1);
  auVar20[6] = -(pcVar1[6] == -1);
  auVar20[7] = -(pcVar1[7] == -1);
  auVar20[8] = -(pcVar1[8] == -1);
  auVar20[9] = -(pcVar1[9] == -1);
  auVar20[10] = -(pcVar1[10] == -1);
  auVar20[0xb] = -(pcVar1[0xb] == -1);
  auVar20[0xc] = -(pcVar1[0xc] == -1);
  auVar20[0xd] = -(pcVar1[0xd] == -1);
  auVar20[0xe] = -(pcVar1[0xe] == -1);
  auVar20[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar20 >> 0x37,0) & 1) != 0) || (SUB161(auVar20 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar20 >> 0x47,0) & 1) != 0) || (SUB161(auVar20 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar20 >> 0x57,0) & 1) != 0) || (SUB161(auVar20 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar20 >> 0x67,0) & 1) != 0) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') {
LAB_140726a0e:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b00);
  }
  uVar6 = uVar6 + lVar8 + 0x10;
  lVar8 = lVar8 + 0x10;
  goto LAB_1407267de;
}

