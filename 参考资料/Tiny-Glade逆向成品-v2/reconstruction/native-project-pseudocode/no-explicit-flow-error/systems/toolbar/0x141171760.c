// VA 0x141171760, PDB extent 2396 bytes
// toolbar::mei::core::NodeContext::with<toolbar::menu::splash::ui::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::core::NodeContext::with<toolbar::menu::splash::ui::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 2396 */

longlong * pdb_141171760(longlong *param_1,longlong *param_2,undefined4 *param_3,float *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  undefined4 uVar3;
  float fVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  ushort uVar18;
  longlong lVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  lVar14 = *param_2;
  if (*(longlong *)(lVar14 + 0x1c8) != 0) {
    uVar3 = *param_3;
    fVar4 = *param_4;
    uVar10 = pdb_1400af0a0(lVar14 + 0x1d0,param_2 + 1);
    lVar15 = *(longlong *)(lVar14 + 0x1b0);
    bVar20 = (byte)(uVar10 >> 0x39);
    auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar21 = pshuflw(auVar21,auVar21,0);
    lVar16 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(lVar14 + 0x1b8);
      auVar37 = *(undefined1 (*) [16])(lVar15 + uVar10);
      auVar30[0] = -(auVar37[0] == auVar21[0]);
      auVar30[1] = -(auVar37[1] == auVar21[1]);
      auVar30[2] = -(auVar37[2] == auVar21[2]);
      auVar30[3] = -(auVar37[3] == auVar21[3]);
      auVar30[4] = -(auVar37[4] == auVar21[4]);
      auVar30[5] = -(auVar37[5] == auVar21[5]);
      auVar30[6] = -(auVar37[6] == auVar21[6]);
      auVar30[7] = -(auVar37[7] == auVar21[7]);
      auVar30[8] = -(auVar37[8] == auVar21[0]);
      auVar30[9] = -(auVar37[9] == auVar21[1]);
      auVar30[10] = -(auVar37[10] == auVar21[2]);
      auVar30[0xb] = -(auVar37[0xb] == auVar21[3]);
      auVar30[0xc] = -(auVar37[0xc] == auVar21[4]);
      auVar30[0xd] = -(auVar37[0xd] == auVar21[5]);
      auVar30[0xe] = -(auVar37[0xe] == auVar21[6]);
      auVar30[0xf] = -(auVar37[0xf] == auVar21[7]);
      uVar18 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
      uVar17 = (uint)uVar18;
      while (uVar18 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar17; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        lVar19 = (uVar6 + uVar10 & *(ulonglong *)(lVar14 + 0x1b8)) * -0xd8;
        if (param_2[1] == *(longlong *)(lVar15 + -0xd8 + lVar19)) {
          *(undefined4 *)(lVar15 + lVar19 + -0xc) = uVar3;
          puVar5 = (undefined *)param_2[1];
          puStack_68 = &UNK_14329cdaa;
          puStack_60 = (undefined *)0x4;
          puStack_80 = (undefined *)pdb_140bbbcb0(&puStack_68);
          uVar13 = _UNK_14329c338;
          puVar8 = _DAT_14329c330;
          puStack_78 = _DAT_14329c330;
          uStack_70 = _UNK_14329c338;
          puStack_78 = (undefined *)pdb_1400affa0(&puStack_80);
          puStack_80 = puVar5;
          uVar11 = pdb_1400b0130(&puStack_80);
          pdb_14072caa0(&puStack_80,param_2,uVar11);
          puVar5 = puStack_80;
          if (*(longlong *)(puStack_80 + 0x1c8) == 0) goto LAB_141171e37;
          uVar12 = pdb_1400af0a0(puStack_80 + 0x1d0,&puStack_78);
          lVar14 = *(longlong *)(puVar5 + 0x1b0);
          uVar10 = *(ulonglong *)(puVar5 + 0x1b8);
          bVar20 = (byte)(uVar12 >> 0x39);
          auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
          auVar21 = pshuflw(auVar21,auVar21,0);
          lVar15 = 0;
          goto LAB_141171911;
        }
        uVar18 = (ushort)(uVar17 - 1) & (ushort)uVar17;
        uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar18);
      }
      auVar22[0] = -(auVar37[0] == -1);
      auVar22[1] = -(auVar37[1] == -1);
      auVar22[2] = -(auVar37[2] == -1);
      auVar22[3] = -(auVar37[3] == -1);
      auVar22[4] = -(auVar37[4] == -1);
      auVar22[5] = -(auVar37[5] == -1);
      auVar22[6] = -(auVar37[6] == -1);
      auVar22[7] = -(auVar37[7] == -1);
      auVar22[8] = -(auVar37[8] == -1);
      auVar22[9] = -(auVar37[9] == -1);
      auVar22[10] = -(auVar37[10] == -1);
      auVar22[0xb] = -(auVar37[0xb] == -1);
      auVar22[0xc] = -(auVar37[0xc] == -1);
      auVar22[0xd] = -(auVar37[0xd] == -1);
      auVar22[0xe] = -(auVar37[0xe] == -1);
      auVar22[0xf] = -(auVar37[0xf] == -1);
      if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar22 >> 0x3f,0) & 1) != 0) || (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar22 >> 0x4f,0) & 1) != 0) || (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar22 >> 0x6f,0) & 1) != 0) || (SUB161(auVar22 >> 0x77,0) & 1) != 0) ||
          auVar22[0xf] < '\0') break;
      uVar10 = uVar10 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    }
  }
