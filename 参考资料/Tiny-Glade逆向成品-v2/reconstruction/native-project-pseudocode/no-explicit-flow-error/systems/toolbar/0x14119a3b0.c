// VA 0x14119a3b0, PDB extent 2203 bytes
// toolbar::menu::mods::ui::closure$3
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::mods::ui::closure$3
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mods.rs
   Extent: 2203 */

void pdb_14119a3b0(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  longlong lVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  byte *pbVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  ushort uVar22;
  longlong lVar23;
  longlong lVar24;
  byte *pbVar25;
  byte bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  char cVar36;
  undefined1 unaff_XMM7_Bc;
  char cVar37;
  undefined1 unaff_XMM7_Bd;
  char cVar38;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  char cVar39;
  undefined1 unaff_XMM7_Bg;
  char cVar40;
  undefined1 unaff_XMM7_Bh;
  char cVar41;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  char cVar42;
  undefined1 unaff_XMM7_Bk;
  char cVar43;
  undefined1 unaff_XMM7_Bl;
  char cVar44;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  char cVar45;
  undefined1 unaff_XMM7_Bo;
  char cVar46;
  undefined1 unaff_XMM7_Bp;
  char cVar47;
  byte *pbStack_108;
  longlong lStack_100;
  undefined8 uStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  byte *pbStack_d0;
  uint uStack_c4;
  undefined *puStack_c0;
  byte *pbStack_b8;
  longlong lStack_b0;
  byte *pbStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  uVar17 = 9;
  uVar14 = pdb_140dc6290(&UNK_14329f8cb,9);
  pdb_140f5f4f0(&puStack_c0,uVar14,uVar17);
  pbStack_90 = pbStack_b8;
  pbStack_e8 = pbStack_b8;
  lStack_e0 = lStack_b0;
  pbStack_88 = (byte *)pdb_140bbbcb0(&pbStack_e8);
  lStack_80 = _DAT_14329c260;
  uStack_78 = _UNK_14329c268;
  lStack_80 = pdb_1400affa0(&pbStack_88);
  pbStack_88 = *(byte **)(param_2 + 8);
  uVar14 = pdb_1400b0130(&pbStack_88);
  pdb_14072caa0(&pbStack_88,param_2,uVar14);
  uVar14 = pdb_14116ee90(&pbStack_88,0);
  pdb_14119b6b0(uVar14,pbStack_90,lStack_b0);
  uStack_98 = uStack_78;
  pbStack_a8 = pbStack_88;
  lStack_a0 = lStack_80;
  uVar14 = pdb_14116e180(&pbStack_a8);
  pdb_14119b2b0(uVar14);
  uStack_78 = uStack_98;
  pbStack_88 = pbStack_a8;
  lStack_80 = lStack_a0;
  uVar14 = pdb_14116e180(&pbStack_88);
  pdb_140cb5c70(uVar14,800);
  pbVar25 = pbStack_88;
  pbStack_a8 = pbStack_88;
  lStack_a0 = lStack_80;
  uStack_98 = uStack_78;
  if (*(longlong *)(pbStack_88 + 0x1c8) != 0) {
    uVar15 = pdb_1400af0a0(pbStack_88 + 0x1d0,&lStack_a0);
    lVar4 = *(longlong *)(pbVar25 + 0x1b0);
    uVar18 = *(ulonglong *)(pbVar25 + 0x1b8);
    bVar26 = (byte)(uVar15 >> 0x39);
    auVar27 = ZEXT216(CONCAT11(bVar26,bVar26));
    auVar27 = pshuflw(auVar27,auVar27,0);
    lVar21 = 0;
    while( true ) {
      uVar15 = uVar15 & uVar18;
      pcVar2 = (char *)(lVar4 + uVar15);
      auVar34[0] = -(*pcVar2 == auVar27[0]);
      auVar34[1] = -(pcVar2[1] == auVar27[1]);
      auVar34[2] = -(pcVar2[2] == auVar27[2]);
      auVar34[3] = -(pcVar2[3] == auVar27[3]);
      auVar34[4] = -(pcVar2[4] == auVar27[4]);
      auVar34[5] = -(pcVar2[5] == auVar27[5]);
      auVar34[6] = -(pcVar2[6] == auVar27[6]);
      auVar34[7] = -(pcVar2[7] == auVar27[7]);
      auVar34[8] = -(pcVar2[8] == auVar27[0]);
      auVar34[9] = -(pcVar2[9] == auVar27[1]);
      auVar34[10] = -(pcVar2[10] == auVar27[2]);
      auVar34[0xb] = -(pcVar2[0xb] == auVar27[3]);
      auVar34[0xc] = -(pcVar2[0xc] == auVar27[4]);
      auVar34[0xd] = -(pcVar2[0xd] == auVar27[5]);
      auVar34[0xe] = -(pcVar2[0xe] == auVar27[6]);
      auVar34[0xf] = -(pcVar2[0xf] == auVar27[7]);
      uVar22 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
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
      uVar19 = (uint)uVar22;
      while (uVar22 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar19; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        lVar23 = (uVar7 + uVar15 & uVar18) * -0xd8;
        if (lStack_a0 == *(longlong *)(lVar4 + -0xd8 + lVar23)) {
          pbVar25 = (byte *)(lVar4 + lVar23 + -5);
          *pbVar25 = *pbVar25 | 2;
          if (puStack_c0 != (undefined *)0x0) {
            pub_1406abac0(pbStack_90,(ulonglong)puStack_c0,1);
          }
          lVar4 = *param_1;
          if (*(ulonglong *)(lVar4 + 0x10) < 2) {
            return;
          }
          pbVar25 = *(byte **)(param_2 + 8);
          puStack_c0 = &UNK_14329f8d4;
          pbStack_b8 = (byte *)0x4;
          pbStack_88 = (byte *)pdb_140bbbcb0(&puStack_c0);
          lStack_80 = _DAT_14329c330;
          uStack_78 = _UNK_14329c338;
          lStack_80 = pdb_1400affa0(&pbStack_88);
          pbStack_88 = pbVar25;
          uVar14 = pdb_1400b0130(&pbStack_88);
          pdb_14072caa0(&pbStack_88,param_2,uVar14);
          pbVar25 = pbStack_88;
          if (*(longlong *)(pbStack_88 + 0x1c8) == 0) goto LAB_14119aa52;
          uVar15 = pdb_1400af0a0(pbStack_88 + 0x1d0,&lStack_80);
          lVar21 = *(longlong *)(pbVar25 + 0x1b0);
          uVar18 = *(ulonglong *)(pbVar25 + 0x1b8);
          bVar26 = (byte)(uVar15 >> 0x39);
          auVar27 = ZEXT216(CONCAT11(bVar26,bVar26));
          auVar27 = pshuflw(auVar27,auVar27,0);
          lVar23 = 0;
          goto LAB_14119a68b;
        }
        uVar22 = (ushort)(uVar19 - 1) & (ushort)uVar19;
        uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar22);
      }
      auVar30[0] = -(*pcVar2 == -1);
      auVar30[1] = -(pcVar2[1] == -1);
      auVar30[2] = -(pcVar2[2] == -1);
      auVar30[3] = -(pcVar2[3] == -1);
      auVar30[4] = -(pcVar2[4] == -1);
      auVar30[5] = -(pcVar2[5] == -1);
      auVar30[6] = -(pcVar2[6] == -1);
      auVar30[7] = -(pcVar2[7] == -1);
      auVar30[8] = -(pcVar2[8] == -1);
      auVar30[9] = -(pcVar2[9] == -1);
      auVar30[10] = -(pcVar2[10] == -1);
      auVar30[0xb] = -(pcVar2[0xb] == -1);
      auVar30[0xc] = -(pcVar2[0xc] == -1);
      auVar30[0xd] = -(pcVar2[0xd] == -1);
      auVar30[0xe] = -(pcVar2[0xe] == -1);
      auVar30[0xf] = -(pcVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar30 >> 0x17,0) & 1) != 0) || (SUB161(auVar30 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar30 >> 0x27,0) & 1) != 0) || (SUB161(auVar30 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar30 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar30 >> 0x3f,0) & 1) != 0) || (SUB161(auVar30 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar30 >> 0x4f,0) & 1) != 0) || (SUB161(auVar30 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar30 >> 0x5f,0) & 1) != 0) || (SUB161(auVar30 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar30 >> 0x6f,0) & 1) != 0) || (SUB161(auVar30 >> 0x77,0) & 1) != 0) ||
          auVar30[0xf] < '\0') break;
      uVar15 = uVar15 + lVar21 + 0x10;
      lVar21 = lVar21 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
