// VA 0x1406cd9c0, PDB extent 6385 bytes
// tg_iced::dialog::impl$4::view
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/dialog.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_iced::dialog::impl$4::view
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/dialog.rs
   Extent: 6385 */

void pdb_1406cd9c0(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined6 uVar6;
  char cVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 auStack_450 [3];
  undefined2 uStack_438;
  undefined2 uStack_430;
  ulonglong uStack_428;
  undefined4 uStack_420;
  undefined1 uStack_41c;
  undefined1 uStack_40c;
  byte *pbStack_408;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3e8;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined1 uStack_398;
  undefined4 uStack_397;
  undefined4 uStack_393;
  undefined1 uStack_38f;
  undefined4 uStack_38e;
  undefined2 uStack_38a;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined1 uStack_348;
  undefined4 uStack_347;
  undefined4 uStack_343;
  undefined1 uStack_33f;
  undefined4 uStack_33e;
  undefined2 uStack_33a;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined1 uStack_2f8;
  undefined4 uStack_2f7;
  undefined4 uStack_2f3;
  undefined1 uStack_2ef;
  undefined4 uStack_2ee;
  undefined2 uStack_2ea;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 uStack_2a8;
  undefined4 uStack_2a7;
  undefined4 uStack_2a3;
  undefined1 uStack_29f;
  undefined4 uStack_29e;
  undefined2 uStack_29a;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined1 uStack_258;
  undefined4 uStack_257;
  undefined4 uStack_253;
  undefined1 uStack_24f;
  undefined4 uStack_24e;
  undefined2 uStack_24a;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined1 uStack_207;
  undefined4 uStack_206;
  undefined2 uStack_202;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined5 uStack_1c8;
  undefined2 uStack_1c3;
  undefined1 uStack_1c1;
  undefined4 uStack_1c0;
  undefined1 uStack_1bc;
  undefined1 uStack_1bb;
  undefined2 uStack_1ba;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  undefined2 uStack_fe;
  undefined2 uStack_fc;
  undefined2 uStack_fa;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined4 uStack_ef;
  undefined3 uStack_eb;
  undefined1 uStack_e8;
  undefined4 uStack_e7;
  undefined4 uStack_e3;
  undefined2 uStack_df;
  undefined4 uStack_dd;
  undefined1 uStack_d9;
  undefined1 uStack_c9;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined2 uStack_93;
  undefined1 uStack_91;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined2 uStack_8a;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined4 uStack_7c;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined3 uStack_6b;
  undefined1 uStack_68;
  undefined4 uStack_67;
  undefined4 uStack_63;
  undefined4 uStack_5e;
  ushort uStack_5a;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_148 = (byte *)0x0;
  uStack_140 = (undefined *)0x1;
  uStack_138 = (byte *)0x0;
  uStack_b8 = 0x60000020;
  uStack_c8 = (byte *)&uStack_148;
  uStack_c0 = &UNK_143270c90;
  cVar7 = pdb_140f73140(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),&uStack_c8);
  pbVar10 = uStack_138;
  if (cVar7 != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143270cc0,0x37,&uStack_c9,&UNK_143270d80,&UNK_143270d68);
  }
  pbStack_160 = uStack_148;
  puStack_168 = uStack_140;
  if (*(char *)(param_1 + 0x39) == '\0') {
    uStack_49 = 1;
    uVar12 = 2;
    uVar8 = pdb_140dc6290(&UNK_142f99cb3);
    if ((longlong)uVar12 < 0) {
      uVar13 = 0;
LAB_1406cdaea:
      uStack_49 = 1;
      pdb_142dc7e2a(uVar13,uVar12);
      goto LAB_1406ceb86;
    }
    if (uVar12 == 0) {
      pbVar9 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar13 = 1;
      pbVar9 = pub_1406abab0(uVar12,1);
      if (pbVar9 == (byte *)0x0) goto LAB_1406cdaea;
      pub_142e32760(pbVar9,uVar8,uVar12);
    }
    uStack_c8 = (byte *)0x6;
    uStack_a0 = SUB84(pbVar9,0);
    uStack_9c = (undefined4)((ulonglong)pbVar9 >> 0x20);
    uStack_98 = (undefined4)uVar12;
    uStack_94 = (undefined1)(uVar12 >> 0x20);
    uStack_93 = (undefined2)(uVar12 >> 0x28);
    uStack_91 = (undefined1)(uVar12 >> 0x38);
    uStack_90 = 0;
    uStack_88 = 0x3fa6666600000000;
    _uStack_80 = CONCAT22(uStack_7e,2);
    uStack_78 = 2;
    uStack_70 = 0;
    uStack_5e = CONCAT22(0x100,(undefined2)uStack_5e);
    uStack_5a = uStack_5a & 0xff00;
    uStack_49 = 1;
    uStack_a8 = uVar12;
    pdb_140ffe230(&uStack_148,&uStack_c8);
    uStack_130 = (undefined *)0x4316000000000003;
    uStack_397 = CONCAT13((undefined1)uStack_104,uStack_108._1_3_);
    uStack_393 = CONCAT13(uStack_100,uStack_104._1_3_);
    uStack_3d8 = (undefined4)uStack_148;
    uStack_3d4 = uStack_148._4_4_;
    uStack_3d0 = (undefined4)uStack_140;
    uStack_3cc = uStack_140._4_4_;
    uStack_3b8 = uStack_128;
    uStack_3b4 = uStack_124;
    uStack_3b0 = uStack_120;
    uStack_3ac = uStack_11c;
    uStack_3a8 = (undefined4)uStack_118;
    uStack_3a4 = uStack_118._4_4_;
    uStack_3a0 = uStack_110;
    uStack_39c = uStack_10c;
    uStack_398 = (undefined1)uStack_108;
    uStack_3c8 = uStack_138;
    uStack_3c0 = 0x4316000000000003;
    uStack_38e = CONCAT22(uStack_fc,uStack_fe);
    uStack_38a = uStack_fa;
    uStack_38f = 0;
    pdb_14007ee60();
    pbVar9 = pub_1406abab0(0x50,8);
    if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x50);
    }
    *(ulonglong *)(pbVar9 + 0x40) = CONCAT35((undefined3)uStack_393,CONCAT41(uStack_397,uStack_398))
    ;
    *(ulonglong *)(pbVar9 + 0x48) =
         CONCAT26(uStack_38a,CONCAT42(uStack_38e,CONCAT11(uStack_38f,uStack_393._3_1_)));
    *(undefined4 *)(pbVar9 + 0x30) = uStack_3a8;
    *(undefined4 *)(pbVar9 + 0x34) = uStack_3a4;
    *(undefined4 *)(pbVar9 + 0x38) = uStack_3a0;
    *(undefined4 *)(pbVar9 + 0x3c) = uStack_39c;
    *(undefined4 *)(pbVar9 + 0x20) = uStack_3b8;
    *(undefined4 *)(pbVar9 + 0x24) = uStack_3b4;
    *(undefined4 *)(pbVar9 + 0x28) = uStack_3b0;
    *(undefined4 *)(pbVar9 + 0x2c) = uStack_3ac;
    *(undefined4 *)(pbVar9 + 0x10) = (undefined4)uStack_3c8;
    *(undefined4 *)(pbVar9 + 0x14) = uStack_3c8._4_4_;
    *(undefined4 *)(pbVar9 + 0x18) = (undefined4)uStack_3c0;
    *(undefined4 *)(pbVar9 + 0x1c) = uStack_3c0._4_4_;
    *(undefined4 *)pbVar9 = uStack_3d8;
    *(undefined4 *)(pbVar9 + 4) = uStack_3d4;
    *(undefined4 *)(pbVar9 + 8) = uStack_3d0;
    *(undefined4 *)(pbVar9 + 0xc) = uStack_3cc;
    uStack_140 = &UNK_143271050;
    uStack_49 = 1;
    uStack_148 = pbVar9;
    pdb_140fff550(&uStack_c8,&uStack_148);
  }
  else if (*(char *)(param_1 + 0x39) == '\x01') {
    uStack_49 = 1;
    uVar12 = 2;
    uVar8 = pdb_140dc6290(&UNK_142f99cb3);
    if ((longlong)uVar12 < 0) {
      uVar13 = 0;
LAB_1406cdaaa:
      uStack_49 = 1;
      pdb_142dc7e2a(uVar13,uVar12);
      goto LAB_1406ceb86;
    }
    if (uVar12 == 0) {
      pbVar9 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar13 = 1;
      pbVar9 = pub_1406abab0(uVar12,1);
      if (pbVar9 == (byte *)0x0) goto LAB_1406cdaaa;
      pub_142e32760(pbVar9,uVar8,uVar12);
    }
    uStack_c8 = (byte *)0x6;
    uStack_a0 = SUB84(pbVar9,0);
    uStack_9c = (undefined4)((ulonglong)pbVar9 >> 0x20);
    uStack_98 = (undefined4)uVar12;
    uStack_94 = (undefined1)(uVar12 >> 0x20);
    uStack_93 = (undefined2)(uVar12 >> 0x28);
    uStack_91 = (undefined1)(uVar12 >> 0x38);
    uStack_90 = 0;
    uStack_88 = 0x3fa6666600000000;
    _uStack_80 = CONCAT22(uStack_7e,2);
    uStack_78 = 2;
    uStack_70 = 0;
    uStack_5e = CONCAT22(0x100,(undefined2)uStack_5e);
    uStack_5a = uStack_5a & 0xff00;
    uStack_49 = 1;
    uStack_a8 = uVar12;
    pdb_140ffe230(&uStack_148,&uStack_c8);
    pbStack_158 = pbVar10;
    uStack_130 = (undefined *)0x4316000000000003;
    uStack_257 = CONCAT13((undefined1)uStack_104,uStack_108._1_3_);
    uStack_253 = CONCAT13(uStack_100,uStack_104._1_3_);
    uStack_298 = (undefined4)uStack_148;
    uStack_294 = uStack_148._4_4_;
    uStack_290 = (undefined4)uStack_140;
    uStack_28c = uStack_140._4_4_;
    uStack_278 = uStack_128;
    uStack_274 = uStack_124;
    uStack_270 = uStack_120;
    uStack_26c = uStack_11c;
    uStack_268 = (undefined4)uStack_118;
    uStack_264 = uStack_118._4_4_;
    uStack_260 = uStack_110;
    uStack_25c = uStack_10c;
    uStack_258 = (undefined1)uStack_108;
    uStack_288 = uStack_138;
    uStack_280 = 0x4316000000000003;
    uStack_24e = CONCAT22(uStack_fc,uStack_fe);
    uStack_24a = uStack_fa;
    uStack_24f = 0;
    uStack_4c = 1;
    uVar12 = 6;
    uVar8 = pdb_140dc6290(&UNK_142f99cb5);
    if ((longlong)uVar12 < 0) {
      uVar13 = 0;
LAB_1406cdd43:
      uStack_4c = 1;
      pdb_142dc7e2a(uVar13,uVar12);
      goto LAB_1406ceb86;
    }
    if (uVar12 == 0) {
      pbVar10 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar13 = 1;
      pbVar10 = pub_1406abab0(uVar12,1);
      if (pbVar10 == (byte *)0x0) goto LAB_1406cdd43;
      pub_142e32760(pbVar10,uVar8,uVar12);
    }
    uStack_c8 = (byte *)0x6;
    uStack_a0 = SUB84(pbVar10,0);
    uStack_9c = (undefined4)((ulonglong)pbVar10 >> 0x20);
    uStack_98 = (undefined4)uVar12;
    uStack_94 = (undefined1)(uVar12 >> 0x20);
    uStack_93 = (undefined2)(uVar12 >> 0x28);
    uStack_91 = (undefined1)(uVar12 >> 0x38);
    uStack_90 = 0;
    uStack_88 = 0x3fa6666600000000;
    _uStack_80 = CONCAT22(uStack_7e,2);
    uStack_78 = 2;
    uStack_70 = 0;
    uStack_5e = CONCAT22(0x100,(undefined2)uStack_5e);
    uStack_5a = uStack_5a & 0xff00;
    uStack_4c = 1;
    uStack_a8 = uVar12;
    pdb_140ffe230(&uStack_148,&uStack_c8);
    uStack_130 = (undefined *)0x4316000000000003;
    uStack_2a7 = CONCAT13((undefined1)uStack_104,uStack_108._1_3_);
    uStack_2a3 = CONCAT13(uStack_100,uStack_104._1_3_);
    uStack_2e8 = (undefined4)uStack_148;
    uStack_2e4 = uStack_148._4_4_;
    uStack_2e0 = (undefined4)uStack_140;
    uStack_2dc = uStack_140._4_4_;
    uStack_2c8 = uStack_128;
    uStack_2c4 = uStack_124;
    uStack_2c0 = uStack_120;
    uStack_2bc = uStack_11c;
    uStack_2b8 = (undefined4)uStack_118;
    uStack_2b4 = uStack_118._4_4_;
    uStack_2b0 = uStack_110;
    uStack_2ac = uStack_10c;
    uStack_2a8 = (undefined1)uStack_108;
    uStack_2d8 = uStack_138;
    uStack_2d0 = 0x4316000000000003;
    uStack_29e = CONCAT22(uStack_fc,uStack_fe);
    uStack_29a = uStack_fa;
    uStack_29f = 1;
    pdb_14007ee60();
    pbVar9 = pub_1406abab0(0x50,8);
    pbStack_150 = pbVar9;
    if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x50);
    }
    *(ulonglong *)(pbVar9 + 0x40) = CONCAT35((undefined3)uStack_253,CONCAT41(uStack_257,uStack_258))
    ;
    *(ulonglong *)(pbVar9 + 0x48) =
         CONCAT26(uStack_24a,CONCAT42(uStack_24e,CONCAT11(uStack_24f,uStack_253._3_1_)));
    *(undefined4 *)(pbVar9 + 0x30) = uStack_268;
    *(undefined4 *)(pbVar9 + 0x34) = uStack_264;
    *(undefined4 *)(pbVar9 + 0x38) = uStack_260;
    *(undefined4 *)(pbVar9 + 0x3c) = uStack_25c;
    *(undefined4 *)(pbVar9 + 0x20) = uStack_278;
    *(undefined4 *)(pbVar9 + 0x24) = uStack_274;
    *(undefined4 *)(pbVar9 + 0x28) = uStack_270;
    *(undefined4 *)(pbVar9 + 0x2c) = uStack_26c;
    *(undefined4 *)(pbVar9 + 0x10) = (undefined4)uStack_288;
    *(undefined4 *)(pbVar9 + 0x14) = uStack_288._4_4_;
    *(undefined4 *)(pbVar9 + 0x18) = (undefined4)uStack_280;
    *(undefined4 *)(pbVar9 + 0x1c) = uStack_280._4_4_;
    *(undefined4 *)pbVar9 = uStack_298;
    *(undefined4 *)(pbVar9 + 4) = uStack_294;
    *(undefined4 *)(pbVar9 + 8) = uStack_290;
    *(undefined4 *)(pbVar9 + 0xc) = uStack_28c;
    uStack_c0 = &UNK_143271050;
    uStack_c8 = pbVar9;
    pdb_14007ee60();
    pbVar11 = pub_1406abab0(0x50,8);
    pbVar10 = pbStack_158;
    if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x50);
    }
    *(ulonglong *)(pbVar11 + 0x40) =
         CONCAT35((undefined3)uStack_2a3,CONCAT41(uStack_2a7,uStack_2a8));
    *(ulonglong *)(pbVar11 + 0x48) =
         CONCAT26(uStack_29a,CONCAT42(uStack_29e,CONCAT11(uStack_29f,uStack_2a3._3_1_)));
    *(undefined4 *)(pbVar11 + 0x30) = uStack_2b8;
    *(undefined4 *)(pbVar11 + 0x34) = uStack_2b4;
    *(undefined4 *)(pbVar11 + 0x38) = uStack_2b0;
    *(undefined4 *)(pbVar11 + 0x3c) = uStack_2ac;
    *(undefined4 *)(pbVar11 + 0x20) = uStack_2c8;
    *(undefined4 *)(pbVar11 + 0x24) = uStack_2c4;
    *(undefined4 *)(pbVar11 + 0x28) = uStack_2c0;
    *(undefined4 *)(pbVar11 + 0x2c) = uStack_2bc;
    *(undefined4 *)(pbVar11 + 0x10) = (undefined4)uStack_2d8;
    *(undefined4 *)(pbVar11 + 0x14) = uStack_2d8._4_4_;
    *(undefined4 *)(pbVar11 + 0x18) = (undefined4)uStack_2d0;
    *(undefined4 *)(pbVar11 + 0x1c) = uStack_2d0._4_4_;
    *(undefined4 *)pbVar11 = uStack_2e8;
    *(undefined4 *)(pbVar11 + 4) = uStack_2e4;
    *(undefined4 *)(pbVar11 + 8) = uStack_2e0;
    *(undefined4 *)(pbVar11 + 0xc) = uStack_2dc;
    uStack_140 = &UNK_143271050;
    uStack_130 = &UNK_143271050;
    uStack_148 = pbVar9;
    uStack_138 = pbVar11;
    pdb_140fe95c0(&uStack_c8,&uStack_148);
  }
  else {
    uStack_49 = 1;
    uVar12 = 0xc;
    uVar8 = pdb_140dc6290(&UNK_142f99cbb);
    if ((longlong)uVar12 < 0) {
      uVar13 = 0;
LAB_1406cdb2a:
      uStack_49 = 1;
      pdb_142dc7e2a(uVar13,uVar12);
      goto LAB_1406ceb86;
    }
    if (uVar12 == 0) {
      pbVar9 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar13 = 1;
      pbVar9 = pub_1406abab0(uVar12,1);
      if (pbVar9 == (byte *)0x0) goto LAB_1406cdb2a;
      pub_142e32760(pbVar9,uVar8,uVar12);
    }
    uStack_c8 = (byte *)0x6;
    uStack_a0 = SUB84(pbVar9,0);
    uStack_9c = (undefined4)((ulonglong)pbVar9 >> 0x20);
    uStack_98 = (undefined4)uVar12;
    uStack_94 = (undefined1)(uVar12 >> 0x20);
    uStack_93 = (undefined2)(uVar12 >> 0x28);
    uStack_91 = (undefined1)(uVar12 >> 0x38);
    uStack_90 = 0;
    uStack_88 = 0x3fa6666600000000;
    _uStack_80 = CONCAT22(uStack_7e,2);
    uStack_78 = 2;
    uStack_70 = 0;
    uStack_5e = CONCAT22(0x100,(undefined2)uStack_5e);
    uStack_5a = uStack_5a & 0xff00;
    uStack_49 = 1;
    uStack_a8 = uVar12;
    pdb_140ffe230(&uStack_148,&uStack_c8);
    pbStack_158 = pbVar10;
    uStack_130 = (undefined *)0x4316000000000003;
    uStack_2f7 = CONCAT13((undefined1)uStack_104,uStack_108._1_3_);
    uStack_2f3 = CONCAT13(uStack_100,uStack_104._1_3_);
    uStack_338 = (undefined4)uStack_148;
    uStack_334 = uStack_148._4_4_;
    uStack_330 = (undefined4)uStack_140;
    uStack_32c = uStack_140._4_4_;
    uStack_318 = uStack_128;
    uStack_314 = uStack_124;
    uStack_310 = uStack_120;
    uStack_30c = uStack_11c;
    uStack_308 = (undefined4)uStack_118;
    uStack_304 = uStack_118._4_4_;
    uStack_300 = uStack_110;
    uStack_2fc = uStack_10c;
    uStack_2f8 = (undefined1)uStack_108;
    uStack_328 = uStack_138;
    uStack_320 = 0x4316000000000003;
    uStack_2ee = CONCAT22(uStack_fc,uStack_fe);
    uStack_2ea = uStack_fa;
    uStack_2ef = 0;
    uStack_4d = 1;
    uVar12 = 0xd;
    uVar8 = pdb_140dc6290(&UNK_142f99cc7);
    if ((longlong)uVar12 < 0) {
      uVar13 = 0;
LAB_1406ce03d:
      uStack_4d = 1;
      pdb_142dc7e2a(uVar13,uVar12);
      goto LAB_1406ceb86;
    }
    if (uVar12 == 0) {
      pbVar10 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar13 = 1;
      pbVar10 = pub_1406abab0(uVar12,1);
      if (pbVar10 == (byte *)0x0) goto LAB_1406ce03d;
      pub_142e32760(pbVar10,uVar8,uVar12);
    }
    uStack_c8 = (byte *)0x6;
    uStack_a0 = SUB84(pbVar10,0);
    uStack_9c = (undefined4)((ulonglong)pbVar10 >> 0x20);
    uStack_98 = (undefined4)uVar12;
    uStack_94 = (undefined1)(uVar12 >> 0x20);
    uStack_93 = (undefined2)(uVar12 >> 0x28);
    uStack_91 = (undefined1)(uVar12 >> 0x38);
    uStack_90 = 0;
    uStack_88 = 0x3fa6666600000000;
    _uStack_80 = CONCAT22(uStack_7e,2);
    uStack_78 = 2;
    uStack_70 = 0;
    uStack_5e = CONCAT22(0x100,(undefined2)uStack_5e);
    uStack_5a = uStack_5a & 0xff00;
    uStack_4d = 1;
    uStack_a8 = uVar12;
    pdb_140ffe230(&uStack_148,&uStack_c8);
    uStack_130 = (undefined *)0x4316000000000003;
    uStack_347 = CONCAT13((undefined1)uStack_104,uStack_108._1_3_);
    uStack_343 = CONCAT13(uStack_100,uStack_104._1_3_);
    uStack_388 = (undefined4)uStack_148;
    uStack_384 = uStack_148._4_4_;
    uStack_380 = (undefined4)uStack_140;
    uStack_37c = uStack_140._4_4_;
    uStack_368 = uStack_128;
    uStack_364 = uStack_124;
    uStack_360 = uStack_120;
    uStack_35c = uStack_11c;
    uStack_358 = (undefined4)uStack_118;
    uStack_354 = uStack_118._4_4_;
    uStack_350 = uStack_110;
    uStack_34c = uStack_10c;
    uStack_348 = (undefined1)uStack_108;
    uStack_378 = uStack_138;
    uStack_370 = 0x4316000000000003;
    uStack_33e = CONCAT22(uStack_fc,uStack_fe);
    uStack_33a = uStack_fa;
    uStack_33f = 1;
    pdb_14007ee60();
    pbVar9 = pub_1406abab0(0x50,8);
    pbStack_150 = pbVar9;
    if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x50);
    }
    *(ulonglong *)(pbVar9 + 0x40) = CONCAT35((undefined3)uStack_2f3,CONCAT41(uStack_2f7,uStack_2f8))
    ;
    *(ulonglong *)(pbVar9 + 0x48) =
         CONCAT26(uStack_2ea,CONCAT42(uStack_2ee,CONCAT11(uStack_2ef,uStack_2f3._3_1_)));
    *(undefined4 *)(pbVar9 + 0x30) = uStack_308;
    *(undefined4 *)(pbVar9 + 0x34) = uStack_304;
    *(undefined4 *)(pbVar9 + 0x38) = uStack_300;
    *(undefined4 *)(pbVar9 + 0x3c) = uStack_2fc;
    *(undefined4 *)(pbVar9 + 0x20) = uStack_318;
    *(undefined4 *)(pbVar9 + 0x24) = uStack_314;
    *(undefined4 *)(pbVar9 + 0x28) = uStack_310;
    *(undefined4 *)(pbVar9 + 0x2c) = uStack_30c;
    *(undefined4 *)(pbVar9 + 0x10) = (undefined4)uStack_328;
    *(undefined4 *)(pbVar9 + 0x14) = uStack_328._4_4_;
    *(undefined4 *)(pbVar9 + 0x18) = (undefined4)uStack_320;
    *(undefined4 *)(pbVar9 + 0x1c) = uStack_320._4_4_;
    *(undefined4 *)pbVar9 = uStack_338;
    *(undefined4 *)(pbVar9 + 4) = uStack_334;
    *(undefined4 *)(pbVar9 + 8) = uStack_330;
    *(undefined4 *)(pbVar9 + 0xc) = uStack_32c;
    uStack_c0 = &UNK_143271050;
    uStack_c8 = pbVar9;
    pdb_14007ee60();
    pbVar11 = pub_1406abab0(0x50,8);
    pbVar10 = pbStack_158;
    if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x50);
    }
    *(ulonglong *)(pbVar11 + 0x40) =
         CONCAT35((undefined3)uStack_343,CONCAT41(uStack_347,uStack_348));
    *(ulonglong *)(pbVar11 + 0x48) =
         CONCAT26(uStack_33a,CONCAT42(uStack_33e,CONCAT11(uStack_33f,uStack_343._3_1_)));
    *(undefined4 *)(pbVar11 + 0x30) = uStack_358;
    *(undefined4 *)(pbVar11 + 0x34) = uStack_354;
    *(undefined4 *)(pbVar11 + 0x38) = uStack_350;
    *(undefined4 *)(pbVar11 + 0x3c) = uStack_34c;
    *(undefined4 *)(pbVar11 + 0x20) = uStack_368;
    *(undefined4 *)(pbVar11 + 0x24) = uStack_364;
    *(undefined4 *)(pbVar11 + 0x28) = uStack_360;
    *(undefined4 *)(pbVar11 + 0x2c) = uStack_35c;
    *(undefined4 *)(pbVar11 + 0x10) = (undefined4)uStack_378;
    *(undefined4 *)(pbVar11 + 0x14) = uStack_378._4_4_;
    *(undefined4 *)(pbVar11 + 0x18) = (undefined4)uStack_370;
    *(undefined4 *)(pbVar11 + 0x1c) = uStack_370._4_4_;
    *(undefined4 *)pbVar11 = uStack_388;
    *(undefined4 *)(pbVar11 + 4) = uStack_384;
    *(undefined4 *)(pbVar11 + 8) = uStack_380;
    *(undefined4 *)(pbVar11 + 0xc) = uStack_37c;
    uStack_140 = &UNK_143271050;
    uStack_130 = &UNK_143271050;
    uStack_148 = pbVar9;
    uStack_138 = pbVar11;
    pdb_140fe95c0(&uStack_c8,&uStack_148);
  }
  uStack_90 = 0x42480000;
  uStack_1b8 = (undefined4)uStack_c8;
  uStack_1b4 = uStack_c8._4_4_;
  uStack_1b0 = (undefined4)uStack_c0;
  uStack_1ac = uStack_c0._4_4_;
  uStack_1a8 = (undefined4)uStack_b8;
  uStack_1a4 = uStack_b8._4_4_;
  uStack_1a0 = uStack_b0;
  uStack_19c = uStack_ac;
  uStack_198 = (undefined4)uStack_a8;
  uStack_194 = uStack_a8._4_4_;
  uStack_190 = uStack_a0;
  uStack_18c = uStack_9c;
  uStack_188 = CONCAT17(uStack_91,CONCAT25(uStack_93,CONCAT14(uStack_94,uStack_98)));
  uStack_180 = 0x42480000;
  uStack_17c = CONCAT22(uStack_8a,CONCAT11(uStack_8b,uStack_8c));
  uVar12 = *(ulonglong *)(&UNK_142f99d50 + (ulonglong)*(byte *)(param_1 + 0x38) * 8);
  iVar1 = *(int *)(&UNK_142f99d68 + (ulonglong)*(byte *)(param_1 + 0x38) * 4);
  pdb_14007ee60();
  pbVar9 = pub_1406abab0(uVar12,1);
  if (pbVar9 != (byte *)0x0) {
    pub_142e32760(pbVar9,&UNK_142f99d68 + iVar1,uVar12);
    pdb_14007ee60();
    pbVar11 = pub_1406abab0(0x70,8);
    if (pbVar11 == (byte *)0x0) {
      pbStack_158 = (byte *)uVar12;
      pbStack_150 = pbVar9;
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x70);
    }
    pbVar11[0] = 6;
    pbVar11[1] = 0;
    pbVar11[2] = 0;
    pbVar11[3] = 0;
    pbVar11[4] = 0;
    pbVar11[5] = 0;
    pbVar11[6] = 0;
    pbVar11[7] = 0;
    *(ulonglong *)(pbVar11 + 0x20) = uVar12;
    *(byte **)(pbVar11 + 0x28) = pbVar9;
    *(ulonglong *)(pbVar11 + 0x30) = uVar12;
    uVar5 = _UNK_142f97fac;
    uVar4 = _UNK_142f97fa8;
    uVar3 = _UNK_142f97fa4;
    *(undefined4 *)(pbVar11 + 0x38) = _DAT_142f97fa0;
    *(undefined4 *)(pbVar11 + 0x3c) = uVar3;
    *(undefined4 *)(pbVar11 + 0x40) = uVar4;
    *(undefined4 *)(pbVar11 + 0x44) = uVar5;
    pbVar11[0x48] = 2;
    pbVar11[0x49] = 0;
    pbVar11[0x50] = 2;
    pbVar11[0x51] = 0;
    pbVar11[0x58] = 0;
    pbVar11[0x59] = 0;
    pbVar11[0x5a] = 0;
    pbVar11[0x5b] = 0;
    pbVar11[0x6c] = 1;
    pbVar11[0x6d] = 0;
    pbVar11[0x6e] = 0;
    uStack_c0 = &UNK_1432711e8;
    uStack_c8 = pbVar11;
    pdb_14007ee60();
    pbVar9 = pub_1406abab0(0x70,8);
    if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x70);
    }
    pbVar9[0] = 6;
    pbVar9[1] = 0;
    pbVar9[2] = 0;
    pbVar9[3] = 0;
    pbVar9[4] = 0;
    pbVar9[5] = 0;
    pbVar9[6] = 0;
    pbVar9[7] = 0;
    *(byte **)(pbVar9 + 0x20) = pbStack_160;
    *(undefined **)(pbVar9 + 0x28) = puStack_168;
    *(byte **)(pbVar9 + 0x30) = pbVar10;
    uVar5 = _UNK_142f99a6c;
    uVar4 = _UNK_142f99a68;
    uVar3 = _UNK_142f99a64;
    *(undefined4 *)(pbVar9 + 0x38) = _DAT_142f99a60;
    *(undefined4 *)(pbVar9 + 0x3c) = uVar3;
    *(undefined4 *)(pbVar9 + 0x40) = uVar4;
    *(undefined4 *)(pbVar9 + 0x44) = uVar5;
    pbVar9[0x48] = 2;
    pbVar9[0x49] = 0;
    pbVar9[0x50] = 2;
    pbVar9[0x51] = 0;
    pbVar9[0x58] = 0;
    pbVar9[0x59] = 0;
    pbVar9[0x5a] = 0;
    pbVar9[0x5b] = 0;
    pbVar9[0x6c] = 1;
    pbVar9[0x6d] = 0;
    pbVar9[0x6e] = 0;
    uStack_140 = &UNK_1432711e8;
    uStack_130 = &UNK_1432711e8;
    uStack_4a = 0;
    uStack_4b = 1;
    uStack_148 = pbVar11;
    uStack_138 = pbVar9;
    pdb_140fe95c0(&uStack_c8,&uStack_148);
    uStack_90 = 0x41a00000;
    uStack_1f8 = (undefined4)uStack_c8;
    uStack_1f4 = uStack_c8._4_4_;
    uStack_1f0 = (undefined4)uStack_c0;
    uStack_1ec = uStack_c0._4_4_;
    uStack_1e8 = (undefined4)uStack_b8;
    uStack_1e4 = uStack_b8._4_4_;
    uStack_1e0 = uStack_b0;
    uStack_1dc = uStack_ac;
    uStack_1d8 = (undefined4)uStack_a8;
    uStack_1d4 = uStack_a8._4_4_;
    uStack_1d0 = uStack_a0;
    uStack_1c8 = CONCAT14(uStack_94,uStack_98);
    uStack_1cc = uStack_9c;
    uStack_1c3 = uStack_93;
    uStack_1c1 = uStack_91;
    uStack_1c0 = 0x41a00000;
    uStack_1bc = uStack_8c;
    uStack_1bb = 1;
    uStack_1ba = uStack_8a;
    pdb_14007ee60();
    pbVar10 = pub_1406abab0(0x40,8);
    if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x40);
    }
    *(ulonglong *)(pbVar10 + 0x30) = CONCAT17(uStack_1c1,CONCAT25(uStack_1c3,uStack_1c8));
    *(ulonglong *)(pbVar10 + 0x38) =
         CONCAT26(uStack_1ba,CONCAT15(uStack_1bb,CONCAT14(uStack_1bc,uStack_1c0)));
    *(ulonglong *)(pbVar10 + 0x20) = CONCAT44(uStack_1d4,uStack_1d8);
    *(ulonglong *)(pbVar10 + 0x28) = CONCAT44(uStack_1cc,uStack_1d0);
    *(ulonglong *)(pbVar10 + 0x10) = CONCAT44(uStack_1e4,uStack_1e8);
    *(ulonglong *)(pbVar10 + 0x18) = CONCAT44(uStack_1dc,uStack_1e0);
    *(ulonglong *)pbVar10 = CONCAT44(uStack_1f4,uStack_1f8);
    *(ulonglong *)(pbVar10 + 8) = CONCAT44(uStack_1ec,uStack_1f0);
    puStack_170 = &UNK_143270fd8;
    uStack_98 = (undefined4)uStack_188;
    uStack_94 = (undefined1)((ulonglong)uStack_188 >> 0x20);
    uStack_93 = (undefined2)((ulonglong)uStack_188 >> 0x28);
    uStack_91 = (undefined1)((ulonglong)uStack_188 >> 0x38);
    uStack_90 = uStack_180;
    uStack_8c = (undefined1)uStack_17c;
    uStack_8b = (undefined1)((uint)uStack_17c >> 8);
    uStack_8a = (undefined2)((uint)uStack_17c >> 0x10);
    uStack_a8._0_4_ = uStack_198;
    uStack_a8._4_4_ = uStack_194;
    uStack_a0 = uStack_190;
    uStack_9c = uStack_18c;
    uStack_b8._0_4_ = uStack_1a8;
    uStack_b8._4_4_ = uStack_1a4;
    uStack_b0 = uStack_1a0;
    uStack_ac = uStack_19c;
    uStack_c8 = (byte *)CONCAT44(uStack_1b4,uStack_1b8);
    uStack_c0 = (undefined *)CONCAT44(uStack_1ac,uStack_1b0);
    uStack_178 = pbVar10;
    pdb_14007ee60();
    pbVar9 = pub_1406abab0(0x40,8);
    if (pbVar9 != (byte *)0x0) {
      *(undefined4 *)(pbVar9 + 0x30) = (undefined4)uStack_188;
      *(undefined4 *)(pbVar9 + 0x34) = uStack_188._4_4_;
      *(undefined4 *)(pbVar9 + 0x38) = uStack_180;
      *(undefined4 *)(pbVar9 + 0x3c) = uStack_17c;
      *(undefined4 *)(pbVar9 + 0x20) = uStack_198;
      *(undefined4 *)(pbVar9 + 0x24) = uStack_194;
      *(undefined4 *)(pbVar9 + 0x28) = uStack_190;
      *(undefined4 *)(pbVar9 + 0x2c) = uStack_18c;
      *(undefined4 *)(pbVar9 + 0x10) = uStack_1a8;
      *(undefined4 *)(pbVar9 + 0x14) = uStack_1a4;
      *(undefined4 *)(pbVar9 + 0x18) = uStack_1a0;
      *(undefined4 *)(pbVar9 + 0x1c) = uStack_19c;
      *(undefined4 *)pbVar9 = uStack_1b8;
      *(undefined4 *)(pbVar9 + 4) = uStack_1b4;
      *(undefined4 *)(pbVar9 + 8) = uStack_1b0;
      *(undefined4 *)(pbVar9 + 0xc) = uStack_1ac;
      uStack_140 = &UNK_143270fd8;
      uStack_130 = &UNK_143270fd8;
      uStack_4a = 0;
      uStack_4b = 0;
      uStack_148 = pbVar10;
      uStack_138 = pbVar9;
      pdb_140ffffe0(&uStack_c8,&uStack_148);
      uStack_90 = 0x42480000;
      uStack_248 = uStack_c8;
      uStack_240 = uStack_c0;
      uStack_238 = (undefined4)uStack_b8;
      uStack_234 = uStack_b8._4_4_;
      uStack_230 = uStack_b0;
      uStack_22c = uStack_ac;
      uStack_228 = (undefined4)uStack_a8;
      uStack_224 = uStack_a8._4_4_;
      uStack_208 = (undefined1)uStack_88;
      uStack_210 = CONCAT26(uStack_8a,CONCAT15(uStack_8b,CONCAT14(uStack_8c,0x42480000)));
      uStack_206 = uStack_88._2_4_;
      uStack_202 = uStack_88._6_2_;
      uStack_220 = _DAT_142f97f80;
      uStack_21c = _UNK_142f97f84;
      uStack_218 = _UNK_142f97f88;
      uStack_214 = _UNK_142f97f8c;
      uStack_207 = 1;
      pdb_14007ee60();
      pbStack_408 = pub_1406abab0(0x48,8);
      if (pbStack_408 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x48);
      }
      *(ulonglong *)(pbStack_408 + 0x40) =
           CONCAT26(uStack_202,CONCAT42(uStack_206,CONCAT11(uStack_207,uStack_208)));
      *(undefined4 *)(pbStack_408 + 0x30) = uStack_218;
      *(undefined4 *)(pbStack_408 + 0x34) = uStack_214;
      *(undefined4 *)(pbStack_408 + 0x38) = (undefined4)uStack_210;
      *(undefined4 *)(pbStack_408 + 0x3c) = uStack_210._4_4_;
      *(undefined4 *)(pbStack_408 + 0x20) = uStack_228;
      *(undefined4 *)(pbStack_408 + 0x24) = uStack_224;
      *(undefined4 *)(pbStack_408 + 0x28) = uStack_220;
      *(undefined4 *)(pbStack_408 + 0x2c) = uStack_21c;
      *(undefined4 *)(pbStack_408 + 0x10) = uStack_238;
      *(undefined4 *)(pbStack_408 + 0x14) = uStack_234;
      *(undefined4 *)(pbStack_408 + 0x18) = uStack_230;
      *(undefined4 *)(pbStack_408 + 0x1c) = uStack_22c;
      *(undefined8 *)pbStack_408 = uStack_248;
      *(undefined8 *)(pbStack_408 + 8) = uStack_240;
      auStack_450[0] = 0x8000000000000002;
      uStack_438 = 2;
      uStack_430 = 2;
      uStack_428 = (ulonglong)_DAT_142e37878;
      uStack_420 = 0x41200000;
      uStack_41c = 0;
      uStack_40c = 2;
      puStack_400 = &UNK_1432710c8;
      uStack_3f8 = 0;
      uStack_3e8 = 0;
      uStack_4a = 0;
      uStack_4b = 0;
      pdb_141000c60(&uStack_c8,auStack_450);
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_93 = 0;
      uStack_91 = 0;
      uStack_148 = uStack_c8;
      uStack_140 = uStack_c0;
      uStack_138 = (byte *)CONCAT44(uStack_b8._4_4_,(undefined4)uStack_b8);
      uStack_130 = (undefined *)CONCAT44(uStack_ac,uStack_b0);
      uStack_128 = (undefined4)uStack_a8;
      uStack_124 = uStack_a8._4_4_;
      uStack_120 = uStack_a0;
      uStack_11c = uStack_9c;
      uStack_118 = 0;
      uStack_108 = (undefined4)uStack_88;
      uStack_104 = uStack_88._4_4_;
      uStack_100 = (undefined1)_uStack_80;
      uStack_ff = (undefined1)((uint)_uStack_80 >> 8);
      uStack_fe = (undefined2)((uint)_uStack_80 >> 0x10);
      uStack_fc = (undefined2)uStack_7c;
      uStack_fa = (undefined2)((uint)uStack_7c >> 0x10);
      uStack_f8 = CONCAT62(uStack_76,uStack_78);
      uStack_f0 = (undefined1)uStack_70;
      uStack_ef = CONCAT13(uStack_6c,uStack_70._1_3_);
      uStack_eb = uStack_6b;
      uStack_e8 = uStack_68;
      uStack_e7 = uStack_67;
      uStack_e3 = uStack_63;
      uStack_178._0_6_ = CONCAT24(uStack_5a,uStack_5e);
      uVar6 = (undefined6)uStack_178;
      uVar8 = uStack_178;
      uStack_110 = 0;
      uStack_10c = 0;
      uStack_df = 0x101;
      uStack_178._5_1_ = (undefined1)(uStack_5a >> 8);
      uStack_d9 = uStack_178._5_1_;
      uStack_178._1_4_ = SUB64(uVar6,1);
      uStack_dd = uStack_178._1_4_;
      uStack_178 = (byte *)uVar8;
      pdb_14007ee60();
      pbVar10 = pub_1406abab0(0x70,8);
      if (pbVar10 != (byte *)0x0) {
        *(ulonglong *)(pbVar10 + 0x60) =
             CONCAT35((undefined3)uStack_e3,CONCAT41(uStack_e7,uStack_e8));
        *(ulonglong *)(pbVar10 + 0x68) =
             CONCAT17(uStack_d9,CONCAT43(uStack_dd,CONCAT21(uStack_df,uStack_e3._3_1_)));
        *(undefined8 *)(pbVar10 + 0x50) = uStack_f8;
        *(ulonglong *)(pbVar10 + 0x58) = CONCAT35(uStack_eb,CONCAT41(uStack_ef,uStack_f0));
        *(ulonglong *)(pbVar10 + 0x40) = CONCAT44(uStack_104,uStack_108);
        *(ulonglong *)(pbVar10 + 0x48) =
             CONCAT26(uStack_fa,
                      CONCAT24(uStack_fc,CONCAT22(uStack_fe,CONCAT11(uStack_ff,uStack_100))));
        *(undefined8 *)(pbVar10 + 0x30) = uStack_118;
        *(ulonglong *)(pbVar10 + 0x38) = CONCAT44(uStack_10c,uStack_110);
        *(ulonglong *)(pbVar10 + 0x20) = CONCAT44(uStack_124,uStack_128);
        *(ulonglong *)(pbVar10 + 0x28) = CONCAT44(uStack_11c,uStack_120);
        *(byte **)(pbVar10 + 0x10) = uStack_138;
        *(undefined **)(pbVar10 + 0x18) = uStack_130;
        *(byte **)pbVar10 = uStack_148;
        *(undefined **)(pbVar10 + 8) = uStack_140;
        return;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x70);
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x40);
  }
  uStack_4a = 1;
  uStack_4b = 1;
  pdb_142dc7e2a(1,uVar12);
LAB_1406ceb86:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