LAB_14117207d:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
LAB_141171911:
  uVar12 = uVar12 & uVar10;
  auVar37 = *(undefined1 (*) [16])(lVar14 + uVar12);
  auVar31[0] = -(auVar37[0] == auVar21[0]);
  auVar31[1] = -(auVar37[1] == auVar21[1]);
  auVar31[2] = -(auVar37[2] == auVar21[2]);
  auVar31[3] = -(auVar37[3] == auVar21[3]);
  auVar31[4] = -(auVar37[4] == auVar21[4]);
  auVar31[5] = -(auVar37[5] == auVar21[5]);
  auVar31[6] = -(auVar37[6] == auVar21[6]);
  auVar31[7] = -(auVar37[7] == auVar21[7]);
  auVar31[8] = -(auVar37[8] == auVar21[0]);
  auVar31[9] = -(auVar37[9] == auVar21[1]);
  auVar31[10] = -(auVar37[10] == auVar21[2]);
  auVar31[0xb] = -(auVar37[0xb] == auVar21[3]);
  auVar31[0xc] = -(auVar37[0xc] == auVar21[4]);
  auVar31[0xd] = -(auVar37[0xd] == auVar21[5]);
  auVar31[0xe] = -(auVar37[0xe] == auVar21[6]);
  auVar31[0xf] = -(auVar37[0xf] == auVar21[7]);
  uVar18 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
  uVar17 = (uint)uVar18;
  while (uVar18 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar17; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    lVar16 = (uVar6 + uVar12 & uVar10) * -0xd8;
    if (puStack_78 == *(undefined **)(lVar14 + -0xd8 + lVar16)) {
      lVar14 = lVar14 + lVar16;
      *(undefined1 (*) [16])(lVar14 + -0x88) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar14 + -0x98) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar14 + -0xa8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar14 + -0xb8) = (undefined1  [16])0x0;
      *(undefined8 *)(lVar14 + -0x79) = 0;
      *(undefined1 *)(lVar14 + -0x71) = 4;
      uStack_58 = uStack_70;
      puStack_68 = puStack_80;
      puStack_60 = puStack_78;
      pdb_141173dd0(&puStack_80,&puStack_68,&UNK_14329cdc0,0xc,&UNK_14329cdcc,0x16,fVar4);
      puVar5 = puStack_80;
      if (*(longlong *)(puStack_80 + 0x1c8) == 0) goto LAB_14117207d;
      uVar12 = pdb_1400af0a0(puStack_80 + 0x1d0,&puStack_78);
      puVar9 = puStack_60;
      lVar14 = *(longlong *)(puVar5 + 0x1b0);
      uVar10 = *(ulonglong *)(puVar5 + 0x1b8);
      bVar20 = (byte)(uVar12 >> 0x39);
      auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
      auVar21 = pshuflw(auVar21,auVar21,0);
      lVar15 = 0;
      goto LAB_141171a55;
    }
    uVar18 = (ushort)(uVar17 - 1) & (ushort)uVar17;
    uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar18);
  }
  auVar23[0] = -(auVar37[0] == -1);
  auVar23[1] = -(auVar37[1] == -1);
  auVar23[2] = -(auVar37[2] == -1);
  auVar23[3] = -(auVar37[3] == -1);
  auVar23[4] = -(auVar37[4] == -1);
  auVar23[5] = -(auVar37[5] == -1);
  auVar23[6] = -(auVar37[6] == -1);
  auVar23[7] = -(auVar37[7] == -1);
  auVar23[8] = -(auVar37[8] == -1);
  auVar23[9] = -(auVar37[9] == -1);
  auVar23[10] = -(auVar37[10] == -1);
  auVar23[0xb] = -(auVar37[0xb] == -1);
  auVar23[0xc] = -(auVar37[0xc] == -1);
  auVar23[0xd] = -(auVar37[0xd] == -1);
  auVar23[0xe] = -(auVar37[0xe] == -1);
  auVar23[0xf] = -(auVar37[0xf] == -1);
  if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar23 >> 0x37,0) & 1) != 0) || (SUB161(auVar23 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar23 >> 0x47,0) & 1) != 0) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') goto LAB_141171e37;
  uVar12 = uVar12 + lVar15 + 0x10;
  lVar15 = lVar15 + 0x10;
  goto LAB_141171911;
