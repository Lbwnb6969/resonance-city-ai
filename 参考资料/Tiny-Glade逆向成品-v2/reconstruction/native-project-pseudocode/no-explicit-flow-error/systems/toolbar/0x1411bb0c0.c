// VA 0x1411bb0c0, PDB extent 2668 bytes
// relative_path::path_ext::impl$3::relative_to<ref$<std::path::Path> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: relative_path::path_ext::impl$3::relative_to<ref$<std::path::Path>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 2668 */

ulonglong *
pdb_1411bb0c0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined3 uVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte bStack_458;
  undefined4 uStack_457;
  undefined4 uStack_453;
  undefined4 uStack_44f;
  undefined4 uStack_44b;
  undefined8 uStack_447;
  undefined8 uStack_43f;
  undefined8 uStack_437;
  undefined7 uStack_42f;
  undefined1 uStack_428;
  undefined7 uStack_427;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  longlong lStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  longlong lStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 auStack_3a0 [3];
  byte bStack_388;
  undefined8 uStack_387;
  undefined4 uStack_37f;
  undefined2 uStack_37b;
  undefined1 uStack_379;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 uStack_358;
  longlong lStack_348;
  undefined1 uStack_340;
  undefined7 uStack_33f;
  undefined1 uStack_338;
  undefined7 uStack_337;
  longlong lStack_330;
  undefined1 uStack_328;
  undefined7 uStack_327;
  undefined1 uStack_320;
  undefined7 uStack_31f;
  uint uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined1 uStack_308;
  undefined7 uStack_307;
  undefined1 uStack_300;
  undefined7 uStack_2ff;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined7 uStack_2ef;
  undefined1 uStack_2e8;
  undefined7 uStack_2e7;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  longlong lStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  char cStack_298;
  undefined8 uStack_297;
  undefined4 uStack_28f;
  undefined2 uStack_28b;
  undefined1 uStack_289;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 uStack_268;
  longlong lStack_260;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined7 uStack_24f;
  uint uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined7 uStack_21f;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  longlong lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  ulonglong uStack_198;
  undefined8 uStack_190;
  longlong lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  byte bStack_158;
  undefined8 uStack_157;
  undefined4 uStack_14f;
  undefined2 uStack_14b;
  undefined1 uStack_149;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 uStack_128;
  undefined7 uStack_127;
  char cStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined4 uStack_117;
  undefined2 uStack_113;
  undefined1 uStack_111;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  uint uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_68;
  byte *pbStack_60;
  ulonglong uStack_58;
  ulonglong *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_50 = param_1;
  pdb_140f3ddd0(&uStack_3e0);
  pdb_140f3ddd0(&uStack_420,param_4,param_5);
  lVar8 = 0;
