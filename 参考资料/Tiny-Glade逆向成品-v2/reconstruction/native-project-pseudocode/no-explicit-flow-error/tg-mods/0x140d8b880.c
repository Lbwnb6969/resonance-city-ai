// VA 0x140d8b880, PDB extent 12603 bytes
// tg_mods::overlay::build_overlay
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::overlay::build_overlay
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 12603 */

longlong pdb_140d8b880(undefined8 *param_1,undefined1 param_2 [8])

{
  char *pcVar1;
  byte *pbVar2;
  undefined1 uVar3;
  byte ******ppppppbVar4;
  byte ******ppppppbVar5;
  byte *****pppppbVar6;
  undefined8 uVar7;
  code *pcVar8;
  uint uVar9;
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
  char cVar23;
  char cVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  char cVar44;
  ushort uVar45;
  int iVar46;
  uint uVar47;
  longlong *plVar48;
  byte *******pppppppbVar49;
  byte *******pppppppbVar50;
  byte *******pppppppbVar51;
  byte *******pppppppbVar52;
  byte *pbVar53;
  byte *******pppppppbVar54;
  byte ******arg0;
  longlong lVar55;
  ulonglong uVar56;
  byte *******pppppppbVar57;
  undefined8 *puVar58;
  byte *******pppppppbVar59;
  undefined8 uVar60;
  ulonglong uVar61;
  byte *******pppppppbVar62;
  byte ******ppppppbVar63;
  byte ******ppppppbVar64;
  byte *******pppppppbVar65;
  longlong lVar66;
  byte ******arg1;
  byte *******pppppppbVar67;
  uint uVar68;
  byte *******pppppppbVar69;
  byte *******pppppppbVar70;
  byte *******pppppppbVar71;
  byte ******ppppppbVar72;
  byte *******pppppppbVar73;
  undefined1 (*pauVar74) [16];
  byte *******pppppppbVar75;
  undefined8 uVar76;
  undefined1 (*pauVar77) [16];
  byte ******ppppppbVar78;
  bool bVar79;
  byte bVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  byte *******pppppppbStack_400;
  byte *******pppppppbStack_3f8;
  byte *******pppppppbStack_3f0;
  byte *******pppppppbStack_390;
  byte *******pppppppbStack_388;
  byte *******pppppppbStack_380;
  undefined1 auStack_378 [8];
  byte *pbStack_370;
  undefined8 uStack_368;
  byte *******pppppppbStack_360;
  longlong lStack_358;
  byte *******pppppppbStack_350;
  byte *******pppppppbStack_348;
  byte *******pppppppbStack_340;
  undefined1 auStack_338 [16];
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 auStack_308 [16];
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  byte *******pppppppbStack_2e0;
  byte *******pppppppbStack_2d8;
  byte *******pppppppbStack_2d0;
  byte *******pppppppbStack_2c8;
  byte *******pppppppbStack_2c0;
  byte *******pppppppbStack_2b8;
  byte *******pppppppbStack_2b0;
  byte *******pppppppbStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  byte *******pppppppbStack_280;
  byte *******pppppppbStack_278;
  undefined8 uStack_270;
  char cStack_258;
  char cStack_257;
  byte *******pppppppbStack_248;
  byte *******pppppppbStack_240;
  byte *******pppppppbStack_238;
  byte *******pppppppbStack_230;
  byte *******pppppppbStack_228;
  byte *******pppppppbStack_220;
  byte *******pppppppbStack_218;
  char cStack_210;
  char cStack_20f;
  undefined6 uStack_20e;
  byte *******pppppppbStack_208;
  byte *******pppppppbStack_200;
  undefined1 auStack_1f8 [12];
  undefined4 uStack_1ec;
  undefined1 auStack_1e8 [16];
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  byte *******pppppppbStack_1b0;
  byte *******pppppppbStack_1a8;
  byte *******pppppppbStack_1a0;
  undefined8 uStack_198;
  byte *******pppppppbStack_190;
  byte *******pppppppbStack_188;
  byte *******pppppppbStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [16];
  byte *******pppppppbStack_150;
  byte *******pppppppbStack_148;
  byte *******pppppppbStack_140;
  byte *******pppppppbStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  byte *******pppppppbStack_100;
  byte *******pppppppbStack_f8;
  byte *******pppppppbStack_f0;
  byte *******pppppppbStack_e8;
  byte *******pppppppbStack_e0;
  byte *******pppppppbStack_d8;
  undefined1 uStack_c9;
  byte *******pppppppbStack_c8;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  byte *******pppppppbStack_b8;
  byte *******pppppppbStack_b0;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_a4 = 1;
  pppppppbStack_340 = (byte *******)param_2;
  plVar48 = (longlong *)pdb_140f3bda0();
  if ((char)plVar48[2] == '\x01') {
    uStack_2e8 = *plVar48;
    param_2 = (undefined1  [8])plVar48[1];
  }
  else {
    uStack_a4 = 1;
    uStack_2e8 = pdb_140f4fd10();
    *plVar48 = uStack_2e8;
    plVar48[1] = (longlong)param_2;
    *(undefined1 *)(plVar48 + 2) = 1;
  }
  *plVar48 = uStack_2e8 + 1;
  pppppppbVar62 = _UNK_1431e5068;
  uVar60 = _DAT_1431e5060;
  auVar84 = _DAT_1431e5050;
  uStack_2f8 = _DAT_1431e5060;
  uStack_2f0 = _UNK_1431e5068;
  auStack_308 = _DAT_1431e5050;
  pppppppbVar67 = (byte *******)pppppppbStack_340[1];
  ppppppbVar4 = pppppppbStack_340[2];
  pppppppbStack_348 = pppppppbVar67 + (longlong)ppppppbVar4 * 0x16;
  pppppppbVar54 = pppppppbVar67;
  pppppppbStack_2e0 = (byte *******)param_2;
  while (pppppppbVar54 != pppppppbStack_348) {
    uStack_a3 = 1;
    pdb_140f3e9e0(&pppppppbStack_248,pppppppbVar54[9],pppppppbVar54[10],&UNK_1431e5317,6);
    _auStack_1f8 = ZEXT816(10);
    pppppppbStack_208 = (byte *******)0x0;
    auStack_1e8._8_4_ = 0x100;
    auStack_1e8._0_8_ = 0xffffffffffffffff;
    pppppppbStack_d8 = pppppppbStack_240;
    pdb_140f3e010(&pppppppbStack_148,pppppppbStack_240,pppppppbStack_238);
    pppppppbVar51 = pppppppbVar54 + 0x16;
    uStack_298 = auStack_1e8._0_8_;
    uStack_290 = auStack_1e8._8_8_;
    pppppppbStack_2a8 = (byte *******)auStack_1f8._0_8_;
    uStack_2a0 = stack0xfffffffffffffe10;
    pppppppbStack_2b8 = pppppppbStack_208;
    pppppppbStack_2b0 = pppppppbStack_200;
    pppppppbStack_2c0 = (byte *******)CONCAT44(uStack_12c,uStack_130);
    pppppppbStack_2d8 = pppppppbStack_148;
    pppppppbStack_2d0 = pppppppbStack_140;
    pppppppbStack_2c8 = pppppppbStack_138;
    uStack_170 = auStack_1e8._0_8_;
    uStack_168 = auStack_1e8._8_8_;
    pppppppbStack_180 = (byte *******)auStack_1f8._0_8_;
    uStack_178 = stack0xfffffffffffffe10;
    pppppppbStack_190 = pppppppbStack_208;
    pppppppbStack_188 = pppppppbStack_200;
    pppppppbStack_1a0 = pppppppbStack_138;
    pppppppbStack_1b0 = pppppppbStack_148;
    pppppppbStack_1a8 = pppppppbStack_140;
    auStack_1e8 = (undefined1  [16])0x0;
    auStack_1d0 = (undefined1  [16])0x0;
    auStack_160 = (undefined1  [16])0x0;
    pppppppbStack_208 = (byte *******)0x0;
    _auStack_1f8 = ZEXT816(8) << 0x40;
    uStack_1d8 = (byte *******)0x8;
    uStack_1c0 = 8;
    puStack_1b8 = (undefined *)0x0;
    uStack_198 = pppppppbStack_2c0;
    while (pdb_1411b9080(&pppppppbStack_2d8,&pppppppbStack_208), pppppppbVar52 = pppppppbStack_2a8,
          pppppppbVar49 = pppppppbStack_2b0, pppppppbStack_2d8 != (byte *******)0x3) {
      if ((int)pppppppbStack_2d8 == 2) {
        if (pppppppbStack_2d0 == (byte *******)0x0) {
LAB_140d8bc96:
          if (pppppppbVar49 != (byte *******)0x0) {
            pub_1406abac0((byte *)pppppppbVar52,(ulonglong)pppppppbVar49,1);
          }
        }
        else {
          if (!SBORROW8(0,(longlong)pppppppbStack_2d0)) {
            pub_1406abac0((byte *)pppppppbStack_2c8,(ulonglong)pppppppbStack_2d0,1);
            goto LAB_140d8bc96;
          }
          if (((ulonglong)pppppppbStack_2c8 & 0x7fffffffffffffff) != 0) {
            pub_1406abac0((byte *)pppppppbStack_2c0,(ulonglong)pppppppbStack_2c8,1);
          }
          if ((1 < ((uint)pppppppbVar52 & 3) - 2) && (((ulonglong)pppppppbVar52 & 3) != 0)) {
            pppppppbStack_c8 = (byte *******)((longlong)pppppppbVar52 + -1);
            pppppppbStack_b0 = *(byte ********)((longlong)pppppppbVar52 + -1);
            pppppppbStack_b8 = *(byte ********)((longlong)pppppppbVar52 + 7);
            if (*pppppppbStack_b8 != (byte ******)0x0) {
              (*(code *)*pppppppbStack_b8)(pppppppbStack_b0);
            }
            if (pppppppbStack_b8[1] != (byte ******)0x0) {
              pub_1406abac0((byte *)pppppppbStack_b0,(ulonglong)pppppppbStack_b8[1],
                            (ulonglong)pppppppbStack_b8[2]);
            }
            pub_1406abac0((byte *)pppppppbStack_c8,0x18,8);
          }
        }
      }
      else if (cStack_257 == '\0' && cStack_258 == '\0') {
        pppppppbStack_b0 = pppppppbStack_280;
        pppppppbStack_b8 = pppppppbStack_278;
        pdb_140d8a9d0(auStack_308,pppppppbVar54[9],pppppppbVar54[10],pppppppbStack_278,uStack_270);
        if (pppppppbStack_b0 != (byte *******)0x0) {
          pub_1406abac0((byte *)pppppppbStack_b8,(ulonglong)pppppppbStack_b0,1);
        }
      }
      else if (pppppppbStack_280 != (byte *******)0x0) {
        pub_1406abac0((byte *)pppppppbStack_278,(ulonglong)pppppppbStack_280,1);
      }
    }
    pdb_141da0e80(&pppppppbStack_208);
    param_2 = (undefined1  [8])pppppppbStack_248;
    pppppppbVar54 = pppppppbVar51;
    if (pppppppbStack_248 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_d8,(ulonglong)pppppppbStack_248,1);
    }
  }
  pppppppbStack_390 = (byte *******)0x0;
  pppppppbStack_380 = (byte *******)0x0;
  pppppppbVar54 = pppppppbVar67;
  while (pppppppbVar49 = pppppppbStack_380, pppppppbVar51 = pppppppbStack_390,
        pppppppbVar54 != pppppppbStack_348) {
    pppppppbVar51 = (byte *******)pppppppbVar54[9];
    pppppppbVar49 = (byte *******)pppppppbVar54[10];
    pdb_140f3e9e0(auStack_338,pppppppbVar51,pppppppbVar49,&UNK_1431e5498,0x18);
    uVar7 = auStack_338._8_8_;
    pppppppbStack_248 = (byte *******)auStack_338._8_8_;
    pppppppbStack_240 = uStack_328;
    _auStack_1f8 = ZEXT816(10);
    pppppppbStack_208 = (byte *******)0x0;
    auStack_1e8._8_4_ = 0x100;
    auStack_1e8._0_8_ = 0xffffffffffffffff;
    pdb_140f3e010(&pppppppbStack_148);
    uStack_170 = auStack_1e8._0_8_;
    uStack_168 = auStack_1e8._8_8_;
    uStack_298 = auStack_1e8._0_8_;
    uStack_290 = auStack_1e8._8_8_;
    pppppppbStack_2a8 = (byte *******)auStack_1f8._0_8_;
    uStack_2a0 = stack0xfffffffffffffe10;
    pppppppbStack_2b8 = pppppppbStack_208;
    pppppppbStack_2b0 = pppppppbStack_200;
    pppppppbStack_2c0 = (byte *******)CONCAT44(uStack_12c,uStack_130);
    pppppppbStack_2d8 = pppppppbStack_148;
    pppppppbStack_2d0 = pppppppbStack_140;
    pppppppbStack_2c8 = pppppppbStack_138;
    pppppppbStack_180 = (byte *******)auStack_1f8._0_8_;
    uStack_178 = stack0xfffffffffffffe10;
    pppppppbStack_190 = pppppppbStack_208;
    pppppppbStack_188 = pppppppbStack_200;
    pppppppbStack_1a0 = pppppppbStack_138;
    uStack_198 = (byte *******)CONCAT44(uStack_12c,uStack_130);
    pppppppbStack_1b0 = pppppppbStack_148;
    pppppppbStack_1a8 = pppppppbStack_140;
    auStack_1e8 = (undefined1  [16])0x0;
    auStack_1d0 = (undefined1  [16])0x0;
    auStack_160 = (undefined1  [16])0x0;
    pppppppbStack_208 = (byte *******)0x0;
    _auStack_1f8 = ZEXT816(8) << 0x40;
    uStack_1d8 = (byte *******)0x8;
    uStack_1c0 = 8;
    puStack_1b8 = (undefined *)0x0;
    pppppppbStack_150 = (byte *******)&pppppppbStack_248;
    pdb_141da3690(&pppppppbStack_2d8,&pppppppbStack_208);
    pppppppbVar59 = pppppppbStack_2d0;
    pppppppbVar57 = pppppppbStack_2d8;
    pppppppbVar73 = pppppppbStack_2d0 + (longlong)pppppppbStack_2c8 * 7;
    pppppppbStack_248 = pppppppbStack_2d0;
    pppppppbStack_240 = pppppppbStack_2d0;
    pppppppbStack_238 = pppppppbStack_2d8;
    pppppppbVar50 = pppppppbStack_2d0;
    pppppppbVar52 = pppppppbStack_2d0;
    pppppppbStack_230 = pppppppbVar73;
    pppppppbStack_f8 = pppppppbVar49;
    pppppppbStack_f0 = pppppppbVar51;
    if (pppppppbStack_2c8 != (byte *******)0x0) {
      do {
        pppppppbVar65 = (byte *******)auStack_308;
        pppppppbVar52 = pppppppbVar50 + 7;
        pppppppbStack_e8 = (byte *******)*pppppppbVar50;
        pppppppbStack_240 = pppppppbVar52;
        if (SBORROW8(0,(longlong)pppppppbStack_e8)) break;
        pppppppbStack_b0 = (byte *******)pppppppbVar50[1];
        ppppppbVar64 = pppppppbVar50[2];
        pppppppbStack_e0 = (byte *******)pppppppbVar50[3];
        pppppppbStack_100 = (byte *******)pppppppbVar50[4];
        pppppppbVar71 = (byte *******)pppppppbVar50[5];
        pppppppbVar50 = (byte *******)pppppppbVar50[6];
        uStack_ba = 1;
        pdb_140d8a9d0(pppppppbVar65,pppppppbVar51,pppppppbVar49,pppppppbStack_100,pppppppbVar71);
        if (pppppppbStack_390 == (byte *******)0x0) {
          pppppppbVar51 = (byte *******)0x0;
LAB_140d8c1e3:
          pppppppbStack_208 = pppppppbStack_e8;
          pppppppbStack_200 = pppppppbStack_b0;
          stack0xfffffffffffffe10 = (byte *******)&pppppppbStack_390;
          auStack_1f8._0_8_ = ppppppbVar64;
          auStack_1e8._8_8_ = 0;
          auStack_1e8._0_8_ = pppppppbVar51;
          pppppppbStack_2d8 = (byte *******)0x1;
          pppppppbStack_2d0 = pppppppbStack_e0;
          pppppppbStack_2c8 = pppppppbStack_100;
          uStack_ba = 0;
          pppppppbStack_2c0 = pppppppbVar71;
          pppppppbStack_2b8 = pppppppbVar50;
          uStack_1d8 = pppppppbVar65;
          pdb_141da53b0(&pppppppbStack_148,&pppppppbStack_208,&pppppppbStack_2d8);
          pppppppbVar51 = pppppppbStack_f0;
          pppppppbVar49 = pppppppbStack_f8;
        }
        else {
          pppppppbStack_b8 = pppppppbStack_388;
          pppppppbVar51 = pppppppbStack_390;
          pppppppbStack_c8 = pppppppbVar52;
LAB_140d8c04a:
          pppppppbStack_d8 = (byte *******)(ulonglong)*(ushort *)((longlong)pppppppbVar51 + 0x2ca);
          lVar55 = (ulonglong)((uint)*(ushort *)((longlong)pppppppbVar51 + 0x2ca) * 8) * 3;
          pppppppbVar75 = (byte *******)0xffffffffffffffff;
          pppppppbVar49 = pppppppbVar51 + 1;
          pppppppbVar70 = pppppppbVar51 + 0x21;
          do {
            pppppppbVar69 = pppppppbVar70;
            pppppppbVar65 = pppppppbStack_d8;
            pppppppbVar52 = pppppppbStack_c8;
            if (lVar55 == 0) goto joined_r0x000140d8c109;
            ppppppbVar78 = pppppppbVar49[2];
            ppppppbVar63 = ppppppbVar78;
            if (ppppppbVar64 < ppppppbVar78) {
              ppppppbVar63 = ppppppbVar64;
            }
            iVar46 = pub_142e32750(pppppppbStack_b0,pppppppbVar49[1],ppppppbVar63);
            lVar66 = (longlong)ppppppbVar64 - (longlong)ppppppbVar78;
            if (iVar46 != 0) {
              lVar66 = (longlong)iVar46;
            }
            pppppppbVar70 = pppppppbVar69 + 5;
            pppppppbVar75 = (byte *******)((longlong)pppppppbVar75 + 1);
            lVar55 = lVar55 + -0x18;
            pppppppbVar49 = pppppppbVar49 + 3;
          } while ((char)((0 < lVar66) - (lVar66 < 0)) == '\x01');
          pppppppbVar65 = pppppppbVar75;
          pppppppbVar52 = pppppppbStack_c8;
          if (0 < lVar66 != lVar66 < 0) {
joined_r0x000140d8c109:
            pppppppbStack_c8 = pppppppbVar52;
            if (pppppppbStack_b8 != (byte *******)0x0) goto LAB_140d8c10f;
            goto LAB_140d8c1e3;
          }
          if (pppppppbStack_e8 != (byte *******)0x0) {
            pub_1406abac0((byte *)pppppppbStack_b0,(ulonglong)pppppppbStack_e8,1);
          }
          pppppppbVar52 = pppppppbStack_c8;
          pppppppbVar51 = pppppppbStack_f0;
          pppppppbVar49 = pppppppbStack_f8;
          ppppppbVar64 = pppppppbVar69[1];
          ppppppbVar78 = pppppppbVar69[2];
          pppppppbVar75 = (byte *******)pppppppbVar69[3];
          pppppppbVar65 = (byte *******)pppppppbVar69[4];
          ppppppbVar63 = *pppppppbVar70;
          pppppppbVar69[1] = (byte ******)0x1;
          pppppppbVar69[2] = (byte ******)pppppppbStack_e0;
          pppppppbVar69[3] = (byte ******)pppppppbStack_100;
          pppppppbVar69[4] = (byte ******)pppppppbVar71;
          *pppppppbVar70 = (byte ******)pppppppbVar50;
          if (ppppppbVar64 == (byte ******)0x2) goto LAB_140d8bfa1;
          if (ppppppbVar64 != (byte ******)0x0) {
            if (ppppppbVar78 == (byte ******)0x0) goto LAB_140d8bfa1;
LAB_140d8bf93:
            uVar61 = 1;
            goto LAB_140d8bf9c;
          }
          if (!SBORROW8(0,(longlong)ppppppbVar78)) {
            if (ppppppbVar78 != (byte ******)0x0) goto LAB_140d8bf93;
            goto LAB_140d8bfa1;
          }
          pppppppbStack_b0 = pppppppbVar65;
          if (ppppppbVar63 != (byte ******)0x0) {
            pppppppbVar65 = pppppppbVar65 + 1;
            do {
              if (pppppppbVar65[-1] != (byte ******)0x0) {
                pub_1406abac0((byte *)*pppppppbVar65,(ulonglong)pppppppbVar65[-1],1);
              }
              pppppppbVar65 = pppppppbVar65 + 4;
              ppppppbVar63 = (byte ******)((longlong)ppppppbVar63 + -1);
            } while (ppppppbVar63 != (byte ******)0x0);
          }
          if (pppppppbVar75 != (byte *******)0x0) {
            ppppppbVar78 = (byte ******)((longlong)pppppppbVar75 << 5);
            uVar61 = 8;
            pppppppbVar75 = pppppppbStack_b0;
LAB_140d8bf9c:
            pub_1406abac0((byte *)pppppppbVar75,(ulonglong)ppppppbVar78,uVar61);
          }
        }
LAB_140d8bfa1:
        pppppppbVar50 = pppppppbVar52;
      } while (pppppppbVar52 != pppppppbVar73);
    }
    uVar61 = (ulonglong)((longlong)pppppppbVar73 - (longlong)pppppppbVar52) / 0x38;
    if (pppppppbVar73 != pppppppbVar52) {
      pppppppbVar52 = pppppppbVar52 + 4;
      do {
        if (pppppppbVar52[-4] != (byte ******)0x0) {
          pub_1406abac0((byte *)pppppppbVar52[-3],(ulonglong)pppppppbVar52[-4],1);
        }
        if (pppppppbVar52[-1] != (byte ******)0x0) {
          pub_1406abac0((byte *)*pppppppbVar52,(ulonglong)pppppppbVar52[-1],1);
        }
        pppppppbVar52 = pppppppbVar52 + 7;
        uVar61 = uVar61 - 1;
      } while (uVar61 != 0);
    }
    if (pppppppbVar57 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbVar59,(longlong)pppppppbVar57 * 0x38,8);
    }
    if ((byte ******)auStack_338._0_8_ != (byte ******)0x0) {
      pub_1406abac0((byte *)uVar7,auStack_338._0_8_,1);
    }
    pdb_140f3e9e0(auStack_378,pppppppbVar51,pppppppbVar49,&UNK_1431e54b0,8);
    pppppppbStack_2d8 = (byte *******)0x0;
    pppppppbStack_2d0 = (byte *******)0x8;
    pppppppbStack_2c8 = (byte *******)0x0;
    uStack_b9 = 1;
    pdb_140d8fc60(pbStack_370,uStack_368,pbStack_370,uStack_368,&pppppppbStack_2d8);
    register0x00000010 = pppppppbStack_2d0 + (longlong)pppppppbStack_2c8 * 7;
    pppppppbStack_208 = pppppppbStack_2d0;
    pppppppbStack_200 = pppppppbStack_2d0;
    auStack_1f8._0_8_ = pppppppbStack_2d8;
    uStack_b9 = 0;
    pdb_141da5740(&pppppppbStack_148,&pppppppbStack_208);
    auStack_1d0._8_8_ = pppppppbStack_138;
    pppppppbVar52 = pppppppbStack_148;
    pppppppbVar57 = pppppppbStack_140;
    pppppppbVar59 = pppppppbStack_148;
    if (pppppppbStack_148 == (byte *******)0x0) {
      auStack_1d0._8_8_ = (byte *******)0x0;
      pppppppbVar52 = pppppppbStack_3f0;
      pppppppbVar57 = pppppppbStack_400;
      pppppppbVar59 = pppppppbStack_3f8;
    }
    pppppppbStack_208 = (byte *******)CONCAT71(0,pppppppbStack_148 != (byte *******)0x0);
    pppppppbVar54 = pppppppbVar54 + 0x16;
    pppppppbStack_200 = (byte *******)0x0;
    stack0xfffffffffffffe10 = pppppppbVar57;
    auStack_1f8._0_8_ = pppppppbVar59;
    auStack_1e8._8_8_ = 0;
    auStack_1e8._0_8_ = pppppppbStack_208;
    auStack_1d0._0_8_ = pppppppbVar57;
    pppppppbVar50 = (byte *******)auStack_1d0._8_8_;
    uStack_1d8 = pppppppbVar52;
    while( true ) {
      pppppppbVar73 = pppppppbStack_208;
      if (pppppppbVar50 == (byte *******)0x0) break;
      auStack_1d0._8_8_ = (byte *)((longlong)pppppppbVar50 + -1);
      if ((int)pppppppbStack_208 != 1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1433d95b8);
      }
      if (pppppppbStack_200 == (byte *******)0x0) {
        pppppppbStack_200 = (byte *******)auStack_1f8._0_8_;
        if (stack0xfffffffffffffe10 != (byte *******)0x0) {
          uVar61 = (ulonglong)stack0xfffffffffffffe10;
          if (((ulonglong)stack0xfffffffffffffe10 & 7) != 0) {
            uVar61 = 0;
            do {
              auStack_1f8._0_8_ = *(byte *******)(auStack_1f8._0_8_ + 0x278);
              uVar61 = uVar61 + 1;
            } while (((ulonglong)stack0xfffffffffffffe10 & 7) != uVar61);
            pppppppbStack_200 = (byte *******)auStack_1f8._0_8_;
            uVar61 = (longlong)stack0xfffffffffffffe10 - uVar61;
          }
          if (7 < stack0xfffffffffffffe10) {
            do {
              pppppppbStack_200 =
                   *(byte ********)
                    (*(longlong *)(pppppppbStack_200[0x4f][0x4f][0x4f][0x4f][0x4f][0x4f] + 0x278) +
                    0x278);
              uVar61 = uVar61 - 8;
            } while (uVar61 != 0);
          }
        }
        pppppppbStack_208 = (byte *******)0x1;
        _auStack_1f8 = (undefined1  [16])0x0;
      }
      pppppppbStack_138 = stack0xfffffffffffffe10;
      pppppppbStack_148 = pppppppbStack_200;
      pppppppbStack_140 = (byte *******)auStack_1f8._0_8_;
      pdb_1403b82f0(&pppppppbStack_2d8,&pppppppbStack_148);
      if (pppppppbStack_2d8 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1433d9588);
      }
      pppppppbStack_200 = pppppppbStack_2d8;
      stack0xfffffffffffffe10 = pppppppbStack_2c8;
      auStack_1f8._0_8_ = pppppppbStack_2d0;
      if (pppppppbStack_2c0 == (byte *******)0x0) goto LAB_140d8cad0;
      pppppppbStack_c8 = (byte *******)pppppppbStack_2c0[(longlong)pppppppbStack_2b0 * 3 + 0x2e];
      pppppppbVar50 = (byte *******)pppppppbStack_2c0[(longlong)pppppppbStack_2b0 * 3 + 0x2f];
      pppppppbVar73 = (byte *******)pppppppbStack_2c0[(longlong)pppppppbStack_2b0 * 4];
      pppppppbVar65 = (byte *******)(pppppppbStack_2c0 + (longlong)pppppppbStack_2b0 * 4)[1];
      ppppppbVar64 = pppppppbStack_2c0[(longlong)pppppppbStack_2b0 * 4 + 2];
      ppppppbVar78 = (pppppppbStack_2c0 + (longlong)pppppppbStack_2b0 * 4 + 2)[1];
      if (SBORROW8(0,(longlong)pppppppbStack_2c0[(longlong)pppppppbStack_2b0 * 3 + 0x2d]))
      goto LAB_140d8cad0;
      pppppppbStack_e0 = (byte *******)pppppppbStack_2c0[(longlong)pppppppbStack_2b0 * 3 + 0x2d];
      pauVar77 = (undefined1 (*) [16])(pppppppbStack_2c0 + (longlong)pppppppbStack_2b0 * 4);
      lVar55 = *(longlong *)((longlong)pauVar77[1] + 8);
      auStack_338 = *pauVar77;
      uStack_328 = *(byte ********)pauVar77[1];
      uStack_320 = (byte *******)lVar55;
      pppppppbStack_100 = *(byte ********)*pauVar77;
      pppppppbVar71 = *(byte ********)pauVar77[1];
      if (!SBORROW8(0,(longlong)*(byte ********)*pauVar77)) {
        lVar55 = 1;
        pppppppbVar71 = (byte *******)auStack_338;
      }
      pppppppbStack_b0 = pppppppbVar71 + lVar55 * 4;
      for (; pppppppbStack_b8 = pppppppbVar71, pppppppbVar71 != pppppppbStack_b0;
          pppppppbVar71 = pppppppbVar71 + 4) {
        pdb_140d8a9d0(auStack_308,pppppppbVar51,pppppppbVar49,pppppppbVar71[1],pppppppbVar71[2]);
      }
      if (pppppppbStack_390 == (byte *******)0x0) {
        pppppppbVar71 = (byte *******)0x0;
LAB_140d8c892:
        pppppppbStack_2d8 = pppppppbStack_e0;
        pppppppbStack_2d0 = pppppppbStack_c8;
        pppppppbStack_2c0 = (byte *******)&pppppppbStack_390;
        pppppppbStack_2b0 = (byte *******)0x0;
        pppppppbStack_148 = (byte *******)0x0;
        uStack_488 = SUB84(ppppppbVar64,0);
        uStack_484 = (undefined4)((ulonglong)ppppppbVar64 >> 0x20);
        uStack_480 = SUB84(ppppppbVar78,0);
        uStack_47c = (undefined4)((ulonglong)ppppppbVar78 >> 0x20);
        uStack_130 = uStack_488;
        uStack_12c = uStack_484;
        uStack_128 = uStack_480;
        uStack_124 = uStack_47c;
        pppppppbStack_2c8 = pppppppbVar50;
        pppppppbStack_2b8 = pppppppbVar71;
        pppppppbStack_2a8 = pppppppbVar49;
        pppppppbStack_140 = pppppppbVar73;
        pppppppbStack_138 = pppppppbVar65;
        pdb_141da53b0(&pppppppbStack_248,&pppppppbStack_2d8);
        pppppppbVar49 = pppppppbStack_f8;
      }
      else {
        pppppppbStack_d8 = pppppppbStack_388;
        pppppppbVar71 = pppppppbStack_390;
        while( true ) {
          pppppppbStack_e8 = (byte *******)(ulonglong)*(ushort *)((longlong)pppppppbVar71 + 0x2ca);
          lVar55 = (ulonglong)((uint)*(ushort *)((longlong)pppppppbVar71 + 0x2ca) * 8) * 3;
          pppppppbVar75 = (byte *******)0xffffffffffffffff;
          pppppppbVar51 = pppppppbVar71 + 1;
          pppppppbVar70 = pppppppbVar71 + 0x1d;
          do {
            pppppppbVar69 = pppppppbVar70;
            pppppppbVar49 = pppppppbStack_e8;
            if (lVar55 == 0) goto LAB_140d8c7b7;
            ppppppbVar63 = pppppppbVar51[2];
            iVar46 = pub_142e32750(pppppppbStack_c8,pppppppbVar51[1]);
            lVar66 = (longlong)pppppppbVar50 - (longlong)ppppppbVar63;
            if (iVar46 != 0) {
              lVar66 = (longlong)iVar46;
            }
            pppppppbVar70 = pppppppbVar69 + 5;
            pppppppbVar75 = (byte *******)((longlong)pppppppbVar75 + 1);
            lVar55 = lVar55 + -0x18;
            pppppppbVar51 = pppppppbVar51 + 3;
          } while ((char)((0 < lVar66) - (lVar66 < 0)) == '\x01');
          pppppppbVar49 = pppppppbVar75;
          if (0 < lVar66 == lVar66 < 0) break;
LAB_140d8c7b7:
          pppppppbVar51 = pppppppbStack_f0;
          if (pppppppbStack_d8 == (byte *******)0x0) goto LAB_140d8c892;
          pppppppbVar71 = (byte *******)pppppppbVar71[(longlong)((longlong)pppppppbVar49 + 0x5a)];
          pppppppbStack_d8 = (byte *******)((longlong)pppppppbStack_d8 + -1);
        }
        if (pppppppbStack_e0 != (byte *******)0x0) {
          pub_1406abac0((byte *)pppppppbStack_c8,(ulonglong)pppppppbStack_e0,1);
        }
        pppppppbVar51 = pppppppbStack_f0;
        pppppppbVar49 = pppppppbStack_f8;
        ppppppbVar63 = *pppppppbVar70;
        arg1 = pppppppbVar69[6];
        ppppppbVar5 = pppppppbVar69[7];
        arg0 = pppppppbVar69[8];
        ppppppbVar72 = pppppppbVar69[9];
        *pppppppbVar70 = (byte ******)0x0;
        pppppppbVar69[6] = (byte ******)pppppppbVar73;
        pppppppbVar69[7] = (byte ******)pppppppbVar65;
        pppppppbVar69[8] = ppppppbVar64;
        pppppppbVar69[9] = ppppppbVar78;
        if (ppppppbVar63 == (byte ******)0x2) goto LAB_140d8c4c3;
        if (ppppppbVar63 != (byte ******)0x0) {
          if (arg1 == (byte ******)0x0) goto LAB_140d8c4c3;
LAB_140d8c4b5:
          uVar61 = 1;
          arg0 = ppppppbVar5;
          goto LAB_140d8c4be;
        }
        if (!SBORROW8(0,(longlong)arg1)) {
          if (arg1 != (byte ******)0x0) goto LAB_140d8c4b5;
          goto LAB_140d8c4c3;
        }
        if (ppppppbVar72 != (byte ******)0x0) {
          ppppppbVar64 = arg0 + 1;
          do {
            if (ppppppbVar64[-1] != (byte *****)0x0) {
              pub_1406abac0((byte *)*ppppppbVar64,(ulonglong)ppppppbVar64[-1],1);
            }
            ppppppbVar64 = ppppppbVar64 + 4;
            ppppppbVar72 = (byte ******)((longlong)ppppppbVar72 + -1);
          } while (ppppppbVar72 != (byte ******)0x0);
        }
        if (ppppppbVar5 != (byte ******)0x0) {
          arg1 = (byte ******)((longlong)ppppppbVar5 << 5);
          uVar61 = 8;
LAB_140d8c4be:
          pub_1406abac0((byte *)arg0,(ulonglong)arg1,uVar61);
        }
      }
