// VA 0x1407250e0, PDB extent 1792 bytes
// toolbar::mei::widgets::decorate::impl$1::decorate_clutter_selector
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/decorate.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::decorate::impl$1::decorate_clutter_selector
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/decorate.rs
   Extent: 1792 */

longlong * pdb_1407250e0(longlong *param_1,longlong *param_2,byte param_3)

{
  char *pcVar1;
  longlong *plVar2;
  byte *arg0;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  int iVar15;
  ulonglong in_R10;
  longlong *plVar16;
  longlong *plVar17;
  longlong *unaff_R14;
  byte unaff_R15B;
  undefined8 uVar18;
  byte *pbVar19;
  bool bVar20;
  byte bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float unaff_XMM6_Da;
  float unaff_XMM6_Db;
  longlong *plStack_f8;
  longlong *plStack_f0;
  undefined8 uStack_e8;
  longlong lStack_d8;
  undefined4 uStack_d0;
  longlong *plStack_c8;
  longlong *plStack_c0;
  longlong lStack_b8;
  longlong *plStack_a8;
  longlong *plStack_a0;
  longlong *plStack_98;
  longlong *plStack_90;
  longlong *plStack_88;
  longlong *plStack_80;
  longlong *plStack_78;
  longlong *plStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  plVar2 = (longlong *)*param_2;
  if (plVar2[0x39] != 0) {
    unaff_R14 = plVar2 + 0x3a;
    uVar5 = pdb_1400af0a0(unaff_R14,param_2 + 1);
    lVar6 = plVar2[0x36];
    bVar21 = (byte)(uVar5 >> 0x39);
    auVar22 = ZEXT216(CONCAT11(bVar21,bVar21));
    auVar22 = pshuflw(auVar22,auVar22,0);
    unaff_RSI = param_2[1];
    lVar12 = 0;
    while( true ) {
      uVar5 = uVar5 & plVar2[0x37];
      auVar28 = *(undefined1 (*) [16])(lVar6 + uVar5);
      auVar27[0] = -(auVar28[0] == auVar22[0]);
      auVar27[1] = -(auVar28[1] == auVar22[1]);
      auVar27[2] = -(auVar28[2] == auVar22[2]);
      auVar27[3] = -(auVar28[3] == auVar22[3]);
      auVar27[4] = -(auVar28[4] == auVar22[4]);
      auVar27[5] = -(auVar28[5] == auVar22[5]);
      auVar27[6] = -(auVar28[6] == auVar22[6]);
      auVar27[7] = -(auVar28[7] == auVar22[7]);
      auVar27[8] = -(auVar28[8] == auVar22[0]);
      auVar27[9] = -(auVar28[9] == auVar22[1]);
      auVar27[10] = -(auVar28[10] == auVar22[2]);
      auVar27[0xb] = -(auVar28[0xb] == auVar22[3]);
      auVar27[0xc] = -(auVar28[0xc] == auVar22[4]);
      auVar27[0xd] = -(auVar28[0xd] == auVar22[5]);
      auVar27[0xe] = -(auVar28[0xe] == auVar22[6]);
      auVar27[0xf] = -(auVar28[0xf] == auVar22[7]);
      uVar14 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
      uVar8 = (ulonglong)uVar14;
      while (unaff_RDI = param_2, unaff_R15B = param_3, uVar14 != 0) {
        uVar13 = 0;
        for (uVar3 = (uint)uVar8; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        in_R10 = (uVar13 + uVar5 & plVar2[0x37]) * -0xd8;
        if (unaff_RSI == *(longlong *)(lVar6 + -0xd8 + in_R10)) {
          lVar6 = lVar6 + in_R10;
          if ((*(int *)(lVar6 + -0x90) == 1) || (*(char *)(lVar6 + -0x88) != '\0')) {
            param_1[2] = param_2[2];
            lVar6 = param_2[1];
            *param_1 = *param_2;
            param_1[1] = lVar6;
            return param_1;
          }
          if (plVar2[0x39] == 0) goto LAB_1407252da;
          unaff_XMM6_Da = *(float *)(lVar6 + -0x8c) * _DAT_142fa5c40;
          unaff_XMM6_Db = *(float *)(lVar6 + -0x84) * _UNK_142fa5c44;
          uVar5 = pdb_1400af0a0(unaff_R14,param_2 + 1);
          puVar9 = (undefined *)plVar2[0x36];
          bVar21 = (byte)(uVar5 >> 0x39);
          auVar22 = ZEXT216(CONCAT11(bVar21,bVar21));
          auVar22 = pshuflw(auVar22,auVar22,0);
          lVar6 = 0;
          goto LAB_140725271;
        }
        iVar15 = (uint)uVar8 - 1;
        uVar14 = (ushort)iVar15 & (ushort)uVar8;
        uVar8 = (ulonglong)CONCAT22((short)((uint)iVar15 >> 0x10),uVar14);
        in_R10 = uVar8;
      }
      auVar23[0] = -(auVar28[0] == -1);
      auVar23[1] = -(auVar28[1] == -1);
      auVar23[2] = -(auVar28[2] == -1);
      auVar23[3] = -(auVar28[3] == -1);
      auVar23[4] = -(auVar28[4] == -1);
      auVar23[5] = -(auVar28[5] == -1);
      auVar23[6] = -(auVar28[6] == -1);
      auVar23[7] = -(auVar28[7] == -1);
      auVar23[8] = -(auVar28[8] == -1);
      auVar23[9] = -(auVar28[9] == -1);
      auVar23[10] = -(auVar28[10] == -1);
      auVar23[0xb] = -(auVar28[0xb] == -1);
      auVar23[0xc] = -(auVar28[0xc] == -1);
      auVar23[0xd] = -(auVar28[0xd] == -1);
      auVar23[0xe] = -(auVar28[0xe] == -1);
      auVar23[0xf] = -(auVar28[0xf] == -1);
      if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar23 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar23 >> 0x3f,0) & 1) != 0) || (SUB161(auVar23 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar23 >> 0x4f,0) & 1) != 0) || (SUB161(auVar23 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar23 >> 0x5f,0) & 1) != 0) || (SUB161(auVar23 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar23 >> 0x6f,0) & 1) != 0) || (SUB161(auVar23 >> 0x77,0) & 1) != 0) ||
          auVar23[0xf] < '\0') break;
      uVar5 = uVar5 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
