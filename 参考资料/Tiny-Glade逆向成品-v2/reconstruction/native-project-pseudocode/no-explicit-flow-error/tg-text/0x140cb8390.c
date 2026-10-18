// VA 0x140cb8390, PDB extent 2515 bytes
// tg_text::TextRenderer::get_glyph
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_text::TextRenderer::get_glyph
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 2515 */

undefined4 * pdb_140cb8390(undefined4 *param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  ulonglong *puVar2;
  undefined1 (*pauVar3) [16];
  ushort uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined2 uVar16;
  int *piVar17;
  int *piVar18;
  uint uVar19;
  ushort uVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  int *piVar25;
  undefined2 uVar26;
  undefined1 (*pauVar27) [16];
  uint uVar28;
  undefined1 (*pauVar29) [16];
  byte bVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 unaff_XMM6_Ba;
  char cVar37;
  undefined1 unaff_XMM6_Bb;
  char cVar38;
  undefined1 unaff_XMM6_Bc;
  char cVar39;
  undefined1 unaff_XMM6_Bd;
  char cVar40;
  undefined1 unaff_XMM6_Be;
  char cVar41;
  undefined1 unaff_XMM6_Bf;
  char cVar42;
  undefined1 unaff_XMM6_Bg;
  char cVar43;
  undefined1 unaff_XMM6_Bh;
  char cVar44;
  undefined1 unaff_XMM6_Bi;
  char cVar45;
  undefined1 unaff_XMM6_Bj;
  char cVar46;
  undefined1 unaff_XMM6_Bk;
  char cVar47;
  undefined1 unaff_XMM6_Bl;
  char cVar48;
  undefined1 unaff_XMM6_Bm;
  char cVar49;
  undefined1 unaff_XMM6_Bn;
  char cVar50;
  undefined1 unaff_XMM6_Bo;
  char cVar51;
  undefined1 unaff_XMM6_Bp;
  char cVar52;
  longlong lStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  ulonglong uStack_188;
  byte *pbStack_180;
  undefined8 uStack_178;
  uint uStack_170;
  int iStack_16c;
  uint uStack_168;
  int iStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulonglong uStack_150;
  undefined8 uStack_148;
  undefined4 *puStack_140;
  longlong lStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  longlong lStack_120;
  undefined *puStack_118;
  longlong *plStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  longlong *plStack_d8;
  longlong lStack_d0;
  uint uStack_c8;
  int iStack_c4;
  longlong lStack_c0;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  uint uStack_b4;
  uint uStack_b0;
  int iStack_ac;
  longlong lStack_a0;
  int iStack_98;
  uint uStack_94;
  undefined *puStack_90;
  byte *pbStack_88;
  undefined1 uStack_79;
  longlong lStack_78;
  ulonglong uStack_70;
  char cStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  plVar14 = (longlong *)(param_3 + 8);
  lStack_78 = param_2;
  if (*(longlong *)(param_2 + 0x480) != 0) {
    puVar9 = (undefined *)pdb_141cbda40(param_2 + 0x488,plVar14);
    lVar24 = *(longlong *)(param_2 + 0x468);
    puVar2 = (ulonglong *)(param_2 + 0x470);
    bVar30 = (byte)((ulonglong)puVar9 >> 0x39);
    auVar31 = ZEXT216(CONCAT11(bVar30,bVar30));
    auVar31 = pshuflw(auVar31,auVar31,0);
    lStack_a0 = CONCAT62(lStack_a0._2_6_,*(short *)(param_3 + 0x18));
    puStack_90 = (undefined *)0x0;
    while( true ) {
      uVar10 = (ulonglong)puVar9 & *puVar2;
      pcVar1 = (char *)(lVar24 + uVar10);
      auVar36[0] = -(*pcVar1 == auVar31[0]);
      auVar36[1] = -(pcVar1[1] == auVar31[1]);
      auVar36[2] = -(pcVar1[2] == auVar31[2]);
      auVar36[3] = -(pcVar1[3] == auVar31[3]);
      auVar36[4] = -(pcVar1[4] == auVar31[4]);
      auVar36[5] = -(pcVar1[5] == auVar31[5]);
      auVar36[6] = -(pcVar1[6] == auVar31[6]);
      auVar36[7] = -(pcVar1[7] == auVar31[7]);
      auVar36[8] = -(pcVar1[8] == auVar31[0]);
      auVar36[9] = -(pcVar1[9] == auVar31[1]);
      auVar36[10] = -(pcVar1[10] == auVar31[2]);
      auVar36[0xb] = -(pcVar1[0xb] == auVar31[3]);
      auVar36[0xc] = -(pcVar1[0xc] == auVar31[4]);
      auVar36[0xd] = -(pcVar1[0xd] == auVar31[5]);
      auVar36[0xe] = -(pcVar1[0xe] == auVar31[6]);
      auVar36[0xf] = -(pcVar1[0xf] == auVar31[7]);
      uVar20 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
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
      uVar19 = (uint)uVar20;
      while (uVar20 != 0) {
        uVar28 = 0;
        for (uVar22 = uVar19; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
          uVar28 = uVar28 + 1;
        }
        uVar21 = uVar28 + uVar10 & *puVar2;
        if (((((*(short *)(param_3 + 0x18) == *(short *)(lVar24 + -0x14 + uVar21 * -0x24)) &&
              (lVar15 = lVar24 + uVar21 * -0x24,
              *(int *)(param_3 + 0x10) == *(int *)(lVar15 + -0x1c))) &&
             (*(int *)(param_3 + 0xc) == *(int *)(lVar15 + -0x20))) &&
            ((*(int *)(param_3 + 8) == *(int *)(lVar15 + -0x24) &&
             (*(char *)(param_3 + 0x1a) == *(char *)(lVar15 + -0x12))))) &&
           ((*(char *)(param_3 + 0x1b) == *(char *)(lVar15 + -0x11) &&
            (*(int *)(param_3 + 0x14) == *(int *)(lVar15 + -0x18))))) {
          uVar8 = *(undefined8 *)(lVar15 + -8);
          *(undefined8 *)(param_1 + 1) = *(undefined8 *)(lVar15 + -0x10);
          *(undefined8 *)(param_1 + 3) = uVar8;
          *param_1 = 1;
          return param_1;
        }
        uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
        uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
        param_2 = lStack_78;
      }
      auVar34[0] = -(*pcVar1 == -1);
      auVar34[1] = -(pcVar1[1] == -1);
      auVar34[2] = -(pcVar1[2] == -1);
      auVar34[3] = -(pcVar1[3] == -1);
      auVar34[4] = -(pcVar1[4] == -1);
      auVar34[5] = -(pcVar1[5] == -1);
      auVar34[6] = -(pcVar1[6] == -1);
      auVar34[7] = -(pcVar1[7] == -1);
      auVar34[8] = -(pcVar1[8] == -1);
      auVar34[9] = -(pcVar1[9] == -1);
      auVar34[10] = -(pcVar1[10] == -1);
      auVar34[0xb] = -(pcVar1[0xb] == -1);
      auVar34[0xc] = -(pcVar1[0xc] == -1);
      auVar34[0xd] = -(pcVar1[0xd] == -1);
      auVar34[0xe] = -(pcVar1[0xe] == -1);
      auVar34[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar34 >> 0x17,0) & 1) != 0) || (SUB161(auVar34 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar34 >> 0x27,0) & 1) != 0) || (SUB161(auVar34 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar34 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar34 >> 0x3f,0) & 1) != 0) || (SUB161(auVar34 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar34 >> 0x4f,0) & 1) != 0) || (SUB161(auVar34 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar34 >> 0x5f,0) & 1) != 0) || (SUB161(auVar34 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar34 >> 0x6f,0) & 1) != 0) || (SUB161(auVar34 >> 0x77,0) & 1) != 0) ||
          auVar34[0xf] < '\0') break;
      puVar9 = puStack_90 + uVar10 + 0x10;
      puStack_90 = puStack_90 + 0x10;
    }
  }
  *param_1 = 0;
  uStack_198 = *(undefined4 *)(param_3 + 0x18);
  lStack_1a8 = *plVar14;
  uStack_1a0 = *(undefined8 *)(param_3 + 0x10);
  uStack_128 = CONCAT44(uStack_128._4_4_,*(undefined4 *)(param_3 + 0x18));
  lStack_138 = *plVar14;
  puStack_130 = *(undefined **)(param_3 + 0x10);
  pdb_140cbee50(&uStack_188,param_2 + 0x110,param_2,&lStack_138);
  if (SBORROW8(0,uStack_188)) {
    *param_1 = 0;
    return param_1;
  }
  pbStack_88 = pbStack_180;
  uStack_70 = uStack_188;
  if (iStack_164 == 0 || uStack_168 == 0) {
    cVar37 = '\x01';
    uVar16 = 0;
    uVar19 = 0xffffffff;
    uVar26 = 0;
    uVar28 = 0;
    iVar23 = 0;
  }
  else {
    uStack_148 = uStack_178;
    uStack_c8 = uStack_170;
    plVar14 = (longlong *)(param_2 + 0x3a8);
    cStack_61 = 1;
    uStack_94 = uStack_168;
    iStack_98 = iStack_164;
    plStack_d8 = plVar14;
    pdb_141cc4b30(&uStack_b8);
    iVar23 = iStack_16c;
    if ((char)uStack_b8 == '\0') {
      if (3 < *_DAT_143ca8e90) {
        lStack_138 = 0;
        puStack_130 = &UNK_14307a908;
        uStack_128 = 7;
        lStack_120 = 0;
        puStack_118 = &UNK_14307a8a7;
        plStack_110 = (longlong *)0x19;
        uStack_108 = 4;
        puStack_100 = &UNK_14307a908;
        uStack_f8 = 7;
        uStack_f0 = 0x19100000001;
        puStack_e8 = &UNK_14307a8e0;
        uStack_e0 = 0x51;
        cStack_61 = 1;
        plVar14 = &lStack_138;
        pdb_140f332f0(&uStack_79);
      }
      cStack_61 = '\x01';
      puVar11 = (undefined8 *)pdb_140f3bda0();
      iStack_c4 = iStack_16c;
      puStack_140 = param_1;
      if (*(char *)(puVar11 + 2) == '\x01') {
        puStack_118 = (undefined *)*puVar11;
        plVar14 = (longlong *)puVar11[1];
      }
      else {
        cStack_61 = '\x01';
        puStack_118 = (undefined *)pdb_140f4fd10();
        *puVar11 = puStack_118;
        puVar11[1] = plVar14;
        *(undefined1 *)(puVar11 + 2) = 1;
      }
      *puVar11 = puStack_118 + 1;
      uStack_128 = _DAT_14307a6a0;
      lStack_120 = _UNK_14307a6a8;
      lStack_138 = _DAT_14307a690;
      puStack_130 = _UNK_14307a698;
      piVar25 = *(int **)(param_2 + 0x400);
      lVar24 = *(longlong *)(param_2 + 0x408);
      piVar18 = piVar25;
      uVar19 = 0;
      plStack_110 = plVar14;
      while (uVar28 = uVar19, piVar17 = piVar18, piVar17 != piVar25 + lVar24 * 2) {
        piVar18 = piVar17 + 2;
        uVar19 = uVar28 + 1;
        if ((*piVar17 != 0) && (*piVar17 + 1U < *(uint *)(lStack_78 + 0x4b4))) {
          uVar28 = piVar17[1] << 0x10 | uVar28 & 0xffff;
          pdb_141cc4200(plStack_d8,uVar28);
          *piVar17 = 0;
          pdb_141cc5ee0(&lStack_138,uVar28);
        }
      }
      lVar24 = *(longlong *)(lStack_78 + 0x480);
      lStack_c0 = lVar24;
      if (lVar24 != 0) {
        pauVar3 = *(undefined1 (**) [16])(lStack_78 + 0x468);
        auVar31 = *pauVar3;
        uVar19 = ~(uint)(ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
                                 (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar31[0xf] >> 7) << 0xf);
        pauVar29 = pauVar3 + 1;
        if (lStack_120 != 0) {
          uStack_150 = *(ulonglong *)(lStack_78 + 0x470);
          lStack_a0 = lStack_138;
          puStack_90 = puStack_130;
          lStack_d0 = *(longlong *)(lStack_78 + 0x478);
          iVar23 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                                    CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba)))
                          == CONCAT13(unaff_XMM6_Bd,
                                      CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba)))
                          );
          cVar37 = (char)iVar23;
          cVar38 = (char)((uint)iVar23 >> 8);
          cVar39 = (char)((uint)iVar23 >> 0x10);
          cVar40 = (char)((uint)iVar23 >> 0x18);
          iVar23 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                                    CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be)))
                          == CONCAT13(unaff_XMM6_Bh,
                                      CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be)))
                          );
          cVar41 = (char)iVar23;
          cVar42 = (char)((uint)iVar23 >> 8);
          cVar43 = (char)((uint)iVar23 >> 0x10);
          cVar44 = (char)((uint)iVar23 >> 0x18);
          iVar23 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                                    CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi)))
                          == CONCAT13(unaff_XMM6_Bl,
                                      CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi)))
                          );
          cVar45 = (char)iVar23;
          cVar46 = (char)((uint)iVar23 >> 8);
          cVar47 = (char)((uint)iVar23 >> 0x10);
          cVar48 = (char)((uint)iVar23 >> 0x18);
          iVar23 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                                    CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm)))
                          == CONCAT13(unaff_XMM6_Bp,
                                      CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm)))
                          );
          cVar49 = (char)iVar23;
          cVar50 = (char)((uint)iVar23 >> 8);
          cVar51 = (char)((uint)iVar23 >> 0x10);
          cVar52 = (char)((uint)iVar23 >> 0x18);
          pauVar27 = pauVar3;
