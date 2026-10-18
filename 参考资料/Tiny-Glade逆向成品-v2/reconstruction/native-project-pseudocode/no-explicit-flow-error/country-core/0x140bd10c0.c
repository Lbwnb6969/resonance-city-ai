// VA 0x140bd10c0, PDB extent 14650 bytes
// country_core::systems::collision::intersect_meshes::find_mesh_mesh_intersections
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/intersect_meshes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::collision::intersect_meshes::find_mesh_mesh_intersections
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/intersect_meshes.rs
   Extent: 14650 */

void pdb_140bd10c0(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 *param_7)

{
  char *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  char cVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined *puVar18;
  byte *pbVar19;
  ulonglong uVar20;
  int *piVar21;
  ulonglong *puVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined8 uVar25;
  longlong *plVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  undefined8 *puVar30;
  byte *pbVar31;
  undefined *puVar32;
  longlong *plVar33;
  longlong lVar34;
  ulonglong *puVar35;
  undefined1 (*pauVar36) [16];
  ulonglong uVar37;
  byte *pbVar38;
  byte *pbVar39;
  ulonglong uVar40;
  ushort uVar41;
  longlong lVar42;
  undefined *puVar43;
  byte *pbVar44;
  byte *pbVar45;
  undefined1 (*pauVar46) [16];
  bool bVar47;
  byte bVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar59;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar68 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined1 auStack_4a8 [16];
  ulonglong *puStack_490;
  byte *pbStack_488;
  longlong lStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  float fStack_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  undefined8 uStack_448;
  undefined4 uStack_440;
  byte *pbStack_438;
  byte *pbStack_430;
  byte *pbStack_428;
  byte *pbStack_420;
  byte *pbStack_418;
  longlong lStack_410;
  longlong lStack_408;
  longlong lStack_400;
  byte *pbStack_3f8;
  code *pcStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  byte *pbStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  longlong lStack_3c0;
  longlong lStack_3b8;
  undefined1 auStack_3b0 [16];
  int iStack_3a0;
  byte **ppbStack_398;
  undefined8 uStack_388;
  undefined8 uStack_380;
  byte *pbStack_378;
  byte *pbStack_370;
  byte *pbStack_368;
  ulonglong *puStack_358;
  byte *pbStack_350;
  longlong lStack_348;
  ulonglong uStack_340;
  longlong lStack_338;
  longlong lStack_330;
  longlong *plStack_328;
  longlong lStack_320;
  byte *pbStack_318;
  undefined8 uStack_310;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  float fStack_2f4;
  undefined8 uStack_2f0;
  uint uStack_2e8;
  longlong lStack_2e0;
  byte *pbStack_2d8;
  byte *pbStack_2d0;
  longlong lStack_2c8;
  longlong lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  longlong lStack_2a8;
  undefined8 *puStack_2a0;
  longlong lStack_298;
  longlong *plStack_290;
  undefined8 uStack_288;
  ulonglong *puStack_280;
  byte *pbStack_278;
  byte *pbStack_270;
  longlong lStack_268;
  ulonglong uStack_260;
  ulonglong *puStack_258;
  ulonglong *puStack_250;
  ulonglong uStack_248;
  undefined8 *puStack_240;
  byte *pbStack_238;
  byte *pbStack_230;
  byte *pbStack_228;
  longlong lStack_220;
  byte *pbStack_218;
  byte *pbStack_210;
  longlong lStack_208;
  longlong lStack_200;
  byte *pbStack_1f8;
  longlong lStack_1f0;
  longlong *plStack_1e8;
  longlong lStack_1e0;
  undefined4 uStack_1d8;
  longlong lStack_1d0;
  undefined4 uStack_1c8;
  float fStack_1c4;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  undefined8 uStack_1b0;
  byte *pbStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  undefined4 uStack_178;
  float fStack_174;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  float fStack_160;
  float fStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined2 uStack_13e;
  float fStack_13c;
  byte *pbStack_138;
  ulonglong *puStack_130;
  longlong lStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 *puStack_118;
  byte *pbStack_110;
  byte bStack_103;
  byte bStack_102;
  char cStack_101;
  byte *pbStack_100;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  float fVar54;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_388 = param_3;
  plStack_290 = param_4;
  cVar9 = pdb_140e94b40();
  if (cVar9 == '\0') {
LAB_140bd12e4:
    *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
    lStack_198 = *param_6;
    cStack_101 = cVar9;
    puVar30 = (undefined8 *)pdb_140bf45b0(*param_2,&UNK_14331a530);
    if ((puVar30 == (undefined8 *)0x0) ||
       (lStack_128 = (**(code **)(puVar30[1] + 0x18))(*puVar30), lStack_128 == 0)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143064460);
    }
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    puVar30 = (undefined8 *)*param_5;
    pdb_1409c5ff0(&puStack_490);
    if (puStack_490 == (ulonglong *)0x0) {
      pbVar19 = (byte *)0x8;
      lVar16 = 0;
      lStack_1f0 = 0;
      goto LAB_140bd1a29;
    }
    puStack_358 = puStack_490;
    pbStack_350 = pbStack_488;
    lStack_348 = lStack_480;
    pauVar36 = *(undefined1 (**) [16])(pbStack_488 + 0x30);
    pbStack_110 = pbStack_488;
    lVar16 = *(longlong *)(pbStack_488 + 0x48);
    auVar51 = *pauVar36;
    pauVar46 = pauVar36 + 1;
    uVar27 = ~(uint)(ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
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
                            (ushort)(byte)(auVar51[0xf] >> 7) << 0xf);
    while (bVar47 = lVar16 != 0, lVar16 = lVar16 + -1, bVar47) {
      if ((short)uVar27 == 0) {
        do {
          auVar51 = *pauVar46;
          pauVar36 = pauVar36 + -0xc;
          pauVar46 = pauVar46 + 1;
          uVar27 = (ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
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
                           (ushort)(byte)(auVar51[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar27 == 0);
      }
      uVar6 = 0;
      for (uVar7 = uVar27; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      uVar27 = uVar27 - 1 & uVar27;
      uStack_440 = *(undefined4 *)((longlong)pauVar36 + (ulonglong)uVar6 * -0xc + -4);
      uStack_448 = *(undefined8 *)((longlong)pauVar36 + (ulonglong)uVar6 * -0xc + -0xc);
      puVar30 = &uStack_448;
      pdb_140a61b10(lStack_198);
    }
    lStack_220 = *param_1;
    cVar9 = pdb_140e94b40();
    uStack_120 = CONCAT31(uStack_120._1_3_,cVar9);
    if (cVar9 == '\0') {
      uStack_478 = 0;
      goto LAB_140bd15dc;
    }
    puVar30 = (undefined8 *)&UNK_143064b63;
    lVar34 = 0x53;
    uVar17 = 0x53;
    lVar16 = pdb_140bd69c0(&UNK_143064b63);
    if (lVar16 == 1) {
      if (0x53 < uVar17) {
        pdb_142dc8070(&UNK_143064b63,0x53,0,uVar17,&UNK_143064c40);
        goto LAB_140bd3509;
      }
      puVar30 = (undefined8 *)&UNK_143064b63;
      uVar20 = pdb_140bd69c0(&UNK_143064b63);
      if ((uVar20 & 1) != 0) {
        if (0x53 < uVar17 + 2) goto LAB_140bd349f;
        lVar34 = 0x51 - uVar17;
        puVar30 = (undefined8 *)(&UNK_143064b65 + uVar17);
      }
    }
    puVar43 = &UNK_14306445b;
    puVar18 = &UNK_14306441e;
    do {
      pbVar19 = puVar43 + -1;
      uVar27 = (uint)(char)*pbVar19;
      if ((int)uVar27 < 0) {
        bVar48 = puVar43[-2];
        if ((char)bVar48 < -0x40) {
          bVar2 = puVar43[-3];
          if ((char)bVar2 < -0x40) {
            pbVar45 = puVar43 + -4;
            puVar43 = puVar43 + -4;
            uVar27 = bVar2 & 0x3f | (*pbVar45 & 7) << 6;
          }
          else {
            puVar43 = puVar43 + -3;
            uVar27 = bVar2 & 0xf;
          }
          uVar27 = bVar48 & 0x3f | uVar27 << 6;
        }
        else {
          puVar43 = puVar43 + -2;
          uVar27 = bVar48 & 0x1f;
        }
        uVar27 = (uint)(*pbVar19 & 0x3f) | uVar27 << 6;
        if (uVar27 != 0x5c) goto LAB_140bd1519;
LAB_140bd154d:
        if ((undefined *)0x3d < puVar43 + -0x14306441d) goto LAB_140bd342c;
        lVar16 = 0x3c - (longlong)(puVar43 + -0x14306441e);
        puVar18 = puVar43 + 1;
        goto LAB_140bd1570;
      }
      puVar43 = puVar43 + -1;
      if (uVar27 == 0x5c) goto LAB_140bd154d;
LAB_140bd1519:
      if (uVar27 == 0x2f) goto LAB_140bd154d;
    } while (puVar43 != &UNK_14306441e);
    lVar16 = 0x3d;
LAB_140bd1570:
    pbVar19 = (byte *)pdb_140e97000();
    if ((pbVar19[0x68] == 1) || (pbVar19 = (byte *)pdb_142d8ec20(pbVar19,0), pbVar19 != (byte *)0x0)
       ) {
      if (*(longlong *)pbVar19 == 0) {
        pbVar19[0] = 0xff;
        pbVar19[1] = 0xff;
        pbVar19[2] = 0xff;
        pbVar19[3] = 0xff;
        pbVar19[4] = 0xff;
        pbVar19[5] = 0xff;
        pbVar19[6] = 0xff;
        pbVar19[7] = 0xff;
        pbStack_100 = pbVar19;
        uStack_470 = pdb_140e94f10(pbVar19 + 8,puVar30,lVar34,puVar18,lVar16,1,0);
        *(longlong *)pbStack_100 = *(longlong *)pbStack_100 + 1;
        uStack_478 = 1;
        uStack_288 = uStack_470;
LAB_140bd15dc:
        lStack_320 = 0;
        pbStack_318 = (byte *)0x4;
        uStack_310 = 0;
        plVar33 = (longlong *)pdb_140f3bda0();
        if ((char)plVar33[2] != '\x01') goto LAB_140bd3256;
        lStack_2a8 = *plVar33;
        puVar30 = (undefined8 *)plVar33[1];
        do {
          *plVar33 = lStack_2a8 + 1;
          uStack_2b8 = _DAT_143064e20;
          uStack_2b0 = _UNK_143064e28;
          lStack_2c8 = _DAT_143064e10;
          lStack_2c0 = _UNK_143064e18;
          lStack_2e0 = 0;
          pbStack_2d8 = (byte *)0x4;
          pbStack_2d0 = (byte *)0x0;
          uStack_1b0 = 0;
          pbStack_1a8 = (byte *)0x8;
          lStack_1a0 = 0;
          pauVar36 = *(undefined1 (**) [16])pbStack_110;
          lVar34 = *(longlong *)(pbStack_110 + 0x18);
          auVar51 = *pauVar36;
          pauVar46 = pauVar36 + 1;
          uVar27 = ~(uint)(ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
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
                                  (ushort)(byte)(auVar51[0xf] >> 7) << 0xf);
          puStack_118 = (undefined8 *)(lStack_220 + 0x20);
          puStack_2a0 = puVar30;
          while (lVar16 = lStack_1a0, pbVar19 = pbStack_1a8, lVar42 = uStack_1b0,
                bVar47 = lVar34 != 0, lVar34 = lVar34 + -1, bVar47) {
            if ((short)uVar27 == 0) {
              do {
                auVar51 = *pauVar46;
                pauVar36 = pauVar36 + -0xc;
                pauVar46 = pauVar46 + 1;
                uVar27 = (ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
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
                                 (ushort)(byte)(auVar51[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar27 == 0);
            }
            uVar6 = 0;
            for (uVar7 = uVar27; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar6 = uVar6 + 1;
            }
            uStack_2e8 = *(uint *)((longlong)pauVar36 + (ulonglong)uVar6 * -0xc + -4);
            uVar17 = *(ulonglong *)((longlong)pauVar36 + (ulonglong)uVar6 * -0xc + -0xc);
            uStack_2f0 = uVar17;
            if ((uStack_2e8 & 0xff) < 2) {
              uStack_2f0._4_4_ = (undefined4)(uVar17 >> 0x20);
              uVar3 = uStack_2f0._4_4_;
              lStack_298 = lVar34;
              pbStack_100 = (byte *)pdb_140cd4bd0(puStack_118 +
                                                  (ulonglong)(uStack_2e8 & 0xff) * 0x72,
                                                  uVar17 & 0xffffffff,uVar3);
              if (pbStack_100 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_143064518);
              }
              pdb_140cd4b60(&pbStack_378);
              uStack_13e = 0x100;
              bStack_102 = 1;
              pbVar19 = (byte *)&uStack_13e;
              if ((char)uStack_2e8 == '\0') {
                pbVar19 = &bStack_102;
              }
              pbVar45 = pbVar19 + (2 - (ulonglong)((char)uStack_2e8 == '\0'));
              lVar34 = lStack_298;
              for (; lStack_298 = lVar34, pbVar19 != pbVar45; pbVar19 = pbVar19 + 1) {
                bStack_103 = *pbVar19;
                puVar30 = puStack_118 + (ulonglong)bStack_103 * 0x72;
                pbStack_188 = &bStack_103;
                pbStack_180 = (byte *)&uStack_2f0;
                uStack_178 = SUB84(pbStack_110,0);
                fStack_174 = (float)((ulonglong)pbStack_110 >> 0x20);
                uStack_168 = SUB84(pbStack_100,0);
                uStack_164 = (undefined4)((ulonglong)pbStack_100 >> 0x20);
                fStack_160 = (float)lStack_220;
                fStack_15c = (float)((ulonglong)lStack_220 >> 0x20);
                uStack_158 = &lStack_320;
                uStack_150 = &lStack_2e0;
                puStack_148 = &uStack_1b0;
                pbStack_238 = pbStack_378;
                pbStack_230 = pbStack_370;
                pbStack_228 = pbStack_368;
                uStack_170 = puVar30;
                pdb_140ce7140(pbStack_378,&pbStack_238);
                ppbStack_398 = &pbStack_188;
                pdb_140950100(puVar30 + 0x18,&pbStack_3f8,0);
                lVar34 = lStack_298;
              }
            }
            uVar27 = uVar27 - 1 & uVar27;
          }
          if (lStack_2c0 != 0) {
            lVar34 = lStack_2c0 * 0x10 + 0x10;
            uVar17 = lStack_2c0 + lVar34 + 0x11;
            if (uVar17 != 0) {
              pub_1406abac0((byte *)(lStack_2c8 - lVar34),uVar17,0x10);
            }
          }
          if (lStack_2e0 != 0) {
            pub_1406abac0(pbStack_2d8,lStack_2e0 << 2,4);
          }
          if (lStack_320 != 0) {
            pub_1406abac0(pbStack_318,lStack_320 * 0x24,4);
          }
          if ((char)uStack_120 != '\0') {
            pbVar45 = (byte *)pdb_140e97000();
            if (pbVar45[0x68] != 1) {
              pbVar45 = (byte *)pdb_142d8ec20(pbVar45,0);
              if (pbVar45 == (byte *)0x0) {
                pdb_142dc7890(&UNK_143326860);
                goto LAB_140bd3509;
              }
            }
            if (*(longlong *)pbVar45 != 0) {
              pdb_142dc8090(&UNK_143326a50);
              goto LAB_140bd3509;
            }
            pbVar45[0] = 0xff;
            pbVar45[1] = 0xff;
            pbVar45[2] = 0xff;
            pbVar45[3] = 0xff;
            pbVar45[4] = 0xff;
            pbVar45[5] = 0xff;
            pbVar45[6] = 0xff;
            pbVar45[7] = 0xff;
            pbStack_100 = pbVar45;
            pdb_140e95370(pbVar45 + 8,uStack_288);
            *(longlong *)pbStack_100 = *(longlong *)pbStack_100 + 1;
          }
          puVar35 = puStack_358;
          pdb_140e9a350(puStack_358);
          pdb_140e9a350((ulonglong)puVar35 | 1);
          LOCK();
          uVar17 = *puVar35;
          *puVar35 = *puVar35 - 0x10;
          UNLOCK();
          if ((uVar17 & 0xfffffffffffffff2) == 0x12) {
            pdb_142dbbf50(puVar35);
          }
          lVar34 = lStack_348;
          lStack_348 = 0;
          pbStack_3f8 = (byte *)(lVar34 + -0x10);
          LOCK();
          plVar33 = (longlong *)(lVar34 + -0x10);
          *plVar33 = *plVar33 + -1;
          UNLOCK();
          if (*plVar33 == 0) {
            pdb_140c7af60(&pbStack_3f8);
          }
          lStack_1f0 = lVar42;
LAB_140bd1a29:
          pbVar45 = pbVar19 + lVar16 * 0x40;
          lStack_400 = lVar16;
          pbStack_190 = pbVar19;
          for (; pbVar19 != pbVar45; pbVar19 = pbVar19 + 0x40) {
            uStack_f3 = 1;
            pdb_1415df6f0();
          }
          uStack_f3 = 1;
          pdb_141a75940(lStack_128);
          lStack_208 = *plStack_290;
          plStack_1e8 = (longlong *)*uStack_388;
          lStack_338 = lStack_208 + 0x50;
          lStack_410 = lStack_128 + 0x78;
          lStack_408 = lStack_128 + 0x58;
          plStack_328 = plStack_1e8 + 4;
          lStack_330 = lStack_198 + 0x38;
          pbVar19 = pbStack_190;
          pbVar38 = pbStack_190;
          pbStack_1c0 = pbVar45;
LAB_140bd1b00:
          while (pbVar45 = pbVar19, pbVar19 != pbStack_1c0) {
            pbVar45 = pbVar19 + 0x40;
            lVar16 = *(longlong *)pbVar19;
            if (SBORROW8(0,lVar16)) break;
            puStack_130 = *(ulonglong **)(pbVar19 + 8);
            lStack_268 = *(longlong *)(pbVar19 + 0x10);
            pbStack_3f8 = *(byte **)(pbVar19 + 0x18);
            pbStack_1b8 = *(byte **)(pbVar19 + 0x20);
            uStack_1d8 = *(undefined4 *)(pbVar19 + 0x30);
            lStack_1e0 = *(longlong *)(pbVar19 + 0x28);
            lStack_1d0 = *(longlong *)(pbVar19 + 0x34);
            uStack_1c8 = *(undefined4 *)(pbVar19 + 0x3c);
            pbVar19 = pbVar45;
            lStack_200 = lVar16;
            pbStack_1f8 = pbStack_3f8;
            if (*(longlong *)(lStack_208 + 0x48) != 0) {
              uStack_f4 = 1;
              pbStack_100 = pbVar45;
              uVar17 = pdb_1400af0a0(lStack_338,&pbStack_3f8);
              bVar48 = (byte)(uVar17 >> 0x39);
              auVar51 = ZEXT216(CONCAT11(bVar48,bVar48));
              auVar51 = pshuflw(auVar51,auVar51,0);
              lVar16 = 0;
              while( true ) {
                uVar17 = uVar17 & *(ulonglong *)(lStack_208 + 0x38);
                pcVar1 = (char *)(*(longlong *)(lStack_208 + 0x30) + uVar17);
                auVar60[0] = -(*pcVar1 == auVar51[0]);
                auVar60[1] = -(pcVar1[1] == auVar51[1]);
                auVar60[2] = -(pcVar1[2] == auVar51[2]);
                auVar60[3] = -(pcVar1[3] == auVar51[3]);
                auVar60[4] = -(pcVar1[4] == auVar51[4]);
                auVar60[5] = -(pcVar1[5] == auVar51[5]);
                auVar60[6] = -(pcVar1[6] == auVar51[6]);
                auVar60[7] = -(pcVar1[7] == auVar51[7]);
                auVar60[8] = -(pcVar1[8] == auVar51[0]);
                auVar60[9] = -(pcVar1[9] == auVar51[1]);
                auVar60[10] = -(pcVar1[10] == auVar51[2]);
                auVar60[0xb] = -(pcVar1[0xb] == auVar51[3]);
                auVar60[0xc] = -(pcVar1[0xc] == auVar51[4]);
                auVar60[0xd] = -(pcVar1[0xd] == auVar51[5]);
                auVar60[0xe] = -(pcVar1[0xe] == auVar51[6]);
                auVar60[0xf] = -(pcVar1[0xf] == auVar51[7]);
                uVar41 = (ushort)(SUB161(auVar60 >> 7,0) & 1) |
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
                uVar27 = (uint)uVar41;
                while (uVar41 != 0) {
                  uVar6 = 0;
                  for (uVar7 = uVar27; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                    uVar6 = uVar6 + 1;
                  }
                  lVar34 = *(longlong *)(lStack_208 + 0x30) +
                           (uVar6 + uVar17 & *(ulonglong *)(lStack_208 + 0x38)) * -0x10;
                  if (pbStack_1f8 == *(byte **)(lVar34 + -0x10)) {
                    uStack_2fc = *(undefined4 *)(lVar34 + -8);
                    bVar47 = true;
                    goto LAB_140bd1c72;
                  }
                  uVar41 = (ushort)(uVar27 - 1) & (ushort)uVar27;
                  uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar41);
                }
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
                         (SUB161(auVar55 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar55 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar55 >> 0x5f,0) & 1) != 0) || (SUB161(auVar55 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar55 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar55 >> 0x77,0) & 1) != 0) || auVar55[0xf] < '\0') break;
                uVar17 = uVar17 + lVar16 + 0x10;
                lVar16 = lVar16 + 0x10;
              }
              bVar47 = false;
LAB_140bd1c72:
              pbStack_3f8 = pbStack_1b8;
              pbVar19 = pbStack_100;
              pbVar38 = pbStack_190;
              if (*(longlong *)(lStack_208 + 0x48) != 0) {
                uStack_f4 = 1;
                uVar17 = pdb_1400af0a0(lStack_338,&pbStack_3f8);
                bVar48 = (byte)(uVar17 >> 0x39);
                auVar51 = ZEXT216(CONCAT11(bVar48,bVar48));
                auVar51 = pshuflw(auVar51,auVar51,0);
                lVar16 = 0;
                while( true ) {
                  uVar17 = uVar17 & *(ulonglong *)(lStack_208 + 0x38);
                  auVar60 = *(undefined1 (*) [16])(*(longlong *)(lStack_208 + 0x30) + uVar17);
                  auVar61[0] = -(auVar60[0] == auVar51[0]);
                  auVar61[1] = -(auVar60[1] == auVar51[1]);
                  auVar61[2] = -(auVar60[2] == auVar51[2]);
                  auVar61[3] = -(auVar60[3] == auVar51[3]);
                  auVar61[4] = -(auVar60[4] == auVar51[4]);
                  auVar61[5] = -(auVar60[5] == auVar51[5]);
                  auVar61[6] = -(auVar60[6] == auVar51[6]);
                  auVar61[7] = -(auVar60[7] == auVar51[7]);
                  auVar61[8] = -(auVar60[8] == auVar51[0]);
                  auVar61[9] = -(auVar60[9] == auVar51[1]);
                  auVar61[10] = -(auVar60[10] == auVar51[2]);
                  auVar61[0xb] = -(auVar60[0xb] == auVar51[3]);
                  auVar61[0xc] = -(auVar60[0xc] == auVar51[4]);
                  auVar61[0xd] = -(auVar60[0xd] == auVar51[5]);
                  auVar61[0xe] = -(auVar60[0xe] == auVar51[6]);
                  auVar61[0xf] = -(auVar60[0xf] == auVar51[7]);
                  uVar41 = (ushort)(SUB161(auVar61 >> 7,0) & 1) |
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
                  uVar27 = (uint)uVar41;
                  while (pbVar19 = pbStack_100, pbVar38 = pbStack_190, uVar41 != 0) {
                    uVar6 = 0;
                    for (uVar7 = uVar27; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                      uVar6 = uVar6 + 1;
                    }
                    lVar34 = *(longlong *)(lStack_208 + 0x30) +
                             (uVar6 + uVar17 & *(ulonglong *)(lStack_208 + 0x38)) * -0x10;
                    if (pbStack_1b8 == *(byte **)(lVar34 + -0x10)) {
                      if (!bVar47) goto LAB_140bd1d69;
                      uStack_2f8 = *(undefined4 *)(lVar34 + -8);
                      pdb_14007ee60();
                      pbVar19 = pub_1406abab0(0x20,8);
                      if (pbVar19 == (byte *)0x0) {
                        uStack_f4 = 1;
                    /* WARNING: Subroutine does not return */
                        pdb_142dc7e11(8,0x20);
                      }
                      pbVar19[0] = 0;
                      pbVar19[1] = 0;
                      pbVar19[2] = 0;
                      pbVar19[3] = 0;
                      pbVar19[4] = 0;
                      pbVar19[5] = 0;
                      pbVar19[6] = 0;
                      pbVar19[7] = 0;
                      pbVar19[8] = 4;
                      pbVar19[9] = 0;
                      pbVar19[10] = 0;
                      pbVar19[0xb] = 0;
                      pbVar19[0xc] = 0;
                      pbVar19[0xd] = 0;
                      pbVar19[0xe] = 0;
                      pbVar19[0xf] = 0;
                      pbVar19[0x10] = 0;
                      pbVar19[0x11] = 0;
                      pbVar19[0x12] = 0;
                      pbVar19[0x13] = 0;
                      pbVar19[0x14] = 0;
                      pbVar19[0x15] = 0;
                      pbVar19[0x16] = 0;
                      pbVar19[0x17] = 0;
                      pbVar19[0x18] = 0;
                      pbVar45 = *(byte **)(lStack_128 + 0x48);
                      goto LAB_140bd1e50;
                    }
                    uVar41 = (ushort)(uVar27 - 1) & (ushort)uVar27;
                    uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar41);
                  }
                  auVar56[0] = -(auVar60[0] == -1);
                  auVar56[1] = -(auVar60[1] == -1);
                  auVar56[2] = -(auVar60[2] == -1);
                  auVar56[3] = -(auVar60[3] == -1);
                  auVar56[4] = -(auVar60[4] == -1);
                  auVar56[5] = -(auVar60[5] == -1);
                  auVar56[6] = -(auVar60[6] == -1);
                  auVar56[7] = -(auVar60[7] == -1);
                  auVar56[8] = -(auVar60[8] == -1);
                  auVar56[9] = -(auVar60[9] == -1);
                  auVar56[10] = -(auVar60[10] == -1);
                  auVar56[0xb] = -(auVar60[0xb] == -1);
                  auVar56[0xc] = -(auVar60[0xc] == -1);
                  auVar56[0xd] = -(auVar60[0xd] == -1);
                  auVar56[0xe] = -(auVar60[0xe] == -1);
                  auVar56[0xf] = -(auVar60[0xf] == -1);
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
                         (SUB161(auVar56 >> 0x5f,0) & 1) != 0) ||
                        (SUB161(auVar56 >> 0x67,0) & 1) != 0) ||
                       (SUB161(auVar56 >> 0x6f,0) & 1) != 0) || (SUB161(auVar56 >> 0x77,0) & 1) != 0
                      ) || auVar56[0xf] < '\0') break;
                  uVar17 = uVar17 + lVar16 + 0x10;
                  lVar16 = lVar16 + 0x10;
                }
              }
            }
LAB_140bd1d69:
            if (lStack_268 != 0) {
              puVar35 = puStack_130 + 1;
              lVar16 = lStack_268;
              do {
                if (puVar35[-1] != 0) {
                  pub_1406abac0((byte *)*puVar35,puVar35[-1] * 0x18,4);
                }
                puVar35 = puVar35 + 5;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
            if (lStack_200 != 0) {
              pub_1406abac0((byte *)puStack_130,lStack_200 * 0x28,8);
            }
          }
          pbStack_1c0 = pbStack_1c0 + -(longlong)pbVar45;
          if (pbStack_1c0 != (byte *)0x0) {
            pbStack_1c0 = (byte *)((ulonglong)pbStack_1c0 >> 6);
            pbVar19 = (byte *)0x0;
            do {
              lVar34 = (longlong)pbVar19 * 0x40;
              pbVar24 = *(byte **)(pbVar45 + lVar34 + 8);
              lVar16 = *(longlong *)(pbVar45 + lVar34 + 0x10);
              if (lVar16 != 0) {
                pbVar44 = pbVar24 + 8;
                do {
                  if (*(longlong *)(pbVar44 + -8) != 0) {
                    pub_1406abac0(*(byte **)pbVar44,*(longlong *)(pbVar44 + -8) * 0x18,4);
                  }
                  pbVar44 = pbVar44 + 0x28;
                  lVar16 = lVar16 + -1;
                } while (lVar16 != 0);
              }
              if (*(longlong *)(pbVar45 + lVar34) != 0) {
                pub_1406abac0(pbVar24,*(longlong *)(pbVar45 + lVar34) * 0x28,8);
              }
              pbVar19 = pbVar19 + 1;
            } while (pbVar19 != pbStack_1c0);
          }
          if (lStack_1f0 != 0) {
            pub_1406abac0(pbVar38,lStack_1f0 << 6,8);
          }
          uVar3 = *(undefined4 *)((longlong)param_7 + 0x1c);
          puVar4 = (undefined4 *)param_7[2];
          *puVar4 = uVar3;
          plVar33 = (longlong *)*param_7;
          puVar30 = (undefined8 *)plVar33[1];
          pbVar19 = (byte *)plVar33[2];
          plVar33[2] = 0;
          puStack_118 = puVar30;
          pbStack_110 = pbVar19;
          if (pbVar19 != (byte *)0x0) {
            pbVar45 = (byte *)0x1;
            do {
              plVar26 = (longlong *)*puVar30;
              LOCK();
              *plVar26 = *plVar26 + -1;
              UNLOCK();
              pbStack_100 = pbVar45;
              if (*plVar26 == 0) {
                pdb_140c79ee0(puVar30);
              }
              pbVar45 = pbStack_100 + 1;
              puVar30 = puVar30 + 8;
            } while (pbStack_100 != pbVar19);
          }
          *puVar4 = uVar3;
          pbStack_3f8 = *(byte **)(lStack_198 + 0x50);
          pcStack_3f0 = (code *)(pbStack_3f8 + *(longlong *)(lStack_198 + 0x58) * 0x48);
          uStack_3e8 = 0;
          pbStack_3d8 = (byte *)0x0;
          uStack_f3 = 0;
          pdb_1415e85b0(plVar33,&pbStack_3f8);
          if (cStack_101 == '\0') {
            return;
          }
          plVar26 = (longlong *)pdb_140e97000();
          if ((char)plVar26[0xd] != '\x01') {
            plVar26 = (longlong *)pdb_142d8ec20(plVar26,0);
            if (plVar26 == (longlong *)0x0) goto LAB_140bd32a2;
          }
          puVar30 = puStack_240;
          if (*plVar26 == 0) {
            *plVar26 = -1;
            pbStack_100 = (byte *)plVar26;
            pdb_140e95370(plVar26 + 1);
            *(longlong *)pbStack_100 = *(longlong *)pbStack_100 + 1;
            return;
          }
LAB_140bd3249:
          pdb_142dc8090(&UNK_143326a50);
LAB_140bd3256:
          lStack_2a8 = pdb_140f4fd10();
          *plVar33 = lStack_2a8;
          plVar33[1] = (longlong)puVar30;
          *(undefined1 *)(plVar33 + 2) = 1;
        } while( true );
      }
      pdb_142dc8090(&UNK_143326a50);
    }
    else {
      pdb_142dc7890(&UNK_143326860);
    }
  }
  else {
    puVar43 = &UNK_143064ab0;
    plVar33 = (longlong *)0x50;
    puVar30 = (undefined8 *)0x50;
    lVar16 = pdb_140bd69c0(&UNK_143064ab0);
    if (lVar16 != 1) goto LAB_140bd11bb;
    if ((undefined8 *)0x50 < puVar30) {
LAB_140bd340b:
      pdb_142dc8070(&UNK_143064ab0,0x50,0);
LAB_140bd342c:
      pdb_142dc8070(&UNK_14306441e,0x3d);
      goto LAB_140bd3509;
    }
    puVar43 = &UNK_143064ab0;
    uVar17 = pdb_140bd69c0(&UNK_143064ab0);
    if ((uVar17 & 1) == 0) {
LAB_140bd11bb:
      puVar18 = &UNK_14306445b;
      puVar32 = &UNK_14306441e;
      do {
        pbVar19 = puVar18 + -1;
        uVar27 = (uint)(char)*pbVar19;
        if ((int)uVar27 < 0) {
          bVar48 = puVar18[-2];
          if ((char)bVar48 < -0x40) {
            bVar2 = puVar18[-3];
            if ((char)bVar2 < -0x40) {
              pbVar45 = puVar18 + -4;
              puVar18 = puVar18 + -4;
              uVar27 = bVar2 & 0x3f | (*pbVar45 & 7) << 6;
            }
            else {
              puVar18 = puVar18 + -3;
              uVar27 = bVar2 & 0xf;
            }
            uVar27 = bVar48 & 0x3f | uVar27 << 6;
          }
          else {
            puVar18 = puVar18 + -2;
            uVar27 = bVar48 & 0x1f;
          }
          puVar30 = (undefined8 *)(ulonglong)(uVar27 << 6);
          uVar27 = (uint)(*pbVar19 & 0x3f) | uVar27 << 6;
          if (uVar27 != 0x5c) goto LAB_140bd1249;
LAB_140bd125f:
          if ((undefined *)0x3d < puVar18 + -0x14306441d) {
            pdb_142dc8070(&UNK_14306441e,0x3d,puVar18 + -0x14306441d,0x3d,&UNK_143064c20);
            goto LAB_140bd340b;
          }
          lVar16 = 0x3c - (longlong)(puVar18 + -0x14306441e);
          puVar32 = puVar18 + 1;
          goto LAB_140bd1283;
        }
        puVar18 = puVar18 + -1;
        if (uVar27 == 0x5c) goto LAB_140bd125f;
LAB_140bd1249:
        if (uVar27 == 0x2f) goto LAB_140bd125f;
      } while (puVar18 != &UNK_14306441e);
      lVar16 = 0x3d;
LAB_140bd1283:
      pbVar19 = (byte *)pdb_140e97000();
      if (pbVar19[0x68] != 1) {
        puVar30 = (undefined8 *)0x0;
        pbVar19 = (byte *)pdb_142d8ec20(pbVar19);
        if (pbVar19 == (byte *)0x0) {
LAB_140bd32a2:
          pdb_142dc7890(&UNK_143326860);
LAB_140bd32af:
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1430644c0);
        }
      }
      if (*(longlong *)pbVar19 != 0) goto LAB_140bd3249;
      pbVar19[0] = 0xff;
      pbVar19[1] = 0xff;
      pbVar19[2] = 0xff;
      pbVar19[3] = 0xff;
      pbVar19[4] = 0xff;
      pbVar19[5] = 0xff;
      pbVar19[6] = 0xff;
      pbVar19[7] = 0xff;
      pbStack_100 = pbVar19;
      puStack_240 = (undefined8 *)pdb_140e94f10(pbVar19 + 8,puVar43,plVar33,puVar32,lVar16,1,0);
      *(longlong *)pbStack_100 = *(longlong *)pbStack_100 + 1;
      goto LAB_140bd12e4;
    }
    if ((undefined *)((longlong)puVar30 + 2) < (undefined *)0x51) {
      plVar33 = (longlong *)(0x4e - (longlong)puVar30);
      puVar43 = &UNK_143064ab2 + (longlong)puVar30;
      goto LAB_140bd11bb;
    }
    pdb_142dc8070(&UNK_143064ab0,0x50,(undefined *)((longlong)puVar30 + 2),0x50,&UNK_143064c58);