LAB_141171a55:
  uVar12 = uVar12 & uVar10;
  auVar37 = *(undefined1 (*) [16])(lVar14 + uVar12);
  auVar32[0] = -(auVar37[0] == auVar21[0]);
  auVar32[1] = -(auVar37[1] == auVar21[1]);
  auVar32[2] = -(auVar37[2] == auVar21[2]);
  auVar32[3] = -(auVar37[3] == auVar21[3]);
  auVar32[4] = -(auVar37[4] == auVar21[4]);
  auVar32[5] = -(auVar37[5] == auVar21[5]);
  auVar32[6] = -(auVar37[6] == auVar21[6]);
  auVar32[7] = -(auVar37[7] == auVar21[7]);
  auVar32[8] = -(auVar37[8] == auVar21[0]);
  auVar32[9] = -(auVar37[9] == auVar21[1]);
  auVar32[10] = -(auVar37[10] == auVar21[2]);
  auVar32[0xb] = -(auVar37[0xb] == auVar21[3]);
  auVar32[0xc] = -(auVar37[0xc] == auVar21[4]);
  auVar32[0xd] = -(auVar37[0xd] == auVar21[5]);
  auVar32[0xe] = -(auVar37[0xe] == auVar21[6]);
  auVar32[0xf] = -(auVar37[0xf] == auVar21[7]);
  uVar18 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
  uVar17 = (uint)uVar18;
  while (uVar18 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar17; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    lVar16 = (uVar6 + uVar12 & uVar10) * -0xd8;
    if (puStack_78 == *(undefined **)(lVar14 + -0xd8 + lVar16)) {
      pbVar1 = (byte *)(lVar14 + lVar16 + -5);
      *pbVar1 = *pbVar1 | 2;
      puStack_48 = &UNK_14329cde2;
      uStack_40 = 4;
      puStack_80 = (undefined *)pdb_140bbbcb0(&puStack_48);
      puStack_78 = puVar8;
      uStack_70 = uVar13;
      puStack_78 = (undefined *)pdb_1400affa0(&puStack_80);
      puStack_80 = puVar9;
      uVar11 = pdb_1400b0130(&puStack_80);
      pdb_14072caa0(&puStack_80,&puStack_68,uVar11);
      puVar5 = puStack_80;
      if (*(longlong *)(puStack_80 + 0x1c8) == 0) goto LAB_141171e37;
      uVar12 = pdb_1400af0a0(puStack_80 + 0x1d0,&puStack_78);
      lVar14 = *(longlong *)(puVar5 + 0x1b0);
      uVar10 = *(ulonglong *)(puVar5 + 0x1b8);
      bVar20 = (byte)(uVar12 >> 0x39);
      auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
      auVar21 = pshuflw(auVar21,auVar21,0);
      lVar15 = 0;
      goto LAB_141171b77;
    }
    uVar18 = (ushort)(uVar17 - 1) & (ushort)uVar17;
    uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar18);
  }
  auVar24[0] = -(auVar37[0] == -1);
  auVar24[1] = -(auVar37[1] == -1);
  auVar24[2] = -(auVar37[2] == -1);
  auVar24[3] = -(auVar37[3] == -1);
  auVar24[4] = -(auVar37[4] == -1);
  auVar24[5] = -(auVar37[5] == -1);
  auVar24[6] = -(auVar37[6] == -1);
  auVar24[7] = -(auVar37[7] == -1);
  auVar24[8] = -(auVar37[8] == -1);
  auVar24[9] = -(auVar37[9] == -1);
  auVar24[10] = -(auVar37[10] == -1);
  auVar24[0xb] = -(auVar37[0xb] == -1);
  auVar24[0xc] = -(auVar37[0xc] == -1);
  auVar24[0xd] = -(auVar37[0xd] == -1);
  auVar24[0xe] = -(auVar37[0xe] == -1);
  auVar24[0xf] = -(auVar37[0xf] == -1);
  if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') goto LAB_14117207d;
  uVar12 = uVar12 + lVar15 + 0x10;
  lVar15 = lVar15 + 0x10;
  goto LAB_141171a55;
