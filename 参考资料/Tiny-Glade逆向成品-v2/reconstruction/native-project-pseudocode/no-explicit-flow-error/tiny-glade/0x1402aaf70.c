// VA 0x1402aaf70, PDB extent 6951 bytes
// tiny_glade::egui_backend::EguiBackend::draw
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/egui_backend.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::egui_backend::EguiBackend::draw
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/egui_backend.rs
   Extent: 6951 */

void pdb_1402aaf70(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  float *pfVar1;
  char *pcVar2;
  byte *pbVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  code *pcVar6;
  uint uVar7;
  uint6 uVar8;
  undefined1 auVar9 [14];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  char cVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined *puVar26;
  longlong *plVar27;
  ulonglong uVar28;
  ulonglong *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  uint uVar32;
  byte *pbVar33;
  byte *pbVar34;
  uint uVar35;
  longlong lVar36;
  ulonglong uVar37;
  undefined8 *puVar38;
  byte bVar39;
  longlong *plVar40;
  longlong lVar41;
  undefined4 uVar42;
  uint uVar43;
  ushort uVar44;
  ulonglong uVar45;
  longlong *plVar46;
  ulonglong uVar47;
  undefined *puVar48;
  longlong lVar49;
  bool bVar50;
  byte bVar51;
  float fVar52;
  undefined8 uVar53;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar54 [16];
  undefined4 extraout_XMM0_Dc;
  undefined1 auVar55 [16];
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  longlong *plStack_318;
  longlong lStack_310;
  longlong *plStack_308;
  undefined8 *puStack_300;
  byte *pbStack_2f8;
  ulonglong uStack_2f0;
  ulonglong uStack_2e8;
  longlong lStack_2e0;
  longlong lStack_2d8;
  ulonglong uStack_2b8;
  ulonglong uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  longlong lStack_298;
  longlong lStack_290;
  longlong *plStack_288;
  longlong *plStack_280;
  undefined8 *puStack_278;
  longlong lStack_270;
  undefined8 uStack_268;
  byte *pbStack_260;
  longlong *plStack_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  int iStack_244;
  int iStack_240;
  undefined8 uStack_23c;
  undefined4 uStack_234;
  undefined8 uStack_228;
  longlong lStack_220;
  longlong *plStack_218;
  longlong *plStack_210;
  undefined8 *puStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  longlong *plStack_1c8;
  longlong lStack_1c0;
  longlong *plStack_1b8;
  undefined8 *puStack_1b0;
  byte *pbStack_1a8;
  ulonglong uStack_1a0;
  ulonglong uStack_198;
  longlong lStack_190;
  longlong lStack_188;
  longlong *plStack_178;
  longlong *plStack_170;
  longlong **pplStack_168;
  longlong *plStack_160;
  longlong lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  longlong lStack_120;
  undefined8 uStack_118;
  longlong lStack_110;
  longlong *plStack_108;
  undefined1 uStack_f9;
  undefined8 *puStack_f8;
  byte *pbStack_f0;
  longlong *plStack_e8;
  byte *pbStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  
  uStack_c0 = 0xfffffffffffffffe;
  uStack_228 = *(undefined8 *)(param_2 + 0x1e8);
  puStack_278 = param_1 + 3;
  plStack_288 = (longlong *)param_1[4];
  lStack_270 = param_1[5];
  param_1[5] = 0;
  fVar21 = _DAT_142e4fba0;
  fVar20 = _UNK_142e4fb9c;
  fVar19 = _UNK_142e4fb98;
  fVar18 = _UNK_142e4fb94;
  fVar17 = _DAT_142e4fb90;
  uVar16 = _UNK_142e47bfc;
  uVar15 = _UNK_142e47bf8;
  fVar14 = _DAT_142e36f50;
  fVar13 = _UNK_142e36f4c;
  fVar12 = _UNK_142e36f48;
  fVar11 = _UNK_142e36f44;
  fVar10 = _DAT_142e36f40;
  uVar43 = _UNK_142e347f8;
  uVar4 = _DAT_142e347f0;
  plStack_280 = plStack_288 + lStack_270 * 0xb;
  uStack_268 = 0;
  puStack_2a0 = param_1 + 10;
  puStack_2a8 = param_1 + 0xe;
  puVar38 = puStack_2a8;
  lStack_298 = param_2;
  lStack_290 = param_4;
  lStack_220 = param_3;
  puStack_f8 = param_1;
  while (plStack_288 != plStack_280) {
    plVar46 = plStack_288 + 0xb;
    plVar40 = (longlong *)*plStack_288;
    plStack_108 = (longlong *)plStack_288[1];
    lStack_2d8 = plStack_288[10];
    uStack_2e8 = plStack_288[8];
    lStack_2e0 = plStack_288[9];
    pbStack_2f8 = (byte *)plStack_288[6];
    uStack_2f0 = plStack_288[7];
    plStack_308 = (longlong *)plStack_288[4];
    puStack_300 = (undefined8 *)plStack_288[5];
    plStack_318 = (longlong *)plStack_288[2];
    lStack_310 = plStack_288[3];
    plStack_288 = plVar46;
    if (plVar40 == (longlong *)0x2) break;
    plVar46 = plStack_280;
    plStack_1c8 = plStack_318;
    lStack_1c0 = lStack_310;
    plStack_1b8 = plStack_308;
    puStack_1b0 = puStack_300;
    pbStack_1a8 = pbStack_2f8;
    uStack_1a0 = uStack_2f0;
    uStack_198 = uStack_2e8;
    lStack_190 = lStack_2e0;
    lStack_188 = lStack_2d8;
    cVar23 = pdb_140e94b40();
    if (cVar23 == '\0') {
      lStack_110 = 0;
    }
    else {
      lVar24 = pdb_1402ad010(0x36);
      lVar49 = 0x36;
      if (lVar24 == 1) {
        if ((undefined8 *)0x36 < puVar38) {
          pdb_142dc8070(&UNK_142e6680b,0x36,0,puVar38,&UNK_142e668c8);
          goto LAB_1402ac13a;
        }
        uVar25 = pdb_1402ad010(puVar38);
        puVar48 = &UNK_142e6680b;
        if ((uVar25 & 1) != 0) {
          if (0x36 < (longlong)puVar38 + 2U) {
            pdb_142dc8070(&UNK_142e6680b,0x36,(longlong)puVar38 + 2U,0x36,&UNK_142e668e0);
LAB_1402ac13a:
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          lVar49 = 0x34 - (longlong)puVar38;
          puVar48 = &UNK_142e6680d + (longlong)puVar38;
        }
      }
      else {
        puVar48 = &UNK_142e6680b;
      }
      puVar26 = &UNK_142e6666a;
      do {
        pbVar34 = puVar26 + -1;
        uVar32 = (uint)(char)*pbVar34;
        if ((int)uVar32 < 0) {
          bVar39 = puVar26[-2];
          if ((char)bVar39 < -0x40) {
            bVar51 = puVar26[-3];
            if ((char)bVar51 < -0x40) {
              pbVar33 = puVar26 + -4;
              puVar26 = puVar26 + -4;
              uVar32 = bVar51 & 0x3f | (*pbVar33 & 7) << 6;
            }
            else {
              puVar26 = puVar26 + -3;
              uVar32 = bVar51 & 0xf;
            }
            uVar32 = bVar39 & 0x3f | uVar32 << 6;
          }
          else {
            puVar26 = puVar26 + -2;
            uVar32 = bVar39 & 0x1f;
          }
          uVar32 = (uint)(*pbVar34 & 0x3f) | uVar32 << 6;
          if (uVar32 != 0x5c) goto LAB_1402ab219;
LAB_1402ab240:
          if ((undefined *)0x25 < puVar26 + -0x142e66644) {
            pdb_142dc8070(&UNK_142e66645,0x25,puVar26 + -0x142e66644,0x25,&UNK_142e668a8);
            goto LAB_1402ac13a;
          }
          lVar24 = 0x24 - (longlong)(puVar26 + -0x142e66645);
          plVar46 = (longlong *)(puVar26 + 1);
          goto LAB_1402ab25c;
        }
        puVar26 = puVar26 + -1;
        if (uVar32 == 0x5c) goto LAB_1402ab240;
LAB_1402ab219:
        if (uVar32 == 0x2f) goto LAB_1402ab240;
      } while (puVar26 != &UNK_142e66645);
      lVar24 = 0x25;
      plVar46 = (longlong *)&UNK_142e66645;
LAB_1402ab25c:
      plVar27 = (longlong *)pdb_140e97000();
      if (((char)plVar27[0xd] != '\x01') &&
         (plVar27 = (longlong *)pdb_142d7de90(plVar27,0), plVar27 == (longlong *)0x0)) {
        pdb_142dc7890(&UNK_142f3dc40);
        goto LAB_1402ac13a;
      }
      if (*plVar27 != 0) {
        pdb_142dc8090(&UNK_142f3dcc8);
        goto LAB_1402ac13a;
      }
      *plVar27 = -1;
      plStack_e8 = plVar27;
      uStack_118 = pdb_140e94f10(plVar27 + 1,puVar48,lVar49,plVar46,lVar24,1,0);
      *plStack_e8 = *plStack_e8 + 1;
      lStack_110 = 1;
    }
    uVar25 = uStack_1a0;
    pbVar34 = pbStack_1a8;
    lStack_120 = lStack_110;
    bVar50 = SBORROW8(0,(longlong)puStack_1b0);
    puVar29 = (ulonglong *)(pbStack_1a8 + 0x28);
    if (!bVar50) {
      puVar29 = &uStack_198;
    }
    uVar37 = *puVar29;
    pbVar33 = pbStack_1a8 + 0x30;
    if (!bVar50) {
      pbVar33 = (byte *)&lStack_190;
    }
    lVar24 = *(longlong *)pbVar33;
    if (bVar50) {
      uVar42 = 0;
      pbStack_e0 = pbStack_f0;
      uVar25 = uStack_d0;
      uVar47 = *(ulonglong *)(pbStack_1a8 + 0x20);
      pbVar33 = *(byte **)(pbStack_1a8 + 0x18);
    }
    else {
      uVar31 = CONCAT71((int7)((ulonglong)plVar46 >> 8),1);
      uVar42 = (undefined4)uVar31;
      if (uStack_1a0 == 0) {
        pbStack_e0 = (byte *)0x1;
        uVar25 = 0;
        uVar47 = 0;
        pbVar33 = (byte *)0x1;
      }
      else {
        uVar47 = uStack_1a0 * 4;
        pdb_14007ee60();
        pbStack_e0 = pub_1406abab0(uVar47,1);
        if (pbStack_e0 == (byte *)0x0) {
          uStack_d8 = uStack_d0;
          pbStack_e0 = pbStack_f0;
          uStack_c1 = 0;
          pdb_142dc7e2a(1,uVar47);
          goto LAB_1402ac13a;
        }
        uVar47 = uVar25;
        pbVar33 = pbStack_e0;
        if ((ulonglong)((longlong)pbStack_e0 - (longlong)pbVar34) < 0x10 || uVar25 < 4) {
          uVar28 = 0;
          uVar22 = (int)CONCAT71((int7)((ulonglong)uVar31 >> 8),1);
        }
        else {
          uVar28 = uVar25 & 0xfffffffffffffffc;
          uVar45 = 0;
          do {
            pfVar1 = (float *)(pbVar34 + uVar45 * 4);
            fVar52 = *pfVar1 * fVar17 + fVar10;
            fVar56 = pfVar1[1] * fVar18 + fVar11;
            fVar57 = pfVar1[2] * fVar19 + fVar12;
            fVar58 = pfVar1[3] * fVar20 + fVar13;
            fVar59 = 0.0;
            if (0.0 <= fVar58) {
              fVar59 = fVar58;
            }
            fVar58 = fVar21;
            if (fVar59 <= fVar21) {
              fVar58 = fVar59;
            }
            fVar59 = 0.0;
            if (0.0 <= fVar52) {
              fVar59 = fVar52;
            }
            fVar52 = 0.0;
            if (0.0 <= fVar57) {
              fVar52 = fVar57;
            }
            fVar57 = fVar21;
            if (fVar52 <= fVar21) {
              fVar57 = fVar52;
            }
            fVar52 = fVar21;
            if (fVar59 <= fVar21) {
              fVar52 = fVar59;
            }
            fVar59 = 0.0;
            if (0.0 <= fVar56) {
              fVar59 = fVar56;
            }
            fVar56 = fVar21;
            if (fVar59 <= fVar21) {
              fVar56 = fVar59;
            }
            uVar8 = CONCAT24((short)(int)fVar56,(int)fVar52) & 0xff000000ff;
            uVar44 = (ushort)(int)fVar58 & 0xff;
            auVar9._12_2_ = uVar44;
            auVar9._0_12_ = ZEXT212(uVar44) << 0x40;
            pbVar3 = pbStack_e0 + uVar45 * 4;
            *(ulonglong *)pbVar3 =
                 CONCAT44((ushort)(uVar8 >> 0x20) * uVar4,
                          (int)(((ulonglong)uVar8 & 0xffffffff) * (ulonglong)uVar4));
            *(uint *)(pbVar3 + 8) = ((ushort)(int)fVar57 & 0xff) * uVar43;
            *(int *)(pbVar3 + 0xc) =
                 (int)(((ulonglong)auVar9._8_6_ & 0xffffffff) * (ulonglong)uVar43);
            uVar45 = uVar45 + 4;
          } while (uVar28 != uVar45);
          uVar42 = 1;
          uVar22 = 1;
          if (uVar25 == uVar28) goto LAB_1402ab540;
        }
        uVar42 = uVar22;
        uVar45 = uVar28 | 1;
        if ((uVar25 & 1) != 0) {
          fVar52 = *(float *)(pbVar34 + uVar28 * 4) * fVar21 + fVar14;
          fVar59 = 0.0;
          if (0.0 <= fVar52) {
            fVar59 = fVar52;
          }
          fVar52 = fVar21;
          if (fVar59 <= fVar21) {
            fVar52 = fVar59;
          }
          *(uint *)(pbStack_e0 + uVar28 * 4) = ((int)fVar52 & 0xffU) * 0x1010101;
          uVar28 = uVar45;
        }
        while (uVar25 != uVar45) {
          fVar52 = *(float *)(pbVar34 + uVar28 * 4) * fVar21 + fVar14;
          fVar59 = 0.0;
          if (0.0 <= fVar52) {
            fVar59 = fVar52;
          }
          fVar52 = fVar21;
          if (fVar59 <= fVar21) {
            fVar52 = fVar59;
          }
          *(uint *)(pbStack_e0 + uVar28 * 4) = ((int)fVar52 & 0xffU) * 0x1010101;
          fVar52 = *(float *)(pbVar34 + uVar28 * 4 + 4) * fVar21 + fVar14;
          fVar59 = 0.0;
          if (0.0 <= fVar52) {
            fVar59 = fVar52;
          }
          fVar52 = fVar21;
          if (fVar59 <= fVar21) {
            fVar52 = fVar59;
          }
          *(uint *)(pbStack_e0 + uVar28 * 4 + 4) = ((int)fVar52 & 0xffU) * 0x1010101;
          uVar45 = uVar28 + 2;
          uVar28 = uVar45;
        }
      }
    }
LAB_1402ab540:
    plStack_210 = plStack_108;
    plStack_e8 = (longlong *)CONCAT44(plStack_e8._4_4_,uVar42);
    uStack_c1 = (undefined1)uVar42;
    plStack_218 = plVar40;
    pbStack_f0 = pbStack_e0;
    uStack_d8 = uVar25;
    uStack_d0 = uVar25;
    uVar28 = pdb_1400af500(puStack_f8 + 0xe);
    lVar49 = puStack_f8[10];
    bVar39 = (byte)(uVar28 >> 0x38);
    bVar51 = bVar39 >> 1;
    auVar54 = ZEXT216(CONCAT11(bVar51,bVar51));
    auVar54 = pshuflw(auVar54,auVar54,0);
    lVar36 = 0;
    uVar25 = uVar28;
    while( true ) {
      uVar25 = uVar25 & puStack_f8[0xb];
      auVar64 = *(undefined1 (*) [16])(lVar49 + uVar25);
      auVar62[0] = -(auVar64[0] == auVar54[0]);
      auVar62[1] = -(auVar64[1] == auVar54[1]);
      auVar62[2] = -(auVar64[2] == auVar54[2]);
      auVar62[3] = -(auVar64[3] == auVar54[3]);
      auVar62[4] = -(auVar64[4] == auVar54[4]);
      auVar62[5] = -(auVar64[5] == auVar54[5]);
      auVar62[6] = -(auVar64[6] == auVar54[6]);
      auVar62[7] = -(auVar64[7] == auVar54[7]);
      auVar62[8] = -(auVar64[8] == auVar54[0]);
      auVar62[9] = -(auVar64[9] == auVar54[1]);
      auVar62[10] = -(auVar64[10] == auVar54[2]);
      auVar62[0xb] = -(auVar64[0xb] == auVar54[3]);
      auVar62[0xc] = -(auVar64[0xc] == auVar54[4]);
      auVar62[0xd] = -(auVar64[0xd] == auVar54[5]);
      auVar62[0xe] = -(auVar64[0xe] == auVar54[6]);
      auVar62[0xf] = -(auVar64[0xf] == auVar54[7]);
      uVar44 = (ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
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
               (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe | (ushort)(auVar62[0xf] >> 7) << 0xf;
      uVar32 = (uint)uVar44;
      uStack_c1 = SUB81(plStack_e8,0);
      while (uVar44 != 0) {
        uVar35 = 0;
        for (uVar7 = uVar32; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar35 = uVar35 + 1;
        }
        uVar45 = uVar35 + uVar25 & puStack_f8[0xb];
        if ((*(longlong **)(lVar49 + -0x18 + uVar45 * -0x18) == plVar40) &&
           (*(longlong **)(lVar49 + -0x10 + uVar45 * -0x18) == plStack_108)) {
          uStack_250 = 0;
          uStack_24c = 0;
          if (((ulonglong)plStack_1c8 & 1) != 0) {
            uStack_250 = (undefined4)lStack_1c0;
            uStack_24c = plStack_1b8._0_4_;
          }
          plStack_258 = (longlong *)(uVar47 << 2);
          uStack_248 = 0;
          uStack_23c = 1;
          uStack_234 = 0;
          uStack_d8 = uStack_d0;
          pbStack_e0 = pbStack_f0;
          pbStack_260 = pbVar33;
          iStack_244 = (int)uVar37;
          iStack_240 = (int)lVar24;
          pdb_140e660d0(&plStack_178,uStack_228,lVar49 + uVar45 * -0x18 + -8,&pbStack_260,1,0x23);
          if ((int)plStack_178 != 0xb) {
            uStack_1d8 = uStack_138;
            uStack_1d0 = uStack_130;
            uStack_1e8 = uStack_148;
            uStack_1e0 = uStack_140;
            lStack_1f8 = lStack_158;
            puStack_1f0 = (undefined8 *)uStack_150;
            puStack_208 = pplStack_168;
            lStack_200 = (longlong)plStack_160;
            plStack_218 = plStack_178;
            plStack_210 = plStack_170;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_142e667e0,0x2b,&plStack_218,&UNK_142e667c0,&UNK_142e66670);
          }
          goto LAB_1402ab8b8;
        }
        uVar44 = (ushort)(uVar32 - 1) & (ushort)uVar32;
        uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar44);
      }
      auVar60[0] = -(auVar64[0] == -1);
      auVar60[1] = -(auVar64[1] == -1);
      auVar60[2] = -(auVar64[2] == -1);
      auVar60[3] = -(auVar64[3] == -1);
      auVar60[4] = -(auVar64[4] == -1);
      auVar60[5] = -(auVar64[5] == -1);
      auVar60[6] = -(auVar64[6] == -1);
      auVar60[7] = -(auVar64[7] == -1);
      auVar60[8] = -(auVar64[8] == -1);
      auVar60[9] = -(auVar64[9] == -1);
      auVar60[10] = -(auVar64[10] == -1);
      auVar60[0xb] = -(auVar64[0xb] == -1);
      auVar60[0xc] = -(auVar64[0xc] == -1);
      auVar60[0xd] = -(auVar64[0xd] == -1);
      auVar60[0xe] = -(auVar64[0xe] == -1);
      auVar60[0xf] = -(auVar64[0xf] == -1);
      if ((((((((((((((((SUB161(auVar60 >> 7,0) & 1) != 0 || (SUB161(auVar60 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar60 >> 0x17,0) & 1) != 0) || (SUB161(auVar60 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar60 >> 0x27,0) & 1) != 0) || (SUB161(auVar60 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar60 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar60 >> 0x3f,0) & 1) != 0) || (SUB161(auVar60 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar60 >> 0x4f,0) & 1) != 0) || (SUB161(auVar60 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar60 >> 0x5f,0) & 1) != 0) || (SUB161(auVar60 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar60 >> 0x6f,0) & 1) != 0) || (SUB161(auVar60 >> 0x77,0) & 1) != 0) ||
          auVar60[0xf] < '\0') break;
      uVar25 = uVar25 + lVar36 + 0x10;
      lVar36 = lVar36 + 0x10;
    }
    if (puStack_f8[0xc] == 0) {
      uStack_d8 = uStack_d0;
      pbStack_e0 = pbStack_f0;
      pdb_142d804e0(puStack_f8 + 10,1,puStack_f8 + 0xe);
    }
    uStack_2b8 = (ulonglong)(uint)((int)lVar24 * (int)uVar37);
    uStack_c1 = SUB81(plStack_e8,0);
    uStack_2b0 = uVar47;
    if (uVar47 != uStack_2b8) {
      uStack_d8 = uStack_d0;
      pbStack_e0 = pbStack_f0;
      pdb_142dc7fb4(0,&uStack_2b0,&uStack_2b8,0);
      goto LAB_1402ac13a;
    }
    puVar29 = (ulonglong *)(pbStack_1a8 + 0x28);
    if (!SBORROW8(0,(longlong)puStack_1b0)) {
      puVar29 = &uStack_198;
    }
    pbVar34 = pbStack_1a8 + 0x30;
    if (!SBORROW8(0,(longlong)puStack_1b0)) {
      pbVar34 = (byte *)&lStack_190;
    }
    uVar25 = *puVar29 & 0xffffffff | *(longlong *)pbVar34 << 0x20;
    if ((uVar25 & 0xffff0000ffff0000) != 0) {
      uStack_d8 = uStack_d0;
      pbStack_e0 = pbStack_f0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_142e492a0,0x2b,&uStack_f9,&UNK_142e492d0,&UNK_142e495a8);
    }
    plStack_218 = (longlong *)((ulonglong)((uint)(uVar25 >> 0x10) | (uint)*puVar29) << 0x20);
    plStack_210 = (longlong *)0x12b010800010001;
    puStack_208 = (undefined8 *)CONCAT71(puStack_208._1_7_,2);
    uStack_d8 = uStack_d0;
    pbStack_e0 = pbStack_f0;
    pdb_1400a8900(&plStack_178,uStack_228,&UNK_142e666a0,0xc,&plStack_218,pbVar33,uVar47 << 2);
    if ((int)plStack_178 != 0xb) {
      uStack_1d8 = uStack_138;
      uStack_1d0 = uStack_130;
      uStack_1e8 = uStack_148;
      uStack_1e0 = uStack_140;
      lStack_1f8 = lStack_158;
      puStack_1f0 = (undefined8 *)uStack_150;
      puStack_208 = pplStack_168;
      lStack_200 = (longlong)plStack_160;
      plStack_218 = plStack_178;
      plStack_210 = plStack_170;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_142e667e0,0x2b,&plStack_218,&UNK_142e667c0,&UNK_142e666b0);
    }
    pauVar5 = (undefined1 (*) [16])puStack_f8[10];
    uVar25 = puStack_f8[0xb];
    uVar28 = uVar28 & uVar25;
    auVar54 = *(undefined1 (*) [16])(*pauVar5 + uVar28);
    uVar44 = (ushort)(SUB161(auVar54 >> 7,0) & 1) | (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
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
             (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar54[0xf] >> 7) << 0xf;
    uVar32 = (uint)uVar44;
    if (uVar44 == 0) {
      lVar24 = 0x10;
      do {
        uVar28 = uVar28 + lVar24 & uVar25;
        auVar54 = *(undefined1 (*) [16])(*pauVar5 + uVar28);
        lVar24 = lVar24 + 0x10;
        uVar32 = (uint)(ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
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
                                (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar54[0xf] >> 7) << 0xf);
      } while (uVar32 == 0);
    }
    uVar35 = 0;
    for (; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
      uVar35 = uVar35 + 1;
    }
    uVar37 = uVar35 + uVar28 & uVar25;
    bVar51 = (*pauVar5)[uVar37];
    if (-1 < (char)bVar51) {
      auVar54 = *pauVar5;
      uVar32 = 0;
      for (uVar35 = (uint)(ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar54[0xf] >> 7) << 0xf); (uVar35 & 1) == 0;
          uVar35 = uVar35 >> 1 | 0x80000000) {
        uVar32 = uVar32 + 1;
      }
      uVar37 = (ulonglong)uVar32;
      bVar51 = (*pauVar5)[uVar37];
    }
    bVar39 = bVar39 >> 1;
    (*pauVar5)[uVar37] = bVar39;
    pauVar5[1][uVar37 - 0x10 & uVar25] = bVar39;
    *(longlong **)((longlong)pauVar5 + uVar37 * -0x18 + -0x18) = plVar40;
    *(longlong **)((longlong)pauVar5 + uVar37 * -0x18 + -0x10) = plStack_108;
    *(longlong **)((longlong)pauVar5 + uVar37 * -0x18 + -8) = plStack_170;
    auVar54._8_4_ = uVar15;
    auVar54._0_8_ = (ulonglong)bVar51 & 0xffffffffffffff01;
    auVar54._12_4_ = uVar16;
    puStack_f8[0xc] = puStack_f8[0xc] - ((ulonglong)bVar51 & 0xffffffffffffff01);
    puStack_f8[0xd] = puStack_f8[0xd] - auVar54._8_8_;
LAB_1402ab8b8:
    lVar24 = lStack_110;
    if (((byte)plStack_e8 & uStack_d0 != 0) != 0) {
      pub_1406abac0(pbStack_f0,uStack_d0 * 4,1);
      lVar24 = lStack_120;
    }
    if (lVar24 != 0) {
      plVar46 = (longlong *)pdb_140e97000();
      if (((char)plVar46[0xd] != '\x01') &&
         (plVar46 = (longlong *)pdb_142d7de90(plVar46,0), plVar46 == (longlong *)0x0)) {
        pdb_142dc7890(&UNK_142f3dc40);
        goto LAB_1402ac13a;
      }
      if (*plVar46 != 0) {
        pdb_142dc8090(&UNK_142f3dcc8);
        goto LAB_1402ac13a;
      }
      *plVar46 = -1;
      plStack_108 = plVar46;
      pdb_140e95370(plVar46 + 1,uStack_118);
      *plStack_108 = *plStack_108 + 1;
    }
    puVar38 = puStack_1b0;
    if (SBORROW8(0,(longlong)puStack_1b0)) {
      LOCK();
      *(longlong *)pbStack_1a8 = *(longlong *)pbStack_1a8 + -1;
      UNLOCK();
      if (*(longlong *)pbStack_1a8 == 0) {
        pdb_140d7db80(&pbStack_1a8);
      }
    }
    else if (puStack_1b0 != (undefined8 *)0x0) {
      puVar38 = (undefined8 *)((longlong)puStack_1b0 << 2);
      pub_1406abac0(pbStack_1a8,(ulonglong)puVar38,4);
    }
  }
  pdb_14049be10(&plStack_288);
  lVar24 = lStack_290;
  uVar4 = *(uint *)(lStack_290 + 8);
  plVar46 = (longlong *)pdb_140f3bda0();
  if ((char)plVar46[2] == '\x01') {
    lStack_1f8 = *plVar46;
    puVar38 = (undefined8 *)plVar46[1];
  }
  else {
    lStack_1f8 = pdb_140f4fd10();
    *plVar46 = lStack_1f8;
    plVar46[1] = (longlong)puVar38;
    *(undefined1 *)(plVar46 + 2) = 1;
  }
  lVar49 = lStack_298;
  *plVar46 = lStack_1f8 + 1;
  puStack_208 = (undefined8 *)_DAT_142e66750;
  lStack_200 = _UNK_142e66758;
  plStack_218 = _DAT_142e66740;
  plStack_210 = _UNK_142e66748;
  puStack_1f0 = puVar38;
  if (*(longlong *)(lStack_220 + 0x88) != 0) {
    lVar36 = *(longlong *)(lStack_220 + 0x70);
    uVar25 = 0xe21867f64d00de2d;
    lVar41 = 0;
    while( true ) {
      uVar25 = uVar25 & *(ulonglong *)(lStack_220 + 0x78);
      auVar54 = *(undefined1 (*) [16])(lVar36 + uVar25);
      auVar64[0] = -(auVar54[0] == DAT_142e344d0);
      auVar64[1] = -(auVar54[1] == DAT_142e344d0._1_1_);
      auVar64[2] = -(auVar54[2] == DAT_142e344d0._2_1_);
      auVar64[3] = -(auVar54[3] == DAT_142e344d0._3_1_);
      auVar64[4] = -(auVar54[4] == DAT_142e344d0._4_1_);
      auVar64[5] = -(auVar54[5] == DAT_142e344d0._5_1_);
      auVar64[6] = -(auVar54[6] == DAT_142e344d0._6_1_);
      auVar64[7] = -(auVar54[7] == DAT_142e344d0._7_1_);
      auVar64[8] = -(auVar54[8] == DAT_142e344d0._8_1_);
      auVar64[9] = -(auVar54[9] == DAT_142e344d0._9_1_);
      auVar64[10] = -(auVar54[10] == DAT_142e344d0._10_1_);
      auVar64[0xb] = -(auVar54[0xb] == DAT_142e344d0._11_1_);
      auVar64[0xc] = -(auVar54[0xc] == DAT_142e344d0._12_1_);
      auVar64[0xd] = -(auVar54[0xd] == DAT_142e344d0._13_1_);
      auVar64[0xe] = -(auVar54[0xe] == DAT_142e344d0._14_1_);
      auVar64[0xf] = -(auVar54[0xf] == DAT_142e344d0._15_1_);
      uVar44 = (ushort)(SUB161(auVar64 >> 7,0) & 1) | (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe | (ushort)(auVar64[0xf] >> 7) << 0xf;
      uVar43 = (uint)uVar44;
      while (uVar44 != 0) {
        uVar32 = 0;
        for (uVar35 = uVar43; (uVar35 & 1) == 0; uVar35 = uVar35 >> 1 | 0x80000000) {
          uVar32 = uVar32 + 1;
        }
        uVar37 = uVar32 + uVar25 & *(ulonglong *)(lStack_220 + 0x78);
        pcVar2 = (char *)(lVar36 + -0x18 + uVar37 * -0x18);
        auVar65[0] = -(*pcVar2 == DAT_142e344e0);
        auVar65[1] = -(pcVar2[1] == DAT_142e344e0._1_1_);
        auVar65[2] = -(pcVar2[2] == DAT_142e344e0._2_1_);
        auVar65[3] = -(pcVar2[3] == DAT_142e344e0._3_1_);
        auVar65[4] = -(pcVar2[4] == DAT_142e344e0._4_1_);
        auVar65[5] = -(pcVar2[5] == DAT_142e344e0._5_1_);
        auVar65[6] = -(pcVar2[6] == DAT_142e344e0._6_1_);
        auVar65[7] = -(pcVar2[7] == DAT_142e344e0._7_1_);
        auVar65[8] = -(pcVar2[8] == DAT_142e344e0._8_1_);
        auVar65[9] = -(pcVar2[9] == DAT_142e344e0._9_1_);
        auVar65[10] = -(pcVar2[10] == DAT_142e344e0._10_1_);
        auVar65[0xb] = -(pcVar2[0xb] == DAT_142e344e0._11_1_);
        auVar65[0xc] = -(pcVar2[0xc] == DAT_142e344e0._12_1_);
        auVar65[0xd] = -(pcVar2[0xd] == DAT_142e344e0._13_1_);
        auVar65[0xe] = -(pcVar2[0xe] == DAT_142e344e0._14_1_);
        auVar65[0xf] = -(pcVar2[0xf] == DAT_142e344e0._15_1_);
        if ((ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar65[0xf] >> 7) << 0xf) == 0xffff) {
          uVar25 = *(ulonglong *)(lVar36 + uVar37 * -0x18 + -8);
          if ((uVar25 < *(ulonglong *)(lStack_220 + 0x210)) &&
             (uVar25 = *(ulonglong *)(*(longlong *)(lStack_220 + 0x208) + uVar25 * 8), uVar25 != 0))
          {
            lVar36 = ~uVar25 * 0x40;
            if (*(longlong *)(*(longlong *)(lStack_220 + 0x1d8) + 0x20 + lVar36) != 0) {
              uVar31 = *(undefined8 *)(*(longlong *)(lStack_220 + 0x1d8) + lVar36 + 0x10);
              uVar30 = pdb_1406d0830(uVar31);
              uVar53 = pdb_1400acac0(uVar30);
              uVar30 = pdb_1406d0830(uVar31);
              pplStack_168 = (longlong **)puStack_f8[2];
              plStack_178 = (longlong *)*puStack_f8;
              plStack_170 = (longlong *)puStack_f8[1];
              *puStack_f8 = 0;
              puStack_f8[1] = 8;
              puStack_f8[2] = 0;
              pdb_140d537d0(&pbStack_260,uVar30,&plStack_178,uVar53);
              plStack_170 = plStack_258 + CONCAT44(uStack_24c,uStack_250) * 10;
              plStack_178 = plStack_258;
              pplStack_168 = &plStack_218;
              plStack_160 = puStack_f8 + 10;
              lStack_158 = lVar49;
              pdb_14017e830(&plStack_318,&plStack_178);
              uStack_c2 = 1;
              uVar31 = pdb_1406d0830(uVar31);
              uStack_c2 = 1;
              auVar55._0_4_ = pdb_1400acac0(uVar31);
              auVar61._0_4_ = (float)(uVar4 & 0xffff);
              auVar61._4_4_ = (float)(uVar4 >> 0x10);
              auVar61._8_8_ = 0;
              auVar55._4_4_ = auVar55._0_4_;
              auVar55._8_4_ = extraout_XMM0_Dc;
              auVar55._12_4_ = extraout_XMM0_Dc;
              auVar54 = divps(auVar61,auVar55);
              lStack_120 = auVar54._0_8_;
              plStack_1c8 = (longlong *)((ulonglong)plStack_1c8 & 0xffffffff00000000);
              lStack_1c0 = lVar24;
              pplStack_168 = (longlong **)plStack_308;
              plStack_178 = plStack_318;
              plStack_170 = (longlong *)lStack_310;
              plStack_160 = &lStack_120;
              uStack_c2 = 0;
              pdb_1405d46c0(lVar49,&UNK_142e66710,4,&plStack_1c8,&plStack_178);
              pplStack_168 = (longlong **)(puStack_f8 + 6);
              plStack_160 = (longlong *)puStack_f8[8];
              puStack_f8[8] = 0;
              plVar40 = (longlong *)puStack_f8[7] + (longlong)plStack_160 * 2;
              lStack_158 = 0;
              plVar46 = (longlong *)puStack_f8[7];
              plStack_170 = plVar40;
              while( true ) {
                if (plVar46 == plVar40) {
                  pdb_1404cd390(&pbStack_260);
                  if (plStack_210 != (longlong *)0x0) {
                    uVar25 = (longlong)plStack_210 * 0x28 + 0x37U & 0xfffffffffffffff0;
                    uVar37 = (longlong)plStack_210 + uVar25 + 0x11;
                    if (uVar37 != 0) {
                      pub_1406abac0((byte *)((longlong)plStack_218 - uVar25),uVar37,0x10);
                    }
                  }
                  return;
                }
                plStack_288 = (longlong *)*plVar46;
                plStack_280 = (longlong *)plVar46[1];
                plStack_178 = plVar46 + 2;
                uVar31 = pdb_1400af500(puStack_2a8,&plStack_288);
                pdb_140269880(&plStack_1c8,puStack_2a0,uVar31,&plStack_288);
                if ((int)plStack_1c8 == 2) break;
                plStack_1c8 = plStack_1b8;
                pdb_1404bb6e0(&plStack_1c8);
                plVar46 = plVar46 + 2;
              }
              pdb_142dc8110(&UNK_142e666c8,0x11,&UNK_142e666e0);
              goto LAB_1402ac13a;
            }
          }
          goto LAB_1402abe6c;
        }
        uVar44 = (ushort)(uVar43 - 1) & (ushort)uVar43;
        uVar43 = CONCAT22((short)(uVar43 - 1 >> 0x10),uVar44);
      }
      auVar63[0] = -(auVar54[0] == -1);
      auVar63[1] = -(auVar54[1] == -1);
      auVar63[2] = -(auVar54[2] == -1);
      auVar63[3] = -(auVar54[3] == -1);
      auVar63[4] = -(auVar54[4] == -1);
      auVar63[5] = -(auVar54[5] == -1);
      auVar63[6] = -(auVar54[6] == -1);
      auVar63[7] = -(auVar54[7] == -1);
      auVar63[8] = -(auVar54[8] == -1);
      auVar63[9] = -(auVar54[9] == -1);
      auVar63[10] = -(auVar54[10] == -1);
      auVar63[0xb] = -(auVar54[0xb] == -1);
      auVar63[0xc] = -(auVar54[0xc] == -1);
      auVar63[0xd] = -(auVar54[0xd] == -1);
      auVar63[0xe] = -(auVar54[0xe] == -1);
      auVar63[0xf] = -(auVar54[0xf] == -1);
      if ((((((((((((((((SUB161(auVar63 >> 7,0) & 1) != 0 || (SUB161(auVar63 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar63 >> 0x17,0) & 1) != 0) || (SUB161(auVar63 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar63 >> 0x27,0) & 1) != 0) || (SUB161(auVar63 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar63 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar63 >> 0x3f,0) & 1) != 0) || (SUB161(auVar63 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar63 >> 0x4f,0) & 1) != 0) || (SUB161(auVar63 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar63 >> 0x5f,0) & 1) != 0) || (SUB161(auVar63 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar63 >> 0x6f,0) & 1) != 0) || (SUB161(auVar63 >> 0x77,0) & 1) != 0) ||
          auVar63[0xf] < '\0') break;
      uVar25 = uVar25 + lVar41 + 0x10;
      lVar41 = lVar41 + 0x10;
    }
  }
LAB_1402abe6c:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142e666f8);
}

