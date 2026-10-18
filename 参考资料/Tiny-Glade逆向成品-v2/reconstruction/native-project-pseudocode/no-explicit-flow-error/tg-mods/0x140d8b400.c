// VA 0x140d8b400, PDB extent 954 bytes
// tg_mods::overlay::ChangedPaths::contains
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::overlay::ChangedPaths::contains
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 954 */

undefined8 pdb_140d8b400(longlong *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte *pbVar90;
  ushort uVar91;
  int iVar92;
  byte *arg0;
  ulonglong uVar93;
  ulonglong uVar94;
  ulonglong uVar95;
  longlong lVar96;
  undefined8 uVar97;
  uint uVar98;
  undefined1 uVar99;
  byte bVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  ulonglong uVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  undefined1 unaff_XMM7_Bc;
  undefined1 unaff_XMM7_Bd;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  undefined1 unaff_XMM7_Bg;
  undefined1 unaff_XMM7_Bh;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  undefined1 unaff_XMM7_Bk;
  undefined1 unaff_XMM7_Bl;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  undefined1 unaff_XMM7_Bo;
  undefined1 unaff_XMM7_Bp;
  undefined1 auVar136 [16];
  ulonglong uStack_a8;
  byte *pbStack_a0;
  ulonglong uStack_98;
  byte *pbStack_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  pdb_140f69110(&uStack_a8);
  if ((char)uStack_a8 != '\0') {
    return 0;
  }
  uVar99 = uStack_98 == 0;
  if (-1 < (longlong)uStack_98) goto LAB_140d8b462;
  uVar97 = 0;
  do {
    uVar99 = 1;
    pdb_142dc7e2a(uVar97,uStack_98);
LAB_140d8b462:
    pbVar90 = pbStack_a0;
    if ((bool)uVar99) {
      arg0 = (byte *)0x1;
      goto LAB_140d8b638;
    }
    pdb_14007ee60();
    uVar97 = 1;
    arg0 = pub_1406abab0(uStack_98,1);
    bVar89 = UNK_142e34f0f;
    bVar88 = UNK_142e34f0e;
    bVar87 = UNK_142e34f0d;
    bVar86 = UNK_142e34f0c;
    bVar85 = UNK_142e34f0b;
    bVar84 = UNK_142e34f0a;
    bVar83 = UNK_142e34f09;
    bVar82 = UNK_142e34f08;
    bVar81 = UNK_142e34f07;
    bVar80 = UNK_142e34f06;
    bVar79 = UNK_142e34f05;
    bVar78 = UNK_142e34f04;
    bVar77 = UNK_142e34f03;
    bVar76 = UNK_142e34f02;
    bVar75 = UNK_142e34f01;
    bVar74 = DAT_142e34f00;
    bVar73 = UNK_142e34b4f;
    bVar72 = UNK_142e34b4e;
    bVar71 = UNK_142e34b4d;
    bVar70 = UNK_142e34b4c;
    bVar69 = UNK_142e34b4b;
    bVar68 = UNK_142e34b4a;
    bVar67 = UNK_142e34b49;
    bVar66 = UNK_142e34b48;
    bVar65 = UNK_142e34b47;
    bVar64 = UNK_142e34b46;
    bVar63 = UNK_142e34b45;
    bVar62 = UNK_142e34b44;
    bVar61 = UNK_142e34b43;
    bVar60 = UNK_142e34b42;
    bVar59 = UNK_142e34b41;
    bVar100 = DAT_142e34b40;
  } while (arg0 == (byte *)0x0);
  if ((ulonglong)((longlong)arg0 - (longlong)pbVar90) < 0x20 || uStack_98 < 8) {
    uVar93 = 0;
  }
  else {
    if (uStack_98 < 0x20) {
      uVar94 = 0;
    }
    else {
      uVar93 = uStack_98 & 0x7fffffffffffffe0;
      uVar94 = 0;
      do {
        pbVar1 = (byte *)((longlong)pbVar90 + uVar94);
        bVar12 = pbVar1[1];
        bVar13 = pbVar1[2];
        bVar14 = pbVar1[3];
        bVar15 = pbVar1[4];
        bVar16 = pbVar1[5];
        bVar17 = pbVar1[6];
        bVar18 = pbVar1[7];
        bVar19 = pbVar1[8];
        bVar20 = pbVar1[9];
        bVar21 = pbVar1[10];
        bVar22 = pbVar1[0xb];
        bVar23 = pbVar1[0xc];
        bVar24 = pbVar1[0xd];
        bVar25 = pbVar1[0xe];
        bVar26 = pbVar1[0xf];
        pbVar3 = (byte *)((longlong)pbVar90 + 0x10 + uVar94);
        bVar27 = *pbVar3;
        bVar28 = pbVar3[1];
        bVar29 = pbVar3[2];
        bVar30 = pbVar3[3];
        bVar31 = pbVar3[4];
        bVar32 = pbVar3[5];
        bVar33 = pbVar3[6];
        bVar34 = pbVar3[7];
        bVar35 = pbVar3[8];
        bVar36 = pbVar3[9];
        bVar37 = pbVar3[10];
        bVar38 = pbVar3[0xb];
        bVar39 = pbVar3[0xc];
        bVar40 = pbVar3[0xd];
        bVar41 = pbVar3[0xe];
        bVar42 = pbVar3[0xf];
        bVar104 = -(*pbVar1 == bVar74);
        bVar105 = -(bVar12 == bVar75);
        bVar106 = -(bVar13 == bVar76);
        bVar107 = -(bVar14 == bVar77);
        bVar108 = -(bVar15 == bVar78);
        bVar109 = -(bVar16 == bVar79);
        bVar110 = -(bVar17 == bVar80);
        bVar111 = -(bVar18 == bVar81);
        bVar112 = -(bVar19 == bVar82);
        bVar113 = -(bVar20 == bVar83);
        bVar114 = -(bVar21 == bVar84);
        bVar115 = -(bVar22 == bVar85);
        bVar116 = -(bVar23 == bVar86);
        bVar117 = -(bVar24 == bVar87);
        bVar118 = -(bVar25 == bVar88);
        bVar119 = -(bVar26 == bVar89);
        bVar120 = -(bVar27 == bVar74);
        bVar121 = -(bVar28 == bVar75);
        bVar122 = -(bVar29 == bVar76);
        bVar123 = -(bVar30 == bVar77);
        bVar124 = -(bVar31 == bVar78);
        bVar125 = -(bVar32 == bVar79);
        bVar126 = -(bVar33 == bVar80);
        bVar127 = -(bVar34 == bVar81);
        bVar128 = -(bVar35 == bVar82);
        bVar129 = -(bVar36 == bVar83);
        bVar130 = -(bVar37 == bVar84);
        bVar131 = -(bVar38 == bVar85);
        bVar132 = -(bVar39 == bVar86);
        bVar133 = -(bVar40 == bVar87);
        bVar134 = -(bVar41 == bVar88);
        bVar135 = -(bVar42 == bVar89);
        pbVar3 = arg0 + uVar94;
        *pbVar3 = bVar104 & bVar100 | ~bVar104 & *pbVar1;
        pbVar3[1] = bVar105 & bVar59 | ~bVar105 & bVar12;
        pbVar3[2] = bVar106 & bVar60 | ~bVar106 & bVar13;
        pbVar3[3] = bVar107 & bVar61 | ~bVar107 & bVar14;
        pbVar3[4] = bVar108 & bVar62 | ~bVar108 & bVar15;
        pbVar3[5] = bVar109 & bVar63 | ~bVar109 & bVar16;
        pbVar3[6] = bVar110 & bVar64 | ~bVar110 & bVar17;
        pbVar3[7] = bVar111 & bVar65 | ~bVar111 & bVar18;
        pbVar3[8] = bVar112 & bVar66 | ~bVar112 & bVar19;
        pbVar3[9] = bVar113 & bVar67 | ~bVar113 & bVar20;
        pbVar3[10] = bVar114 & bVar68 | ~bVar114 & bVar21;
        pbVar3[0xb] = bVar115 & bVar69 | ~bVar115 & bVar22;
        pbVar3[0xc] = bVar116 & bVar70 | ~bVar116 & bVar23;
        pbVar3[0xd] = bVar117 & bVar71 | ~bVar117 & bVar24;
        pbVar3[0xe] = bVar118 & bVar72 | ~bVar118 & bVar25;
        pbVar3[0xf] = bVar119 & bVar73 | ~bVar119 & bVar26;
        pbVar1 = arg0 + uVar94 + 0x10;
        *pbVar1 = bVar120 & bVar100 | ~bVar120 & bVar27;
        pbVar1[1] = bVar121 & bVar59 | ~bVar121 & bVar28;
        pbVar1[2] = bVar122 & bVar60 | ~bVar122 & bVar29;
        pbVar1[3] = bVar123 & bVar61 | ~bVar123 & bVar30;
        pbVar1[4] = bVar124 & bVar62 | ~bVar124 & bVar31;
        pbVar1[5] = bVar125 & bVar63 | ~bVar125 & bVar32;
        pbVar1[6] = bVar126 & bVar64 | ~bVar126 & bVar33;
        pbVar1[7] = bVar127 & bVar65 | ~bVar127 & bVar34;
        pbVar1[8] = bVar128 & bVar66 | ~bVar128 & bVar35;
        pbVar1[9] = bVar129 & bVar67 | ~bVar129 & bVar36;
        pbVar1[10] = bVar130 & bVar68 | ~bVar130 & bVar37;
        pbVar1[0xb] = bVar131 & bVar69 | ~bVar131 & bVar38;
        pbVar1[0xc] = bVar132 & bVar70 | ~bVar132 & bVar39;
        pbVar1[0xd] = bVar133 & bVar71 | ~bVar133 & bVar40;
        pbVar1[0xe] = bVar134 & bVar72 | ~bVar134 & bVar41;
        pbVar1[0xf] = bVar135 & bVar73 | ~bVar135 & bVar42;
        uVar94 = uVar94 + 0x20;
      } while (uVar93 != uVar94);
      if (uStack_98 == uVar93) goto LAB_140d8b638;
      uVar94 = uVar93;
      if ((uStack_98 & 0x18) == 0) goto LAB_140d8b5a6;
    }
    uVar95 = _DAT_14306a990;
    cVar50 = UNK_14306a987;
    cVar49 = UNK_14306a986;
    cVar48 = UNK_14306a985;
    cVar47 = UNK_14306a984;
    cVar46 = UNK_14306a983;
    cVar45 = UNK_14306a982;
    cVar44 = UNK_14306a981;
    cVar43 = DAT_14306a980;
    uVar93 = uStack_98 & 0x7ffffffffffffff8;
    do {
      uVar4 = *(ulonglong *)((longlong)pbVar90 + uVar94);
      uVar103 = CONCAT17(-((char)(uVar4 >> 0x38) == cVar50),
                         CONCAT16(-((char)(uVar4 >> 0x30) == cVar49),
                                  CONCAT15(-((char)(uVar4 >> 0x28) == cVar48),
                                           CONCAT14(-((char)(uVar4 >> 0x20) == cVar47),
                                                    CONCAT13(-((char)(uVar4 >> 0x18) == cVar46),
                                                             CONCAT12(-((char)(uVar4 >> 0x10) ==
                                                                       cVar45),CONCAT11(-((char)(
                                                  uVar4 >> 8) == cVar44),-((char)uVar4 == cVar43))))
                                                  ))));
      *(ulonglong *)(arg0 + uVar94) = uVar103 & uVar95 | ~uVar103 & uVar4;
      uVar94 = uVar94 + 8;
    } while (uVar93 != uVar94);
    if (uStack_98 == uVar93) goto LAB_140d8b638;
  }
LAB_140d8b5a6:
  uVar95 = uStack_98 & 3;
  uVar94 = uVar93;
  if (uVar95 != 0) {
    do {
      bVar100 = *(byte *)((longlong)pbVar90 + uVar94);
      if (*(byte *)((longlong)pbVar90 + uVar94) == 0x5c) {
        bVar100 = 0x2f;
      }
      arg0[uVar94] = bVar100;
      uVar94 = uVar94 + 1;
      uVar95 = uVar95 - 1;
    } while (uVar95 != 0);
  }
  if (uVar93 - uStack_98 < 0xfffffffffffffffd) {
    do {
      bVar100 = *(byte *)((longlong)pbVar90 + uVar94);
      if (bVar100 == 0x5c) {
        bVar100 = 0x2f;
      }
      arg0[uVar94] = bVar100;
      bVar100 = *(byte *)((longlong)pbVar90 + 1 + uVar94);
      if (bVar100 == 0x5c) {
        bVar100 = 0x2f;
      }
      arg0[uVar94 + 1] = bVar100;
      bVar100 = *(byte *)((longlong)pbVar90 + 2 + uVar94);
      if (bVar100 == 0x5c) {
        bVar100 = 0x2f;
      }
      arg0[uVar94 + 2] = bVar100;
      bVar100 = *(byte *)((longlong)pbVar90 + 3 + uVar94);
      if (bVar100 == 0x5c) {
        bVar100 = 0x2f;
      }
      arg0[uVar94 + 3] = bVar100;
      uVar94 = uVar94 + 4;
    } while (uStack_98 != uVar94);
  }
LAB_140d8b638:
  uStack_a8 = uStack_98;
  pbStack_a0 = arg0;
  if (param_1[3] != 0) {
    uStack_88 = uStack_98;
    pbStack_90 = arg0;
    uVar94 = pdb_1400afac0(param_1 + 4,&uStack_a8);
    uStack_98 = uStack_88;
    arg0 = pbStack_90;
    lVar5 = *param_1;
    uVar93 = param_1[1];
    bVar100 = (byte)(uVar94 >> 0x39);
    auVar101 = ZEXT216(CONCAT11(bVar100,bVar100));
    auVar101 = pshuflw(auVar101,auVar101,0);
    lVar96 = 0;
    iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                   CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                   CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                              CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                    CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    iVar11 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                              CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                    CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    while( true ) {
      uVar94 = uVar94 & uVar93;
      pcVar2 = (char *)(lVar5 + uVar94);
      cVar43 = *pcVar2;
      cVar44 = pcVar2[1];
      cVar45 = pcVar2[2];
      cVar46 = pcVar2[3];
      cVar47 = pcVar2[4];
      cVar48 = pcVar2[5];
      cVar49 = pcVar2[6];
      cVar50 = pcVar2[7];
      cVar51 = pcVar2[8];
      cVar52 = pcVar2[9];
      cVar53 = pcVar2[10];
      cVar54 = pcVar2[0xb];
      cVar55 = pcVar2[0xc];
      cVar56 = pcVar2[0xd];
      cVar57 = pcVar2[0xe];
      cVar58 = pcVar2[0xf];
      auVar102[0] = -(cVar43 == auVar101[0]);
      auVar102[1] = -(cVar44 == auVar101[1]);
      auVar102[2] = -(cVar45 == auVar101[2]);
      auVar102[3] = -(cVar46 == auVar101[3]);
      auVar102[4] = -(cVar47 == auVar101[4]);
      auVar102[5] = -(cVar48 == auVar101[5]);
      auVar102[6] = -(cVar49 == auVar101[6]);
      auVar102[7] = -(cVar50 == auVar101[7]);
      auVar102[8] = -(cVar51 == auVar101[0]);
      auVar102[9] = -(cVar52 == auVar101[1]);
      auVar102[10] = -(cVar53 == auVar101[2]);
      auVar102[0xb] = -(cVar54 == auVar101[3]);
      auVar102[0xc] = -(cVar55 == auVar101[4]);
      auVar102[0xd] = -(cVar56 == auVar101[5]);
      auVar102[0xe] = -(cVar57 == auVar101[6]);
      auVar102[0xf] = -(cVar58 == auVar101[7]);
      uVar91 = (ushort)(SUB161(auVar102 >> 7,0) & 1) | (ushort)(SUB161(auVar102 >> 0xf,0) & 1) << 1
               | (ushort)(SUB161(auVar102 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar102 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar102 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar102 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar102 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar102 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar102 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar102 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar102 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar102 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar102 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar102 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar102 >> 0x77,0) & 1) << 0xe | (ushort)(auVar102[0xf] >> 7) << 0xf
      ;
      uVar98 = (uint)uVar91;
      while (uVar91 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar98; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar95 = uVar6 + uVar94 & uVar93;
        if (uStack_98 == *(ulonglong *)(lVar5 + -8 + uVar95 * -0x18)) {
          iVar92 = pub_142e32750(arg0,*(undefined8 *)(lVar5 + uVar95 * -0x18 + -0x10),uStack_98);
          uVar97 = 1;
          if (iVar92 == 0) goto LAB_140d8b713;
        }
        uVar91 = (ushort)(uVar98 - 1) & (ushort)uVar98;
        uVar98 = CONCAT22((short)(uVar98 - 1 >> 0x10),uVar91);
      }
      auVar136[0] = -(cVar43 == (char)iVar8);
      auVar136[1] = -(cVar44 == (char)((uint)iVar8 >> 8));
      auVar136[2] = -(cVar45 == (char)((uint)iVar8 >> 0x10));
      auVar136[3] = -(cVar46 == (char)((uint)iVar8 >> 0x18));
      auVar136[4] = -(cVar47 == (char)iVar9);
      auVar136[5] = -(cVar48 == (char)((uint)iVar9 >> 8));
      auVar136[6] = -(cVar49 == (char)((uint)iVar9 >> 0x10));
      auVar136[7] = -(cVar50 == (char)((uint)iVar9 >> 0x18));
      auVar136[8] = -(cVar51 == (char)iVar10);
      auVar136[9] = -(cVar52 == (char)((uint)iVar10 >> 8));
      auVar136[10] = -(cVar53 == (char)((uint)iVar10 >> 0x10));
      auVar136[0xb] = -(cVar54 == (char)((uint)iVar10 >> 0x18));
      auVar136[0xc] = -(cVar55 == (char)iVar11);
      auVar136[0xd] = -(cVar56 == (char)((uint)iVar11 >> 8));
      auVar136[0xe] = -(cVar57 == (char)((uint)iVar11 >> 0x10));
      auVar136[0xf] = -(cVar58 == (char)((uint)iVar11 >> 0x18));
      if ((((((((((((((((SUB161(auVar136 >> 7,0) & 1) != 0 || (SUB161(auVar136 >> 0xf,0) & 1) != 0)
                      || (SUB161(auVar136 >> 0x17,0) & 1) != 0) ||
                     (SUB161(auVar136 >> 0x1f,0) & 1) != 0) || (SUB161(auVar136 >> 0x27,0) & 1) != 0
                    ) || (SUB161(auVar136 >> 0x2f,0) & 1) != 0) ||
                  (SUB161(auVar136 >> 0x37,0) & 1) != 0) || (SUB161(auVar136 >> 0x3f,0) & 1) != 0)
                || (SUB161(auVar136 >> 0x47,0) & 1) != 0) || (SUB161(auVar136 >> 0x4f,0) & 1) != 0)
              || (SUB161(auVar136 >> 0x57,0) & 1) != 0) || (SUB161(auVar136 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar136 >> 0x67,0) & 1) != 0) || (SUB161(auVar136 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar136 >> 0x77,0) & 1) != 0) || auVar136[0xf] < '\0') break;
      uVar94 = uVar94 + lVar96 + 0x10;
      lVar96 = lVar96 + 0x10;
    }
  }
  uVar97 = 0;
LAB_140d8b713:
  if (uStack_98 != 0) {
    pub_1406abac0(arg0,uStack_98,1);
  }
  return uVar97;
}

