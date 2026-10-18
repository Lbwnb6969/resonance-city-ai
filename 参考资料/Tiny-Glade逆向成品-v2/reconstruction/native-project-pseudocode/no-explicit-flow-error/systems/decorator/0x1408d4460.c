// VA 0x1408d4460, PDB extent 15258 bytes
// system_decorator::decorator_visual::flag::generate_flags
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/flag.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::decorator_visual::flag::generate_flags
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/flag.rs
   Extent: 15258 */

void pdb_1408d4460(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  float *pfVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined4 *puVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  byte *pbVar22;
  char *pcVar23;
  undefined8 uVar24;
  uint uVar25;
  longlong lVar26;
  longlong *plVar27;
  undefined1 (*pauVar28) [16];
  longlong *plVar29;
  ulonglong uVar30;
  undefined1 (*pauVar31) [16];
  longlong *plVar32;
  undefined4 *puVar33;
  undefined *puVar34;
  ushort uVar35;
  longlong **pplVar36;
  longlong lVar37;
  longlong *plVar38;
  undefined *puVar39;
  longlong lVar40;
  bool bVar41;
  byte bVar42;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar43;
  undefined4 uVar44;
  float fVar46;
  float fVar47;
  undefined1 auVar45 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  float fVar59;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar70;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  ulonglong in_stack_fffffffffffffc00;
  undefined8 uStack_3e8;
  longlong *plStack_3e0;
  longlong lStack_3d8;
  longlong lStack_3d0;
  longlong lStack_3c8;
  longlong lStack_3c0;
  longlong lStack_3b8;
  ulonglong uStack_3b0;
  longlong lStack_3a0;
  ulonglong uStack_398;
  undefined1 (*pauStack_390) [16];
  longlong lStack_388;
  longlong lStack_380;
  longlong lStack_378;
  undefined8 uStack_370;
  uint uStack_368;
  undefined4 uStack_364;
  longlong *plStack_360;
  ulonglong uStack_358;
  longlong *plStack_350;
  longlong lStack_348;
  longlong lStack_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  longlong *plStack_328;
  longlong lStack_320;
  longlong *plStack_318;
  undefined1 (*pauStack_310) [16];
  undefined4 *puStack_308;
  byte *pbStack_300;
  longlong lStack_2f8;
  undefined8 uStack_2f0;
  undefined4 *puStack_2e8;
  longlong **pplStack_2e0;
  byte bStack_2d8;
  char cStack_2d7;
  ushort uStack_2d6;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  uint uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  ulonglong uStack_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  longlong *plStack_250;
  ulonglong uStack_248;
  undefined4 *puStack_240;
  byte bStack_238;
  ushort uStack_237;
  undefined4 uStack_235;
  undefined4 uStack_231;
  uint uStack_22d;
  undefined1 uStack_229;
  longlong **pplStack_228;
  undefined8 uStack_220;
  ulonglong uStack_218;
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
  undefined8 uStack_1a0;
  longlong lStack_198;
  undefined1 (*pauStack_190) [16];
  ulonglong uStack_188;
  undefined1 (*pauStack_180) [16];
  undefined4 *puStack_178;
  ulonglong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  longlong lStack_150;
  longlong lStack_148;
  ulonglong uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  longlong lStack_130;
  longlong *plStack_128;
  byte bStack_120;
  char cStack_11f;
  ushort uStack_11e;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined3 uStack_114;
  longlong *plStack_110;
  undefined1 uStack_103;
  byte bStack_102;
  byte bStack_101;
  longlong *plStack_100;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  byte bStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  plVar17 = param_2;
  cVar11 = pdb_140e94b40();
  plVar32 = param_1;
  if (cVar11 == '\0') {
    lStack_348 = 0;
    if (*_DAT_143ca4500 != '\0') {
      return;
    }
LAB_1408d4760:
    uStack_3e8 = pdb_140c47770(param_4);
    lStack_388 = *plVar32;
    plStack_3e0 = plVar17;
    uStack_1a0 = uStack_3e8;
    plStack_128 = plVar17;
    pdb_140c41140(&bStack_238);
    bStack_101 = bStack_238;
    puStack_178 = (undefined4 *)CONCAT17(uStack_229,CONCAT43(uStack_22d,uStack_231._1_3_));
    uStack_170 = uStack_218;
    plStack_250 = (longlong *)*param_5;
    lStack_380 = *param_3;
    uStack_138 = *(undefined4 *)((longlong)param_6 + 0x1c);
    uStack_2f0 = *param_6;
    puStack_2e8 = (undefined4 *)param_6[2];
    lStack_378 = *param_2;
    uStack_370 = *param_7;
    uStack_358 = uStack_200 & 0xffff;
    lStack_320 = CONCAT44(uStack_1f4,uStack_1f8);
    plStack_318 = plStack_128 + 4;
    plStack_350 = plStack_128 + 10;
    pauStack_310 = pauStack_210;
    puVar33 = uStack_220;
    pplVar36 = pplStack_228;
    puVar20 = puStack_308;
    puVar10 = uStack_220;
    if (pplStack_228 == (longlong **)0x2) goto LAB_1408d49c1;
LAB_1408d487d:
    puVar20 = puStack_308;
    puVar10 = puStack_178;
    if (uStack_170 != 0) {
      if (lStack_320 == 0) {
        lStack_320 = 0;
        puVar10 = puStack_178;
      }
      else {
        uVar15 = uStack_358;
        if ((short)uStack_358 == 0) {
          do {
            auVar45 = *pauStack_310;
            uStack_170 = uStack_170 - 0x980;
            pauStack_310 = pauStack_310 + 1;
            uVar12 = (ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
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
            uVar15 = (ulonglong)uVar12;
          } while (uVar12 == 0);
        }
        uVar12 = 0;
        uVar25 = (uint)uVar15;
        for (uVar13 = uVar25; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        pplStack_2e0 = pplVar36;
        lVar14 = pdb_140c44590(uStack_170 + (ulonglong)uVar12 * -0x98 + -0x98);
        uStack_358 = (ulonglong)(uVar25 - 1 & uVar25);
        lStack_320 = lStack_320 + -1;
        puVar20 = puStack_308;
        puVar10 = puStack_178;
        pplVar36 = pplStack_2e0;
        if (lVar14 != 3) {
          puStack_308 = puStack_178;
          puStack_178 = (undefined4 *)(uStack_170 + (ulonglong)uVar12 * -0x98 + -0x90);
          uStack_248 = uVar15;
          puStack_240 = puVar33;
          goto LAB_1408d49f6;
        }
      }
    }
    puStack_308 = puVar10;
    puStack_178 = puStack_308;
    if (pplVar36 != (longlong **)0x1) {
      uStack_170 = 0;
      puVar10 = puVar33;
      goto LAB_1408d49c1;
    }
    uStack_170 = 0;
    puStack_240 = (undefined4 *)0x0;
    puVar10 = puStack_240;
    if (puVar33 == (undefined4 *)0x0) goto LAB_1408d49c1;
    pplStack_2e0 = (longlong **)0x1;
    uStack_170 = 0;
    puStack_240 = (undefined4 *)0x0;
    lVar14 = 1;
    puStack_178 = puVar33;
LAB_1408d49f6:
    do {
      uStack_398 = uStack_248;
      lStack_3a0 = lVar14;
      lStack_2f8 = lVar14;
      pdb_140c3ba10(&bStack_238,puStack_178);
      uVar12 = (uint)(ushort)uStack_220;
      pauStack_390 = pauStack_210 + 5;
      pauVar28 = (undefined1 (*) [16])CONCAT17(uStack_229,CONCAT43(uStack_22d,uStack_231._1_3_));
      lVar14 = CONCAT17((undefined1)uStack_231,CONCAT43(uStack_235,CONCAT21(uStack_237,bStack_238)))
      ;
      uVar15 = uStack_218;
      pauVar31 = pauStack_210;
LAB_1408d4a4f:
      if (uVar15 != 0) {
        if ((short)uVar12 == 0) {
          do {
            auVar45 = *pauVar28;
            lVar14 = lVar14 + -0x40;
            pauVar28 = pauVar28 + 1;
            uVar12 = (ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
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
          } while (uVar12 == 0);
        }
        iVar6 = 0;
        for (uVar13 = uVar12; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          iVar6 = iVar6 + 1;
        }
        uVar44 = *(undefined4 *)((lVar14 - (ulonglong)(uint)(iVar6 << 2)) + -4);
        plStack_100 = (longlong *)CONCAT44(plStack_100._4_4_,uVar44);
        bStack_238 = (byte)uVar44;
        uStack_237 = (ushort)((uint)uVar44 >> 8);
        uStack_235._0_1_ = (undefined1)((uint)uVar44 >> 0x18);
        if (*(longlong *)(pauVar31[4] + 8) != 0) {
          uVar12 = uVar12 - 1 & uVar12;
          uVar15 = uVar15 - 1;
          uVar18 = pdb_1400aede0(pauStack_390,&bStack_238);
          lVar40 = *(longlong *)pauVar31[3];
          bVar42 = (byte)(uVar18 >> 0x39);
          auVar45 = ZEXT216(CONCAT11(bVar42,bVar42));
          auVar45 = pshuflw(auVar45,auVar45,0);
          lVar26 = 0;
          while( true ) {
            uVar18 = uVar18 & *(ulonglong *)(pauVar31[3] + 8);
            auVar62 = *(undefined1 (*) [16])(lVar40 + uVar18);
            auVar60[0] = -(auVar62[0] == auVar45[0]);
            auVar60[1] = -(auVar62[1] == auVar45[1]);
            auVar60[2] = -(auVar62[2] == auVar45[2]);
            auVar60[3] = -(auVar62[3] == auVar45[3]);
            auVar60[4] = -(auVar62[4] == auVar45[4]);
            auVar60[5] = -(auVar62[5] == auVar45[5]);
            auVar60[6] = -(auVar62[6] == auVar45[6]);
            auVar60[7] = -(auVar62[7] == auVar45[7]);
            auVar60[8] = -(auVar62[8] == auVar45[0]);
            auVar60[9] = -(auVar62[9] == auVar45[1]);
            auVar60[10] = -(auVar62[10] == auVar45[2]);
            auVar60[0xb] = -(auVar62[0xb] == auVar45[3]);
            auVar60[0xc] = -(auVar62[0xc] == auVar45[4]);
            auVar60[0xd] = -(auVar62[0xd] == auVar45[5]);
            auVar60[0xe] = -(auVar62[0xe] == auVar45[6]);
            auVar60[0xf] = -(auVar62[0xf] == auVar45[7]);
            uVar35 = (ushort)(SUB161(auVar60 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                     (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar60[0xf] >> 7) << 0xf;
            uVar13 = (uint)uVar35;
            while (uVar35 != 0) {
              uVar25 = 0;
              for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar25 = uVar25 + 1;
              }
              lVar37 = (uVar25 + uVar18 & *(ulonglong *)(pauVar31[3] + 8)) * -0x68;
              if ((int)plStack_100 == *(int *)(lVar40 + -0x68 + lVar37)) {
                lStack_130 = lVar40 + lVar37;
                if (*(int *)(lStack_130 + -0x60) != 5) goto LAB_1408d4a4f;
                lStack_198 = lVar14;
                pauStack_190 = pauVar28;
                uStack_188 = uVar15;
                pauStack_180 = pauVar31;
                pdb_140c45ec0(&uStack_168,plStack_250,(ulonglong)plStack_100 & 0xffffffff,
                              &UNK_1430195e0);
                bStack_102 = pdb_140c45920(&uStack_3e8,(ulonglong)plStack_100 & 0xffffffff);
                uStack_f1 = *(undefined1 *)(lStack_130 + -8);
                uStack_134 = *(undefined4 *)(lStack_130 + -0x10);
                bStack_f3 = bStack_102;
                if (*(char *)(lStack_130 + -0x2e) != '\x04') goto LAB_1408d4d9c;
                uVar25 = *(uint *)(lStack_130 + -0x50);
                pauVar28 = (undefined1 (*) [16])(ulonglong)uVar25;
                uVar7 = *(uint *)(lStack_130 + -0x4c);
                uVar15 = (ulonglong)uVar7;
                uVar13 = *(uint *)(lStack_130 + -0x44);
                lVar14 = *(longlong *)(lStack_380 + 8);
                lVar40 = *(longlong *)(lStack_380 + 0x10);
                lVar26 = pdb_140c40010(lStack_388,pauVar28);
                if ((lVar26 == 0) || (lVar26 = pdb_1409014e0(lVar26 + 0x38), lVar26 == 0))
                goto LAB_1408d4d9c;
                uStack_103 = *(undefined1 *)(lVar26 + 0x16);
                cVar11 = pdb_1408ff980(&uStack_103);
                if (cVar11 == '\0') goto LAB_1408d4d9c;
                lVar26 = 0;
                goto LAB_1408d4c70;
              }
              uVar35 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar35);
            }
            auVar52[0] = -(auVar62[0] == -1);
            auVar52[1] = -(auVar62[1] == -1);
            auVar52[2] = -(auVar62[2] == -1);
            auVar52[3] = -(auVar62[3] == -1);
            auVar52[4] = -(auVar62[4] == -1);
            auVar52[5] = -(auVar62[5] == -1);
            auVar52[6] = -(auVar62[6] == -1);
            auVar52[7] = -(auVar62[7] == -1);
            auVar52[8] = -(auVar62[8] == -1);
            auVar52[9] = -(auVar62[9] == -1);
            auVar52[10] = -(auVar62[10] == -1);
            auVar52[0xb] = -(auVar62[0xb] == -1);
            auVar52[0xc] = -(auVar62[0xc] == -1);
            auVar52[0xd] = -(auVar62[0xd] == -1);
            auVar52[0xe] = -(auVar62[0xe] == -1);
            auVar52[0xf] = -(auVar62[0xf] == -1);
            if ((((((((((((((((SUB161(auVar52 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar52 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar52 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar52 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar52 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar52 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar52 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar52 >> 0x3f,0) & 1) != 0) || (SUB161(auVar52 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar52 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar52 >> 0x57,0) & 1) != 0) || (SUB161(auVar52 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar52 >> 0x67,0) & 1) != 0) || (SUB161(auVar52 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar52 >> 0x77,0) & 1) != 0) || auVar52[0xf] < '\0') break;
            uVar18 = uVar18 + lVar26 + 0x10;
            lVar26 = lVar26 + 0x10;
          }
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1430194b8);
      }
      puStack_178 = puStack_308;
      puVar33 = puStack_240;
      pplVar36 = pplStack_2e0;
      puVar20 = puStack_308;
      puVar10 = puStack_240;
      if (pplStack_2e0 != (longlong **)0x2) goto LAB_1408d487d;
LAB_1408d49c1:
      puStack_240 = puVar10;
      puStack_308 = puVar20;
      if ((puStack_178 != (undefined4 *)0x0 & bStack_101) != 1) {
        if (lStack_348 == 0) {
          return;
        }
        bStack_2d8 = (byte)&lStack_340;
        cStack_2d7 = (char)((ulonglong)&lStack_340 >> 8);
        uStack_2d6 = (ushort)((ulonglong)&lStack_340 >> 0x10);
        uStack_2d4 = (undefined4)((ulonglong)&lStack_340 >> 0x20);
        bStack_238 = (byte)&bStack_2d8;
        uStack_237 = (ushort)((ulonglong)&bStack_2d8 >> 8);
        uStack_235 = (undefined4)((ulonglong)&bStack_2d8 >> 0x18);
        uStack_231._0_1_ = (undefined1)((ulonglong)&bStack_2d8 >> 0x38);
        pdb_14149aed0(&UNK_143019990,&bStack_238);
        return;
      }
      pplStack_2e0 = (longlong **)0x2;
      puStack_308 = (undefined4 *)0x0;
      lVar14 = 2;
    } while( true );
  }
  lVar40 = 0x38;
  lVar14 = pdb_1408d8000(0x38);
  plVar38 = (longlong *)&UNK_143019950;
  if (lVar14 == 1) {
    if ((longlong *)0x38 < plVar17) {
      pdb_142dc8070(&UNK_143019950,0x38,0,plVar17,&UNK_143019a10);
LAB_1408d7527:
      pdb_142dc8070(&UNK_143019950,0x38);
LAB_1408d754b:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2();
    }
    uVar15 = pdb_1408d8000(plVar17);
    if ((uVar15 & 1) != 0) {
      if ((undefined *)0x38 < (undefined *)((longlong)plVar17 + 2)) goto LAB_1408d7527;
      lVar40 = 0x36 - (longlong)plVar17;
      plVar38 = (longlong *)((longlong)plVar17 + 0x143019952);
    }
  }
  puVar34 = &UNK_1430195db;
  puVar39 = &UNK_1430195a6;
  do {
    bVar42 = puVar34[-1];
    uVar12 = (uint)(char)bVar42;
    plStack_100 = param_4;
    if ((char)bVar42 < '\0') {
      bVar2 = puVar34[-2];
      if ((char)bVar2 < -0x40) {
        bVar3 = puVar34[-3];
        if ((char)bVar3 < -0x40) {
          pbVar22 = puVar34 + -4;
          puVar34 = puVar34 + -4;
          uVar12 = bVar3 & 0x3f | (*pbVar22 & 7) << 6;
        }
        else {
          puVar34 = puVar34 + -3;
          uVar12 = bVar3 & 0xf;
        }
        uVar12 = bVar2 & 0x3f | uVar12 << 6;
      }
      else {
        puVar34 = puVar34 + -2;
        uVar12 = bVar2 & 0x1f;
      }
      uVar12 = (uint)(bVar42 & 0x3f) | uVar12 << 6;
      if (uVar12 != 0x5c) goto LAB_1408d45d4;
LAB_1408d460b:
      puVar39 = puVar34 + -0x1430195a5;
      if ((undefined *)0x35 < puVar39) {
        pdb_142dc8070(&UNK_1430195a6,0x35,puVar39,0x35,&UNK_1430199f0);
LAB_1408d74d4:
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14301ce21,0x17,&UNK_14301ce30);
      }
      plVar29 = (longlong *)(0x35 - (longlong)puVar39);
      puVar39 = puVar34 + 1;
      goto LAB_1408d4636;
    }
    puVar34 = puVar34 + -1;
    if (uVar12 == 0x5c) goto LAB_1408d460b;
LAB_1408d45d4:
    if (uVar12 == 0x2f) goto LAB_1408d460b;
  } while (puVar34 != &UNK_1430195a6);
  plVar29 = (longlong *)0x35;
LAB_1408d4636:
  plVar16 = (longlong *)pdb_140e97000();
  plVar27 = param_2;
  if ((char)plVar16[0xd] != '\x01') goto LAB_1408d73c0;
  do {
    param_2 = plVar27;
    param_1 = plVar32;
    if (*plVar16 == 0) {
      *plVar16 = -1;
      in_stack_fffffffffffffc00 = 0;
      plVar17 = plVar38;
      plStack_250 = plVar16;
      lVar40 = pdb_140e94f10(plVar16 + 1,plVar38,lVar40,puVar39,plVar29,1,0);
      param_1 = plStack_100;
      *plStack_250 = *plStack_250 + 1;
      lStack_348 = 1;
      param_4 = plStack_100;
      lStack_340 = lVar40;
      if (*_DAT_143ca4500 == '\0') goto LAB_1408d4760;
      plVar17 = (longlong *)pdb_140e97000();
      if (((char)plVar17[0xd] != '\x01') &&
         (plVar17 = (longlong *)pdb_142dde6e0(plVar17,0), plVar17 == (longlong *)0x0)) break;
      param_2 = param_3;
      plVar29 = plVar27;
      param_3 = plVar32;
      if (*plVar17 == 0) {
        *plVar17 = -1;
        plStack_100 = plVar17;
        pdb_140e95370(plVar17 + 1,lVar40);
        *plStack_100 = *plStack_100 + 1;
        return;
      }
    }
    plVar16 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_1408d73c0:
    plVar16 = (longlong *)pdb_142dde6e0(plVar16,0);
    plVar27 = param_2;
    plVar32 = param_1;
  } while (plVar16 != (longlong *)0x0);
  pdb_142dc7890(&UNK_14330e598);
LAB_1408d73f5:
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14301ce21,0x17,&UNK_14301ce30);
  while ((lVar26 = lVar37 + 0x150, *(uint *)(lVar14 + 0x128 + lVar37) != uVar25 ||
         (*(uint *)(lVar14 + 300 + lVar37) != uVar7))) {
LAB_1408d4c70:
    lVar37 = lVar26;
    if (lVar40 * 0x150 - lVar37 == 0) goto LAB_1408d4d9c;
  }
  pdb_14148b9a0(lVar37,&UNK_143019848);
  auVar45 = ZEXT416(uVar13);
  uStack_368 = pdb_14148c300(lVar14 + lVar26 + -0x150);
  plStack_360 = (longlong *)0x0;
  uVar18 = *(ulonglong *)(lVar14 + -0x10 + lVar26);
  if (uVar18 < 2) {
    lVar40 = lVar14 + lVar26 + -0x20;
  }
  else {
    lVar40 = *(longlong *)(lVar14 + -0x20 + lVar26);
    uVar18 = *(ulonglong *)(lVar14 + -0x18 + lVar26);
  }
  uStack_364 = extraout_XMM0_Da;
  if (uVar18 != 0) {
    plVar17 = (longlong *)(ulonglong)uStack_368;
    pauVar28 = (undefined1 (*) [16])0x0;
    do {
      plStack_328 = (longlong *)
                    ((longlong)plStack_360 + (ulonglong)*(ushort *)(*pauVar28 + lVar40 + 2));
      if (plVar17 < plStack_328) {
        if ((*pauVar28)[lVar40] == '\x05') {
          plVar32 = *(longlong **)(lVar14 + -0xf0 + lVar26);
          plVar38 = plStack_328;
          if ((plStack_328 < plVar32) &&
             (plVar38 = (longlong *)((longlong)plStack_328 + 1), plStack_360 <= plVar38)) {
            lVar37 = (ulonglong)*(ushort *)(*pauVar28 + lVar40 + 2) * 4 + 4;
            lVar40 = 0;
            goto LAB_1408d4d63;
          }
          pdb_142dc8420(plStack_360,plVar38,plVar32,&UNK_143019860);
          goto LAB_1408d762a;
        }
        break;
      }
      pauVar28 = (undefined1 (*) [16])(*pauVar28 + 4);
      plStack_360 = plStack_328;
    } while ((undefined1 (*) [16])(uVar18 * 4) != pauVar28);
  }
  goto LAB_1408d4d9c;
  while (pfVar1 = (float *)(*(longlong *)(lVar14 + -0xf8 + lVar26) + (longlong)plStack_360 * 4 +
                           lVar40), lVar40 = lVar40 + 4, *pfVar1 <= _DAT_142e36f50) {
LAB_1408d4d63:
    if (lVar37 == lVar40) {
      if (!SBORROW8(0,*(longlong *)(lVar14 + -0xb8 + lVar26))) {
        plVar32 = *(longlong **)(lVar14 + -0x90 + lVar26);
        if (plVar32 <= plVar17) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(plVar17,plVar32,&UNK_143019878);
        }
        if (plVar32 <= (longlong *)((longlong)plVar17 + 1U)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2((longlong *)((longlong)plVar17 + 1U),plVar32,&UNK_143019890);
        }
        fVar66 = (float)pdb_1414961d0(lVar14 + lVar26 + -0xe8,uStack_368,lVar37,&UNK_1430198a8);
        uStack_11c = auVar45._0_4_;
        fVar49 = _DAT_142e36f28 / SQRT(uStack_11c * uStack_11c + fVar66 * fVar66);
        if ((int)fVar49 - 1U < 0x7fffff ||
            (int)ABS(fVar49) - 0x800000U < 0x7f000000 && -1 < (int)fVar49) {
          fVar66 = fVar66 * fVar49;
          uStack_11c = uStack_11c * fVar49;
        }
        else {
          uStack_11c = 0.0;
          fVar66 = 0.0;
        }
        bStack_120 = SUB41(fVar66,0);
        cStack_11f = (char)((uint)fVar66 >> 8);
        uStack_11e = (ushort)((uint)fVar66 >> 0x10);
        pdb_14148b9a0(-1 < (int)fVar49,&UNK_1430198c0);
        uVar15 = (lVar14 + lVar26) - 0xb8;
        pdb_14148b9f0(&uStack_2c8,uVar15);
        pub_142e32980();
        uVar44 = pub_142e32b30();
        uStack_2cc = pub_142e329e0();
        bStack_2d8 = 0;
        cStack_2d7 = '\0';
        uStack_2d6 = 0;
        uStack_2d0 = 0;
        uStack_220 = &uStack_2c8;
        uStack_2bc = 0x3f800000;
        uStack_2b8 = 0x3f800000;
        uStack_2b4 = 0x3f800000;
        bStack_238 = (byte)&uStack_368;
        uStack_237 = (ushort)((ulonglong)&uStack_368 >> 8);
        uStack_235 = (undefined4)((ulonglong)&uStack_368 >> 0x18);
        uStack_231._0_1_ = (undefined1)((ulonglong)&uStack_368 >> 0x38);
        uStack_231._1_3_ = SUB83(&plStack_360,0);
        uStack_22d = (uint)((ulonglong)&plStack_360 >> 0x18);
        uStack_229 = (undefined1)((ulonglong)&plStack_360 >> 0x38);
        pplStack_228 = &plStack_328;
        pauStack_210 = (undefined1 (*) [16])&bStack_120;
        uStack_2d4 = uVar44;
        uStack_218 = uVar15;
        uVar21 = pdb_1408d8420(&bStack_238,uStack_2cc);
        uStack_168 = CONCAT44(uStack_2d4,CONCAT22(uStack_2d6,CONCAT11(cStack_2d7,bStack_2d8)));
        uStack_160 = CONCAT44(uStack_2cc,uStack_2d0);
        uStack_158 = CONCAT44(uStack_2c4,uStack_2c8);
        lStack_150 = CONCAT44(uStack_2bc,uStack_2c0);
        lStack_148 = CONCAT44(uStack_2b4,uStack_2b8);
        uStack_140 = uStack_2b0;
        *puStack_2e8 = uStack_138;
        plVar17 = (longlong *)
                  pdb_1408f3750(uStack_2f0,(ulonglong)plStack_100 & 0xffffffff,lStack_2f8,uStack_248
                                ,uStack_f1);
        fVar66 = uStack_158._4_4_;
        if (uStack_158._4_4_ <= _DAT_142e36f50) {
          fVar66 = _DAT_142e36f50;
        }
        if (_DAT_142e37adc <= fVar66) {
          fVar66 = _DAT_142e37adc;
        }
        if (fVar66 <= _DAT_142e37838) {
          fVar66 = _DAT_142e37838;
        }
        fVar66 = fVar66 + _DAT_142e37848;
        if (*plVar17 != 0 || plVar17[1] != 0) goto LAB_1408d74d4;
        plVar17[1] = 0;
        *plVar17 = 1;
        plVar17[2] = uStack_168;
        plVar17[3] = uStack_160;
        plVar17[4] = uStack_158;
        plVar17[5] = lStack_150;
        plVar17[6] = lStack_148;
        plVar17[7] = uStack_140;
        uStack_22d = 0;
        uStack_235 = 0;
        uStack_231 = 0;
        plStack_100 = (longlong *)
                      CONCAT44(plStack_100._4_4_,(int)plStack_100 + *(int *)(lStack_130 + -0xc));
        fVar49 = fVar66 + _DAT_143019208;
        uStack_2d0 = 0;
        uStack_2cc = uStack_2cc & 0xff000000;
        bStack_2d8 = bStack_238;
        cStack_2d7 = (char)uStack_237;
        uStack_2d6 = uStack_237 >> 8;
        uStack_2d4 = 0;
        lVar14 = plVar17[0x18];
        if (lVar14 == plVar17[0x16]) {
          pdb_142d8ddd0(plVar17 + 0x16);
        }
        lVar40 = plVar17[0x17];
        lVar26 = lVar14 * 0x170;
        *(undefined8 *)(lVar40 + lVar26) = 0;
        *(undefined8 *)(lVar40 + 0x10 + lVar26) = 0;
        *(undefined8 *)(lVar40 + 0x20 + lVar26) = 0;
        *(undefined8 *)(lVar40 + 0x30 + lVar26) = 0;
        *(undefined4 *)(lVar40 + 0x40 + lVar26) = 0;
        *(undefined4 *)(lVar40 + 0x50 + lVar26) = 0;
        *(undefined4 *)(lVar40 + 0x60 + lVar26) = 0;
        *(undefined4 *)(lVar40 + 0x70 + lVar26) = 1;
        *(undefined8 *)(lVar40 + 0x74 + lVar26) = uVar21;
        *(int *)(lVar40 + 0x7c + lVar26) = (int)plStack_100;
        *(undefined4 *)(lVar40 + 0x80 + lVar26) = 0;
        *(float *)(lVar40 + 0x84 + lVar26) = fVar49;
        *(float *)(lVar40 + 0x88 + lVar26) = fVar66;
        *(undefined1 *)(lVar40 + 0x8c + lVar26) = 0;
        *(undefined **)(lVar40 + 0x90 + lVar26) = &UNK_1430195f8;
        *(undefined8 *)(lVar40 + 0x98 + lVar26) = 0x14;
        *(undefined **)(lVar40 + 0xa0 + lVar26) = &UNK_14330db27;
        *(undefined8 *)(lVar40 + 0xa8 + lVar26) = 0x1c;
        plVar32 = (longlong *)(lVar40 + 0xb0 + lVar26);
        *plVar32 = uStack_168;
        plVar32[1] = uStack_160;
        plVar32 = (longlong *)(lVar40 + 0xc0 + lVar26);
        *plVar32 = uStack_158;
        plVar32[1] = lStack_150;
        plVar32 = (longlong *)(lVar40 + 0xd0 + lVar26);
        *plVar32 = lStack_148;
        plVar32[1] = uStack_140;
        *(undefined4 *)(lVar40 + 0xe0 + lVar26) = 1;
        *(undefined4 *)(lVar40 + 0xe4 + lVar26) = uStack_134;
        *(undefined4 *)(lVar40 + 0xe8 + lVar26) = 0;
        *(undefined1 *)(lVar40 + 0x105 + lVar26) = 2;
        *(undefined4 *)(lVar40 + 0x108 + lVar26) = 0;
        *(undefined1 *)(lVar40 + 0x15c + lVar26) = 2;
        *(ulonglong *)(lVar40 + 0x164 + lVar26) =
             CONCAT35((undefined3)uStack_2cc,CONCAT41(uStack_2d0,uStack_2d4._3_1_));
        *(ulonglong *)(lVar40 + 0x15d + lVar26) =
             CONCAT44(uStack_2d4,CONCAT22(uStack_2d6,CONCAT11(cStack_2d7,bStack_2d8)));
        *(undefined1 *)(lVar40 + 0x16c + lVar26) = 2;
        *(undefined1 *)(lVar40 + 0x16e + lVar26) = uStack_f1;
        *(undefined1 *)(lVar40 + 0x16f + lVar26) = 0;
        plVar17[0x18] = lVar14 + 1;
        uStack_22d = uStack_22d & 0xffffff00;
        bStack_238 = 0;
        uStack_237 = 0;
        uStack_235 = 0;
        uStack_231 = 0;
        pdb_1409eff60(&bStack_2d8,_DAT_142e36f50,&bStack_238);
        bStack_238 = 1;
        uStack_237 = 0;
        uStack_235 = 0;
        uStack_231 = 0x100;
        uStack_22d = 0;
        uStack_229 = 0;
        uStack_1b8 = uStack_268;
        uStack_1b0 = uStack_260;
        uStack_1c8 = uStack_278;
        uStack_1c0 = uStack_270;
        uStack_1d8 = uStack_288;
        uStack_1d0 = uStack_280;
        uStack_1e8 = uStack_298;
        uStack_1e0 = uStack_290;
        pplStack_228 = (longlong **)
                       CONCAT44(uStack_2d4,CONCAT22(uStack_2d6,CONCAT11(cStack_2d7,bStack_2d8)));
        uStack_220 = (undefined4 *)CONCAT44(uStack_2cc,uStack_2d0);
        uStack_218 = CONCAT44(uStack_2c4,uStack_2c8);
        pauStack_210 = (undefined1 (*) [16])CONCAT44(uStack_2bc,uStack_2c0);
        uStack_208 = CONCAT44(uStack_2b4,uStack_2b8);
        uStack_1f8 = uStack_2a8;
        uStack_1f4 = uStack_2a4;
        uStack_1f0 = uStack_2a0;
        uStack_1ec = uStack_29c;
        uStack_200 = uStack_2b0;
        pdb_14007ee60();
        pbVar22 = pub_1406abab0(0x90,0x10);
        if (pbVar22 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(0x10,0x90);
        }
        pub_142e32760(pbVar22,&bStack_238,0x90);
        LOCK();
        lVar14 = *(longlong *)pbVar22;
        *(longlong *)pbVar22 = *(longlong *)pbVar22 + 1;
        UNLOCK();
        if (*(longlong *)pbVar22 == 0 || SCARRY8(lVar14,1) != *(longlong *)pbVar22 < 0)
        goto LAB_1408d762a;
        uStack_2d0 = (float)lStack_150;
        bStack_2d8 = (byte)uStack_158;
        cStack_2d7 = (char)((ulonglong)uStack_158 >> 8);
        uStack_2d6 = (ushort)((ulonglong)uStack_158 >> 0x10);
        uStack_2d4 = (undefined4)((ulonglong)uStack_158 >> 0x20);
        bStack_238 = (byte)_DAT_142e4e650;
        uStack_237 = (ushort)((ulonglong)_DAT_142e4e650 >> 8);
        uStack_235 = (undefined4)((ulonglong)_DAT_142e4e650 >> 0x18);
        uStack_231._0_1_ = (undefined1)((ulonglong)_DAT_142e4e650 >> 0x38);
        uStack_231._1_3_ = (undefined3)_UNK_142e4e658;
        uStack_22d = (uint)((ulonglong)_UNK_142e4e658 >> 0x18);
        uStack_229 = (undefined1)((ulonglong)_UNK_142e4e658 >> 0x38);
        pdb_1408f3120(plVar17,pbVar22,pbVar22,&bStack_2d8,&bStack_238);
        pauVar28 = pauStack_190;
        lVar14 = lStack_198;
        uVar15 = uStack_188;
        pauVar31 = pauStack_180;
        goto LAB_1408d4a4f;
      }
      break;
    }
  }
LAB_1408d4d9c:
  uVar13 = (uint)bStack_f3;
  if (uVar13 - 0xb < 2) {
    fVar51 = (float)uStack_160 * (float)uStack_160;
    fVar58 = uStack_160._4_4_ * uStack_160._4_4_;
    fVar43 = uStack_168._4_4_ * uStack_168._4_4_ + (float)uStack_168 * (float)uStack_168;
    fVar49 = (float)uStack_160 * _UNK_1430124b8 +
             uStack_168._4_4_ * _UNK_1430124b4 + (float)uStack_168 * _DAT_1430124b0;
    fVar49 = fVar49 + fVar49;
    fVar46 = uStack_160._4_4_ + uStack_160._4_4_;
    fVar66 = fVar46 * ((float)uStack_160 * 0.0 - (float)uStack_168 * _DAT_1430124c0) +
             fVar49 * uStack_168._4_4_ + (fVar58 - (fVar43 + fVar51)) * _UNK_1430124b4 +
             uStack_158._4_4_;
    uStack_158._0_4_ =
         fVar46 * (uStack_168._4_4_ * _DAT_1430124c0 - (float)uStack_160 * 0.0) +
         fVar49 * (float)uStack_168 + (fVar58 - (fVar43 + fVar51)) * _DAT_1430124b0 +
         (float)uStack_158;
    fVar46 = fVar46 * ((float)uStack_168 * 0.0 - uStack_168._4_4_ * 0.0) +
             fVar49 * (float)uStack_160 + (fVar58 - (fVar43 + fVar51)) * _UNK_1430124b8 +
             (float)lStack_150;
    uStack_158 = CONCAT44(fVar66,(float)uStack_158);
    lStack_150 = CONCAT44(lStack_150._4_4_,fVar46);
    lStack_3d8 = uStack_168;
    lStack_3d0 = uStack_160;
    lStack_3b8 = lStack_148;
    uStack_3b0 = uStack_140;
    lStack_3c8 = uStack_158;
    lStack_3c0 = lStack_150;
    fVar49 = (float)uStack_168;
    fVar51 = uStack_168._4_4_;
    fVar58 = (float)uStack_160;
    fVar43 = uStack_160._4_4_;
    if (bStack_f3 == 0xc) {
      fVar49 = (float)uStack_160 * _DAT_14300cc30 * _DAT_142e377d0 +
               uStack_168._4_4_ * _DAT_14300cc20 * _DAT_142e377c0 +
               (float)uStack_168 * _DAT_14300cc30 * _DAT_142e377b0 +
               uStack_160._4_4_ * _DAT_14300cc20;
      fVar51 = (float)uStack_160 * _UNK_14300cc34 * _UNK_142e377d4 +
               uStack_168._4_4_ * _UNK_14300cc24 * _UNK_142e377c4 +
               (float)uStack_168 * _UNK_14300cc34 * _UNK_142e377b4 +
               uStack_160._4_4_ * _UNK_14300cc24;
      fVar58 = (float)uStack_160 * _UNK_14300cc38 * _UNK_142e377d8 +
               uStack_168._4_4_ * _UNK_14300cc28 * _UNK_142e377c8 +
               (float)uStack_168 * _UNK_14300cc38 * _UNK_142e377b8 +
               uStack_160._4_4_ * _UNK_14300cc28;
      fVar43 = (float)uStack_160 * _UNK_14300cc3c * _UNK_142e377dc +
               uStack_168._4_4_ * _UNK_14300cc2c * _UNK_142e377cc +
               (float)uStack_168 * _UNK_14300cc3c * _UNK_142e377bc +
               uStack_160._4_4_ * _UNK_14300cc2c;
      uStack_168 = CONCAT44(fVar51,fVar49);
      uStack_160 = CONCAT44(fVar43,fVar58);
      fVar68 = fVar58 * _UNK_1430124d8 + fVar51 * _UNK_1430124d4 + fVar49 * _DAT_1430124d0;
      fVar68 = fVar68 + fVar68;
      fVar47 = fVar58 * fVar58;
      fVar59 = fVar43 * fVar43;
      fVar71 = fVar51 * fVar51 + fVar49 * fVar49;
      fVar69 = fVar43 + fVar43;
      fVar66 = fVar66 + fVar69 * (fVar58 * _UNK_1430124e4 - fVar49 * _UNK_1430124f4) +
                        fVar68 * fVar51 + (fVar59 - (fVar71 + fVar47)) * _UNK_1430124d4;
      uStack_158 = CONCAT44(fVar66,(float)uStack_158 +
                                   fVar69 * (fVar51 * _DAT_1430124e0 - fVar58 * _DAT_1430124f0) +
                                   fVar68 * fVar49 + (fVar59 - (fVar71 + fVar47)) * _DAT_1430124d0);
      lStack_150 = CONCAT44(lStack_150._4_4_,
                            fVar46 + fVar69 * (fVar49 * _UNK_1430124e8 - fVar51 * _UNK_1430124f8) +
                                     fVar68 * fVar58 + (fVar59 - (fVar71 + fVar47)) * _UNK_1430124d8
                           );
    }
    puVar20 = (undefined4 *)pdb_140901130(lStack_130 + -0x60,&UNK_143019610);
    pbStack_300 = (byte *)CONCAT44(pbStack_300._4_4_,*puVar20);
    fVar46 = (float)puVar20[1];
    fVar47 = fVar46 + _DAT_142f69450;
    uVar21 = pdb_140c413f0(&lStack_3a0);
    plStack_110 = (longlong *)pdb_140b54f80(lStack_378,uVar21,&UNK_143019628);
    if (plStack_110 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143019640);
    }
    uStack_338 = pdb_14092f860();
    uStack_334 = extraout_XMM0_Da_00;
    uVar13 = pdb_14148cd70(plStack_110 + 0x11);
    uVar15 = plStack_110[0x1a];
    uVar18 = (ulonglong)uVar13;
    if (uVar18 < uVar15) {
      uVar19 = uVar18 + 1;
      if (uVar15 <= uVar19) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar19,uVar15,&UNK_143019658);
      }
      uVar15 = plStack_110[0x13];
      if (uVar15 <= uVar18) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar18,uVar15,&UNK_143019670);
      }
      if (uVar15 <= uVar19) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar19,uVar15,&UNK_143019670);
      }
      fVar59 = *(float *)(plStack_110[0x19] + uVar18 * 4);
      fVar68 = *(float *)(plStack_110[0x12] + 4 + uVar18 * 0xc);
      pauVar31 = *(undefined1 (**) [16])(puStack_178 + 0xc);
      lVar14 = *(longlong *)(puStack_178 + 0x12);
      auVar45 = *pauVar31;
      pauVar28 = pauVar31 + 1;
      fVar68 = (*(float *)(plStack_110[0x12] + 4 + uVar19 * 0xc) - fVar68) * extraout_XMM0_Da_01 +
               fVar68 + (*(float *)(plStack_110[0x19] + 4 + uVar18 * 4) - fVar59) *
                        extraout_XMM0_Da_01 + fVar59 + _DAT_142e36f50;
      fVar59 = fVar68;
      if (fVar68 <= fVar47) {
        fVar59 = fVar47;
      }
      fVar47 = (float)(~-(uint)NAN(fVar47) & (uint)fVar59 | -(uint)NAN(fVar47) & (uint)fVar68);
      uVar13 = ~(uint)(ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
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
                              (ushort)(byte)(auVar45[0xf] >> 7) << 0xf);
      fVar59 = fVar58 * fVar58;
      fVar69 = fVar43 * fVar43;
      fVar73 = fVar51 * fVar51 + fVar49 * fVar49;
      fVar68 = (fVar69 - (fVar73 + fVar59)) * _DAT_142e378f0;
      fVar71 = (fVar69 - (fVar73 + fVar59)) * _UNK_142e378f4;
      fVar73 = (fVar69 - (fVar73 + fVar59)) * _UNK_142e378f8;
      fVar59 = fVar58 * _UNK_142e378f8 + fVar51 * _UNK_142e378f4 + fVar49 * _DAT_142e378f0;
      fVar59 = fVar59 + fVar59;
      fVar69 = fVar49 * _DAT_142e36f28;
      fVar74 = fVar51 * _DAT_142e36f28;
      fVar75 = fVar43 + fVar43;
      uStack_330 = *(undefined4 *)(&UNK_143019210 + (ulonglong)(bStack_f3 == 0xc) * 4);
LAB_1408d53d0:
      do {
        if (lVar14 == 0) goto LAB_1408d5640;
        if ((short)uVar13 == 0) {
          do {
            auVar45 = *pauVar28;
            pauVar31 = pauVar31 + -0x68;
            pauVar28 = pauVar28 + 1;
            uVar13 = (ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
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
          } while (uVar13 == 0);
        }
        uVar25 = 0;
        for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar25 = uVar25 + 1;
        }
        uVar13 = uVar13 - 1 & uVar13;
        lVar14 = lVar14 + -1;
        iVar6 = *(int *)((longlong)pauVar31 + (ulonglong)uVar25 * -0x68 + -0x68);
        if ((int)plStack_100 != iVar6) {
          if (1 < *(uint *)(plStack_110 + 0x4b)) {
            pdb_140c45ec0(&bStack_238,plStack_250,iVar6,&UNK_143019740);
            fVar76 = (float)CONCAT13((undefined1)uStack_235,CONCAT21(uStack_237,bStack_238));
            fVar8 = (float)CONCAT13((undefined1)uStack_231,uStack_235._1_3_);
            fVar9 = (float)CONCAT13((undefined1)uStack_22d,uStack_231._1_3_);
            fVar48 = (float)CONCAT13(uStack_229,uStack_22d._1_3_);
            fVar67 = fVar9 * fVar9;
            fVar70 = fVar48 * fVar48;
            fVar72 = fVar8 * fVar8 + fVar76 * fVar76;
            fVar50 = fVar9 * _UNK_142e378f8 + fVar8 * _UNK_142e378f4 + fVar76 * _DAT_142e378f0;
            fVar50 = fVar50 + fVar50;
            fVar48 = fVar48 + fVar48;
            if ((fVar48 * (fVar76 * 0.0 - fVar8 * 0.0) +
                fVar50 * fVar9 + (fVar70 - (fVar72 + fVar67)) * _UNK_142e378f8) *
                (fVar75 * (fVar49 * 0.0 - fVar51 * 0.0) + fVar59 * fVar58 + fVar73) +
                (fVar48 * (fVar9 * 0.0 - fVar76 * _DAT_142e36f28) +
                fVar50 * fVar8 + (fVar70 - (fVar72 + fVar67)) * _UNK_142e378f4) *
                (fVar75 * (fVar58 * 0.0 - fVar69) + fVar59 * fVar51 + fVar71) +
                (fVar48 * (fVar8 * _DAT_142e36f28 - fVar9 * 0.0) +
                fVar50 * fVar76 + (fVar70 - (fVar72 + fVar67)) * _DAT_142e378f0) *
                (fVar75 * (fVar74 - fVar58 * 0.0) + fVar59 * fVar49 + fVar68) < 0.0)
            goto LAB_1408d53d0;
          }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)((longlong)pauVar31 + (ulonglong)uVar25 * -0x68 + -0x2e)) {
          case 3:
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143019758,0x28,&UNK_143019780);
          }
        }
      } while( true );
    }
    goto LAB_1408d754b;
  }
  if (1 < uVar13 - 0xd) {
    if (uVar13 != 0xf) {
      bStack_238 = (byte)&bStack_102;
      uStack_237 = (ushort)((ulonglong)&bStack_102 >> 8);
      uStack_235 = (undefined4)((ulonglong)&bStack_102 >> 0x18);
      uStack_231._0_1_ = (undefined1)((ulonglong)&bStack_102 >> 0x38);
      uStack_231 = CONCAT31(0x8d4430,(undefined1)uStack_231);
      uStack_22d = 0x140;
      uStack_229 = 0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_1430197ea,&bStack_238,&UNK_143019830);
    }
    *puStack_2e8 = uStack_138;
    plVar17 = (longlong *)
              pdb_1408f3750(uStack_2f0,(ulonglong)plStack_100 & 0xffffffff,lStack_2f8,uStack_248,
                            uStack_f1);
    if (*plVar17 != 0 || plVar17[1] != 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14301ce21,0x17,&UNK_14301ce30);
    }
    plVar17[1] = 0;
    *plVar17 = 1;
    plVar17[2] = uStack_168;
    plVar17[3] = uStack_160;
    plVar17[4] = uStack_158;
    plVar17[5] = lStack_150;
    plVar17[6] = lStack_148;
    plVar17[7] = uStack_140;
    uVar15 = CONCAT71((int7)((ulonglong)pauVar28 >> 8),*(undefined1 *)(lStack_130 + -7));
    cVar11 = pdb_1409012c0(0xf,uStack_1a0);
    bStack_2d8 = pdb_140c44ba0(uVar15 & 0xffffffff);
    cStack_2d7 = cVar11;
    if (plStack_128[3] != 0) {
      uVar19 = pdb_1413f0300(plStack_318,&bStack_2d8);
      lVar14 = *plStack_128;
      uVar18 = plStack_128[1];
      bVar42 = (byte)(uVar19 >> 0x39);
      auVar45 = ZEXT216(CONCAT11(bVar42,bVar42));
      auVar45 = pshuflw(auVar45,auVar45,0);
      lVar40 = 0;
      while( true ) {
        uVar19 = uVar19 & uVar18;
        auVar62 = *(undefined1 (*) [16])(lVar14 + uVar19);
        auVar64[0] = -(auVar62[0] == auVar45[0]);
        auVar64[1] = -(auVar62[1] == auVar45[1]);
        auVar64[2] = -(auVar62[2] == auVar45[2]);
        auVar64[3] = -(auVar62[3] == auVar45[3]);
        auVar64[4] = -(auVar62[4] == auVar45[4]);
        auVar64[5] = -(auVar62[5] == auVar45[5]);
        auVar64[6] = -(auVar62[6] == auVar45[6]);
        auVar64[7] = -(auVar62[7] == auVar45[7]);
        auVar64[8] = -(auVar62[8] == auVar45[0]);
        auVar64[9] = -(auVar62[9] == auVar45[1]);
        auVar64[10] = -(auVar62[10] == auVar45[2]);
        auVar64[0xb] = -(auVar62[0xb] == auVar45[3]);
        auVar64[0xc] = -(auVar62[0xc] == auVar45[4]);
        auVar64[0xd] = -(auVar62[0xd] == auVar45[5]);
        auVar64[0xe] = -(auVar62[0xe] == auVar45[6]);
        auVar64[0xf] = -(auVar62[0xf] == auVar45[7]);
        uVar35 = (ushort)(SUB161(auVar64 >> 7,0) & 1) | (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe | (ushort)(auVar64[0xf] >> 7) << 0xf
        ;
        uVar13 = (uint)uVar35;
        if (uVar35 != 0) {
          if (bStack_2d8 == 0x1a) {
            do {
              uVar25 = 0;
              for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar25 = uVar25 + 1;
              }
              uVar30 = uVar25 + uVar19 & uVar18;
              if (*(char *)(lVar14 + -0x48 + uVar30 * -0x48) == '\x1a') goto LAB_1408d6017;
              uVar35 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar35);
            } while (uVar35 != 0);
          }
          else {
            do {
              uVar25 = 0;
              for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar25 = uVar25 + 1;
              }
              uVar30 = uVar25 + uVar19 & uVar18;
              bVar42 = *(byte *)(lVar14 + -0x48 + uVar30 * -0x48);
              if (((bVar42 != 0x1a) && (bStack_2d8 == bVar42)) &&
                 (cStack_2d7 == *(char *)(lVar14 + uVar30 * -0x48 + -0x47))) goto LAB_1408d6017;
              uVar35 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar35);
            } while (uVar35 != 0);
          }
        }
        auVar56[0] = -(auVar62[0] == -1);
        auVar56[1] = -(auVar62[1] == -1);
        auVar56[2] = -(auVar62[2] == -1);
        auVar56[3] = -(auVar62[3] == -1);
        auVar56[4] = -(auVar62[4] == -1);
        auVar56[5] = -(auVar62[5] == -1);
        auVar56[6] = -(auVar62[6] == -1);
        auVar56[7] = -(auVar62[7] == -1);
        auVar56[8] = -(auVar62[8] == -1);
        auVar56[9] = -(auVar62[9] == -1);
        auVar56[10] = -(auVar62[10] == -1);
        auVar56[0xb] = -(auVar62[0xb] == -1);
        auVar56[0xc] = -(auVar62[0xc] == -1);
        auVar56[0xd] = -(auVar62[0xd] == -1);
        auVar56[0xe] = -(auVar62[0xe] == -1);
        auVar56[0xf] = -(auVar62[0xf] == -1);
        if ((((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 || (SUB161(auVar56 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar56 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar56 >> 0x1f,0) & 1) != 0) || (SUB161(auVar56 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar56 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar56 >> 0x37,0) & 1) != 0) || (SUB161(auVar56 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar56 >> 0x47,0) & 1) != 0) || (SUB161(auVar56 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar56 >> 0x57,0) & 1) != 0) || (SUB161(auVar56 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar56 >> 0x67,0) & 1) != 0) || (SUB161(auVar56 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar56 >> 0x77,0) & 1) != 0) || auVar56[0xf] < '\0') break;
        uVar19 = uVar19 + lVar40 + 0x10;
        lVar40 = lVar40 + 0x10;
      }
    }
    bStack_238 = (byte)&bStack_2d8;
    uStack_237 = (ushort)((ulonglong)&bStack_2d8 >> 8);
    uStack_235 = (undefined4)((ulonglong)&bStack_2d8 >> 0x18);
    uStack_231._0_1_ = (undefined1)((ulonglong)&bStack_2d8 >> 0x38);
    uStack_231 = CONCAT31(0x8d4390,(undefined1)uStack_231);
    uStack_22d = 0x140;
    uStack_229 = 0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14301950d,&bStack_238,&UNK_143019540);
  }
  *puStack_2e8 = uStack_138;
  plVar17 = (longlong *)
            pdb_1408f3750(uStack_2f0,(ulonglong)plStack_100 & 0xffffffff,lStack_2f8,uStack_248,
                          uStack_f1);
  uStack_168 = CONCAT44(_UNK_143012444,_DAT_143012440);
  uStack_160 = CONCAT44(_UNK_14301244c,_UNK_143012448);
  if (*plVar17 == 0 && plVar17[1] == 0) {
    plVar17[1] = 0;
    *plVar17 = 1;
    plVar17[2] = uStack_168;
    plVar17[3] = uStack_160;
    plVar17[4] = uStack_158;
    plVar17[5] = lStack_150;
    plVar17[6] = lStack_148;
    plVar17[7] = uStack_140;
    uVar15 = CONCAT71((int7)(uVar15 >> 8),*(undefined1 *)(lStack_130 + -7));
    cVar11 = pdb_1409012c0(bStack_f3,uStack_1a0);
    bStack_2d8 = pdb_140c44ba0(uVar15 & 0xffffffff);
    cStack_2d7 = cVar11;
    if (plStack_128[3] != 0) {
      uVar19 = pdb_1413f0300(plStack_318,&bStack_2d8);
      lVar14 = *plStack_128;
      uVar18 = plStack_128[1];
      bVar42 = (byte)(uVar19 >> 0x39);
      auVar45 = ZEXT216(CONCAT11(bVar42,bVar42));
      auVar45 = pshuflw(auVar45,auVar45,0);
      lVar40 = 0;
      while( true ) {
        uVar19 = uVar19 & uVar18;
        auVar62 = *(undefined1 (*) [16])(lVar14 + uVar19);
        auVar61[0] = -(auVar62[0] == auVar45[0]);
        auVar61[1] = -(auVar62[1] == auVar45[1]);
        auVar61[2] = -(auVar62[2] == auVar45[2]);
        auVar61[3] = -(auVar62[3] == auVar45[3]);
        auVar61[4] = -(auVar62[4] == auVar45[4]);
        auVar61[5] = -(auVar62[5] == auVar45[5]);
        auVar61[6] = -(auVar62[6] == auVar45[6]);
        auVar61[7] = -(auVar62[7] == auVar45[7]);
        auVar61[8] = -(auVar62[8] == auVar45[0]);
        auVar61[9] = -(auVar62[9] == auVar45[1]);
        auVar61[10] = -(auVar62[10] == auVar45[2]);
        auVar61[0xb] = -(auVar62[0xb] == auVar45[3]);
        auVar61[0xc] = -(auVar62[0xc] == auVar45[4]);
        auVar61[0xd] = -(auVar62[0xd] == auVar45[5]);
        auVar61[0xe] = -(auVar62[0xe] == auVar45[6]);
        auVar61[0xf] = -(auVar62[0xf] == auVar45[7]);
        uVar35 = (ushort)(SUB161(auVar61 >> 7,0) & 1) | (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe | (ushort)(auVar61[0xf] >> 7) << 0xf
        ;
        uVar13 = (uint)uVar35;
        if (uVar35 != 0) {
          if (bStack_2d8 == 0x1a) {
            do {
              uVar25 = 0;
              for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar25 = uVar25 + 1;
              }
              uVar30 = uVar25 + uVar19 & uVar18;
              if (*(char *)(lVar14 + -0x48 + uVar30 * -0x48) == '\x1a') goto LAB_1408d5954;
              uVar35 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar35);
            } while (uVar35 != 0);
          }
          else {
            do {
              uVar25 = 0;
              for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar25 = uVar25 + 1;
              }
              uVar30 = uVar25 + uVar19 & uVar18;
              bVar42 = *(byte *)(lVar14 + -0x48 + uVar30 * -0x48);
              if (((bVar42 != 0x1a) && (bStack_2d8 == bVar42)) &&
                 (cStack_2d7 == *(char *)(lVar14 + uVar30 * -0x48 + -0x47))) goto LAB_1408d5954;
              uVar35 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar35);
            } while (uVar35 != 0);
          }
        }
        auVar53[0] = -(auVar62[0] == -1);
        auVar53[1] = -(auVar62[1] == -1);
        auVar53[2] = -(auVar62[2] == -1);
        auVar53[3] = -(auVar62[3] == -1);
        auVar53[4] = -(auVar62[4] == -1);
        auVar53[5] = -(auVar62[5] == -1);
        auVar53[6] = -(auVar62[6] == -1);
        auVar53[7] = -(auVar62[7] == -1);
        auVar53[8] = -(auVar62[8] == -1);
        auVar53[9] = -(auVar62[9] == -1);
        auVar53[10] = -(auVar62[10] == -1);
        auVar53[0xb] = -(auVar62[0xb] == -1);
        auVar53[0xc] = -(auVar62[0xc] == -1);
        auVar53[0xd] = -(auVar62[0xd] == -1);
        auVar53[0xe] = -(auVar62[0xe] == -1);
        auVar53[0xf] = -(auVar62[0xf] == -1);
        if ((((((((((((((((SUB161(auVar53 >> 7,0) & 1) != 0 || (SUB161(auVar53 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar53 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar53 >> 0x1f,0) & 1) != 0) || (SUB161(auVar53 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar53 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar53 >> 0x37,0) & 1) != 0) || (SUB161(auVar53 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar53 >> 0x47,0) & 1) != 0) || (SUB161(auVar53 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar53 >> 0x57,0) & 1) != 0) || (SUB161(auVar53 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar53 >> 0x67,0) & 1) != 0) || (SUB161(auVar53 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar53 >> 0x77,0) & 1) != 0) || auVar53[0xf] < '\0') break;
        uVar19 = uVar19 + lVar40 + 0x10;
        lVar40 = lVar40 + 0x10;
      }
    }
    bStack_238 = (byte)&bStack_2d8;
    uStack_237 = (ushort)((ulonglong)&bStack_2d8 >> 8);
    uStack_235 = (undefined4)((ulonglong)&bStack_2d8 >> 0x18);
    uStack_231._0_1_ = (undefined1)((ulonglong)&bStack_2d8 >> 0x38);
    uStack_231 = CONCAT31(0x8d4390,(undefined1)uStack_231);
    uStack_22d = 0x140;
    uStack_229 = 0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14301950d,&bStack_238,&UNK_143019540);
  }
  goto LAB_1408d73f5;
LAB_1408d5640:
  fVar59 = fVar46 - fVar47;
  if (_DAT_142e37838 < fVar59) {
    uStack_2d0 = (float)lStack_150;
    bStack_2d8 = (byte)uStack_158;
    cStack_2d7 = (char)((ulonglong)uStack_158 >> 8);
    uStack_2d6 = (ushort)((ulonglong)uStack_158 >> 0x10);
    uStack_2d4 = (undefined4)((ulonglong)uStack_158 >> 0x20);
    uStack_2cc = (uint)_DAT_142f61040;
    uStack_2c8 = (undefined4)((ulonglong)_DAT_142f61040 >> 0x20);
    uStack_2c4 = 0x80000000;
    uVar21 = pdb_140c413f0(&lStack_3a0);
    in_stack_fffffffffffffc00 = in_stack_fffffffffffffc00 & 0xffffffff00000000;
    pdb_1409ef4a0(&bStack_238,uStack_370,&bStack_2d8,1,uVar21,in_stack_fffffffffffffc00);
    if (((int)uStack_208 != 2) && ((bStack_238 & 0xfd) == 0)) {
      fVar68 = uStack_220._4_4_ + _DAT_142e36f50;
      fVar59 = fVar68;
      if (fVar68 <= fVar47) {
        fVar59 = fVar47;
      }
      fVar59 = fVar46 - (float)(~-(uint)NAN(fVar47) & (uint)fVar59 |
                               -(uint)NAN(fVar47) & (uint)fVar68);
    }
  }
  uVar15 = uStack_188;
  if (fVar66 <= _DAT_142e36f50) {
    fVar66 = _DAT_142e36f50;
  }
  if (fVar66 <= fVar59) {
    fVar59 = fVar66;
  }
  if (fVar59 <= _DAT_142e37838) {
    fVar59 = _DAT_142e37838;
  }
  fVar59 = fVar59 + _DAT_142e37848;
  pauVar28 = pauStack_190;
  lVar14 = lStack_198;
  pauVar31 = pauStack_180;
  if (_DAT_142e37838 < fVar59) {
    *puStack_2e8 = uStack_138;
    plVar17 = (longlong *)
              pdb_1408f3750(uStack_2f0,(ulonglong)plStack_100 & 0xffffffff,lStack_2f8,uStack_248,
                            uStack_f1);
    fVar46 = fVar59 + _DAT_143019208;
    bStack_120 = 0;
    cStack_11f = 0;
    uStack_11e = 0x3f80;
    uStack_118 = 0x3f19999a;
    fVar66 = fVar46 * _DAT_142e377f0 * _DAT_143019220;
    bStack_238 = SUB41(fVar66,0);
    uStack_237 = (ushort)((uint)fVar66 >> 8);
    uStack_235 = (undefined4)(CONCAT44(fVar46 * _UNK_143019224,fVar66) >> 0x18);
    uStack_231._1_3_ = SUB43(fVar66,0);
    uStack_231 = CONCAT31(uStack_231._1_3_,(char)((uint)(fVar46 * _UNK_143019224) >> 0x18));
    uStack_22d._0_1_ = (undefined1)((uint)fVar66 >> 0x18);
    uStack_11c = fVar46;
    pdb_1409efe30(&bStack_2d8,&bStack_120,&bStack_238);
    if (*plVar17 != 0 || plVar17[1] != 0) {
      uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14301ce21,0x17,&UNK_14301ce30);
    }
    plVar17[1] = 0;
    *plVar17 = 1;
    plVar17[2] = lStack_3d8;
    plVar17[3] = lStack_3d0;
    plVar17[4] = lStack_3c8;
    plVar17[5] = lStack_3c0;
    plVar17[6] = lStack_3b8;
    plVar17[7] = uStack_3b0;
    uVar4 = *(undefined1 *)(lStack_130 + -7);
    uStack_f2 = 1;
    cVar11 = pdb_1409012c0(bStack_f3,uStack_1a0);
    uStack_f2 = 1;
    bStack_120 = pdb_140c44ba0(CONCAT71((int7)(uVar15 >> 8),uVar4) & 0xffffffff);
    cStack_11f = cVar11;
    if (plStack_128[3] != 0) {
      uStack_f2 = 1;
      uVar18 = pdb_1413f0300(plStack_318,&bStack_120);
      lVar40 = lStack_130;
      lVar14 = *plStack_128;
      uVar15 = plStack_128[1];
      bVar42 = (byte)(uVar18 >> 0x39);
      auVar45 = ZEXT216(CONCAT11(bVar42,bVar42));
      auVar45 = pshuflw(auVar45,auVar45,0);
      lVar26 = 0;
      while( true ) {
        uVar18 = uVar18 & uVar15;
        pcVar23 = (char *)(lVar14 + uVar18);
        auVar62[0] = -(*pcVar23 == auVar45[0]);
        auVar62[1] = -(pcVar23[1] == auVar45[1]);
        auVar62[2] = -(pcVar23[2] == auVar45[2]);
        auVar62[3] = -(pcVar23[3] == auVar45[3]);
        auVar62[4] = -(pcVar23[4] == auVar45[4]);
        auVar62[5] = -(pcVar23[5] == auVar45[5]);
        auVar62[6] = -(pcVar23[6] == auVar45[6]);
        auVar62[7] = -(pcVar23[7] == auVar45[7]);
        auVar62[8] = -(pcVar23[8] == auVar45[0]);
        auVar62[9] = -(pcVar23[9] == auVar45[1]);
        auVar62[10] = -(pcVar23[10] == auVar45[2]);
        auVar62[0xb] = -(pcVar23[0xb] == auVar45[3]);
        auVar62[0xc] = -(pcVar23[0xc] == auVar45[4]);
        auVar62[0xd] = -(pcVar23[0xd] == auVar45[5]);
        auVar62[0xe] = -(pcVar23[0xe] == auVar45[6]);
        auVar62[0xf] = -(pcVar23[0xf] == auVar45[7]);
        uVar35 = (ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1
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
        uVar13 = (uint)uVar35;
        if (uVar35 != 0) {
          if (bStack_120 == 0x1a) {
            do {
              uVar25 = 0;
              for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar25 = uVar25 + 1;
              }
              uVar19 = uVar25 + uVar18 & uVar15;
              if (*(char *)(lVar14 + -0x48 + uVar19 * -0x48) == '\x1a') goto LAB_1408d617f;
              uVar35 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar35);
            } while (uVar35 != 0);
          }
          else {
            do {
              uVar25 = 0;
              for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar25 = uVar25 + 1;
              }
              uVar19 = uVar25 + uVar18 & uVar15;
              bVar42 = *(byte *)(lVar14 + -0x48 + uVar19 * -0x48);
              if (((bVar42 != 0x1a) && (bStack_120 == bVar42)) &&
                 (cStack_11f == *(char *)(lVar14 + uVar19 * -0x48 + -0x47))) goto LAB_1408d617f;
              uVar35 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar35);
            } while (uVar35 != 0);
          }
        }
        auVar54[0] = -(*pcVar23 == -1);
        auVar54[1] = -(pcVar23[1] == -1);
        auVar54[2] = -(pcVar23[2] == -1);
        auVar54[3] = -(pcVar23[3] == -1);
        auVar54[4] = -(pcVar23[4] == -1);
        auVar54[5] = -(pcVar23[5] == -1);
        auVar54[6] = -(pcVar23[6] == -1);
        auVar54[7] = -(pcVar23[7] == -1);
        auVar54[8] = -(pcVar23[8] == -1);
        auVar54[9] = -(pcVar23[9] == -1);
        auVar54[10] = -(pcVar23[10] == -1);
        auVar54[0xb] = -(pcVar23[0xb] == -1);
        auVar54[0xc] = -(pcVar23[0xc] == -1);
        auVar54[0xd] = -(pcVar23[0xd] == -1);
        auVar54[0xe] = -(pcVar23[0xe] == -1);
        auVar54[0xf] = -(pcVar23[0xf] == -1);
        if ((((((((((((((((SUB161(auVar54 >> 7,0) & 1) != 0 || (SUB161(auVar54 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar54 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar54 >> 0x1f,0) & 1) != 0) || (SUB161(auVar54 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar54 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar54 >> 0x37,0) & 1) != 0) || (SUB161(auVar54 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar54 >> 0x47,0) & 1) != 0) || (SUB161(auVar54 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar54 >> 0x57,0) & 1) != 0) || (SUB161(auVar54 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar54 >> 0x67,0) & 1) != 0) || (SUB161(auVar54 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar54 >> 0x77,0) & 1) != 0) || auVar54[0xf] < '\0') break;
        uVar18 = uVar18 + lVar26 + 0x10;
        lVar26 = lVar26 + 0x10;
      }
    }
    bStack_238 = (byte)&bStack_120;
    uStack_237 = (ushort)((ulonglong)&bStack_120 >> 8);
    uStack_235 = (undefined4)((ulonglong)&bStack_120 >> 0x18);
    uStack_231._0_1_ = (undefined1)((ulonglong)&bStack_120 >> 0x38);
    uStack_231 = CONCAT31(0x8d4390,(undefined1)uStack_231);
    uStack_22d = 0x140;
    uStack_229 = 0;
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14301950d,&bStack_238,&UNK_143019540);
  }
  goto LAB_1408d4a4f;
LAB_1408d617f:
  plVar32 = *(longlong **)(lVar14 + -0x28 + uVar19 * -0x48);
  LOCK();
  lVar14 = *plVar32;
  *plVar32 = *plVar32 + 1;
  UNLOCK();
  if (*plVar32 != 0 && SCARRY8(lVar14,1) == *plVar32 < 0) {
    uStack_1b8 = uStack_268;
    uStack_1b0 = uStack_260;
    uStack_1c8 = uStack_278;
    uStack_1c0 = uStack_270;
    uStack_1d8 = uStack_288;
    uStack_1d0 = uStack_280;
    uStack_1e8 = uStack_298;
    uStack_1e0 = uStack_290;
    pplStack_228 = (longlong **)
                   CONCAT44(uStack_2d4,CONCAT22(uStack_2d6,CONCAT11(cStack_2d7,bStack_2d8)));
    uStack_220 = (undefined4 *)CONCAT44(uStack_2cc,uStack_2d0);
    uStack_218 = CONCAT44(uStack_2c4,uStack_2c8);
    pauStack_210 = (undefined1 (*) [16])CONCAT44(uStack_2bc,uStack_2c0);
    uStack_208 = CONCAT44(uStack_2b4,uStack_2b8);
    uStack_1f8 = uStack_2a8;
    uStack_1f4 = uStack_2a4;
    uStack_1f0 = uStack_2a0;
    uStack_1ec = uStack_29c;
    uStack_200 = uStack_2b0;
    bStack_238 = 1;
    uStack_237 = 0;
    uStack_235 = 0;
    uStack_231 = 0x100;
    uStack_22d = 0;
    uStack_229 = 0;
    plStack_328 = plVar32;
    pdb_14007ee60();
    pbVar22 = pub_1406abab0(0x90,0x10);
    pbStack_300 = pbVar22;
    plStack_110 = plVar32;
    if (pbVar22 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(0x10,0x90);
    }
    pub_142e32760(pbVar22,&bStack_238,0x90);
    uStack_118 = (float)lStack_150;
    bStack_120 = (byte)uStack_158;
    cStack_11f = (char)((ulonglong)uStack_158 >> 8);
    uStack_11e = (ushort)((ulonglong)uStack_158 >> 0x10);
    uStack_11c = (float)((ulonglong)uStack_158 >> 0x20);
    bStack_238 = SUB41(fVar49,0);
    uStack_237 = (ushort)((uint)fVar49 >> 8);
    uStack_235._1_3_ = SUB43(fVar51,0);
    uStack_235 = CONCAT31(uStack_235._1_3_,(char)((uint)fVar49 >> 0x18));
    uStack_231._1_3_ = SUB43(fVar58,0);
    uStack_231 = CONCAT31(uStack_231._1_3_,(char)((uint)fVar51 >> 0x18));
    uStack_22d._1_3_ = SUB43(fVar43,0);
    uStack_22d = CONCAT31(uStack_22d._1_3_,(char)((uint)fVar58 >> 0x18));
    uStack_229 = (undefined1)((uint)fVar43 >> 0x18);
    pdb_1408f3120(plVar17,plVar32,pbVar22,&bStack_120,&bStack_238);
    lVar14 = lVar40 + -0x28;
    if (bStack_f3 == 0xc) {
      uStack_f2 = 0;
      pcVar23 = (char *)pdb_140901440(lVar14,&UNK_143019688);
      bVar41 = *pcVar23 == '\0';
      puVar34 = &UNK_1430196a0;
      if (!bVar41) {
        puVar34 = &UNK_1430196c9;
      }
      uVar21 = 0x29;
      uVar24 = 0x1b;
    }
    else {
      uStack_f2 = 0;
      pcVar23 = (char *)pdb_140901440(lVar14,&UNK_1430196e8);
      bVar41 = *pcVar23 == '\0';
      puVar34 = &UNK_143019700;
      if (!bVar41) {
        puVar34 = &UNK_143019727;
      }
      uVar21 = 0x27;
      uVar24 = 0x19;
    }
    if (!bVar41) {
      uVar21 = uVar24;
    }
    uStack_22d = 0;
    uStack_235 = 0;
    uStack_231 = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    bStack_120 = bStack_238;
    cStack_11f = (char)uStack_237;
    uStack_11e = uStack_237 >> 8;
    uStack_11c = 0.0;
    lVar14 = plVar17[0x18];
    if (lVar14 == plVar17[0x16]) {
      uStack_f2 = 0;
      pdb_142d8ddd0(plVar17 + 0x16);
    }
    bVar41 = bStack_f3 == 0xc;
    lVar26 = plVar17[0x17];
    lVar37 = lVar14 * 0x170;
    *(undefined8 *)(lVar26 + lVar37) = 0;
    *(undefined8 *)(lVar26 + 0x10 + lVar37) = 0;
    *(undefined8 *)(lVar26 + 0x20 + lVar37) = 0;
    *(undefined8 *)(lVar26 + 0x30 + lVar37) = 0;
    *(undefined4 *)(lVar26 + 0x40 + lVar37) = 0;
    *(undefined4 *)(lVar26 + 0x50 + lVar37) = 0;
    *(undefined4 *)(lVar26 + 0x60 + lVar37) = 0;
    *(undefined4 *)(lVar26 + 0x70 + lVar37) = 2;
    *(undefined **)(lVar26 + 0x90 + lVar37) = puVar34;
    *(undefined8 *)(lVar26 + 0x98 + lVar37) = uVar21;
    *(undefined **)(lVar26 + 0xa0 + lVar37) = &UNK_14330daf5;
    *(undefined8 *)(lVar26 + 0xa8 + lVar37) = 0x16;
    plVar32 = (longlong *)(lVar26 + 0xb0 + lVar37);
    *plVar32 = lStack_3d8;
    plVar32[1] = lStack_3d0;
    plVar32 = (longlong *)(lVar26 + 0xc0 + lVar37);
    *plVar32 = lStack_3c8;
    plVar32[1] = lStack_3c0;
    plVar32 = (longlong *)(lVar26 + 0xd0 + lVar37);
    *plVar32 = lStack_3b8;
    plVar32[1] = uStack_3b0;
    *(undefined4 *)(lVar26 + 0xe0 + lVar37) = 0;
    *(undefined4 *)(lVar26 + 0xe8 + lVar37) = 0;
    *(undefined1 *)(lVar26 + 0x105 + lVar37) = 2;
    *(undefined4 *)(lVar26 + 0x108 + lVar37) = 0;
    *(undefined1 *)(lVar26 + 0x15c + lVar37) = 2;
    *(ulonglong *)(lVar26 + 0x15d + lVar37) =
         CONCAT44(uStack_11c,CONCAT22(uStack_11e,CONCAT11(cStack_11f,bStack_120)));
    *(ulonglong *)(lVar26 + 0x164 + lVar37) =
         CONCAT35(uStack_114,CONCAT41(uStack_118,uStack_11c._3_1_));
    *(undefined1 *)(lVar26 + 0x16c + lVar37) = 2;
    *(undefined1 *)(lVar26 + 0x16e + lVar37) = uStack_f1;
    *(undefined1 *)(lVar26 + 0x16f + lVar37) = 0;
    lVar26 = lVar14 + 1;
    plVar17[0x18] = lVar26;
    uStack_22d = 0;
    uStack_235 = 0;
    uStack_231 = 0;
    plStack_100 = (longlong *)CONCAT44(plStack_100._4_4_,(int)plStack_100 + *(int *)(lVar40 + -0xc))
    ;
    uStack_118 = 0;
    uStack_114 = 0;
    bStack_120 = bStack_238;
    cStack_11f = (char)uStack_237;
    uStack_11e = uStack_237 >> 8;
    uStack_11c = 0.0;
    if (lVar26 == plVar17[0x16]) {
      uStack_f2 = 0;
      pdb_142d8ddd0(plVar17 + 0x16);
    }
    lVar40 = plVar17[0x17];
    lVar26 = lVar26 * 0x170;
    *(undefined8 *)(lVar40 + lVar26) = 0;
    *(undefined8 *)(lVar40 + 0x10 + lVar26) = 0;
    *(undefined8 *)(lVar40 + 0x20 + lVar26) = 0;
    *(undefined8 *)(lVar40 + 0x30 + lVar26) = 0;
    *(undefined4 *)(lVar40 + 0x40 + lVar26) = 0;
    *(undefined4 *)(lVar40 + 0x50 + lVar26) = 0;
    *(undefined4 *)(lVar40 + 0x60 + lVar26) = 0;
    *(undefined4 *)(lVar40 + 0x70 + lVar26) = 0;
    *(int *)(lVar40 + 0x7c + lVar26) = (int)plStack_100;
    *(undefined4 *)(lVar40 + 0x80 + lVar26) = 0;
    *(float *)(lVar40 + 0x84 + lVar26) = fVar46;
    *(float *)(lVar40 + 0x88 + lVar26) = fVar59;
    *(bool *)(lVar40 + 0x8c + lVar26) = bVar41;
    *(undefined **)(lVar40 + 0x90 + lVar26) = &UNK_1430195f8;
    *(undefined8 *)(lVar40 + 0x98 + lVar26) = 0x14;
    *(undefined **)(lVar40 + 0xa0 + lVar26) = &UNK_14330db27;
    *(undefined8 *)(lVar40 + 0xa8 + lVar26) = 0x1c;
    plVar32 = (longlong *)(lVar40 + 0xb0 + lVar26);
    *plVar32 = uStack_168;
    plVar32[1] = uStack_160;
    plVar32 = (longlong *)(lVar40 + 0xc0 + lVar26);
    *plVar32 = uStack_158;
    plVar32[1] = lStack_150;
    plVar32 = (longlong *)(lVar40 + 0xd0 + lVar26);
    *plVar32 = lStack_148;
    plVar32[1] = uStack_140;
    *(undefined4 *)(lVar40 + 0xe0 + lVar26) = 1;
    *(undefined4 *)(lVar40 + 0xe4 + lVar26) = uStack_134;
    *(undefined4 *)(lVar40 + 0xe8 + lVar26) = 0;
    *(undefined1 *)(lVar40 + 0x105 + lVar26) = 2;
    *(undefined4 *)(lVar40 + 0x108 + lVar26) = 0;
    *(undefined1 *)(lVar40 + 0x15c + lVar26) = 2;
    *(ulonglong *)(lVar40 + 0x164 + lVar26) =
         CONCAT35(uStack_114,CONCAT41(uStack_118,uStack_11c._3_1_));
    *(ulonglong *)(lVar40 + 0x15d + lVar26) =
         CONCAT44(uStack_11c,CONCAT22(uStack_11e,CONCAT11(cStack_11f,bStack_120)));
    goto LAB_1408d6b9b;
  }
  goto LAB_1408d762a;
LAB_1408d6017:
  plVar32 = *(longlong **)(lVar14 + -0x28 + uVar30 * -0x48);
  LOCK();
  lVar40 = *plVar32;
  *plVar32 = *plVar32 + 1;
  UNLOCK();
  if (*plVar32 != 0 && SCARRY8(lVar40,1) == *plVar32 < 0) {
    bStack_120 = (byte)plVar32;
    cStack_11f = (char)((ulonglong)plVar32 >> 8);
    uStack_11e = (ushort)((ulonglong)plVar32 >> 0x10);
    uStack_11c = (float)((ulonglong)plVar32 >> 0x20);
    uStack_f5 = 1;
    plStack_110 = plVar32;
    cVar11 = pdb_1409012c0(CONCAT71((int7)((ulonglong)lVar14 >> 8),0xf),uStack_1a0);
    uStack_f5 = 1;
    bStack_2d8 = pdb_140c44ba0(uVar15 & 0xffffffff);
    cStack_2d7 = cVar11;
    if (plStack_128[9] != 0) {
      uStack_f5 = 1;
      uVar18 = pdb_1413f0300(plStack_350,&bStack_2d8);
      lVar14 = plStack_128[6];
      uVar15 = plStack_128[7];
      bVar42 = (byte)(uVar18 >> 0x39);
      auVar45 = ZEXT216(CONCAT11(bVar42,bVar42));
      auVar45 = pshuflw(auVar45,auVar45,0);
      lVar40 = 0;
      while( true ) {
        uVar18 = uVar18 & uVar15;
        auVar62 = *(undefined1 (*) [16])(lVar14 + uVar18);
        auVar65[0] = -(auVar62[0] == auVar45[0]);
        auVar65[1] = -(auVar62[1] == auVar45[1]);
        auVar65[2] = -(auVar62[2] == auVar45[2]);
        auVar65[3] = -(auVar62[3] == auVar45[3]);
        auVar65[4] = -(auVar62[4] == auVar45[4]);
        auVar65[5] = -(auVar62[5] == auVar45[5]);
        auVar65[6] = -(auVar62[6] == auVar45[6]);
        auVar65[7] = -(auVar62[7] == auVar45[7]);
        auVar65[8] = -(auVar62[8] == auVar45[0]);
        auVar65[9] = -(auVar62[9] == auVar45[1]);
        auVar65[10] = -(auVar62[10] == auVar45[2]);
        auVar65[0xb] = -(auVar62[0xb] == auVar45[3]);
        auVar65[0xc] = -(auVar62[0xc] == auVar45[4]);
        auVar65[0xd] = -(auVar62[0xd] == auVar45[5]);
        auVar65[0xe] = -(auVar62[0xe] == auVar45[6]);
        auVar65[0xf] = -(auVar62[0xf] == auVar45[7]);
        uVar35 = (ushort)(SUB161(auVar65 >> 7,0) & 1) | (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe | (ushort)(auVar65[0xf] >> 7) << 0xf
        ;
        uVar13 = (uint)uVar35;
        if (uVar35 != 0) {
          if (bStack_2d8 == 0x1a) {
            do {
              uVar25 = 0;
              for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar25 = uVar25 + 1;
              }
              uVar19 = uVar25 + uVar18 & uVar15;
              if (*(char *)(lVar14 + -0x48 + uVar19 * -0x48) == '\x1a') goto LAB_1408d634c;
              uVar35 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar35);
            } while (uVar35 != 0);
          }
          else {
            do {
              uVar25 = 0;
              for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar25 = uVar25 + 1;
              }
              uVar19 = uVar25 + uVar18 & uVar15;
              bVar42 = *(byte *)(lVar14 + -0x48 + uVar19 * -0x48);
              if (((bVar42 != 0x1a) && (bStack_2d8 == bVar42)) &&
                 (cStack_2d7 == *(char *)(lVar14 + uVar19 * -0x48 + -0x47))) goto LAB_1408d634c;
              uVar35 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar35);
            } while (uVar35 != 0);
          }
        }
        auVar57[0] = -(auVar62[0] == -1);
        auVar57[1] = -(auVar62[1] == -1);
        auVar57[2] = -(auVar62[2] == -1);
        auVar57[3] = -(auVar62[3] == -1);
        auVar57[4] = -(auVar62[4] == -1);
        auVar57[5] = -(auVar62[5] == -1);
        auVar57[6] = -(auVar62[6] == -1);
        auVar57[7] = -(auVar62[7] == -1);
        auVar57[8] = -(auVar62[8] == -1);
        auVar57[9] = -(auVar62[9] == -1);
        auVar57[10] = -(auVar62[10] == -1);
        auVar57[0xb] = -(auVar62[0xb] == -1);
        auVar57[0xc] = -(auVar62[0xc] == -1);
        auVar57[0xd] = -(auVar62[0xd] == -1);
        auVar57[0xe] = -(auVar62[0xe] == -1);
        auVar57[0xf] = -(auVar62[0xf] == -1);
        if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar57 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar57 >> 0x1f,0) & 1) != 0) || (SUB161(auVar57 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar57 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar57 >> 0x37,0) & 1) != 0) || (SUB161(auVar57 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar57 >> 0x47,0) & 1) != 0) || (SUB161(auVar57 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar57 >> 0x57,0) & 1) != 0) || (SUB161(auVar57 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar57 >> 0x67,0) & 1) != 0) || (SUB161(auVar57 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar57 >> 0x77,0) & 1) != 0) || auVar57[0xf] < '\0') break;
        uVar18 = uVar18 + lVar40 + 0x10;
        lVar40 = lVar40 + 0x10;
      }
    }
    bStack_238 = (byte)&bStack_2d8;
    uStack_237 = (ushort)((ulonglong)&bStack_2d8 >> 8);
    uStack_235 = (undefined4)((ulonglong)&bStack_2d8 >> 0x18);
    uStack_231._0_1_ = (undefined1)((ulonglong)&bStack_2d8 >> 0x38);
    uStack_231 = CONCAT31(0x8d4390,(undefined1)uStack_231);
    uStack_22d = 0x140;
    uStack_229 = 0;
    uStack_f5 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14301950d,&bStack_238,&UNK_143019558);
  }
  goto LAB_1408d762a;
