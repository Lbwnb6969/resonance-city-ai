// VA 0x140822bf0, PDB extent 14239 bytes
// system_wall_constructor::construct_playermade_stairs::pillars_visual::construct_playermade_stair_pillars_visuals
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/pillars_visual.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_playermade_stairs::pillars_visual::construct_playermade_stair_pillars_visuals
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/pillars_visual.rs
   Extent: 14239 */

void pdb_140822bf0(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  float *pfVar13;
  ulonglong uVar14;
  int *piVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  byte *pbVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  byte *pbVar24;
  char *pcVar25;
  float *pfVar26;
  float *pfVar27;
  uint uVar28;
  ushort uVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  float *pfVar33;
  undefined1 (*pauVar34) [16];
  bool bVar35;
  int iVar36;
  int iVar37;
  byte bVar38;
  byte bVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined8 uVar44;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined8 extraout_XMM0_Qb_01;
  float fVar52;
  float fVar63;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar53;
  float fVar64;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar65;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar66;
  float fVar72;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar67;
  undefined1 auVar71 [16];
  float fVar73;
  float fVar74;
  int iVar78;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar79;
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  undefined1 unaff_XMM6_Bc;
  undefined1 unaff_XMM6_Bd;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  undefined1 unaff_XMM6_Bg;
  undefined1 unaff_XMM6_Bh;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  undefined1 unaff_XMM6_Bk;
  undefined1 unaff_XMM6_Bl;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  undefined1 unaff_XMM6_Bo;
  undefined1 unaff_XMM6_Bp;
  undefined1 unaff_XMM7_Ba;
  char cVar80;
  undefined1 uVar81;
  undefined1 unaff_XMM7_Bb;
  char cVar82;
  undefined1 uVar83;
  undefined1 unaff_XMM7_Bc;
  char cVar84;
  undefined1 uVar85;
  undefined1 unaff_XMM7_Bd;
  char cVar86;
  undefined1 uVar87;
  undefined1 unaff_XMM7_Be;
  char cVar88;
  undefined1 uVar89;
  undefined1 unaff_XMM7_Bf;
  char cVar90;
  undefined1 uVar91;
  undefined1 unaff_XMM7_Bg;
  char cVar92;
  undefined1 uVar93;
  undefined1 unaff_XMM7_Bh;
  char cVar94;
  undefined1 uVar95;
  undefined1 unaff_XMM7_Bi;
  char cVar96;
  undefined1 uVar97;
  undefined1 unaff_XMM7_Bj;
  char cVar98;
  undefined1 uVar99;
  undefined1 unaff_XMM7_Bk;
  char cVar100;
  undefined1 uVar101;
  undefined1 unaff_XMM7_Bl;
  char cVar102;
  undefined1 uVar103;
  undefined1 unaff_XMM7_Bm;
  char cVar104;
  undefined1 uVar105;
  undefined1 unaff_XMM7_Bn;
  char cVar106;
  undefined1 uVar107;
  undefined1 unaff_XMM7_Bo;
  char cVar108;
  undefined1 uVar109;
  undefined1 unaff_XMM7_Bp;
  char cVar110;
  undefined1 uVar111;
  undefined4 uVar112;
  undefined4 uVar113;
  float fVar114;
  undefined4 uVar115;
  undefined4 uVar116;
  float fVar117;
  undefined8 in_stack_fffffffffffffa58;
  undefined1 (*in_stack_fffffffffffffa60) [16];
  undefined8 *in_stack_fffffffffffffa68;
  undefined1 auStack_510 [20];
  undefined1 uStack_4fc;
  longlong lStack_4d0;
  byte *pbStack_4c8;
  float *pfStack_4c0;
  longlong lStack_4b8;
  byte *pbStack_4b0;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  longlong lStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  longlong lStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  longlong lStack_460;
  longlong lStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  int iStack_440;
  byte *pbStack_438;
  longlong lStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  char acStack_410 [24];
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  char cStack_3e0;
  undefined7 uStack_3df;
  float *pfStack_3d8;
  longlong lStack_3d0;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  longlong lStack_3b8;
  byte *pbStack_3b0;
  float *pfStack_3a8;
  longlong lStack_3a0;
  byte *pbStack_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 uStack_388;
  char *pcStack_378;
  undefined1 (*pauStack_370) [16];
  undefined8 uStack_368;
  undefined8 uStack_360;
  byte *pbStack_358;
  byte *pbStack_350;
  undefined8 uStack_348;
  longlong lStack_340;
  byte *pbStack_338;
  undefined8 uStack_330;
  undefined4 *puStack_328;
  undefined1 (*pauStack_320) [16];
  byte *pbStack_318;
  undefined8 *puStack_310;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  undefined1 auStack_2f8 [16];
  char *pcStack_2e8;
  undefined1 (*pauStack_2e0) [16];
  undefined1 auStack_2d8 [16];
  byte *pbStack_2c8;
  byte *pbStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  int iStack_29c;
  undefined4 uStack_298;
  float fStack_294;
  float fStack_290;
  undefined4 uStack_28c;
  uint uStack_280;
  uint uStack_27c;
  undefined8 uStack_278;
  undefined1 (*pauStack_270) [16];
  undefined1 (*pauStack_268) [16];
  longlong lStack_260;
  undefined1 auStack_258 [16];
  longlong lStack_240;
  longlong *plStack_238;
  ulonglong uStack_230;
  undefined1 (*pauStack_228) [16];
  longlong lStack_220;
  longlong lStack_218;
  longlong lStack_210;
  byte *pbStack_208;
  longlong lStack_200;
  undefined1 auStack_1f8 [8];
  float fStack_1f0;
  float fStack_1ec;
  undefined1 auStack_1e8 [16];
  undefined4 uStack_1cc;
  undefined1 (*pauStack_1c8) [16];
  char *pcStack_1c0;
  byte *pbStack_1b8;
  undefined1 (*pauStack_1b0) [16];
  ulonglong uStack_1a8;
  undefined1 (*pauStack_1a0) [16];
  undefined1 (*pauStack_198) [16];
  undefined8 *puStack_190;
  float fStack_188;
  float fStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  longlong lStack_140;
  undefined8 uStack_138;
  longlong *plStack_128;
  float *pfStack_120;
  undefined1 (*pauStack_118) [16];
  float fStack_110;
  float fStack_10c;
  undefined1 (*pauStack_108) [16];
  float *pfStack_100;
  float fStack_f8;
  undefined1 auStack_f4 [3];
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  undefined1 auVar46 [16];
  
  uStack_f0 = 0xfffffffffffffffe;
  puVar11 = (undefined8 *)pdb_1413e4400(*param_4,&UNK_1433056c0);
  if ((puVar11 == (undefined8 *)0x0) ||
     (lStack_220 = (**(code **)(puVar11[1] + 0x18))(*puVar11), lStack_220 == 0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143009ca8);
  }
  lStack_210 = 0;
  pbStack_208 = (byte *)0x4;
  lStack_200 = 0;
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  uVar43 = _UNK_143307ba8;
  lVar32 = *param_1;
  lStack_140 = lVar32 + 0x30;
  uStack_180 = *(undefined1 (**) [16])(lVar32 + 0x30);
  uStack_178 = (undefined8 *)(*uStack_180 + *(longlong *)(lVar32 + 0x38) + 1);
  auVar45 = *uStack_180;
  uStack_168 = *(byte **)(lVar32 + 0x48);
  uStack_160 = *(byte **)(lVar32 + 0x30);
  uStack_158 = *(undefined8 *)(lVar32 + 0x38);
  uStack_150 = *(undefined8 *)(lVar32 + 0x40);
  uStack_148 = *(undefined8 *)(lVar32 + 0x48);
  *(undefined8 *)(lVar32 + 0x30) = _DAT_143307ba0;
  *(undefined8 *)(lVar32 + 0x38) = uVar43;
  uVar43 = _UNK_143307bb8;
  *(undefined8 *)(lVar32 + 0x40) = _DAT_143307bb0;
  *(undefined8 *)(lVar32 + 0x48) = uVar43;
  fStack_188 = SUB84(uStack_180,0);
  fStack_184 = (float)((ulonglong)uStack_180 >> 0x20);
  uStack_180 = uStack_180 + 1;
  uStack_170 = (float *)CONCAT62(uStack_170._2_6_,
                                 ~((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar45[0xf] >> 7) << 0xf));
  uStack_f1 = 1;
  pdb_14017c4b0(&pcStack_2e8);
  lStack_260 = lStack_220;
  lStack_218 = auStack_2d8._0_8_;
  pauStack_1a0 = pauStack_2e0 + auStack_2d8._0_8_ * 2;
  uStack_1cc = *(undefined4 *)((longlong)param_3 + 0x1c);
  plStack_128 = (longlong *)*param_3;
  puStack_328 = (undefined4 *)param_3[2];
  plStack_238 = plStack_128 + 4;
  iVar36 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                            CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                  CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  iVar37 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                  CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                 CONCAT13(unaff_XMM6_Bl,
                          CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                 CONCAT13(unaff_XMM6_Bp,
                          CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  pauStack_118 = pauStack_2e0;
  pauVar17 = pauStack_2e0;
  pauVar16 = uStack_180;
LAB_140822eb4:
  do {
    pauVar34 = pauVar17;
    if (pauVar34 == pauStack_1a0) {
      auStack_258._0_8_ = *param_6;
      pauVar17 = pauStack_118;
      do {
        if (pauVar17 == pauStack_1a0) {
          if (lStack_218 != 0) {
            pauVar17 = pauStack_118 + 1;
            lVar32 = lStack_218;
            do {
              if (*(longlong *)((longlong)pauVar17[-1] + 8) != 0) {
                uStack_180 = pauVar16;
                pub_1406abac0(*(byte **)*pauVar17,*(longlong *)((longlong)pauVar17[-1] + 8) * 0x2c,4
                             );
                pauVar16 = uStack_180;
              }
              pauVar17 = pauVar17 + 2;
              lVar32 = lVar32 + -1;
            } while (lVar32 != 0);
          }
          uStack_180 = pauVar16;
          if (pcStack_2e8 != (char *)0x0) {
            pub_1406abac0((byte *)pauStack_118,(longlong)pcStack_2e8 << 5,8);
          }
          pauStack_1a0 = (undefined1 (*) [16])lStack_210;
          pbVar24 = pbStack_208 + lStack_200 * 0x2c;
          lVar32 = lStack_220 + 0x78;
          lStack_220 = lStack_220 + 0x58;
          iVar36 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                                    CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba)))
                          == CONCAT13(unaff_XMM7_Bd,
                                      CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba)))
                          );
          cVar80 = (char)iVar36;
          cVar82 = (char)((uint)iVar36 >> 8);
          cVar84 = (char)((uint)iVar36 >> 0x10);
          cVar86 = (char)((uint)iVar36 >> 0x18);
          iVar36 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                                    CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be)))
                          == CONCAT13(unaff_XMM7_Bh,
                                      CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be)))
                          );
          cVar88 = (char)iVar36;
          cVar90 = (char)((uint)iVar36 >> 8);
          cVar92 = (char)((uint)iVar36 >> 0x10);
          cVar94 = (char)((uint)iVar36 >> 0x18);
          iVar36 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                                    CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi)))
                          == CONCAT13(unaff_XMM7_Bl,
                                      CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi)))
                          );
          cVar96 = (char)iVar36;
          cVar98 = (char)((uint)iVar36 >> 8);
          cVar100 = (char)((uint)iVar36 >> 0x10);
          cVar102 = (char)((uint)iVar36 >> 0x18);
          iVar36 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                                    CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm)))
                          == CONCAT13(unaff_XMM7_Bp,
                                      CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm)))
                          );
          cVar104 = (char)iVar36;
          cVar106 = (char)((uint)iVar36 >> 8);
          cVar108 = (char)((uint)iVar36 >> 0x10);
          cVar110 = (char)((uint)iVar36 >> 0x18);
          pbStack_318 = pbStack_208;
          pbVar19 = pbStack_208;
          auVar45 = _DAT_142e37820;
          fVar73 = _DAT_142e37848;
          if (pbStack_208 != pbVar24) {
            while (bVar38 = pbVar19[0x28], bVar38 != 2) {
              uVar43 = *(undefined8 *)pbVar19;
              fVar40 = (float)uVar43;
              fVar41 = (float)((ulonglong)uVar43 >> 0x20);
              auStack_1e8 = ZEXT416(*(uint *)(pbVar19 + 0xc));
              fVar65 = (float)*(undefined8 *)(pbVar19 + 0x10);
              fVar42 = (float)((ulonglong)*(undefined8 *)(pbVar19 + 0x10) >> 0x20);
              auStack_2f8 = ZEXT416(*(uint *)(pbVar19 + 0x18));
              pauStack_108 = (undefined1 (*) [16])
                             CONCAT44(pauStack_108._4_4_,*(undefined4 *)(pbVar19 + 0x1c));
              uStack_280 = *(uint *)(pbVar19 + 0x20);
              pauStack_1b0 = (undefined1 (*) [16])(ulonglong)uStack_280;
              uStack_27c = *(uint *)(pbVar19 + 0x24);
              uStack_1a8 = (ulonglong)uStack_27c;
              fStack_110 = *(float *)(pbVar19 + 8);
              pbStack_1b8 = pbVar19;
              if (plStack_128[3] == 0) {
LAB_140825318:
                pdb_142dc8110(&UNK_143009be0,0x16,&UNK_143009cc0);
LAB_14082558e:
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              uVar30 = pdb_1400af680(plStack_238,&uStack_280);
              pbStack_1b8 = pbStack_1b8 + 0x2c;
              lVar21 = *plStack_128;
              uVar12 = plStack_128[1];
              bVar39 = (byte)(uVar30 >> 0x39);
              auVar49 = ZEXT216(CONCAT11(bVar39,bVar39));
              auVar49 = pshuflw(auVar49,auVar49,0);
              lVar23 = 0;
              while( true ) {
                uVar30 = uVar30 & uVar12;
                auVar57 = *(undefined1 (*) [16])(lVar21 + uVar30);
                auVar70[0] = -(auVar57[0] == auVar49[0]);
                auVar70[1] = -(auVar57[1] == auVar49[1]);
                auVar70[2] = -(auVar57[2] == auVar49[2]);
                auVar70[3] = -(auVar57[3] == auVar49[3]);
                auVar70[4] = -(auVar57[4] == auVar49[4]);
                auVar70[5] = -(auVar57[5] == auVar49[5]);
                auVar70[6] = -(auVar57[6] == auVar49[6]);
                auVar70[7] = -(auVar57[7] == auVar49[7]);
                auVar70[8] = -(auVar57[8] == auVar49[0]);
                auVar70[9] = -(auVar57[9] == auVar49[1]);
                auVar70[10] = -(auVar57[10] == auVar49[2]);
                auVar70[0xb] = -(auVar57[0xb] == auVar49[3]);
                auVar70[0xc] = -(auVar57[0xc] == auVar49[4]);
                auVar70[0xd] = -(auVar57[0xd] == auVar49[5]);
                auVar70[0xe] = -(auVar57[0xe] == auVar49[6]);
                auVar70[0xf] = -(auVar57[0xf] == auVar49[7]);
                uVar29 = (ushort)(SUB161(auVar70 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar70[0xf] >> 7) << 0xf;
                uVar28 = (uint)uVar29;
                if (uVar29 != 0) break;
LAB_1408238d0:
                auVar56[0] = -(auVar57[0] == cVar80);
                auVar56[1] = -(auVar57[1] == cVar82);
                auVar56[2] = -(auVar57[2] == cVar84);
                auVar56[3] = -(auVar57[3] == cVar86);
                auVar56[4] = -(auVar57[4] == cVar88);
                auVar56[5] = -(auVar57[5] == cVar90);
                auVar56[6] = -(auVar57[6] == cVar92);
                auVar56[7] = -(auVar57[7] == cVar94);
                auVar56[8] = -(auVar57[8] == cVar96);
                auVar56[9] = -(auVar57[9] == cVar98);
                auVar56[10] = -(auVar57[10] == cVar100);
                auVar56[0xb] = -(auVar57[0xb] == cVar102);
                auVar56[0xc] = -(auVar57[0xc] == cVar104);
                auVar56[0xd] = -(auVar57[0xd] == cVar106);
                auVar56[0xe] = -(auVar57[0xe] == cVar108);
                auVar56[0xf] = -(auVar57[0xf] == cVar110);
                if ((((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar56 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar56 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar56 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar56 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar56 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar56 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar56 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar56 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar56 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar56 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar56 >> 0x5f,0) & 1) != 0) || (SUB161(auVar56 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar56 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar56 >> 0x77,0) & 1) != 0) || auVar56[0xf] < '\0')
                goto LAB_140825318;
                uVar30 = uVar30 + lVar23 + 0x10;
                lVar23 = lVar23 + 0x10;
              }
              while( true ) {
                uVar5 = 0;
                for (uVar6 = uVar28; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                  uVar5 = uVar5 + 1;
                }
                lVar31 = (uVar5 + uVar30 & uVar12) * -0x140;
                if (((int)pauStack_1b0 == *(int *)(lVar21 + -0x140 + lVar31)) &&
                   ((int)uStack_1a8 == *(int *)(lVar21 + -0x13c + lVar31))) break;
                uVar29 = (ushort)(uVar28 - 1) & (ushort)uVar28;
                uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar29);
                if (uVar29 == 0) goto LAB_1408238d0;
              }
              if (*(longlong *)(lVar21 + lVar31 + -0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_143009cd8);
              }
              lVar21 = *(longlong *)(lVar21 + lVar31 + -0x28);
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_143305b70);
              }
              LOCK();
              bVar35 = *(char *)(lVar21 + 0x18) == '\0';
              if (bVar35) {
                *(char *)(lVar21 + 0x18) = '\x01';
              }
              UNLOCK();
              if (!bVar35) {
                pdb_142dbd1a0(lVar21 + 0x18,CONCAT71((int7)(uVar12 >> 8),1),1000000000);
              }
              pdb_140e9a150(lVar21 + 0x18);
              if ((*(longlong *)(lVar21 + 0x10) == 0) ||
                 (piVar15 = (int *)(*(longlong *)(lVar21 + 8) + *(longlong *)(lVar21 + 0x10) * 4 +
                                   -4), piVar15 == (int *)0x0)) {
                lVar23 = *(longlong *)(lStack_260 + 0x10);
                if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_143305b88);
                }
                iStack_440 = (int)lVar23 + -1;
              }
              else {
                iStack_440 = *piVar15;
                lVar23 = *(longlong *)(lStack_260 + 0x10);
              }
              uStack_498 = *(undefined8 *)(lStack_260 + 8);
              uStack_488 = *(undefined8 *)(lStack_260 + 0x18);
              uStack_480 = *(undefined8 *)(lStack_260 + 0x20);
              uStack_470 = *(undefined8 *)(lStack_260 + 0x28);
              uStack_468 = *(undefined8 *)(lStack_260 + 0x30);
              uStack_450 = *(undefined8 *)(lStack_260 + 0x38);
              uStack_448 = *(undefined8 *)(lStack_260 + 0x40);
              lStack_458 = lStack_220;
              lStack_490 = lVar23;
              lStack_478 = lVar21;
              lStack_460 = lVar32;
              pdb_14007ee60();
              pfVar33 = (float *)pub_1406abab0(0x10,4);
              if (pfVar33 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc7e11(4,0x10);
              }
              fVar52 = (float)((uint)fVar42 ^ auVar45._0_4_);
              uVar28 = (uint)fVar42 ^ auVar45._4_4_;
              auStack_258[4] = (char)uVar28;
              auStack_258._0_4_ = fVar52;
              auStack_258[5] = (char)(uVar28 >> 8);
              auStack_258[6] = (char)(uVar28 >> 0x10);
              auStack_258[7] = (char)(uVar28 >> 0x18);
              auStack_258[8] = auVar45[8];
              auStack_258[9] = auVar45[9];
              auStack_258[10] = auVar45[10];
              auStack_258[0xb] = auVar45[0xb];
              auStack_258[0xc] = auVar45[0xc];
              auStack_258[0xd] = auVar45[0xd];
              auStack_258[0xe] = auVar45[0xe];
              auStack_258[0xf] = auVar45[0xf];
              fVar52 = fVar52 * (float)auStack_2f8._0_4_ * _DAT_142e36f60;
              fVar64 = fVar65 * (float)auStack_2f8._0_4_ * _UNK_142e36f64;
              *pfVar33 = fVar52 + fVar40;
              pfVar33[1] = fVar64 + fVar41;
              pfVar33[2] = fVar40 - fVar52;
              pfVar33[3] = fVar41 - fVar64;
              fStack_188 = 2.8026e-45;
              fStack_184 = 0.0;
              uStack_180._0_4_ = SUB84(pfVar33,0);
              uStack_180._4_4_ = (float)((ulonglong)pfVar33 >> 0x20);
              uStack_178 = (undefined8 *)0x2;
              pdb_140080c90(CONCAT44(fVar64,fVar52),&fStack_188,0);
              if (SBORROW8(0,(longlong)pcStack_2e8)) goto LAB_140823ba2;
              uStack_178 = (undefined8 *)auStack_2d8._0_8_;
              uStack_170 = (float *)auStack_2d8._8_8_;
              uStack_158 = uStack_2b8;
              uVar3 = uStack_158;
              uStack_168 = pbStack_2c8;
              uStack_160 = pbStack_2c0;
              fStack_188 = SUB84(pcStack_2e8,0);
              fStack_184 = (float)((ulonglong)pcStack_2e8 >> 0x20);
              uStack_180._0_4_ = SUB84(pauStack_2e0,0);
              uStack_180._4_4_ = (float)((ulonglong)pauStack_2e0 >> 0x20);
              if ((ulonglong)auStack_2d8._0_8_ < (undefined8 *)0x2) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143306650,0x28,&UNK_143306678);
              }
              uStack_158._0_4_ = (float)uStack_2b8;
              uStack_158 = uVar3;
              if (((float)uStack_158 == 0.0) && (!NAN((float)uStack_158))) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_1433066d0,0x24,&UNK_1433066f8);
              }
              if ((float)uStack_158 <= _DAT_142e36f24) {
                uStack_158._0_4_ = _DAT_142e36f24;
              }
              fVar52 = _DAT_142e36f50 / (float)uStack_158;
              if (_DAT_142e36f28 <= _DAT_142e36f50 / (float)uStack_158) {
                fVar52 = _DAT_142e36f28;
              }
              fVar52 = (float)pub_142e32b00(_DAT_142e36f28 / fVar52);
              uVar12 = 0;
              if (0.0 <= fVar52) {
                uVar12 = (longlong)(fVar52 - _DAT_142e36f2c) & (longlong)fVar52 >> 0x3f |
                         (longlong)fVar52;
              }
              if (_DAT_142e36f30 < fVar52) {
                uVar12 = 0xffffffffffffffff;
              }
              pdb_1413fa980(&lStack_4d0,&pcStack_2e8,uVar12 + 1 + (ulonglong)(uVar12 == 0));
              if (CONCAT44(fStack_184,fStack_188) != 0) {
                pub_1406abac0((byte *)CONCAT44(uStack_180._4_4_,(float)uStack_180),
                              CONCAT44(fStack_184,fStack_188) << 3,4);
              }
              if (uStack_170 != (float *)0x0) {
                pub_1406abac0(uStack_168,(longlong)uStack_170 << 2,4);
              }
              if (SBORROW8(0,lStack_4d0)) goto LAB_140823ba2;
              uStack_388 = uStack_4a0;
              pbStack_398 = pbStack_4b0;
              uStack_390 = uStack_4a8;
              uStack_38c = uStack_4a4;
              pfStack_3a8 = pfStack_4c0;
              lStack_3a0 = lStack_4b8;
              lStack_3b8 = lStack_4d0;
              pbStack_3b0 = pbStack_4c8;
              fStack_f8 = 0.0;
              if (fStack_110 < 0.0) {
                fStack_f8 = _DAT_142e3b1d8 - fStack_110;
              }
              fVar52 = (float)pdb_14140ce00(*param_5);
              fVar52 = (float)auStack_1e8._0_4_ - fVar52;
              if (fVar73 <= fVar52) {
                pdb_140174670(&fStack_188);
                pcStack_1c0 = (char *)CONCAT44(fStack_184,fStack_188);
                pauStack_198 = (undefined1 (*) [16])CONCAT44(uStack_180._4_4_,(float)uStack_180);
                puVar11 = uStack_178;
                uStack_180 = pauStack_198;
              }
              else {
                uStack_180 = (undefined1 (*) [16])(pbStack_3b0 + (longlong)pfStack_3a8 * 8);
                fStack_188 = SUB84(pbStack_3b0,0);
                fStack_184 = (float)((ulonglong)pbStack_3b0 >> 0x20);
                uStack_178 = param_5;
                uStack_170 = &fStack_110;
                pdb_1413e9ef0(&pcStack_2e8,&fStack_188);
                auStack_1e8 = ZEXT416((uint)_DAT_142e3a74c);
                if ((undefined8 *)auStack_2d8._0_8_ != (undefined8 *)0x0) {
                  uVar12 = auStack_2d8._0_8_ * 4 - 4;
                  auVar49 = ZEXT416((uint)_DAT_142e3a74c);
                  pauVar16 = pauStack_2e0;
                  if ((uVar12 & 4) == 0) {
                    pauVar16 = (undefined1 (*) [16])((longlong)*pauStack_2e0 + 4);
                    fVar64 = *(float *)*pauStack_2e0;
                    if (_DAT_142e3a74c <= *(float *)*pauStack_2e0) {
                      fVar64 = _DAT_142e3a74c;
                    }
                    auVar49._8_8_ = 0;
                    auVar49._0_8_ = CONCAT44(0,fVar64);
                    auStack_1e8._8_8_ = 0;
                    auStack_1e8._0_8_ = CONCAT44(0,fVar64);
                  }
                  if (uVar12 != 0) {
                    auStack_1e8 = auVar49;
                    do {
                      fVar64 = *(float *)*pauVar16;
                      fVar10 = *(float *)((longlong)*pauVar16 + 4);
                      fVar66 = auStack_1e8._0_4_;
                      fVar63 = fVar64;
                      if (fVar66 <= fVar64) {
                        fVar63 = fVar66;
                      }
                      fVar63 = (float)(~-(uint)NAN(fVar66) & (uint)fVar63 |
                                      -(uint)NAN(fVar66) & (uint)fVar64);
                      pauVar16 = (undefined1 (*) [16])((longlong)*pauVar16 + 8);
                      fVar64 = fVar10;
                      if (fVar63 <= fVar10) {
                        fVar64 = fVar63;
                      }
                      auStack_1e8 = ZEXT416(-(uint)NAN(fVar63) & (uint)fVar10 |
                                            ~-(uint)NAN(fVar63) & (uint)fVar64);
                    } while (pauVar16 !=
                             (undefined1 (*) [16])((longlong)*pauStack_2e0 + auStack_2d8._0_8_ * 4))
                    ;
                  }
                }
                pauStack_198 = pauStack_2e0;
                pcStack_1c0 = pcStack_2e8;
                puVar11 = (undefined8 *)auStack_2d8._0_8_;
              }
              pdb_140174670(&lStack_340,fStack_f8 + fStack_110,pfStack_3a8);
              pauVar16 = pauStack_198;
              uVar115 = (undefined4)((ulonglong)in_stack_fffffffffffffa58 >> 0x20);
              uVar116 = (undefined4)((ulonglong)in_stack_fffffffffffffa60 >> 0x20);
              uVar112 = (undefined4)((ulonglong)in_stack_fffffffffffffa68 >> 0x20);
              if (puVar11 != (undefined8 *)0x0) {
                uVar12 = (longlong)puVar11 * 4 - 4;
                pauVar17 = pauStack_198;
                if ((0x1b < uVar12) &&
                   (((undefined1 (*) [16])auStack_f4 <= pauStack_198 ||
                    ((undefined1 (*) [16])((longlong)*pauStack_198 + puVar11 * 4) <=
                     (undefined1 (*) [16])&fStack_f8)))) {
                  uVar12 = (uVar12 >> 2) + 1;
                  uVar30 = uVar12 & 0xfffffffffffffff8;
                  pauVar17 = (undefined1 (*) [16])((longlong)*pauStack_198 + uVar30 * 4);
                  uVar14 = 0;
                  do {
                    pfVar33 = (float *)((longlong)*pauStack_198 + uVar14 * 4);
                    fVar64 = pfVar33[1];
                    fVar10 = pfVar33[2];
                    fVar63 = pfVar33[3];
                    pfVar13 = (float *)((longlong)pauStack_198[1] + uVar14 * 4);
                    fVar66 = *pfVar13;
                    fVar72 = pfVar13[1];
                    fVar67 = pfVar13[2];
                    fVar53 = pfVar13[3];
                    pfVar13 = (float *)((longlong)*pauStack_198 + uVar14 * 4);
                    *pfVar13 = *pfVar33 + fStack_f8;
                    pfVar13[1] = fVar64 + fStack_f8;
                    pfVar13[2] = fVar10 + fStack_f8;
                    pfVar13[3] = fVar63 + fStack_f8;
                    pfVar33 = (float *)((longlong)pauStack_198[1] + uVar14 * 4);
                    *pfVar33 = fVar66 + fStack_f8;
                    pfVar33[1] = fVar72 + fStack_f8;
                    pfVar33[2] = fVar67 + fStack_f8;
                    pfVar33[3] = fVar53 + fStack_f8;
                    uVar14 = uVar14 + 8;
                  } while (uVar30 != uVar14);
                  if (uVar12 == uVar30) goto LAB_140823ea9;
                }
                do {
                  *(float *)*pauVar17 = fStack_f8 + *(float *)*pauVar17;
                  pauVar17 = (undefined1 (*) [16])((longlong)*pauVar17 + 4);
                } while (pauVar17 != (undefined1 (*) [16])((longlong)*pauStack_198 + puVar11 * 4));
              }