LAB_1407252da:
  param_3 = unaff_R15B;
  puVar9 = &UNK_142fa60f8;
  pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
  param_2 = unaff_RDI;
LAB_1407252f2:
  bVar20 = ((param_3 | puVar9[in_R10 - 6]) & 1) != 0;
  uVar18 = 0x17;
  if (bVar20) {
    uVar18 = 0x1d;
  }
  plVar16 = (longlong *)&UNK_142fa5d68;
  if (bVar20) {
    plVar16 = (longlong *)&UNK_142fa5d7f;
  }
  uStack_d0 = 0xf1d8e66d;
  lStack_d8 = unaff_RSI;
  uVar5 = pdb_141176c30(&lStack_d8);
  plVar17 = (longlong *)(uVar5 ^ 0xb1695320004fb443);
  plVar11 = plVar17;
  lVar6 = pdb_14072c2d0(plVar2);
  *(undefined1 *)(lVar6 + 0x5e) = 0;
  if (((ulonglong)plVar11 & 1) == 0) {
    lVar6 = plVar2[2];
    plStack_80 = plVar16;
    if (lVar6 == *plVar2) {
      pdb_142d7f080(plVar2);
    }
    lVar12 = plVar2[1];
    lVar10 = lVar6 * 0x38;
    *(undefined8 *)(lVar12 + lVar10) = 0x100000003;
    *(ulonglong *)(lVar12 + 8 + lVar10) = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
    *(longlong *)(lVar12 + 0x10 + lVar10) = unaff_RSI;
    *(undefined1 (*) [16])(lVar12 + 0x18 + lVar10) = (undefined1  [16])0x0;
    *(undefined8 *)(lVar12 + 0x28 + lVar10) = 0;
    *(longlong **)(lVar12 + 0x30 + lVar10) = plVar17;
    plVar2[2] = lVar6 + 1;
    plVar16 = plStack_80;
  }
  puStack_68 = (undefined *)0x0;
  plStack_78 = plVar2;
  plStack_70 = plVar17;
  if (plVar2[0x39] != 0) {
    uVar5 = pdb_1400af0a0(unaff_R14,&plStack_70);
    lVar6 = plVar2[0x36];
    bVar21 = (byte)(uVar5 >> 0x39);
    auVar22 = ZEXT216(CONCAT11(bVar21,bVar21));
    auVar22 = pshuflw(auVar22,auVar22,0);
    lVar12 = 0;
    while( true ) {
      uVar5 = uVar5 & plVar2[0x37];
      auVar28 = *(undefined1 (*) [16])(lVar6 + uVar5);
      auVar29[0] = -(auVar28[0] == auVar22[0]);
      auVar29[1] = -(auVar28[1] == auVar22[1]);
      auVar29[2] = -(auVar28[2] == auVar22[2]);
      auVar29[3] = -(auVar28[3] == auVar22[3]);
      auVar29[4] = -(auVar28[4] == auVar22[4]);
      auVar29[5] = -(auVar28[5] == auVar22[5]);
      auVar29[6] = -(auVar28[6] == auVar22[6]);
      auVar29[7] = -(auVar28[7] == auVar22[7]);
      auVar29[8] = -(auVar28[8] == auVar22[0]);
      auVar29[9] = -(auVar28[9] == auVar22[1]);
      auVar29[10] = -(auVar28[10] == auVar22[2]);
      auVar29[0xb] = -(auVar28[0xb] == auVar22[3]);
      auVar29[0xc] = -(auVar28[0xc] == auVar22[4]);
      auVar29[0xd] = -(auVar28[0xd] == auVar22[5]);
      auVar29[0xe] = -(auVar28[0xe] == auVar22[6]);
      auVar29[0xf] = -(auVar28[0xf] == auVar22[7]);
      uVar14 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar10 = (uVar3 + uVar5 & plVar2[0x37]) * -0xd8;
        if (plVar17 == *(longlong **)(lVar6 + -0xd8 + lVar10)) {
          *(undefined4 *)(lVar6 + lVar10 + -0x14) = 0x42c80000;
          uStack_e8 = puStack_68;
          plStack_f8 = plStack_78;
          plStack_f0 = plStack_70;
          plStack_98 = (longlong *)&UNK_142fa5d9c;
          plStack_90 = (longlong *)0x17;
          plStack_78 = (longlong *)pdb_140bbbcb0(&plStack_98);
          plStack_70 = _DAT_14329c2b0;
          puStack_68 = (undefined *)_UNK_14329c2b8;
          plStack_70 = (longlong *)pdb_1400affa0(&plStack_78);
          plStack_78 = plStack_f0;
          uVar7 = pdb_1400b0130(&plStack_78);
          pdb_14072caa0(&plStack_78,&plStack_f8,uVar7);
          pdb_14116f0d0(&plStack_78,0);
          lStack_b8 = (longlong)puStack_68;
          plStack_c8 = plStack_78;
          plStack_c0 = plStack_70;
          pdb_140a1aa60(&plStack_98);
          pdb_140cb9350(&plStack_78,plVar16,uVar18);
          puVar9 = puStack_68;
          plVar2 = plStack_a8;
          plStack_80 = plStack_78;
          plStack_a0 = plStack_70;
          if (plStack_88 == plStack_98) {
            pdb_142d7e6e0(&plStack_98);
          }
          plStack_90[(longlong)plStack_88 * 4] = (longlong)plStack_80;
          plStack_90[(longlong)plStack_88 * 4 + 1] = (longlong)plStack_a0;
          plStack_90[(longlong)plStack_88 * 4 + 2] = (longlong)puVar9;
          *(undefined1 *)(plStack_90 + (longlong)plStack_88 * 4 + 3) = 3;
          puStack_68 = (undefined *)((longlong)plStack_88 + 1);
          plStack_78 = plStack_98;
          plStack_70 = plStack_90;
          plVar16 = (longlong *)pdb_14116e700(&plStack_c8);
          arg0 = (byte *)plVar16[1];
          lVar6 = plVar16[2];
          if (lVar6 != 0) {
            pbVar19 = arg0 + 8;
            do {
              uVar5 = *(ulonglong *)(pbVar19 + -8);
              if ((-1 < (longlong)uVar5) && (uVar5 != 0)) {
                pub_1406abac0(*(byte **)pbVar19,uVar5,1);
              }
              pbVar19 = pbVar19 + 0x20;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
          if (*plVar16 != 0) {
            pub_1406abac0(arg0,*plVar16 << 5,8);
          }
          plVar11 = plStack_c8;
          plVar16[2] = (longlong)puStack_68;
          *plVar16 = (longlong)plStack_78;
          plVar16[1] = (longlong)plStack_70;
          plStack_98 = plStack_c8;
          plStack_90 = plStack_c0;
          plStack_88 = (longlong *)lStack_b8;
          if (plStack_c8[0x39] != 0) {
            uVar8 = pdb_1400af0a0(plStack_c8 + 0x3a,&plStack_90);
            lVar6 = plVar11[0x36];
            uVar5 = plVar11[0x37];
            bVar21 = (byte)(uVar8 >> 0x39);
            auVar22 = ZEXT216(CONCAT11(bVar21,bVar21));
            auVar22 = pshuflw(auVar22,auVar22,0);
            lVar12 = 0;
            while( true ) {
              uVar8 = uVar8 & uVar5;
              pcVar1 = (char *)(lVar6 + uVar8);
              auVar30[0] = -(*pcVar1 == auVar22[0]);
              auVar30[1] = -(pcVar1[1] == auVar22[1]);
              auVar30[2] = -(pcVar1[2] == auVar22[2]);
              auVar30[3] = -(pcVar1[3] == auVar22[3]);
              auVar30[4] = -(pcVar1[4] == auVar22[4]);
              auVar30[5] = -(pcVar1[5] == auVar22[5]);
              auVar30[6] = -(pcVar1[6] == auVar22[6]);
              auVar30[7] = -(pcVar1[7] == auVar22[7]);
              auVar30[8] = -(pcVar1[8] == auVar22[0]);
              auVar30[9] = -(pcVar1[9] == auVar22[1]);
              auVar30[10] = -(pcVar1[10] == auVar22[2]);
              auVar30[0xb] = -(pcVar1[0xb] == auVar22[3]);
              auVar30[0xc] = -(pcVar1[0xc] == auVar22[4]);
              auVar30[0xd] = -(pcVar1[0xd] == auVar22[5]);
              auVar30[0xe] = -(pcVar1[0xe] == auVar22[6]);
              auVar30[0xf] = -(pcVar1[0xf] == auVar22[7]);
              uVar14 = (ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
                       (ushort)(auVar30[0xf] >> 7) << 0xf;
              uVar13 = (uint)uVar14;
              while (uVar14 != 0) {
                uVar3 = 0;
                for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                  uVar3 = uVar3 + 1;
                }
                lVar10 = (uVar3 + uVar8 & uVar5) * -0xd8;
                if (plStack_90 == *(longlong **)(lVar6 + -0xd8 + lVar10)) {
                  *(undefined4 *)(lVar6 + lVar10 + -0x80) = 0x3f800000;
                  plVar2[2] = param_2[2];
                  lVar6 = param_2[1];
                  *plVar2 = *param_2;
                  plVar2[1] = lVar6;
                  return plVar2;
                }
                uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
                uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
              }
              auVar26[0] = -(*pcVar1 == -1);
              auVar26[1] = -(pcVar1[1] == -1);
              auVar26[2] = -(pcVar1[2] == -1);
              auVar26[3] = -(pcVar1[3] == -1);
              auVar26[4] = -(pcVar1[4] == -1);
              auVar26[5] = -(pcVar1[5] == -1);
              auVar26[6] = -(pcVar1[6] == -1);
              auVar26[7] = -(pcVar1[7] == -1);
              auVar26[8] = -(pcVar1[8] == -1);
              auVar26[9] = -(pcVar1[9] == -1);
              auVar26[10] = -(pcVar1[10] == -1);
              auVar26[0xb] = -(pcVar1[0xb] == -1);
              auVar26[0xc] = -(pcVar1[0xc] == -1);
              auVar26[0xd] = -(pcVar1[0xd] == -1);
              auVar26[0xe] = -(pcVar1[0xe] == -1);
              auVar26[0xf] = -(pcVar1[0xf] == -1);
              if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar26 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar26 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar26 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar26 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar26 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar26 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar26 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar26 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar26 >> 0x4f,0) & 1) != 0) || (SUB161(auVar26 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar26 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar26 >> 0x67,0) & 1) != 0) || (SUB161(auVar26 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar26 >> 0x77,0) & 1) != 0) || auVar26[0xf] < '\0') break;
              uVar8 = uVar8 + lVar12 + 0x10;
              lVar12 = lVar12 + 0x10;
            }
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_142fa6b18);
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar25[0] = -(auVar28[0] == -1);
      auVar25[1] = -(auVar28[1] == -1);
      auVar25[2] = -(auVar28[2] == -1);
      auVar25[3] = -(auVar28[3] == -1);
      auVar25[4] = -(auVar28[4] == -1);
      auVar25[5] = -(auVar28[5] == -1);
      auVar25[6] = -(auVar28[6] == -1);
      auVar25[7] = -(auVar28[7] == -1);
      auVar25[8] = -(auVar28[8] == -1);
      auVar25[9] = -(auVar28[9] == -1);
      auVar25[10] = -(auVar28[10] == -1);
      auVar25[0xb] = -(auVar28[0xb] == -1);
      auVar25[0xc] = -(auVar28[0xc] == -1);
      auVar25[0xd] = -(auVar28[0xd] == -1);
      auVar25[0xe] = -(auVar28[0xe] == -1);
      auVar25[0xf] = -(auVar28[0xf] == -1);
      if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar25 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar25 >> 0x3f,0) & 1) != 0) || (SUB161(auVar25 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar25 >> 0x4f,0) & 1) != 0) || (SUB161(auVar25 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar25 >> 0x5f,0) & 1) != 0) || (SUB161(auVar25 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar25 >> 0x6f,0) & 1) != 0) || (SUB161(auVar25 >> 0x77,0) & 1) != 0) ||
          auVar25[0xf] < '\0') break;
      uVar5 = uVar5 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
