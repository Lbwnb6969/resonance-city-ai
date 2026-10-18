// VA 0x140d929f0, PDB extent 1557 bytes
// tg_mods::overlay::resolve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140d92a60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::overlay::resolve
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 1557 */

ulonglong * pdb_140d929f0(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
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
  byte bVar43;
  byte bVar44;
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
  char cVar59;
  char cVar60;
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
  byte bVar90;
  byte bVar91;
  ushort uVar92;
  int iVar93;
  byte *arg0;
  ulonglong uVar94;
  byte *pbVar95;
  uint uVar96;
  ulonglong uVar97;
  ulonglong uVar98;
  longlong lVar99;
  undefined8 uVar100;
  longlong lVar101;
  byte bVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  ulonglong uVar105;
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
  byte bVar136;
  byte bVar137;
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
  undefined1 auVar138 [16];
  ulonglong uStack_a8;
  byte *pbStack_a0;
  ulonglong uStack_98;
  byte *pbStack_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  if (_DAT_143ca48d0 < 0xfffffffffffffff0 && (char)(((uint)_DAT_143ca48d0 & 8) >> 3) == '\0') {
    _DAT_143ca48d0 = _DAT_143ca48d0 + 0x10;
    LOCK();
    UNLOCK();
  }
  else {
    pdb_142dbb5f0(&DAT_143ca48d0,0,param_3,1000000000);
  }
  pdb_140e9a150(&DAT_143ca48d0);
  pdb_140e9a150(0x143ca48d1);
  if (SBORROW8(0,_DAT_143ca48d8)) {
    pdb_140f3e010(param_1,param_2,param_3);
    goto LAB_140d92d49;
  }
  pdb_140f69110(&uStack_a8,param_2,param_3);
  pbVar95 = pbStack_a0;
  if ((char)uStack_a8 != '\0') {
    pdb_140f3e010(param_1,param_2,param_3);
    goto LAB_140d92d49;
  }
  if ((longlong)uStack_98 < 0) {
    uVar100 = 0;
LAB_140d92adb:
    pdb_142dc7e2a(uVar100);
LAB_140d92eb9:
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  uStack_88 = uStack_98;
  if (uStack_98 == 0) {
    pbStack_a0 = (byte *)0x1;
    uStack_98 = 0;
LAB_140d92d1f:
    arg0 = pbStack_a0;
    uStack_a8 = uStack_98;
    pbStack_90 = pbStack_a0;
    pdb_140f3e010(param_1,param_2,param_3);
    if (uStack_88 == 0) goto LAB_140d92d49;
  }
  else {
    pdb_14007ee60();
    uVar100 = 1;
    arg0 = pub_1406abab0(uStack_88,1);
    bVar91 = UNK_142e34f0f;
    bVar90 = UNK_142e34f0e;
    bVar89 = UNK_142e34f0d;
    bVar88 = UNK_142e34f0c;
    bVar87 = UNK_142e34f0b;
    bVar86 = UNK_142e34f0a;
    bVar85 = UNK_142e34f09;
    bVar84 = UNK_142e34f08;
    bVar83 = UNK_142e34f07;
    bVar82 = UNK_142e34f06;
    bVar81 = UNK_142e34f05;
    bVar80 = UNK_142e34f04;
    bVar79 = UNK_142e34f03;
    bVar78 = UNK_142e34f02;
    bVar77 = UNK_142e34f01;
    bVar76 = DAT_142e34f00;
    bVar75 = UNK_142e34b4f;
    bVar74 = UNK_142e34b4e;
    bVar73 = UNK_142e34b4d;
    bVar72 = UNK_142e34b4c;
    bVar71 = UNK_142e34b4b;
    bVar70 = UNK_142e34b4a;
    bVar69 = UNK_142e34b49;
    bVar68 = UNK_142e34b48;
    bVar67 = UNK_142e34b47;
    bVar66 = UNK_142e34b46;
    bVar65 = UNK_142e34b45;
    bVar64 = UNK_142e34b44;
    bVar63 = UNK_142e34b43;
    bVar62 = UNK_142e34b42;
    bVar61 = UNK_142e34b41;
    bVar102 = DAT_142e34b40;
    if (arg0 == (byte *)0x0) goto LAB_140d92adb;
    if ((ulonglong)((longlong)arg0 - (longlong)pbVar95) < 0x20 || uStack_88 < 8) {
      uVar94 = 0;
LAB_140d92c57:
      uVar98 = uStack_88 & 3;
      uVar97 = uVar94;
      if (uVar98 != 0) {
        do {
          bVar102 = pbVar95[uVar97];
          if (pbVar95[uVar97] == 0x5c) {
            bVar102 = 0x2f;
          }
          arg0[uVar97] = bVar102;
          uVar97 = uVar97 + 1;
          uVar98 = uVar98 - 1;
        } while (uVar98 != 0);
      }
      if (uVar94 - uStack_88 < 0xfffffffffffffffd) {
        do {
          bVar102 = pbVar95[uVar97];
          if (pbVar95[uVar97] == 0x5c) {
            bVar102 = 0x2f;
          }
          arg0[uVar97] = bVar102;
          bVar102 = pbVar95[uVar97 + 1];
          if (bVar102 == 0x5c) {
            bVar102 = 0x2f;
          }
          arg0[uVar97 + 1] = bVar102;
          bVar102 = pbVar95[uVar97 + 2];
          if (bVar102 == 0x5c) {
            bVar102 = 0x2f;
          }
          arg0[uVar97 + 2] = bVar102;
          bVar102 = pbVar95[uVar97 + 3];
          if (bVar102 == 0x5c) {
            bVar102 = 0x2f;
          }
          arg0[uVar97 + 3] = bVar102;
          uVar97 = uVar97 + 4;
        } while (uStack_88 != uVar97);
      }
    }
    else if (uStack_88 < 0x20) {
      uVar97 = 0;
LAB_140d92bf2:
      uVar98 = _DAT_14306a990;
      cVar52 = UNK_14306a987;
      cVar51 = UNK_14306a986;
      cVar50 = UNK_14306a985;
      cVar49 = UNK_14306a984;
      cVar48 = UNK_14306a983;
      cVar47 = UNK_14306a982;
      cVar46 = UNK_14306a981;
      cVar45 = DAT_14306a980;
      uVar94 = uStack_88 & 0x7ffffffffffffff8;
      do {
        uVar4 = *(ulonglong *)(pbVar95 + uVar97);
        uVar105 = CONCAT17(-((char)(uVar4 >> 0x38) == cVar52),
                           CONCAT16(-((char)(uVar4 >> 0x30) == cVar51),
                                    CONCAT15(-((char)(uVar4 >> 0x28) == cVar50),
                                             CONCAT14(-((char)(uVar4 >> 0x20) == cVar49),
                                                      CONCAT13(-((char)(uVar4 >> 0x18) == cVar48),
                                                               CONCAT12(-((char)(uVar4 >> 0x10) ==
                                                                         cVar47),CONCAT11(-((char)(
                                                  uVar4 >> 8) == cVar46),-((char)uVar4 == cVar45))))
                                                  ))));
        *(ulonglong *)(arg0 + uVar97) = uVar105 & uVar98 | ~uVar105 & uVar4;
        uVar97 = uVar97 + 8;
      } while (uVar94 != uVar97);
      if (uStack_88 != uVar94) goto LAB_140d92c57;
    }
    else {
      uVar94 = uStack_88 & 0x7fffffffffffffe0;
      uVar97 = 0;
      do {
        pbVar2 = pbVar95 + uVar97;
        bVar14 = pbVar2[1];
        bVar15 = pbVar2[2];
        bVar16 = pbVar2[3];
        bVar17 = pbVar2[4];
        bVar18 = pbVar2[5];
        bVar19 = pbVar2[6];
        bVar20 = pbVar2[7];
        bVar21 = pbVar2[8];
        bVar22 = pbVar2[9];
        bVar23 = pbVar2[10];
        bVar24 = pbVar2[0xb];
        bVar25 = pbVar2[0xc];
        bVar26 = pbVar2[0xd];
        bVar27 = pbVar2[0xe];
        bVar28 = pbVar2[0xf];
        pbVar1 = pbVar95 + uVar97 + 0x10;
        bVar29 = *pbVar1;
        bVar30 = pbVar1[1];
        bVar31 = pbVar1[2];
        bVar32 = pbVar1[3];
        bVar33 = pbVar1[4];
        bVar34 = pbVar1[5];
        bVar35 = pbVar1[6];
        bVar36 = pbVar1[7];
        bVar37 = pbVar1[8];
        bVar38 = pbVar1[9];
        bVar39 = pbVar1[10];
        bVar40 = pbVar1[0xb];
        bVar41 = pbVar1[0xc];
        bVar42 = pbVar1[0xd];
        bVar43 = pbVar1[0xe];
        bVar44 = pbVar1[0xf];
        bVar106 = -(*pbVar2 == bVar76);
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
        bVar120 = -(bVar27 == bVar90);
        bVar121 = -(bVar28 == bVar91);
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
        bVar136 = -(bVar43 == bVar90);
        bVar137 = -(bVar44 == bVar91);
        pbVar1 = arg0 + uVar97;
        *pbVar1 = bVar106 & bVar102 | ~bVar106 & *pbVar2;
        pbVar1[1] = bVar107 & bVar61 | ~bVar107 & bVar14;
        pbVar1[2] = bVar108 & bVar62 | ~bVar108 & bVar15;
        pbVar1[3] = bVar109 & bVar63 | ~bVar109 & bVar16;
        pbVar1[4] = bVar110 & bVar64 | ~bVar110 & bVar17;
        pbVar1[5] = bVar111 & bVar65 | ~bVar111 & bVar18;
        pbVar1[6] = bVar112 & bVar66 | ~bVar112 & bVar19;
        pbVar1[7] = bVar113 & bVar67 | ~bVar113 & bVar20;
        pbVar1[8] = bVar114 & bVar68 | ~bVar114 & bVar21;
        pbVar1[9] = bVar115 & bVar69 | ~bVar115 & bVar22;
        pbVar1[10] = bVar116 & bVar70 | ~bVar116 & bVar23;
        pbVar1[0xb] = bVar117 & bVar71 | ~bVar117 & bVar24;
        pbVar1[0xc] = bVar118 & bVar72 | ~bVar118 & bVar25;
        pbVar1[0xd] = bVar119 & bVar73 | ~bVar119 & bVar26;
        pbVar1[0xe] = bVar120 & bVar74 | ~bVar120 & bVar27;
        pbVar1[0xf] = bVar121 & bVar75 | ~bVar121 & bVar28;
        pbVar1 = arg0 + uVar97 + 0x10;
        *pbVar1 = bVar122 & bVar102 | ~bVar122 & bVar29;
        pbVar1[1] = bVar123 & bVar61 | ~bVar123 & bVar30;
        pbVar1[2] = bVar124 & bVar62 | ~bVar124 & bVar31;
        pbVar1[3] = bVar125 & bVar63 | ~bVar125 & bVar32;
        pbVar1[4] = bVar126 & bVar64 | ~bVar126 & bVar33;
        pbVar1[5] = bVar127 & bVar65 | ~bVar127 & bVar34;
        pbVar1[6] = bVar128 & bVar66 | ~bVar128 & bVar35;
        pbVar1[7] = bVar129 & bVar67 | ~bVar129 & bVar36;
        pbVar1[8] = bVar130 & bVar68 | ~bVar130 & bVar37;
        pbVar1[9] = bVar131 & bVar69 | ~bVar131 & bVar38;
        pbVar1[10] = bVar132 & bVar70 | ~bVar132 & bVar39;
        pbVar1[0xb] = bVar133 & bVar71 | ~bVar133 & bVar40;
        pbVar1[0xc] = bVar134 & bVar72 | ~bVar134 & bVar41;
        pbVar1[0xd] = bVar135 & bVar73 | ~bVar135 & bVar42;
        pbVar1[0xe] = bVar136 & bVar74 | ~bVar136 & bVar43;
        pbVar1[0xf] = bVar137 & bVar75 | ~bVar137 & bVar44;
        uVar97 = uVar97 + 0x20;
      } while (uVar94 != uVar97);
      if (uStack_88 != uVar94) {
        uVar97 = uVar94;
        if ((uStack_88 & 0x18) == 0) goto LAB_140d92c57;
        goto LAB_140d92bf2;
      }
    }
    uStack_a8 = uStack_88;
    uStack_98 = uStack_88;
    pbStack_a0 = arg0;
    if ((uStack_88 < 7) || (*(int *)(arg0 + 3) != 0x2f737465 || *(int *)arg0 != 0x65737361))
    goto LAB_140d92d1f;
    if (_DAT_143ca4908 != 0) {
      pbStack_90 = arg0;
      uVar97 = pdb_1400afac0(0x143ca4910,&uStack_a8);
      uVar94 = _DAT_143ca48f8;
      lVar7 = _DAT_143ca48f0;
      bVar102 = (byte)(uVar97 >> 0x39);
      auVar103 = ZEXT216(CONCAT11(bVar102,bVar102));
      auVar103 = pshuflw(auVar103,auVar103,0);
      lVar99 = 0;
      iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                                CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                      CONCAT13(unaff_XMM7_Bd,
                               CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
      iVar11 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                                CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                      CONCAT13(unaff_XMM7_Bh,
                               CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
      iVar12 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                                CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                      CONCAT13(unaff_XMM7_Bl,
                               CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
      iVar13 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                                CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                      CONCAT13(unaff_XMM7_Bp,
                               CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
      do {
        uVar97 = uVar97 & uVar94;
        pcVar3 = (char *)(lVar7 + uVar97);
        cVar45 = *pcVar3;
        cVar46 = pcVar3[1];
        cVar47 = pcVar3[2];
        cVar48 = pcVar3[3];
        cVar49 = pcVar3[4];
        cVar50 = pcVar3[5];
        cVar51 = pcVar3[6];
        cVar52 = pcVar3[7];
        cVar53 = pcVar3[8];
        cVar54 = pcVar3[9];
        cVar55 = pcVar3[10];
        cVar56 = pcVar3[0xb];
        cVar57 = pcVar3[0xc];
        cVar58 = pcVar3[0xd];
        cVar59 = pcVar3[0xe];
        cVar60 = pcVar3[0xf];
        auVar104[0] = -(cVar45 == auVar103[0]);
        auVar104[1] = -(cVar46 == auVar103[1]);
        auVar104[2] = -(cVar47 == auVar103[2]);
        auVar104[3] = -(cVar48 == auVar103[3]);
        auVar104[4] = -(cVar49 == auVar103[4]);
        auVar104[5] = -(cVar50 == auVar103[5]);
        auVar104[6] = -(cVar51 == auVar103[6]);
        auVar104[7] = -(cVar52 == auVar103[7]);
        auVar104[8] = -(cVar53 == auVar103[0]);
        auVar104[9] = -(cVar54 == auVar103[1]);
        auVar104[10] = -(cVar55 == auVar103[2]);
        auVar104[0xb] = -(cVar56 == auVar103[3]);
        auVar104[0xc] = -(cVar57 == auVar103[4]);
        auVar104[0xd] = -(cVar58 == auVar103[5]);
        auVar104[0xe] = -(cVar59 == auVar103[6]);
        auVar104[0xf] = -(cVar60 == auVar103[7]);
        uVar92 = (ushort)(SUB161(auVar104 >> 7,0) & 1) |
                 (ushort)(SUB161(auVar104 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar104 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar104 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar104 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar104 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar104 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar104 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar104 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar104 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar104 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar104 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar104 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar104 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar104 >> 0x77,0) & 1) << 0xe |
                 (ushort)(auVar104[0xf] >> 7) << 0xf;
        uVar96 = (uint)uVar92;
        uVar98 = uStack_88;
        while (uVar92 != 0) {
          uVar8 = 0;
          for (uVar9 = uVar96; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          lVar101 = (uVar8 + uVar97 & uVar94) * -0x38;
          if (uVar98 == *(ulonglong *)(lVar7 + -0x28 + lVar101)) {
            lVar101 = lVar101 + lVar7;
            iVar93 = pub_142e32750(arg0,*(undefined8 *)(lVar101 + -0x30));
            uVar98 = uStack_88;
            if (iVar93 == 0) {
              uVar94 = *(ulonglong *)(lVar101 + -0x10);
              if ((longlong)uVar94 < 0) {
                uVar100 = 0;
LAB_140d92ea9:
                pbStack_90 = arg0;
                pdb_142dc7e2a(uVar100,uVar94);
                goto LAB_140d92eb9;
              }
              if (uVar94 == 0) {
                *param_1 = 0;
                param_1[1] = 1;
                param_1[2] = 0;
              }
              else {
                uVar5 = *(undefined8 *)(lVar101 + -0x18);
                pdb_14007ee60();
                uVar100 = 1;
                pbVar95 = pub_1406abab0(uVar94,1);
                if (pbVar95 == (byte *)0x0) goto LAB_140d92ea9;
                *param_1 = uVar94;
                param_1[1] = (ulonglong)pbVar95;
                pub_142e32760(pbVar95,uVar5,uVar94);
                param_1[2] = uVar94;
              }
              *(undefined1 *)(param_1 + 3) = *(undefined1 *)(lVar101 + -8);
              goto LAB_140d92d44;
            }
          }
          uVar92 = (ushort)(uVar96 - 1) & (ushort)uVar96;
          uVar96 = CONCAT22((short)(uVar96 - 1 >> 0x10),uVar92);
        }
        auVar138[0] = -(cVar45 == (char)iVar10);
        auVar138[1] = -(cVar46 == (char)((uint)iVar10 >> 8));
        auVar138[2] = -(cVar47 == (char)((uint)iVar10 >> 0x10));
        auVar138[3] = -(cVar48 == (char)((uint)iVar10 >> 0x18));
        auVar138[4] = -(cVar49 == (char)iVar11);
        auVar138[5] = -(cVar50 == (char)((uint)iVar11 >> 8));
        auVar138[6] = -(cVar51 == (char)((uint)iVar11 >> 0x10));
        auVar138[7] = -(cVar52 == (char)((uint)iVar11 >> 0x18));
        auVar138[8] = -(cVar53 == (char)iVar12);
        auVar138[9] = -(cVar54 == (char)((uint)iVar12 >> 8));
        auVar138[10] = -(cVar55 == (char)((uint)iVar12 >> 0x10));
        auVar138[0xb] = -(cVar56 == (char)((uint)iVar12 >> 0x18));
        auVar138[0xc] = -(cVar57 == (char)iVar13);
        auVar138[0xd] = -(cVar58 == (char)((uint)iVar13 >> 8));
        auVar138[0xe] = -(cVar59 == (char)((uint)iVar13 >> 0x10));
        auVar138[0xf] = -(cVar60 == (char)((uint)iVar13 >> 0x18));
        if ((((((((((((((((SUB161(auVar138 >> 7,0) & 1) != 0 || (SUB161(auVar138 >> 0xf,0) & 1) != 0
                         ) || (SUB161(auVar138 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar138 >> 0x1f,0) & 1) != 0) ||
                      (SUB161(auVar138 >> 0x27,0) & 1) != 0) ||
                     (SUB161(auVar138 >> 0x2f,0) & 1) != 0) || (SUB161(auVar138 >> 0x37,0) & 1) != 0
                    ) || (SUB161(auVar138 >> 0x3f,0) & 1) != 0) ||
                  (SUB161(auVar138 >> 0x47,0) & 1) != 0) || (SUB161(auVar138 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar138 >> 0x57,0) & 1) != 0) || (SUB161(auVar138 >> 0x5f,0) & 1) != 0)
              || (SUB161(auVar138 >> 0x67,0) & 1) != 0) || (SUB161(auVar138 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar138 >> 0x77,0) & 1) != 0) || auVar138[0xf] < '\0') break;
        uVar97 = uVar97 + lVar99 + 0x10;
        lVar99 = lVar99 + 0x10;
      } while( true );
    }
    pbStack_90 = arg0;
    pdb_140f3e010(param_1,param_2,param_3);
  }
LAB_140d92d44:
  pub_1406abac0(arg0,uStack_88,1);
LAB_140d92d49:
  pdb_140e9a350(&DAT_143ca48d0);
  pdb_140e9a350(0x143ca48d1);
  LOCK();
  lVar7 = _DAT_143ca48d0 - 0x10;
  UNLOCK();
  uVar94 = _DAT_143ca48d0 & 0xfffffffffffffff2;
  _DAT_143ca48d0 = lVar7;
  if (uVar94 == 0x12) {
    pdb_142dbbf50(&DAT_143ca48d0);
  }
  return param_1;
}