LAB_1408d5954:
  plVar32 = *(longlong **)(lVar14 + -0x28 + uVar30 * -0x48);
  LOCK();
  lVar14 = *plVar32;
  *plVar32 = *plVar32 + 1;
  UNLOCK();
  if (*plVar32 != 0 && SCARRY8(lVar14,1) == *plVar32 < 0) {
    bStack_120 = (byte)plVar32;
    cStack_11f = (char)((ulonglong)plVar32 >> 8);
    uStack_11e = (ushort)((ulonglong)plVar32 >> 0x10);
    uStack_11c = (float)((ulonglong)plVar32 >> 0x20);
    uStack_f4 = 1;
    plStack_110 = plVar32;
    cVar11 = pdb_1409012c0(bStack_f3,uStack_1a0);
    uStack_f4 = 1;
    bStack_2d8 = pdb_140c44ba0(uVar15 & 0xffffffff);
    cStack_2d7 = cVar11;
    if (plStack_128[9] != 0) {
      uStack_f4 = 1;
      uVar18 = pdb_1413f0300(plStack_350,&bStack_2d8);
      lVar14 = plStack_128[6];
      uVar15 = plStack_128[7];
      bVar42 = (byte)(uVar18 >> 0x39);
      auVar45 = ZEXT216(CONCAT11(bVar42,bVar42));
      auVar45 = pshuflw(auVar45,auVar45,0);
      lVar40 = 0;
      while( true ) {
        uVar18 = uVar18 & uVar15;
        auVar62 = *(undefined1 (*) [16])(lVar14 + uVar18);
        auVar63[0] = -(auVar62[0] == auVar45[0]);
        auVar63[1] = -(auVar62[1] == auVar45[1]);
        auVar63[2] = -(auVar62[2] == auVar45[2]);
        auVar63[3] = -(auVar62[3] == auVar45[3]);
        auVar63[4] = -(auVar62[4] == auVar45[4]);
        auVar63[5] = -(auVar62[5] == auVar45[5]);
        auVar63[6] = -(auVar62[6] == auVar45[6]);
        auVar63[7] = -(auVar62[7] == auVar45[7]);
        auVar63[8] = -(auVar62[8] == auVar45[0]);
        auVar63[9] = -(auVar62[9] == auVar45[1]);
        auVar63[10] = -(auVar62[10] == auVar45[2]);
        auVar63[0xb] = -(auVar62[0xb] == auVar45[3]);
        auVar63[0xc] = -(auVar62[0xc] == auVar45[4]);
        auVar63[0xd] = -(auVar62[0xd] == auVar45[5]);
        auVar63[0xe] = -(auVar62[0xe] == auVar45[6]);
        auVar63[0xf] = -(auVar62[0xf] == auVar45[7]);
        uVar35 = (ushort)(SUB161(auVar63 >> 7,0) & 1) | (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe | (ushort)(auVar63[0xf] >> 7) << 0xf
        ;
        uVar13 = (uint)uVar35;
        if (uVar35 != 0) {
          if (bStack_2d8 == 0x1a) {
            do {
              uVar25 = 0;
              for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar25 = uVar25 + 1;
              }
              uVar19 = uVar25 + uVar18 & uVar15;
              if (*(char *)(lVar14 + -0x48 + uVar19 * -0x48) == '\x1a') goto LAB_1408d5c91;
              uVar35 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar35);
            } while (uVar35 != 0);
          }
          else {
            do {
              uVar25 = 0;
              for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar25 = uVar25 + 1;
              }
              uVar19 = uVar25 + uVar18 & uVar15;
              bVar42 = *(byte *)(lVar14 + -0x48 + uVar19 * -0x48);
              if (((bVar42 != 0x1a) && (bStack_2d8 == bVar42)) &&
                 (cStack_2d7 == *(char *)(lVar14 + uVar19 * -0x48 + -0x47))) goto LAB_1408d5c91;
              uVar35 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar35);
            } while (uVar35 != 0);
          }
        }
        auVar55[0] = -(auVar62[0] == -1);
        auVar55[1] = -(auVar62[1] == -1);
        auVar55[2] = -(auVar62[2] == -1);
        auVar55[3] = -(auVar62[3] == -1);
        auVar55[4] = -(auVar62[4] == -1);
        auVar55[5] = -(auVar62[5] == -1);
        auVar55[6] = -(auVar62[6] == -1);
        auVar55[7] = -(auVar62[7] == -1);
        auVar55[8] = -(auVar62[8] == -1);
        auVar55[9] = -(auVar62[9] == -1);
        auVar55[10] = -(auVar62[10] == -1);
        auVar55[0xb] = -(auVar62[0xb] == -1);
        auVar55[0xc] = -(auVar62[0xc] == -1);
        auVar55[0xd] = -(auVar62[0xd] == -1);
        auVar55[0xe] = -(auVar62[0xe] == -1);
        auVar55[0xf] = -(auVar62[0xf] == -1);
        if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 || (SUB161(auVar55 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar55 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar55 >> 0x1f,0) & 1) != 0) || (SUB161(auVar55 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar55 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar55 >> 0x37,0) & 1) != 0) || (SUB161(auVar55 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar55 >> 0x47,0) & 1) != 0) || (SUB161(auVar55 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar55 >> 0x57,0) & 1) != 0) || (SUB161(auVar55 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar55 >> 0x67,0) & 1) != 0) || (SUB161(auVar55 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar55 >> 0x77,0) & 1) != 0) || auVar55[0xf] < '\0') break;
        uVar18 = uVar18 + lVar40 + 0x10;
        lVar40 = lVar40 + 0x10;
      }
    }
    bStack_238 = (byte)&bStack_2d8;
    uStack_237 = (ushort)((ulonglong)&bStack_2d8 >> 8);
    uStack_235 = (undefined4)((ulonglong)&bStack_2d8 >> 0x18);
    uStack_231._0_1_ = (undefined1)((ulonglong)&bStack_2d8 >> 0x38);
    uStack_231 = CONCAT31(0x8d4390,(undefined1)uStack_231);
    uStack_22d = 0x140;
    uStack_229 = 0;
    uStack_f4 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14301950d,&bStack_238,&UNK_143019558);
  }
  goto LAB_1408d762a;
