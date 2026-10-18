// VA 0x140881850, PDB extent 4531 bytes
// system_decorator::decorator_visual::chimney_roof::generate_roof_chimneys
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/chimney_roof.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::chimney_roof::generate_roof_chimneys
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/chimney_roof.rs
   Extent: 4531 */

void pdb_140881850(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined1 auVar1 [16];
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined1 (*pauVar21) [16];
  char cVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined1 (*pauVar26) [16];
  longlong *plVar27;
  ulonglong uVar28;
  longlong *plVar29;
  undefined8 uVar30;
  float *pfVar31;
  byte *pbVar32;
  longlong lVar33;
  undefined8 *puVar34;
  longlong lVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  longlong lVar38;
  uint uVar39;
  undefined *puVar40;
  ushort uVar41;
  undefined8 *puVar42;
  undefined *puVar43;
  longlong lVar44;
  byte bVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
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
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 uStack_308;
  undefined4 uStack_300;
  uint uStack_2fc;
  undefined8 *puStack_2f8;
  undefined1 (*pauStack_2f0) [16];
  undefined8 uStack_2e8;
  ulonglong uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  longlong lStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined1 (*pauStack_260) [16];
  longlong lStack_258;
  undefined8 uStack_250;
  undefined4 *puStack_248;
  undefined8 uStack_240;
  byte bStack_238;
  undefined2 uStack_237;
  undefined4 uStack_235;
  undefined4 uStack_231;
  uint uStack_22d;
  undefined1 uStack_229;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined1 (*pauStack_210) [16];
  undefined8 uStack_208;
  ulonglong uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined4 uStack_198;
  float fStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong lStack_188;
  longlong lStack_180;
  undefined4 uStack_174;
  float fStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  ulonglong uStack_158;
  longlong lStack_150;
  longlong lStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong lStack_138;
  undefined1 (*pauStack_130) [16];
  undefined8 *puStack_128;
  longlong lStack_120;
  undefined1 (*pauStack_118) [16];
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  longlong *plStack_100;
  undefined4 uStack_f8;
  byte bStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puVar37 = param_2;
  cVar22 = pdb_140e94b40();
  if (cVar22 == '\0') {
    lStack_150 = 0;
    if (*_DAT_143ca4500 == '\0') {
LAB_140881b59:
      uStack_270 = pdb_140c47770(param_1);
      puStack_268 = puVar37;
      pdb_140c41140(&bStack_238,*param_2);
      fVar15 = _UNK_14300d238;
      fVar14 = _DAT_14300d230;
      fVar13 = _DAT_142e3788c;
      fVar12 = _DAT_142e36f28;
      bStack_f2 = bStack_238;
      puVar37 = (undefined8 *)CONCAT17(uStack_229,CONCAT43(uStack_22d,uStack_231._1_3_));
      puStack_108 = puStack_218;
      uStack_158 = uStack_200 & 0xffff;
      lStack_138 = CONCAT44(uStack_1f4,uStack_1f8);
      uStack_168 = *param_3;
      uStack_140 = *(undefined4 *)((longlong)param_5 + 0x1c);
      uStack_250 = *param_5;
      puStack_248 = (undefined4 *)param_5[2];
      uStack_240 = *param_4;
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
      pauStack_130 = pauStack_210;
      puVar42 = puStack_220;
      puVar36 = puStack_218;
      lVar24 = uStack_228;
      puVar34 = puStack_220;
      if (uStack_228 != 2) goto LAB_140881c50;
LAB_140881d7c:
      puStack_110 = puVar34;
      if ((puVar37 != (undefined8 *)0x0 & bStack_f2) == 1) {
        lVar44 = 2;
        lStack_120 = 2;
        puStack_128 = (undefined8 *)0x0;
        puVar34 = puVar37;
        puStack_108 = puVar36;
LAB_140881dae:
        do {
          puStack_278 = puStack_160;
          lStack_280 = lVar44;
          lStack_258 = lVar44;
          pdb_140c3ba10(&bStack_238,puVar34);
          lVar24 = CONCAT17((undefined1)uStack_231,
                            CONCAT43(uStack_235,CONCAT21(uStack_237,bStack_238)));
          pauVar26 = (undefined1 (*) [16])CONCAT17(uStack_229,CONCAT43(uStack_22d,uStack_231._1_3_))
          ;
          uVar23 = (uint)(ushort)puStack_220;
          plStack_100 = puStack_218;
          pauStack_118 = pauStack_210;
          pauStack_260 = pauStack_210 + 5;
LAB_140881e00:
          pauVar21 = pauStack_118;
          if (plStack_100 != (undefined8 *)0x0) {
            if ((short)uVar23 == 0) {
              do {
                auVar47 = *pauVar26;
                lVar24 = lVar24 + -0x40;
                pauVar26 = pauVar26 + 1;
                uVar23 = (ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
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
              } while (uVar23 == 0);
            }
            iVar5 = 0;
            for (uVar39 = uVar23; (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x80000000) {
              iVar5 = iVar5 + 1;
            }
            iVar5 = *(int *)((lVar24 - (ulonglong)(uint)(iVar5 << 2)) + -4);
            bStack_238 = (byte)iVar5;
            uStack_237 = (undefined2)((uint)iVar5 >> 8);
            uStack_235._0_1_ = (undefined1)((uint)iVar5 >> 0x18);
            if (*(longlong *)(pauStack_118[4] + 8) != 0) {
              uVar23 = uVar23 - 1 & uVar23;
              puVar37 = (undefined8 *)((longlong)plStack_100 + -1);
              uVar28 = pdb_1400aede0(pauStack_260,&bStack_238);
              lVar44 = *(longlong *)pauVar21[3];
              uVar25 = *(ulonglong *)(pauVar21[3] + 8);
              bVar45 = (byte)(uVar28 >> 0x39);
              auVar47 = ZEXT216(CONCAT11(bVar45,bVar45));
              auVar47 = pshuflw(auVar47,auVar47,0);
              lVar35 = 0;
              while( true ) {
                uVar28 = uVar28 & uVar25;
                auVar1 = *(undefined1 (*) [16])(lVar44 + uVar28);
                auVar49[0] = -(auVar1[0] == auVar47[0]);
                auVar49[1] = -(auVar1[1] == auVar47[1]);
                auVar49[2] = -(auVar1[2] == auVar47[2]);
                auVar49[3] = -(auVar1[3] == auVar47[3]);
                auVar49[4] = -(auVar1[4] == auVar47[4]);
                auVar49[5] = -(auVar1[5] == auVar47[5]);
                auVar49[6] = -(auVar1[6] == auVar47[6]);
                auVar49[7] = -(auVar1[7] == auVar47[7]);
                auVar49[8] = -(auVar1[8] == auVar47[0]);
                auVar49[9] = -(auVar1[9] == auVar47[1]);
                auVar49[10] = -(auVar1[10] == auVar47[2]);
                auVar49[0xb] = -(auVar1[0xb] == auVar47[3]);
                auVar49[0xc] = -(auVar1[0xc] == auVar47[4]);
                auVar49[0xd] = -(auVar1[0xd] == auVar47[5]);
                auVar49[0xe] = -(auVar1[0xe] == auVar47[6]);
                auVar49[0xf] = -(auVar1[0xf] == auVar47[7]);
                uVar41 = (ushort)(SUB161(auVar49 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar49[0xf] >> 7) << 0xf;
                uVar39 = (uint)uVar41;
                while (uVar41 != 0) {
                  uVar6 = 0;
                  for (uVar7 = uVar39; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                    uVar6 = uVar6 + 1;
                  }
                  lVar38 = (uVar6 + uVar28 & uVar25) * -0x68;
                  plStack_100 = puVar37;
                  if (iVar5 == *(int *)(lVar44 + -0x68 + lVar38)) {
                    cVar22 = pdb_140c45920(&uStack_270,iVar5);
                    if (cVar22 == '\x15') {
                      lVar44 = lVar44 + lVar38;
                      uStack_f8 = CONCAT31(uStack_f8._1_3_,*(undefined1 *)(lVar44 + -8));
                      pdb_140c45ec0(&fStack_1a8,uStack_168,iVar5,&UNK_143010dc0);
                      uStack_13c = *(undefined4 *)(lVar44 + -0x10);
                      *puStack_248 = uStack_140;
                      plVar29 = (longlong *)
                                pdb_1408f3750(uStack_250,iVar5,lStack_258,puStack_160,
                                              (undefined1)uStack_f8);
                      if (*plVar29 != 0 || plVar29[1] != 0) {
                    /* WARNING: Subroutine does not return */
                        pdb_142dc83d0(&UNK_14301ce21,0x17,&UNK_14301ce30);
                      }
                      plVar29[1] = 0;
                      *plVar29 = 1;
                      plVar29[2] = CONCAT44(fStack_1a4,fStack_1a8);
                      plVar29[3] = CONCAT44(fStack_19c,fStack_1a0);
                      plVar29[4] = CONCAT44(fStack_194,uStack_198);
                      plVar29[5] = CONCAT44(uStack_18c,uStack_190);
                      plVar29[6] = lStack_188;
                      plVar29[7] = lStack_180;
                      uVar30 = pdb_140c413f0(&lStack_280);
                      lVar35 = pdb_140b54f80(uStack_240,uVar30,&UNK_143010dd8);
                      if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
                        pdb_142dc8150(&UNK_143010df0);
                      }
                      pfVar31 = (float *)pdb_1409013a0(lVar44 + -0x28,&UNK_143010e08);
                      fVar52 = fStack_194;
                      fVar51 = *pfVar31 + fVar13;
                      uStack_22d = 0;
                      uStack_235 = 0;
                      uStack_231 = 0;
                      uStack_f1 = *(undefined1 *)(pfVar31 + 1);
                      uStack_300 = 0;
                      uStack_2fc = uStack_2fc & 0xff000000;
                      uStack_308._0_4_ = (uint)CONCAT21(uStack_237,bStack_238);
                      uStack_308._4_4_ = 0.0;
                      lVar44 = plVar29[0x18];
                      if (lVar44 == plVar29[0x16]) {
                        pdb_142d8ddd0(plVar29 + 0x16);
                      }
                      uVar20 = uStack_198;
                      fVar19 = fStack_19c;
                      fVar18 = fStack_1a0;
                      fVar17 = fStack_1a4;
                      fVar16 = fStack_1a8;
                      lVar38 = plVar29[0x17];
                      lVar33 = lVar44 * 0x170;
                      *(undefined8 *)(lVar38 + lVar33) = 0;
                      *(undefined8 *)(lVar38 + 0x10 + lVar33) = 0;
                      *(undefined8 *)(lVar38 + 0x20 + lVar33) = 0;
                      *(undefined8 *)(lVar38 + 0x30 + lVar33) = 0;
                      *(undefined4 *)(lVar38 + 0x40 + lVar33) = 0;
                      *(undefined4 *)(lVar38 + 0x50 + lVar33) = 0;
                      *(undefined4 *)(lVar38 + 0x60 + lVar33) = 0;
                      *(undefined4 *)(lVar38 + 0x70 + lVar33) = 2;
                      *(undefined8 *)(lVar38 + 0x90 + lVar33) = 1;
                      *(undefined8 *)(lVar38 + 0x98 + lVar33) = 0;
                      *(undefined **)(lVar38 + 0xa0 + lVar33) = &UNK_14330db80;
                      *(undefined8 *)(lVar38 + 0xa8 + lVar33) = 0x17;
                      puVar37 = (undefined8 *)(lVar38 + 0xb0 + lVar33);
                      *puVar37 = CONCAT44(fStack_1a4,fStack_1a8);
                      puVar37[1] = CONCAT44(fStack_19c,fStack_1a0);
                      *(undefined4 *)(lVar38 + 0xc0 + lVar33) = uStack_198;
                      *(float *)(lVar38 + 0xc4 + lVar33) = fVar51 + fVar52;
                      puVar37 = (undefined8 *)(lVar38 + 200 + lVar33);
                      *puVar37 = CONCAT44(uStack_18c,uStack_190);
                      puVar37[1] = lStack_188;
                      *(longlong *)(lVar38 + 0xd8 + lVar33) = lStack_180;
                      *(undefined4 *)(lVar38 + 0xe0 + lVar33) = 0;
                      *(undefined4 *)(lVar38 + 0xe8 + lVar33) = 0;
                      *(undefined1 *)(lVar38 + 0x105 + lVar33) = 2;
                      *(undefined4 *)(lVar38 + 0x108 + lVar33) = 0;
                      *(undefined1 *)(lVar38 + 0x15c + lVar33) = 2;
                      *(ulonglong *)(lVar38 + 0x164 + lVar33) =
                           CONCAT35((undefined3)uStack_2fc,CONCAT41(uStack_300,uStack_308._7_1_));
                      *(ulonglong *)(lVar38 + 0x15d + lVar33) =
                           CONCAT44(uStack_308._4_4_,(uint)uStack_308);
                      *(undefined1 *)(lVar38 + 0x16c + lVar33) = 0;
                      *(undefined1 *)(lVar38 + 0x16d + lVar33) = uStack_f1;
                      *(undefined1 *)(lVar38 + 0x16e + lVar33) = (undefined1)uStack_f8;
                      *(undefined1 *)(lVar38 + 0x16f + lVar33) = 0;
                      plVar29[0x18] = lVar44 + 1;
                      fVar53 = fVar51 * _DAT_142e36f50;
                      fVar52 = fVar52 + fVar53;
                      uStack_f8 = uStack_190;
                      fStack_194 = fVar52;
                      pdb_140c45ec0(&bStack_238,uStack_168,iVar5,&UNK_143010e20);
                      fVar50 = uStack_228._4_4_;
                      fVar46 = (float)pdb_140930390(lVar35);
                      uStack_174 = 0x3f59999a;
                      uStack_16c = 0x3f59999a;
                      uStack_22d = uStack_22d & 0xffffff00;
                      bStack_238 = 0;
                      uStack_237 = 0;
                      uStack_235 = 0;
                      uStack_231 = 0;
                      fStack_170 = fVar51;
                      pdb_1409efe30(&uStack_308,&uStack_174,&bStack_238);
                      bStack_238 = 1;
                      uStack_237 = 0;
                      uStack_235 = 0;
                      uStack_231 = 0x100;
                      uStack_22d = 0;
                      uStack_229 = 0;
                      uStack_1b8 = uStack_298;
                      uStack_1b0 = uStack_290;
                      uStack_1c8 = uStack_2a8;
                      uStack_1c0 = uStack_2a0;
                      uStack_1d8 = uStack_2b8;
                      uStack_1d0 = uStack_2b0;
                      uStack_1e8 = uStack_2c8;
                      uStack_1e0 = uStack_2c0;
                      uStack_228 = CONCAT44(uStack_308._4_4_,(uint)uStack_308);
                      puStack_220 = (undefined8 *)CONCAT44(uStack_2fc,uStack_300);
                      uStack_1f8 = uStack_2d8;
                      uStack_1f4 = uStack_2d4;
                      uStack_1f0 = uStack_2d0;
                      uStack_1ec = uStack_2cc;
                      uStack_208 = uStack_2e8;
                      uStack_200 = uStack_2e0;
                      puStack_218 = puStack_2f8;
                      pauStack_210 = pauStack_2f0;
                      pdb_14007ee60();
                      pbVar32 = pub_1406abab0(0x90,0x10);
                      if (pbVar32 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                        pdb_142dc7e11(0x10,0x90);
                      }
                      pub_142e32760(pbVar32,&bStack_238,0x90);
                      LOCK();
                      lVar44 = *(longlong *)pbVar32;
                      *(longlong *)pbVar32 = *(longlong *)pbVar32 + 1;
                      UNLOCK();
                      if (*(longlong *)pbVar32 == 0 || SCARRY8(lVar44,1) != *(longlong *)pbVar32 < 0
                         ) {
                    /* WARNING: Does not return */
                        pcVar4 = (code *)invalidInstructionException();
                        (*pcVar4)();
                      }
                      uStack_308._0_4_ = uVar20;
                      uStack_300 = uStack_f8;
                      bStack_238 = SUB41(fVar16,0);
                      uStack_237 = (undefined2)((uint)fVar16 >> 8);
                      uStack_235._1_3_ = SUB43(fVar17,0);
                      uStack_235 = CONCAT31(uStack_235._1_3_,(char)((uint)fVar16 >> 0x18));
                      uStack_231._1_3_ = SUB43(fVar18,0);
                      uStack_231 = CONCAT31(uStack_231._1_3_,(char)((uint)fVar17 >> 0x18));
                      uStack_22d._1_3_ = SUB43(fVar19,0);
                      uStack_22d = CONCAT31(uStack_22d._1_3_,(char)((uint)fVar18 >> 0x18));
                      uStack_229 = (undefined1)((uint)fVar19 >> 0x18);
                      uStack_308._4_4_ = fVar52;
                      pdb_1408f3120(plVar29,pbVar32,pbVar32,&uStack_308,&bStack_238);
                      pdb_14007ee60();
                      pbVar32 = pub_1406abab0(0x28,4);
                      if (pbVar32 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                        pdb_142dc7e11(4,0x28);
                      }
                      pbVar32[0] = 2;
                      pbVar32[1] = 0;
                      pbVar32[2] = 0;
                      pbVar32[3] = 0;
                      *(float *)(pbVar32 + 4) = fVar50 - fVar46;
                      *(undefined4 *)(pbVar32 + 8) = uVar20;
                      *(undefined4 *)(pbVar32 + 0xc) = uStack_f8;
                      *(float *)(pbVar32 + 0x10) = fVar52 - fVar53;
                      fVar50 = fVar17 * fVar17 + fVar16 * fVar16;
                      fVar51 = fVar18 * 0.0 + fVar17 * 0.0 + fVar16 * fVar12;
                      fVar51 = fVar51 + fVar51;
                      *(float *)(pbVar32 + 0x14) = fVar53 + fVar52;
                      *(ulonglong *)(pbVar32 + 0x18) =
                           CONCAT44(fVar51 * fVar18 +
                                    (fVar19 * fVar19 - (fVar50 + fVar18 * fVar18)) * 0.0 +
                                    (fVar16 * 0.0 - fVar17 * fVar15) * (fVar19 + fVar19),
                                    fVar51 * fVar16 +
                                    (fVar19 * fVar19 - (fVar50 + fVar18 * fVar18)) * fVar12 +
                                    (fVar17 * 0.0 - fVar18 * fVar14) * (fVar19 + fVar19));
                      *(undefined4 *)(pbVar32 + 0x20) = uStack_13c;
                      *(float *)(pbVar32 + 0x24) = (fVar52 - fVar53) + fVar13;
                      if ((byte *)plVar29[0x29] != (byte *)0x0) {
                        pub_1406abac0((byte *)plVar29[0x29],0x28,4);
                      }
                      plVar29[0x29] = (longlong)pbVar32;
                    }
                    goto LAB_140881e00;
                  }
                  uVar41 = (ushort)(uVar39 - 1) & (ushort)uVar39;
                  uVar39 = CONCAT22((short)(uVar39 - 1 >> 0x10),uVar41);
                }
                auVar48[0] = -(auVar1[0] == (char)iVar8);
                auVar48[1] = -(auVar1[1] == (char)((uint)iVar8 >> 8));
                auVar48[2] = -(auVar1[2] == (char)((uint)iVar8 >> 0x10));
                auVar48[3] = -(auVar1[3] == (char)((uint)iVar8 >> 0x18));
                auVar48[4] = -(auVar1[4] == (char)iVar9);
                auVar48[5] = -(auVar1[5] == (char)((uint)iVar9 >> 8));
                auVar48[6] = -(auVar1[6] == (char)((uint)iVar9 >> 0x10));
                auVar48[7] = -(auVar1[7] == (char)((uint)iVar9 >> 0x18));
                auVar48[8] = -(auVar1[8] == (char)iVar10);
                auVar48[9] = -(auVar1[9] == (char)((uint)iVar10 >> 8));
                auVar48[10] = -(auVar1[10] == (char)((uint)iVar10 >> 0x10));
                auVar48[0xb] = -(auVar1[0xb] == (char)((uint)iVar10 >> 0x18));
                auVar48[0xc] = -(auVar1[0xc] == (char)iVar11);
                auVar48[0xd] = -(auVar1[0xd] == (char)((uint)iVar11 >> 8));
                auVar48[0xe] = -(auVar1[0xe] == (char)((uint)iVar11 >> 0x10));
                auVar48[0xf] = -(auVar1[0xf] == (char)((uint)iVar11 >> 0x18));
                if ((((((((((((((((SUB161(auVar48 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar48 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar48 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar48 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar48 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar48 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar48 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar48 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar48 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar48 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar48 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar48 >> 0x5f,0) & 1) != 0) || (SUB161(auVar48 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar48 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar48 >> 0x77,0) & 1) != 0) || auVar48[0xf] < '\0') break;
                uVar28 = uVar28 + lVar35 + 0x10;
                lVar35 = lVar35 + 0x10;
              }
            }
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143010d28);
          }
          puVar37 = puStack_128;
          puVar42 = puStack_110;
          puVar36 = puStack_108;
          lVar24 = lStack_120;
          puVar34 = puStack_110;
          if (lStack_120 == 2) goto LAB_140881d7c;
LAB_140881c50:
          if (puStack_108 != (undefined8 *)0x0) {
            if (lStack_138 != 0) {
              uVar23 = (uint)uStack_158;
              if ((short)uStack_158 == 0) {
                do {
                  auVar47 = *pauStack_130;
                  puStack_108 = puStack_108 + -0x130;
                  pauStack_130 = pauStack_130 + 1;
                  uVar23 = (ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
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
                } while (uVar23 == 0);
              }
              uVar39 = 0;
              for (uVar6 = uVar23; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar39 = uVar39 + 1;
              }
              puVar36 = puVar37;
              lStack_120 = lVar24;
              lVar44 = pdb_140c44590(puStack_108 + (ulonglong)uVar39 * -0x13 + -0x13);
              uStack_158 = (ulonglong)(uVar23 - 1 & uVar23);
              lStack_138 = lStack_138 + -1;
              lVar24 = lStack_120;
              if (lVar44 == 3) goto LAB_140881d11;
              puVar34 = puStack_108 + (ulonglong)uVar39 * -0x13 + -0x12;
              puStack_160 = puVar36;
              puStack_128 = puVar37;
              puStack_110 = puVar42;
              goto LAB_140881dae;
            }
            lStack_138 = 0;
            if (lVar24 == 1) goto LAB_140881d17;
LAB_140881d72:
            puVar36 = (undefined8 *)0x0;
            puVar34 = puVar42;
            goto LAB_140881d7c;
          }
LAB_140881d11:
          if (lVar24 != 1) goto LAB_140881d72;
LAB_140881d17:
          puStack_110 = (undefined8 *)0x0;
          puVar36 = (undefined8 *)0x0;
          puVar34 = puStack_110;
          if (puVar42 == (undefined8 *)0x0) goto LAB_140881d7c;
          lStack_120 = 1;
          puStack_108 = (undefined8 *)0x0;
          puStack_110 = (undefined8 *)0x0;
          lVar44 = 1;
          puVar34 = puVar42;
          puStack_128 = puVar37;
        } while( true );
      }
      if (lStack_150 != 0) {
        uStack_308 = &lStack_148;
        bStack_238 = (byte)&uStack_308;
        uStack_237 = (undefined2)((ulonglong)&uStack_308 >> 8);
        uStack_235 = (undefined4)((ulonglong)&uStack_308 >> 0x18);
        uStack_231._0_1_ = (undefined1)((ulonglong)&uStack_308 >> 0x38);
        pdb_14149aed0(&UNK_143010ee8,&bStack_238);
      }
    }
    return;
  }
  lVar44 = 0x48;
  lVar24 = pdb_140882a10(0x48);
  puVar42 = (undefined8 *)&UNK_143010e98;
  if (lVar24 == 1) {
    if (puVar37 < (undefined8 *)0x49) {
      uVar25 = pdb_140882a10(puVar37);
      if ((uVar25 & 1) != 0) {
        if ((undefined *)0x48 < (undefined *)((longlong)puVar37 + 2)) goto LAB_140882621;
        lVar44 = 0x46 - (longlong)puVar37;
        puVar42 = (undefined8 *)((longlong)puVar37 + 0x143010e9a);
      }
      goto LAB_140881935;
    }
  }
  else {
LAB_140881935:
    puVar40 = &UNK_143010dbb;
    puVar43 = &UNK_143010d7e;
    do {
      bVar45 = puVar40[-1];
      uVar23 = (uint)(char)bVar45;
      plStack_100 = param_1;
      if ((char)bVar45 < '\0') {
        bVar2 = puVar40[-2];
        if ((char)bVar2 < -0x40) {
          bVar3 = puVar40[-3];
          if ((char)bVar3 < -0x40) {
            pbVar32 = puVar40 + -4;
            puVar40 = puVar40 + -4;
            uVar23 = bVar3 & 0x3f | (*pbVar32 & 7) << 6;
          }
          else {
            puVar40 = puVar40 + -3;
            uVar23 = bVar3 & 0xf;
          }
          uVar23 = bVar2 & 0x3f | uVar23 << 6;
        }
        else {
          puVar40 = puVar40 + -2;
          uVar23 = bVar2 & 0x1f;
        }
        uVar23 = (uint)(bVar45 & 0x3f) | uVar23 << 6;
        if (uVar23 != 0x5c) goto LAB_1408819c4;
LAB_1408819fe:
        if ((undefined *)0x3d < puVar40 + -0x143010d7d) goto LAB_1408825de;
        puVar36 = (undefined8 *)(0x3d - (longlong)(puVar40 + -0x143010d7d));
        puVar43 = puVar40 + 1;
        goto LAB_140881a29;
      }
      puVar40 = puVar40 + -1;
      if (uVar23 == 0x5c) goto LAB_1408819fe;
LAB_1408819c4:
      if (uVar23 == 0x2f) goto LAB_1408819fe;
    } while (puVar40 != &UNK_143010d7e);
    puVar36 = (undefined8 *)0x3d;
LAB_140881a29:
    pauVar26 = (undefined1 (*) [16])pdb_140e97000();
    puVar34 = param_3;
    plVar29 = param_2;
    if (pauVar26[6][8] != '\x01') goto LAB_14088255c;
    do {
      param_3 = puVar34;
      plVar29 = param_2;
      if (*(longlong *)*pauVar26 == 0) {
        *(undefined8 *)*pauVar26 = 0xffffffffffffffff;
        puVar37 = puVar42;
        pauStack_118 = pauVar26;
        lVar44 = pdb_140e94f10(*pauVar26 + 8,puVar42,lVar44,puVar43,puVar36,1,0);
        plVar29 = plStack_100;
        *(longlong *)*pauStack_118 = *(longlong *)*pauStack_118 + 1;
        lStack_150 = 1;
        param_1 = plStack_100;
        lStack_148 = lVar44;
        if (*_DAT_143ca4500 == '\0') goto LAB_140881b59;
        plVar27 = (longlong *)pdb_140e97000();
        if (((char)plVar27[0xd] != '\x01') &&
           (plVar27 = (longlong *)pdb_142dde6e0(plVar27,0), plVar27 == (longlong *)0x0)) break;
        puVar36 = param_4;
        param_3 = param_2;
        param_4 = puVar34;
        if (*plVar27 == 0) {
          *plVar27 = -1;
          plStack_100 = plVar27;
          pdb_140e95370(plVar27 + 1,lVar44);
          *plStack_100 = *plStack_100 + 1;
          return;
        }
      }
      pauVar26 = (undefined1 (*) [16])pdb_142dc8090(&UNK_14330e608);
LAB_14088255c:
      pauVar26 = (undefined1 (*) [16])pdb_142dde6e0(pauVar26,0);
      puVar34 = param_3;
      param_2 = plVar29;
    } while (pauVar26 != (undefined1 (*) [16])0x0);
    pdb_142dc7890(&UNK_14330e598);
LAB_1408825de:
    pdb_142dc8070(&UNK_143010d7e,0x3d);
  }
  pdb_142dc8070(&UNK_143010e98,0x48,0);
LAB_140882621:
  pdb_142dc8070(&UNK_143010e98,0x48);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