LAB_140823ea9:
              fVar64 = fStack_110 - (float)auStack_1e8._0_4_;
              puStack_310 = puVar11;
              if (fVar64 <= _DAT_142e3c608) {
                if (lStack_340 != 0) {
                  pub_1406abac0(pbStack_338,lStack_340 << 2,4);
                }
                if (pcStack_1c0 != (char *)0x0) {
                  pub_1406abac0((byte *)pauVar16,(longlong)pcStack_1c0 << 2,4);
                }
                if (lStack_3b8 != 0) {
                  pub_1406abac0(pbStack_3b0,lStack_3b8 << 3,4);
                }
                if (lStack_3a0 != 0) {
                  pub_1406abac0(pbStack_398,lStack_3a0 << 2,4);
                }
                pcVar25 = (char *)(lStack_478 + 0x18);
                pdb_140e9a350();
                LOCK();
                cVar2 = *pcVar25;
                if (cVar2 == '\x01') {
                  *pcVar25 = '\0';
                }
                UNLOCK();
                if (cVar2 != '\x01') {
                  pdb_142dbcef0(pcVar25,0);
                }
              }
              else {
                fStack_10c = fVar64;
                if ((_DAT_142e37838 < fVar64) && ((bVar38 & 1) != 0)) {
                  fVar72 = (float)pdb_140de8220();
                  fVar66 = _UNK_142e3c64c;
                  fVar63 = _UNK_142e3c648;
                  fVar10 = _UNK_142e3c644;
                  fVar64 = _DAT_142e3c640;
                  fVar67 = (float)((uint)fVar40 & _DAT_142e377e0) * _DAT_142e3a74c;
                  uVar12 = (longlong)(fVar67 - _DAT_142e36f2c) & (longlong)fVar67 >> 0x3f |
                           (longlong)fVar67;
                  if (fVar67 < 0.0) {
                    uVar12 = 0;
                  }
                  fVar53 = (float)((uint)fVar41 & _DAT_142e377e0) * _DAT_142e3a74c;
                  if (_DAT_142e36f30 < fVar67) {
                    uVar12 = 0xffffffffffffffff;
                  }
                  uVar30 = (longlong)(fVar53 - _DAT_142e36f2c) & (longlong)fVar53 >> 0x3f |
                           (longlong)fVar53;
                  if (fVar53 < 0.0) {
                    uVar30 = 0;
                  }
                  if (_DAT_142e36f30 < fVar53) {
                    uVar30 = 0xffffffffffffffff;
                  }
                  lStack_240 = (longlong)*pauStack_1b0 + uVar30 + uVar12 + uStack_1a8;
                  fVar67 = _DAT_142e37ae4;
                  if (_DAT_142e37ae4 <= fVar72) {
                    fVar67 = fVar72;
                  }
                  fVar72 = _DAT_142e36f28;
                  if (fVar67 <= _DAT_142e36f28) {
                    fVar72 = fVar67;
                  }
                  fVar53 = fVar72 * _DAT_142e3787c;
                  pauStack_1c8 = (undefined1 (*) [16])CONCAT44(pauStack_1c8._4_4_,fVar53);
                  uVar3 = *param_5;
                  fVar67 = (float)auStack_1e8._0_4_;
                  uStack_348 = uVar43;
                  if (fVar52 < fVar73) {
                    auVar45._4_12_ = auStack_2f8._4_12_;
                    auVar45._0_4_ = auStack_2f8._0_4_ + fVar53 + _DAT_142e3c624;
                    fVar73 = _DAT_142e36f28 / SQRT(fVar42 * fVar42 + fVar65 * fVar65);
                    pdb_140df3380(&pcStack_2e8,auVar45._0_8_,
                                  fVar53 + _DAT_142e3c624 + _DAT_142e3c624,
                                  fVar73 * (float)auStack_258._0_4_,
                                  CONCAT44(uVar115,fVar65 * fVar73),CONCAT44(uVar116,fVar40),
                                  CONCAT44(uVar112,fVar41),&UNK_143009c48);
                    pdb_140df0010(&fStack_188,&pcStack_2e8);
                    pfStack_100 = (float *)CONCAT44(pfStack_100._4_4_,(undefined4)uStack_178);
                    auStack_1f8._0_4_ = uStack_178._4_4_;
                    fVar40 = (float)pdb_14140ce00(uVar3);
                    uVar43 = pdb_14140ce00(uVar3);
                    uVar44 = pdb_14140ce00(uVar3);
                    fVar41 = (float)pdb_14140ce00(uVar3);
                    fVar73 = fVar40;
                    if ((float)auStack_1e8._0_4_ <= fVar40) {
                      fVar73 = (float)auStack_1e8._0_4_;
                    }
                    fVar73 = (float)(~-(uint)NAN((float)auStack_1e8._0_4_) & (uint)fVar73 |
                                    -(uint)NAN((float)auStack_1e8._0_4_) & (uint)fVar40);
                    auVar57._8_4_ = (int)extraout_XMM0_Qb;
                    auVar57._0_8_ = uVar43;
                    auVar57._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
                    if (fVar73 <= (float)uVar43) {
                      auVar57._0_4_ = fVar73;
                    }
                    fVar73 = (float)(-(uint)NAN(fVar73) & (uint)(float)uVar43 |
                                    ~-(uint)NAN(fVar73) & auVar57._0_4_);
                    auVar58._8_4_ = (int)extraout_XMM0_Qb_00;
                    auVar58._0_8_ = uVar44;
                    auVar58._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
                    if (fVar73 <= (float)uVar44) {
                      auVar58._0_4_ = fVar73;
                    }
                    fVar40 = (float)(-(uint)NAN(fVar73) & (uint)(float)uVar44 |
                                    ~-(uint)NAN(fVar73) & auVar58._0_4_);
                    fVar73 = fVar41;
                    if (fVar40 <= fVar41) {
                      fVar73 = fVar40;
                    }
                    fVar67 = (float)(-(uint)NAN(fVar40) & (uint)fVar41 |
                                    ~-(uint)NAN(fVar40) & (uint)fVar73);
                  }
                  fVar72 = fVar72 + fVar72;
                  fVar73 = (float)pub_142e329c0(fVar72 / _DAT_142e3798c);
                  uVar12 = 0;
                  if (0.0 <= fVar73) {
                    uVar12 = (longlong)(fVar73 - _DAT_142e36f2c) & (longlong)fVar73 >> 0x3f |
                             (longlong)fVar73;
                  }
                  if (_DAT_142e36f30 < fVar73) {
                    uVar12 = 0xffffffffffffffff;
                  }
                  pdb_140de8290(&fStack_188,uVar12 + 1 + (ulonglong)(uVar12 == 0),
                                _DAT_142e3b1d8 / fVar72,&lStack_240,&UNK_143009c60);
                  puVar11 = uStack_178;
                  pauVar16 = uStack_180;
                  puStack_190 = uStack_178;
                  if (uStack_178 == (undefined8 *)0x0) {
                    pauVar17 = (undefined1 (*) [16])0x4;
                  }
                  else {
                    uVar12 = (longlong)uStack_178 * 4;
                    pdb_14007ee60();
                    pauVar17 = (undefined1 (*) [16])pub_1406abab0(uVar12,4);
                    if (pauVar17 == (undefined1 (*) [16])0x0) {
                      pauStack_108 = pauVar16;
                      pdb_142dc7e2a(4,uVar12);
                      goto LAB_14082558e;
                    }
                    fVar72 = fVar72 + (float)auStack_1e8._0_4_;
                    if (puVar11 < (undefined8 *)0x8) {
                      puVar11 = (undefined8 *)0x0;
                      fVar73 = _DAT_142e36f28;
                    }
                    else {
                      puVar11 = (undefined8 *)((ulonglong)puVar11 & 0xfffffffffffffff8);
                      puVar20 = (undefined8 *)0x0;
                      do {
                        pfVar33 = (float *)((longlong)*pauVar16 + puVar20 * 4);
                        fVar73 = pfVar33[1];
                        fVar40 = pfVar33[2];
                        fVar41 = pfVar33[3];
                        pfVar13 = (float *)((longlong)pauVar16[1] + puVar20 * 4);
                        auVar77._0_4_ = *pfVar13 * fVar72 + (fVar64 - *pfVar13) * fVar67;
                        auVar77._4_4_ = pfVar13[1] * fVar72 + (fVar10 - pfVar13[1]) * fVar67;
                        auVar77._8_4_ = pfVar13[2] * fVar72 + (fVar63 - pfVar13[2]) * fVar67;
                        auVar77._12_4_ = pfVar13[3] * fVar72 + (fVar66 - pfVar13[3]) * fVar67;
                        pfVar13 = (float *)((longlong)*pauVar17 + puVar20 * 4);
                        *pfVar13 = *pfVar33 * fVar72 + (fVar64 - *pfVar33) * fVar67;
                        pfVar13[1] = fVar73 * fVar72 + (fVar10 - fVar73) * fVar67;
                        pfVar13[2] = fVar40 * fVar72 + (fVar63 - fVar40) * fVar67;
                        pfVar13[3] = fVar41 * fVar72 + (fVar66 - fVar41) * fVar67;
                        *(undefined1 (*) [16])((longlong)pauVar17[1] + puVar20 * 4) = auVar77;
                        puVar20 = puVar20 + 1;
                      } while (puVar11 != puVar20);
                      fVar73 = _DAT_142e36f28;
                      if (puStack_190 == puVar11) goto LAB_14082442c;
                    }
                    do {
                      *(float *)((longlong)*pauVar17 + puVar11 * 4) =
                           *(float *)((longlong)*pauVar16 + puVar11 * 4) * fVar72 +
                           (fVar73 - *(float *)((longlong)*pauVar16 + puVar11 * 4)) * fVar67;
                      puVar11 = (undefined8 *)((longlong)puVar11 + 1);
                    } while (puStack_190 != puVar11);
                  }
LAB_14082442c:
                  fVar73 = _DAT_142e36f28;
                  uVar89 = 0;
                  uVar91 = 0;
                  uVar93 = 0;
                  uVar95 = 0;
                  uVar97 = 0;
                  uVar99 = 0;
                  uVar101 = 0;
                  uVar103 = 0;
                  uVar105 = 0;
                  uVar107 = 0;
                  uVar109 = 0;
                  uVar111 = 0;
                  if (CONCAT44(fStack_184,fStack_188) != 0) {
                    pub_1406abac0((byte *)pauVar16,CONCAT44(fStack_184,fStack_188) << 2,4);
                  }
                  fVar40 = pauStack_1c8._0_4_ * _DAT_142e37ad4;
                  pauStack_118 = (undefined1 (*) [16])
                                 CONCAT44(pauStack_118._4_4_,(float)((longlong)puStack_190 - 2));
                  pauStack_228 = (undefined1 (*) [16])((longlong)*pauVar17 + puStack_190 * 4);
                  fVar73 = fVar73 / SQRT(fVar65 * fVar65 + fVar42 * fVar42);
                  auStack_258._0_4_ = (float)auStack_258._0_4_ * fVar73;
                  fVar73 = fVar73 * fVar65;
                  uVar81 = SUB41(fVar73,0);
                  uVar83 = (undefined1)((uint)fVar73 >> 8);
                  uVar85 = (undefined1)((uint)fVar73 >> 0x10);
                  uVar87 = (undefined1)((uint)fVar73 >> 0x18);
                  lStack_218 = CONCAT44(lStack_218._4_4_,fVar73);
                  fVar73 = 0.0;
                  bVar35 = true;
                  uVar12 = 0;
                  pbStack_438 = pbVar24;
                  lStack_430 = lVar32;
                  pauStack_320 = pauVar17;
                  while (pauVar17 != pauStack_228) {
                    pauVar16 = (undefined1 (*) [16])((longlong)*pauVar17 + 4);
                    if (bVar35) {
                      if (pauVar16 == pauStack_228) break;
                      pfVar33 = (float *)*pauVar17;
                      pauVar17 = pauVar16;
                      pauVar16 = (undefined1 (*) [16])(pfVar33 + 2);
                    }
                    pauStack_268 = pauVar17;
                    pdb_140df4540(&fStack_3ec,&uStack_348);
                    pdb_140df4540(&fStack_3f8,&uStack_348);
                    fVar63 = fStack_3e4;
                    fVar10 = fStack_3e8;
                    fVar64 = fStack_3ec;
                    fVar52 = fStack_3f0;
                    fVar42 = fStack_3f4;
                    fVar65 = fStack_3f8;
                    uVar89 = 0;
                    uVar91 = 0;
                    uVar93 = 0;
                    uVar95 = 0;
                    uVar97 = 0;
                    uVar99 = 0;
                    uVar101 = 0;
                    uVar103 = 0;
                    uVar105 = 0;
                    uVar107 = 0;
                    uVar109 = 0;
                    uVar111 = 0;
                    fVar66 = ((float)uVar12 / pauStack_118._0_4_ + _DAT_143009bc0) / _DAT_143009bc4;
                    fVar41 = 0.0;
                    if (0.0 <= fVar66) {
                      fVar41 = fVar66;
                    }
                    fVar66 = _DAT_142e36f28;
                    if (fVar41 <= _DAT_142e36f28) {
                      fVar66 = fVar41;
                    }
                    fVar41 = _DAT_142e36f28 - (_DAT_142e3788c - (fVar66 + fVar66)) * fVar66 * fVar66
                    ;
                    if (fVar41 <= 0.0) {
                      fVar41 = 0.0;
                    }
                    auVar59._4_12_ = auStack_2f8._4_12_;
                    auVar59._0_4_ = auStack_2f8._0_4_ + fVar41 * pauStack_1c8._0_4_;
                    pdb_140df3380(acStack_410,auVar59._0_8_,
                                  fVar41 * pauStack_1c8._0_4_ + _DAT_142e3c624);
                    fVar66 = fVar42 - fVar10;
                    uStack_230 = uVar12 + 1;
                    fVar41 = (fVar10 + fVar42) * _DAT_142e36f50;
                    uVar81 = SUB41(fVar41,0);
                    uVar83 = (undefined1)((uint)fVar41 >> 8);
                    uVar85 = (undefined1)((uint)fVar41 >> 0x10);
                    uVar87 = (undefined1)((uint)fVar41 >> 0x18);
                    pfStack_100 = (float *)CONCAT44(pfStack_100._4_4_,fVar41);
                    auVar61._0_4_ =
                         SQRT((fVar52 - fVar63) * (fVar52 - fVar63) +
                              fVar66 * fVar66 + (fVar65 - fVar64) * (fVar65 - fVar64));
                    uStack_428 = (float *)CONCAT44(*(undefined4 *)
                                                    (&UNK_142f61070 +
                                                    (ulonglong)((uVar12 & 1) == 0) * 4),
                                                   *(undefined4 *)
                                                    (&UNK_142f61070 +
                                                    (ulonglong)((uVar12 & 1) == 0) * 4));
                    uStack_420 = 0;
                    auVar61._4_4_ = auVar61._0_4_;
                    auVar61._8_4_ = auVar61._0_4_;
                    auVar61._12_4_ = auVar61._0_4_;
                    uVar30 = 0;
                    pauStack_270 = pauVar16;
                    _auStack_1f8 = auVar61;
                    while (uVar30 < 4) {
                      fVar52 = (float)pdb_140df3e10(acStack_410,uVar30);
                      uVar14 = uVar30 + 1;
                      auVar45 = auVar61;
                      fVar42 = (float)pdb_140df3e10(acStack_410,(uint)uVar14 & 3);
                      fVar41 = fVar42 - fVar52;
                      fVar65 = auVar45._0_4_ - auVar61._0_4_;
                      fVar64 = _DAT_142e36f28 / SQRT(fVar65 * fVar65 + fVar41 * fVar41);
                      fVar41 = fVar64 * fVar41 * _DAT_143009bd0 * _DAT_142e36f60 * (float)uStack_428
                      ;
                      fVar65 = fVar64 * fVar65 * _UNK_143009bd4 * _UNK_142e36f64 * uStack_428._4_4_;
                      fVar52 = fVar52 + fVar41;
                      fVar10 = auVar61._0_4_ + fVar65;
                      fVar41 = fVar41 + fVar42;
                      fVar65 = fVar65 + auVar45._0_4_;
                      uVar28 = CONCAT13(uVar95,CONCAT12(uVar93,CONCAT11(uVar91,uVar89))) ^
                               CONCAT13(uVar95,CONCAT12(uVar93,CONCAT11(uVar91,uVar89)));
                      uVar89 = (undefined1)uVar28;
                      uVar91 = (undefined1)(uVar28 >> 8);
                      uVar93 = (undefined1)(uVar28 >> 0x10);
                      uVar95 = (undefined1)(uVar28 >> 0x18);
                      uVar5 = CONCAT13(uVar103,CONCAT12(uVar101,CONCAT11(uVar99,uVar97))) ^
                              CONCAT13(uVar103,CONCAT12(uVar101,CONCAT11(uVar99,uVar97)));
                      uVar97 = (undefined1)uVar5;
                      uVar99 = (undefined1)(uVar5 >> 8);
                      uVar101 = (undefined1)(uVar5 >> 0x10);
                      uVar103 = (undefined1)(uVar5 >> 0x18);
                      uVar6 = CONCAT13(uVar111,CONCAT12(uVar109,CONCAT11(uVar107,uVar105))) ^
                              CONCAT13(uVar111,CONCAT12(uVar109,CONCAT11(uVar107,uVar105)));
                      fVar42 = SQRT((fVar10 - fVar65) * (fVar10 - fVar65) +
                                    (fVar52 - fVar41) * (fVar52 - fVar41));
                      uVar81 = SUB41(fVar42,0);
                      uVar83 = (undefined1)((uint)fVar42 >> 8);
                      uVar85 = (undefined1)((uint)fVar42 >> 0x10);
                      uVar87 = (undefined1)((uint)fVar42 >> 0x18);
                      auVar50._4_4_ = uVar28;
                      auVar50._0_4_ = fVar42;
                      auVar50._8_4_ = uVar5;
                      auVar50._12_4_ = uVar6;
                      auVar51._4_12_ = auVar50._4_12_;
                      auVar51._0_4_ = fVar42 / _DAT_142e3c620;
                      uVar43 = pub_142e329c0(auVar51._0_8_);
                      fVar64 = (float)uVar43;
                      auVar60._8_4_ = (int)extraout_XMM0_Qb_01;
                      auVar60._0_8_ = uVar43;
                      auVar60._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
                      auVar61._4_12_ = auVar60._4_12_;
                      auVar61._0_4_ = fVar64 - _DAT_142e36f2c;
                      uVar22 = 0;
                      if (0.0 <= fVar64) {
                        uVar22 = (longlong)auVar61._0_4_ & (longlong)fVar64 >> 0x3f |
                                 (longlong)fVar64;
                      }
                      if (_DAT_142e36f30 < fVar64) {
                        uVar22 = 0xffffffffffffffff;
                      }
                      pdb_140de8290(&cStack_3e0,uVar22 + 1 + (ulonglong)(uVar22 == 0),
                                    _DAT_142e3b1d8 / fVar42,&lStack_240,&UNK_143009c90);
                      lVar32 = lStack_3d0;
                      fVar42 = _DAT_142e36f28;
                      pfStack_120 = pfStack_3d8;
                      uVar105 = (char)uVar6;
                      uVar107 = (char)(uVar6 >> 8);
                      uVar109 = (char)(uVar6 >> 0x10);
                      uVar111 = (char)(uVar6 >> 0x18);
                      if (lStack_3d0 == 0) {
LAB_140824e60:
                        lVar32 = CONCAT71(uStack_3df,cStack_3e0);
                      }
                      else {
                        uVar81 = SUB41(_DAT_142e36f28,0);
                        uVar83 = (undefined1)((uint)_DAT_142e36f28 >> 8);
                        uVar85 = (undefined1)((uint)_DAT_142e36f28 >> 0x10);
                        uVar87 = (undefined1)((uint)_DAT_142e36f28 >> 0x18);
                        uVar89 = 0;
                        uVar91 = 0;
                        uVar93 = 0;
                        uVar95 = 0;
                        uVar97 = 0;
                        uVar99 = 0;
                        uVar101 = 0;
                        uVar103 = 0;
                        uVar105 = 0;
                        uVar107 = 0;
                        uVar109 = 0;
                        uVar111 = 0;
                        if (lStack_3d0 == 1) goto LAB_140824e60;
                        fVar64 = *pfStack_3d8;
                        fVar63 = pfStack_3d8[1];
                        fVar72 = fVar64 * fVar41 + (_DAT_142e36f28 - fVar64) * fVar52;
                        fVar67 = fVar64 * fVar65 + (_DAT_142e36f28 - fVar64) * fVar10;
                        fVar53 = fVar63 * fVar41 + (_DAT_142e36f28 - fVar63) * fVar52;
                        fVar63 = fVar63 * fVar65 + (_DAT_142e36f28 - fVar63) * fVar10;
                        uStack_278 = CONCAT44(fVar63 * _UNK_142e36f64 + fVar67 * _UNK_142e36f64,
                                              fVar53 * _DAT_142e36f60 + fVar72 * _DAT_142e36f60);
                        fVar64 = (float)pdb_140e02880(&lStack_240);
                        fVar114 = (fVar64 * fVar40 - (fVar42 - fVar64) * fVar40) + _DAT_142e37988;
                        pdb_140df4540(&uStack_3c8,&uStack_278);
                        pdb_140df1760(acStack_410,uVar30);
                        pdb_140de88f0(&fStack_308);
                        fVar66 = _DAT_142e36f28;
                        fVar72 = fVar72 - fVar53;
                        fVar67 = fVar67 - fVar63;
                        fVar72 = SQRT(fVar67 * fVar67 + fVar72 * fVar72);
                        fVar117 = fStack_300 + fStack_300;
                        fVar67 = fStack_304 + fStack_304;
                        fVar42 = fVar117 * fStack_308;
                        uVar81 = SUB41(fVar42,0);
                        uVar83 = (undefined1)((uint)fVar42 >> 8);
                        uVar85 = (undefined1)((uint)fVar42 >> 0x10);
                        uVar87 = (undefined1)((uint)fVar42 >> 0x18);
                        fVar64 = fVar117 * fStack_304;
                        uVar89 = SUB41(fVar64,0);
                        uVar91 = (undefined1)((uint)fVar64 >> 8);
                        uVar93 = (undefined1)((uint)fVar64 >> 0x10);
                        uVar95 = (undefined1)((uint)fVar64 >> 0x18);
                        fVar63 = fStack_300 * 0.0;
                        uVar97 = SUB41(fVar63,0);
                        uVar99 = (undefined1)((uint)fVar63 >> 8);
                        uVar101 = (undefined1)((uint)fVar63 >> 0x10);
                        uVar103 = (undefined1)((uint)fVar63 >> 0x18);
                        fVar63 = fStack_2fc * 0.0;
                        uVar105 = SUB41(fVar63,0);
                        uVar107 = (undefined1)((uint)fVar63 >> 8);
                        uVar109 = (undefined1)((uint)fVar63 >> 0x10);
                        uVar111 = (undefined1)((uint)fVar63 >> 0x18);
                        fVar79 = fStack_308 * (fStack_308 + fStack_308);
                        fVar63 = (fStack_308 + fStack_308) * fStack_2fc;
                        uStack_180._4_4_ = fVar42 - fVar67 * fStack_2fc;
                        fVar53 = fVar63 + fVar64;
                        fVar74 = _DAT_142e36f28 - (fVar79 + fStack_304 * fVar67);
                        fStack_188 = fVar72 * (_DAT_142e36f28 -
                                              (fStack_304 * fVar67 + fStack_300 * fVar117));
                        fStack_184 = fVar72 * (fVar67 * fStack_308 + fStack_2fc * fVar117);
                        uStack_180._0_4_ = fVar72 * uStack_180._4_4_;
                        uStack_180._4_4_ = fVar72 * uStack_180._4_4_;
                        uStack_178 = (undefined8 *)
                                     CONCAT44((_DAT_142e36f28 - (fStack_300 * fVar117 + fVar79)) *
                                              (float)auStack_1f8._4_4_,
                                              (fVar67 * fStack_308 - fStack_2fc * fVar117) *
                                              (float)auStack_1f8._0_4_);
                        uStack_170 = (float *)CONCAT44(fVar53 * fStack_1ec,fVar53 * fStack_1f0);
                        uStack_168 = (byte *)CONCAT44(fVar114 * (fVar64 - fVar63),
                                                      fVar114 * (fVar67 * fStack_2fc + fVar42));
                        uStack_160 = (byte *)CONCAT44(fVar114 * fVar74,fVar114 * fVar74);
                        uStack_158 = CONCAT44(uStack_3c4,uStack_3c8);
                        uStack_150 = CONCAT44(uStack_3c0,uStack_3c0);
                        pdb_140e07fe0(&pcStack_378,&fStack_188);
                        pdb_140951920(&fStack_188);
                        fVar72 = fVar72 + fVar73;
                        auVar61._8_8_ = uStack_360;
                        auVar61._0_8_ = uStack_368;
                        pbStack_2c8 = pbStack_358;
                        pbStack_2c0 = pbStack_350;
                        pcStack_2e8 = pcStack_378;
                        pauStack_2e0 = pauStack_370;
                        uStack_2b8 = uStack_158;
                        uStack_2b0 = uStack_150;
                        uStack_2a0 = (undefined4)lStack_140;
                        uStack_2a8 = uStack_148;
                        uStack_298 = pauStack_108._0_4_;
                        uStack_28c = 0x40;
                        auStack_2d8 = auVar61;
                        iStack_29c = (int)uVar12;
                        fStack_294 = fVar73;
                        fStack_290 = fVar72;
                        pdb_14094c790(auStack_510,&pcStack_2e8);
                        pdb_1413f66a0(&uStack_498,auStack_510);
                        pfVar33 = pfStack_120 + lVar32;
                        if (pfStack_120 + 2 != pfVar33) {
                          iVar36 = 1;
                          pfVar13 = pfStack_120 + 1;
                          pfVar27 = pfStack_120 + 2;
                          do {
                            fVar73 = *pfVar13;
                            fVar42 = *pfVar27;
                            fVar64 = fVar73 * fVar41 + (fVar66 - fVar73) * fVar52;
                            fVar63 = fVar73 * fVar65 + (fVar66 - fVar73) * fVar10;
                            fVar67 = fVar42 * fVar41 + (fVar66 - fVar42) * fVar52;
                            fVar42 = fVar42 * fVar65 + (fVar66 - fVar42) * fVar10;
                            uStack_278 = CONCAT44(fVar42 * _UNK_142e36f64 + fVar63 * _UNK_142e36f64,
                                                  fVar67 * _DAT_142e36f60 + fVar64 * _DAT_142e36f60)
                            ;
                            fVar73 = (float)pdb_140e02880(&lStack_240);
                            fVar79 = (fVar73 * fVar40 - (fVar66 - fVar73) * fVar40) + _DAT_142e37988
                            ;
                            pdb_140df4540(&uStack_3c8,&uStack_278);
                            pdb_140df1760(acStack_410,uVar30);
                            pdb_140de88f0(&fStack_308);
                            fVar66 = _DAT_142e36f28;
                            fVar64 = fVar64 - fVar67;
                            fVar63 = fVar63 - fVar42;
                            fVar73 = SQRT(fVar63 * fVar63 + fVar64 * fVar64);
                            fVar74 = fStack_300 + fStack_300;
                            fVar42 = fStack_304 + fStack_304;
                            fVar53 = fStack_308 * (fStack_308 + fStack_308);
                            fVar64 = (fStack_308 + fStack_308) * fStack_2fc;
                            fStack_188 = _DAT_142e36f28 -
                                         (fStack_304 * fVar42 + fStack_300 * fVar74);
                            fStack_184 = fVar42 * fStack_308 + fStack_2fc * fVar74;
                            uStack_180._4_4_ = fVar74 * fStack_308 - fVar42 * fStack_2fc;
                            uVar81 = SUB41(fStack_188,0);
                            uVar83 = (undefined1)((uint)fStack_188 >> 8);
                            uVar85 = (undefined1)((uint)fStack_188 >> 0x10);
                            uVar87 = (undefined1)((uint)fStack_188 >> 0x18);
                            uVar89 = SUB41(fStack_184,0);
                            uVar91 = (undefined1)((uint)fStack_184 >> 8);
                            uVar93 = (undefined1)((uint)fStack_184 >> 0x10);
                            uVar95 = (undefined1)((uint)fStack_184 >> 0x18);
                            uVar97 = SUB41(uStack_180._4_4_,0);
                            uVar99 = (undefined1)((uint)uStack_180._4_4_ >> 8);
                            uVar101 = (undefined1)((uint)uStack_180._4_4_ >> 0x10);
                            uVar103 = (undefined1)((uint)uStack_180._4_4_ >> 0x18);
                            fVar63 = fVar64 + fVar74 * fStack_304;
                            fVar67 = _DAT_142e36f28 - (fVar53 + fStack_304 * fVar42);
                            fStack_188 = fVar73 * fStack_188;
                            fStack_184 = fVar73 * fStack_184;
                            uStack_180._0_4_ = fVar73 * uStack_180._4_4_;
                            uStack_180._4_4_ = fVar73 * uStack_180._4_4_;
                            uStack_178 = (undefined8 *)
                                         CONCAT44((_DAT_142e36f28 - (fStack_300 * fVar74 + fVar53))
                                                  * (float)auStack_1f8._4_4_,
                                                  (fVar42 * fStack_308 - fStack_2fc * fVar74) *
                                                  (float)auStack_1f8._0_4_);
                            uStack_170 = (float *)CONCAT44(fVar63 * fStack_1ec,fVar63 * fStack_1f0);
                            uStack_168 = (byte *)CONCAT44(fVar79 * (fVar74 * fStack_304 - fVar64),
                                                          fVar79 * (fVar42 * fStack_2fc +
                                                                   fVar74 * fStack_308));
                            uStack_160 = (byte *)CONCAT44(fVar79 * fVar67,fVar79 * fVar67);
                            uStack_158 = CONCAT44(uStack_3c4,uStack_3c8);
                            uStack_150 = CONCAT44(uStack_3c0,uStack_3c0);
                            pdb_140e07fe0(&pcStack_378,&fStack_188);
                            pdb_140951920(&fStack_188);
                            fVar73 = fVar73 + fVar72;
                            iStack_29c = iVar36 + (int)uVar12;
                            auVar61._8_8_ = uStack_360;
                            auVar61._0_8_ = uStack_368;
                            pbStack_2c8 = pbStack_358;
                            pbStack_2c0 = pbStack_350;
                            pcStack_2e8 = pcStack_378;
                            pauStack_2e0 = pauStack_370;
                            uStack_2b8 = uStack_158;
                            uStack_2b0 = uStack_150;
                            uStack_2a0 = (undefined4)lStack_140;
                            uStack_2a8 = uStack_148;
                            uStack_298 = pauStack_108._0_4_;
                            uStack_28c = 0x40;
                            auStack_2d8 = auVar61;
                            fStack_294 = fVar72;
                            fStack_290 = fVar73;
                            pdb_14094c790(auStack_510,&pcStack_2e8);
                            pdb_1413f66a0(&uStack_498,auStack_510);
                            pfVar26 = pfVar27 + 1;
                            iVar36 = iVar36 + 1;
                            pfVar13 = pfVar27;
                            pfVar27 = pfVar26;
                            uVar105 = uVar97;
                            uVar107 = uVar99;
                            uVar109 = uVar101;
                            uVar111 = uVar103;
                            fVar72 = fVar73;
                          } while (pfVar26 != pfVar33);
                          goto LAB_140824e60;
                        }
                        lVar32 = CONCAT71(uStack_3df,cStack_3e0);
                        fVar73 = fVar72;
                      }
                      uVar30 = uVar14;
                      if (lVar32 != 0) {
                        pub_1406abac0((byte *)pfStack_120,lVar32 << 2,4);
                      }
                    }
                    bVar35 = false;
                    pauVar17 = pauStack_270;
                    uVar12 = uStack_230;
                  }
                  if (puStack_190 != (undefined8 *)0x0) {
                    pub_1406abac0((byte *)pauStack_320,(longlong)puStack_190 << 2,4);
                  }
                  iVar36 = -(uint)(CONCAT13(uVar87,CONCAT12(uVar85,CONCAT11(uVar83,uVar81))) ==
                                  CONCAT13(uVar87,CONCAT12(uVar85,CONCAT11(uVar83,uVar81))));
                  cVar80 = (char)iVar36;
                  cVar82 = (char)((uint)iVar36 >> 8);
                  cVar84 = (char)((uint)iVar36 >> 0x10);
                  cVar86 = (char)((uint)iVar36 >> 0x18);
                  iVar36 = -(uint)(CONCAT13(uVar95,CONCAT12(uVar93,CONCAT11(uVar91,uVar89))) ==
                                  CONCAT13(uVar95,CONCAT12(uVar93,CONCAT11(uVar91,uVar89))));
                  cVar88 = (char)iVar36;
                  cVar90 = (char)((uint)iVar36 >> 8);
                  cVar92 = (char)((uint)iVar36 >> 0x10);
                  cVar94 = (char)((uint)iVar36 >> 0x18);
                  iVar36 = -(uint)(CONCAT13(uVar103,CONCAT12(uVar101,CONCAT11(uVar99,uVar97))) ==
                                  CONCAT13(uVar103,CONCAT12(uVar101,CONCAT11(uVar99,uVar97))));
                  cVar96 = (char)iVar36;
                  cVar98 = (char)((uint)iVar36 >> 8);
                  cVar100 = (char)((uint)iVar36 >> 0x10);
                  cVar102 = (char)((uint)iVar36 >> 0x18);
                  iVar36 = -(uint)(CONCAT13(uVar111,CONCAT12(uVar109,CONCAT11(uVar107,uVar105))) ==
                                  CONCAT13(uVar111,CONCAT12(uVar109,CONCAT11(uVar107,uVar105))));
                  cVar104 = (char)iVar36;
                  cVar106 = (char)((uint)iVar36 >> 8);
                  cVar108 = (char)((uint)iVar36 >> 0x10);
                  cVar110 = (char)((uint)iVar36 >> 0x18);
                  pbVar24 = pbStack_438;
                  lVar32 = lStack_430;
                  auVar45 = _DAT_142e37820;
                  fVar73 = _DAT_142e37848;
                }
                in_stack_fffffffffffffa58 = uStack_330;
                pbVar19 = pbStack_338;
                pfVar33 = pfStack_3a8;
                acStack_410[0] = '\0';
                cStack_3e0 = '\0';
                pcStack_2e8 = &cStack_3e0;
                pauStack_2e0 = (undefined1 (*) [16])acStack_410;
                auStack_2d8._8_8_ = &uStack_498;
                auStack_2d8._0_8_ = &fStack_f8;
                pcStack_378 = (char *)0x0;
                pauStack_370 = (undefined1 (*) [16])0x4;
                uStack_368 = 0;
                if (pfStack_3a8 == (float *)0x0) {
                  pbVar18 = (byte *)0x4;
                }
                else {
                  uVar12 = (longlong)pfStack_3a8 * 4;
                  pdb_14007ee60();
                  pbVar18 = pub_1406abae0(uVar12,4);
                  if (pbVar18 == (byte *)0x0) {
                    pdb_142dc7e2a(4,uVar12);
                    goto LAB_14082558e;
                  }
                }
                fStack_188 = 0.0;
                fStack_184 = 0.0;
                uStack_180._0_4_ = 5.60519e-45;
                uStack_180._4_4_ = 0.0;
                uStack_178 = (undefined8 *)0x0;
                uStack_170 = (float *)((ulonglong)uStack_170 & 0xffffff0000000000);
                uStack_168 = (byte *)0x0;
                lStack_140 = 0;
                uStack_138 = 0;
                uStack_150 = 0;
                uStack_148 = 0;
                uStack_160 = (byte *)0x4;
                uStack_158 = 0;
                uStack_4fc = 2;
                pfStack_100 = pfVar33;
                auStack_1f8 = (undefined1  [8])pbVar18;
                in_stack_fffffffffffffa60 = pauStack_198;
                in_stack_fffffffffffffa68 = puStack_310;
                pdb_14143bf90(&pcStack_378,&lStack_3b8,(ulonglong)pauStack_108 & 0xffffffff,pbVar19,
                              in_stack_fffffffffffffa58,pauStack_198,puStack_310,pbVar18,pfVar33,0,0
                              ,&fStack_188,0x3e4ccccd,&pcStack_2e8,auStack_1e8._0_4_ + fStack_f8,
                              auStack_510,0);
                if (CONCAT44(fStack_184,fStack_188) != 0) {
                  pub_1406abac0((byte *)CONCAT44(uStack_180._4_4_,(float)uStack_180),
                                CONCAT44(fStack_184,fStack_188) * 0x14,4);
                }
                pfVar33 = pfStack_100;
                pauVar16 = pauStack_198;
                if (uStack_168 != (byte *)0x0) {
                  pub_1406abac0(uStack_160,(longlong)uStack_168 * 0x14,4);
                }
                if (pfVar33 != (float *)0x0) {
                  pub_1406abac0((byte *)auStack_1f8,(longlong)pfVar33 << 2,4);
                }
                if (cStack_3e0 != '\0') {
                  if (pcStack_378 != (char *)0x0) {
                    pub_1406abac0((byte *)pauStack_370,(longlong)pcStack_378 << 4,4);
                  }
                  if (lStack_340 != 0) {
                    pub_1406abac0(pbVar19,lStack_340 << 2,4);
                  }
                  if (pcStack_1c0 != (char *)0x0) {
                    pub_1406abac0((byte *)pauVar16,(longlong)pcStack_1c0 << 2,4);
                  }
                  pdb_14049c2a0(&lStack_3b8);
                  pdb_1404a99b0(&uStack_498);
                  break;
                }
                if (acStack_410[0] != '\0') {
                  *puStack_328 = uStack_1cc;
                  if (plStack_128[3] == 0) {
LAB_140825336:
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_143009cf0);
                  }
                  uVar12 = pdb_1400af680(plStack_238,&uStack_280);
                  lVar21 = *plStack_128;
                  bVar38 = (byte)(uVar12 >> 0x39);
                  auVar49 = ZEXT216(CONCAT11(bVar38,bVar38));
                  auVar49 = pshuflw(auVar49,auVar49,0);
                  lVar23 = 0;
                  do {
                    uVar12 = uVar12 & plStack_128[1];
                    pcVar25 = (char *)(lVar21 + uVar12);
                    auVar71[0] = -(*pcVar25 == auVar49[0]);
                    auVar71[1] = -(pcVar25[1] == auVar49[1]);
                    auVar71[2] = -(pcVar25[2] == auVar49[2]);
                    auVar71[3] = -(pcVar25[3] == auVar49[3]);
                    auVar71[4] = -(pcVar25[4] == auVar49[4]);
                    auVar71[5] = -(pcVar25[5] == auVar49[5]);
                    auVar71[6] = -(pcVar25[6] == auVar49[6]);
                    auVar71[7] = -(pcVar25[7] == auVar49[7]);
                    auVar71[8] = -(pcVar25[8] == auVar49[0]);
                    auVar71[9] = -(pcVar25[9] == auVar49[1]);
                    auVar71[10] = -(pcVar25[10] == auVar49[2]);
                    auVar71[0xb] = -(pcVar25[0xb] == auVar49[3]);
                    auVar71[0xc] = -(pcVar25[0xc] == auVar49[4]);
                    auVar71[0xd] = -(pcVar25[0xd] == auVar49[5]);
                    auVar71[0xe] = -(pcVar25[0xe] == auVar49[6]);
                    auVar71[0xf] = -(pcVar25[0xf] == auVar49[7]);
                    uVar29 = (ushort)(SUB161(auVar71 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar71 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar71 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar71 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar71 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar71 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar71 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar71 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar71 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar71 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar71 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar71 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar71 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar71 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar71 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar71[0xf] >> 7) << 0xf;
                    uVar28 = (uint)uVar29;
                    while (uVar29 != 0) {
                      uVar5 = 0;
                      for (uVar6 = uVar28; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                        uVar5 = uVar5 + 1;
                      }
                      lVar31 = (uVar5 + uVar12 & plStack_128[1]) * -0x140;
                      if (((int)pauStack_1b0 == *(int *)(lVar21 + -0x140 + lVar31)) &&
                         ((int)uStack_1a8 == *(int *)(lVar21 + -0x13c + lVar31))) {
                        plVar1 = (longlong *)(lVar21 + lVar31 + -0x10);
                        *plVar1 = *plVar1 + 1;
                        pauVar16 = pauStack_198;
                        goto LAB_140825247;
                      }
                      uVar29 = (ushort)(uVar28 - 1) & (ushort)uVar28;
                      uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar29);
                    }
                    auVar62[0] = -(*pcVar25 == cVar80);
                    auVar62[1] = -(pcVar25[1] == cVar82);
                    auVar62[2] = -(pcVar25[2] == cVar84);
                    auVar62[3] = -(pcVar25[3] == cVar86);
                    auVar62[4] = -(pcVar25[4] == cVar88);
                    auVar62[5] = -(pcVar25[5] == cVar90);
                    auVar62[6] = -(pcVar25[6] == cVar92);
                    auVar62[7] = -(pcVar25[7] == cVar94);
                    auVar62[8] = -(pcVar25[8] == cVar96);
                    auVar62[9] = -(pcVar25[9] == cVar98);
                    auVar62[10] = -(pcVar25[10] == cVar100);
                    auVar62[0xb] = -(pcVar25[0xb] == cVar102);
                    auVar62[0xc] = -(pcVar25[0xc] == cVar104);
                    auVar62[0xd] = -(pcVar25[0xd] == cVar106);
                    auVar62[0xe] = -(pcVar25[0xe] == cVar108);
                    auVar62[0xf] = -(pcVar25[0xf] == cVar110);
                    if ((((((((((((((((SUB161(auVar62 >> 7,0) & 1) != 0 ||
                                     (SUB161(auVar62 >> 0xf,0) & 1) != 0) ||
                                    (SUB161(auVar62 >> 0x17,0) & 1) != 0) ||
                                   (SUB161(auVar62 >> 0x1f,0) & 1) != 0) ||
                                  (SUB161(auVar62 >> 0x27,0) & 1) != 0) ||
                                 (SUB161(auVar62 >> 0x2f,0) & 1) != 0) ||
                                (SUB161(auVar62 >> 0x37,0) & 1) != 0) ||
                               (SUB161(auVar62 >> 0x3f,0) & 1) != 0) ||
                              (SUB161(auVar62 >> 0x47,0) & 1) != 0) ||
                             (SUB161(auVar62 >> 0x4f,0) & 1) != 0) ||
                            (SUB161(auVar62 >> 0x57,0) & 1) != 0) ||
                           (SUB161(auVar62 >> 0x5f,0) & 1) != 0) ||
                          (SUB161(auVar62 >> 0x67,0) & 1) != 0) ||
                         (SUB161(auVar62 >> 0x6f,0) & 1) != 0) ||
                        (SUB161(auVar62 >> 0x77,0) & 1) != 0) || auVar62[0xf] < '\0')
                    goto LAB_140825336;
                    uVar12 = uVar12 + lVar23 + 0x10;
                    lVar23 = lVar23 + 0x10;
                  } while( true );
                }
