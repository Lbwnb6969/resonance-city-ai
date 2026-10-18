// VA 0x140b148d0, PDB extent 2899 bytes
// country_core::resources::stairs::visual::StairsVisualState::reset_edge
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/visual.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::stairs::visual::StairsVisualState::reset_edge
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/visual.rs
   Extent: 2899 */

void pdb_140b148d0(undefined8 *param_1,longlong *param_2,int param_3,int param_4,undefined8 *param_5
                  ,longlong param_6,undefined8 param_7,longlong param_8)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined1 (*pauVar3) [16];
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong *plVar12;
  byte *pbVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  byte bVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  ushort uVar21;
  longlong lVar22;
  undefined8 uVar23;
  bool bVar24;
  byte bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  longlong lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  byte *pbStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  longlong lStack_168;
  longlong lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  int iStack_148;
  undefined4 uStack_144;
  undefined8 *puStack_140;
  undefined1 *puStack_138;
  undefined1 (*pauStack_130) [16];
  undefined1 (*pauStack_128) [16];
  undefined1 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined1 *puStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 (*pauStack_e0) [16];
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined7 uStack_c0;
  uint uStack_b9;
  undefined5 uStack_b5;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined1 (*pauStack_68) [16];
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_c8 = (undefined *)CONCAT44(param_4,param_3);
  puStack_140 = param_1;
  uVar10 = pdb_1400af680(param_2 + 4);
  lVar14 = *param_2;
  bVar17 = (byte)(uVar10 >> 0x38);
  bVar25 = bVar17 >> 1;
  auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
  auVar26 = pshuflw(auVar26,auVar26,0);
  lVar15 = 0;
  uVar18 = uVar10;
  while( true ) {
    uVar18 = uVar18 & param_2[1];
    pcVar2 = (char *)(lVar14 + uVar18);
    auVar28[0] = -(*pcVar2 == auVar26[0]);
    auVar28[1] = -(pcVar2[1] == auVar26[1]);
    auVar28[2] = -(pcVar2[2] == auVar26[2]);
    auVar28[3] = -(pcVar2[3] == auVar26[3]);
    auVar28[4] = -(pcVar2[4] == auVar26[4]);
    auVar28[5] = -(pcVar2[5] == auVar26[5]);
    auVar28[6] = -(pcVar2[6] == auVar26[6]);
    auVar28[7] = -(pcVar2[7] == auVar26[7]);
    auVar28[8] = -(pcVar2[8] == auVar26[0]);
    auVar28[9] = -(pcVar2[9] == auVar26[1]);
    auVar28[10] = -(pcVar2[10] == auVar26[2]);
    auVar28[0xb] = -(pcVar2[0xb] == auVar26[3]);
    auVar28[0xc] = -(pcVar2[0xc] == auVar26[4]);
    auVar28[0xd] = -(pcVar2[0xd] == auVar26[5]);
    auVar28[0xe] = -(pcVar2[0xe] == auVar26[6]);
    auVar28[0xf] = -(pcVar2[0xf] == auVar26[7]);
    uVar21 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
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
    uVar19 = (uint)uVar21;
    while (uVar21 != 0) {
      uVar20 = 0;
      for (uVar6 = uVar19; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar20 = uVar20 + 1;
      }
      lVar22 = (uVar20 + uVar18 & param_2[1]) * -0x140;
      pauStack_68 = (undefined1 (*) [16])lVar15;
      if ((*(int *)(lVar14 + -0x140 + lVar22) == param_3) &&
         (*(int *)(lVar14 + -0x13c + lVar22) == param_4)) {
        pauVar16 = (undefined1 (*) [16])(lVar14 + lVar22);
        lVar14 = *(longlong *)pauVar16[-3];
        goto joined_r0x000140b14a00;
      }
      uVar21 = (ushort)(uVar19 - 1) & (ushort)uVar19;
      uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar21);
    }
    auVar27[0] = -(*pcVar2 == -1);
    auVar27[1] = -(pcVar2[1] == -1);
    auVar27[2] = -(pcVar2[2] == -1);
    auVar27[3] = -(pcVar2[3] == -1);
    auVar27[4] = -(pcVar2[4] == -1);
    auVar27[5] = -(pcVar2[5] == -1);
    auVar27[6] = -(pcVar2[6] == -1);
    auVar27[7] = -(pcVar2[7] == -1);
    auVar27[8] = -(pcVar2[8] == -1);
    auVar27[9] = -(pcVar2[9] == -1);
    auVar27[10] = -(pcVar2[10] == -1);
    auVar27[0xb] = -(pcVar2[0xb] == -1);
    auVar27[0xc] = -(pcVar2[0xc] == -1);
    auVar27[0xd] = -(pcVar2[0xd] == -1);
    auVar27[0xe] = -(pcVar2[0xe] == -1);
    auVar27[0xf] = -(pcVar2[0xf] == -1);
    uVar21 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
    if (uVar21 != 0) break;
    uVar18 = lVar15 + uVar18 + 0x10;
    lVar15 = lVar15 + 0x10;
  }
  if (param_2[2] == 0) {
    lVar15 = 1;
    pdb_142da87d0(param_2,1,param_2 + 4,CONCAT71((uint7)(byte)(uVar21 >> 8),1));
  }
  plVar12 = (longlong *)pdb_140f3bda0();
  if ((char)plVar12[2] == '\x01') {
    lVar14 = *plVar12;
    lVar15 = plVar12[1];
  }
  else {
    lVar14 = pdb_140f4fd10();
    *plVar12 = lVar14;
    plVar12[1] = lVar15;
    *(undefined1 *)(plVar12 + 2) = 1;
  }
  *plVar12 = lVar14 + 1;
  uStack_c0 = 0;
  uStack_b9 = 0;
  pauVar3 = (undefined1 (*) [16])*param_2;
  uVar18 = param_2[1];
  uVar10 = uVar10 & uVar18;
  auVar26 = *(undefined1 (*) [16])(*pauVar3 + uVar10);
  uVar21 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar26[0xf] >> 7) << 0xf
  ;
  uVar19 = (uint)uVar21;
  if (uVar21 == 0) {
    lVar22 = 0x10;
    do {
      uVar10 = uVar10 + lVar22 & uVar18;
      auVar26 = *(undefined1 (*) [16])(*pauVar3 + uVar10);
      lVar22 = lVar22 + 0x10;
      uVar19 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
    } while (uVar19 == 0);
  }
  uVar20 = 0;
  for (; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
    uVar20 = uVar20 + 1;
  }
  uVar10 = uVar20 + uVar10 & uVar18;
  bVar25 = (*pauVar3)[uVar10];
  if (-1 < (char)bVar25) {
    auVar26 = *pauVar3;
    uVar19 = 0;
    for (uVar20 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar26[0xf] >> 7) << 0xf); (uVar20 & 1) == 0;
        uVar20 = uVar20 >> 1 | 0x80000000) {
      uVar19 = uVar19 + 1;
    }
    uVar10 = (ulonglong)uVar19;
    bVar25 = (*pauVar3)[uVar10];
  }
  bVar17 = bVar17 >> 1;
  (*pauVar3)[uVar10] = bVar17;
  pauVar3[1][uVar10 - 0x10 & uVar18] = bVar17;
  pauVar16 = pauVar3 + uVar10 * -0x14;
  param_2[2] = param_2[2] - (ulonglong)(bVar25 & 1);
  *(ulonglong *)pauVar3[uVar10 * -0x14 + -0x14] = CONCAT44(param_4,param_3);
  *(undefined8 *)(pauVar3[uVar10 * -0x14 + -0x14] + 8) = 0;
  *(undefined8 *)pauVar3[uVar10 * -0x14 + -0x13] = 8;
  *(undefined1 (*) [16])(pauVar3[uVar10 * -0x14 + -0x13] + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(pauVar3[uVar10 * -0x14 + -0x12] + 8) = 8;
  pauVar3[uVar10 * -0x14 + -0x11] = (undefined1  [16])0x0;
  *(undefined8 *)pauVar3[uVar10 * -0x14 + -0x10] = 0x10;
  *(undefined1 (*) [16])(pauVar3[uVar10 * -0x14 + -0x10] + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(pauVar3[uVar10 * -0x14 + -0xf] + 8) = 8;
  pauVar3[uVar10 * -0x14 + -0xe] = (undefined1  [16])0x0;
  *(undefined8 *)pauVar3[uVar10 * -0x14 + -0xd] = 0x10;
  *(undefined8 *)(pauVar3[uVar10 * -0x14 + -0xd] + 8) = 0;
  *(undefined4 *)pauVar3[uVar10 * -0x14 + -0xc] = 0;
  *(undefined8 *)(pauVar3[uVar10 * -0x14 + -0xc] + 8) = 0;
  *(undefined8 *)(pauVar3[uVar10 * -0x14 + -0xb] + 8) = 0;
  pauVar3[uVar10 * -0x14 + -10][8] = 0;
  *(undefined8 *)pauVar3[uVar10 * -0x14 + -9] = 0;
  *(undefined8 *)(pauVar3[uVar10 * -0x14 + -9] + 8) = 4;
  pauVar3[uVar10 * -0x14 + -8] = (undefined1  [16])0x0;
  *(undefined8 *)pauVar3[uVar10 * -0x14 + -7] = 4;
  *(undefined8 *)(pauVar3[uVar10 * -0x14 + -7] + 8) = 0;
  uVar4 = _UNK_143054a38;
  *(undefined8 *)pauVar3[uVar10 * -0x14 + -5] = _DAT_143054a30;
  *(undefined8 *)(pauVar3[uVar10 * -0x14 + -5] + 8) = uVar4;
  uVar4 = _UNK_143054a28;
  *(undefined8 *)pauVar3[uVar10 * -0x14 + -6] = _DAT_143054a20;
  *(undefined8 *)(pauVar3[uVar10 * -0x14 + -6] + 8) = uVar4;
  *(longlong *)pauVar3[uVar10 * -0x14 + -4] = lVar14;
  *(longlong *)(pauVar3[uVar10 * -0x14 + -4] + 8) = lVar15;
  *(undefined8 *)pauVar3[uVar10 * -0x14 + -3] = 0;
  *(undefined8 *)pauVar3[uVar10 * -0x14 + -2] = 0;
  *(undefined **)(pauVar3[uVar10 * -0x14 + -2] + 8) = uStack_c8;
  *(undefined8 *)((longlong)(pauVar3[uVar10 * -0x14 + -2] + 8) + 8) = 0;
  *(undefined4 *)(pauVar3[uVar10 * -0x14 + -1] + 7) = 0;
  param_2[3] = param_2[3] + 1;
  lVar14 = *(longlong *)pauVar16[-3];
joined_r0x000140b14a00:
  if (lVar14 == 0) {
    pdb_14007ee60();
    pbVar13 = pub_1406abab0(0x20,8);
    if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x20);
    }
    pbVar13[0] = 0;
    pbVar13[1] = 0;
    pbVar13[2] = 0;
    pbVar13[3] = 0;
    pbVar13[4] = 0;
    pbVar13[5] = 0;
    pbVar13[6] = 0;
    pbVar13[7] = 0;
    pbVar13[8] = 4;
    pbVar13[9] = 0;
    pbVar13[10] = 0;
    pbVar13[0xb] = 0;
    pbVar13[0xc] = 0;
    pbVar13[0xd] = 0;
    pbVar13[0xe] = 0;
    pbVar13[0xf] = 0;
    pbVar13[0x10] = 0;
    pbVar13[0x11] = 0;
    pbVar13[0x12] = 0;
    pbVar13[0x13] = 0;
    pbVar13[0x14] = 0;
    pbVar13[0x15] = 0;
    pbVar13[0x16] = 0;
    pbVar13[0x17] = 0;
    pbVar13[0x18] = 0;
    lVar14 = *(longlong *)(param_6 + 0x48);
    do {
      lVar15 = *(longlong *)(lVar14 + 8);
      while (lVar15 != -1) {
        if (lVar15 < 0) {
          uStack_c8 = &UNK_1430739f8;
          uStack_c0 = 0x1402ed400;
          uStack_b9 = uStack_b9 & 0xffffff00;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143073a08,&uStack_c8,&UNK_143073c60);
        }
        LOCK();
        lVar22 = *(longlong *)(lVar14 + 8);
        bVar24 = lVar15 == lVar22;
        if (bVar24) {
          *(longlong *)(lVar14 + 8) = lVar15 + 1;
          lVar22 = lVar15;
        }
        UNLOCK();
        lVar15 = lVar22;
        if (bVar24) {
          *(longlong *)pauVar16[-3] = lVar14;
          *(byte **)(pauVar16[-3] + 8) = pbVar13;
          goto joined_r0x000140b14a0d;
        }
      }
    } while( true );
  }
  pbVar13 = *(byte **)(pauVar16[-3] + 8);
