// VA 0x140483110, PDB extent 5213 bytes
// tiny_glade::winit_setup::find_best_fullscreen_video_mode
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/winit_setup.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::winit_setup::find_best_fullscreen_video_mode
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/winit_setup.rs
   Extent: 5213 */

longlong * pdb_140483110(longlong *param_1,ulonglong param_2,longlong param_3)

{
  char *pcVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  code **ppcVar4;
  double dVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  byte ****ppppbVar21;
  char cVar22;
  ushort uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  code *pcVar29;
  ulonglong uVar30;
  code ***pppcVar31;
  byte *pbVar32;
  ulonglong uVar33;
  uint uVar34;
  byte ***pppbVar35;
  longlong lVar37;
  ushort uVar38;
  code ***pppcVar39;
  longlong lVar40;
  int iVar41;
  code ***pppcVar42;
  undefined8 uVar43;
  int iVar44;
  byte **ppbVar45;
  ulonglong uVar46;
  bool bVar47;
  byte bVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  double dVar52;
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
  undefined1 auVar53 [16];
  code *pcStack_290;
  byte ***pppbStack_288;
  longlong *plStack_280;
  byte ***pppbStack_278;
  byte ***pppbStack_270;
  byte ***pppbStack_268;
  byte ***pppbStack_260;
  byte **ppbStack_258;
  byte **ppbStack_250;
  byte **ppbStack_248;
  byte ***pppbStack_238;
  byte ***pppbStack_230;
  code ***pppcStack_228;
  code *pcStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  int iStack_1b8;
  int iStack_1b4;
  uint uStack_1b0;
  ushort uStack_1ac;
  undefined2 uStack_1aa;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined2 uStack_184;
  undefined2 uStack_182;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined8 uStack_164;
  undefined4 uStack_15c;
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [12];
  undefined4 uStack_fc;
  undefined1 auStack_f8 [12];
  byte ***pppbStack_e8;
  byte ***pppbStack_e0;
  byte ***pppbStack_d8;
  byte ***pppbStack_d0;
  longlong lStack_c8;
  byte ***pppbStack_c0;
  byte ***pppbStack_b8;
  byte ***pppbStack_b0;
  code **ppcStack_a8;
  byte ***pppbStack_a0;
  uint uStack_94;
  code *pcStack_90;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  byte ***pppbVar36;
  
  uStack_80 = 0xfffffffffffffffe;
  pdb_140747860(&uStack_1c8);
  if ((char)uStack_1c8 == '\0') {
    uStack_1d8 = uStack_164;
    uStack_1e8 = CONCAT44((undefined4)uStack_170,uStack_174);
    uStack_1e0 = CONCAT44(uStack_168,uStack_170._4_4_);
    uStack_1f8 = CONCAT44(uStack_180,CONCAT22(uStack_182,uStack_184));
    uStack_1f0 = CONCAT44(uStack_178,uStack_17c);
    pppbStack_238 = (byte ***)CONCAT44((int)uStack_1c0,uStack_1c8._4_4_);
    pppbStack_230 = (byte ***)CONCAT44(iStack_1b8,uStack_1c0._4_4_);
    pppcStack_228 = (code ***)CONCAT44(uStack_1b0,iStack_1b4);
    pcStack_220 = (code *)CONCAT44(uStack_1a8,CONCAT22(uStack_1aa,uStack_1ac));
    uStack_208 = CONCAT44(uStack_190,uStack_194);
    uStack_200 = CONCAT44(uStack_188,uStack_18c);
    uStack_218 = CONCAT44(uStack_1a0,uStack_1a4);
    uStack_210 = uStack_19c;
    uStack_20c = uStack_198;
    pdb_140747640(&uStack_1c8,&uStack_210,0x20);
    pcStack_90 = (code *)CONCAT44(uStack_1c0._4_4_,(int)uStack_1c0);
    pdb_140f5fd10(&pppbStack_e8,pcStack_90,CONCAT44(iStack_1b4,iStack_1b8));
    pppcVar42 = (code ***)pppbStack_d8;
    pppbStack_a0 = pppbStack_e0;
    if ((longlong)pppbStack_d8 < 0) {
      uVar43 = 0;
LAB_140483242:
      pdb_142dc7e2a(uVar43,pppcVar42);
      goto LAB_140483fb8;
    }
    if ((code ***)pppbStack_d8 == (code ***)0x0) {
      ppbVar45 = (byte **)0x1;
    }
    else {
      pdb_14007ee60();
      uVar43 = 1;
      ppbVar45 = (byte **)pub_1406abab0((ulonglong)pppcVar42,1);
      if (ppbVar45 == (byte **)0x0) goto LAB_140483242;
      pub_142e32760(ppbVar45,pppbStack_a0,pppcVar42);
    }
    if (0 < (longlong)pppbStack_e8) {
      pub_1406abac0((byte *)pppbStack_a0,(ulonglong)pppbStack_e8,1);
    }
    if (CONCAT44(uStack_1c8._4_4_,(int)uStack_1c8) != 0) {
      pub_1406abac0((byte *)pcStack_90,CONCAT44(uStack_1c8._4_4_,(int)uStack_1c8),1);
    }
    pppbStack_a0 = (byte ***)pppcVar42;
  }
  else {
    pdb_1404b38e0(&uStack_1c0);
    pppcVar42 = (code ***)0x9;
    ppbVar45 = (byte **)&UNK_142f5d253;
    pppbStack_a0 = (byte ***)0x8000000000000000;
  }
  pcStack_290 = (code *)ppbVar45;
  pppbStack_288 = (byte ***)pppcVar42;
  pcStack_90 = (code *)ppbVar45;
  pdb_140484ce0(&pppbStack_238,param_2);
  uStack_188 = (undefined4)uStack_1f8;
  uStack_184 = (undefined2)((ulonglong)uStack_1f8 >> 0x20);
  uStack_182 = (undefined2)((ulonglong)uStack_1f8 >> 0x30);
  uStack_198 = (undefined4)uStack_208;
  uStack_194 = (undefined4)((ulonglong)uStack_208 >> 0x20);
  uStack_190 = (undefined4)uStack_200;
  uStack_18c = (undefined4)((ulonglong)uStack_200 >> 0x20);
  uStack_1a8 = (undefined4)uStack_218;
  uStack_1a4 = uStack_218._4_4_;
  uStack_1a0 = uStack_210;
  uStack_19c = uStack_20c;
  iStack_1b8 = (int)pppcStack_228;
  iStack_1b4 = (int)((ulonglong)pppcStack_228 >> 0x20);
  uStack_1b0 = (uint)pcStack_220;
  uStack_1ac = (ushort)((ulonglong)pcStack_220 >> 0x20);
  uStack_1aa = (undefined2)((ulonglong)pcStack_220 >> 0x30);
  uStack_1c8._0_4_ = (int)pppbStack_238;
  uStack_1c8._4_4_ = (int)((ulonglong)pppbStack_238 >> 0x20);
  uStack_1c0._0_4_ = (int)pppbStack_230;
  uStack_1c0._4_4_ = (int)((ulonglong)pppbStack_230 >> 0x20);
  pdb_14017bb80(&pppbStack_c0,&uStack_1c8);
  if (pppbStack_b0 < (code ***)0x2) {
    if ((code ***)pppbStack_b0 == (code ***)0x0) {
      if (1 < *_DAT_143ca8e90) {
        uStack_82 = 1;
        pdb_140747860(&uStack_1c8,param_2);
        if ((char)uStack_1c8 == '\0') {
          pppcVar42 = (code ***)CONCAT44(uStack_1c0._4_4_,(int)uStack_1c0);
        }
        else {
          pppbStack_230 = (byte ***)CONCAT44(uStack_1c0._4_4_,(int)uStack_1c0);
          pppbStack_238 = (byte ***)CONCAT44(pppbStack_238._4_4_,1);
          uStack_82 = 1;
          pppcVar42 = (code ***)0x0;
          pdb_1404b38e0(&pppbStack_230);
        }
        pppbStack_238 = (byte ***)&pcStack_290;
        pppbStack_230 = (byte ***)pdb_1402ed420;
        pppcStack_228 = (code ***)&pppbStack_e8;
        pcStack_220 = pdb_140485160;
        uStack_1c8._0_4_ = 0;
        uStack_1c8._4_4_ = 0;
        uStack_1c0._0_4_ = 0x42f5d1af;
        uStack_1c0._4_4_ = 1;
        iStack_1b8 = 0x17;
        iStack_1b4 = 0;
        uStack_1b0 = 0;
        uStack_1ac = 0;
        uStack_1aa = 0;
        uStack_1a8 = 0x42f5d150;
        uStack_1a4 = 1;
        uStack_1a0 = 0x24;
        uStack_19c = 0;
        uStack_198 = 2;
        uStack_194 = 0;
        uStack_190 = 0x42f5d1af;
        uStack_18c = 1;
        uStack_188 = 0x17;
        uStack_184 = 0;
        uStack_182 = 0;
        uStack_180 = 1;
        uStack_17c = 0xad;
        uStack_178 = 0x42f5d2d0;
        uStack_174 = 1;
        uStack_82 = 1;
        pppbStack_e8 = (byte ***)pppcVar42;
        uStack_170 = &pppbStack_238;
        pdb_140f332f0(&uStack_83,&uStack_1c8);
      }
      *param_1 = 0;
      if ((code ***)pppbStack_c0 != (code ***)0x0) {
        pub_1406abac0((byte *)pppbStack_b8,(longlong)pppbStack_c0 << 5,8);
      }
      goto LAB_140483dfd;
    }
  }
  else if (pppbStack_b0 < (code ***)0x15) {
    uStack_82 = 1;
    pdb_1400e1660(pppbStack_b8,pppbStack_b0,1,&uStack_83);
  }
  else {
    uStack_82 = 1;
    pdb_140224e00(pppbStack_b8,pppbStack_b0,&uStack_83);
  }
  if (_DAT_143ca3168 != 2) {
    uStack_82 = 1;
    pdb_142d84d70(0x143ca3128,0x143ca3128);
  }
  LOCK();
  bVar47 = DAT_143ca3130 == '\0';
  if (bVar47) {
    DAT_143ca3130 = '\x01';
  }
  UNLOCK();
  if (!bVar47) {
    uStack_82 = 1;
    pdb_142dc6be0(&DAT_143ca3130);
  }
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uStack_94 = 0;
  }
  else {
    uStack_82 = 1;
    uStack_94 = pdb_142dc79e0();
    uStack_94 = uStack_94 ^ 1;
  }
  if (DAT_143ca3131 != '\0') {
    uStack_1c8._0_4_ = 0x43ca3130;
    uStack_1c8._4_4_ = 1;
    uVar27 = (uint)(int)uStack_1c0 >> 8;
    uStack_1c0._0_4_ = CONCAT31((int3)uVar27,(char)uStack_94);
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_142f5d3a8,0x2b,&uStack_1c8,&UNK_142f5d3d8,&UNK_142f5d260);
  }
  plStack_280 = param_1;
  pppbVar36 = (byte ***)ppcStack_a8;
  if (_DAT_143ca3150 != 0) {
    uStack_81 = 1;
    pcVar29 = (code *)pdb_1400af950(0x143ca3158,pcStack_90,pppcVar42);
    uVar46 = _DAT_143ca3140;
    lVar37 = _DAT_143ca3138;
    bVar48 = (byte)((ulonglong)pcVar29 >> 0x39);
    auVar49 = ZEXT216(CONCAT11(bVar48,bVar48));
    auVar49 = pshuflw(auVar49,auVar49,0);
    pppbVar35 = (byte ***)0x0;
    iVar25 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                              CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                    CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    iVar44 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                              CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                    CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    iVar41 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                              CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                    CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    iVar26 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                              CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                    CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    while( true ) {
      uVar30 = (ulonglong)pcVar29 & uVar46;
      pcVar1 = (char *)(lVar37 + uVar30);
      cVar22 = *pcVar1;
      cVar6 = pcVar1[1];
      cVar7 = pcVar1[2];
      cVar8 = pcVar1[3];
      cVar9 = pcVar1[4];
      cVar10 = pcVar1[5];
      cVar11 = pcVar1[6];
      cVar12 = pcVar1[7];
      cVar13 = pcVar1[8];
      cVar14 = pcVar1[9];
      cVar15 = pcVar1[10];
      cVar16 = pcVar1[0xb];
      cVar17 = pcVar1[0xc];
      cVar18 = pcVar1[0xd];
      cVar19 = pcVar1[0xe];
      cVar20 = pcVar1[0xf];
      auVar50[0] = -(cVar22 == auVar49[0]);
      auVar50[1] = -(cVar6 == auVar49[1]);
      auVar50[2] = -(cVar7 == auVar49[2]);
      auVar50[3] = -(cVar8 == auVar49[3]);
      auVar50[4] = -(cVar9 == auVar49[4]);
      auVar50[5] = -(cVar10 == auVar49[5]);
      auVar50[6] = -(cVar11 == auVar49[6]);
      auVar50[7] = -(cVar12 == auVar49[7]);
      auVar50[8] = -(cVar13 == auVar49[0]);
      auVar50[9] = -(cVar14 == auVar49[1]);
      auVar50[10] = -(cVar15 == auVar49[2]);
      auVar50[0xb] = -(cVar16 == auVar49[3]);
      auVar50[0xc] = -(cVar17 == auVar49[4]);
      auVar50[0xd] = -(cVar18 == auVar49[5]);
      auVar50[0xe] = -(cVar19 == auVar49[6]);
      auVar50[0xf] = -(cVar20 == auVar49[7]);
      uVar23 = (ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe | (ushort)(auVar50[0xf] >> 7) << 0xf;
      uVar27 = (uint)uVar23;
      pppbVar36 = (byte ***)ppcStack_a8;
      while (ppcStack_a8 = (code **)pppbVar35, uVar23 != 0) {
        uVar28 = 0;
        for (uVar34 = uVar27; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x80000000) {
          uVar28 = uVar28 + 1;
        }
        uVar33 = uVar28 + uVar30 & uVar46;
        if (pppcVar42 == *(code ****)(lVar37 + -8 + uVar33 * -0x18)) {
          iVar24 = pub_142e32750(pcStack_90,*(undefined8 *)(lVar37 + uVar33 * -0x18 + -0x10),
                                 pppcVar42);
          if (iVar24 == 0) goto LAB_1404838c1;
        }
        uVar23 = (ushort)(uVar27 - 1) & (ushort)uVar27;
        uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar23);
        pppbVar35 = (byte ***)ppcStack_a8;
        pppbVar36 = (byte ***)ppcStack_a8;
      }
      auVar53[0] = -(cVar22 == (char)iVar25);
      auVar53[1] = -(cVar6 == (char)((uint)iVar25 >> 8));
      auVar53[2] = -(cVar7 == (char)((uint)iVar25 >> 0x10));
      auVar53[3] = -(cVar8 == (char)((uint)iVar25 >> 0x18));
      auVar53[4] = -(cVar9 == (char)iVar44);
      auVar53[5] = -(cVar10 == (char)((uint)iVar44 >> 8));
      auVar53[6] = -(cVar11 == (char)((uint)iVar44 >> 0x10));
      auVar53[7] = -(cVar12 == (char)((uint)iVar44 >> 0x18));
      auVar53[8] = -(cVar13 == (char)iVar41);
      auVar53[9] = -(cVar14 == (char)((uint)iVar41 >> 8));
      auVar53[10] = -(cVar15 == (char)((uint)iVar41 >> 0x10));
      auVar53[0xb] = -(cVar16 == (char)((uint)iVar41 >> 0x18));
      auVar53[0xc] = -(cVar17 == (char)iVar26);
      auVar53[0xd] = -(cVar18 == (char)((uint)iVar26 >> 8));
      auVar53[0xe] = -(cVar19 == (char)((uint)iVar26 >> 0x10));
      auVar53[0xf] = -(cVar20 == (char)((uint)iVar26 >> 0x18));
      if ((((((((((((((((SUB161(auVar53 >> 7,0) & 1) != 0 || (SUB161(auVar53 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar53 >> 0x17,0) & 1) != 0) || (SUB161(auVar53 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar53 >> 0x27,0) & 1) != 0) || (SUB161(auVar53 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar53 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar53 >> 0x3f,0) & 1) != 0) || (SUB161(auVar53 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar53 >> 0x4f,0) & 1) != 0) || (SUB161(auVar53 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar53 >> 0x5f,0) & 1) != 0) || (SUB161(auVar53 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar53 >> 0x6f,0) & 1) != 0) || (SUB161(auVar53 >> 0x77,0) & 1) != 0) ||
          auVar53[0xf] < '\0') break;
      pcVar29 = (code *)((longlong)ppcStack_a8 + uVar30 + 0x10);
      pppbVar35 = (byte ***)(ppcStack_a8 + 2);
      ppcStack_a8 = (code **)pppbVar36;
    }
  }
  ppcStack_a8 = (code **)pppbVar36;
  pppbVar35 = pppbStack_b0;
  pppbVar36 = pppbStack_b8;
  if (3 < *_DAT_143ca8e90) {
    if ((code ***)pppbStack_b0 == (code ***)0x0) {
      pppcVar31 = (code ***)0x8;
    }
    else {
      uVar46 = (longlong)pppbStack_b0 * 0x18;
      pdb_14007ee60();
      pppcVar31 = (code ***)pub_1406abab0(uVar46,8);
      if (pppcVar31 == (code ***)0x0) {
        uStack_81 = 1;
        pdb_142dc7e2a(8,uVar46);
        goto LAB_140483fb8;
      }
    }
    pppbStack_238 = pppbVar35;
    uStack_1c8 = &pppcStack_228;
    pppcStack_228 = (code ***)0x0;
    uStack_1c0._0_4_ = 0;
    uStack_1c0._4_4_ = 0;
    iStack_1b8 = (int)pppcVar31;
    iStack_1b4 = (int)((ulonglong)pppcVar31 >> 0x20);
    pppbStack_230 = (byte ***)pppcVar31;
    pdb_140565260(pppbVar36,pppbVar36 + (longlong)pppbVar35 * 4,&uStack_1c8);
    pppcVar31 = pppcStack_228;
    pppbVar36 = pppbStack_230;
    pppbStack_e8 = pppbStack_238;
    pppbStack_e0 = pppbStack_230;
    pppbStack_d8 = (byte ***)pppcStack_228;
    pdb_140146ab0(&pppbStack_278,pppbStack_230,pppcStack_228,&UNK_142f5d278,5);
    pppbStack_238 = (byte ***)&pcStack_290;
    pppbStack_230 = (byte ***)pdb_1402ed400;
    pcStack_220 = pdb_140001020;
    uStack_1c8._0_4_ = 0;
    uStack_1c8._4_4_ = 0;
    uStack_1c0._0_4_ = 0x42f5d1af;
    uStack_1c0._4_4_ = 1;
    iStack_1b8 = 0x17;
    iStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1aa = 0;
    uStack_1a8 = 0x42f5d150;
    uStack_1a4 = 1;
    uStack_1a0 = 0x24;
    uStack_19c = 0;
    uStack_198 = 4;
    uStack_194 = 0;
    uStack_190 = 0x42f5d1af;
    uStack_18c = 1;
    uStack_188 = 0x17;
    uStack_184 = 0;
    uStack_182 = 0;
    uStack_180 = 1;
    uStack_17c = 0xba;
    uStack_178 = 0x42f5d27d;
    uStack_174 = 1;
    uStack_170 = &pppbStack_238;
    pppcStack_228 = (code ***)&pppbStack_278;
    pdb_140f332f0(&uStack_83,&uStack_1c8);
    if ((code ***)pppbStack_278 != (code ***)0x0) {
      pub_1406abac0((byte *)pppbStack_270,(ulonglong)pppbStack_278,1);
    }
    if (pppcVar31 != (code ***)0x0) {
      pppcVar39 = (code ***)(pppbVar36 + 1);
      do {
        if (pppcVar39[-1] != (code **)0x0) {
          pub_1406abac0((byte *)*pppcVar39,(ulonglong)pppcVar39[-1],1);
        }
        pppcVar39 = pppcVar39 + 3;
        pppcVar31 = (code ***)((longlong)pppcVar31 + -1);
      } while (pppcVar31 != (code ***)0x0);
    }
    if ((code ***)pppbStack_e8 != (code ***)0x0) {
      pub_1406abac0((byte *)pppbVar36,(longlong)pppbStack_e8 * 0x18,8);
    }
  }
  if (pppcVar42 == (code ***)0x0) {
    pbVar32 = (byte *)0x1;
  }
  else {
    pdb_14007ee60();
    pbVar32 = pub_1406abab0((ulonglong)pppcVar42,1);
    if (pbVar32 == (byte *)0x0) {
      uStack_81 = 1;
      pdb_142dc7e2a(1,pppcVar42);
LAB_140483fb8:
                    /* WARNING: Does not return */
      pcVar29 = (code *)invalidInstructionException();
      (*pcVar29)();
    }
    pub_142e32760(pbVar32,pcStack_90,pppcVar42);
  }
  uStack_1c8._0_4_ = (int)pppcVar42;
  uStack_1c8._4_4_ = (int)((ulonglong)pppcVar42 >> 0x20);
  uStack_1c0._0_4_ = (int)pbVar32;
  uStack_1c0._4_4_ = (int)((ulonglong)pbVar32 >> 0x20);
  uStack_81 = 1;
  iStack_1b8 = (int)uStack_1c8;
  iStack_1b4 = uStack_1c8._4_4_;
  pdb_1403b0b40(&DAT_143ca3138,&uStack_1c8);
LAB_1404838c1:
  param_1 = plStack_280;
  ppppbVar21 = uStack_170;
  if (*(int *)(param_3 + 0x30) == 0) {
    uStack_81 = 1;
    pdb_140747860(&uStack_1c8,param_2);
    if ((int)uStack_1c8 == 1) {
      uStack_81 = 1;
      pdb_1404b38e0(&uStack_1c0);
      ppppbVar21 = uStack_170;
    }
    else {
      uStack_1d8 = uStack_164;
      uStack_1e8 = CONCAT44((undefined4)uStack_170,uStack_174);
      uStack_1e0 = CONCAT44(uStack_168,uStack_170._4_4_);
      uStack_1f8 = CONCAT44(uStack_180,CONCAT22(uStack_182,uStack_184));
      uStack_1f0 = CONCAT44(uStack_178,uStack_17c);
      pppbStack_238 = (byte ***)CONCAT44((int)uStack_1c0,uStack_1c8._4_4_);
      pppbStack_230 = (byte ***)CONCAT44(iStack_1b8,uStack_1c0._4_4_);
      pppcStack_228 = (code ***)CONCAT44(uStack_1b0,iStack_1b4);
      pcStack_220 = (code *)CONCAT44(uStack_1a8,CONCAT22(uStack_1aa,uStack_1ac));
      uStack_208 = CONCAT44(uStack_190,uStack_194);
      uStack_200 = CONCAT44(uStack_188,uStack_18c);
      uStack_218 = CONCAT44(uStack_1a0,uStack_1a4);
      uStack_210 = uStack_19c;
      uStack_20c = uStack_198;
      uStack_188 = 0;
      uStack_182 = 0;
      uStack_180 = 0;
      uStack_17c = 0;
      auStack_f8 = SUB1612((undefined1  [16])0x0,4);
      auStack_108 = SUB1612((undefined1  [16])0x0,0);
      uStack_fc = 0;
      auStack_118 = (undefined1  [16])0x0;
      auStack_128 = (undefined1  [16])0x0;
      auStack_138 = (undefined1  [16])0x0;
      auStack_148 = (undefined1  [16])0x0;
      auStack_158 = (undefined1  [16])0x0;
      uStack_168 = 0;
      uStack_164 = 0;
      uStack_15c = 0;
      uStack_178 = 0;
      uStack_174 = 0;
      uStack_170._0_4_ = 0;
      uStack_170._4_4_ = 0;
      uStack_198 = 0;
      uStack_194 = 0;
      uStack_190 = 0;
      uStack_18c = 0;
      uStack_1a8 = 0;
      uStack_1a4 = 0;
      uStack_1a0 = 0;
      uStack_19c = 0;
      iStack_1b8 = 0;
      iStack_1b4 = 0;
      uStack_1b0 = 0;
      uStack_1ac = 0;
      uStack_1aa = 0;
      uStack_1c8._0_4_ = 0;
      uStack_1c8._4_4_ = 0;
      uStack_1c0._0_4_ = 0;
      uStack_1c0._4_4_ = 0;
      uStack_184 = 0xdc;
      iVar25 = EnumDisplaySettingsExW(&uStack_210,0xffffffff,&uStack_1c8,0);
      ppppbVar21 = (byte ****)CONCAT44(uStack_170._4_4_,(undefined4)uStack_170);
      if (iVar25 != 0) {
        iVar25 = auStack_118._8_4_ * 1000;
        uStack_81 = 1;
        pdb_140747860(&uStack_1c8);
        ppppbVar21 = (byte ****)CONCAT44(uStack_170._4_4_,(undefined4)uStack_170);
        if ((char)uStack_1c8 == '\0') {
          iVar44 = iStack_1b8 - (int)uStack_1c0;
          iVar41 = iStack_1b4 - uStack_1c0._4_4_;
          pppcVar42 = (code ***)pppbStack_b8;
        }
        else {
          pppbStack_230 = (byte ***)CONCAT44(uStack_1c0._4_4_,(int)uStack_1c0);
          pppbStack_238 = (byte ***)CONCAT44(pppbStack_238._4_4_,1);
          uStack_81 = 1;
          iVar44 = 0;
          pdb_1404b38e0(&pppbStack_230);
          ppppbVar21 = (byte ****)CONCAT44(uStack_170._4_4_,(undefined4)uStack_170);
          iVar41 = 0;
          pppcVar42 = (code ***)pppbStack_b8;
        }
        pppbStack_b8 = (byte ***)pppcVar42;
        if ((code ***)pppbStack_b0 != (code ***)0x0) {
          pppcVar31 = pppcVar42 + (longlong)pppbStack_b0 * 4;
          do {
            if (iVar25 == *(int *)(pppcVar42 + 3)) {
              uStack_81 = 1;
              iVar26 = pdb_1407479b0(pppcVar42);
              if ((iVar26 == iVar44) && ((int)param_2 == iVar41)) {
                uStack_81 = 1;
                uVar27 = pdb_1407479b0(pppcVar42);
                ppppbVar21 = (byte ****)CONCAT44(uStack_170._4_4_,(undefined4)uStack_170);
                dVar51 = 0.0;
                if (0.0 <= (double)uVar27) {
                  dVar51 = (double)uVar27;
                }
                dVar52 = _DAT_142e33020;
                if (dVar51 <= _DAT_142e33020) {
                  dVar52 = dVar51;
                }
                dVar51 = 0.0;
                if (0.0 <= (double)(param_2 & 0xffffffff)) {
                  dVar51 = (double)(param_2 & 0xffffffff);
                }
                dVar5 = _DAT_142e33020;
                if (dVar51 <= _DAT_142e33020) {
                  dVar5 = dVar51;
                }
                uVar2 = *(undefined2 *)((longlong)pppcVar42 + 0x1c);
                uVar3 = *(undefined4 *)(pppcVar42 + 3);
                *(undefined4 *)(param_3 + 0x30) = 1;
                *(ulonglong *)(param_3 + 0x34) =
                     (longlong)dVar52 & 0xffffffffU | (longlong)dVar5 << 0x20;
                *(undefined4 *)(param_3 + 0x3c) = uVar3;
                *(undefined2 *)(param_3 + 0x40) = uVar2;
                break;
              }
            }
            ppppbVar21 = (byte ****)CONCAT44(uStack_170._4_4_,(undefined4)uStack_170);
            pppcVar42 = pppcVar42 + 4;
          } while (pppcVar42 != pppcVar31);
        }
      }
    }
  }
  uStack_170 = ppppbVar21;
  if (*(char *)(param_3 + 0x30) == '\0') {
    pppcVar42 = (code ***)(pppbStack_b8 + (longlong)pppbStack_b0 * 4);
    iStack_1b8 = (int)pppbStack_c0;
    iStack_1b4 = (int)((ulonglong)pppbStack_c0 >> 0x20);
    uStack_1b0 = (uint)pppcVar42;
    uStack_1ac = (ushort)((ulonglong)pppcVar42 >> 0x20);
    uStack_1aa = (undefined2)((ulonglong)pppcVar42 >> 0x30);
    pppcVar31 = (code ***)pppbStack_b8;
    uStack_1c8 = (code ****)pppbStack_b8;
    if ((code ***)pppbStack_b0 == (code ***)0x0) {
LAB_140483f78:
      uStack_1c0 = pppcVar31;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142f5d2a0);
    }
    pppcVar31 = (code ***)(pppbStack_b8 + 4);
    pppcVar42 = (code ***)*pppbStack_b8;
    if (pppcVar42 == (code ***)0x0) goto LAB_140483f78;
    ppbStack_248 = pppbStack_b8[3];
    ppbStack_258 = pppbStack_b8[1];
    ppbStack_250 = pppbStack_b8[2];
    uStack_1c0 = pppcVar31;
    if ((code ***)pppbStack_b0 != (code ***)0x1) {
      uVar46 = (longlong)pppbStack_b0 * 0x20 - 0x20U >> 5;
      do {
        pub_1406abac0((byte *)*pppcVar31,0xdc,4);
        pppcVar31 = pppcVar31 + 4;
        uVar46 = uVar46 - 1;
      } while (uVar46 != 0);
    }
    if ((code ***)pppbStack_c0 != (code ***)0x0) {
      pub_1406abac0((byte *)pppbStack_b8,(longlong)pppbStack_c0 << 5,8);
    }
LAB_140483db6:
    *param_1 = (longlong)pppcVar42;
    param_1[1] = (longlong)ppbStack_258;
    param_1[2] = (longlong)ppbStack_250;
    param_1[3] = (longlong)ppbStack_248;
    if (((char)uStack_94 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) {
      uStack_82 = 0;
      cVar22 = pdb_142dc79e0();
      if (cVar22 == '\0') {
        DAT_143ca3131 = '\x01';
      }
    }
    cVar22 = DAT_143ca3130;
    LOCK();
    DAT_143ca3130 = '\0';
    UNLOCK();
    if (cVar22 == '\x02') {
      uStack_82 = 0;
      pdb_142dc6ca0(&DAT_143ca3130);
    }
LAB_140483dfd:
    if (((ulonglong)pppbStack_a0 & 0x7fffffffffffffff) != 0) {
      pub_1406abac0((byte *)pcStack_90,(ulonglong)pppbStack_a0,1);
    }
    return param_1;
  }
  pppbStack_d0 = pppbStack_b8 + (longlong)pppbStack_b0 * 4;
  lStack_c8 = param_3 + 0x34;
  pppbStack_e8 = pppbStack_b8;
  pppbStack_e0 = pppbStack_b8;
  pppbStack_d8 = pppbStack_c0;
  if ((code ***)pppbStack_b0 != (code ***)0x0) {
    pppbStack_e0 = pppbStack_b8 + 4;
    pppbVar36 = (byte ***)*pppbStack_b8;
    if (pppbVar36 != (byte ***)0x0) {
      ppcVar4 = (code **)pppbStack_b8[3];
      uStack_1b0 = (uint)ppcVar4;
      uStack_1ac = (ushort)((ulonglong)ppcVar4 >> 0x20);
      uStack_1aa = (undefined2)((ulonglong)ppcVar4 >> 0x30);
      uStack_1c0._0_4_ = (int)pppbStack_b8[1];
      uStack_1c0._4_4_ = (int)((ulonglong)pppbStack_b8[1] >> 0x20);
      iStack_1b8 = (int)pppbStack_b8[2];
      iStack_1b4 = (int)((ulonglong)pppbStack_b8[2] >> 0x20);
      uStack_1c8._0_4_ = (int)pppbVar36;
      uStack_1c8._4_4_ = (int)((ulonglong)pppbVar36 >> 0x20);
      ppcStack_a8 = (code **)pppbVar36;
      uVar28 = pdb_1407479b0(&uStack_1c8);
      uVar34 = (uint)pppbVar36;
      pdb_1407479b0(&uStack_1c8);
      uVar23 = *(ushort *)(param_3 + 0x40);
      uVar27 = *(uint *)(param_3 + 0x3c);
      pppcStack_228 = (code ***)CONCAT44(uStack_1c0._4_4_,(int)uStack_1c0);
      pcStack_220 = (code *)CONCAT44(iStack_1b4,iStack_1b8);
      uStack_218 = CONCAT26(uStack_1aa,CONCAT24(uStack_1ac,uStack_1b0));
      uVar38 = uVar23 - uStack_1ac;
      if (uVar23 < uStack_1ac) {
        uVar38 = uStack_1ac - uVar23;
      }
      lVar40 = (ulonglong)uVar28 * (ulonglong)uVar34 -
               (ulonglong)*(uint *)(param_3 + 0x38) * (ulonglong)*(uint *)(param_3 + 0x34);
      lVar37 = -lVar40;
      if (lVar37 < 0) {
        lVar37 = lVar40;
      }
      uVar28 = uVar27 - uStack_1b0;
      if (uVar27 < uStack_1b0) {
        uVar28 = uStack_1b0 - uVar27;
      }
      pppbStack_238 = (byte ***)((ulonglong)uVar28 / 10 + lVar37 + (ulonglong)uVar38 * 1000);
      pppbStack_230 = (byte ***)ppcStack_a8;
      pppbStack_268 = pppbStack_d8;
      pppbStack_260 = pppbStack_d0;
      pppbStack_278 = pppbStack_e8;
      pppbStack_270 = pppbStack_e0;
      uStack_84 = 0;
      pdb_1406a59a0(&uStack_1c8,&pppbStack_278,&pppbStack_238,lStack_c8);
      pppcVar42 = (code ***)CONCAT44(uStack_1c0._4_4_,(int)uStack_1c0);
      ppbStack_258 = (byte **)CONCAT44(iStack_1b4,iStack_1b8);
      ppbStack_250 = (byte **)CONCAT26(uStack_1aa,CONCAT24(uStack_1ac,uStack_1b0));
      ppbStack_248 = (byte **)CONCAT44(uStack_1a4,uStack_1a8);
      uStack_1c0 = pppcVar42;
      if (pppcVar42 == (code ***)0x0) goto LAB_140483f62;
      goto LAB_140483db6;
    }
  }
  uStack_81 = 0;
  pdb_1404b2240(&pppbStack_e8);
LAB_140483f62:
  uStack_81 = 0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142f5d2b8);
}

