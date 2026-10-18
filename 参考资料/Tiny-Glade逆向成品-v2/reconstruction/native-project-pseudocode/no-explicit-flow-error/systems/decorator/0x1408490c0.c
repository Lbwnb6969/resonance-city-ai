// VA 0x1408490c0, PDB extent 11764 bytes
// system_decorator::decorator_visual::lantern::generate_lanterns
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/lantern.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::decorator_visual::lantern::generate_lanterns
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/lantern.rs
   Extent: 11764 */

void pdb_1408490c0(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 (*param_4) [16],
                  undefined8 *param_5,longlong *param_6,longlong *param_7)

{
  byte *pbVar1;
  float *pfVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  byte bVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined3 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 (*pauVar19) [16];
  byte bVar20;
  char cVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong *plVar27;
  ulonglong uVar28;
  undefined4 *puVar29;
  int *piVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong *plVar33;
  longlong *plVar34;
  longlong lVar35;
  longlong *plVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  longlong *plVar39;
  undefined *puVar40;
  undefined *puVar41;
  ushort uVar42;
  longlong lVar43;
  longlong lVar44;
  undefined *unaff_R13;
  undefined8 uVar45;
  longlong *unaff_R14;
  ulonglong unaff_R15;
  float fVar46;
  undefined1 auVar47 [16];
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar63;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar67;
  float fVar68;
  undefined4 uVar69;
  float fVar70;
  char unaff_XMM9_Ba;
  char unaff_XMM9_Bb;
  char unaff_XMM9_Bc;
  char unaff_XMM9_Bd;
  char unaff_XMM9_Be;
  char unaff_XMM9_Bf;
  char unaff_XMM9_Bg;
  char unaff_XMM9_Bh;
  char unaff_XMM9_Bi;
  char unaff_XMM9_Bj;
  char unaff_XMM9_Bk;
  char unaff_XMM9_Bl;
  char unaff_XMM9_Bm;
  char unaff_XMM9_Bn;
  char unaff_XMM9_Bo;
  char unaff_XMM9_Bp;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined8 uStack_290;
  longlong *plStack_288;
  undefined1 (*pauStack_280) [16];
  undefined8 uStack_278;
  undefined4 *puStack_270;
  longlong lStack_268;
  longlong lStack_260;
  longlong lStack_258;
  undefined1 (*pauStack_250) [16];
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_234;
  longlong *plStack_230;
  longlong *plStack_228;
  longlong lStack_220;
  longlong *plStack_218;
  longlong *plStack_210;
  longlong lStack_208;
  longlong lStack_200;
  longlong *plStack_1f8;
  longlong *plStack_1f0;
  longlong *plStack_1e8;
  longlong lStack_1e0;
  longlong *plStack_1d8;
  longlong lStack_1d0;
  undefined1 (*pauStack_1c8) [16];
  longlong *plStack_1c0;
  byte bStack_1b8;
  undefined2 uStack_1b7;
  undefined4 uStack_1b5;
  undefined4 uStack_1b1;
  undefined4 uStack_1ad;
  undefined1 uStack_1a9;
  longlong lStack_1a8;
  ushort uStack_1a0;
  undefined6 uStack_19e;
  longlong *plStack_198;
  undefined1 (*pauStack_190) [16];
  ushort uStack_180;
  longlong lStack_178;
  undefined8 uStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined8 uStack_158;
  float fStack_150;
  undefined4 uStack_14c;
  float fStack_148;
  undefined4 uStack_144;
  longlong lStack_140;
  longlong *plStack_138;
  byte bStack_129;
  undefined *puStack_128;
  longlong *plStack_120;
  longlong *plStack_118;
  char cStack_109;
  byte bStack_108;
  char cStack_107;
  uint5 uStack_106;
  undefined1 uStack_101;
  float fStack_100;
  undefined3 uStack_fc;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  plVar36 = param_2;
  cStack_109 = pdb_140e94b40();
  if (cStack_109 == '\0') goto LAB_1408492df;
  unaff_R14 = (longlong *)&UNK_14300c0e0;
  unaff_R15 = 0x3e;
  uVar32 = 0x3e;
  lVar25 = pdb_14084d0a0(&UNK_14300c0e0);
  if (lVar25 == 1) {
    if (0x3e < uVar32) {
LAB_14084b777:
      pdb_142dc8070(&UNK_14300c0e0,0x3e,0);
LAB_14084b797:
      pdb_142dc8070(&UNK_14300c0e0,0x3e);
LAB_14084b7ba:
      bStack_1b8 = (byte)&bStack_108;
      uStack_1b7 = (undefined2)((ulonglong)&bStack_108 >> 8);
      uStack_1b5 = (undefined4)((ulonglong)&bStack_108 >> 0x18);
      uStack_1b1._0_1_ = (undefined1)((ulonglong)&bStack_108 >> 0x38);
      uStack_1b1 = CONCAT31(0x4942d0,(undefined1)uStack_1b1);
      uStack_1ad = 0x141;
      uStack_1a9 = 0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14330e2c6,&bStack_1b8,&UNK_14330e310);
    }
    unaff_R14 = (longlong *)&UNK_14300c0e0;
    uVar26 = pdb_14084d0a0(&UNK_14300c0e0);
    if ((uVar26 & 1) != 0) {
      if (0x3e < uVar32 + 2) goto LAB_14084b797;
      unaff_R15 = 0x3c - uVar32;
      unaff_R14 = (longlong *)(&UNK_14300c0e2 + uVar32);
    }
  }
  puVar40 = &UNK_14300be41;
  unaff_R13 = &UNK_14300be09;
  do {
    bVar20 = puVar40[-1];
    uVar22 = (uint)(char)bVar20;
    plStack_118 = param_1;
    if ((char)bVar20 < '\0') {
      bVar6 = puVar40[-2];
      if ((char)bVar6 < -0x40) {
        bVar7 = puVar40[-3];
        if ((char)bVar7 < -0x40) {
          pbVar1 = puVar40 + -4;
          puVar40 = puVar40 + -4;
          uVar22 = bVar7 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar40 = puVar40 + -3;
          uVar22 = bVar7 & 0xf;
        }
        uVar22 = bVar6 & 0x3f | uVar22 << 6;
      }
      else {
        puVar40 = puVar40 + -2;
        uVar22 = bVar6 & 0x1f;
      }
      uVar22 = (uint)(bVar20 & 0x3f) | uVar22 << 6;
      if (uVar22 != 0x5c) goto LAB_140849244;
LAB_140849258:
      puVar41 = puVar40 + -0x14300be08;
      if (puVar41 < (undefined *)0x39) {
        plVar39 = (longlong *)(0x38 - (longlong)puVar41);
        unaff_R13 = puVar40 + 1;
        goto LAB_14084927d;
      }
      pdb_142dc8070(&UNK_14300be09,0x38,puVar41,0x38,&UNK_14300c1c8);
      goto LAB_14084b777;
    }
    puVar40 = puVar40 + -1;
    if (uVar22 == 0x5c) goto LAB_140849258;
LAB_140849244:
    if (uVar22 == 0x2f) goto LAB_140849258;
  } while (puVar40 != &UNK_14300be09);
  plVar39 = (longlong *)0x38;
LAB_14084927d:
  plVar27 = (longlong *)pdb_140e97000();
  if ((char)plVar27[0xd] != '\x01') goto LAB_14084b680;