LAB_140825247:
                if (pcStack_378 != (char *)0x0) {
                  pub_1406abac0((byte *)pauStack_370,(longlong)pcStack_378 << 4,4);
                }
                if (lStack_340 != 0) {
                  pub_1406abac0(pbVar19,lStack_340 << 2,4);
                }
                if (pcStack_1c0 != (char *)0x0) {
                  pub_1406abac0((byte *)pauVar16,(longlong)pcStack_1c0 << 2,4);
                }
                if (lStack_3b8 != 0) {
                  pub_1406abac0(pbStack_3b0,lStack_3b8 << 3,4);
                }
                if (lStack_3a0 != 0) {
                  pub_1406abac0(pbStack_398,lStack_3a0 << 2,4);
                }
LAB_140823ba2:
                pcVar25 = (char *)(lStack_478 + 0x18);
                pdb_140e9a350();
                LOCK();
                cVar2 = *pcVar25;
                if (cVar2 == '\x01') {
                  *pcVar25 = '\0';
                }
                UNLOCK();
                if (cVar2 != '\x01') {
                  pdb_142dbcef0(pcVar25,0);
                }
              }
              pbVar19 = pbStack_1b8;
              if (pbStack_1b8 == pbVar24) break;
            }
          }
          if (pauStack_1a0 != (undefined1 (*) [16])0x0) {
            pub_1406abac0(pbStack_318,(longlong)pauStack_1a0 * 0x2c,4);
          }
          return;
        }
        pauStack_1c8 = pauVar17 + 2;
        pauStack_228 = (undefined1 (*) [16])
                       (*(longlong *)((longlong)pauVar17[1] + 8) * 0x2c +
                       (longlong)*(undefined1 (**) [16])pauVar17[1]);
        uVar12 = 0;
        pauVar34 = *(undefined1 (**) [16])pauVar17[1];
        pauStack_268 = pauVar17;