LAB_14119a68b:
  uVar15 = uVar15 & uVar18;
  pcVar2 = (char *)(lVar21 + uVar15);
  auVar35[0] = -(*pcVar2 == auVar27[0]);
  auVar35[1] = -(pcVar2[1] == auVar27[1]);
  auVar35[2] = -(pcVar2[2] == auVar27[2]);
  auVar35[3] = -(pcVar2[3] == auVar27[3]);
  auVar35[4] = -(pcVar2[4] == auVar27[4]);
  auVar35[5] = -(pcVar2[5] == auVar27[5]);
  auVar35[6] = -(pcVar2[6] == auVar27[6]);
  auVar35[7] = -(pcVar2[7] == auVar27[7]);
  auVar35[8] = -(pcVar2[8] == auVar27[0]);
  auVar35[9] = -(pcVar2[9] == auVar27[1]);
  auVar35[10] = -(pcVar2[10] == auVar27[2]);
  auVar35[0xb] = -(pcVar2[0xb] == auVar27[3]);
  auVar35[0xc] = -(pcVar2[0xc] == auVar27[4]);
  auVar35[0xd] = -(pcVar2[0xd] == auVar27[5]);
  auVar35[0xe] = -(pcVar2[0xe] == auVar27[6]);
  auVar35[0xf] = -(pcVar2[0xf] == auVar27[7]);
  uVar22 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
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
  uVar19 = (uint)uVar22;
  while (uVar22 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar19; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    lVar24 = (uVar7 + uVar15 & uVar18) * -0xd8;
    if (lStack_80 == *(longlong *)(lVar21 + -0xd8 + lVar24)) {
      lVar21 = lVar21 + lVar24;
      *(undefined1 (*) [16])(lVar21 + -0xa8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar21 + -0xb8) = (undefined1  [16])0x0;
      *(undefined8 *)(lVar21 + -0x98) = 0x4270000000000000;
      *(undefined1 (*) [16])(lVar21 + -0x90) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar21 + -0x82) = (undefined1  [16])0x0;
      *(undefined2 *)(lVar21 + -0x72) = 0x402;
      uVar12 = _DAT_142e37844;
      uStack_f8 = uStack_78;
      pbStack_108 = pbStack_88;
      lStack_100 = lStack_80;
      if (*(longlong *)(lVar4 + 0x10) != 0) {
        pbStack_f0 = *(byte **)(lVar4 + 8) + *(longlong *)(lVar4 + 0x10);
        pbStack_90 = (byte *)param_1[1];
        iVar20 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                                  CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                        CONCAT13(unaff_XMM7_Bd,
                                 CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
        cVar36 = (char)((uint)iVar20 >> 8);
        cVar37 = (char)((uint)iVar20 >> 0x10);
        cVar38 = (char)((uint)iVar20 >> 0x18);
        iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                                 CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                       CONCAT13(unaff_XMM7_Bh,
                                CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
        cVar39 = (char)((uint)iVar9 >> 8);
        cVar40 = (char)((uint)iVar9 >> 0x10);
        cVar41 = (char)((uint)iVar9 >> 0x18);
        iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                                  CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                        CONCAT13(unaff_XMM7_Bl,
                                 CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
        cVar42 = (char)((uint)iVar10 >> 8);
        cVar43 = (char)((uint)iVar10 >> 0x10);
        cVar44 = (char)((uint)iVar10 >> 0x18);
        iVar11 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                                  CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                        CONCAT13(unaff_XMM7_Bp,
                                 CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
        cVar45 = (char)((uint)iVar11 >> 8);
        cVar46 = (char)((uint)iVar11 >> 0x10);
        cVar47 = (char)((uint)iVar11 >> 0x18);
        pbVar25 = *(byte **)(lVar4 + 8);
LAB_14119a786:
        uStack_c4 = (uint)*pbVar25;
        if (*pbVar25 == 0) {
          uVar14 = 0x12;
          puVar16 = &UNK_1434da819;
        }
        else if (uStack_c4 == 1) {
          uVar14 = 0x15;
          puVar16 = &UNK_1434da82b;
        }
        else {
          uVar14 = 0x11;
          puVar16 = &UNK_1434da840;
        }
        uVar17 = pdb_140dc6290(puVar16,uVar14);
        pdb_140f5f4f0(&puStack_c0,uVar17,uVar14);
        pbStack_d0 = pbStack_b8;
        pdb_1407339e0(&pbStack_a8,&pbStack_108);
        uVar14 = pdb_14116dd60(&pbStack_a8);
        pdb_14119b2b0(uVar14,uVar12);
        pbVar13 = pbStack_a8;
        uStack_78 = uStack_98;
        pbStack_88 = pbStack_a8;
        lStack_80 = lStack_a0;
        if (*(longlong *)(pbStack_a8 + 0x1c8) != 0) {
          uVar15 = pdb_1400af0a0(pbStack_a8 + 0x1d0,&lStack_80);
          pbVar1 = pbVar25 + 1;
          lVar21 = *(longlong *)(pbVar13 + 0x1b0);
          uVar18 = *(ulonglong *)(pbVar13 + 0x1b8);
          bVar26 = (byte)(uVar15 >> 0x39);
          auVar27 = ZEXT216(CONCAT11(bVar26,bVar26));
          auVar27 = pshuflw(auVar27,auVar27,0);
          lVar23 = 0;
          while( true ) {
            uVar15 = uVar15 & uVar18;
            auVar34 = *(undefined1 (*) [16])(lVar21 + uVar15);
            auVar32[0] = -(auVar34[0] == auVar27[0]);
            auVar32[1] = -(auVar34[1] == auVar27[1]);
            auVar32[2] = -(auVar34[2] == auVar27[2]);
            auVar32[3] = -(auVar34[3] == auVar27[3]);
            auVar32[4] = -(auVar34[4] == auVar27[4]);
            auVar32[5] = -(auVar34[5] == auVar27[5]);
            auVar32[6] = -(auVar34[6] == auVar27[6]);
            auVar32[7] = -(auVar34[7] == auVar27[7]);
            auVar32[8] = -(auVar34[8] == auVar27[0]);
            auVar32[9] = -(auVar34[9] == auVar27[1]);
            auVar32[10] = -(auVar34[10] == auVar27[2]);
            auVar32[0xb] = -(auVar34[0xb] == auVar27[3]);
            auVar32[0xc] = -(auVar34[0xc] == auVar27[4]);
            auVar32[0xd] = -(auVar34[0xd] == auVar27[5]);
            auVar32[0xe] = -(auVar34[0xe] == auVar27[6]);
            auVar32[0xf] = -(auVar34[0xf] == auVar27[7]);
            uVar22 = (ushort)(SUB161(auVar32 >> 7,0) & 1) |
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
            uVar19 = (uint)uVar22;
            while (uVar22 != 0) {
              uVar7 = 0;
              for (uVar8 = uVar19; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                uVar7 = uVar7 + 1;
              }
              lVar24 = (uVar7 + uVar15 & uVar18) * -0xd8;
              if (lStack_80 == *(longlong *)(lVar21 + -0xd8 + lVar24)) {
                *(undefined2 *)(lVar21 + lVar24 + -8) = 0x400;
                uStack_98 = uStack_78;
                pbStack_a8 = pbStack_88;
                lStack_a0 = lStack_80;
                bVar26 = **(byte **)pbStack_90;
                bVar3 = *pbVar25;
                lVar21 = pdb_14116dd60(&pbStack_a8);
                pbVar25 = pbStack_a8;
                *(bool *)(lVar21 + 0x25c) = bVar26 == bVar3;
                pbStack_e8 = pbStack_a8;
                lStack_e0 = lStack_a0;
                uStack_d8 = uStack_98;
                if (*(longlong *)(pbStack_a8 + 0x1c8) == 0) goto LAB_14119aacc;
                uVar15 = pdb_1400af0a0(pbStack_a8 + 0x1d0,&lStack_e0);
                lVar21 = *(longlong *)(pbVar25 + 0x1b0);
                uVar18 = *(ulonglong *)(pbVar25 + 0x1b8);
                bVar26 = (byte)(uVar15 >> 0x39);
                auVar27 = ZEXT216(CONCAT11(bVar26,bVar26));
                auVar27 = pshuflw(auVar27,auVar27,0);
                lVar23 = 0;
                goto LAB_14119a97b;
              }
              uVar22 = (ushort)(uVar19 - 1) & (ushort)uVar19;
              uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar22);
            }
            auVar28[0] = -(auVar34[0] == (char)iVar20);
            auVar28[1] = -(auVar34[1] == cVar36);
            auVar28[2] = -(auVar34[2] == cVar37);
            auVar28[3] = -(auVar34[3] == cVar38);
            auVar28[4] = -(auVar34[4] == (char)iVar9);
            auVar28[5] = -(auVar34[5] == cVar39);
            auVar28[6] = -(auVar34[6] == cVar40);
            auVar28[7] = -(auVar34[7] == cVar41);
            auVar28[8] = -(auVar34[8] == (char)iVar10);
            auVar28[9] = -(auVar34[9] == cVar42);
            auVar28[10] = -(auVar34[10] == cVar43);
            auVar28[0xb] = -(auVar34[0xb] == cVar44);
            auVar28[0xc] = -(auVar34[0xc] == (char)iVar11);
            auVar28[0xd] = -(auVar34[0xd] == cVar45);
            auVar28[0xe] = -(auVar34[0xe] == cVar46);
            auVar28[0xf] = -(auVar34[0xf] == cVar47);
            if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar28 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar28 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar28 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar28 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar28 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar28 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar28 >> 0x3f,0) & 1) != 0) || (SUB161(auVar28 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar28 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar28 >> 0x57,0) & 1) != 0) || (SUB161(auVar28 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar28 >> 0x67,0) & 1) != 0) || (SUB161(auVar28 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar28 >> 0x77,0) & 1) != 0) || auVar28[0xf] < '\0') break;
            uVar15 = uVar15 + lVar23 + 0x10;
            lVar23 = lVar23 + 0x10;
          }
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142fa6b48);
      }
      pbStack_90 = (byte *)param_1[1];
      goto LAB_14119aa76;
    }
    uVar22 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar22);
  }
  auVar31[0] = -(*pcVar2 == -1);
  auVar31[1] = -(pcVar2[1] == -1);
  auVar31[2] = -(pcVar2[2] == -1);
  auVar31[3] = -(pcVar2[3] == -1);
  auVar31[4] = -(pcVar2[4] == -1);
  auVar31[5] = -(pcVar2[5] == -1);
  auVar31[6] = -(pcVar2[6] == -1);
  auVar31[7] = -(pcVar2[7] == -1);
  auVar31[8] = -(pcVar2[8] == -1);
  auVar31[9] = -(pcVar2[9] == -1);
  auVar31[10] = -(pcVar2[10] == -1);
  auVar31[0xb] = -(pcVar2[0xb] == -1);
  auVar31[0xc] = -(pcVar2[0xc] == -1);
  auVar31[0xd] = -(pcVar2[0xd] == -1);
  auVar31[0xe] = -(pcVar2[0xe] == -1);
  auVar31[0xf] = -(pcVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar31 >> 0x17,0) & 1) != 0) || (SUB161(auVar31 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar31 >> 0x27,0) & 1) != 0) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar31 >> 0x37,0) & 1) != 0) || (SUB161(auVar31 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar31 >> 0x47,0) & 1) != 0) || (SUB161(auVar31 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar31 >> 0x57,0) & 1) != 0) || (SUB161(auVar31 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar31 >> 0x67,0) & 1) != 0) || (SUB161(auVar31 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar31 >> 0x77,0) & 1) != 0) || auVar31[0xf] < '\0') {
LAB_14119aa52:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b30);
  }
  uVar15 = uVar15 + lVar23 + 0x10;
  lVar23 = lVar23 + 0x10;
  goto LAB_14119a68b;
