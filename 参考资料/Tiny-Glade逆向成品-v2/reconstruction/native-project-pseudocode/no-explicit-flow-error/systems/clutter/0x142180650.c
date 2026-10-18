// VA 0x142180650, PDB extent 6761 bytes
// system_clutter::autoclutter::load_clutter_meshes::load_clutter_meshes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/load_clutter_meshes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::autoclutter::load_clutter_meshes::load_clutter_meshes
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/load_clutter_meshes.rs
   Extent: 6761 */

void pdb_142180650(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *puStack_5b8;
  undefined8 uStack_5b0;
  uint uStack_5a8;
  uint uStack_5a4;
  uint uStack_5a0;
  uint uStack_59c;
  undefined8 uStack_598;
  undefined6 uStack_590;
  undefined2 uStack_58a;
  undefined6 uStack_588;
  undefined8 uStack_582;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  ulonglong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_1c0 = param_3;
  uStack_a8 = param_4;
  uStack_60 = param_2;
  uStack_58 = param_1;
  uStack_78 = pdb_1421820c0(param_2,param_1,&UNK_143467e5b,0x27,&UNK_143467e82,0x14,7,1,0,0);
  uStack_70 = pdb_1421820c0(param_2,param_1,&UNK_143467e96,0x21,&UNK_143467eb7,0xe,9,1,1,0);
  puStack_68 = (undefined4 *)
               pdb_1421820c0(param_2,param_1,&UNK_143467ec5,0x26,&UNK_143467eeb,0x13,2,1,0,0);
  uStack_210 = pdb_1421820c0(param_2,param_1,&UNK_143467efe,0x27,&UNK_143467f25,0x14,3,1,0,0);
  uStack_208 = pdb_1421820c0(param_2,param_1,&UNK_143467f39,0x23,&UNK_143467f5c,0x10,0,0,0,0);
  uStack_200 = pdb_1421820c0(param_2,param_1,&UNK_143467f6c,0x20,&UNK_143467f8c,0xd,10,1,1,0);
  uStack_1f8 = pdb_1421820c0(param_2,param_1,&UNK_143467f99,0x24,&UNK_143467fbd,0x11,0xc,0,1,0);
  uStack_1f0 = pdb_1421820c0(param_2,param_1,&UNK_143467fce,0x21,&UNK_143467fef,0xe,0xd,0,1,0);
  uStack_1e8 = pdb_1421820c0(param_2,param_1,&UNK_143467ffd,0x23,&UNK_143468020,0x10,0xb,1,0,0);
  uStack_1e0 = pdb_1421820c0(param_2,param_1,&UNK_143468030,0x21,&UNK_143468051,0xe,4,1,0,0);
  uStack_1d8 = pdb_1421820c0(param_2,param_1,&UNK_14346805f,0x2b,&UNK_14346808a,0x18,7,0,0,0);
  uStack_1d0 = pdb_1421820c0(param_2,param_1,&UNK_1434680a2,0x29,&UNK_1434680cb,0x16,0xe,0,0,0);
  puStack_5b8 = &uStack_60;
  uStack_5b0 = 0x600000001;
  uStack_5a8 = uStack_5a8 & 0xffffff00;
  pdb_1421a87f0(&uStack_a0,&puStack_5b8);
  uStack_1c8 = pdb_1421820c0(uStack_60,uStack_58,&UNK_1434680e1,0x1f,&UNK_143468100,0xc,0x11,0,0,0);
  uStack_1b8 = pdb_1421820c0(uStack_60,uStack_58,&UNK_14346810c,0x22,&UNK_14346812e,0xf,0x11,0,0,0);
  uStack_1b0 = pdb_1421820c0(uStack_60,uStack_58,&UNK_14346813d,0x20,&UNK_14346815d,0xd,0x11,0,0,0);
  uStack_1a8 = pdb_1421820c0(uStack_60,uStack_58,&UNK_14346816a,0x20,&UNK_14346818a,0xd,0x11,0,0,0);
  uStack_1a0 = pdb_1421820c0(uStack_60,uStack_58,&UNK_143468197,0x23,&UNK_1434681ba,0x10,0x1e,0,0,1,
                             0xc466fe39055814dd,1);
  uStack_198 = pdb_1421820c0(uStack_60,uStack_58,&UNK_1434681ca,0x1b,&UNK_1434681e5,8,0x1c,0,0,1,
                             0xdd33a460c4c51ed0,1);
  uStack_190 = pdb_1421820c0(uStack_60,uStack_58,&UNK_1434681ed,0x1d,&UNK_14346820a,10,0x1d,0,0,1,
                             0x71bf92ad3da543c9,1);
  uStack_188 = pdb_1421820c0(uStack_60,uStack_58,&UNK_143468214,0x20,&UNK_143468234,0xd,0x13,0,1,1,
                             0xffb1e74fbef6a00f,1);
  uStack_180 = pdb_1421820c0(uStack_60,uStack_58,&UNK_143468241,0x29,&UNK_14346826a,0x16,0x13,0,1,1,
                             0xffb1e74fbef6a00f,1);
  uStack_178 = pdb_1421820c0(uStack_60,uStack_58,&UNK_143468280,0x26,&UNK_1434682a6,0x13,5,0,1,1,
                             0xffb1e74fbef6a00f,1);
  uStack_170 = pdb_1421820c0(uStack_60,uStack_58,&UNK_1434682b9,0x2c,&UNK_1434682e5,0x19,0x17,0,0,1,
                             0xffb1e74fbef6a00f,1);
  uStack_168 = pdb_1421820c0(uStack_60,uStack_58,&UNK_1434682fe,0x2f,&UNK_14346832d,0x1c,0x17,0,0,1,
                             0xffb1e74fbef6a00f,1);
  uVar18 = 0x44addda5631cc43e;
  uStack_160 = pdb_1421820c0(uStack_60,uStack_58,&UNK_143468349,0x23,&UNK_14346836c,0x10,0x18,0,0,1,
                             0x44addda5631cc43e,1);
  uStack_158 = pdb_1421820c0(uStack_60,uStack_58,&UNK_14346837c,0x27,&UNK_1434683a3,0x14,7,1,0,0,
                             uVar18,1);
  uStack_150 = pdb_1421820c0(uStack_60,uStack_58,&UNK_1434683b7,0x24,&UNK_1434683db,0x11,0x14,0,1,1,
                             0xffb1e74fbef6a00f,1);
  uStack_148 = pdb_1421820c0(uStack_60,uStack_58,&UNK_1434683ec,0x21,&UNK_14346840d,0xe,0x19,1,0,1,
                             0xffb1e74fbef6a00f,1);
  uStack_140 = pdb_1421820c0(uStack_60,uStack_58,&UNK_14346841b,0x28,&UNK_143468443,0x15,0x19,1,0,1,
                             0xffb1e74fbef6a00f,1);
  uStack_138 = pdb_1421820c0(uStack_60,uStack_58,&UNK_143468458,0x26,&UNK_14346847e,0x13,0x15,1,0,1,
                             0x5528d478bc5deb8,1);
  uVar18 = 0xffb1e74fbef6a00f;
  uStack_130 = pdb_1421820c0(uStack_60,uStack_58,&UNK_143468491,0x24,&UNK_1434684b5,0x11,0x16,0,1,1,
                             0xffb1e74fbef6a00f,1);
  uStack_128 = pdb_1421820c0(uStack_60,uStack_58,&UNK_1434684c6,0x24,&UNK_1434684ea,0x11,7,1,0,0,
                             uVar18,1);
  uStack_120 = pdb_1421820c0(uStack_60,uStack_58,&UNK_1434684fb,0x1f,&UNK_14346851a,0xc,5,0,0,1,
                             0xffb1e74fbef6a00f,1);
  uStack_118 = pdb_1421820c0(uStack_60,uStack_58,&UNK_143468526,0x20,&UNK_143468546,0xd,5,0,0,1,
                             0xffb1e74fbef6a00f,1);
  uStack_110 = pdb_1421820c0(uStack_60,uStack_58,&UNK_143468553,0x29,&UNK_14346857c,0x16,5,1,1,1,
                             0xffb1e74fbef6a00f,1);
  uStack_108 = pdb_1421820c0(uStack_60,uStack_58,&UNK_143468592,0x2b,&UNK_1434685bd,0x18,5,1,1,1,
                             0xffb1e74fbef6a00f,1);
  uStack_100 = pdb_1421820c0(uStack_60,uStack_58,&UNK_1434685d5,0x22,&UNK_1434685f7,0xf,0x1a,1,0,1,
                             0x754c275732cbae0e,1);
  uStack_f8 = pdb_1421820c0(uStack_60,uStack_58,&UNK_143468606,0x23,&UNK_143468629,0x10,0x1a,1,0,1,
                            0xed043aa70aa6a6a7,1);
  uStack_f0 = pdb_1421820c0(uStack_60,uStack_58,&UNK_143468639,0x29,&UNK_143468662,0x16,0x1b,1,0,1,
                            0x754c275732cbae0e,1);
  uStack_e8 = pdb_1421820c0(uStack_60,uStack_58,&UNK_143468678,0x2a,&UNK_1434686a2,0x17,5,1,0,1,
                            0xffb1e74fbef6a00f,1);
  uStack_e0 = pdb_1421820c0(uStack_60,uStack_58,&UNK_1434686b9,0x2c,&UNK_1434686e5,0x19,1,1,0,1,
                            0xffb1e74fbef6a00f,1);
  uStack_d8 = pdb_1421820c0(uStack_60,uStack_58,&UNK_1434681ed,0x1d,&UNK_14346820a,10,0x1d,0,0,1,
                            0x44dcaebb204df9c0,1);
  uStack_d0 = pdb_1421820c0(uStack_60,uStack_58,&UNK_1434686fe,0x2b,&UNK_143468729,0x18,0x17,0,0,1,
                            0xffb1e74fbef6a00f,1);
  uVar18 = 0xffb1e74fbef6a00f;
  uStack_c8 = pdb_1421820c0(uStack_60,uStack_58,&UNK_143468741,0x20,&UNK_143468761,0xd,0x20,0,0,1,
                            0xffb1e74fbef6a00f,1);
  uStack_c0 = pdb_1421820c0(uStack_60,uStack_58,&UNK_14346876e,0x27,&UNK_143468795,0x14,0x21,1,0,0,
                            uVar18,1);
  uStack_b8 = pdb_1421820c0(uStack_60,uStack_58,&UNK_1434687a9,0x26,&UNK_1434687cf,0x13,0x22,1,1,1,
                            0xffb1e74fbef6a00f,1);
  uStack_b0 = pdb_1421820c0(uStack_60,uStack_58,&UNK_1434687e2,0x28,&UNK_14346880a,0x15,0x23,1,1,1,
                            0xffb1e74fbef6a00f,1);
  uVar6 = pdb_1421820c0(uStack_60,uStack_58,&UNK_14346881f,0x25,&UNK_143468844,0x12,0x24,1,0,1,
                        0xffb1e74fbef6a00f,1);
  uVar18 = pdb_1421820c0(uStack_60,uStack_58,&UNK_143468856,0x26,&UNK_14346887c,0x13,0x25,1,1,1,
                         0xffb1e74fbef6a00f,1);
  uVar7 = pdb_1421820c0(uStack_60,uStack_58,&UNK_14346888f,0x24,&UNK_1434688b3,0x11,2,1,1,1,
                        0xffb1e74fbef6a00f,1);
  uVar8 = pdb_1421820c0(uStack_60,uStack_58,&UNK_1434688c4,0x32,&UNK_1434688f6,0x1f,5,0,0,1,
                        0xffb1e74fbef6a00f,1);
  uVar19 = 0xffb1e74fbef6a00f;
  uVar9 = pdb_1421820c0(uStack_60,uStack_58,&UNK_143468915,0x34,&UNK_143468949,0x21,1,0,0,1,
                        0xffb1e74fbef6a00f,1);
  uVar10 = pdb_1421820c0(uStack_60,uStack_58,&UNK_14346896a,0x24,&UNK_14346898e,0x11,0x26,0,0,0,
                         uVar19,1);
  uVar11 = pdb_1421820c0(uStack_60,uStack_58,&UNK_14346899f,0x25,&UNK_1434689c4,0x12,0x1f,0,0,0,
                         uVar19,1);
  uStack_230 = pdb_1421820c0(uStack_60,uStack_58,&UNK_1434689d6,0x2c,&UNK_143468a02,0x19,0x1f,0,0,0,
                             uVar19,1);
  uStack_3d0 = uStack_78;
  uStack_3c8 = uStack_70;
  uStack_3c0 = uStack_200;
  uStack_3b8 = uStack_1f8;
  uStack_3b0 = uStack_1f0;
  uStack_3a8 = puStack_68;
  uStack_3a0 = uStack_210;
  uStack_398 = uStack_1e8;
  uStack_390 = uStack_1e0;
  uStack_388 = uStack_208;
  uStack_380 = uStack_188;
  uStack_378 = uStack_180;
  uStack_370 = uStack_178;
  uStack_368 = uStack_170;
  uStack_360 = uStack_160;
  uStack_358 = uStack_158;
  uStack_350 = uStack_150;
  uStack_348 = uStack_148;
  uStack_340 = uStack_140;
  uStack_338 = uStack_168;
  uStack_330 = uStack_138;
  uStack_328 = uStack_130;
  uStack_320 = uStack_128;
  uStack_318 = uStack_120;
  uStack_310 = uStack_118;
  uStack_308 = uStack_110;
  uStack_300 = uStack_108;
  uStack_2f8 = uStack_1d8;
  uStack_2f0 = uStack_1d0;
  uStack_3e8 = uStack_a0;
  uStack_3e4 = uStack_9c;
  uStack_3e0 = uStack_98;
  uStack_3dc = uStack_94;
  uStack_2e8 = uStack_1c8;
  uStack_2e0 = uStack_1b8;
  uStack_2d8 = uStack_1b0;
  uStack_2d0 = uStack_1a8;
  uStack_2c8 = uStack_1a0;
  uStack_2c0 = uStack_198;
  uStack_2b8 = uStack_190;
  uStack_2b0 = uStack_100;
  uStack_2a8 = uStack_f8;
  uStack_2a0 = uStack_f0;
  uStack_298 = uStack_e8;
  uStack_290 = uStack_e0;
  uStack_288 = uStack_d8;
  uStack_280 = uStack_d0;
  uStack_278 = uStack_c8;
  uStack_270 = uStack_c0;
  uStack_268 = uStack_b8;
  uStack_260 = uStack_b0;
  uStack_49 = 1;
  uStack_258 = uVar6;
  uStack_250 = uVar18;
  uStack_248 = uVar7;
  uStack_240 = uVar10;
  uStack_238 = uVar11;
  uStack_228 = uVar8;
  uStack_220 = uVar9;
  cVar3 = pdb_14007fac0();
  uStack_70 = CONCAT44(uStack_70._4_4_,*(undefined4 *)((longlong)puStack_1c0 + 0x1c));
  uStack_78 = *puStack_1c0;
  puStack_68 = (undefined4 *)puStack_1c0[2];
  puVar17 = &uStack_3e8;
  while (cVar3 != '8') {
    uVar6 = CONCAT71((int7)(uVar6 >> 8),cVar3);
    uStack_49 = 1;
    uStack_a0._0_1_ = cVar3;
    cVar4 = pdb_140948120(&uStack_a0);
    uStack_a0 = CONCAT31(uStack_a0._1_3_,cVar3);
    uStack_49 = 1;
    cVar5 = pdb_1410c66f0(&puStack_5b8,&uStack_a0);
    cVar3 = cVar4;
    if (cVar5 != '\0') {
      uStack_49 = 1;
      pdb_1409d5500(&puStack_5b8,uVar6 & 0xffffffff,puVar17);
      *puStack_68 = (undefined4)uStack_70;
      uStack_49 = 1;
      pdb_140c26860(uStack_78,uVar6 & 0xffffffff,puStack_5b8,uStack_5b0,
                    CONCAT44(uStack_5a4,uStack_5a8));
    }
  }
  uStack_588 = (undefined6)((ulonglong)*(undefined8 *)((longlong)_DAT_143ca42b8 + 0x1e) >> 0x10);
  uStack_582 = *(undefined8 *)((longlong)_DAT_143ca42b8 + 0x26);
  uStack_598 = *(undefined8 *)(_DAT_143ca42b8 + 4);
  uStack_590 = (undefined6)*(undefined8 *)(_DAT_143ca42b8 + 6);
  uStack_58a = (undefined2)((ulonglong)*(undefined8 *)(_DAT_143ca42b8 + 6) >> 0x30);
  uStack_5a8 = *_DAT_143ca42b8;
  uStack_5a4 = _DAT_143ca42b8[1];
  uStack_5a0 = _DAT_143ca42b8[2];
  uStack_59c = _DAT_143ca42b8[3];
  lVar16 = 0;
LAB_142181e50:
  if (lVar16 == 0x2e) {
    uStack_49 = 1;
    uVar18 = pdb_1421820c0(uStack_60,uStack_58,&UNK_143468a1b,0x32,&UNK_143468a4d,0x1f,2,0,0,0,
                           uVar19,0);
    *puStack_68 = (undefined4)uStack_70;
    uStack_49 = 1;
    pdb_140c25f40(uStack_78,uVar18);
    pub_142e32760(&puStack_5b8,&uStack_3e8,0x1d0);
    uStack_49 = 0;
    pdb_1428d9b20(uStack_a8,&puStack_5b8,&UNK_143468ab0);
    return;
  }
  cVar3 = *(char *)((longlong)&uStack_5a8 + lVar16);
  puVar17 = (undefined4 *)CONCAT71((int7)((ulonglong)puVar17 >> 8),cVar3);
  uStack_49 = 1;
  uVar14 = (ulonglong)puVar17 & 0xffffffff;
  pdb_1409d5500(&uStack_a0,uVar14,&uStack_3e8);
  lVar16 = lVar16 + 1;
  uVar18 = CONCAT44(uStack_9c,uStack_a0);
  uVar7 = CONCAT44(uStack_94,uStack_98);
  uVar8 = CONCAT44(uStack_8c,uStack_90);
  uStack_90 = 0x3020100;
  lVar15 = 0;
  do {
    if (lVar15 == 4) {
      uStack_49 = 1;
      pdb_142dc8110(&UNK_143468ac8,0x2e,&UNK_143468af8);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar6 = CONCAT71((int7)(uVar6 >> 8),*(undefined1 *)((longlong)&uStack_90 + lVar15));
    uStack_49 = 1;
    lVar12 = pdb_1409d5940();
    lVar15 = lVar15 + 1;
    uVar13 = 0;
    while (uVar14 != uVar13) {
      pcVar1 = (char *)(lVar12 + uVar13);
      uVar13 = uVar13 + 1;
      if (*pcVar1 == cVar3) {
        *puStack_68 = (undefined4)uStack_70;
        uStack_49 = 1;
        pdb_140c25f80(uStack_78,(ulonglong)puVar17 & 0xffffffff,uVar18,uVar6 & 0xffffffff,uVar7,
                      uVar8);
        goto LAB_142181e50;
      }
    }
  } while( true );
}