LAB_140822fe0:
        lVar32 = lStack_200;
        pauVar17 = pauStack_1c8;
        if (pauVar34 != pauStack_228) {
          pauStack_1b0 = (undefined1 (*) [16])((longlong)pauVar34[2] + 0xc);
          uStack_1a8 = uVar12 + 1;
          uStack_180 = pauVar16;
          if ((uVar12 == 0) || (uVar12 == *(longlong *)((longlong)pauStack_268[1] + 8) - 1U)) {
            fVar42 = (float)*(undefined8 *)*pauVar34;
            fVar52 = (float)((ulonglong)*(undefined8 *)*pauVar34 >> 0x20);
            fVar73 = *(float *)((longlong)*pauVar34 + 4);
            unaff_XMM7_Bl = 0;
            fVar40 = *(float *)((longlong)*pauVar34 + 8);
            fVar41 = *(float *)((longlong)*pauVar34 + 0xc);
            uVar115 = 0;
            uVar116 = 0;
            uVar43 = *(undefined8 *)pauVar34[1];
            fVar65 = *(float *)((longlong)pauVar34[1] + 8);
            uVar112 = (undefined4)*(undefined8 *)((longlong)pauVar34[1] + 0xc);
            uVar113 = (undefined4)((ulonglong)*(undefined8 *)((longlong)pauVar34[1] + 0xc) >> 0x20);
            auStack_1e8._0_4_ = *(float *)((longlong)pauVar34[2] + 4);
            uStack_230 = CONCAT71(uStack_230._1_7_,*(undefined1 *)((longlong)pauVar34[2] + 8));
            lVar21 = pdb_140a61160(auStack_258._0_8_);
            fStack_188 = *(float *)pauVar34[2];
            pauStack_108 = (undefined1 (*) [16])(ulonglong)(uint)fStack_188;
            uVar12 = *(ulonglong *)(lVar21 + 0x10);
            pfStack_100 = (float *)0x4;
            if (uVar12 == 0) {
LAB_140823190:
              pfVar33 = (float *)0x4;
            }
            else if (uVar12 == 1) {
              lVar32 = *(longlong *)(lVar21 + 8);
              pfVar33 = (float *)0x4;
              if (fStack_188 == *(float *)(lVar32 + 0x20)) {
                uVar30 = 0;
LAB_140823170:
                pfVar33 = *(float **)(lVar32 + 8 + uVar30 * 0x28);
                pfStack_100 = pfVar33 + *(longlong *)(lVar32 + 0x10 + uVar30 * 0x28) * 2;
              }
            }
            else {
              uVar30 = pdb_1400aede0(lVar21 + 0x38,&fStack_188);
              uVar14 = pdb_141473860(lVar21,uVar30,&fStack_188);
              if ((uVar14 & 1) == 0) goto LAB_140823190;
              if (uVar12 <= uVar30) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar30,uVar12,&UNK_14330bc30);
              }
              lVar32 = *(longlong *)(lVar21 + 8);
              pfVar33 = (float *)0x4;
              if (lVar32 != 0) goto LAB_140823170;
            }
            pfVar13 = (float *)pdb_140a61160(auStack_258._0_8_);
            fVar64 = *(float *)((longlong)pauVar34[2] + 4);
            uVar12 = *(ulonglong *)(pfVar13 + 4);
            auStack_1f8 = (undefined1  [8])0x4;
            fStack_188 = fVar64;
            pfStack_120 = pfVar13;
            if (uVar12 == 0) {
LAB_140823270:
              pfVar27 = (float *)0x4;
            }
            else {
              if (uVar12 == 1) {
                lVar32 = *(longlong *)(pfVar13 + 2);
                pfVar27 = (float *)0x4;
                if (fVar64 != *(float *)(lVar32 + 0x20)) goto LAB_140823275;
                uVar30 = 0;
              }
              else {
                uVar30 = pdb_1400aede0(pfVar13 + 0xe,&fStack_188);
                uVar14 = pdb_141473860(pfStack_120,uVar30,&fStack_188);
                if ((uVar14 & 1) == 0) goto LAB_140823270;
                if (uVar12 <= uVar30) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar30,uVar12,&UNK_14330bc30);
                }
                lVar32 = *(longlong *)(pfStack_120 + 2);
                pfVar27 = (float *)0x4;
                if (lVar32 == 0) goto LAB_140823275;
              }
              pfVar27 = *(float **)(lVar32 + 8 + uVar30 * 0x28);
              auStack_1f8 = (undefined1  [8])
                            (pfVar27 + *(longlong *)(lVar32 + 0x10 + uVar30 * 0x28) * 2);
            }