LAB_14119a97b:
  uVar15 = uVar15 & uVar18;
  pcVar2 = (char *)(lVar21 + uVar15);
  auVar33[0] = -(*pcVar2 == auVar27[0]);
  auVar33[1] = -(pcVar2[1] == auVar27[1]);
  auVar33[2] = -(pcVar2[2] == auVar27[2]);
  auVar33[3] = -(pcVar2[3] == auVar27[3]);
  auVar33[4] = -(pcVar2[4] == auVar27[4]);
  auVar33[5] = -(pcVar2[5] == auVar27[5]);
  auVar33[6] = -(pcVar2[6] == auVar27[6]);
  auVar33[7] = -(pcVar2[7] == auVar27[7]);
  auVar33[8] = -(pcVar2[8] == auVar27[0]);
  auVar33[9] = -(pcVar2[9] == auVar27[1]);
  auVar33[10] = -(pcVar2[10] == auVar27[2]);
  auVar33[0xb] = -(pcVar2[0xb] == auVar27[3]);
  auVar33[0xc] = -(pcVar2[0xc] == auVar27[4]);
  auVar33[0xd] = -(pcVar2[0xd] == auVar27[5]);
  auVar33[0xe] = -(pcVar2[0xe] == auVar27[6]);
  auVar33[0xf] = -(pcVar2[0xf] == auVar27[7]);
  uVar22 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
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
  uVar19 = (uint)uVar22;
  while (uVar22 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar19; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    lVar24 = (uVar7 + uVar15 & uVar18) * -0xd8;
    if (lStack_e0 == *(longlong *)(lVar21 + -0xd8 + lVar24)) {
      bVar26 = *(byte *)(lVar21 + lVar24 + -6);
      if (puStack_c0 != (undefined *)0x0) {
        pub_1406abac0(pbStack_d0,(ulonglong)puStack_c0,1);
      }
      if ((bVar26 & 0x30) != 0) {
        **(undefined1 **)pbStack_90 = (char)uStack_c4;
      }
      pbVar25 = pbVar1;
      if (pbVar1 != pbStack_f0) goto LAB_14119a786;
      if (*(ulonglong *)(lVar4 + 0x10) == 0) goto LAB_14119aa76;
      uVar18 = 0;
      goto LAB_14119aa42;
    }
    uVar22 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar22);
  }
  auVar29[0] = -(*pcVar2 == (char)iVar20);
  auVar29[1] = -(pcVar2[1] == cVar36);
  auVar29[2] = -(pcVar2[2] == cVar37);
  auVar29[3] = -(pcVar2[3] == cVar38);
  auVar29[4] = -(pcVar2[4] == (char)iVar9);
  auVar29[5] = -(pcVar2[5] == cVar39);
  auVar29[6] = -(pcVar2[6] == cVar40);
  auVar29[7] = -(pcVar2[7] == cVar41);
  auVar29[8] = -(pcVar2[8] == (char)iVar10);
  auVar29[9] = -(pcVar2[9] == cVar42);
  auVar29[10] = -(pcVar2[10] == cVar43);
  auVar29[0xb] = -(pcVar2[0xb] == cVar44);
  auVar29[0xc] = -(pcVar2[0xc] == (char)iVar11);
  auVar29[0xd] = -(pcVar2[0xd] == cVar45);
  auVar29[0xe] = -(pcVar2[0xe] == cVar46);
  auVar29[0xf] = -(pcVar2[0xf] == cVar47);
  if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar29 >> 0x37,0) & 1) != 0) || (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar29 >> 0x47,0) & 1) != 0) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') {
