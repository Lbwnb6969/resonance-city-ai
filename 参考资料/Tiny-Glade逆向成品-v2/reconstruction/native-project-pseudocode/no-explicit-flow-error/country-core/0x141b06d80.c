// VA 0x141b06d80, PDB extent 19404 bytes
// country_core::startup::load_clutter_packs::apply_built_clutter_packs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::load_clutter_packs::apply_built_clutter_packs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
   Extent: 19404 */

undefined8 *
pdb_141b06d80(undefined8 *param_1,undefined8 *param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong *param_8,
             longlong param_9,undefined8 param_10)

{
  char *pcVar1;
  float fVar2;
  byte bVar3;
  code *pcVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  uint *puVar23;
  undefined1 (*pauVar24) [16];
  undefined1 (**ppauVar25) [16];
  ulonglong uVar26;
  char cVar27;
  char cVar28;
  ushort uVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  longlong lVar33;
  ulonglong uVar34;
  undefined1 (*pauVar35) [16];
  undefined8 uVar36;
  longlong *plVar37;
  undefined8 *puVar38;
  byte *pbVar39;
  undefined1 (*pauVar40) [16];
  undefined1 (**ppauVar41) [16];
  uint *puVar42;
  undefined1 (*pauVar43) [16];
  undefined1 (*pauVar44) [16];
  undefined1 (*pauVar45) [16];
  undefined1 (*pauVar46) [16];
  ulonglong uVar47;
  byte *pbVar48;
  longlong lVar49;
  undefined1 (*pauVar50) [16];
  byte *pbVar51;
  undefined *puVar52;
  longlong lVar53;
  undefined *puVar54;
  undefined8 uVar55;
  undefined1 (*pauVar56) [16];
  longlong lVar57;
  undefined *puVar58;
  byte bVar59;
  byte bVar60;
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  ulonglong uStack_618;
  undefined1 (*pauStack_610) [16];
  undefined8 uStack_608;
  longlong lStack_600;
  undefined8 uStack_5f8;
  undefined1 (*pauStack_5f0) [16];
  longlong lStack_5e8;
  ulonglong uStack_5e0;
  longlong lStack_5d0;
  undefined1 auStack_5c8 [16];
  undefined1 auStack_5b8 [16];
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined1 (*pauStack_598) [16];
  ulonglong uStack_590;
  undefined1 (*pauStack_588) [16];
  undefined1 (*pauStack_580) [16];
  undefined1 (*pauStack_578) [16];
  code *pcStack_570;
  longlong lStack_568;
  ulonglong uStack_560;
  undefined8 uStack_548;
  longlong *plStack_540;
  undefined1 (*pauStack_538) [16];
  longlong lStack_530;
  byte *pbStack_528;
  undefined1 (*pauStack_520) [16];
  code *pcStack_518;
  ulonglong uStack_510;
  undefined8 uStack_508;
  ulonglong uStack_500;
  longlong lStack_4f8;
  ulonglong uStack_4f0;
  longlong lStack_4e8;
  undefined1 (**ppauStack_4e0) [16];
  undefined1 (*pauStack_4d8) [16];
  ulonglong uStack_4d0;
  undefined1 uStack_4c8;
  undefined7 uStack_4c7;
  longlong lStack_4c0;
  byte *pbStack_4b8;
  undefined1 (*pauStack_4a8) [16];
  ulonglong uStack_4a0;
  undefined8 uStack_498;
  longlong lStack_490;
  undefined1 (*pauStack_488) [16];
  longlong lStack_480;
  longlong lStack_468;
  undefined1 (*pauStack_460) [16];
  undefined1 (*pauStack_458) [16];
  ulonglong uStack_450;
  longlong lStack_448;
  undefined1 (**ppauStack_440) [16];
  undefined1 (*pauStack_438) [16];
  undefined1 (*pauStack_430) [16];
  longlong lStack_428;
  undefined8 uStack_420;
  ulonglong uStack_418;
  undefined1 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 (**ppauStack_3e8) [16];
  ulonglong uStack_3e0;
  byte *pbStack_3d8;
  undefined1 (*pauStack_3d0) [16];
  undefined1 uStack_3c8;
  ulonglong uStack_3c0;
  byte *pbStack_3b8;
  undefined1 (*pauStack_3b0) [16];
  undefined8 uStack_3a0;
  undefined1 (*pauStack_398) [16];
  ulonglong uStack_390;
  undefined8 uStack_388;
  undefined1 (**ppauStack_380) [16];
  undefined1 (*pauStack_378) [16];
  code *pcStack_370;
  byte *pbStack_368;
  undefined1 (*pauStack_360) [16];
  undefined1 (*pauStack_358) [16];
  undefined8 uStack_350;
  undefined1 (*pauStack_348) [16];
  longlong lStack_340;
  byte *pbStack_338;
  longlong lStack_330;
  undefined1 (*pauStack_328) [16];
  ulonglong uStack_320;
  undefined8 uStack_318;
  longlong lStack_308;
  undefined8 uStack_300;
  ulonglong uStack_2f8;
  undefined1 (*pauStack_2f0) [16];
  undefined8 uStack_2e8;
  undefined1 (*pauStack_2e0) [16];
  undefined1 (*pauStack_2d8) [16];
  byte *pbStack_2d0;
  ulonglong uStack_2c8;
  undefined1 (*pauStack_2c0) [16];
  undefined1 (*pauStack_2b8) [16];
  undefined1 (*pauStack_2b0) [16];
  undefined1 (*pauStack_2a8) [16];
  code *pcStack_2a0;
  undefined1 (**ppauStack_298) [16];
  ulonglong uStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined1 (*pauStack_218) [16];
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  uint uStack_1fc;
  undefined1 (*pauStack_1f8) [16];
  undefined1 (**ppauStack_1f0) [16];
  uint uStack_1e8;
  undefined1 uStack_1e4;
  undefined1 uStack_1e3;
  undefined1 uStack_1e2;
  byte bStack_1e1;
  undefined1 uStack_1e0;
  undefined1 uStack_1df;
  undefined1 uStack_1de;
  undefined1 uStack_1dd;
  undefined1 uStack_1dc;
  undefined1 uStack_1db;
  undefined1 uStack_1da;
  undefined1 uStack_1d9;
  undefined1 uStack_1d8;
  undefined1 uStack_1d7;
  undefined1 uStack_1d6;
  undefined1 uStack_1d5;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 (*pauStack_1c8) [16];
  ulonglong uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 (*pauStack_1b0) [16];
  undefined1 (*pauStack_1a8) [16];
  undefined1 (*pauStack_1a0) [16];
  code *pcStack_198;
  undefined1 (**ppauStack_190) [16];
  ulonglong uStack_188;
  byte *pbStack_180;
  undefined1 (*pauStack_178) [16];
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 (*pauStack_168) [16];
  undefined1 (*pauStack_160) [16];
  undefined1 (*pauStack_158) [16];
  byte *pbStack_150;
  uint uStack_140;
  undefined1 uStack_13c;
  undefined1 uStack_13b;
  undefined1 uStack_13a;
  byte bStack_139;
  undefined1 uStack_138;
  undefined1 uStack_137;
  undefined1 uStack_136;
  undefined1 uStack_135;
  undefined1 uStack_134;
  undefined1 uStack_133;
  undefined1 uStack_132;
  undefined1 uStack_131;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined1 uStack_12e;
  undefined1 uStack_12d;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  undefined1 (*pauStack_110) [16];
  undefined1 (*pauStack_108) [16];
  undefined1 uStack_fa;
  undefined1 uStack_f9;
  undefined1 (*pauStack_f8) [16];
  undefined1 (*pauStack_f0) [16];
  undefined1 (*pauStack_e8) [16];
  byte bStack_db;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  
  uStack_d0 = 0xfffffffffffffffe;
  puStack_210 = param_2;
  puStack_208 = param_1;
  cVar27 = pdb_140e94b40();
  if (cVar27 == '\0') {
    lStack_448 = 0;
  }
  else {
    lVar57 = 0x44;
    lVar33 = pdb_141b0d040(0x44);
    puVar58 = &UNK_14338d390;
    if (lVar33 == 1) {
      if ((undefined8 *)0x44 < param_2) {
        pdb_142dc8070(&UNK_14338d390,0x44,0,param_2,&UNK_14338d458);
        goto LAB_141b09ca3;
      }
      uVar34 = pdb_141b0d040(param_2);
      if ((uVar34 & 1) != 0) {
        if (0x44 < (longlong)param_2 + 2U) {
          pdb_142dc8070(&UNK_14338d390,0x44,(longlong)param_2 + 2U,0x44,&UNK_14338d470);
          goto LAB_141b09ca3;
        }
        lVar57 = 0x42 - (longlong)param_2;
        puVar58 = &UNK_14338d392 + (longlong)param_2;
      }
    }
    puVar52 = &UNK_14338d163;
    puVar54 = &UNK_14338d12e;
    do {
      bVar59 = puVar52[-1];
      uVar30 = (uint)(char)bVar59;
      if ((char)bVar59 < '\0') {
        bVar60 = puVar52[-2];
        if ((char)bVar60 < -0x40) {
          bVar3 = puVar52[-3];
          if ((char)bVar3 < -0x40) {
            pbVar51 = puVar52 + -4;
            puVar52 = puVar52 + -4;
            uVar30 = bVar3 & 0x3f | (*pbVar51 & 7) << 6;
          }
          else {
            puVar52 = puVar52 + -3;
            uVar30 = bVar3 & 0xf;
          }
          uVar30 = bVar60 & 0x3f | uVar30 << 6;
        }
        else {
          puVar52 = puVar52 + -2;
          uVar30 = bVar60 & 0x1f;
        }
        uVar30 = (uint)(bVar59 & 0x3f) | uVar30 << 6;
        if (uVar30 != 0x5c) goto LAB_141b06ef4;
LAB_141b06f0c:
        puVar54 = puVar52 + -0x14338d12d;
        if (puVar54 < (undefined *)0x36) {
          lVar33 = 0x35 - (longlong)puVar54;
          puVar54 = puVar52 + 1;
          goto LAB_141b06f2e;
        }
        pdb_142dc8070(&UNK_14338d12e,0x35,puVar54,0x35,&UNK_14338d438);
        goto LAB_141b09ca3;
      }
      puVar52 = puVar52 + -1;
      if (uVar30 == 0x5c) goto LAB_141b06f0c;
LAB_141b06ef4:
      if (uVar30 == 0x2f) goto LAB_141b06f0c;
    } while (puVar52 != &UNK_14338d12e);
    lVar33 = 0x35;
LAB_141b06f2e:
    pauVar35 = (undefined1 (*) [16])pdb_140e97000();
    if ((pauVar35[6][8] != '\x01') &&
       (pauVar35 = (undefined1 (*) [16])pdb_142d8ec20(pauVar35,0),
       pauVar35 == (undefined1 (*) [16])0x0)) {
      pdb_142dc7890(&UNK_143326860);
      goto LAB_141b09ca3;
    }
    if (*(longlong *)*pauVar35 != 0) {
      pdb_142dc8090(&UNK_143326a50);
      goto LAB_141b09ca3;
    }
    *(undefined8 *)*pauVar35 = 0xffffffffffffffff;
    pauStack_f0 = pauVar35;
    uStack_300 = pdb_140e94f10(*pauVar35 + 8,puVar58,lVar57,puVar54,lVar33,1,0);
    *(longlong *)*pauStack_f0 = *(longlong *)*pauStack_f0 + 1;
    lStack_448 = 1;
  }
  lStack_308 = lStack_448;
  pdb_140cea9a0(&uStack_3c0);
  pdb_1417fccd0(&uStack_1e8,&uStack_3c0,*puStack_210,puStack_210[1]);
  lStack_468 = CONCAT44(uStack_1d4,
                        CONCAT13(uStack_1d5,CONCAT12(uStack_1d6,CONCAT11(uStack_1d7,uStack_1d8))));
  if (!SBORROW8(0,lStack_468)) {
    pauStack_460 = (undefined1 (*) [16])CONCAT44(uStack_1cc,uStack_1d0);
    pauStack_458 = pauStack_1c8;
    uStack_450 = uStack_1c0;
    pdb_1417fc230(&uStack_1e8,&uStack_3c0);
    lStack_340 = CONCAT17(bStack_1e1,
                          CONCAT16(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))))
    ;
    pbStack_338 = (byte *)CONCAT17(uStack_1d9,
                                   CONCAT16(uStack_1da,
                                            CONCAT15(uStack_1db,
                                                     CONCAT14(uStack_1dc,
                                                              CONCAT13(uStack_1dd,
                                                                       CONCAT12(uStack_1de,
                                                                                CONCAT11(uStack_1df,
                                                                                         uStack_1e0)
                                                                               ))))));
    if (!SBORROW8(0,lStack_340)) {
      lStack_330 = CONCAT44(uStack_1d4,
                            CONCAT13(uStack_1d5,CONCAT12(uStack_1d6,CONCAT11(uStack_1d7,uStack_1d8))
                                    ));
      pdb_141a327a0(&lStack_5e8,pbStack_338,pbStack_338 + lStack_330 * 0x50);
      plVar37 = (longlong *)pdb_14008d710(0);
      if (plVar37 != (longlong *)0x0) {
        pauStack_1c8 = (undefined1 (*) [16])*plVar37;
        uStack_1c0 = plVar37[1];
        *plVar37 = *plVar37 + 1;
        uStack_1d8 = (undefined1)_DAT_143366cc0;
        uStack_1d7 = (undefined1)((ulonglong)_DAT_143366cc0 >> 8);
        uStack_1d6 = (undefined1)((ulonglong)_DAT_143366cc0 >> 0x10);
        uStack_1d5 = (undefined1)((ulonglong)_DAT_143366cc0 >> 0x18);
        uStack_1d4 = (undefined4)((ulonglong)_DAT_143366cc0 >> 0x20);
        uStack_1d0 = (undefined4)_UNK_143366cc8;
        uStack_1cc = (undefined4)((ulonglong)_UNK_143366cc8 >> 0x20);
        uStack_1e8 = (uint)_DAT_143366cb0;
        uStack_1e4 = (undefined1)((ulonglong)_DAT_143366cb0 >> 0x20);
        uStack_1e3 = (undefined1)((ulonglong)_DAT_143366cb0 >> 0x28);
        uStack_1e2 = (undefined1)((ulonglong)_DAT_143366cb0 >> 0x30);
        bStack_1e1 = (byte)((ulonglong)_DAT_143366cb0 >> 0x38);
        uStack_1e0 = (undefined1)_UNK_143366cb8;
        uStack_1df = (undefined1)((ulonglong)_UNK_143366cb8 >> 8);
        uStack_1de = (undefined1)((ulonglong)_UNK_143366cb8 >> 0x10);
        uStack_1dd = (undefined1)((ulonglong)_UNK_143366cb8 >> 0x18);
        uStack_1dc = (undefined1)((ulonglong)_UNK_143366cb8 >> 0x20);
        uStack_1db = (undefined1)((ulonglong)_UNK_143366cb8 >> 0x28);
        uStack_1da = (undefined1)((ulonglong)_UNK_143366cb8 >> 0x30);
        uStack_1d9 = (undefined1)((ulonglong)_UNK_143366cb8 >> 0x38);
        if (param_4 != 0) {
          pdb_142da09f0(&uStack_1e8,param_4,&pauStack_1c8,1);
        }
        uVar34 = param_4 * 0x90 + param_3;
        pdb_1419b09e0(param_3,uVar34,&uStack_1e8);
        pauStack_4a8 = (undefined1 (*) [16])
                       CONCAT17(bStack_1e1,
                                CONCAT16(uStack_1e2,
                                         CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))));
        uStack_4a0 = CONCAT17(uStack_1d9,
                              CONCAT16(uStack_1da,
                                       CONCAT15(uStack_1db,
                                                CONCAT14(uStack_1dc,
                                                         CONCAT13(uStack_1dd,
                                                                  CONCAT12(uStack_1de,
                                                                           CONCAT11(uStack_1df,
                                                                                    uStack_1e0))))))
                             );
        uStack_498 = CONCAT44(uStack_1d4,
                              CONCAT13(uStack_1d5,
                                       CONCAT12(uStack_1d6,CONCAT11(uStack_1d7,uStack_1d8))));
        lStack_490 = CONCAT44(uStack_1cc,uStack_1d0);
        pauStack_488 = pauStack_1c8;
        lStack_480 = uStack_1c0;
        puVar38 = (undefined8 *)pdb_140f3bda0();
        if (*(char *)(puVar38 + 2) == '\x01') {
          pauStack_1c8 = (undefined1 (*) [16])*puVar38;
          uVar34 = puVar38[1];
        }
        else {
          pauStack_1c8 = (undefined1 (*) [16])pdb_140f4fd10();
          *puVar38 = pauStack_1c8;
          puVar38[1] = uVar34;
          *(undefined1 *)(puVar38 + 2) = 1;
        }
        *puVar38 = *pauStack_1c8 + 1;
        pcVar6 = _UNK_14338cfe8;
        pauVar24 = _DAT_14338cfe0;
        pauVar50 = _UNK_14338cfd8;
        pauVar35 = _DAT_14338cfd0;
        uStack_1d8 = SUB81(_DAT_14338cfe0,0);
        uStack_1d7 = (undefined1)((ulonglong)_DAT_14338cfe0 >> 8);
        uStack_1d6 = (undefined1)((ulonglong)_DAT_14338cfe0 >> 0x10);
        uStack_1d5 = (undefined1)((ulonglong)_DAT_14338cfe0 >> 0x18);
        uStack_1d4 = (undefined4)((ulonglong)_DAT_14338cfe0 >> 0x20);
        uStack_1d0 = SUB84(_UNK_14338cfe8,0);
        uStack_1cc = (undefined4)((ulonglong)_UNK_14338cfe8 >> 0x20);
        uStack_1e8 = (uint)_DAT_14338cfd0;
        uStack_1e4 = (undefined1)((ulonglong)_DAT_14338cfd0 >> 0x20);
        uStack_1e3 = (undefined1)((ulonglong)_DAT_14338cfd0 >> 0x28);
        uStack_1e2 = (undefined1)((ulonglong)_DAT_14338cfd0 >> 0x30);
        bStack_1e1 = (byte)((ulonglong)_DAT_14338cfd0 >> 0x38);
        uStack_1e0 = SUB81(_UNK_14338cfd8,0);
        uStack_1df = (undefined1)((ulonglong)_UNK_14338cfd8 >> 8);
        uStack_1de = (undefined1)((ulonglong)_UNK_14338cfd8 >> 0x10);
        uStack_1dd = (undefined1)((ulonglong)_UNK_14338cfd8 >> 0x18);
        uStack_1dc = (undefined1)((ulonglong)_UNK_14338cfd8 >> 0x20);
        uStack_1db = (undefined1)((ulonglong)_UNK_14338cfd8 >> 0x28);
        uStack_1da = (undefined1)((ulonglong)_UNK_14338cfd8 >> 0x30);
        uStack_1d9 = (undefined1)((ulonglong)_UNK_14338cfd8 >> 0x38);
        uStack_1c0 = uVar34;
        plVar37 = (longlong *)pdb_140f3bda0();
        if ((char)plVar37[2] == '\x01') {
          lStack_568 = *plVar37;
          uVar34 = plVar37[1];
        }
        else {
          lStack_568 = pdb_140f4fd10();
          *plVar37 = lStack_568;
          plVar37[1] = uVar34;
          *(undefined1 *)(plVar37 + 2) = 1;
        }
        *plVar37 = lStack_568 + 1;
        auStack_5b8[4] = uStack_1e4;
        auStack_5b8._0_4_ = uStack_1e8;
        auStack_5b8[5] = uStack_1e3;
        auStack_5b8[6] = uStack_1e2;
        auStack_5b8[7] = bStack_1e1;
        auStack_5b8[8] = uStack_1e0;
        auStack_5b8[9] = uStack_1df;
        auStack_5b8[10] = uStack_1de;
        auStack_5b8[0xb] = uStack_1dd;
        auStack_5b8[0xc] = uStack_1dc;
        auStack_5b8[0xd] = uStack_1db;
        auStack_5b8[0xe] = uStack_1da;
        auStack_5b8[0xf] = uStack_1d9;
        uStack_5a8 = CONCAT44(uStack_1d4,
                              CONCAT13(uStack_1d5,
                                       CONCAT12(uStack_1d6,CONCAT11(uStack_1d7,uStack_1d8))));
        uStack_5a0 = CONCAT44(uStack_1cc,uStack_1d0);
        pauStack_598 = pauStack_1c8;
        uStack_590 = uStack_1c0;
        pauStack_588 = pauVar35;
        pauStack_580 = pauVar50;
        pauStack_578 = pauVar24;
        pcStack_570 = pcVar6;
        pauVar43 = (undefined1 (*) [16])puStack_210[3] + puStack_210[4] * 3;
        pauStack_f0 = (undefined1 (*) [16])puStack_210[3];
        uStack_560 = uVar34;
        pbVar51 = pbStack_118;
        pauVar56 = pauStack_108;
        pauStack_e8 = pauVar43;