LAB_1408d5c91:
  plVar32 = *(longlong **)(lVar14 + -0x28 + uVar19 * -0x48);
  LOCK();
  lVar14 = *plVar32;
  *plVar32 = *plVar32 + 1;
  UNLOCK();
  if (*plVar32 != 0 && SCARRY8(lVar14,1) == *plVar32 < 0) {
    uStack_2d0 = (float)lStack_150;
    bStack_2d8 = (byte)uStack_158;
    cStack_2d7 = (char)((ulonglong)uStack_158 >> 8);
    uStack_2d6 = (ushort)((ulonglong)uStack_158 >> 0x10);
    uStack_2d4 = (undefined4)((ulonglong)uStack_158 >> 0x20);
    bStack_238 = SUB41(_DAT_143012440,0);
    uStack_237 = (ushort)((uint)_DAT_143012440 >> 8);
    uStack_235 = (undefined4)(CONCAT44(_UNK_143012444,_DAT_143012440) >> 0x18);
    uStack_231._1_3_ = SUB43(_UNK_143012448,0);
    uStack_231 = CONCAT31(uStack_231._1_3_,(char)((uint)_UNK_143012444 >> 0x18));
    uStack_22d = (uint)(CONCAT44(_UNK_14301244c,_UNK_143012448) >> 0x18);
    uStack_229 = (undefined1)((uint)_UNK_14301244c >> 0x18);
    uStack_f4 = 0;
    pdb_1408f3120(plVar17,plStack_110,plVar32,&bStack_2d8,&bStack_238);
    uStack_22d = 0;
    uStack_235 = 0;
    uStack_231 = 0;
    uStack_2d0 = 0;
    uStack_2cc = uStack_2cc & 0xff000000;
    bStack_2d8 = bStack_238;
    cStack_2d7 = (char)uStack_237;
    uStack_2d6 = uStack_237 >> 8;
    uStack_2d4 = 0;
    lVar14 = plVar17[0x18];
    if (lVar14 == plVar17[0x16]) {
      pdb_142d8ddd0(plVar17 + 0x16);
    }
    lVar40 = plVar17[0x17];
    lVar26 = lVar14 * 0x170;
    *(undefined8 *)(lVar40 + lVar26) = 0;
    *(undefined8 *)(lVar40 + 0x10 + lVar26) = 0;
    *(undefined8 *)(lVar40 + 0x20 + lVar26) = 0;
    *(undefined8 *)(lVar40 + 0x30 + lVar26) = 0;
    *(undefined4 *)(lVar40 + 0x40 + lVar26) = 0;
    *(undefined4 *)(lVar40 + 0x50 + lVar26) = 0;
    *(undefined4 *)(lVar40 + 0x60 + lVar26) = 0;
    *(undefined4 *)(lVar40 + 0x70 + lVar26) = 2;
    *(undefined **)(lVar40 + 0x90 + lVar26) = &UNK_143019798;
    *(undefined8 *)(lVar40 + 0x98 + lVar26) = 0x19;
    *(undefined **)(lVar40 + 0xa0 + lVar26) = &UNK_14330daf5;
    *(undefined8 *)(lVar40 + 0xa8 + lVar26) = 0x16;
    plVar32 = (longlong *)(lVar40 + 0xb0 + lVar26);
    *plVar32 = uStack_168;
    plVar32[1] = uStack_160;
    plVar32 = (longlong *)(lVar40 + 0xc0 + lVar26);
    *plVar32 = uStack_158;
    plVar32[1] = lStack_150;
    plVar32 = (longlong *)(lVar40 + 0xd0 + lVar26);
    *plVar32 = lStack_148;
    plVar32[1] = uStack_140;
    *(undefined4 *)(lVar40 + 0xe0 + lVar26) = 0;
    *(undefined4 *)(lVar40 + 0xe8 + lVar26) = 0;
    *(undefined1 *)(lVar40 + 0x105 + lVar26) = 2;
    *(undefined4 *)(lVar40 + 0x108 + lVar26) = 0;
    *(undefined1 *)(lVar40 + 0x15c + lVar26) = 2;
    *(ulonglong *)(lVar40 + 0x15d + lVar26) =
         CONCAT44(uStack_2d4,CONCAT22(uStack_2d6,CONCAT11(cStack_2d7,bStack_2d8)));
    *(ulonglong *)(lVar40 + 0x164 + lVar26) =
         CONCAT35((undefined3)uStack_2cc,CONCAT41(uStack_2d0,uStack_2d4._3_1_));
    *(undefined1 *)(lVar40 + 0x16c + lVar26) = 2;
    *(undefined1 *)(lVar40 + 0x16e + lVar26) = uStack_f1;
    *(undefined1 *)(lVar40 + 0x16f + lVar26) = 0;
    lVar26 = lVar14 + 1;
    plVar17[0x18] = lVar26;
    uStack_158 = CONCAT44(uStack_158._4_4_ + _DAT_14300a33c,(float)uStack_158);
    uStack_22d = 0;
    uStack_235 = 0;
    uStack_231 = 0;
    plStack_100 = (longlong *)
                  CONCAT44(plStack_100._4_4_,(int)plStack_100 + *(int *)(lStack_130 + -0xc));
    uStack_2d0 = 0;
    uStack_2cc = uStack_2cc & 0xff000000;
    bStack_2d8 = bStack_238;
    cStack_2d7 = (char)uStack_237;
    uStack_2d6 = uStack_237 >> 8;
    uStack_2d4 = 0;
    if (lVar26 == plVar17[0x16]) {
      pdb_142d8ddd0(plVar17 + 0x16);
    }
    lVar40 = plVar17[0x17];
    lVar26 = lVar26 * 0x170;
    *(undefined8 *)(lVar40 + lVar26) = 0;
    *(undefined8 *)(lVar40 + 0x10 + lVar26) = 0;
    *(undefined8 *)(lVar40 + 0x20 + lVar26) = 0;
    *(undefined8 *)(lVar40 + 0x30 + lVar26) = 0;
    *(undefined4 *)(lVar40 + 0x40 + lVar26) = 0;
    *(undefined4 *)(lVar40 + 0x50 + lVar26) = 0;
    *(undefined4 *)(lVar40 + 0x60 + lVar26) = 0;
    *(undefined4 *)(lVar40 + 0x70 + lVar26) = 2;
    *(undefined **)(lVar40 + 0x90 + lVar26) = &UNK_1430197b1;
    *(undefined8 *)(lVar40 + 0x98 + lVar26) = 0x1a;
    *(undefined **)(lVar40 + 0xa0 + lVar26) = &UNK_14330db0b;
    *(undefined8 *)(lVar40 + 0xa8 + lVar26) = 0x1c;
    plVar32 = (longlong *)(lVar40 + 0xb0 + lVar26);
    *plVar32 = uStack_168;
    plVar32[1] = uStack_160;
    plVar32 = (longlong *)(lVar40 + 0xc0 + lVar26);
    *plVar32 = uStack_158;
    plVar32[1] = lStack_150;
    plVar32 = (longlong *)(lVar40 + 0xd0 + lVar26);
    *plVar32 = lStack_148;
    plVar32[1] = uStack_140;
    *(undefined4 *)(lVar40 + 0xe0 + lVar26) = 1;
    *(undefined4 *)(lVar40 + 0xe4 + lVar26) = uStack_134;
    *(undefined4 *)(lVar40 + 0xe8 + lVar26) = 1;
    *(int *)(lVar40 + 0xec + lVar26) = (int)plStack_100;
    *(undefined1 *)(lVar40 + 0x105 + lVar26) = 2;
    *(undefined4 *)(lVar40 + 0x108 + lVar26) = 0;
    *(undefined1 *)(lVar40 + 0x15c + lVar26) = 2;
    *(ulonglong *)(lVar40 + 0x15d + lVar26) =
         CONCAT44(uStack_2d4,CONCAT22(uStack_2d6,CONCAT11(cStack_2d7,bStack_2d8)));
    *(ulonglong *)(lVar40 + 0x164 + lVar26) =
         CONCAT35((undefined3)uStack_2cc,CONCAT41(uStack_2d0,uStack_2d4._3_1_));
LAB_1408d6b9b:
    *(undefined1 *)(lVar40 + 0x16c + lVar26) = 2;
    *(undefined1 *)(lVar40 + 0x16e + lVar26) = uStack_f1;
    *(undefined1 *)(lVar40 + 0x16f + lVar26) = 0;
    plVar17[0x18] = lVar14 + 2;
    pauVar28 = pauStack_190;
    lVar14 = lStack_198;
    uVar15 = uStack_188;
    pauVar31 = pauStack_180;
    goto LAB_1408d4a4f;
  }
  goto LAB_1408d762a;