LAB_140725271:
  uVar5 = uVar5 & plVar2[0x37];
  pcVar1 = puVar9 + uVar5;
  auVar28[0] = -(*pcVar1 == auVar22[0]);
  auVar28[1] = -(pcVar1[1] == auVar22[1]);
  auVar28[2] = -(pcVar1[2] == auVar22[2]);
  auVar28[3] = -(pcVar1[3] == auVar22[3]);
  auVar28[4] = -(pcVar1[4] == auVar22[4]);
  auVar28[5] = -(pcVar1[5] == auVar22[5]);
  auVar28[6] = -(pcVar1[6] == auVar22[6]);
  auVar28[7] = -(pcVar1[7] == auVar22[7]);
  auVar28[8] = -(pcVar1[8] == auVar22[0]);
  auVar28[9] = -(pcVar1[9] == auVar22[1]);
  auVar28[10] = -(pcVar1[10] == auVar22[2]);
  auVar28[0xb] = -(pcVar1[0xb] == auVar22[3]);
  auVar28[0xc] = -(pcVar1[0xc] == auVar22[4]);
  auVar28[0xd] = -(pcVar1[0xd] == auVar22[5]);
  auVar28[0xe] = -(pcVar1[0xe] == auVar22[6]);
  auVar28[0xf] = -(pcVar1[0xf] == auVar22[7]);
  uVar14 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
  uVar13 = (uint)uVar14;
  while (uVar14 != 0) {
    uVar3 = 0;
    for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    in_R10 = (uVar3 + uVar5 & plVar2[0x37]) * -0xd8;
    plStack_a8 = param_1;
    if (unaff_RSI == *(longlong *)(puVar9 + (in_R10 - 0xd8))) goto LAB_1407252f2;
    uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
    uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
    in_R10 = (ulonglong)uVar13;
  }
  auVar24[0] = -(*pcVar1 == -1);
  auVar24[1] = -(pcVar1[1] == -1);
  auVar24[2] = -(pcVar1[2] == -1);
  auVar24[3] = -(pcVar1[3] == -1);
  auVar24[4] = -(pcVar1[4] == -1);
  auVar24[5] = -(pcVar1[5] == -1);
  auVar24[6] = -(pcVar1[6] == -1);
  auVar24[7] = -(pcVar1[7] == -1);
  auVar24[8] = -(pcVar1[8] == -1);
  auVar24[9] = -(pcVar1[9] == -1);
  auVar24[10] = -(pcVar1[10] == -1);
  auVar24[0xb] = -(pcVar1[0xb] == -1);
  auVar24[0xc] = -(pcVar1[0xc] == -1);
  auVar24[0xd] = -(pcVar1[0xd] == -1);
  auVar24[0xe] = -(pcVar1[0xe] == -1);
  auVar24[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') goto LAB_1407252da;
  uVar5 = uVar5 + lVar6 + 0x10;
  lVar6 = lVar6 + 0x10;
  goto LAB_140725271;
}

