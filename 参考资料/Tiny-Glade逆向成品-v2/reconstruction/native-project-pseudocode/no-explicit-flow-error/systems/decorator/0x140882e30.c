// VA 0x140882e30, PDB extent 11176 bytes
// system_decorator::decorator_visual::chimney_wall::generate_wall_chimneys
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/chimney_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::chimney_wall::generate_wall_chimneys
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/chimney_wall.rs
   Extent: 11176 */

void pdb_140882e30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  float *pfVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [12];
  undefined3 uVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  code *pcVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  uint *puVar20;
  byte *pbVar21;
  int iVar22;
  undefined8 *puVar23;
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  longlong lVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  longlong lVar29;
  ulonglong uVar30;
  byte bVar31;
  undefined1 (*pauVar32) [16];
  undefined *puVar33;
  ulonglong uVar34;
  ushort uVar35;
  undefined8 *puVar36;
  undefined *puVar37;
  undefined8 *puVar38;
  longlong lVar39;
  byte bVar40;
  float fVar41;
  float fVar42;
  float extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar44;
  float fVar45;
  undefined1 auVar43 [16];
  float fVar46;
  float fVar47;
  float fVar49;
  float fVar50;
  undefined1 auVar48 [16];
  float fVar51;
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  undefined1 unaff_XMM6_Ba;
  undefined1 uVar57;
  undefined1 unaff_XMM6_Bb;
  char cVar58;
  undefined1 uVar59;
  undefined1 unaff_XMM6_Bc;
  char cVar60;
  undefined1 uVar61;
  undefined1 unaff_XMM6_Bd;
  char cVar62;
  undefined1 uVar63;
  undefined1 unaff_XMM6_Be;
  char cVar64;
  undefined1 uVar65;
  undefined1 unaff_XMM6_Bf;
  char cVar66;
  undefined1 uVar67;
  undefined1 unaff_XMM6_Bg;
  char cVar68;
  undefined1 uVar69;
  undefined1 unaff_XMM6_Bh;
  char cVar70;
  undefined1 uVar71;
  undefined1 unaff_XMM6_Bi;
  char cVar72;
  undefined1 uVar73;
  undefined1 unaff_XMM6_Bj;
  char cVar74;
  undefined1 uVar75;
  undefined1 unaff_XMM6_Bk;
  char cVar76;
  undefined1 uVar77;
  undefined1 unaff_XMM6_Bl;
  char cVar78;
  undefined1 uVar79;
  undefined1 unaff_XMM6_Bm;
  char cVar80;
  undefined1 unaff_XMM6_Bn;
  char cVar81;
  undefined1 uVar82;
  undefined1 unaff_XMM6_Bo;
  char cVar83;
  undefined1 uVar84;
  undefined1 unaff_XMM6_Bp;
  char cVar85;
  undefined1 uVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  undefined8 uStack_448;
  undefined8 uStack_440;
  ulonglong uStack_438;
  ulonglong uStack_430;
  byte *pbStack_428;
  ulonglong uStack_420;
  longlong lStack_418;
  undefined1 (*pauStack_410) [16];
  undefined8 uStack_408;
  undefined8 *puStack_400;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  undefined8 uStack_3e8;
  float fStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined8 uStack_3d0;
  undefined1 (*pauStack_3c0) [16];
  longlong lStack_3b8;
  undefined8 uStack_3b0;
  undefined4 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  ulonglong uStack_390;
  longlong lStack_388;
  byte *pbStack_380;
  undefined1 (*pauStack_378) [16];
  undefined8 uStack_370;
  undefined8 *puStack_368;
  undefined1 (*pauStack_360) [16];
  undefined8 uStack_358;
  longlong lStack_350;
  undefined8 uStack_348;
  float fStack_340;
  float fStack_33c;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  byte *pbStack_2d8;
  byte *pbStack_2d0;
  longlong lStack_2c0;
  longlong lStack_2b8;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  float fStack_2a4;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ulonglong uStack_290;
  ulonglong uStack_288;
  float *pfStack_280;
  longlong lStack_278;
  longlong lStack_270;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  undefined1 uStack_258;
  undefined1 uStack_257;
  undefined1 uStack_256;
  undefined1 uStack_255;
  float fStack_254;
  undefined1 uStack_250;
  undefined1 uStack_24f;
  undefined1 uStack_24e;
  undefined1 uStack_24d;
  byte bStack_24c;
  undefined1 uStack_24b;
  undefined1 uStack_24a;
  undefined1 uStack_249;
  float fStack_248;
  float fStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  byte bStack_238;
  undefined2 uStack_237;
  undefined4 uStack_235;
  uint uStack_231;
  undefined4 uStack_22d;
  undefined1 uStack_229;
  undefined8 uStack_228;
  longlong lStack_220;
  undefined8 uStack_218;
  undefined1 (*pauStack_210) [16];
  undefined8 uStack_208;
  ulonglong uStack_200;
  longlong lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  byte *pbStack_1b8;
  byte *pbStack_1b0;
  undefined8 *puStack_1a8;
  code *pcStack_198;
  byte *pbStack_190;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  int iStack_170;
  undefined4 uStack_16c;
  undefined1 (*pauStack_168) [16];
  longlong lStack_160;
  undefined8 uStack_158;
  float fStack_150;
  float fStack_14c;
  ulonglong uStack_140;
  float fStack_134;
  byte bStack_130;
  undefined1 uStack_12f;
  uint5 uStack_12e;
  undefined1 uStack_129;
  undefined7 uStack_128;
  undefined1 uStack_121;
  longlong lStack_120;
  undefined8 uStack_118;
  float fStack_110;
  float fStack_10c;
  longlong *plStack_100;
  byte bStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puVar23 = param_2;
  cVar6 = pdb_140e94b40();
  if (cVar6 == '\0') {
    lStack_2c0 = 0;
    if (*_DAT_143ca4500 != '\0') {
      return;
    }
LAB_140883139:
    uStack_408 = pdb_140c47770(param_1);
    puStack_400 = puVar23;
    uStack_370 = uStack_408;
    puStack_368 = puVar23;
    pdb_140c41140(&bStack_238,*param_2);
    bStack_f3 = bStack_238;
    lVar13 = CONCAT17(uStack_229,CONCAT43(uStack_22d,uStack_231._1_3_));
    uStack_288 = uStack_200 & 0xffff;
    uStack_358 = *param_3;
    uStack_2ac = *(undefined4 *)((longlong)param_5 + 0x1c);
    uStack_3b0 = *param_5;
    puStack_3a8 = (undefined4 *)param_5[2];
    uStack_3a0 = *param_6;
    uStack_398 = *param_4;
    iVar22 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                              CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                    CONCAT13(unaff_XMM6_Bd,
                             CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
    cVar6 = (char)iVar22;
    cVar58 = (char)((uint)iVar22 >> 8);
    cVar60 = (char)((uint)iVar22 >> 0x10);
    cVar62 = (char)((uint)iVar22 >> 0x18);
    iVar22 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                              CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                    CONCAT13(unaff_XMM6_Bh,
                             CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
    cVar64 = (char)iVar22;
    cVar66 = (char)((uint)iVar22 >> 8);
    cVar68 = (char)((uint)iVar22 >> 0x10);
    cVar70 = (char)((uint)iVar22 >> 0x18);
    iVar22 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                              CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                    CONCAT13(unaff_XMM6_Bl,
                             CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
    cVar72 = (char)iVar22;
    cVar74 = (char)((uint)iVar22 >> 8);
    cVar76 = (char)((uint)iVar22 >> 0x10);
    cVar78 = (char)((uint)iVar22 >> 0x18);
    iVar22 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                              CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                    CONCAT13(unaff_XMM6_Bp,
                             CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
    cVar80 = (char)iVar22;
    cVar81 = (char)((uint)iVar22 >> 8);
    cVar83 = (char)((uint)iVar22 >> 0x10);
    cVar85 = (char)((uint)iVar22 >> 0x18);
    pcVar16 = uStack_228;
    lVar39 = lStack_1f8;
    pauVar24 = pauStack_210;
    pauVar25 = pauStack_210;
    lVar26 = lStack_220;
    lVar29 = lVar13;
    uVar14 = uStack_218;
    lVar17 = lStack_220;
    if (uStack_228 == (code *)0x2) goto LAB_140883348;
LAB_14088320c:
    pcStack_198 = pcVar16;
    pauVar25 = pauVar24;
    if (uVar14 != 0) {
      if (lVar39 == 0) {
        lVar39 = 0;
      }
      else {
        uVar30 = uStack_288;
        if ((short)uStack_288 == 0) {
          do {
            auVar43 = *pauVar24;
            uVar14 = uVar14 - 0x980;
            pauVar24 = pauVar24 + 1;
            uVar9 = (ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar43[0xf] >> 7) << 0xf) ^ 0xffff;
            uVar30 = (ulonglong)uVar9;
          } while (uVar9 == 0);
        }
        uVar9 = 0;
        uVar10 = (uint)uVar30;
        for (uVar11 = uVar10; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        pauStack_168 = pauVar24;
        uStack_140 = uVar14;
        lVar17 = pdb_140c44590(uVar14 + (ulonglong)uVar9 * -0x98 + -0x98);
        uStack_288 = (ulonglong)(uVar10 - 1 & uVar10);
        lVar39 = lVar39 + -1;
        pauVar25 = pauStack_168;
        if (lVar17 != 3) {
          lVar29 = uStack_140 + (ulonglong)uVar9 * -0x98 + -0x90;
          pauStack_360 = pauVar24;
          lStack_278 = lVar39;
          lStack_270 = lVar13;
          lStack_160 = lVar26;
          goto LAB_14088338e;
        }
      }
    }
    lVar29 = lVar13;
    if (pcStack_198 != (code *)0x1) {
      uVar14 = 0;
      lVar17 = lVar26;
      goto LAB_140883348;
    }
    lStack_160 = 0;
    uVar14 = 0;
    lVar17 = lStack_160;
    if (lVar26 == 0) goto LAB_140883348;
    pcStack_198 = (code *)0x1;
    uStack_140 = 0;
    lStack_160 = 0;
    lVar17 = 1;
    lVar29 = lVar26;
    lStack_278 = lVar39;
    lStack_270 = lVar13;
    pauStack_168 = pauVar25;
LAB_14088338e:
    do {
      pauStack_410 = pauStack_360;
      lStack_418 = lVar17;
      lStack_3b8 = lVar17;
      lStack_388 = lVar29;
      pdb_140c3ba10(&bStack_238,lVar29);
      lVar13 = CONCAT17((undefined1)uStack_231,CONCAT43(uStack_235,CONCAT21(uStack_237,bStack_238)))
      ;
      pauVar25 = (undefined1 (*) [16])CONCAT17(uStack_229,CONCAT43(uStack_22d,uStack_231._1_3_));
      uVar9 = (uint)(ushort)lStack_220;
      pauStack_378 = pauStack_210;
      pauStack_3c0 = pauStack_210 + 5;
      uVar14 = uStack_218;
LAB_1408833eb:
      pauVar24 = pauStack_378;
      if (uVar14 != 0) {
        if ((short)uVar9 == 0) {
          do {
            auVar43 = *pauVar25;
            lVar13 = lVar13 + -0x40;
            pauVar25 = pauVar25 + 1;
            uVar9 = (ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar43[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar9 == 0);
        }
        iVar22 = 0;
        for (uVar11 = uVar9; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          iVar22 = iVar22 + 1;
        }
        iVar22 = *(int *)((lVar13 - (ulonglong)(uint)(iVar22 << 2)) + -4);
        bStack_238 = (byte)iVar22;
        uStack_237 = (undefined2)((uint)iVar22 >> 8);
        uStack_235._0_1_ = (undefined1)((uint)iVar22 >> 0x18);
        if (*(longlong *)(pauStack_378[4] + 8) != 0) {
          uVar9 = uVar9 - 1 & uVar9;
          uVar14 = uVar14 - 1;
          uVar18 = pdb_1400aede0(pauStack_3c0,&bStack_238);
          lVar39 = *(longlong *)pauVar24[3];
          uVar30 = *(ulonglong *)(pauVar24[3] + 8);
          bVar40 = (byte)(uVar18 >> 0x39);
          auVar43 = ZEXT216(CONCAT11(bVar40,bVar40));
          auVar43 = pshuflw(auVar43,auVar43,0);
          lVar26 = 0;
          while( true ) {
            uVar18 = uVar18 & uVar30;
            auVar54 = *(undefined1 (*) [16])(lVar39 + uVar18);
            auVar53[0] = -(auVar54[0] == auVar43[0]);
            auVar53[1] = -(auVar54[1] == auVar43[1]);
            auVar53[2] = -(auVar54[2] == auVar43[2]);
            auVar53[3] = -(auVar54[3] == auVar43[3]);
            auVar53[4] = -(auVar54[4] == auVar43[4]);
            auVar53[5] = -(auVar54[5] == auVar43[5]);
            auVar53[6] = -(auVar54[6] == auVar43[6]);
            auVar53[7] = -(auVar54[7] == auVar43[7]);
            auVar53[8] = -(auVar54[8] == auVar43[0]);
            auVar53[9] = -(auVar54[9] == auVar43[1]);
            auVar53[10] = -(auVar54[10] == auVar43[2]);
            auVar53[0xb] = -(auVar54[0xb] == auVar43[3]);
            auVar53[0xc] = -(auVar54[0xc] == auVar43[4]);
            auVar53[0xd] = -(auVar54[0xd] == auVar43[5]);
            auVar53[0xe] = -(auVar54[0xe] == auVar43[6]);
            auVar53[0xf] = -(auVar54[0xf] == auVar43[7]);
            uVar35 = (ushort)(SUB161(auVar53 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar53[0xf] >> 7) << 0xf;
            uVar11 = (uint)uVar35;
            while (uVar35 != 0) {
              uVar10 = 0;
              for (uVar3 = uVar11; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
                uVar10 = uVar10 + 1;
              }
              lVar29 = (uVar10 + uVar18 & uVar30) * -0x68;
              if (iVar22 == *(int *)(lVar39 + -0x68 + lVar29)) {
                uStack_158 = (longlong *)CONCAT44(uStack_158._4_4_,iVar22);
                cVar7 = pdb_140c45920(&uStack_408,iVar22);
                if (1 < (byte)(cVar7 - 0x13U)) goto LAB_1408833eb;
                lVar39 = lVar39 + lVar29;
                uVar8 = *(undefined1 *)(lVar39 + -8);
                pdb_140c45ec0(&fStack_268,uStack_358,(ulonglong)uStack_158 & 0xffffffff,
                              &UNK_143011178);
                *puStack_3a8 = uStack_2ac;
                plStack_100 = (longlong *)
                              pdb_1408f3750(uStack_3b0,(ulonglong)uStack_158 & 0xffffffff,lStack_3b8
                                            ,pauStack_360,uVar8);
                uStack_2a0 = 0;
                uStack_298 = 4;
                uStack_290 = 0;
                pbStack_190 = (byte *)CONCAT44(pbStack_190._4_4_,*(undefined4 *)(lVar39 + -0x10));
                uStack_f1 = 1;
                uStack_390 = uVar14;
                uStack_f2 = uVar8;
                pfStack_280 = (float *)pdb_1409013a0(lVar39 + -0x28,&UNK_143011190);
                fVar94 = fStack_254;
                fVar91 = fStack_25c;
                fVar95 = fStack_260;
                fVar99 = fStack_264;
                fVar41 = fStack_268;
                uStack_228 = (code *)CONCAT44(fStack_254,
                                              CONCAT13(uStack_255,
                                                       CONCAT12(uStack_256,
                                                                CONCAT11(uStack_257,uStack_258))));
                lStack_220 = CONCAT17(uStack_249,
                                      CONCAT16(uStack_24a,
                                               CONCAT15(uStack_24b,
                                                        CONCAT14(bStack_24c,
                                                                 CONCAT13(uStack_24d,
                                                                          CONCAT12(uStack_24e,
                                                                                   CONCAT11(
                                                  uStack_24f,uStack_250)))))));
                uStack_218 = CONCAT44(fStack_244,fStack_248);
                pauStack_210 = (undefined1 (*) [16])CONCAT44(uStack_23c,uStack_240);
                bStack_238 = SUB41(fStack_268,0);
                uStack_237 = (undefined2)((uint)fStack_268 >> 8);
                uStack_235 = (undefined4)(CONCAT44(fStack_264,fStack_268) >> 0x18);
                uVar8 = (undefined1)((uint)fStack_264 >> 0x18);
                uStack_231._1_3_ = SUB43(fStack_260,0);
                uStack_231 = CONCAT31(uStack_231._1_3_,uVar8);
                uStack_22d = (undefined4)(CONCAT44(fStack_25c,fStack_260) >> 0x18);
                uStack_229 = (undefined1)((uint)fStack_25c >> 0x18);
                if (*plStack_100 != 0 || plStack_100[1] != 0) {
                  uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83d0(&UNK_14301ce21,0x17,&UNK_14301ce30);
                }
                plStack_100[1] = 0;
                *plStack_100 = 1;
                plStack_100[2] = CONCAT17(uVar8,CONCAT43(uStack_235,SUB43(fStack_268,0)));
                plStack_100[3] = CONCAT17(uStack_229,CONCAT43(uStack_22d,uStack_231._1_3_));
                plStack_100[4] = (longlong)uStack_228;
                plStack_100[5] = lStack_220;
                plStack_100[6] = uStack_218;
                plStack_100[7] = (longlong)pauStack_210;
                if (cVar7 != '\x13') {
                  fVar45 = (float)CONCAT13(uStack_255,
                                           CONCAT12(uStack_256,CONCAT11(uStack_257,uStack_258)));
                  fStack_188 = (float)CONCAT13(uStack_249,
                                               CONCAT12(uStack_24a,CONCAT11(uStack_24b,bStack_24c)))
                  ;
                  fStack_184 = fStack_248;
                  fStack_180 = fStack_244;
                  fVar42 = fStack_260 * fStack_260;
                  fVar44 = fStack_25c * fStack_25c;
                  fVar87 = fStack_264 * fStack_264 + fStack_268 * fStack_268;
                  fVar88 = fVar44 - (fVar87 + fVar42);
                  fVar89 = fVar44 - (fVar87 + fVar42);
                  fVar90 = fVar44 - (fVar87 + fVar42);
                  fVar100 = fVar88 * _DAT_14300bbd0;
                  fVar49 = fVar89 * _UNK_14300bbd4;
                  fVar51 = (fVar44 - (fVar87 + fVar42)) * _UNK_14300bbdc;
                  fVar46 = fStack_260 * _UNK_14300bbd8 +
                           fStack_264 * _UNK_14300bbd4 + fStack_268 * _DAT_14300bbd0;
                  fVar46 = fVar46 + fVar46;
                  fVar55 = fVar46 * fStack_268;
                  fVar56 = fVar46 * fStack_264;
                  fVar92 = fVar46 * fStack_25c;
                  uStack_118 = (byte *)CONCAT44(fStack_268,fStack_260);
                  fStack_110 = fStack_264;
                  fStack_10c = fStack_25c;
                  fVar47 = fStack_260 * _DAT_14300bbd0;
                  fVar50 = fStack_264 * _UNK_14300bbd8;
                  fVar52 = fStack_25c * _UNK_14300bbdc;
                  fVar96 = fStack_268 * _DAT_143010fa0;
                  fVar97 = fStack_260 * _UNK_143010fa8;
                  fVar98 = fStack_25c * _UNK_143010fac;
                  fVar87 = fStack_268 + fStack_268;
                  fVar42 = fStack_264 + fStack_264;
                  fVar44 = fStack_25c + fStack_25c;
                  fVar46 = (fStack_264 * _UNK_143010fa4 + fStack_268 * _UNK_14300bbd4) * fVar44 +
                           fVar46 * fStack_260 + fVar90 * _UNK_14300bbd8;
                  fVar93 = fVar46 + (float)CONCAT13(uStack_24d,
                                                    CONCAT12(uStack_24e,
                                                             CONCAT11(uStack_24f,uStack_250)));
                  uVar19 = CONCAT44(uStack_23c,uStack_240);
                  plVar15 = plStack_100 + 0x16;
                  uVar5 = CONCAT12(uStack_24a,CONCAT11(uStack_24b,bStack_24c));
                  bStack_238 = bStack_24c;
                  uStack_237 = (undefined2)((uint3)uVar5 >> 8);
                  uStack_235 = (undefined4)(CONCAT44(fStack_248,CONCAT13(uStack_249,uVar5)) >> 0x18)
                  ;
                  uStack_231._0_1_ = (undefined1)((uint)fStack_248 >> 0x18);
                  uStack_231._1_3_ = SUB43(fStack_244,0);
                  uStack_22d = (undefined4)(CONCAT44(uStack_240,fStack_244) >> 0x18);
                  uStack_229 = (undefined1)((uint)uStack_240 >> 0x18);
                  uStack_228 = (code *)CONCAT44(fStack_254,uStack_23c);
                  fStack_33c = (float)((uint)fStack_33c & 0xff000000);
                  uStack_348._0_4_ = (float)((uint)(float)uStack_348 & 0xffffff);
                  uStack_348._4_4_ = 0.0;
                  fStack_340 = 0.0;
                  uStack_128 = 0;
                  bStack_130 = SUB41((float)uStack_348,0);
                  uStack_12f = (undefined1)((uint)(float)uStack_348 >> 8);
                  uStack_12e = (uint5)(ushort)((uint)(float)uStack_348 >> 0x10);
                  uStack_129 = 0;
                  lVar39 = plStack_100[0x18];
                  if (lVar39 == plStack_100[0x16]) {
                    uStack_f1 = 1;
                    pdb_142d8ddd0(plVar15);
                  }
                  fVar45 = fVar45 + (fVar97 + fVar50) * fVar44 + fVar55 + fVar100;
                  fVar94 = fVar94 + (fVar96 + fVar47) * fVar44 + fVar56 + fVar49;
                  fVar46 = fVar46 + 0.0;
                  fVar55 = (fVar98 + fVar52) * fVar44 + fVar92 + fVar51 + 0.0;
                  lVar26 = plStack_100[0x17];
                  lVar29 = lVar39 * 0x170;
                  *(undefined8 *)(lVar26 + lVar29) = 0;
                  *(undefined8 *)(lVar26 + 0x10 + lVar29) = 0;
                  *(undefined8 *)(lVar26 + 0x20 + lVar29) = 0;
                  *(undefined8 *)(lVar26 + 0x30 + lVar29) = 0;
                  *(undefined4 *)(lVar26 + 0x40 + lVar29) = 0;
                  *(undefined4 *)(lVar26 + 0x50 + lVar29) = 0;
                  *(undefined4 *)(lVar26 + 0x60 + lVar29) = 0;
                  *(undefined4 *)(lVar26 + 0x70 + lVar29) = 2;
                  *(undefined **)(lVar26 + 0x90 + lVar29) = &UNK_143011238;
                  *(undefined8 *)(lVar26 + 0x98 + lVar29) = 0x14;
                  *(undefined **)(lVar26 + 0xa0 + lVar29) = &UNK_14330daf5;
                  *(undefined8 *)(lVar26 + 0xa8 + lVar29) = 0x16;
                  pfVar1 = (float *)(lVar26 + 0xb0 + lVar29);
                  *pfVar1 = fVar41;
                  pfVar1[1] = fVar99;
                  pfVar1[2] = fVar95;
                  pfVar1[3] = fVar91;
                  *(ulonglong *)(lVar26 + 0xc0 + lVar29) = CONCAT44(fVar94,fVar45);
                  *(float *)(lVar26 + 200 + lVar29) = fVar93;
                  puVar23 = (undefined8 *)(lVar26 + 0xcc + lVar29);
                  *puVar23 = CONCAT17((undefined1)uStack_231,
                                      CONCAT43(uStack_235,CONCAT21(uStack_237,bStack_238)));
                  puVar23[1] = CONCAT17(uStack_229,CONCAT43(uStack_22d,uStack_231._1_3_));
                  *(undefined4 *)(lVar26 + 0xdc + lVar29) = (undefined4)uStack_228;
                  *(undefined4 *)(lVar26 + 0xe0 + lVar29) = 0;
                  *(undefined4 *)(lVar26 + 0xe8 + lVar29) = 0;
                  *(undefined1 *)(lVar26 + 0x105 + lVar29) = 2;
                  *(undefined4 *)(lVar26 + 0x108 + lVar29) = 0;
                  *(undefined1 *)(lVar26 + 0x15c + lVar29) = 2;
                  *(ulonglong *)(lVar26 + 0x164 + lVar29) = CONCAT71(uStack_128,uStack_129);
                  *(ulonglong *)(lVar26 + 0x15d + lVar29) =
                       CONCAT17(uStack_129,CONCAT52(uStack_12e,CONCAT11(uStack_12f,bStack_130)));
                  *(undefined1 *)(lVar26 + 0x16c + lVar29) = 2;
                  *(undefined1 *)(lVar26 + 0x16e + lVar29) = uStack_f2;
                  *(undefined1 *)(lVar26 + 0x16f + lVar29) = 0;
                  plStack_100[0x18] = lVar39 + 1;
                  uStack_f1 = 1;
                  lVar39 = pdb_140a2b210(uStack_3a0,&UNK_14301124c,0x1e);
                  uStack_158 = (longlong *)CONCAT44(fVar94,fVar45);
                  fStack_150 = fVar46;
                  fStack_14c = fVar55;
                  if (lVar39 == 0) {
                    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_143011270);
                  }
                  fVar55 = fVar95 + fVar95;
                  fVar46 = fVar41 * fVar87;
                  fVar87 = fVar87 * fVar91;
                  uStack_348._0_4_ =
                       fStack_188 * (_DAT_142e36f28 - (fVar99 * fVar42 + fVar95 * fVar55));
                  uStack_348._4_4_ = fStack_188 * (fVar41 * fVar42 + fVar55 * fVar91);
                  fStack_340 = fStack_188 * (fVar41 * fVar55 - fVar42 * fVar91);
                  fStack_33c = fStack_188 * 0.0;
                  uStack_338 = CONCAT44(fStack_184 * (_DAT_142e36f28 - (fVar95 * fVar55 + fVar46)),
                                        fStack_184 * (fVar41 * fVar42 - fVar55 * fVar91));
                  uStack_330 = (undefined1 (*) [16])
                               CONCAT44(fStack_184 * 0.0,fStack_184 * (fVar99 * fVar55 + fVar87));
                  uStack_328 = CONCAT44(fStack_180 * (fVar99 * fVar55 - fVar87),
                                        fStack_180 * (fVar42 * fVar91 + fVar41 * fVar55));
                  uStack_320 = CONCAT44(fStack_180 * 0.0,
                                        fStack_180 * (_DAT_142e36f28 - (fVar46 + fVar99 * fVar42)));
                  fStack_30c = _DAT_142e36f28;
                  uStack_f1 = 1;
                  fStack_318 = fVar45;
                  fStack_314 = fVar94;
                  fStack_310 = fVar93;
                  pdb_140a96d60(&bStack_130,lVar39);
                  pbStack_1b8 = (byte *)CONCAT17(uStack_121,uStack_128);
                  pbStack_1b0 = pbStack_1b8 + lStack_120 * 0x24;
                  bStack_238 = 0;
                  uStack_237 = 0;
                  uStack_235 = 0;
                  uStack_231 = (uint)uStack_231._1_3_ << 8;
                  lStack_1f8 = 0;
                  puStack_1a8 = &uStack_348;
                  pbStack_190 = pbStack_1b8;
                  pdb_141496790(&uStack_2a0,&bStack_238);
                  lVar39 = CONCAT17(uStack_129,CONCAT52(uStack_12e,CONCAT11(uStack_12f,bStack_130)))
                  ;
                  if (lVar39 != 0) {
                    pub_1406abac0(pbStack_190,lVar39 * 0x24,4);
                  }
                  fVar87 = fVar41 * _DAT_143010fc0;
                  uVar57 = SUB41(fVar87,0);
                  uVar59 = (undefined1)((uint)fVar87 >> 8);
                  uVar61 = (undefined1)((uint)fVar87 >> 0x10);
                  uVar63 = (undefined1)((uint)fVar87 >> 0x18);
                  fVar42 = fVar99 * _UNK_143010fc4;
                  uVar65 = SUB41(fVar42,0);
                  uVar67 = (undefined1)((uint)fVar42 >> 8);
                  uVar69 = (undefined1)((uint)fVar42 >> 0x10);
                  uVar71 = (undefined1)((uint)fVar42 >> 0x18);
                  fVar46 = fVar95 * _UNK_143010fc8;
                  uVar73 = SUB41(fVar46,0);
                  uVar75 = (undefined1)((uint)fVar46 >> 8);
                  uVar77 = (undefined1)((uint)fVar46 >> 0x10);
                  uVar79 = (undefined1)((uint)fVar46 >> 0x18);
                  fVar55 = fVar91 * _UNK_143010fcc;
                  bVar40 = SUB41(fVar55,0);
                  uVar82 = (undefined1)((uint)fVar55 >> 8);
                  uVar84 = (undefined1)((uint)fVar55 >> 0x10);
                  uVar86 = (undefined1)((uint)fVar55 >> 0x18);
                  fStack_188 = (float)_DAT_142e36f60;
                  fStack_184 = (float)((ulonglong)_DAT_142e36f60 >> 0x20);
                  fStack_180 = 0.5;
                  uStack_22d = 0;
                  uStack_235 = 0;
                  uStack_231 = 0;
                  uVar8 = *(undefined1 *)(pfStack_280 + 1);
                  uStack_128 = 0;
                  bStack_130 = bStack_238;
                  uStack_12f = (undefined1)uStack_237;
                  uStack_12e = (uint5)(byte)((ushort)uStack_237 >> 8);
                  uStack_129 = 0;
                  lVar39 = plStack_100[0x18];
                  if (lVar39 == plStack_100[0x16]) {
                    uStack_f1 = 1;
                    pdb_142d8ddd0(plVar15);
                  }
                  fVar88 = fVar88 * _DAT_143010fb0;
                  fVar89 = fVar89 * _UNK_143010fb4;
                  fVar90 = fVar90 * _UNK_143010fb8;
                  fVar55 = fVar95 * _UNK_143010fb8 +
                           fVar99 * _UNK_143010fb4 + fVar41 * _DAT_143010fb0;
                  fVar55 = fVar55 + fVar55;
                  fVar56 = (float)uStack_118 * _DAT_143010fb0;
                  fVar92 = uStack_118._4_4_ * _UNK_143010fb4;
                  fVar100 = fStack_110 * _UNK_143010fb8;
                  lVar26 = plStack_100[0x17];
                  lVar29 = lVar39 * 0x170;
                  *(undefined8 *)(lVar26 + lVar29) = 0;
                  *(undefined8 *)(lVar26 + 0x10 + lVar29) = 0;
                  *(undefined8 *)(lVar26 + 0x20 + lVar29) = 0;
                  *(undefined8 *)(lVar26 + 0x30 + lVar29) = 0;
                  *(undefined4 *)(lVar26 + 0x40 + lVar29) = 0;
                  *(undefined4 *)(lVar26 + 0x50 + lVar29) = 0;
                  *(undefined4 *)(lVar26 + 0x60 + lVar29) = 0;
                  *(undefined4 *)(lVar26 + 0x70 + lVar29) = 2;
                  *(undefined8 *)(lVar26 + 0x90 + lVar29) = 1;
                  *(undefined8 *)(lVar26 + 0x98 + lVar29) = 0;
                  *(undefined **)(lVar26 + 0xa0 + lVar29) = &UNK_14330db80;
                  *(undefined8 *)(lVar26 + 0xa8 + lVar29) = 0x17;
                  pfVar1 = (float *)(lVar26 + 0xb0 + lVar29);
                  *pfVar1 = fVar41;
                  pfVar1[1] = fVar99;
                  pfVar1[2] = fVar95;
                  pfVar1[3] = fVar91;
                  *(ulonglong *)(lVar26 + 0xc0 + lVar29) =
                       CONCAT44(fVar94 + fVar44 * (fVar56 + fVar87) + fVar55 * fVar99 + fVar89,
                                fVar45 + fVar44 * (fVar100 + fVar46) + fVar55 * fVar41 + fVar88);
                  *(float *)(lVar26 + 200 + lVar29) =
                       fVar44 * (fVar92 + fVar42) + fVar55 * fVar95 + fVar90 + fVar93;
                  *(ulonglong *)(lVar26 + 0xcc + lVar29) = CONCAT44(fStack_184,fStack_188);
                  *(float *)(lVar26 + 0xd4 + lVar29) = fStack_180;
                  *(undefined8 *)(lVar26 + 0xd8 + lVar29) = uVar19;
                  *(undefined4 *)(lVar26 + 0xe0 + lVar29) = 0;
                  *(undefined4 *)(lVar26 + 0xe8 + lVar29) = 0;
                  *(undefined1 *)(lVar26 + 0x105 + lVar29) = 2;
                  *(undefined4 *)(lVar26 + 0x108 + lVar29) = 0;
                  *(undefined1 *)(lVar26 + 0x15c + lVar29) = 2;
                  *(ulonglong *)(lVar26 + 0x164 + lVar29) = CONCAT71(uStack_128,uStack_129);
                  *(ulonglong *)(lVar26 + 0x15d + lVar29) =
                       CONCAT17(uStack_129,CONCAT52(uStack_12e,CONCAT11(uStack_12f,bStack_130)));
                  *(undefined1 *)(lVar26 + 0x16c + lVar29) = 1;
                  *(undefined1 *)(lVar26 + 0x16d + lVar29) = uVar8;
                  *(undefined1 *)(lVar26 + 0x16e + lVar29) = uStack_f2;
                  *(undefined1 *)(lVar26 + 0x16f + lVar29) = 0;
                  plStack_100[0x18] = lVar39 + 1;
                  goto LAB_14088498c;
                }
                uStack_f1 = 1;
                uVar19 = pdb_140c413f0(&lStack_418);
                uStack_f1 = 1;
                uStack_118 = (byte *)pdb_140b54f80(uStack_398,uVar19,&UNK_1430111a8);
                if (uStack_118 == (byte *)0x0) {
                  uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_1430111c0);
                }
                uStack_f1 = 1;
                fVar41 = (float)pdb_140930390();
                uStack_f1 = 1;
                lVar26 = pdb_140901130(lVar39 + -0x60,&UNK_1430111d8);
                lVar39 = *(longlong *)(uStack_118 + 0x48);
                if (lVar39 == 1) {
                  uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_143314ab0);
                }
                if (lVar39 == 0) {
                  uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83b0(&UNK_143314a68,0x2d,&UNK_143314a98);
                }
                fVar99 = *(float *)(lVar26 + 4);
                uVar19 = *(undefined8 *)(uStack_118 + 0x40);
                bStack_238 = (byte)uVar19;
                uStack_237 = (undefined2)((ulonglong)uVar19 >> 8);
                uStack_235 = (undefined4)((ulonglong)uVar19 >> 0x18);
                uStack_231._0_1_ = (undefined1)((ulonglong)uVar19 >> 0x38);
                uStack_231._1_3_ = (uint3)lVar39;
                uStack_22d = (undefined4)((ulonglong)lVar39 >> 0x18);
                uStack_229 = (undefined1)((ulonglong)lVar39 >> 0x38);
                uStack_228 = pdb_140ade410;
                lStack_220 = 0;
                uStack_218 = 0;
                uStack_f1 = 1;
                pdb_1414d3b90(&bStack_238);
                uVar18 = uStack_218 & 0xffffffff;
                uVar30 = *(ulonglong *)(uStack_118 + 0x48);
                if (uVar30 <= uVar18) {
                  uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar18,uVar30,&UNK_14330d718);
                }
                uVar34 = uVar18 + 1;
                if (uVar30 <= uVar34) {
                  uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar34,uVar30,&UNK_14330d730);
                }
                lVar39 = *(longlong *)(uStack_118 + 0x40);
                fVar87 = _DAT_142e36f28 - uStack_218._4_4_;
                fVar95 = *(float *)(lVar39 + 4 + uVar18 * 0xc);
                fVar91 = uStack_218._4_4_ * *(float *)(lVar39 + 4 + uVar34 * 0xc);
                fVar41 = fVar41 - fVar99;
                fVar94 = 0.0;
                if (fVar41 <= 0.0) {
                  fVar41 = 0.0;
                }
                fVar41 = fVar41 + _DAT_142e3788c;
                fVar100 = *pfStack_280 + fVar41;
                fStack_244 = 0.85;
                fVar45 = fStack_260 * fStack_260;
                fVar46 = fStack_25c * fStack_25c;
                fVar55 = fStack_264 * fStack_264 + fStack_268 * fStack_268;
                fVar42 = fVar46 - (fVar55 + fVar45);
                fVar44 = fVar46 - (fVar55 + fVar45);
                fVar46 = fVar46 - (fVar55 + fVar45);
                fVar55 = fStack_260 * _UNK_143010fd8 +
                         fStack_264 * _UNK_143010fd4 + fStack_268 * _DAT_143010fd0;
                fVar55 = fVar55 + fVar55;
                fVar45 = fStack_25c + fStack_25c;
                fVar56 = fStack_260 * _UNK_143010ff8 +
                         fStack_264 * _UNK_143010ff4 + fStack_268 * _DAT_143010ff0;
                fVar56 = fVar56 + fVar56;
                fVar92 = fVar100 * _DAT_142e36f50;
                auVar43._0_4_ =
                     (fStack_260 * _UNK_143010fe8 + fStack_264 * _UNK_143010fd8) * fVar45 +
                     fVar55 * fStack_268 + fVar42 * _DAT_143010fd0 +
                     (float)CONCAT13(uStack_255,CONCAT12(uStack_256,CONCAT11(uStack_257,uStack_258))
                                    );
                auVar43._4_4_ =
                     (fStack_268 * _DAT_143010fe0 + fStack_260 * _DAT_143010fd0) * fVar45 +
                     fVar55 * fStack_264 + fVar44 * _UNK_143010fd4 + fStack_254 + fVar92;
                auVar43._8_4_ =
                     (fStack_264 * _UNK_143010fe4 + fStack_268 * _UNK_143010fd4) * fVar45 +
                     fVar55 * fStack_260 + fVar46 * _UNK_143010fd8 +
                     (float)CONCAT13(uStack_24d,CONCAT12(uStack_24e,CONCAT11(uStack_24f,uStack_250))
                                    );
                auVar43._12_4_ = _DAT_142e377f0 + _DAT_142e377f0;
                fVar42 = (fStack_260 * _UNK_143011008 + fStack_264 * _UNK_143010ff8) * fVar45 +
                         fVar56 * fStack_268 + fVar42 * _DAT_143010ff0 + auVar43._0_4_;
                fStack_254 = (fStack_268 * _DAT_143011000 + fStack_260 * _DAT_143010ff0) * fVar45 +
                             fVar56 * fStack_264 + fVar44 * _UNK_143010ff4 + auVar43._4_4_;
                fVar44 = (fStack_264 * _UNK_143011004 + fStack_268 * _UNK_143010ff4) * fVar45 +
                         fVar56 * fStack_260 + fVar46 * _UNK_143010ff8 + auVar43._8_4_;
                fVar45 = _DAT_143011010 + auVar43._12_4_;
                uStack_258 = SUB41(fVar42,0);
                uStack_257 = (undefined1)((uint)fVar42 >> 8);
                uStack_256 = (undefined1)((uint)fVar42 >> 0x10);
                uStack_255 = (undefined1)((uint)fVar42 >> 0x18);
                uStack_250 = SUB41(fVar44,0);
                uStack_24f = (undefined1)((uint)fVar44 >> 8);
                uStack_24e = (undefined1)((uint)fVar44 >> 0x10);
                uStack_24d = (undefined1)((uint)fVar44 >> 0x18);
                bStack_24c = SUB41(fVar45,0);
                uStack_24b = (undefined1)((uint)fVar45 >> 8);
                uStack_24a = (undefined1)((uint)fVar45 >> 0x10);
                uStack_249 = (undefined1)((uint)fVar45 >> 0x18);
                fStack_248 = fVar100;
                if (0.0 < *(float *)(uStack_118 + 0x284)) {
                  lVar26 = *(longlong *)(uStack_118 + 0x78);
                  uVar30 = *(ulonglong *)(uStack_118 + 0x80);
                  auVar4._4_8_ = auVar43._8_8_;
                  auVar4._0_4_ = fStack_254;
                  auVar54._0_8_ = auVar4._0_8_ << 0x20;
                  auVar54._8_4_ = fVar44;
                  auVar54._12_4_ = fVar45;
                  uStack_f1 = 1;
                  uVar11 = pdb_14148cd70(uStack_118 + 0x38,lVar39,auVar54._8_8_);
                  uVar18 = (ulonglong)uVar11;
                  if (uVar30 <= uVar18) {
                    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(uVar18,uVar30,&UNK_1430111f0);
                  }
                  if (uVar30 <= uVar18 + 1) {
                    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(uVar18 + 1,uVar30,&UNK_1430111f0);
                  }
                  fVar42 = *(float *)(lVar26 + uVar18 * 4);
                  if (_DAT_142e36f50 <
                      (*(float *)(lVar26 + 4 + uVar18 * 4) - fVar42) * extraout_XMM0_Da + fVar42)
                  goto LAB_1408843f3;
                }
                fVar94 = fVar99 - (fVar87 * fVar95 + fVar91);
                if (_DAT_142e37834 <= fVar94) {
                  fVar94 = 0.0;
                  goto LAB_1408843f3;
                }
                if (fVar94 <= _DAT_142e37838) {
                  fVar94 = _DAT_142e37838;
                }
                uStack_320 = CONCAT44(uStack_23c,uStack_240);
                uStack_348._0_4_ = fStack_268;
                uStack_348._4_4_ = fStack_264;
                fStack_340 = fStack_260;
                fStack_33c = fStack_25c;
                uStack_330 = (undefined1 (*) [16])
                             CONCAT44(0x3fe00000,
                                      CONCAT13(uStack_24d,
                                               CONCAT12(uStack_24e,CONCAT11(uStack_24f,uStack_250)))
                                     );
                uStack_328 = CONCAT44(0x3f99999a,fVar94);
                fVar91 = fVar94 * _DAT_142e36f50;
                uStack_338 = CONCAT44((fStack_254 - fVar92) - fVar91,
                                      CONCAT13(uStack_255,
                                               CONCAT12(uStack_256,CONCAT11(uStack_257,uStack_258)))
                                     );
                uStack_f1 = 1;
                uVar12 = pdb_14092f860(uStack_118);
                bStack_238 = (byte)uVar12;
                uStack_237 = (undefined2)((uint)uVar12 >> 8);
                uStack_235._1_3_ = (undefined3)extraout_XMM0_Da_00;
                uStack_235 = CONCAT31(uStack_235._1_3_,(char)((uint)uVar12 >> 0x18));
                uStack_231._0_1_ = (undefined1)((uint)extraout_XMM0_Da_00 >> 0x18);
                uStack_f1 = 1;
                uStack_16c = pdb_140dea6c0(&bStack_238);
                fStack_134 = uStack_330._4_4_;
                fVar95 = (float)uStack_328;
                uStack_f1 = 1;
                uStack_2a8 = pdb_14092f860(uStack_118);
                lVar39 = *(longlong *)(uStack_118 + 0x98);
                if (lVar39 == 1) {
                  uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_143314ab0);
                }
                if (lVar39 == 0) {
                  uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83b0(&UNK_143314a68,0x2d,&UNK_143314a98);
                }
                uVar19 = *(undefined8 *)(uStack_118 + 0x90);
                bStack_238 = (byte)uVar19;
                uStack_237 = (undefined2)((ulonglong)uVar19 >> 8);
                uStack_235 = (undefined4)((ulonglong)uVar19 >> 0x18);
                uStack_231._0_1_ = (undefined1)((ulonglong)uVar19 >> 0x38);
                uStack_231._1_3_ = (uint3)lVar39;
                uStack_22d = (undefined4)((ulonglong)lVar39 >> 0x18);
                uStack_229 = (undefined1)((ulonglong)lVar39 >> 0x38);
                uStack_228 = pdb_140ade410;
                lStack_220 = 0;
                uStack_218 = 0;
                uStack_f1 = 1;
                pdb_1414d3b90(&bStack_238,uStack_16c);
                uVar18 = uStack_218 & 0xffffffff;
                uVar30 = *(ulonglong *)(uStack_118 + 0xe8);
                if (uVar30 <= uVar18) {
                  uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar18,uVar30,&UNK_143011288);
                }
                if (uVar30 <= uVar18 + 1) {
                  uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar18 + 1,uVar30,&UNK_143011288);
                }
                fVar99 = fVar99 - fVar91;
                pbStack_380 = uStack_118 + 0x88;
                fStack_2a4 = *(float *)(*(longlong *)(uStack_118 + 0xe0) + uVar18 * 4);
                fStack_2a4 = (*(float *)(*(longlong *)(uStack_118 + 0xe0) + 4 + uVar18 * 4) -
                             fStack_2a4) * uStack_218._4_4_ + fStack_2a4;
                pauVar32 = *(undefined1 (**) [16])(lStack_388 + 0x30);
                lVar39 = *(longlong *)(lStack_388 + 0x48);
                auVar43 = *pauVar32;
                pauVar24 = pauVar32 + 1;
                uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                                         (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                                         (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                                         (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                                         (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                                         (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                                         (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                                         (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                                         (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                                         (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                                         (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                                         (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                                         (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                                         (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                                         (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                                        (ushort)(byte)(auVar43[0xf] >> 7) << 0xf);
                fVar95 = fVar95 * _DAT_142e36f50;
                fStack_134 = fStack_134 * _DAT_142e36f50;
                goto LAB_140883ba0;
              }
              uVar35 = (ushort)(uVar11 - 1) & (ushort)uVar11;
              uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar35);
            }
            auVar48[0] = -(auVar54[0] == cVar6);
            auVar48[1] = -(auVar54[1] == cVar58);
            auVar48[2] = -(auVar54[2] == cVar60);
            auVar48[3] = -(auVar54[3] == cVar62);
            auVar48[4] = -(auVar54[4] == cVar64);
            auVar48[5] = -(auVar54[5] == cVar66);
            auVar48[6] = -(auVar54[6] == cVar68);
            auVar48[7] = -(auVar54[7] == cVar70);
            auVar48[8] = -(auVar54[8] == cVar72);
            auVar48[9] = -(auVar54[9] == cVar74);
            auVar48[10] = -(auVar54[10] == cVar76);
            auVar48[0xb] = -(auVar54[0xb] == cVar78);
            auVar48[0xc] = -(auVar54[0xc] == cVar80);
            auVar48[0xd] = -(auVar54[0xd] == cVar81);
            auVar48[0xe] = -(auVar54[0xe] == cVar83);
            auVar48[0xf] = -(auVar54[0xf] == cVar85);
            if ((((((((((((((((SUB161(auVar48 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar48 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar48 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar48 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar48 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar48 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar48 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar48 >> 0x3f,0) & 1) != 0) || (SUB161(auVar48 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar48 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar48 >> 0x57,0) & 1) != 0) || (SUB161(auVar48 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar48 >> 0x67,0) & 1) != 0) || (SUB161(auVar48 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar48 >> 0x77,0) & 1) != 0) || auVar48[0xf] < '\0') break;
            uVar18 = uVar18 + lVar26 + 0x10;
            lVar26 = lVar26 + 0x10;
          }
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1430110e0);
      }
      pcVar16 = pcStack_198;
      lVar39 = lStack_278;
      pauVar24 = pauStack_168;
      pauVar25 = pauStack_168;
      lVar26 = lStack_160;
      lVar13 = lStack_270;
      lVar29 = lStack_270;
      uVar14 = uStack_140;
      lVar17 = lStack_160;
      if (pcStack_198 != (code *)0x2) goto LAB_14088320c;
LAB_140883348:
      lStack_160 = lVar17;
      if ((lVar29 != 0 & bStack_f3) != 1) {
        if (lStack_2c0 == 0) {
          return;
        }
        uStack_348 = &lStack_2b8;
        bStack_238 = (byte)&uStack_348;
        uStack_237 = (undefined2)((ulonglong)&uStack_348 >> 8);
        uStack_235 = (undefined4)((ulonglong)&uStack_348 >> 0x18);
        uStack_231._0_1_ = (undefined1)((ulonglong)&uStack_348 >> 0x38);
        pdb_14149aed0(&UNK_143011378,&bStack_238);
        return;
      }
      pcStack_198 = (code *)0x2;
      lStack_270 = 0;
      lVar17 = 2;
      lStack_278 = lVar39;
      pauStack_168 = pauVar25;
      uStack_140 = uVar14;
    } while( true );
  }
  lVar39 = 0x48;
  lVar13 = pdb_1408859e0(0x48);
  puVar36 = (undefined8 *)&UNK_143011328;
  if (lVar13 == 1) {
    if ((undefined8 *)0x48 < puVar23) {
LAB_140884f8d:
      pdb_142dc8070(&UNK_143011328,0x48,0);
LAB_140884fad:
      pdb_142dc8070(&UNK_143011328,0x48);
LAB_140884fd0:
      bStack_238 = (byte)&bStack_130;
      uStack_237 = (undefined2)((ulonglong)&bStack_130 >> 8);
      uStack_235 = (undefined4)((ulonglong)&bStack_130 >> 0x18);
      uStack_231._0_1_ = (undefined1)((ulonglong)&bStack_130 >> 0x38);
      uStack_231 = CONCAT31(0x4942d0,(undefined1)uStack_231);
      uStack_22d = 0x141;
      uStack_229 = 0;
      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14330e2c6,&bStack_238,&UNK_14330e2f8);
    }
    uVar14 = pdb_1408859e0(puVar23);
    if ((uVar14 & 1) != 0) {
      if ((undefined *)0x48 < (undefined *)((longlong)puVar23 + 2)) goto LAB_140884fad;
      lVar39 = 0x46 - (longlong)puVar23;
      puVar36 = (undefined8 *)((longlong)puVar23 + 0x14301132a);
    }
  }
  puVar33 = &UNK_143011173;
  puVar37 = &UNK_143011136;
  do {
    bVar40 = puVar33[-1];
    uVar9 = (uint)(char)bVar40;
    uStack_158 = param_1;
    if ((char)bVar40 < '\0') {
      bVar31 = puVar33[-2];
      if ((char)bVar31 < -0x40) {
        bVar2 = puVar33[-3];
        if ((char)bVar2 < -0x40) {
          pbVar21 = puVar33 + -4;
          puVar33 = puVar33 + -4;
          uVar9 = bVar2 & 0x3f | (*pbVar21 & 7) << 6;
        }
        else {
          puVar33 = puVar33 + -3;
          uVar9 = bVar2 & 0xf;
        }
        uVar9 = bVar31 & 0x3f | uVar9 << 6;
      }
      else {
        puVar33 = puVar33 + -2;
        uVar9 = bVar31 & 0x1f;
      }
      uVar9 = (uint)(bVar40 & 0x3f) | uVar9 << 6;
      if (uVar9 != 0x5c) goto LAB_140882fa4;
LAB_140882fde:
      puVar37 = puVar33 + -0x143011135;
      if (puVar37 < (undefined *)0x3e) {
        puVar28 = (undefined8 *)(0x3d - (longlong)puVar37);
        puVar37 = puVar33 + 1;
        goto LAB_140883009;
      }
      pdb_142dc8070(&UNK_143011136,0x3d,puVar37,0x3d,&UNK_1430113d8);
      goto LAB_140884f8d;
    }
    puVar33 = puVar33 + -1;
    if (uVar9 == 0x5c) goto LAB_140882fde;
LAB_140882fa4:
    if (uVar9 == 0x2f) goto LAB_140882fde;
  } while (puVar33 != &UNK_143011136);
  puVar28 = (undefined8 *)0x3d;
LAB_140883009:
  plVar15 = (longlong *)pdb_140e97000();
  puVar27 = param_3;
  puVar38 = param_2;
  if ((char)plVar15[0xd] != '\x01') goto LAB_140884e3f;
  do {
    param_3 = puVar27;
    puVar38 = param_2;
    if (*plVar15 == 0) {
      *plVar15 = -1;
      puVar23 = puVar36;
      plStack_100 = plVar15;
      lVar39 = pdb_140e94f10(plVar15 + 1,puVar36,lVar39,puVar37,puVar28,1,0);
      puVar38 = uStack_158;
      *plStack_100 = *plStack_100 + 1;
      lStack_2c0 = 1;
      param_1 = uStack_158;
      lStack_2b8 = lVar39;
      if (*_DAT_143ca4500 == '\0') goto LAB_140883139;
      plVar15 = (longlong *)pdb_140e97000();
      if (((char)plVar15[0xd] != '\x01') &&
         (plVar15 = (longlong *)pdb_142dde6e0(plVar15,0), plVar15 == (longlong *)0x0)) break;
      param_3 = param_2;
      puVar28 = param_4;
      param_4 = puVar27;
      if (*plVar15 == 0) {
        *plVar15 = -1;
        uStack_158 = plVar15;
        pdb_140e95370(plVar15 + 1,lVar39);
        *uStack_158 = *uStack_158 + 1;
        return;
      }
    }
    plVar15 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_140884e3f:
    plVar15 = (longlong *)pdb_142dde6e0(plVar15,0);
    puVar27 = param_3;
    param_2 = puVar38;
  } while (plVar15 != (longlong *)0x0);
  pdb_142dc7890(&UNK_14330e598);
LAB_140884e98:
  uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1430112a0,0xf,&UNK_1430112b0);
  while( true ) {
    if ((short)uVar11 == 0) {
      do {
        auVar43 = *pauVar24;
        pauVar32 = pauVar32 + -0x68;
        pauVar24 = pauVar24 + 1;
        uVar11 = (ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar43[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar11 == 0);
    }
    uVar10 = 0;
    for (uVar3 = uVar11; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar10 = uVar10 + 1;
    }
    lVar26 = (ulonglong)uVar10 * -0x68;
    iVar22 = *(int *)((longlong)pauVar32 + lVar26 + -0x68);
    uVar34 = (ulonglong)*(byte *)((longlong)pauVar32 + lVar26 + -0x2e);
    uVar18 = 0;
    uVar30 = uVar34 - 1;
    if (uVar34 < 2) {
      uVar30 = uVar18;
    }
    if (uVar30 == 0) {
      fVar91 = *(float *)((longlong)pauVar32 + lVar26 + -0x4c);
      uVar14 = CONCAT71((int7)(uVar14 >> 8),*(undefined1 *)((longlong)pauVar32 + lVar26 + -7));
      uStack_f1 = 1;
      lStack_350 = lVar39 + -1;
      iStack_170 = iVar22;
      uVar8 = pdb_140901b40(iVar22,uStack_370);
      uStack_f1 = 1;
      bStack_130 = pdb_140c44ba0(uVar14 & 0xffffffff);
      uStack_12f = uVar8;
      uStack_f1 = 1;
      lVar39 = pdb_141494370(puStack_368,&bStack_130);
      if (lVar39 == 0) goto LAB_140884fd0;
      fVar87 = *(float *)(lVar39 + 0x30);
      bStack_238 = (byte)uStack_2a8;
      uStack_237 = (undefined2)((uint)uStack_2a8 >> 8);
      uStack_235._1_3_ = (undefined3)extraout_XMM0_Da_01;
      uStack_235 = CONCAT31(uStack_235._1_3_,(char)((uint)uStack_2a8 >> 0x18));
      uStack_231._0_1_ = (undefined1)((uint)extraout_XMM0_Da_01 >> 0x18);
      if ((*(float *)(lVar39 + 0x3c) - *(float *)(lVar39 + 0x38)) * _DAT_142e36f50 + fVar95 <=
          (float)((uint)(fVar91 - fVar99) & _DAT_142e377e0)) {
        uVar18 = 0;
        lVar39 = lStack_350;
        iVar22 = iStack_170;
      }
      else {
        uStack_f1 = 1;
        fVar91 = (float)pdb_140dea770(&bStack_238);
        uVar18 = (ulonglong)(fVar91 < fVar87 * _DAT_142e36f50 + fStack_134);
        lVar39 = lStack_350;
        iVar22 = iStack_170;
      }
    }
    else {
      lVar39 = lVar39 + -1;
      if ((int)uVar30 != 1) goto LAB_140884e98;
    }
    uVar11 = uVar11 - 1 & uVar11;
    if (((int)uStack_158 != iVar22) && ((char)uVar18 != '\0')) break;
LAB_140883ba0:
    if (lVar39 == 0) {
      if (fVar99 + fVar95 + _DAT_142e37988 < fStack_2a4) {
        uStack_f1 = 1;
        uVar12 = pdb_14148cd70(pbStack_380);
        uStack_f1 = 1;
        fVar99 = (float)pdb_14148da30(*(undefined8 *)(uStack_118 + 200),
                                      *(undefined8 *)(uStack_118 + 0xd0),uVar12);
        if ((fVar99 == 0.0) && (!NAN(fVar99))) {
          uStack_f1 = 1;
          pdb_140b3d590(&bStack_130);
          pbStack_1b8 = (byte *)CONCAT17(uStack_121,uStack_128);
          pbStack_1b0 = pbStack_1b8 + lStack_120 * 0x24;
          bStack_238 = 0;
          uStack_237 = 0;
          uStack_235 = 0;
          uStack_231 = uStack_231 & 0xffffff00;
          lStack_1f8 = 0;
          uStack_118 = pbStack_1b8;
          pdb_141496240(&uStack_2a0,&bStack_238);
          lVar39 = CONCAT17(uStack_129,CONCAT52(uStack_12e,CONCAT11(uStack_12f,bStack_130)));
          if (lVar39 != 0) {
            pub_1406abac0(uStack_118,lVar39 * 0x24,4);
          }
          bVar31 = 1;
          goto LAB_1408843f5;
        }
      }
      break;
    }
  }
LAB_1408843f3:
  bVar31 = 0;
LAB_1408843f5:
  uStack_f1 = 1;
  pdb_140b3d590(&uStack_348,_DAT_142e36f28,_DAT_142e36f28,_DAT_142e36f28,&fStack_268);
  pbStack_1b8 = (byte *)CONCAT44(fStack_33c,fStack_340);
  pbStack_1b0 = pbStack_1b8 + uStack_338 * 0x24;
  bStack_238 = 0;
  uStack_237 = 0;
  uStack_235 = 0;
  uStack_231 = uStack_231 & 0xffffff00;
  lStack_1f8 = 0;
  uStack_118 = pbStack_1b8;
  pdb_141496240(&uStack_2a0,&bStack_238);
  if (CONCAT44(uStack_348._4_4_,(float)uStack_348) != 0) {
    pub_1406abac0(uStack_118,CONCAT44(uStack_348._4_4_,(float)uStack_348) * 0x24,4);
  }
  if (bVar31 == 0) {
    uVar12 = CONCAT13(uStack_24d,CONCAT12(uStack_24e,CONCAT11(uStack_24f,uStack_250)));
    uStack_320 = CONCAT44(uStack_23c,uStack_240);
    uStack_348._0_4_ = fStack_268;
    uStack_348._4_4_ = fStack_264;
    fStack_340 = fStack_260;
    fStack_33c = fStack_25c;
    uStack_330._4_4_ =
         (float)(CONCAT17(uStack_249,
                          CONCAT16(uStack_24a,CONCAT15(uStack_24b,CONCAT14(bStack_24c,uVar12)))) >>
                0x20);
    uStack_330 = (undefined1 (*) [16])CONCAT44(uStack_330._4_4_ + _DAT_142f60fec,uVar12);
    uStack_328 = CONCAT44(fStack_244 + _DAT_142f60fec,0x3ecccccd);
    uStack_338 = CONCAT44((fStack_254 - fVar92) + _DAT_142f60fec,
                          CONCAT13(uStack_255,CONCAT12(uStack_256,CONCAT11(uStack_257,uStack_258))))
    ;
    uStack_f1 = 1;
    pdb_140b3d590(&bStack_130,_DAT_142e36f28,_DAT_142e36f28,_DAT_142e36f28,&uStack_348);
    pbStack_1b8 = (byte *)CONCAT17(uStack_121,uStack_128);
    pbStack_1b0 = pbStack_1b8 + lStack_120 * 0x24;
    bStack_238 = 0;
    uStack_237 = 0;
    uStack_235 = 0;
    uStack_231 = uStack_231 & 0xffffff00;
    lStack_1f8 = 0;
    uStack_118 = pbStack_1b8;
    pdb_141496240(&uStack_2a0,&bStack_238);
    lVar39 = CONCAT17(uStack_129,CONCAT52(uStack_12e,CONCAT11(uStack_12f,bStack_130)));
    if (lVar39 != 0) {
      pub_1406abac0(uStack_118,lVar39 * 0x24,4);
    }
  }
  uStack_f1 = 1;
  pdb_140c45ec0(&fStack_3f8,uStack_358,(ulonglong)uStack_158 & 0xffffffff,&UNK_143011220);
  uStack_3dc = 0x3f800000;
  uStack_3d8 = 0x3f800000;
  uStack_3d4 = 0x3f800000;
  fVar91 = fStack_3f0 * fStack_3f0;
  fVar87 = fStack_3ec * fStack_3ec;
  fVar42 = fStack_3f4 * fStack_3f4 + fStack_3f8 * fStack_3f8;
  fVar95 = fStack_3f0 * _UNK_143010fd8 + fStack_3f4 * _UNK_143010fd4 + fStack_3f8 * _DAT_143010fd0;
  fVar95 = fVar95 + fVar95;
  fVar99 = fStack_3ec + fStack_3ec;
  uStack_3e8 = CONCAT44(fVar100 + uStack_3e8._4_4_ +
                        fVar99 * (fStack_3f0 * 0.0 - fStack_3f8 * _DAT_143011014) +
                        fVar95 * fStack_3f4 + (fVar87 - (fVar42 + fVar91)) * _UNK_143010fd4,
                        (float)uStack_3e8 +
                        fVar99 * (fStack_3f4 * _DAT_143011014 - fStack_3f0 * 0.0) +
                        fVar95 * fStack_3f8 + (fVar87 - (fVar42 + fVar91)) * _DAT_143010fd0);
  fStack_3e0 = fVar99 * (fStack_3f8 * 0.0 - fStack_3f4 * 0.0) +
               fVar95 * fStack_3f0 + (fVar87 - (fVar42 + fVar91)) * _UNK_143010fd8 + fStack_3e0;
  uStack_22d = 0;
  uStack_235 = 0;
  uStack_231 = 0;
  uVar8 = *(undefined1 *)(pfStack_280 + 1);
  fStack_340 = 0.0;
  fStack_33c = (float)((uint)fStack_33c & 0xff000000);
  uStack_348._0_4_ = (float)(uint)CONCAT21(uStack_237,bStack_238);
  uStack_348._4_4_ = 0.0;
  lVar39 = plStack_100[0x18];
  if (lVar39 == plStack_100[0x16]) {
    uStack_f1 = 1;
    pdb_142d8ddd0(plStack_100 + 0x16);
  }
  plVar15 = plStack_100;
  uVar86 = uStack_249;
  uVar84 = uStack_24a;
  uVar82 = uStack_24b;
  bVar40 = bStack_24c;
  uVar71 = uStack_24d;
  uVar69 = uStack_24e;
  uVar67 = uStack_24f;
  uVar65 = uStack_250;
  fVar42 = fStack_254;
  uVar63 = uStack_255;
  uVar61 = uStack_256;
  uVar59 = uStack_257;
  uVar57 = uStack_258;
  fVar87 = fStack_25c;
  fVar91 = fStack_260;
  fVar95 = fStack_264;
  fVar99 = fStack_268;
  lVar26 = plStack_100[0x17];
  lVar29 = lVar39 * 0x170;
  *(undefined8 *)(lVar26 + lVar29) = 0;
  *(undefined8 *)(lVar26 + 0x10 + lVar29) = 0;
  *(undefined8 *)(lVar26 + 0x20 + lVar29) = 0;
  *(undefined8 *)(lVar26 + 0x30 + lVar29) = 0;
  *(undefined4 *)(lVar26 + 0x40 + lVar29) = 0;
  *(undefined4 *)(lVar26 + 0x50 + lVar29) = 0;
  *(undefined4 *)(lVar26 + 0x60 + lVar29) = 0;
  *(undefined4 *)(lVar26 + 0x70 + lVar29) = 2;
  *(undefined8 *)(lVar26 + 0x90 + lVar29) = 1;
  *(undefined8 *)(lVar26 + 0x98 + lVar29) = 0;
  *(undefined **)(lVar26 + 0xa0 + lVar29) = &UNK_14330db80;
  *(undefined8 *)(lVar26 + 0xa8 + lVar29) = 0x17;
  puVar23 = (undefined8 *)(lVar26 + 0xb0 + lVar29);
  *puVar23 = CONCAT44(fStack_3f4,fStack_3f8);
  puVar23[1] = CONCAT44(fStack_3ec,fStack_3f0);
  puVar23 = (undefined8 *)(lVar26 + 0xc0 + lVar29);
  *puVar23 = uStack_3e8;
  puVar23[1] = CONCAT44(uStack_3dc,fStack_3e0);
  puVar23 = (undefined8 *)(lVar26 + 0xd0 + lVar29);
  *puVar23 = CONCAT44(uStack_3d4,uStack_3d8);
  puVar23[1] = uStack_3d0;
  *(undefined4 *)(lVar26 + 0xe0 + lVar29) = 0;
  *(undefined4 *)(lVar26 + 0xe8 + lVar29) = 0;
  *(undefined1 *)(lVar26 + 0x105 + lVar29) = 2;
  *(undefined4 *)(lVar26 + 0x108 + lVar29) = 0;
  *(undefined1 *)(lVar26 + 0x15c + lVar29) = 2;
  *(ulonglong *)(lVar26 + 0x15d + lVar29) = CONCAT44(uStack_348._4_4_,(float)uStack_348);
  *(ulonglong *)(lVar26 + 0x164 + lVar29) =
       CONCAT35(fStack_33c._0_3_,CONCAT41(fStack_340,uStack_348._7_1_));
  *(undefined1 *)(lVar26 + 0x16c + lVar29) = 0;
  *(undefined1 *)(lVar26 + 0x16d + lVar29) = uVar8;
  *(undefined1 *)(lVar26 + 0x16e + lVar29) = uStack_f2;
  *(undefined1 *)(lVar26 + 0x16f + lVar29) = 0;
  plStack_100[0x18] = lVar39 + 1;
  pdb_14007ee60();
  puVar20 = (uint *)pub_1406abab0(0x28,4);
  if (puVar20 == (uint *)0x0) {
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(4,0x28);
  }
  fVar44 = fVar42 - fVar92;
  fVar46 = fVar91 * _DAT_14300d230;
  fVar56 = fVar95 * _UNK_14300d238;
  fVar100 = fVar95 * fVar95 + fVar99 * fVar99;
  fVar45 = (fVar87 * fVar87 - (fVar100 + fVar91 * fVar91)) * _DAT_142e36f28;
  fVar55 = fVar91 * 0.0 + fVar95 * 0.0 + fVar99 * _DAT_142e36f28;
  fVar55 = fVar55 + fVar55;
  *puVar20 = (uint)(bVar31 ^ 1);
  puVar20[1] = (uint)fVar94;
  *(undefined1 *)(puVar20 + 2) = uVar57;
  *(undefined1 *)((longlong)puVar20 + 9) = uVar59;
  *(undefined1 *)((longlong)puVar20 + 10) = uVar61;
  *(undefined1 *)((longlong)puVar20 + 0xb) = uVar63;
  *(undefined1 *)(puVar20 + 3) = uVar65;
  *(undefined1 *)((longlong)puVar20 + 0xd) = uVar67;
  *(undefined1 *)((longlong)puVar20 + 0xe) = uVar69;
  *(undefined1 *)((longlong)puVar20 + 0xf) = uVar71;
  puVar20[4] = (uint)fVar44;
  puVar20[5] = (uint)(fVar92 + fVar42);
  *(ulonglong *)(puVar20 + 6) =
       CONCAT44(fVar55 * fVar91 + (fVar87 * fVar87 - (fVar100 + fVar91 * fVar91)) * 0.0 +
                (fVar99 * 0.0 - fVar56) * (fVar87 + fVar87),
                fVar55 * fVar99 + fVar45 + (fVar95 * 0.0 - fVar46) * (fVar87 + fVar87));
  puVar20[8] = (uint)pbStack_190;
  puVar20[9] = (uint)(fVar41 + fVar44);
  pbVar21 = (byte *)plVar15[0x29];
  if (pbVar21 != (byte *)0x0) {
    pub_1406abac0(pbVar21,0x28,4);
    plVar15 = plStack_100;
  }
  plVar15[0x29] = (longlong)puVar20;
  uVar73 = uVar65;
  uVar75 = uVar67;
  uVar77 = uVar69;
  uVar79 = uVar71;
LAB_14088498c:
  uVar14 = uStack_290;
  if (uStack_290 < 3) {
    pbVar21 = (byte *)0x4;
    uVar30 = 0;
  }
  else {
    uVar30 = uStack_290 / 3;
    pdb_14007ee60();
    pbVar21 = pub_1406abab0(uVar30 * 0xc,4);
    if (pbVar21 == (byte *)0x0) {
      uStack_f1 = 1;
      pdb_142dc7e2a(4,uVar30 * 0xc);
      goto LAB_1408850be;
    }
    if (uVar14 - 3 < 3) {
      uVar14 = 0;
    }
    else {
      lVar39 = 0;
      uVar14 = 0;
      do {
        iVar22 = (int)lVar39;
        *(int *)(pbVar21 + lVar39 * 4) = iVar22;
        *(int *)(pbVar21 + lVar39 * 4 + 4) = iVar22 + 1;
        *(int *)(pbVar21 + lVar39 * 4 + 8) = iVar22 + 2;
        uVar14 = uVar14 + 2;
        *(int *)(pbVar21 + lVar39 * 4 + 0xc) = iVar22 + 3;
        *(int *)(pbVar21 + lVar39 * 4 + 0x10) = iVar22 + 4;
        *(int *)(pbVar21 + lVar39 * 4 + 0x14) = iVar22 + 5;
        lVar39 = lVar39 + 6;
      } while ((uVar30 & 0x7fffffffffffffe) != uVar14);
      if ((uVar30 & 1) == 0) goto LAB_140884a84;
    }
    iVar22 = (int)uVar14;
    *(int *)(pbVar21 + uVar14 * 0xc) = iVar22 * 3;
    *(int *)(pbVar21 + uVar14 * 0xc + 4) = iVar22 * 3 + 1;
    *(int *)(pbVar21 + uVar14 * 0xc + 8) = iVar22 * 3 + 2;
  }
LAB_140884a84:
  uStack_438 = uStack_290;
  uStack_448 = uStack_2a0;
  uStack_440 = uStack_298;
  bStack_130 = 0;
  uStack_12f = 0;
  uStack_12e = 0;
  uStack_129 = 0x80;
  bStack_238 = 0;
  uStack_237 = 0;
  uStack_235 = 0;
  uStack_231 = CONCAT31(uStack_231._1_3_,0x80);
  uStack_f1 = 0;
  uStack_430 = uVar30;
  pbStack_428 = pbVar21;
  uStack_420 = uVar30;
  pdb_1409f0070(&uStack_348,&uStack_430,&uStack_448,&bStack_130,&bStack_238);
  bStack_238 = 1;
  uStack_237 = 0;
  uStack_235 = 0;
  uStack_231 = 0x100;
  uStack_22d = 0;
  uStack_229 = 0;
  pbStack_1b8 = pbStack_2d8;
  pbStack_1b0 = pbStack_2d0;
  uStack_1c8 = uStack_2e8;
  uStack_1c0 = uStack_2e0;
  uStack_1d8 = uStack_2f8;
  uStack_1d0 = uStack_2f0;
  uStack_1e8 = uStack_308;
  uStack_1e0 = uStack_300;
  uStack_228 = (code *)CONCAT44(uStack_348._4_4_,(float)uStack_348);
  lStack_220 = CONCAT44(fStack_33c,fStack_340);
  lStack_1f8 = CONCAT44(fStack_314,fStack_318);
  uStack_1f0 = CONCAT44(fStack_30c,fStack_310);
  uStack_208 = uStack_328;
  uStack_200 = uStack_320;
  uStack_218 = uStack_338;
  pauStack_210 = uStack_330;
  pdb_14007ee60();
  pbVar21 = pub_1406abab0(0x90,0x10);
  if (pbVar21 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(0x10,0x90);
  }
  pub_142e32760(pbVar21,&bStack_238,0x90);
  LOCK();
  lVar39 = *(longlong *)pbVar21;
  *(longlong *)pbVar21 = *(longlong *)pbVar21 + 1;
  UNLOCK();
  if (*(longlong *)pbVar21 != 0 && SCARRY8(lVar39,1) == *(longlong *)pbVar21 < 0) {
    fStack_340 = 0.0;
    uStack_348._0_4_ = 0.0;
    uStack_348._4_4_ = 0.0;
    bStack_238 = (byte)_DAT_142e4e650;
    uStack_237 = (undefined2)((ulonglong)_DAT_142e4e650 >> 8);
    uStack_235 = (undefined4)((ulonglong)_DAT_142e4e650 >> 0x18);
    uStack_231._0_1_ = (undefined1)((ulonglong)_DAT_142e4e650 >> 0x38);
    uStack_231._1_3_ = (uint3)_UNK_142e4e658;
    uStack_22d = (undefined4)((ulonglong)_UNK_142e4e658 >> 0x18);
    uStack_229 = (undefined1)((ulonglong)_UNK_142e4e658 >> 0x38);
    uStack_f1 = 0;
    pdb_1408f3120(plStack_100,pbVar21,pbVar21,&uStack_348,&bStack_238);
    iVar22 = -(uint)(CONCAT13(uVar63,CONCAT12(uVar61,CONCAT11(uVar59,uVar57))) ==
                    CONCAT13(uVar63,CONCAT12(uVar61,CONCAT11(uVar59,uVar57))));
    cVar6 = (char)iVar22;
    cVar58 = (char)((uint)iVar22 >> 8);
    cVar60 = (char)((uint)iVar22 >> 0x10);
    cVar62 = (char)((uint)iVar22 >> 0x18);
    iVar22 = -(uint)(CONCAT13(uVar71,CONCAT12(uVar69,CONCAT11(uVar67,uVar65))) ==
                    CONCAT13(uVar71,CONCAT12(uVar69,CONCAT11(uVar67,uVar65))));
    cVar64 = (char)iVar22;
    cVar66 = (char)((uint)iVar22 >> 8);
    cVar68 = (char)((uint)iVar22 >> 0x10);
    cVar70 = (char)((uint)iVar22 >> 0x18);
    iVar22 = -(uint)(CONCAT13(uVar79,CONCAT12(uVar77,CONCAT11(uVar75,uVar73))) ==
                    CONCAT13(uVar79,CONCAT12(uVar77,CONCAT11(uVar75,uVar73))));
    cVar72 = (char)iVar22;
    cVar74 = (char)((uint)iVar22 >> 8);
    cVar76 = (char)((uint)iVar22 >> 0x10);
    cVar78 = (char)((uint)iVar22 >> 0x18);
    iVar22 = -(uint)(CONCAT13(uVar86,CONCAT12(uVar84,CONCAT11(uVar82,bVar40))) ==
                    CONCAT13(uVar86,CONCAT12(uVar84,CONCAT11(uVar82,bVar40))));
    cVar80 = (char)iVar22;
    cVar81 = (char)((uint)iVar22 >> 8);
    cVar83 = (char)((uint)iVar22 >> 0x10);
    cVar85 = (char)((uint)iVar22 >> 0x18);
    uVar14 = uStack_390;
    goto LAB_1408833eb;
  }
LAB_1408850be:
                    /* WARNING: Does not return */
  pcVar16 = (code *)invalidInstructionException();
  (*pcVar16)();
}