LAB_140bd349f:
    pdb_142dc8070(&UNK_143064b63,0x53);
  }
LAB_140bd3509:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
  while( true ) {
    if (lVar16 < 0) {
      pbStack_3f8 = &UNK_1430739f8;
      pcStack_3f0 = pdb_1402ed400;
      uStack_f4 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143073a08,&pbStack_3f8,&UNK_143073c60);
    }
    lVar34 = lVar16 + 1;
    LOCK();
    lVar42 = *(longlong *)(pbVar45 + 8);
    bVar47 = lVar16 == lVar42;
    if (bVar47) {
      *(longlong *)(pbVar45 + 8) = lVar34;
      lVar42 = lVar16;
    }
    UNLOCK();
    lVar16 = lVar42;
    if (bVar47) break;
    while (lVar16 == -1) {
LAB_140bd1e50:
      lVar16 = *(longlong *)(pbVar45 + 8);
    }
  }
  LOCK();
  bVar47 = pbVar19[0x18] == 0;
  if (bVar47) {
    pbVar19[0x18] = 1;
  }
  UNLOCK();
  pbStack_378 = pbVar45;
  pbStack_370 = pbVar19;
  if (!bVar47) {
    uStack_f5 = 1;
    uStack_f6 = 1;
    pdb_142dbd1a0(pbVar19 + 0x18,lVar34,1000000000);
  }
  uStack_f5 = 1;
  uStack_f6 = 1;
  pdb_140e9a150(pbVar19 + 0x18);
  if ((*(longlong *)(pbVar19 + 0x10) == 0) ||
     (piVar21 = (int *)(*(longlong *)(pbVar19 + 8) + *(longlong *)(pbVar19 + 0x10) * 4 + -4),
     piVar21 == (int *)0x0)) {
    pbVar45 = *(byte **)(lStack_128 + 0x10);
    if (pbVar45 == (byte *)0x0) {
      uStack_f5 = 1;
      uStack_f6 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143382218);
    }
    iStack_3a0 = (int)pbVar45 + -1;
  }
  else {
    iStack_3a0 = *piVar21;
    pbVar45 = *(byte **)(lStack_128 + 0x10);
  }
  pbStack_3f8 = *(byte **)(lStack_128 + 8);
  uStack_3e8 = *(undefined8 *)(lStack_128 + 0x18);
  uStack_3e0 = *(undefined8 *)(lStack_128 + 0x20);
  uStack_3d0 = *(undefined8 *)(lStack_128 + 0x28);
  uStack_3c8 = *(undefined8 *)(lStack_128 + 0x30);
  auStack_3b0 = *(undefined1 (*) [16])(lStack_128 + 0x38);
  lStack_3c0 = lStack_410;
  lStack_3b8 = lStack_408;
  pbStack_238 = (byte *)0x0;
  pbStack_230 = (byte *)0x8;
  pbStack_228 = (byte *)0x0;
  pbStack_188 = pbStack_1f8;
  pcStack_3f0 = (code *)pbVar45;
  pbStack_3d8 = pbVar19;
  if (plStack_1e8[3] != 0) {
    uStack_f1 = 1;
    uStack_f2 = 1;
    uVar17 = pdb_1400af0a0(plStack_328,&pbStack_188);
    lVar16 = *plStack_1e8;
    bVar48 = (byte)(uVar17 >> 0x39);
    auVar51 = ZEXT216(CONCAT11(bVar48,bVar48));
    auVar51 = pshuflw(auVar51,auVar51,0);
    lVar34 = 0;
    while( true ) {
      uVar17 = uVar17 & plStack_1e8[1];
      auVar60 = *(undefined1 (*) [16])(lVar16 + uVar17);
      auVar62[0] = -(auVar60[0] == auVar51[0]);
      auVar62[1] = -(auVar60[1] == auVar51[1]);
      auVar62[2] = -(auVar60[2] == auVar51[2]);
      auVar62[3] = -(auVar60[3] == auVar51[3]);
      auVar62[4] = -(auVar60[4] == auVar51[4]);
      auVar62[5] = -(auVar60[5] == auVar51[5]);
      auVar62[6] = -(auVar60[6] == auVar51[6]);
      auVar62[7] = -(auVar60[7] == auVar51[7]);
      auVar62[8] = -(auVar60[8] == auVar51[0]);
      auVar62[9] = -(auVar60[9] == auVar51[1]);
      auVar62[10] = -(auVar60[10] == auVar51[2]);
      auVar62[0xb] = -(auVar60[0xb] == auVar51[3]);
      auVar62[0xc] = -(auVar60[0xc] == auVar51[4]);
      auVar62[0xd] = -(auVar60[0xd] == auVar51[5]);
      auVar62[0xe] = -(auVar60[0xe] == auVar51[6]);
      auVar62[0xf] = -(auVar60[0xf] == auVar51[7]);
      uVar41 = (ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
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
      uVar27 = (uint)uVar41;
      while (uVar41 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar27; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        lVar42 = (uVar6 + uVar17 & plStack_1e8[1]) * -0x2b0;
        if (pbStack_1f8 == *(byte **)(lVar16 + -0x2b0 + lVar42)) {
          lVar16 = lVar16 + lVar42;
          if ((*(ulonglong *)(lVar16 + -0x298) < 2) || (*(float *)(lVar16 + -0x278) <= 0.0)) {
            uStack_f1 = 1;
            uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143064478);
          }
          if ((1 < *(uint *)(lVar16 + -0x50)) || (pbStack_188 = pbStack_1b8, plStack_1e8[3] == 0))
          goto LAB_140bd2163;
          uStack_f1 = 1;
          uStack_f2 = 1;
          uVar17 = pdb_1400af0a0(plStack_328,&pbStack_188);
          lVar16 = *plStack_1e8;
          bVar48 = (byte)(uVar17 >> 0x39);
          auVar51 = ZEXT216(CONCAT11(bVar48,bVar48));
          auVar51 = pshuflw(auVar51,auVar51,0);
          lVar34 = 0;
          goto LAB_140bd20f3;
        }
        uVar41 = (ushort)(uVar27 - 1) & (ushort)uVar27;
        uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar41);
      }
      auVar57[0] = -(auVar60[0] == -1);
      auVar57[1] = -(auVar60[1] == -1);
      auVar57[2] = -(auVar60[2] == -1);
      auVar57[3] = -(auVar60[3] == -1);
      auVar57[4] = -(auVar60[4] == -1);
      auVar57[5] = -(auVar60[5] == -1);
      auVar57[6] = -(auVar60[6] == -1);
      auVar57[7] = -(auVar60[7] == -1);
      auVar57[8] = -(auVar60[8] == -1);
      auVar57[9] = -(auVar60[9] == -1);
      auVar57[10] = -(auVar60[10] == -1);
      auVar57[0xb] = -(auVar60[0xb] == -1);
      auVar57[0xc] = -(auVar60[0xc] == -1);
      auVar57[0xd] = -(auVar60[0xd] == -1);
      auVar57[0xe] = -(auVar60[0xe] == -1);
      auVar57[0xf] = -(auVar60[0xf] == -1);
      if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar57 >> 0x17,0) & 1) != 0) || (SUB161(auVar57 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar57 >> 0x27,0) & 1) != 0) || (SUB161(auVar57 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar57 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar57 >> 0x3f,0) & 1) != 0) || (SUB161(auVar57 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar57 >> 0x4f,0) & 1) != 0) || (SUB161(auVar57 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar57 >> 0x5f,0) & 1) != 0) || (SUB161(auVar57 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar57 >> 0x6f,0) & 1) != 0) || (SUB161(auVar57 >> 0x77,0) & 1) != 0) ||
          auVar57[0xf] < '\0') break;
      uVar17 = uVar17 + lVar34 + 0x10;
      lVar34 = lVar34 + 0x10;
    }
  }