LAB_1411bb150:
  pdb_140f5bb30(&uStack_198,&uStack_3e0);
  pdb_140f5bb30(&uStack_1d0,&uStack_420);
  uStack_b8 = (undefined1)uStack_168;
  uStack_b7 = (undefined7)((ulonglong)uStack_168 >> 8);
  uStack_c8 = (undefined1)uStack_178;
  uStack_c7 = (undefined7)((ulonglong)uStack_178 >> 8);
  uStack_c0 = (undefined1)uStack_170;
  uStack_bf = (undefined7)((ulonglong)uStack_170 >> 8);
  uStack_d8 = (undefined1)lStack_188;
  uStack_d7 = (undefined7)((ulonglong)lStack_188 >> 8);
  uStack_d0 = (undefined1)uStack_180;
  uStack_cf = (undefined7)((ulonglong)uStack_180 >> 8);
  uStack_e8 = (uint)uStack_198;
  uStack_e4 = (undefined4)(uStack_198 >> 0x20);
  uStack_e0 = (undefined4)uStack_190;
  uStack_dc = (undefined4)((ulonglong)uStack_190 >> 0x20);
  uStack_80 = uStack_1a0;
  uStack_90 = CONCAT44(uStack_1ac,uStack_1b0);
  uStack_88 = CONCAT44(uStack_1a4,uStack_1a8);
  uStack_a0 = CONCAT44(uStack_1bc,uStack_1c0);
  uStack_98 = CONCAT44(uStack_1b4,uStack_1b8);
  uStack_b0 = CONCAT44(uStack_1cc,uStack_1d0);
  uStack_a8 = CONCAT44(uStack_1c4,uStack_1c8);
  if ((uStack_198 & 0xff) == 10) {
    if ((byte)uStack_1d0 == 10) {
      uStack_168 = uStack_1a0;
      uStack_198 = CONCAT44(uStack_1cc,uStack_1d0);
      uStack_190 = CONCAT44(uStack_1c4,uStack_1c8);
      lStack_188 = CONCAT44(uStack_1bc,uStack_1c0);
      uStack_180 = CONCAT44(uStack_1b4,uStack_1b8);
      uStack_178 = CONCAT44(uStack_1ac,uStack_1b0);
      uStack_170 = CONCAT44(uStack_1a4,uStack_1a8);
    }
    else if ((byte)uStack_1d0 < 7) goto LAB_1411bb2f6;
  }
  else {
    if ((byte)uStack_1d0 == 10) {
      if (6 < (byte)uStack_198) goto LAB_1411bb317;
      goto LAB_1411bb2f6;
    }
    lVar6 = (uStack_198 & 0xff) - 5;
    if ((byte)uStack_198 < 6) {
      lVar6 = lVar8;
    }
    if (lVar6 == 0) {
      if (5 < (byte)uStack_1d0) goto LAB_1411bb230;
      cVar3 = pdb_1411bb030(&uStack_e8,&uStack_b0);
      if (cVar3 == '\0') {
LAB_1411bb2f6:
        *(undefined1 *)(puStack_50 + 1) = 1;
        *puStack_50 = 0x8000000000000000;
        return puStack_50;
      }
      goto LAB_1411bb150;
    }
    if (((int)lVar6 == 1) && ((byte)uStack_1d0 == 6)) goto LAB_1411bb150;
LAB_1411bb230:
    if (((byte)uStack_198 < 7) || ((byte)uStack_1d0 < 7)) goto LAB_1411bb2f6;
    lVar6 = (uStack_198 & 0xff) - 5;
    if ((uStack_198 & 0xff) < 6) {
      lVar6 = lVar8;
    }
    lVar7 = ((ulonglong)uStack_1d0 & 0xff) - 5;
    if (((ulonglong)uStack_1d0 & 0xff) < 6) {
      lVar7 = lVar8;
    }
    if (lVar6 == lVar7) {
      if (lVar6 != 0) {
        if (((int)lVar6 == 4) &&
           ((lStack_188 != uStack_a0 || (iVar5 = pub_142e32750(uStack_190,uStack_a8), iVar5 != 0))))
        goto LAB_1411bb317;
        goto LAB_1411bb150;
      }
      cVar3 = pdb_1411bb030(&uStack_e8,&uStack_b0);
      if (cVar3 != '\0') goto LAB_1411bb150;
    }
  }