joined_r0x000140b14a0d:
  if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143382200);
  }
  LOCK();
  bVar24 = pbVar13[0x18] == 0;
  if (bVar24) {
    pbVar13[0x18] = 1;
  }
  UNLOCK();
  if (bVar24) {
    pdb_140e9a150();
    lVar14 = *(longlong *)(pbVar13 + 0x10);
  }
  else {
    pdb_142dbd1a0(pbVar13 + 0x18,1,1000000000);
    pdb_140e9a150(pbVar13 + 0x18);
    lVar14 = *(longlong *)(pbVar13 + 0x10);
  }
  if ((lVar14 == 0) ||
     (piVar11 = (int *)(*(longlong *)(pbVar13 + 8) + lVar14 * 4 + -4), piVar11 == (int *)0x0)) {
    lStack_198 = *(longlong *)(param_6 + 0x10);
    if (lStack_198 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143382218);
    }
    iStack_148 = (int)lStack_198 + -1;
  }
  else {
    iStack_148 = *piVar11;
    lStack_198 = *(longlong *)(param_6 + 0x10);
  }
  uStack_1a0 = *(undefined8 *)(param_6 + 8);
  uStack_190 = *(undefined8 *)(param_6 + 0x18);
  uStack_188 = *(undefined8 *)(param_6 + 0x20);
  uStack_178 = *(undefined8 *)(param_6 + 0x28);
  uStack_170 = *(undefined8 *)(param_6 + 0x30);
  lStack_168 = param_6 + 0x78;
  lStack_160 = param_6 + 0x58;
  uStack_158 = *(undefined8 *)(param_6 + 0x38);
  uStack_150 = *(undefined8 *)(param_6 + 0x40);
  pbStack_180 = pbVar13;
  pdb_141a77f20(&uStack_1a0);
  pdb_140b14460(pauVar16[-0xe] + 8,param_6,param_7);
  if (*(longlong *)pauVar16[-2] == 0) {
    pdb_14007ee60();
    pbVar13 = pub_1406abab0(0x20,8);
    if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x20);
    }
    pbVar13[0] = 0;
    pbVar13[1] = 0;
    pbVar13[2] = 0;
    pbVar13[3] = 0;
    pbVar13[4] = 0;
    pbVar13[5] = 0;
    pbVar13[6] = 0;
    pbVar13[7] = 0;
    pbVar13[8] = 4;
    pbVar13[9] = 0;
    pbVar13[10] = 0;
    pbVar13[0xb] = 0;
    pbVar13[0xc] = 0;
    pbVar13[0xd] = 0;
    pbVar13[0xe] = 0;
    pbVar13[0xf] = 0;
    pbVar13[0x10] = 0;
    pbVar13[0x11] = 0;
    pbVar13[0x12] = 0;
    pbVar13[0x13] = 0;
    pbVar13[0x14] = 0;
    pbVar13[0x15] = 0;
    pbVar13[0x16] = 0;
    pbVar13[0x17] = 0;
    pbVar13[0x18] = 0;
    lVar14 = *(longlong *)(param_8 + 0x48);
    do {
      lVar15 = *(longlong *)(lVar14 + 8);
      while (lVar15 != -1) {
        if (lVar15 < 0) {
          uStack_c8 = &UNK_1430739f8;
          uStack_c0 = 0x1402ed400;
          uStack_b9 = uStack_b9 & 0xffffff00;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143073a08,&uStack_c8,&UNK_143073c60);
        }
        LOCK();
        lVar22 = *(longlong *)(lVar14 + 8);
        bVar24 = lVar15 == lVar22;
        if (bVar24) {
          *(longlong *)(lVar14 + 8) = lVar15 + 1;
          lVar22 = lVar15;
        }
        UNLOCK();
        lVar15 = lVar22;
        if (bVar24) {
          *(longlong *)pauVar16[-2] = lVar14;
          *(byte **)(pauVar16[-2] + 8) = pbVar13;
          goto joined_r0x000140b15126;
        }
      }
    } while( true );
  }
  pbVar13 = *(byte **)(pauVar16[-2] + 8);