LAB_140cb8959:
          if ((short)uVar19 == 0) {
            do {
              auVar31 = *pauVar29;
              pauVar27 = pauVar27 + -0x24;
              pauVar29 = pauVar29 + 1;
              uVar19 = (ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
                                (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar19 == 0);
          }
          uVar28 = 0;
          for (uVar22 = uVar19; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
            uVar28 = uVar28 + 1;
          }
          piVar25 = (int *)((longlong)pauVar27 + (ulonglong)uVar28 * -0x24 + -0xc);
          uVar10 = pdb_1400aede0(&puStack_118,piVar25);
          uVar19 = uVar19 - 1 & uVar19;
          lVar24 = lVar24 + -1;
          bVar30 = (byte)(uVar10 >> 0x39);
          auVar31 = ZEXT216(CONCAT11(bVar30,bVar30));
          auVar31 = pshuflw(auVar31,auVar31,0);
          lVar15 = 0;
          do {
            uVar10 = uVar10 & (ulonglong)puStack_90;
            pcVar1 = (char *)(lStack_a0 + uVar10);
            auVar35[0] = -(*pcVar1 == auVar31[0]);
            auVar35[1] = -(pcVar1[1] == auVar31[1]);
            auVar35[2] = -(pcVar1[2] == auVar31[2]);
            auVar35[3] = -(pcVar1[3] == auVar31[3]);
            auVar35[4] = -(pcVar1[4] == auVar31[4]);
            auVar35[5] = -(pcVar1[5] == auVar31[5]);
            auVar35[6] = -(pcVar1[6] == auVar31[6]);
            auVar35[7] = -(pcVar1[7] == auVar31[7]);
            auVar35[8] = -(pcVar1[8] == auVar31[0]);
            auVar35[9] = -(pcVar1[9] == auVar31[1]);
            auVar35[10] = -(pcVar1[10] == auVar31[2]);
            auVar35[0xb] = -(pcVar1[0xb] == auVar31[3]);
            auVar35[0xc] = -(pcVar1[0xc] == auVar31[4]);
            auVar35[0xd] = -(pcVar1[0xd] == auVar31[5]);
            auVar35[0xe] = -(pcVar1[0xe] == auVar31[6]);
            auVar35[0xf] = -(pcVar1[0xf] == auVar31[7]);
            uVar20 = (ushort)(SUB161(auVar35 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar35[0xf] >> 7) << 0xf;
            uVar22 = (uint)uVar20;
            if (uVar20 != 0) {
LAB_140cb884a:
              uVar6 = 0;
              for (uVar7 = uVar22; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar6 = uVar6 + 1;
              }
              if (*piVar25 !=
                  *(int *)(lStack_a0 + (uVar6 + uVar10 & (ulonglong)puStack_90) * -4 + -4))
              goto code_r0x000140cb886d;
              lVar15 = ((longlong)
                        ((longlong)pauVar3 - ((longlong)pauVar27 + (ulonglong)uVar28 * -0x24)) >> 2)
                       * -0x71c71c71c71c71c7;
              uVar10 = lVar15 - 0x10U & uStack_150;
              pcVar1 = *pauVar3 + uVar10;
              auVar31[0] = -(*pcVar1 == cVar37);
              auVar31[1] = -(pcVar1[1] == cVar38);
              auVar31[2] = -(pcVar1[2] == cVar39);
              auVar31[3] = -(pcVar1[3] == cVar40);
              auVar31[4] = -(pcVar1[4] == cVar41);
              auVar31[5] = -(pcVar1[5] == cVar42);
              auVar31[6] = -(pcVar1[6] == cVar43);
              auVar31[7] = -(pcVar1[7] == cVar44);
              auVar31[8] = -(pcVar1[8] == cVar45);
              auVar31[9] = -(pcVar1[9] == cVar46);
              auVar31[10] = -(pcVar1[10] == cVar47);
              auVar31[0xb] = -(pcVar1[0xb] == cVar48);
              auVar31[0xc] = -(pcVar1[0xc] == cVar49);
              auVar31[0xd] = -(pcVar1[0xd] == cVar50);
              auVar31[0xe] = -(pcVar1[0xe] == cVar51);
              auVar31[0xf] = -(pcVar1[0xf] == cVar52);
              uVar4 = (ushort)(SUB161(auVar31 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
                      (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar31[0xf] >> 7) << 0xf;
              pcVar1 = (char *)((longlong)pauVar3 + lVar15);
              auVar32[0] = -(*pcVar1 == cVar37);
              auVar32[1] = -(pcVar1[1] == cVar38);
              auVar32[2] = -(pcVar1[2] == cVar39);
              auVar32[3] = -(pcVar1[3] == cVar40);
              auVar32[4] = -(pcVar1[4] == cVar41);
              auVar32[5] = -(pcVar1[5] == cVar42);
              auVar32[6] = -(pcVar1[6] == cVar43);
              auVar32[7] = -(pcVar1[7] == cVar44);
              auVar32[8] = -(pcVar1[8] == cVar45);
              auVar32[9] = -(pcVar1[9] == cVar46);
              auVar32[10] = -(pcVar1[10] == cVar47);
              auVar32[0xb] = -(pcVar1[0xb] == cVar48);
              auVar32[0xc] = -(pcVar1[0xc] == cVar49);
              auVar32[0xd] = -(pcVar1[0xd] == cVar50);
              auVar32[0xe] = -(pcVar1[0xe] == cVar51);
              auVar32[0xf] = -(pcVar1[0xf] == cVar52);
              uVar20 = 0xf;
              if (uVar4 != 0) {
                for (; uVar4 >> uVar20 == 0; uVar20 = uVar20 - 1) {
                }
              }
              sVar5 = 0;
              for (uVar28 = (ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
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
                                    (ushort)(auVar32[0xf] >> 7) << 0xf) | 0x10000; (uVar28 & 1) == 0
                  ; uVar28 = uVar28 >> 1 | 0x80000000) {
                sVar5 = sVar5 + 1;
              }
              uVar13 = 0x80;
              if ((ushort)(sVar5 + (uVar20 ^ 0xf)) < 0x10) {
                lStack_d0 = lStack_d0 + 1;
                *(longlong *)(lStack_78 + 0x478) = lStack_d0;
                uVar13 = 0xff;
              }
              *(undefined1 *)((longlong)pauVar3 + lVar15) = uVar13;
              pauVar3[1][uVar10] = uVar13;
              lStack_c0 = lStack_c0 + -1;
              *(longlong *)(lStack_78 + 0x480) = lStack_c0;
              goto LAB_140cb8950;
            }
LAB_140cb8880:
            auVar33[0] = -(*pcVar1 == cVar37);
            auVar33[1] = -(pcVar1[1] == cVar38);
            auVar33[2] = -(pcVar1[2] == cVar39);
            auVar33[3] = -(pcVar1[3] == cVar40);
            auVar33[4] = -(pcVar1[4] == cVar41);
            auVar33[5] = -(pcVar1[5] == cVar42);
            auVar33[6] = -(pcVar1[6] == cVar43);
            auVar33[7] = -(pcVar1[7] == cVar44);
            auVar33[8] = -(pcVar1[8] == cVar45);
            auVar33[9] = -(pcVar1[9] == cVar46);
            auVar33[10] = -(pcVar1[10] == cVar47);
            auVar33[0xb] = -(pcVar1[0xb] == cVar48);
            auVar33[0xc] = -(pcVar1[0xc] == cVar49);
            auVar33[0xd] = -(pcVar1[0xd] == cVar50);
            auVar33[0xe] = -(pcVar1[0xe] == cVar51);
            auVar33[0xf] = -(pcVar1[0xf] == cVar52);
            if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar33 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar33 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar33 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar33 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar33 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar33 >> 0x3f,0) & 1) != 0) || (SUB161(auVar33 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar33 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar33 >> 0x57,0) & 1) != 0) || (SUB161(auVar33 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar33 >> 0x67,0) & 1) != 0) || (SUB161(auVar33 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar33 >> 0x77,0) & 1) != 0) || auVar33[0xf] < '\0') goto LAB_140cb8950;
            uVar10 = uVar10 + lVar15 + 0x10;
            lVar15 = lVar15 + 0x10;
          } while( true );
        }
        if ((short)uVar19 == 0) {
          do {
            auVar31 = *pauVar29;
            pauVar29 = pauVar29 + 1;
          } while ((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
                            (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) == 0xffff);
        }
      }
