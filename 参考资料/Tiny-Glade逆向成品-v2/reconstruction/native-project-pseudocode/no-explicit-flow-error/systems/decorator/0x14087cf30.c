// VA 0x14087cf30, PDB extent 9280 bytes
// system_decorator::decorator_visual::arrow_slit::generate_arrow_slits
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/arrow_slit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::arrow_slit::generate_arrow_slits
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/arrow_slit.rs
   Extent: 9280 */

void pdb_14087cf30(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined7 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  char cVar14;
  char cVar15;
  undefined1 uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong *plVar21;
  ulonglong uVar22;
  float *pfVar23;
  undefined8 uVar24;
  undefined4 *puVar25;
  longlong lVar26;
  longlong lVar27;
  char *pcVar28;
  longlong lVar29;
  undefined1 (*pauVar30) [16];
  undefined1 (*pauVar31) [16];
  uint uVar32;
  undefined *puVar33;
  ushort uVar34;
  longlong lVar35;
  ulonglong uVar36;
  undefined *puVar37;
  uint uVar38;
  longlong *plVar39;
  bool bVar40;
  byte bVar41;
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 unaff_XMM9_Ba;
  undefined1 unaff_XMM9_Bb;
  char cVar64;
  undefined1 unaff_XMM9_Bc;
  char cVar65;
  undefined1 unaff_XMM9_Bd;
  char cVar66;
  undefined1 unaff_XMM9_Be;
  char cVar67;
  undefined1 unaff_XMM9_Bf;
  char cVar68;
  undefined1 unaff_XMM9_Bg;
  char cVar69;
  undefined1 unaff_XMM9_Bh;
  char cVar70;
  undefined1 unaff_XMM9_Bi;
  char cVar71;
  undefined1 unaff_XMM9_Bj;
  char cVar72;
  undefined1 unaff_XMM9_Bk;
  char cVar73;
  undefined1 unaff_XMM9_Bl;
  char cVar74;
  undefined1 unaff_XMM9_Bm;
  char cVar75;
  undefined1 unaff_XMM9_Bn;
  char cVar76;
  undefined1 unaff_XMM9_Bo;
  char cVar77;
  undefined1 unaff_XMM9_Bp;
  char cVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  longlong in_stack_fffffffffffffc78;
  undefined4 uVar86;
  undefined8 *puVar85;
  ulonglong in_stack_fffffffffffffc80;
  undefined4 uVar87;
  undefined8 in_stack_fffffffffffffc88;
  undefined4 uVar88;
  undefined8 uStack_338;
  longlong *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  float fStack_308;
  float fStack_304;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  float fStack_2f0;
  longlong lStack_2e8;
  longlong lStack_2e0;
  longlong lStack_2d8;
  longlong lStack_2d0;
  longlong *plStack_2c8;
  longlong *plStack_2c0;
  undefined4 *puStack_2b8;
  undefined8 uStack_2b0;
  longlong *plStack_2a8;
  longlong *plStack_2a0;
  longlong lStack_298;
  ulonglong uStack_290;
  undefined1 auStack_288 [16];
  undefined8 uStack_278;
  undefined8 uStack_270;
  longlong *plStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  longlong lStack_240;
  undefined8 uStack_238;
  float fStack_230;
  longlong lStack_228;
  longlong lStack_220;
  undefined4 uStack_214;
  undefined *puStack_210;
  longlong *plStack_208;
  longlong *plStack_200;
  float fStack_1f8;
  undefined8 uStack_1f0;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  longlong lStack_1c0;
  ulonglong uStack_1b8;
  ulonglong uStack_1b0;
  longlong lStack_1a8;
  undefined *puStack_1a0;
  longlong *plStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  float fStack_180;
  float fStack_17c;
  undefined8 uStack_178;
  ushort uStack_170;
  undefined2 uStack_16e;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  longlong lStack_160;
  float fStack_158;
  undefined8 uStack_154;
  longlong *plStack_148;
  ulonglong uStack_140;
  longlong lStack_138;
  undefined *puStack_130;
  float fStack_124;
  longlong *plStack_120;
  char cStack_118;
  char cStack_117;
  uint5 uStack_116;
  undefined1 uStack_111;
  float fStack_110;
  undefined3 uStack_10c;
  float fStack_104;
  longlong *plStack_100;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  char cStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  plVar21 = param_2;
  cVar14 = pdb_140e94b40();
  if (cVar14 == '\0') {
    lStack_228 = 0;
    if (*_DAT_143ca4500 == '\0') {
LAB_14087d209:
      uVar5 = *param_1;
      uStack_338 = pdb_140c47770(param_2);
      plStack_330 = plVar21;
      uStack_1f0 = uStack_338;
      plStack_198 = plVar21;
      pdb_140a2fb40(&uStack_188,uVar5);
      fVar12 = _DAT_142e36f50;
      fVar11 = _DAT_142e36f28;
      lVar18 = CONCAT44(uStack_188._4_4_,(float)uStack_188);
      pauVar30 = (undefined1 (*) [16])CONCAT44(fStack_17c,fStack_180);
      uVar17 = (uint)uStack_170;
      plStack_2c8 = (longlong *)*param_3;
      plStack_2c0 = plStack_2c8 + 4;
      uStack_214 = *(undefined4 *)((longlong)param_5 + 0x1c);
      uStack_2b0 = *param_5;
      puStack_2b8 = (undefined4 *)param_5[2];
      plStack_2a8 = plStack_198 + 4;
      plStack_2a0 = plStack_198 + 10;
      iVar9 = -(uint)(CONCAT13(unaff_XMM9_Bd,
                               CONCAT12(unaff_XMM9_Bc,CONCAT11(unaff_XMM9_Bb,unaff_XMM9_Ba))) ==
                     CONCAT13(unaff_XMM9_Bd,
                              CONCAT12(unaff_XMM9_Bc,CONCAT11(unaff_XMM9_Bb,unaff_XMM9_Ba))));
      cVar14 = (char)iVar9;
      cVar64 = (char)((uint)iVar9 >> 8);
      cVar65 = (char)((uint)iVar9 >> 0x10);
      cVar66 = (char)((uint)iVar9 >> 0x18);
      iVar9 = -(uint)(CONCAT13(unaff_XMM9_Bh,
                               CONCAT12(unaff_XMM9_Bg,CONCAT11(unaff_XMM9_Bf,unaff_XMM9_Be))) ==
                     CONCAT13(unaff_XMM9_Bh,
                              CONCAT12(unaff_XMM9_Bg,CONCAT11(unaff_XMM9_Bf,unaff_XMM9_Be))));
      cVar67 = (char)iVar9;
      cVar68 = (char)((uint)iVar9 >> 8);
      cVar69 = (char)((uint)iVar9 >> 0x10);
      cVar70 = (char)((uint)iVar9 >> 0x18);
      iVar9 = -(uint)(CONCAT13(unaff_XMM9_Bl,
                               CONCAT12(unaff_XMM9_Bk,CONCAT11(unaff_XMM9_Bj,unaff_XMM9_Bi))) ==
                     CONCAT13(unaff_XMM9_Bl,
                              CONCAT12(unaff_XMM9_Bk,CONCAT11(unaff_XMM9_Bj,unaff_XMM9_Bi))));
      cVar71 = (char)iVar9;
      cVar72 = (char)((uint)iVar9 >> 8);
      cVar73 = (char)((uint)iVar9 >> 0x10);
      cVar74 = (char)((uint)iVar9 >> 0x18);
      iVar9 = -(uint)(CONCAT13(unaff_XMM9_Bp,
                               CONCAT12(unaff_XMM9_Bo,CONCAT11(unaff_XMM9_Bn,unaff_XMM9_Bm))) ==
                     CONCAT13(unaff_XMM9_Bp,
                              CONCAT12(unaff_XMM9_Bo,CONCAT11(unaff_XMM9_Bn,unaff_XMM9_Bm))));
      cVar75 = (char)iVar9;
      cVar76 = (char)((uint)iVar9 >> 8);
      cVar77 = (char)((uint)iVar9 >> 0x10);
      cVar78 = (char)((uint)iVar9 >> 0x18);
      lStack_2d0 = CONCAT44(fStack_164,fStack_168) + -1;
      if (CONCAT44(fStack_164,fStack_168) != 0) {
        do {
          if ((short)uVar17 == 0) {
            do {
              auVar45 = *pauVar30;
              lVar18 = lVar18 + -0x980;
              pauVar30 = pauVar30 + 1;
              uVar17 = (ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
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
                               (ushort)(byte)(auVar45[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar17 == 0);
          }
          uVar38 = 0;
          for (uVar32 = uVar17; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
            uVar38 = uVar38 + 1;
          }
          lStack_2e8 = *(longlong *)(lVar18 + -0x98 + (ulonglong)uVar38 * -0x98);
          lStack_240 = lStack_2e8;
          pdb_140c3ba10(&uStack_188,lVar18 + (ulonglong)uVar38 * -0x98 + -0x90);
          uVar17 = uVar17 - 1 & uVar17;
          lVar29 = CONCAT44(uStack_188._4_4_,(float)uStack_188);
          pauVar31 = (undefined1 (*) [16])CONCAT44(fStack_17c,fStack_180);
          uVar38 = (uint)uStack_170;
          plStack_148 = (longlong *)CONCAT44(fStack_164,fStack_168);
          lStack_2e0 = lStack_160;
          lStack_2d8 = lStack_160 + 0x50;
LAB_14087d379:
          lVar26 = lStack_2e0;
          if (plStack_148 != (longlong *)0x0) {
            if ((short)uVar38 == 0) {
              do {
                auVar45 = *pauVar31;
                lVar29 = lVar29 + -0x40;
                pauVar31 = pauVar31 + 1;
                uVar38 = (ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
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
                                 (ushort)(byte)(auVar45[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar38 == 0);
            }
            iVar9 = 0;
            for (uVar32 = uVar38; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
              iVar9 = iVar9 + 1;
            }
            uStack_188._0_4_ = *(float *)((lVar29 - (ulonglong)(uint)(iVar9 << 2)) + -4);
            uStack_1b0 = (ulonglong)(uint)(float)uStack_188;
            if (*(longlong *)(lStack_2e0 + 0x48) != 0) {
              uVar38 = uVar38 - 1 & uVar38;
              plStack_148 = (longlong *)((longlong)plStack_148 + -1);
              uVar22 = pdb_1400aede0(lStack_2d8,&uStack_188);
              lVar27 = *(longlong *)(lVar26 + 0x30);
              uVar19 = *(ulonglong *)(lVar26 + 0x38);
              bVar41 = (byte)(uVar22 >> 0x39);
              auVar45 = ZEXT216(CONCAT11(bVar41,bVar41));
              auVar45 = pshuflw(auVar45,auVar45,0);
              lVar26 = 0;
              while( true ) {
                uVar22 = uVar22 & uVar19;
                auVar2 = *(undefined1 (*) [16])(lVar27 + uVar22);
                auVar57[0] = -(auVar2[0] == auVar45[0]);
                auVar57[1] = -(auVar2[1] == auVar45[1]);
                auVar57[2] = -(auVar2[2] == auVar45[2]);
                auVar57[3] = -(auVar2[3] == auVar45[3]);
                auVar57[4] = -(auVar2[4] == auVar45[4]);
                auVar57[5] = -(auVar2[5] == auVar45[5]);
                auVar57[6] = -(auVar2[6] == auVar45[6]);
                auVar57[7] = -(auVar2[7] == auVar45[7]);
                auVar57[8] = -(auVar2[8] == auVar45[0]);
                auVar57[9] = -(auVar2[9] == auVar45[1]);
                auVar57[10] = -(auVar2[10] == auVar45[2]);
                auVar57[0xb] = -(auVar2[0xb] == auVar45[3]);
                auVar57[0xc] = -(auVar2[0xc] == auVar45[4]);
                auVar57[0xd] = -(auVar2[0xd] == auVar45[5]);
                auVar57[0xe] = -(auVar2[0xe] == auVar45[6]);
                auVar57[0xf] = -(auVar2[0xf] == auVar45[7]);
                uVar34 = (ushort)(SUB161(auVar57 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
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
                         (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar57[0xf] >> 7) << 0xf;
                uVar32 = (uint)uVar34;
                while (uVar34 != 0) {
                  uVar7 = 0;
                  for (uVar8 = uVar32; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                    uVar7 = uVar7 + 1;
                  }
                  lVar35 = (uVar7 + uVar22 & uVar19) * -0x68;
                  if ((int)uStack_1b0 == *(int *)(lVar27 + -0x68 + lVar35)) {
                    puVar33 = (undefined *)(lVar27 + lVar35);
                    if (*(int *)(puVar33 + -0x60) != 2) goto LAB_14087d379;
                    puStack_130 = puVar33;
                    cStack_f1 = pdb_140c45920(&uStack_338,uStack_1b0);
                    plVar21 = plStack_2c8;
                    uVar87 = (undefined4)(in_stack_fffffffffffffc80 >> 0x20);
                    uVar86 = (undefined4)((ulonglong)in_stack_fffffffffffffc78 >> 0x20);
                    if ((cStack_f1 == '\x17') && (puStack_130[-7] == '\x01')) goto LAB_14087d379;
                    if (plStack_2c8[3] == 0) goto LAB_14087ed2a;
                    puStack_210 = puStack_130 + -0x60;
                    uVar22 = pdb_1400af0a0(plStack_2c0,&lStack_2e8);
                    lVar26 = *plVar21;
                    uVar19 = plVar21[1];
                    bVar41 = (byte)(uVar22 >> 0x39);
                    auVar45 = ZEXT216(CONCAT11(bVar41,bVar41));
                    auVar45 = pshuflw(auVar45,auVar45,0);
                    lVar27 = 0;
                    goto LAB_14087d51f;
                  }
                  uVar34 = (ushort)(uVar32 - 1) & (ushort)uVar32;
                  uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar34);
                }
                auVar48[0] = -(auVar2[0] == cVar14);
                auVar48[1] = -(auVar2[1] == cVar64);
                auVar48[2] = -(auVar2[2] == cVar65);
                auVar48[3] = -(auVar2[3] == cVar66);
                auVar48[4] = -(auVar2[4] == cVar67);
                auVar48[5] = -(auVar2[5] == cVar68);
                auVar48[6] = -(auVar2[6] == cVar69);
                auVar48[7] = -(auVar2[7] == cVar70);
                auVar48[8] = -(auVar2[8] == cVar71);
                auVar48[9] = -(auVar2[9] == cVar72);
                auVar48[10] = -(auVar2[10] == cVar73);
                auVar48[0xb] = -(auVar2[0xb] == cVar74);
                auVar48[0xc] = -(auVar2[0xc] == cVar75);
                auVar48[0xd] = -(auVar2[0xd] == cVar76);
                auVar48[0xe] = -(auVar2[0xe] == cVar77);
                auVar48[0xf] = -(auVar2[0xf] == cVar78);
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
                uVar22 = uVar22 + lVar26 + 0x10;
                lVar26 = lVar26 + 0x10;
              }
            }
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143010408);
          }
          bVar40 = lStack_2d0 == 0;
          lStack_2d0 = lStack_2d0 + -1;
          if (bVar40) break;
        } while( true );
      }
      if (lStack_228 != 0) {
        plStack_268 = &lStack_220;
        uStack_188 = &plStack_268;
        pdb_14149aed0(&UNK_143010830,&uStack_188);
      }
    }
    return;
  }
  lVar29 = 0x44;
  lVar18 = pdb_14087f370(0x44);
  plVar39 = (longlong *)&UNK_1430107e8;
  if (lVar18 == 1) {
    if ((longlong *)0x44 < plVar21) {
LAB_14087eea3:
      pdb_142dc8070(&UNK_1430107e8,0x44,0);
LAB_14087eec3:
      pdb_142dc8070(&UNK_1430107e8,0x44);
LAB_14087eee6:
      uStack_188 = (longlong **)&cStack_118;
      fStack_180 = 12.578812;
      fStack_17c = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14330e2c6,&uStack_188,&UNK_14330e310);
    }
    uVar19 = pdb_14087f370(plVar21);
    if ((uVar19 & 1) != 0) {
      if ((undefined *)0x44 < (undefined *)((longlong)plVar21 + 2)) goto LAB_14087eec3;
      lVar29 = 0x42 - (longlong)plVar21;
      plVar39 = (longlong *)((longlong)plVar21 + 0x1430107ea);
    }
  }
  puVar33 = &UNK_143010537;
  puVar37 = &UNK_1430104fc;
  do {
    bVar41 = puVar33[-1];
    uVar17 = (uint)(char)bVar41;
    if ((char)bVar41 < '\0') {
      bVar3 = puVar33[-2];
      if ((char)bVar3 < -0x40) {
        bVar4 = puVar33[-3];
        if ((char)bVar4 < -0x40) {
          pbVar1 = puVar33 + -4;
          puVar33 = puVar33 + -4;
          uVar17 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar33 = puVar33 + -3;
          uVar17 = bVar4 & 0xf;
        }
        uVar17 = bVar3 & 0x3f | uVar17 << 6;
      }
      else {
        puVar33 = puVar33 + -2;
        uVar17 = bVar3 & 0x1f;
      }
      uVar17 = (uint)(bVar41 & 0x3f) | uVar17 << 6;
      if (uVar17 != 0x5c) goto LAB_14087d094;
LAB_14087d0c6:
      puVar37 = puVar33 + -0x1430104fb;
      if (puVar37 < (undefined *)0x3c) {
        lVar18 = 0x3b - (longlong)puVar37;
        puVar37 = puVar33 + 1;
        goto LAB_14087d0e9;
      }
      pdb_142dc8070(&UNK_1430104fc,0x3b,puVar37,0x3b,&UNK_143010890);
      goto LAB_14087eea3;
    }
    puVar33 = puVar33 + -1;
    if (uVar17 == 0x5c) goto LAB_14087d0c6;
LAB_14087d094:
    if (uVar17 == 0x2f) goto LAB_14087d0c6;
  } while (puVar33 != &UNK_1430104fc);
  lVar18 = 0x3b;
LAB_14087d0e9:
  plVar20 = (longlong *)pdb_140e97000();
  if ((char)plVar20[0xd] != '\x01') goto LAB_14087edd3;
  do {
    if (*plVar20 == 0) {
      *plVar20 = -1;
      in_stack_fffffffffffffc88 = 0;
      in_stack_fffffffffffffc80 = 0;
      plVar21 = plVar39;
      in_stack_fffffffffffffc78 = lVar18;
      plStack_148 = plVar20;
      lVar29 = pdb_140e94f10(plVar20 + 1,plVar39,lVar29,puVar37,lVar18,1,0);
      *plStack_148 = *plStack_148 + 1;
      lStack_228 = 1;
      lStack_220 = lVar29;
      if (*_DAT_143ca4500 != '\x01') goto LAB_14087d209;
      plVar21 = (longlong *)pdb_140e97000();
      if (((char)plVar21[0xd] != '\x01') &&
         (plVar21 = (longlong *)pdb_142dde6e0(plVar21,0), plVar21 == (longlong *)0x0)) break;
      if (*plVar21 == 0) {
        *plVar21 = -1;
        plStack_148 = plVar21;
        pdb_140e95370(plVar21 + 1,lVar29);
        *plStack_148 = *plStack_148 + 1;
        return;
      }
    }
    plVar20 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_14087edd3:
    plVar20 = (longlong *)pdb_142dde6e0(plVar20,0);
  } while (plVar20 != (longlong *)0x0);
  pdb_142dc7890(&UNK_14330e598);
LAB_14087ee08:
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14301ce21,0x17,&UNK_14301ce30);
LAB_14087d51f:
  uVar22 = uVar22 & uVar19;
  auVar2 = *(undefined1 (*) [16])(lVar26 + uVar22);
  auVar58[0] = -(auVar2[0] == auVar45[0]);
  auVar58[1] = -(auVar2[1] == auVar45[1]);
  auVar58[2] = -(auVar2[2] == auVar45[2]);
  auVar58[3] = -(auVar2[3] == auVar45[3]);
  auVar58[4] = -(auVar2[4] == auVar45[4]);
  auVar58[5] = -(auVar2[5] == auVar45[5]);
  auVar58[6] = -(auVar2[6] == auVar45[6]);
  auVar58[7] = -(auVar2[7] == auVar45[7]);
  auVar58[8] = -(auVar2[8] == auVar45[0]);
  auVar58[9] = -(auVar2[9] == auVar45[1]);
  auVar58[10] = -(auVar2[10] == auVar45[2]);
  auVar58[0xb] = -(auVar2[0xb] == auVar45[3]);
  auVar58[0xc] = -(auVar2[0xc] == auVar45[4]);
  auVar58[0xd] = -(auVar2[0xd] == auVar45[5]);
  auVar58[0xe] = -(auVar2[0xe] == auVar45[6]);
  auVar58[0xf] = -(auVar2[0xf] == auVar45[7]);
  uVar34 = (ushort)(SUB161(auVar58 >> 7,0) & 1) | (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
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
           (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe | (ushort)(auVar58[0xf] >> 7) << 0xf;
  uVar32 = (uint)uVar34;
  while (uVar34 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar32; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    plStack_100 = (longlong *)((uVar7 + uVar22 & uVar19) * -0x2b0);
    if (lStack_240 == *(longlong *)(lVar26 + -0x2b0 + (longlong)plStack_100)) {
      uStack_140 = (ulonglong)(byte)puStack_130[-7];
      cVar15 = pdb_1409012c0(cStack_f1,uStack_1f0);
      cStack_118 = pdb_140c44ba0(uStack_140);
      cStack_117 = cVar15;
      lVar27 = pdb_141494370(plStack_198,&cStack_118);
      if (lVar27 == 0) goto LAB_14087eee6;
      plStack_268 = *(longlong **)(lVar27 + 0x20);
      uStack_260 = *(undefined8 *)(lVar27 + 0x28);
      uStack_258 = *(undefined8 *)(lVar27 + 0x30);
      uStack_250 = *(undefined8 *)(lVar27 + 0x38);
      pfVar23 = (float *)pdb_140901130(puStack_210,&UNK_143010550);
      lStack_138 = lVar26 + (longlong)plStack_100;
      lStack_298 = lStack_138 + -0x2a8;
      fVar43 = *pfVar23;
      fVar52 = pfVar23[1];
      uStack_f3 = puStack_130[-8];
      lStack_1a8 = CONCAT44(lStack_1a8._4_4_,*(int *)(puStack_130 + -0x10));
      plStack_120 = (longlong *)&UNK_143010593;
      if (*(int *)(puStack_130 + -0x10) == 999) {
        plStack_120 = (longlong *)&UNK_143010568;
      }
      in_stack_fffffffffffffc80 = CONCAT44(uVar87,0x3f4ccccd);
      pdb_1408c2be0(&uStack_188,lStack_298,puStack_210,fVar43,CONCAT44(uVar86,fVar52),
                    in_stack_fffffffffffffc80);
      uVar13 = uStack_154;
      fVar56 = uStack_188._4_4_;
      fVar53 = (float)uStack_188;
      fStack_1d8 = (float)CONCAT22(uStack_16e,uStack_170);
      uVar5 = CONCAT44(fStack_17c,fStack_180);
      fStack_308 = fStack_16c;
      fStack_304 = fStack_168;
      uStack_300 = 0;
      fStack_1c4 = fStack_164;
      uStack_318 = lStack_160;
      uStack_310 = 0;
      uStack_328 = uStack_178;
      uStack_320 = 0;
      fVar42 = (float)lStack_160 - (float)uStack_178;
      fStack_1d4 = fStack_158;
      fVar46 = fStack_158 - fStack_1d8;
      fVar54 = fVar11 / SQRT(fVar46 * fVar46 + fVar42 * fVar42);
      plStack_200 = (longlong *)
                    CONCAT44(fVar54 * fVar42,(float)((uint)fVar54 ^ _DAT_142e37820) * fVar46);
      pdb_140df4520(&cStack_118,&plStack_200);
      pcVar28 = &cStack_118;
      pdb_140de9ab0(&uStack_188,pcVar28);
      fVar82 = fStack_17c;
      fVar54 = fStack_180;
      fVar46 = uStack_188._4_4_;
      fVar42 = (float)uStack_188;
      lStack_1c0 = lStack_138 + -9;
      cVar15 = pdb_1408ff980();
      fStack_124 = fVar11;
      if (cVar15 != '\0') {
        fStack_124 = *(float *)(&UNK_143010240 + (ulonglong)(*(uint *)(lStack_138 + -0x50) < 2) * 4)
        ;
      }
      cVar15 = pdb_1408ff980(lStack_1c0);
      fStack_1e8 = (float)uStack_318 * _DAT_142e36f60 + (float)uStack_328 * _DAT_142e36f60;
      fStack_1e4 = uStack_318._4_4_ * _UNK_142e36f64 + uStack_328._4_4_ * _UNK_142e36f64;
      fStack_1e0 = (float)uStack_310 * _UNK_142e36f68 + (float)uStack_320 * _UNK_142e36f68;
      fStack_1dc = uStack_310._4_4_ * _UNK_142e36f6c + uStack_320._4_4_ * _UNK_142e36f6c;
      fStack_104 = fStack_1d4 * fVar12 + fStack_1d8 * fVar12;
      if ((cVar15 == '\0') || (*(int *)(lStack_138 + -0x50) != 0)) {
        uStack_278 = 0;
        uStack_270 = 0;
        auStack_288 = ZEXT816(0);
      }
      else {
        fVar63 = fVar54 * fVar54;
        fVar81 = fVar82 * fVar82;
        fVar55 = fVar46 * fVar46 + fVar42 * fVar42;
        fVar84 = fVar54 * _UNK_142e378f8 + fVar46 * _UNK_142e378f4 + fVar42 * _DAT_142e378f0;
        fVar84 = fVar84 + fVar84;
        fVar80 = fVar82 + fVar82;
        fVar61 = fVar80 * (fVar46 * _DAT_142e36f28 - fVar54 * 0.0) +
                 fVar84 * fVar42 + (fVar81 - (fVar55 + fVar63)) * _DAT_142e378f0;
        fVar62 = fVar80 * (fVar54 * 0.0 - fVar42 * _DAT_142e36f28) +
                 fVar84 * fVar46 + (fVar81 - (fVar55 + fVar63)) * _UNK_142e378f4;
        fVar79 = fVar80 * (fVar42 * 0.0 - fVar46 * 0.0) +
                 fVar84 * fVar54 + (fVar81 - (fVar55 + fVar63)) * _UNK_142e378f8;
        fVar47 = (fStack_1c4 - fStack_104) * fVar79 +
                 (fStack_304 - fStack_1e4) * fVar62 + (fStack_308 - fStack_1e8) * fVar61 +
                 _DAT_142f684a8;
        fVar83 = 0.0;
        if (0.0 <= fVar47) {
          fVar83 = fVar47;
        }
        fVar47 = fVar11;
        if (fVar83 <= fVar11) {
          fVar47 = fVar83;
        }
        fVar61 = fVar47 * fVar61;
        fVar62 = fVar47 * fVar62;
        fVar83 = (fVar80 * (fVar82 * 0.0 - fVar82 * 0.0) +
                 fVar84 * fVar82 + (fVar81 - (fVar55 + fVar63)) * _UNK_142e378fc) * 0.0;
        auStack_288 = ZEXT416((uint)(fVar47 * fVar79));
        uStack_278 = CONCAT44(fVar62,fVar61);
        uStack_270 = CONCAT44(fVar83,fVar79 * 0.0);
        fStack_1e8 = fStack_1e8 + fVar61;
        fStack_1e4 = fStack_1e4 + fVar62;
        fStack_1e0 = fStack_1e0 + fVar79 * 0.0;
        fStack_1dc = fStack_1dc + fVar83;
        fStack_104 = fStack_104 + fVar47 * fVar79;
      }
      *puStack_2b8 = uStack_214;
      uVar24 = pdb_140947f90(lStack_240);
      plStack_100 = (longlong *)pdb_1408f3750(uStack_2b0,uStack_1b0,uVar24,pcVar28,uStack_f3);
      uStack_1b8 = uStack_140 & 0xff;
      uStack_1d0 = *(undefined4 *)(puStack_130 + -0xc);
      uStack_1cc = *(undefined4 *)(lStack_138 + -0x34);
      fStack_1c8 = (float)uStack_258;
      fVar83 = (float)uStack_258 * fVar12;
      if ((char)uStack_140 == '\x01') {
        uStack_190 = 0x19;
        puStack_1a0 = &UNK_1430105be;
      }
      else if ((char)uStack_140 == '\x02') {
        uStack_190 = 0x19;
        puStack_1a0 = &UNK_1430105d7;
      }
      else {
        if ((char)uStack_140 != '\x03') {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143010712,0x28,&UNK_143010770);
        }
        uStack_190 = 0x19;
        if (cStack_f1 == '\x17') {
          uStack_190 = 0x24;
        }
        puStack_1a0 = &UNK_143010614;
        if (cStack_f1 == '\x17') {
          puStack_1a0 = &UNK_1430105f0;
        }
      }
      plStack_208 = plStack_100 + 0x16;
      fStack_17c = (float)((uint)fStack_17c & 0xff000000);
      uStack_188._0_4_ = (float)((uint)(float)uStack_188 & 0xffffff);
      uStack_188._4_4_ = 0.0;
      fStack_180 = 0.0;
      fStack_110 = 0.0;
      uStack_10c = 0;
      cStack_118 = SUB41((float)uStack_188,0);
      cStack_117 = (char)((uint)(float)uStack_188 >> 8);
      uStack_116 = (uint5)(ushort)((uint)(float)uStack_188 >> 0x10);
      uStack_111 = 0;
      lVar26 = plStack_100[0x18];
      if (lVar26 == plStack_100[0x16]) {
        pdb_142d8ddd0(plStack_208);
      }
      fVar84 = fVar43 - fVar83;
      fVar83 = fVar83 + fVar43;
      lVar27 = plStack_100[0x17];
      lVar35 = lVar26 * 0x170;
      *(undefined8 *)(lVar27 + lVar35) = 0;
      *(undefined8 *)(lVar27 + 0x10 + lVar35) = 0;
      *(undefined8 *)(lVar27 + 0x20 + lVar35) = 0;
      *(undefined8 *)(lVar27 + 0x30 + lVar35) = 0;
      *(undefined4 *)(lVar27 + 0x40 + lVar35) = 0;
      *(undefined4 *)(lVar27 + 0x50 + lVar35) = 0;
      *(undefined4 *)(lVar27 + 0x60 + lVar35) = 0;
      *(undefined4 *)(lVar27 + 0x70 + lVar35) = 2;
      *(undefined **)(lVar27 + 0x90 + lVar35) = puStack_1a0;
      *(undefined8 *)(lVar27 + 0x98 + lVar35) = uStack_190;
      *(longlong **)(lVar27 + 0xa0 + lVar35) = plStack_120;
      *(undefined8 *)(lVar27 + 0xa8 + lVar35) = 0x2b;
      pfVar23 = (float *)(lVar27 + 0xb0 + lVar35);
      *pfVar23 = fVar42;
      pfVar23[1] = fVar46;
      pfVar23[2] = fVar54;
      pfVar23[3] = fVar82;
      *(ulonglong *)(lVar27 + 0xc0 + lVar35) = CONCAT44(fStack_1e4,fStack_1e8);
      *(float *)(lVar27 + 200 + lVar35) = fStack_104;
      *(ulonglong *)(lVar27 + 0xcc + lVar35) = CONCAT44(_UNK_142e37954,_DAT_142e37950);
      *(float *)(lVar27 + 0xd4 + lVar35) = fStack_124;
      *(undefined4 *)(lVar27 + 0xe0 + lVar35) = 1;
      *(undefined4 *)(lVar27 + 0xe4 + lVar35) = (undefined4)lStack_1a8;
      *(undefined4 *)(lVar27 + 0xe8 + lVar35) = 0;
      *(float *)(lVar27 + 0xf0 + lVar35) = fVar84;
      *(float *)(lVar27 + 0xf4 + lVar35) = fVar83;
      *(undefined4 *)(lVar27 + 0xf8 + lVar35) = uStack_1d0;
      *(undefined4 *)(lVar27 + 0xfc + lVar35) = uStack_1cc;
      *(float *)(lVar27 + 0x100 + lVar35) = fStack_1c8;
      *(undefined2 *)(lVar27 + 0x104 + lVar35) = 0;
      *(undefined4 *)(lVar27 + 0x108 + lVar35) = 0;
      *(undefined1 *)(lVar27 + 0x15c + lVar35) = 2;
      *(ulonglong *)(lVar27 + 0x164 + lVar35) = CONCAT35(uStack_10c,CONCAT41(fStack_110,uStack_111))
      ;
      *(ulonglong *)(lVar27 + 0x15d + lVar35) =
           CONCAT17(uStack_111,CONCAT52(uStack_116,CONCAT11(cStack_117,cStack_118)));
      *(undefined1 *)(lVar27 + 0x16c + lVar35) = 2;
      *(undefined1 *)(lVar27 + 0x16e + lVar35) = uStack_f3;
      *(undefined1 *)(lVar27 + 0x16f + lVar35) = 0;
      plStack_100[0x18] = lVar26 + 1;
      cVar15 = pdb_1409012c0(cStack_f1,uStack_1f0);
      cStack_118 = pdb_140c44ba0(uStack_140);
      cStack_117 = cVar15;
      if (plStack_198[3] == 0) goto LAB_14087ed48;
      puVar33 = (undefined *)pdb_1413f0300(plStack_2a8,&cStack_118);
      lVar26 = *plStack_198;
      uVar19 = plStack_198[1];
      bVar41 = (byte)((ulonglong)puVar33 >> 0x39);
      auVar45 = ZEXT216(CONCAT11(bVar41,bVar41));
      auVar45 = pshuflw(auVar45,auVar45,0);
      plVar21 = (longlong *)0x0;
      goto LAB_14087dc04;
    }
    uVar34 = (ushort)(uVar32 - 1) & (ushort)uVar32;
    uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar34);
  }
  auVar49[0] = -(auVar2[0] == cVar14);
  auVar49[1] = -(auVar2[1] == cVar64);
  auVar49[2] = -(auVar2[2] == cVar65);
  auVar49[3] = -(auVar2[3] == cVar66);
  auVar49[4] = -(auVar2[4] == cVar67);
  auVar49[5] = -(auVar2[5] == cVar68);
  auVar49[6] = -(auVar2[6] == cVar69);
  auVar49[7] = -(auVar2[7] == cVar70);
  auVar49[8] = -(auVar2[8] == cVar71);
  auVar49[9] = -(auVar2[9] == cVar72);
  auVar49[10] = -(auVar2[10] == cVar73);
  auVar49[0xb] = -(auVar2[0xb] == cVar74);
  auVar49[0xc] = -(auVar2[0xc] == cVar75);
  auVar49[0xd] = -(auVar2[0xd] == cVar76);
  auVar49[0xe] = -(auVar2[0xe] == cVar77);
  auVar49[0xf] = -(auVar2[0xf] == cVar78);
  if ((((((((((((((((SUB161(auVar49 >> 7,0) & 1) != 0 || (SUB161(auVar49 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar49 >> 0x17,0) & 1) != 0) || (SUB161(auVar49 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar49 >> 0x27,0) & 1) != 0) || (SUB161(auVar49 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar49 >> 0x37,0) & 1) != 0) || (SUB161(auVar49 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar49 >> 0x47,0) & 1) != 0) || (SUB161(auVar49 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar49 >> 0x57,0) & 1) != 0) || (SUB161(auVar49 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar49 >> 0x67,0) & 1) != 0) || (SUB161(auVar49 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar49 >> 0x77,0) & 1) != 0) || auVar49[0xf] < '\0') goto LAB_14087ed2a;
  uVar22 = uVar22 + lVar27 + 0x10;
  lVar27 = lVar27 + 0x10;
  goto LAB_14087d51f;
LAB_14087dc04:
  uVar22 = (ulonglong)puVar33 & uVar19;
  auVar2 = *(undefined1 (*) [16])(lVar26 + uVar22);
  auVar59[0] = -(auVar2[0] == auVar45[0]);
  auVar59[1] = -(auVar2[1] == auVar45[1]);
  auVar59[2] = -(auVar2[2] == auVar45[2]);
  auVar59[3] = -(auVar2[3] == auVar45[3]);
  auVar59[4] = -(auVar2[4] == auVar45[4]);
  auVar59[5] = -(auVar2[5] == auVar45[5]);
  auVar59[6] = -(auVar2[6] == auVar45[6]);
  auVar59[7] = -(auVar2[7] == auVar45[7]);
  auVar59[8] = -(auVar2[8] == auVar45[0]);
  auVar59[9] = -(auVar2[9] == auVar45[1]);
  auVar59[10] = -(auVar2[10] == auVar45[2]);
  auVar59[0xb] = -(auVar2[0xb] == auVar45[3]);
  auVar59[0xc] = -(auVar2[0xc] == auVar45[4]);
  auVar59[0xd] = -(auVar2[0xd] == auVar45[5]);
  auVar59[0xe] = -(auVar2[0xe] == auVar45[6]);
  auVar59[0xf] = -(auVar2[0xf] == auVar45[7]);
  uVar34 = (ushort)(SUB161(auVar59 >> 7,0) & 1) | (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
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
  uVar32 = (uint)uVar34;
  if (uVar34 != 0) {
    if (cStack_118 == '\x1a') {
      lStack_1a8 = CONCAT71(lStack_1a8._1_7_,0x1a);
      do {
        uVar7 = 0;
        for (uVar8 = uVar32; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar36 = uVar7 + uVar22 & uVar19;
        if (*(char *)(lVar26 + -0x48 + uVar36 * -0x48) == '\x1a') goto LAB_14087dce5;
        uVar34 = (ushort)(uVar32 - 1) & (ushort)uVar32;
        uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar34);
      } while (uVar34 != 0);
    }
    else {
      do {
        uVar7 = 0;
        for (uVar8 = uVar32; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar36 = uVar7 + uVar22 & uVar19;
        cVar15 = *(char *)(lVar26 + -0x48 + uVar36 * -0x48);
        plStack_120 = plVar21;
        if (((cVar15 != '\x1a') && (cStack_118 == cVar15)) &&
           (cStack_117 == *(char *)(lVar26 + uVar36 * -0x48 + -0x47))) goto LAB_14087dce5;
        uVar34 = (ushort)(uVar32 - 1) & (ushort)uVar32;
        uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar34);
      } while (uVar34 != 0);
    }
  }
  auVar50[0] = -(auVar2[0] == cVar14);
  auVar50[1] = -(auVar2[1] == cVar64);
  auVar50[2] = -(auVar2[2] == cVar65);
  auVar50[3] = -(auVar2[3] == cVar66);
  auVar50[4] = -(auVar2[4] == cVar67);
  auVar50[5] = -(auVar2[5] == cVar68);
  auVar50[6] = -(auVar2[6] == cVar69);
  auVar50[7] = -(auVar2[7] == cVar70);
  auVar50[8] = -(auVar2[8] == cVar71);
  auVar50[9] = -(auVar2[9] == cVar72);
  auVar50[10] = -(auVar2[10] == cVar73);
  auVar50[0xb] = -(auVar2[0xb] == cVar74);
  auVar50[0xc] = -(auVar2[0xc] == cVar75);
  auVar50[0xd] = -(auVar2[0xd] == cVar76);
  auVar50[0xe] = -(auVar2[0xe] == cVar77);
  auVar50[0xf] = -(auVar2[0xf] == cVar78);
  if ((((((((((((((((SUB161(auVar50 >> 7,0) & 1) != 0 || (SUB161(auVar50 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar50 >> 0x17,0) & 1) != 0) || (SUB161(auVar50 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar50 >> 0x27,0) & 1) != 0) || (SUB161(auVar50 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar50 >> 0x37,0) & 1) != 0) || (SUB161(auVar50 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar50 >> 0x47,0) & 1) != 0) || (SUB161(auVar50 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar50 >> 0x57,0) & 1) != 0) || (SUB161(auVar50 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar50 >> 0x67,0) & 1) != 0) || (SUB161(auVar50 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar50 >> 0x77,0) & 1) != 0) || auVar50[0xf] < '\0') {
LAB_14087ed48:
    uStack_188 = (longlong **)&cStack_118;
    fStack_180 = 4.243965;
    fStack_17c = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14301045d,&uStack_188,&UNK_143010490);
  }
  puVar33 = (undefined *)((longlong)plVar21 + uVar22 + 0x10);
  plVar21 = plVar21 + 2;
  goto LAB_14087dc04;
LAB_14087deaf:
  plVar39 = *(longlong **)(lVar26 + -0x28 + uVar36 * -0x48);
  LOCK();
  lVar26 = *plVar39;
  *plVar39 = *plVar39 + 1;
  UNLOCK();
  if (*plVar39 == 0 || SCARRY8(lVar26,1) != *plVar39 < 0) goto LAB_14087ef1d;
  cStack_118 = SUB41(fStack_1e8,0);
  cStack_117 = (char)((uint)fStack_1e8 >> 8);
  uStack_116 = (uint5)(CONCAT44(fStack_1e4,fStack_1e8) >> 0x10);
  uStack_111 = (undefined1)((uint)fStack_1e4 >> 0x18);
  fStack_110 = fStack_104;
  uStack_f2 = 0;
  puVar85 = &uStack_188;
  uStack_188._0_4_ = fVar42;
  uStack_188._4_4_ = fVar46;
  fStack_180 = fVar54;
  fStack_17c = fVar82;
  pdb_1408f3120(plVar21,plStack_120,plVar39,&cStack_118,puVar85);
  uVar32 = (uint)((ulonglong)puVar85 >> 0x20);
  if ((char)uStack_140 == '\x01') {
    lVar26 = plVar21[0x1b];
    if (lVar26 == plVar21[0x19]) {
      pdb_142d8d5c0(plStack_100 + 0x19);
    }
    lVar27 = plStack_100[0x1a];
    uVar24 = CONCAT44(_UNK_142e36f64,_DAT_142e36f60);
  }
  else {
    if ((int)uStack_1b8 != 2) {
      if ((int)uStack_1b8 != 3) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143010712,0x28,&UNK_143010758);
      }
      lVar26 = plVar21[0x1b];
      plVar39 = plVar21 + 0x19;
      if (lVar26 == plVar21[0x19]) {
        plStack_120 = plVar21 + 0x19;
        pdb_142d8d5c0();
        plVar39 = plStack_120;
      }
      uVar24 = _DAT_143010250;
      lVar27 = plStack_100[0x1a];
      pfVar23 = (float *)(lVar27 + lVar26 * 0x14);
      *pfVar23 = fVar43;
      pfVar23[1] = fVar52;
      *(undefined8 *)(pfVar23 + 2) = uVar24;
      *(undefined1 *)(lVar27 + 0x10 + lVar26 * 0x14) = 0;
      plStack_100[0x1b] = lVar26 + 1;
      if (lVar26 + 1 == plStack_100[0x19]) {
        pdb_142d8d5c0(plVar39);
      }
      uVar24 = _DAT_143010260;
      lVar27 = plStack_100[0x1a];
      pfVar23 = (float *)(lVar27 + (lVar26 + 1) * 0x14);
      *pfVar23 = fVar43;
      pfVar23[1] = fVar52;
      *(undefined8 *)(pfVar23 + 2) = uVar24;
      *(undefined1 *)(lVar27 + 0x10 + (lVar26 + 1) * 0x14) = 0;
      lVar26 = lVar26 + 2;
      goto LAB_14087e194;
    }
    lVar26 = plVar21[0x1b];
    if (lVar26 == plVar21[0x19]) {
      pdb_142d8d5c0(plStack_100 + 0x19);
    }
    lVar27 = plStack_100[0x1a];
    uVar24 = _DAT_143010270;
  }
  pfVar23 = (float *)(lVar27 + lVar26 * 0x14);
  *pfVar23 = fVar43;
  pfVar23[1] = fVar52;
  *(undefined8 *)(pfVar23 + 2) = uVar24;
  *(undefined1 *)(lVar27 + 0x10 + lVar26 * 0x14) = 0;
  lVar26 = lVar26 + 1;
LAB_14087e194:
  plStack_100[0x1b] = lVar26;
  cVar15 = pdb_1408ff980(lStack_1c0);
  if (cVar15 != '\0') {
    fVar47 = fVar46 * fVar46 + fVar42 * fVar42;
    fVar61 = (fVar82 * fVar82 - (fVar47 + fVar54 * fVar54)) * _DAT_142e378f0;
    fVar47 = (fVar82 * fVar82 - (fVar47 + fVar54 * fVar54)) * _UNK_142e378f8;
    fVar79 = fVar42 * _DAT_142e378f0;
    fVar80 = fVar46 * _UNK_142e378f4;
    fVar81 = fVar54 * _UNK_142e378f8;
    fVar62 = fVar46 * _DAT_142e37950;
    fVar63 = fVar42 * _UNK_142e37958;
    plStack_120 = (longlong *)CONCAT71(plStack_120._1_7_,1 < *(uint *)(lStack_138 + -0x50));
    lVar26 = plStack_100[0x24];
    if (lVar26 == plStack_100[0x22]) {
      pdb_142d8a7a0(plStack_100 + 0x22);
    }
    fVar81 = fVar81 + fVar80 + fVar79;
    fVar81 = fVar81 + fVar81;
    lVar27 = plStack_100[0x23];
    lVar35 = lVar26 * 0x20;
    pfVar23 = (float *)(lVar27 + lVar35);
    *pfVar23 = fVar43;
    pfVar23[1] = fVar52;
    pfVar23[2] = (fVar82 + fVar82) * (fVar62 - fVar54 * 0.0) + fVar61 + fVar81 * fVar42;
    pfVar23[3] = (fVar82 + fVar82) * (fVar63 - fVar46 * 0.0) + fVar47 + fVar81 * fVar54;
    *(ulonglong *)(lVar27 + 0x10 + lVar35) = CONCAT44(fStack_1e4,fStack_1e8);
    *(float *)(lVar27 + 0x18 + lVar35) = fStack_104;
    *(char *)(lVar27 + 0x1c + lVar35) = (char)uStack_140 + '\x05';
    *(undefined1 *)(lVar27 + 0x1d + lVar35) = plStack_120._0_1_;
    plStack_100[0x24] = lVar26 + 1;
  }
  lVar26 = CONCAT44(fStack_1e4,fStack_1e8);
  fVar43 = fStack_104;
  if (*(uint *)(lStack_138 + -0x50) < 2) {
    fVar52 = fVar54 * fVar54;
    fVar47 = fVar82 * fVar82;
    fVar62 = fVar46 * fVar46 + fVar42 * fVar42;
    fVar43 = fVar54 * _UNK_143010288 + fVar46 * _UNK_143010284 + fVar42 * _DAT_143010280;
    fVar43 = fVar43 + fVar43;
    fVar61 = fVar82 + fVar82;
    lVar26 = CONCAT44(fVar61 * (fVar54 * 0.0 - fVar42 * _DAT_14300bbe0) +
                      fVar43 * fVar46 + (fVar47 - (fVar62 + fVar52)) * _UNK_143010284 + fStack_1e4,
                      fVar61 * (fVar46 * _DAT_14300bbe0 - fVar54 * 0.0) +
                      fVar43 * fVar42 + (fVar47 - (fVar62 + fVar52)) * _DAT_143010280 + fStack_1e8);
    fVar43 = fVar61 * (fVar42 * 0.0 - fVar46 * 0.0) +
             fVar43 * fVar54 + (fVar47 - (fVar62 + fVar52)) * _UNK_143010288 + fStack_104;
  }
  if (*plStack_100 != 0 || plStack_100[1] != 0) goto LAB_14087ee08;
  plStack_100[1] = 0;
  *plStack_100 = 1;
  *(float *)(plStack_100 + 2) = fVar42;
  *(float *)((longlong)plStack_100 + 0x14) = fVar46;
  *(float *)(plStack_100 + 3) = fVar54;
  *(float *)((longlong)plStack_100 + 0x1c) = fVar82;
  plStack_100[4] = lVar26;
  *(float *)(plStack_100 + 5) = fVar43;
  *(ulonglong *)((longlong)plStack_100 + 0x2c) = CONCAT44(_UNK_142e37954,_DAT_142e37950);
  *(float *)((longlong)plStack_100 + 0x34) = fStack_124;
  if (*(uint *)(lStack_138 + -0x50) < 2) {
    plStack_120 = *(longlong **)(&UNK_143010908 + (longlong)(char)uStack_140 * 8);
    fStack_17c._0_3_ = 0;
    uStack_188._0_4_ = (float)((uint)(float)uStack_188 & 0xffffff);
    uStack_188._4_4_ = 0.0;
    fStack_180 = 0.0;
    fStack_110 = 0.0;
    uStack_10c = 0;
    cStack_118 = SUB41((float)uStack_188,0);
    cStack_117 = (char)((uint)(float)uStack_188 >> 8);
    uStack_116 = (uint5)(ushort)((uint)(float)uStack_188 >> 0x10);
    uStack_111 = 0;
    puVar25 = (undefined4 *)pdb_1409014f0(puStack_130 + -0x28,&UNK_143010690);
    puStack_130 = (undefined *)CONCAT44(puStack_130._4_4_,*puVar25);
    uVar10 = CONCAT52(uStack_116,CONCAT11(cStack_117,cStack_118));
    fStack_180 = fStack_110;
    fStack_17c = (float)CONCAT13(fStack_17c._3_1_,uStack_10c);
    uStack_188._0_4_ = (float)uVar10;
    uStack_188._4_4_ = (float)(CONCAT17(uStack_111,uVar10) >> 0x20);
    lVar26 = plStack_100[0x18];
    if (lVar26 == plStack_100[0x16]) {
      pdb_142d8ddd0(plStack_208);
    }
    lVar27 = plStack_100[0x17];
    lVar35 = lVar26 * 0x170;
    *(undefined8 *)(lVar27 + lVar35) = 0;
    *(undefined8 *)(lVar27 + 0x10 + lVar35) = 1;
    *(ulonglong *)(lVar27 + 0x18 + lVar35) = uStack_1b8 * 1000 + uStack_1b0;
    *(undefined8 *)(lVar27 + 0x20 + lVar35) = 0;
    *(undefined8 *)(lVar27 + 0x30 + lVar35) = 0;
    *(undefined4 *)(lVar27 + 0x40 + lVar35) = 0;
    *(undefined4 *)(lVar27 + 0x50 + lVar35) = 0;
    *(undefined4 *)(lVar27 + 0x60 + lVar35) = 0;
    *(undefined4 *)(lVar27 + 0x70 + lVar35) = 2;
    *(longlong **)(lVar27 + 0x90 + lVar35) = plStack_120;
    *(undefined8 *)(lVar27 + 0x98 + lVar35) = 0x1f;
    *(undefined **)(lVar27 + 0xa0 + lVar35) = &UNK_14330db43;
    *(undefined8 *)(lVar27 + 0xa8 + lVar35) = 0x31;
    pfVar23 = (float *)(lVar27 + 0xb0 + lVar35);
    *pfVar23 = fVar42;
    pfVar23[1] = fVar46;
    pfVar23[2] = fVar54;
    pfVar23[3] = fVar82;
    *(ulonglong *)(lVar27 + 0xc0 + lVar35) = CONCAT44(fStack_1e4,fStack_1e8);
    *(float *)(lVar27 + 200 + lVar35) = fStack_104;
    *(ulonglong *)(lVar27 + 0xcc + lVar35) = CONCAT44(_UNK_142e37954,_DAT_142e37950);
    *(float *)(lVar27 + 0xd4 + lVar35) = fStack_124;
    *(undefined4 *)(lVar27 + 0xe0 + lVar35) = 1;
    *(undefined4 *)(lVar27 + 0xe4 + lVar35) = puStack_130._0_4_;
    *(undefined4 *)(lVar27 + 0xe8 + lVar35) = 0;
    *(undefined1 *)(lVar27 + 0x105 + lVar35) = 2;
    *(undefined4 *)(lVar27 + 0x108 + lVar35) = 0;
    *(undefined1 *)(lVar27 + 0x15c + lVar35) = 2;
    *(ulonglong *)(lVar27 + 0x164 + lVar35) =
         CONCAT35(fStack_17c._0_3_,CONCAT41(fStack_180,uStack_188._7_1_));
    *(ulonglong *)(lVar27 + 0x15d + lVar35) = CONCAT44(uStack_188._4_4_,(float)uStack_188);
    *(undefined1 *)(lVar27 + 0x16c + lVar35) = 2;
    *(undefined1 *)(lVar27 + 0x16e + lVar35) = uStack_f3;
    *(undefined1 *)(lVar27 + 0x16f + lVar35) = 0;
    plStack_100[0x18] = lVar26 + 1;
  }
  pdb_140901130(puStack_210,&UNK_1430106c0);
  pdb_140c42940(uStack_1b8);
  in_stack_fffffffffffffc80 = in_stack_fffffffffffffc80 & 0xffffffffffffff00;
  in_stack_fffffffffffffc78 = (ulonglong)uVar32 << 0x20;
  pdb_140c428a0(&uStack_188);
  lVar26 = plStack_100[0x1e];
  if (lVar26 == plStack_100[0x1c]) {
    pdb_142d8a7a0(plStack_100 + 0x1c);
  }
  uVar88 = (undefined4)((ulonglong)in_stack_fffffffffffffc88 >> 0x20);
  uVar86 = (undefined4)((ulonglong)in_stack_fffffffffffffc78 >> 0x20);
  uVar87 = (undefined4)(in_stack_fffffffffffffc80 >> 0x20);
  lVar27 = plStack_100[0x1d];
  puVar85 = (undefined8 *)(lVar27 + 0x10 + lVar26 * 0x20);
  *puVar85 = uStack_178;
  puVar85[1] = CONCAT44(fStack_16c,CONCAT22(uStack_16e,uStack_170));
  puVar85 = (undefined8 *)(lVar27 + lVar26 * 0x20);
  *puVar85 = CONCAT44(uStack_188._4_4_,(float)uStack_188);
  puVar85[1] = CONCAT44(fStack_17c,fStack_180);
  plStack_100[0x1e] = lVar26 + 1;
  if (cStack_f1 == '\x17') {
    puVar33 = &UNK_1430106d8;
    if ((char)uStack_140 != '\x02') {
      if ((int)uStack_1b8 != 3) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143010712,0x28,&UNK_143010740);
      }
      puVar33 = &UNK_1430106f5;
    }
    puStack_130 = puVar33;
    uVar16 = pdb_1408ff980(lStack_1c0);
    uStack_1b0 = CONCAT71(uStack_1b0._1_7_,uVar16);
    cStack_f1 = pdb_1408ff980(lStack_1c0);
    fStack_17c = (float)((uint)fStack_17c & 0xff000000);
    uStack_188._0_4_ = (float)((uint)(float)uStack_188 & 0xffffff);
    uStack_188._4_4_ = 0.0;
    fStack_180 = 0.0;
    fStack_110 = 0.0;
    uStack_10c = 0;
    cStack_118 = SUB41((float)uStack_188,0);
    cStack_117 = (char)((uint)(float)uStack_188 >> 8);
    uStack_116 = (uint5)(ushort)((uint)(float)uStack_188 >> 0x10);
    uStack_111 = 0;
    cVar15 = pdb_1408ff980(lStack_1c0);
    uVar44 = _DAT_143010290;
    if (cVar15 != '\0') {
      uVar44 = pdb_140930390(lStack_298);
    }
    uVar10 = CONCAT52(uStack_116,CONCAT11(cStack_117,cStack_118));
    fStack_180 = fStack_110;
    fStack_17c = (float)CONCAT13(fStack_17c._3_1_,uStack_10c);
    uStack_188._0_4_ = (float)uVar10;
    uStack_188._4_4_ = (float)(CONCAT17(uStack_111,uVar10) >> 0x20);
    lVar26 = plStack_100[0x18];
    if (lVar26 == plStack_100[0x16]) {
      pdb_142d8ddd0(plStack_208);
    }
    lVar27 = plStack_100[0x17];
    lVar35 = lVar26 * 0x170;
    *(undefined8 *)(lVar27 + lVar35) = 0;
    *(undefined8 *)(lVar27 + 0x10 + lVar35) = 0;
    *(undefined8 *)(lVar27 + 0x20 + lVar35) = 0;
    *(undefined8 *)(lVar27 + 0x30 + lVar35) = 0;
    *(undefined4 *)(lVar27 + 0x40 + lVar35) = 0;
    *(undefined4 *)(lVar27 + 0x50 + lVar35) = 0;
    *(undefined4 *)(lVar27 + 0x60 + lVar35) = 0;
    *(undefined4 *)(lVar27 + 0x70 + lVar35) = 2;
    *(undefined **)(lVar27 + 0x90 + lVar35) = puStack_130;
    *(undefined8 *)(lVar27 + 0x98 + lVar35) = 0x1d;
    *(undefined **)(lVar27 + 0xa0 + lVar35) = &UNK_14330dc70;
    *(undefined8 *)(lVar27 + 0xa8 + lVar35) = 0x26;
    pfVar23 = (float *)(lVar27 + 0xb0 + lVar35);
    *pfVar23 = fVar42;
    pfVar23[1] = fVar46;
    pfVar23[2] = fVar54;
    pfVar23[3] = fVar82;
    *(ulonglong *)(lVar27 + 0xc0 + lVar35) = CONCAT44(fStack_1e4,fStack_1e8);
    *(float *)(lVar27 + 200 + lVar35) = fStack_104;
    *(ulonglong *)(lVar27 + 0xcc + lVar35) = CONCAT44(_UNK_142e37954,_DAT_142e37950);
    *(float *)(lVar27 + 0xd4 + lVar35) = fStack_124;
    uStack_290 = uStack_290 & 0xffffffff00000000;
    *(undefined8 *)(lVar27 + 0xe0 + lVar35) = 0x3e700000001;
    *(ulonglong *)(lVar27 + 0xe8 + lVar35) = uStack_290;
    *(float *)(lVar27 + 0xf0 + lVar35) = fVar84;
    *(float *)(lVar27 + 0xf4 + lVar35) = fVar83;
    *(undefined4 *)(lVar27 + 0xf8 + lVar35) = uStack_1d0;
    *(undefined4 *)(lVar27 + 0xfc + lVar35) = uStack_1cc;
    *(float *)(lVar27 + 0x100 + lVar35) = fStack_1c8;
    *(undefined1 *)(lVar27 + 0x104 + lVar35) = (undefined1)uStack_1b0;
    *(char *)(lVar27 + 0x105 + lVar35) = cStack_f1;
    *(undefined4 *)(lVar27 + 0x108 + lVar35) = 0;
    *(ulonglong *)(lVar27 + 0x11c + lVar35) =
         CONCAT44(uStack_328._4_4_ + uStack_278._4_4_,(float)uStack_328 + (float)uStack_278);
    *(float *)(lVar27 + 0x124 + lVar35) = fStack_1d8 + (float)auStack_288._0_4_;
    pfVar23 = (float *)(lVar27 + 0x128 + lVar35);
    *pfVar23 = fVar53;
    pfVar23[1] = fVar56;
    pfVar23[2] = fStack_308 + (float)uStack_278;
    pfVar23[3] = fStack_304 + uStack_278._4_4_;
    *(float *)(lVar27 + 0x138 + lVar35) = fStack_1c4 + (float)auStack_288._0_4_;
    puVar85 = (undefined8 *)(lVar27 + 0x13c + lVar35);
    *puVar85 = uVar5;
    puVar85[1] = CONCAT44(uStack_318._4_4_ + uStack_278._4_4_,(float)uStack_318 + (float)uStack_278)
    ;
    *(float *)(lVar27 + 0x14c + lVar35) = fStack_1d4 + (float)auStack_288._0_4_;
    *(undefined8 *)(lVar27 + 0x150 + lVar35) = uVar13;
    *(undefined4 *)(lVar27 + 0x158 + lVar35) = uVar44;
    *(undefined1 *)(lVar27 + 0x15c + lVar35) = 0;
    *(ulonglong *)(lVar27 + 0x164 + lVar35) =
         CONCAT35(fStack_17c._0_3_,CONCAT41(fStack_180,uStack_188._7_1_));
    *(ulonglong *)(lVar27 + 0x15d + lVar35) = CONCAT44(uStack_188._4_4_,(float)uStack_188);
    *(undefined1 *)(lVar27 + 0x16c + lVar35) = 2;
    *(undefined1 *)(lVar27 + 0x16e + lVar35) = uStack_f3;
    *(undefined1 *)(lVar27 + 0x16f + lVar35) = 0;
    plStack_100[0x18] = lVar26 + 1;
    pdb_140df4150(&uStack_238,&plStack_268);
    uStack_238 = CONCAT44((float)((ulonglong)uStack_238 >> 0x20) + 0.0,(float)uStack_238 + 0.0);
    fStack_230 = fStack_230 + fVar12;
    pdb_140df4540(&uStack_188,&uStack_260,((float)uStack_250 + uStack_250._4_4_) * fVar12);
    fVar52 = fVar54 * fVar54;
    fVar53 = fVar82 * fVar82;
    fVar56 = fVar46 * fVar46 + fVar42 * fVar42;
    fVar43 = fVar54 * _UNK_142e378f8 + fVar46 * _UNK_142e378f4 + fVar42 * _DAT_142e378f0;
    fVar43 = fVar43 + fVar43;
    fVar82 = fVar82 + fVar82;
    fVar83 = fVar82 * (fVar46 * _DAT_142e36f28 - fVar54 * 0.0) +
             fVar43 * fVar42 + (fVar53 - (fVar56 + fVar52)) * _DAT_142e378f0;
    fVar84 = fVar82 * (fVar42 * 0.0 - fVar46 * 0.0) +
             fVar43 * fVar54 + (fVar53 - (fVar56 + fVar52)) * _UNK_142e378f8;
    fStack_2f0 = fStack_104 + uStack_188._4_4_ * _DAT_142e378e0 + fVar84 * fVar12 * fVar12;
    uStack_2f8 = CONCAT44((fVar82 * (fVar54 * 0.0 - fVar42 * _DAT_142e36f28) +
                          fVar43 * fVar46 + (fVar53 - (fVar56 + fVar52)) * _UNK_142e378f4) *
                          _UNK_142e36f64 * _UNK_142e36f64 +
                          fStack_1e4 + uStack_188._4_4_ * _UNK_142e378e4,
                          fVar83 * _DAT_142e36f60 * _DAT_142e36f60 +
                          fStack_1e8 + uStack_188._4_4_ * _DAT_142e378e0);
    uVar44 = *(undefined4 *)(lStack_138 + -0x34);
    pdb_140df4150(&cStack_118,&plStack_268);
    fStack_1f8 = fStack_110 + fVar12;
    plStack_200 = _DAT_1430102a0;
    in_stack_fffffffffffffc80 = CONCAT44(uVar87,fVar84);
    in_stack_fffffffffffffc78 = CONCAT44(uVar86,fVar83);
    in_stack_fffffffffffffc88 = CONCAT44(uVar88,0x40200000);
    pdb_140c17730(&uStack_188,uVar44,&uStack_2f8,&plStack_200,in_stack_fffffffffffffc78,
                  in_stack_fffffffffffffc80,in_stack_fffffffffffffc88,0x3d4ccccd);
    lVar26 = plStack_100[0x21];
    if (lVar26 == plStack_100[0x1f]) {
      pdb_142d8d630(plStack_100 + 0x1f);
    }
    lVar27 = plStack_100[0x20];
    lVar35 = lVar26 * 0x30;
    puVar85 = (undefined8 *)(lVar27 + 0x20 + lVar35);
    *puVar85 = CONCAT44(fStack_164,fStack_168);
    puVar85[1] = lStack_160;
    puVar85 = (undefined8 *)(lVar27 + 0x10 + lVar35);
    *puVar85 = uStack_178;
    puVar85[1] = CONCAT44(fStack_16c,CONCAT22(uStack_16e,uStack_170));
    *(undefined8 *)(lVar27 + lVar35) = CONCAT44(uStack_188._4_4_,(float)uStack_188);
    ((undefined8 *)(lVar27 + lVar35))[1] = CONCAT44(fStack_17c,fStack_180);
    plStack_100[0x21] = lVar26 + 1;
  }
  goto LAB_14087d379;
LAB_14087ed2a:
  pdb_142dc8110(&UNK_1430103b0,0x16,&UNK_143010538);
  goto LAB_14087ef1d;
LAB_14087dce5:
  plVar21 = *(longlong **)(lVar26 + -0x28 + uVar36 * -0x48);
  LOCK();
  lVar26 = *plVar21;
  *plVar21 = *plVar21 + 1;
  UNLOCK();
  if (*plVar21 != 0 && SCARRY8(lVar26,1) == *plVar21 < 0) {
    uStack_f2 = 1;
    plStack_200 = plVar21;
    plStack_120 = plVar21;
    cVar15 = pdb_1409012c0(cStack_f1,uStack_1f0);
    plVar21 = plStack_100;
    uStack_f2 = 1;
    cStack_118 = pdb_140c44ba0(uStack_140);
    cStack_117 = cVar15;
    if (plStack_198[9] != 0) {
      uStack_f2 = 1;
      uVar22 = pdb_1413f0300(plStack_2a0,&cStack_118);
      lVar26 = plStack_198[6];
      uVar19 = plStack_198[7];
      bVar41 = (byte)(uVar22 >> 0x39);
      auVar45 = ZEXT216(CONCAT11(bVar41,bVar41));
      auVar45 = pshuflw(auVar45,auVar45,0);
      lStack_1a8 = 0;
      while( true ) {
        uVar22 = uVar22 & uVar19;
        auVar2 = *(undefined1 (*) [16])(lVar26 + uVar22);
        auVar60[0] = -(auVar2[0] == auVar45[0]);
        auVar60[1] = -(auVar2[1] == auVar45[1]);
        auVar60[2] = -(auVar2[2] == auVar45[2]);
        auVar60[3] = -(auVar2[3] == auVar45[3]);
        auVar60[4] = -(auVar2[4] == auVar45[4]);
        auVar60[5] = -(auVar2[5] == auVar45[5]);
        auVar60[6] = -(auVar2[6] == auVar45[6]);
        auVar60[7] = -(auVar2[7] == auVar45[7]);
        auVar60[8] = -(auVar2[8] == auVar45[0]);
        auVar60[9] = -(auVar2[9] == auVar45[1]);
        auVar60[10] = -(auVar2[10] == auVar45[2]);
        auVar60[0xb] = -(auVar2[0xb] == auVar45[3]);
        auVar60[0xc] = -(auVar2[0xc] == auVar45[4]);
        auVar60[0xd] = -(auVar2[0xd] == auVar45[5]);
        auVar60[0xe] = -(auVar2[0xe] == auVar45[6]);
        auVar60[0xf] = -(auVar2[0xf] == auVar45[7]);
        uVar34 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
        uVar32 = (uint)uVar34;
        if (uVar34 != 0) {
          uStack_190 = CONCAT71(uStack_190._1_7_,cStack_118);
          if (cStack_118 == '\x1a') {
            do {
              uVar7 = 0;
              for (uVar8 = uVar32; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                uVar7 = uVar7 + 1;
              }
              uVar36 = uVar7 + uVar22 & uVar19;
              if (*(char *)(lVar26 + -0x48 + uVar36 * -0x48) == '\x1a') goto LAB_14087deaf;
              uVar34 = (ushort)(uVar32 - 1) & (ushort)uVar32;
              uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar34);
            } while (uVar34 != 0);
          }
          else {
            puStack_1a0 = (undefined *)CONCAT71(puStack_1a0._1_7_,cStack_117);
            do {
              uVar7 = 0;
              for (uVar8 = uVar32; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                uVar7 = uVar7 + 1;
              }
              uVar36 = uVar7 + uVar22 & uVar19;
              cVar15 = *(char *)(lVar26 + -0x48 + uVar36 * -0x48);
              if (((cVar15 != '\x1a') && (cStack_118 == cVar15)) &&
                 (cStack_117 == *(char *)(lVar26 + uVar36 * -0x48 + -0x47))) goto LAB_14087deaf;
              uVar34 = (ushort)(uVar32 - 1) & (ushort)uVar32;
              uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar34);
            } while (uVar34 != 0);
          }
        }
        auVar51[0] = -(auVar2[0] == cVar14);
        auVar51[1] = -(auVar2[1] == cVar64);
        auVar51[2] = -(auVar2[2] == cVar65);
        auVar51[3] = -(auVar2[3] == cVar66);
        auVar51[4] = -(auVar2[4] == cVar67);
        auVar51[5] = -(auVar2[5] == cVar68);
        auVar51[6] = -(auVar2[6] == cVar69);
        auVar51[7] = -(auVar2[7] == cVar70);
        auVar51[8] = -(auVar2[8] == cVar71);
        auVar51[9] = -(auVar2[9] == cVar72);
        auVar51[10] = -(auVar2[10] == cVar73);
        auVar51[0xb] = -(auVar2[0xb] == cVar74);
        auVar51[0xc] = -(auVar2[0xc] == cVar75);
        auVar51[0xd] = -(auVar2[0xd] == cVar76);
        auVar51[0xe] = -(auVar2[0xe] == cVar77);
        auVar51[0xf] = -(auVar2[0xf] == cVar78);
        if ((((((((((((((((SUB161(auVar51 >> 7,0) & 1) != 0 || (SUB161(auVar51 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar51 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar51 >> 0x1f,0) & 1) != 0) || (SUB161(auVar51 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar51 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar51 >> 0x37,0) & 1) != 0) || (SUB161(auVar51 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar51 >> 0x47,0) & 1) != 0) || (SUB161(auVar51 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar51 >> 0x57,0) & 1) != 0) || (SUB161(auVar51 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar51 >> 0x67,0) & 1) != 0) || (SUB161(auVar51 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar51 >> 0x77,0) & 1) != 0) || auVar51[0xf] < '\0') break;
        uVar22 = uVar22 + lStack_1a8 + 0x10;
        lStack_1a8 = lStack_1a8 + 0x10;
      }
    }
    uStack_188 = (longlong **)&cStack_118;
    fStack_180 = 4.243965;
    fStack_17c = 1.4013e-45;
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14301045d,&uStack_188,&UNK_1430104a8);
  }
LAB_14087ef1d:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}