LAB_140bd2163:
  uStack_11c = 0;
LAB_140bd216d:
  puStack_250 = puStack_130 + lStack_268 * 5;
  uStack_248 = lStack_268 * 0x28;
  puVar35 = puStack_130 + 6;
  puStack_118 = (undefined8 *)((ulonglong)puStack_118 & 0xffffffff00000000);
  puVar22 = puStack_130;
LAB_140bd21d3:
  uStack_248 = uStack_248 - 0x28;
  if (puVar22 != puStack_250) {
    puStack_258 = puVar22 + 5;
    uStack_260 = *puVar22;
    if (!SBORROW8(0,uStack_260)) {
      pbVar19 = (byte *)puVar22[1];
      uVar17 = puVar22[3];
      puStack_280 = puVar35;
      pbStack_218 = pbVar19;
      if (uVar17 != 0) {
        uVar20 = uStack_260;
        if (puVar22[2] < uStack_260) {
          uVar20 = 0;
        }
        lVar16 = puVar22[2] - uVar20;
        pbStack_428 = pbVar19 + lVar16 * 0x18;
        fVar66 = (float)*(undefined8 *)(pbVar19 + lVar16 * 0x18);
        fVar69 = (float)((ulonglong)*(undefined8 *)(pbVar19 + lVar16 * 0x18) >> 0x20);
        fVar50 = *(float *)(pbVar19 + lVar16 * 0x18 + 8);
        uVar37 = uStack_260 - lVar16;
        uVar20 = lVar16 + uVar17;
        if (uVar37 < uVar17) {
          uVar20 = uStack_260;
        }
        fVar73 = (float)*(undefined8 *)(pbVar19 + lVar16 * 0x18 + 0xc);
        fVar74 = (float)((ulonglong)*(undefined8 *)(pbVar19 + lVar16 * 0x18 + 0xc) >> 0x20);
        uStack_340 = 0;
        uVar40 = uVar17 - uVar37;
        if (uVar17 < uVar37) {
          uVar40 = 0;
        }
        fVar75 = *(float *)(pbVar19 + lVar16 * 0x18 + 0x14);
        pbStack_420 = pbVar19 + uVar20 * 0x18;
        pbStack_418 = pbVar19 + uVar40 * 0x18;
        bVar47 = true;
        fStack_13c = 0.0;
        fVar49 = 0.0;
        pbStack_278 = pbStack_428;
        pbStack_270 = pbStack_420;
        pbStack_210 = pbVar19;
        pbStack_138 = pbStack_418;
        do {
          pbVar45 = pbStack_138;
          if (pbStack_278 == pbStack_270) {
            pbVar45 = pbStack_278;
            pbVar38 = pbStack_210;
            pbVar24 = pbStack_278;
            if (pbStack_210 == pbStack_138) goto LAB_140bd28c0;
          }
          else {
            pbStack_138 = pbStack_270;
            pbVar38 = pbStack_278;
            pbVar24 = pbStack_210;
          }
          pbVar44 = pbVar38 + 0x18;
          if (bVar47) {
            pbVar23 = pbVar24;
            pbVar31 = pbStack_138;
            pbVar39 = pbVar45;
            if ((pbVar44 == pbStack_138) &&
               (pbVar23 = pbVar44, pbVar31 = pbVar45, pbVar44 = pbVar24, pbVar39 = pbStack_138,
               pbVar24 == pbVar45)) goto LAB_140bd28c0;
            pbStack_138 = pbVar39;
            pbVar39 = pbVar44;
            pbStack_430 = pbVar38;
            pbStack_278 = pbVar44 + 0x18;
            pbStack_270 = pbVar31;
            pbStack_210 = pbVar23;
          }
          else {
            pbStack_270 = pbStack_138;
            pbVar39 = pbVar38;
            pbStack_278 = pbVar44;
            pbStack_210 = pbVar24;
            pbStack_138 = pbVar45;
          }
          fStack_308 = *(float *)(pbStack_430 + 8);
          fVar64 = (float)*(undefined8 *)pbVar39;
          fVar65 = (float)((ulonglong)*(undefined8 *)pbVar39 >> 0x20);
          fStack_304 = *(float *)(pbVar39 + 8);
          fVar54 = (float)*(undefined8 *)pbStack_430;
          fVar8 = (float)((ulonglong)*(undefined8 *)pbStack_430 >> 0x20);
          fVar53 = fVar54 - fVar64;
          fVar59 = fVar8 - fVar65;
          fStack_300 = SQRT((fStack_308 - fStack_304) * (fStack_308 - fStack_304) +
                            fVar59 * fVar59 + fVar53 * fVar53);
          fVar53 = 0.0;
          pbStack_438 = pbStack_430;
          pbStack_430 = pbVar39;
          while (fVar59 = (fStack_300 - fVar53) + fVar49, _DAT_142e36f50 < fVar59) {
            fVar76 = fVar49 + _DAT_142e36f38;
            plStack_290 = (longlong *)CONCAT44(plStack_290._4_4_,*(float *)(pbStack_438 + 0x14));
            fVar75 = fVar75 + *(float *)(pbStack_438 + 0x14);
            uStack_388 = *(longlong **)(pbStack_438 + 0xc);
            uStack_380 = 0;
            fVar73 = fVar73 + SUB84(uStack_388,0);
            fVar74 = fVar74 + (float)((ulonglong)uStack_388 >> 0x20);
            fVar59 = _DAT_142e36f28 / SQRT(fVar75 * fVar75 + fVar74 * fVar74 + fVar73 * fVar73);
            if ((int)fVar59 - 1U < 0x7fffff ||
                (int)ABS(fVar59) - 0x800000U < 0x7f000000 && -1 < (int)fVar59) {
              fVar73 = fVar73 * fVar59;
              fVar74 = fVar74 * fVar59;
              fVar75 = fVar75 * fVar59;
            }
            else {
              fVar75 = 0.0;
              fVar74 = 0.0;
              fVar73 = 0.0;
            }
            fVar59 = _DAT_142e36f50 - fVar49;
            if (_DAT_142e36f50 - fVar49 <= 0.0) {
              fVar59 = 0.0;
            }
            lStack_298 = CONCAT44(lStack_298._4_4_,fVar53 + fVar59);
            fVar49 = (fVar53 + fVar59) / fStack_300;
            fVar53 = _DAT_142e36f28 - fVar49;
            fVar70 = fStack_304 * fVar49 + fStack_308 * fVar53;
            fVar67 = fVar70 - fVar50;
            fVar71 = fVar49 * fVar64 + fVar53 * fVar54;
            fVar72 = fVar49 * fVar65 + fVar53 * fVar8;
            fVar49 = fVar71 - fVar66;
            fVar53 = fVar72 - fVar69;
            fVar59 = _DAT_142e36f28 / SQRT(fVar53 * fVar53 + fVar49 * fVar49 + fVar67 * fVar67);
            bVar47 = (int)fVar59 - 1U < 0x7fffff ||
                     (int)ABS(fVar59) - 0x800000U < 0x7f000000 && -1 < (int)fVar59;
            if (bVar47) {
              fVar67 = fVar67 * fVar59;
            }
            else {
              fVar67 = 0.0;
            }
            auVar52._0_4_ = fVar49 * fVar59;
            auVar52._4_4_ = fVar53 * fVar59;
            auVar52._8_8_ = 0;
            uVar27 = (uint)bVar47;
            auVar68._0_4_ = (int)(uVar27 << 0x1f) >> 0x1f;
            auVar68._4_4_ = (int)(uVar27 << 0x1f) >> 0x1f;
            auVar68._8_4_ = (int)(uVar27 << 0x1f) >> 0x1f;
            auVar68._12_4_ = (int)(uVar27 << 0x1f) >> 0x1f;
            auVar68 = auVar68 & auVar52;
            fVar49 = (fVar66 + fVar71) * _DAT_142e36f60;
            fVar69 = (fVar69 + fVar72) * _UNK_142e36f64;
            fVar66 = (fVar50 + fVar70) * _DAT_142e36f50;
            pbStack_110 = (byte *)CONCAT44(pbStack_110._4_4_,fVar66);
            fVar50 = fVar75 * 0.0 + fVar73 * 0.0 + fVar74;
            if (fStack_13c < fVar50) {
              uStack_340 = 1;
              auStack_4a8 = auVar68;
              fStack_468 = fVar49;
              fStack_464 = fVar69;
              fStack_460 = _UNK_142e36f68 * 0.0;
              fStack_45c = _UNK_142e36f6c * 0.0;
              fStack_2f4 = fVar67;
              fStack_1c4 = fVar66;
              fStack_13c = fVar50;
            }
            fVar50 = auVar68._0_4_;
            fVar66 = auVar68._4_4_;
            uVar3 = uStack_2f8;
            if (((ulonglong)puStack_118 & 1) == 0) {
              uVar3 = uStack_2fc;
            }
            uVar10 = pdb_14094c8a0(CONCAT44(fVar66 * _DAT_142e36f50 * _DAT_143007998,
                                            fVar50 * _DAT_142e36f50 * _DAT_143007998));
            lStack_220 = CONCAT44(lStack_220._4_4_,uVar10);
            uStack_120 = pdb_14094c8a0(CONCAT44(fVar73 * _DAT_142e3b1d8,
                                                fVar67 * _DAT_142e36f50 * _DAT_143007998));
            uVar10 = pdb_14094c8a0(CONCAT44(fVar75 * _DAT_142e3b1d8,fVar74 * _DAT_142e3b1d8));
            uStack_288 = CONCAT44(uStack_288._4_4_,uVar10);
            uVar10 = pdb_14094c8a0(CONCAT44((fVar67 * fVar73 - fVar75 * fVar50) * _DAT_142e37988,
                                            (fVar66 * fVar75 - fVar67 * fVar74) * _DAT_142e37988));
            uVar11 = pdb_14094c8a0((fVar50 * fVar74 - fVar66 * fVar73) * _DAT_142e37988);
            uVar12 = pdb_14094c8a0(0);
            uVar13 = pdb_14094c8a0(0);
            fVar50 = (float)pdb_14094c8a0(0xc2c80000c2c80000);
            fVar66 = (float)pdb_14094c8a0(0xbdcccccdc2c80000);
            uVar14 = pdb_14094c8a0(0x3dcccccd);
            pbStack_188 = (byte *)CONCAT44(uStack_120,(int)lStack_220);
            pbStack_180 = (byte *)CONCAT44(uVar10,(int)uStack_288);
            uStack_170._4_4_ = pbStack_110._0_4_;
            uStack_158._4_4_ = (int)puStack_118;
            uStack_150._4_4_ = 8.40779e-45;
            uStack_178 = uVar11;
            fStack_174 = fVar49;
            uStack_170._0_4_ = fVar69;
            uStack_168 = uVar12;
            uStack_164 = uVar13;
            fStack_160 = fVar50;
            fStack_15c = fVar66;
            uStack_158._0_4_ = (float)uVar14;
            uStack_150._0_4_ = uVar3;
            pdb_141a77830(&pbStack_3f8,&pbStack_188);
            fVar49 = fVar76;
            if (fVar76 <= 0.0) {
              fVar49 = 0.0;
            }
            puStack_118 = (undefined8 *)CONCAT44(puStack_118._4_4_,(int)puStack_118 + 1);
            pbVar19 = pbStack_218;
            puVar35 = puStack_280;
            fVar50 = fVar70;
            fVar66 = fVar71;
            fVar69 = fVar72;
            fVar73 = (float)uStack_388;
            fVar74 = uStack_388._4_4_;
            fVar75 = plStack_290._0_4_;
            fVar53 = (float)lStack_298;
          }
          bVar47 = false;
          fVar49 = fVar59;
          if (fVar59 < 0.0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_1430644d8,0x25,&UNK_143064500);
          }
        } while( true );
      }
      pdb_142dc8110(&UNK_143064080,0x14,&UNK_1430644a8);
      goto LAB_140bd3509;
    }
    if (puStack_250 != puStack_258) {
      uVar17 = uStack_248 / 0x28;
      do {
        if (puVar35[-1] != 0) {
          pub_1406abac0((byte *)*puVar35,puVar35[-1] * 0x18,4);
        }
        puVar35 = puVar35 + 5;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if (lStack_200 != 0) {
    pub_1406abac0((byte *)puStack_130,lStack_200 * 0x28,8);
  }
  pbStack_1a8 = (byte *)CONCAT44(pbStack_1a8._4_4_,uStack_1d8);
  uStack_1b0 = lStack_1e0;
  uStack_f1 = 1;
  uStack_f2 = 0;
  uVar25 = pdb_14148b1b0(lStack_330,&uStack_1b0);
  pbStack_2d8 = (byte *)CONCAT44(pbStack_2d8._4_4_,uStack_1d8);
  lStack_2e0 = lStack_1e0;
  uStack_f1 = 1;
  uStack_f2 = 0;
  pdb_1417c9910(&pbStack_188,lStack_198,uVar25,&lStack_2e0);
  if ((char)uStack_170 == '\x11') {
    if (*(byte **)(pbStack_188 + 0x10) <= pbStack_180) {
      uStack_f1 = 1;
      uStack_f2 = 0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pbStack_180,*(byte **)(pbStack_188 + 0x10),&UNK_143337a68);
    }
  }
  else {
    lStack_2e0 = 0;
    pbStack_2d8 = (byte *)0x4;
    pbStack_2d0 = (byte *)0x0;
    uStack_f1 = 1;
    uStack_f2 = 0;
    pdb_1417c7b10(pbStack_188,pbStack_180,&uStack_178,&lStack_2e0);
  }
  pbStack_1a8 = (byte *)CONCAT44(pbStack_1a8._4_4_,uStack_1c8);
  uStack_1b0 = lStack_1d0;
  uStack_f1 = 1;
  uStack_f2 = 0;
  uVar25 = pdb_14148b1b0(lStack_330,&uStack_1b0);
  pbStack_2d8 = (byte *)CONCAT44(pbStack_2d8._4_4_,uStack_1c8);
  lStack_2e0 = lStack_1d0;
  uStack_f1 = 1;
  uStack_f2 = 0;
  pdb_1417c9910(&pbStack_188,lStack_198,uVar25,&lStack_2e0);
  if ((char)uStack_170 == '\x11') {
    if (*(byte **)(pbStack_188 + 0x10) <= pbStack_180) {
      uStack_f1 = 1;
      uStack_f2 = 0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pbStack_180,*(byte **)(pbStack_188 + 0x10),&UNK_143337a68);
    }
  }
  else {
    lStack_2e0 = 0;
    pbStack_2d8 = (byte *)0x4;
    pbStack_2d0 = (byte *)0x0;
    uStack_f1 = 1;
    uStack_f2 = 0;
    pdb_1417c7b10(pbStack_188,pbStack_180,&uStack_178,&lStack_2e0);
  }
  pbStack_318 = (byte *)CONCAT44(pbStack_318._4_4_,uStack_1d8);
  lStack_320 = lStack_1e0;
  pbStack_1a8 = (byte *)CONCAT44(pbStack_1a8._4_4_,uStack_1c8);
  uStack_1b0 = lStack_1d0;
  uStack_178 = SUB84(pbStack_228,0);
  fStack_174 = (float)((ulonglong)pbStack_228 >> 0x20);
  pbStack_188 = pbStack_238;
  pbStack_180 = pbStack_230;
  uStack_170._0_4_ = SUB84(pbStack_378,0);
  uStack_170._4_4_ = (undefined4)((ulonglong)pbStack_378 >> 0x20);
  uStack_168 = SUB84(pbStack_370,0);
  uStack_164 = (undefined4)((ulonglong)pbStack_370 >> 0x20);
  uStack_f1 = 0;
  uStack_f2 = 0;
  pdb_140a62510(&lStack_2e0,lStack_198,&lStack_320,&uStack_1b0,&pbStack_188);
  if (!SBORROW8(0,lStack_2e0)) {
    pdb_140977610(&lStack_2c8);
    uStack_f1 = 0;
    uStack_f2 = 0;
    pdb_140967f60(&lStack_2e0);
  }
  pbVar19 = pbStack_3d8 + 0x18;
  uStack_f5 = 0;
  uStack_f6 = 0;
  pdb_140e9a350();
  LOCK();
  bVar48 = *pbVar19;
  if (bVar48 == 1) {
    *pbVar19 = 0;
  }
  UNLOCK();
  if (bVar48 != 1) {
    uStack_f5 = 0;
    uStack_f6 = 0;
    pdb_142dbcef0(pbVar19,0);
  }
  pbVar19 = pbStack_100;
  pbVar38 = pbStack_190;
  goto LAB_140bd1b00;
