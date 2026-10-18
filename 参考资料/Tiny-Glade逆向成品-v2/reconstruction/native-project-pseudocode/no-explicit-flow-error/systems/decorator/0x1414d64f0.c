// VA 0x1414d64f0, PDB extent 9383 bytes
// system_decorator::decorator_visual::cottage_dormers::assemble_dormer_roof_tiles::assemble_dormer_roof_tiles<system_decorator::decorator_visual::cottage_dormers::assemble_dormer_roof_tiles::generate_dormer_roofs::closure_env$4>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_dormers/assemble_dormer_roof_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::cottage_dormers::assemble_dormer_roof_tiles::assemble_dormer_roof_tiles<system_decorator::decorator_visual::cottage_dormers::assemble_dormer_roof_tiles::generate_dormer_roofs::closure_env$4>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_dormers/assemble_dormer_roof_tiles.rs
   Extent: 9383 */

void pdb_1414d64f0(undefined1 *param_1,ulonglong param_2,float param_3,longlong param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,float param_8,
                  undefined8 param_9,char param_10)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  char cVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong *plVar25;
  undefined8 uVar26;
  byte *pbVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined *puVar30;
  longlong unaff_R12;
  undefined *puVar31;
  undefined *puVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar39;
  float in_XMM1_Da;
  float fVar40;
  float fVar42;
  undefined1 auVar41 [16];
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined auStack_4ac [28];
  undefined1 auStack_490 [28];
  undefined1 auStack_474 [28];
  float fStack_458;
  float fStack_454;
  undefined8 uStack_450;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float *pfStack_410;
  float *pfStack_408;
  undefined8 uStack_400;
  ulonglong *puStack_3f8;
  undefined4 *puStack_3f0;
  undefined1 auStack_3e4 [28];
  float fStack_3c8;
  float fStack_3c4;
  undefined8 uStack_3c0;
  float fStack_3b8;
  float fStack_3b4;
  undefined8 uStack_3b0;
  longlong lStack_3a0;
  byte *pbStack_398;
  longlong lStack_390;
  float fStack_384;
  undefined8 uStack_380;
  float afStack_378 [2];
  float fStack_370;
  float afStack_36c [2];
  float fStack_364;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  longlong lStack_340;
  longlong lStack_338;
  longlong lStack_330;
  byte *pbStack_328;
  longlong lStack_320;
  float fStack_318;
  float fStack_314;
  undefined8 uStack_310;
  undefined1 auStack_308 [28];
  float fStack_2ec;
  float fStack_2e8;
  undefined4 uStack_2e4;
  undefined8 uStack_2e0;
  byte *pbStack_2d8;
  byte *pbStack_2d0;
  float *pfStack_2c8;
  float *pfStack_2c0;
  undefined4 *puStack_2b8;
  undefined4 uStack_2b0;
  longlong lStack_298;
  undefined8 uStack_290;
  byte *pbStack_288;
  byte *pbStack_280;
  float fStack_278;
  float fStack_274;
  undefined8 uStack_270;
  float fStack_268;
  float fStack_264;
  undefined8 uStack_260;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  undefined4 uStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  undefined4 uStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  longlong lStack_1e8;
  byte *pbStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  float fStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  float fStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  int iStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  uint uStack_130;
  uint uStack_12c;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  int iStack_114;
  undefined8 uStack_110;
  float fStack_104;
  longlong lStack_100;
  ulonglong auStack_f8 [23];
  
  auStack_f8[1] = 0xfffffffffffffffe;
  fStack_174 = in_XMM1_Da;
  cVar21 = pdb_140e94b40();
  if (cVar21 == '\0') {
    lVar23 = 0;
    goto LAB_1414d6707;
  }
  lVar29 = 0x6b;
  lVar23 = pdb_1414d8f00(0x6b);
  puVar31 = &UNK_143314ff0;
  if (lVar23 == 1) {
    if (param_2 < 0x6c) {
      uVar24 = pdb_1414d8f00(param_2);
      if ((uVar24 & 1) != 0) {
        if (0x6b < param_2 + 2) goto LAB_1414d84e2;
        lVar29 = 0x69 - param_2;
        puVar31 = &UNK_143314ff2 + param_2;
      }
      goto LAB_1414d65d7;
    }
  }
  else {
LAB_1414d65d7:
    puVar30 = &UNK_143314f5f;
    puVar32 = &UNK_143314f04;
    do {
      bVar1 = puVar30[-1];
      uVar22 = (uint)(char)bVar1;
      if ((char)bVar1 < '\0') {
        bVar2 = puVar30[-2];
        if ((char)bVar2 < -0x40) {
          bVar3 = puVar30[-3];
          if ((char)bVar3 < -0x40) {
            pbVar27 = puVar30 + -4;
            puVar30 = puVar30 + -4;
            uVar22 = bVar3 & 0x3f | (*pbVar27 & 7) << 6;
          }
          else {
            puVar30 = puVar30 + -3;
            uVar22 = bVar3 & 0xf;
          }
          uVar22 = bVar2 & 0x3f | uVar22 << 6;
        }
        else {
          puVar30 = puVar30 + -2;
          uVar22 = bVar2 & 0x1f;
        }
        uVar22 = (uint)(bVar1 & 0x3f) | uVar22 << 6;
        if (uVar22 != 0x5c) goto LAB_1414d6664;
LAB_1414d667d:
        if ((undefined *)0x5b < puVar30 + -0x143314f03) goto LAB_1414d849f;
        unaff_R12 = 0x5b - (longlong)(puVar30 + -0x143314f03);
        puVar32 = puVar30 + 1;
        goto LAB_1414d66a0;
      }
      puVar30 = puVar30 + -1;
      if (uVar22 == 0x5c) goto LAB_1414d667d;
LAB_1414d6664:
      if (uVar22 == 0x2f) goto LAB_1414d667d;
    } while (puVar30 != &UNK_143314f04);
    unaff_R12 = 0x5b;
LAB_1414d66a0:
    plVar25 = (longlong *)pdb_140e97000();
    if ((char)plVar25[0xd] != '\x01') goto LAB_1414d8449;
    do {
      if (*plVar25 == 0) {
        *plVar25 = -1;
        uStack_1d8 = plVar25;
        uStack_290 = pdb_140e94f10(plVar25 + 1,puVar31,lVar29,puVar32,unaff_R12,1,0);
        *uStack_1d8 = *uStack_1d8 + 1;
        lVar23 = 1;
LAB_1414d6707:
        lStack_298 = lVar23;
        lStack_100 = lVar23;
        fVar33 = (float)pdb_140b77a00(param_5);
        if (2 < param_4 - 1U) {
          lStack_100 = lVar23;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_14301200e,0x28,&UNK_143012098);
        }
        fVar48 = *(float *)(&UNK_14331510c + param_4 * 4);
        fStack_150 = *(float *)(param_1 + 0x10);
        fStack_164 = *(float *)(param_1 + 0x14);
        uStack_2e0 = *(longlong *)(param_1 + 0x10);
        fStack_14c = *(float *)(param_1 + 0x18);
        pbStack_2d8 = (byte *)CONCAT44(pbStack_2d8._4_4_,fStack_14c);
        lStack_100 = lVar23;
        pdb_140b77d90(auStack_3e4,param_5,&uStack_2e0);
        fStack_16c = fStack_150;
        fStack_168 = fStack_14c;
        lStack_100 = lVar23;
        uVar34 = pdb_140a850f0(auStack_3e4);
        lStack_100 = lVar23;
        uVar35 = pdb_140a84dc0(auStack_3e4);
        fStack_154 = param_3 + fStack_164;
        uStack_2e0 = CONCAT44(uVar34,uVar35);
        lStack_100 = lVar23;
        pdb_140df4540(&fStack_244,&uStack_2e0,fStack_154);
        fStack_158 = fVar33 * fVar48 + fStack_154;
        uStack_148 = (undefined8 *)CONCAT44(fStack_14c,fStack_150);
        lStack_100 = lVar23;
        pdb_140df4540(&uStack_2e0,&uStack_148,fStack_158);
        lStack_100 = lVar23;
        pdb_140b77d90(auStack_474,param_5,&uStack_2e0);
        lStack_100 = lVar23;
        uVar34 = pdb_140a850f0(auStack_474);
        lStack_100 = lVar23;
        uVar35 = pdb_140a84dc0(auStack_474);
        uStack_2e0 = CONCAT44(uVar34,uVar35);
        lStack_100 = lVar23;
        pdb_140df4540(&fStack_250,&uStack_2e0,fStack_158);
        fVar48 = _DAT_142e36f30;
        fVar33 = _DAT_142e36f2c;
        fVar40 = SQRT(fStack_14c * _UNK_143314da4 * fStack_14c * _UNK_143314da4 +
                      _DAT_142e37878 * fStack_164 * _DAT_142e37878 * fStack_164 +
                      fStack_150 * _DAT_143314da0 * fStack_150 * _DAT_143314da0);
        auStack_f8[0] =
             (longlong)(fVar40 - _DAT_142e36f2c) & (longlong)fVar40 >> 0x3f | (longlong)fVar40;
        if (fVar40 < 0.0) {
          auStack_f8[0] = 0;
        }
        param_3 = SQRT((fStack_248 - fStack_23c) * (fStack_248 - fStack_23c) +
                       (fStack_24c - fStack_240) * (fStack_24c - fStack_240) +
                       (fStack_250 - fStack_244) * (fStack_250 - fStack_244));
        if (_DAT_142e36f30 < fVar40) {
          auStack_f8[0] = 0xffffffffffffffff;
        }
        fVar40 = (float)pub_142e329c0(param_3 / _DAT_142e3798c);
        uVar24 = (longlong)(fVar40 - fVar33) & (longlong)fVar40 >> 0x3f | (longlong)fVar40;
        if (fVar40 < 0.0) {
          uVar24 = 0;
        }
        if (fVar48 < fVar40) {
          uVar24 = 0xffffffffffffffff;
        }
        uVar28 = 2;
        if (2 < uVar24) {
          uVar28 = uVar24;
        }
        lStack_100 = lVar23;
        pdb_140de8290(&lStack_330,uVar28,_DAT_143314db0 / param_3,auStack_f8,&UNK_143314f60);
        fStack_170 = (float)pdb_140a85220(auStack_3e4);
        fStack_170 = fStack_174 / fStack_170;
        pbStack_288 = pbStack_328 + lStack_320 * 4;
        lVar29 = 0;
        param_1 = auStack_490;
        puVar31 = auStack_4ac;
        puVar32 = (undefined *)0xa0761d6478bd642f;
        param_4 = -0x18fc812e5f4bd725;
        lStack_1e8 = 0;
        pbVar27 = pbStack_328;
        while (fVar40 = fStack_24c, fVar48 = _DAT_142e36f28, pbVar27 != pbStack_288) {
          pbStack_1e0 = pbVar27;
          fVar36 = (float)pdb_140de8220(fStack_154);
          pbVar27 = pbStack_1e0 + 4;
          if (lVar29 == 0) {
            param_3 = fVar40;
            if (pbStack_1e0 + 4 == pbStack_288) break;
            fVar40 = (float)pdb_140de8220(fStack_154);
            fVar33 = fVar36;
            fVar36 = fVar40;
            pbVar27 = pbStack_1e0 + 8;
          }
          pbStack_1e0 = pbVar27;
          fVar47 = fVar48 - fVar33;
          fStack_104 = fStack_158 * fVar33;
          fVar48 = fVar48 - fVar36;
          fStack_15c = fStack_158 * fVar36;
          fStack_234 = fStack_164 * fVar47 + fStack_104;
          fStack_180 = fStack_164 * fVar48 + fStack_15c;
          uStack_1c8 = CONCAT44(fStack_14c,fStack_150);
          fStack_178 = fVar36;
          pdb_140df4540(&uStack_148,&uStack_1c8);
          pdb_140b77d90(&uStack_2e0,param_5,&uStack_148);
          pdb_140a85120(param_1,&uStack_2e0,fVar33 * 0.0 + param_8 * fVar47);
          uStack_1c8 = CONCAT44(fStack_14c,fStack_150);
          pdb_140df4540(&uStack_148,&uStack_1c8,fStack_180);
          pdb_140b77d90(&uStack_2e0,param_5,&uStack_148);
          pdb_140a85120(puVar31,&uStack_2e0,fStack_178 * 0.0 + param_8 * fVar48);
          fStack_160 = (float)pdb_140a850f0(param_1);
          uStack_238 = pdb_140a850f0(puVar31);
          fVar33 = (float)pdb_140a85220(param_1);
          fVar40 = (float)pdb_140a85220(auStack_3e4);
          param_3 = (fVar33 / fVar40) * fStack_174;
          fVar33 = param_3 / _DAT_142e37988;
          uVar24 = 0;
          if (0.0 <= fVar33) {
            uVar24 = (longlong)(fVar33 - _DAT_142e36f2c) & (longlong)fVar33 >> 0x3f |
                     (longlong)fVar33;
          }
          if (_DAT_142e36f30 < fVar33) {
            uVar24 = 0xffffffffffffffff;
          }
          if (uVar24 < 3) {
            uVar24 = 2;
          }
          puVar30 = &UNK_143314f78;
          pdb_140de8290(&lStack_3a0,uVar24,_DAT_14330c50c / param_3,auStack_f8,&UNK_143314f78);
          lStack_338 = lStack_1e8 + 1;
          fStack_104 = fStack_104 + fVar47 * fStack_154;
          fStack_15c = fStack_15c + fVar48 * fStack_154;
          pbStack_2d0 = pbStack_398 + lStack_390 * 4;
          uStack_2e0 = 0;
          pbStack_280 = pbStack_398;
          pbStack_2d8 = pbStack_398;
          pfStack_2c8 = &fStack_160;
          pfStack_2c0 = &fStack_170;
          puStack_2b8 = &uStack_238;
          uStack_2b0 = 0;
          lStack_340 = lStack_390 + -2;
          while( true ) {
            pdb_1414eb7f0(&uStack_148,&pbStack_2d8);
            lVar23 = uStack_2e0;
            if ((float)uStack_148 != 1.4013e-45) break;
            fVar33 = (float)uStack_140;
            fVar48 = uStack_140._4_4_;
            fVar40 = (float)uStack_138;
            uStack_2e0 = uStack_2e0 + 1;
            uStack_1c8._0_4_ = uStack_148._4_4_;
            if ((uStack_148._4_4_ < 0.0) || (_DAT_142e36f28 < uStack_148._4_4_)) {
              uStack_148 = &uStack_1c8;
              uStack_140 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_14330d448,&uStack_148,&UNK_14330d430);
            }
            uVar34 = pdb_140a84dc0(param_1);
            uStack_148 = (undefined8 *)CONCAT44(uStack_148._4_4_,uVar34);
            pdb_140df4540(&fStack_1f8,&uStack_148,fStack_104);
            uStack_1c8._0_4_ = fVar48;
            uStack_1c8._0_4_ = fVar48;
            if ((fVar48 < 0.0) || (_DAT_142e36f28 < fVar48)) {
              uStack_148 = &uStack_1c8;
              uStack_140 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_14330d448,&uStack_148,&UNK_14330d430);
            }
            uVar34 = pdb_140a84dc0(param_1);
            uStack_148 = (undefined8 *)CONCAT44(fVar48,uVar34);
            pdb_140df4540(&uStack_208,&uStack_148,fStack_104);
            fVar48 = fStack_1f0;
            fStack_278 = fStack_1f8;
            fStack_274 = fStack_1f4;
            uStack_270 = 0;
            fStack_318 = fStack_204;
            fStack_314 = fStack_200;
            uStack_1c8._0_4_ = fVar33;
            uStack_1c8._0_4_ = fVar33;
            if ((fVar33 < 0.0) || (_DAT_142e36f28 < fVar33)) {
              uStack_148 = &uStack_1c8;
              uStack_140 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_14330d448,&uStack_148,&UNK_14330d430);
            }
            uStack_260 = 0;
            uStack_310 = 0;
            auStack_308._0_16_ = ZEXT416((uint)fStack_200);
            uStack_1d0 = 0;
            fVar36 = fVar33;
            uStack_1d8 = (longlong *)CONCAT44(fStack_204,uStack_208);
            fStack_268 = fStack_1f4;
            fStack_264 = fStack_1f0;
            uVar34 = pdb_140a84dc0(puVar31);
            uStack_148 = (undefined8 *)CONCAT44(fVar36,uVar34);
            pdb_140df4540(&fStack_218,&uStack_148,fStack_15c);
            uStack_1c8 = CONCAT44(uStack_1c8._4_4_,fVar40);
            if ((fVar40 < 0.0) || (_DAT_142e36f28 < fVar40)) {
              uStack_148 = &uStack_1c8;
              uStack_140 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_14330d448,&uStack_148,&UNK_14330d430);
            }
            fVar36 = fVar40;
            uVar34 = pdb_140a84dc0(puVar31);
            uStack_148 = (undefined8 *)CONCAT44(fVar36,uVar34);
            pdb_140df4540(&fStack_228,&uStack_148,fStack_15c);
            fVar37 = fStack_214;
            fVar47 = fStack_218;
            fVar36 = _DAT_142e36f28;
            fStack_428 = fStack_278 * _DAT_143035ef0;
            fStack_424 = fStack_274 * _UNK_143035ef4;
            fStack_420 = fStack_264 * _UNK_143035ef8;
            fStack_41c = _DAT_142e36f28 * _UNK_143035efc;
            fStack_438 = (float)uStack_1d8 * _DAT_143035ef0;
            fStack_434 = uStack_1d8._4_4_ * _UNK_143035ef4;
            fStack_430 = fStack_314 * _UNK_143035ef8;
            fStack_42c = _DAT_142e36f28 * _UNK_143035efc;
            fVar51 = fStack_438 + fStack_428;
            fVar53 = fStack_434 + fStack_424;
            fVar54 = fStack_430 + fStack_420;
            fVar55 = _DAT_142e377f0 + 0.0;
            fStack_458 = fStack_214;
            fStack_454 = fStack_210;
            uStack_450 = 0;
            fStack_3c8 = fStack_228;
            fStack_3c4 = fStack_224;
            uStack_3c0 = 0;
            fStack_3b8 = fStack_224;
            fStack_3b4 = fStack_220;
            uStack_3b0 = 0;
            fStack_230 = fStack_210;
            fStack_22c = fStack_220;
            fStack_448 = fVar51;
            fStack_444 = fVar53;
            fStack_440 = fVar54;
            fStack_43c = fVar55;
            if (lStack_1e8 == 0) {
              fVar38 = (float)pub_142e32a70(fStack_170 * _DAT_142e36f38 + fStack_160);
              auVar46._4_4_ = 0;
              auVar46._0_4_ = (uint)(fVar38 + fVar36) & -(uint)(fVar38 < 0.0);
              auVar46._8_4_ = extraout_XMM0_Dc;
              auVar46._12_4_ = extraout_XMM0_Dd;
              auVar46 = ZEXT416(~-(uint)(fVar38 < 0.0) & (uint)fVar38) | auVar46;
              fVar38 = auVar46._0_4_;
              uStack_1c8._0_4_ = fVar38;
              if ((fVar38 < 0.0) || (fVar36 < fVar38)) {
                uStack_148 = &uStack_1c8;
                uStack_140 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_14330d448,&uStack_148,&UNK_14330d430);
              }
              fVar38 = (float)pdb_140a84dc0(param_1);
              fVar36 = _DAT_142e36f28;
              fVar39 = (float)pub_142e32a70(fStack_170 * _DAT_142e36f50 + fStack_160);
              auVar41._4_4_ = 0;
              auVar41._0_4_ = (uint)(fVar39 + fVar36) & -(uint)(fVar39 < 0.0);
              auVar41._8_4_ = extraout_XMM0_Dc_00;
              auVar41._12_4_ = extraout_XMM0_Dd_00;
              auVar41 = ZEXT416(~-(uint)(fVar39 < 0.0) & (uint)fVar39) | auVar41;
              uStack_1c8._0_4_ = auVar41._0_4_;
              if (((float)uStack_1c8 < 0.0) || (fVar36 < (float)uStack_1c8)) {
                uStack_148 = &uStack_1c8;
                uStack_140 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_14330d448,&uStack_148,&UNK_14330d430);
              }
              fVar36 = (float)pdb_140a84dc0(param_1);
              uStack_1c8 = CONCAT44(uStack_1c8._4_4_,fStack_160);
              if ((fStack_160 < 0.0) || (_DAT_142e36f28 < fStack_160)) {
                uStack_148 = &uStack_1c8;
                uStack_140 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_14330d448,&uStack_148,&UNK_14330d430);
              }
              fVar39 = fStack_160;
              fVar42 = (float)pdb_140a84dc0(param_1);
              fVar42 = (fVar36 * _DAT_142e36f50 + fVar38 * _DAT_142e36f50) - fVar42;
              fVar39 = (auVar41._0_4_ * _DAT_142e36f50 + auVar46._0_4_ * _DAT_142e36f50) - fVar39;
              fVar36 = SQRT(fVar39 * fVar39 + fVar42 * fVar42) + _DAT_142e3b1d8;
              if (fVar36 <= _DAT_142e37988) {
                fVar36 = _DAT_142e37988;
              }
              uVar34 = pdb_140a84dc0(puVar31);
              uStack_148 = (undefined8 *)CONCAT44(fVar33,uVar34);
              pdb_140df4540(afStack_36c,&uStack_148,fStack_104);
              uVar34 = pdb_140a84dc0(puVar31);
              uStack_148 = (undefined8 *)CONCAT44(fVar40,uVar34);
              pdb_140df4540(afStack_378,&uStack_148,fStack_104);
              fVar39 = SQRT((fVar48 - (float)auStack_308._0_4_) *
                            (fVar48 - (float)auStack_308._0_4_) +
                            (fStack_278 - (float)uStack_1d8) * (fStack_278 - (float)uStack_1d8) +
                            (fStack_268 - fStack_318) * (fStack_268 - fStack_318));
              uStack_380 = CONCAT44(_UNK_14330ad64,fVar36);
              fVar33 = (afStack_378[0] * _DAT_142e36f60 + afStack_36c[0] * _DAT_142e36f60) - fVar51;
              fVar40 = (fStack_370 * _UNK_142e36f64 + fStack_364 * _UNK_142e36f64) - fVar54;
              fVar38 = _DAT_142e36f28 / SQRT(fVar40 * fVar40 + fVar33 * fVar33);
              uStack_148 = (undefined8 *)CONCAT44(fVar38 * fVar40,fVar38 * fVar33);
              fStack_384 = fVar39;
              pdb_140df4520(&fStack_350,&uStack_148);
              fVar38 = fStack_350 - fStack_34c * 0.0;
              fVar33 = fStack_34c * _DAT_142e36f28 - (fStack_34c * 0.0 - fStack_348);
              fVar40 = fStack_348 * 0.0 - fStack_350 * 0.0;
              fVar42 = fStack_350 * fVar36 * _DAT_143314dc0;
              fVar43 = fStack_34c * fVar36 * _UNK_143314dc4;
              fVar36 = fStack_348 * fVar36 * _UNK_143314dc8;
              fVar44 = _DAT_142e36f28 * _UNK_142e378e4 * _UNK_143314dcc;
              if (fVar33 <= 0.0) {
                fVar49 = _DAT_142e36f50 / SQRT(_DAT_143277eb0 - fVar33);
                fVar50 = fVar49 * (_DAT_143277eb0 - fVar33);
                fVar33 = fVar49 * (fVar40 + fStack_350);
                fVar40 = fVar49 * (fVar38 + _UNK_143277eb8);
                fVar49 = fVar49 * (fStack_348 + _UNK_143277ebc);
              }
              else {
                fVar49 = _DAT_142e36f50 / SQRT(_DAT_142e36f28 + fVar33);
                fVar50 = fVar49 * (fStack_350 + fVar40);
                fVar33 = fVar49 * (_DAT_142e36f28 + fVar33);
                fVar40 = (fStack_348 + _DAT_142e36f28) * fVar49;
                fVar49 = fVar49 * (0.0 - fVar38);
              }
              uStack_148 = (undefined8 *)CONCAT44(fVar33,fVar50);
              uStack_140 = (code *)CONCAT44(fVar49,fVar40);
              lVar29 = pdb_1424e5b90(&uStack_148);
              uVar26 = pdb_140df4560(&fStack_384);
              uVar24 = auStack_f8[0] + 0xa0761d6478bd642f;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = uVar24 ^ 0xe7037ed1a0b428db;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = uVar24;
              uVar28 = SUB168(auVar5 * auVar13,8) ^ SUB168(auVar5 * auVar13,0);
              if ((uint)((int)uVar28 * 200) < 0x60) {
                auStack_f8[0] = auStack_f8[0] + 0x40ec3ac8f17ac85e;
                do {
                  uVar24 = uVar24 + 0xa0761d6478bd642f;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = auStack_f8[0] ^ 0xe7037ed1a0b428db;
                  auVar14._8_8_ = 0;
                  auVar14._0_8_ = auStack_f8[0];
                  uVar28 = SUB168(auVar6 * auVar14,8) ^ SUB168(auVar6 * auVar14,0);
                  auStack_f8[0] = auStack_f8[0] + 0xa0761d6478bd642f;
                } while ((uint)((int)uVar28 * 200) < 0x60);
              }
              auStack_f8[0] = uVar24;
              iStack_114 = (int)((uVar28 & 0xffffffff) * 200 >> 0x20) + -100;
              uStack_148 = (undefined8 *)CONCAT44(fVar43 + fVar53,fVar42 + fVar51);
              uStack_140 = (code *)CONCAT44(fVar44 + fVar55,fVar36 + fVar54);
              uStack_138 = 0x7bff00003c000000;
              uStack_130 = (uint)uVar26;
              uStack_12c = (uint)(ushort)((ulonglong)uVar26 >> 0x20);
              uStack_120 = param_6;
              uStack_11c = 0x3f80000000000000;
              uStack_110 = 0;
              uStack_128 = lVar29;
              pdb_1414a9f00(param_7,&uStack_148);
              fVar33 = fStack_268;
              fVar40 = fStack_264;
              fVar36 = (float)uStack_260;
              fVar51 = uStack_260._4_4_;
              fVar53 = fStack_278;
              fVar54 = fStack_274;
              fStack_17c = fVar39;
            }
            else {
              fVar33 = fStack_268;
              fVar40 = fStack_264;
              fVar36 = (float)uStack_260;
              fVar51 = uStack_260._4_4_;
              fVar53 = fStack_278;
              fVar54 = fStack_274;
              fStack_17c = SQRT((fVar48 - (float)auStack_308._0_4_) *
                                (fVar48 - (float)auStack_308._0_4_) +
                                (fStack_278 - (float)uStack_1d8) * (fStack_278 - (float)uStack_1d8)
                                + (fStack_268 - fStack_318) * (fStack_268 - fStack_318));
            }
            _fStack_268 = CONCAT44(fVar37 * _UNK_143314dc4,fVar47 * _DAT_143314dc0);
            uStack_260 = CONCAT44(_DAT_142e36f28 * _UNK_143314dcc,fStack_454 * _UNK_143314dc8);
            _fStack_278 = CONCAT44(fStack_3c4 * _UNK_143314dc4,fStack_3c8 * _DAT_143314dc0);
            uStack_270 = CONCAT44(_DAT_142e36f28 * _UNK_143314dcc,fStack_3b4 * _UNK_143314dc8);
            fVar42 = fVar37 * _UNK_143314dc4 + fStack_3c4 * _UNK_143314dc4;
            fVar56 = fVar53 - fVar47;
            fVar50 = fVar33 - fStack_458;
            fVar57 = fVar48 - fStack_230;
            fVar49 = SQRT(fVar57 * fVar57 + fVar56 * fVar56 + fVar50 * fVar50);
            fStack_2e8 = fVar49 + _DAT_142e3b1d8;
            fStack_2ec = fStack_17c;
            fVar48 = (float)auStack_308._0_4_ - fVar48;
            fVar43 = (fStack_454 * _UNK_143314dc8 + fStack_3b4 * _UNK_143314dc8) - fStack_440;
            fVar44 = (_DAT_142e36f28 * _UNK_143314dcc + _DAT_142e36f28 * _UNK_143314dcc) -
                     fStack_440;
            fVar37 = (float)uStack_1d8 - fVar53;
            fVar38 = (fVar47 * _DAT_143314dc0 + fStack_3c8 * _DAT_143314dc0) - fStack_448;
            fVar39 = fVar42 - fStack_444;
            fVar55 = fStack_318 - fVar33;
            fVar42 = fVar42 - fStack_444;
            auVar45._0_4_ = fVar48 * fVar48 + fVar55 * fVar55 + fVar37 * fVar37;
            auVar45._4_4_ = fVar43 * fVar43 + fVar42 * fVar42 + fVar38 * fVar38;
            auVar45._8_4_ =
                 ((float)auStack_308._4_4_ - fStack_440) * ((float)auStack_308._4_4_ - fStack_440) +
                 ((float)uStack_310 - fVar36) * ((float)uStack_310 - fVar36) +
                 (uStack_1d8._4_4_ - fVar54) * (uStack_1d8._4_4_ - fVar54);
            auVar45._12_4_ =
                 fVar44 * fVar44 +
                 (uStack_310._4_4_ - fVar51) * (uStack_310._4_4_ - fVar51) + fVar39 * fVar39;
            auVar46 = sqrtps(auVar45,auVar45);
            auVar46 = divps(_DAT_142e37950,auVar46);
            fVar36 = auVar46._0_4_;
            fVar51 = auVar46._4_4_;
            fVar42 = fVar51 * fVar42;
            fVar37 = fVar36 * fVar37;
            fVar55 = fVar55 * fVar36;
            fVar38 = fVar38 * fVar51;
            fVar36 = fVar36 * fVar48;
            fVar51 = fVar51 * fVar43;
            fVar48 = fVar51 * fVar55 - fVar42 * fVar36;
            fVar54 = fVar36 * fVar38 - fVar37 * fVar51;
            fVar39 = fVar42 * fVar37 - fVar55 * fVar38;
            fVar47 = (fStack_3c8 + fVar47 + (float)uStack_1d8 + fVar53) * _DAT_143314dd0;
            fVar33 = (fStack_3b8 + fStack_458 + fStack_318 + fVar33) * _UNK_143314dd4;
            fVar40 = (fStack_3b4 + fStack_454 + fVar40 + 0.0) * _UNK_143314dd8;
            fVar53 = (_DAT_142e377f0 + _DAT_142e377f0 + _DAT_142e377f0 + _DAT_142e36f28) *
                     _UNK_143314ddc;
            uStack_2e4 = 0x3dcccccd;
            if (fVar39 <= 0.0) {
              fVar42 = fVar42 - fVar37;
              if (fVar42 <= 0.0) {
                fVar43 = fVar55 + fVar38;
                fVar52 = fVar36 + fVar48;
                fVar36 = (_DAT_142e36f28 - fVar39) - fVar42;
                fVar38 = fVar51 - fVar54;
                fVar37 = _DAT_142e36f50 / SQRT(fVar36);
                fVar51 = fVar37;
                goto LAB_1414d7a2a;
              }
              fVar48 = fVar48 - fVar36;
              fVar44 = fVar38 + fVar55;
              fVar37 = (_DAT_142e36f28 - fVar39) + fVar42;
              fVar55 = fVar51 + fVar54;
              fVar43 = fVar37;
LAB_1414d7989:
              fVar51 = _DAT_142e36f50 / SQRT(fVar37);
              fVar44 = fVar51 * fVar44;
              fVar43 = fVar51 * fVar43;
              fVar55 = fVar51 * fVar55;
              fVar51 = fVar51 * fVar48;
            }
            else {
              fVar37 = fVar37 + fVar42;
              if (0.0 < fVar37) {
                fVar44 = fVar51 - fVar54;
                fVar55 = fVar55 - fVar38;
                fVar37 = fVar39 + _DAT_142e36f28 + fVar37;
                fVar43 = fVar48 - fVar36;
                fVar48 = fVar37;
                goto LAB_1414d7989;
              }
              fVar37 = (fVar39 + _DAT_142e36f28) - fVar37;
              fVar52 = _DAT_142e36f50 / SQRT(fVar37);
              fVar36 = fVar36 + fVar48;
              fVar43 = fVar51 + fVar54;
              fVar38 = fVar55 - fVar38;
              fVar51 = fVar52;
LAB_1414d7a2a:
              fVar44 = fVar51 * fVar36;
              fVar43 = fVar51 * fVar43;
              fVar55 = fVar37 * fVar52;
              fVar51 = fVar51 * fVar38;
            }
            fVar48 = (float)pdb_140e02880(auStack_f8);
            fVar48 = (fVar48 * _DAT_142fa5b20 -
                     ((_DAT_142e36f28 - fVar48) + (_DAT_142e36f28 - fVar48))) * _DAT_142e37aa0 *
                     _DAT_142e36f50;
            param_3 = (float)pub_142e329e0();
            fVar48 = (float)pub_142e32b30(fVar48);
            fVar36 = fVar48 * _DAT_142e36f28;
            fVar37 = fVar48 * 0.0;
            fVar48 = fVar48 * 0.0;
            uStack_148 = (undefined8 *)
                         CONCAT44(fVar36 * fVar55 * _UNK_142e377d4 +
                                  param_3 * fVar43 * _UNK_142e377c4 +
                                  fVar48 * fVar44 * _UNK_142e377b4 + fVar51 * fVar37,
                                  fVar37 * fVar55 * _DAT_142e377d0 +
                                  fVar48 * fVar43 * _DAT_142e377c0 +
                                  param_3 * fVar44 * _DAT_142e377b0 + fVar51 * fVar36);
            uStack_140 = (code *)CONCAT44(fVar48 * fVar55 * _UNK_142e377dc +
                                          fVar37 * fVar43 * _UNK_142e377cc +
                                          fVar36 * fVar44 * _UNK_142e377bc + fVar51 * param_3,
                                          param_3 * fVar55 * _UNK_142e377d8 +
                                          fVar36 * fVar43 * _UNK_142e377c8 +
                                          fVar37 * fVar44 * _UNK_142e377b8 + fVar51 * fVar48);
            unaff_R12 = pdb_1424e5b90(&uStack_148);
            uVar26 = pdb_140df4560(&fStack_2ec);
            uVar24 = auStack_f8[0] + 0xa0761d6478bd642f;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar24 ^ 0xe7037ed1a0b428db;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar24;
            uVar28 = SUB168(auVar7 * auVar15,8) ^ SUB168(auVar7 * auVar15,0);
            if ((uint)((int)uVar28 * 200) < 0x60) {
              auStack_f8[0] = auStack_f8[0] + 0x40ec3ac8f17ac85e;
              do {
                uVar24 = uVar24 + 0xa0761d6478bd642f;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = auStack_f8[0] ^ 0xe7037ed1a0b428db;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = auStack_f8[0];
                uVar28 = SUB168(auVar8 * auVar16,8) ^ SUB168(auVar8 * auVar16,0);
                auStack_f8[0] = auStack_f8[0] + 0xa0761d6478bd642f;
              } while ((uint)((int)uVar28 * 200) < 0x60);
            }
            auStack_f8[0] = uVar24;
            iStack_114 = (int)((uVar28 & 0xffffffff) * 200 >> 0x20) + -100;
            uStack_148 = (undefined8 *)CONCAT44(fVar33,fVar47);
            uStack_140 = (code *)CONCAT44(fVar53,fVar40);
            uStack_138 = 0x7bff00003c000000;
            uStack_130 = (uint)uVar26;
            uStack_12c = (uint)(ushort)((ulonglong)uVar26 >> 0x20);
            uStack_120 = param_6;
            uStack_11c = 0x3f80000000000000;
            uStack_110 = 0;
            uStack_128 = unaff_R12;
            pdb_1414a9f00(param_7,&uStack_148);
            pfStack_410 = &fStack_234;
            pfStack_408 = &fStack_180;
            uStack_400 = param_9;
            puStack_3f8 = auStack_f8;
            puStack_3f0 = &param_6;
            if (lVar23 == 0) {
              fVar33 = _DAT_142e36f28 / fVar49;
              fStack_1c0 = fVar57 * fVar33;
              uStack_1c8 = CONCAT44(fVar33 * fVar50,fVar33 * fVar56);
              pdb_140de8fd0(&uStack_148,&uStack_1c8);
              fVar33 = uStack_140._4_4_ * _DAT_14300cce0;
              fVar48 = uStack_140._4_4_ * _UNK_14300cce4;
              fVar40 = (float)uStack_140 * _DAT_14300ccf0;
              fVar36 = (float)uStack_140 * _UNK_14300ccf4;
              fVar47 = (float)uStack_140 * _UNK_14300ccfc;
              uStack_140._0_4_ =
                   (float)uStack_140 * _UNK_14300ccf8 * _UNK_142e377d8 +
                   uStack_148._4_4_ * _UNK_14300ccf8 * _UNK_142e377c8 +
                   (float)uStack_148 * _UNK_14300cce8 * _UNK_142e377b8 +
                   uStack_140._4_4_ * _UNK_14300cce8;
              uStack_140._4_4_ =
                   fVar47 * _UNK_142e377dc + uStack_148._4_4_ * _UNK_14300ccfc * _UNK_142e377cc +
                   (float)uStack_148 * _UNK_14300ccec * _UNK_142e377bc +
                   uStack_140._4_4_ * _UNK_14300ccec;
              uStack_148 = (undefined8 *)
                           CONCAT44(fVar36 * _UNK_142e377d4 +
                                    uStack_148._4_4_ * _UNK_14300ccf4 * _UNK_142e377c4 +
                                    (float)uStack_148 * _UNK_14300cce4 * _UNK_142e377b4 + fVar48,
                                    fVar40 * _DAT_142e377d0 +
                                    uStack_148._4_4_ * _DAT_14300ccf0 * _DAT_142e377c0 +
                                    (float)uStack_148 * _DAT_14300cce0 * _DAT_142e377b0 + fVar33);
              unaff_R12 = pdb_1424e5b90(&uStack_148);
              uStack_148 = (undefined8 *)CONCAT44(fVar49 + _DAT_142e37980,0x3e19999a);
              uStack_140 = (code *)CONCAT44(uStack_140._4_4_,0x3e4ccccd);
              uVar26 = pdb_140df4560(&uStack_148);
              uVar24 = auStack_f8[0] + 0xa0761d6478bd642f;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uVar24 ^ 0xe7037ed1a0b428db;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar24;
              uVar28 = SUB168(auVar9 * auVar17,8) ^ SUB168(auVar9 * auVar17,0);
              if ((uint)((int)uVar28 * 200) < 0x60) {
                auStack_f8[0] = auStack_f8[0] + 0x40ec3ac8f17ac85e;
                do {
                  uVar24 = uVar24 + 0xa0761d6478bd642f;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = auStack_f8[0] ^ 0xe7037ed1a0b428db;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = auStack_f8[0];
                  uVar28 = SUB168(auVar10 * auVar18,8) ^ SUB168(auVar10 * auVar18,0);
                  auStack_f8[0] = auStack_f8[0] + 0xa0761d6478bd642f;
                } while ((uint)((int)uVar28 * 200) < 0x60);
              }
              auStack_f8[0] = uVar24;
              iStack_114 = (int)((uVar28 & 0xffffffff) * 200 >> 0x20) + -100;
              uStack_148 = (undefined8 *)CONCAT44(fStack_424 + fStack_264,fStack_428 + fStack_268);
              uStack_140 = (code *)CONCAT44(fStack_41c + uStack_260._4_4_,
                                            fStack_420 + (float)uStack_260);
              uStack_138 = 0x7bff00003c000000;
              uStack_130 = (uint)uVar26;
              uStack_12c = (uint)(ushort)((ulonglong)uVar26 >> 0x20);
              uStack_120 = param_6;
              uStack_11c = 0x3f80000000000000;
              uStack_110 = 0;
              uStack_128 = unaff_R12;
              pdb_1414a9f00(param_7,&uStack_148);
              if (param_10 != '\0') {
                fStack_1c0 = fStack_1f0;
                fStack_1b4 = fStack_210;
                uStack_1b0 = uStack_1b0 & 0xffffff00;
                puVar30 = (undefined *)((ulonglong)puVar30 & 0xffffffffffffff00);
                pdb_1414d89a0(&uStack_148,&pfStack_410,&uStack_1c8,&uStack_1bc,puVar30);
                uStack_1c8 = uStack_148;
                fStack_1c0 = (float)uStack_140;
                _uStack_1bc = CONCAT44((float)uStack_138,uStack_140._4_4_);
                fStack_1b4 = (float)uStack_138._4_4_;
                uStack_1b0 = uStack_130;
                uStack_1ac = uStack_12c;
                uStack_1a8 = (undefined4)uStack_128;
                uStack_1a4 = uStack_128._4_4_;
                uStack_1a0 = uStack_120;
                uStack_19c = (undefined4)uStack_11c;
                uStack_198 = uStack_11c._4_4_;
                iStack_194 = iStack_114;
                uStack_190 = (undefined4)uStack_110;
                uStack_18c = uStack_110._4_4_;
                pdb_1414a9f00(param_7,&uStack_1c8);
              }
            }
            if (lVar23 == lStack_340) {
              fVar33 = (float)auStack_308._0_4_ - fStack_22c;
              fStack_318 = fStack_318 - fStack_3b8;
              fStack_3c8 = (float)uStack_1d8 - fStack_3c8;
              param_3 = SQRT(fStack_3c8 * fStack_3c8 + fStack_318 * fStack_318 + fVar33 * fVar33);
              fStack_1c0 = _DAT_142e36f28 / param_3;
              uStack_1c8 = CONCAT44(fStack_1c0 * fStack_318,fStack_1c0 * fStack_3c8);
              fStack_1c0 = fStack_1c0 * fVar33;
              pdb_140de8fd0(&uStack_148,&uStack_1c8);
              fVar33 = uStack_140._4_4_ * _DAT_14300cce0;
              fVar48 = uStack_140._4_4_ * _UNK_14300cce4;
              fVar40 = (float)uStack_140 * _DAT_14300ccf0;
              fVar36 = (float)uStack_140 * _UNK_14300ccf4;
              fVar47 = (float)uStack_140 * _UNK_14300ccfc;
              uStack_140._0_4_ =
                   (float)uStack_140 * _UNK_14300ccf8 * _UNK_142e377d8 +
                   uStack_148._4_4_ * _UNK_14300ccf8 * _UNK_142e377c8 +
                   (float)uStack_148 * _UNK_14300cce8 * _UNK_142e377b8 +
                   uStack_140._4_4_ * _UNK_14300cce8;
              uStack_140._4_4_ =
                   fVar47 * _UNK_142e377dc + uStack_148._4_4_ * _UNK_14300ccfc * _UNK_142e377cc +
                   (float)uStack_148 * _UNK_14300ccec * _UNK_142e377bc +
                   uStack_140._4_4_ * _UNK_14300ccec;
              uStack_148 = (undefined8 *)
                           CONCAT44(fVar36 * _UNK_142e377d4 +
                                    uStack_148._4_4_ * _UNK_14300ccf4 * _UNK_142e377c4 +
                                    (float)uStack_148 * _UNK_14300cce4 * _UNK_142e377b4 + fVar48,
                                    fVar40 * _DAT_142e377d0 +
                                    uStack_148._4_4_ * _DAT_14300ccf0 * _DAT_142e377c0 +
                                    (float)uStack_148 * _DAT_14300cce0 * _DAT_142e377b0 + fVar33);
              unaff_R12 = pdb_1424e5b90(&uStack_148);
              param_3 = param_3 + _DAT_142e37980;
              uStack_148 = (undefined8 *)CONCAT44(param_3,0x3e19999a);
              uStack_140 = (code *)CONCAT44(uStack_140._4_4_,0x3e4ccccd);
              uVar26 = pdb_140df4560(&uStack_148);
              uVar24 = auStack_f8[0] + 0xa0761d6478bd642f;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = uVar24 ^ 0xe7037ed1a0b428db;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = uVar24;
              uVar28 = SUB168(auVar11 * auVar19,8) ^ SUB168(auVar11 * auVar19,0);
              if ((uint)((int)uVar28 * 200) < 0x60) {
                auStack_f8[0] = auStack_f8[0] + 0x40ec3ac8f17ac85e;
                do {
                  uVar24 = uVar24 + 0xa0761d6478bd642f;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = auStack_f8[0] ^ 0xe7037ed1a0b428db;
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = auStack_f8[0];
                  uVar28 = SUB168(auVar12 * auVar20,8) ^ SUB168(auVar12 * auVar20,0);
                  auStack_f8[0] = auStack_f8[0] + 0xa0761d6478bd642f;
                } while ((uint)((int)uVar28 * 200) < 0x60);
              }
              auStack_f8[0] = uVar24;
              iStack_114 = (int)((uVar28 & 0xffffffff) * 200 >> 0x20) + -100;
              uStack_148 = (undefined8 *)CONCAT44(fStack_434 + fStack_274,fStack_438 + fStack_278);
              uStack_140 = (code *)CONCAT44(fStack_42c + uStack_270._4_4_,
                                            fStack_430 + (float)uStack_270);
              uStack_138 = 0x7bff00003c000000;
              uStack_130 = (uint)uVar26;
              uStack_12c = (uint)(ushort)((ulonglong)uVar26 >> 0x20);
              uStack_120 = param_6;
              uStack_11c = 0x3f80000000000000;
              uStack_110 = 0;
              uStack_128 = unaff_R12;
              pdb_1414a9f00(param_7,&uStack_148);
              if (param_10 != '\0') {
                fStack_1c0 = fStack_200;
                fStack_1b4 = fStack_220;
                uStack_1b0 = CONCAT31(uStack_1b0._1_3_,1);
                puVar30 = (undefined *)CONCAT71((int7)((ulonglong)puVar30 >> 8),1);
                pdb_1414d89a0(&uStack_148,&pfStack_410,&uStack_1c8,&uStack_1bc,puVar30);
                uStack_1c8 = uStack_148;
                fStack_1c0 = (float)uStack_140;
                _uStack_1bc = CONCAT44((float)uStack_138,uStack_140._4_4_);
                fStack_1b4 = (float)uStack_138._4_4_;
                uStack_1b0 = uStack_130;
                uStack_1ac = uStack_12c;
                uStack_1a8 = (undefined4)uStack_128;
                uStack_1a4 = uStack_128._4_4_;
                uStack_1a0 = uStack_120;
                uStack_19c = (undefined4)uStack_11c;
                uStack_198 = uStack_11c._4_4_;
                iStack_194 = iStack_114;
                uStack_190 = (undefined4)uStack_110;
                uStack_18c = uStack_110._4_4_;
                pdb_1414a9f00(param_7,&uStack_1c8);
              }
            }
          }
          if (lStack_3a0 != 0) {
            pub_1406abac0(pbStack_280,lStack_3a0 << 2,4);
          }
          lVar29 = 1;
          lStack_1e8 = lStack_338;
          pbVar27 = pbStack_1e0;
          fVar33 = fStack_178;
        }
        if (lStack_330 != 0) {
          pub_1406abac0(pbStack_328,lStack_330 << 2,4);
        }
        if (lStack_298 == 0) {
          return;
        }
        plVar25 = (longlong *)pdb_140e97000();
        if (((char)plVar25[0xd] != '\x01') &&
           (plVar25 = (longlong *)pdb_142dde6e0(plVar25,0), plVar25 == (longlong *)0x0)) break;
        if (*plVar25 == 0) {
          *plVar25 = -1;
          uStack_1d8 = plVar25;
          pdb_140e95370(plVar25 + 1,uStack_290);
          *uStack_1d8 = *uStack_1d8 + 1;
          return;
        }
      }
      plVar25 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_1414d8449:
      plVar25 = (longlong *)pdb_142dde6e0(plVar25,0);
    } while (plVar25 != (longlong *)0x0);
    pdb_142dc7890(&UNK_14330e598);
LAB_1414d849f:
    pdb_142dc8070(&UNK_143314f04,0x5b);
  }
  pdb_142dc8070(&UNK_143314ff0,0x6b,0);
LAB_1414d84e2:
  pdb_142dc8070(&UNK_143314ff0,0x6b);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