LAB_141171b77:
  uVar12 = uVar12 & uVar10;
  auVar37 = *(undefined1 (*) [16])(lVar14 + uVar12);
  auVar33[0] = -(auVar37[0] == auVar21[0]);
  auVar33[1] = -(auVar37[1] == auVar21[1]);
  auVar33[2] = -(auVar37[2] == auVar21[2]);
  auVar33[3] = -(auVar37[3] == auVar21[3]);
  auVar33[4] = -(auVar37[4] == auVar21[4]);
  auVar33[5] = -(auVar37[5] == auVar21[5]);
  auVar33[6] = -(auVar37[6] == auVar21[6]);
  auVar33[7] = -(auVar37[7] == auVar21[7]);
  auVar33[8] = -(auVar37[8] == auVar21[0]);
  auVar33[9] = -(auVar37[9] == auVar21[1]);
  auVar33[10] = -(auVar37[10] == auVar21[2]);
  auVar33[0xb] = -(auVar37[0xb] == auVar21[3]);
  auVar33[0xc] = -(auVar37[0xc] == auVar21[4]);
  auVar33[0xd] = -(auVar37[0xd] == auVar21[5]);
  auVar33[0xe] = -(auVar37[0xe] == auVar21[6]);
  auVar33[0xf] = -(auVar37[0xf] == auVar21[7]);
  uVar18 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
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
  uVar17 = (uint)uVar18;
  while (uVar18 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar17; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    lVar16 = (uVar6 + uVar12 & uVar10) * -0xd8;
    if (puStack_78 == *(undefined **)(lVar14 + -0xd8 + lVar16)) {
      lVar14 = lVar14 + lVar16;
      *(undefined1 (*) [16])(lVar14 + -0x9c) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar14 + -0xa8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar14 + -0xb8) = (undefined1  [16])0x0;
      *(undefined4 *)(lVar14 + -0x8c) = 0x41a00000;
      *(undefined1 (*) [16])(lVar14 + -0x88) = (undefined1  [16])0x0;
      *(undefined8 *)(lVar14 + -0x79) = 0;
      *(undefined1 *)(lVar14 + -0x71) = 4;
      pdb_141173dd0(&puStack_80,&puStack_68,&UNK_14329cde6,5,&UNK_14329cdeb,10,
                    _DAT_142e36f50 * fVar4);
      puVar5 = puStack_80;
      if (*(longlong *)(puStack_80 + 0x1c8) == 0) goto LAB_14117207d;
      uVar12 = pdb_1400af0a0(puStack_80 + 0x1d0,&puStack_78);
      puVar9 = puStack_60;
      lVar14 = *(longlong *)(puVar5 + 0x1b0);
      uVar10 = *(ulonglong *)(puVar5 + 0x1b8);
      bVar20 = (byte)(uVar12 >> 0x39);
      auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
      auVar21 = pshuflw(auVar21,auVar21,0);
      lVar15 = 0;
      goto LAB_141171cb4;
    }
    uVar18 = (ushort)(uVar17 - 1) & (ushort)uVar17;
    uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar18);
  }
  auVar25[0] = -(auVar37[0] == -1);
  auVar25[1] = -(auVar37[1] == -1);
  auVar25[2] = -(auVar37[2] == -1);
  auVar25[3] = -(auVar37[3] == -1);
  auVar25[4] = -(auVar37[4] == -1);
  auVar25[5] = -(auVar37[5] == -1);
  auVar25[6] = -(auVar37[6] == -1);
  auVar25[7] = -(auVar37[7] == -1);
  auVar25[8] = -(auVar37[8] == -1);
  auVar25[9] = -(auVar37[9] == -1);
  auVar25[10] = -(auVar37[10] == -1);
  auVar25[0xb] = -(auVar37[0xb] == -1);
  auVar25[0xc] = -(auVar37[0xc] == -1);
  auVar25[0xd] = -(auVar37[0xd] == -1);
  auVar25[0xe] = -(auVar37[0xe] == -1);
  auVar25[0xf] = -(auVar37[0xf] == -1);
  if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x37,0) & 1) != 0) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') goto LAB_141171e37;
  uVar12 = uVar12 + lVar15 + 0x10;
  lVar15 = lVar15 + 0x10;
  goto LAB_141171b77;