LAB_140bd20f3:
  uVar17 = uVar17 & plStack_1e8[1];
  auVar60 = *(undefined1 (*) [16])(lVar16 + uVar17);
  auVar63[0] = -(auVar60[0] == auVar51[0]);
  auVar63[1] = -(auVar60[1] == auVar51[1]);
  auVar63[2] = -(auVar60[2] == auVar51[2]);
  auVar63[3] = -(auVar60[3] == auVar51[3]);
  auVar63[4] = -(auVar60[4] == auVar51[4]);
  auVar63[5] = -(auVar60[5] == auVar51[5]);
  auVar63[6] = -(auVar60[6] == auVar51[6]);
  auVar63[7] = -(auVar60[7] == auVar51[7]);
  auVar63[8] = -(auVar60[8] == auVar51[0]);
  auVar63[9] = -(auVar60[9] == auVar51[1]);
  auVar63[10] = -(auVar60[10] == auVar51[2]);
  auVar63[0xb] = -(auVar60[0xb] == auVar51[3]);
  auVar63[0xc] = -(auVar60[0xc] == auVar51[4]);
  auVar63[0xd] = -(auVar60[0xd] == auVar51[5]);
  auVar63[0xe] = -(auVar60[0xe] == auVar51[6]);
  auVar63[0xf] = -(auVar60[0xf] == auVar51[7]);
  uVar41 = (ushort)(SUB161(auVar63 >> 7,0) & 1) | (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe | (ushort)(auVar63[0xf] >> 7) << 0xf;
  uVar27 = (uint)uVar41;
  while (uVar41 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar27; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    lVar42 = (uVar6 + uVar17 & plStack_1e8[1]) * -0x2b0;
    if (pbStack_1b8 == *(byte **)(lVar16 + -0x2b0 + lVar42)) {
      lVar16 = lVar16 + lVar42;
      if ((*(ulonglong *)(lVar16 + -0x298) < 2) || (*(float *)(lVar16 + -0x278) <= 0.0)) {
        uStack_f1 = 1;
        uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143064490);
      }
      uStack_11c = (undefined4)CONCAT71((int7)(uVar17 >> 8),*(uint *)(lVar16 + -0x50) < 2);
      goto LAB_140bd216d;
    }
    uVar41 = (ushort)(uVar27 - 1) & (ushort)uVar27;
    uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar41);
  }
  auVar58[0] = -(auVar60[0] == -1);
  auVar58[1] = -(auVar60[1] == -1);
  auVar58[2] = -(auVar60[2] == -1);
  auVar58[3] = -(auVar60[3] == -1);
  auVar58[4] = -(auVar60[4] == -1);
  auVar58[5] = -(auVar60[5] == -1);
  auVar58[6] = -(auVar60[6] == -1);
  auVar58[7] = -(auVar60[7] == -1);
  auVar58[8] = -(auVar60[8] == -1);
  auVar58[9] = -(auVar60[9] == -1);
  auVar58[10] = -(auVar60[10] == -1);
  auVar58[0xb] = -(auVar60[0xb] == -1);
  auVar58[0xc] = -(auVar60[0xc] == -1);
  auVar58[0xd] = -(auVar60[0xd] == -1);
  auVar58[0xe] = -(auVar60[0xe] == -1);
  auVar58[0xf] = -(auVar60[0xf] == -1);
  if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 || (SUB161(auVar58 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar58 >> 0x17,0) & 1) != 0) || (SUB161(auVar58 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar58 >> 0x27,0) & 1) != 0) || (SUB161(auVar58 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar58 >> 0x37,0) & 1) != 0) || (SUB161(auVar58 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar58 >> 0x47,0) & 1) != 0) || (SUB161(auVar58 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar58 >> 0x57,0) & 1) != 0) || (SUB161(auVar58 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar58 >> 0x67,0) & 1) != 0) || (SUB161(auVar58 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar58 >> 0x77,0) & 1) != 0) || auVar58[0xf] < '\0') goto LAB_140bd2163;
  uVar17 = uVar17 + lVar34 + 0x10;
  lVar34 = lVar34 + 0x10;
  goto LAB_140bd20f3;