LAB_140cb89e4:
      pdb_141cc4b30(&uStack_b8,plStack_d8,uStack_94,iStack_98);
      param_2 = lStack_78;
      iVar23 = iStack_c4;
      param_1 = puStack_140;
      cVar37 = (char)uStack_b8;
      if ((char)uStack_b8 == '\0') {
        *(undefined1 *)(lStack_78 + 0x4c0) = 1;
      }
      if (puStack_130 != (undefined *)0x0) {
        uVar10 = (longlong)puStack_130 * 4 + 0x13U & 0xfffffffffffffff0;
        if (puStack_130 + uVar10 + 0x11 != (undefined *)0x0) {
          pub_1406abac0((byte *)(lStack_138 - uVar10),(ulonglong)(puStack_130 + uVar10 + 0x11),0x10)
          ;
        }
      }
      if (cVar37 == '\0') {
        *param_1 = 0;
        if (uStack_70 == 0) {
          return param_1;
        }
        goto LAB_140cb8bd5;
      }
    }
    cStack_61 = 1;
    pdb_141cc08b0(param_2 + 0x3f8,uStack_b4 & 0xffff,*(undefined4 *)(param_2 + 0x4b4),
                  uStack_b4 >> 0x10);
    lVar24 = *(longlong *)(param_2 + 0x458);
    if (lVar24 == *(longlong *)(param_2 + 0x448)) {
      pdb_142d7ee50(param_2 + 0x448);
    }
    lVar15 = *(longlong *)(param_2 + 0x450);
    lVar12 = lVar24 * 0x40;
    *(ulonglong *)(lVar15 + lVar12) = uStack_70;
    *(byte **)(lVar15 + 8 + lVar12) = pbStack_88;
    *(undefined8 *)(lVar15 + 0x10 + lVar12) = uStack_148;
    *(uint *)(lVar15 + 0x18 + lVar12) = uStack_c8;
    *(int *)(lVar15 + 0x1c + lVar12) = iVar23;
    *(uint *)(lVar15 + 0x20 + lVar12) = uStack_94;
    *(int *)(lVar15 + 0x24 + lVar12) = iStack_98;
    puVar11 = (undefined8 *)(lVar15 + 0x28 + lVar12);
    *puVar11 = uStack_160;
    puVar11[1] = uStack_158;
    *(undefined2 *)(lVar15 + 0x38 + lVar12) = (undefined2)uStack_b0;
    *(undefined2 *)(lVar15 + 0x3a + lVar12) = (undefined2)iStack_ac;
    *(short *)(lVar15 + 0x3c + lVar12) = (short)uStack_94;
    *(short *)(lVar15 + 0x3e + lVar12) = (short)iStack_98;
    *(longlong *)(param_2 + 0x458) = lVar24 + 1;
    iVar23 = (uStack_c8 & 0xffff) + iVar23 * -0x10000;
    uVar28 = uStack_94 & 0xffff | iStack_98 << 0x10;
    cVar37 = '\0';
    uVar19 = uStack_b4;
    uVar26 = (undefined2)uStack_b0;
    uVar16 = (undefined2)iStack_ac;
  }
  uStack_b8 = uVar26;
  uStack_b6 = uVar16;
  uStack_b4 = uVar19;
  uStack_b0 = uVar28;
  iStack_ac = iVar23;
  cStack_61 = cVar37;
  pdb_141cc6060(&lStack_138,param_2 + 0x468,&lStack_1a8,&uStack_b8);
  *(undefined2 *)(param_1 + 1) = uVar26;
  *(undefined2 *)((longlong)param_1 + 6) = uVar16;
  param_1[2] = uVar19;
  param_1[3] = uVar28;
  param_1[4] = iVar23;
  *param_1 = 1;
  if (uStack_70 == 0 || cVar37 != '\x01') {
    return param_1;
  }
LAB_140cb8bd5:
  pub_1406abac0(pbStack_88,uStack_70,1);
  return param_1;
code_r0x000140cb886d:
  uVar20 = (ushort)(uVar22 - 1) & (ushort)uVar22;
  uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar20);
  if (uVar20 == 0) goto LAB_140cb8880;
  goto LAB_140cb884a;
LAB_140cb8950:
  if (lVar24 == 0) goto LAB_140cb89e4;
  goto LAB_140cb8959;
}

