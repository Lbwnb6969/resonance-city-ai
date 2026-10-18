// VA 0x140b8e290, PDB extent 2655 bytes
// redb::tree_store::table_tree::TableTreeMut::get_or_create_table<u128,ref$<slice2$<u8> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140b8e4fd) */
/* Matched PDB project procedure:
   redb::tree_store::table_tree::TableTreeMut::get_or_create_table<u128,ref$<slice2$<u8> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 2655 */

undefined8 *
pdb_140b8e290(undefined8 *param_1,ulonglong *param_2,byte *param_3,byte *param_4,undefined1 param_5)

{
  char *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
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
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ushort uVar29;
  int iVar30;
  ulonglong uVar31;
  uint uVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  longlong lVar36;
  byte *unaff_R13;
  byte bVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
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
  undefined1 auVar40 [16];
  byte *pbStack_3a8;
  byte *pbStack_3a0;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  ulonglong uStack_388;
  byte *pbStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  byte *pbStack_368;
  byte *pbStack_360;
  byte *pbStack_358;
  byte *pbStack_350;
  byte *pbStack_348;
  byte *pbStack_340;
  byte *pbStack_338;
  byte *pbStack_330;
  byte *pbStack_328;
  ulonglong uStack_320;
  byte *pbStack_318;
  ulonglong uStack_310;
  byte *pbStack_308;
  byte *pbStack_300;
  byte *pbStack_2f8;
  byte *pbStack_2f0;
  byte *pbStack_2e8;
  ulonglong uStack_2d8;
  ulonglong uStack_2d0;
  ulonglong uStack_2c8;
  longlong lStack_2c0;
  byte *pbStack_2b8;
  byte *pbStack_2b0;
  ulonglong uStack_2a8;
  byte *pbStack_2a0;
  byte *pbStack_298;
  byte *pbStack_290;
  ulonglong uStack_288;
  byte *pbStack_280;
  undefined1 auStack_278 [16];
  byte *pbStack_268;
  byte *pbStack_260;
  ulonglong uStack_258;
  byte *pbStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  byte *pbStack_238;
  byte *pbStack_230;
  byte *pbStack_228;
  byte *pbStack_220;
  byte *pbStack_218;
  byte *pbStack_210;
  byte *pbStack_1e8;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  byte *pbStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  ulonglong uStack_148;
  byte *pbStack_140;
  ulonglong uStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  ulonglong uStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  pbStack_1c8 = (byte *)*param_2;
  pbStack_1c0 = (byte *)param_2[1];
  uStack_1b8 = (byte *)param_2[2];
  uStack_1b0 = (byte *)param_2[3];
  uStack_1a8 = param_2[4];
  uStack_1a0 = (byte *)param_2[5];
  uStack_198 = (undefined4)param_2[6];
  uStack_194 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_190 = (undefined4)param_2[7];
  uStack_18c = *(undefined4 *)((longlong)param_2 + 0x3c);
  plVar2 = (longlong *)param_2[0x12];
  LOCK();
  lVar33 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  pbStack_348 = param_3;
  pbStack_340 = param_4;
  if (*plVar2 == 0 || SCARRY8(lVar33,1) != *plVar2 < 0) {
LAB_140b8ebc5:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  plVar3 = (longlong *)param_2[0x13];
  LOCK();
  lVar33 = *plVar3;
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  if (*plVar3 == 0 || SCARRY8(lVar33,1) != *plVar3 < 0) goto LAB_140b8ebc5;
  pdb_141acde30(&uStack_168,&pbStack_1c8,0,plVar2,plVar3);
  auVar38[0] = -((char)uStack_168 == DAT_14300c7d0);
  auVar38[1] = -(uStack_168._1_1_ == UNK_14300c7d1);
  auVar38[2] = -(uStack_168._2_1_ == UNK_14300c7d2);
  auVar38[3] = -(uStack_168._3_1_ == UNK_14300c7d3);
  auVar38[4] = -(uStack_168._4_1_ == UNK_14300c7d4);
  auVar38[5] = -(uStack_168._5_1_ == UNK_14300c7d5);
  auVar38[6] = -(uStack_168._6_1_ == UNK_14300c7d6);
  auVar38[7] = -(uStack_168._7_1_ == UNK_14300c7d7);
  auVar38[8] = -((char)uStack_160 == UNK_14300c7d8);
  auVar38[9] = -(uStack_160._1_1_ == UNK_14300c7d9);
  auVar38[10] = -(uStack_160._2_1_ == UNK_14300c7da);
  auVar38[0xb] = -(uStack_160._3_1_ == UNK_14300c7db);
  auVar38[0xc] = -(uStack_160._4_1_ == UNK_14300c7dc);
  auVar38[0xd] = -(uStack_160._5_1_ == UNK_14300c7dd);
  auVar38[0xe] = -(uStack_160._6_1_ == UNK_14300c7de);
  auVar38[0xf] = -(uStack_160._7_1_ == UNK_14300c7df);
  pbStack_338 = pbStack_158;
  pbStack_330 = pbStack_150;
  if ((ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf)
      == 0xffff) {
    pbStack_1e8 = pbStack_158;
    pbStack_1e0 = pbStack_150;
    pbStack_88 = (byte *)0x8000000000000006;
    uVar34 = uStack_148;
LAB_140b8e880:
    param_1[2] = pbStack_1e8;
    param_1[3] = pbStack_1e0;
    param_1[4] = uVar34;
    param_1[5] = unaff_R13;
    param_1[6] = uStack_288;
    param_1[7] = pbStack_280;
    param_1[8] = param_4;
    param_1[9] = param_3;
    param_1[10] = pbStack_1d8;
    param_1[0xb] = pbStack_1d0;
    param_1[1] = pbStack_88;
    *param_1 = 1;
  }
  else {
    pbStack_210 = pbStack_100;
    pbStack_220 = pbStack_110;
    pbStack_218 = pbStack_108;
    pbStack_230 = pbStack_120;
    pbStack_228 = pbStack_118;
    uStack_240 = pbStack_130;
    pbStack_238 = pbStack_128;
    pbStack_250 = pbStack_140;
    uStack_248 = uStack_138;
    pbStack_268 = pbStack_158;
    pbStack_260 = pbStack_150;
    uStack_258 = uStack_148;
    pdb_141acdac0(&uStack_168,auStack_278,param_3,param_4,param_5);
    pbStack_2b8 = pbStack_158;
    pbStack_2b0 = pbStack_150;
    uStack_2a8 = uStack_138;
    pbStack_2a0 = pbStack_130;
    pbStack_298 = pbStack_118;
    pbStack_290 = pbStack_110;
    if (uStack_168 == 3) {
      pbStack_88 = uStack_160;
      pbStack_1e8 = pbStack_158;
      pbStack_1e0 = pbStack_150;
      uStack_288 = uStack_138;
      pbStack_280 = pbStack_130;
      pbStack_1d8 = pbStack_118;
      pbStack_1d0 = pbStack_110;
      pdb_14098e730(auStack_278);
      uVar34 = uStack_148;
      lVar33 = 3;
      unaff_R13 = pbStack_140;
      param_4 = pbStack_128;
      param_3 = pbStack_120;
LAB_140b8e873:
      if ((int)lVar33 == 3) goto LAB_140b8e880;
      auStack_278._8_8_ = pbStack_1d0;
      auStack_278._0_8_ = pbStack_1d8;
      uStack_258 = CONCAT44(uStack_394,uStack_398);
      pbStack_250 = (byte *)CONCAT44(uStack_38c,uStack_390);
      pbStack_268 = pbStack_3a8;
      pbStack_260 = pbStack_3a0;
      uStack_248 = uStack_388;
      uStack_240 = pbStack_380;
      pbStack_238 = uStack_378;
      pbStack_230 = uStack_370;
      pbStack_228 = pbStack_368;
      pbStack_220 = pbStack_360;
      pbStack_218 = pbStack_358;
      pbStack_210 = pbStack_350;
      uStack_160 = pbStack_88;
LAB_140b8eb35:
      param_1[8] = pbStack_218;
      param_1[9] = pbStack_210;
      param_1[6] = pbStack_228;
      param_1[7] = pbStack_220;
      param_1[4] = pbStack_238;
      param_1[5] = pbStack_230;
      param_1[2] = uStack_248;
      param_1[3] = uStack_240;
      param_1[10] = uStack_160;
      *param_1 = 0;
      pbStack_128 = param_4;
      pbStack_120 = param_3;
      if (uVar34 != 0) {
        pub_1406abac0(unaff_R13,uVar34,1);
      }
    }
    else {
      pbStack_178 = pbStack_b8;
      pbStack_170 = pbStack_b0;
      pbStack_188 = pbStack_c8;
      pbStack_180 = pbStack_c0;
      uStack_198 = uStack_d8;
      uStack_194 = uStack_d4;
      uStack_190 = uStack_d0;
      uStack_18c = uStack_cc;
      uStack_1a8 = CONCAT44(uStack_e4,uStack_e8);
      uStack_1a0 = (byte *)CONCAT44(uStack_dc,uStack_e0);
      uStack_1b8 = (byte *)CONCAT44(uStack_f4,uStack_f8);
      uStack_1b0 = (byte *)CONCAT44(uStack_ec,uStack_f0);
      pbStack_1c8 = pbStack_108;
      pbStack_1c0 = pbStack_100;
      if ((int)uStack_168 != 2) {
        pbStack_88 = uStack_160;
        uStack_a0 = uStack_148;
        pbStack_90 = pbStack_140;
        pbStack_a8 = pbStack_128;
        pbStack_98 = pbStack_120;
        pdb_141c26f10(&pbStack_338,&uStack_168,
                      CONCAT71((int7)((ulonglong)unaff_R13 >> 8),param_5) & 0xffffffff,param_3,
                      param_4);
        if (pbStack_338 == (byte *)0x8000000000000007) {
          pbStack_1e8 = pbStack_2b8;
          pbStack_1e0 = pbStack_2b0;
          uStack_288 = uStack_2a8;
          pbStack_280 = pbStack_2a0;
          pbStack_1d8 = pbStack_298;
          pbStack_1d0 = pbStack_290;
          pbStack_3a8 = pbStack_1c8;
          pbStack_3a0 = pbStack_1c0;
          uStack_398 = (undefined4)uStack_1b8;
          uStack_394 = uStack_1b8._4_4_;
          uStack_390 = (undefined4)uStack_1b0;
          uStack_38c = uStack_1b0._4_4_;
          uStack_388 = uStack_1a8;
          pbStack_380 = uStack_1a0;
          uStack_378 = (byte *)CONCAT44(uStack_194,uStack_198);
          uStack_370 = (byte *)CONCAT44(uStack_18c,uStack_190);
          pbStack_368 = pbStack_188;
          pbStack_360 = pbStack_180;
          pbStack_358 = pbStack_178;
          pbStack_350 = pbStack_170;
          uVar34 = uStack_2d0;
          lVar33 = lStack_2c0;
          if (param_2[0xf] != 0) {
            uVar31 = pdb_1400af950(param_2 + 0x10,param_3,param_4);
            uVar4 = param_2[0xc];
            uVar35 = param_2[0xd];
            bVar37 = (byte)(uVar31 >> 0x39);
            auVar38 = ZEXT216(CONCAT11(bVar37,bVar37));
            auVar38 = pshuflw(auVar38,auVar38,0);
            lVar36 = 0;
            iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                                     CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba)))
                           == CONCAT13(unaff_XMM7_Bd,
                                       CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))
                                      ));
            iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                                     CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be)))
                           == CONCAT13(unaff_XMM7_Bh,
                                       CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))
                                      ));
            iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                                     CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi)))
                           == CONCAT13(unaff_XMM7_Bl,
                                       CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))
                                      ));
            iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                                      CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm)))
                            == CONCAT13(unaff_XMM7_Bp,
                                        CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm)
                                                )));
            while( true ) {
              pcVar1 = (char *)(uVar4 + (uVar31 & uVar35));
              cVar11 = *pcVar1;
              cVar12 = pcVar1[1];
              cVar13 = pcVar1[2];
              cVar14 = pcVar1[3];
              cVar15 = pcVar1[4];
              cVar16 = pcVar1[5];
              cVar17 = pcVar1[6];
              cVar18 = pcVar1[7];
              cVar19 = pcVar1[8];
              cVar20 = pcVar1[9];
              cVar21 = pcVar1[10];
              cVar22 = pcVar1[0xb];
              cVar23 = pcVar1[0xc];
              cVar24 = pcVar1[0xd];
              cVar25 = pcVar1[0xe];
              cVar26 = pcVar1[0xf];
              auVar39[0] = -(cVar11 == auVar38[0]);
              auVar39[1] = -(cVar12 == auVar38[1]);
              auVar39[2] = -(cVar13 == auVar38[2]);
              auVar39[3] = -(cVar14 == auVar38[3]);
              auVar39[4] = -(cVar15 == auVar38[4]);
              auVar39[5] = -(cVar16 == auVar38[5]);
              auVar39[6] = -(cVar17 == auVar38[6]);
              auVar39[7] = -(cVar18 == auVar38[7]);
              auVar39[8] = -(cVar19 == auVar38[0]);
              auVar39[9] = -(cVar20 == auVar38[1]);
              auVar39[10] = -(cVar21 == auVar38[2]);
              auVar39[0xb] = -(cVar22 == auVar38[3]);
              auVar39[0xc] = -(cVar23 == auVar38[4]);
              auVar39[0xd] = -(cVar24 == auVar38[5]);
              auVar39[0xe] = -(cVar25 == auVar38[6]);
              auVar39[0xf] = -(cVar26 == auVar38[7]);
              uVar29 = (ushort)(SUB161(auVar39 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar39[0xf] >> 7) << 0xf;
              uVar27 = uVar31 & uVar35;
              uVar28 = (ulonglong)uVar29;
              uVar31 = uStack_2d8;
              uVar34 = uStack_2d0;
              lVar33 = lStack_2c0;
              while (lStack_2c0 = lVar36, uStack_2d8 = uVar28, uStack_2d0 = uVar27, uVar29 != 0) {
                uVar6 = 0;
                for (uVar32 = (uint)uStack_2d8; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000
                    ) {
                  uVar6 = uVar6 + 1;
                }
                lVar33 = (uVar6 + uStack_2d0 & uVar35) * -0x70;
                uStack_2c8 = uVar35;
                if (param_4 == *(byte **)((uVar4 - 0x60) + lVar33)) {
                  lVar33 = lVar33 + uVar4;
                  iVar30 = pub_142e32750(param_3,*(undefined8 *)(lVar33 + -0x68),param_4);
                  if (iVar30 == 0) {
                    uStack_388 = *(ulonglong *)(lVar33 + -0x50);
                    pbStack_380 = *(byte **)(lVar33 + -0x48);
                    uStack_378 = *(byte **)(lVar33 + -0x40);
                    uStack_370 = *(byte **)(lVar33 + -0x38);
                    pbStack_368 = *(byte **)(lVar33 + -0x30);
                    pbStack_360 = *(byte **)(lVar33 + -0x28);
                    pbStack_358 = *(byte **)(lVar33 + -0x20);
                    pbStack_350 = *(byte **)(lVar33 + -0x18);
                    pbStack_88 = *(byte **)(lVar33 + -0x10);
                    uVar34 = uStack_2d0;
                    lVar33 = lStack_2c0;
                    goto LAB_140b8e948;
                  }
                }
                iVar30 = (int)uStack_2d8 + -1;
                uVar29 = (ushort)iVar30 & (ushort)uStack_2d8;
                uVar27 = uStack_2d0;
                uVar28 = (ulonglong)CONCAT22((short)((uint)iVar30 >> 0x10),uVar29);
                uVar35 = uStack_2c8;
                lVar36 = lStack_2c0;
                uVar31 = uStack_2d8;
                uVar34 = uStack_2d0;
                lVar33 = lStack_2c0;
              }
              auVar40[0] = -(cVar11 == (char)iVar7);
              auVar40[1] = -(cVar12 == (char)((uint)iVar7 >> 8));
              auVar40[2] = -(cVar13 == (char)((uint)iVar7 >> 0x10));
              auVar40[3] = -(cVar14 == (char)((uint)iVar7 >> 0x18));
              auVar40[4] = -(cVar15 == (char)iVar8);
              auVar40[5] = -(cVar16 == (char)((uint)iVar8 >> 8));
              auVar40[6] = -(cVar17 == (char)((uint)iVar8 >> 0x10));
              auVar40[7] = -(cVar18 == (char)((uint)iVar8 >> 0x18));
              auVar40[8] = -(cVar19 == (char)iVar9);
              auVar40[9] = -(cVar20 == (char)((uint)iVar9 >> 8));
              auVar40[10] = -(cVar21 == (char)((uint)iVar9 >> 0x10));
              auVar40[0xb] = -(cVar22 == (char)((uint)iVar9 >> 0x18));
              auVar40[0xc] = -(cVar23 == (char)iVar10);
              auVar40[0xd] = -(cVar24 == (char)((uint)iVar10 >> 8));
              auVar40[0xe] = -(cVar25 == (char)((uint)iVar10 >> 0x10));
              auVar40[0xf] = -(cVar26 == (char)((uint)iVar10 >> 0x18));
              uStack_2d8 = uVar31;
              if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar40 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar40 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar40 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar40 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar40 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar40 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar40 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar40 >> 0x4f,0) & 1) != 0) || (SUB161(auVar40 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar40 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar40 >> 0x67,0) & 1) != 0) || (SUB161(auVar40 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar40 >> 0x77,0) & 1) != 0) || auVar40[0xf] < '\0') break;
              uVar31 = uStack_2d0 + lStack_2c0 + 0x10;
              lVar36 = lStack_2c0 + 0x10;
              uStack_2d0 = uVar34;
              lStack_2c0 = lVar33;
            }
          }