LAB_140823275:
            lVar21 = lVar21 + 0x48;
            auStack_2f8._0_8_ = (longlong)*pauStack_108 + (ulonglong)(uint)fVar64;
            pauStack_270 = (undefined1 (*) [16])(pfVar13 + 0x12);
            uStack_428 = pfVar13 + 0x20;
            unaff_XMM7_Ba = SUB41(fVar73,0);
            unaff_XMM7_Bb = (undefined1)((uint)fVar73 >> 8);
            unaff_XMM7_Bc = (undefined1)((uint)fVar73 >> 0x10);
            unaff_XMM7_Bd = (undefined1)((uint)fVar73 >> 0x18);
            unaff_XMM7_Bi = 0;
            unaff_XMM7_Bj = 0;
            unaff_XMM7_Bk = 0;
            unaff_XMM7_Bm = 0;
            unaff_XMM7_Bn = 0;
            unaff_XMM7_Bo = 0;
            pbStack_1b8 = (byte *)((ulonglong)pbStack_1b8 & 0xffffffff00000000);
            pauVar16 = uStack_180;
LAB_140823480:
            lVar32 = lStack_200;
            uStack_180 = pauVar16;
            if ((lVar21 == 0) || (pfVar33 == pfStack_100)) {
              if ((undefined1  [8])pfVar27 == auStack_1f8) goto LAB_140823670;
              fVar10 = *pfVar27;
              fStack_188 = fVar10;
              if ((uint)fVar64 < (uint)fVar10) {
                fStack_188 = fVar64;
              }
              fStack_184 = fVar10;
              if ((uint)fVar10 < (uint)fVar64) {
                fStack_184 = fVar64;
              }
              uVar12 = *(ulonglong *)(pfStack_120 + 0x16);
              if (uVar12 == 1) {
                if ((fStack_188 != *(float *)(*(longlong *)(pfStack_120 + 0x14) + 8)) ||
                   (fStack_184 != *(float *)(*(longlong *)(pfStack_120 + 0x14) + 0xc)))
                goto LAB_140825348;
              }
              else {
                if (uVar12 == 0) {
LAB_140825348:
                  uStack_180 = pauVar16;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83b0(&UNK_14330bb30,0x28,&UNK_14330bbb8);
                }
                uVar30 = pdb_1400af680(uStack_428,&fStack_188);
                uVar14 = pdb_141473930(pauStack_270,uVar30,&fStack_188);
                pauVar16 = uStack_180;
                if ((uVar14 & 1) == 0) goto LAB_140825348;
                if (uVar12 <= uVar30) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar30,uVar12,&UNK_14330bc30);
                }
              }
              pfVar27 = pfVar27 + 2;
              uVar12 = (ulonglong)(uint)fVar64;
              lVar21 = 0;
            }
            else {
              fVar10 = *pfVar33;
              fVar63 = SUB84(pauStack_108,0);
              fStack_188 = fVar10;
              if ((uint)fVar63 < (uint)fVar10) {
                fStack_188 = fVar63;
              }
              fStack_184 = fVar10;
              if ((uint)fVar10 < (uint)fVar63) {
                fStack_184 = fVar63;
              }
              uVar12 = *(ulonglong *)(lVar21 + 0x10);
              if (uVar12 == 1) {
                if ((fStack_188 != *(float *)(*(longlong *)(lVar21 + 8) + 8)) ||
                   (fStack_184 != *(float *)(*(longlong *)(lVar21 + 8) + 0xc))) goto LAB_140825366;
              }
              else {
                if (uVar12 == 0) {
LAB_140825366:
                  uStack_180 = pauVar16;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83b0(&UNK_14330bb30,0x28,&UNK_14330bbb8);
                }
                uVar30 = pdb_1400af680(lVar21 + 0x38,&fStack_188);
                uVar14 = pdb_141473930(lVar21,uVar30,&fStack_188);
                pauVar16 = uStack_180;
                if ((uVar14 & 1) == 0) goto LAB_140825366;
                if (uVar12 <= uVar30) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar30,uVar12,&UNK_14330bc30);
                }
              }
              pfVar33 = pfVar33 + 2;
              uVar12 = (ulonglong)pauStack_108 & 0xffffffff;
            }
            uVar30 = (ulonglong)(uint)fVar10;
            uStack_180 = pauVar16;
            fVar10 = (float)pdb_140a61520(uVar12);
            fVar63 = (float)uVar30;
            fStack_188 = fVar10;
            fStack_184 = fVar63;
            pauVar16 = uStack_180;
            if (((fVar10 != *(float *)pauVar34[2]) ||
                (fVar63 != *(float *)((longlong)pauVar34[2] + 4))) && (plStack_128[3] != 0)) {
              uVar12 = pdb_1400af680(plStack_238,&fStack_188);
              lVar32 = *plStack_128;
              bVar38 = (byte)(uVar12 >> 0x39);
              auVar45 = ZEXT216(CONCAT11(bVar38,bVar38));
              auVar45 = pshuflw(auVar45,auVar45,0);
              lVar23 = 0;
              while( true ) {
                uVar12 = uVar12 & plStack_128[1];
                pcVar25 = (char *)(lVar32 + uVar12);
                auVar69[0] = -(*pcVar25 == auVar45[0]);
                auVar69[1] = -(pcVar25[1] == auVar45[1]);
                auVar69[2] = -(pcVar25[2] == auVar45[2]);
                auVar69[3] = -(pcVar25[3] == auVar45[3]);
                auVar69[4] = -(pcVar25[4] == auVar45[4]);
                auVar69[5] = -(pcVar25[5] == auVar45[5]);
                auVar69[6] = -(pcVar25[6] == auVar45[6]);
                auVar69[7] = -(pcVar25[7] == auVar45[7]);
                auVar69[8] = -(pcVar25[8] == auVar45[0]);
                auVar69[9] = -(pcVar25[9] == auVar45[1]);
                auVar69[10] = -(pcVar25[10] == auVar45[2]);
                auVar69[0xb] = -(pcVar25[0xb] == auVar45[3]);
                auVar69[0xc] = -(pcVar25[0xc] == auVar45[4]);
                auVar69[0xd] = -(pcVar25[0xd] == auVar45[5]);
                auVar69[0xe] = -(pcVar25[0xe] == auVar45[6]);
                auVar69[0xf] = -(pcVar25[0xf] == auVar45[7]);
                uVar29 = (ushort)(SUB161(auVar69 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar69[0xf] >> 7) << 0xf;
                uVar28 = (uint)uVar29;
                while (pauVar16 = uStack_180, uVar29 != 0) {
                  uVar5 = 0;
                  for (uVar6 = uVar28; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                    uVar5 = uVar5 + 1;
                  }
                  lVar31 = (uVar5 + uVar12 & plStack_128[1]) * -0x140;
                  if ((fVar10 == *(float *)(lVar32 + -0x140 + lVar31)) &&
                     (fVar63 == *(float *)(lVar32 + -0x13c + lVar31))) {
                    lVar23 = *(longlong *)(lVar32 + lVar31 + -0x80);
                    if (lVar23 == 0) goto LAB_140823480;
                    lVar23 = lVar23 + -1;
                    pfVar13 = *(float **)(lVar32 + lVar31 + -0x88);
                    if ((ulonglong)auStack_2f8._0_8_ <
                        (uVar30 & 0xffffffff) + (ulonglong)(uint)fVar10) {
                      fVar66 = *pfVar13 - fVar42;
                      fVar72 = (float)*(undefined8 *)(pfVar13 + lVar23 * 0xb) - fVar42;
                      fVar10 = pfVar13[1] - fVar73;
                      fVar63 = (float)((ulonglong)*(undefined8 *)(pfVar13 + lVar23 * 0xb) >> 0x20) -
                               fVar73;
                      auVar55._0_4_ = fVar10 * fVar10 + fVar66 * fVar66;
                      auVar55._4_4_ = fVar63 * fVar63 + fVar72 * fVar72;
                      auVar55._8_8_ = 0;
                      auVar45 = sqrtps(ZEXT416((uint)pfVar13[1]),auVar55);
                      iVar36 = -(uint)(auVar45._0_4_ < _DAT_143009bb0);
                      iVar37 = -(uint)(auVar45._4_4_ < _UNK_143009bb4);
                      auVar47._4_4_ = iVar37;
                      auVar47._0_4_ = iVar36;
                      auVar47._8_4_ = iVar37;
                      auVar47._12_4_ = iVar37;
                      auVar46._8_8_ = auVar47._8_8_;
                      auVar46._4_4_ = iVar36;
                      auVar46._0_4_ = iVar36;
                      iVar36 = movmskpd((int)pfVar13,auVar46);
                      pbStack_1b8 = (byte *)CONCAT44(pbStack_1b8._4_4_,
                                                     CONCAT31((int3)((ulonglong)pbStack_1b8 >> 8),
                                                              (byte)pbStack_1b8 | iVar36 != 0));
                      goto LAB_140823480;
                    }
                    fVar10 = *pfVar13 - fVar42;
                    if (_DAT_142e37ad4 <=
                        SQRT((pfVar13[1] - fVar73) * (pfVar13[1] - fVar73) + fVar10 * fVar10)) {
                      fVar10 = (float)*(undefined8 *)(pfVar13 + lVar23 * 0xb) - fVar42;
                      fVar63 = (float)((ulonglong)*(undefined8 *)(pfVar13 + lVar23 * 0xb) >> 0x20) -
                               fVar73;
                      if (_DAT_142e37ad4 <= SQRT(fVar63 * fVar63 + fVar10 * fVar10))
                      goto LAB_140823480;
                      pfVar13 = pfVar13 + lVar23 * 0xb;
                    }
                    fVar10 = pfVar13[2];
                    fVar63 = pfVar13[3];
                    fVar66 = fVar40;
                    if (fVar40 <= fVar10) {
                      fVar66 = fVar10;
                    }
                    fVar40 = (float)(~-(uint)NAN(fVar10) & (uint)fVar66 |
                                    -(uint)NAN(fVar10) & (uint)fVar40);
                    fVar10 = fVar41;
                    if (fVar63 <= fVar41) {
                      fVar10 = fVar63;
                    }
                    auVar48._0_4_ = ~-(uint)NAN(fVar63) & (uint)fVar10;
                    auVar48._4_4_ = 0;
                    auVar48._8_4_ = uVar115;
                    auVar48._12_4_ = uVar116;
                    auVar48 = auVar48 | ZEXT416(-(uint)NAN(fVar63) & (uint)fVar41);
                    fVar41 = auVar48._0_4_;
                    uVar115 = auVar48._8_4_;
                    uVar116 = auVar48._12_4_;
                    goto LAB_140823480;
                  }
                  uVar29 = (ushort)(uVar28 - 1) & (ushort)uVar28;
                  uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar29);
                }
                auVar54[0] = -(*pcVar25 == -1);
                auVar54[1] = -(pcVar25[1] == -1);
                auVar54[2] = -(pcVar25[2] == -1);
                auVar54[3] = -(pcVar25[3] == -1);
                auVar54[4] = -(pcVar25[4] == -1);
                auVar54[5] = -(pcVar25[5] == -1);
                auVar54[6] = -(pcVar25[6] == -1);
                auVar54[7] = -(pcVar25[7] == -1);
                auVar54[8] = -(pcVar25[8] == -1);
                auVar54[9] = -(pcVar25[9] == -1);
                auVar54[10] = -(pcVar25[10] == -1);
                auVar54[0xb] = -(pcVar25[0xb] == -1);
                auVar54[0xc] = -(pcVar25[0xc] == -1);
                auVar54[0xd] = -(pcVar25[0xd] == -1);
                auVar54[0xe] = -(pcVar25[0xe] == -1);
                auVar54[0xf] = -(pcVar25[0xf] == -1);
                if ((((((((((((((((SUB161(auVar54 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar54 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar54 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar54 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar54 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar54 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar54 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar54 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar54 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar54 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar54 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar54 >> 0x5f,0) & 1) != 0) || (SUB161(auVar54 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar54 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar54 >> 0x77,0) & 1) != 0) || auVar54[0xf] < '\0') break;
                uVar12 = uVar12 + lVar23 + 0x10;
                lVar23 = lVar23 + 0x10;
              }
            }
            goto LAB_140823480;
          }
          fVar42 = *(float *)*pauVar34;
          fVar52 = *(float *)((longlong)*pauVar34 + 4);
          fVar40 = *(float *)((longlong)*pauVar34 + 8);
          fVar41 = *(float *)((longlong)*pauVar34 + 0xc);
          uVar43 = *(undefined8 *)pauVar34[1];
          fVar65 = *(float *)((longlong)pauVar34[1] + 8);
          uVar112 = (undefined4)*(undefined8 *)((longlong)pauVar34[1] + 0xc);
          uVar113 = (undefined4)((ulonglong)*(undefined8 *)((longlong)pauVar34[1] + 0xc) >> 0x20);
          auStack_1e8._0_4_ = *(float *)((longlong)pauVar34[2] + 4);
          uStack_230 = CONCAT71(uStack_230._1_7_,*(undefined1 *)((longlong)pauVar34[2] + 8));
          if (lStack_200 == lStack_210) {
            pdb_142d8d940(&lStack_210);
            pauVar16 = uStack_180;
          }
          goto LAB_140822f90;
        }
      } while( true );
    }
    pauVar17 = pauVar34 + 2;
    if (*(longlong *)((longlong)pauVar34[1] + 8) != 0) {
      lVar32 = *(longlong *)pauVar34[1];
      *puStack_328 = uStack_1cc;
      if (plStack_128[3] != 0) {
        puVar11 = (undefined8 *)(lVar32 + 0x20);
        uStack_180 = pauVar16;
        uVar12 = pdb_1400af680(plStack_238,puVar11);
        lVar32 = *plStack_128;
        bVar38 = (byte)(uVar12 >> 0x39);
        auVar45 = ZEXT216(CONCAT11(bVar38,bVar38));
        auVar45 = pshuflw(auVar45,auVar45,0);
        uVar43 = *puVar11;
        lVar21 = 0;
        while( true ) {
          uVar12 = uVar12 & plStack_128[1];
          auVar49 = *(undefined1 (*) [16])(lVar32 + uVar12);
          auVar75[0] = -(auVar49[0] == auVar45[0]);
          auVar75[1] = -(auVar49[1] == auVar45[1]);
          auVar75[2] = -(auVar49[2] == auVar45[2]);
          auVar75[3] = -(auVar49[3] == auVar45[3]);
          auVar75[4] = -(auVar49[4] == auVar45[4]);
          auVar75[5] = -(auVar49[5] == auVar45[5]);
          auVar75[6] = -(auVar49[6] == auVar45[6]);
          auVar75[7] = -(auVar49[7] == auVar45[7]);
          auVar75[8] = -(auVar49[8] == auVar45[0]);
          auVar75[9] = -(auVar49[9] == auVar45[1]);
          auVar75[10] = -(auVar49[10] == auVar45[2]);
          auVar75[0xb] = -(auVar49[0xb] == auVar45[3]);
          auVar75[0xc] = -(auVar49[0xc] == auVar45[4]);
          auVar75[0xd] = -(auVar49[0xd] == auVar45[5]);
          auVar75[0xe] = -(auVar49[0xe] == auVar45[6]);
          auVar75[0xf] = -(auVar49[0xf] == auVar45[7]);
          uVar29 = (ushort)(SUB161(auVar75 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar75 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar75 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar75 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar75 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar75 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar75 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar75 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar75 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar75 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar75 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar75 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar75 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar75 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar75 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar75[0xf] >> 7) << 0xf;
          uVar28 = (uint)uVar29;
          while (uVar29 != 0) {
            uVar5 = 0;
            for (uVar6 = uVar28; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            uVar30 = uVar5 + uVar12 & plStack_128[1];
            lVar23 = uVar30 * -0x140;
            uVar3 = *(undefined8 *)(lVar32 + -0x140 + lVar23);
            auVar76._0_4_ = -(uint)((int)uVar3 == (int)uVar43);
            iVar78 = -(uint)((int)((ulonglong)uVar3 >> 0x20) == (int)((ulonglong)uVar43 >> 0x20));
            auVar76._4_4_ = auVar76._0_4_;
            auVar76._8_4_ = iVar78;
            auVar76._12_4_ = iVar78;
            iVar78 = movmskpd(-(int)uVar30,auVar76);
            if (iVar78 == 3) {
              pdb_1413e6c60(&fStack_188);
              lVar32 = lVar32 + lVar23;
              pauVar16 = uStack_180;
              if (*(longlong *)(lVar32 + -0x90) != 0) {
                pub_1406abac0(*(byte **)(lVar32 + -0x88),*(longlong *)(lVar32 + -0x90) * 0x2c,4);
                pauVar16 = uStack_180;
              }
              uStack_180._4_4_ = (float)((ulonglong)pauVar16 >> 0x20);
              uStack_180._0_4_ = SUB84(pauVar16,0);
              *(undefined8 **)(lVar32 + -0x80) = uStack_178;
              auVar9._4_4_ = fStack_184;
              auVar9._0_4_ = fStack_188;
              auVar9._8_4_ = (float)uStack_180;
              auVar9._12_4_ = uStack_180._4_4_;
              *(undefined1 (*) [16])(lVar32 + -0x90) = auVar9;
              goto LAB_140822eb4;
            }
            uVar29 = (ushort)(uVar28 - 1) & (ushort)uVar28;
            uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar29);
          }
          auVar68[0] = -(auVar49[0] == (char)iVar36);
          auVar68[1] = -(auVar49[1] == (char)((uint)iVar36 >> 8));
          auVar68[2] = -(auVar49[2] == (char)((uint)iVar36 >> 0x10));
          auVar68[3] = -(auVar49[3] == (char)((uint)iVar36 >> 0x18));
          auVar68[4] = -(auVar49[4] == (char)iVar37);
          auVar68[5] = -(auVar49[5] == (char)((uint)iVar37 >> 8));
          auVar68[6] = -(auVar49[6] == (char)((uint)iVar37 >> 0x10));
          auVar68[7] = -(auVar49[7] == (char)((uint)iVar37 >> 0x18));
          auVar68[8] = -(auVar49[8] == (char)iVar7);
          auVar68[9] = -(auVar49[9] == (char)((uint)iVar7 >> 8));
          auVar68[10] = -(auVar49[10] == (char)((uint)iVar7 >> 0x10));
          auVar68[0xb] = -(auVar49[0xb] == (char)((uint)iVar7 >> 0x18));
          auVar68[0xc] = -(auVar49[0xc] == (char)iVar8);
          auVar68[0xd] = -(auVar49[0xd] == (char)((uint)iVar8 >> 8));
          auVar68[0xe] = -(auVar49[0xe] == (char)((uint)iVar8 >> 0x10));
          auVar68[0xf] = -(auVar49[0xf] == (char)((uint)iVar8 >> 0x18));
          pauVar16 = uStack_180;
          if ((((((((((((((((SUB161(auVar68 >> 7,0) & 1) != 0 || (SUB161(auVar68 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar68 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar68 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar68 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar68 >> 0x2f,0) & 1) != 0) || (SUB161(auVar68 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar68 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar68 >> 0x47,0) & 1) != 0) || (SUB161(auVar68 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar68 >> 0x57,0) & 1) != 0) || (SUB161(auVar68 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar68 >> 0x67,0) & 1) != 0) || (SUB161(auVar68 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar68 >> 0x77,0) & 1) != 0) || auVar68[0xf] < '\0') break;
          uVar12 = uVar12 + lVar21 + 0x10;
          lVar21 = lVar21 + 0x10;
        }
      }
    }
  } while( true );
LAB_140823670:
  uVar12 = uStack_1a8;
  pauVar34 = pauStack_1b0;
  unaff_XMM7_Be = unaff_XMM7_Ba;
  unaff_XMM7_Bf = unaff_XMM7_Bb;
  unaff_XMM7_Bg = unaff_XMM7_Bc;
  unaff_XMM7_Bh = unaff_XMM7_Bd;
  unaff_XMM7_Bp = unaff_XMM7_Bl;
  if (((ulonglong)pbStack_1b8 & 1) == 0) {
    if (lStack_200 == lStack_210) {
      pdb_142d8d940(&lStack_210);
      unaff_XMM7_Bl = 0;
      unaff_XMM7_Bp = 0;
      pauVar16 = uStack_180;
    }
LAB_140822f90:
    lVar21 = lVar32 * 0x2c;
    pfVar33 = (float *)(pbStack_208 + lVar21);
    *pfVar33 = fVar42;
    pfVar33[1] = fVar52;
    pfVar33[2] = fVar40;
    pfVar33[3] = fVar41;
    *(undefined8 *)(pbStack_208 + lVar21 + 0x10) = uVar43;
    *(float *)(pbStack_208 + lVar21 + 0x18) = fVar65;
    *(ulonglong *)(pbStack_208 + lVar21 + 0x1c) = CONCAT44(uVar113,uVar112);
    *(undefined4 *)(pbStack_208 + lVar21 + 0x24) = auStack_1e8._0_4_;
    pbStack_208[lVar21 + 0x28] = (byte)uStack_230;
    lStack_200 = lVar32 + 1;
    uVar12 = uStack_1a8;
    pauVar34 = pauStack_1b0;
  }
  goto LAB_140822fe0;
}