LAB_14084928c:
  if (*plVar27 == 0) {
    *plVar27 = -1;
    plVar36 = unaff_R14;
    plStack_1e8 = plVar27;
    uStack_240 = pdb_140e94f10(plVar27 + 1,unaff_R14,unaff_R15,unaff_R13,plVar39,1,0);
    *plStack_1e8 = *plStack_1e8 + 1;
    param_1 = plStack_118;
LAB_1408492df:
    uStack_290 = pdb_140c47770(param_1);
    lStack_260 = *param_2;
    plStack_288 = plVar36;
    uStack_170 = uStack_290;
    plStack_118 = plVar36;
    pdb_140c41140(&bStack_1b8);
    fVar18 = _UNK_14300bbd8;
    fVar17 = _UNK_14300bbd4;
    fVar16 = _DAT_14300bbd0;
    uVar15 = _DAT_14300bbb0;
    uVar14 = _DAT_14300bb80;
    fVar13 = _DAT_14300b140;
    uStack_248 = *param_5;
    lStack_208 = *param_7;
    lStack_220 = param_7[1];
    uStack_234 = *(undefined4 *)(param_4[1] + 0xc);
    uStack_278 = *(undefined8 *)*param_4;
    puStack_270 = *(undefined4 **)param_4[1];
    lStack_268 = *param_3;
    lStack_258 = *param_6;
    iVar11 = -(uint)(CONCAT13(unaff_XMM9_Bd,
                              CONCAT12(unaff_XMM9_Bc,CONCAT11(unaff_XMM9_Bb,unaff_XMM9_Ba))) ==
                    CONCAT13(unaff_XMM9_Bd,
                             CONCAT12(unaff_XMM9_Bc,CONCAT11(unaff_XMM9_Bb,unaff_XMM9_Ba))));
    unaff_XMM9_Ba = (char)iVar11;
    unaff_XMM9_Bb = (char)((uint)iVar11 >> 8);
    unaff_XMM9_Bc = (char)((uint)iVar11 >> 0x10);
    unaff_XMM9_Bd = (char)((uint)iVar11 >> 0x18);
    iVar11 = -(uint)(CONCAT13(unaff_XMM9_Bh,
                              CONCAT12(unaff_XMM9_Bg,CONCAT11(unaff_XMM9_Bf,unaff_XMM9_Be))) ==
                    CONCAT13(unaff_XMM9_Bh,
                             CONCAT12(unaff_XMM9_Bg,CONCAT11(unaff_XMM9_Bf,unaff_XMM9_Be))));
    unaff_XMM9_Be = (char)iVar11;
    unaff_XMM9_Bf = (char)((uint)iVar11 >> 8);
    unaff_XMM9_Bg = (char)((uint)iVar11 >> 0x10);
    unaff_XMM9_Bh = (char)((uint)iVar11 >> 0x18);
    iVar11 = -(uint)(CONCAT13(unaff_XMM9_Bl,
                              CONCAT12(unaff_XMM9_Bk,CONCAT11(unaff_XMM9_Bj,unaff_XMM9_Bi))) ==
                    CONCAT13(unaff_XMM9_Bl,
                             CONCAT12(unaff_XMM9_Bk,CONCAT11(unaff_XMM9_Bj,unaff_XMM9_Bi))));
    unaff_XMM9_Bi = (char)iVar11;
    unaff_XMM9_Bj = (char)((uint)iVar11 >> 8);
    unaff_XMM9_Bk = (char)((uint)iVar11 >> 0x10);
    unaff_XMM9_Bl = (char)((uint)iVar11 >> 0x18);
    iVar11 = -(uint)(CONCAT13(unaff_XMM9_Bp,
                              CONCAT12(unaff_XMM9_Bo,CONCAT11(unaff_XMM9_Bn,unaff_XMM9_Bm))) ==
                    CONCAT13(unaff_XMM9_Bp,
                             CONCAT12(unaff_XMM9_Bo,CONCAT11(unaff_XMM9_Bn,unaff_XMM9_Bm))));
    unaff_XMM9_Bm = (char)iVar11;
    unaff_XMM9_Bn = (char)((uint)iVar11 >> 8);
    unaff_XMM9_Bo = (char)((uint)iVar11 >> 0x10);
    unaff_XMM9_Bp = (char)((uint)iVar11 >> 0x18);
    fVar71 = (float)_DAT_142f89640;
    uVar32 = (ulonglong)_DAT_142f89640 >> 0x20;
    plStack_230 = plStack_118 + 4;
    plStack_228 = plStack_118 + 10;
    plVar39 = (longlong *)(ulonglong)uStack_180;
    bStack_129 = bStack_1b8;
    pauStack_1c8 = pauStack_190;
    plVar36 = (longlong *)CONCAT17(uStack_1a9,CONCAT43(uStack_1ad,uStack_1b1._1_3_));
    param_3 = (longlong *)CONCAT62(uStack_19e,uStack_1a0);
    plVar27 = plStack_198;
    lVar25 = lStack_178;
    lStack_200 = lStack_1a8;
    do {
      plVar33 = param_3;
      if (lStack_200 == 2) {
LAB_140849547:
        plStack_1d8 = plVar33;
        if ((plVar36 != (longlong *)0x0 & bStack_129) != 1) goto LAB_14084b5ca;
        lStack_1d0 = 2;
        lStack_200 = 2;
        plStack_218 = (longlong *)0x0;
        plVar34 = plVar36;
        plStack_1f8 = plVar39;
        lStack_1e0 = lVar25;
        plStack_1c0 = plVar27;
      }
      else {
        if (plVar27 != (longlong *)0x0) {
          if (lVar25 == 0) {
            lVar25 = 0;
            goto joined_r0x0001408494e7;
          }
          unaff_R14 = plVar39;
          if ((short)plVar39 == 0) {
            do {
              auVar47 = *pauStack_1c8;
              plVar27 = plVar27 + -0x130;
              pauStack_1c8 = pauStack_1c8 + 1;
              uVar22 = (ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar47[0xf] >> 7) << 0xf) ^ 0xffff;
              unaff_R14 = (longlong *)(ulonglong)uVar22;
            } while (uVar22 == 0);
          }
          uVar22 = 0;
          uVar23 = (uint)unaff_R14;
          for (uVar24 = uVar23; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
            uVar22 = uVar22 + 1;
          }
          uVar26 = (ulonglong)uVar22;
          param_2 = (longlong *)(uVar26 * -0x98);
          plVar33 = plVar36;
          lStack_1e0 = lVar25;
          plStack_1c0 = plVar27;
          lStack_1d0 = pdb_140c44590(plVar27 + uVar26 * -0x13 + -0x13);
          plVar39 = (longlong *)(ulonglong)(uVar23 - 1 & uVar23);
          lVar25 = lStack_1e0 + -1;
          plStack_1f8 = plVar39;
          lStack_1e0 = lVar25;
          if (lStack_1d0 != 3) {
            plVar34 = plStack_1c0 + uVar26 * -0x13 + -0x12;
            plStack_218 = plVar36;
            plStack_210 = plVar33;
            plStack_1d8 = param_3;
            goto LAB_14084957f;
          }
          if (lStack_200 == 1) goto LAB_1408494e9;
LAB_140849540:
          plVar27 = (longlong *)0x0;
          plVar33 = param_3;
          goto LAB_140849547;
        }
joined_r0x0001408494e7:
        if (lStack_200 != 1) goto LAB_140849540;
LAB_1408494e9:
        lStack_200 = 1;
        plVar27 = (longlong *)0x0;
        plStack_1d8 = (longlong *)0x0;
        plVar33 = plStack_1d8;
        if (param_3 == (longlong *)0x0) goto LAB_140849547;
        plStack_1c0 = (longlong *)0x0;
        plStack_1d8 = (longlong *)0x0;
        lStack_1d0 = 1;
        plVar34 = param_3;
        plStack_218 = plVar36;
        plStack_1f8 = plVar39;
        lStack_1e0 = lVar25;
      }
LAB_14084957f:
      pdb_140c3ba10(&bStack_1b8,plVar34);
      lVar25 = CONCAT17((undefined1)uStack_1b1,CONCAT43(uStack_1b5,CONCAT21(uStack_1b7,bStack_1b8)))
      ;
      param_4 = (undefined1 (*) [16])CONCAT17(uStack_1a9,CONCAT43(uStack_1ad,uStack_1b1._1_3_));
      uVar22 = (uint)uStack_1a0;
      plStack_1e8 = plStack_198;
      pauStack_250 = pauStack_190;
      pauStack_280 = pauStack_190 + 5;
LAB_1408495bf:
      pauVar19 = pauStack_250;
      if (plStack_1e8 != (longlong *)0x0) {
        if ((short)uVar22 == 0) {
          do {
            auVar47 = *param_4;
            lVar25 = lVar25 + -0x40;
            param_4 = param_4 + 1;
            uVar22 = (ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar47[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar22 == 0);
        }
        iVar11 = 0;
        for (uVar24 = uVar22; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
          iVar11 = iVar11 + 1;
        }
        uVar24 = *(uint *)((lVar25 - (ulonglong)(uint)(iVar11 << 2)) + -4);
        unaff_R13 = (undefined *)(ulonglong)uVar24;
        bStack_1b8 = (byte)uVar24;
        uStack_1b7 = (undefined2)(uVar24 >> 8);
        uStack_1b5._0_1_ = (undefined1)(uVar24 >> 0x18);
        if (*(longlong *)(pauStack_250[4] + 8) != 0) {
          uVar22 = uVar22 - 1 & uVar22;
          plVar36 = (longlong *)((longlong)plStack_1e8 + -1);
          uVar28 = pdb_1400aede0(pauStack_280,&bStack_1b8);
          unaff_R15 = *(ulonglong *)pauVar19[3];
          uVar26 = *(ulonglong *)(pauVar19[3] + 8);
          bVar20 = (byte)(uVar28 >> 0x39);
          auVar47 = ZEXT216(CONCAT11(bVar20,bVar20));
          auVar47 = pshuflw(auVar47,auVar47,0);
          lVar35 = 0;
          while( true ) {
            uVar28 = uVar28 & uVar26;
            auVar5 = *(undefined1 (*) [16])(unaff_R15 + uVar28);
            auVar56[0] = -(auVar5[0] == auVar47[0]);
            auVar56[1] = -(auVar5[1] == auVar47[1]);
            auVar56[2] = -(auVar5[2] == auVar47[2]);
            auVar56[3] = -(auVar5[3] == auVar47[3]);
            auVar56[4] = -(auVar5[4] == auVar47[4]);
            auVar56[5] = -(auVar5[5] == auVar47[5]);
            auVar56[6] = -(auVar5[6] == auVar47[6]);
            auVar56[7] = -(auVar5[7] == auVar47[7]);
            auVar56[8] = -(auVar5[8] == auVar47[0]);
            auVar56[9] = -(auVar5[9] == auVar47[1]);
            auVar56[10] = -(auVar5[10] == auVar47[2]);
            auVar56[0xb] = -(auVar5[0xb] == auVar47[3]);
            auVar56[0xc] = -(auVar5[0xc] == auVar47[4]);
            auVar56[0xd] = -(auVar5[0xd] == auVar47[5]);
            auVar56[0xe] = -(auVar5[0xe] == auVar47[6]);
            auVar56[0xf] = -(auVar5[0xf] == auVar47[7]);
            uVar42 = (ushort)(SUB161(auVar56 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar56[0xf] >> 7) << 0xf;
            uVar23 = (uint)uVar42;
            while (uVar42 != 0) {
              uVar9 = 0;
              for (uVar10 = uVar23; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                uVar9 = uVar9 + 1;
              }
              unaff_R14 = (longlong *)((uVar9 + uVar28 & uVar26) * -0x68);
              if (uVar24 == *(uint *)((unaff_R15 - 0x68) + (longlong)unaff_R14)) {
                plStack_1e8 = plVar36;
                bVar20 = pdb_140c45920(&uStack_290,unaff_R13);
                uVar23 = (uint)bVar20;
                plStack_138 = (longlong *)(ulonglong)uVar23;
                if (1 < uVar23 - 0x10) {
                  if (uVar23 != 0x12) goto LAB_1408495bf;
                  if (lStack_1d0 == 0) {
                    uVar26 = pdb_140b54b40(uStack_248,plStack_210);
                    if (((((uVar26 & 0xffffffff) == 0) ||
                         (uVar28 = uVar26 & 0xffffffff ^ 0xffffffff,
                         *(ulonglong *)(lStack_220 + 0x10) <= uVar28)) ||
                        (piVar30 = (int *)(uVar28 * 0x18 + *(longlong *)(lStack_220 + 8)),
                        piVar30[4] != (int)(uVar26 >> 0x20))) ||
                       (((*piVar30 == 0 ||
                         (uVar26 = *(ulonglong *)(piVar30 + 2),
                         *(ulonglong *)(lStack_208 + 0x38) <= (uVar26 & 0xffffffff))) ||
                        (((*(ulonglong *)
                            (*(longlong *)(lStack_208 + 0x28) + (uVar26 >> 6 & 0x3ffffff) * 8) >>
                           (uVar26 & 0x3f) & 1) == 0 ||
                         (cVar21 = pdb_140b77b50((ulonglong)(uint)~piVar30[1] * 0x58 +
                                                 *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)(lStack_220 + 0x1a0) + 0x18 +
                                                    (uVar26 >> 0x20) * 0x48) + 0x10 +
                                                  ~*(ulonglong *)
                                                    (*(longlong *)
                                                      (*(longlong *)(lStack_220 + 0x1a0) + 0x38 +
                                                      (uVar26 >> 0x20) * 0x48) +
                                                    *(longlong *)(lStack_208 + 0x110) * 8) * 0x30)),
                         cVar21 == '\0')))))) goto LAB_1408495bf;
                  }
                  else if (lStack_1d0 != 2) goto LAB_14084b6a0;
                }
                puStack_128 = (undefined *)(unaff_R15 + (longlong)unaff_R14);
                uStack_f1 = puStack_128[-8];
                *puStack_270 = uStack_234;
                plStack_120 = (longlong *)
                              pdb_1408f3750(uStack_278,uVar24,lStack_1d0,plStack_210,uStack_f1);
                pdb_140c45ec0(&fStack_168,lStack_268,uVar24,&UNK_14300be88);
                if (bVar20 == 0x12) {
                  if (puStack_128[-0x2e] != '\x04') goto LAB_14084ace6;
                  iVar11 = *(int *)(puStack_128 + -0x50);
                  uVar24 = *(uint *)(puStack_128 + -0x4c);
                  unaff_R13 = (undefined *)(ulonglong)uVar24;
                  fVar70 = *(float *)(puStack_128 + -0x48);
                  uVar69 = *(undefined4 *)(puStack_128 + -0x44);
                  lVar35 = pdb_140c40010(lStack_260,iVar11);
                  if (((lVar35 == 0) || (lVar35 = pdb_1409014e0(lVar35 + 0x38), lVar35 == 0)) ||
                     (cVar21 = pdb_1408ff980(lVar35 + 0x16), cVar21 == '\0')) goto LAB_14084ace6;
                  lVar35 = *(longlong *)(lStack_258 + 8);
                  lVar43 = 0;
                  goto LAB_140849960;
                }
                uVar12 = (undefined3)(uVar24 >> 8);
                if (plStack_138._0_4_ == 2.38221e-44) {
                  uVar69 = CONCAT31(uVar12,puStack_128[-7]);
                  cVar21 = pdb_1409012c0(0x11,uStack_170);
                  bStack_108 = pdb_140c44ba0(uVar69);
                  cStack_107 = cVar21;
                  if (plStack_118[3] == 0) goto LAB_14084b44d;
                  uVar28 = pdb_1413f0300(plStack_230,&bStack_108);
                  lVar35 = *plStack_118;
                  uVar26 = plStack_118[1];
                  bVar20 = (byte)(uVar28 >> 0x39);
                  auVar47 = ZEXT216(CONCAT11(bVar20,bVar20));
                  auVar47 = pshuflw(auVar47,auVar47,0);
                  lVar43 = 0;
                  goto LAB_1408497f6;
                }
                if (lStack_1d0 == 0) {
                  lVar35 = pdb_140b54f80(uStack_248,plStack_210,&UNK_14300bea0);
                  if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_14300beb8);
                  }
                  unaff_R13 = (undefined *)(ulonglong)CONCAT31(uVar12,puStack_128[-7]);
                  cVar21 = pdb_1409012c0(0x10,uStack_170);
                  bStack_108 = pdb_140c44ba0(unaff_R13);
                  cStack_107 = cVar21;
                  lVar43 = pdb_141494370(plStack_118,&bStack_108);
                  if (lVar43 == 0) goto LAB_14084b7ba;
                  fVar70 = uStack_158._4_4_;
                  fVar72 = *(float *)(lVar43 + 0x3c) * fStack_148;
                  cVar21 = pdb_1408ff980(lVar35 + 0x29f);
                  if (((cVar21 != '\0') && (*(uint *)(lVar35 + 600) < 2)) &&
                     ((0.0 < *(float *)(lVar35 + 0x294) &&
                      (fVar46 = (float)pdb_14092f940(lVar35), fVar72 + fVar70 <= fVar46)))) {
                    fVar63 = fStack_160 * fStack_160;
                    fVar65 = fStack_15c * fStack_15c;
                    fVar48 = fStack_164 * fStack_164 + fStack_168 * fStack_168;
                    fVar46 = fStack_160 * _UNK_14300bbc8 +
                             fStack_164 * _UNK_14300bbc4 + fStack_168 * _DAT_14300bbc0;
                    fVar46 = fVar46 + fVar46;
                    fVar72 = fStack_15c + fStack_15c;
                    uStack_158 = (ulonglong)
                                 (uint)((float)uStack_158 -
                                       (fVar72 * (fStack_164 * _DAT_142e37ad4 - fStack_160 * 0.0) +
                                       fVar46 * fStack_168 +
                                       (fVar65 - (fVar48 + fVar63)) * _DAT_14300bbc0));
                    fVar70 = fVar70 - (fVar72 * (fStack_160 * 0.0 - fStack_168 * _DAT_142e37ad4) +
                                      fVar46 * fStack_164 +
                                      (fVar65 - (fVar48 + fVar63)) * _UNK_14300bbc4);
                    fStack_150 = fStack_150 -
                                 (fVar72 * (fStack_168 * 0.0 - fStack_164 * 0.0) +
                                 fVar46 * fStack_160 + (fVar65 - (fVar48 + fVar63)) * _UNK_14300bbc8
                                 );
                  }
                }
                else {
                  fVar70 = uStack_158._4_4_;
                }
                fVar65 = fStack_15c;
                fVar63 = fStack_160;
                fVar46 = fStack_164;
                fVar72 = fStack_168;
                fVar64 = fStack_160 * fStack_160;
                fVar66 = fStack_15c * fStack_15c;
                fVar67 = fStack_164 * fStack_164 + fStack_168 * fStack_168;
                fVar48 = fStack_160 * fVar18 + fStack_164 * fVar17 + fStack_168 * fVar16;
                fVar48 = fVar48 + fVar48;
                fVar73 = fStack_15c + fStack_15c;
                fVar68 = (float)uStack_158 +
                         fVar73 * (fStack_164 * fVar13 - fStack_160 * 0.0) +
                         fVar48 * fStack_168 + (fVar66 - (fVar67 + fVar64)) * fVar16;
                fVar70 = fVar70 + fVar73 * (fStack_160 * 0.0 - fStack_168 * fVar13) +
                                  fVar48 * fStack_164 + (fVar66 - (fVar67 + fVar64)) * fVar17;
                uStack_158 = CONCAT44(fVar70,fVar68);
                fVar48 = fVar73 * (fStack_168 * 0.0 - fStack_164 * 0.0) +
                         fVar48 * fStack_160 + (fVar66 - (fVar67 + fVar64)) * fVar18 + fStack_150;
                uVar45 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),puStack_128[-7]);
                fStack_150 = fVar48;
                cVar21 = pdb_1409012c0(0x10,uStack_170);
                bStack_108 = pdb_140c44ba0(uVar45);
                cStack_107 = cVar21;
                if (plStack_118[3] == 0) goto LAB_14084b4c5;
                uVar28 = pdb_1413f0300(plStack_230,&bStack_108);
                lVar35 = *plStack_118;
                uVar26 = plStack_118[1];
                bVar20 = (byte)(uVar28 >> 0x39);
                auVar47 = ZEXT216(CONCAT11(bVar20,bVar20));
                auVar47 = pshuflw(auVar47,auVar47,0);
                lVar43 = 0;
                goto LAB_14084a49a;
              }
              uVar42 = (ushort)(uVar23 - 1) & (ushort)uVar23;
              uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar42);
            }
            auVar49[0] = -(auVar5[0] == unaff_XMM9_Ba);
            auVar49[1] = -(auVar5[1] == unaff_XMM9_Bb);
            auVar49[2] = -(auVar5[2] == unaff_XMM9_Bc);
            auVar49[3] = -(auVar5[3] == unaff_XMM9_Bd);
            auVar49[4] = -(auVar5[4] == unaff_XMM9_Be);
            auVar49[5] = -(auVar5[5] == unaff_XMM9_Bf);
            auVar49[6] = -(auVar5[6] == unaff_XMM9_Bg);
            auVar49[7] = -(auVar5[7] == unaff_XMM9_Bh);
            auVar49[8] = -(auVar5[8] == unaff_XMM9_Bi);
            auVar49[9] = -(auVar5[9] == unaff_XMM9_Bj);
            auVar49[10] = -(auVar5[10] == unaff_XMM9_Bk);
            auVar49[0xb] = -(auVar5[0xb] == unaff_XMM9_Bl);
            auVar49[0xc] = -(auVar5[0xc] == unaff_XMM9_Bm);
            auVar49[0xd] = -(auVar5[0xd] == unaff_XMM9_Bn);
            auVar49[0xe] = -(auVar5[0xe] == unaff_XMM9_Bo);
            auVar49[0xf] = -(auVar5[0xf] == unaff_XMM9_Bp);
            if ((((((((((((((((SUB161(auVar49 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar49 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar49 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar49 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar49 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar49 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar49 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar49 >> 0x3f,0) & 1) != 0) || (SUB161(auVar49 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar49 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar49 >> 0x57,0) & 1) != 0) || (SUB161(auVar49 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar49 >> 0x67,0) & 1) != 0) || (SUB161(auVar49 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar49 >> 0x77,0) & 1) != 0) || auVar49[0xf] < '\0') break;
            uVar28 = uVar28 + lVar35 + 0x10;
            lVar35 = lVar35 + 0x10;
          }
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14300bd18);
      }
      param_2 = (longlong *)0x0;
      plStack_1e8 = (longlong *)0x0;
      plVar39 = plStack_1f8;
      plVar36 = plStack_218;
      param_3 = plStack_1d8;
      plVar27 = plStack_1c0;
      lVar25 = lStack_1e0;
    } while( true );
  }
  goto LAB_14084b674;
LAB_14084ae2e:
  plVar36 = *(longlong **)(lVar35 + -0x28 + uVar38 * -0x48);
  LOCK();
  lVar43 = *plVar36;
  *plVar36 = *plVar36 + 1;
  UNLOCK();
  if (*plVar36 != 0 && SCARRY8(lVar43,1) == *plVar36 < 0) {
    uStack_f4 = 1;
    plStack_1f0 = plVar36;
    plStack_138 = plVar36;
    cVar21 = pdb_1409012c0(CONCAT71((int7)((ulonglong)lVar35 >> 8),0x12),uStack_170);
    uStack_f4 = 1;
    bStack_108 = pdb_140c44ba0(uVar26 & 0xffffffff);
    cStack_107 = cVar21;
    if (plStack_118[9] != 0) {
      uStack_f4 = 1;
      uVar28 = pdb_1413f0300(plStack_228,&bStack_108);
      unaff_R13 = (undefined *)plStack_118[6];
      uVar26 = plStack_118[7];
      bVar20 = (byte)(uVar28 >> 0x39);
      auVar47 = ZEXT216(CONCAT11(bVar20,bVar20));
      auVar47 = pshuflw(auVar47,auVar47,0);
      lVar35 = 0;
      while( true ) {
        uVar28 = uVar28 & uVar26;
        auVar5 = *(undefined1 (*) [16])(unaff_R13 + uVar28);
        auVar62[0] = -(auVar5[0] == auVar47[0]);
        auVar62[1] = -(auVar5[1] == auVar47[1]);
        auVar62[2] = -(auVar5[2] == auVar47[2]);
        auVar62[3] = -(auVar5[3] == auVar47[3]);
        auVar62[4] = -(auVar5[4] == auVar47[4]);
        auVar62[5] = -(auVar5[5] == auVar47[5]);
        auVar62[6] = -(auVar5[6] == auVar47[6]);
        auVar62[7] = -(auVar5[7] == auVar47[7]);
        auVar62[8] = -(auVar5[8] == auVar47[0]);
        auVar62[9] = -(auVar5[9] == auVar47[1]);
        auVar62[10] = -(auVar5[10] == auVar47[2]);
        auVar62[0xb] = -(auVar5[0xb] == auVar47[3]);
        auVar62[0xc] = -(auVar5[0xc] == auVar47[4]);
        auVar62[0xd] = -(auVar5[0xd] == auVar47[5]);
        auVar62[0xe] = -(auVar5[0xe] == auVar47[6]);
        auVar62[0xf] = -(auVar5[0xf] == auVar47[7]);
        uVar42 = (ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe | (ushort)(auVar62[0xf] >> 7) << 0xf
        ;
        uVar24 = (uint)uVar42;
        if (uVar42 != 0) {
          if (bStack_108 == 0x1a) {
            do {
              uVar23 = 0;
              for (uVar9 = uVar24; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar23 = uVar23 + 1;
              }
              uVar37 = uVar23 + uVar28 & uVar26;
              if (unaff_R13[uVar37 * -0x48 + -0x48] == '\x1a') goto LAB_14084afa3;
              uVar42 = (ushort)(uVar24 - 1) & (ushort)uVar24;
              uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar42);
            } while (uVar42 != 0);
          }
          else {
            do {
              uVar23 = 0;
              for (uVar9 = uVar24; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar23 = uVar23 + 1;
              }
              uVar37 = uVar23 + uVar28 & uVar26;
              if (((unaff_R13[uVar37 * -0x48 + -0x48] != 0x1a) &&
                  (bStack_108 == unaff_R13[uVar37 * -0x48 + -0x48])) &&
                 (cStack_107 == unaff_R13[uVar37 * -0x48 + -0x47])) goto LAB_14084afa3;
              uVar42 = (ushort)(uVar24 - 1) & (ushort)uVar24;
              uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar42);
            } while (uVar42 != 0);
          }
        }
        auVar55[0] = -(auVar5[0] == unaff_XMM9_Ba);
        auVar55[1] = -(auVar5[1] == unaff_XMM9_Bb);
        auVar55[2] = -(auVar5[2] == unaff_XMM9_Bc);
        auVar55[3] = -(auVar5[3] == unaff_XMM9_Bd);
        auVar55[4] = -(auVar5[4] == unaff_XMM9_Be);
        auVar55[5] = -(auVar5[5] == unaff_XMM9_Bf);
        auVar55[6] = -(auVar5[6] == unaff_XMM9_Bg);
        auVar55[7] = -(auVar5[7] == unaff_XMM9_Bh);
        auVar55[8] = -(auVar5[8] == unaff_XMM9_Bi);
        auVar55[9] = -(auVar5[9] == unaff_XMM9_Bj);
        auVar55[10] = -(auVar5[10] == unaff_XMM9_Bk);
        auVar55[0xb] = -(auVar5[0xb] == unaff_XMM9_Bl);
        auVar55[0xc] = -(auVar5[0xc] == unaff_XMM9_Bm);
        auVar55[0xd] = -(auVar5[0xd] == unaff_XMM9_Bn);
        auVar55[0xe] = -(auVar5[0xe] == unaff_XMM9_Bo);
        auVar55[0xf] = -(auVar5[0xf] == unaff_XMM9_Bp);
        if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 || (SUB161(auVar55 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar55 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar55 >> 0x1f,0) & 1) != 0) || (SUB161(auVar55 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar55 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar55 >> 0x37,0) & 1) != 0) || (SUB161(auVar55 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar55 >> 0x47,0) & 1) != 0) || (SUB161(auVar55 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar55 >> 0x57,0) & 1) != 0) || (SUB161(auVar55 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar55 >> 0x67,0) & 1) != 0) || (SUB161(auVar55 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar55 >> 0x77,0) & 1) != 0) || auVar55[0xf] < '\0') break;
        uVar28 = uVar28 + lVar35 + 0x10;
        lVar35 = lVar35 + 0x10;
      }
    }
    bStack_1b8 = (byte)&bStack_108;
    uStack_1b7 = (undefined2)((ulonglong)&bStack_108 >> 8);
    uStack_1b5 = (undefined4)((ulonglong)&bStack_108 >> 0x18);
    uStack_1b1._0_1_ = (undefined1)((ulonglong)&bStack_108 >> 0x38);
    uStack_1b1 = CONCAT31(0x848e60,(undefined1)uStack_1b1);
    uStack_1ad = 0x140;
    uStack_1a9 = 0;
    uStack_f4 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14300bd6d,&bStack_1b8,&UNK_14300bdb8);
  }
  goto LAB_14084b7f1;