LAB_1408d634c:
  plVar32 = *(longlong **)(lVar14 + -0x28 + uVar19 * -0x48);
  LOCK();
  lVar14 = *plVar32;
  *plVar32 = *plVar32 + 1;
  UNLOCK();
  if (*plVar32 != 0 && SCARRY8(lVar14,1) == *plVar32 < 0) {
    uStack_2d0 = (float)lStack_150;
    bStack_2d8 = (byte)uStack_158;
    cStack_2d7 = (char)((ulonglong)uStack_158 >> 8);
    uStack_2d6 = (ushort)((ulonglong)uStack_158 >> 0x10);
    uStack_2d4 = (undefined4)((ulonglong)uStack_158 >> 0x20);
    fVar66 = (float)uStack_168;
    fVar49 = uStack_168._4_4_;
    fVar51 = (float)uStack_160;
    fVar58 = uStack_160._4_4_;
    bStack_238 = (byte)uStack_168;
    uStack_237 = (ushort)((ulonglong)uStack_168 >> 8);
    uStack_235 = (undefined4)((ulonglong)uStack_168 >> 0x18);
    uStack_231._1_3_ = (undefined3)uStack_160;
    uStack_231 = CONCAT31(uStack_231._1_3_,(char)((ulonglong)uStack_168 >> 0x38));
    uStack_22d = (uint)((ulonglong)uStack_160 >> 0x18);
    uStack_229 = (undefined1)((ulonglong)uStack_160 >> 0x38);
    uStack_f5 = 0;
    pdb_1408f3120(plVar17,plStack_110,plVar32,&bStack_2d8,&bStack_238);
    uStack_22d = 0;
    uStack_235 = 0;
    uStack_231 = 0;
    uStack_2d0 = 0;
    uStack_2cc = uStack_2cc & 0xff000000;
    bStack_2d8 = bStack_238;
    cStack_2d7 = (char)uStack_237;
    uStack_2d6 = uStack_237 >> 8;
    uStack_2d4 = 0;
    lVar14 = plVar17[0x18];
    if (lVar14 == plVar17[0x16]) {
      pdb_142d8ddd0(plVar17 + 0x16);
    }
    lVar40 = plVar17[0x17];
    lVar26 = lVar14 * 0x170;
    *(undefined8 *)(lVar40 + lVar26) = 0;
    *(undefined8 *)(lVar40 + 0x10 + lVar26) = 0;
    *(undefined8 *)(lVar40 + 0x20 + lVar26) = 1;
    *(undefined8 *)(lVar40 + 0x28 + lVar26) = 0xe14f8a4be230cb70;
    *(undefined8 *)(lVar40 + 0x30 + lVar26) = 0;
    *(undefined4 *)(lVar40 + 0x40 + lVar26) = 0;
    *(undefined4 *)(lVar40 + 0x50 + lVar26) = 0;
    *(undefined4 *)(lVar40 + 0x60 + lVar26) = 1;
    *(undefined8 *)(lVar40 + 100 + lVar26) = _DAT_14300bba0;
    *(undefined8 *)(lVar40 + 0x6c + lVar26) = 0x23ecccccd;
    *(undefined **)(lVar40 + 0x90 + lVar26) = &UNK_1430197cb;
    *(undefined8 *)(lVar40 + 0x98 + lVar26) = 0x1f;
    *(undefined **)(lVar40 + 0xa0 + lVar26) = &UNK_14330daf5;
    *(undefined8 *)(lVar40 + 0xa8 + lVar26) = 0x16;
    plVar32 = (longlong *)(lVar40 + 0xb0 + lVar26);
    *plVar32 = uStack_168;
    plVar32[1] = uStack_160;
    plVar32 = (longlong *)(lVar40 + 0xc0 + lVar26);
    *plVar32 = uStack_158;
    plVar32[1] = lStack_150;
    plVar32 = (longlong *)(lVar40 + 0xd0 + lVar26);
    *plVar32 = lStack_148;
    plVar32[1] = uStack_140;
    fVar43 = fVar51 * _DAT_143012470 * _DAT_142e377d0 + fVar49 * _DAT_143012460 * _DAT_142e377c0 +
             fVar66 * _DAT_143012450 * _DAT_142e377b0 + fVar58 * _DAT_143012440;
    fVar46 = fVar51 * _UNK_143012474 * _UNK_142e377d4 + fVar49 * _UNK_143012464 * _UNK_142e377c4 +
             fVar66 * _UNK_143012454 * _UNK_142e377b4 + fVar58 * _UNK_143012444;
    fVar47 = fVar51 * _UNK_143012478 * _UNK_142e377d8 + fVar49 * _UNK_143012468 * _UNK_142e377c8 +
             fVar66 * _UNK_143012458 * _UNK_142e377b8 + fVar58 * _UNK_143012448;
    fVar49 = fVar51 * _UNK_14301247c * _UNK_142e377dc + fVar49 * _UNK_14301246c * _UNK_142e377cc +
             fVar66 * _UNK_14301245c * _UNK_142e377bc + fVar58 * _UNK_14301244c;
    fVar68 = fVar47 * fVar47;
    fVar71 = fVar49 * fVar49;
    fVar73 = fVar46 * fVar46 + fVar43 * fVar43;
    fVar58 = (fVar71 - (fVar73 + fVar68)) * _DAT_143007998;
    fVar51 = fVar47 * 0.0 + fVar46 * 0.0 + fVar43 * _DAT_143007998;
    fVar51 = fVar51 + fVar51;
    fVar59 = fVar46 * _DAT_143012480;
    fVar66 = fVar47 * _UNK_143012484;
    fVar69 = fVar43 * _UNK_143012488;
    fVar74 = fVar47 * _DAT_143012490;
    fVar75 = fVar43 * _UNK_143012494;
    fVar76 = fVar46 * _UNK_143012498;
    *(undefined4 *)(lVar40 + 0xe0 + lVar26) = 0;
    *(undefined4 *)(lVar40 + 0xe8 + lVar26) = 0;
    *(undefined1 *)(lVar40 + 0x105 + lVar26) = 2;
    *(undefined4 *)(lVar40 + 0x108 + lVar26) = 0;
    *(undefined1 *)(lVar40 + 0x15c + lVar26) = 2;
    *(ulonglong *)(lVar40 + 0x15d + lVar26) =
         CONCAT44(uStack_2d4,CONCAT22(uStack_2d6,CONCAT11(cStack_2d7,bStack_2d8)));
    *(ulonglong *)(lVar40 + 0x164 + lVar26) =
         CONCAT35((undefined3)uStack_2cc,CONCAT41(uStack_2d0,uStack_2d4._3_1_));
    *(undefined1 *)(lVar40 + 0x16c + lVar26) = 2;
    *(undefined1 *)(lVar40 + 0x16e + lVar26) = uStack_f1;
    *(undefined1 *)(lVar40 + 0x16f + lVar26) = 0;
    lVar40 = lVar14 + 1;
    plVar17[0x18] = lVar40;
    uStack_168 = CONCAT44(fVar46,fVar43);
    uStack_160 = CONCAT44(fVar49,fVar47);
    fVar49 = fVar49 + fVar49;
    fVar66 = (float)((ulonglong)uStack_158 >> 0x20) + _UNK_1430124a4 +
             fVar49 * (fVar66 - fVar75) + fVar51 * fVar46 + (fVar71 - (fVar73 + fVar68)) * 0.0;
    uStack_158 = CONCAT44(fVar66,(float)uStack_158 + _DAT_1430124a0 +
                                 fVar49 * (fVar59 - fVar74) + fVar51 * fVar43 + fVar58);
    lStack_150 = CONCAT44(lStack_150._4_4_,
                          fVar49 * (fVar69 - fVar76) +
                          fVar51 * fVar47 + (fVar71 - (fVar73 + fVar68)) * 0.0 + (float)lStack_150);
    uStack_22d = 0;
    uStack_235 = 0;
    uStack_231 = 0;
    plStack_100 = (longlong *)
                  CONCAT44(plStack_100._4_4_,(int)plStack_100 + *(int *)(lStack_130 + -0xc));
    uStack_2d0 = 0;
    uStack_2cc = uStack_2cc & 0xff000000;
    bStack_2d8 = bStack_238;
    cStack_2d7 = (char)uStack_237;
    uStack_2d6 = uStack_237 >> 8;
    uStack_2d4 = 0;
    if (fVar66 <= 0.0) {
      fVar66 = 0.0;
    }
    if (_DAT_14301920c <= fVar66) {
      fVar66 = _DAT_14301920c;
    }
    fVar49 = fVar66 + _DAT_143019208;
    if (lVar40 == plVar17[0x16]) {
      pdb_142d8ddd0(plVar17 + 0x16);
    }
    lVar26 = plVar17[0x17];
    lVar40 = lVar40 * 0x170;
    *(undefined8 *)(lVar26 + lVar40) = 0;
    *(undefined8 *)(lVar26 + 0x10 + lVar40) = 0;
    *(undefined8 *)(lVar26 + 0x20 + lVar40) = 0;
    *(undefined8 *)(lVar26 + 0x30 + lVar40) = 0;
    *(undefined4 *)(lVar26 + 0x40 + lVar40) = 0;
    *(undefined4 *)(lVar26 + 0x50 + lVar40) = 0;
    *(undefined4 *)(lVar26 + 0x60 + lVar40) = 0;
    *(undefined4 *)(lVar26 + 0x70 + lVar40) = 0;
    *(int *)(lVar26 + 0x7c + lVar40) = (int)plStack_100;
    *(undefined4 *)(lVar26 + 0x80 + lVar40) = 0;
    *(float *)(lVar26 + 0x84 + lVar40) = fVar49;
    *(float *)(lVar26 + 0x88 + lVar40) = fVar66;
    *(undefined1 *)(lVar26 + 0x8c + lVar40) = 0;
    *(undefined **)(lVar26 + 0x90 + lVar40) = &UNK_1430195f8;
    *(undefined8 *)(lVar26 + 0x98 + lVar40) = 0x14;
    *(undefined **)(lVar26 + 0xa0 + lVar40) = &UNK_14330db27;
    *(undefined8 *)(lVar26 + 0xa8 + lVar40) = 0x1c;
    plVar32 = (longlong *)(lVar26 + 0xb0 + lVar40);
    *plVar32 = uStack_168;
    plVar32[1] = uStack_160;
    plVar32 = (longlong *)(lVar26 + 0xc0 + lVar40);
    *plVar32 = uStack_158;
    plVar32[1] = lStack_150;
    plVar32 = (longlong *)(lVar26 + 0xd0 + lVar40);
    *plVar32 = lStack_148;
    plVar32[1] = uStack_140;
    *(undefined4 *)(lVar26 + 0xe0 + lVar40) = 1;
    *(undefined4 *)(lVar26 + 0xe4 + lVar40) = uStack_134;
    *(undefined4 *)(lVar26 + 0xe8 + lVar40) = 0;
    *(undefined1 *)(lVar26 + 0x105 + lVar40) = 2;
    *(undefined4 *)(lVar26 + 0x108 + lVar40) = 0;
    *(undefined1 *)(lVar26 + 0x15c + lVar40) = 2;
    *(ulonglong *)(lVar26 + 0x164 + lVar40) =
         CONCAT35((undefined3)uStack_2cc,CONCAT41(uStack_2d0,uStack_2d4._3_1_));
    *(ulonglong *)(lVar26 + 0x15d + lVar40) =
         CONCAT44(uStack_2d4,CONCAT22(uStack_2d6,CONCAT11(cStack_2d7,bStack_2d8)));
    *(undefined1 *)(lVar26 + 0x16c + lVar40) = 2;
    *(undefined1 *)(lVar26 + 0x16e + lVar40) = uStack_f1;
    *(undefined1 *)(lVar26 + 0x16f + lVar40) = 0;
    plVar17[0x18] = lVar14 + 2;
    pauVar28 = pauStack_190;
    lVar14 = lStack_198;
    uVar15 = uStack_188;
    pauVar31 = pauStack_180;
    goto LAB_1408d4a4f;
  }
LAB_1408d762a:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