LAB_140b8e948:
          lStack_2c0 = lVar33;
          uStack_2d0 = uVar34;
          unaff_R13 = pbStack_90;
          param_3 = pbStack_98;
          uVar34 = uStack_a0;
          param_4 = pbStack_a8;
          pdb_14098e730(auStack_278);
          lVar33 = uStack_168;
          if ((int)uStack_168 == 2) goto LAB_140b8e97a;
        }
        else {
          pbStack_88 = pbStack_338;
          pbStack_1e8 = pbStack_330;
          pbStack_1e0 = pbStack_328;
          uStack_288 = uStack_310;
          pbStack_280 = pbStack_308;
          pbStack_1d8 = pbStack_2f0;
          pbStack_1d0 = pbStack_2e8;
          if (uStack_a0 != 0) {
            pub_1406abac0(pbStack_90,uStack_a0,1);
          }
          if (pbStack_a8 != (byte *)0x0) {
            pub_1406abac0(pbStack_98,(ulonglong)pbStack_a8,1);
          }
          lVar33 = 3;
          pdb_14098e730(auStack_278);
          uVar34 = uStack_320;
          unaff_R13 = pbStack_318;
          param_4 = pbStack_300;
          param_3 = pbStack_2f8;
        }
        goto LAB_140b8e873;
      }
      pdb_14098e730(auStack_278);
