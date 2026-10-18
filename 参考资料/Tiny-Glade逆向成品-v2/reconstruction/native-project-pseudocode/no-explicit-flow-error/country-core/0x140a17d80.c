// VA 0x140a17d80, PDB extent 9166 bytes
// country_core::systems::wall::ui_continue_wall::ui_continue_wall
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/ui_continue_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::wall::ui_continue_wall::ui_continue_wall
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/ui_continue_wall.rs
   Extent: 9166 */

void pdb_140a17d80(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12,
                  longlong *param_13,undefined8 *param_14,longlong *param_15)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  byte ***pppbVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  char cVar17;
  ulonglong uVar18;
  byte ***pppbVar19;
  code *pcVar20;
  byte *pbVar21;
  ulonglong uVar22;
  int iVar23;
  byte *pbVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined4 *puVar27;
  undefined1 (*pauVar28) [16];
  undefined8 uVar29;
  ulonglong uVar30;
  longlong lVar31;
  byte **ppbVar32;
  uint uVar33;
  ulonglong uVar34;
  ushort uVar35;
  longlong lVar36;
  byte ***pppbVar37;
  longlong lVar38;
  longlong *plVar39;
  longlong *plVar40;
  ulonglong uVar41;
  undefined1 (*pauVar42) [16];
  byte ***pppbVar43;
  uint uVar44;
  undefined4 uVar45;
  byte bVar46;
  float fVar47;
  undefined1 auVar48 [16];
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined4 uVar66;
  undefined4 uVar67;
  longlong lStack_478;
  longlong lStack_470;
  undefined1 auStack_468 [16];
  longlong lStack_458;
  longlong lStack_450;
  longlong lStack_448;
  longlong lStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  byte ***pppbStack_418;
  undefined4 *puStack_410;
  byte *pbStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined4 *puStack_3f0;
  longlong lStack_3e8;
  undefined4 *puStack_3e0;
  longlong lStack_3d8;
  byte **ppbStack_3d0;
  longlong lStack_3c8;
  code *pcStack_3c0;
  byte **ppbStack_3b8;
  byte *pbStack_3b0;
  byte ***pppbStack_3a8;
  byte ***pppbStack_398;
  byte *pbStack_390;
  byte ***pppbStack_388;
  ulonglong uStack_380;
  byte *pbStack_378;
  ulonglong uStack_370;
  undefined4 uStack_368;
  undefined4 uStack_364;
  longlong lStack_360;
  undefined4 *puStack_358;
  longlong *plStack_350;
  longlong lStack_348;
  longlong lStack_340;
  longlong *plStack_338;
  longlong lStack_330;
  longlong lStack_328;
  longlong lStack_320;
  longlong lStack_318;
  byte ***pppbStack_310;
  longlong lStack_308;
  byte ***pppbStack_300;
  byte ***pppbStack_2f8;
  byte **ppbStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  byte ***pppbStack_2d0;
  undefined *puStack_2c8;
  longlong lStack_2c0;
  longlong lStack_2b8;
  longlong lStack_2b0;
  longlong lStack_2a8;
  longlong lStack_2a0;
  longlong lStack_298;
  longlong lStack_290;
  longlong lStack_288;
  longlong lStack_280;
  byte ****ppppbStack_270;
  byte **ppbStack_268;
  byte ****ppppbStack_260;
  code *pcStack_258;
  byte ***pppbStack_250;
  byte ***pppbStack_248;
  undefined *puStack_240;
  longlong lStack_238;
  longlong lStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  longlong lStack_220;
  longlong lStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  longlong lStack_208;
  longlong lStack_200;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1e8;
  undefined4 uStack_1e4;
  byte ***pppbStack_1e0;
  undefined4 uStack_1d8;
  undefined2 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  longlong *plStack_1b0;
  byte *pbStack_1a8;
  byte ***pppbStack_1a0;
  undefined4 uStack_198;
  undefined4 *puStack_190;
  undefined4 *puStack_188;
  longlong lStack_180;
  int *piStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong lStack_168;
  longlong *plStack_160;
  int *piStack_158;
  undefined8 *puStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  longlong *plStack_130;
  longlong *plStack_128;
  undefined4 uStack_11c;
  longlong lStack_118;
  undefined4 *puStack_110;
  byte **ppbStack_108;
  char cStack_fa;
  char cStack_f9;
  char *pcStack_f8;
  byte ***pppbStack_f0;
  byte ***pppbStack_e8;
  byte *pbStack_e0;
  undefined4 uStack_d8;
  undefined1 uStack_d1;
  byte ***pppbStack_d0;
  undefined1 uStack_c2;
  char cStack_c1;
  undefined8 uStack_c0;
  
  uStack_c0 = 0xfffffffffffffffe;
  plStack_160 = (longlong *)*param_3;
  pbStack_e0 = (byte *)param_3[4];
  plStack_1b0 = (longlong *)*param_5;
  puStack_410 = (undefined4 *)param_5[2];
  uStack_1c0 = *(undefined4 *)((longlong)param_5 + 0x1c);
  pcStack_f8 = (char *)param_5[4];
  puStack_110 = (undefined4 *)param_5[6];
  uStack_d8 = *(undefined4 *)((longlong)param_5 + 0x3c);
  plStack_128 = (longlong *)*param_10;
  plStack_130 = (longlong *)param_10[4];
  plStack_338 = (longlong *)param_10[8];
  piStack_158 = (int *)*param_14;
  lStack_148 = param_14[4];
  puStack_190 = (undefined4 *)param_14[6];
  uStack_16c = *(undefined4 *)((longlong)param_14 + 0x3c);
  lStack_140 = param_14[8];
  puStack_358 = (undefined4 *)param_14[10];
  uStack_170 = *(undefined4 *)((longlong)param_14 + 0x5c);
  lStack_478 = param_15[8];
  lStack_470 = param_15[9];
  auStack_468 = *(undefined1 (*) [16])(param_15 + 10);
  lStack_458 = param_15[0xc];
  lStack_450 = param_15[0xd];
  lStack_448 = param_15[0xe];
  lStack_440 = param_15[0xf];
  lStack_168 = *param_15;
  pppbVar43 = (byte ***)param_15[2];
  uStack_1bc = *(undefined4 *)((longlong)param_15 + 0x1c);
  ppbVar32 = (byte **)param_15[4];
  pppbVar37 = (byte ***)*param_1;
  if ((*(char *)pppbVar37 == '\x0f') ||
     ((*(char *)pppbVar37 == '\x01' && (*(char *)((longlong)pppbVar37 + 1) == '\0')))) {
    if (*pcStack_f8 != '\0') {
      if (*pcStack_f8 != '\x03') goto LAB_140a17fd9;
      *puStack_110 = uStack_d8;
      *pcStack_f8 = '\0';
    }
    if (*(char *)(*param_9 + 8) == '\0') {
      puVar4 = (ulonglong *)*param_11;
      lVar31 = param_11[1];
      uVar22 = *puVar4;
      uVar26 = 0;
      uVar18 = uVar22 - *(ulonglong *)(lVar31 + 0x18);
      if (uVar22 < *(ulonglong *)(lVar31 + 0x18)) {
        uVar18 = uVar26;
      }
      uVar34 = uVar22 - *(ulonglong *)(lVar31 + 0x38);
      if (uVar22 < *(ulonglong *)(lVar31 + 0x38)) {
        uVar34 = uVar26;
      }
      uVar22 = *(ulonglong *)(lVar31 + 0x30);
      uVar41 = uVar22 - uVar34;
      if (uVar22 < uVar34) {
        uVar41 = uVar26;
      }
      uVar5 = *(ulonglong *)(lVar31 + 0x10);
      uVar30 = uVar5 - uVar18;
      if (uVar5 < uVar18) {
        uVar30 = uVar26;
      }
      uVar26 = *(ulonglong *)(lVar31 + 0x40);
      *puVar4 = uVar26 - (uVar30 + uVar41);
      ppbStack_108 = ppbVar32;
      pppbStack_e8 = pppbVar43;
      if ((uVar5 < uVar18 || uVar5 - uVar18 == 0) && (uVar22 < uVar34 || uVar22 - uVar34 == 0)) {
LAB_140a17fd9:
        uVar12 = _DAT_142e3b1d8;
        uVar3 = _DAT_142e3783c;
        uVar45 = _DAT_142e36f50;
        pauVar28 = *(undefined1 (**) [16])pbStack_e0;
        auVar48 = *pauVar28;
        uVar44 = ~(uint)(ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar48[0xf] >> 7) << 0xf);
        uStack_400 = *param_2;
        uStack_3f8 = *param_12;
        lStack_348 = *param_8;
        uStack_11c = *(undefined4 *)((longlong)param_7 + 0x1c);
        lStack_138 = *param_7;
        puStack_188 = (undefined4 *)param_7[2];
        uStack_1b8 = *(undefined4 *)((longlong)param_13 + 0x1c);
        lStack_330 = *param_13;
        puStack_3f0 = (undefined4 *)param_13[2];
        uStack_1b4 = *(undefined4 *)((longlong)param_6 + 0x1c);
        lStack_328 = *param_6;
        puStack_3e0 = (undefined4 *)param_6[2];
        cStack_c1 = '\x02';
        pauVar42 = pauVar28 + 1;
        lStack_180 = lStack_138 + 0x20;
        pbStack_408 = pbStack_e0 + 0x20;
        plStack_350 = plStack_160 + 4;
        lStack_3e8 = lStack_330 + 0x20;
        lStack_3d8 = lStack_168 + 0x30;
        ppbStack_3d0 = ppbVar32 + 0x12;
        lStack_340 = lStack_348 + 4;
        piStack_178 = piStack_158 + 1;
        lStack_320 = lStack_148 + 0x20;
        lStack_318 = lStack_140 + 0x20;
        lStack_3c8 = lStack_328 + 0x20;
        pbVar21 = pbStack_e0;
        lVar25 = *(longlong *)(pbStack_e0 + 0x18);
        puStack_150 = param_4;
        lVar31 = lStack_360;
joined_r0x000140a18188:
        lStack_360 = lVar25;
        pppbStack_d0 = pppbVar37;
        if (lStack_360 != 0) {
LAB_140a182c7:
          if ((short)uVar44 == 0) {
            do {
              auVar48 = *pauVar42;
              pauVar28 = pauVar28 + -0x2b0;
              pauVar42 = pauVar42 + 1;
              uVar44 = (ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar48[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar44 == 0);
          }
          uVar33 = 0;
          for (uVar10 = uVar44; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar33 = uVar33 + 1;
          }
          uVar44 = uVar44 - 1 & uVar44;
          lStack_360 = lStack_360 + -1;
          pppbVar6 = *(byte ****)pauVar28[(ulonglong)uVar33 * -0x2b + -0x2b];
          pppbStack_418 = pppbVar6;
          if (((*(char *)pppbVar37 != '\0') || (*(int *)(pppbVar37 + 1) != 1)) ||
             ((byte ***)pppbVar37[2] == pppbVar6)) {
            ppppbStack_270 = (byte ****)pppbVar6;
            if (*(longlong *)(pbVar21 + 0x18) != 0) {
              uVar22 = pdb_1400af0a0(pbStack_408,&ppppbStack_270);
              lVar36 = *(longlong *)pbStack_e0;
              bVar46 = (byte)(uVar22 >> 0x39);
              auVar48 = ZEXT216(CONCAT11(bVar46,bVar46));
              auVar48 = pshuflw(auVar48,auVar48,0);
              lVar31 = 0;
              while( true ) {
                uVar22 = uVar22 & *(ulonglong *)(pbStack_e0 + 8);
                auVar63 = *(undefined1 (*) [16])(lVar36 + uVar22);
                auVar53[0] = -(auVar63[0] == auVar48[0]);
                auVar53[1] = -(auVar63[1] == auVar48[1]);
                auVar53[2] = -(auVar63[2] == auVar48[2]);
                auVar53[3] = -(auVar63[3] == auVar48[3]);
                auVar53[4] = -(auVar63[4] == auVar48[4]);
                auVar53[5] = -(auVar63[5] == auVar48[5]);
                auVar53[6] = -(auVar63[6] == auVar48[6]);
                auVar53[7] = -(auVar63[7] == auVar48[7]);
                auVar53[8] = -(auVar63[8] == auVar48[0]);
                auVar53[9] = -(auVar63[9] == auVar48[1]);
                auVar53[10] = -(auVar63[10] == auVar48[2]);
                auVar53[0xb] = -(auVar63[0xb] == auVar48[3]);
                auVar53[0xc] = -(auVar63[0xc] == auVar48[4]);
                auVar53[0xd] = -(auVar63[0xd] == auVar48[5]);
                auVar53[0xe] = -(auVar63[0xe] == auVar48[6]);
                auVar53[0xf] = -(auVar63[0xf] == auVar48[7]);
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
                uVar33 = (uint)uVar35;
                while (uVar35 != 0) {
                  uVar10 = 0;
                  for (uVar11 = uVar33; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                    uVar10 = uVar10 + 1;
                  }
                  lVar25 = (uVar10 + uVar22 & *(ulonglong *)(pbStack_e0 + 8)) * -0x2b0;
                  if (pppbVar6 == *(byte ****)(lVar36 + -0x2b0 + lVar25)) {
                    lVar36 = lVar36 + lVar25;
                    if ((*(ulonglong *)(lVar36 + -0x298) < 2) ||
                       (*(float *)(lVar36 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_1430371e8);
                    }
                    pbVar21 = pbStack_e0;
                    if ((*(char *)(lVar36 + -7) != '\0') ||
                       (ppppbStack_270 = (byte ****)pppbVar6, plStack_160[3] == 0))
                    goto LAB_140a18500;
                    uVar22 = pdb_1400af0a0(plStack_350,&ppppbStack_270);
                    bVar46 = (byte)(uVar22 >> 0x39);
                    auVar48 = ZEXT216(CONCAT11(bVar46,bVar46));
                    auVar48 = pshuflw(auVar48,auVar48,0);
                    lVar31 = 0;
                    goto LAB_140a18485;
                  }
                  uVar35 = (ushort)(uVar33 - 1) & (ushort)uVar33;
                  uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar35);
                }
                auVar50[0] = -(auVar63[0] == -1);
                auVar50[1] = -(auVar63[1] == -1);
                auVar50[2] = -(auVar63[2] == -1);
                auVar50[3] = -(auVar63[3] == -1);
                auVar50[4] = -(auVar63[4] == -1);
                auVar50[5] = -(auVar63[5] == -1);
                auVar50[6] = -(auVar63[6] == -1);
                auVar50[7] = -(auVar63[7] == -1);
                auVar50[8] = -(auVar63[8] == -1);
                auVar50[9] = -(auVar63[9] == -1);
                auVar50[10] = -(auVar63[10] == -1);
                auVar50[0xb] = -(auVar63[0xb] == -1);
                auVar50[0xc] = -(auVar63[0xc] == -1);
                auVar50[0xd] = -(auVar63[0xd] == -1);
                auVar50[0xe] = -(auVar63[0xe] == -1);
                auVar50[0xf] = -(auVar63[0xf] == -1);
                if ((((((((((((((((SUB161(auVar50 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar50 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar50 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar50 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar50 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar50 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar50 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar50 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar50 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar50 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar50 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar50 >> 0x5f,0) & 1) != 0) || (SUB161(auVar50 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar50 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar50 >> 0x77,0) & 1) != 0) || auVar50[0xf] < '\0') break;
                uVar22 = uVar22 + lVar31 + 0x10;
                lVar31 = lVar31 + 0x10;
              }
            }
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143037200);
          }
LAB_140a18500:
          pppbVar37 = pppbStack_d0;
          lVar25 = lStack_360;
          lVar31 = lStack_360;
          if (*pcStack_f8 != '\0') {
            *puStack_188 = uStack_11c;
            lVar31 = *(longlong *)(lStack_138 + 0x30);
            uVar29 = *(undefined8 *)(lStack_138 + 0x40);
            if (lVar31 == *(longlong *)(lStack_138 + 0x20)) {
              pdb_142d7e980(lStack_180);
              pbVar21 = pbStack_e0;
            }
            lVar25 = *(longlong *)(lStack_138 + 0x28);
            *(undefined8 *)(lVar25 + lVar31 * 0x10) = uVar29;
            *(undefined1 *)(lVar25 + 8 + lVar31 * 0x10) = 0;
            *(longlong *)(lStack_138 + 0x30) = lVar31 + 1;
            *(longlong *)(lStack_138 + 0x40) = *(longlong *)(lStack_138 + 0x40) + 1;
            *puStack_110 = uStack_d8;
            pppbVar37 = pppbStack_d0;
            lVar25 = lStack_360;
            lVar31 = lStack_360;
            if ((byte)(*pcStack_f8 - 1U) < 2) {
              *pcStack_f8 = '\x03';
            }
          }
          goto joined_r0x000140a18188;
        }
LAB_140a1818e:
        lStack_360 = lVar31;
        pppbVar43 = pppbStack_f0;
        plVar40 = plStack_160;
        if (cStack_c1 == '\x02') {
          return;
        }
        ppppbStack_270 = (byte ****)pppbStack_f0;
        if (plStack_160[3] == 0) {
LAB_140a18ff5:
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1430371d0);
        }
        uVar18 = pdb_1400af0a0(plStack_350,&ppppbStack_270);
        lVar31 = *plVar40;
        uVar22 = plVar40[1];
        bVar46 = (byte)(uVar18 >> 0x39);
        auVar48 = ZEXT216(CONCAT11(bVar46,bVar46));
        auVar48 = pshuflw(auVar48,auVar48,0);
        lVar25 = 0;
        while( true ) {
          uVar18 = uVar18 & uVar22;
          auVar63 = *(undefined1 (*) [16])(lVar31 + uVar18);
          auVar60[0] = -(auVar63[0] == auVar48[0]);
          auVar60[1] = -(auVar63[1] == auVar48[1]);
          auVar60[2] = -(auVar63[2] == auVar48[2]);
          auVar60[3] = -(auVar63[3] == auVar48[3]);
          auVar60[4] = -(auVar63[4] == auVar48[4]);
          auVar60[5] = -(auVar63[5] == auVar48[5]);
          auVar60[6] = -(auVar63[6] == auVar48[6]);
          auVar60[7] = -(auVar63[7] == auVar48[7]);
          auVar60[8] = -(auVar63[8] == auVar48[0]);
          auVar60[9] = -(auVar63[9] == auVar48[1]);
          auVar60[10] = -(auVar63[10] == auVar48[2]);
          auVar60[0xb] = -(auVar63[0xb] == auVar48[3]);
          auVar60[0xc] = -(auVar63[0xc] == auVar48[4]);
          auVar60[0xd] = -(auVar63[0xd] == auVar48[5]);
          auVar60[0xe] = -(auVar63[0xe] == auVar48[6]);
          auVar60[0xf] = -(auVar63[0xf] == auVar48[7]);
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
          uVar44 = (uint)uVar35;
          if (uVar35 != 0) break;
LAB_140a18238:
          auVar52[0] = -(auVar63[0] == -1);
          auVar52[1] = -(auVar63[1] == -1);
          auVar52[2] = -(auVar63[2] == -1);
          auVar52[3] = -(auVar63[3] == -1);
          auVar52[4] = -(auVar63[4] == -1);
          auVar52[5] = -(auVar63[5] == -1);
          auVar52[6] = -(auVar63[6] == -1);
          auVar52[7] = -(auVar63[7] == -1);
          auVar52[8] = -(auVar63[8] == -1);
          auVar52[9] = -(auVar63[9] == -1);
          auVar52[10] = -(auVar63[10] == -1);
          auVar52[0xb] = -(auVar63[0xb] == -1);
          auVar52[0xc] = -(auVar63[0xc] == -1);
          auVar52[0xd] = -(auVar63[0xd] == -1);
          auVar52[0xe] = -(auVar63[0xe] == -1);
          auVar52[0xf] = -(auVar63[0xf] == -1);
          if ((((((((((((((((SUB161(auVar52 >> 7,0) & 1) != 0 || (SUB161(auVar52 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar52 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar52 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar52 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar52 >> 0x2f,0) & 1) != 0) || (SUB161(auVar52 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar52 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar52 >> 0x47,0) & 1) != 0) || (SUB161(auVar52 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar52 >> 0x57,0) & 1) != 0) || (SUB161(auVar52 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar52 >> 0x67,0) & 1) != 0) || (SUB161(auVar52 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar52 >> 0x77,0) & 1) != 0) || auVar52[0xf] < '\0') goto LAB_140a18ff5;
          uVar18 = uVar18 + lVar25 + 0x10;
          lVar25 = lVar25 + 0x10;
        }
        while( true ) {
          uVar33 = 0;
          for (uVar10 = uVar44; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar33 = uVar33 + 1;
          }
          lVar36 = (uVar33 + uVar18 & uVar22) * -0x78;
          if (pppbVar43 == *(byte ****)(lVar31 + -0x78 + lVar36)) break;
          uVar35 = (ushort)(uVar44 - 1) & (ushort)uVar44;
          uVar44 = CONCAT22((short)(uVar44 - 1 >> 0x10),uVar35);
          if (uVar35 == 0) goto LAB_140a18238;
        }
        lVar31 = lVar31 + lVar36;
        pppbVar37 = *(byte ****)(lVar31 + -0x60);
        uVar22 = (longlong)pppbVar37 * 8;
        bVar9 = (ulonglong)pppbVar37 >> 0x3d != 0;
        if (0x7ffffffffffffffc < uVar22 || bVar9) {
          uVar29 = 0;
LAB_140a18fea:
          pdb_142dc7e2a(uVar29,uVar22);
          goto LAB_140a18ff5;
        }
        uVar7 = *(undefined8 *)(lVar31 + -0x68);
        if (uVar22 == 0) {
          pbVar21 = (byte *)0x4;
          pppbStack_d0 = (byte ***)0x0;
          pppbVar6 = pppbStack_d0;
        }
        else {
          pdb_14007ee60(CONCAT71(0x7fffffffffffff,0x7ffffffffffffffc < uVar22 || bVar9),uVar7);
          uVar29 = 4;
          pbVar21 = pub_1406abab0(uVar22,4);
          pppbVar6 = pppbVar37;
          if (pbVar21 == (byte *)0x0) goto LAB_140a18fea;
        }
        pppbStack_d0 = pppbVar6;
        if (pppbVar37 != (byte ***)0x0) {
          pub_142e32760(pbVar21,uVar7);
        }
        uVar18 = *(ulonglong *)(lVar31 + -0x48);
        uVar22 = uVar18 * 4;
        pbStack_e0 = pbVar21;
        if (0x7ffffffffffffffc < uVar22 || uVar18 >> 0x3e != 0) {
          uVar29 = 0;
LAB_140a19099:
          pdb_142dc7e2a(uVar29,uVar22);
          goto LAB_140a19b6d;
        }
        if (uVar22 == 0) {
          pbVar21 = (byte *)0x4;
          goto LAB_140a19190;
        }
        puVar8 = *(undefined4 **)(lVar31 + -0x50);
        pdb_14007ee60();
        uVar29 = 4;
        pbVar21 = pub_1406abab0(uVar22,4);
        if (pbVar21 == (byte *)0x0) goto LAB_140a19099;
        pppbVar43 = pppbStack_f0;
        if (uVar18 == 0) goto LAB_140a19190;
        uVar22 = uVar18 - 1;
        if (uVar18 < uVar18 - 1) {
          uVar22 = uVar18;
        }
        if (uVar22 < 8) {
          lVar25 = 0;
          uVar22 = uVar18;
          puVar27 = puVar8;
        }
        else {
          uVar22 = uVar22 + 1;
          uVar26 = 8;
          if ((uVar22 & 7) != 0) {
            uVar26 = (ulonglong)((uint)uVar22 & 7);
          }
          lVar25 = uVar22 - uVar26;
          uVar22 = uVar18 - lVar25;
          puVar27 = puVar8 + lVar25;
          lVar36 = 0;
          do {
            uVar29 = *(undefined8 *)((longlong)(puVar8 + lVar36) + 8);
            puVar2 = puVar8 + lVar36 + 4;
            uVar45 = *puVar2;
            uVar3 = puVar2[1];
            uVar12 = puVar2[2];
            uVar66 = puVar2[3];
            *(undefined8 *)(pbVar21 + lVar36 * 4) = *(undefined8 *)(puVar8 + lVar36);
            *(undefined8 *)(pbVar21 + lVar36 * 4 + 8) = uVar29;
            pbVar24 = pbVar21 + lVar36 * 4 + 0x10;
            *(undefined4 *)pbVar24 = uVar45;
            *(undefined4 *)(pbVar24 + 4) = uVar3;
            *(undefined4 *)(pbVar24 + 8) = uVar12;
            *(undefined4 *)(pbVar24 + 0xc) = uVar66;
            lVar36 = lVar36 + 8;
          } while (lVar25 != lVar36);
        }
        pbVar24 = pbVar21 + lVar25 * 4;
        do {
          if (puVar27 == puVar8 + uVar18) break;
          uVar45 = *puVar27;
          puVar27 = puVar27 + 1;
          *(undefined4 *)pbVar24 = uVar45;
          pbVar24 = pbVar24 + 4;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
LAB_140a19190:
        plVar40 = plStack_1b0;
        uVar44 = *(uint *)(lVar31 + -0x38);
        iVar23 = uVar44 - 2;
        if (uVar44 < 2) {
          iVar23 = 2;
        }
        uVar33 = 2;
        if (iVar23 != 0) {
          if (iVar23 == 1) {
            uVar33 = 3;
          }
          else {
            uStack_428 = *(undefined8 *)(lVar31 + -0x24);
            uStack_438 = *(undefined8 *)(lVar31 + -0x34);
            uStack_430 = *(undefined8 *)(lVar31 + -0x2c);
            uVar33 = uVar44;
          }
        }
        uVar45 = *(undefined4 *)(lVar31 + -0x40);
        uVar3 = *(undefined4 *)(lVar31 + -0x1c);
        lVar25 = *(longlong *)(lVar31 + -8);
        lVar38 = *(longlong *)(lVar31 + -0x18);
        lVar13 = *(longlong *)(lVar31 + -0x10);
        *puStack_410 = uStack_1c0;
        lVar36 = *plStack_1b0;
        if (!SBORROW8(0,lVar36)) {
          if (lVar36 != 0) {
            pub_1406abac0((byte *)plStack_1b0[1],lVar36 << 3,4);
          }
          if (plVar40[3] != 0) {
            pub_1406abac0((byte *)plVar40[4],plVar40[3] << 2,4);
          }
        }
        *plVar40 = (longlong)pppbStack_d0;
        plVar40[1] = (longlong)pbStack_e0;
        plVar40[2] = (longlong)pppbVar37;
        plVar40[3] = uVar18;
        plVar40[4] = (longlong)pbVar21;
        plVar40[5] = uVar18;
        *(undefined4 *)(plVar40 + 6) = uVar45;
        *(uint *)(plVar40 + 7) = uVar33;
        *(undefined8 *)((longlong)plVar40 + 0x3c) = uStack_438;
        *(undefined8 *)((longlong)plVar40 + 0x44) = uStack_430;
        *(undefined8 *)((longlong)plVar40 + 0x4c) = uStack_428;
        *(undefined4 *)((longlong)plVar40 + 0x54) = uVar3;
        plVar40[0xb] = lVar38;
        plVar40[0xc] = lVar13;
        plVar40[0xd] = lVar25;
        pppbVar37 = *(byte ****)(lVar31 + -0x60);
        uVar22 = (longlong)pppbVar37 * 8;
        if (uVar22 < 0x7ffffffffffffffd && (ulonglong)pppbVar37 >> 0x3d == 0) goto LAB_140a192b3;
        uVar29 = 0;
        do {
          pdb_142dc7e2a(uVar29,uVar22);
LAB_140a192b3:
          uVar7 = *(undefined8 *)(lVar31 + -0x68);
          if (uVar22 == 0) {
            pbStack_390 = (byte *)0x4;
            pppbStack_d0 = (byte ***)0x0;
            pppbVar6 = pppbStack_d0;
            break;
          }
          pdb_14007ee60();
          uVar29 = 4;
          pbStack_390 = pub_1406abab0(uVar22,4);
          pppbVar6 = pppbVar37;
        } while (pbStack_390 == (byte *)0x0);
        pppbStack_d0 = pppbVar6;
        if (pppbVar37 != (byte ***)0x0) {
          pub_142e32760(pbStack_390,uVar7,uVar22);
        }
        uVar18 = *(ulonglong *)(lVar31 + -0x48);
        uVar22 = uVar18 * 4;
        if (0x7ffffffffffffffc < uVar22 || uVar18 >> 0x3e != 0) {
          uVar29 = 0;
          pbStack_e0 = pbStack_390;
LAB_140a1933c:
          pdb_142dc7e2a(uVar29,uVar22);
LAB_140a19b6d:
                    /* WARNING: Does not return */
          pcVar20 = (code *)invalidInstructionException();
          (*pcVar20)();
        }
        if (uVar22 == 0) {
          pbStack_378 = (byte *)0x4;
          ppppbStack_270 = (byte ****)pppbVar43;
        }
        else {
          puVar8 = *(undefined4 **)(lVar31 + -0x50);
          pbStack_e0 = pbStack_390;
          pdb_14007ee60();
          uVar29 = 4;
          pbStack_378 = pub_1406abab0(uVar22,4);
          if (pbStack_378 == (byte *)0x0) goto LAB_140a1933c;
          ppppbStack_270 = (byte ****)pppbVar43;
          pbStack_390 = pbStack_e0;
          if (uVar18 != 0) {
            uVar22 = uVar18 - 1;
            if (uVar18 < uVar18 - 1) {
              uVar22 = uVar18;
            }
            if (uVar22 < 8) {
              lVar25 = 0;
              uVar22 = uVar18;
              puVar27 = puVar8;
            }
            else {
              uVar22 = uVar22 + 1;
              uVar26 = 8;
              if ((uVar22 & 7) != 0) {
                uVar26 = (ulonglong)((uint)uVar22 & 7);
              }
              lVar25 = uVar22 - uVar26;
              uVar22 = uVar18 - lVar25;
              puVar27 = puVar8 + lVar25;
              lVar36 = 0;
              do {
                uVar29 = *(undefined8 *)((longlong)(puVar8 + lVar36) + 8);
                uVar7 = *(undefined8 *)(puVar8 + lVar36 + 4);
                uVar14 = *(undefined8 *)((longlong)(puVar8 + lVar36 + 4) + 8);
                *(undefined8 *)(pbStack_378 + lVar36 * 4) = *(undefined8 *)(puVar8 + lVar36);
                *(undefined8 *)(pbStack_378 + lVar36 * 4 + 8) = uVar29;
                *(undefined8 *)(pbStack_378 + lVar36 * 4 + 0x10) = uVar7;
                *(undefined8 *)(pbStack_378 + lVar36 * 4 + 0x10 + 8) = uVar14;
                lVar36 = lVar36 + 8;
              } while (lVar25 != lVar36);
            }
            pbVar21 = pbStack_378 + lVar25 * 4;
            do {
              ppppbStack_270 = (byte ****)pppbStack_f0;
              if (puVar27 == puVar8 + uVar18) break;
              uVar45 = *puVar27;
              puVar27 = puVar27 + 1;
              *(undefined4 *)pbVar21 = uVar45;
              pbVar21 = pbVar21 + 4;
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
          }
        }
        plVar16 = plStack_128;
        plVar39 = plStack_130;
        plVar40 = plStack_338;
        uStack_368 = *(undefined4 *)(lVar31 + -0x40);
        pppbStack_398 = pppbStack_d0;
        pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,*(char *)(lVar31 + -7));
        puStack_110 = (undefined4 *)CONCAT44(puStack_110._4_4_,*(undefined4 *)(lVar31 + -0x1c));
        pppbStack_388 = pppbVar37;
        uStack_380 = uVar18;
        uStack_370 = uVar18;
        if (*(char *)(lVar31 + -6) == '\0') {
          if (*(char *)(lVar31 + -7) == '\0') {
            pppbVar43 = (byte ***)ppppbStack_270;
            if (plStack_128[3] != 0) {
              uStack_c2 = 1;
              uVar18 = pdb_1400af0a0(plStack_128 + 4,&ppppbStack_270);
              lVar25 = *plVar16;
              uVar22 = plVar16[1];
              bVar46 = (byte)(uVar18 >> 0x39);
              auVar48 = ZEXT216(CONCAT11(bVar46,bVar46));
              auVar48 = pshuflw(auVar48,auVar48,0);
              lVar36 = 0;
              while( true ) {
                uVar18 = uVar18 & uVar22;
                pcVar1 = (char *)(lVar25 + uVar18);
                auVar63[0] = -(*pcVar1 == auVar48[0]);
                auVar63[1] = -(pcVar1[1] == auVar48[1]);
                auVar63[2] = -(pcVar1[2] == auVar48[2]);
                auVar63[3] = -(pcVar1[3] == auVar48[3]);
                auVar63[4] = -(pcVar1[4] == auVar48[4]);
                auVar63[5] = -(pcVar1[5] == auVar48[5]);
                auVar63[6] = -(pcVar1[6] == auVar48[6]);
                auVar63[7] = -(pcVar1[7] == auVar48[7]);
                auVar63[8] = -(pcVar1[8] == auVar48[0]);
                auVar63[9] = -(pcVar1[9] == auVar48[1]);
                auVar63[10] = -(pcVar1[10] == auVar48[2]);
                auVar63[0xb] = -(pcVar1[0xb] == auVar48[3]);
                auVar63[0xc] = -(pcVar1[0xc] == auVar48[4]);
                auVar63[0xd] = -(pcVar1[0xd] == auVar48[5]);
                auVar63[0xe] = -(pcVar1[0xe] == auVar48[6]);
                auVar63[0xf] = -(pcVar1[0xf] == auVar48[7]);
                uVar35 = (ushort)(SUB161(auVar63 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
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
                         (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar63[0xf] >> 7) << 0xf;
                uVar44 = (uint)uVar35;
                while (uVar35 != 0) {
                  uVar33 = 0;
                  for (uVar10 = uVar44; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                    uVar33 = uVar33 + 1;
                  }
                  lVar38 = lVar25 + (uVar33 + uVar18 & uVar22) * -0x10;
                  if (pppbStack_f0 == *(byte ****)(lVar38 + -0x10)) goto LAB_140a19774;
                  uVar35 = (ushort)(uVar44 - 1) & (ushort)uVar44;
                  uVar44 = CONCAT22((short)(uVar44 - 1 >> 0x10),uVar35);
                }
                auVar57[0] = -(*pcVar1 == -1);
                auVar57[1] = -(pcVar1[1] == -1);
                auVar57[2] = -(pcVar1[2] == -1);
                auVar57[3] = -(pcVar1[3] == -1);
                auVar57[4] = -(pcVar1[4] == -1);
                auVar57[5] = -(pcVar1[5] == -1);
                auVar57[6] = -(pcVar1[6] == -1);
                auVar57[7] = -(pcVar1[7] == -1);
                auVar57[8] = -(pcVar1[8] == -1);
                auVar57[9] = -(pcVar1[9] == -1);
                auVar57[10] = -(pcVar1[10] == -1);
                auVar57[0xb] = -(pcVar1[0xb] == -1);
                auVar57[0xc] = -(pcVar1[0xc] == -1);
                auVar57[0xd] = -(pcVar1[0xd] == -1);
                auVar57[0xe] = -(pcVar1[0xe] == -1);
                auVar57[0xf] = -(pcVar1[0xf] == -1);
                pppbVar43 = pppbStack_f0;
                if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar57 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar57 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar57 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar57 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar57 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar57 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar57 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar57 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar57 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar57 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar57 >> 0x5f,0) & 1) != 0) || (SUB161(auVar57 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar57 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar57 >> 0x77,0) & 1) != 0) || auVar57[0xf] < '\0') break;
                uVar18 = uVar18 + lVar36 + 0x10;
                lVar36 = lVar36 + 0x10;
              }
            }
            uVar45 = (undefined4)plStack_128[6];
          }
          else {
            if (plStack_130[3] != 0) {
              uStack_c2 = 1;
              uVar18 = pdb_1400af0a0(plStack_130 + 4,&ppppbStack_270);
              lVar25 = *plVar39;
              uVar22 = plVar39[1];
              bVar46 = (byte)(uVar18 >> 0x39);
              auVar48 = ZEXT216(CONCAT11(bVar46,bVar46));
              auVar48 = pshuflw(auVar48,auVar48,0);
              lVar36 = 0;
              do {
                uVar18 = uVar18 & uVar22;
                pcVar1 = (char *)(lVar25 + uVar18);
                auVar62[0] = -(*pcVar1 == auVar48[0]);
                auVar62[1] = -(pcVar1[1] == auVar48[1]);
                auVar62[2] = -(pcVar1[2] == auVar48[2]);
                auVar62[3] = -(pcVar1[3] == auVar48[3]);
                auVar62[4] = -(pcVar1[4] == auVar48[4]);
                auVar62[5] = -(pcVar1[5] == auVar48[5]);
                auVar62[6] = -(pcVar1[6] == auVar48[6]);
                auVar62[7] = -(pcVar1[7] == auVar48[7]);
                auVar62[8] = -(pcVar1[8] == auVar48[0]);
                auVar62[9] = -(pcVar1[9] == auVar48[1]);
                auVar62[10] = -(pcVar1[10] == auVar48[2]);
                auVar62[0xb] = -(pcVar1[0xb] == auVar48[3]);
                auVar62[0xc] = -(pcVar1[0xc] == auVar48[4]);
                auVar62[0xd] = -(pcVar1[0xd] == auVar48[5]);
                auVar62[0xe] = -(pcVar1[0xe] == auVar48[6]);
                auVar62[0xf] = -(pcVar1[0xf] == auVar48[7]);
                uVar35 = (ushort)(SUB161(auVar62 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
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
                         (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar62[0xf] >> 7) << 0xf;
                uVar44 = (uint)uVar35;
                while (uVar35 != 0) {
                  uVar33 = 0;
                  for (uVar10 = uVar44; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                    uVar33 = uVar33 + 1;
                  }
                  lVar38 = lVar25 + (uVar33 + uVar18 & uVar22) * -0x10;
                  if (pppbStack_f0 == *(byte ****)(lVar38 + -0x10)) {
LAB_140a19774:
                    uVar45 = *(undefined4 *)(lVar38 + -8);
                    pppbVar43 = pppbStack_f0;
                    goto LAB_140a197c8;
                  }
                  uVar35 = (ushort)(uVar44 - 1) & (ushort)uVar44;
                  uVar44 = CONCAT22((short)(uVar44 - 1 >> 0x10),uVar35);
                }
                auVar56[0] = -(*pcVar1 == -1);
                auVar56[1] = -(pcVar1[1] == -1);
                auVar56[2] = -(pcVar1[2] == -1);
                auVar56[3] = -(pcVar1[3] == -1);
                auVar56[4] = -(pcVar1[4] == -1);
                auVar56[5] = -(pcVar1[5] == -1);
                auVar56[6] = -(pcVar1[6] == -1);
                auVar56[7] = -(pcVar1[7] == -1);
                auVar56[8] = -(pcVar1[8] == -1);
                auVar56[9] = -(pcVar1[9] == -1);
                auVar56[10] = -(pcVar1[10] == -1);
                auVar56[0xb] = -(pcVar1[0xb] == -1);
                auVar56[0xc] = -(pcVar1[0xc] == -1);
                auVar56[0xd] = -(pcVar1[0xd] == -1);
                auVar56[0xe] = -(pcVar1[0xe] == -1);
                auVar56[0xf] = -(pcVar1[0xf] == -1);
                ppppbStack_270 = (byte ****)pppbStack_f0;
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
                    (SUB161(auVar56 >> 0x77,0) & 1) != 0) || auVar56[0xf] < '\0') break;
                uVar18 = uVar18 + lVar36 + 0x10;
                lVar36 = lVar36 + 0x10;
              } while( true );
            }
            uVar45 = (undefined4)plStack_130[6];
            pppbVar43 = (byte ***)ppppbStack_270;
          }
        }
        else {
          if (plStack_338[3] == 0) {
LAB_140a19676:
            plVar40 = plStack_338 + 6;
          }
          else {
            uStack_c2 = 1;
            uVar18 = pdb_1400af0a0(plStack_338 + 4,&ppppbStack_270);
            lVar25 = *plVar40;
            uVar22 = plVar40[1];
            bVar46 = (byte)(uVar18 >> 0x39);
            auVar48 = ZEXT216(CONCAT11(bVar46,bVar46));
            auVar48 = pshuflw(auVar48,auVar48,0);
            lVar36 = 0;
            while( true ) {
              uVar18 = uVar18 & uVar22;
              pcVar1 = (char *)(lVar25 + uVar18);
              auVar61[0] = -(*pcVar1 == auVar48[0]);
              auVar61[1] = -(pcVar1[1] == auVar48[1]);
              auVar61[2] = -(pcVar1[2] == auVar48[2]);
              auVar61[3] = -(pcVar1[3] == auVar48[3]);
              auVar61[4] = -(pcVar1[4] == auVar48[4]);
              auVar61[5] = -(pcVar1[5] == auVar48[5]);
              auVar61[6] = -(pcVar1[6] == auVar48[6]);
              auVar61[7] = -(pcVar1[7] == auVar48[7]);
              auVar61[8] = -(pcVar1[8] == auVar48[0]);
              auVar61[9] = -(pcVar1[9] == auVar48[1]);
              auVar61[10] = -(pcVar1[10] == auVar48[2]);
              auVar61[0xb] = -(pcVar1[0xb] == auVar48[3]);
              auVar61[0xc] = -(pcVar1[0xc] == auVar48[4]);
              auVar61[0xd] = -(pcVar1[0xd] == auVar48[5]);
              auVar61[0xe] = -(pcVar1[0xe] == auVar48[6]);
              auVar61[0xf] = -(pcVar1[0xf] == auVar48[7]);
              uVar35 = (ushort)(SUB161(auVar61 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
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
                       (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar61[0xf] >> 7) << 0xf;
              uVar44 = (uint)uVar35;
              ppppbStack_270 = (byte ****)pppbStack_f0;
              if (uVar35 != 0) break;
LAB_140a1956c:
              auVar55[0] = -(*pcVar1 == -1);
              auVar55[1] = -(pcVar1[1] == -1);
              auVar55[2] = -(pcVar1[2] == -1);
              auVar55[3] = -(pcVar1[3] == -1);
              auVar55[4] = -(pcVar1[4] == -1);
              auVar55[5] = -(pcVar1[5] == -1);
              auVar55[6] = -(pcVar1[6] == -1);
              auVar55[7] = -(pcVar1[7] == -1);
              auVar55[8] = -(pcVar1[8] == -1);
              auVar55[9] = -(pcVar1[9] == -1);
              auVar55[10] = -(pcVar1[10] == -1);
              auVar55[0xb] = -(pcVar1[0xb] == -1);
              auVar55[0xc] = -(pcVar1[0xc] == -1);
              auVar55[0xd] = -(pcVar1[0xd] == -1);
              auVar55[0xe] = -(pcVar1[0xe] == -1);
              auVar55[0xf] = -(pcVar1[0xf] == -1);
              if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar55 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar55 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar55 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar55 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar55 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar55 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar55 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar55 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar55 >> 0x4f,0) & 1) != 0) || (SUB161(auVar55 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar55 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar55 >> 0x67,0) & 1) != 0) || (SUB161(auVar55 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar55 >> 0x77,0) & 1) != 0) || auVar55[0xf] < '\0')
              goto LAB_140a19676;
              uVar18 = uVar18 + lVar36 + 0x10;
              lVar36 = lVar36 + 0x10;
            }
            while( true ) {
              uVar33 = 0;
              for (uVar10 = uVar44; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                uVar33 = uVar33 + 1;
              }
              lVar38 = lVar25 + (uVar33 + uVar18 & uVar22) * -0x10;
              if (pppbStack_f0 == *(byte ****)(lVar38 + -0x10)) break;
              uVar35 = (ushort)(uVar44 - 1) & (ushort)uVar44;
              uVar44 = CONCAT22((short)(uVar44 - 1 >> 0x10),uVar35);
              if (uVar35 == 0) goto LAB_140a1956c;
            }
            plVar40 = (longlong *)(lVar38 + -8);
          }
          uVar45 = (undefined4)*plVar40;
          pppbVar43 = (byte ***)ppppbStack_270;
        }
LAB_140a197c8:
        plVar39 = plStack_128;
        plVar40 = plStack_130;
        puVar15 = puStack_150;
        if (plStack_128[3] == 0) {
LAB_140a19877:
          plVar39 = plVar39 + 6;
        }
        else {
          uStack_c2 = 1;
          ppppbStack_270 = (byte ****)pppbVar43;
          uVar22 = pdb_1400af0a0(plStack_128 + 4,&ppppbStack_270);
          bVar46 = (byte)(uVar22 >> 0x39);
          auVar48 = ZEXT216(CONCAT11(bVar46,bVar46));
          auVar48 = pshuflw(auVar48,auVar48,0);
          lVar25 = 0;
          while( true ) {
            uVar22 = uVar22 & plVar39[1];
            pcVar1 = (char *)(*plVar39 + uVar22);
            auVar64[0] = -(*pcVar1 == auVar48[0]);
            auVar64[1] = -(pcVar1[1] == auVar48[1]);
            auVar64[2] = -(pcVar1[2] == auVar48[2]);
            auVar64[3] = -(pcVar1[3] == auVar48[3]);
            auVar64[4] = -(pcVar1[4] == auVar48[4]);
            auVar64[5] = -(pcVar1[5] == auVar48[5]);
            auVar64[6] = -(pcVar1[6] == auVar48[6]);
            auVar64[7] = -(pcVar1[7] == auVar48[7]);
            auVar64[8] = -(pcVar1[8] == auVar48[0]);
            auVar64[9] = -(pcVar1[9] == auVar48[1]);
            auVar64[10] = -(pcVar1[10] == auVar48[2]);
            auVar64[0xb] = -(pcVar1[0xb] == auVar48[3]);
            auVar64[0xc] = -(pcVar1[0xc] == auVar48[4]);
            auVar64[0xd] = -(pcVar1[0xd] == auVar48[5]);
            auVar64[0xe] = -(pcVar1[0xe] == auVar48[6]);
            auVar64[0xf] = -(pcVar1[0xf] == auVar48[7]);
            uVar35 = (ushort)(SUB161(auVar64 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar64[0xf] >> 7) << 0xf;
            uVar44 = (uint)uVar35;
            if (uVar35 != 0) break;
LAB_140a1985c:
            auVar58[0] = -(*pcVar1 == -1);
            auVar58[1] = -(pcVar1[1] == -1);
            auVar58[2] = -(pcVar1[2] == -1);
            auVar58[3] = -(pcVar1[3] == -1);
            auVar58[4] = -(pcVar1[4] == -1);
            auVar58[5] = -(pcVar1[5] == -1);
            auVar58[6] = -(pcVar1[6] == -1);
            auVar58[7] = -(pcVar1[7] == -1);
            auVar58[8] = -(pcVar1[8] == -1);
            auVar58[9] = -(pcVar1[9] == -1);
            auVar58[10] = -(pcVar1[10] == -1);
            auVar58[0xb] = -(pcVar1[0xb] == -1);
            auVar58[0xc] = -(pcVar1[0xc] == -1);
            auVar58[0xd] = -(pcVar1[0xd] == -1);
            auVar58[0xe] = -(pcVar1[0xe] == -1);
            auVar58[0xf] = -(pcVar1[0xf] == -1);
            if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar58 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar58 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar58 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar58 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar58 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar58 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar58 >> 0x3f,0) & 1) != 0) || (SUB161(auVar58 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar58 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar58 >> 0x57,0) & 1) != 0) || (SUB161(auVar58 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar58 >> 0x67,0) & 1) != 0) || (SUB161(auVar58 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar58 >> 0x77,0) & 1) != 0) || auVar58[0xf] < '\0') goto LAB_140a19877;
            uVar22 = uVar22 + lVar25 + 0x10;
            lVar25 = lVar25 + 0x10;
          }
          while( true ) {
            uVar33 = 0;
            for (uVar10 = uVar44; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              uVar33 = uVar33 + 1;
            }
            lVar36 = *plVar39 + (uVar33 + uVar22 & plVar39[1]) * -0x10;
            if (pppbVar43 == *(byte ****)(lVar36 + -0x10)) break;
            uVar35 = (ushort)(uVar44 - 1) & (ushort)uVar44;
            uVar44 = CONCAT22((short)(uVar44 - 1 >> 0x10),uVar35);
            if (uVar35 == 0) goto LAB_140a1985c;
          }
          plVar39 = (longlong *)(lVar36 + -8);
        }
        lVar25 = *plVar39;
        ppppbStack_270 = (byte ****)pppbVar43;
        if (plVar40[3] != 0) {
          uStack_c2 = 1;
          uVar22 = pdb_1400af0a0(plVar40 + 4,&ppppbStack_270);
          bVar46 = (byte)(uVar22 >> 0x39);
          auVar48 = ZEXT216(CONCAT11(bVar46,bVar46));
          auVar48 = pshuflw(auVar48,auVar48,0);
          lVar36 = 0;
          while( true ) {
            uVar22 = uVar22 & plVar40[1];
            pcVar1 = (char *)(*plVar40 + uVar22);
            auVar65[0] = -(*pcVar1 == auVar48[0]);
            auVar65[1] = -(pcVar1[1] == auVar48[1]);
            auVar65[2] = -(pcVar1[2] == auVar48[2]);
            auVar65[3] = -(pcVar1[3] == auVar48[3]);
            auVar65[4] = -(pcVar1[4] == auVar48[4]);
            auVar65[5] = -(pcVar1[5] == auVar48[5]);
            auVar65[6] = -(pcVar1[6] == auVar48[6]);
            auVar65[7] = -(pcVar1[7] == auVar48[7]);
            auVar65[8] = -(pcVar1[8] == auVar48[0]);
            auVar65[9] = -(pcVar1[9] == auVar48[1]);
            auVar65[10] = -(pcVar1[10] == auVar48[2]);
            auVar65[0xb] = -(pcVar1[0xb] == auVar48[3]);
            auVar65[0xc] = -(pcVar1[0xc] == auVar48[4]);
            auVar65[0xd] = -(pcVar1[0xd] == auVar48[5]);
            auVar65[0xe] = -(pcVar1[0xe] == auVar48[6]);
            auVar65[0xf] = -(pcVar1[0xf] == auVar48[7]);
            uVar35 = (ushort)(SUB161(auVar65 >> 7,0) & 1) |
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
                     (ushort)(auVar65[0xf] >> 7) << 0xf;
            uVar44 = (uint)uVar35;
            while (uVar35 != 0) {
              uVar33 = 0;
              for (uVar10 = uVar44; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                uVar33 = uVar33 + 1;
              }
              lVar38 = *plVar40 + (uVar33 + uVar22 & plVar40[1]) * -0x10;
              if (pppbVar43 == *(byte ****)(lVar38 + -0x10)) {
                plVar40 = (longlong *)(lVar38 + -8);
                goto LAB_140a19943;
              }
              uVar35 = (ushort)(uVar44 - 1) & (ushort)uVar44;
              uVar44 = CONCAT22((short)(uVar44 - 1 >> 0x10),uVar35);
            }
            auVar59[0] = -(*pcVar1 == -1);
            auVar59[1] = -(pcVar1[1] == -1);
            auVar59[2] = -(pcVar1[2] == -1);
            auVar59[3] = -(pcVar1[3] == -1);
            auVar59[4] = -(pcVar1[4] == -1);
            auVar59[5] = -(pcVar1[5] == -1);
            auVar59[6] = -(pcVar1[6] == -1);
            auVar59[7] = -(pcVar1[7] == -1);
            auVar59[8] = -(pcVar1[8] == -1);
            auVar59[9] = -(pcVar1[9] == -1);
            auVar59[10] = -(pcVar1[10] == -1);
            auVar59[0xb] = -(pcVar1[0xb] == -1);
            auVar59[0xc] = -(pcVar1[0xc] == -1);
            auVar59[0xd] = -(pcVar1[0xd] == -1);
            auVar59[0xe] = -(pcVar1[0xe] == -1);
            auVar59[0xf] = -(pcVar1[0xf] == -1);
            if ((((((((((((((((SUB161(auVar59 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar59 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar59 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar59 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar59 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar59 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar59 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar59 >> 0x3f,0) & 1) != 0) || (SUB161(auVar59 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar59 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar59 >> 0x57,0) & 1) != 0) || (SUB161(auVar59 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar59 >> 0x67,0) & 1) != 0) || (SUB161(auVar59 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar59 >> 0x77,0) & 1) != 0) || auVar59[0xf] < '\0') break;
            uVar22 = uVar22 + lVar36 + 0x10;
            lVar36 = lVar36 + 0x10;
          }
        }
        plVar40 = plVar40 + 6;
LAB_140a19943:
        piStack_158 = (int *)CONCAT44(piStack_158._4_4_,(int)lVar25);
        lStack_168 = CONCAT44(lStack_168._4_4_,(int)*plVar40);
        lStack_140 = CONCAT71(lStack_140._1_7_,*(undefined1 *)(lVar31 + -6));
        lStack_148 = CONCAT71(lStack_148._1_7_,*(undefined1 *)(lVar31 + -5));
        uStack_d8 = uVar45;
        if (cStack_c1 == '\x01') {
          uStack_d1 = 1;
          pdb_1419accc0(&pppbStack_398);
        }
        puStack_2c8 = (undefined *)CONCAT44(uStack_364,uStack_368);
        uStack_2d8 = (byte ***)pbStack_378;
        pppbStack_2d0 = (byte ***)uStack_370;
        uStack_2e8 = pppbStack_388;
        uStack_2e0 = (code *)uStack_380;
        pppbStack_2f8 = pppbStack_398;
        ppbStack_2f0 = (byte **)pbStack_390;
        uStack_d1 = 0;
        pdb_140becfc0(&ppppbStack_270,&pppbStack_2f8);
        pppbStack_2f8 = (byte ***)ppppbStack_270;
        ppbStack_2f0 = ppbStack_268;
        uStack_2e8 = (byte ***)ppppbStack_260;
        uStack_2e0 = pcStack_258;
        uStack_2d8 = pppbStack_250;
        pppbStack_2d0 = pppbStack_248;
        puStack_2c8 = puStack_240;
        lStack_2c0 = lStack_238;
        lStack_2b0 = CONCAT44(uStack_224,uStack_228);
        lStack_2b8 = lStack_230;
        lStack_2a8 = lStack_220;
        lStack_2a0 = lStack_218;
        lStack_298 = CONCAT44(uStack_20c,uStack_210);
        lStack_290 = lStack_208;
        lStack_280 = CONCAT71(uStack_1f7,uStack_1f8);
        lStack_288 = lStack_200;
        *(undefined4 *)puVar15[2] = *(undefined4 *)((longlong)puVar15 + 0x1c);
        pppbStack_d0 = (byte ***)*puVar15;
        if (!SBORROW8(0,(longlong)*pppbStack_d0)) {
          pdb_14099a6f0(pppbStack_d0);
        }
        pppbStack_d0[0xe] = (byte **)lStack_288;
        pppbStack_d0[0xf] = (byte **)lStack_280;
        pppbStack_d0[0xc] = (byte **)lStack_298;
        pppbStack_d0[0xd] = (byte **)lStack_290;
        pppbStack_d0[10] = (byte **)lStack_2a8;
        pppbStack_d0[0xb] = (byte **)lStack_2a0;
        pppbStack_d0[8] = (byte **)lStack_2b8;
        pppbStack_d0[9] = (byte **)lStack_2b0;
        pppbStack_d0[6] = (byte **)puStack_2c8;
        pppbStack_d0[7] = (byte **)lStack_2c0;
        pppbStack_d0[4] = (byte **)uStack_2d8;
        pppbStack_d0[5] = (byte **)pppbStack_2d0;
        pppbStack_d0[2] = (byte **)uStack_2e8;
        pppbStack_d0[3] = (byte **)uStack_2e0;
        *pppbStack_d0 = (byte **)pppbStack_2f8;
        pppbStack_d0[1] = ppbStack_2f0;
        pppbStack_d0[0x10] = (byte **)pppbStack_f0;
        *(undefined4 *)(pppbStack_d0 + 0x11) = 0;
        *(undefined4 *)((longlong)pppbStack_d0 + 0x94) = puStack_110._0_4_;
        *(undefined4 *)(pppbStack_d0 + 0x13) = uStack_d8;
        *(undefined4 *)((longlong)pppbStack_d0 + 0x9c) = piStack_158._0_4_;
        *(undefined4 *)(pppbStack_d0 + 0x14) = (undefined4)lStack_168;
        *(undefined1 *)((longlong)pppbStack_d0 + 0xa4) = (undefined1)lStack_140;
        *(undefined1 *)((longlong)pppbStack_d0 + 0xa5) = pbStack_e0._0_1_;
        *(undefined1 *)((longlong)pppbStack_d0 + 0xa6) = (undefined1)lStack_148;
        *(char *)((longlong)pppbStack_d0 + 0xa7) = cStack_c1;
        return;
      }
      *puVar4 = uVar26;
    }
  }
  return;
LAB_140a18485:
  uVar22 = uVar22 & plStack_160[1];
  auVar63 = *(undefined1 (*) [16])(*plStack_160 + uVar22);
  auVar54[0] = -(auVar63[0] == auVar48[0]);
  auVar54[1] = -(auVar63[1] == auVar48[1]);
  auVar54[2] = -(auVar63[2] == auVar48[2]);
  auVar54[3] = -(auVar63[3] == auVar48[3]);
  auVar54[4] = -(auVar63[4] == auVar48[4]);
  auVar54[5] = -(auVar63[5] == auVar48[5]);
  auVar54[6] = -(auVar63[6] == auVar48[6]);
  auVar54[7] = -(auVar63[7] == auVar48[7]);
  auVar54[8] = -(auVar63[8] == auVar48[0]);
  auVar54[9] = -(auVar63[9] == auVar48[1]);
  auVar54[10] = -(auVar63[10] == auVar48[2]);
  auVar54[0xb] = -(auVar63[0xb] == auVar48[3]);
  auVar54[0xc] = -(auVar63[0xc] == auVar48[4]);
  auVar54[0xd] = -(auVar63[0xd] == auVar48[5]);
  auVar54[0xe] = -(auVar63[0xe] == auVar48[6]);
  auVar54[0xf] = -(auVar63[0xf] == auVar48[7]);
  uVar35 = (ushort)(SUB161(auVar54 >> 7,0) & 1) | (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe | (ushort)(auVar54[0xf] >> 7) << 0xf;
  uVar33 = (uint)uVar35;
  while (pbVar21 = pbStack_e0, uVar35 != 0) {
    uVar10 = 0;
    for (uVar11 = uVar33; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
      uVar10 = uVar10 + 1;
    }
    if (pppbVar6 == *(byte ****)(*plStack_160 + -0x78 + (uVar10 + uVar22 & plStack_160[1]) * -0x78))
    {
      pppbVar37 = pppbStack_d0;
      lVar25 = lStack_360;
      lVar31 = lStack_360;
      if (*(int *)(lVar36 + -0x50) != 2) goto joined_r0x000140a18188;
      if (*(char *)(lVar36 + -8) == '\x01') {
        if (*(char *)pppbStack_d0 != '\x0f') goto joined_r0x000140a18188;
      }
      else if (*(char *)pppbStack_d0 != '\x01') goto joined_r0x000140a18188;
      if (*(longlong *)(lVar36 + -0x260) == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143037218);
      }
      puVar27 = *(undefined4 **)(lVar36 + -0x268);
      puVar8 = puVar27 + *(longlong *)(lVar36 + -0x260) * 3;
      if (puVar8 == (undefined4 *)0xc) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143037230);
      }
      fVar47 = (float)puVar27[1];
      if (fVar47 <= 0.0) {
        fVar47 = 0.0;
      }
      fVar49 = (float)puVar8[-2];
      if (fVar49 <= 0.0) {
        fVar49 = 0.0;
      }
      pppbStack_2f8 = (byte ***)0x0;
      ppbStack_2f0 = (byte **)0x2;
      uStack_2e8 = (byte ***)CONCAT44(fVar47,*puVar27);
      uStack_2e0._0_5_ = CONCAT14(1,puVar27[2]);
      uStack_2d8 = (byte ***)CONCAT44(fVar49,puVar8[-3]);
      pppbStack_2d0._0_5_ = (uint5)(uint)puVar8[-1];
      lVar31 = 0;
      goto LAB_140a18676;
    }
    uVar35 = (ushort)(uVar33 - 1) & (ushort)uVar33;
    uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar35);
  }
  auVar51[0] = -(auVar63[0] == -1);
  auVar51[1] = -(auVar63[1] == -1);
  auVar51[2] = -(auVar63[2] == -1);
  auVar51[3] = -(auVar63[3] == -1);
  auVar51[4] = -(auVar63[4] == -1);
  auVar51[5] = -(auVar63[5] == -1);
  auVar51[6] = -(auVar63[6] == -1);
  auVar51[7] = -(auVar63[7] == -1);
  auVar51[8] = -(auVar63[8] == -1);
  auVar51[9] = -(auVar63[9] == -1);
  auVar51[10] = -(auVar63[10] == -1);
  auVar51[0xb] = -(auVar63[0xb] == -1);
  auVar51[0xc] = -(auVar63[0xc] == -1);
  auVar51[0xd] = -(auVar63[0xd] == -1);
  auVar51[0xe] = -(auVar63[0xe] == -1);
  auVar51[0xf] = -(auVar63[0xf] == -1);
  if ((((((((((((((((SUB161(auVar51 >> 7,0) & 1) != 0 || (SUB161(auVar51 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar51 >> 0x17,0) & 1) != 0) || (SUB161(auVar51 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar51 >> 0x27,0) & 1) != 0) || (SUB161(auVar51 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar51 >> 0x37,0) & 1) != 0) || (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar51 >> 0x47,0) & 1) != 0) || (SUB161(auVar51 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar51 >> 0x57,0) & 1) != 0) || (SUB161(auVar51 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar51 >> 0x67,0) & 1) != 0) || (SUB161(auVar51 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar51 >> 0x77,0) & 1) != 0) || auVar51[0xf] < '\0') goto LAB_140a18500;
  uVar22 = uVar22 + lVar31 + 0x10;
  lVar31 = lVar31 + 0x10;
  goto LAB_140a18485;
LAB_140a18676:
  do {
    cVar17 = *(char *)((longlong)&uStack_2e0 + lVar31 * 0x10 + 4);
    if (cVar17 == '\x02') break;
    lStack_118 = lVar31;
    uStack_198 = *(undefined4 *)(&uStack_2e0 + lVar31 * 2);
    pppbStack_1a0 = (byte ***)(&uStack_2e8)[lVar31 * 2];
    ppppbStack_270 = (byte ****)&cStack_fa;
    ppbStack_268 = (byte **)pdb_140a211f0;
    ppppbStack_260 = &pppbStack_418;
    pcStack_258 = pdb_140c04ef0;
    cStack_fa = cVar17;
    cStack_f9 = cVar17;
    pdb_140f60760(&pppbStack_398,&UNK_143037248,&ppppbStack_270);
    ppbStack_3b8 = (byte **)pppbStack_398;
    pbStack_3b0 = pbStack_390;
    pppbStack_3a8 = pppbStack_388;
    uStack_1d8 = uStack_198;
    pppbStack_1e0 = pppbStack_1a0;
    uStack_1e8 = 0;
    uStack_1e4 = 0x3f800000;
    uStack_1f8 = 0;
    pcStack_258 = (code *)CONCAT44(pcStack_258._4_4_,1);
    pppbStack_250 = (byte ***)0x0;
    puStack_240 = (undefined *)CONCAT44(puStack_240._4_4_,2);
    uStack_228 = 3;
    uStack_210 = 3;
    ppppbStack_270 = (byte ****)0x0;
    ppbStack_268 = (byte **)0x8;
    ppppbStack_260 = (byte ****)0x0;
    uStack_1c8 = 0x101;
    pppbVar19 = &ppbStack_3b8;
    lVar31 = pdb_1409008d0(uStack_400,pppbVar19,&ppppbStack_270);
    uVar66 = uVar45;
    if ((*(char *)pppbVar37 == '\0') && (*(int *)(pppbVar37 + 1) == 1)) {
      if (((*(char *)(lVar31 + 0x18) != '\0') && (*(byte ****)(lVar31 + 0x38) == pppbVar19)) &&
         (*(int *)(lVar31 + 0x28) != 2)) {
        uVar66 = uVar3;
      }
      ppbStack_3b8 = (byte **)CONCAT44(ppbStack_3b8._4_4_,uVar66);
      uVar67 = 0;
LAB_140a18859:
      ppppbStack_270 = &pppbStack_1a0;
      ppbStack_268 = (byte **)pdb_140f33d80;
      ppppbStack_260 = (byte ****)&ppbStack_3b8;
      pcStack_258 = pdb_140f705d0;
      lStack_308 = lVar31;
      pppbStack_300 = pppbVar19;
      pdb_140f60760(&pppbStack_398,&UNK_14303725c,&ppppbStack_270);
      ppbStack_108 = (byte **)pppbStack_398;
      pbStack_1a8 = pbStack_390;
      pppbStack_e8 = pppbStack_388;
      ppbStack_268 = (byte **)CONCAT44(ppbStack_268._4_4_,uStack_198);
      ppppbStack_270 = (byte ****)pppbStack_1a0;
      pdb_14007ee60();
      pppbVar19 = (byte ***)pub_1406abab0(0x28,8);
      if (pppbVar19 == (byte ***)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x28);
      }
      *pppbVar19 = (byte **)0x1;
      pppbVar19[1] = (byte **)0x1;
      pppbVar19[2] = (byte **)ppppbStack_270;
      *(undefined4 *)(pppbVar19 + 3) = ppbStack_268._0_4_;
      *(undefined4 *)((longlong)pppbVar19 + 0x1c) = uVar66;
      *(undefined4 *)(pppbVar19 + 4) = uVar67;
      ppbStack_268 = (byte **)&UNK_143037270;
      ppppbStack_270 = (byte ****)pppbVar19;
      pppbStack_310 = pppbVar19;
      if ((longlong)pppbStack_e8 < 0) {
        uVar29 = 0;
LAB_140a190f6:
        pdb_142dc7e2a(uVar29,pppbStack_e8);
        goto LAB_140a19b6d;
      }
      if (pppbStack_e8 == (byte ***)0x0) {
        pcStack_258 = (code *)0x1;
      }
      else {
        pdb_14007ee60();
        pcVar20 = (code *)pub_1406abab0((ulonglong)pppbStack_e8,1);
        uVar29 = 1;
        if (pcVar20 == (code *)0x0) goto LAB_140a190f6;
        pcStack_3c0 = pcVar20;
        pub_142e32760(pcVar20,pbStack_1a8,pppbStack_e8);
        pcStack_258 = pcStack_3c0;
      }
      ppbStack_268 = (byte **)CONCAT71(ppbStack_268._1_7_,2);
      ppppbStack_260 = (byte ****)pppbStack_e8;
      pppbStack_250 = pppbStack_e8;
      pppbStack_248 = pppbStack_310;
      puStack_240 = &UNK_143037270;
      pdb_141a88350(uStack_3f8,&ppppbStack_270);
      lVar31 = lStack_308;
      pppbVar19 = pppbStack_300;
      if (ppbStack_108 != (byte **)0x0) {
        pub_1406abac0(pbStack_1a8,(ulonglong)ppbStack_108,1);
        lVar31 = lStack_308;
        pppbVar19 = pppbStack_300;
      }
    }
    else if ((byte)(*pcStack_f8 - 3U) < 0xfe) {
      if ((*(char *)(lVar31 + 0x18) == '\x01') && (*(byte ****)(lVar31 + 0x38) == pppbVar19)) {
        ppbStack_3b8 = (byte **)CONCAT44(ppbStack_3b8._4_4_,0x3f000000);
        uVar67 = uVar12;
        if (*(char *)(lVar31 + 0x19) != '\0') goto LAB_140a18859;
      }
      else {
        ppbStack_3b8 = (byte **)CONCAT44(ppbStack_3b8._4_4_,0x3f000000);
      }
    }
    else {
      ppbStack_3b8 = (byte **)CONCAT44(ppbStack_3b8._4_4_,0x3f000000);
    }
    uVar66 = uStack_1bc;
    if ((*(char *)(lVar31 + 0x18) == '\x02') && (*(byte ****)(lVar31 + 0x38) == pppbVar19)) {
      bVar46 = *(byte *)(lVar31 + 0x19);
      if (bVar46 < 2) {
        *puStack_188 = uStack_11c;
        lVar31 = *(longlong *)(lStack_138 + 0x30);
        pppbVar37 = *(byte ****)(lStack_138 + 0x40);
        if (lVar31 == *(longlong *)(lStack_138 + 0x20)) {
          pppbStack_e8 = *(byte ****)(lStack_138 + 0x40);
          pdb_142d7e980(lStack_180);
          pppbVar37 = pppbStack_e8;
        }
        lVar25 = *(longlong *)(lStack_138 + 0x28);
        *(byte ****)(lVar25 + lVar31 * 0x10) = pppbVar37;
        *(undefined1 *)(lVar25 + 8 + lVar31 * 0x10) = 0;
        *(longlong *)(lStack_138 + 0x30) = lVar31 + 1;
        *(longlong *)(lStack_138 + 0x40) = *(longlong *)(lStack_138 + 0x40) + 1;
        *puStack_110 = uStack_d8;
        if ((byte)(*pcStack_f8 - 1U) < 2) {
          *pcStack_f8 = '\x03';
        }
        pppbVar37 = pppbStack_d0;
        if ((*(char *)pppbStack_d0 == '\0') && (*(int *)(pppbStack_d0 + 1) == 1)) {
          *puStack_3f0 = uStack_1b8;
          lVar31 = *(longlong *)(lStack_330 + 0x30);
          pppbStack_e8 = *(byte ****)(lStack_330 + 0x40);
          if (lVar31 == *(longlong *)(lStack_330 + 0x20)) {
            pdb_142d7e6e0(lStack_3e8);
          }
          lVar25 = *(longlong *)(lStack_330 + 0x28);
          lVar36 = lVar31 * 0x20;
          *(undefined1 *)(lVar25 + lVar36) = 0;
          *(undefined4 *)(lVar25 + 8 + lVar36) = 0;
          *(byte ****)(lVar25 + 0x18 + lVar36) = pppbStack_e8;
          *(longlong *)(lStack_330 + 0x30) = lVar31 + 1;
          *(longlong *)(lStack_330 + 0x40) = *(longlong *)(lStack_330 + 0x40) + 1;
          pppbVar37 = pppbStack_d0;
        }
      }
      else if (bVar46 != 2) {
        if (bVar46 == 3) {
          if (*piStack_158 == 1) {
            cVar17 = pdb_140df1700(piStack_178);
          }
          else {
            cVar17 = pdb_140def450(piStack_178);
          }
          puVar8 = puStack_358;
          if (cVar17 == '\0') {
            ppbStack_108 = ppbVar32;
            pppbStack_e8 = pppbVar43;
            *puStack_190 = uStack_16c;
            lVar31 = *(longlong *)(lStack_148 + 0x30);
            uVar29 = *(undefined8 *)(lStack_148 + 0x40);
            if (lVar31 == *(longlong *)(lStack_148 + 0x20)) {
              pdb_142d7e8a0(lStack_320);
            }
            *(undefined8 *)(*(longlong *)(lStack_148 + 0x28) + lVar31 * 8) = uVar29;
            *(longlong *)(lStack_148 + 0x30) = lVar31 + 1;
            *(longlong *)(lStack_148 + 0x40) = *(longlong *)(lStack_148 + 0x40) + 1;
            *puVar8 = uStack_170;
            lVar31 = *(longlong *)(lStack_140 + 0x30);
            uVar29 = *(undefined8 *)(lStack_140 + 0x40);
            if (lVar31 == *(longlong *)(lStack_140 + 0x20)) {
              pdb_142d7e8a0(lStack_318);
            }
            *(undefined8 *)(*(longlong *)(lStack_140 + 0x28) + lVar31 * 8) = uVar29;
            *(longlong *)(lStack_140 + 0x30) = lVar31 + 1;
            *(longlong *)(lStack_140 + 0x40) = *(longlong *)(lStack_140 + 0x40) + 1;
            ppbVar32 = ppbStack_108;
            pppbVar43 = pppbStack_e8;
            pppbVar37 = pppbStack_d0;
          }
          *puStack_110 = uStack_d8;
          *pcStack_f8 = '\x01';
          pppbStack_f0 = pppbVar6;
          cStack_c1 = cStack_f9;
        }
        else {
          if ((byte)(*pcStack_f8 - 1U) < 2) {
            ppbStack_108 = ppbVar32;
            pppbStack_e8 = pppbVar43;
            if (*pcStack_f8 == '\x01') {
              *(undefined4 *)pppbVar43 = uStack_1bc;
              pdb_140aa2f60(lStack_168,1,&uStack_2e8,ppbVar32,&lStack_478,&UNK_1430372a0,0xd);
              *(undefined4 *)pppbVar43 = uVar66;
              ppbStack_268 = (byte **)0x0;
              if (ppbVar32[0x12] != (byte *)0x0) {
                ppbStack_268 = ppbStack_3d0;
              }
              ppppbStack_270 = (byte ****)0x1;
              ppppbStack_260 = (byte ****)0x0;
              lStack_238 = 0;
              pdb_1414e0e70(&ppppbStack_270,lStack_3d8);
            }
            if (*piStack_158 == 1) {
              cVar17 = pdb_140df1700(piStack_178);
            }
            else {
              cVar17 = pdb_140def450(piStack_178);
            }
            if (cVar17 == '\0') {
              *puStack_190 = uStack_16c;
              lVar31 = *(longlong *)(lStack_148 + 0x30);
              uVar29 = *(undefined8 *)(lStack_148 + 0x40);
              if (lVar31 == *(longlong *)(lStack_148 + 0x20)) {
                pdb_142d7e8a0(lStack_320);
              }
              *(undefined8 *)(*(longlong *)(lStack_148 + 0x28) + lVar31 * 8) = uVar29;
              *(longlong *)(lStack_148 + 0x30) = lVar31 + 1;
              *(longlong *)(lStack_148 + 0x40) = *(longlong *)(lStack_148 + 0x40) + 1;
              *puStack_358 = uStack_170;
              lVar31 = *(longlong *)(lStack_140 + 0x30);
              uVar29 = *(undefined8 *)(lStack_140 + 0x40);
              lVar25 = lStack_140;
              if (lVar31 == *(longlong *)(lStack_140 + 0x20)) {
                pdb_142d7e8a0(lStack_318);
                lVar25 = lStack_140;
              }
            }
            else {
              *puStack_3e0 = uStack_1b4;
              lVar31 = *(longlong *)(lStack_328 + 0x30);
              uVar29 = *(undefined8 *)(lStack_328 + 0x40);
              lVar25 = lStack_328;
              if (lVar31 == *(longlong *)(lStack_328 + 0x20)) {
                pdb_142d7e8a0(lStack_3c8);
                lVar25 = lStack_328;
              }
            }
            *(undefined8 *)(*(longlong *)(lVar25 + 0x28) + lVar31 * 8) = uVar29;
            *(longlong *)(lVar25 + 0x30) = lVar31 + 1;
            *(longlong *)(lVar25 + 0x40) = *(longlong *)(lVar25 + 0x40) + 1;
            cVar17 = '\x02';
            ppbVar32 = ppbStack_108;
            pppbVar43 = pppbStack_e8;
            pppbVar37 = pppbStack_d0;
          }
          else {
            cVar17 = '\0';
          }
          *puStack_110 = uStack_d8;
          *pcStack_f8 = cVar17;
        }
      }
    }
    lVar31 = lStack_118 + 1;
  } while (lVar31 != 2);
  pbVar21 = pbStack_e0;
  lVar31 = lStack_360;
  if (lStack_360 == 0) goto LAB_140a1818e;
  goto LAB_140a182c7;
}