LAB_141171cb4:
  uVar12 = uVar12 & uVar10;
  auVar37 = *(undefined1 (*) [16])(lVar14 + uVar12);
  auVar34[0] = -(auVar37[0] == auVar21[0]);
  auVar34[1] = -(auVar37[1] == auVar21[1]);
  auVar34[2] = -(auVar37[2] == auVar21[2]);
  auVar34[3] = -(auVar37[3] == auVar21[3]);
  auVar34[4] = -(auVar37[4] == auVar21[4]);
  auVar34[5] = -(auVar37[5] == auVar21[5]);
  auVar34[6] = -(auVar37[6] == auVar21[6]);
  auVar34[7] = -(auVar37[7] == auVar21[7]);
  auVar34[8] = -(auVar37[8] == auVar21[0]);
  auVar34[9] = -(auVar37[9] == auVar21[1]);
  auVar34[10] = -(auVar37[10] == auVar21[2]);
  auVar34[0xb] = -(auVar37[0xb] == auVar21[3]);
  auVar34[0xc] = -(auVar37[0xc] == auVar21[4]);
  auVar34[0xd] = -(auVar37[0xd] == auVar21[5]);
  auVar34[0xe] = -(auVar37[0xe] == auVar21[6]);
  auVar34[0xf] = -(auVar37[0xf] == auVar21[7]);
  uVar18 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
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
  uVar17 = (uint)uVar18;
  while (uVar18 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar17; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    lVar16 = (uVar6 + uVar12 & uVar10) * -0xd8;
    if (puStack_78 == *(undefined **)(lVar14 + -0xd8 + lVar16)) {
      pbVar1 = (byte *)(lVar14 + lVar16 + -5);
      *pbVar1 = *pbVar1 | 2;
      puStack_48 = &UNK_14329cdf5;
      uStack_40 = 4;
      puStack_80 = (undefined *)pdb_140bbbcb0(&puStack_48);
      puStack_78 = puVar8;
      uStack_70 = uVar13;
      puStack_78 = (undefined *)pdb_1400affa0(&puStack_80);
      puStack_80 = puVar9;
      uVar13 = pdb_1400b0130(&puStack_80);
      pdb_14072caa0(&puStack_80,&puStack_68,uVar13);
      puVar5 = puStack_80;
      if (*(longlong *)(puStack_80 + 0x1c8) == 0) goto LAB_141171e37;
      uVar12 = pdb_1400af0a0(puStack_80 + 0x1d0,&puStack_78);
      lVar14 = *(longlong *)(puVar5 + 0x1b0);
      uVar10 = *(ulonglong *)(puVar5 + 0x1b8);
      bVar20 = (byte)(uVar12 >> 0x39);
      auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
      auVar21 = pshuflw(auVar21,auVar21,0);
      lVar15 = 0;
      goto LAB_141171dd6;
    }
    uVar18 = (ushort)(uVar17 - 1) & (ushort)uVar17;
    uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar18);
  }
  auVar26[0] = -(auVar37[0] == -1);
  auVar26[1] = -(auVar37[1] == -1);
  auVar26[2] = -(auVar37[2] == -1);
  auVar26[3] = -(auVar37[3] == -1);
  auVar26[4] = -(auVar37[4] == -1);
  auVar26[5] = -(auVar37[5] == -1);
  auVar26[6] = -(auVar37[6] == -1);
  auVar26[7] = -(auVar37[7] == -1);
  auVar26[8] = -(auVar37[8] == -1);
  auVar26[9] = -(auVar37[9] == -1);
  auVar26[10] = -(auVar37[10] == -1);
  auVar26[0xb] = -(auVar37[0xb] == -1);
  auVar26[0xc] = -(auVar37[0xc] == -1);
  auVar26[0xd] = -(auVar37[0xd] == -1);
  auVar26[0xe] = -(auVar37[0xe] == -1);
  auVar26[0xf] = -(auVar37[0xf] == -1);
  if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 || (SUB161(auVar26 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar26 >> 0x17,0) & 1) != 0) || (SUB161(auVar26 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar26 >> 0x27,0) & 1) != 0) || (SUB161(auVar26 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar26 >> 0x37,0) & 1) != 0) || (SUB161(auVar26 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar26 >> 0x47,0) & 1) != 0) || (SUB161(auVar26 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar26 >> 0x57,0) & 1) != 0) || (SUB161(auVar26 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar26 >> 0x67,0) & 1) != 0) || (SUB161(auVar26 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar26 >> 0x77,0) & 1) != 0) || auVar26[0xf] < '\0') goto LAB_14117207d;
  uVar12 = uVar12 + lVar15 + 0x10;
  lVar15 = lVar15 + 0x10;
  goto LAB_141171cb4;