LAB_1411bb317:
  uStack_2e8 = (undefined1)uStack_168;
  uStack_2e7 = (undefined7)((ulonglong)uStack_168 >> 8);
  uStack_2f8 = (undefined1)uStack_178;
  uStack_2f7 = (undefined7)((ulonglong)uStack_178 >> 8);
  uStack_2f0 = (undefined1)uStack_170;
  uStack_2ef = (undefined7)((ulonglong)uStack_170 >> 8);
  uStack_308 = (undefined1)lStack_188;
  uStack_307 = (undefined7)((ulonglong)lStack_188 >> 8);
  uStack_300 = (undefined1)uStack_180;
  uStack_2ff = (undefined7)((ulonglong)uStack_180 >> 8);
  uStack_318 = (uint)uStack_198;
  uStack_314 = (undefined4)(uStack_198 >> 0x20);
  uStack_310 = (undefined4)uStack_190;
  uStack_30c = (undefined4)((ulonglong)uStack_190 >> 0x20);
  uStack_2e0 = uStack_3e0;
  uStack_2d8 = uStack_3d8;
  lStack_2d0 = lStack_3d0;
  uStack_2c8 = uStack_3c8;
  uStack_2c0 = uStack_3c0;
  uStack_2b8 = uStack_3b8;
  uStack_2b0 = uStack_3b0;
  uStack_2a8 = uStack_3a8;
  uStack_218 = (undefined1)uStack_1a0;
  uStack_217 = (undefined7)((ulonglong)uStack_1a0 >> 8);
  uStack_228 = (undefined1)uStack_1b0;
  uStack_227 = (undefined7)(CONCAT44(uStack_1ac,uStack_1b0) >> 8);
  uStack_220 = (undefined1)uStack_1a8;
  uStack_21f = (undefined7)(CONCAT44(uStack_1a4,uStack_1a8) >> 8);
  uStack_238 = (undefined1)uStack_1c0;
  uStack_237 = (undefined7)(CONCAT44(uStack_1bc,uStack_1c0) >> 8);
  uStack_230 = (undefined1)uStack_1b8;
  uStack_22f = (undefined7)(CONCAT44(uStack_1b4,uStack_1b8) >> 8);
  uStack_248 = uStack_1d0;
  uStack_244 = uStack_1cc;
  uStack_240 = uStack_1c8;
  uStack_23c = uStack_1c4;
  uStack_210 = uStack_420;
  uStack_20c = uStack_41c;
  uStack_208 = uStack_418;
  uStack_204 = uStack_414;
  lStack_200 = lStack_410;
  uStack_1f8 = uStack_408;
  uStack_1f0 = uStack_400;
  uStack_1e8 = uStack_3f8;
  uStack_1e0 = uStack_3f0;
  uStack_1d8 = uStack_3e8;
  uStack_68 = 0;
  pbStack_60 = (byte *)0x1;
  uStack_58 = 0;