LAB_14084afa3:
  plVar36 = *(longlong **)(unaff_R13 + uVar37 * -0x48 + -0x28);
  LOCK();
  lVar35 = *plVar36;
  *plVar36 = *plVar36 + 1;
  UNLOCK();
  if (*plVar36 != 0 && SCARRY8(lVar35,1) == *plVar36 < 0) {
    fStack_100 = fStack_150;
    bStack_108 = (byte)uStack_158;
    cStack_107 = (char)(uStack_158 >> 8);
    uStack_106 = (uint5)(uStack_158 >> 0x10);
    uStack_101 = (undefined1)(uStack_158 >> 0x38);
    bStack_1b8 = SUB41(fStack_168,0);
    uStack_1b7 = (undefined2)((uint)fStack_168 >> 8);
    uStack_1b5 = (undefined4)(CONCAT44(fStack_164,fStack_168) >> 0x18);
    uStack_1b1._1_3_ = SUB43(fStack_160,0);
    uStack_1b1 = CONCAT31(uStack_1b1._1_3_,(char)((uint)fStack_164 >> 0x18));
    uStack_1ad = (undefined4)(CONCAT44(fStack_15c,fStack_160) >> 0x18);
    uStack_1a9 = (undefined1)((uint)fStack_15c >> 0x18);
    uStack_f4 = 0;
    pdb_1408f3120(plStack_120,plStack_138,plVar36,&bStack_108,&bStack_1b8);
    if (*plStack_120 != 0 || plStack_120[1] != 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14301ce21,0x17,&UNK_14301ce30);
    }
    plStack_120[1] = 0;
    *plStack_120 = 1;
    plStack_120[2] = CONCAT44(fStack_164,fStack_168);
    plStack_120[3] = CONCAT44(fStack_15c,fStack_160);
    plStack_120[4] = uStack_158;
    plStack_120[5] = CONCAT44(uStack_14c,fStack_150);
    plStack_120[6] = CONCAT44(uStack_144,fStack_148);
    plStack_120[7] = lStack_140;
    plVar36 = plStack_120 + 0x16;
    uStack_1ad = 0;
    uStack_1b5 = 0;
    uStack_1b1 = 0;
    fStack_100 = 0.0;
    uStack_fc = 0;
    bStack_108 = bStack_1b8;
    cStack_107 = (char)uStack_1b7;
    uStack_106 = (uint5)(byte)((ushort)uStack_1b7 >> 8);
    uStack_101 = 0;
    lVar35 = plStack_120[0x18];
    if (lVar35 == plStack_120[0x16]) {
      pdb_142d8ddd0(plVar36);
    }
    lVar43 = plStack_120[0x17];
    lVar31 = lVar35 * 0x170;
    *(undefined8 *)(lVar43 + lVar31) = 0;
    *(undefined8 *)(lVar43 + 0x10 + lVar31) = 0;
    *(undefined8 *)(lVar43 + 0x20 + lVar31) = 0;
    *(undefined8 *)(lVar43 + 0x30 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x40 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x50 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x60 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x70 + lVar31) = 2;
    *(undefined **)(lVar43 + 0x90 + lVar31) = &UNK_14300bff8;
    *(undefined8 *)(lVar43 + 0x98 + lVar31) = 0x1c;
    *(undefined **)(lVar43 + 0xa0 + lVar31) = &UNK_14330daf5;
    *(undefined8 *)(lVar43 + 0xa8 + lVar31) = 0x16;
    puVar3 = (undefined8 *)(lVar43 + 0xb0 + lVar31);
    *puVar3 = CONCAT44(fStack_164,fStack_168);
    puVar3[1] = CONCAT44(fStack_15c,fStack_160);
    puVar4 = (ulonglong *)(lVar43 + 0xc0 + lVar31);
    *puVar4 = uStack_158;
    puVar4[1] = CONCAT44(uStack_14c,fStack_150);
    puVar3 = (undefined8 *)(lVar43 + 0xd0 + lVar31);
    *puVar3 = CONCAT44(uStack_144,fStack_148);
    puVar3[1] = lStack_140;
    *(undefined4 *)(lVar43 + 0xe0 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0xe8 + lVar31) = 0;
    *(undefined1 *)(lVar43 + 0x105 + lVar31) = 2;
    *(undefined4 *)(lVar43 + 0x108 + lVar31) = 0;
    *(undefined1 *)(lVar43 + 0x15c + lVar31) = 2;
    *(ulonglong *)(lVar43 + 0x15d + lVar31) =
         CONCAT17(uStack_101,CONCAT52(uStack_106,CONCAT11(cStack_107,bStack_108)));
    *(ulonglong *)(lVar43 + 0x164 + lVar31) = CONCAT35(uStack_fc,CONCAT41(fStack_100,uStack_101));
    *(undefined1 *)(lVar43 + 0x16c + lVar31) = 2;
    *(undefined1 *)(lVar43 + 0x16e + lVar31) = uStack_f1;
    *(undefined1 *)(lVar43 + 0x16f + lVar31) = 0;
    plStack_120[0x18] = lVar35 + 1;
    uStack_1ad = 0;
    uStack_1b5 = 0;
    uStack_1b1 = 0;
    fStack_100 = 0.0;
    uStack_fc = 0;
    bStack_108 = bStack_1b8;
    cStack_107 = (char)uStack_1b7;
    uStack_106 = (uint5)(byte)((ushort)uStack_1b7 >> 8);
    uStack_101 = 0;
    puVar29 = (undefined4 *)pdb_1409013f0(puStack_128 + -0x28,&UNK_14300c038);
    uVar69 = *puVar29;
    uStack_1ad = (undefined4)(CONCAT35(uStack_fc,CONCAT41(fStack_100,uStack_101)) >> 0x20);
    bStack_1b8 = bStack_108;
    uStack_1b7 = (undefined2)(CONCAT52(uStack_106,CONCAT11(cStack_107,bStack_108)) >> 8);
    uStack_1b5 = (undefined4)(uStack_106 >> 8);
    uStack_1b1._1_3_ = SUB43(fStack_100,0);
    uStack_1b1 = CONCAT31(uStack_1b1._1_3_,uStack_101);
    uVar24 = *(uint *)(puStack_128 + -0x10);
    lVar35 = plStack_120[0x18];
    if (lVar35 == plStack_120[0x16]) {
      pdb_142d8ddd0(plVar36);
    }
    lVar43 = plStack_120[0x17];
    lVar31 = lVar35 * 0x170;
    *(undefined8 *)(lVar43 + lVar31) = 0;
    *(undefined8 *)(lVar43 + 0x10 + lVar31) = 0;
    *(undefined8 *)(lVar43 + 0x20 + lVar31) = 0;
    *(undefined8 *)(lVar43 + 0x30 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x40 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x50 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x60 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x70 + lVar31) = 2;
    *(undefined **)(lVar43 + 0x90 + lVar31) = &UNK_14300c014;
    *(undefined8 *)(lVar43 + 0x98 + lVar31) = 0x23;
    *(undefined **)(lVar43 + 0xa0 + lVar31) = &UNK_14330dcd8;
    *(undefined8 *)(lVar43 + 0xa8 + lVar31) = 0x22;
    puVar3 = (undefined8 *)(lVar43 + 0xb0 + lVar31);
    *puVar3 = CONCAT44(fStack_164,fStack_168);
    puVar3[1] = CONCAT44(fStack_15c,fStack_160);
    puVar4 = (ulonglong *)(lVar43 + 0xc0 + lVar31);
    *puVar4 = uStack_158;
    puVar4[1] = CONCAT44(uStack_14c,fStack_150);
    puVar3 = (undefined8 *)(lVar43 + 0xd0 + lVar31);
    *puVar3 = CONCAT44(uStack_144,fStack_148);
    puVar3[1] = lStack_140;
    *(undefined4 *)(lVar43 + 0xe0 + lVar31) = 1;
    *(uint *)(lVar43 + 0xe4 + lVar31) = uVar24;
    *(undefined4 *)(lVar43 + 0xe8 + lVar31) = 0;
    *(undefined1 *)(lVar43 + 0x105 + lVar31) = 2;
    *(undefined4 *)(lVar43 + 0x108 + lVar31) = 1;
    *(undefined8 *)(lVar43 + 0x10c + lVar31) = _DAT_14300bb90;
    *(undefined4 *)(lVar43 + 0x114 + lVar31) = 0;
    goto LAB_14084b37d;
  }
  goto LAB_14084b7f1;