LAB_141171dd6:
  uVar12 = uVar12 & uVar10;
  auVar37 = *(undefined1 (*) [16])(lVar14 + uVar12);
  auVar35[0] = -(auVar37[0] == auVar21[0]);
  auVar35[1] = -(auVar37[1] == auVar21[1]);
  auVar35[2] = -(auVar37[2] == auVar21[2]);
  auVar35[3] = -(auVar37[3] == auVar21[3]);
  auVar35[4] = -(auVar37[4] == auVar21[4]);
  auVar35[5] = -(auVar37[5] == auVar21[5]);
  auVar35[6] = -(auVar37[6] == auVar21[6]);
  auVar35[7] = -(auVar37[7] == auVar21[7]);
  auVar35[8] = -(auVar37[8] == auVar21[0]);
  auVar35[9] = -(auVar37[9] == auVar21[1]);
  auVar35[10] = -(auVar37[10] == auVar21[2]);
  auVar35[0xb] = -(auVar37[0xb] == auVar21[3]);
  auVar35[0xc] = -(auVar37[0xc] == auVar21[4]);
  auVar35[0xd] = -(auVar37[0xd] == auVar21[5]);
  auVar35[0xe] = -(auVar37[0xe] == auVar21[6]);
  auVar35[0xf] = -(auVar37[0xf] == auVar21[7]);
  uVar18 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
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
  uVar17 = (uint)uVar18;
  while (uVar18 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar17; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    lVar16 = (uVar6 + uVar12 & uVar10) * -0xd8;
    if (puStack_78 == *(undefined **)(lVar14 + -0xd8 + lVar16)) {
      lVar14 = lVar14 + lVar16;
      *(undefined1 (*) [16])(lVar14 + -0x9c) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar14 + -0xa8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar14 + -0xb8) = (undefined1  [16])0x0;
      *(undefined4 *)(lVar14 + -0x8c) = 0x41200000;
      *(undefined1 (*) [16])(lVar14 + -0x88) = (undefined1  [16])0x0;
      *(undefined8 *)(lVar14 + -0x79) = 0;
      *(undefined1 *)(lVar14 + -0x71) = 4;
      pdb_141173dd0(&puStack_80,&puStack_68,&UNK_14329cdf9,6,&UNK_14329cdff,0x10,
                    _DAT_142e3c670 * fVar4);
      puVar5 = puStack_80;
      if (*(longlong *)(puStack_80 + 0x1c8) == 0) goto LAB_14117207d;
      uVar12 = pdb_1400af0a0(puStack_80 + 0x1d0,&puStack_78);
      lVar14 = *(longlong *)(puVar5 + 0x1b0);
      uVar10 = *(ulonglong *)(puVar5 + 0x1b8);
      bVar20 = (byte)(uVar12 >> 0x39);
      auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
      auVar21 = pshuflw(auVar21,auVar21,0);
      lVar15 = 0;
      goto LAB_141171f1b;
    }
    uVar18 = (ushort)(uVar17 - 1) & (ushort)uVar17;
    uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar18);
  }
  auVar27[0] = -(auVar37[0] == -1);
  auVar27[1] = -(auVar37[1] == -1);
  auVar27[2] = -(auVar37[2] == -1);
  auVar27[3] = -(auVar37[3] == -1);
  auVar27[4] = -(auVar37[4] == -1);
  auVar27[5] = -(auVar37[5] == -1);
  auVar27[6] = -(auVar37[6] == -1);
  auVar27[7] = -(auVar37[7] == -1);
  auVar27[8] = -(auVar37[8] == -1);
  auVar27[9] = -(auVar37[9] == -1);
  auVar27[10] = -(auVar37[10] == -1);
  auVar27[0xb] = -(auVar37[0xb] == -1);
  auVar27[0xc] = -(auVar37[0xc] == -1);
  auVar27[0xd] = -(auVar37[0xd] == -1);
  auVar27[0xe] = -(auVar37[0xe] == -1);
  auVar27[0xf] = -(auVar37[0xf] == -1);
  if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar27 >> 0x37,0) & 1) != 0) || (SUB161(auVar27 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar27 >> 0x47,0) & 1) != 0) || (SUB161(auVar27 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar27 >> 0x57,0) & 1) != 0) || (SUB161(auVar27 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar27 >> 0x67,0) & 1) != 0) || (SUB161(auVar27 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar27 >> 0x77,0) & 1) != 0) || auVar27[0xf] < '\0') {
LAB_141171e37:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b30);
  }
  uVar12 = uVar12 + lVar15 + 0x10;
  lVar15 = lVar15 + 0x10;
  goto LAB_141171dd6;