LAB_1411bb430:
  cVar3 = (char)uStack_318;
  if ((char)uStack_318 == '\v') {
LAB_1411bb44d:
    if ((uStack_2a8._2_1_ == '\x02') || (pdb_140f5bb30(&cStack_120,&uStack_2e0), cStack_120 == '\n')
       ) {
      uStack_78 = uStack_1d8;
      uStack_88 = uStack_1e8;
      uStack_80 = uStack_1e0;
      uStack_98 = uStack_1f8;
      uStack_90 = uStack_1f0;
      uStack_a8 = CONCAT44(uStack_204,uStack_208);
      uStack_a0 = lStack_200;
      uStack_b0 = CONCAT44(uStack_20c,uStack_210);
      uStack_b8 = uStack_218;
      uStack_b7 = uStack_217;
      uStack_c8 = uStack_228;
      uStack_c7 = uStack_227;
      uStack_c0 = uStack_220;
      uStack_bf = uStack_21f;
      uStack_d8 = uStack_238;
      uStack_d7 = uStack_237;
      uStack_d0 = uStack_230;
      uStack_cf = uStack_22f;
      uStack_e8 = uStack_248;
      uStack_e4 = uStack_244;
      uStack_e0 = uStack_240;
      uStack_dc = uStack_23c;
      goto LAB_1411bb864;
    }
  }
  else {
    uVar1 = uStack_318._1_3_;
    uStack_318 = CONCAT31(uStack_318._1_3_,(char)uStack_318 == '\n') | 10;
    if (cVar3 == '\n') goto LAB_1411bb44d;
    cStack_120 = cVar3;
    uStack_ef = uStack_2e7;
    uStack_11f = CONCAT43(uStack_314,uVar1);
    uStack_fc = (undefined4)((uint7)uStack_2f7 >> 0x18);
    uStack_f8 = CONCAT31((int3)uStack_2ef,uStack_2f0);
    uStack_f4 = (undefined4)((uint7)uStack_2ef >> 0x18);
    uStack_f0 = uStack_2e8;
    uStack_10c = (undefined4)((uint7)uStack_307 >> 0x18);
    uStack_108 = CONCAT31((int3)uStack_2ff,uStack_300);
    uStack_104 = (undefined4)((uint7)uStack_2ff >> 0x18);
    uStack_100 = CONCAT31((int3)uStack_2f7,uStack_2f8);
    uStack_118 = (undefined1)uStack_310;
    uStack_117 = (undefined4)CONCAT43(uStack_30c,uStack_310._1_3_);
    uStack_113 = (undefined2)((uint)uStack_30c >> 8);
    uStack_111 = (undefined1)((uint)uStack_30c >> 0x18);
    uStack_110 = CONCAT31((int3)uStack_307,uStack_308);
  }
  uStack_268 = CONCAT71(uStack_ef,uStack_f0);
  uStack_297 = CONCAT17(uStack_118,uStack_11f);
  uStack_278 = uStack_100;
  uStack_274 = uStack_fc;
  uStack_270 = uStack_f8;
  uStack_26c = uStack_f4;
  uStack_288 = uStack_110;
  uStack_284 = uStack_10c;
  uStack_280 = uStack_108;
  uStack_27c = uStack_104;
  cStack_298 = cStack_120;
  uStack_28f = uStack_117;
  uStack_28b = uStack_113;
  uStack_289 = uStack_111;
  bVar2 = (byte)uStack_248;
  if ((byte)uStack_248 == 0xb) {
LAB_1411bb535:
    if ((uStack_1d8._2_1_ != '\x02') && (pdb_140f5bb30(&bStack_458,&uStack_210), bStack_458 != 10))
    goto LAB_1411bb582;
LAB_1411bb623:
    uStack_78 = uStack_1d8;
    uStack_88 = uStack_1e8;
    uStack_80 = uStack_1e0;
    uStack_98 = uStack_1f8;
    uStack_90 = uStack_1f0;
    uStack_a8 = CONCAT44(uStack_204,uStack_208);
    uStack_a0 = lStack_200;
    uStack_b0 = CONCAT44(uStack_20c,uStack_210);
    uStack_b8 = uStack_218;
    uStack_b7 = uStack_217;
    uStack_c8 = uStack_228;
    uStack_c7 = uStack_227;
    uStack_c0 = uStack_220;
    uStack_bf = uStack_21f;
    uStack_d8 = uStack_238;
    uStack_d7 = uStack_237;
    uStack_d0 = uStack_230;
    uStack_cf = uStack_22f;
    uStack_e8 = uStack_248;
    uStack_e4 = uStack_244;
    uStack_e0 = uStack_240;
    uStack_dc = uStack_23c;
    goto LAB_1411bb6d7;
  }
  uVar1 = uStack_248._1_3_;
  uStack_248 = CONCAT31(uStack_248._1_3_,(byte)uStack_248 == 10) | 10;
  if (bVar2 == 10) goto LAB_1411bb535;
  bStack_458 = bVar2;
  uStack_427 = uStack_217;
  uStack_457 = CONCAT13((undefined1)uStack_244,uVar1);
  uStack_453 = CONCAT13((undefined1)uStack_240,uStack_244._1_3_);
  uStack_44f = CONCAT13((undefined1)uStack_23c,uStack_240._1_3_);
  uStack_44b = CONCAT13(uStack_238,uStack_23c._1_3_);
  uStack_447 = CONCAT17(uStack_230,uStack_237);
  uStack_43f = CONCAT17(uStack_228,uStack_22f);
  uStack_437 = CONCAT17(uStack_220,uStack_227);
  uStack_42f = uStack_21f;
  uStack_428 = uStack_218;
