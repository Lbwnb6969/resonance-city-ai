// VA 0x140488270, PDB extent 3971 bytes
// tiny_glade::sdl_setup::find_best_fullscreen_video_mode
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/sdl_setup.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::sdl_setup::find_best_fullscreen_video_mode
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/sdl_setup.rs
   Extent: 3971 */

uint * pdb_140488270(uint *param_1,undefined8 param_2,undefined4 param_3,ulonglong param_4)

{
  byte *pbVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined8 uVar21;
  char cVar22;
  ushort uVar23;
  short sVar24;
  int iVar25;
  int iVar26;
  byte *pbVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  int iVar34;
  int iVar35;
  ulonglong **ppuVar36;
  byte *pbVar37;
  code *pcVar38;
  uint uVar39;
  byte *pbVar40;
  bool bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
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
  undefined1 auVar45 [16];
  ulonglong *puStack_1a0;
  code *pcStack_198;
  ulonglong **ppuStack_190;
  code *pcStack_188;
  longlong lStack_180;
  ulonglong *puStack_178;
  code *pcStack_170;
  ulonglong **ppuStack_168;
  byte *pbStack_160;
  ulonglong uStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  ulonglong *puStack_138;
  code *pcStack_130;
  ulonglong **ppuStack_128;
  byte *pbStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  int iStack_104;
  byte *pbStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  ulonglong **ppuStack_c0;
  ulonglong uStack_b8;
  byte *pbStack_b0;
  ulonglong uStack_a8;
  uint *puStack_a0;
  uint uStack_94;
  ulonglong uStack_90;
  undefined1 uStack_84;
  byte bStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  pdb_1406d1170(&pbStack_118);
  if ((int)pbStack_118 == 1) {
    uVar28 = CONCAT44(uStack_110._4_4_,(int)uStack_110);
    pbVar1 = (byte *)CONCAT44(iStack_104,uStack_108);
    pdb_14007ee60();
    pbStack_150 = pub_1406abab0(9,1);
    if (pbStack_150 == (byte *)0x0) {
      pdb_142dc7e2a(1,9);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pbStack_150[0] = 0x28;
    pbStack_150[1] = 0x6e;
    pbStack_150[2] = 0x6f;
    pbStack_150[3] = 0x20;
    pbStack_150[4] = 0x6e;
    pbStack_150[5] = 0x61;
    pbStack_150[6] = 0x6d;
    pbStack_150[7] = 0x65;
    pbStack_150[8] = 0x29;
    uStack_158 = 9;
    pbStack_148 = (byte *)0x9;
    if (uVar28 != 0) {
      pub_1406abac0(pbVar1,uVar28,1);
    }
  }
  else {
    pbStack_148 = pbStack_100;
    uStack_158 = CONCAT44(uStack_110._4_4_,(int)uStack_110);
    pbStack_150 = (byte *)CONCAT44(iStack_104,uStack_108);
  }
  pdb_1406d12b0(&pbStack_118,param_2,param_3);
  iVar35 = (int)uStack_110;
  if (!SBORROW8(0,(longlong)pbStack_118)) {
    if (pbStack_118 != (byte *)0x0) {
      pub_1406abac0((byte *)CONCAT44(uStack_110._4_4_,(int)uStack_110),(ulonglong)pbStack_118,1);
    }
    *param_1 = 0;
    goto LAB_140488b95;
  }
  uStack_b8 = 0;
  pbStack_b0 = (byte *)0x4;
  uStack_a8 = 0;
  iVar34 = 0;
  puStack_a0 = param_1;
  uStack_90 = param_4;
  while (pbVar1 = pbStack_b0, iVar34 < iVar35) {
    uStack_81 = 1;
    pdb_1406d1110(&puStack_178,param_2,param_3,iVar34);
    uVar28 = uStack_a8;
    iVar34 = iVar34 + 1;
    if (SBORROW8(0,(longlong)puStack_178)) {
      if (uStack_a8 == uStack_b8) {
        uStack_81 = 1;
        pdb_142d7ef30(&uStack_b8);
      }
      *(code **)(pbStack_b0 + uVar28 * 0x10) = pcStack_170;
      *(ulonglong ***)(pbStack_b0 + uVar28 * 0x10 + 8) = ppuStack_168;
      uStack_a8 = uVar28 + 1;
    }
    else {
      ppuStack_128 = ppuStack_168;
      puStack_138 = puStack_178;
      pcStack_130 = pcStack_170;
      if (3 < *_DAT_143ca8e90) {
        puStack_1a0 = &uStack_158;
        pcStack_198 = pdb_140001020;
        ppuStack_190 = &puStack_138;
        pcStack_188 = pdb_140094770;
        pbStack_118 = (byte *)0x0;
        uStack_110._0_4_ = 0x42f5dd4e;
        uStack_110._4_4_ = 1;
        uStack_108 = 0x15;
        iStack_104 = 0;
        pbStack_100 = (byte *)0x0;
        puStack_f8 = &UNK_142f5dcf3;
        uStack_f0 = 0x22;
        uStack_e8 = 4;
        puStack_e0 = &UNK_142f5dd4e;
        uStack_d8 = 0x15;
        uStack_d0 = 0xc500000001;
        puStack_c8 = &UNK_142f5dedf;
        ppuStack_c0 = &puStack_1a0;
        pdb_140f332f0(&bStack_83,&pbStack_118);
      }
      if (puStack_138 != (ulonglong *)0x0) {
        pub_1406abac0((byte *)pcStack_130,(ulonglong)puStack_138,1);
      }
    }
  }
  if (uStack_a8 == 0) {
    if (1 < *_DAT_143ca8e90) {
      puStack_1a0 = &uStack_158;
      pcStack_198 = pdb_140094770;
      pbStack_118 = (byte *)0x0;
      uStack_110._0_4_ = 0x42f5dd4e;
      uStack_110._4_4_ = 1;
      uStack_108 = 0x15;
      iStack_104 = 0;
      pbStack_100 = (byte *)0x0;
      puStack_f8 = &UNK_142f5dcf3;
      uStack_f0 = 0x22;
      uStack_e8 = 2;
      puStack_e0 = &UNK_142f5dd4e;
      uStack_d8 = 0x15;
      uStack_d0 = 0xca00000001;
      puStack_c8 = &UNK_142f5deae;
      ppuStack_c0 = &puStack_1a0;
      uStack_81 = 1;
      pdb_140f332f0(&bStack_83,&pbStack_118);
    }
    param_1 = puStack_a0;
    *puStack_a0 = 0;
    if (uStack_b8 != 0) {
      pub_1406abac0(pbStack_b0,uStack_b8 << 4,4);
    }
    goto LAB_140488b95;
  }
  pbStack_118 = &bStack_83;
  if (uStack_a8 != 1) {
    if (uStack_a8 < 0x15) {
      pbVar37 = pbStack_b0 + uStack_a8 * 0x10;
      pbVar40 = pbStack_b0 + 0x10;
      do {
        uStack_81 = 1;
        pdb_1400deac0(pbVar1,pbVar40);
        pbVar40 = pbVar40 + 0x10;
      } while (pbVar40 != pbVar37);
    }
    else {
      uStack_81 = 1;
      pdb_140224c60(pbStack_b0,uStack_a8,&pbStack_118);
    }
  }
  if (_DAT_143ca31b8 != 2) {
    uStack_81 = 1;
    pdb_142d84d70(0x143ca3178,0x143ca3178);
  }
  LOCK();
  bVar41 = DAT_143ca3180 == '\0';
  if (bVar41) {
    DAT_143ca3180 = '\x01';
  }
  UNLOCK();
  if (!bVar41) {
    uStack_81 = 1;
    pdb_142dc6be0(&DAT_143ca3180);
  }
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uStack_94 = 0;
  }
  else {
    uStack_81 = 1;
    uStack_94 = pdb_142dc79e0();
    uStack_94 = uStack_94 ^ 1;
  }
  if (DAT_143ca3181 != '\0') {
    pbStack_118 = (byte *)&DAT_143ca3180;
    uVar39 = (uint)(int)uStack_110 >> 8;
    uStack_110._0_4_ = CONCAT31((int3)uVar39,(char)uStack_94);
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_142f5e168,0x2b,&pbStack_118,&UNK_142f5e148,&UNK_142f5de70);
  }
  lVar33 = lStack_180;
  pbVar1 = pbStack_160;
  if (_DAT_143ca31a0 != 0) {
    uStack_82 = 1;
    pbVar27 = (byte *)pdb_1400afac0(0x143ca31a8);
    pbVar37 = pbStack_148;
    pbVar40 = pbStack_150;
    uVar28 = _DAT_143ca3190;
    lVar30 = _DAT_143ca3188;
    bVar42 = (byte)((ulonglong)pbVar27 >> 0x39);
    auVar43 = ZEXT216(CONCAT11(bVar42,bVar42));
    auVar43 = pshuflw(auVar43,auVar43,0);
    lVar32 = 0;
    iVar35 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                              CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                    CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    iVar34 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                              CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                    CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    iVar5 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                   CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    iVar26 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                              CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                    CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    while( true ) {
      pbVar27 = (byte *)((ulonglong)pbVar27 & uVar28);
      pbVar1 = pbVar27 + lVar30;
      bVar42 = *pbVar1;
      bVar6 = pbVar1[1];
      bVar7 = pbVar1[2];
      bVar8 = pbVar1[3];
      bVar9 = pbVar1[4];
      bVar10 = pbVar1[5];
      bVar11 = pbVar1[6];
      bVar12 = pbVar1[7];
      bVar13 = pbVar1[8];
      bVar14 = pbVar1[9];
      bVar15 = pbVar1[10];
      bVar16 = pbVar1[0xb];
      bVar17 = pbVar1[0xc];
      bVar18 = pbVar1[0xd];
      bVar19 = pbVar1[0xe];
      bVar20 = pbVar1[0xf];
      auVar44[0] = -(bVar42 == auVar43[0]);
      auVar44[1] = -(bVar6 == auVar43[1]);
      auVar44[2] = -(bVar7 == auVar43[2]);
      auVar44[3] = -(bVar8 == auVar43[3]);
      auVar44[4] = -(bVar9 == auVar43[4]);
      auVar44[5] = -(bVar10 == auVar43[5]);
      auVar44[6] = -(bVar11 == auVar43[6]);
      auVar44[7] = -(bVar12 == auVar43[7]);
      auVar44[8] = -(bVar13 == auVar43[0]);
      auVar44[9] = -(bVar14 == auVar43[1]);
      auVar44[10] = -(bVar15 == auVar43[2]);
      auVar44[0xb] = -(bVar16 == auVar43[3]);
      auVar44[0xc] = -(bVar17 == auVar43[4]);
      auVar44[0xd] = -(bVar18 == auVar43[5]);
      auVar44[0xe] = -(bVar19 == auVar43[6]);
      auVar44[0xf] = -(bVar20 == auVar43[7]);
      uVar23 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
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
               (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf;
      uVar39 = (uint)uVar23;
      lVar33 = lStack_180;
      pbVar1 = pbStack_160;
      while (lStack_180 = lVar32, pbStack_160 = pbVar27, uVar23 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar39; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar29 = (ulonglong)(pbStack_160 + uVar3) & uVar28;
        if ((pbVar37 == *(byte **)(lVar30 + -8 + uVar29 * -0x18)) &&
           (iVar25 = pub_142e32750(pbVar40,*(undefined8 *)(uVar29 * -0x18 + lVar30 + -0x10),pbVar37)
           , iVar25 == 0)) goto LAB_14048891a;
        uVar23 = (ushort)(uVar39 - 1) & (ushort)uVar39;
        uVar39 = CONCAT22((short)(uVar39 - 1 >> 0x10),uVar23);
        pbVar27 = pbStack_160;
        lVar32 = lStack_180;
        lVar33 = lStack_180;
        pbVar1 = pbStack_160;
      }
      auVar45[0] = -(bVar42 == (byte)iVar35);
      auVar45[1] = -(bVar6 == (byte)((uint)iVar35 >> 8));
      auVar45[2] = -(bVar7 == (byte)((uint)iVar35 >> 0x10));
      auVar45[3] = -(bVar8 == (byte)((uint)iVar35 >> 0x18));
      auVar45[4] = -(bVar9 == (byte)iVar34);
      auVar45[5] = -(bVar10 == (byte)((uint)iVar34 >> 8));
      auVar45[6] = -(bVar11 == (byte)((uint)iVar34 >> 0x10));
      auVar45[7] = -(bVar12 == (byte)((uint)iVar34 >> 0x18));
      auVar45[8] = -(bVar13 == (byte)iVar5);
      auVar45[9] = -(bVar14 == (byte)((uint)iVar5 >> 8));
      auVar45[10] = -(bVar15 == (byte)((uint)iVar5 >> 0x10));
      auVar45[0xb] = -(bVar16 == (byte)((uint)iVar5 >> 0x18));
      auVar45[0xc] = -(bVar17 == (byte)iVar26);
      auVar45[0xd] = -(bVar18 == (byte)((uint)iVar26 >> 8));
      auVar45[0xe] = -(bVar19 == (byte)((uint)iVar26 >> 0x10));
      auVar45[0xf] = -(bVar20 == (byte)((uint)iVar26 >> 0x18));
      if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 || (SUB161(auVar45 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar45 >> 0x17,0) & 1) != 0) || (SUB161(auVar45 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar45 >> 0x27,0) & 1) != 0) || (SUB161(auVar45 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar45 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar45 >> 0x3f,0) & 1) != 0) || (SUB161(auVar45 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar45 >> 0x4f,0) & 1) != 0) || (SUB161(auVar45 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar45 >> 0x5f,0) & 1) != 0) || (SUB161(auVar45 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar45 >> 0x6f,0) & 1) != 0) || (SUB161(auVar45 >> 0x77,0) & 1) != 0) ||
          auVar45[0xf] < '\0') break;
      pbVar27 = pbStack_160 + lStack_180 + 0x10;
      lVar32 = lStack_180 + 0x10;
      lStack_180 = lVar33;
      pbStack_160 = pbVar1;
    }
  }
  pbStack_160 = pbVar1;
  lStack_180 = lVar33;
  if (3 < *_DAT_143ca8e90) {
    uStack_82 = 1;
    pdb_14017f3a0(&puStack_138,pbStack_b0,pbStack_b0 + uStack_a8 * 0x10);
    ppuVar36 = ppuStack_128;
    pcVar2 = pcStack_130;
    pdb_140146ab0(&puStack_178,pcStack_130,ppuStack_128,&UNK_142f5de88,5);
    puStack_1a0 = &uStack_158;
    pcStack_198 = pdb_140001020;
    pcStack_188 = pdb_140001020;
    pbStack_118 = (byte *)0x0;
    uStack_110._0_4_ = 0x42f5dd4e;
    uStack_110._4_4_ = 1;
    uStack_108 = 0x15;
    iStack_104 = 0;
    pbStack_100 = (byte *)0x0;
    puStack_f8 = &UNK_142f5dcf3;
    uStack_f0 = 0x22;
    uStack_e8 = 4;
    puStack_e0 = &UNK_142f5dd4e;
    uStack_d8 = 0x15;
    uStack_d0 = 0xda00000001;
    puStack_c8 = &UNK_142f5de8d;
    ppuStack_c0 = &puStack_1a0;
    ppuStack_190 = &puStack_178;
    pdb_140f332f0(&bStack_83,&pbStack_118);
    if (puStack_178 != (ulonglong *)0x0) {
      pub_1406abac0((byte *)pcStack_170,(ulonglong)puStack_178,1);
    }
    if (ppuVar36 != (ulonglong **)0x0) {
      pcVar38 = pcVar2 + 8;
      do {
        if (*(ulonglong *)(pcVar38 + -8) != 0) {
          pub_1406abac0(*(byte **)pcVar38,*(ulonglong *)(pcVar38 + -8),1);
        }
        pcVar38 = pcVar38 + 0x18;
        ppuVar36 = (ulonglong **)((longlong)ppuVar36 + -1);
      } while (ppuVar36 != (ulonglong **)0x0);
    }
    if (puStack_138 != (ulonglong *)0x0) {
      pub_1406abac0((byte *)pcVar2,(longlong)puStack_138 * 0x18,8);
    }
  }
  uStack_82 = 1;
  pdb_140f60be0(&pbStack_118,&uStack_158);
  uStack_82 = 1;
  pdb_1403b0b40(&DAT_143ca3188,&pbStack_118);