LAB_141171f1b:
  uVar12 = uVar12 & uVar10;
  auVar37 = *(undefined1 (*) [16])(lVar14 + uVar12);
  auVar36[0] = -(auVar37[0] == auVar21[0]);
  auVar36[1] = -(auVar37[1] == auVar21[1]);
  auVar36[2] = -(auVar37[2] == auVar21[2]);
  auVar36[3] = -(auVar37[3] == auVar21[3]);
  auVar36[4] = -(auVar37[4] == auVar21[4]);
  auVar36[5] = -(auVar37[5] == auVar21[5]);
  auVar36[6] = -(auVar37[6] == auVar21[6]);
  auVar36[7] = -(auVar37[7] == auVar21[7]);
  auVar36[8] = -(auVar37[8] == auVar21[0]);
  auVar36[9] = -(auVar37[9] == auVar21[1]);
  auVar36[10] = -(auVar37[10] == auVar21[2]);
  auVar36[0xb] = -(auVar37[0xb] == auVar21[3]);
  auVar36[0xc] = -(auVar37[0xc] == auVar21[4]);
  auVar36[0xd] = -(auVar37[0xd] == auVar21[5]);
  auVar36[0xe] = -(auVar37[0xe] == auVar21[6]);
  auVar36[0xf] = -(auVar37[0xf] == auVar21[7]);
  uVar18 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
  uVar17 = (uint)uVar18;
  while (uVar18 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar17; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    lVar16 = (uVar6 + uVar12 & uVar10) * -0xd8;
    if (puStack_78 == *(undefined **)(lVar14 + -0xd8 + lVar16)) {
      pbVar1 = (byte *)(lVar14 + lVar16 + -5);
      *pbVar1 = *pbVar1 | 2;
      pdb_141173dd0(&puStack_80,param_2,&UNK_14329cdae,4,&UNK_14329cdb2,0xe,fVar4 * _DAT_142e3798c);
      puVar5 = puStack_80;
      if (*(longlong *)(puStack_80 + 0x1c8) != 0) {
        uVar12 = pdb_1400af0a0(puStack_80 + 0x1d0,&puStack_78);
        lVar14 = *(longlong *)(puVar5 + 0x1b0);
        uVar10 = *(ulonglong *)(puVar5 + 0x1b8);
        bVar20 = (byte)(uVar12 >> 0x39);
        auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
        auVar21 = pshuflw(auVar21,auVar21,0);
        lVar15 = 0;
        while( true ) {
          uVar12 = uVar12 & uVar10;
          pcVar2 = (char *)(lVar14 + uVar12);
          auVar37[0] = -(*pcVar2 == auVar21[0]);
          auVar37[1] = -(pcVar2[1] == auVar21[1]);
          auVar37[2] = -(pcVar2[2] == auVar21[2]);
          auVar37[3] = -(pcVar2[3] == auVar21[3]);
          auVar37[4] = -(pcVar2[4] == auVar21[4]);
          auVar37[5] = -(pcVar2[5] == auVar21[5]);
          auVar37[6] = -(pcVar2[6] == auVar21[6]);
          auVar37[7] = -(pcVar2[7] == auVar21[7]);
          auVar37[8] = -(pcVar2[8] == auVar21[0]);
          auVar37[9] = -(pcVar2[9] == auVar21[1]);
          auVar37[10] = -(pcVar2[10] == auVar21[2]);
          auVar37[0xb] = -(pcVar2[0xb] == auVar21[3]);
          auVar37[0xc] = -(pcVar2[0xc] == auVar21[4]);
          auVar37[0xd] = -(pcVar2[0xd] == auVar21[5]);
          auVar37[0xe] = -(pcVar2[0xe] == auVar21[6]);
          auVar37[0xf] = -(pcVar2[0xf] == auVar21[7]);
          uVar18 = (ushort)(SUB161(auVar37 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar37[0xf] >> 7) << 0xf;
          uVar17 = (uint)uVar18;
          while (uVar18 != 0) {
            uVar6 = 0;
            for (uVar7 = uVar17; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar6 = uVar6 + 1;
            }
            lVar16 = (uVar6 + uVar12 & uVar10) * -0xd8;
            if (puStack_78 == *(undefined **)(lVar14 + -0xd8 + lVar16)) {
              pbVar1 = (byte *)(lVar14 + lVar16 + -5);
              *pbVar1 = *pbVar1 | 2;
              param_1[2] = param_2[2];
              lVar14 = param_2[1];
              *param_1 = *param_2;
              param_1[1] = lVar14;
              return param_1;
            }
            uVar18 = (ushort)(uVar17 - 1) & (ushort)uVar17;
            uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar18);
          }
          auVar29[0] = -(*pcVar2 == -1);
          auVar29[1] = -(pcVar2[1] == -1);
          auVar29[2] = -(pcVar2[2] == -1);
          auVar29[3] = -(pcVar2[3] == -1);
          auVar29[4] = -(pcVar2[4] == -1);
          auVar29[5] = -(pcVar2[5] == -1);
          auVar29[6] = -(pcVar2[6] == -1);
          auVar29[7] = -(pcVar2[7] == -1);
          auVar29[8] = -(pcVar2[8] == -1);
          auVar29[9] = -(pcVar2[9] == -1);
          auVar29[10] = -(pcVar2[10] == -1);
          auVar29[0xb] = -(pcVar2[0xb] == -1);
          auVar29[0xc] = -(pcVar2[0xc] == -1);
          auVar29[0xd] = -(pcVar2[0xd] == -1);
          auVar29[0xe] = -(pcVar2[0xe] == -1);
          auVar29[0xf] = -(pcVar2[0xf] == -1);
          if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar29 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar29 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar29 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar29 >> 0x2f,0) & 1) != 0) || (SUB161(auVar29 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar29 >> 0x47,0) & 1) != 0) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') break;
          uVar12 = uVar12 + lVar15 + 0x10;
          lVar15 = lVar15 + 0x10;
        }
      }
      goto LAB_14117207d;
    }
    uVar18 = (ushort)(uVar17 - 1) & (ushort)uVar17;
    uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar18);
  }
  auVar28[0] = -(auVar37[0] == -1);
  auVar28[1] = -(auVar37[1] == -1);
  auVar28[2] = -(auVar37[2] == -1);
  auVar28[3] = -(auVar37[3] == -1);
  auVar28[4] = -(auVar37[4] == -1);
  auVar28[5] = -(auVar37[5] == -1);
  auVar28[6] = -(auVar37[6] == -1);
  auVar28[7] = -(auVar37[7] == -1);
  auVar28[8] = -(auVar37[8] == -1);
  auVar28[9] = -(auVar37[9] == -1);
  auVar28[10] = -(auVar37[10] == -1);
  auVar28[0xb] = -(auVar37[0xb] == -1);
  auVar28[0xc] = -(auVar37[0xc] == -1);
  auVar28[0xd] = -(auVar37[0xd] == -1);
  auVar28[0xe] = -(auVar37[0xe] == -1);
  auVar28[0xf] = -(auVar37[0xf] == -1);
  if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar28 >> 0x17,0) & 1) != 0) || (SUB161(auVar28 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar28 >> 0x27,0) & 1) != 0) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar28 >> 0x37,0) & 1) != 0) || (SUB161(auVar28 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar28 >> 0x47,0) & 1) != 0) || (SUB161(auVar28 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar28 >> 0x57,0) & 1) != 0) || (SUB161(auVar28 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar28 >> 0x67,0) & 1) != 0) || (SUB161(auVar28 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar28 >> 0x77,0) & 1) != 0) || auVar28[0xf] < '\0') goto LAB_14117207d;
  uVar12 = uVar12 + lVar15 + 0x10;
  lVar15 = lVar15 + 0x10;
  goto LAB_141171f1b;
}