joined_r0x000140b15126:
  if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143382200);
  }
  LOCK();
  bVar24 = pbVar13[0x18] == 0;
  if (bVar24) {
    pbVar13[0x18] = 1;
  }
  UNLOCK();
  if (!bVar24) {
    pdb_142dbd1a0(pbVar13 + 0x18,1,1000000000);
  }
  pdb_140e9a150(pbVar13 + 0x18);
  if ((*(longlong *)(pbVar13 + 0x10) == 0) ||
     (piVar11 = (int *)(*(longlong *)(pbVar13 + 8) + *(longlong *)(pbVar13 + 0x10) * 4 + -4),
     piVar11 == (int *)0x0)) {
    lVar14 = *(longlong *)(param_8 + 0x10);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143382218);
    }
    iStack_70 = (int)lVar14 + -1;
  }
  else {
    iStack_70 = *piVar11;
    lVar14 = *(longlong *)(param_8 + 0x10);
  }
  uStack_c8 = *(undefined **)(param_8 + 8);
  uStack_b0 = *(undefined8 *)(param_8 + 0x20);
  uStack_a0 = *(undefined8 *)(param_8 + 0x28);
  uStack_98 = *(undefined8 *)(param_8 + 0x30);
  lStack_90 = param_8 + 0x78;
  uStack_80 = *(undefined8 *)(param_8 + 0x38);
  uStack_78 = *(undefined8 *)(param_8 + 0x40);
  lStack_88 = param_8 + 0x58;
  uStack_c0 = (undefined7)lVar14;
  uStack_b9._0_1_ = (undefined1)((ulonglong)lVar14 >> 0x38);
  uStack_b9._1_3_ = (undefined3)*(undefined8 *)(param_8 + 0x18);
  uStack_b5 = (undefined5)((ulonglong)*(undefined8 *)(param_8 + 0x18) >> 0x18);
  pbStack_a8 = pbVar13;
  pdb_141a77f20(&uStack_c8);
  puStack_138 = pauVar16[-0x14] + 8;
  puStack_120 = pauVar16[-1] + 8;
  pauStack_130 = pauVar16 + -0x12;
  pauStack_128 = pauVar16 + -6;
  pauVar16[-1][8] = 0;
  puStack_118 = *(undefined8 **)pauVar16[-0x13];
  lStack_100 = *(longlong *)(pauVar16[-0x13] + 8);
  *(undefined8 *)(pauVar16[-0x13] + 8) = 0;
  puStack_110 = puStack_118 + lStack_100;
  lStack_d8 = *(longlong *)pauVar16[-0x11];
  *(undefined8 *)pauVar16[-0x11] = 0;
  puStack_f0 = *(undefined8 **)(pauVar16[-0x12] + 8);
  puStack_e8 = puStack_f0 + lStack_d8;
  lStack_f8 = 0;
  uStack_d0 = 0;
  uVar4 = param_5[3];
  uVar5 = param_5[2];
  uVar7 = *param_5;
  uVar8 = param_5[1];
  puVar9 = puStack_138;
  pauStack_e0 = pauStack_130;
  lVar14 = lStack_f8;
  pauStack_68 = pauVar16;
  do {
    puStack_108 = puVar9;
    lStack_f8 = lVar14;
    if (puStack_118 == (undefined8 *)0x0) {
LAB_140b14fec:
      if ((puStack_f0 == (undefined8 *)0x0) || (puStack_f0 == puStack_e8)) {
LAB_140b15039:
        pdb_14097e260(&puStack_118);
        pauVar3 = pauStack_68;
        pauVar16 = pauStack_128;
        *(undefined8 *)(pauStack_68[-0x10] + 8) = 0;
        *(undefined8 *)pauStack_68[-0xe] = 0;
        if (*(longlong *)(pauStack_68[-5] + 8) != 0) {
          uVar18 = *(ulonglong *)(pauStack_68[-6] + 8);
          if (uVar18 == 0) {
            uVar10 = 0;
          }
          else {
            pub_142e32780(*(undefined8 *)*pauStack_128,0xff,uVar18 + 0x11);
            uVar10 = (uVar18 + 1 & 0xfffffffffffffff8) - (uVar18 + 1 >> 3);
            if (uVar18 < 8) {
              uVar10 = uVar18;
            }
          }
          *(undefined8 *)(pauVar3[-5] + 8) = 0;
          *(ulonglong *)pauVar3[-5] = uVar10;
        }
        *(undefined8 *)pauVar3[-8] = 0;
        *(undefined8 *)(pauVar3[-7] + 8) = 0;
        *(undefined2 *)(pauVar3[-1] + 9) = 0;
        *(undefined8 *)pauVar3[-1] = 0;
        puStack_140[10] = uStack_150;
        puStack_140[0xb] = CONCAT44(uStack_144,iStack_148);
        puStack_140[8] = lStack_160;
        puStack_140[9] = uStack_158;
        puStack_140[6] = uStack_170;
        puStack_140[7] = lStack_168;
        puStack_140[4] = pbStack_180;
        puStack_140[5] = uStack_178;
        puStack_140[2] = uStack_190;
        puStack_140[3] = uStack_188;
        *puStack_140 = uStack_1a0;
        puStack_140[1] = lStack_198;
        puStack_140[0xc] = uStack_c8;
        puStack_140[0xd] = CONCAT17((undefined1)uStack_b9,uStack_c0);
        puStack_140[0xe] = CONCAT53(uStack_b5,uStack_b9._1_3_);
        puStack_140[0xf] = uStack_b0;
        puStack_140[0x10] = pbStack_a8;
        puStack_140[0x11] = uStack_a0;
        puStack_140[0x12] = uStack_98;
        puStack_140[0x13] = lStack_90;
        puStack_140[0x14] = lStack_88;
        puStack_140[0x15] = uStack_80;
        puStack_140[0x16] = uStack_78;
        puStack_140[0x17] = CONCAT44(uStack_6c,iStack_70);
        puStack_140[0x18] = puStack_120;
        puStack_140[0x19] = puStack_138;
        puStack_140[0x1a] = pauStack_130;
        puStack_140[0x1b] = pauVar16;
        puStack_140[0x1c] = pauVar3[-0x11] + 8;
        puStack_140[0x1d] = pauVar3 + -0xf;
        return;
      }
      puVar1 = puStack_f0 + 1;
      uVar23 = *puStack_f0;
      puStack_f0 = puVar1;
      if ((int)uVar23 == 0) goto LAB_140b15039;
    }
    else if (puStack_118 == puStack_110) {
      uVar23 = 0;
LAB_140b14f93:
      puStack_110 = (undefined8 *)0x8;
      if (lVar14 != 0) {
        lVar15 = *(longlong *)(puVar9 + 0x10);
        if (lStack_100 != lVar15) {
          pub_142e32770(*(longlong *)(puVar9 + 8) + lVar15 * 8,
                        *(longlong *)(puVar9 + 8) + lStack_100 * 8,lVar14 * 8);
        }
        *(longlong *)(puVar9 + 0x10) = lVar15 + lVar14;
      }
      puStack_118 = (undefined8 *)0x0;
      if ((int)uVar23 == 0) goto LAB_140b14fec;
    }
    else {
      puVar1 = puStack_118 + 1;
      uVar23 = *puStack_118;
      puStack_118 = puVar1;
      if ((int)uVar23 == 0) goto LAB_140b14f93;
    }
    uStack_1c8 = uVar23;
    uStack_1c0 = uVar7;
    uStack_1b8 = uVar8;
    uStack_1b0 = uVar5;
    uStack_1a8 = uVar4;
    pdb_140f04aa0(&uStack_1c8,&UNK_1430551e0);
    puVar9 = puStack_108;
    lVar14 = lStack_f8;
  } while( true );
}