LAB_140d8c4c3:
      pppppppbVar50 = (byte *******)auStack_1d0._8_8_;
    }
    pppppppbStack_208 = (byte *******)0x0;
    if (pppppppbVar73 == (byte *******)0x1) {
      if (pppppppbStack_200 == (byte *******)0x0) {
        pppppppbVar51 = (byte *******)auStack_1f8._0_8_;
        if (stack0xfffffffffffffe10 != (byte *******)0x0) {
          uVar61 = (ulonglong)stack0xfffffffffffffe10;
          if (((ulonglong)stack0xfffffffffffffe10 & 7) != 0) {
            uVar61 = 0;
            do {
              pppppppbVar51 = (byte *******)pppppppbVar51[0x4f];
              uVar61 = uVar61 + 1;
            } while (((ulonglong)stack0xfffffffffffffe10 & 7) != uVar61);
            uVar61 = (longlong)stack0xfffffffffffffe10 - uVar61;
          }
          if (7 < stack0xfffffffffffffe10) {
            do {
              pppppppbVar51 =
                   *(byte ********)
                    (*(longlong *)(pppppppbVar51[0x4f][0x4f][0x4f][0x4f][0x4f][0x4f] + 0x278) +
                    0x278);
              uVar61 = uVar61 - 8;
            } while (uVar61 != 0);
          }
        }
        pppppppbVar50 = (byte *******)pppppppbVar51[0x2c];
        pppppppbVar49 = (byte *******)0x0;
      }
      else {
        pppppppbVar50 = (byte *******)pppppppbStack_200[0x2c];
        pppppppbVar51 = pppppppbStack_200;
        pppppppbVar49 = (byte *******)auStack_1f8._0_8_;
      }
      while (pppppppbVar73 = pppppppbVar50, pppppppbVar73 != (byte *******)0x0) {
        bVar79 = pppppppbVar49 == (byte *******)0x0;
        pppppppbVar49 = (byte *******)((longlong)pppppppbVar49 + 1);
        uVar61 = 0x2d8;
        if (bVar79) {
          uVar61 = 0x278;
        }
        pub_1406abac0((byte *)pppppppbVar51,uVar61,8);
        pppppppbVar51 = pppppppbVar73;
        pppppppbVar50 = (byte *******)pppppppbVar73[0x2c];
      }
      uVar61 = 0x2d8;
      if (pppppppbVar49 == (byte *******)0x0) {
        uVar61 = 0x278;
      }
      pub_1406abac0((byte *)pppppppbVar51,uVar61,8);
    }
