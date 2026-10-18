// VA 0x140578ac0, PDB extent 2644 bytes
// tiny_glade::gui::gui_debug::do_gui_debug
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_debug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_debug::do_gui_debug
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_debug.rs
   Extent: 2644 */

void pdb_140578ac0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uStack_710;
  byte *pbStack_708;
  undefined8 uStack_700;
  ulonglong uStack_588;
  byte *pbStack_580;
  undefined8 uStack_578;
  undefined1 auStack_400 [16];
  longlong *aplStack_3f0 [6];
  int iStack_3c0;
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
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  longlong lStack_218;
  longlong lStack_210;
  longlong lStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  longlong lStack_188;
  longlong lStack_180;
  longlong lStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  longlong lStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_130;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined4 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  undefined4 *puStack_78;
  undefined8 uStack_70;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_88 = *param_1;
  lStack_80 = param_1[1];
  puStack_78 = (undefined4 *)param_1[2];
  uStack_70 = param_1[3];
  lStack_f8 = param_1[4];
  lStack_f0 = param_1[5];
  lStack_e8 = param_1[6];
  lStack_e0 = param_1[7];
  lStack_118 = param_1[8];
  lStack_110 = param_1[9];
  lStack_108 = param_1[10];
  lStack_100 = param_1[0xb];
  lVar2 = param_1[0xc];
  lVar10 = param_1[0x10];
  pbStack_60 = (byte *)param_1[0x12];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x9c);
  lStack_b8 = param_1[0x14];
  lStack_b0 = param_1[0x15];
  puStack_a8 = (undefined4 *)param_1[0x16];
  uStack_a0 = param_1[0x17];
  lStack_d8 = param_1[0x18];
  lStack_d0 = param_1[0x19];
  lStack_c8 = param_1[0x1a];
  lStack_c0 = param_1[0x1b];
  lStack_138 = param_1[0x1c];
  lStack_130 = param_1[0x1d];
  lStack_128 = param_1[0x1e];
  lStack_120 = param_1[0x1f];
  lStack_158 = param_1[0x20];
  lStack_150 = param_1[0x21];
  lStack_148 = param_1[0x22];
  lStack_140 = param_1[0x23];
  lStack_178 = param_1[0x24];
  lStack_170 = param_1[0x25];
  lStack_168 = param_1[0x26];
  lStack_160 = param_1[0x27];
  lStack_198 = param_1[0x28];
  lStack_190 = param_1[0x29];
  lStack_188 = param_1[0x2a];
  lStack_180 = param_1[0x2b];
  lStack_1b8 = param_1[0x2c];
  lStack_1b0 = param_1[0x2d];
  lStack_1a8 = param_1[0x2e];
  lStack_1a0 = param_1[0x2f];
  lStack_1d8 = param_1[0x30];
  lStack_1d0 = param_1[0x31];
  lStack_1c8 = param_1[0x32];
  lStack_1c0 = param_1[0x33];
  lStack_1f8 = param_1[0x34];
  lStack_1f0 = param_1[0x35];
  lStack_1e8 = param_1[0x36];
  lStack_1e0 = param_1[0x37];
  lStack_218 = param_1[0x38];
  lStack_210 = param_1[0x39];
  lStack_208 = param_1[0x3a];
  lStack_200 = param_1[0x3b];
  lVar3 = param_2[0x31];
  uStack_238 = *param_2;
  uStack_230 = param_2[1];
  uStack_228 = param_2[2];
  uStack_220 = param_2[3];
  uStack_258 = param_2[4];
  uStack_250 = param_2[5];
  uStack_248 = param_2[6];
  uStack_240 = param_2[7];
  lVar4 = param_2[8];
  uStack_278 = param_2[0xc];
  uStack_270 = param_2[0xd];
  uStack_268 = param_2[0xe];
  uStack_260 = param_2[0xf];
  uStack_298 = param_2[0x10];
  uStack_290 = param_2[0x11];
  uStack_288 = param_2[0x12];
  uStack_280 = param_2[0x13];
  uStack_2b8 = param_2[0x14];
  uStack_2b0 = param_2[0x15];
  uStack_2a8 = param_2[0x16];
  uStack_2a0 = param_2[0x17];
  uStack_98 = param_2[0x18];
  uStack_2d8 = param_2[0x19];
  uStack_2d0 = param_2[0x1a];
  uStack_2c8 = param_2[0x1b];
  uStack_2c0 = param_2[0x1c];
  uStack_2f8 = param_2[0x1d];
  uStack_2f0 = param_2[0x1e];
  uStack_2e8 = param_2[0x1f];
  uStack_2e0 = param_2[0x20];
  uStack_318 = param_2[0x21];
  uStack_310 = param_2[0x22];
  uStack_308 = param_2[0x23];
  uStack_300 = param_2[0x24];
  uStack_338 = param_2[0x25];
  uStack_330 = param_2[0x26];
  uStack_328 = param_2[0x27];
  uStack_320 = param_2[0x28];
  uStack_358 = param_2[0x29];
  uStack_350 = param_2[0x2a];
  uStack_348 = param_2[0x2b];
  uStack_340 = param_2[0x2c];
  uStack_378 = param_2[0x2d];
  uStack_370 = param_2[0x2e];
  uStack_368 = param_2[0x2f];
  uStack_360 = param_2[0x30];
  uStack_398 = param_2[0x35];
  uStack_390 = param_2[0x36];
  uStack_388 = param_2[0x37];
  uStack_380 = param_2[0x38];
  if (lVar3 != 0) {
    *(undefined4 *)param_1[0xe] = *(undefined4 *)((longlong)param_1 + 0x7c);
    cVar6 = pdb_140938b60(*(undefined4 *)(lVar4 + 0xf0),*(undefined4 *)(lVar4 + 0xf4));
    if (cVar6 == '\0') {
      bVar7 = *(byte *)(lStack_88 + 0xc0);
    }
    else {
      *puStack_78 = uStack_70._4_4_;
      bVar7 = *(byte *)(lStack_88 + 0xc0) ^ 1;
      *(byte *)(lStack_88 + 0xc0) = bVar7;
    }
    if (bVar7 != 0) {
      lStack_90 = lVar10;
      pdb_14058f3d0(&uStack_588,&UNK_142f6c141,6);
      uStack_49 = 1;
      uVar8 = pdb_1406d0830(lVar3);
      pub_142e32760(&uStack_710,&uStack_588,0x188);
      pdb_14007ee60();
      pbStack_58 = pub_1406abab0(0x170,8);
      puVar5 = param_8;
      if (pbStack_58 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x170);
      }
      *(undefined8 *)pbStack_58 = param_9;
      *(undefined8 *)(pbStack_58 + 8) = param_12;
      *(undefined8 *)(pbStack_58 + 0x10) = param_14;
      *(undefined8 *)(pbStack_58 + 0x18) = param_15;
      *(undefined8 *)(pbStack_58 + 0x20) = param_11;
      *(undefined8 *)(pbStack_58 + 0x28) = param_10;
      *(longlong **)(pbStack_58 + 0x30) = &lStack_1f8;
      *(longlong **)(pbStack_58 + 0x38) = &lStack_218;
      *(undefined8 **)(pbStack_58 + 0x40) = &param_7;
      *(longlong **)(pbStack_58 + 0x48) = &lStack_d8;
      *(longlong **)(pbStack_58 + 0x50) = &lStack_178;
      *(longlong **)(pbStack_58 + 0x58) = &lStack_88;
      *(undefined8 **)(pbStack_58 + 0x60) = &uStack_278;
      *(undefined8 **)(pbStack_58 + 0x68) = &uStack_98;
      *(undefined8 **)(pbStack_58 + 0x70) = &uStack_298;
      *(undefined8 *)(pbStack_58 + 0x78) = param_6;
      *(longlong **)(pbStack_58 + 0x80) = &lStack_198;
      *(undefined8 **)(pbStack_58 + 0x88) = &uStack_2b8;
      *(undefined8 **)(pbStack_58 + 0x90) = &uStack_318;
      *(undefined8 **)(pbStack_58 + 0x98) = &uStack_338;
      *(longlong **)(pbStack_58 + 0xa0) = &lStack_1d8;
      *(undefined8 **)(pbStack_58 + 0xa8) = &uStack_398;
      *(longlong **)(pbStack_58 + 0xb0) = &lStack_1b8;
      *(undefined8 **)(pbStack_58 + 0xb8) = &uStack_2d8;
      *(undefined8 **)(pbStack_58 + 0xc0) = &uStack_2f8;
      *(undefined8 **)(pbStack_58 + 200) = &uStack_358;
      *(undefined8 *)(pbStack_58 + 0xd0) = param_3;
      *(undefined8 **)(pbStack_58 + 0xd8) = &uStack_378;
      *(longlong **)(pbStack_58 + 0xe0) = &lStack_138;
      auVar9._8_4_ = (int)lVar2;
      auVar9._0_8_ = lVar2;
      auVar9._12_4_ = (int)((ulonglong)lVar2 >> 0x20);
      lVar11 = _DAT_142f6bf60 + lVar2;
      lVar12 = _UNK_142f6bf68 + auVar9._8_8_;
      lVar10 = auVar9._8_8_ + _UNK_142f6bf78;
      *(longlong *)(pbStack_58 + 0xf8) = lVar2 + _DAT_142f6bf70;
      *(longlong *)(pbStack_58 + 0x100) = lVar10;
      *(longlong *)(pbStack_58 + 0xe8) = lVar11;
      *(longlong *)(pbStack_58 + 0xf0) = lVar12;
      *(longlong *)(pbStack_58 + 0x108) = lVar2 + 0x14;
      *(longlong *)(pbStack_58 + 0x110) = lVar2 + 0x18;
      *(longlong *)(pbStack_58 + 0x118) = lVar2 + 0x1c;
      *(undefined8 **)(pbStack_58 + 0x120) = param_8;
      *(undefined8 **)(pbStack_58 + 0x128) = &param_16;
      *(longlong **)(pbStack_58 + 0x130) = &lStack_b8;
      *(longlong **)(pbStack_58 + 0x138) = &lStack_f8;
      *(undefined8 **)(pbStack_58 + 0x140) = &uStack_258;
      *(undefined8 **)(pbStack_58 + 0x148) = &uStack_238;
      *(undefined8 *)(pbStack_58 + 0x150) = param_4;
      *(undefined8 *)(pbStack_58 + 0x158) = param_5;
      *(longlong **)(pbStack_58 + 0x160) = &lStack_158;
      *(longlong **)(pbStack_58 + 0x168) = &lStack_118;
      pdb_14058f940(auStack_400,&uStack_710,uVar8,pbStack_58,&UNK_142f6c400);
      lVar10 = lStack_90;
      if (iStack_3c0 != 2) {
        LOCK();
        *aplStack_3f0[0] = *aplStack_3f0[0] + -1;
        UNLOCK();
        if (*aplStack_3f0[0] == 0) {
          pdb_140d71bf0(aplStack_3f0);
        }
      }
      pdb_140a923d0(&uStack_710,*puVar5);
      pbStack_58 = pbStack_708;
      pdb_140f3e9e0(&uStack_588,pbStack_708,uStack_700,&UNK_142f6c147,8);
      if (uStack_710 != 0) {
        pub_1406abac0(pbStack_58,uStack_710,1);
      }
      uVar8 = pdb_1406d0830(lVar3);
      *(undefined4 *)pbStack_60 = uVar1;
      *puStack_a8 = uStack_a0._4_4_;
      pdb_14062e520(uVar8,param_16,lVar2,lVar10,lStack_b8,pbStack_580,uStack_578);
      if (uStack_588 != 0) {
        pub_1406abac0(pbStack_580,uStack_588,1);
      }
    }
    cVar6 = pdb_140938b60(*(undefined4 *)(lVar4 + 0x118),*(undefined4 *)(lVar4 + 0x11c));
    if (cVar6 != '\0') {
      bVar7 = *(byte *)(lStack_88 + 0xd1);
      *puStack_78 = uStack_70._4_4_;
      *(byte *)(lStack_88 + 0xd1) = bVar7 ^ 1;
    }
    if (*(char *)(lStack_88 + 0xd1) != '\0') {
      pdb_14058f3d0(&uStack_588,&UNK_142f6c14f,0xe);
      uStack_4a = 1;
      uVar8 = pdb_1406d0830(lVar3);
      pub_142e32760(&uStack_710,&uStack_588,0x188);
      pdb_14007ee60();
      pbStack_60 = pub_1406abab0(0x18,8);
      if (pbStack_60 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x18);
      }
      *(longlong **)pbStack_60 = &lStack_d8;
      *(longlong **)(pbStack_60 + 8) = &lStack_88;
      *(undefined8 *)(pbStack_60 + 0x10) = param_4;
      pdb_14058f940(auStack_400,&uStack_710,uVar8,pbStack_60,&UNK_142f6c3e0);
      if (iStack_3c0 != 2) {
        LOCK();
        *aplStack_3f0[0] = *aplStack_3f0[0] + -1;
        UNLOCK();
        if (*aplStack_3f0[0] == 0) {
          pdb_140d71bf0(aplStack_3f0);
        }
      }
    }
  }
  return;
}