LAB_14048891a:
  if (*(int *)(uStack_90 + 0x30) == 0) {
    uStack_82 = 1;
    pdb_1406d1330(&pbStack_118,param_2,param_3);
    iVar35 = iStack_104;
    if (SBORROW8(0,(longlong)pbStack_118)) {
      uVar28 = CONCAT44(uStack_108,uStack_110._4_4_);
      uStack_82 = 1;
      sVar24 = pdb_1406d15b0();
LAB_1404889b8:
      iVar34 = 0;
      if (0 < iVar35) {
        iVar34 = iVar35;
      }
      *(undefined4 *)(uStack_90 + 0x30) = 1;
      *(ulonglong *)(uStack_90 + 0x34) =
           CONCAT44(-(uint)(0 < (int)(uVar28 >> 0x20)),-(uint)(0 < (int)uVar28)) & uVar28;
      *(int *)(uStack_90 + 0x3c) = iVar34 * 1000;
      *(short *)(uStack_90 + 0x40) = sVar24 << 3;
      goto LAB_1404889f2;
    }
    if (pbStack_118 != (byte *)0x0) {
      pub_1406abac0((byte *)CONCAT44(uStack_110._4_4_,(int)uStack_110),(ulonglong)pbStack_118,1);
    }
    uStack_82 = 1;
    pdb_1406d13f0(&pbStack_118,param_2,param_3);
    iVar35 = iStack_104;
    if (SBORROW8(0,(longlong)pbStack_118)) {
      uVar28 = CONCAT44(uStack_108,uStack_110._4_4_);
      uStack_82 = 1;
      sVar24 = pdb_1406d15b0();
      goto LAB_1404889b8;
    }
    if (pbStack_118 != (byte *)0x0) {
      pub_1406abac0((byte *)CONCAT44(uStack_110._4_4_,(int)uStack_110),(ulonglong)pbStack_118,1);
    }
    cVar22 = (char)uStack_94;
    if (uStack_a8 != 0) {
      uVar21 = *(undefined8 *)(pbStack_b0 + 8);
      *(undefined8 *)(puStack_a0 + 1) = *(undefined8 *)pbStack_b0;
      *(undefined8 *)(puStack_a0 + 3) = uVar21;
    }
    *puStack_a0 = (uint)(uStack_a8 != 0);
    if (uStack_b8 != 0) {
      pub_1406abac0(pbStack_b0,uStack_b8 << 4,4);
    }
  }
  else {
LAB_1404889f2:
    uVar29 = uStack_90;
    uVar28 = uStack_a8;
    if (uStack_a8 == 0) {
      cVar22 = (char)uStack_94;
      if (uStack_b8 != 0) {
        pub_1406abac0(pbStack_b0,uStack_b8 << 4,4);
      }
      *puStack_a0 = 0;
    }
    else {
      uStack_90 = uStack_b8;
      iVar35 = *(int *)(pbStack_b0 + 4);
      iVar34 = *(int *)(pbStack_b0 + 8);
      iVar5 = *(int *)(pbStack_b0 + 0xc);
      ppuVar36 = *(ulonglong ***)(pbStack_b0 + 8);
      uVar39 = *(uint *)(uVar29 + 0x34);
      uVar3 = *(uint *)(uVar29 + 0x38);
      uStack_84 = 0;
      lStack_180 = CONCAT44(lStack_180._4_4_,*(undefined4 *)pbStack_b0);
      pbStack_160 = pbStack_b0;
      iVar26 = pdb_1406d15b0();
      pbStack_100 = pbStack_160 + uVar28 * 0x10;
      lVar30 = (longlong)iVar34 * (longlong)iVar35 - (ulonglong)uVar3 * (ulonglong)uVar39;
      lVar33 = -lVar30;
      if (lVar33 < 0) {
        lVar33 = lVar30;
      }
      uVar28 = (ulonglong)(uint)(iVar26 << 3);
      uVar31 = (ulonglong)*(ushort *)(uVar29 + 0x40);
      lVar30 = uVar28 - uVar31;
      if (uVar28 < uVar31) {
        lVar30 = uVar31 - uVar28;
      }
      lVar32 = (longlong)iVar5 * 1000;
      uVar31 = (ulonglong)*(uint *)(uVar29 + 0x3c);
      uVar28 = uVar31 + (longlong)iVar5 * -1000;
      if ((longlong)uVar31 < lVar32) {
        uVar28 = lVar32 - uVar31;
      }
      auVar43._8_8_ = 0;
      auVar43._0_8_ = uVar28;
      puStack_138 = (ulonglong *)
                    (lVar30 * 1000 + lVar33 + SUB168(auVar43 * ZEXT816(0x199999999999999a),8));
      pcStack_130 = (code *)CONCAT44(iVar35,(int)lStack_180);
      uStack_110 = pbStack_160 + 0x10;
      pbStack_118 = pbStack_160;
      uStack_108 = (undefined4)uStack_90;
      iStack_104 = (int)(uStack_90 >> 0x20);
      uStack_84 = 1;
      ppuStack_128 = ppuVar36;
      pdb_1406a5160(&puStack_1a0,&pbStack_118,&puStack_138,uVar29 + 0x34);
      ppuStack_168 = ppuStack_190;
      puStack_178 = puStack_1a0;
      pcStack_170 = pcStack_198;
      *(code **)(puStack_a0 + 1) = pcStack_198;
      *(ulonglong ***)(puStack_a0 + 3) = ppuStack_190;
      *puStack_a0 = 1;
      cVar22 = (char)uStack_94;
    }
  }
  if ((cVar22 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) {
    uStack_81 = 0;
    cVar22 = pdb_142dc79e0();
    if (cVar22 == '\0') {
      DAT_143ca3181 = '\x01';
    }
  }
  cVar22 = DAT_143ca3180;
  LOCK();
  DAT_143ca3180 = '\0';
  UNLOCK();
  param_1 = puStack_a0;
  if (cVar22 == '\x02') {
    uStack_81 = 0;
    pdb_142dc6ca0(&DAT_143ca3180);
    param_1 = puStack_a0;
  }
LAB_140488b95:
  if (uStack_158 != 0) {
    pub_1406abac0(pbStack_150,uStack_158,1);
  }
  return param_1;
}