LAB_140d8cad0:
    pdb_141da0770(&pppppppbStack_208);
    param_2 = auStack_378;
    pppppppbStack_400 = pppppppbVar57;
    pppppppbStack_3f8 = pppppppbVar59;
    pppppppbStack_3f0 = pppppppbVar52;
    if (auStack_378 != (undefined1  [8])0x0) {
      pub_1406abac0(pbStack_370,(ulonglong)auStack_378,1);
    }
  }
  lVar55 = 0;
LAB_140d8cfa0:
  if (lVar55 == 0x20) {
    if ((ppppppbVar4 != (byte ******)0x0) && (2 < *_DAT_143ca8e90)) {
      auStack_338._0_8_ = ppppppbVar4;
      pppppppbStack_248 = uStack_2f0;
      pppppppbStack_148 = pppppppbVar49;
      pppppppbStack_2d8 = (byte *******)auStack_338;
      pppppppbStack_2d0 = (byte *******)pdb_140f72a40;
      pppppppbStack_2c8 = (byte *******)&pppppppbStack_248;
      pppppppbStack_2c0 = (byte *******)pdb_140f72a40;
      pppppppbStack_2b8 = (byte *******)&pppppppbStack_148;
      pppppppbStack_2b0 = (byte *******)pdb_140f72a40;
      pppppppbStack_208 = (byte *******)0x0;
      pppppppbStack_200 = (byte *******)&UNK_1431e5105;
      _auStack_1f8 = ZEXT816(0x10);
      auStack_1e8._8_8_ = 0x1d;
      auStack_1e8._0_8_ = &UNK_1431e50e7;
      uStack_1d8 = (byte *******)0x3;
      auStack_1d0._8_8_ = 0x10;
      auStack_1d0._0_8_ = &UNK_1431e5105;
      uStack_1c0 = 0x23e00000001;
      puStack_1b8 = &UNK_1431e5290;
      pppppppbStack_1b0 = (byte *******)&pppppppbStack_2d8;
      uStack_a2 = 1;
      param_2 = (undefined1  [8])&pppppppbStack_208;
      pdb_140f332f0(&uStack_c9);
    }
    LOCK();
    bVar79 = _DAT_143ca48d0 == 0;
    if (bVar79) {
      _DAT_143ca48d0 = 8;
    }
    UNLOCK();
    if (!bVar79) {
      uStack_a2 = 1;
      pdb_142dbc1f0(&DAT_143ca48d0);
    }
    uStack_a2 = 1;
    pdb_140e9a150(&DAT_143ca48d0);
    uStack_a2 = 1;
    pdb_140e9a150(0x143ca48d1);
    uStack_a5 = 1;
    plVar48 = (longlong *)pdb_140f3bda0();
    if ((char)plVar48[2] == '\x01') {
      lStack_358 = *plVar48;
      param_2 = (undefined1  [8])plVar48[1];
    }
    else {
      uStack_a5 = 1;
      lStack_358 = pdb_140f4fd10();
      *plVar48 = lStack_358;
      plVar48[1] = (longlong)param_2;
      *(undefined1 *)(plVar48 + 2) = 1;
    }
    *plVar48 = lStack_358 + 1;
    uStack_368 = uVar60;
    pppppppbStack_360 = pppppppbVar62;
    _auStack_378 = auVar84;
    pppppppbStack_b0 = (byte *******)_DAT_143ca48d8;
    pppppppbStack_f0 = (byte *******)&DAT_143ca48f0;
    if (SBORROW8(0,(longlong)_DAT_143ca48d8)) {
      pppppppbStack_f0 = (byte *******)auStack_378;
    }
    uStack_a7 = 1;
    pppppppbStack_350 = (byte *******)param_2;
    plVar48 = (longlong *)pdb_140f3bda0();
    if ((char)plVar48[2] == '\x01') {
      uStack_318 = *plVar48;
      param_2 = (undefined1  [8])plVar48[1];
    }
    else {
      uStack_a7 = 1;
      uStack_318 = pdb_140f4fd10();
      *plVar48 = uStack_318;
      plVar48[1] = (longlong)param_2;
      *(undefined1 *)(plVar48 + 2) = 1;
    }
    *plVar48 = uStack_318 + 1;
    uStack_328 = (byte *******)uVar60;
    uStack_320 = pppppppbVar62;
    auStack_338 = auVar84;
    uStack_310 = (byte *******)param_2;
    pauVar74 = (undefined1 (*) [16])*pppppppbStack_f0;
    pauVar77 = pauVar74 + 1;
    auVar84 = *pauVar74;
    pppppppbVar67 = (byte *******)&DAT_143ca4908;
    if (SBORROW8(0,(longlong)pppppppbStack_b0)) {
      pppppppbVar67 = (byte *******)&pppppppbStack_360;
    }
    pppppppbVar67 = (byte *******)*pppppppbVar67;
    uVar68 = ~(uint)(ushort)((ushort)(SUB161(auVar84 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar84 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar84 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar84 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar84 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar84 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar84 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar84 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar84 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar84 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar84 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar84 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar84 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar84 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar84 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar84[0xf] >> 7) << 0xf);
LAB_140d8d2c0:
    do {
      if (pppppppbVar67 == (byte *******)0x0) {
        pauVar77 = (undefined1 (*) [16])(auStack_308._0_8_ + 0x10);
        auVar84 = *(undefined1 (*) [16])auStack_308._0_8_;
        uVar68 = ~(uint)(ushort)((ushort)(SUB161(auVar84 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar84 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar84 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar84 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar84 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar84 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar84 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar84 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar84 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar84 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar84 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar84 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar84 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar84 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar84 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar84[0xf] >> 7) << 0xf);
        pppppppbStack_e8 = (byte *******)(longlong *)0x143ca4910;
        if (SBORROW8(0,(longlong)pppppppbStack_b0)) {
          pppppppbStack_e8 = (byte *******)&lStack_358;
        }
        pppppppbVar67 = uStack_2f0;
        pauVar74 = (undefined1 (*) [16])auStack_308._0_8_;
LAB_140d8d610:
        do {
          pppppppbVar62 = pppppppbStack_2e0;
          uVar60 = uStack_2f8;
          if (pppppppbVar67 == (byte *******)0x0) {
            ppppppbVar4 = pppppppbStack_340[2];
            ppppppbVar64 = *pppppppbStack_340;
            ppppppbVar78 = pppppppbStack_340[1];
            uVar7 = auStack_308._0_8_;
            uVar76 = auStack_308._8_8_;
            uVar40 = (undefined4)uStack_2f0;
            uVar41 = uStack_2f0._4_4_;
            uVar42 = (undefined4)uStack_2e8;
            uVar43 = uStack_2e8._4_4_;
            if (!SBORROW8(0,(longlong)_DAT_143ca48d8)) {
              pdb_141da1890(&DAT_143ca48d8);
            }
            _DAT_143ca4928 = pppppppbStack_388;
            _DAT_143ca4930 = pppppppbVar49;
            _DAT_143ca4918 = pppppppbVar62;
            _DAT_143ca4920 = pppppppbVar51;
            uRam0000000143ca4900 = uVar60;
            _DAT_143ca4908 = uVar40;
            uRam0000000143ca490c = uVar41;
            uRam0000000143ca4910 = uVar42;
            uRam0000000143ca4914 = uVar43;
            _DAT_143ca48f8 = uVar76;
            _DAT_143ca48f0 = (byte ******)uVar7;
            _DAT_143ca48d8 = ppppppbVar64;
            _DAT_143ca48e0 = ppppppbVar78;
            _DAT_143ca48e8 = ppppppbVar4;
            *(undefined4 *)(param_1 + 4) = (undefined4)uStack_318;
            *(undefined4 *)((longlong)param_1 + 0x24) = uStack_318._4_4_;
            *(undefined4 *)(param_1 + 5) = (undefined4)uStack_310;
            *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_310._4_4_;
            *(undefined4 *)(param_1 + 2) = (undefined4)uStack_328;
            *(undefined4 *)((longlong)param_1 + 0x14) = uStack_328._4_4_;
            *(undefined4 *)(param_1 + 3) = (undefined4)uStack_320;
            *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_320._4_4_;
            *param_1 = auStack_338._0_8_;
            param_1[1] = auStack_338._8_8_;
            uStack_a5 = 0;
            pdb_140ca7410(auStack_378,&lStack_358,0x38,0x10);
            uStack_a2 = 0;
            pdb_140e9a350(&DAT_143ca48d0);
            uStack_a2 = 0;
            pdb_140e9a350();
            LOCK();
            bVar79 = _DAT_143ca48d0 == 8;
            lVar55 = _DAT_143ca48d0;
            if (bVar79) {
              _DAT_143ca48d0 = 0;
              lVar55 = 8;
            }
            UNLOCK();
            if (!bVar79) {
              uStack_a2 = 0;
              lVar55 = pdb_142dbca40(&DAT_143ca48d0,0);
            }
            return lVar55;
          }
          if ((short)uVar68 == 0) {
            do {
              auVar84 = *pauVar77;
              pauVar74 = pauVar74 + -0x38;
              pauVar77 = pauVar77 + 1;
              uVar68 = (ushort)((ushort)(SUB161(auVar84 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar84 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar84 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar84 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar84 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar84 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar84 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar84 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar84 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar84 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar84 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar84 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar84 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar84 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar84 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar84[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar68 == 0);
          }
          uVar9 = 0;
          for (uVar47 = uVar68; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          uVar68 = uVar68 - 1 & uVar68;
          lVar55 = (ulonglong)uVar9 * -0x38;
          pppppppbVar67 = (byte *******)((longlong)pppppppbVar67 + -1);
          pppppppbVar62 = (byte *******)((longlong)pauVar74 + lVar55 + -0x38);
          pppppppbVar54 = (byte *******)&DAT_143ca4908;
          if (SBORROW8(0,(longlong)pppppppbStack_b0)) {
            pppppppbVar54 = (byte *******)&pppppppbStack_360;
          }
          if (*pppppppbVar54 != (byte ******)0x0) {
            uStack_a1 = 1;
            pppppppbStack_b8 = pppppppbVar62;
            pbVar53 = (byte *)pdb_1400afac0(pppppppbStack_e8);
            puVar58 = (undefined8 *)&DAT_143ca48f8;
            if (SBORROW8(0,(longlong)pppppppbStack_b0)) {
              puVar58 = (undefined8 *)(auStack_378 + 8);
            }
            pppppppbVar54 = (byte *******)*puVar58;
            pppppppbVar52 = (byte *******)*pppppppbStack_f0;
            bVar80 = (byte)((ulonglong)pbVar53 >> 0x39);
            auVar84 = ZEXT216(CONCAT11(bVar80,bVar80));
            auVar84 = pshuflw(auVar84,auVar84,0);
            pppppppbVar57 = (byte *******)0x0;
            while( true ) {
              uVar61 = (ulonglong)pbVar53 & (ulonglong)pppppppbVar54;
              pbVar53 = (byte *)((longlong)pppppppbVar52 + uVar61);
              bVar80 = *pbVar53;
              bVar25 = pbVar53[1];
              bVar26 = pbVar53[2];
              bVar27 = pbVar53[3];
              bVar28 = pbVar53[4];
              bVar29 = pbVar53[5];
              bVar30 = pbVar53[6];
              bVar31 = pbVar53[7];
              bVar32 = pbVar53[8];
              bVar33 = pbVar53[9];
              bVar34 = pbVar53[10];
              bVar35 = pbVar53[0xb];
              bVar36 = pbVar53[0xc];
              bVar37 = pbVar53[0xd];
              bVar38 = pbVar53[0xe];
              bVar39 = pbVar53[0xf];
              auVar83[0] = -(bVar80 == auVar84[0]);
              auVar83[1] = -(bVar25 == auVar84[1]);
              auVar83[2] = -(bVar26 == auVar84[2]);
              auVar83[3] = -(bVar27 == auVar84[3]);
              auVar83[4] = -(bVar28 == auVar84[4]);
              auVar83[5] = -(bVar29 == auVar84[5]);
              auVar83[6] = -(bVar30 == auVar84[6]);
              auVar83[7] = -(bVar31 == auVar84[7]);
              auVar83[8] = -(bVar32 == auVar84[0]);
              auVar83[9] = -(bVar33 == auVar84[1]);
              auVar83[10] = -(bVar34 == auVar84[2]);
              auVar83[0xb] = -(bVar35 == auVar84[3]);
              auVar83[0xc] = -(bVar36 == auVar84[4]);
              auVar83[0xd] = -(bVar37 == auVar84[5]);
              auVar83[0xe] = -(bVar38 == auVar84[6]);
              auVar83[0xf] = -(bVar39 == auVar84[7]);
              uVar45 = (ushort)(SUB161(auVar83 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar83 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar83 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar83 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar83 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar83 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar83 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar83 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar83 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar83 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar83 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar83 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar83 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar83 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar83 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar83[0xf] >> 7) << 0xf;
              pppppppbVar62 = (byte *******)(ulonglong)uVar45;
              if (uVar45 != 0) {
                ppppppbVar4 = *(byte *******)((longlong)pauVar74 + lVar55 + -0x28);
                pppppppbVar59 = pppppppbVar52;
                pppppppbStack_100 = pppppppbVar57;
                pppppppbStack_e0 = pppppppbVar54;
                pppppppbStack_c8 = pppppppbVar67;
                do {
                  uVar9 = 0;
                  for (uVar47 = (uint)pppppppbVar62; (uVar47 & 1) == 0;
                      uVar47 = uVar47 >> 1 | 0x80000000) {
                    uVar9 = uVar9 + 1;
                  }
                  uVar56 = uVar9 + uVar61 & (ulonglong)pppppppbStack_e0;
                  pppppppbVar52 = pppppppbVar59;
                  pppppppbStack_f8 = pppppppbVar62;
                  if ((ppppppbVar4 == pppppppbVar59[uVar56 * -7 + -5]) &&
                     (pppppppbStack_d8 = pppppppbVar59,
                     iVar46 = pub_142e32750(*(undefined8 *)((longlong)pauVar74 + lVar55 + -0x30),
                                            pppppppbVar59[uVar56 * -7 + -6],ppppppbVar4),
                     pppppppbVar52 = pppppppbStack_d8, iVar46 == 0)) {
                    uVar60 = *(undefined8 *)((longlong)pauVar74 + lVar55 + -0x18);
                    uVar7 = *(undefined8 *)((longlong)pauVar74 + lVar55 + -0x10);
                    uStack_a1 = 1;
                    pdb_140f3ddd0(&pppppppbStack_248,pppppppbVar59[uVar56 * -7 + -3],
                                  pppppppbVar59[uVar56 * -7 + -2]);
                    pppppppbVar67 = pppppppbStack_c8;
                    uStack_a1 = 1;
                    pdb_140f3ddd0(&pppppppbStack_148,uVar60,uVar7);
                    if ((pppppppbStack_240 == pppppppbStack_140) &&
                       (((cStack_210 == (char)uStack_110 && (cStack_20f == '\x02')) &&
                        (uStack_110._1_1_ == '\x02')))) {
                      if (((byte)pppppppbStack_138 < 3 == (byte)pppppppbStack_238 < 3) &&
                         (iVar46 = pub_142e32750(pppppppbStack_248,pppppppbStack_148), iVar46 == 0))
                      goto LAB_140d8d610;
                    }
                    uStack_2a0 = CONCAT62(uStack_20e,CONCAT11(cStack_20f,cStack_210));
                    pppppppbStack_2a8 = pppppppbStack_218;
                    pppppppbStack_2b8 = pppppppbStack_228;
                    pppppppbStack_2b0 = pppppppbStack_220;
                    pppppppbStack_2c8 = pppppppbStack_238;
                    pppppppbStack_2c0 = pppppppbStack_230;
                    pppppppbStack_2d8 = pppppppbStack_248;
                    pppppppbStack_2d0 = pppppppbStack_240;
                    uStack_1d8 = (byte *******)CONCAT44(uStack_114,uStack_118);
                    auStack_1d0._4_4_ = uStack_10c;
                    auStack_1d0._0_4_ = uStack_110;
                    auStack_1e8._4_4_ = uStack_124;
                    auStack_1e8._0_4_ = uStack_128;
                    auStack_1e8._8_4_ = uStack_120;
                    auStack_1e8._12_4_ = uStack_11c;
                    auStack_1f8._8_4_ = uStack_130;
                    auStack_1f8._0_8_ = pppppppbStack_138;
                    uStack_1ec = uStack_12c;
                    pppppppbStack_208 = pppppppbStack_148;
                    pppppppbStack_200 = pppppppbStack_140;
                    uStack_a1 = 1;
                    cVar44 = pdb_141daa020(&pppppppbStack_2d8,&pppppppbStack_208);
                    pppppppbVar62 = pppppppbStack_b8;
                    if (cVar44 == '\0') goto LAB_140d8d8fc;
                    goto LAB_140d8d610;
                  }
                  iVar46 = (int)pppppppbStack_f8 + -1;
                  uVar45 = (ushort)iVar46 & (ushort)pppppppbStack_f8;
                  pppppppbVar62 =
                       (byte *******)(ulonglong)CONCAT22((short)((uint)iVar46 >> 0x10),uVar45);
                  pppppppbVar59 = pppppppbVar52;
                  pppppppbVar67 = pppppppbStack_c8;
                  pppppppbVar57 = pppppppbStack_100;
                  pppppppbVar54 = pppppppbStack_e0;
                } while (uVar45 != 0);
              }
              auVar87[0] = -(bVar80 == 0xff);
              auVar87[1] = -(bVar25 == 0xff);
              auVar87[2] = -(bVar26 == 0xff);
              auVar87[3] = -(bVar27 == 0xff);
              auVar87[4] = -(bVar28 == 0xff);
              auVar87[5] = -(bVar29 == 0xff);
              auVar87[6] = -(bVar30 == 0xff);
              auVar87[7] = -(bVar31 == 0xff);
              auVar87[8] = -(bVar32 == 0xff);
              auVar87[9] = -(bVar33 == 0xff);
              auVar87[10] = -(bVar34 == 0xff);
              auVar87[0xb] = -(bVar35 == 0xff);
              auVar87[0xc] = -(bVar36 == 0xff);
              auVar87[0xd] = -(bVar37 == 0xff);
              auVar87[0xe] = -(bVar38 == 0xff);
              auVar87[0xf] = -(bVar39 == 0xff);
              pppppppbVar62 = pppppppbStack_b8;
              if ((((((((((((((((SUB161(auVar87 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar87 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar87 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar87 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar87 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar87 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar87 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar87 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar87 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar87 >> 0x4f,0) & 1) != 0) || (SUB161(auVar87 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar87 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar87 >> 0x67,0) & 1) != 0) || (SUB161(auVar87 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar87 >> 0x77,0) & 1) != 0) || auVar87[0xf] < '\0') break;
              pbVar53 = (byte *)((longlong)pppppppbVar57 + uVar61 + 0x10);
              pppppppbVar57 = pppppppbVar57 + 2;
            }
          }
LAB_140d8d8fc:
          uStack_a1 = 1;
          pdb_140f60be0(&pppppppbStack_208,pppppppbVar62);
          uStack_a1 = 1;
          pdb_1403b0b40(auStack_338,&pppppppbStack_208);
        } while( true );
      }
      if ((short)uVar68 == 0) {
        do {
          auVar84 = *pauVar77;
          pauVar74 = pauVar74 + -0x38;
          pauVar77 = pauVar77 + 1;
          uVar68 = (ushort)((ushort)(SUB161(auVar84 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar84 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar84 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar84 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar84 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar84 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar84 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar84 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar84 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar84 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar84 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar84 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar84 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar84 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar84 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar84[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar68 == 0);
      }
      uVar9 = 0;
      for (uVar47 = uVar68; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      uVar68 = uVar68 - 1 & uVar68;
      lVar55 = (ulonglong)uVar9 * -0x38;
      pppppppbVar67 = (byte *******)((longlong)pppppppbVar67 + -1);
      pppppppbVar62 = (byte *******)((longlong)pauVar74 + lVar55 + -0x38);
      if (uStack_2f0 != (byte *******)0x0) {
        uStack_a1 = 1;
        pppppppbStack_c8 = pppppppbVar62;
        pbVar53 = (byte *)pdb_1400afac0(&uStack_2e8);
        uVar60 = auStack_308._0_8_;
        bVar80 = (byte)((ulonglong)pbVar53 >> 0x39);
        auVar84 = ZEXT216(CONCAT11(bVar80,bVar80));
        auVar84 = pshuflw(auVar84,auVar84,0);
        pppppppbVar54 = (byte *******)0x0;
        pppppppbVar52 = (byte *******)auStack_308._8_8_;
        pppppppbStack_b8 = pppppppbVar67;
        while( true ) {
          pppppppbVar57 = (byte *******)((ulonglong)pbVar53 & (ulonglong)pppppppbVar52);
          pbVar53 = (byte *)((longlong)pppppppbVar57 + uVar60);
          bVar80 = *pbVar53;
          bVar25 = pbVar53[1];
          bVar26 = pbVar53[2];
          bVar27 = pbVar53[3];
          bVar28 = pbVar53[4];
          bVar29 = pbVar53[5];
          bVar30 = pbVar53[6];
          bVar31 = pbVar53[7];
          bVar32 = pbVar53[8];
          bVar33 = pbVar53[9];
          bVar34 = pbVar53[10];
          bVar35 = pbVar53[0xb];
          bVar36 = pbVar53[0xc];
          bVar37 = pbVar53[0xd];
          bVar38 = pbVar53[0xe];
          bVar39 = pbVar53[0xf];
          auVar85[0] = -(bVar80 == auVar84[0]);
          auVar85[1] = -(bVar25 == auVar84[1]);
          auVar85[2] = -(bVar26 == auVar84[2]);
          auVar85[3] = -(bVar27 == auVar84[3]);
          auVar85[4] = -(bVar28 == auVar84[4]);
          auVar85[5] = -(bVar29 == auVar84[5]);
          auVar85[6] = -(bVar30 == auVar84[6]);
          auVar85[7] = -(bVar31 == auVar84[7]);
          auVar85[8] = -(bVar32 == auVar84[0]);
          auVar85[9] = -(bVar33 == auVar84[1]);
          auVar85[10] = -(bVar34 == auVar84[2]);
          auVar85[0xb] = -(bVar35 == auVar84[3]);
          auVar85[0xc] = -(bVar36 == auVar84[4]);
          auVar85[0xd] = -(bVar37 == auVar84[5]);
          auVar85[0xe] = -(bVar38 == auVar84[6]);
          auVar85[0xf] = -(bVar39 == auVar84[7]);
          uVar45 = (ushort)(SUB161(auVar85 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar85 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar85 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar85 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar85 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar85 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar85 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar85 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar85 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar85 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar85 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar85 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar85 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar85 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar85 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar85[0xf] >> 7) << 0xf;
          pppppppbVar67 = (byte *******)(ulonglong)uVar45;
          if (uVar45 != 0) {
            pppppbVar6 = *(byte ******)((longlong)pauVar74 + lVar55 + -0x28);
            pppppppbStack_f8 = pppppppbVar52;
            pppppppbStack_e8 = pppppppbVar57;
            pppppppbStack_e0 = pppppppbVar54;
            do {
              uVar9 = 0;
              for (uVar47 = (uint)pppppppbVar67; (uVar47 & 1) == 0;
                  uVar47 = uVar47 >> 1 | 0x80000000) {
                uVar9 = uVar9 + 1;
              }
              uVar61 = (ulonglong)((longlong)pppppppbStack_e8 + (ulonglong)uVar9) &
                       (ulonglong)pppppppbStack_f8;
              pppppppbStack_d8 = pppppppbVar67;
              if ((pppppbVar6 == *(byte ******)(uVar60 + (uVar61 * -7 + -5) * 8)) &&
                 (iVar46 = pub_142e32750(*(undefined8 *)((longlong)pauVar74 + lVar55 + -0x30),
                                         *(byte ******)(uVar60 + (uVar61 * -7 + -6) * 8),pppppbVar6)
                 , iVar46 == 0)) {
                uVar7 = *(undefined8 *)((longlong)pauVar74 + lVar55 + -0x18);
                uVar76 = *(undefined8 *)((longlong)pauVar74 + lVar55 + -0x10);
                uStack_a1 = 1;
                pdb_140f3ddd0(&pppppppbStack_248,*(byte ******)(uVar60 + (uVar61 * -7 + -3) * 8),
                              *(byte ******)(uVar60 + (uVar61 * -7 + -2) * 8));
                pppppppbVar67 = pppppppbStack_b8;
                uStack_a1 = 1;
                pdb_140f3ddd0(&pppppppbStack_148,uVar7,uVar76);
                if ((pppppppbStack_240 == pppppppbStack_140) &&
                   (((cStack_210 == (char)uStack_110 && (cStack_20f == '\x02')) &&
                    (uStack_110._1_1_ == '\x02')))) {
                  if (((byte)pppppppbStack_138 < 3 == (byte)pppppppbStack_238 < 3) &&
                     (iVar46 = pub_142e32750(pppppppbStack_248,pppppppbStack_148), iVar46 == 0))
                  goto LAB_140d8d2c0;
                }
                uStack_2a0 = CONCAT62(uStack_20e,CONCAT11(cStack_20f,cStack_210));
                pppppppbStack_2a8 = pppppppbStack_218;
                pppppppbStack_2b8 = pppppppbStack_228;
                pppppppbStack_2b0 = pppppppbStack_220;
                pppppppbStack_2c8 = pppppppbStack_238;
                pppppppbStack_2c0 = pppppppbStack_230;
                pppppppbStack_2d8 = pppppppbStack_248;
                pppppppbStack_2d0 = pppppppbStack_240;
                uStack_1d8 = (byte *******)CONCAT44(uStack_114,uStack_118);
                auStack_1d0._4_4_ = uStack_10c;
                auStack_1d0._0_4_ = uStack_110;
                auStack_1e8._4_4_ = uStack_124;
                auStack_1e8._0_4_ = uStack_128;
                auStack_1e8._8_4_ = uStack_120;
                auStack_1e8._12_4_ = uStack_11c;
                auStack_1f8._8_4_ = uStack_130;
                auStack_1f8._0_8_ = pppppppbStack_138;
                uStack_1ec = uStack_12c;
                pppppppbStack_208 = pppppppbStack_148;
                pppppppbStack_200 = pppppppbStack_140;
                uStack_a1 = 1;
                cVar44 = pdb_141daa020(&pppppppbStack_2d8,&pppppppbStack_208);
                pppppppbVar62 = pppppppbStack_c8;
                if (cVar44 == '\0') goto LAB_140d8d58c;
                goto LAB_140d8d2c0;
              }
              iVar46 = (int)pppppppbStack_d8 + -1;
              uVar45 = (ushort)iVar46 & (ushort)pppppppbStack_d8;
              pppppppbVar67 =
                   (byte *******)(ulonglong)CONCAT22((short)((uint)iVar46 >> 0x10),uVar45);
              pppppppbVar57 = pppppppbStack_e8;
              pppppppbVar54 = pppppppbStack_e0;
              pppppppbVar52 = pppppppbStack_f8;
            } while (uVar45 != 0);
          }
          auVar86[0] = -(bVar80 == 0xff);
          auVar86[1] = -(bVar25 == 0xff);
          auVar86[2] = -(bVar26 == 0xff);
          auVar86[3] = -(bVar27 == 0xff);
          auVar86[4] = -(bVar28 == 0xff);
          auVar86[5] = -(bVar29 == 0xff);
          auVar86[6] = -(bVar30 == 0xff);
          auVar86[7] = -(bVar31 == 0xff);
          auVar86[8] = -(bVar32 == 0xff);
          auVar86[9] = -(bVar33 == 0xff);
          auVar86[10] = -(bVar34 == 0xff);
          auVar86[0xb] = -(bVar35 == 0xff);
          auVar86[0xc] = -(bVar36 == 0xff);
          auVar86[0xd] = -(bVar37 == 0xff);
          auVar86[0xe] = -(bVar38 == 0xff);
          auVar86[0xf] = -(bVar39 == 0xff);
          pppppppbVar62 = pppppppbStack_c8;
          pppppppbVar67 = pppppppbStack_b8;
          if ((((((((((((((((SUB161(auVar86 >> 7,0) & 1) != 0 || (SUB161(auVar86 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar86 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar86 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar86 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar86 >> 0x2f,0) & 1) != 0) || (SUB161(auVar86 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar86 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar86 >> 0x47,0) & 1) != 0) || (SUB161(auVar86 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar86 >> 0x57,0) & 1) != 0) || (SUB161(auVar86 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar86 >> 0x67,0) & 1) != 0) || (SUB161(auVar86 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar86 >> 0x77,0) & 1) != 0) || auVar86[0xf] < '\0') break;
          pbVar53 = (byte *)((longlong)pppppppbVar57 + (longlong)pppppppbVar54) + 0x10;
          pppppppbVar54 = pppppppbVar54 + 2;
        }
      }
LAB_140d8d58c:
      uStack_a1 = 1;
      pdb_140f60be0(&pppppppbStack_208,pppppppbVar62);
      uStack_a1 = 1;
      pdb_1403b0b40(auStack_338,&pppppppbStack_208);
    } while( true );
  }
  auStack_378 = (undefined1  [8])(&UNK_1431e5270 + lVar55);
  auStack_338._0_8_ = &UNK_1431e5280 + lVar55;
  pppppppbVar54 = pppppppbStack_f0;
  pppppppbVar52 = pppppppbStack_b8;
  if (uStack_2f0 != (byte *******)0x0) {
    pppppppbStack_d8 = *(byte ********)(&UNK_1431e5270 + lVar55);
    pppppppbStack_c8 = *(byte ********)(&UNK_1431e5278 + lVar55);
    pbVar53 = (byte *)pdb_1400af950(&uStack_2e8);
    uVar7 = auStack_308._0_8_;
    uVar76 = auStack_308._8_8_;
    bVar80 = (byte)((ulonglong)pbVar53 >> 0x39);
    auVar83 = ZEXT216(CONCAT11(bVar80,bVar80));
    auVar83 = pshuflw(auVar83,auVar83,0);
    pppppppbStack_b0 = (byte *******)0x0;
    while( true ) {
      uVar61 = (ulonglong)pbVar53 & uVar76;
      pcVar1 = (char *)(uVar7 + uVar61);
      cVar44 = *pcVar1;
      cVar10 = pcVar1[1];
      cVar11 = pcVar1[2];
      cVar12 = pcVar1[3];
      cVar13 = pcVar1[4];
      cVar14 = pcVar1[5];
      cVar15 = pcVar1[6];
      cVar16 = pcVar1[7];
      cVar17 = pcVar1[8];
      cVar18 = pcVar1[9];
      cVar19 = pcVar1[10];
      cVar20 = pcVar1[0xb];
      cVar21 = pcVar1[0xc];
      cVar22 = pcVar1[0xd];
      cVar23 = pcVar1[0xe];
      cVar24 = pcVar1[0xf];
      auVar81[0] = -(cVar44 == auVar83[0]);
      auVar81[1] = -(cVar10 == auVar83[1]);
      auVar81[2] = -(cVar11 == auVar83[2]);
      auVar81[3] = -(cVar12 == auVar83[3]);
      auVar81[4] = -(cVar13 == auVar83[4]);
      auVar81[5] = -(cVar14 == auVar83[5]);
      auVar81[6] = -(cVar15 == auVar83[6]);
      auVar81[7] = -(cVar16 == auVar83[7]);
      auVar81[8] = -(cVar17 == auVar83[0]);
      auVar81[9] = -(cVar18 == auVar83[1]);
      auVar81[10] = -(cVar19 == auVar83[2]);
      auVar81[0xb] = -(cVar20 == auVar83[3]);
      auVar81[0xc] = -(cVar21 == auVar83[4]);
      auVar81[0xd] = -(cVar22 == auVar83[5]);
      auVar81[0xe] = -(cVar23 == auVar83[6]);
      auVar81[0xf] = -(cVar24 == auVar83[7]);
      uVar45 = (ushort)(SUB161(auVar81 >> 7,0) & 1) | (ushort)(SUB161(auVar81 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar81 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar81 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar81 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar81 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar81 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar81 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar81 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar81 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar81 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar81 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar81 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar81 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar81 >> 0x77,0) & 1) << 0xe | (ushort)(auVar81[0xf] >> 7) << 0xf;
      uVar68 = (uint)uVar45;
      while (uVar45 != 0) {
        uVar9 = 0;
        for (uVar47 = uVar68; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        uVar56 = uVar9 + uVar61 & uVar76;
        if (pppppppbStack_c8 == *(byte ********)(uVar7 + (uVar56 * -7 + -5) * 8)) {
          param_2 = *(undefined1 (*) [8])(uVar7 + (uVar56 * -7 + -6) * 8);
          iVar46 = pub_142e32750(pppppppbStack_d8);
          pppppppbVar54 = pppppppbStack_f0;
          pppppppbVar52 = pppppppbStack_b8;
          if (iVar46 == 0) goto LAB_140d8d020;
        }
        uVar45 = (ushort)(uVar68 - 1) & (ushort)uVar68;
        uVar68 = CONCAT22((short)(uVar68 - 1 >> 0x10),uVar45);
      }
      auVar88[0] = -(cVar44 == -1);
      auVar88[1] = -(cVar10 == -1);
      auVar88[2] = -(cVar11 == -1);
      auVar88[3] = -(cVar12 == -1);
      auVar88[4] = -(cVar13 == -1);
      auVar88[5] = -(cVar14 == -1);
      auVar88[6] = -(cVar15 == -1);
      auVar88[7] = -(cVar16 == -1);
      auVar88[8] = -(cVar17 == -1);
      auVar88[9] = -(cVar18 == -1);
      auVar88[10] = -(cVar19 == -1);
      auVar88[0xb] = -(cVar20 == -1);
      auVar88[0xc] = -(cVar21 == -1);
      auVar88[0xd] = -(cVar22 == -1);
      auVar88[0xe] = -(cVar23 == -1);
      auVar88[0xf] = -(cVar24 == -1);
      if ((((((((((((((((SUB161(auVar88 >> 7,0) & 1) != 0 || (SUB161(auVar88 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar88 >> 0x17,0) & 1) != 0) || (SUB161(auVar88 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar88 >> 0x27,0) & 1) != 0) || (SUB161(auVar88 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar88 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar88 >> 0x3f,0) & 1) != 0) || (SUB161(auVar88 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar88 >> 0x4f,0) & 1) != 0) || (SUB161(auVar88 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar88 >> 0x5f,0) & 1) != 0) || (SUB161(auVar88 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar88 >> 0x6f,0) & 1) != 0) || (SUB161(auVar88 >> 0x77,0) & 1) != 0) ||
          auVar88[0xf] < '\0') break;
      pbVar53 = (byte *)((longlong)pppppppbStack_b0 + uVar61 + 0x10);
      pppppppbStack_b0 = pppppppbStack_b0 + 2;
    }
    pppppppbStack_b0 = *(byte ********)(&UNK_1431e5280 + lVar55);
    pppppbVar6 = *(byte ******)(&UNK_1431e5288 + lVar55);
    pbVar53 = (byte *)pdb_1400af950(&uStack_2e8,pppppppbStack_b0,pppppbVar6);
    bVar80 = (byte)((ulonglong)pbVar53 >> 0x39);
    auVar83 = ZEXT216(CONCAT11(bVar80,bVar80));
    auVar83 = pshuflw(auVar83,auVar83,0);
    pppppppbVar57 = (byte *******)0x0;
    do {
      pbVar2 = (byte *)((longlong)((ulonglong)pbVar53 & uVar76) + uVar7);
      bVar80 = *pbVar2;
      bVar25 = pbVar2[1];
      bVar26 = pbVar2[2];
      bVar27 = pbVar2[3];
      bVar28 = pbVar2[4];
      bVar29 = pbVar2[5];
      bVar30 = pbVar2[6];
      bVar31 = pbVar2[7];
      bVar32 = pbVar2[8];
      bVar33 = pbVar2[9];
      bVar34 = pbVar2[10];
      bVar35 = pbVar2[0xb];
      bVar36 = pbVar2[0xc];
      bVar37 = pbVar2[0xd];
      bVar38 = pbVar2[0xe];
      bVar39 = pbVar2[0xf];
      auVar82[0] = -(bVar80 == auVar83[0]);
      auVar82[1] = -(bVar25 == auVar83[1]);
      auVar82[2] = -(bVar26 == auVar83[2]);
      auVar82[3] = -(bVar27 == auVar83[3]);
      auVar82[4] = -(bVar28 == auVar83[4]);
      auVar82[5] = -(bVar29 == auVar83[5]);
      auVar82[6] = -(bVar30 == auVar83[6]);
      auVar82[7] = -(bVar31 == auVar83[7]);
      auVar82[8] = -(bVar32 == auVar83[0]);
      auVar82[9] = -(bVar33 == auVar83[1]);
      auVar82[10] = -(bVar34 == auVar83[2]);
      auVar82[0xb] = -(bVar35 == auVar83[3]);
      auVar82[0xc] = -(bVar36 == auVar83[4]);
      auVar82[0xd] = -(bVar37 == auVar83[5]);
      auVar82[0xe] = -(bVar38 == auVar83[6]);
      auVar82[0xf] = -(bVar39 == auVar83[7]);
      uVar45 = (ushort)(SUB161(auVar82 >> 7,0) & 1) | (ushort)(SUB161(auVar82 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar82 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar82 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar82 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar82 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar82 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar82 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar82 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar82 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar82 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar82 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar82 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar82 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar82 >> 0x77,0) & 1) << 0xe | (ushort)(auVar82[0xf] >> 7) << 0xf;
      uVar68 = (uint)uVar45;
      pppppppbVar59 = (byte *******)((ulonglong)pbVar53 & uVar76);
      pppppppbVar54 = pppppppbStack_f0;
      pppppppbVar52 = pppppppbStack_b8;
      while (pppppppbStack_f0 = pppppppbVar57, pppppppbStack_b8 = pppppppbVar59, uVar45 != 0) {
        uVar9 = 0;
        for (uVar47 = uVar68; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        uVar61 = (ulonglong)((longlong)pppppppbStack_b8 + (ulonglong)uVar9) & uVar76;
        if ((pppppbVar6 == *(byte ******)(uVar7 + (uVar61 * -7 + -5) * 8)) &&
           (iVar46 = pub_142e32750(pppppppbStack_b0,*(byte ******)(uVar7 + (uVar61 * -7 + -6) * 8),
                                   pppppbVar6), iVar46 == 0)) {
          pppppppbVar54 = *(byte ********)(uVar7 + (uVar61 * -7 + -2) * 8);
          if ((longlong)pppppppbVar54 < 0) {
            uVar76 = 0;
LAB_140d8d02c:
            uStack_a2 = 1;
            pdb_142dc7e2a(uVar76,pppppppbVar54);
            goto LAB_140d8dade;
          }
          pppppppbStack_b0 = pppppppbVar54;
          if (pppppppbVar54 == (byte *******)0x0) {
            pppppppbStack_b8 = (byte *******)0x1;
          }
          else {
            pppppbVar6 = *(byte ******)(uVar7 + (uVar61 * -7 + -3) * 8);
            pdb_14007ee60();
            uVar76 = 1;
            pppppppbVar52 = (byte *******)pub_1406abab0((ulonglong)pppppppbVar54,1);
            if (pppppppbVar52 == (byte *******)0x0) goto LAB_140d8d02c;
            pppppppbStack_b8 = pppppppbVar52;
            pub_142e32760(pppppppbVar52,pppppbVar6,pppppppbVar54);
          }
          pppppppbVar54 = pppppppbStack_c8;
          uVar3 = *(undefined1 *)(uVar7 + (uVar61 * -7 + -1) * 8);
          pppppppbVar52 = pppppppbVar67;
          goto LAB_140d8cd40;
        }
        uVar45 = (ushort)(uVar68 - 1) & (ushort)uVar68;
        uVar68 = CONCAT22((short)(uVar68 - 1 >> 0x10),uVar45);
        pppppppbVar59 = pppppppbStack_b8;
        pppppppbVar57 = pppppppbStack_f0;
        pppppppbVar54 = pppppppbStack_f0;
        pppppppbVar52 = pppppppbStack_b8;
      }
      auVar89[0] = -(bVar80 == 0xff);
      auVar89[1] = -(bVar25 == 0xff);
      auVar89[2] = -(bVar26 == 0xff);
      auVar89[3] = -(bVar27 == 0xff);
      auVar89[4] = -(bVar28 == 0xff);
      auVar89[5] = -(bVar29 == 0xff);
      auVar89[6] = -(bVar30 == 0xff);
      auVar89[7] = -(bVar31 == 0xff);
      auVar89[8] = -(bVar32 == 0xff);
      auVar89[9] = -(bVar33 == 0xff);
      auVar89[10] = -(bVar34 == 0xff);
      auVar89[0xb] = -(bVar35 == 0xff);
      auVar89[0xc] = -(bVar36 == 0xff);
      auVar89[0xd] = -(bVar37 == 0xff);
      auVar89[0xe] = -(bVar38 == 0xff);
      auVar89[0xf] = -(bVar39 == 0xff);
      param_2 = (undefined1  [8])pppppppbStack_f0;
      if ((((((((((((((((SUB161(auVar89 >> 7,0) & 1) != 0 || (SUB161(auVar89 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar89 >> 0x17,0) & 1) != 0) || (SUB161(auVar89 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar89 >> 0x27,0) & 1) != 0) || (SUB161(auVar89 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar89 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar89 >> 0x3f,0) & 1) != 0) || (SUB161(auVar89 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar89 >> 0x4f,0) & 1) != 0) || (SUB161(auVar89 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar89 >> 0x5f,0) & 1) != 0) || (SUB161(auVar89 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar89 >> 0x6f,0) & 1) != 0) || (SUB161(auVar89 >> 0x77,0) & 1) != 0) ||
          auVar89[0xf] < '\0') break;
      pbVar53 = (byte *)((longlong)pppppppbStack_b8 + (longlong)pppppppbStack_f0) + 0x10;
      pppppppbVar57 = pppppppbStack_f0 + 2;
      pppppppbStack_f0 = pppppppbVar54;
      pppppppbStack_b8 = pppppppbVar52;
    } while( true );
  }
  goto LAB_140d8d020;
LAB_140d8c10f:
  pppppppbStack_b8 = (byte *******)((longlong)pppppppbStack_b8 + -1);
  pppppppbVar51 = (byte *******)pppppppbVar51[(longlong)((longlong)pppppppbVar65 + 0x5a)];
  goto LAB_140d8c04a;
  while( true ) {
    uStack_a6 = 1;
    cVar44 = pdb_140f3e020(pppppppbStack_b8,pppppppbStack_b0,pppppppbVar57[9],pppppppbVar57[10]);
    pppppppbVar52 = pppppppbVar57 + 0x16;
    if (cVar44 != '\0') break;
LAB_140d8cd40:
    pppppppbVar57 = pppppppbVar52;
    if (pppppppbVar57 == pppppppbStack_348) {
      pppppppbStack_248 = (byte *******)0x0;
      goto LAB_140d8cd86;
    }
  }
  pppppppbStack_248 = (byte *******)pppppppbVar57[6];
  pppppppbVar57 = (byte *******)pppppppbVar57[7];
LAB_140d8cd86:
  if (pppppppbStack_248 == (byte *******)0x0) {
    pppppppbStack_248 = (byte *******)&UNK_1431e52d0;
    pppppppbVar57 = (byte *******)0x9;
  }
  pppppppbStack_240 = pppppppbVar57;
  if (2 < *_DAT_143ca8e90) {
    pppppppbStack_2d8 = (byte *******)&pppppppbStack_248;
    pppppppbStack_2d0 = (byte *******)pdb_1402ed420;
    pppppppbStack_2c8 = (byte *******)auStack_338;
    pppppppbStack_2c0 = (byte *******)pdb_1403d71e0;
    pppppppbStack_2b8 = (byte *******)auStack_378;
    pppppppbStack_2b0 = (byte *******)pdb_1403d71e0;
    pppppppbStack_208 = (byte *******)0x0;
    pppppppbStack_200 = (byte *******)&UNK_1431e5105;
    _auStack_1f8 = ZEXT816(0x10);
    auStack_1e8._8_8_ = 0x1d;
    auStack_1e8._0_8_ = &UNK_1431e50e7;
    uStack_1d8 = (byte *******)0x3;
    auStack_1d0._8_8_ = 0x10;
    auStack_1d0._0_8_ = &UNK_1431e5105;
    uStack_1c0 = 0x23400000001;
    puStack_1b8 = &UNK_1431e52d9;
    pppppppbStack_1b0 = (byte *******)&pppppppbStack_2d8;
    uStack_a6 = 1;
    pdb_140f332f0(&uStack_c9,&pppppppbStack_208);
  }
  if (-1 < (longlong)pppppppbVar54) {
    if (pppppppbVar54 == (byte *******)0x0) {
      pppppppbVar52 = (byte *******)0x1;
    }
    else {
      pdb_14007ee60();
      pppppppbVar52 = (byte *******)pub_1406abab0((ulonglong)pppppppbVar54,1);
      if (pppppppbVar52 == (byte *******)0x0) {
        uVar60 = 1;
        pppppppbStack_e8 = pppppppbVar54;
        goto LAB_140d8d046;
      }
      pub_142e32760(pppppppbVar52,pppppppbStack_d8,pppppppbVar54);
    }
    pppppppbStack_148 = pppppppbVar54;
    pppppppbStack_138 = pppppppbVar54;
    pppppppbStack_208 = pppppppbStack_b0;
    pppppppbStack_200 = pppppppbStack_b8;
    auStack_1f8[8] = uVar3;
    auStack_1f8._0_8_ = pppppppbStack_b0;
    uStack_a6 = 0;
    pppppppbStack_140 = pppppppbVar52;
    pppppppbStack_e8 = pppppppbVar52;
    pdb_1414b4420(&pppppppbStack_2d8,auStack_308,&pppppppbStack_148);
    param_2 = (undefined1  [8])pppppppbStack_2d8;
    pppppppbVar54 = pppppppbStack_f0;
    pppppppbVar52 = pppppppbStack_b8;
    if ((!SBORROW8(0,(longlong)pppppppbStack_2d8)) && (pppppppbStack_2d8 != (byte *******)0x0)) {
      pub_1406abac0((byte *)pppppppbStack_2d0,(ulonglong)pppppppbStack_2d8,1);
      pppppppbVar54 = pppppppbStack_f0;
      pppppppbVar52 = pppppppbStack_b8;
    }
LAB_140d8d020:
    pppppppbStack_b8 = pppppppbVar52;
    pppppppbStack_f0 = pppppppbVar54;
    lVar55 = lVar55 + 0x20;
    goto LAB_140d8cfa0;
  }
  uVar60 = 0;
LAB_140d8d046:
  uStack_a6 = 1;
  pdb_142dc7e2a(uVar60,pppppppbStack_e8);
LAB_140d8dade:
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}