LAB_1411bb582:
  iVar5 = (byte)(bStack_458 - 6) + 1;
  if (bStack_458 < 6) {
    iVar5 = 0;
  }
  if (iVar5 != 2) {
    if (iVar5 != 3) {
      uStack_e8 = 1;
      uStack_e4 = 0;
      pdb_1411bc4b0(&uStack_68,&uStack_e8);
      goto LAB_1411bb623;
    }
    goto LAB_1411bb73d;
  }
  pdb_14236af50(&uStack_e8,&cStack_298);
  uVar4 = (undefined1)uStack_e0;
  if (CONCAT44(uStack_e4,uStack_e8) == 3) goto LAB_1411bb776;
  uStack_327 = CONCAT43(uStack_dc,uStack_e0._1_3_);
  uStack_31f = uStack_d7;
  uStack_320 = uStack_d8;
  uStack_328 = (undefined1)uStack_e0;
  lStack_330 = CONCAT44(uStack_e4,uStack_e8);
  pdb_1411bc4b0(&uStack_68,&lStack_330);
  goto LAB_1411bb430;
LAB_1411bb864:
  cVar3 = (byte)uStack_e8;
  if ((byte)uStack_e8 == '\v') {
LAB_1411bb881:
    if ((uStack_78._2_1_ == '\x02') || (pdb_140f5bb30(&bStack_158,&uStack_b0), bStack_158 == 10))
    goto LAB_1411bb89f;
  }
  else {
    uStack_e8 = CONCAT31(uStack_e8._1_3_,(byte)uStack_e8 == '\n') | 10;
    if (cVar3 == '\n') goto LAB_1411bb881;
  }
  auStack_3a0[0] = 1;
  pdb_1411bc4b0(&uStack_68,auStack_3a0);
  goto LAB_1411bb864;
LAB_1411bb9b0:
  bVar2 = (byte)uStack_e8;
  if ((byte)uStack_e8 == 0xb) {
LAB_1411bb9cd:
    if ((uStack_78._2_1_ == '\x02') || (pdb_140f5bb30(&bStack_158,&uStack_b0), bStack_158 == 10)) {
LAB_1411bb89f:
      puStack_50[2] = uStack_58;
      *puStack_50 = uStack_68;
      puStack_50[1] = (ulonglong)pbStack_60;
      return puStack_50;
    }
  }
  else {
    uVar1 = uStack_e8._1_3_;
    uStack_e8 = CONCAT31(uStack_e8._1_3_,(byte)uStack_e8 == 10) | 10;
    if (bVar2 == 10) goto LAB_1411bb9cd;
    bStack_158 = bVar2;
    uStack_127 = uStack_b7;
    uStack_157 = CONCAT17((undefined1)uStack_e0,CONCAT43(uStack_e4,uVar1));
    uStack_134 = (undefined4)((uint7)uStack_c7 >> 0x18);
    uStack_130 = CONCAT31((int3)uStack_bf,uStack_c0);
    uStack_12c = (undefined4)((uint7)uStack_bf >> 0x18);
    uStack_128 = uStack_b8;
    uStack_144 = (undefined4)((uint7)uStack_d7 >> 0x18);
    uStack_140 = CONCAT31((int3)uStack_cf,uStack_d0);
    uStack_13c = (undefined4)((uint7)uStack_cf >> 0x18);
    uStack_138 = CONCAT31((int3)uStack_c7,uStack_c8);
    uStack_14f = (undefined4)CONCAT43(uStack_dc,uStack_e0._1_3_);
    uStack_14b = (undefined2)((uint)uStack_dc >> 8);
    uStack_149 = (undefined1)((uint)uStack_dc >> 0x18);
    uStack_148 = CONCAT31((int3)uStack_d7,uStack_d8);
  }
  uStack_358 = CONCAT71(uStack_127,uStack_128);
  uStack_368 = uStack_138;
  uStack_364 = uStack_134;
  uStack_360 = uStack_130;
  uStack_35c = uStack_12c;
  uStack_378 = uStack_148;
  uStack_374 = uStack_144;
  uStack_370 = uStack_140;
  uStack_36c = uStack_13c;
  bStack_388 = bStack_158;
  uStack_387 = uStack_157;
  uStack_37f = uStack_14f;
  uStack_37b = uStack_14b;
  uStack_379 = uStack_149;
  pdb_14236af50(&cStack_120,&bStack_388);
  uVar4 = uStack_118;
  if (CONCAT71(uStack_11f,cStack_120) == 3) goto LAB_1411bb776;
  uStack_33f = CONCAT16(uStack_111,CONCAT24(uStack_113,uStack_117));
  uStack_337 = (undefined7)(CONCAT44(uStack_10c,uStack_110) >> 8);
  uStack_338 = (undefined1)uStack_110;
  uStack_340 = uStack_118;
  lStack_348 = CONCAT71(uStack_11f,cStack_120);
  pdb_1411bc4b0(&uStack_68,&lStack_348);
  goto LAB_1411bb9b0;
