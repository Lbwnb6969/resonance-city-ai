// VA 0x14087f7e0, PDB extent 7236 bytes
// system_decorator::decorator_visual::trap_doors::generate_trap_doors
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/trap_doors.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::trap_doors::generate_trap_doors
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/trap_doors.rs
   Extent: 7236 */

void pdb_14087f7e0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 *param_6)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  char cVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  undefined8 uVar23;
  longlong *plVar24;
  byte *pbVar25;
  byte *pbVar26;
  ulonglong uVar27;
  int *piVar28;
  longlong lVar29;
  uint7 *puVar30;
  undefined1 (*pauVar31) [16];
  byte *pbVar32;
  uint uVar33;
  undefined *puVar34;
  undefined *puVar35;
  ushort uVar36;
  ulonglong uVar37;
  int iVar38;
  longlong *unaff_R12;
  longlong *plVar39;
  uint uVar40;
  ulonglong uVar41;
  byte bVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  undefined1 auVar47 [16];
  char unaff_XMM8_Ba;
  char unaff_XMM8_Bb;
  char unaff_XMM8_Bc;
  char unaff_XMM8_Bd;
  char unaff_XMM8_Be;
  char unaff_XMM8_Bf;
  char unaff_XMM8_Bg;
  char unaff_XMM8_Bh;
  char unaff_XMM8_Bi;
  char unaff_XMM8_Bj;
  char unaff_XMM8_Bk;
  char unaff_XMM8_Bl;
  char unaff_XMM8_Bm;
  char unaff_XMM8_Bn;
  char unaff_XMM8_Bo;
  char unaff_XMM8_Bp;
  float fVar48;
  undefined1 (*in_stack_fffffffffffffc78) [16];
  undefined4 uVar50;
  float *pfVar49;
  undefined8 in_stack_fffffffffffffc80;
  undefined8 uStack_368;
  longlong *plStack_360;
  byte *pbStack_358;
  undefined *puStack_350;
  byte *pbStack_348;
  byte *pbStack_340;
  longlong *plStack_338;
  undefined8 uStack_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  byte *pbStack_318;
  uint7 *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined4 uStack_2d0;
  byte *pbStack_2c8;
  uint7 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined4 *puStack_2b0;
  byte *pbStack_2a8;
  byte *pbStack_2a0;
  longlong *plStack_298;
  byte *pbStack_290;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  longlong lStack_268;
  longlong lStack_260;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  byte *pbStack_248;
  undefined *puStack_240;
  byte *pbStack_238;
  byte *pbStack_230;
  longlong *plStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  byte *pbStack_208;
  uint7 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  byte *pbStack_1c0;
  undefined8 uStack_1b8;
  longlong lStack_1b0;
  undefined8 *puStack_1a8;
  ulonglong uStack_1a0;
  uint7 *puStack_198;
  undefined4 uStack_18c;
  longlong lStack_188;
  longlong lStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  uint uStack_164;
  undefined *puStack_160;
  byte *pbStack_158;
  ulonglong uStack_150;
  longlong *plStack_148;
  undefined1 (*pauStack_140) [16];
  byte *pbStack_138;
  longlong *plStack_130;
  uint7 uStack_128;
  undefined1 uStack_121;
  undefined4 uStack_120;
  uint uStack_11c;
  byte *pbStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  undefined1 uStack_f4;
  char cStack_f3;
  byte bStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  undefined4 uVar51;
  
  uStack_f0 = 0xfffffffffffffffe;
  plVar24 = param_2;
  cStack_f3 = pdb_140e94b40();
  plVar39 = param_3;
  if (cStack_f3 == '\0') goto LAB_14087f9ef;
  uVar41 = 0x43;
  lVar20 = pdb_140881430(0x43);
  unaff_R12 = (longlong *)&UNK_143010b70;
  if (lVar20 == 1) {
    if ((longlong *)0x43 < plVar24) {
LAB_14088099f:
      pdb_142dc8070(&UNK_143010b70,0x43,0);
LAB_1408809bf:
      pdb_142dc8070(&UNK_143010b70,0x43);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar21 = pdb_140881430(plVar24);
    if ((uVar21 & 1) != 0) {
      if ((undefined *)0x43 < (undefined *)((longlong)plVar24 + 2)) goto LAB_1408809bf;
      uVar41 = 0x41 - (longlong)plVar24;
      unaff_R12 = (longlong *)((longlong)plVar24 + 0x143010b72);
    }
  }
  puVar34 = &UNK_143010aa7;
  plVar39 = (longlong *)&UNK_143010a6c;
  do {
    bVar42 = puVar34[-1];
    uVar19 = (uint)(char)bVar42;
    plStack_130 = param_3;
    if ((char)bVar42 < '\0') {
      bVar4 = puVar34[-2];
      if ((char)bVar4 < -0x40) {
        bVar5 = puVar34[-3];
        if ((char)bVar5 < -0x40) {
          pbVar32 = puVar34 + -4;
          puVar34 = puVar34 + -4;
          uVar19 = bVar5 & 0x3f | (*pbVar32 & 7) << 6;
        }
        else {
          puVar34 = puVar34 + -3;
          uVar19 = bVar5 & 0xf;
        }
        uVar19 = bVar4 & 0x3f | uVar19 << 6;
      }
      else {
        puVar34 = puVar34 + -2;
        uVar19 = bVar4 & 0x1f;
      }
      uVar19 = (uint)(bVar42 & 0x3f) | uVar19 << 6;
      if (uVar19 != 0x5c) goto LAB_14087f954;
LAB_14087f965:
      puVar35 = puVar34 + -0x143010a6b;
      if ((undefined *)0x3b < puVar35) {
        pdb_142dc8070(&UNK_143010a6c,0x3b,puVar35,0x3b,&UNK_143010c10);
        goto LAB_14088099f;
      }
      pauVar31 = (undefined1 (*) [16])(0x3b - (longlong)puVar35);
      plVar39 = (longlong *)(puVar34 + 1);
      goto LAB_14087f987;
    }
    puVar34 = puVar34 + -1;
    if (uVar19 == 0x5c) goto LAB_14087f965;
LAB_14087f954:
    if (uVar19 == 0x2f) goto LAB_14087f965;
  } while (puVar34 != &UNK_143010a6c);
  pauVar31 = (undefined1 (*) [16])0x3b;
LAB_14087f987:
  plVar22 = (longlong *)pdb_140e97000();
  if ((char)plVar22[0xd] != '\x01') goto LAB_140880901;
  do {
    if (*plVar22 == 0) {
      *plVar22 = -1;
      in_stack_fffffffffffffc80 = 0;
      plVar24 = unaff_R12;
      plStack_148 = plVar22;
      uStack_1b8 = pdb_140e94f10(plVar22 + 1,unaff_R12,uVar41,plVar39,pauVar31,1,0);
      *plStack_148 = *plStack_148 + 1;
      plVar39 = plStack_130;
      in_stack_fffffffffffffc78 = pauVar31;
LAB_14087f9ef:
      uStack_368 = pdb_140c47770(param_1);
      plStack_360 = plVar24;
      pdb_140a2fb40(&fStack_258,*param_2);
      uVar13 = _DAT_143010940;
      uVar12 = _DAT_143010930;
      uVar11 = _DAT_14301092c;
      uVar10 = _DAT_143010928;
      fVar9 = _UNK_142e378f8;
      fVar8 = _UNK_142e378f4;
      fVar7 = _DAT_142e378f0;
      param_1 = CONCAT44(fStack_254,fStack_258);
      pauVar31 = (undefined1 (*) [16])CONCAT44(fStack_24c,fStack_250);
      uVar41 = (ulonglong)puStack_240 & 0xffff;
      plStack_130 = (longlong *)*param_4;
      lStack_188 = *param_5;
      plStack_148 = (longlong *)param_5[1];
      puStack_2c0 = (uint7 *)*plVar39;
      uStack_18c = *(undefined4 *)((longlong)param_6 + 0x1c);
      uStack_2b8 = *param_6;
      puStack_2b0 = (undefined4 *)param_6[2];
      iVar38 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                                CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ==
                      CONCAT13(unaff_XMM8_Bd,
                               CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
      unaff_XMM8_Ba = (char)iVar38;
      unaff_XMM8_Bb = (char)((uint)iVar38 >> 8);
      unaff_XMM8_Bc = (char)((uint)iVar38 >> 0x10);
      unaff_XMM8_Bd = (char)((uint)iVar38 >> 0x18);
      iVar38 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                                CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ==
                      CONCAT13(unaff_XMM8_Bh,
                               CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))));
      unaff_XMM8_Be = (char)iVar38;
      unaff_XMM8_Bf = (char)((uint)iVar38 >> 8);
      unaff_XMM8_Bg = (char)((uint)iVar38 >> 0x10);
      unaff_XMM8_Bh = (char)((uint)iVar38 >> 0x18);
      iVar38 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                                CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))) ==
                      CONCAT13(unaff_XMM8_Bl,
                               CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))));
      unaff_XMM8_Bi = (char)iVar38;
      unaff_XMM8_Bj = (char)((uint)iVar38 >> 8);
      unaff_XMM8_Bk = (char)((uint)iVar38 >> 0x10);
      unaff_XMM8_Bl = (char)((uint)iVar38 >> 0x18);
      iVar38 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                                CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))) ==
                      CONCAT13(unaff_XMM8_Bp,
                               CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))));
      unaff_XMM8_Bm = (char)iVar38;
      unaff_XMM8_Bn = (char)((uint)iVar38 >> 8);
      unaff_XMM8_Bo = (char)((uint)iVar38 >> 0x10);
      unaff_XMM8_Bp = (char)((uint)iVar38 >> 0x18);
      fVar48 = (float)_DAT_142e37950;
      pbVar32 = pbStack_238;
      while (pbVar32 != (byte *)0x0) {
        if ((short)uVar41 == 0) {
          do {
            auVar44 = *pauVar31;
            param_1 = param_1 + -0x980;
            pauVar31 = pauVar31 + 1;
            uVar19 = (ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
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
                              (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar44[0xf] >> 7) << 0xf) ^ 0xffff;
            uVar41 = (ulonglong)uVar19;
          } while (uVar19 == 0);
        }
        uVar19 = 0;
        uVar40 = (uint)uVar41;
        for (uVar33 = uVar40; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
          uVar19 = uVar19 + 1;
        }
        param_4 = (undefined8 *)((ulonglong)uVar19 * -0x98);
        plVar39 = *(longlong **)(param_1 + -0x98 + (longlong)param_4);
        lVar20 = pdb_140b54f80(plStack_130,plVar39,&UNK_143010aa8);
        uVar41 = (ulonglong)(uVar40 - 1 & uVar40);
        pbVar32 = pbVar32 + -1;
        if (lVar20 != 0) {
          uVar19 = *(uint *)(lVar20 + 0x274);
          unaff_R12 = (longlong *)(ulonglong)uVar19;
          uVar21 = pdb_140b54b40(plStack_130,plVar39);
          if ((((((uVar21 & 0xffffffff) != 0) &&
                (uVar27 = uVar21 & 0xffffffff ^ 0xffffffff, uVar27 < (ulonglong)plStack_148[2])) &&
               (piVar28 = (int *)(uVar27 * 0x18 + plStack_148[1]),
               piVar28[4] == (int)(uVar21 >> 0x20))) &&
              ((*piVar28 != 0 &&
               (uVar21 = *(ulonglong *)(piVar28 + 2),
               (uVar21 & 0xffffffff) < *(ulonglong *)(lStack_188 + 0x38))))) &&
             ((*(ulonglong *)(*(longlong *)(lStack_188 + 0x28) + (uVar21 >> 6 & 0x3ffffff) * 8) >>
               (uVar21 & 0x3f) & 1) != 0)) {
            if (*(ulonglong *)(lStack_188 + 0x110) <
                *(ulonglong *)(plStack_148[0x34] + 0x40 + (uVar21 >> 0x20) * 0x48)) {
              lVar20 = plStack_148[0x34] + (uVar21 >> 0x20) * 0x48;
              uVar21 = *(ulonglong *)
                        (*(longlong *)(lVar20 + 0x38) + *(ulonglong *)(lStack_188 + 0x110) * 8);
              if (uVar21 == 0) goto LAB_14087fc17;
              lStack_1b0 = *(longlong *)(*(longlong *)(lVar20 + 0x18) + 0x10 + ~uVar21 * 0x30);
            }
            else {
LAB_14087fc17:
              lStack_1b0 = 0;
            }
            lStack_1b0 = (ulonglong)(uint)~piVar28[1] * 0x58 + lStack_1b0;
            cVar18 = pdb_140b77b50();
            if (cVar18 != '\0') {
              pdb_140c3ba10(&fStack_258,(longlong)param_4 + param_1 + -0x90);
              lStack_180 = CONCAT44(fStack_254,fStack_258);
              pauStack_140 = (undefined1 (*) [16])CONCAT44(fStack_24c,fStack_250);
              param_4 = (undefined8 *)((ulonglong)puStack_240 & 0xffff);
              pbStack_1c0 = pbStack_238;
              puStack_1a8 = (undefined8 *)(lStack_1b0 + 0xc);
              pbStack_2a8 = pbStack_230;
              pbStack_2a0 = pbStack_230 + 0x50;
              uStack_164 = uVar19;
LAB_14087fcae:
              pbVar26 = pbStack_2a8;
              if (pbStack_1c0 != (byte *)0x0) {
                if ((short)param_4 == 0) {
                  do {
                    auVar44 = *pauStack_140;
                    lStack_180 = lStack_180 + -0x40;
                    pauStack_140 = pauStack_140 + 1;
                    uVar19 = (ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
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
                                      (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar44[0xf] >> 7) << 0xf) ^ 0xffff;
                    param_4 = (undefined8 *)(ulonglong)uVar19;
                  } while (uVar19 == 0);
                }
                iVar38 = 0;
                uVar33 = (uint)param_4;
                for (uVar19 = uVar33; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
                  iVar38 = iVar38 + 1;
                }
                fStack_258 = *(float *)((lStack_180 - (ulonglong)(uint)(iVar38 << 2)) + -4);
                pbStack_100 = (byte *)CONCAT44(pbStack_100._4_4_,fStack_258);
                if (*(longlong *)(pbStack_2a8 + 0x48) == 0) {
LAB_14088089e:
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_143010a18);
                }
                param_4 = (undefined8 *)(ulonglong)(uVar33 - 1 & uVar33);
                pbStack_1c0 = pbStack_1c0 + -1;
                uVar27 = pdb_1400aede0(pbStack_2a0,&fStack_258);
                unaff_R12 = *(longlong **)(pbVar26 + 0x30);
                uVar21 = *(ulonglong *)(pbVar26 + 0x38);
                bVar42 = (byte)(uVar27 >> 0x39);
                auVar44 = ZEXT216(CONCAT11(bVar42,bVar42));
                auVar44 = pshuflw(auVar44,auVar44,0);
                lVar20 = 0;
                do {
                  uVar27 = uVar27 & uVar21;
                  auVar3 = *(undefined1 (*) [16])((longlong)unaff_R12 + uVar27);
                  auVar47[0] = -(auVar3[0] == auVar44[0]);
                  auVar47[1] = -(auVar3[1] == auVar44[1]);
                  auVar47[2] = -(auVar3[2] == auVar44[2]);
                  auVar47[3] = -(auVar3[3] == auVar44[3]);
                  auVar47[4] = -(auVar3[4] == auVar44[4]);
                  auVar47[5] = -(auVar3[5] == auVar44[5]);
                  auVar47[6] = -(auVar3[6] == auVar44[6]);
                  auVar47[7] = -(auVar3[7] == auVar44[7]);
                  auVar47[8] = -(auVar3[8] == auVar44[0]);
                  auVar47[9] = -(auVar3[9] == auVar44[1]);
                  auVar47[10] = -(auVar3[10] == auVar44[2]);
                  auVar47[0xb] = -(auVar3[0xb] == auVar44[3]);
                  auVar47[0xc] = -(auVar3[0xc] == auVar44[4]);
                  auVar47[0xd] = -(auVar3[0xd] == auVar44[5]);
                  auVar47[0xe] = -(auVar3[0xe] == auVar44[6]);
                  auVar47[0xf] = -(auVar3[0xf] == auVar44[7]);
                  uVar36 = (ushort)(SUB161(auVar47 >> 7,0) & 1) |
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
                           (ushort)(auVar47[0xf] >> 7) << 0xf;
                  uVar19 = (uint)uVar36;
                  while (uVar36 != 0) {
                    uVar33 = 0;
                    for (uVar40 = uVar19; (uVar40 & 1) == 0; uVar40 = uVar40 >> 1 | 0x80000000) {
                      uVar33 = uVar33 + 1;
                    }
                    uVar37 = uVar33 + uVar27 & uVar21;
                    puStack_160 = (undefined *)(uVar37 * -0x68);
                    if ((int)pbStack_100 == (int)unaff_R12[uVar37 * -0xd + -0xd]) {
                      bStack_f2 = pdb_140c45920(&uStack_368);
                      uVar50 = (undefined4)((ulonglong)in_stack_fffffffffffffc78 >> 0x20);
                      if ((bStack_f2 != 10) && (bStack_f2 != 5)) goto LAB_14087fcae;
                      puVar30 = puStack_2c0;
                      pdb_140c45ec0(&fStack_288,puStack_2c0,(ulonglong)pbStack_100 & 0xffffffff,
                                    &UNK_143010ac0);
                      if (*(char *)(lStack_1b0 + 8) == '\0') {
                        uStack_128 = (uint7)*puStack_1a8;
                        uStack_121 = (undefined1)((ulonglong)*puStack_1a8 >> 0x38);
                        uStack_120 = (undefined4)puStack_1a8[1];
                        uStack_11c = (uint)((ulonglong)puStack_1a8[1] >> 0x20);
                        in_stack_fffffffffffffc78 = (undefined1 (*) [16])CONCAT44(uVar50,uStack_11c)
                        ;
                        pdb_140def2a0(&pbStack_358,uStack_278,uStack_270,uVar10,
                                      in_stack_fffffffffffffc78);
                        puVar30 = &uStack_128;
                        pdb_140def750(&fStack_258,puVar30,&pbStack_358);
                        uVar50 = (undefined4)((ulonglong)in_stack_fffffffffffffc80 >> 0x20);
                        if (fStack_258 != 0.0) goto LAB_14087fcae;
                      }
                      else {
                        pbStack_248 = (byte *)puStack_1a8[2];
                        fStack_258 = (float)*puStack_1a8;
                        fStack_254 = (float)((ulonglong)*puStack_1a8 >> 0x20);
                        fStack_250 = (float)puStack_1a8[1];
                        fStack_24c = (float)((ulonglong)puStack_1a8[1] >> 0x20);
                        in_stack_fffffffffffffc78 = (undefined1 (*) [16])CONCAT44(uVar50,0xbfee147a)
                        ;
                        cVar18 = pdb_140df24f0(&fStack_258,uStack_278,uStack_270,uVar11,
                                               in_stack_fffffffffffffc78);
                        uVar50 = (undefined4)((ulonglong)in_stack_fffffffffffffc80 >> 0x20);
                        if (cVar18 == '\0') goto LAB_14087fcae;
                      }
                      *puStack_2b0 = uStack_18c;
                      uVar23 = pdb_140947f90(plVar39);
                      puStack_160 = (undefined *)((longlong)unaff_R12 + (longlong)puStack_160);
                      uStack_f4 = puStack_160[-8];
                      plVar24 = (longlong *)
                                pdb_1408f3750(uStack_2b8,(ulonglong)pbStack_100 & 0xffffffff,uVar23,
                                              puVar30,uStack_f4);
                      uStack_128 = (uint7)uVar12;
                      uStack_121 = (undefined1)((ulonglong)uVar12 >> 0x38);
                      uStack_120 = 0x3fa66666;
                      fStack_250 = 0.0;
                      fStack_258 = 0.0;
                      fStack_254 = 0.0;
                      pdb_1409efe30(&pbStack_358,&uStack_128,&fStack_258);
                      pbVar26 = (byte *)((longlong)puStack_350 * 0xc);
                      if ((undefined *)0xaaaaaaaaaaaaaaa < puStack_350) {
                        uVar23 = 0;
LAB_1408808b2:
                        uStack_f1 = 1;
                        pdb_142dc7e2a(uVar23,pbVar26);
                        goto LAB_14088097a;
                      }
                      pbStack_100 = puStack_350;
                      plStack_298 = plVar24;
                      pbStack_108 = pbVar26;
                      if (pbVar26 == (byte *)0x0) {
                        pbStack_178 = (byte *)0x4;
                      }
                      else {
                        pbStack_158 = pbStack_358;
                        pdb_14007ee60();
                        pbVar25 = pub_1406abab0((ulonglong)pbVar26,4);
                        uVar23 = 4;
                        if (pbVar25 == (byte *)0x0) goto LAB_1408808b2;
                        pbStack_178 = pbVar25;
                        if (pbStack_100 != (undefined *)0x0) {
                          pub_142e32760(pbVar25,pbStack_158,pbStack_108);
                        }
                      }
                      uVar21 = (longlong)pbStack_340 * 0xc;
                      if ((byte *)0xaaaaaaaaaaaaaaa < pbStack_340) {
                        uVar23 = 0;
LAB_1408808c6:
                        pdb_142dc7e2a(uVar23,uVar21);
                        goto LAB_14088097a;
                      }
                      pbStack_158 = pbStack_340;
                      uStack_1a0 = uVar21;
                      if (uVar21 == 0) {
                        pbStack_170 = (byte *)0x4;
                      }
                      else {
                        pbStack_110 = pbStack_348;
                        pdb_14007ee60();
                        pbStack_170 = pub_1406abab0(uVar21,4);
                        uVar23 = 4;
                        if (pbStack_170 == (byte *)0x0) goto LAB_1408808c6;
                        if (pbStack_158 != (byte *)0x0) {
                          pub_142e32760(pbStack_170,pbStack_110,uStack_1a0);
                        }
                      }
                      lVar20 = CONCAT44(uStack_324,uStack_328);
                      if (lVar20 == 0) {
                        pbStack_138 = (byte *)0x0;
                      }
                      else {
                        pbStack_110 = (byte *)CONCAT44(uStack_31c,uStack_320);
                        uVar21 = (longlong)pbStack_110 * 0xc;
                        if ((byte *)0xaaaaaaaaaaaaaaa < pbStack_110) {
                          uVar23 = 0;
LAB_1408808d3:
                          pdb_142dc7e2a(uVar23,uVar21);
                          goto LAB_14088097a;
                        }
                        if (uVar21 == 0) {
                          pbStack_138 = (byte *)0x4;
                        }
                        else {
                          uStack_150 = uVar21;
                          pdb_14007ee60();
                          pbStack_138 = pub_1406abab0(uStack_150,4);
                          uVar23 = 4;
                          uVar21 = uStack_150;
                          if (pbStack_138 == (byte *)0x0) goto LAB_1408808d3;
                          if (pbStack_110 != (byte *)0x0) {
                            pub_142e32760(pbStack_138,lVar20);
                            goto LAB_14088019d;
                          }
                        }
                        pbStack_110 = (byte *)0x0;
                      }
LAB_14088019d:
                      if (pbStack_318 == (byte *)0x0) {
                        pbVar26 = (byte *)0x0;
                      }
                      else {
                        uVar21 = (longlong)puStack_310 * 8;
                        if (0x7ffffffffffffffc < uVar21 || (ulonglong)puStack_310 >> 0x3d != 0) {
                          uVar23 = 0;
LAB_1408808e4:
                          pdb_142dc7e2a(uVar23,uVar21);
                          goto LAB_14088097a;
                        }
                        if (uVar21 == 0) {
                          pbVar26 = (byte *)0x4;
                          puVar30 = puStack_310;
                        }
                        else {
                          pbStack_290 = pbStack_318;
                          puStack_198 = puStack_310;
                          uStack_150 = uVar21;
                          pdb_14007ee60();
                          uVar23 = 4;
                          pbVar26 = pub_1406abab0(uStack_150,4);
                          uVar21 = uStack_150;
                          if (pbVar26 == (byte *)0x0) goto LAB_1408808e4;
                          puVar30 = puStack_198;
                          if (puStack_198 != (uint7 *)0x0) {
                            pbStack_108 = pbVar26;
                            pub_142e32760(pbVar26,pbStack_290);
                            puVar30 = puStack_198;
                            pbVar26 = pbStack_108;
                          }
                        }
                      }
                      LOCK();
                      lVar20 = *plStack_338;
                      *plStack_338 = *plStack_338 + 1;
                      UNLOCK();
                      if (*plStack_338 == 0 || SCARRY8(lVar20,1) != *plStack_338 < 0) {
LAB_14088097a:
                    /* WARNING: Does not return */
                        pcVar6 = (code *)invalidInstructionException();
                        (*pcVar6)();
                      }
                      uStack_1e8 = uStack_2f8;
                      uStack_1e0 = uStack_2f0;
                      uStack_1f8 = uStack_308;
                      uStack_1f0 = uStack_300;
                      fStack_258 = 1.4013e-45;
                      fStack_254 = 0.0;
                      fStack_250 = 1.4013e-45;
                      fStack_24c = 0.0;
                      pbStack_248 = pbStack_178;
                      puStack_240 = pbStack_100;
                      pbStack_238 = pbStack_170;
                      pbStack_230 = pbStack_158;
                      plStack_228 = plStack_338;
                      uStack_220 = uStack_330;
                      uStack_218 = pbStack_138;
                      uStack_210 = pbStack_110;
                      uStack_1d8 = uStack_2e8;
                      pbStack_208 = pbVar26;
                      puStack_200 = puVar30;
                      pdb_14007ee60();
                      pbVar26 = pub_1406abab0(0x90,0x10);
                      if (pbVar26 == (byte *)0x0) goto LAB_140880936;
                      pub_142e32760(pbVar26,&fStack_258,0x90);
                      uStack_1d8 = uStack_2e8;
                      uStack_1d0 = uStack_2e0;
                      uStack_1e8 = uStack_2f8;
                      uStack_1e0 = uStack_2f0;
                      uStack_1f8 = uStack_308;
                      uStack_1f0 = uStack_300;
                      pbStack_208 = pbStack_318;
                      puStack_200 = puStack_310;
                      uStack_218 = (byte *)CONCAT44(uStack_324,uStack_328);
                      uStack_210 = (byte *)CONCAT44(uStack_31c,uStack_320);
                      plStack_228 = plStack_338;
                      uStack_220 = uStack_330;
                      pbStack_238 = pbStack_348;
                      pbStack_230 = pbStack_340;
                      pbStack_248 = pbStack_358;
                      puStack_240 = puStack_350;
                      fStack_258 = 1.4013e-45;
                      fStack_254 = 0.0;
                      fStack_250 = 1.4013e-45;
                      fStack_24c = 0.0;
                      pbStack_2c8 = pbVar26;
                      pbStack_100 = pbVar26;
                      pdb_14007ee60();
                      pbStack_108 = pub_1406abab0(0x90,0x10);
                      if (pbStack_108 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                        pdb_142dc7e11(0x10,0x90);
                      }
                      pfVar49 = &fStack_258;
                      pub_142e32760(pbStack_108,pfVar49,0x90);
                      fVar17 = fStack_27c;
                      fVar16 = fStack_280;
                      fVar15 = fStack_284;
                      fVar14 = fStack_288;
                      unaff_R12 = plStack_298;
                      uStack_2d0 = uStack_270;
                      uStack_120 = uStack_270;
                      uStack_128 = (uint7)CONCAT44(uStack_274,uStack_278);
                      uStack_121 = (undefined1)((uint)uStack_274 >> 0x18);
                      fStack_258 = fStack_288;
                      fStack_254 = fStack_284;
                      fStack_250 = fStack_280;
                      fStack_24c = fStack_27c;
                      pdb_1408f3120(plStack_298,pbStack_100,pbStack_108,&uStack_128,pfVar49);
                      puVar34 = puStack_160;
                      uVar51 = (undefined4)((ulonglong)pfVar49 >> 0x20);
                      if (*unaff_R12 != 0 || unaff_R12[1] != 0) {
                        uStack_f1 = 0;
                    /* WARNING: Subroutine does not return */
                        pdb_142dc83d0(&UNK_14301ce21,0x17,&UNK_14301ce30);
                      }
                      unaff_R12[1] = 0;
                      *unaff_R12 = 1;
                      unaff_R12[2] = CONCAT44(fStack_284,fStack_288);
                      unaff_R12[3] = CONCAT44(fStack_27c,fStack_280);
                      unaff_R12[4] = CONCAT44(uStack_274,uStack_278);
                      unaff_R12[5] = CONCAT44(uStack_26c,uStack_270);
                      unaff_R12[6] = lStack_268;
                      unaff_R12[7] = lStack_260;
                      bStack_f2 = bStack_f2 == 5;
                      pbStack_100 = &UNK_143010af4;
                      if ((bool)bStack_f2) {
                        pbStack_100 = &UNK_143010ad8;
                      }
                      fStack_24c = (float)((uint)fStack_24c & 0xff000000);
                      fStack_258 = (float)((uint)fStack_258 & 0xffffff);
                      fStack_254 = 0.0;
                      fStack_250 = 0.0;
                      uStack_120 = 0;
                      uStack_11c = uStack_11c & 0xff000000;
                      uStack_128 = (uint7)(uint)fStack_258;
                      uStack_121 = 0;
                      iVar38 = *(int *)(puStack_160 + -0x10);
                      if (*(int *)(puStack_160 + -0x10) == 999) {
                        iVar38 = 0;
                      }
                      puVar35 = (undefined *)unaff_R12[0x18];
                      if (puVar35 == (undefined *)unaff_R12[0x16]) {
                        uStack_f1 = 0;
                        pbStack_108 = (byte *)CONCAT44(pbStack_108._4_4_,iVar38);
                        puStack_160 = puVar35;
                        pdb_142d8ddd0(unaff_R12 + 0x16,puVar34,0);
                        puVar35 = puStack_160;
                        iVar38 = (int)pbStack_108;
                      }
                      lVar20 = unaff_R12[0x17];
                      lVar29 = (longlong)puVar35 * 0x170;
                      *(undefined8 *)(lVar20 + lVar29) = 0;
                      *(undefined8 *)(lVar20 + 0x10 + lVar29) = 0;
                      *(undefined8 *)(lVar20 + 0x20 + lVar29) = 0;
                      *(undefined8 *)(lVar20 + 0x30 + lVar29) = 0;
                      *(undefined4 *)(lVar20 + 0x40 + lVar29) = 0;
                      *(undefined4 *)(lVar20 + 0x50 + lVar29) = 0;
                      *(undefined4 *)(lVar20 + 0x60 + lVar29) = 0;
                      *(undefined4 *)(lVar20 + 0x70 + lVar29) = 2;
                      *(byte **)(lVar20 + 0x90 + lVar29) = pbStack_100;
                      *(ulonglong *)(lVar20 + 0x98 + lVar29) = (ulonglong)bStack_f2 + 0x1b;
                      *(undefined **)(lVar20 + 0xa0 + lVar29) = &UNK_14330dd11;
                      *(undefined8 *)(lVar20 + 0xa8 + lVar29) = 0x1e;
                      puVar2 = (undefined8 *)(lVar20 + 0xb0 + lVar29);
                      *puVar2 = CONCAT44(fStack_284,fStack_288);
                      puVar2[1] = CONCAT44(fStack_27c,fStack_280);
                      puVar2 = (undefined8 *)(lVar20 + 0xc0 + lVar29);
                      *puVar2 = CONCAT44(uStack_274,uStack_278);
                      puVar2[1] = CONCAT44(uStack_26c,uStack_270);
                      plVar24 = (longlong *)(lVar20 + 0xd0 + lVar29);
                      *plVar24 = lStack_268;
                      plVar24[1] = lStack_260;
                      *(undefined4 *)(lVar20 + 0xe0 + lVar29) = 1;
                      *(int *)(lVar20 + 0xe4 + lVar29) = iVar38;
                      *(undefined4 *)(lVar20 + 0xe8 + lVar29) = 0;
                      *(undefined1 *)(lVar20 + 0x105 + lVar29) = 2;
                      *(undefined4 *)(lVar20 + 0x108 + lVar29) = 0;
                      *(undefined1 *)(lVar20 + 0x15c + lVar29) = 2;
                      *(ulonglong *)(lVar20 + 0x15d + lVar29) = CONCAT17(uStack_121,uStack_128);
                      *(ulonglong *)(lVar20 + 0x164 + lVar29) =
                           CONCAT35((undefined3)uStack_11c,CONCAT41(uStack_120,uStack_121));
                      *(undefined1 *)(lVar20 + 0x16c + lVar29) = 2;
                      *(undefined1 *)(lVar20 + 0x16e + lVar29) = uStack_f4;
                      *(undefined1 *)(lVar20 + 0x16f + lVar29) = 0;
                      unaff_R12[0x18] = (longlong)(puVar35 + 1);
                      uStack_128 = (uint7)uVar13;
                      uStack_121 = (undefined1)((ulonglong)uVar13 >> 0x38);
                      uStack_120 = 0x3f900000;
                      fVar46 = fVar15 * fVar15 + fVar14 * fVar14;
                      fVar43 = fVar16 * fVar9 + fVar15 * fVar8 + fVar14 * fVar7;
                      fVar43 = fVar43 + fVar43;
                      uStack_f1 = 0;
                      in_stack_fffffffffffffc80 =
                           CONCAT44(uVar50,(fVar17 + fVar17) * (fVar14 * 0.0 - fVar15 * 0.0) +
                                           fVar43 * fVar16 +
                                           (fVar17 * fVar17 - (fVar46 + fVar16 * fVar16)) * fVar9);
                      in_stack_fffffffffffffc78 =
                           (undefined1 (*) [16])
                           CONCAT44(uVar51,(fVar17 + fVar17) * (fVar15 * fVar48 - fVar16 * 0.0) +
                                           fVar43 * fVar14 +
                                           (fVar17 * fVar17 - (fVar46 + fVar16 * fVar16)) * fVar7);
                      pdb_140c17790(&fStack_258,uStack_164,auStack_2d8,&uStack_128,
                                    in_stack_fffffffffffffc78,in_stack_fffffffffffffc80);
                      pbVar26 = (byte *)unaff_R12[0x21];
                      if (pbVar26 == (undefined *)unaff_R12[0x1f]) {
                        uStack_f1 = 0;
                        pbStack_100 = pbVar26;
                        pdb_142d8d630(unaff_R12 + 0x1f);
                        pbVar26 = pbStack_100;
                      }
                      lVar20 = unaff_R12[0x20];
                      lVar29 = (longlong)pbVar26 * 0x30;
                      puVar1 = (ulonglong *)(lVar20 + 0x20 + lVar29);
                      *puVar1 = (ulonglong)pbStack_238;
                      puVar1[1] = (ulonglong)pbStack_230;
                      puVar1 = (ulonglong *)(lVar20 + 0x10 + lVar29);
                      *puVar1 = (ulonglong)pbStack_248;
                      puVar1[1] = (ulonglong)puStack_240;
                      *(undefined8 *)(lVar20 + lVar29) = CONCAT44(fStack_254,fStack_258);
                      ((undefined8 *)(lVar20 + lVar29))[1] = CONCAT44(fStack_24c,fStack_250);
                      unaff_R12[0x21] = (longlong)(pbVar26 + 1);
                      goto LAB_14087fcae;
                    }
                    uVar36 = (ushort)(uVar19 - 1) & (ushort)uVar19;
                    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar36);
                  }
                  auVar45[0] = -(auVar3[0] == unaff_XMM8_Ba);
                  auVar45[1] = -(auVar3[1] == unaff_XMM8_Bb);
                  auVar45[2] = -(auVar3[2] == unaff_XMM8_Bc);
                  auVar45[3] = -(auVar3[3] == unaff_XMM8_Bd);
                  auVar45[4] = -(auVar3[4] == unaff_XMM8_Be);
                  auVar45[5] = -(auVar3[5] == unaff_XMM8_Bf);
                  auVar45[6] = -(auVar3[6] == unaff_XMM8_Bg);
                  auVar45[7] = -(auVar3[7] == unaff_XMM8_Bh);
                  auVar45[8] = -(auVar3[8] == unaff_XMM8_Bi);
                  auVar45[9] = -(auVar3[9] == unaff_XMM8_Bj);
                  auVar45[10] = -(auVar3[10] == unaff_XMM8_Bk);
                  auVar45[0xb] = -(auVar3[0xb] == unaff_XMM8_Bl);
                  auVar45[0xc] = -(auVar3[0xc] == unaff_XMM8_Bm);
                  auVar45[0xd] = -(auVar3[0xd] == unaff_XMM8_Bn);
                  auVar45[0xe] = -(auVar3[0xe] == unaff_XMM8_Bo);
                  auVar45[0xf] = -(auVar3[0xf] == unaff_XMM8_Bp);
                  if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 ||
                                   (SUB161(auVar45 >> 0xf,0) & 1) != 0) ||
                                  (SUB161(auVar45 >> 0x17,0) & 1) != 0) ||
                                 (SUB161(auVar45 >> 0x1f,0) & 1) != 0) ||
                                (SUB161(auVar45 >> 0x27,0) & 1) != 0) ||
                               (SUB161(auVar45 >> 0x2f,0) & 1) != 0) ||
                              (SUB161(auVar45 >> 0x37,0) & 1) != 0) ||
                             (SUB161(auVar45 >> 0x3f,0) & 1) != 0) ||
                            (SUB161(auVar45 >> 0x47,0) & 1) != 0) ||
                           (SUB161(auVar45 >> 0x4f,0) & 1) != 0) ||
                          (SUB161(auVar45 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar45 >> 0x5f,0) & 1) != 0) ||
                        (SUB161(auVar45 >> 0x67,0) & 1) != 0) ||
                       (SUB161(auVar45 >> 0x6f,0) & 1) != 0) || (SUB161(auVar45 >> 0x77,0) & 1) != 0
                      ) || auVar45[0xf] < '\0') goto LAB_14088089e;
                  uVar27 = uVar27 + lVar20 + 0x10;
                  lVar20 = lVar20 + 0x10;
                } while( true );
              }
            }
          }
        }
      }
      if (cStack_f3 == '\0') {
        return;
      }
      plVar24 = (longlong *)pdb_140e97000();
      if (((char)plVar24[0xd] != '\x01') &&
         (plVar24 = (longlong *)pdb_142dde6e0(plVar24,0), plVar24 == (longlong *)0x0)) break;
      param_2 = (longlong *)0x0;
      if (*plVar24 == 0) {
        *plVar24 = -1;
        plStack_130 = plVar24;
        pdb_140e95370(plVar24 + 1,uStack_1b8);
        *plStack_130 = *plStack_130 + 1;
        return;
      }
    }
    plVar22 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_140880901:
    plVar22 = (longlong *)pdb_142dde6e0(plVar22,0);
  } while (plVar22 != (longlong *)0x0);
  pdb_142dc7890(&UNK_14330e598);
LAB_140880936:
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x90);
}

