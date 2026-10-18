// VA 0x140885ea0, PDB extent 6883 bytes
// system_decorator::decorator_visual::gothic_dormer::generate_gothic_dormers
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/gothic_dormer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::gothic_dormer::generate_gothic_dormers
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/gothic_dormer.rs
   Extent: 6883 */

void pdb_140885ea0(undefined1 (*param_1) [16],longlong *param_2,undefined8 *param_3,
                  undefined1 (*param_4) [16],longlong *param_5,undefined8 *param_6)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  int iVar6;
  undefined1 auVar7 [12];
  undefined7 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  char cVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  float *pfVar26;
  undefined4 *puVar27;
  longlong *plVar28;
  ulonglong uVar29;
  longlong lVar30;
  uint uVar31;
  ulonglong unaff_RDI;
  undefined *puVar32;
  undefined *puVar33;
  ushort uVar34;
  int *piVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong *unaff_R12;
  longlong *plVar38;
  uint uVar39;
  byte bVar40;
  undefined4 uVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  char unaff_XMM6_Ba;
  char unaff_XMM6_Bb;
  char unaff_XMM6_Bc;
  char unaff_XMM6_Bd;
  char unaff_XMM6_Be;
  char unaff_XMM6_Bf;
  char unaff_XMM6_Bg;
  char unaff_XMM6_Bh;
  char unaff_XMM6_Bi;
  char unaff_XMM6_Bj;
  char unaff_XMM6_Bk;
  char unaff_XMM6_Bl;
  char unaff_XMM6_Bm;
  char unaff_XMM6_Bn;
  char unaff_XMM6_Bo;
  char unaff_XMM6_Bp;
  float fVar55;
  float fVar56;
  undefined8 *puVar57;
  undefined4 uVar58;
  undefined8 in_stack_fffffffffffffca0;
  undefined8 in_stack_fffffffffffffca8;
  undefined4 uVar59;
  undefined8 uStack_340;
  longlong *plStack_338;
  undefined8 uStack_330;
  float fStack_328;
  undefined8 *puStack_320;
  longlong lStack_318;
  longlong lStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined4 *puStack_2f8;
  longlong *plStack_2f0;
  longlong *plStack_2e8;
  longlong *plStack_2e0;
  longlong lStack_2d8;
  longlong lStack_2d0;
  longlong lStack_2c8;
  undefined *puStack_2c0;
  ulonglong uStack_2b8;
  ulonglong uStack_2b0;
  undefined1 auStack_2a8 [16];
  longlong *plStack_298;
  longlong lStack_290;
  longlong lStack_288;
  float fStack_280;
  undefined4 uStack_27c;
  longlong lStack_278;
  longlong lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_228;
  undefined1 (*pauStack_220) [16];
  undefined8 uStack_218;
  longlong *plStack_210;
  float fStack_208;
  float fStack_204;
  undefined4 uStack_200;
  uint uStack_1fc;
  longlong lStack_1f8;
  longlong lStack_1f0;
  undefined8 uStack_1e8;
  longlong lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  longlong *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  float fStack_180;
  uint uStack_17c;
  undefined8 uStack_178;
  ushort uStack_170;
  undefined6 uStack_16e;
  undefined8 *puStack_168;
  longlong lStack_160;
  longlong lStack_158;
  undefined8 uStack_150;
  longlong *plStack_140;
  longlong *plStack_138;
  ulonglong uStack_130;
  longlong *plStack_128;
  float fStack_11c;
  longlong *plStack_118;
  undefined1 uStack_109;
  char cStack_108;
  char cStack_107;
  uint5 uStack_106;
  undefined1 uStack_101;
  float fStack_100;
  undefined3 uStack_fc;
  char cStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  plVar28 = param_2;
  cStack_f2 = pdb_140e94b40();
  plVar38 = param_3;
  if (cStack_f2 == '\0') goto LAB_1408860b1;
  unaff_RDI = 0x4a;
  lVar21 = pdb_140887b00(0x4a);
  unaff_R12 = (longlong *)&UNK_1430119d8;
  if (lVar21 == 1) {
    if ((longlong *)0x4a < plVar28) {
      pdb_142dc8070(&UNK_1430119d8,0x4a,0,plVar28,&UNK_143011aa0);
LAB_1408874ce:
      pdb_142dc8070(&UNK_1430119d8,0x4a);
LAB_1408874f1:
      uStack_188 = &cStack_108;
      fStack_180 = 12.578812;
      uStack_17c = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14330e2c6,&uStack_188,&UNK_14330e310);
    }
    uVar22 = pdb_140887b00(plVar28);
    if ((uVar22 & 1) != 0) {
      if ((undefined *)0x4a < (undefined *)((longlong)plVar28 + 2)) goto LAB_1408874ce;
      unaff_RDI = 0x48 - (longlong)plVar28;
      unaff_R12 = (longlong *)((longlong)plVar28 + 0x1430119da);
    }
  }
  puVar32 = &UNK_14301177d;
  plVar38 = (longlong *)&UNK_14301173f;
  do {
    bVar40 = puVar32[-1];
    uVar20 = (uint)(char)bVar40;
    plStack_140 = param_3;
    if ((char)bVar40 < '\0') {
      bVar3 = puVar32[-2];
      if ((char)bVar3 < -0x40) {
        bVar4 = puVar32[-3];
        if ((char)bVar4 < -0x40) {
          pbVar1 = puVar32 + -4;
          puVar32 = puVar32 + -4;
          uVar20 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar32 = puVar32 + -3;
          uVar20 = bVar4 & 0xf;
        }
        uVar20 = bVar3 & 0x3f | uVar20 << 6;
      }
      else {
        puVar32 = puVar32 + -2;
        uVar20 = bVar3 & 0x1f;
      }
      uVar20 = (uint)(bVar40 & 0x3f) | uVar20 << 6;
      if (uVar20 != 0x5c) goto LAB_140886014;
LAB_140886026:
      puVar33 = puVar32 + -0x14301173e;
      if ((undefined *)0x3e < puVar33) {
        pdb_142dc8070(&UNK_14301173f,0x3e,puVar33,0x3e,&UNK_143011a80);
LAB_140887493:
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143011920,0x28,&UNK_143011948);
      }
      uVar22 = 0x3e - (longlong)puVar33;
      plVar38 = (longlong *)(puVar32 + 1);
      goto LAB_140886049;
    }
    puVar32 = puVar32 + -1;
    if (uVar20 == 0x5c) goto LAB_140886026;
LAB_140886014:
    if (uVar20 == 0x2f) goto LAB_140886026;
  } while (puVar32 != &UNK_14301173f);
  uVar22 = 0x3e;