LAB_140bd28c0:
  if (((byte)uStack_11c & _DAT_143007998 < fStack_13c) != 0) {
    if ((uStack_340 & 1) == 0) goto LAB_140bd32af;
    fVar50 = fStack_468 * _DAT_142e3a74c;
    fVar66 = fStack_464 * _DAT_142e3a74c;
    iVar15 = (int)fVar50;
    if (_DAT_142e382cc < fVar50) {
      iVar15 = 0x7fffffff;
    }
    if (NAN(fVar50)) {
      iVar15 = 0;
    }
    fVar50 = fStack_1c4 * _DAT_142e3a74c;
    iVar28 = (int)fVar66;
    if (_DAT_142e382cc < fVar66) {
      iVar28 = 0x7fffffff;
    }
    if (NAN(fVar66)) {
      iVar28 = 0;
    }
    iVar29 = (int)fVar50;
    if (_DAT_142e382cc < fVar50) {
      iVar29 = 0x7fffffff;
    }
    if (NAN(fVar50)) {
      iVar29 = 0;
    }
    uStack_1b0 = CONCAT44(iVar28,iVar15);
    pbStack_1a8 = (byte *)CONCAT44(pbStack_1a8._4_4_,iVar29);
    uVar37 = pdb_140bba7b0(&uStack_1b0);
    pbStack_188 = pbStack_428;
    pbStack_180 = pbStack_420;
    uStack_178 = SUB84(pbStack_218,0);
    fStack_174 = (float)((ulonglong)pbStack_218 >> 0x20);
    uStack_170._0_4_ = SUB84(pbStack_418,0);
    uStack_170._4_4_ = (undefined4)((ulonglong)pbStack_418 >> 0x20);
    pdb_1415fc350(&lStack_2e0,&pbStack_188);
    pbVar38 = pbStack_2d0;
    pbVar45 = pbStack_2d8;
    lVar16 = lStack_2e0;
    uVar17 = (longlong)pbStack_2d0 * 0xc;
    uVar20 = uVar17;
    pbVar24 = (byte *)pdb_140f606e0(4);
    pbStack_110 = pbVar38;
    pbVar19 = pbVar24;
    if (uVar20 != 0) {
      pdb_14007ee60();
      pbVar19 = pub_1406abab0(uVar20,(ulonglong)pbVar24);
    }
    if (pbVar19 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(pbVar24,uVar20);
    }
    pbVar19[0] = 1;
    pbVar19[1] = 0;
    pbVar19[2] = 0;
    pbVar19[3] = 0;
    pbVar19[4] = 0;
    pbVar19[5] = 0;
    pbVar19[6] = 0;
    pbVar19[7] = 0;
    pbVar19[8] = 1;
    pbVar19[9] = 0;
    pbVar19[10] = 0;
    pbVar19[0xb] = 0;
    pbVar19[0xc] = 0;
    pbVar19[0xd] = 0;
    pbVar19[0xe] = 0;
    pbVar19[0xf] = 0;
    pub_142e32760(pbVar19 + 0x10,pbVar45,uVar17);
    if (lVar16 != 0) {
      pub_1406abac0(pbVar45,lVar16 * 0xc,4);
    }
    pbVar45 = pbStack_228;
    fStack_160 = fStack_468;
    fStack_15c = fStack_464;
    uStack_158._0_4_ = fStack_1c4;
    uStack_158._4_4_ = auStack_4a8._0_4_;
    uStack_150._0_4_ = auStack_4a8._4_4_;
    uStack_150._4_4_ = fStack_2f4;
    uStack_178 = (undefined4)(uVar37 ^ 0x8fa0408ab570bdd);
    fStack_174 = (float)((uVar37 ^ 0x8fa0408ab570bdd) >> 0x20);
    uStack_170._0_4_ = SUB84(pbStack_1f8,0);
    uStack_170._4_4_ = (undefined4)((ulonglong)pbStack_1f8 >> 0x20);
    uStack_168 = SUB84(pbStack_1b8,0);
    uStack_164 = (undefined4)((ulonglong)pbStack_1b8 >> 0x20);
    pbStack_180 = pbStack_110;
    pbStack_188 = pbVar19;
    if (pbStack_228 == pbStack_238) {
      pdb_142d7ee50(&pbStack_238);
    }
    lVar16 = (longlong)pbVar45 * 0x40;
    auVar51._4_4_ = uStack_164;
    auVar51._0_4_ = uStack_168;
    auVar51._8_4_ = fStack_160;
    auVar51._12_4_ = fStack_15c;
    *(longlong **)(pbStack_230 + lVar16 + 0x30) = uStack_158;
    *(longlong **)(pbStack_230 + lVar16 + 0x30 + 8) = uStack_150;
    *(undefined1 (*) [16])(pbStack_230 + lVar16 + 0x20) = auVar51;
    *(ulonglong *)(pbStack_230 + lVar16 + 0x10) = CONCAT44(fStack_174,uStack_178);
    *(undefined8 **)(pbStack_230 + lVar16 + 0x10 + 8) = uStack_170;
    *(byte **)(pbStack_230 + lVar16) = pbStack_188;
    *(byte **)(pbStack_230 + lVar16 + 8) = pbStack_180;
    pbStack_228 = pbVar45 + 1;
    pbVar19 = pbStack_218;
    puVar35 = puStack_280;
  }
  if (uStack_260 != 0) {
    pub_1406abac0(pbVar19,uStack_260 * 0x18,4);
  }
  puVar35 = puVar35 + 5;
  puVar22 = puStack_258;
  goto LAB_140bd21d3;
}