LAB_1408497f6:
  uVar28 = uVar28 & uVar26;
  auVar5 = *(undefined1 (*) [16])(lVar35 + uVar28);
  auVar57[0] = -(auVar5[0] == auVar47[0]);
  auVar57[1] = -(auVar5[1] == auVar47[1]);
  auVar57[2] = -(auVar5[2] == auVar47[2]);
  auVar57[3] = -(auVar5[3] == auVar47[3]);
  auVar57[4] = -(auVar5[4] == auVar47[4]);
  auVar57[5] = -(auVar5[5] == auVar47[5]);
  auVar57[6] = -(auVar5[6] == auVar47[6]);
  auVar57[7] = -(auVar5[7] == auVar47[7]);
  auVar57[8] = -(auVar5[8] == auVar47[0]);
  auVar57[9] = -(auVar5[9] == auVar47[1]);
  auVar57[10] = -(auVar5[10] == auVar47[2]);
  auVar57[0xb] = -(auVar5[0xb] == auVar47[3]);
  auVar57[0xc] = -(auVar5[0xc] == auVar47[4]);
  auVar57[0xd] = -(auVar5[0xd] == auVar47[5]);
  auVar57[0xe] = -(auVar5[0xe] == auVar47[6]);
  auVar57[0xf] = -(auVar5[0xf] == auVar47[7]);
  uVar42 = (ushort)(SUB161(auVar57 >> 7,0) & 1) | (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe | (ushort)(auVar57[0xf] >> 7) << 0xf;
  uVar24 = (uint)uVar42;
  if (uVar42 != 0) {
    if (bStack_108 == 0x1a) {
      do {
        uVar23 = 0;
        for (uVar9 = uVar24; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar23 = uVar23 + 1;
        }
        uVar37 = uVar23 + uVar28 & uVar26;
        if (*(char *)(lVar35 + -0x48 + uVar37 * -0x48) == '\x1a') goto LAB_1408499f3;
        uVar42 = (ushort)(uVar24 - 1) & (ushort)uVar24;
        uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar42);
      } while (uVar42 != 0);
    }
    else {
      do {
        uVar23 = 0;
        for (uVar9 = uVar24; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar23 = uVar23 + 1;
        }
        uVar37 = uVar23 + uVar28 & uVar26;
        bVar20 = *(byte *)(lVar35 + -0x48 + uVar37 * -0x48);
        if (((bVar20 != 0x1a) && (bStack_108 == bVar20)) &&
           (cStack_107 == *(char *)(lVar35 + uVar37 * -0x48 + -0x47))) goto LAB_1408499f3;
        uVar42 = (ushort)(uVar24 - 1) & (ushort)uVar24;
        uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar42);
      } while (uVar42 != 0);
    }
  }
  auVar50[0] = -(auVar5[0] == unaff_XMM9_Ba);
  auVar50[1] = -(auVar5[1] == unaff_XMM9_Bb);
  auVar50[2] = -(auVar5[2] == unaff_XMM9_Bc);
  auVar50[3] = -(auVar5[3] == unaff_XMM9_Bd);
  auVar50[4] = -(auVar5[4] == unaff_XMM9_Be);
  auVar50[5] = -(auVar5[5] == unaff_XMM9_Bf);
  auVar50[6] = -(auVar5[6] == unaff_XMM9_Bg);
  auVar50[7] = -(auVar5[7] == unaff_XMM9_Bh);
  auVar50[8] = -(auVar5[8] == unaff_XMM9_Bi);
  auVar50[9] = -(auVar5[9] == unaff_XMM9_Bj);
  auVar50[10] = -(auVar5[10] == unaff_XMM9_Bk);
  auVar50[0xb] = -(auVar5[0xb] == unaff_XMM9_Bl);
  auVar50[0xc] = -(auVar5[0xc] == unaff_XMM9_Bm);
  auVar50[0xd] = -(auVar5[0xd] == unaff_XMM9_Bn);
  auVar50[0xe] = -(auVar5[0xe] == unaff_XMM9_Bo);
  auVar50[0xf] = -(auVar5[0xf] == unaff_XMM9_Bp);
  if ((((((((((((((((SUB161(auVar50 >> 7,0) & 1) != 0 || (SUB161(auVar50 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar50 >> 0x17,0) & 1) != 0) || (SUB161(auVar50 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar50 >> 0x27,0) & 1) != 0) || (SUB161(auVar50 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar50 >> 0x37,0) & 1) != 0) || (SUB161(auVar50 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar50 >> 0x47,0) & 1) != 0) || (SUB161(auVar50 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar50 >> 0x57,0) & 1) != 0) || (SUB161(auVar50 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar50 >> 0x67,0) & 1) != 0) || (SUB161(auVar50 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar50 >> 0x77,0) & 1) != 0) || auVar50[0xf] < '\0') {
LAB_14084b44d:
    bStack_1b8 = (byte)&bStack_108;
    uStack_1b7 = (undefined2)((ulonglong)&bStack_108 >> 8);
    uStack_1b5 = (undefined4)((ulonglong)&bStack_108 >> 0x18);
    uStack_1b1._0_1_ = (undefined1)((ulonglong)&bStack_108 >> 0x38);
    uStack_1b1 = CONCAT31(0x848e60,(undefined1)uStack_1b1);
    uStack_1ad = 0x140;
    uStack_1a9 = 0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14300bd6d,&bStack_1b8,&UNK_14300bda0);
  }
  uVar28 = uVar28 + lVar43 + 0x10;
  lVar43 = lVar43 + 0x10;
  goto LAB_1408497f6;
LAB_1408499f3:
  plVar36 = *(longlong **)(lVar35 + -0x28 + uVar37 * -0x48);
  LOCK();
  lVar43 = *plVar36;
  *plVar36 = *plVar36 + 1;
  UNLOCK();
  if (*plVar36 != 0 && SCARRY8(lVar43,1) == *plVar36 < 0) {
    uStack_f3 = 1;
    plStack_1f0 = plVar36;
    plStack_138 = plVar36;
    cVar21 = pdb_1409012c0(CONCAT71((int7)((ulonglong)lVar35 >> 8),0x11),uStack_170);
    uStack_f3 = 1;
    bStack_108 = pdb_140c44ba0(uVar69);
    cStack_107 = cVar21;
    if (plStack_118[9] != 0) {
      uStack_f3 = 1;
      uVar28 = pdb_1413f0300(plStack_228,&bStack_108);
      unaff_R13 = (undefined *)plStack_118[6];
      uVar26 = plStack_118[7];
      bVar20 = (byte)(uVar28 >> 0x39);
      auVar47 = ZEXT216(CONCAT11(bVar20,bVar20));
      auVar47 = pshuflw(auVar47,auVar47,0);
      lVar35 = 0;
      while( true ) {
        uVar28 = uVar28 & uVar26;
        auVar5 = *(undefined1 (*) [16])(unaff_R13 + uVar28);
        auVar58[0] = -(auVar5[0] == auVar47[0]);
        auVar58[1] = -(auVar5[1] == auVar47[1]);
        auVar58[2] = -(auVar5[2] == auVar47[2]);
        auVar58[3] = -(auVar5[3] == auVar47[3]);
        auVar58[4] = -(auVar5[4] == auVar47[4]);
        auVar58[5] = -(auVar5[5] == auVar47[5]);
        auVar58[6] = -(auVar5[6] == auVar47[6]);
        auVar58[7] = -(auVar5[7] == auVar47[7]);
        auVar58[8] = -(auVar5[8] == auVar47[0]);
        auVar58[9] = -(auVar5[9] == auVar47[1]);
        auVar58[10] = -(auVar5[10] == auVar47[2]);
        auVar58[0xb] = -(auVar5[0xb] == auVar47[3]);
        auVar58[0xc] = -(auVar5[0xc] == auVar47[4]);
        auVar58[0xd] = -(auVar5[0xd] == auVar47[5]);
        auVar58[0xe] = -(auVar5[0xe] == auVar47[6]);
        auVar58[0xf] = -(auVar5[0xf] == auVar47[7]);
        uVar42 = (ushort)(SUB161(auVar58 >> 7,0) & 1) | (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe | (ushort)(auVar58[0xf] >> 7) << 0xf
        ;
        uVar24 = (uint)uVar42;
        if (uVar42 != 0) {
          if (bStack_108 == 0x1a) {
            do {
              uVar23 = 0;
              for (uVar9 = uVar24; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar23 = uVar23 + 1;
              }
              uVar37 = uVar23 + uVar28 & uVar26;
              if (unaff_R13[uVar37 * -0x48 + -0x48] == '\x1a') goto LAB_140849c4f;
              uVar42 = (ushort)(uVar24 - 1) & (ushort)uVar24;
              uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar42);
            } while (uVar42 != 0);
          }
          else {
            do {
              uVar23 = 0;
              for (uVar9 = uVar24; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar23 = uVar23 + 1;
              }
              uVar37 = uVar23 + uVar28 & uVar26;
              if (((unaff_R13[uVar37 * -0x48 + -0x48] != 0x1a) &&
                  (bStack_108 == unaff_R13[uVar37 * -0x48 + -0x48])) &&
                 (cStack_107 == unaff_R13[uVar37 * -0x48 + -0x47])) goto LAB_140849c4f;
              uVar42 = (ushort)(uVar24 - 1) & (ushort)uVar24;
              uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar42);
            } while (uVar42 != 0);
          }
        }
        auVar51[0] = -(auVar5[0] == unaff_XMM9_Ba);
        auVar51[1] = -(auVar5[1] == unaff_XMM9_Bb);
        auVar51[2] = -(auVar5[2] == unaff_XMM9_Bc);
        auVar51[3] = -(auVar5[3] == unaff_XMM9_Bd);
        auVar51[4] = -(auVar5[4] == unaff_XMM9_Be);
        auVar51[5] = -(auVar5[5] == unaff_XMM9_Bf);
        auVar51[6] = -(auVar5[6] == unaff_XMM9_Bg);
        auVar51[7] = -(auVar5[7] == unaff_XMM9_Bh);
        auVar51[8] = -(auVar5[8] == unaff_XMM9_Bi);
        auVar51[9] = -(auVar5[9] == unaff_XMM9_Bj);
        auVar51[10] = -(auVar5[10] == unaff_XMM9_Bk);
        auVar51[0xb] = -(auVar5[0xb] == unaff_XMM9_Bl);
        auVar51[0xc] = -(auVar5[0xc] == unaff_XMM9_Bm);
        auVar51[0xd] = -(auVar5[0xd] == unaff_XMM9_Bn);
        auVar51[0xe] = -(auVar5[0xe] == unaff_XMM9_Bo);
        auVar51[0xf] = -(auVar5[0xf] == unaff_XMM9_Bp);
        if ((((((((((((((((SUB161(auVar51 >> 7,0) & 1) != 0 || (SUB161(auVar51 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar51 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar51 >> 0x1f,0) & 1) != 0) || (SUB161(auVar51 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar51 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar51 >> 0x37,0) & 1) != 0) || (SUB161(auVar51 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar51 >> 0x47,0) & 1) != 0) || (SUB161(auVar51 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar51 >> 0x57,0) & 1) != 0) || (SUB161(auVar51 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar51 >> 0x67,0) & 1) != 0) || (SUB161(auVar51 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar51 >> 0x77,0) & 1) != 0) || auVar51[0xf] < '\0') break;
        uVar28 = uVar28 + lVar35 + 0x10;
        lVar35 = lVar35 + 0x10;
      }
    }
    bStack_1b8 = (byte)&bStack_108;
    uStack_1b7 = (undefined2)((ulonglong)&bStack_108 >> 8);
    uStack_1b5 = (undefined4)((ulonglong)&bStack_108 >> 0x18);
    uStack_1b1._0_1_ = (undefined1)((ulonglong)&bStack_108 >> 0x38);
    uStack_1b1 = CONCAT31(0x848e60,(undefined1)uStack_1b1);
    uStack_1ad = 0x140;
    uStack_1a9 = 0;
    uStack_f3 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14300bd6d,&bStack_1b8,&UNK_14300bdb8);
  }
  goto LAB_14084b7f1;
LAB_140849c4f:
  plVar36 = *(longlong **)(unaff_R13 + uVar37 * -0x48 + -0x28);
  LOCK();
  lVar35 = *plVar36;
  *plVar36 = *plVar36 + 1;
  UNLOCK();
  if (*plVar36 != 0 && SCARRY8(lVar35,1) == *plVar36 < 0) {
    fStack_100 = fStack_150;
    bStack_108 = (byte)uStack_158;
    cStack_107 = (char)(uStack_158 >> 8);
    uStack_106 = (uint5)(uStack_158 >> 0x10);
    uStack_101 = (undefined1)(uStack_158 >> 0x38);
    bStack_1b8 = SUB41(fStack_168,0);
    uStack_1b7 = (undefined2)((uint)fStack_168 >> 8);
    uStack_1b5 = (undefined4)(CONCAT44(fStack_164,fStack_168) >> 0x18);
    uStack_1b1._1_3_ = SUB43(fStack_160,0);
    uStack_1b1 = CONCAT31(uStack_1b1._1_3_,(char)((uint)fStack_164 >> 0x18));
    uStack_1ad = (undefined4)(CONCAT44(fStack_15c,fStack_160) >> 0x18);
    uStack_1a9 = (undefined1)((uint)fStack_15c >> 0x18);
    uStack_f3 = 0;
    pdb_1408f3120(plStack_120,plStack_138,plVar36,&bStack_108,&bStack_1b8);
    if (*plStack_120 != 0 || plStack_120[1] != 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14301ce21,0x17,&UNK_14301ce30);
    }
    plStack_120[1] = 0;
    *plStack_120 = 1;
    plStack_120[2] = CONCAT44(fStack_164,fStack_168);
    plStack_120[3] = CONCAT44(fStack_15c,fStack_160);
    plStack_120[4] = uStack_158;
    plStack_120[5] = CONCAT44(uStack_14c,fStack_150);
    plStack_120[6] = CONCAT44(uStack_144,fStack_148);
    plStack_120[7] = lStack_140;
    plVar36 = plStack_120 + 0x16;
    uStack_1ad = 0;
    uStack_1b5 = 0;
    uStack_1b1 = 0;
    fStack_100 = 0.0;
    uStack_fc = 0;
    bStack_108 = bStack_1b8;
    cStack_107 = (char)uStack_1b7;
    uStack_106 = (uint5)(byte)((ushort)uStack_1b7 >> 8);
    uStack_101 = 0;
    lVar35 = plStack_120[0x18];
    if (lVar35 == plStack_120[0x16]) {
      pdb_142d8ddd0(plVar36);
    }
    lVar43 = plStack_120[0x17];
    lVar31 = lVar35 * 0x170;
    *(undefined8 *)(lVar43 + lVar31) = 0;
    *(undefined8 *)(lVar43 + 0x10 + lVar31) = 0;
    *(undefined8 *)(lVar43 + 0x20 + lVar31) = 0;
    *(undefined8 *)(lVar43 + 0x30 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x40 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x50 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x60 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x70 + lVar31) = 2;
    *(undefined **)(lVar43 + 0x90 + lVar31) = &UNK_14300bf20;
    *(undefined8 *)(lVar43 + 0x98 + lVar31) = 0x1a;
    *(undefined **)(lVar43 + 0xa0 + lVar31) = &UNK_14330daf5;
    *(undefined8 *)(lVar43 + 0xa8 + lVar31) = 0x16;
    puVar3 = (undefined8 *)(lVar43 + 0xb0 + lVar31);
    *puVar3 = CONCAT44(fStack_164,fStack_168);
    puVar3[1] = CONCAT44(fStack_15c,fStack_160);
    puVar4 = (ulonglong *)(lVar43 + 0xc0 + lVar31);
    *puVar4 = uStack_158;
    puVar4[1] = CONCAT44(uStack_14c,fStack_150);
    puVar3 = (undefined8 *)(lVar43 + 0xd0 + lVar31);
    *puVar3 = CONCAT44(uStack_144,fStack_148);
    puVar3[1] = lStack_140;
    *(undefined4 *)(lVar43 + 0xe0 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0xe8 + lVar31) = 0;
    *(undefined1 *)(lVar43 + 0x105 + lVar31) = 2;
    *(undefined4 *)(lVar43 + 0x108 + lVar31) = 0;
    *(undefined1 *)(lVar43 + 0x15c + lVar31) = 2;
    *(ulonglong *)(lVar43 + 0x15d + lVar31) =
         CONCAT17(uStack_101,CONCAT52(uStack_106,CONCAT11(cStack_107,bStack_108)));
    *(ulonglong *)(lVar43 + 0x164 + lVar31) = CONCAT35(uStack_fc,CONCAT41(fStack_100,uStack_101));
    *(undefined1 *)(lVar43 + 0x16c + lVar31) = 2;
    *(undefined1 *)(lVar43 + 0x16e + lVar31) = uStack_f1;
    *(undefined1 *)(lVar43 + 0x16f + lVar31) = 0;
    lVar43 = lVar35 + 1;
    plStack_120[0x18] = lVar43;
    uStack_1ad = 0;
    uStack_1b5 = 0;
    uStack_1b1 = 0;
    fStack_100 = 0.0;
    uStack_fc = 0;
    bStack_108 = bStack_1b8;
    cStack_107 = (char)uStack_1b7;
    uStack_106 = (uint5)(byte)((ushort)uStack_1b7 >> 8);
    uStack_101 = 0;
    if (lVar43 == plStack_120[0x16]) {
      pdb_142d8ddd0(plVar36);
    }
    lVar31 = plStack_120[0x17];
    lVar43 = lVar43 * 0x170;
    *(undefined8 *)(lVar31 + lVar43) = 0;
    *(undefined8 *)(lVar31 + 0x10 + lVar43) = 0;
    *(undefined8 *)(lVar31 + 0x20 + lVar43) = 1;
    *(undefined8 *)(lVar31 + 0x28 + lVar43) = 0xe14f8a4be230cb70;
    *(undefined8 *)(lVar31 + 0x30 + lVar43) = 0;
    *(undefined4 *)(lVar31 + 0x40 + lVar43) = 0;
    *(undefined4 *)(lVar31 + 0x50 + lVar43) = 0;
    *(undefined4 *)(lVar31 + 0x60 + lVar43) = 1;
    *(undefined8 *)(lVar31 + 100 + lVar43) = _DAT_14300bba0;
    *(undefined8 *)(lVar31 + 0x6c + lVar43) = 0x23ecccccd;
    *(undefined **)(lVar31 + 0x90 + lVar43) = &UNK_14300bf3a;
    *(undefined8 *)(lVar31 + 0x98 + lVar43) = 0x22;
    *(undefined **)(lVar31 + 0xa0 + lVar43) = &UNK_14330daf5;
    *(undefined8 *)(lVar31 + 0xa8 + lVar43) = 0x16;
    puVar3 = (undefined8 *)(lVar31 + 0xb0 + lVar43);
    *puVar3 = CONCAT44(fStack_164,fStack_168);
    puVar3[1] = CONCAT44(fStack_15c,fStack_160);
    puVar4 = (ulonglong *)(lVar31 + 0xc0 + lVar43);
    *puVar4 = uStack_158;
    puVar4[1] = CONCAT44(uStack_14c,fStack_150);
    puVar3 = (undefined8 *)(lVar31 + 0xd0 + lVar43);
    *puVar3 = CONCAT44(uStack_144,fStack_148);
    puVar3[1] = lStack_140;
    *(undefined4 *)(lVar31 + 0xe0 + lVar43) = 0;
    *(undefined4 *)(lVar31 + 0xe8 + lVar43) = 0;
    *(undefined1 *)(lVar31 + 0x105 + lVar43) = 2;
    *(undefined4 *)(lVar31 + 0x108 + lVar43) = 0;
    *(undefined1 *)(lVar31 + 0x15c + lVar43) = 2;
    *(ulonglong *)(lVar31 + 0x15d + lVar43) =
         CONCAT17(uStack_101,CONCAT52(uStack_106,CONCAT11(cStack_107,bStack_108)));
    *(ulonglong *)(lVar31 + 0x164 + lVar43) = CONCAT35(uStack_fc,CONCAT41(fStack_100,uStack_101));
    *(undefined1 *)(lVar31 + 0x16c + lVar43) = 2;
    *(undefined1 *)(lVar31 + 0x16e + lVar43) = uStack_f1;
    *(undefined1 *)(lVar31 + 0x16f + lVar43) = 0;
    plStack_120[0x18] = lVar35 + 2;
    uStack_1ad = 0;
    uStack_1b5 = 0;
    uStack_1b1 = 0;
    fStack_100 = 0.0;
    uStack_fc = 0;
    bStack_108 = bStack_1b8;
    cStack_107 = (char)uStack_1b7;
    uStack_106 = (uint5)(byte)((ushort)uStack_1b7 >> 8);
    uStack_101 = 0;
    puVar29 = (undefined4 *)pdb_1409013f0(puStack_128 + -0x28,&UNK_14300bf80);
    uVar69 = *puVar29;
    uStack_1ad = (undefined4)(CONCAT35(uStack_fc,CONCAT41(fStack_100,uStack_101)) >> 0x20);
    bStack_1b8 = bStack_108;
    uStack_1b7 = (undefined2)(CONCAT52(uStack_106,CONCAT11(cStack_107,bStack_108)) >> 8);
    uStack_1b5 = (undefined4)(uStack_106 >> 8);
    uStack_1b1._1_3_ = SUB43(fStack_100,0);
    uStack_1b1 = CONCAT31(uStack_1b1._1_3_,uStack_101);
    uVar24 = *(uint *)(puStack_128 + -0x10);
    lVar35 = plStack_120[0x18];
    if (lVar35 == plStack_120[0x16]) {
      pdb_142d8ddd0(plVar36);
    }
    lVar43 = plStack_120[0x17];
    lVar31 = lVar35 * 0x170;
    *(undefined8 *)(lVar43 + lVar31) = 0;
    *(undefined8 *)(lVar43 + 0x10 + lVar31) = 0;
    *(undefined8 *)(lVar43 + 0x20 + lVar31) = 0;
    *(undefined8 *)(lVar43 + 0x30 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x40 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x50 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x60 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x70 + lVar31) = 2;
    *(undefined **)(lVar43 + 0x90 + lVar31) = &UNK_14300bf5c;
    *(undefined8 *)(lVar43 + 0x98 + lVar31) = 0x21;
    *(undefined **)(lVar43 + 0xa0 + lVar31) = &UNK_14330dcd8;
    *(undefined8 *)(lVar43 + 0xa8 + lVar31) = 0x22;
    puVar3 = (undefined8 *)(lVar43 + 0xb0 + lVar31);
    *puVar3 = CONCAT44(fStack_164,fStack_168);
    puVar3[1] = CONCAT44(fStack_15c,fStack_160);
    puVar4 = (ulonglong *)(lVar43 + 0xc0 + lVar31);
    *puVar4 = uStack_158;
    puVar4[1] = CONCAT44(uStack_14c,fStack_150);
    puVar3 = (undefined8 *)(lVar43 + 0xd0 + lVar31);
    *puVar3 = CONCAT44(uStack_144,fStack_148);
    puVar3[1] = lStack_140;
    *(undefined4 *)(lVar43 + 0xe0 + lVar31) = 1;
    *(uint *)(lVar43 + 0xe4 + lVar31) = uVar24;
    *(undefined4 *)(lVar43 + 0xe8 + lVar31) = 0;
    *(undefined1 *)(lVar43 + 0x105 + lVar31) = 2;
    *(undefined4 *)(lVar43 + 0x108 + lVar31) = 1;
    *(undefined8 *)(lVar43 + 0x10c + lVar31) = uVar15;
    *(undefined4 *)(lVar43 + 0x114 + lVar31) = 0x3f9d70a4;
LAB_14084b37d:
    unaff_R15 = (ulonglong)uVar24;
    *(undefined4 *)(lVar43 + 0x118 + lVar31) = uVar69;
    *(undefined1 *)(lVar43 + 0x15c + lVar31) = 2;
    *(ulonglong *)(lVar43 + 0x15d + lVar31) =
         CONCAT17((undefined1)uStack_1b1,CONCAT43(uStack_1b5,CONCAT21(uStack_1b7,bStack_1b8)));
    *(ulonglong *)(lVar43 + 0x164 + lVar31) = CONCAT44(uStack_1ad,uStack_1b1);
    *(undefined1 *)(lVar43 + 0x16c + lVar31) = 2;
    *(undefined1 *)(lVar43 + 0x16e + lVar31) = uStack_f1;
    *(undefined1 *)(lVar43 + 0x16f + lVar31) = 0;
    unaff_R14 = (longlong *)(lVar35 + 1);
    plStack_120[0x18] = (longlong)unaff_R14;
    goto LAB_1408495bf;
  }
  goto LAB_14084b7f1;
LAB_14084a49a:
  uVar28 = uVar28 & uVar26;
  auVar5 = *(undefined1 (*) [16])(lVar35 + uVar28);
  auVar59[0] = -(auVar5[0] == auVar47[0]);
  auVar59[1] = -(auVar5[1] == auVar47[1]);
  auVar59[2] = -(auVar5[2] == auVar47[2]);
  auVar59[3] = -(auVar5[3] == auVar47[3]);
  auVar59[4] = -(auVar5[4] == auVar47[4]);
  auVar59[5] = -(auVar5[5] == auVar47[5]);
  auVar59[6] = -(auVar5[6] == auVar47[6]);
  auVar59[7] = -(auVar5[7] == auVar47[7]);
  auVar59[8] = -(auVar5[8] == auVar47[0]);
  auVar59[9] = -(auVar5[9] == auVar47[1]);
  auVar59[10] = -(auVar5[10] == auVar47[2]);
  auVar59[0xb] = -(auVar5[0xb] == auVar47[3]);
  auVar59[0xc] = -(auVar5[0xc] == auVar47[4]);
  auVar59[0xd] = -(auVar5[0xd] == auVar47[5]);
  auVar59[0xe] = -(auVar5[0xe] == auVar47[6]);
  auVar59[0xf] = -(auVar5[0xf] == auVar47[7]);
  uVar42 = (ushort)(SUB161(auVar59 >> 7,0) & 1) | (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe | (ushort)(auVar59[0xf] >> 7) << 0xf;
  uVar24 = (uint)uVar42;
  if (uVar42 != 0) {
    if (bStack_108 == 0x1a) {
      do {
        uVar23 = 0;
        for (uVar9 = uVar24; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar23 = uVar23 + 1;
        }
        uVar37 = uVar23 + uVar28 & uVar26;
        if (*(char *)(lVar35 + -0x48 + uVar37 * -0x48) == '\x1a') goto LAB_14084a540;
        uVar42 = (ushort)(uVar24 - 1) & (ushort)uVar24;
        uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar42);
      } while (uVar42 != 0);
    }
    else {
      do {
        uVar23 = 0;
        for (uVar9 = uVar24; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar23 = uVar23 + 1;
        }
        uVar37 = uVar23 + uVar28 & uVar26;
        bVar20 = *(byte *)(lVar35 + -0x48 + uVar37 * -0x48);
        if (((bVar20 != 0x1a) && (bStack_108 == bVar20)) &&
           (cStack_107 == *(char *)(lVar35 + uVar37 * -0x48 + -0x47))) goto LAB_14084a540;
        uVar42 = (ushort)(uVar24 - 1) & (ushort)uVar24;
        uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar42);
      } while (uVar42 != 0);
    }
  }
  auVar52[0] = -(auVar5[0] == unaff_XMM9_Ba);
  auVar52[1] = -(auVar5[1] == unaff_XMM9_Bb);
  auVar52[2] = -(auVar5[2] == unaff_XMM9_Bc);
  auVar52[3] = -(auVar5[3] == unaff_XMM9_Bd);
  auVar52[4] = -(auVar5[4] == unaff_XMM9_Be);
  auVar52[5] = -(auVar5[5] == unaff_XMM9_Bf);
  auVar52[6] = -(auVar5[6] == unaff_XMM9_Bg);
  auVar52[7] = -(auVar5[7] == unaff_XMM9_Bh);
  auVar52[8] = -(auVar5[8] == unaff_XMM9_Bi);
  auVar52[9] = -(auVar5[9] == unaff_XMM9_Bj);
  auVar52[10] = -(auVar5[10] == unaff_XMM9_Bk);
  auVar52[0xb] = -(auVar5[0xb] == unaff_XMM9_Bl);
  auVar52[0xc] = -(auVar5[0xc] == unaff_XMM9_Bm);
  auVar52[0xd] = -(auVar5[0xd] == unaff_XMM9_Bn);
  auVar52[0xe] = -(auVar5[0xe] == unaff_XMM9_Bo);
  auVar52[0xf] = -(auVar5[0xf] == unaff_XMM9_Bp);
  if ((((((((((((((((SUB161(auVar52 >> 7,0) & 1) != 0 || (SUB161(auVar52 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar52 >> 0x17,0) & 1) != 0) || (SUB161(auVar52 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar52 >> 0x27,0) & 1) != 0) || (SUB161(auVar52 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar52 >> 0x37,0) & 1) != 0) || (SUB161(auVar52 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar52 >> 0x47,0) & 1) != 0) || (SUB161(auVar52 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar52 >> 0x57,0) & 1) != 0) || (SUB161(auVar52 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar52 >> 0x67,0) & 1) != 0) || (SUB161(auVar52 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar52 >> 0x77,0) & 1) != 0) || auVar52[0xf] < '\0') {
LAB_14084b4c5:
    bStack_1b8 = (byte)&bStack_108;
    uStack_1b7 = (undefined2)((ulonglong)&bStack_108 >> 8);
    uStack_1b5 = (undefined4)((ulonglong)&bStack_108 >> 0x18);
    uStack_1b1._0_1_ = (undefined1)((ulonglong)&bStack_108 >> 0x38);
    uStack_1b1 = CONCAT31(0x848e60,(undefined1)uStack_1b1);
    uStack_1ad = 0x140;
    uStack_1a9 = 0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14300bd6d,&bStack_1b8,&UNK_14300bda0);
  }
  uVar28 = uVar28 + lVar43 + 0x10;
  lVar43 = lVar43 + 0x10;
  goto LAB_14084a49a;
LAB_14084a540:
  plVar36 = *(longlong **)(lVar35 + -0x28 + uVar37 * -0x48);
  LOCK();
  lVar43 = *plVar36;
  *plVar36 = *plVar36 + 1;
  UNLOCK();
  if (*plVar36 != 0 && SCARRY8(lVar43,1) == *plVar36 < 0) {
    uStack_f2 = 1;
    plStack_1f0 = plVar36;
    plStack_138 = plVar36;
    cVar21 = pdb_1409012c0(CONCAT71((int7)((ulonglong)lVar35 >> 8),0x10),uStack_170);
    uStack_f2 = 1;
    bStack_108 = pdb_140c44ba0(uVar45);
    cStack_107 = cVar21;
    if (plStack_118[9] != 0) {
      uStack_f2 = 1;
      uVar28 = pdb_1413f0300(plStack_228,&bStack_108);
      unaff_R13 = (undefined *)plStack_118[6];
      uVar26 = plStack_118[7];
      bVar20 = (byte)(uVar28 >> 0x39);
      auVar47 = ZEXT216(CONCAT11(bVar20,bVar20));
      auVar47 = pshuflw(auVar47,auVar47,0);
      lVar35 = 0;
      while( true ) {
        uVar28 = uVar28 & uVar26;
        auVar5 = *(undefined1 (*) [16])(unaff_R13 + uVar28);
        auVar60[0] = -(auVar5[0] == auVar47[0]);
        auVar60[1] = -(auVar5[1] == auVar47[1]);
        auVar60[2] = -(auVar5[2] == auVar47[2]);
        auVar60[3] = -(auVar5[3] == auVar47[3]);
        auVar60[4] = -(auVar5[4] == auVar47[4]);
        auVar60[5] = -(auVar5[5] == auVar47[5]);
        auVar60[6] = -(auVar5[6] == auVar47[6]);
        auVar60[7] = -(auVar5[7] == auVar47[7]);
        auVar60[8] = -(auVar5[8] == auVar47[0]);
        auVar60[9] = -(auVar5[9] == auVar47[1]);
        auVar60[10] = -(auVar5[10] == auVar47[2]);
        auVar60[0xb] = -(auVar5[0xb] == auVar47[3]);
        auVar60[0xc] = -(auVar5[0xc] == auVar47[4]);
        auVar60[0xd] = -(auVar5[0xd] == auVar47[5]);
        auVar60[0xe] = -(auVar5[0xe] == auVar47[6]);
        auVar60[0xf] = -(auVar5[0xf] == auVar47[7]);
        uVar42 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe | (ushort)(auVar60[0xf] >> 7) << 0xf
        ;
        uVar24 = (uint)uVar42;
        if (uVar42 != 0) {
          if (bStack_108 == 0x1a) {
            do {
              uVar23 = 0;
              for (uVar9 = uVar24; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar23 = uVar23 + 1;
              }
              uVar37 = uVar23 + uVar28 & uVar26;
              if (unaff_R13[uVar37 * -0x48 + -0x48] == '\x1a') goto LAB_14084a6b5;
              uVar42 = (ushort)(uVar24 - 1) & (ushort)uVar24;
              uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar42);
            } while (uVar42 != 0);
          }
          else {
            do {
              uVar23 = 0;
              for (uVar9 = uVar24; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar23 = uVar23 + 1;
              }
              uVar37 = uVar23 + uVar28 & uVar26;
              if (((unaff_R13[uVar37 * -0x48 + -0x48] != 0x1a) &&
                  (bStack_108 == unaff_R13[uVar37 * -0x48 + -0x48])) &&
                 (cStack_107 == unaff_R13[uVar37 * -0x48 + -0x47])) goto LAB_14084a6b5;
              uVar42 = (ushort)(uVar24 - 1) & (ushort)uVar24;
              uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar42);
            } while (uVar42 != 0);
          }
        }
        auVar53[0] = -(auVar5[0] == unaff_XMM9_Ba);
        auVar53[1] = -(auVar5[1] == unaff_XMM9_Bb);
        auVar53[2] = -(auVar5[2] == unaff_XMM9_Bc);
        auVar53[3] = -(auVar5[3] == unaff_XMM9_Bd);
        auVar53[4] = -(auVar5[4] == unaff_XMM9_Be);
        auVar53[5] = -(auVar5[5] == unaff_XMM9_Bf);
        auVar53[6] = -(auVar5[6] == unaff_XMM9_Bg);
        auVar53[7] = -(auVar5[7] == unaff_XMM9_Bh);
        auVar53[8] = -(auVar5[8] == unaff_XMM9_Bi);
        auVar53[9] = -(auVar5[9] == unaff_XMM9_Bj);
        auVar53[10] = -(auVar5[10] == unaff_XMM9_Bk);
        auVar53[0xb] = -(auVar5[0xb] == unaff_XMM9_Bl);
        auVar53[0xc] = -(auVar5[0xc] == unaff_XMM9_Bm);
        auVar53[0xd] = -(auVar5[0xd] == unaff_XMM9_Bn);
        auVar53[0xe] = -(auVar5[0xe] == unaff_XMM9_Bo);
        auVar53[0xf] = -(auVar5[0xf] == unaff_XMM9_Bp);
        if ((((((((((((((((SUB161(auVar53 >> 7,0) & 1) != 0 || (SUB161(auVar53 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar53 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar53 >> 0x1f,0) & 1) != 0) || (SUB161(auVar53 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar53 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar53 >> 0x37,0) & 1) != 0) || (SUB161(auVar53 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar53 >> 0x47,0) & 1) != 0) || (SUB161(auVar53 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar53 >> 0x57,0) & 1) != 0) || (SUB161(auVar53 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar53 >> 0x67,0) & 1) != 0) || (SUB161(auVar53 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar53 >> 0x77,0) & 1) != 0) || auVar53[0xf] < '\0') break;
        uVar28 = uVar28 + lVar35 + 0x10;
        lVar35 = lVar35 + 0x10;
      }
    }
    bStack_1b8 = (byte)&bStack_108;
    uStack_1b7 = (undefined2)((ulonglong)&bStack_108 >> 8);
    uStack_1b5 = (undefined4)((ulonglong)&bStack_108 >> 0x18);
    uStack_1b1._0_1_ = (undefined1)((ulonglong)&bStack_108 >> 0x38);
    uStack_1b1 = CONCAT31(0x848e60,(undefined1)uStack_1b1);
    uStack_1ad = 0x140;
    uStack_1a9 = 0;
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14300bd6d,&bStack_1b8,&UNK_14300bdb8);
  }
  goto LAB_14084b7f1;
LAB_14084b5ca:
  if (cStack_109 != '\0') {
    plVar36 = (longlong *)pdb_140e97000();
    if (((char)plVar36[0xd] != '\x01') &&
       (plVar36 = (longlong *)pdb_142dde6e0(plVar36,0), plVar36 == (longlong *)0x0))
    goto LAB_14084b693;
    if (*plVar36 != 0) {
LAB_14084b674:
      plVar27 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_14084b680:
      plVar27 = (longlong *)pdb_142dde6e0(plVar27,0);
      if (plVar27 == (longlong *)0x0) {
LAB_14084b693:
        pdb_142dc7890(&UNK_14330e598);
LAB_14084b6a0:
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14300be41,0x28,&UNK_14300be70);
      }
      goto LAB_14084928c;
    }
    *plVar36 = -1;
    plStack_118 = plVar36;
    pdb_140e95370(plVar36 + 1,uStack_240);
    *plStack_118 = *plStack_118 + 1;
  }
  return;
  while ((lVar43 = lVar31 + 0x150, *(int *)(lVar35 + 0x128 + lVar31) != iVar11 ||
         (*(uint *)(lVar35 + 300 + lVar31) != uVar24))) {
LAB_140849960:
    lVar31 = lVar43;
    if (*(longlong *)(lStack_258 + 0x10) * 0x150 - lVar31 == 0) goto LAB_14084ace6;
  }
  pdb_14148b9a0();
  uVar24 = pdb_14148c300(lVar43 + lVar35 + -0x150);
  uVar26 = *(ulonglong *)(lVar35 + -0x10 + lVar43);
  if (uVar26 < 2) {
    lVar31 = lVar43 + lVar35 + -0x20;
  }
  else {
    lVar31 = *(longlong *)(lVar35 + -0x20 + lVar43);
    uVar26 = *(ulonglong *)(lVar35 + -0x18 + lVar43);
  }
  lVar44 = 0;
  uVar28 = 0;
  do {
    uVar37 = uVar28;
    if (uVar26 * 4 == lVar44) goto LAB_14084ace6;
    uVar38 = (ulonglong)*(ushort *)(lVar31 + 2 + lVar44);
    uVar28 = uVar37 + uVar38;
    lVar44 = lVar44 + 4;
  } while (uVar28 <= uVar24);
  if (*(char *)(lVar31 + -4 + lVar44) == '\x05') {
    uVar26 = *(ulonglong *)(lVar35 + -0xf0 + lVar43);
    if (uVar26 <= uVar28) {
      pdb_142dc8420(uVar37,uVar28,uVar26,&UNK_14300bfb0);
      goto LAB_14084b7f1;
    }
    unaff_R13 = (undefined *)(lVar43 + lVar35 + -0x100);
    lVar31 = 0;
    do {
      if (uVar38 * 4 + 4 == lVar31) {
        fVar72 = (float)pdb_1414961d0(lVar43 + lVar35 + -0xe8,uVar24,uVar26,&UNK_14300bfc8);
        plStack_138 = (longlong *)CONCAT44(plStack_138._4_4_,uVar69);
        fVar46 = (float)pdb_141496170(unaff_R13,uVar24);
        fVar65 = _DAT_142e36f28 / SQRT(plStack_138._0_4_ * plStack_138._0_4_ + fVar72 * fVar72);
        fVar63 = 0.0;
        if ((int)fVar65 - 1U < 0x7fffff ||
            (int)ABS(fVar65) - 0x800000U < 0x7f000000 && -1 < (int)fVar65) {
          fVar72 = fVar72 * fVar65;
          fVar63 = plStack_138._0_4_ * fVar65;
        }
        else {
          fVar72 = 0.0;
        }
        fStack_150 = fStack_150 - fVar70 * fVar72 * fVar46 * _DAT_142e36f50;
        uStack_158 = CONCAT44(uStack_158._4_4_ + _DAT_14300bb70,
                              fVar70 * fVar63 * fVar46 * _DAT_142e36f50 + (float)uStack_158);
        pub_142e32980();
        fVar70 = (float)pub_142e32b30();
        fStack_15c = (float)pub_142e329e0();
        fStack_168 = 0.0;
        fStack_160 = 0.0;
        fStack_164 = fVar70;
        break;
      }
      pfVar2 = (float *)(uVar37 * 4 + *(longlong *)(lVar35 + -0xf8 + lVar43) + lVar31);
      lVar31 = lVar31 + 4;
    } while (*pfVar2 <= _DAT_142e36f50);
  }
LAB_14084ace6:
  uStack_14c = (undefined4)uVar14;
  fStack_148 = (float)((ulonglong)uVar14 >> 0x20);
  uStack_144 = 0x3f4ccccd;
  uVar26 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),puStack_128[-7]);
  cVar21 = pdb_1409012c0(0x12,uStack_170);
  bStack_108 = pdb_140c44ba0(uVar26 & 0xffffffff);
  cStack_107 = cVar21;
  if (plStack_118[3] != 0) {
    uVar37 = pdb_1413f0300(plStack_230,&bStack_108);
    lVar35 = *plStack_118;
    uVar28 = plStack_118[1];
    bVar20 = (byte)(uVar37 >> 0x39);
    auVar47 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar47 = pshuflw(auVar47,auVar47,0);
    lVar43 = 0;
    while( true ) {
      uVar37 = uVar37 & uVar28;
      auVar5 = *(undefined1 (*) [16])(lVar35 + uVar37);
      auVar61[0] = -(auVar5[0] == auVar47[0]);
      auVar61[1] = -(auVar5[1] == auVar47[1]);
      auVar61[2] = -(auVar5[2] == auVar47[2]);
      auVar61[3] = -(auVar5[3] == auVar47[3]);
      auVar61[4] = -(auVar5[4] == auVar47[4]);
      auVar61[5] = -(auVar5[5] == auVar47[5]);
      auVar61[6] = -(auVar5[6] == auVar47[6]);
      auVar61[7] = -(auVar5[7] == auVar47[7]);
      auVar61[8] = -(auVar5[8] == auVar47[0]);
      auVar61[9] = -(auVar5[9] == auVar47[1]);
      auVar61[10] = -(auVar5[10] == auVar47[2]);
      auVar61[0xb] = -(auVar5[0xb] == auVar47[3]);
      auVar61[0xc] = -(auVar5[0xc] == auVar47[4]);
      auVar61[0xd] = -(auVar5[0xd] == auVar47[5]);
      auVar61[0xe] = -(auVar5[0xe] == auVar47[6]);
      auVar61[0xf] = -(auVar5[0xf] == auVar47[7]);
      uVar42 = (ushort)(SUB161(auVar61 >> 7,0) & 1) | (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe | (ushort)(auVar61[0xf] >> 7) << 0xf;
      uVar24 = (uint)uVar42;
      if (uVar42 != 0) {
        if (bStack_108 == 0x1a) {
          do {
            uVar23 = 0;
            for (uVar9 = uVar24; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar23 = uVar23 + 1;
            }
            uVar38 = uVar23 + uVar37 & uVar28;
            if (*(char *)(lVar35 + -0x48 + uVar38 * -0x48) == '\x1a') goto LAB_14084ae2e;
            uVar42 = (ushort)(uVar24 - 1) & (ushort)uVar24;
            uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar42);
          } while (uVar42 != 0);
        }
        else {
          do {
            uVar23 = 0;
            for (uVar9 = uVar24; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar23 = uVar23 + 1;
            }
            uVar38 = uVar23 + uVar37 & uVar28;
            bVar20 = *(byte *)(lVar35 + -0x48 + uVar38 * -0x48);
            if (((bVar20 != 0x1a) && (bStack_108 == bVar20)) &&
               (cStack_107 == *(char *)(lVar35 + uVar38 * -0x48 + -0x47))) goto LAB_14084ae2e;
            uVar42 = (ushort)(uVar24 - 1) & (ushort)uVar24;
            uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar42);
          } while (uVar42 != 0);
        }
      }
      auVar54[0] = -(auVar5[0] == unaff_XMM9_Ba);
      auVar54[1] = -(auVar5[1] == unaff_XMM9_Bb);
      auVar54[2] = -(auVar5[2] == unaff_XMM9_Bc);
      auVar54[3] = -(auVar5[3] == unaff_XMM9_Bd);
      auVar54[4] = -(auVar5[4] == unaff_XMM9_Be);
      auVar54[5] = -(auVar5[5] == unaff_XMM9_Bf);
      auVar54[6] = -(auVar5[6] == unaff_XMM9_Bg);
      auVar54[7] = -(auVar5[7] == unaff_XMM9_Bh);
      auVar54[8] = -(auVar5[8] == unaff_XMM9_Bi);
      auVar54[9] = -(auVar5[9] == unaff_XMM9_Bj);
      auVar54[10] = -(auVar5[10] == unaff_XMM9_Bk);
      auVar54[0xb] = -(auVar5[0xb] == unaff_XMM9_Bl);
      auVar54[0xc] = -(auVar5[0xc] == unaff_XMM9_Bm);
      auVar54[0xd] = -(auVar5[0xd] == unaff_XMM9_Bn);
      auVar54[0xe] = -(auVar5[0xe] == unaff_XMM9_Bo);
      auVar54[0xf] = -(auVar5[0xf] == unaff_XMM9_Bp);
      if ((((((((((((((((SUB161(auVar54 >> 7,0) & 1) != 0 || (SUB161(auVar54 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar54 >> 0x17,0) & 1) != 0) || (SUB161(auVar54 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar54 >> 0x27,0) & 1) != 0) || (SUB161(auVar54 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar54 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar54 >> 0x3f,0) & 1) != 0) || (SUB161(auVar54 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar54 >> 0x4f,0) & 1) != 0) || (SUB161(auVar54 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar54 >> 0x5f,0) & 1) != 0) || (SUB161(auVar54 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar54 >> 0x6f,0) & 1) != 0) || (SUB161(auVar54 >> 0x77,0) & 1) != 0) ||
          auVar54[0xf] < '\0') break;
      uVar37 = uVar37 + lVar43 + 0x10;
      lVar43 = lVar43 + 0x10;
    }
  }
  bStack_1b8 = (byte)&bStack_108;
  uStack_1b7 = (undefined2)((ulonglong)&bStack_108 >> 8);
  uStack_1b5 = (undefined4)((ulonglong)&bStack_108 >> 0x18);
  uStack_1b1._0_1_ = (undefined1)((ulonglong)&bStack_108 >> 0x38);
  uStack_1b1 = CONCAT31(0x848e60,(undefined1)uStack_1b1);
  uStack_1ad = 0x140;
  uStack_1a9 = 0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14300bd6d,&bStack_1b8,&UNK_14300bda0);
LAB_14084a6b5:
  plVar36 = *(longlong **)(unaff_R13 + uVar37 * -0x48 + -0x28);
  LOCK();
  lVar35 = *plVar36;
  *plVar36 = *plVar36 + 1;
  UNLOCK();
  if (*plVar36 != 0 && SCARRY8(lVar35,1) == *plVar36 < 0) {
    fStack_100 = fStack_150;
    bStack_108 = (byte)uStack_158;
    cStack_107 = (char)(uStack_158 >> 8);
    uStack_106 = (uint5)(uStack_158 >> 0x10);
    uStack_101 = (undefined1)(uStack_158 >> 0x38);
    bStack_1b8 = SUB41(fVar72,0);
    uStack_1b7 = (undefined2)((uint)fVar72 >> 8);
    uStack_1b5._1_3_ = SUB43(fVar46,0);
    uStack_1b5 = CONCAT31(uStack_1b5._1_3_,(char)((uint)fVar72 >> 0x18));
    uStack_1b1._1_3_ = SUB43(fVar63,0);
    uStack_1b1 = CONCAT31(uStack_1b1._1_3_,(char)((uint)fVar46 >> 0x18));
    uStack_1ad._1_3_ = SUB43(fVar65,0);
    uStack_1ad = CONCAT31(uStack_1ad._1_3_,(char)((uint)fVar63 >> 0x18));
    uStack_1a9 = (undefined1)((uint)fVar65 >> 0x18);
    uStack_f2 = 0;
    pdb_1408f3120(plStack_120,plStack_138,plVar36,&bStack_108,&bStack_1b8);
    plVar36 = plStack_120 + 0x16;
    uStack_1ad = 0;
    uStack_1b5 = 0;
    uStack_1b1 = 0;
    fStack_100 = 0.0;
    uStack_fc = 0;
    bStack_108 = bStack_1b8;
    cStack_107 = (char)uStack_1b7;
    uStack_106 = (uint5)(byte)((ushort)uStack_1b7 >> 8);
    uStack_101 = 0;
    lVar35 = plStack_120[0x18];
    if (lVar35 == plStack_120[0x16]) {
      pdb_142d8ddd0(plVar36);
    }
    lVar43 = plStack_120[0x17];
    lVar31 = lVar35 * 0x170;
    *(undefined8 *)(lVar43 + lVar31) = 0;
    *(undefined8 *)(lVar43 + 0x10 + lVar31) = 0;
    *(undefined8 *)(lVar43 + 0x20 + lVar31) = 0;
    *(undefined8 *)(lVar43 + 0x30 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x40 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x50 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x60 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x70 + lVar31) = 2;
    *(undefined **)(lVar43 + 0x90 + lVar31) = &UNK_14300bed0;
    *(undefined8 *)(lVar43 + 0x98 + lVar31) = 0x17;
    *(undefined **)(lVar43 + 0xa0 + lVar31) = &UNK_14330daf5;
    *(undefined8 *)(lVar43 + 0xa8 + lVar31) = 0x16;
    puVar3 = (undefined8 *)(lVar43 + 0xb0 + lVar31);
    *puVar3 = CONCAT44(fStack_164,fStack_168);
    puVar3[1] = CONCAT44(fStack_15c,fStack_160);
    puVar4 = (ulonglong *)(lVar43 + 0xc0 + lVar31);
    *puVar4 = uStack_158;
    puVar4[1] = CONCAT44(uStack_14c,fStack_150);
    puVar3 = (undefined8 *)(lVar43 + 0xd0 + lVar31);
    *puVar3 = CONCAT44(uStack_144,fStack_148);
    puVar3[1] = lStack_140;
    *(undefined4 *)(lVar43 + 0xe0 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0xe8 + lVar31) = 0;
    *(undefined1 *)(lVar43 + 0x105 + lVar31) = 2;
    *(undefined4 *)(lVar43 + 0x108 + lVar31) = 0;
    *(undefined1 *)(lVar43 + 0x15c + lVar31) = 2;
    *(ulonglong *)(lVar43 + 0x15d + lVar31) =
         CONCAT17(uStack_101,CONCAT52(uStack_106,CONCAT11(cStack_107,bStack_108)));
    *(ulonglong *)(lVar43 + 0x164 + lVar31) = CONCAT35(uStack_fc,CONCAT41(fStack_100,uStack_101));
    *(undefined1 *)(lVar43 + 0x16c + lVar31) = 2;
    *(undefined1 *)(lVar43 + 0x16e + lVar31) = uStack_f1;
    *(undefined1 *)(lVar43 + 0x16f + lVar31) = 0;
    plStack_120[0x18] = lVar35 + 1;
    uStack_1ad = 0;
    uStack_1b5 = 0;
    uStack_1b1 = 0;
    fStack_100 = 0.0;
    uStack_fc = 0;
    bStack_108 = bStack_1b8;
    cStack_107 = (char)uStack_1b7;
    uStack_106 = (uint5)(byte)((ushort)uStack_1b7 >> 8);
    uStack_101 = 0;
    puVar29 = (undefined4 *)pdb_1409013f0(puStack_128 + -0x28,&UNK_14300bf08);
    uVar69 = *puVar29;
    uStack_1ad = (undefined4)(CONCAT35(uStack_fc,CONCAT41(fStack_100,uStack_101)) >> 0x20);
    bStack_1b8 = bStack_108;
    uStack_1b7 = (undefined2)(CONCAT52(uStack_106,CONCAT11(cStack_107,bStack_108)) >> 8);
    uStack_1b5 = (undefined4)(uStack_106 >> 8);
    uStack_1b1._1_3_ = SUB43(fStack_100,0);
    uStack_1b1 = CONCAT31(uStack_1b1._1_3_,uStack_101);
    uVar24 = *(uint *)(puStack_128 + -0x10);
    unaff_R15 = (ulonglong)uVar24;
    lVar35 = plStack_120[0x18];
    if (lVar35 == plStack_120[0x16]) {
      pdb_142d8ddd0(plVar36);
    }
    lVar43 = plStack_120[0x17];
    lVar31 = lVar35 * 0x170;
    *(undefined8 *)(lVar43 + lVar31) = 0;
    *(undefined8 *)(lVar43 + 0x10 + lVar31) = 0;
    *(undefined8 *)(lVar43 + 0x20 + lVar31) = 0;
    *(undefined8 *)(lVar43 + 0x30 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x40 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x50 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x60 + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x70 + lVar31) = 2;
    *(undefined **)(lVar43 + 0x90 + lVar31) = &UNK_14300bee7;
    *(undefined8 *)(lVar43 + 0x98 + lVar31) = 0x1e;
    *(undefined **)(lVar43 + 0xa0 + lVar31) = &UNK_14330dcd8;
    *(undefined8 *)(lVar43 + 0xa8 + lVar31) = 0x22;
    puVar3 = (undefined8 *)(lVar43 + 0xb0 + lVar31);
    *puVar3 = CONCAT44(fStack_164,fStack_168);
    puVar3[1] = CONCAT44(fStack_15c,fStack_160);
    puVar4 = (ulonglong *)(lVar43 + 0xc0 + lVar31);
    *puVar4 = uStack_158;
    puVar4[1] = CONCAT44(uStack_14c,fStack_150);
    puVar3 = (undefined8 *)(lVar43 + 0xd0 + lVar31);
    *puVar3 = CONCAT44(uStack_144,fStack_148);
    puVar3[1] = lStack_140;
    *(undefined4 *)(lVar43 + 0xe0 + lVar31) = 1;
    *(uint *)(lVar43 + 0xe4 + lVar31) = uVar24;
    *(undefined4 *)(lVar43 + 0xe8 + lVar31) = 0;
    *(undefined1 *)(lVar43 + 0x105 + lVar31) = 2;
    *(undefined4 *)(lVar43 + 0x108 + lVar31) = 1;
    *(undefined8 *)(lVar43 + 0x10c + lVar31) = 0;
    *(undefined4 *)(lVar43 + 0x114 + lVar31) = 0x3ebbe76d;
    *(undefined4 *)(lVar43 + 0x118 + lVar31) = uVar69;
    *(undefined1 *)(lVar43 + 0x15c + lVar31) = 2;
    *(ulonglong *)(lVar43 + 0x15d + lVar31) =
         CONCAT17((undefined1)uStack_1b1,CONCAT43(uStack_1b5,CONCAT21(uStack_1b7,bStack_1b8)));
    *(ulonglong *)(lVar43 + 0x164 + lVar31) = CONCAT44(uStack_1ad,uStack_1b1);
    *(undefined1 *)(lVar43 + 0x16c + lVar31) = 2;
    *(undefined1 *)(lVar43 + 0x16e + lVar31) = uStack_f1;
    *(undefined1 *)(lVar43 + 0x16f + lVar31) = 0;
    unaff_R14 = (longlong *)(lVar35 + 1);
    plStack_120[0x18] = (longlong)unaff_R14;
    uStack_158 = CONCAT44(fVar70 + (float)uVar32,fVar68 + fVar71);
    fStack_150 = fVar48 + 0.0;
    if (*plStack_120 != 0 || plStack_120[1] != 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14301ce21,0x17,&UNK_14301ce30);
    }
    plStack_120[1] = 0;
    *plStack_120 = 1;
    plStack_120[2] = CONCAT44(fStack_164,fStack_168);
    plStack_120[3] = CONCAT44(fStack_15c,fStack_160);
    plStack_120[4] = uStack_158;
    plStack_120[5] = CONCAT44(uStack_14c,fStack_150);
    plStack_120[6] = CONCAT44(uStack_144,fStack_148);
    plStack_120[7] = lStack_140;
    goto LAB_1408495bf;
  }
LAB_14084b7f1:
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}