LAB_14119aacc:
    pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  uVar15 = uVar15 + lVar23 + 0x10;
  lVar23 = lVar23 + 0x10;
  goto LAB_14119a97b;
  while (uVar18 = uVar18 + 1, *(ulonglong *)(lVar4 + 0x10) != uVar18) {
LAB_14119aa42:
    if (*(char *)(*(longlong *)(lVar4 + 8) + uVar18) == **(char **)pbStack_90) goto LAB_14119aa78;
  }
LAB_14119aa76:
  uVar18 = 0;
LAB_14119aa78:
  piVar5 = (int *)param_1[2];
  iVar20 = *piVar5;
  if (iVar20 != 0) {
    if (iVar20 < 1) {
      iVar20 = iVar20 + 1;
      do {
        uVar15 = *(ulonglong *)(lVar4 + 0x10);
        if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8510(&UNK_14329f8f0);
        }
        uVar18 = (uVar18 + uVar15) - 1;
        if ((uVar18 | uVar15) >> 0x20 == 0) {
          uVar18 = (uVar18 & 0xffffffff) % (uVar15 & 0xffffffff);
        }
        else {
          uVar18 = uVar18 % uVar15;
        }
        *piVar5 = iVar20;
        iVar20 = iVar20 + 1;
      } while (iVar20 != 1);
    }
    else {
      uVar19 = iVar20 + 1;
      do {
        uVar15 = *(ulonglong *)(lVar4 + 0x10);
        if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8510(&UNK_14329f908);
        }
        uVar18 = uVar18 + 1;
        if ((uVar18 | uVar15) >> 0x20 == 0) {
          uVar18 = (uVar18 & 0xffffffff) % (uVar15 & 0xffffffff);
        }
        else {
          uVar18 = uVar18 % uVar15;
        }
        *piVar5 = uVar19 - 2;
        uVar19 = uVar19 - 1;
      } while (1 < uVar19);
    }
    if (*(ulonglong *)(lVar4 + 0x10) <= uVar18) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar18,*(ulonglong *)(lVar4 + 0x10),&UNK_14329f8d8);
    }
    **(undefined1 **)pbStack_90 = *(undefined1 *)(*(longlong *)(lVar4 + 8) + uVar18);
  }
  return;
}

