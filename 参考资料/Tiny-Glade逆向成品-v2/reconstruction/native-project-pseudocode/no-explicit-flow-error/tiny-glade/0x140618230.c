// VA 0x140618230, PDB extent 1194 bytes
// tiny_glade::panic_reporter::sentry_reporter::init_sentry_client
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/sentry_reporter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::panic_reporter::sentry_reporter::init_sentry_client
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/sentry_reporter.rs
   Extent: 1194 */

undefined8 pdb_140618230(void)

{
  char cVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined *puStack_4e0;
  undefined8 uStack_4d8;
  undefined1 auStack_4d0 [248];
  undefined8 uStack_3d8;
  undefined *puStack_3d0;
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
  undefined4 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_340;
  byte *pbStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_318;
  undefined7 uStack_308;
  undefined1 uStack_301;
  undefined7 uStack_300;
  undefined1 uStack_2f9;
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
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  ulonglong uStack_108;
  byte *pbStack_100;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  longlong *aplStack_68 [2];
  undefined8 uStack_58;
  undefined8 uStack_48;
  ulonglong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  cVar1 = *_DAT_143ca4500;
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(0x10,8);
  if (pbVar2 != (byte *)0x0) {
    puStack_4e0 = &UNK_142f8876b;
    if (cVar1 != '\0') {
      puStack_4e0 = &UNK_142f887ca;
    }
    pbVar2[0] = 1;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2[4] = 0;
    pbVar2[5] = 0;
    pbVar2[6] = 0;
    pbVar2[7] = 0;
    pbVar2[8] = 1;
    pbVar2[9] = 0;
    pbVar2[10] = 0;
    pbVar2[0xb] = 0;
    pbVar2[0xc] = 0;
    pbVar2[0xd] = 0;
    pbVar2[0xe] = 0;
    pbVar2[0xf] = 0;
    uStack_1a0 = 0x8000000000000000;
    uStack_108 = 0x8000000000000001;
    uStack_f0 = 0x8000000000000001;
    uStack_38 = (ulonglong)_DAT_142e36f28;
    uStack_80 = 0;
    uStack_70 = 100;
    uStack_d8 = 0x8000000000000001;
    uStack_200 = 0;
    uStack_1f8 = 8;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 8;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 8;
    uStack_1c0 = 0;
    aplStack_68[0] = (longlong *)0x0;
    uStack_58 = 0;
    uStack_48 = 0;
    uStack_c0 = 0x8000000000000001;
    uStack_a8 = 0x8000000000000001;
    uStack_90 = 2;
    uStack_88 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 8;
    uStack_1a8 = 0;
    uStack_30 = 0x100000001000000;
    uStack_120 = 0x8000000000000000;
    puStack_118 = &UNK_142f88de8;
    uStack_110 = 0x12;
    uStack_298 = 0x8000000000000000;
    uStack_290 = uStack_198;
    uStack_288 = uStack_190;
    uStack_284 = uStack_18c;
    uStack_280 = uStack_188;
    uStack_27c = uStack_184;
    uStack_278 = uStack_180;
    uStack_274 = uStack_17c;
    uStack_270 = uStack_178;
    uStack_26c = uStack_174;
    uStack_268 = uStack_170;
    uStack_264 = uStack_16c;
    uStack_260 = uStack_168;
    uStack_25c = uStack_164;
    uStack_258 = uStack_160;
    uStack_250 = uStack_158;
    uStack_248 = uStack_150;
    uStack_240 = uStack_148;
    uStack_238 = uStack_140;
    uStack_230 = uStack_138;
    uStack_228 = uStack_130;
    uStack_220 = uStack_128;
    uStack_3b0 = uStack_e0;
    uStack_3c0 = 0x8000000000000001;
    uStack_3b8 = uStack_e8;
    uStack_398 = uStack_c8;
    uStack_3a8 = 0x8000000000000001;
    uStack_3a0 = uStack_d0;
    uStack_2e8 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 8;
    uStack_2d0 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 8;
    uStack_2b8 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 8;
    uStack_380 = uStack_b0;
    uStack_390 = 0x8000000000000001;
    uStack_388 = uStack_b8;
    uStack_368 = uStack_98;
    uStack_378 = 0x8000000000000001;
    uStack_370 = uStack_a0;
    uStack_2a0 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 8;
    uStack_208 = 0x12;
    uStack_218 = 0;
    uStack_214 = 0x80000000;
    uStack_210 = 0x42f88de8;
    uStack_20c = 1;
    uStack_4d8 = 0x5f;
    pub_142e32760(auStack_4d0,&uStack_2f8,0xf8);
    uStack_3d8 = 0x8000000000000000;
    puStack_3d0 = &UNK_142f88829;
    uStack_3c8 = 0x13;
    uStack_360 = 2;
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_340 = 100;
    puStack_330 = &UNK_142f88840;
    uStack_328 = 0;
    uStack_318 = 0;
    uStack_308 = 0x3f800000;
    uStack_301 = 0;
    uStack_300 = 0x1000000;
    uStack_2f9 = 1;
    pbStack_338 = pbVar2;
    uVar3 = pdb_14055df60(&puStack_4e0);
    if ((-0x7fffffffffffffff < (longlong)uStack_108) && (uStack_108 != 0)) {
      pub_1406abac0(pbStack_100,uStack_108,1);
    }
    if (aplStack_68[0] != (longlong *)0x0) {
      LOCK();
      *aplStack_68[0] = *aplStack_68[0] + -1;
      UNLOCK();
      if (*aplStack_68[0] == 0) {
        pdb_1406efe00(aplStack_68);
      }
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x10);
}