LAB_1411bb776:
  *(undefined1 *)(puStack_50 + 1) = uVar4;
  goto LAB_1411bb780;
  while (cVar3 = pdb_14236aeb0(&uStack_68), cVar3 != '\0') {
LAB_1411bb6d7:
    do {
      bVar2 = (byte)uStack_e8;
      if ((byte)uStack_e8 == 0xb) {
LAB_1411bb6f4:
        if ((uStack_78._2_1_ == '\x02') ||
           (pdb_140f5bb30(&bStack_158,&uStack_b0), bVar2 = bStack_158, bStack_158 == 10)) {
          pdb_14236af50(&uStack_e8,&cStack_298);
          uVar4 = (undefined1)uStack_e0;
          if (CONCAT44(uStack_e4,uStack_e8) == 3) goto LAB_1411bb776;
          uStack_257 = CONCAT43(uStack_dc,uStack_e0._1_3_);
          uStack_24f = uStack_d7;
          uStack_250 = uStack_d8;
          uStack_258 = (undefined1)uStack_e0;
          lStack_260 = CONCAT44(uStack_e4,uStack_e8);
          pdb_1411bc4b0(&uStack_68,&lStack_260);
          uStack_78 = uStack_2a8;
          uStack_88 = uStack_2b8;
          uStack_80 = uStack_2b0;
          uStack_98 = uStack_2c8;
          uStack_90 = uStack_2c0;
          uStack_a8 = uStack_2d8;
          uStack_a0 = lStack_2d0;
          uStack_b8 = uStack_2e8;
          uStack_b7 = uStack_2e7;
          uStack_b0 = uStack_2e0;
          uStack_c8 = uStack_2f8;
          uStack_c7 = uStack_2f7;
          uStack_c0 = uStack_2f0;
          uStack_bf = uStack_2ef;
          uStack_d8 = uStack_308;
          uStack_d7 = uStack_307;
          uStack_d0 = uStack_300;
          uStack_cf = uStack_2ff;
          uStack_e8 = uStack_318;
          uStack_e4 = uStack_314;
          uStack_e0 = uStack_310;
          uStack_dc = uStack_30c;
          goto LAB_1411bb9b0;
        }
      }
      else {
        uStack_e8 = CONCAT31(uStack_e8._1_3_,(byte)uStack_e8 == 10) | 10;
        if (bVar2 == 10) goto LAB_1411bb6f4;
      }
      iVar5 = (byte)(bVar2 - 6) + 1;
      if (bVar2 < 6) {
        iVar5 = 0;
      }
    } while (iVar5 == 2);
    if (iVar5 != 3) {
      cStack_120 = '\x01';
      uStack_11f = 0;
      pdb_1411bc4b0(&uStack_68,&cStack_120);
      goto LAB_1411bb6d7;
    }
  }
LAB_1411bb73d:
  *(undefined1 *)(puStack_50 + 1) = 2;
LAB_1411bb780:
  *puStack_50 = 0x8000000000000000;
  if (uStack_68 != 0) {
    pub_1406abac0(pbStack_60,uStack_68,1);
  }
  return puStack_50;
}

