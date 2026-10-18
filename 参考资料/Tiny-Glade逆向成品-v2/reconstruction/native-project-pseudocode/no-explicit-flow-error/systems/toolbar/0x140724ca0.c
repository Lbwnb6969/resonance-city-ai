// VA 0x140724ca0, PDB extent 1079 bytes
// toolbar::mei::widgets::decorate::impl$0::decorate_hovered
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/decorate.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::decorate::impl$0::decorate_hovered
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/decorate.rs
   Extent: 1079 */

longlong * pdb_140724ca0(longlong *param_1,longlong *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined *puVar9;
  ulonglong unaff_RBX;
  ulonglong uVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  longlong lVar14;
  longlong in_R11;
  longlong *unaff_R12;
  ulonglong unaff_R13;
  ulonglong uVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  longlong *plStack_70;
  ulonglong uStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  longlong alStack_50 [2];
  
  plVar3 = (longlong *)*param_2;
  if (plVar3[0x39] != 0) {
    uVar7 = pdb_1400af0a0(plVar3 + 0x3a,param_2 + 1);
    lVar8 = plVar3[0x36];
    bVar16 = (byte)(uVar7 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    unaff_R12 = (longlong *)param_2[1];
    lVar11 = 0;
    while( true ) {
      uVar7 = uVar7 & plVar3[0x37];
      auVar22 = *(undefined1 (*) [16])(lVar8 + uVar7);
      auVar21[0] = -(auVar22[0] == auVar17[0]);
      auVar21[1] = -(auVar22[1] == auVar17[1]);
      auVar21[2] = -(auVar22[2] == auVar17[2]);
      auVar21[3] = -(auVar22[3] == auVar17[3]);
      auVar21[4] = -(auVar22[4] == auVar17[4]);
      auVar21[5] = -(auVar22[5] == auVar17[5]);
      auVar21[6] = -(auVar22[6] == auVar17[6]);
      auVar21[7] = -(auVar22[7] == auVar17[7]);
      auVar21[8] = -(auVar22[8] == auVar17[0]);
      auVar21[9] = -(auVar22[9] == auVar17[1]);
      auVar21[10] = -(auVar22[10] == auVar17[2]);
      auVar21[0xb] = -(auVar22[0xb] == auVar17[3]);
      auVar21[0xc] = -(auVar22[0xc] == auVar17[4]);
      auVar21[0xd] = -(auVar22[0xd] == auVar17[5]);
      auVar21[0xe] = -(auVar22[0xe] == auVar17[6]);
      auVar21[0xf] = -(auVar22[0xf] == auVar17[7]);
      uVar13 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar14 = (uVar4 + uVar7 & plVar3[0x37]) * -0xd8;
        if (unaff_R12 == *(longlong **)(lVar8 + -0xd8 + lVar14)) {
          if ((*(byte *)(lVar8 + lVar14 + -6) & 1) == 0) goto LAB_1407250b5;
          uStack_68 = CONCAT44(uStack_68._4_4_,0xab23d50d);
          plStack_70 = unaff_R12;
          uVar10 = pdb_141176c30(&plStack_70);
          unaff_R13 = 0xb1695320004fb443;
          uVar15 = uVar10 ^ 0xb1695320004fb443;
          uVar7 = uVar15;
          lVar8 = pdb_14072c2d0(plVar3);
          *(undefined1 *)(lVar8 + 0x5e) = 0;
          if ((uVar7 & 1) == 0) {
            lVar8 = plVar3[2];
            if (lVar8 == *plVar3) {
              pdb_142d7f080(plVar3);
            }
            lVar11 = plVar3[1];
            lVar14 = lVar8 * 0x38;
            *(undefined8 *)(lVar11 + lVar14) = 3;
            *(longlong **)(lVar11 + 0x10 + lVar14) = unaff_R12;
            uVar6 = _UNK_142fa5c18;
            puVar2 = (undefined8 *)(lVar11 + 0x18 + lVar14);
            *puVar2 = _DAT_142fa5c10;
            puVar2[1] = uVar6;
            *(ulonglong *)(lVar11 + 0x28 + lVar14) = (ulonglong)_DAT_142e36f28;
            *(ulonglong *)(lVar11 + 0x30 + lVar14) = uVar15;
            plVar3[2] = lVar8 + 1;
          }
          uStack_60 = 0;
          plStack_70 = plVar3;
          uStack_68 = uVar15;
          pdb_141173dd0(&lStack_58,&plStack_70,&UNK_142fa5d30,9,&UNK_142fa5d39,0x17,0x42000000);
          lVar8 = lStack_58;
          if (*(longlong *)(lStack_58 + 0x1c8) == 0) goto LAB_14072509f;
          unaff_RBX = uVar10 + 1;
          uVar10 = pdb_1400af0a0(lStack_58 + 0x1d0,alStack_50);
          puVar9 = *(undefined **)(lVar8 + 0x1b0);
          uVar7 = *(ulonglong *)(lVar8 + 0x1b8);
          bVar16 = (byte)(uVar10 >> 0x39);
          auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
          auVar17 = pshuflw(auVar17,auVar17,0);
          lVar8 = 0;
          goto LAB_140724ead;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
      }
      auVar18[0] = -(auVar22[0] == -1);
      auVar18[1] = -(auVar22[1] == -1);
      auVar18[2] = -(auVar22[2] == -1);
      auVar18[3] = -(auVar22[3] == -1);
      auVar18[4] = -(auVar22[4] == -1);
      auVar18[5] = -(auVar22[5] == -1);
      auVar18[6] = -(auVar22[6] == -1);
      auVar18[7] = -(auVar22[7] == -1);
      auVar18[8] = -(auVar22[8] == -1);
      auVar18[9] = -(auVar22[9] == -1);
      auVar18[10] = -(auVar22[10] == -1);
      auVar18[0xb] = -(auVar22[0xb] == -1);
      auVar18[0xc] = -(auVar22[0xc] == -1);
      auVar18[0xd] = -(auVar22[0xd] == -1);
      auVar18[0xe] = -(auVar22[0xe] == -1);
      auVar18[0xf] = -(auVar22[0xf] == -1);
      unaff_RSI = param_1;
      unaff_RDI = param_2;
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar7 = uVar7 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
  param_2 = unaff_RDI;
  param_1 = unaff_RSI;
  puVar9 = &UNK_142fa60f8;
  pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
LAB_140724f2a:
  *(undefined4 *)(puVar9 + in_R11 + -0x14) = 0x42c80000;
  plVar3 = (longlong *)*param_2;
  uVar10 = unaff_RBX ^ unaff_R13;
  uVar7 = uVar10;
  lVar8 = pdb_14072c2d0(plVar3);
  *(undefined1 *)(lVar8 + 0x5e) = 0;
  if ((uVar7 & 1) == 0) {
    lVar8 = plVar3[2];
    if (lVar8 == *plVar3) {
      pdb_142d7f080(plVar3);
    }
    lVar11 = plVar3[1];
    lVar14 = lVar8 * 0x38;
    *(undefined8 *)(lVar11 + lVar14) = 3;
    *(longlong **)(lVar11 + 0x10 + lVar14) = unaff_R12;
    uVar6 = _UNK_142fa5c28;
    puVar2 = (undefined8 *)(lVar11 + 0x18 + lVar14);
    *puVar2 = _DAT_142fa5c20;
    puVar2[1] = uVar6;
    *(undefined8 *)(lVar11 + 0x28 + lVar14) = _DAT_142fa5c30;
    *(ulonglong *)(lVar11 + 0x30 + lVar14) = uVar10;
    plVar3[2] = lVar8 + 1;
  }
  uStack_60 = 0;
  plStack_70 = plVar3;
  uStack_68 = uVar10;
  pdb_141173dd0(&lStack_58,&plStack_70,&UNK_142fa5d30,9,&UNK_142fa5d50,0x18,0x42000000);
  if (*(longlong *)(lStack_58 + 0x1c8) == 0) {
LAB_14072509f:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uVar7 = pdb_1400af0a0(lStack_58 + 0x1d0,alStack_50);
  lVar8 = *(longlong *)(lStack_58 + 0x1b0);
  bVar16 = (byte)(uVar7 >> 0x39);
  auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
  auVar17 = pshuflw(auVar17,auVar17,0);
  lVar11 = 0;
  do {
    uVar7 = uVar7 & *(ulonglong *)(lStack_58 + 0x1b8);
    pcVar1 = (char *)(lVar8 + uVar7);
    auVar23[0] = -(*pcVar1 == auVar17[0]);
    auVar23[1] = -(pcVar1[1] == auVar17[1]);
    auVar23[2] = -(pcVar1[2] == auVar17[2]);
    auVar23[3] = -(pcVar1[3] == auVar17[3]);
    auVar23[4] = -(pcVar1[4] == auVar17[4]);
    auVar23[5] = -(pcVar1[5] == auVar17[5]);
    auVar23[6] = -(pcVar1[6] == auVar17[6]);
    auVar23[7] = -(pcVar1[7] == auVar17[7]);
    auVar23[8] = -(pcVar1[8] == auVar17[0]);
    auVar23[9] = -(pcVar1[9] == auVar17[1]);
    auVar23[10] = -(pcVar1[10] == auVar17[2]);
    auVar23[0xb] = -(pcVar1[0xb] == auVar17[3]);
    auVar23[0xc] = -(pcVar1[0xc] == auVar17[4]);
    auVar23[0xd] = -(pcVar1[0xd] == auVar17[5]);
    auVar23[0xe] = -(pcVar1[0xe] == auVar17[6]);
    auVar23[0xf] = -(pcVar1[0xf] == auVar17[7]);
    uVar13 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
    uVar12 = (uint)uVar13;
    while (uVar13 != 0) {
      uVar4 = 0;
      for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      lVar14 = (uVar4 + uVar7 & *(ulonglong *)(lStack_58 + 0x1b8)) * -0xd8;
      if (alStack_50[0] == *(longlong *)(lVar8 + -0xd8 + lVar14)) {
        *(undefined4 *)(lVar8 + lVar14 + -0x14) = 0x42c80000;
LAB_1407250b5:
        param_1[2] = param_2[2];
        lVar8 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = lVar8;
        return param_1;
      }
      uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
      uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
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
                    (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar20 >> 0x37,0) & 1) != 0) || (SUB161(auVar20 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar20 >> 0x47,0) & 1) != 0) || (SUB161(auVar20 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar20 >> 0x57,0) & 1) != 0) || (SUB161(auVar20 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar20 >> 0x67,0) & 1) != 0) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') goto LAB_14072509f;
    uVar7 = uVar7 + lVar11 + 0x10;
    lVar11 = lVar11 + 0x10;
  } while( true );
LAB_140724ead:
  uVar10 = uVar10 & uVar7;
  pcVar1 = puVar9 + uVar10;
  auVar22[0] = -(*pcVar1 == auVar17[0]);
  auVar22[1] = -(pcVar1[1] == auVar17[1]);
  auVar22[2] = -(pcVar1[2] == auVar17[2]);
  auVar22[3] = -(pcVar1[3] == auVar17[3]);
  auVar22[4] = -(pcVar1[4] == auVar17[4]);
  auVar22[5] = -(pcVar1[5] == auVar17[5]);
  auVar22[6] = -(pcVar1[6] == auVar17[6]);
  auVar22[7] = -(pcVar1[7] == auVar17[7]);
  auVar22[8] = -(pcVar1[8] == auVar17[0]);
  auVar22[9] = -(pcVar1[9] == auVar17[1]);
  auVar22[10] = -(pcVar1[10] == auVar17[2]);
  auVar22[0xb] = -(pcVar1[0xb] == auVar17[3]);
  auVar22[0xc] = -(pcVar1[0xc] == auVar17[4]);
  auVar22[0xd] = -(pcVar1[0xd] == auVar17[5]);
  auVar22[0xe] = -(pcVar1[0xe] == auVar17[6]);
  auVar22[0xf] = -(pcVar1[0xf] == auVar17[7]);
  uVar13 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
  uVar12 = (uint)uVar13;
  while (uVar13 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    in_R11 = (uVar4 + uVar10 & uVar7) * -0xd8;
    if (alStack_50[0] == *(longlong *)(puVar9 + in_R11 + -0xd8)) goto LAB_140724f2a;
    uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
    uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
  }
  auVar19[0] = -(*pcVar1 == -1);
  auVar19[1] = -(pcVar1[1] == -1);
  auVar19[2] = -(pcVar1[2] == -1);
  auVar19[3] = -(pcVar1[3] == -1);
  auVar19[4] = -(pcVar1[4] == -1);
  auVar19[5] = -(pcVar1[5] == -1);
  auVar19[6] = -(pcVar1[6] == -1);
  auVar19[7] = -(pcVar1[7] == -1);
  auVar19[8] = -(pcVar1[8] == -1);
  auVar19[9] = -(pcVar1[9] == -1);
  auVar19[10] = -(pcVar1[10] == -1);
  auVar19[0xb] = -(pcVar1[0xb] == -1);
  auVar19[0xc] = -(pcVar1[0xc] == -1);
  auVar19[0xd] = -(pcVar1[0xd] == -1);
  auVar19[0xe] = -(pcVar1[0xe] == -1);
  auVar19[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x37,0) & 1) != 0) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') goto LAB_14072509f;
  uVar10 = uVar10 + lVar8 + 0x10;
  lVar8 = lVar8 + 0x10;
  goto LAB_140724ead;
}