LAB_140886049:
  plVar23 = (longlong *)pdb_140e97000();
  if ((char)plVar23[0xd] != '\x01') goto LAB_14088741c;
  do {
    if (*plVar23 == 0) {
      *plVar23 = -1;
      in_stack_fffffffffffffca8 = 0;
      in_stack_fffffffffffffca0 = 0;
      plVar28 = unaff_R12;
      plStack_1a0 = plVar23;
      uStack_218 = pdb_140e94f10(plVar23 + 1,unaff_R12,unaff_RDI,plVar38,uVar22,1,0);
      *plStack_1a0 = *plStack_1a0 + 1;
      plVar38 = plStack_140;
LAB_1408860b1:
      uStack_340 = pdb_140c47770(param_1);
      plStack_338 = plVar28;
      uStack_1c0 = uStack_340;
      plStack_138 = plVar28;
      pdb_140a2fb40(&uStack_188,*param_2);
      uVar18 = _DAT_143011430;
      fVar17 = _UNK_143009bb4;
      fVar16 = _DAT_143009bb0;
      fVar15 = _UNK_142e61234;
      fVar14 = _DAT_142e61230;
      fVar13 = _DAT_142e37ad4;
      fVar12 = _DAT_142e36f50;
      fVar11 = _DAT_142e36f38;
      param_2 = (longlong *)CONCAT44(uStack_188._4_4_,(float)uStack_188);
      param_1 = (undefined1 (*) [16])CONCAT44(uStack_17c,fStack_180);
      uVar22 = (ulonglong)uStack_170;
      plStack_140 = puStack_168;
      plVar28 = *(longlong **)*param_4;
      lStack_1f8 = *param_5;
      plStack_1a0 = (longlong *)param_5[1];
      uStack_308 = *plVar38;
      uStack_200 = *(undefined4 *)((longlong)param_6 + 0x1c);
      uStack_300 = *param_6;
      puStack_2f8 = (undefined4 *)param_6[2];
      plStack_2f0 = plVar28 + 4;
      plStack_2e8 = plStack_138 + 4;
      iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                               CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                     CONCAT13(unaff_XMM6_Bd,
                              CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
      unaff_XMM6_Ba = (char)iVar6;
      unaff_XMM6_Bb = (char)((uint)iVar6 >> 8);
      unaff_XMM6_Bc = (char)((uint)iVar6 >> 0x10);
      unaff_XMM6_Bd = (char)((uint)iVar6 >> 0x18);
      iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                               CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                     CONCAT13(unaff_XMM6_Bh,
                              CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
      unaff_XMM6_Be = (char)iVar6;
      unaff_XMM6_Bf = (char)((uint)iVar6 >> 8);
      unaff_XMM6_Bg = (char)((uint)iVar6 >> 0x10);
      unaff_XMM6_Bh = (char)((uint)iVar6 >> 0x18);
      iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                               CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                     CONCAT13(unaff_XMM6_Bl,
                              CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
      unaff_XMM6_Bi = (char)iVar6;
      unaff_XMM6_Bj = (char)((uint)iVar6 >> 8);
      unaff_XMM6_Bk = (char)((uint)iVar6 >> 0x10);
      unaff_XMM6_Bl = (char)((uint)iVar6 >> 0x18);
      iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                               CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                     CONCAT13(unaff_XMM6_Bp,
                              CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
      unaff_XMM6_Bm = (char)iVar6;
      unaff_XMM6_Bn = (char)((uint)iVar6 >> 8);
      unaff_XMM6_Bo = (char)((uint)iVar6 >> 0x10);
      unaff_XMM6_Bp = (char)((uint)iVar6 >> 0x18);
      fVar55 = (float)_DAT_142e37950;
      uVar9 = (ulonglong)_DAT_142e37950 >> 0x20;
      fVar56 = (float)_DAT_142e378e0;
      uVar10 = (ulonglong)_DAT_142e378e0 >> 0x20;
      plStack_2e0 = plStack_138 + 10;
      while (plStack_140 != (undefined8 *)0x0) {
        if ((short)uVar22 == 0) {
          do {
            auVar43 = *param_1;
            param_2 = param_2 + -0x130;
            param_1 = param_1 + 1;
            uVar20 = (ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
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
            uVar22 = (ulonglong)uVar20;
          } while (uVar20 == 0);
        }
        uVar20 = 0;
        uVar39 = (uint)uVar22;
        for (uVar31 = uVar39; (uVar31 & 1) == 0; uVar31 = uVar31 >> 1 | 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        unaff_RDI = (ulonglong)uVar20 * -0x98;
        plVar38 = (longlong *)param_2[(ulonglong)uVar20 * -0x13 + -0x13];
        puStack_320 = plVar38;
        uVar24 = pdb_140b54b40(plVar28,plVar38);
        uVar22 = (ulonglong)(uVar39 - 1 & uVar39);
        plStack_140 = (longlong *)((longlong)plStack_140 + -1);
        unaff_R12 = plVar28;
        if (((((uVar24 & 0xffffffff) != 0) &&
             (uVar29 = uVar24 & 0xffffffff ^ 0xffffffff, uVar29 < (ulonglong)plStack_1a0[2])) &&
            (piVar35 = (int *)(uVar29 * 0x18 + plStack_1a0[1]), piVar35[4] == (int)(uVar24 >> 0x20))
            ) && (((*piVar35 != 0 &&
                   (uVar24 = *(ulonglong *)(piVar35 + 2),
                   (uVar24 & 0xffffffff) < *(ulonglong *)(lStack_1f8 + 0x38))) &&
                  (((*(ulonglong *)
                      (*(longlong *)(lStack_1f8 + 0x28) + (uVar24 >> 6 & 0x3ffffff) * 8) >>
                     (uVar24 & 0x3f) & 1) != 0 &&
                   (cVar19 = pdb_140b77b50((ulonglong)(uint)~piVar35[1] * 0x58 +
                                           *(longlong *)
                                            (*(longlong *)
                                              (plStack_1a0[0x34] + 0x18 + (uVar24 >> 0x20) * 0x48) +
                                             0x10 + ~*(ulonglong *)
                                                      (*(longlong *)
                                                        (plStack_1a0[0x34] + 0x38 +
                                                        (uVar24 >> 0x20) * 0x48) +
                                                      *(longlong *)(lStack_1f8 + 0x110) * 8) * 0x30)
                                          ), cVar19 == '\0')))))) {
          pdb_140c3ba10(&uStack_188);
          lStack_1f0 = CONCAT44(uStack_188._4_4_,(float)uStack_188);
          param_4 = (undefined1 (*) [16])CONCAT44(uStack_17c,fStack_180);
          unaff_RDI = (ulonglong)uStack_170;
          puStack_228 = puStack_168;
          lStack_318 = lStack_160;
          lStack_310 = lStack_160 + 0x50;
LAB_140886383:
          lVar21 = lStack_318;
          if (puStack_228 != (undefined8 *)0x0) {
            pauStack_220 = param_4;
            if ((short)unaff_RDI == 0) {
              do {
                auVar43 = *param_4;
                lStack_1f0 = lStack_1f0 + -0x40;
                param_4 = param_4 + 1;
                uVar20 = (ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
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
                unaff_RDI = (ulonglong)uVar20;
                pauStack_220 = param_4;
              } while (uVar20 == 0);
            }
            iVar6 = 0;
            uVar31 = (uint)unaff_RDI;
            for (uVar20 = uVar31; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
              iVar6 = iVar6 + 1;
            }
            uStack_188._0_4_ = *(float *)((lStack_1f0 - (ulonglong)(uint)(iVar6 << 2)) + -4);
            uStack_1d8 = (ulonglong)(uint)(float)uStack_188;
            if (*(longlong *)(lStack_318 + 0x48) != 0) {
              unaff_RDI = (ulonglong)(uVar31 - 1 & uVar31);
              puStack_228 = (undefined8 *)((longlong)puStack_228 + -1);
              uVar29 = pdb_1400aede0(lStack_310,&uStack_188);
              param_4 = pauStack_220;
              lStack_158 = *(longlong *)(lVar21 + 0x30);
              uVar24 = *(ulonglong *)(lVar21 + 0x38);
              bVar40 = (byte)(uVar29 >> 0x39);
              auVar43 = ZEXT216(CONCAT11(bVar40,bVar40));
              auVar43 = pshuflw(auVar43,auVar43,0);
              lVar21 = 0;
              while( true ) {
                uVar29 = uVar29 & uVar24;
                auVar54 = *(undefined1 (*) [16])(lStack_158 + uVar29);
                auVar51[0] = -(auVar54[0] == auVar43[0]);
                auVar51[1] = -(auVar54[1] == auVar43[1]);
                auVar51[2] = -(auVar54[2] == auVar43[2]);
                auVar51[3] = -(auVar54[3] == auVar43[3]);
                auVar51[4] = -(auVar54[4] == auVar43[4]);
                auVar51[5] = -(auVar54[5] == auVar43[5]);
                auVar51[6] = -(auVar54[6] == auVar43[6]);
                auVar51[7] = -(auVar54[7] == auVar43[7]);
                auVar51[8] = -(auVar54[8] == auVar43[0]);
                auVar51[9] = -(auVar54[9] == auVar43[1]);
                auVar51[10] = -(auVar54[10] == auVar43[2]);
                auVar51[0xb] = -(auVar54[0xb] == auVar43[3]);
                auVar51[0xc] = -(auVar54[0xc] == auVar43[4]);
                auVar51[0xd] = -(auVar54[0xd] == auVar43[5]);
                auVar51[0xe] = -(auVar54[0xe] == auVar43[6]);
                auVar51[0xf] = -(auVar54[0xf] == auVar43[7]);
                uVar34 = (ushort)(SUB161(auVar51 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar51[0xf] >> 7) << 0xf;
                uVar20 = (uint)uVar34;
                while (uVar34 != 0) {
                  uVar31 = 0;
                  for (uVar39 = uVar20; (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x80000000) {
                    uVar31 = uVar31 + 1;
                  }
                  uStack_130 = (uVar31 + uVar29 & uVar24) * -0x68;
                  if ((int)uStack_1d8 == *(int *)(lStack_158 + -0x68 + uStack_130)) {
                    cVar19 = pdb_140c45920(&uStack_340);
                    if (cVar19 != '\b') goto LAB_140886383;
                    pdb_140c45ec0(&plStack_298,uStack_308,uStack_1d8,&UNK_143011780);
                    lStack_158 = lStack_158 + uStack_130;
                    uStack_130 = (ulonglong)*(byte *)(lStack_158 + -7);
                    cVar19 = pdb_1409012c0(8,uStack_1c0);
                    cStack_108 = pdb_140c44ba0(uStack_130);
                    cStack_107 = cVar19;
                    lVar21 = pdb_141494370(plStack_138,&cStack_108);
                    if (lVar21 == 0) goto LAB_1408874f1;
                    uStack_268 = *(undefined8 *)(lVar21 + 0x20);
                    uStack_260 = *(undefined8 *)(lVar21 + 0x28);
                    uStack_250 = *(undefined8 *)(lVar21 + 0x38);
                    uVar41 = uVar18;
                    if ((char)uStack_130 != '\x03') {
                      uVar41 = *(undefined4 *)
                                (&UNK_143011428 + (ulonglong)((char)uStack_130 == '\x02') * 4);
                    }
                    uStack_1b8 = CONCAT44(uStack_1b8._4_4_,uVar41);
                    _uStack_258 = CONCAT44((int)((ulonglong)*(undefined8 *)(lVar21 + 0x30) >> 0x20),
                                           uVar41);
                    *puStack_2f8 = uStack_200;
                    uVar24 = uStack_130;
                    uVar25 = pdb_140947f90(plVar38);
                    uStack_248 = CONCAT71(uStack_248._1_7_,*(undefined1 *)(lStack_158 + -8));
                    plStack_128 = (longlong *)
                                  pdb_1408f3750(uStack_300,uStack_1d8,uVar25,uVar24,
                                                *(undefined1 *)(lStack_158 + -8));
                    plStack_118 = (longlong *)
                                  CONCAT44(plStack_118._4_4_,*(undefined4 *)(lStack_158 + -0x10));
                    pfVar26 = (float *)pdb_1409010f0(lStack_158 + -0x60,&UNK_143011798);
                    uStack_198 = plVar28;
                    if (plVar28[3] == 0) goto LAB_140887373;
                    auStack_2a8._0_8_ = uStack_130 & 0xff;
                    fStack_11c = *pfVar26;
                    uVar24 = pdb_1400af0a0(plStack_2f0,&puStack_320);
                    lVar21 = *uStack_198;
                    bVar40 = (byte)(uVar24 >> 0x39);
                    auVar43 = ZEXT216(CONCAT11(bVar40,bVar40));
                    auVar43 = pshuflw(auVar43,auVar43,0);
                    lVar30 = 0;
                    goto LAB_14088668b;
                  }
                  uVar34 = (ushort)(uVar20 - 1) & (ushort)uVar20;
                  uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar34);
                }
                auVar45[0] = -(auVar54[0] == unaff_XMM6_Ba);
                auVar45[1] = -(auVar54[1] == unaff_XMM6_Bb);
                auVar45[2] = -(auVar54[2] == unaff_XMM6_Bc);
                auVar45[3] = -(auVar54[3] == unaff_XMM6_Bd);
                auVar45[4] = -(auVar54[4] == unaff_XMM6_Be);
                auVar45[5] = -(auVar54[5] == unaff_XMM6_Bf);
                auVar45[6] = -(auVar54[6] == unaff_XMM6_Bg);
                auVar45[7] = -(auVar54[7] == unaff_XMM6_Bh);
                auVar45[8] = -(auVar54[8] == unaff_XMM6_Bi);
                auVar45[9] = -(auVar54[9] == unaff_XMM6_Bj);
                auVar45[10] = -(auVar54[10] == unaff_XMM6_Bk);
                auVar45[0xb] = -(auVar54[0xb] == unaff_XMM6_Bl);
                auVar45[0xc] = -(auVar54[0xc] == unaff_XMM6_Bm);
                auVar45[0xd] = -(auVar54[0xd] == unaff_XMM6_Bn);
                auVar45[0xe] = -(auVar54[0xe] == unaff_XMM6_Bo);
                auVar45[0xf] = -(auVar54[0xf] == unaff_XMM6_Bp);
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
                       (SUB161(auVar45 >> 0x5f,0) & 1) != 0) || (SUB161(auVar45 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar45 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar45 >> 0x77,0) & 1) != 0) || auVar45[0xf] < '\0') break;
                uVar29 = uVar29 + lVar21 + 0x10;
                lVar21 = lVar21 + 0x10;
              }
            }
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143011648);
          }
        }
      }
      if (cStack_f2 == '\0') {
        return;
      }
      plVar28 = (longlong *)pdb_140e97000();
      if (((char)plVar28[0xd] != '\x01') &&
         (plVar28 = (longlong *)pdb_142dde6e0(plVar28,0), plVar28 == (longlong *)0x0)) break;
      if (*plVar28 == 0) {
        *plVar28 = -1;
        plStack_140 = plVar28;
        pdb_140e95370(plVar28 + 1,uStack_218);
        *plStack_140 = *plStack_140 + 1;
        return;
      }
    }
    plVar23 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_14088741c:
    plVar23 = (longlong *)pdb_142dde6e0(plVar23,0);
  } while (plVar23 != (longlong *)0x0);
  pdb_142dc7890(&UNK_14330e598);
LAB_140887451:
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14301ce21,0x17,&UNK_14301ce30);
LAB_14088668b:
  uVar24 = uVar24 & uStack_198[1];
  auVar54 = *(undefined1 (*) [16])(lVar21 + uVar24);
  auVar52[0] = -(auVar54[0] == auVar43[0]);
  auVar52[1] = -(auVar54[1] == auVar43[1]);
  auVar52[2] = -(auVar54[2] == auVar43[2]);
  auVar52[3] = -(auVar54[3] == auVar43[3]);
  auVar52[4] = -(auVar54[4] == auVar43[4]);
  auVar52[5] = -(auVar54[5] == auVar43[5]);
  auVar52[6] = -(auVar54[6] == auVar43[6]);
  auVar52[7] = -(auVar54[7] == auVar43[7]);
  auVar52[8] = -(auVar54[8] == auVar43[0]);
  auVar52[9] = -(auVar54[9] == auVar43[1]);
  auVar52[10] = -(auVar54[10] == auVar43[2]);
  auVar52[0xb] = -(auVar54[0xb] == auVar43[3]);
  auVar52[0xc] = -(auVar54[0xc] == auVar43[4]);
  auVar52[0xd] = -(auVar54[0xd] == auVar43[5]);
  auVar52[0xe] = -(auVar54[0xe] == auVar43[6]);
  auVar52[0xf] = -(auVar54[0xf] == auVar43[7]);
  uVar34 = (ushort)(SUB161(auVar52 >> 7,0) & 1) | (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe | (ushort)(auVar52[0xf] >> 7) << 0xf;
  uVar20 = (uint)uVar34;
  while (uVar34 != 0) {
    uVar31 = 0;
    for (uVar39 = uVar20; (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x80000000) {
      uVar31 = uVar31 + 1;
    }
    lVar36 = (uVar31 + uVar24 & uStack_198[1]) * -0x2b0;
    if (plVar38 == *(undefined8 **)(lVar21 + -0x2b0 + lVar36)) {
      lStack_2d8 = lVar21 + lVar36;
      uStack_198 = (longlong *)CONCAT44(uStack_198._4_4_,*(undefined4 *)(lStack_158 + -0xc));
      uStack_1e8 = CONCAT44(uStack_1e8._4_4_,*(undefined4 *)(lStack_2d8 + -0x34));
      lStack_1e0 = CONCAT44(lStack_1e0._4_4_,uStack_258);
      uStack_109 = pdb_1408ff990(lStack_2d8 + -5);
      uVar59 = (undefined4)((ulonglong)in_stack_fffffffffffffca8 >> 0x20);
      uVar41 = (undefined4)((ulonglong)in_stack_fffffffffffffca0 >> 0x20);
      uVar20 = (int)uStack_130 - 1;
      if (2 < (byte)uVar20) goto LAB_140886383;
      uStack_2b0 = (ulonglong)(uVar20 & 0xff);
      lStack_2c8 = (longlong)*(int *)(&UNK_143011b00 + uStack_2b0 * 4);
      puStack_2c0 = &UNK_14301185c;
      if (plStack_118._0_4_ == 1.3999e-42) {
        puStack_2c0 = &UNK_143011831;
      }
      plStack_210 = plStack_128 + 0x16;
      uStack_17c = uStack_17c & 0xff000000;
      uStack_188._0_4_ = (float)((uint)(float)uStack_188 & 0xffffff);
      uStack_188._4_4_ = 0.0;
      fStack_180 = 0.0;
      fStack_100 = 0.0;
      uStack_fc = 0;
      cStack_108 = SUB41((float)uStack_188,0);
      cStack_107 = (char)((uint)(float)uStack_188 >> 8);
      uStack_106 = (uint5)(ushort)((uint)(float)uStack_188 >> 0x10);
      uStack_101 = 0;
      lStack_2d0 = plStack_128[0x18];
      uStack_1fc = uVar20;
      if (lStack_2d0 == plStack_128[0x16]) {
        pdb_142d8ddd0(plStack_210);
      }
      uStack_2b8 = uStack_2b8 & 0xffffffff00000000;
      lVar21 = plStack_128[0x17];
      lVar30 = lStack_2d0 * 0x170;
      *(undefined8 *)(lVar21 + lVar30) = 0;
      *(undefined8 *)(lVar21 + 0x10 + lVar30) = 0;
      *(undefined8 *)(lVar21 + 0x20 + lVar30) = 0;
      *(undefined8 *)(lVar21 + 0x30 + lVar30) = 0;
      *(undefined4 *)(lVar21 + 0x40 + lVar30) = 0;
      *(undefined4 *)(lVar21 + 0x50 + lVar30) = 0;
      *(undefined4 *)(lVar21 + 0x60 + lVar30) = 0;
      *(undefined4 *)(lVar21 + 0x70 + lVar30) = 2;
      *(undefined **)(lVar21 + 0x90 + lVar30) = &UNK_143011b00 + lStack_2c8;
      *(undefined8 *)(lVar21 + 0x98 + lVar30) = 0x23;
      *(undefined **)(lVar21 + 0xa0 + lVar30) = puStack_2c0;
      *(undefined8 *)(lVar21 + 0xa8 + lVar30) = 0x2b;
      puVar57 = (undefined8 *)(lVar21 + 0xb0 + lVar30);
      *puVar57 = plStack_298;
      puVar57[1] = lStack_290;
      plVar23 = (longlong *)(lVar21 + 0xc0 + lVar30);
      *plVar23 = lStack_288;
      plVar23[1] = CONCAT44(uStack_27c,fStack_280);
      plVar23 = (longlong *)(lVar21 + 0xd0 + lVar30);
      *plVar23 = lStack_278;
      plVar23[1] = lStack_270;
      *(undefined4 *)(lVar21 + 0xe0 + lVar30) = 1;
      *(float *)(lVar21 + 0xe4 + lVar30) = plStack_118._0_4_;
      *(ulonglong *)(lVar21 + 0xe8 + lVar30) = uStack_2b8;
      *(float *)(lVar21 + 0xf0 + lVar30) = fStack_11c;
      *(float *)(lVar21 + 0xf4 + lVar30) = (float)uStack_1b8 + fStack_11c;
      *(float *)(lVar21 + 0xf8 + lVar30) = (float)uStack_198;
      *(undefined4 *)(lVar21 + 0xfc + lVar30) = (undefined4)uStack_1e8;
      *(undefined4 *)(lVar21 + 0x100 + lVar30) = (undefined4)lStack_1e0;
      *(undefined1 *)(lVar21 + 0x104 + lVar30) = uStack_109;
      *(undefined1 *)(lVar21 + 0x105 + lVar30) = 0;
      *(undefined4 *)(lVar21 + 0x108 + lVar30) = 0;
      *(undefined1 *)(lVar21 + 0x15c + lVar30) = 2;
      *(ulonglong *)(lVar21 + 0x15d + lVar30) =
           CONCAT17(uStack_101,CONCAT52(uStack_106,CONCAT11(cStack_107,cStack_108)));
      *(ulonglong *)(lVar21 + 0x164 + lVar30) = CONCAT35(uStack_fc,CONCAT41(fStack_100,uStack_101));
      *(undefined1 *)(lVar21 + 0x16c + lVar30) = 2;
      *(undefined1 *)(lVar21 + 0x16e + lVar30) = (undefined1)uStack_248;
      *(undefined1 *)(lVar21 + 0x16f + lVar30) = 0;
      plStack_128[0x18] = lStack_2d0 + 1;
      cVar19 = pdb_1409012c0(CONCAT71((int7)((ulonglong)lVar30 >> 8),8),uStack_1c0);
      cStack_108 = pdb_140c44ba0(uStack_130);
      cStack_107 = cVar19;
      if (plStack_138[3] == 0) goto LAB_140887391;
      puVar32 = (undefined *)pdb_1413f0300(plStack_2e8,&cStack_108);
      lVar21 = *plStack_138;
      uVar24 = plStack_138[1];
      bVar40 = (byte)((ulonglong)puVar32 >> 0x39);
      auVar43 = ZEXT216(CONCAT11(bVar40,bVar40));
      auVar43 = pshuflw(auVar43,auVar43,0);
      uStack_198 = (longlong *)0x0;
      goto LAB_140886a30;
    }
    uVar34 = (ushort)(uVar20 - 1) & (ushort)uVar20;
    uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar34);
  }
  auVar46[0] = -(auVar54[0] == unaff_XMM6_Ba);
  auVar46[1] = -(auVar54[1] == unaff_XMM6_Bb);
  auVar46[2] = -(auVar54[2] == unaff_XMM6_Bc);
  auVar46[3] = -(auVar54[3] == unaff_XMM6_Bd);
  auVar46[4] = -(auVar54[4] == unaff_XMM6_Be);
  auVar46[5] = -(auVar54[5] == unaff_XMM6_Bf);
  auVar46[6] = -(auVar54[6] == unaff_XMM6_Bg);
  auVar46[7] = -(auVar54[7] == unaff_XMM6_Bh);
  auVar46[8] = -(auVar54[8] == unaff_XMM6_Bi);
  auVar46[9] = -(auVar54[9] == unaff_XMM6_Bj);
  auVar46[10] = -(auVar54[10] == unaff_XMM6_Bk);
  auVar46[0xb] = -(auVar54[0xb] == unaff_XMM6_Bl);
  auVar46[0xc] = -(auVar54[0xc] == unaff_XMM6_Bm);
  auVar46[0xd] = -(auVar54[0xd] == unaff_XMM6_Bn);
  auVar46[0xe] = -(auVar54[0xe] == unaff_XMM6_Bo);
  auVar46[0xf] = -(auVar54[0xf] == unaff_XMM6_Bp);
  if ((((((((((((((((SUB161(auVar46 >> 7,0) & 1) != 0 || (SUB161(auVar46 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar46 >> 0x17,0) & 1) != 0) || (SUB161(auVar46 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar46 >> 0x27,0) & 1) != 0) || (SUB161(auVar46 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar46 >> 0x37,0) & 1) != 0) || (SUB161(auVar46 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar46 >> 0x47,0) & 1) != 0) || (SUB161(auVar46 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar46 >> 0x57,0) & 1) != 0) || (SUB161(auVar46 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar46 >> 0x67,0) & 1) != 0) || (SUB161(auVar46 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar46 >> 0x77,0) & 1) != 0) || auVar46[0xf] < '\0') goto LAB_140887373;
  uVar24 = uVar24 + lVar30 + 0x10;
  lVar30 = lVar30 + 0x10;
  goto LAB_14088668b;
LAB_140886a30:
  uVar29 = (ulonglong)puVar32 & uVar24;
  auVar54 = *(undefined1 (*) [16])(lVar21 + uVar29);
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
  uVar34 = (ushort)(SUB161(auVar53 >> 7,0) & 1) | (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe | (ushort)(auVar53[0xf] >> 7) << 0xf;
  uVar20 = (uint)uVar34;
  if (uVar34 != 0) {
    plStack_118 = (longlong *)CONCAT71(plStack_118._1_7_,cStack_108);
    if (cStack_108 == '\x1a') {
      do {
        uVar31 = 0;
        for (uVar39 = uVar20; (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar37 = uVar31 + uVar29 & uVar24;
        if (*(char *)(lVar21 + -0x48 + uVar37 * -0x48) == '\x1a') goto LAB_140886b23;
        uVar34 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar34);
      } while (uVar34 != 0);
    }
    else {
      uStack_1b8 = CONCAT71(uStack_1b8._1_7_,cStack_107);
      do {
        uVar31 = 0;
        for (uVar39 = uVar20; (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar37 = uVar31 + uVar29 & uVar24;
        cVar19 = *(char *)(lVar21 + -0x48 + uVar37 * -0x48);
        if (((cVar19 != '\x1a') && (cStack_108 == cVar19)) &&
           (cStack_107 == *(char *)(lVar21 + uVar37 * -0x48 + -0x47))) goto LAB_140886b23;
        uVar34 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar34);
      } while (uVar34 != 0);
    }
  }
  auVar47[0] = -(auVar54[0] == unaff_XMM6_Ba);
  auVar47[1] = -(auVar54[1] == unaff_XMM6_Bb);
  auVar47[2] = -(auVar54[2] == unaff_XMM6_Bc);
  auVar47[3] = -(auVar54[3] == unaff_XMM6_Bd);
  auVar47[4] = -(auVar54[4] == unaff_XMM6_Be);
  auVar47[5] = -(auVar54[5] == unaff_XMM6_Bf);
  auVar47[6] = -(auVar54[6] == unaff_XMM6_Bg);
  auVar47[7] = -(auVar54[7] == unaff_XMM6_Bh);
  auVar47[8] = -(auVar54[8] == unaff_XMM6_Bi);
  auVar47[9] = -(auVar54[9] == unaff_XMM6_Bj);
  auVar47[10] = -(auVar54[10] == unaff_XMM6_Bk);
  auVar47[0xb] = -(auVar54[0xb] == unaff_XMM6_Bl);
  auVar47[0xc] = -(auVar54[0xc] == unaff_XMM6_Bm);
  auVar47[0xd] = -(auVar54[0xd] == unaff_XMM6_Bn);
  auVar47[0xe] = -(auVar54[0xe] == unaff_XMM6_Bo);
  auVar47[0xf] = -(auVar54[0xf] == unaff_XMM6_Bp);
  if ((((((((((((((((SUB161(auVar47 >> 7,0) & 1) != 0 || (SUB161(auVar47 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar47 >> 0x17,0) & 1) != 0) || (SUB161(auVar47 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar47 >> 0x27,0) & 1) != 0) || (SUB161(auVar47 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar47 >> 0x37,0) & 1) != 0) || (SUB161(auVar47 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar47 >> 0x47,0) & 1) != 0) || (SUB161(auVar47 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar47 >> 0x57,0) & 1) != 0) || (SUB161(auVar47 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar47 >> 0x67,0) & 1) != 0) || (SUB161(auVar47 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar47 >> 0x77,0) & 1) != 0) || auVar47[0xf] < '\0') {
LAB_140887391:
    uStack_188 = &cStack_108;
    fStack_180 = 4.2614746;
    uStack_17c = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14301169d,&uStack_188,&UNK_1430116d0);
  }
  puVar32 = (undefined *)((longlong)uStack_198 + uVar29 + 0x10);
  uStack_198 = uStack_198 + 2;
  goto LAB_140886a30;
LAB_140886b23:
  plVar23 = *(longlong **)(lVar21 + -0x28 + uVar37 * -0x48);
  LOCK();
  lVar30 = *plVar23;
  *plVar23 = *plVar23 + 1;
  UNLOCK();
  if (*plVar23 != 0 && SCARRY8(lVar30,1) == *plVar23 < 0) {
    uStack_f1 = 1;
    uStack_238 = plVar23;
    plStack_118 = plVar23;
    cVar19 = pdb_1409012c0(CONCAT71((int7)((ulonglong)lVar21 >> 8),8),uStack_1c0);
    uStack_f1 = 1;
    cStack_108 = pdb_140c44ba0(uStack_130);
    cStack_107 = cVar19;
    if (plStack_138[9] != 0) {
      uStack_f1 = 1;
      puVar32 = (undefined *)pdb_1413f0300(plStack_2e0,&cStack_108);
      lVar21 = plStack_138[6];
      uVar24 = plStack_138[7];
      bVar40 = (byte)((ulonglong)puVar32 >> 0x39);
      auVar43 = ZEXT216(CONCAT11(bVar40,bVar40));
      auVar43 = pshuflw(auVar43,auVar43,0);
      uStack_198 = (longlong *)0x0;
      while( true ) {
        uVar29 = (ulonglong)puVar32 & uVar24;
        pcVar2 = (char *)(lVar21 + uVar29);
        auVar54[0] = -(*pcVar2 == auVar43[0]);
        auVar54[1] = -(pcVar2[1] == auVar43[1]);
        auVar54[2] = -(pcVar2[2] == auVar43[2]);
        auVar54[3] = -(pcVar2[3] == auVar43[3]);
        auVar54[4] = -(pcVar2[4] == auVar43[4]);
        auVar54[5] = -(pcVar2[5] == auVar43[5]);
        auVar54[6] = -(pcVar2[6] == auVar43[6]);
        auVar54[7] = -(pcVar2[7] == auVar43[7]);
        auVar54[8] = -(pcVar2[8] == auVar43[0]);
        auVar54[9] = -(pcVar2[9] == auVar43[1]);
        auVar54[10] = -(pcVar2[10] == auVar43[2]);
        auVar54[0xb] = -(pcVar2[0xb] == auVar43[3]);
        auVar54[0xc] = -(pcVar2[0xc] == auVar43[4]);
        auVar54[0xd] = -(pcVar2[0xd] == auVar43[5]);
        auVar54[0xe] = -(pcVar2[0xe] == auVar43[6]);
        auVar54[0xf] = -(pcVar2[0xf] == auVar43[7]);
        uVar34 = (ushort)(SUB161(auVar54 >> 7,0) & 1) | (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe | (ushort)(auVar54[0xf] >> 7) << 0xf
        ;
        uVar20 = (uint)uVar34;
        if (uVar34 != 0) {
          uStack_1b8 = CONCAT71(uStack_1b8._1_7_,cStack_108);
          if (cStack_108 == '\x1a') {
            do {
              uVar31 = 0;
              for (uVar39 = uVar20; (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x80000000) {
                uVar31 = uVar31 + 1;
              }
              uVar37 = uVar31 + uVar29 & uVar24;
              if (*(char *)(lVar21 + -0x48 + uVar37 * -0x48) == '\x1a') goto LAB_140886cdd;
              uVar34 = (ushort)(uVar20 - 1) & (ushort)uVar20;
              uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar34);
            } while (uVar34 != 0);
          }
          else {
            fStack_11c = (float)CONCAT31(fStack_11c._1_3_,cStack_107);
            do {
              uVar31 = 0;
              for (uVar39 = uVar20; (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x80000000) {
                uVar31 = uVar31 + 1;
              }
              uVar37 = uVar31 + uVar29 & uVar24;
              cVar19 = *(char *)(lVar21 + -0x48 + uVar37 * -0x48);
              if (((cVar19 != '\x1a') && (cStack_108 == cVar19)) &&
                 (cStack_107 == *(char *)(lVar21 + uVar37 * -0x48 + -0x47))) goto LAB_140886cdd;
              uVar34 = (ushort)(uVar20 - 1) & (ushort)uVar20;
              uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar34);
            } while (uVar34 != 0);
          }
        }
        auVar48[0] = -(*pcVar2 == unaff_XMM6_Ba);
        auVar48[1] = -(pcVar2[1] == unaff_XMM6_Bb);
        auVar48[2] = -(pcVar2[2] == unaff_XMM6_Bc);
        auVar48[3] = -(pcVar2[3] == unaff_XMM6_Bd);
        auVar48[4] = -(pcVar2[4] == unaff_XMM6_Be);
        auVar48[5] = -(pcVar2[5] == unaff_XMM6_Bf);
        auVar48[6] = -(pcVar2[6] == unaff_XMM6_Bg);
        auVar48[7] = -(pcVar2[7] == unaff_XMM6_Bh);
        auVar48[8] = -(pcVar2[8] == unaff_XMM6_Bi);
        auVar48[9] = -(pcVar2[9] == unaff_XMM6_Bj);
        auVar48[10] = -(pcVar2[10] == unaff_XMM6_Bk);
        auVar48[0xb] = -(pcVar2[0xb] == unaff_XMM6_Bl);
        auVar48[0xc] = -(pcVar2[0xc] == unaff_XMM6_Bm);
        auVar48[0xd] = -(pcVar2[0xd] == unaff_XMM6_Bn);
        auVar48[0xe] = -(pcVar2[0xe] == unaff_XMM6_Bo);
        auVar48[0xf] = -(pcVar2[0xf] == unaff_XMM6_Bp);
        if ((((((((((((((((SUB161(auVar48 >> 7,0) & 1) != 0 || (SUB161(auVar48 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar48 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar48 >> 0x1f,0) & 1) != 0) || (SUB161(auVar48 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar48 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar48 >> 0x37,0) & 1) != 0) || (SUB161(auVar48 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar48 >> 0x47,0) & 1) != 0) || (SUB161(auVar48 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar48 >> 0x57,0) & 1) != 0) || (SUB161(auVar48 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar48 >> 0x67,0) & 1) != 0) || (SUB161(auVar48 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar48 >> 0x77,0) & 1) != 0) || auVar48[0xf] < '\0') break;
        puVar32 = (undefined *)((longlong)uStack_198 + uVar29 + 0x10);
        uStack_198 = uStack_198 + 2;
      }
    }
    uStack_188 = &cStack_108;
    fStack_180 = 4.2614746;
    uStack_17c = 1;
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14301169d,&uStack_188,&UNK_1430116e8);
  }
  goto LAB_140887528;
LAB_140887373:
  pdb_142dc8110(&UNK_1430115f0,0x16,&UNK_1430117b0);
  goto LAB_140887528;
LAB_140886cdd:
  plVar23 = *(longlong **)(lVar21 + -0x28 + uVar37 * -0x48);
  LOCK();
  lVar21 = *plVar23;
  *plVar23 = *plVar23 + 1;
  UNLOCK();
  if (*plVar23 != 0 && SCARRY8(lVar21,1) == *plVar23 < 0) {
    uStack_1b8 = lStack_288;
    uStack_1b0 = 0;
    cStack_108 = (char)lStack_288;
    cStack_107 = (char)((ulonglong)lStack_288 >> 8);
    uStack_106 = (uint5)((ulonglong)lStack_288 >> 0x10);
    uStack_101 = (undefined1)((ulonglong)lStack_288 >> 0x38);
    fStack_11c = fStack_280;
    fStack_100 = fStack_280;
    uStack_198 = plStack_298;
    uStack_190 = lStack_290;
    uStack_188._0_4_ = SUB84(plStack_298,0);
    uStack_188._4_4_ = (float)((ulonglong)plStack_298 >> 0x20);
    fStack_180 = (float)lStack_290;
    uStack_17c = (uint)((ulonglong)lStack_290 >> 0x20);
    uStack_f1 = 0;
    puVar57 = &uStack_188;
    pdb_1408f3120(plStack_128,plStack_118,plVar23,&cStack_108,puVar57);
    uVar58 = (undefined4)((ulonglong)puVar57 >> 0x20);
    if (*plStack_128 != 0 || plStack_128[1] != 0) goto LAB_140887451;
    plStack_128[1] = 0;
    *plStack_128 = 1;
    plStack_128[2] = (longlong)plStack_298;
    plStack_128[3] = lStack_290;
    plStack_128[4] = lStack_288;
    plStack_128[5] = CONCAT44(uStack_27c,fStack_280);
    plStack_128[6] = lStack_278;
    plStack_128[7] = lStack_270;
    if (2 < (byte)uStack_1fc) goto LAB_140887493;
    plStack_118 = (longlong *)(longlong)*(int *)(&UNK_143011b0c + uStack_2b0 * 4);
    uStack_17c._0_3_ = 0;
    uStack_188._0_4_ = (float)((uint)(float)uStack_188 & 0xffffff);
    uStack_188._4_4_ = 0.0;
    fStack_180 = 0.0;
    fStack_100 = 0.0;
    uStack_fc = 0;
    cStack_108 = SUB41((float)uStack_188,0);
    cStack_107 = (char)((uint)(float)uStack_188 >> 8);
    uStack_106 = (uint5)(ushort)((uint)(float)uStack_188 >> 0x10);
    uStack_101 = 0;
    puVar27 = (undefined4 *)pdb_1409014f0(lStack_158 + -0x28,&UNK_143011908);
    lStack_158 = CONCAT44(lStack_158._4_4_,*puVar27);
    uStack_1e8 = pdb_140df4400(&UNK_14330db74,0xc);
    uVar8 = CONCAT52(uStack_106,CONCAT11(cStack_107,cStack_108));
    fStack_180 = fStack_100;
    uStack_17c = CONCAT13(uStack_17c._3_1_,uStack_fc);
    uStack_188._0_4_ = (float)uVar8;
    uStack_188._4_4_ = (float)(CONCAT17(uStack_101,uVar8) >> 0x20);
    lStack_1e0 = plStack_128[0x18];
    if (lStack_1e0 == plStack_128[0x16]) {
      pdb_142d8ddd0(plStack_210);
    }
    lVar21 = plStack_128[0x17];
    lVar30 = lStack_1e0 * 0x170;
    *(undefined8 *)(lVar21 + lVar30) = 0;
    *(undefined8 *)(lVar21 + 0x10 + lVar30) = 1;
    *(ulonglong *)(lVar21 + 0x18 + lVar30) = auStack_2a8._0_8_ * 1000 + uStack_1d8;
    *(undefined8 *)(lVar21 + 0x20 + lVar30) = 1;
    *(undefined8 *)(lVar21 + 0x28 + lVar30) = uStack_1e8;
    *(undefined8 *)(lVar21 + 0x30 + lVar30) = 0;
    *(undefined4 *)(lVar21 + 0x40 + lVar30) = 0;
    *(undefined4 *)(lVar21 + 0x50 + lVar30) = 0;
    *(undefined4 *)(lVar21 + 0x60 + lVar30) = 0;
    *(undefined4 *)(lVar21 + 0x70 + lVar30) = 2;
    *(undefined **)(lVar21 + 0x90 + lVar30) = &UNK_143011b0c + (longlong)plStack_118;
    *(undefined8 *)(lVar21 + 0x98 + lVar30) = 0x29;
    *(undefined **)(lVar21 + 0xa0 + lVar30) = &UNK_14330db43;
    *(undefined8 *)(lVar21 + 0xa8 + lVar30) = 0x31;
    puVar57 = (undefined8 *)(lVar21 + 0xb0 + lVar30);
    *puVar57 = plStack_298;
    puVar57[1] = lStack_290;
    plVar23 = (longlong *)(lVar21 + 0xc0 + lVar30);
    *plVar23 = lStack_288;
    plVar23[1] = CONCAT44(uStack_27c,fStack_280);
    plVar23 = (longlong *)(lVar21 + 0xd0 + lVar30);
    *plVar23 = lStack_278;
    plVar23[1] = lStack_270;
    *(undefined4 *)(lVar21 + 0xe0 + lVar30) = 1;
    *(undefined4 *)(lVar21 + 0xe4 + lVar30) = (undefined4)lStack_158;
    *(undefined4 *)(lVar21 + 0xe8 + lVar30) = 0;
    *(undefined1 *)(lVar21 + 0x105 + lVar30) = 2;
    *(undefined4 *)(lVar21 + 0x108 + lVar30) = 0;
    *(undefined1 *)(lVar21 + 0x15c + lVar30) = 2;
    *(ulonglong *)(lVar21 + 0x15d + lVar30) = CONCAT44(uStack_188._4_4_,(float)uStack_188);
    *(ulonglong *)(lVar21 + 0x164 + lVar30) =
         CONCAT35((undefined3)uStack_17c,CONCAT41(fStack_180,uStack_188._7_1_));
    *(undefined1 *)(lVar21 + 0x16c + lVar30) = 2;
    *(undefined1 *)(lVar21 + 0x16e + lVar30) = (undefined1)uStack_248;
    *(undefined1 *)(lVar21 + 0x16f + lVar30) = 0;
    plStack_128[0x18] = lStack_1e0 + 1;
    fVar49 = uStack_190._4_4_ * uStack_190._4_4_;
    fVar50 = uStack_198._4_4_ * uStack_198._4_4_ + (float)uStack_198 * (float)uStack_198;
    fVar42 = (float)uStack_190 * _UNK_142e378f8 +
             uStack_198._4_4_ * _UNK_142e378f4 + (float)uStack_198 * _DAT_142e378f0;
    fVar42 = fVar42 + fVar42;
    auVar43._0_4_ =
         fVar42 * (float)uStack_198 +
         (fVar49 - (fVar50 + (float)uStack_190 * (float)uStack_190)) * _DAT_142e378f0;
    auVar43._4_4_ = fVar42 * uStack_198._4_4_ + (fVar49 - (fVar50 + fVar49)) * _UNK_142e378f4;
    auVar43._8_4_ =
         fVar42 * (float)uStack_190 +
         (fVar49 - (fVar50 + (float)uStack_190 * (float)uStack_190)) * _UNK_142e378f8;
    auVar43._12_4_ = fVar42 * uStack_190._4_4_ + (fVar49 - (fVar50 + fVar49)) * _UNK_142e378fc;
    fVar49 = uStack_190._4_4_ + uStack_190._4_4_;
    fStack_208 = fVar49 * (uStack_198._4_4_ * fVar55 - (float)uStack_190 * 0.0) + auVar43._0_4_;
    fVar42 = fVar49 * (uStack_198._4_4_ * (float)uVar9 - uStack_198._4_4_ * 0.0) + auVar43._4_4_;
    fStack_204 = fVar49 * ((float)uStack_198 * 0.0 - uStack_198._4_4_ * 0.0) + auVar43._8_4_;
    fVar49 = fVar49 * (uStack_190._4_4_ * 0.0 - uStack_190._4_4_ * 0.0) + auVar43._12_4_;
    auVar7._4_8_ = auVar43._8_8_;
    auVar7._0_4_ = fVar42;
    auVar44._0_8_ = auVar7._0_8_ << 0x20;
    auVar44._8_4_ = fStack_204;
    auVar44._12_4_ = fVar49;
    lStack_158 = auVar44._8_8_;
    uStack_150 = CONCAT44(fVar49,fStack_204);
    uStack_198 = (longlong *)CONCAT44(fVar42,fStack_208);
    uStack_190 = CONCAT44(fVar49,fStack_204);
    pdb_140df4540(&uStack_238,&uStack_260,((float)uStack_250 + uStack_250._4_4_) * fVar12);
    uStack_1d8._0_4_ = uStack_238._4_4_ * fVar56;
    uStack_1d8._4_4_ = uStack_238._4_4_ * (float)uVar10;
    uStack_1d0 = 0;
    pdb_140df4520(&uStack_188,&fStack_208);
    pdb_140df4150(&cStack_108,&uStack_268);
    auStack_2a8 = ZEXT416((uint)fStack_100);
    uStack_248 = CONCAT44(uStack_188._4_4_,(float)uStack_188);
    uStack_240 = 0;
    plStack_118 = (longlong *)CONCAT44(plStack_118._4_4_,fStack_180);
    pdb_140df4520(&uStack_188,&fStack_208);
    fStack_328 = fStack_180 * fVar13 +
                 plStack_118._0_4_ * (float)auStack_2a8._0_4_ * fVar11 +
                 fStack_11c + (float)uStack_1d8;
    uStack_330 = CONCAT44(uStack_188._4_4_ * fVar17 +
                          (float)auStack_2a8._0_4_ * uStack_248._4_4_ * fVar15 +
                          uStack_1b8._4_4_ + uStack_1d8._4_4_,
                          (float)uStack_188 * fVar16 +
                          (float)auStack_2a8._0_4_ * (float)uStack_248 * fVar14 +
                          (float)uStack_1b8 + (float)uStack_1d8);
    uStack_1d8 = CONCAT44(uStack_1d8._4_4_,*(undefined4 *)(lStack_2d8 + -0x34));
    pdb_140df4150(&cStack_108,&uStack_268);
    in_stack_fffffffffffffca0 = CONCAT44(uVar41,(undefined4)lStack_158);
    in_stack_fffffffffffffca8 = CONCAT44(uVar59,0x3f851eb8);
    pdb_140c17730(&uStack_188,uStack_1d8 & 0xffffffff,&uStack_330,&cStack_108,
                  CONCAT44(uVar58,(int)uStack_198),in_stack_fffffffffffffca0,
                  in_stack_fffffffffffffca8,
                  *(undefined4 *)(&UNK_143011438 + (ulonglong)((char)uStack_130 == '\x03') * 4));
    lStack_158 = plStack_128[0x21];
    if (lStack_158 == plStack_128[0x1f]) {
      pdb_142d8d630(plStack_128 + 0x1f);
    }
    lVar21 = plStack_128[0x20];
    lVar30 = lStack_158 * 0x30;
    puVar57 = (undefined8 *)(lVar21 + 0x20 + lVar30);
    *puVar57 = puStack_168;
    puVar57[1] = lStack_160;
    puVar57 = (undefined8 *)(lVar21 + 0x10 + lVar30);
    *puVar57 = uStack_178;
    puVar57[1] = CONCAT62(uStack_16e,uStack_170);
    *(undefined8 *)(lVar21 + lVar30) = CONCAT44(uStack_188._4_4_,(float)uStack_188);
    ((undefined8 *)(lVar21 + lVar30))[1] = CONCAT44(uStack_17c,fStack_180);
    plStack_128[0x21] = lStack_158 + 1;
    goto LAB_140886383;
  }
LAB_140887528:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