LAB_141b07407:
        pauStack_108 = pauVar56;
        pbStack_118 = pbVar51;
        pauVar44 = pauStack_f0;
        if (pauVar44 != pauVar43) {
          pauStack_f0 = pauVar44 + 3;
          pbVar51 = pbStack_118;
          pauVar56 = pauStack_108;
          if (lStack_490 != 0) {
            uVar36 = *(undefined8 *)(*pauVar44 + 8);
            lVar33 = *(longlong *)pauVar44[1];
            pbVar39 = (byte *)pdb_1400af950(&pauStack_488,uVar36,lVar33);
            uVar34 = uStack_4a0;
            pauVar45 = pauStack_4a8;
            bVar59 = (byte)((ulonglong)pbVar39 >> 0x39);
            auVar62 = ZEXT216(CONCAT11(bVar59,bVar59));
            auVar62 = pshuflw(auVar62,auVar62,0);
            unaff_XMM7._0_8_ = auVar62._0_8_;
            unaff_XMM7._8_4_ = auVar62._0_4_;
            unaff_XMM7._12_4_ = auVar62._4_4_;
            pbVar48 = (byte *)0x0;
            while( true ) {
              pauVar40 = (undefined1 (*) [16])((ulonglong)pbVar39 & uVar34);
              auVar64 = *(undefined1 (*) [16])(*pauVar40 + (longlong)*pauVar45);
              auVar63[0] = -(auVar64[0] == auVar62[0]);
              auVar63[1] = -(auVar64[1] == auVar62[1]);
              auVar63[2] = -(auVar64[2] == auVar62[2]);
              auVar63[3] = -(auVar64[3] == auVar62[3]);
              auVar63[4] = -(auVar64[4] == auVar62[4]);
              auVar63[5] = -(auVar64[5] == auVar62[5]);
              auVar63[6] = -(auVar64[6] == auVar62[6]);
              auVar63[7] = -(auVar64[7] == auVar62[7]);
              auVar63[8] = -(auVar64[8] == auVar62[0]);
              auVar63[9] = -(auVar64[9] == auVar62[1]);
              auVar63[10] = -(auVar64[10] == auVar62[2]);
              auVar63[0xb] = -(auVar64[0xb] == auVar62[3]);
              auVar63[0xc] = -(auVar64[0xc] == auVar62[4]);
              auVar63[0xd] = -(auVar64[0xd] == auVar62[5]);
              auVar63[0xe] = -(auVar64[0xe] == auVar62[6]);
              auVar63[0xf] = -(auVar64[0xf] == auVar62[7]);
              uVar29 = (ushort)(SUB161(auVar63 >> 7,0) & 1) |
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
              uVar30 = (uint)uVar29;
              pbVar51 = pbStack_118;
              pauVar56 = pauStack_108;
              while (pbStack_118 = pbVar48, pauStack_108 = pauVar40, uVar29 != 0) {
                uVar7 = 0;
                for (uVar32 = uVar30; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
                  uVar7 = uVar7 + 1;
                }
                uVar47 = (ulonglong)(*pauStack_108 + uVar7) & uVar34;
                if ((lVar33 == *(longlong *)pauVar45[uVar47 * -2 + -1]) &&
                   (iVar31 = pub_142e32750(uVar36,*(undefined8 *)(pauVar45[uVar47 * -2 + -2] + 8),
                                           lVar33), iVar31 == 0)) {
                  uVar36 = pdb_140c8aa20(*(undefined8 *)(pauVar45[uVar47 * -2 + -1] + 8));
                  pdb_140f60be0(&uStack_1e8,pauVar44[1] + 8);
                  pauStack_2a8 = (undefined1 (*) [16])
                                 CONCAT44(uStack_1d4,
                                          CONCAT13(uStack_1d5,
                                                   CONCAT12(uStack_1d6,
                                                            CONCAT11(uStack_1d7,uStack_1d8))));
                  pauStack_2b8 = (undefined1 (*) [16])
                                 CONCAT17(bStack_1e1,
                                          CONCAT16(uStack_1e2,
                                                   CONCAT15(uStack_1e3,
                                                            CONCAT14(uStack_1e4,uStack_1e8))));
                  pauStack_2b0 = (undefined1 (*) [16])
                                 CONCAT17(uStack_1d9,
                                          CONCAT16(uStack_1da,
                                                   CONCAT15(uStack_1db,
                                                            CONCAT14(uStack_1dc,
                                                                     CONCAT13(uStack_1dd,
                                                                              CONCAT12(uStack_1de,
                                                                                       CONCAT11(
                                                  uStack_1df,uStack_1e0)))))));
                  pdb_1417b2070(&uStack_1e8,param_10,uVar36,&pauStack_2b8);
                  pauVar43 = pauStack_e8;
                  uVar34 = CONCAT17(bStack_1e1,
                                    CONCAT16(uStack_1e2,
                                             CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))));
                  pbVar51 = pbStack_118;
                  pauVar56 = pauStack_108;
                  if ((-0x7fffffffffffffff < (longlong)uVar34) && (uVar34 != 0)) {
                    pub_1406abac0((byte *)CONCAT17(uStack_1d9,
                                                   CONCAT16(uStack_1da,
                                                            CONCAT15(uStack_1db,
                                                                     CONCAT14(uStack_1dc,
                                                                              CONCAT13(uStack_1dd,
                                                                                       CONCAT12(
                                                  uStack_1de,CONCAT11(uStack_1df,uStack_1e0))))))),
                                  uVar34,1);
                    pbVar51 = pbStack_118;
                    pauVar56 = pauStack_108;
                  }
                  goto LAB_141b07407;
                }
                uVar29 = (ushort)(uVar30 - 1) & (ushort)uVar30;
                uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar29);
                pauVar40 = pauStack_108;
                pbVar48 = pbStack_118;
                pauVar43 = pauStack_e8;
                pbVar51 = pbStack_118;
                pauVar56 = pauStack_108;
              }
              auVar88[0] = -(auVar64[0] == -1);
              auVar88[1] = -(auVar64[1] == -1);
              auVar88[2] = -(auVar64[2] == -1);
              auVar88[3] = -(auVar64[3] == -1);
              auVar88[4] = -(auVar64[4] == -1);
              auVar88[5] = -(auVar64[5] == -1);
              auVar88[6] = -(auVar64[6] == -1);
              auVar88[7] = -(auVar64[7] == -1);
              auVar88[8] = -(auVar64[8] == -1);
              auVar88[9] = -(auVar64[9] == -1);
              auVar88[10] = -(auVar64[10] == -1);
              auVar88[0xb] = -(auVar64[0xb] == -1);
              auVar88[0xc] = -(auVar64[0xc] == -1);
              auVar88[0xd] = -(auVar64[0xd] == -1);
              auVar88[0xe] = -(auVar64[0xe] == -1);
              auVar88[0xf] = -(auVar64[0xf] == -1);
              if ((((((((((((((((SUB161(auVar88 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar88 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar88 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar88 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar88 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar88 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar88 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar88 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar88 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar88 >> 0x4f,0) & 1) != 0) || (SUB161(auVar88 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar88 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar88 >> 0x67,0) & 1) != 0) || (SUB161(auVar88 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar88 >> 0x77,0) & 1) != 0) || auVar88[0xf] < '\0') break;
              pbVar39 = pbStack_118 + (longlong)*pauStack_108 + 0x10;
              pbVar48 = pbStack_118 + 0x10;
              pbStack_118 = pbVar51;
              pauStack_108 = pauVar56;
            }
          }
          goto LAB_141b07407;
        }
        pauStack_f0 = pauStack_460 + (longlong)pauStack_458 * 6;
        lStack_530 = param_9 + 0xa0;
        plStack_540 = param_8 + 4;
        pauVar43 = pauStack_460;
        uVar72 = 0xff;
        uVar73 = 0xff;
        uVar74 = 0xff;
        bVar59 = 0xff;
        uVar75 = 0xff;
        uVar76 = 0xff;
        uVar77 = 0xff;
        uVar78 = 0xff;
        uVar79 = 0xff;
        uVar80 = 0xff;
        uVar81 = 0xff;
        uVar82 = 0xff;
        uVar83 = 0xff;
        uVar84 = 0xff;
        uVar85 = 0xff;
        uVar86 = 0xff;
LAB_141b09420:
        while (pauVar56 = pauVar43, lVar33 = lStack_490, uVar34 = uStack_4a0,
              pauVar56 != pauStack_f0) {
          pauVar43 = pauVar56 + 6;
          if (lStack_490 != 0) {
            uVar36 = *(undefined8 *)(pauVar56[1] + 8);
            lVar57 = *(longlong *)pauVar56[2];
            uVar47 = pdb_1400af950(&pauStack_488,uVar36,lVar57);
            bVar60 = (byte)(uVar47 >> 0x39);
            auVar62 = ZEXT216(CONCAT11(bVar60,bVar60));
            auVar62 = pshuflw(auVar62,auVar62,0);
            lVar49 = 0;
            uVar34 = uStack_4a0;
            pauVar44 = pauStack_4a8;
            while( true ) {
              uVar47 = uVar47 & uVar34;
              pcVar1 = *pauVar44 + uVar47;
              cVar27 = *pcVar1;
              cVar8 = pcVar1[1];
              cVar9 = pcVar1[2];
              cVar10 = pcVar1[3];
              cVar11 = pcVar1[4];
              cVar12 = pcVar1[5];
              cVar13 = pcVar1[6];
              cVar14 = pcVar1[7];
              cVar15 = pcVar1[8];
              cVar16 = pcVar1[9];
              cVar17 = pcVar1[10];
              cVar18 = pcVar1[0xb];
              cVar19 = pcVar1[0xc];
              cVar20 = pcVar1[0xd];
              cVar21 = pcVar1[0xe];
              cVar22 = pcVar1[0xf];
              auVar64[0] = -(cVar27 == auVar62[0]);
              auVar64[1] = -(cVar8 == auVar62[1]);
              auVar64[2] = -(cVar9 == auVar62[2]);
              auVar64[3] = -(cVar10 == auVar62[3]);
              auVar64[4] = -(cVar11 == auVar62[4]);
              auVar64[5] = -(cVar12 == auVar62[5]);
              auVar64[6] = -(cVar13 == auVar62[6]);
              auVar64[7] = -(cVar14 == auVar62[7]);
              auVar64[8] = -(cVar15 == auVar62[0]);
              auVar64[9] = -(cVar16 == auVar62[1]);
              auVar64[10] = -(cVar17 == auVar62[2]);
              auVar64[0xb] = -(cVar18 == auVar62[3]);
              auVar64[0xc] = -(cVar19 == auVar62[4]);
              auVar64[0xd] = -(cVar20 == auVar62[5]);
              auVar64[0xe] = -(cVar21 == auVar62[6]);
              auVar64[0xf] = -(cVar22 == auVar62[7]);
              uVar29 = (ushort)(SUB161(auVar64 >> 7,0) & 1) |
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
              uVar30 = (uint)uVar29;
              pauVar43 = pauVar56 + 6;
              pauVar45 = pauStack_538;
              pauVar40 = pauStack_108;
              while (pauStack_538 = pauVar43, uVar29 != 0) {
                uVar7 = 0;
                for (uVar32 = uVar30; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
                  uVar7 = uVar7 + 1;
                }
                pauStack_108 = pauVar44 + (uVar7 + uVar47 & uVar34) * -2;
                uStack_2f8 = uVar34;
                pauStack_2f0 = pauVar44;
                if (lVar57 == *(longlong *)pauStack_108[-1]) {
                  iVar31 = pub_142e32750(uVar36,*(undefined8 *)(pauStack_108[-2] + 8),lVar57);
                  pauVar40 = pauStack_108;
                  if (iVar31 == 0) {
                    ppauVar41 = (undefined1 (**) [16])
                                pdb_140c8aa20(*(undefined8 *)(pauStack_108[-1] + 8));
                    uStack_1e8 = (uint)ppauVar41;
                    uStack_1e4 = (undefined1)((ulonglong)ppauVar41 >> 0x20);
                    uStack_1e3 = (undefined1)((ulonglong)ppauVar41 >> 0x28);
                    uStack_1e2 = (undefined1)((ulonglong)ppauVar41 >> 0x30);
                    bStack_1e1 = (byte)((ulonglong)ppauVar41 >> 0x38);
                    if (*(longlong *)(param_9 + 0x98) == 0) goto LAB_141b077e4;
                    uVar34 = pdb_1417c5550(lStack_530,&uStack_1e8);
                    lVar57 = *(longlong *)(param_9 + 0x80);
                    bVar60 = (byte)(uVar34 >> 0x39);
                    auVar62 = ZEXT216(CONCAT11(bVar60,bVar60));
                    auVar62 = pshuflw(auVar62,auVar62,0);
                    lVar49 = 0;
                    goto LAB_141b0777a;
                  }
                }
                pauStack_108 = pauVar40;
                uVar29 = (ushort)(uVar30 - 1) & (ushort)uVar30;
                uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar29);
                uVar34 = uStack_2f8;
                pauVar44 = pauStack_2f0;
                pauVar43 = pauStack_538;
                pauVar45 = pauStack_538;
                pauVar40 = pauStack_108;
              }
              auVar104[0] = -(cVar27 == -1);
              auVar104[1] = -(cVar8 == -1);
              auVar104[2] = -(cVar9 == -1);
              auVar104[3] = -(cVar10 == -1);
              auVar104[4] = -(cVar11 == -1);
              auVar104[5] = -(cVar12 == -1);
              auVar104[6] = -(cVar13 == -1);
              auVar104[7] = -(cVar14 == -1);
              auVar104[8] = -(cVar15 == -1);
              auVar104[9] = -(cVar16 == -1);
              auVar104[10] = -(cVar17 == -1);
              auVar104[0xb] = -(cVar18 == -1);
              auVar104[0xc] = -(cVar19 == -1);
              auVar104[0xd] = -(cVar20 == -1);
              auVar104[0xe] = -(cVar21 == -1);
              auVar104[0xf] = -(cVar22 == -1);
              pauVar43 = pauVar56 + 6;
              pauStack_538 = pauVar45;
              pauStack_108 = pauVar40;
              if ((((((((((((((((SUB161(auVar104 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar104 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar104 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar104 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar104 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar104 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar104 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar104 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar104 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar104 >> 0x4f,0) & 1) != 0) ||
                      (SUB161(auVar104 >> 0x57,0) & 1) != 0) ||
                     (SUB161(auVar104 >> 0x5f,0) & 1) != 0) || (SUB161(auVar104 >> 0x67,0) & 1) != 0
                    ) || (SUB161(auVar104 >> 0x6f,0) & 1) != 0) ||
                  (SUB161(auVar104 >> 0x77,0) & 1) != 0) || auVar104[0xf] < '\0') break;
              uVar47 = uVar47 + lVar49 + 0x10;
              lVar49 = lVar49 + 0x10;
            }
          }
        }
        puStack_208[10] = lStack_568;
        puStack_208[0xb] = uStack_560;
        puStack_208[8] = pauStack_578;
        puStack_208[9] = pcStack_570;
        puStack_208[6] = pauStack_588;
        puStack_208[7] = pauStack_580;
        puStack_208[4] = pauStack_598;
        puStack_208[5] = uStack_590;
        puStack_208[2] = uStack_5a8;
        puStack_208[3] = uStack_5a0;
        *puStack_208 = auStack_5b8._0_8_;
        puStack_208[1] = auStack_5b8._8_8_;
        if (uStack_4a0 != 0) {
          if (lStack_490 != 0) {
            auVar62 = *pauStack_4a8;
            pauVar35 = pauStack_4a8 + 1;
            uVar30 = ~(uint)(ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
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
                                    (ushort)(byte)(auVar62[0xf] >> 7) << 0xf);
            pauVar50 = pauStack_4a8;
            do {
              if ((short)uVar30 == 0) {
                do {
                  auVar62 = *pauVar35;
                  pauVar50 = pauVar50 + -0x20;
                  pauVar35 = pauVar35 + 1;
                  uVar30 = (ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
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
                                   (ushort)(byte)(auVar62[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar30 == 0);
              }
              iVar31 = 0;
              for (uVar7 = uVar30; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                iVar31 = iVar31 + 1;
              }
              uVar47 = *(ulonglong *)((longlong)pauVar50 + (-0x20 - (ulonglong)(uint)(iVar31 << 5)))
              ;
              if (uVar47 != 0) {
                pub_1406abac0(*(byte **)((longlong)pauVar50 +
                                        (-0x18 - (ulonglong)(uint)(iVar31 << 5))),uVar47,1);
              }
              uVar30 = uVar30 - 1 & uVar30;
              lVar33 = lVar33 + -1;
            } while (lVar33 != 0);
          }
          lVar33 = uVar34 * 0x20 + 0x20;
          uVar34 = uVar34 + lVar33 + 0x11;
          if (uVar34 != 0) {
            pub_1406abac0((byte *)((longlong)pauStack_4a8 - lVar33),uVar34,0x10);
          }
        }
        if (uStack_5e0 != 0) {
          lVar33 = uStack_5e0 * 0x20 + 0x20;
          uVar34 = uStack_5e0 + lVar33 + 0x11;
          if (uVar34 != 0) {
            pub_1406abac0((byte *)(lStack_5e8 - lVar33),uVar34,0x10);
          }
        }
        if (lStack_330 != 0) {
          pbVar51 = pbStack_338 + 0x18;
          lVar33 = lStack_330;
          do {
            if (*(ulonglong *)(pbVar51 + -8) != 0) {
              pub_1406abac0(*(byte **)pbVar51,*(ulonglong *)(pbVar51 + -8),1);
            }
            pbVar51 = pbVar51 + 0x50;
            lVar33 = lVar33 + -1;
          } while (lVar33 != 0);
        }
        if (lStack_340 != 0) {
          pub_1406abac0(pbStack_338,lStack_340 * 0x50,0x10);
        }
        pauStack_e8 = pauStack_458;
        pauStack_f0 = (undefined1 (*) [16])0x0;
        pauStack_108 = pauStack_460;
        pauVar35 = pauStack_460;
        while (pauStack_e8 != pauStack_f0) {
          pauStack_f0 = (undefined1 (*) [16])(*pauStack_f0 + 1);
          pdb_14098f040(pauVar35);
          pauVar35 = pauVar35 + 6;
        }
        if (lStack_468 != 0) {
          pub_1406abac0((byte *)pauStack_108,lStack_468 * 0x60,0x10);
        }
        if (uStack_3c0 != 0) {
          pub_1406abac0(pbStack_3b8,uStack_3c0,1);
        }
        if (lStack_308 == 0) goto LAB_141b0717a;
        pauVar35 = (undefined1 (*) [16])pdb_140e97000();
        if (pauVar35[6][8] != '\x01') {
          pauVar35 = (undefined1 (*) [16])pdb_142d8ec20(pauVar35,0);
          if (pauVar35 == (undefined1 (*) [16])0x0) {
            pdb_142dc7890(&UNK_143326860);
            goto LAB_141b09ca3;
          }
        }
        if (*(longlong *)*pauVar35 != 0) {
          pdb_142dc8090(&UNK_143326a50);
          goto LAB_141b09ca3;
        }
        *(undefined8 *)*pauVar35 = 0xffffffffffffffff;
        pauStack_f0 = pauVar35;
        pdb_140e95370(*pauVar35 + 8,uStack_300);
        goto LAB_141b07170;
      }
      pdb_142dc7890(&UNK_143326860);
      goto LAB_141b09ca3;
    }
    uVar36 = pdb_142deaf00(pbStack_338);
    puStack_208[1] = uVar36;
    *puStack_208 = 0;
    goto LAB_141b0708c;
  }
  uVar36 = pdb_142deaf00(CONCAT17(bStack_1e1,
                                  CONCAT16(uStack_1e2,
                                           CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8)))));
  puStack_208[1] = uVar36;
  *puStack_208 = 0;
  goto LAB_141b0710f;
LAB_141b0777a:
  uVar34 = uVar34 & *(ulonglong *)(param_9 + 0x88);
  auVar64 = *(undefined1 (*) [16])(lVar57 + uVar34);
  auVar70[0] = -(auVar64[0] == auVar62[0]);
  auVar70[1] = -(auVar64[1] == auVar62[1]);
  auVar70[2] = -(auVar64[2] == auVar62[2]);
  auVar70[3] = -(auVar64[3] == auVar62[3]);
  auVar70[4] = -(auVar64[4] == auVar62[4]);
  auVar70[5] = -(auVar64[5] == auVar62[5]);
  auVar70[6] = -(auVar64[6] == auVar62[6]);
  auVar70[7] = -(auVar64[7] == auVar62[7]);
  auVar70[8] = -(auVar64[8] == auVar62[0]);
  auVar70[9] = -(auVar64[9] == auVar62[1]);
  auVar70[10] = -(auVar64[10] == auVar62[2]);
  auVar70[0xb] = -(auVar64[0xb] == auVar62[3]);
  auVar70[0xc] = -(auVar64[0xc] == auVar62[4]);
  auVar70[0xd] = -(auVar64[0xd] == auVar62[5]);
  auVar70[0xe] = -(auVar64[0xe] == auVar62[6]);
  auVar70[0xf] = -(auVar64[0xf] == auVar62[7]);
  uVar29 = (ushort)(SUB161(auVar70 >> 7,0) & 1) | (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe | (ushort)(auVar70[0xf] >> 7) << 0xf;
  uVar30 = (uint)uVar29;
  while (uVar29 != 0) {
    uVar7 = 0;
    for (uVar32 = uVar30; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    lVar53 = (uVar7 + uVar34 & *(ulonglong *)(param_9 + 0x88)) * -0x70;
    if (ppauVar41 == *(undefined1 (***) [16])(lVar57 + -0x70 + lVar53)) {
      if (*(longlong *)(lVar57 + lVar53 + -0x68) == 3) goto LAB_141b077e4;
      pauVar43 = pauVar56 + 6;
      if (*_DAT_143ca8e90 != 0) {
        pauStack_438 = ppauVar41[-1];
        pauStack_2b8 = (undefined1 (*) [16])&ppauStack_440;
        pauStack_2b0 = (undefined1 (*) [16])pdb_1402ed420;
        uStack_1e8 = 0;
        uStack_1e4 = 0;
        uStack_1e3 = 0;
        uStack_1e2 = 0;
        bStack_1e1 = 0;
        uStack_1e0 = 0x70;
        uStack_1df = 0xd0;
        uStack_1de = 0x38;
        uStack_1dd = 0x43;
        uStack_1dc = 1;
        uStack_1db = 0;
        uStack_1da = 0;
        uStack_1d9 = 0;
        uStack_1d8 = 0x29;
        uStack_1d7 = 0;
        uStack_1d6 = 0;
        uStack_1d5 = 0;
        uStack_1d4 = 0;
        uStack_1d0 = 0;
        uStack_1cc = 0;
        pauStack_1c8 = (undefined1 (*) [16])&UNK_14338d03a;
        uStack_1c0 = 0x35;
        uStack_1b8 = 1;
        pauStack_1b0 = (undefined1 (*) [16])&UNK_14338d070;
        pauStack_1a8 = (undefined1 (*) [16])0x29;
        pauStack_1a0 = (undefined1 (*) [16])0x23b00000001;
        pcStack_198 = (code *)&UNK_14338d236;
        ppauStack_440 = ppauVar41;
        ppauStack_190 = &pauStack_2b8;
        pdb_140f332f0(&uStack_fa,&uStack_1e8);
      }
      goto LAB_141b09420;
    }
    uVar29 = (ushort)(uVar30 - 1) & (ushort)uVar30;
    uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar29);
  }
  auVar68[0] = -(auVar64[0] == -1);
  auVar68[1] = -(auVar64[1] == -1);
  auVar68[2] = -(auVar64[2] == -1);
  auVar68[3] = -(auVar64[3] == -1);
  auVar68[4] = -(auVar64[4] == -1);
  auVar68[5] = -(auVar64[5] == -1);
  auVar68[6] = -(auVar64[6] == -1);
  auVar68[7] = -(auVar64[7] == -1);
  auVar68[8] = -(auVar64[8] == -1);
  auVar68[9] = -(auVar64[9] == -1);
  auVar68[10] = -(auVar64[10] == -1);
  auVar68[0xb] = -(auVar64[0xb] == -1);
  auVar68[0xc] = -(auVar64[0xc] == -1);
  auVar68[0xd] = -(auVar64[0xd] == -1);
  auVar68[0xe] = -(auVar64[0xe] == -1);
  auVar68[0xf] = -(auVar64[0xf] == -1);
  if ((((((((((((((((SUB161(auVar68 >> 7,0) & 1) != 0 || (SUB161(auVar68 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar68 >> 0x17,0) & 1) != 0) || (SUB161(auVar68 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar68 >> 0x27,0) & 1) != 0) || (SUB161(auVar68 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar68 >> 0x37,0) & 1) != 0) || (SUB161(auVar68 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar68 >> 0x47,0) & 1) != 0) || (SUB161(auVar68 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar68 >> 0x57,0) & 1) != 0) || (SUB161(auVar68 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar68 >> 0x67,0) & 1) != 0) || (SUB161(auVar68 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar68 >> 0x77,0) & 1) != 0) || auVar68[0xf] < '\0') goto LAB_141b077e4;
  uVar34 = uVar34 + lVar49 + 0x10;
  lVar49 = lVar49 + 0x10;
  goto LAB_141b0777a;
LAB_141b079de:
  uVar34 = uVar34 & uVar47;
  pcVar1 = (char *)(lVar49 + uVar34);
  cVar27 = *pcVar1;
  cVar8 = pcVar1[1];
  cVar9 = pcVar1[2];
  cVar10 = pcVar1[3];
  cVar11 = pcVar1[4];
  cVar12 = pcVar1[5];
  cVar13 = pcVar1[6];
  cVar14 = pcVar1[7];
  cVar15 = pcVar1[8];
  cVar16 = pcVar1[9];
  cVar17 = pcVar1[10];
  cVar18 = pcVar1[0xb];
  cVar19 = pcVar1[0xc];
  cVar20 = pcVar1[0xd];
  cVar21 = pcVar1[0xe];
  cVar22 = pcVar1[0xf];
  auVar65[0] = -(cVar27 == auVar62[0]);
  auVar65[1] = -(cVar8 == auVar62[1]);
  auVar65[2] = -(cVar9 == auVar62[2]);
  auVar65[3] = -(cVar10 == auVar62[3]);
  auVar65[4] = -(cVar11 == auVar62[4]);
  auVar65[5] = -(cVar12 == auVar62[5]);
  auVar65[6] = -(cVar13 == auVar62[6]);
  auVar65[7] = -(cVar14 == auVar62[7]);
  auVar65[8] = -(cVar15 == auVar62[0]);
  auVar65[9] = -(cVar16 == auVar62[1]);
  auVar65[10] = -(cVar17 == auVar62[2]);
  auVar65[0xb] = -(cVar18 == auVar62[3]);
  auVar65[0xc] = -(cVar19 == auVar62[4]);
  auVar65[0xd] = -(cVar20 == auVar62[5]);
  auVar65[0xe] = -(cVar21 == auVar62[6]);
  auVar65[0xf] = -(cVar22 == auVar62[7]);
  uVar29 = (ushort)(SUB161(auVar65 >> 7,0) & 1) | (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe | (ushort)(auVar65[0xf] >> 7) << 0xf;
  uVar30 = (uint)uVar29;
  while (uVar29 != 0) {
    uVar7 = 0;
    for (uVar32 = uVar30; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uStack_d5 = 1;
    cVar28 = pdb_140df4430(&uStack_1e8,lVar49 + (uVar7 + uVar34 & uVar47) * -0x10 + -0x10);
    if (cVar28 != '\0') goto LAB_141b07cb6;
    uVar29 = (ushort)(uVar30 - 1) & (ushort)uVar30;
    uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar29);
  }
  auVar105[0] = -(cVar27 == -1);
  auVar105[1] = -(cVar8 == -1);
  auVar105[2] = -(cVar9 == -1);
  auVar105[3] = -(cVar10 == -1);
  auVar105[4] = -(cVar11 == -1);
  auVar105[5] = -(cVar12 == -1);
  auVar105[6] = -(cVar13 == -1);
  auVar105[7] = -(cVar14 == -1);
  auVar105[8] = -(cVar15 == -1);
  auVar105[9] = -(cVar16 == -1);
  auVar105[10] = -(cVar17 == -1);
  auVar105[0xb] = -(cVar18 == -1);
  auVar105[0xc] = -(cVar19 == -1);
  auVar105[0xd] = -(cVar20 == -1);
  auVar105[0xe] = -(cVar21 == -1);
  auVar105[0xf] = -(cVar22 == -1);
  if ((((((((((((((((SUB161(auVar105 >> 7,0) & 1) != 0 || (SUB161(auVar105 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar105 >> 0x17,0) & 1) != 0) || (SUB161(auVar105 >> 0x1f,0) & 1) != 0)
                || (SUB161(auVar105 >> 0x27,0) & 1) != 0) || (SUB161(auVar105 >> 0x2f,0) & 1) != 0)
              || (SUB161(auVar105 >> 0x37,0) & 1) != 0) || (SUB161(auVar105 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar105 >> 0x47,0) & 1) != 0) || (SUB161(auVar105 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar105 >> 0x57,0) & 1) != 0) || (SUB161(auVar105 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar105 >> 0x67,0) & 1) != 0) || (SUB161(auVar105 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar105 >> 0x77,0) & 1) != 0) || auVar105[0xf] < '\0') goto LAB_141b07a58;
  uVar34 = uVar34 + lVar57 + 0x10;
  lVar57 = lVar57 + 0x10;
  goto LAB_141b079de;
LAB_141b08992:
  uVar34 = CONCAT71((int7)((ulonglong)ppauVar41 >> 8),0x17);
  pdb_140a58820(param_8,uVar34,pbStack_120,pauStack_e8,&uStack_1e8);
  uStack_d1 = 0;
  uStack_d2 = 0;
  uStack_d3 = 0;
  uStack_d4 = 0;
  pdb_14098a960(&uStack_1e8);
LAB_141b089e4:
  lVar57 = *(longlong *)pauVar56[3];
  uVar36 = *(undefined8 *)(pauVar56[4] + 8);
  lVar49 = *(longlong *)(pauVar56[3] + 8);
  pauVar43 = *(undefined1 (**) [16])pauVar56[5];
  uStack_d1 = 0;
  uStack_d2 = 0;
  uStack_d3 = 0;
  uStack_d4 = 0;
  puVar38 = (undefined8 *)pdb_140f3bda0();
  if (*(char *)(puVar38 + 2) == '\x01') {
    ppauStack_298 = (undefined1 (**) [16])*puVar38;
    uVar34 = puVar38[1];
  }
  else {
    uStack_d1 = 0;
    uStack_d2 = 0;
    uStack_d3 = 0;
    uStack_d4 = 0;
    ppauStack_298 = (undefined1 (**) [16])pdb_140f4fd10();
    *puVar38 = ppauStack_298;
    puVar38[1] = uVar34;
    *(undefined1 *)(puVar38 + 2) = 1;
  }
  *puVar38 = (undefined *)((longlong)ppauStack_298 + 1);
  pauStack_2a8 = pauVar24;
  pcStack_2a0 = pcVar6;
  pauStack_2b8 = pauVar35;
  pauStack_2b0 = pauVar50;
  pauVar44 = (undefined1 (*) [16])&ppauStack_298;
  uStack_290 = uVar34;
  pdb_142db2540(&pauStack_2b8,1);
  uStack_128 = lVar49 * 0x78 + lVar57;
  uStack_1e8 = 1;
  uStack_1e4 = 0;
  uStack_1e3 = 0;
  uStack_1e2 = 0;
  bStack_1e1 = 0;
  uStack_1e0 = 0;
  uStack_1df = 0;
  uStack_1de = 0;
  uStack_1dd = 0;
  uStack_1dc = 0;
  uStack_1db = 0;
  uStack_1da = 0;
  uStack_1d9 = 0;
  uStack_1d8 = 1;
  uStack_1d7 = 0;
  uStack_1d6 = 0;
  uStack_1d5 = 0;
  uStack_1d4 = 0;
  uStack_1d0 = (undefined4)uVar36;
  uStack_1cc = (undefined4)((ulonglong)uVar36 >> 0x20);
  uStack_1c0 = 0;
  pauStack_1b0 = (undefined1 (*) [16])0x0;
  pauStack_1a0 = (undefined1 (*) [16])0x0;
  pauStack_168 = (undefined1 (*) [16])0x0;
  uStack_130 = (undefined1)lVar57;
  uStack_12f = (undefined1)((ulonglong)lVar57 >> 8);
  uStack_12e = (undefined1)((ulonglong)lVar57 >> 0x10);
  uStack_12d = (undefined1)((ulonglong)lVar57 >> 0x18);
  uStack_12c = (undefined4)((ulonglong)lVar57 >> 0x20);
  pauStack_1c8 = pauVar43;
  pdb_140b8f3f0(&uStack_1e8,&pauStack_2b8);
  if (pauStack_2b0 == (undefined1 (*) [16])0x0) {
    pauStack_218 = (undefined1 (*) [16])0x0;
  }
  else {
    uStack_2c8 = (longlong)pauStack_2b0 * 0x11 + 0x21;
    pauStack_2c0 = pauStack_2b8 + (-1 - (longlong)pauStack_2b0);
    pauStack_218 = (undefined1 (*) [16])0x10;
  }
  auVar62 = *pauStack_2b8;
  pauVar43 = pauStack_2b8 + 1;
  uVar30 = ~(uint)(ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
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
                          (ushort)(byte)(auVar62[0xf] >> 7) << 0xf);
  pauStack_110 = pauStack_2b0;
  pbStack_528 = pbStack_3b8;
  pauStack_520 = pauStack_3b0;
  pauVar45 = pauStack_2b8;
  pcVar4 = pcStack_2a0;
  pauVar40 = pauStack_218;
joined_r0x000141b08b7c:
  pauStack_218 = pauVar40;
  if (pcVar4 != (code *)0x0) {
    pcStack_518 = pcVar4 + -1;
    if ((short)uVar30 == 0) {
      do {
        auVar62 = *pauVar43;
        pauVar45 = pauVar45 + -0x10;
        pauVar43 = pauVar43 + 1;
        uVar30 = (ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
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
                         (ushort)(byte)(auVar62[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar30 == 0);
    }
    iVar31 = 0;
    for (uVar7 = uVar30; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      iVar31 = iVar31 + 1;
    }
    uVar36 = *(undefined8 *)((longlong)pauVar45 + (-0x10 - (ulonglong)(uint)(iVar31 << 4)));
    pauStack_5f0 = *(undefined1 (**) [16])
                    ((longlong)pauVar45 + (-8 - (ulonglong)(uint)(iVar31 << 4)));
    uStack_5f8 = uVar36;
    lVar57 = lStack_4e8;
    if (lStack_5d0 != 0) {
      uVar30 = uVar30 - 1 & uVar30;
      pauStack_f8 = pauStack_5f0;
      uVar34 = pdb_1400af950(auStack_5c8,uVar36);
      bVar59 = (byte)(uVar34 >> 0x39);
      auVar62 = ZEXT216(CONCAT11(bVar59,bVar59));
      auVar62 = pshuflw(auVar62,auVar62,0);
      lVar49 = 0;
      lStack_4f8 = lStack_5e8;
      uStack_4f0 = uStack_5e0;
      do {
        uVar34 = uVar34 & uStack_4f0;
        pcVar1 = (char *)(lStack_4f8 + uVar34);
        cVar27 = *pcVar1;
        cVar8 = pcVar1[1];
        cVar9 = pcVar1[2];
        cVar10 = pcVar1[3];
        cVar11 = pcVar1[4];
        cVar12 = pcVar1[5];
        cVar13 = pcVar1[6];
        cVar14 = pcVar1[7];
        cVar15 = pcVar1[8];
        cVar16 = pcVar1[9];
        cVar17 = pcVar1[10];
        cVar18 = pcVar1[0xb];
        cVar19 = pcVar1[0xc];
        cVar20 = pcVar1[0xd];
        cVar21 = pcVar1[0xe];
        cVar22 = pcVar1[0xf];
        auVar66[0] = -(cVar27 == auVar62[0]);
        auVar66[1] = -(cVar8 == auVar62[1]);
        auVar66[2] = -(cVar9 == auVar62[2]);
        auVar66[3] = -(cVar10 == auVar62[3]);
        auVar66[4] = -(cVar11 == auVar62[4]);
        auVar66[5] = -(cVar12 == auVar62[5]);
        auVar66[6] = -(cVar13 == auVar62[6]);
        auVar66[7] = -(cVar14 == auVar62[7]);
        auVar66[8] = -(cVar15 == auVar62[0]);
        auVar66[9] = -(cVar16 == auVar62[1]);
        auVar66[10] = -(cVar17 == auVar62[2]);
        auVar66[0xb] = -(cVar18 == auVar62[3]);
        auVar66[0xc] = -(cVar19 == auVar62[4]);
        auVar66[0xd] = -(cVar20 == auVar62[5]);
        auVar66[0xe] = -(cVar21 == auVar62[6]);
        auVar66[0xf] = -(cVar22 == auVar62[7]);
        uVar29 = (ushort)(SUB161(auVar66 >> 7,0) & 1) | (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe | (ushort)(auVar66[0xf] >> 7) << 0xf
        ;
        uVar26 = (ulonglong)uVar29;
        uVar47 = uStack_500;
        lVar57 = lStack_4e8;
        while (lStack_4e8 = lVar49, uStack_500 = uVar26, uVar29 != 0) {
          uVar7 = 0;
          for (uVar32 = (uint)uStack_500; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          lVar57 = lStack_4f8 + (uVar7 + uVar34 & uStack_4f0) * -0x20;
          if (pauStack_f8 == *(undefined1 (**) [16])(lVar57 + -0x18)) {
            uStack_350 = uVar36;
            iVar31 = pub_142e32750(uVar36,*(undefined8 *)(lVar57 + -0x20),pauStack_f8);
            pauVar40 = pauStack_f8;
            uVar36 = uStack_350;
            if (iVar31 == 0) {
              pauVar44 = pauStack_520;
              uVar36 = pdb_140b8f650(param_5,pbStack_528,pauStack_520,uStack_350,pauStack_f8,
                                     *(undefined8 *)(lVar57 + -0x10),*(undefined8 *)(lVar57 + -8));
              uStack_1d0 = (undefined4)uVar36;
              uStack_1cc = (undefined4)((ulonglong)uVar36 >> 0x20);
              uStack_1e8 = 0;
              uStack_1e4 = 0;
              uStack_1e3 = 0;
              uStack_1e2 = 0;
              bStack_1e1 = 0x80;
              if ((longlong)pauVar40 < 0) {
                uVar36 = 0;
LAB_141b09942:
                pdb_142dc7e2a(uVar36,pauVar40);
                goto LAB_141b09ca3;
              }
              if (pauVar40 == (undefined1 (*) [16])0x0) {
                pauVar46 = (undefined1 (*) [16])0x1;
              }
              else {
                pdb_14007ee60();
                pauVar46 = (undefined1 (*) [16])pub_1406abab0((ulonglong)pauStack_f8,1);
                uVar36 = 1;
                pauVar40 = pauStack_f8;
                if (pauVar46 == (undefined1 (*) [16])0x0) goto LAB_141b09942;
                pauVar44 = pauStack_f8;
                pub_142e32760(pauVar46,uStack_350);
                pauVar40 = pauStack_f8;
              }
              uStack_1e8 = (uint)pauVar40;
              uStack_1e4 = (undefined1)((ulonglong)pauVar40 >> 0x20);
              uStack_1e3 = (undefined1)((ulonglong)pauVar40 >> 0x28);
              uStack_1e2 = (undefined1)((ulonglong)pauVar40 >> 0x30);
              bStack_1e1 = (byte)((ulonglong)pauVar40 >> 0x38);
              uStack_1e0 = SUB81(pauVar46,0);
              uStack_1df = (undefined1)((ulonglong)pauVar46 >> 8);
              uStack_1de = (undefined1)((ulonglong)pauVar46 >> 0x10);
              uStack_1dd = (undefined1)((ulonglong)pauVar46 >> 0x18);
              uStack_1dc = (undefined1)((ulonglong)pauVar46 >> 0x20);
              uStack_1db = (undefined1)((ulonglong)pauVar46 >> 0x28);
              uStack_1da = (undefined1)((ulonglong)pauVar46 >> 0x30);
              uStack_1d9 = (undefined1)((ulonglong)pauVar46 >> 0x38);
              uStack_1d8 = SUB81(pauVar40,0);
              uStack_1d7 = (undefined1)((ulonglong)pauVar40 >> 8);
              uStack_1d6 = (undefined1)((ulonglong)pauVar40 >> 0x10);
              uStack_1d5 = (undefined1)((ulonglong)pauVar40 >> 0x18);
              uStack_1d4 = (undefined4)((ulonglong)pauVar40 >> 0x20);
              pcStack_2a0 = (code *)CONCAT44(uStack_1cc,uStack_1d0);
              pauStack_2b8 = pauVar40;
              pauStack_2b0 = pauVar46;
              pauStack_2a8 = pauVar40;
              pdb_140a2dcf0(param_6,&pauStack_2b8);
              pcVar4 = pcStack_518;
              pauVar40 = pauStack_218;
              goto joined_r0x000141b08b7c;
            }
          }
          iVar31 = (int)uStack_500 + -1;
          uVar29 = (ushort)iVar31 & (ushort)uStack_500;
          uVar26 = (ulonglong)CONCAT22((short)((uint)iVar31 >> 0x10),uVar29);
          lVar49 = lStack_4e8;
          uVar47 = uStack_500;
          lVar57 = lStack_4e8;
        }
        auVar87[0] = -(cVar27 == -1);
        auVar87[1] = -(cVar8 == -1);
        auVar87[2] = -(cVar9 == -1);
        auVar87[3] = -(cVar10 == -1);
        auVar87[4] = -(cVar11 == -1);
        auVar87[5] = -(cVar12 == -1);
        auVar87[6] = -(cVar13 == -1);
        auVar87[7] = -(cVar14 == -1);
        auVar87[8] = -(cVar15 == -1);
        auVar87[9] = -(cVar16 == -1);
        auVar87[10] = -(cVar17 == -1);
        auVar87[0xb] = -(cVar18 == -1);
        auVar87[0xc] = -(cVar19 == -1);
        auVar87[0xd] = -(cVar20 == -1);
        auVar87[0xe] = -(cVar21 == -1);
        auVar87[0xf] = -(cVar22 == -1);
        uStack_500 = uVar47;
        if ((((((((((((((((SUB161(auVar87 >> 7,0) & 1) != 0 || (SUB161(auVar87 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar87 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar87 >> 0x1f,0) & 1) != 0) || (SUB161(auVar87 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar87 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar87 >> 0x37,0) & 1) != 0) || (SUB161(auVar87 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar87 >> 0x47,0) & 1) != 0) || (SUB161(auVar87 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar87 >> 0x57,0) & 1) != 0) || (SUB161(auVar87 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar87 >> 0x67,0) & 1) != 0) || (SUB161(auVar87 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar87 >> 0x77,0) & 1) != 0) || auVar87[0xf] < '\0') break;
        uVar34 = uVar34 + lStack_4e8 + 0x10;
        lVar49 = lStack_4e8 + 0x10;
        lStack_4e8 = lVar57;
      } while( true );
    }
    lStack_4e8 = lVar57;
    uStack_1e8 = (uint)&uStack_5f8;
    uStack_1e4 = (undefined1)((ulonglong)&uStack_5f8 >> 0x20);
    uStack_1e3 = (undefined1)((ulonglong)&uStack_5f8 >> 0x28);
    uStack_1e2 = (undefined1)((ulonglong)&uStack_5f8 >> 0x30);
    bStack_1e1 = (byte)((ulonglong)&uStack_5f8 >> 0x38);
    uStack_1e0 = 0x20;
    uStack_1df = 0xd4;
    uStack_1de = 0x2e;
    uStack_1dd = 0x40;
    uStack_1dc = 1;
    uStack_1db = 0;
    uStack_1da = 0;
    uStack_1d9 = 0;
    uVar36 = pdb_142ded200(&uStack_1e8);
    puStack_208[1] = uVar36;
    *puStack_208 = 0;
    if ((pauStack_110 != (undefined1 (*) [16])0x0) && (uStack_2c8 != 0)) {
      pub_1406abac0((byte *)pauStack_2c0,uStack_2c8,(ulonglong)pauStack_218);
    }
    uStack_d6 = 0;
    uStack_d7 = 0;
    uStack_d8 = 0;
    uStack_d9 = 0;
    uStack_da = 0;
    pdb_14098a960(&ppauStack_440);
    if (pauStack_2d8 == (undefined1 (*) [16])0x0) goto LAB_141b0982c;
    uVar34 = 4;
    pbVar51 = pbStack_2d0;
    pauVar35 = (undefined1 (*) [16])((longlong)pauStack_2d8 * 0x3c);
    goto LAB_141b09827;
  }
  if ((pauStack_110 != (undefined1 (*) [16])0x0) && (uStack_2c8 != 0)) {
    pub_1406abac0((byte *)pauStack_2c0,uStack_2c8,(ulonglong)pauVar40);
    pauVar44 = pauVar40;
  }
  uStack_548 = param_6;
  lVar33 = *(longlong *)pauVar56[3];
  lVar57 = *(longlong *)(pauVar56[3] + 8) * 0x78 + lVar33;
  uStack_1e8 = (uint)lVar33;
  uStack_1e4 = (undefined1)((ulonglong)lVar33 >> 0x20);
  uStack_1e3 = (undefined1)((ulonglong)lVar33 >> 0x28);
  uStack_1e2 = (undefined1)((ulonglong)lVar33 >> 0x30);
  bStack_1e1 = (byte)((ulonglong)lVar33 >> 0x38);
  uStack_1e0 = (undefined1)lVar57;
  uStack_1df = (undefined1)((ulonglong)lVar57 >> 8);
  uStack_1de = (undefined1)((ulonglong)lVar57 >> 0x10);
  uStack_1dd = (undefined1)((ulonglong)lVar57 >> 0x18);
  uStack_1dc = (undefined1)((ulonglong)lVar57 >> 0x20);
  uStack_1db = (undefined1)((ulonglong)lVar57 >> 0x28);
  uStack_1da = (undefined1)((ulonglong)lVar57 >> 0x30);
  uStack_1d9 = (undefined1)((ulonglong)lVar57 >> 0x38);
  uStack_1d8 = SUB81(&uStack_548,0);
  uStack_1d7 = (undefined1)((ulonglong)&uStack_548 >> 8);
  uStack_1d6 = (undefined1)((ulonglong)&uStack_548 >> 0x10);
  uStack_1d5 = (undefined1)((ulonglong)&uStack_548 >> 0x18);
  uStack_1d4 = (undefined4)((ulonglong)&uStack_548 >> 0x20);
  uStack_d1 = 0;
  uStack_d2 = 0;
  uStack_d3 = 0;
  uStack_d4 = 0;
  puVar42 = &uStack_1e8;
  pdb_1415f3ff0(&pauStack_2b8);
  uStack_d1 = 0;
  uStack_d2 = 0;
  uStack_d3 = 0;
  uStack_d4 = 0;
  uVar36 = pdb_1415e0600(&pauStack_2b8);
  uStack_d1 = 0;
  uStack_d2 = 0;
  uStack_d3 = 0;
  uStack_d4 = 0;
  uVar55 = pdb_140df4400(pbStack_120,pauStack_e8);
  bVar59 = *(byte *)(*(longlong *)(pauStack_108[-1] + 8) + 0x89);
  pdb_14007ee60();
  pbVar51 = pub_1406abab0(0x68,8);
  if (pbVar51 == (byte *)0x0) {
    uStack_d1 = 0;
    uStack_d2 = 0;
    uStack_d3 = 0;
    uStack_d4 = 0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x68);
  }
  pbVar51[0] = 0;
  pbVar51[1] = 0;
  pbVar51[2] = 0;
  pbVar51[3] = 0;
  pbVar51[4] = 0;
  pbVar51[5] = 0;
  pbVar51[6] = 0;
  pbVar51[7] = 0;
  *(byte **)(pbVar51 + 0x10) = pbStack_120;
  *(undefined1 (**) [16])(pbVar51 + 0x18) = pauStack_e8;
  *(undefined8 *)(pbVar51 + 0x20) = uVar36;
  *(uint **)(pbVar51 + 0x28) = puVar42;
  *(undefined8 *)(pbVar51 + 0x30) = uStack_508;
  *(undefined8 *)(pbVar51 + 0x38) = uVar55;
  *(undefined8 *)(pbVar51 + 0x40) = uStack_638;
  *(undefined8 *)(pbVar51 + 0x48) = uStack_630;
  *(undefined8 *)(pbVar51 + 0x50) = uStack_628;
  *(undefined8 *)(pbVar51 + 0x58) = uStack_620;
  *(float *)(pbVar51 + 0x60) = fVar61;
  pbVar51[100] = 0;
  pbVar51[0x65] = 0;
  pbVar51[0x66] = bVar59;
  uStack_d1 = 0;
  uStack_d2 = 0;
  uStack_d3 = 0;
  uStack_d4 = 0;
  pauVar43 = pauVar56 + 4;
  pdb_140f60be0(&pauStack_2b8);
  uStack_1d8 = SUB81(pauStack_2a8,0);
  uStack_1d7 = (undefined1)((ulonglong)pauStack_2a8 >> 8);
  uStack_1d6 = (undefined1)((ulonglong)pauStack_2a8 >> 0x10);
  uStack_1d5 = (undefined1)((ulonglong)pauStack_2a8 >> 0x18);
  uStack_1d4 = (undefined4)((ulonglong)pauStack_2a8 >> 0x20);
  uStack_1e8 = (uint)pauStack_2b8;
  uStack_1e4 = (undefined1)((ulonglong)pauStack_2b8 >> 0x20);
  uStack_1e3 = (undefined1)((ulonglong)pauStack_2b8 >> 0x28);
  uStack_1e2 = (undefined1)((ulonglong)pauStack_2b8 >> 0x30);
  bStack_1e1 = (byte)((ulonglong)pauStack_2b8 >> 0x38);
  uStack_1e0 = SUB81(pauStack_2b0,0);
  uStack_1df = (undefined1)((ulonglong)pauStack_2b0 >> 8);
  uStack_1de = (undefined1)((ulonglong)pauStack_2b0 >> 0x10);
  uStack_1dd = (undefined1)((ulonglong)pauStack_2b0 >> 0x18);
  uStack_1dc = (undefined1)((ulonglong)pauStack_2b0 >> 0x20);
  uStack_1db = (undefined1)((ulonglong)pauStack_2b0 >> 0x28);
  uStack_1da = (undefined1)((ulonglong)pauStack_2b0 >> 0x30);
  uStack_1d9 = (undefined1)((ulonglong)pauStack_2b0 >> 0x38);
  uStack_d1 = 0;
  uStack_d2 = 0;
  uStack_d3 = 0;
  uStack_d4 = 0;
  uVar36 = pdb_140f60600(&uStack_1e8);
  lVar33 = *(longlong *)(pauStack_108[-1] + 8) + 0x70;
  uStack_d1 = 0;
  uStack_d2 = 0;
  uStack_d3 = 0;
  uStack_d4 = 0;
  pdb_140f60be0(&pauStack_2b8);
  uStack_1d8 = SUB81(pauStack_2a8,0);
  uStack_1d7 = (undefined1)((ulonglong)pauStack_2a8 >> 8);
  uStack_1d6 = (undefined1)((ulonglong)pauStack_2a8 >> 0x10);
  uStack_1d5 = (undefined1)((ulonglong)pauStack_2a8 >> 0x18);
  uStack_1d4 = (undefined4)((ulonglong)pauStack_2a8 >> 0x20);
  uStack_1e8 = (uint)pauStack_2b8;
  uStack_1e4 = (undefined1)((ulonglong)pauStack_2b8 >> 0x20);
  uStack_1e3 = (undefined1)((ulonglong)pauStack_2b8 >> 0x28);
  uStack_1e2 = (undefined1)((ulonglong)pauStack_2b8 >> 0x30);
  bStack_1e1 = (byte)((ulonglong)pauStack_2b8 >> 0x38);
  uStack_1e0 = SUB81(pauStack_2b0,0);
  uStack_1df = (undefined1)((ulonglong)pauStack_2b0 >> 8);
  uStack_1de = (undefined1)((ulonglong)pauStack_2b0 >> 0x10);
  uStack_1dd = (undefined1)((ulonglong)pauStack_2b0 >> 0x18);
  uStack_1dc = (undefined1)((ulonglong)pauStack_2b0 >> 0x20);
  uStack_1db = (undefined1)((ulonglong)pauStack_2b0 >> 0x28);
  uStack_1da = (undefined1)((ulonglong)pauStack_2b0 >> 0x30);
  uStack_1d9 = (undefined1)((ulonglong)pauStack_2b0 >> 0x38);
  uStack_d1 = 0;
  uStack_d2 = 0;
  uStack_d3 = 0;
  uStack_d4 = 0;
  uStack_608 = pdb_140f60600(&uStack_1e8);
  piVar5 = *(int **)(pauStack_108[-1] + 8);
  if (*piVar5 == 1) {
    pauVar44 = *(undefined1 (**) [16])(piVar5 + 2);
  }
  uStack_618 = (ulonglong)(*piVar5 == 1);
  uStack_1e8 = uStack_1fc;
  uStack_1d4 = unaff_XMM7._0_4_;
  uStack_1d0 = unaff_XMM7._4_4_;
  uStack_d1 = 0;
  uStack_d2 = 0;
  uStack_d3 = 0;
  uStack_d4 = 0;
  pauStack_610 = pauVar44;
  lStack_600 = lVar33;
  uStack_1e4 = uVar89;
  uStack_1e3 = uVar90;
  uStack_1e2 = uVar91;
  bStack_1e1 = bVar60;
  uStack_1e0 = uVar92;
  uStack_1df = uVar93;
  uStack_1de = uVar94;
  uStack_1dd = uVar95;
  uStack_1dc = uVar96;
  uStack_1db = uVar97;
  uStack_1da = uVar98;
  uStack_1d9 = uVar99;
  uStack_1d8 = uVar100;
  uStack_1d7 = uVar101;
  uStack_1d6 = uVar102;
  uStack_1d5 = uVar103;
  pauVar43 = (undefined1 (*) [16])
             pdb_140c25fa0(param_9,ppauStack_1f0,pbVar51,bStack_db,(char)piVar5[0x22],uVar36,
                           pauVar43,*(undefined1 *)((longlong)piVar5 + 0x89),&uStack_618,&uStack_1e8
                          );
  ppauVar41 = ppauStack_1f0;
  if (pauVar43 == (undefined1 (*) [16])0x0) {
    uStack_d1 = 0;
    uStack_d2 = 0;
    uStack_d3 = 0;
    uStack_d4 = 0;
    pdb_1417bba20(&pauStack_588,ppauStack_1f0);
    uVar36 = *(undefined8 *)(pauVar56[5] + 8);
    uStack_1e0 = (undefined1)uVar36;
    uStack_1df = (undefined1)((ulonglong)uVar36 >> 8);
    uStack_1de = (undefined1)((ulonglong)uVar36 >> 0x10);
    uStack_1dd = (undefined1)((ulonglong)uVar36 >> 0x18);
    uStack_1dc = (undefined1)((ulonglong)uVar36 >> 0x20);
    uStack_1db = (undefined1)((ulonglong)uVar36 >> 0x28);
    uStack_1da = (undefined1)((ulonglong)uVar36 >> 0x30);
    uStack_1d9 = (undefined1)((ulonglong)uVar36 >> 0x38);
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    uStack_1e3 = 0;
    uStack_1e2 = 0;
    bStack_1e1 = 0x80;
    uStack_d1 = 0;
    uStack_d2 = 0;
    uStack_d3 = 0;
    uStack_d4 = 0;
    pdb_1417b2070(&pauStack_2b8,param_10,ppauStack_1f0,&uStack_1e8);
    if ((-0x7fffffffffffffff < (longlong)pauStack_2b8) && (pauStack_2b8 != (undefined1 (*) [16])0x0)
       ) {
      pub_1406abac0((byte *)pauStack_2b0,(ulonglong)pauStack_2b8,1);
    }
  }
  else {
    pauStack_328 = pauVar43;
    if (*_DAT_143ca8e90 != 0) {
      pauStack_4d8 = ppauStack_1f0[-1];
      ppauStack_4e0 = ppauStack_1f0;
      pauStack_2b8 = (undefined1 (*) [16])&ppauStack_4e0;
      pauStack_2b0 = (undefined1 (*) [16])pdb_1402ed420;
      pauStack_2a8 = (undefined1 (*) [16])&pauStack_328;
      pcStack_2a0 = pdb_140f36c30;
      uStack_1e8 = 0x4338d070;
      uStack_1e4 = 1;
      uStack_1e3 = 0;
      uStack_1e2 = 0;
      bStack_1e1 = 0;
      uStack_1e0 = 0x29;
      uStack_1df = 0;
      uStack_1de = 0;
      uStack_1dd = 0;
      uStack_1dc = 0;
      uStack_1db = 0;
      uStack_1da = 0;
      uStack_1d9 = 0;
      uStack_1d8 = 0x70;
      uStack_1d7 = 0xd0;
      uStack_1d6 = 0x38;
      uStack_1d5 = 0x43;
      uStack_1d4 = 1;
      uStack_1d0 = 0x29;
      uStack_1cc = 0;
      pauStack_1c8 = (undefined1 (*) [16])&UNK_14338d218;
      pdb_1400c9be0(&UNK_14338d1ee,&pauStack_2b8,1,&uStack_1e8);
    }
    pauStack_2b8 = (undefined1 (*) [16])&pauStack_328;
    pauStack_2b0 = (undefined1 (*) [16])pdb_140f36c30;
    pdb_140f60760(&uStack_1e8,&UNK_14338d230,&pauStack_2b8);
    pauStack_2b8 = (undefined1 (*) [16])
                   CONCAT17(bStack_1e1,
                            CONCAT16(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))
                                    ));
    pauStack_2b0 = (undefined1 (*) [16])
                   CONCAT17(uStack_1d9,
                            CONCAT16(uStack_1da,
                                     CONCAT15(uStack_1db,
                                              CONCAT14(uStack_1dc,
                                                       CONCAT13(uStack_1dd,
                                                                CONCAT12(uStack_1de,
                                                                         CONCAT11(uStack_1df,
                                                                                  uStack_1e0)))))));
    pauStack_2a8 = (undefined1 (*) [16])
                   CONCAT44(uStack_1d4,
                            CONCAT13(uStack_1d5,CONCAT12(uStack_1d6,CONCAT11(uStack_1d7,uStack_1d8))
                                    ));
    pdb_1417b2070(&uStack_1e8,param_10,ppauVar41,&pauStack_2b8);
    uVar34 = CONCAT17(bStack_1e1,
                      CONCAT16(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))));
    if ((-0x7fffffffffffffff < (longlong)uVar34) && (uVar34 != 0)) {
      pub_1406abac0((byte *)CONCAT17(uStack_1d9,
                                     CONCAT16(uStack_1da,
                                              CONCAT15(uStack_1db,
                                                       CONCAT14(uStack_1dc,
                                                                CONCAT13(uStack_1dd,
                                                                         CONCAT12(uStack_1de,
                                                                                  CONCAT11(
                                                  uStack_1df,uStack_1e0))))))),uVar34,1);
    }
    uStack_d1 = 0;
    uStack_d2 = 0;
    uStack_d3 = 0;
    uStack_d4 = 0;
    pdb_140f36c40(&pauStack_328);
  }
  uStack_d6 = 0;
  uStack_d7 = 0;
  uStack_d8 = 0;
  uStack_d9 = 0;
  uStack_da = 0;
  pdb_14098a960(&ppauStack_440);
  pauVar43 = pauVar56 + 6;
  uVar72 = uVar89;
  uVar73 = uVar90;
  uVar74 = uVar91;
  bVar59 = bVar60;
  uVar75 = uVar92;
  uVar76 = uVar93;
  uVar77 = uVar94;
  uVar78 = uVar95;
  uVar79 = uVar96;
  uVar80 = uVar97;
  uVar81 = uVar98;
  uVar82 = uVar99;
  uVar83 = uVar100;
  uVar84 = uVar101;
  uVar85 = uVar102;
  uVar86 = uVar103;
  if (pauStack_2d8 != (undefined1 (*) [16])0x0) {
    pub_1406abac0(pbStack_2d0,(longlong)pauStack_2d8 * 0x3c,4);
  }
  goto LAB_141b09420;
LAB_141b07a58:
  if (*_DAT_143ca8e90 != 0) {
    pauStack_438 = ppauStack_1f0[-1];
    ppauStack_440 = ppauStack_1f0;
    pauStack_2b8 = (undefined1 (*) [16])&ppauStack_440;
    pauStack_2b0 = (undefined1 (*) [16])pdb_1402ed420;
    pauStack_2a8 = (undefined1 (*) [16])&UNK_14338d170;
    pcStack_2a0 = pdb_140f72a40;
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    uStack_1e3 = 0;
    uStack_1e2 = 0;
    bStack_1e1 = 0;
    uStack_1e0 = 0x70;
    uStack_1df = 0xd0;
    uStack_1de = 0x38;
    uStack_1dd = 0x43;
    uStack_1dc = 1;
    uStack_1db = 0;
    uStack_1da = 0;
    uStack_1d9 = 0;
    uStack_1d8 = 0x29;
    uStack_1d7 = 0;
    uStack_1d6 = 0;
    uStack_1d5 = 0;
    uStack_1d4 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    pauStack_1c8 = (undefined1 (*) [16])&UNK_14338d03a;
    uStack_1c0 = 0x35;
    uStack_1b8 = 1;
    pauStack_1b0 = (undefined1 (*) [16])&UNK_14338d070;
    pauStack_1a8 = (undefined1 (*) [16])0x29;
    pauStack_1a0 = (undefined1 (*) [16])0x25a00000001;
    pcStack_198 = (code *)&UNK_14338d178;
    ppauStack_190 = &pauStack_2b8;
    uStack_d5 = 1;
    pdb_140f332f0(&uStack_fa,&uStack_1e8);
  }
  uStack_d5 = 1;
  pdb_1417bba20(auStack_5b8,ppauStack_1f0);
  uStack_d5 = 1;
  pdb_1417bba20(&pauStack_588,ppauStack_1f0);
  pauVar43 = pauStack_538;
  if (pauStack_1f8 != (undefined1 (*) [16])0x0) {
    pub_1406abac0(pbStack_118,(ulonglong)pauStack_1f8,1);
  }
  goto LAB_141b09420;
LAB_141b077e4:
  pauStack_438 = ppauVar41[-1];
  pauStack_2b8 = (undefined1 (*) [16])&ppauStack_440;
  pauStack_2b0 = (undefined1 (*) [16])pdb_1402ed400;
  ppauStack_440 = ppauVar41;
  pdb_140f60760(&uStack_1e8,&UNK_14338d163);
  pauStack_1f8 = (undefined1 (*) [16])
                 CONCAT17(bStack_1e1,
                          CONCAT16(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))))
  ;
  pbStack_118 = (byte *)CONCAT17(uStack_1d9,
                                 CONCAT16(uStack_1da,
                                          CONCAT15(uStack_1db,
                                                   CONCAT14(uStack_1dc,
                                                            CONCAT13(uStack_1dd,
                                                                     CONCAT12(uStack_1de,
                                                                              CONCAT11(uStack_1df,
                                                                                       uStack_1e0)))
                                                           ))));
  pauStack_e8 = (undefined1 (*) [16])
                CONCAT44(uStack_1d4,
                         CONCAT13(uStack_1d5,CONCAT12(uStack_1d6,CONCAT11(uStack_1d7,uStack_1d8))));
  lVar57 = *(longlong *)pauVar56[3];
  lVar49 = *(longlong *)(pauVar56[3] + 8) * 0x78 + lVar57;
  ppauStack_1f0 = ppauVar41;
  do {
    if (lVar57 == lVar49) {
      bStack_db = 0x14;
      goto LAB_141b07893;
    }
    uStack_d5 = 1;
    cVar27 = pdb_140cea920(lVar57);
    lVar57 = lVar57 + 0x78;
  } while (cVar27 == '\0');
  bStack_db = 0x15;
LAB_141b07893:
  pauStack_2b8 = (undefined1 (*) [16])CONCAT71(pauStack_2b8._1_7_,bStack_db);
  if (param_8[3] != 0) {
    uStack_d5 = 1;
    uVar34 = pdb_1417c4b30(plStack_540);
    lVar57 = *param_8;
    bVar60 = (byte)(uVar34 >> 0x39);
    auVar62 = ZEXT216(CONCAT11(bVar60,bVar60));
    auVar62 = pshuflw(auVar62,auVar62,0);
    lVar49 = 0;
    while( true ) {
      uVar34 = uVar34 & param_8[1];
      auVar64 = *(undefined1 (*) [16])(lVar57 + uVar34);
      auVar71[0] = -(auVar64[0] == auVar62[0]);
      auVar71[1] = -(auVar64[1] == auVar62[1]);
      auVar71[2] = -(auVar64[2] == auVar62[2]);
      auVar71[3] = -(auVar64[3] == auVar62[3]);
      auVar71[4] = -(auVar64[4] == auVar62[4]);
      auVar71[5] = -(auVar64[5] == auVar62[5]);
      auVar71[6] = -(auVar64[6] == auVar62[6]);
      auVar71[7] = -(auVar64[7] == auVar62[7]);
      auVar71[8] = -(auVar64[8] == auVar62[0]);
      auVar71[9] = -(auVar64[9] == auVar62[1]);
      auVar71[10] = -(auVar64[10] == auVar62[2]);
      auVar71[0xb] = -(auVar64[0xb] == auVar62[3]);
      auVar71[0xc] = -(auVar64[0xc] == auVar62[4]);
      auVar71[0xd] = -(auVar64[0xd] == auVar62[5]);
      auVar71[0xe] = -(auVar64[0xe] == auVar62[6]);
      auVar71[0xf] = -(auVar64[0xf] == auVar62[7]);
      uVar29 = (ushort)(SUB161(auVar71 >> 7,0) & 1) | (ushort)(SUB161(auVar71 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar71 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar71 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar71 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar71 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar71 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar71 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar71 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar71 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar71 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar71 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar71 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar71 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar71 >> 0x77,0) & 1) << 0xe | (ushort)(auVar71[0xf] >> 7) << 0xf;
      uVar30 = (uint)uVar29;
      while (uVar29 != 0) {
        uVar7 = 0;
        for (uVar32 = uVar30; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        lVar53 = (uVar7 + uVar34 & param_8[1]) * -0xf0;
        if ((char)pauStack_2b8 == *(char *)(lVar57 + -0xf0 + lVar53)) {
          lVar57 = lVar57 + lVar53;
          if (*(longlong *)(lVar57 + -0x30) - *(longlong *)(lVar57 + -0x48) != -0x400)
          goto LAB_141b07cb6;
          uStack_d5 = 1;
          uVar34 = pdb_140df4400(pbStack_118,pauStack_e8);
          uStack_1e8 = (uint)uVar34;
          uStack_1e4 = (undefined1)(uVar34 >> 0x20);
          uStack_1e3 = (undefined1)(uVar34 >> 0x28);
          uStack_1e2 = (undefined1)(uVar34 >> 0x30);
          bStack_1e1 = (byte)(uVar34 >> 0x38);
          if (*(longlong *)(lVar57 + -0x10) == 0) goto LAB_141b07a58;
          lVar49 = *(longlong *)(lVar57 + -0x28);
          uVar47 = *(ulonglong *)(lVar57 + -0x20);
          auVar62 = ZEXT216(CONCAT11(bStack_1e1 >> 1,bStack_1e1 >> 1));
          auVar62 = pshuflw(auVar62,auVar62,0);
          lVar57 = 0;
          goto LAB_141b079de;
        }
        uVar29 = (ushort)(uVar30 - 1) & (ushort)uVar30;
        uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar29);
      }
      auVar69[0] = -(auVar64[0] == -1);
      auVar69[1] = -(auVar64[1] == -1);
      auVar69[2] = -(auVar64[2] == -1);
      auVar69[3] = -(auVar64[3] == -1);
      auVar69[4] = -(auVar64[4] == -1);
      auVar69[5] = -(auVar64[5] == -1);
      auVar69[6] = -(auVar64[6] == -1);
      auVar69[7] = -(auVar64[7] == -1);
      auVar69[8] = -(auVar64[8] == -1);
      auVar69[9] = -(auVar64[9] == -1);
      auVar69[10] = -(auVar64[10] == -1);
      auVar69[0xb] = -(auVar64[0xb] == -1);
      auVar69[0xc] = -(auVar64[0xc] == -1);
      auVar69[0xd] = -(auVar64[0xd] == -1);
      auVar69[0xe] = -(auVar64[0xe] == -1);
      auVar69[0xf] = -(auVar64[0xf] == -1);
      if ((((((((((((((((SUB161(auVar69 >> 7,0) & 1) != 0 || (SUB161(auVar69 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar69 >> 0x17,0) & 1) != 0) || (SUB161(auVar69 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar69 >> 0x27,0) & 1) != 0) || (SUB161(auVar69 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar69 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar69 >> 0x3f,0) & 1) != 0) || (SUB161(auVar69 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar69 >> 0x4f,0) & 1) != 0) || (SUB161(auVar69 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar69 >> 0x5f,0) & 1) != 0) || (SUB161(auVar69 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar69 >> 0x6f,0) & 1) != 0) || (SUB161(auVar69 >> 0x77,0) & 1) != 0) ||
          auVar69[0xf] < '\0') break;
      uVar34 = uVar34 + lVar49 + 0x10;
      lVar49 = lVar49 + 0x10;
    }
  }
  uStack_1e8 = (uint)&pauStack_2b8;
  uStack_1e4 = (undefined1)((ulonglong)&pauStack_2b8 >> 0x20);
  uStack_1e3 = (undefined1)((ulonglong)&pauStack_2b8 >> 0x28);
  uStack_1e2 = (undefined1)((ulonglong)&pauStack_2b8 >> 0x30);
  bStack_1e1 = (byte)((ulonglong)&pauStack_2b8 >> 0x38);
  uStack_1e0 = 0xa0;
  uStack_1df = 0x93;
  uStack_1de = 0xa5;
  uStack_1dd = 0x40;
  uStack_1dc = 1;
  uStack_1db = 0;
  uStack_1da = 0;
  uStack_1d9 = 0;
  uStack_d5 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14303dd85,&uStack_1e8,&UNK_14303dde0);
LAB_141b07cb6:
  uStack_d5 = 1;
  pdb_1417fc630(&uStack_1e8,&uStack_3c0,*(undefined8 *)*pauVar56,*(undefined8 *)(*pauVar56 + 8));
  uVar103 = uStack_12d;
  uVar102 = uStack_12e;
  uVar101 = uStack_12f;
  uVar100 = uStack_130;
  uVar99 = uStack_131;
  uVar98 = uStack_132;
  uVar97 = uStack_133;
  uVar96 = uStack_134;
  uVar95 = uStack_135;
  uVar94 = uStack_136;
  uVar93 = uStack_137;
  uVar92 = uStack_138;
  bVar60 = bStack_139;
  uVar91 = uStack_13a;
  uVar90 = uStack_13b;
  uVar89 = uStack_13c;
  ppauVar25 = ppauStack_190;
  pauVar43 = pauStack_1a8;
  uVar34 = uStack_1c0;
  ppauVar41 = (undefined1 (**) [16])
              CONCAT17(bStack_1e1,
                       CONCAT16(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))));
  pauStack_2e0 = (undefined1 (*) [16])
                 CONCAT17(uStack_1d9,
                          CONCAT16(uStack_1da,
                                   CONCAT15(uStack_1db,
                                            CONCAT14(uStack_1dc,
                                                     CONCAT13(uStack_1dd,
                                                              CONCAT12(uStack_1de,
                                                                       CONCAT11(uStack_1df,
                                                                                uStack_1e0)))))));
  if (!SBORROW8(0,(longlong)ppauVar41)) {
    pauVar44 = (undefined1 (*) [16])
               CONCAT44(uStack_1d4,
                        CONCAT13(uStack_1d5,CONCAT12(uStack_1d6,CONCAT11(uStack_1d7,uStack_1d8))));
    uStack_2e8 = CONCAT44(uStack_1cc,uStack_1d0);
    pauStack_358 = pauStack_1c8;
    uStack_3a0 = uStack_1b8;
    pauStack_378 = pauStack_1b0;
    pauStack_398 = pauStack_1a0;
    pcStack_370 = pcStack_198;
    uStack_390 = uStack_188;
    pbStack_368 = pbStack_180;
    pauStack_f8 = pauStack_178;
    auVar62._4_4_ = (undefined4)uStack_128;
    auVar62._0_4_ = uStack_12c;
    auVar62._8_8_ = 0;
    uStack_388 = CONCAT71(uStack_16f,uStack_170);
    pauStack_360 = pauStack_168;
    pauStack_110 = pauStack_160;
    pauStack_2d8 = pauStack_158;
    pbStack_2d0 = pbStack_150;
    uStack_1fc = uStack_140;
    pbStack_120 = pbStack_118;
    ppauStack_380 = ppauVar41;
    if (pauStack_e8 < pauStack_1f8) {
      if (pauStack_e8 == (undefined1 (*) [16])0x0) {
        pbStack_120 = (byte *)0x1;
        pub_1406abac0(pbStack_118,(ulonglong)pauStack_1f8,1);
      }
      else {
        pbStack_120 = pub_1406abad0(pbStack_118,(ulonglong)pauStack_1f8,1,(ulonglong)pauStack_e8);
        if (pbStack_120 == (byte *)0x0) {
          pdb_142dc7e2a(1,pauStack_e8);
          goto LAB_141b09ca3;
        }
      }
    }
    uStack_d6 = 1;
    uStack_d7 = 1;
    uStack_d8 = 1;
    uStack_d9 = 1;
    uStack_da = 1;
    plVar37 = (longlong *)pdb_14008d710(0);
    if (plVar37 == (longlong *)0x0) {
      uStack_d6 = 1;
      uStack_d7 = 1;
      uStack_d8 = 1;
      uStack_d9 = 1;
      uStack_da = 1;
      pdb_142dc7890(&UNK_143326860);
      goto LAB_141b09ca3;
    }
    ppauStack_3e8 = (undefined1 (**) [16])*plVar37;
    uStack_3e0 = plVar37[1];
    *plVar37 = *plVar37 + 1;
    uStack_3f8 = _DAT_143046120;
    uStack_3f0 = _UNK_143046128;
    uStack_408 = _DAT_143046110;
    uStack_400 = _UNK_143046118;
    lStack_428 = -0x8000000000000000;
    pbStack_3d8 = pbStack_120;
    pauStack_3d0 = pauStack_e8;
    uStack_3c8 = 0;
    if ((uStack_1fc & 1) == 0) {
      uVar89 = uVar72;
      uVar90 = uVar73;
      uVar91 = uVar74;
      bVar60 = bVar59;
      uVar92 = uVar75;
      uVar93 = uVar76;
      uVar94 = uVar77;
      uVar95 = uVar78;
      uVar96 = uVar79;
      uVar97 = uVar80;
      uVar98 = uVar81;
      uVar99 = uVar82;
      uVar100 = uVar83;
      uVar101 = uVar84;
      uVar102 = uVar85;
      uVar103 = uVar86;
      auVar62 = unaff_XMM7;
    }
    unaff_XMM7 = auVar62;
    ppauStack_440 = ppauStack_380;
    pauStack_438 = pauStack_2e0;
    uStack_1e8 = (uint)uStack_2e8;
    uStack_1e4 = (undefined1)((ulonglong)uStack_2e8 >> 0x20);
    uStack_1e3 = (undefined1)((ulonglong)uStack_2e8 >> 0x28);
    uStack_1e2 = (undefined1)((ulonglong)uStack_2e8 >> 0x30);
    bStack_1e1 = (byte)((ulonglong)uStack_2e8 >> 0x38);
    uStack_1e0 = SUB81(pauStack_358,0);
    uStack_1df = (undefined1)((ulonglong)pauStack_358 >> 8);
    uStack_1de = (undefined1)((ulonglong)pauStack_358 >> 0x10);
    uStack_1dd = (undefined1)((ulonglong)pauStack_358 >> 0x18);
    uStack_1dc = (undefined1)((ulonglong)pauStack_358 >> 0x20);
    uStack_1db = (undefined1)((ulonglong)pauStack_358 >> 0x28);
    uStack_1da = (undefined1)((ulonglong)pauStack_358 >> 0x30);
    uStack_1d9 = (undefined1)((ulonglong)pauStack_358 >> 0x38);
    uStack_1d8 = (undefined1)uVar34;
    uStack_1d7 = (undefined1)(uVar34 >> 8);
    uStack_1d6 = (undefined1)(uVar34 >> 0x10);
    uStack_1d5 = (undefined1)(uVar34 >> 0x18);
    uStack_1d4 = (undefined4)(uVar34 >> 0x20);
    uStack_d1 = 1;
    uStack_d2 = 1;
    uStack_d3 = 1;
    uStack_d4 = 1;
    pauStack_430 = pauVar44;
    pdb_140c93200(&ppauStack_440,&UNK_14338d1b8,0xf,&uStack_1e8);
    uStack_1e8 = (uint)uStack_3a0;
    uStack_1e4 = (undefined1)((ulonglong)uStack_3a0 >> 0x20);
    uStack_1e3 = (undefined1)((ulonglong)uStack_3a0 >> 0x28);
    uStack_1e2 = (undefined1)((ulonglong)uStack_3a0 >> 0x30);
    bStack_1e1 = (byte)((ulonglong)uStack_3a0 >> 0x38);
    uStack_1e0 = SUB81(pauStack_378,0);
    uStack_1df = (undefined1)((ulonglong)pauStack_378 >> 8);
    uStack_1de = (undefined1)((ulonglong)pauStack_378 >> 0x10);
    uStack_1dd = (undefined1)((ulonglong)pauStack_378 >> 0x18);
    uStack_1dc = (undefined1)((ulonglong)pauStack_378 >> 0x20);
    uStack_1db = (undefined1)((ulonglong)pauStack_378 >> 0x28);
    uStack_1da = (undefined1)((ulonglong)pauStack_378 >> 0x30);
    uStack_1d9 = (undefined1)((ulonglong)pauStack_378 >> 0x38);
    uStack_1d8 = SUB81(pauVar43,0);
    uStack_1d7 = (undefined1)((ulonglong)pauVar43 >> 8);
    uStack_1d6 = (undefined1)((ulonglong)pauVar43 >> 0x10);
    uStack_1d5 = (undefined1)((ulonglong)pauVar43 >> 0x18);
    uStack_1d4 = (undefined4)((ulonglong)pauVar43 >> 0x20);
    uStack_d1 = 1;
    uStack_d2 = 1;
    uStack_d3 = 1;
    uStack_d4 = 0;
    pdb_140c93200(&ppauStack_440,&UNK_14338d1c7,0xd,&uStack_1e8);
    uStack_1e8 = (uint)pauStack_398;
    uStack_1e4 = (undefined1)((ulonglong)pauStack_398 >> 0x20);
    uStack_1e3 = (undefined1)((ulonglong)pauStack_398 >> 0x28);
    uStack_1e2 = (undefined1)((ulonglong)pauStack_398 >> 0x30);
    bStack_1e1 = (byte)((ulonglong)pauStack_398 >> 0x38);
    uStack_1e0 = SUB81(pcStack_370,0);
    uStack_1df = (undefined1)((ulonglong)pcStack_370 >> 8);
    uStack_1de = (undefined1)((ulonglong)pcStack_370 >> 0x10);
    uStack_1dd = (undefined1)((ulonglong)pcStack_370 >> 0x18);
    uStack_1dc = (undefined1)((ulonglong)pcStack_370 >> 0x20);
    uStack_1db = (undefined1)((ulonglong)pcStack_370 >> 0x28);
    uStack_1da = (undefined1)((ulonglong)pcStack_370 >> 0x30);
    uStack_1d9 = (undefined1)((ulonglong)pcStack_370 >> 0x38);
    uStack_1d8 = SUB81(ppauVar25,0);
    uStack_1d7 = (undefined1)((ulonglong)ppauVar25 >> 8);
    uStack_1d6 = (undefined1)((ulonglong)ppauVar25 >> 0x10);
    uStack_1d5 = (undefined1)((ulonglong)ppauVar25 >> 0x18);
    uStack_1d4 = (undefined4)((ulonglong)ppauVar25 >> 0x20);
    uStack_d1 = 1;
    uStack_d2 = 1;
    uStack_d3 = 0;
    uStack_d4 = 0;
    pdb_140c93200(&ppauStack_440,&UNK_14338d1d4,0xc,&uStack_1e8);
    uStack_1e8 = (uint)uStack_390;
    uStack_1e4 = (undefined1)(uStack_390 >> 0x20);
    uStack_1e3 = (undefined1)(uStack_390 >> 0x28);
    uStack_1e2 = (undefined1)(uStack_390 >> 0x30);
    bStack_1e1 = (byte)(uStack_390 >> 0x38);
    uStack_1e0 = SUB81(pbStack_368,0);
    uStack_1df = (undefined1)((ulonglong)pbStack_368 >> 8);
    uStack_1de = (undefined1)((ulonglong)pbStack_368 >> 0x10);
    uStack_1dd = (undefined1)((ulonglong)pbStack_368 >> 0x18);
    uStack_1dc = (undefined1)((ulonglong)pbStack_368 >> 0x20);
    uStack_1db = (undefined1)((ulonglong)pbStack_368 >> 0x28);
    uStack_1da = (undefined1)((ulonglong)pbStack_368 >> 0x30);
    uStack_1d9 = (undefined1)((ulonglong)pbStack_368 >> 0x38);
    uStack_1d8 = SUB81(pauStack_f8,0);
    uStack_1d7 = (undefined1)((ulonglong)pauStack_f8 >> 8);
    uStack_1d6 = (undefined1)((ulonglong)pauStack_f8 >> 0x10);
    uStack_1d5 = (undefined1)((ulonglong)pauStack_f8 >> 0x18);
    uStack_1d4 = (undefined4)((ulonglong)pauStack_f8 >> 0x20);
    uStack_d1 = 1;
    uStack_d2 = 0;
    uStack_d3 = 0;
    uStack_d4 = 0;
    pdb_140c92a00(&ppauStack_440,&UNK_14338d1e0,9,&uStack_1e8);
    uStack_1e8 = (uint)uStack_388;
    uStack_1e4 = (undefined1)((ulonglong)uStack_388 >> 0x20);
    uStack_1e3 = (undefined1)((ulonglong)uStack_388 >> 0x28);
    uStack_1e2 = (undefined1)((ulonglong)uStack_388 >> 0x30);
    bStack_1e1 = (byte)((ulonglong)uStack_388 >> 0x38);
    uStack_1e0 = SUB81(pauStack_360,0);
    uStack_1df = (undefined1)((ulonglong)pauStack_360 >> 8);
    uStack_1de = (undefined1)((ulonglong)pauStack_360 >> 0x10);
    uStack_1dd = (undefined1)((ulonglong)pauStack_360 >> 0x18);
    uStack_1dc = (undefined1)((ulonglong)pauStack_360 >> 0x20);
    uStack_1db = (undefined1)((ulonglong)pauStack_360 >> 0x28);
    uStack_1da = (undefined1)((ulonglong)pauStack_360 >> 0x30);
    uStack_1d9 = (undefined1)((ulonglong)pauStack_360 >> 0x38);
    uStack_1d8 = SUB81(pauStack_110,0);
    uStack_1d7 = (undefined1)((ulonglong)pauStack_110 >> 8);
    uStack_1d6 = (undefined1)((ulonglong)pauStack_110 >> 0x10);
    uStack_1d5 = (undefined1)((ulonglong)pauStack_110 >> 0x18);
    uStack_1d4 = (undefined4)((ulonglong)pauStack_110 >> 0x20);
    uStack_d1 = 0;
    uStack_d2 = 0;
    uStack_d3 = 0;
    uStack_d4 = 0;
    pdb_140c92580(&ppauStack_440,&UNK_14338d1e9,5,&uStack_1e8);
    uStack_d1 = 0;
    uStack_d2 = 0;
    uStack_d3 = 0;
    uStack_d4 = 0;
    pdb_140a97aa0(&uStack_1e8,&ppauStack_440);
    puVar42 = (uint *)CONCAT17(bStack_1e1,
                               CONCAT16(uStack_1e2,
                                        CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))));
    puVar23 = (uint *)CONCAT17(uStack_1d9,
                               CONCAT16(uStack_1da,
                                        CONCAT15(uStack_1db,
                                                 CONCAT14(uStack_1dc,
                                                          CONCAT13(uStack_1dd,
                                                                   CONCAT12(uStack_1de,
                                                                            CONCAT11(uStack_1df,
                                                                                     uStack_1e0)))))
                                       ));
    if (puVar42 == puVar23) {
      fVar61 = 0.0;
    }
    else {
      lVar57 = CONCAT44(uStack_1d4,
                        CONCAT13(uStack_1d5,CONCAT12(uStack_1d6,CONCAT11(uStack_1d7,uStack_1d8))));
      fVar61 = 0.0;
      do {
        uVar34 = (ulonglong)*puVar42;
        if (CONCAT44(uStack_1cc,uStack_1d0) <= uVar34) {
          uStack_d1 = 0;
          uStack_d2 = 0;
          uStack_d3 = 0;
          uStack_d4 = 0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar34,CONCAT44(uStack_1cc,uStack_1d0),&UNK_143045cf0);
        }
        puVar42 = puVar42 + 1;
        fVar2 = *(float *)(lVar57 + uVar34 * 0xc);
        fVar67 = *(float *)(lVar57 + 8 + uVar34 * 0xc);
        fVar67 = SQRT(fVar67 * fVar67 + fVar2 * fVar2);
        fVar2 = fVar67;
        if (fVar67 <= fVar61) {
          fVar2 = fVar61;
        }
        fVar61 = (float)(~-(uint)NAN(fVar61) & (uint)fVar2 | -(uint)NAN(fVar61) & (uint)fVar67);
      } while (puVar42 != puVar23);
    }
    uStack_d1 = 0;
    uStack_d2 = 0;
    uStack_d3 = 0;
    uStack_d4 = 0;
    pdb_140a96ba0(&uStack_1e8,&ppauStack_440);
    uStack_d1 = 0;
    uStack_d2 = 0;
    uStack_d3 = 0;
    uStack_d4 = 0;
    pdb_140def0d0(&pauStack_328,&uStack_1e8);
    uStack_d1 = 0;
    uStack_d2 = 0;
    uStack_d3 = 0;
    uStack_d4 = 0;
    pdb_140def0d0(&ppauStack_4e0,&uStack_1e8);
    uStack_d1 = 0;
    uStack_d2 = 0;
    uStack_d3 = 0;
    uStack_d4 = 0;
    pdb_140def030(&pauStack_2b8,&uStack_1e8);
    uStack_d1 = 0;
    uStack_d2 = 0;
    uStack_d3 = 0;
    uStack_d4 = 0;
    pdb_140df1b90(&uStack_638);
    uVar34 = uStack_3e0;
    ppauVar41 = ppauStack_3e8;
    uStack_620 = CONCAT44(CONCAT13(uStack_1d5,CONCAT12(uStack_1d6,CONCAT11(uStack_1d7,uStack_1d8))),
                          CONCAT13(bStack_1e1,CONCAT12(uStack_1e2,CONCAT11(uStack_1e3,uStack_1e4))))
    ;
    uStack_d1 = 0;
    uStack_d2 = 0;
    uStack_d3 = 0;
    uStack_d4 = 0;
    pdb_140ca3e60(&pauStack_2b8,&uStack_408);
    pauVar44 = pauStack_430;
    pauVar43 = pauStack_438;
    ppauStack_298 = ppauVar41;
    uStack_290 = uVar34;
    uVar34 = (longlong)pauStack_430 * 4;
    if (0x7ffffffffffffffc < uVar34 || (ulonglong)pauStack_430 >> 0x3e != 0) {
      uVar36 = 0;
LAB_141b094c8:
      pdb_142dc7e2a(uVar36,uVar34);
      goto LAB_141b09ca3;
    }
    if (uVar34 == 0) {
      pauStack_f8 = (undefined1 (*) [16])0x4;
      pauStack_110 = (undefined1 (*) [16])0x0;
    }
    else {
      pdb_14007ee60();
      uVar36 = 4;
      pauStack_f8 = (undefined1 (*) [16])pub_1406abab0(uVar34,4);
      if (pauStack_f8 == (undefined1 (*) [16])0x0) goto LAB_141b094c8;
      pauStack_110 = pauVar44;
    }
    if (pauVar44 != (undefined1 (*) [16])0x0) {
      pub_142e32760(pauStack_f8,pauVar43,uVar34);
    }
    uVar34 = uStack_418;
    uVar36 = uStack_420;
    uVar47 = 0x8000000000000000;
    if (!SBORROW8(0,lStack_428)) {
      if ((longlong)uStack_418 < 0) {
        uVar55 = 0;
LAB_141b0992f:
        pdb_142dc7e2a(uVar55,uVar34);
        goto LAB_141b09ca3;
      }
      if (uStack_418 == 0) {
        pauStack_348 = (undefined1 (*) [16])0x1;
      }
      else {
        pdb_14007ee60();
        uVar55 = 1;
        pauVar43 = (undefined1 (*) [16])pub_1406abab0(uVar34,1);
        if (pauVar43 == (undefined1 (*) [16])0x0) goto LAB_141b0992f;
        pauStack_348 = pauVar43;
        pub_142e32760(pauVar43,uVar36,uVar34);
      }
      uStack_f9 = uStack_410;
      uStack_510 = uVar34;
      uVar47 = uVar34;
    }
    pauVar43 = pauStack_e8;
    ppauStack_190 = ppauStack_298;
    uStack_188 = uStack_290;
    pauStack_1a0 = pauStack_2a8;
    pcStack_198 = pcStack_2a0;
    pauStack_1b0 = pauStack_2b8;
    pauStack_1a8 = pauStack_2b0;
    uStack_1e8 = (uint)pauStack_110;
    uStack_1e4 = (undefined1)((ulonglong)pauStack_110 >> 0x20);
    uStack_1e3 = (undefined1)((ulonglong)pauStack_110 >> 0x28);
    uStack_1e2 = (undefined1)((ulonglong)pauStack_110 >> 0x30);
    bStack_1e1 = (byte)((ulonglong)pauStack_110 >> 0x38);
    uStack_1e0 = SUB81(pauStack_f8,0);
    uStack_1df = (undefined1)((ulonglong)pauStack_f8 >> 8);
    uStack_1de = (undefined1)((ulonglong)pauStack_f8 >> 0x10);
    uStack_1dd = (undefined1)((ulonglong)pauStack_f8 >> 0x18);
    uStack_1dc = (undefined1)((ulonglong)pauStack_f8 >> 0x20);
    uStack_1db = (undefined1)((ulonglong)pauStack_f8 >> 0x28);
    uStack_1da = (undefined1)((ulonglong)pauStack_f8 >> 0x30);
    uStack_1d9 = (undefined1)((ulonglong)pauStack_f8 >> 0x38);
    uStack_1d8 = SUB81(pauVar44,0);
    uStack_1d7 = (undefined1)((ulonglong)pauVar44 >> 8);
    uStack_1d6 = (undefined1)((ulonglong)pauVar44 >> 0x10);
    uStack_1d5 = (undefined1)((ulonglong)pauVar44 >> 0x18);
    uStack_1d4 = (undefined4)((ulonglong)pauVar44 >> 0x20);
    uStack_1d0 = (undefined4)uVar47;
    uStack_1cc = (undefined4)(uVar47 >> 0x20);
    pauStack_1c8 = pauStack_348;
    uStack_1c0 = uStack_510;
    uStack_1b8 = CONCAT71(uStack_1b8._1_7_,uStack_f9);
    pbStack_180 = pbStack_3d8;
    pauStack_178 = pauStack_3d0;
    uStack_170 = uStack_3c8;
    pauStack_168 = (undefined1 (*) [16])0x8000000000000000;
    if (pauStack_e8 == (undefined1 (*) [16])0x0) {
      pauVar44 = (undefined1 (*) [16])0x1;
    }
    else {
      pdb_14007ee60();
      pauVar44 = (undefined1 (*) [16])pub_1406abab0((ulonglong)pauVar43,1);
      if (pauVar44 == (undefined1 (*) [16])0x0) {
        pdb_142dc7e2a(1,pauVar43);
        goto LAB_141b09ca3;
      }
      pub_142e32760(pauVar44,pbStack_120,pauVar43);
    }
    pauStack_168 = pauVar43;
    pauStack_158 = pauVar43;
    pauStack_160 = pauVar44;
    pub_142e32760(&pauStack_2b8,&uStack_1e8,0x98);
    uStack_d1 = 0;
    uStack_d2 = 0;
    uStack_d3 = 0;
    uStack_d4 = 0;
    uStack_508 = pdb_140a2b4c0(param_7,&pauStack_2b8);
    uStack_d1 = 0;
    uStack_d2 = 0;
    uStack_d3 = 0;
    uStack_d4 = 0;
    pdb_140a56c60(param_8,pbStack_120,pauStack_e8);
    uStack_d1 = 0;
    uStack_d2 = 0;
    uStack_d3 = 0;
    uStack_d4 = 0;
    uVar34 = (ulonglong)bStack_db;
    pdb_140a58820(param_8,uVar34,pbStack_120,pauStack_e8,&ppauStack_440);
    uVar47 = uStack_3e0;
    ppauVar41 = ppauStack_3e8;
    if ((uStack_1fc & 1) != 0) {
      uStack_d1 = 0;
      uStack_d2 = 0;
      uStack_d3 = 0;
      uStack_d4 = 0;
      pdb_140ca3e60(&pauStack_2b8,&uStack_408);
      pauVar44 = pauStack_430;
      pauVar43 = pauStack_438;
      ppauStack_298 = ppauVar41;
      uStack_290 = uVar47;
      uVar34 = (longlong)pauStack_430 * 4;
      if (0x7ffffffffffffffc < uVar34 || (ulonglong)pauStack_430 >> 0x3e != 0) {
        uVar36 = 0;
LAB_141b09a20:
        pdb_142dc7e2a(uVar36,uVar34);
        goto LAB_141b09ca3;
      }
      if (uVar34 == 0) {
        pauVar45 = (undefined1 (*) [16])0x4;
        pauStack_f8 = (undefined1 (*) [16])0x0;
      }
      else {
        pdb_14007ee60();
        uVar36 = 4;
        pauVar45 = (undefined1 (*) [16])pub_1406abab0(uVar34,4);
        if (pauVar45 == (undefined1 (*) [16])0x0) goto LAB_141b09a20;
        pauStack_f8 = pauVar44;
      }
      if (pauVar44 != (undefined1 (*) [16])0x0) {
        pub_142e32760(pauVar45,pauVar43,uVar34);
      }
      ppauVar41 = (undefined1 (**) [16])0x8000000000000000;
      if (!SBORROW8(0,lStack_428)) {
        pauStack_110 = pauVar45;
        pdb_140dbd540(&ppauStack_4e0,&lStack_428);
        uStack_4c8 = uStack_410;
        pauStack_328 = pauStack_4d8;
        uStack_320 = uStack_4d0;
        uStack_318 = CONCAT71(uStack_4c7,uStack_410);
        ppauVar41 = ppauStack_4e0;
        pauVar45 = pauStack_110;
      }
      pauStack_1b0 = pauStack_2b8;
      pauStack_1a8 = pauStack_2b0;
      pauStack_1a0 = pauStack_2a8;
      pcStack_198 = pcStack_2a0;
      ppauStack_190 = ppauStack_298;
      uStack_188 = uStack_290;
      uStack_1e8 = (uint)pauStack_f8;
      uStack_1e4 = (undefined1)((ulonglong)pauStack_f8 >> 0x20);
      uStack_1e3 = (undefined1)((ulonglong)pauStack_f8 >> 0x28);
      uStack_1e2 = (undefined1)((ulonglong)pauStack_f8 >> 0x30);
      bStack_1e1 = (byte)((ulonglong)pauStack_f8 >> 0x38);
      uStack_1e0 = SUB81(pauVar45,0);
      uStack_1df = (undefined1)((ulonglong)pauVar45 >> 8);
      uStack_1de = (undefined1)((ulonglong)pauVar45 >> 0x10);
      uStack_1dd = (undefined1)((ulonglong)pauVar45 >> 0x18);
      uStack_1dc = (undefined1)((ulonglong)pauVar45 >> 0x20);
      uStack_1db = (undefined1)((ulonglong)pauVar45 >> 0x28);
      uStack_1da = (undefined1)((ulonglong)pauVar45 >> 0x30);
      uStack_1d9 = (undefined1)((ulonglong)pauVar45 >> 0x38);
      uStack_1d8 = SUB81(pauVar44,0);
      uStack_1d7 = (undefined1)((ulonglong)pauVar44 >> 8);
      uStack_1d6 = (undefined1)((ulonglong)pauVar44 >> 0x10);
      uStack_1d5 = (undefined1)((ulonglong)pauVar44 >> 0x18);
      uStack_1d4 = (undefined4)((ulonglong)pauVar44 >> 0x20);
      uStack_1d0 = SUB84(ppauVar41,0);
      uStack_1cc = (undefined4)((ulonglong)ppauVar41 >> 0x20);
      ppauVar41 = &pauStack_1c8;
      uStack_1b8 = uStack_318;
      pauStack_1c8 = pauStack_328;
      uStack_1c0 = uStack_320;
      pbStack_180 = pbStack_3d8;
      pauStack_178 = pauStack_3d0;
      uStack_170 = uStack_3c8;
      pauStack_2b0 = (undefined1 (*) [16])0x4;
      pauStack_2a8 = (undefined1 (*) [16])&UNK_14338d1d4;
      pcStack_2a0 = (code *)0xc;
      ppauStack_298 = (undefined1 (**) [16])&UNK_14338d1c7;
      uStack_290 = 0xd;
      puStack_288 = &UNK_14338d1e0;
      uStack_280 = 9;
      puStack_278 = &UNK_14338d1e9;
      uStack_270 = 5;
      pauVar43 = (undefined1 (*) [16])0x0;
LAB_141b08868:
      do {
        if (pauVar43 == (undefined1 (*) [16])0x4) goto LAB_141b08992;
        pauVar44 = (undefined1 (*) [16])(*pauVar43 + 1);
        pauVar45 = (&pauStack_2a8)[(longlong)pauVar43 * 2];
        pcVar4 = (&pcStack_2a0)[(longlong)pauVar43 * 2];
        pauStack_2b8 = pauVar44;
        uVar36 = pdb_1400af950(&ppauStack_190,pauVar45,pcVar4);
        ppauVar41 = &pauStack_1b0;
        pdb_140caa5c0(&ppauStack_4e0,&pauStack_1b0,uVar36,pauVar45,pcVar4);
        pbVar51 = pbStack_4b8;
        lVar49 = lStack_4c0;
        lVar57 = CONCAT71(uStack_4c7,uStack_4c8);
        pauVar43 = pauVar44;
        if (lVar57 != 6) {
          ppauVar41 = ppauStack_4e0;
          if (ppauStack_4e0 != (undefined1 (**) [16])0x0) {
            pub_1406abac0((byte *)pauStack_4d8,(ulonglong)ppauStack_4e0,1);
          }
          switch(lVar57) {
          case 0:
          case 2:
            if (lVar49 == 0) goto LAB_141b08868;
            ppauVar41 = (undefined1 (**) [16])(lVar49 << 2);
            break;
          case 1:
            if (lVar49 != 0) {
              ppauVar41 = (undefined1 (**) [16])(lVar49 << 3);
              uVar34 = 2;
              goto code_r0x000141b08985;
            }
            goto LAB_141b08868;
          case 3:
            if (lVar49 == 0) goto LAB_141b08868;
            ppauVar41 = (undefined1 (**) [16])(lVar49 << 3);
            break;
          case 4:
            if (lVar49 != 0) {
              ppauVar41 = (undefined1 (**) [16])(lVar49 * 0xc);
              uVar34 = 4;
              goto code_r0x000141b08985;
            }
            goto LAB_141b08868;
          default:
            if (lVar49 == 0) goto LAB_141b08868;
            ppauVar41 = (undefined1 (**) [16])(lVar49 << 4);
          }
          uVar34 = 4;
code_r0x000141b08985:
          pub_1406abac0(pbVar51,(ulonglong)ppauVar41,uVar34);
        }
      } while( true );
    }
    goto LAB_141b089e4;
  }
  uStack_d5 = 1;
  uVar36 = pdb_142deaf00(pauStack_2e0);
  puStack_208[1] = uVar36;
  *puStack_208 = 0;
  if (pauStack_1f8 != (undefined1 (*) [16])0x0) {
    uVar34 = 1;
    pbVar51 = pbStack_118;
    pauVar35 = pauStack_1f8;
LAB_141b09827:
    pub_1406abac0(pbVar51,(ulonglong)pauVar35,uVar34);
  }
LAB_141b0982c:
  if (auStack_5b8._8_8_ != 0) {
    uVar34 = auStack_5b8._8_8_ * 8 + 0x17U & 0xfffffffffffffff0;
    uVar47 = auStack_5b8._8_8_ + uVar34 + 0x11;
    if (uVar47 != 0) {
      pub_1406abac0((byte *)(auStack_5b8._0_8_ - uVar34),uVar47,0x10);
    }
  }
  if (pauStack_580 != (undefined1 (*) [16])0x0) {
    uVar34 = (longlong)pauStack_580 * 8 + 0x17U & 0xfffffffffffffff0;
    if (pauStack_580[1] + uVar34 + 1 != (undefined *)0x0) {
      pub_1406abac0((byte *)((longlong)pauStack_588 - uVar34),
                    (ulonglong)(pauStack_580[1] + uVar34 + 1),0x10);
    }
  }
  if (uStack_2f8 != 0) {
    auVar62 = *pauStack_2f0;
    pauVar35 = pauStack_2f0 + 1;
    uVar30 = ~(uint)(ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
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
                            (ushort)(byte)(auVar62[0xf] >> 7) << 0xf);
    pauVar50 = pauStack_2f0;
    uVar34 = uStack_2f8;
    do {
      if ((short)uVar30 == 0) {
        do {
          auVar62 = *pauVar35;
          pauVar50 = pauVar50 + -0x20;
          pauVar35 = pauVar35 + 1;
          uVar30 = (ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
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
                           (ushort)(byte)(auVar62[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar30 == 0);
      }
      iVar31 = 0;
      for (uVar7 = uVar30; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        iVar31 = iVar31 + 1;
      }
      uVar47 = *(ulonglong *)((longlong)pauVar50 + (-0x20 - (ulonglong)(uint)(iVar31 << 5)));
      if (uVar47 != 0) {
        pub_1406abac0(*(byte **)((longlong)pauVar50 + (-0x18 - (ulonglong)(uint)(iVar31 << 5))),
                      uVar47,1);
        uVar34 = uStack_2f8;
      }
      uVar30 = uVar30 - 1 & uVar30;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar33 = uVar34 * 0x20 + 0x20;
    uVar34 = uVar34 + lVar33 + 0x11;
    if (uVar34 != 0) {
      pub_1406abac0((byte *)((longlong)pauStack_2f0 - lVar33),uVar34,0x10);
    }
  }
  if (uStack_5e0 != 0) {
    lVar33 = uStack_5e0 * 0x20 + 0x20;
    uVar34 = uStack_5e0 + lVar33 + 0x11;
    if (uVar34 != 0) {
      pub_1406abac0((byte *)(lStack_5e8 - lVar33),uVar34,0x10);
    }
  }
  if (lStack_330 != 0) {
    pbVar51 = pbStack_338 + 0x18;
    lVar33 = lStack_330;
    do {
      if (*(ulonglong *)(pbVar51 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar51,*(ulonglong *)(pbVar51 + -8),1);
      }
      pbVar51 = pbVar51 + 0x50;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
  }
  if (lStack_340 != 0) {
    pub_1406abac0(pbStack_338,lStack_340 * 0x50,0x10);
  }
LAB_141b0708c:
  pauStack_e8 = pauStack_458;
  pauStack_f0 = (undefined1 (*) [16])0x0;
  pauStack_108 = pauStack_460;
  pauVar35 = pauStack_460;
  while (pauStack_e8 != pauStack_f0) {
    pauStack_f0 = (undefined1 (*) [16])(*pauStack_f0 + 1);
    pdb_14098f040(pauVar35);
    pauVar35 = pauVar35 + 6;
  }
  if (lStack_468 != 0) {
    pub_1406abac0((byte *)pauStack_108,lStack_468 * 0x60,0x10);
  }
LAB_141b0710f:
  if (uStack_3c0 != 0) {
    pub_1406abac0(pbStack_3b8,uStack_3c0,1);
  }
  if (lStack_308 != 0) {
    pauVar35 = (undefined1 (*) [16])pdb_140e97000();
    if (pauVar35[6][8] != '\x01') {
      pauVar35 = (undefined1 (*) [16])pdb_142d8ec20(pauVar35,0);
      if (pauVar35 == (undefined1 (*) [16])0x0) {
        pdb_142dc7890(&UNK_143326860);
        goto LAB_141b09ca3;
      }
    }
    if (*(longlong *)*pauVar35 != 0) {
      pdb_142dc8090(&UNK_143326a50);
LAB_141b09ca3:
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    *(undefined8 *)*pauVar35 = 0xffffffffffffffff;
    pauStack_f0 = pauVar35;
    pdb_140e95370(*pauVar35 + 8,uStack_300);
LAB_141b07170:
    *(longlong *)*pauStack_f0 = *(longlong *)*pauStack_f0 + 1;
  }
LAB_141b0717a:
  pbVar51 = (byte *)puStack_210[3];
  lVar33 = puStack_210[4];
  if (lVar33 != 0) {
    pbVar48 = pbVar51 + 0x20;
    do {
      if (*(ulonglong *)(pbVar48 + -0x20) != 0) {
        pub_1406abac0(*(byte **)(pbVar48 + -0x18),*(ulonglong *)(pbVar48 + -0x20),1);
      }
      if (*(ulonglong *)(pbVar48 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar48,*(ulonglong *)(pbVar48 + -8),1);
      }
      pbVar48 = pbVar48 + 0x30;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
  }
  if (puStack_210[2] != 0) {
    pub_1406abac0(pbVar51,puStack_210[2] * 0x30,8);
  }
  return puStack_208;
}