LAB_140b8e97a:
      auStack_278 = (undefined1  [16])0x0;
      pdb_141c27330(&uStack_168,param_5,auStack_278,0);
      pdb_1416417c0(auStack_278,param_2,&pbStack_348,&uStack_168);
      pbStack_338 = (byte *)auStack_278._8_8_;
      pbStack_330 = pbStack_268;
      pbStack_328 = pbStack_260;
      if ((byte *)auStack_278._0_8_ != (byte *)0x4) {
        pbStack_178 = pbStack_228;
        pbStack_170 = pbStack_220;
        pbStack_188 = pbStack_238;
        pbStack_180 = pbStack_230;
        uStack_198 = (undefined4)uStack_248;
        uStack_194 = uStack_248._4_4_;
        uStack_190 = (undefined4)uStack_240;
        uStack_18c = uStack_240._4_4_;
        uStack_1a8 = uStack_258;
        uStack_1a0 = pbStack_250;
        pbStack_1c0 = (byte *)auStack_278._8_8_;
        uStack_1b8 = pbStack_268;
        uStack_1b0 = pbStack_260;
        pbStack_1c8 = (byte *)auStack_278._0_8_;
        if ((byte *)auStack_278._0_8_ != (byte *)0x3) {
          pdb_140973620(&pbStack_1c8);
        }
        auStack_278._8_8_ = pbStack_110;
        auStack_278._0_8_ = pbStack_118;
        pbStack_268 = pbStack_108;
        pbStack_260 = pbStack_100;
        uStack_258 = CONCAT44(uStack_f4,uStack_f8);
        pbStack_250 = (byte *)CONCAT44(uStack_ec,uStack_f0);
        uStack_248 = CONCAT44(uStack_e4,uStack_e8);
        uStack_240 = (byte *)CONCAT44(uStack_dc,uStack_e0);
        pbStack_238 = (byte *)CONCAT44(uStack_d4,uStack_d8);
        pbStack_230 = (byte *)CONCAT44(uStack_cc,uStack_d0);
        pbStack_228 = pbStack_c8;
        pbStack_220 = pbStack_c0;
        pbStack_218 = pbStack_b8;
        pbStack_210 = pbStack_b0;
        uVar34 = uStack_148;
        unaff_R13 = pbStack_140;
        param_4 = pbStack_128;
        param_3 = pbStack_120;
        goto LAB_140b8eb35;
      }
      param_1[4] = pbStack_260;
      param_1[2] = auStack_278._8_8_;
      param_1[3] = pbStack_268;
      param_1[1] = 0x8000000000000006;
      *param_1 = 1;
      if (uStack_148 != 0) {
        pub_1406abac0(pbStack_140,uStack_148,1);
      }
    }
    if (pbStack_128 != (byte *)0x0) {
      pub_1406abac0(pbStack_120,(ulonglong)pbStack_128,1);
    }
  }
  return param_1;
}

