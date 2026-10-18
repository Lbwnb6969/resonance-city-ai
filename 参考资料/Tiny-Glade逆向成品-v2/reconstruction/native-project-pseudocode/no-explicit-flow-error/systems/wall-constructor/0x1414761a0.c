// VA 0x1414761a0, PDB extent 7970 bytes
// system_wall_constructor::construct_elevation_supports::circle_turret::construct_turret
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/circle_turret.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000141476797) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_elevation_supports::circle_turret::construct_turret
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/circle_turret.rs
   Extent: 7970 */

void pdb_1414761a0(undefined8 param_1,byte *param_2,longlong param_3,float *param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7,undefined8 *param_8)

{
  float *pfVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte *pbVar16;
  longlong lVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  int *piVar20;
  longlong *plVar21;
  ulonglong uVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  longlong lVar26;
  undefined *puVar27;
  undefined *puVar28;
  ulonglong *puVar29;
  byte *pbVar30;
  byte *pbVar31;
  undefined8 *puVar32;
  float *pfVar33;
  byte *pbVar34;
  bool bVar35;
  float extraout_XMM0_Da;
  float fVar36;
  float fVar37;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  undefined8 uVar38;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float *in_stack_fffffffffffffbb8;
  ulonglong in_stack_fffffffffffffbc0;
  undefined8 in_stack_fffffffffffffbc8;
  undefined4 uVar53;
  byte abStack_428 [8];
  undefined4 uStack_420;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  longlong lStack_388;
  byte *pbStack_380;
  ulonglong uStack_378;
  longlong lStack_370;
  byte *pbStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined4 uStack_340;
  undefined8 uStack_328;
  undefined8 uStack_320;
  longlong lStack_318;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined8 uStack_2c8;
  float *pfStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined8 uStack_298;
  float fStack_290;
  undefined4 uStack_28c;
  longlong lStack_288;
  longlong lStack_280;
  float *pfStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  byte *pbStack_260;
  byte *pbStack_258;
  longlong lStack_250;
  longlong lStack_248;
  int iStack_240;
  float *pfStack_238;
  float *pfStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  undefined4 uStack_1e8;
  float *pfStack_1e4;
  undefined4 uStack_1dc;
  longlong lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  byte *pbStack_1c0;
  longlong lStack_1b8;
  float *pfStack_1b0;
  longlong lStack_1a8;
  undefined8 uStack_1a0;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  float fStack_178;
  float fStack_174;
  float *pfStack_170;
  ulonglong uStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  longlong lStack_148;
  byte *pbStack_140;
  longlong lStack_138;
  longlong lStack_130;
  undefined8 uStack_128;
  byte *pbStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  float fStack_fc;
  uint uStack_f8;
  byte bStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  pbVar31 = param_2;
  uStack_1c8 = param_1;
  cVar10 = pdb_140e94b40();
  uStack_2b0 = param_1;
  lStack_130 = param_3;
  if (cVar10 == '\0') {
    lStack_1d8 = 0;
    goto LAB_1414763cc;
  }
  puVar32 = (undefined8 *)0x56;
  lVar14 = pdb_1414780d0(0x56);
  pbVar34 = &UNK_14330c200;
  if (lVar14 == 1) {
    if (pbVar31 < (byte *)0x57) {
      uVar15 = pdb_1414780d0(pbVar31);
      if ((uVar15 & 1) != 0) {
        if ((byte *)0x56 < pbVar31 + 2) goto LAB_141477702;
        puVar32 = (undefined8 *)(0x54 - (longlong)pbVar31);
        pbVar34 = pbVar31 + 0x14330c202;
      }
      goto LAB_141476299;
    }
  }
  else {
LAB_141476299:
    puVar27 = &UNK_14330c10b;
    pbVar31 = &UNK_14330c0ba;
    while( true ) {
      bVar3 = puVar27[-1];
      uVar11 = (uint)(char)bVar3;
      if ((char)bVar3 < '\0') break;
      puVar27 = puVar27 + -1;
      if (uVar11 == 0x5c) goto LAB_14147633c;
LAB_141476324:
      if (uVar11 == 0x2f) goto LAB_14147633c;
      if (puVar27 == &UNK_14330c0ba) {
        in_stack_fffffffffffffbb8 = (float *)0x51;
LAB_14147635e:
        pbVar16 = (byte *)pdb_140e97000();
        if (pbVar16[0x68] != 1) goto LAB_14147755e;
LAB_14147636d:
        if (*(longlong *)pbVar16 != 0) goto LAB_141477552;
        pbVar16[0] = 0xff;
        pbVar16[1] = 0xff;
        pbVar16[2] = 0xff;
        pbVar16[3] = 0xff;
        pbVar16[4] = 0xff;
        pbVar16[5] = 0xff;
        pbVar16[6] = 0xff;
        pbVar16[7] = 0xff;
        in_stack_fffffffffffffbc8 = 0;
        in_stack_fffffffffffffbc0 = 0;
        uStack_118 = pbVar16;
        uStack_1d0 = pdb_140e94f10(pbVar16 + 8,pbVar34,puVar32,pbVar31,in_stack_fffffffffffffbb8,1,0
                                  );
        *(longlong *)uStack_118 = *(longlong *)uStack_118 + 1;
        lStack_1d8 = 1;
LAB_1414763cc:
        lStack_148 = 0;
        pbStack_140 = (byte *)0x10;
        lStack_138 = 0;
        pbStack_160 = (byte *)0x0;
        pbStack_158 = (byte *)0x4;
        pbStack_150 = (byte *)0x0;
        fStack_fc = *(float *)(lStack_130 + 0x284);
        fVar36 = *(float *)(param_2 + 8);
        lVar14 = lStack_130 + 0x29f;
        uStack_f1 = 1;
        uStack_f2 = 1;
        lVar26 = lVar14;
        lStack_1b8 = lStack_1d8;
        cVar10 = pdb_1408ff980(lVar14);
        if (cVar10 == '\0') {
          uStack_f8 = 0;
        }
        else if (*(uint *)(lStack_130 + 600) < 2) {
          uStack_f8 = (uint)CONCAT71((int7)((ulonglong)lVar26 >> 8),
                                     0.0 < *(float *)(lStack_130 + 0x294));
        }
        else {
          uStack_f8 = 0;
        }
        uStack_f1 = 1;
        uStack_f2 = 1;
        cVar10 = pdb_1408ff990(lStack_130 + 0x2a3);
        bStack_f3 = 1;
        if (cVar10 == '\0') {
          uStack_f1 = 1;
          uStack_f2 = 1;
          bStack_f3 = pdb_1408ff980(lVar14);
          bStack_f3 = bStack_f3 & ((byte)uStack_f8 ^ 1);
        }
        fVar41 = _DAT_142e36f50;
        fVar40 = _DAT_14330bfbc + fVar36;
        fStack_fc = fStack_fc + _DAT_14330bfb8;
        fStack_184 = _DAT_142e3798c * fVar40;
        if (_DAT_142e3798c * fVar40 <= _DAT_142e36f50) {
          fStack_184 = _DAT_142e36f50;
        }
        lVar14 = *(longlong *)(param_6 + 8);
        lVar26 = *(longlong *)(param_6 + 0x10) * 0x50 + lVar14;
        uStack_118 = *(byte **)param_2;
        uVar13 = (undefined4)((ulonglong)uStack_118 >> 0x20);
        uStack_110 = 0;
        lStack_1a8 = CONCAT44(uVar13,uVar13);
        uStack_1a0 = 0;
        fVar46 = (fVar36 - fStack_184) + _DAT_14300b368;
        pbVar31 = (byte *)0x0;
        pbVar34 = &UNK_14330c170;
        fVar36 = _DAT_142e4bfe4;
        while (lVar14 != lVar26) {
          while( true ) {
            uStack_f1 = 1;
            uStack_f2 = 1;
            lVar17 = pdb_140b54f80(param_4,*(undefined8 *)(lVar14 + 0x38),&UNK_14330c170);
            if (lVar17 == 0) {
              uStack_f1 = 1;
              uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_14330c188);
            }
            uStack_f1 = 1;
            uStack_f2 = 1;
            uVar38 = pdb_14092f900(lVar17);
            fVar37 = (float)uStack_118;
            fVar50 = uStack_118._4_4_;
            fVar39 = uStack_110._4_4_;
            if (*(char *)(lVar14 + 0x48) == '\0') {
              uStack_f1 = 1;
              uStack_f2 = 1;
              cVar10 = pdb_140a84de0(uVar38,(float)uStack_118,(float)lStack_1a8);
              fVar37 = (float)uStack_118;
              fVar50 = uStack_118._4_4_;
              fVar39 = uStack_110._4_4_;
              if (cVar10 == '\0') {
                uStack_f1 = 1;
                uStack_f2 = 1;
                uVar11 = pdb_1413f9030(lVar14,fVar41);
                uVar15 = *(ulonglong *)(lVar14 + 0x10);
                uVar22 = (ulonglong)uVar11;
                if (uVar15 <= uVar22) {
                  uStack_f1 = 1;
                  uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar22,uVar15,&UNK_143306608);
                }
                if (uVar15 <= uVar22 + 1) {
                  uStack_f1 = 1;
                  uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar22 + 1,uVar15,&UNK_143306620);
                }
                uVar38 = *(undefined8 *)(*(longlong *)(lVar14 + 8) + uVar22 * 8);
                uVar2 = *(undefined8 *)(*(longlong *)(lVar14 + 8) + 8 + uVar22 * 8);
                fVar39 = extraout_XMM0_Da * (float)uVar2 +
                         (_DAT_142e36f28 - extraout_XMM0_Da) * (float)uVar38;
                fVar51 = extraout_XMM0_Da * (float)((ulonglong)uVar2 >> 0x20) +
                         (_DAT_142e36f28 - extraout_XMM0_Da) * (float)((ulonglong)uVar38 >> 0x20);
                fVar37 = (float)uStack_118 - fVar39;
                fVar50 = uStack_118._4_4_ - fVar51;
                fVar50 = fVar46 / SQRT(fVar50 * fVar50 + fVar37 * fVar37);
                fVar37 = 0.0;
                if (0.0 <= fVar50) {
                  fVar37 = fVar50;
                }
                fVar50 = _DAT_142e36f28;
                if (fVar37 <= _DAT_142e36f28) {
                  fVar50 = fVar37;
                }
                fVar37 = fVar50 * fVar39 + (_DAT_142e36f28 - fVar50) * (float)uStack_118;
                fVar50 = fVar50 * fVar51 + (_DAT_142e36f28 - fVar50) * uStack_118._4_4_;
                fVar39 = (extraout_XMM0_Dc * 0.0 + 0.0) * 0.0 + uStack_110._4_4_ * 0.0;
              }
            }
            lVar14 = lVar14 + 0x50;
            fVar51 = SQRT((fVar50 - uStack_118._4_4_) * (fVar50 - uStack_118._4_4_) +
                          (fVar37 - (float)uStack_118) * (fVar37 - (float)uStack_118));
            if (fVar51 < fVar36) break;
            if (lVar14 == lVar26) goto LAB_141476726;
          }
          pbVar31 = (byte *)0x1;
          fVar36 = fVar51;
          fStack_398 = fVar50;
          fStack_394 = fVar50;
          fStack_390 = fVar39;
          fStack_38c = fVar39;
          fStack_180 = fVar37;
        }
LAB_141476726:
        if (pbVar31 != (byte *)0x0) {
          uStack_f1 = 1;
          uStack_f2 = 1;
          uStack_2b8 = pdb_140315970(&uStack_1c8);
          if (bStack_f3 != 0) {
            fVar40 = fVar40 + _DAT_142e42360;
          }
          uStack_17c = *(undefined4 *)(param_2 + 0xc);
          fStack_178 = _DAT_14330bfc0 + fStack_fc;
          uVar15 = 0;
          do {
            while( true ) {
              uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffbb8 >> 0x20);
              pbVar34 = abStack_428;
              fVar46 = (float)(longlong)uVar15 * _DAT_142e37ae4;
              fVar36 = (float)pub_142e32ad0(fVar46,_DAT_142e37838);
              fVar41 = _DAT_142e36f28 - fVar46;
              uStack_f1 = 1;
              uStack_f2 = 1;
              uVar38 = CONCAT44(uVar13,uStack_17c);
              pdb_140def2a0(pbVar34,(float)uStack_118 * fVar41 + fStack_180 * fVar46,
                            (float)lStack_1a8 * fVar41 + fStack_398 * fVar46,
                            (_DAT_142e36f28 - fVar36) * fVar40 + fVar36 * fStack_184,uVar38);
              uVar13 = (undefined4)((ulonglong)uVar38 >> 0x20);
              uVar53 = (undefined4)((ulonglong)in_stack_fffffffffffffbc8 >> 0x20);
              uStack_168 = uVar15 + 1;
              fVar36 = fVar46 * fStack_178 + fVar41 * fStack_fc;
              if (bStack_f3 == 0) break;
              uStack_f1 = 1;
              uStack_f2 = 1;
              pdb_140df4540(&pfStack_238,pbVar34,fVar36);
              uStack_f1 = 1;
              uStack_f2 = 1;
              in_stack_fffffffffffffbc8 = CONCAT44(uVar53,0x40c90fdb);
              in_stack_fffffffffffffbc0 = in_stack_fffffffffffffbc0 & 0xffffffff00000000;
              in_stack_fffffffffffffbb8 = (float *)CONCAT44(uVar13,0x3ed3f7d0);
              pdb_140aaa870(&lStack_388,&pfStack_238,uStack_420,_DAT_142e3c624,
                            in_stack_fffffffffffffbb8,in_stack_fffffffffffffbc0,
                            in_stack_fffffffffffffbc8,0);
              uStack_f1 = 1;
              uStack_f2 = 1;
              iVar12 = pdb_140315970(&uStack_1c8);
              uStack_f1 = 1;
              uStack_f2 = 1;
              pdb_140aaac40(&pfStack_238,&lStack_388,(int)uVar15 + iVar12);
              pbVar16 = pbStack_150;
              if (pbStack_150 == pbStack_160) {
                uStack_f1 = 1;
                uStack_f2 = 1;
                pdb_142d8db00(&pbStack_160);
              }
              lVar14 = (longlong)pbVar16 * 0x50;
              *(ulonglong *)(pbStack_158 + lVar14 + 0x40) = CONCAT44(uStack_1f4,uStack_1f8);
              *(ulonglong *)(pbStack_158 + lVar14 + 0x40 + 8) = CONCAT44(uStack_1ec,uStack_1f0);
              *(ulonglong *)(pbStack_158 + lVar14 + 0x30) = CONCAT44(uStack_204,uStack_208);
              *(ulonglong *)(pbStack_158 + lVar14 + 0x30 + 8) = CONCAT44(uStack_1fc,uStack_200);
              *(ulonglong *)(pbStack_158 + lVar14 + 0x20) = CONCAT44(uStack_214,uStack_218);
              *(ulonglong *)(pbStack_158 + lVar14 + 0x20 + 8) = CONCAT44(uStack_20c,uStack_210);
              pbVar18 = pbStack_158 + lVar14 + 0x10;
              *(undefined4 *)pbVar18 = (undefined4)uStack_228;
              *(undefined4 *)(pbVar18 + 4) = uStack_228._4_4_;
              *(undefined4 *)(pbVar18 + 8) = uStack_220;
              *(undefined4 *)(pbVar18 + 0xc) = uStack_21c;
              *(float **)(pbStack_158 + lVar14) = pfStack_238;
              *(float **)((longlong)(pbStack_158 + lVar14) + 8) = pfStack_230;
              pbStack_150 = pbVar16 + 1;
              uVar15 = uStack_168;
              if (4 < uStack_168) goto LAB_141476fff;
            }
            uStack_f1 = 1;
            uStack_f2 = 1;
            pdb_140defcd0(&lStack_388,pbVar34,_DAT_142e3787c);
            uVar38 = pdb_140deff30(pbVar34);
            uStack_2a0 = extraout_XMM0_Dc_00;
            uStack_2a8 = uVar38;
            fVar41 = (float)pub_142e329c0((float)uVar38 / _DAT_142e3c620);
            uVar15 = (longlong)(fVar41 - _DAT_142e36f2c) & (longlong)fVar41 >> 0x3f |
                     (longlong)fVar41;
            if (fVar41 < 0.0) {
              uVar15 = 0;
            }
            if (_DAT_142e36f30 < fVar41) {
              uVar15 = 0xffffffffffffffff;
            }
            pfVar1 = (float *)(uVar15 * 4 + 4);
            pfVar33 = (float *)(uVar15 + 1);
            uVar38 = 0;
            pfVar24 = pfStack_1b0;
            if ((float *)0x7ffffffffffffffc < pfVar1 || (ulonglong)pfVar33 >> 0x3e != 0) {
LAB_14147714e:
              pfStack_1b0 = pfVar24;
              pdb_142dc7e2a(uVar38,pfStack_1b0);
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
            fStack_174 = fVar40;
            if (pfVar1 == (float *)0x0) {
              pfStack_1b0 = (float *)0x4;
              pfVar23 = (float *)0x0;
            }
            else {
              pdb_14007ee60();
              uVar38 = 4;
              pfStack_1b0 = (float *)pub_1406abab0((ulonglong)pfVar1,4);
              pfVar23 = pfVar33;
              pfVar24 = pfVar1;
              if (pfStack_1b0 == (float *)0x0) goto LAB_14147714e;
            }
            uStack_228 = 0;
            in_stack_fffffffffffffbb8 = (float *)&UNK_14330c110;
            pfStack_238 = pfVar23;
            pfStack_230 = pfStack_1b0;
            pdb_140de8bb0(pfVar33,_DAT_142e3c630 / (float)uStack_2a8,&uStack_2b8,&pfStack_238,
                          &UNK_14330c110);
            pfVar1 = pfStack_230 + uStack_228;
            fStack_18c = fVar36 + _DAT_14330bfc4;
            fStack_3a8 = (float)uStack_2a8;
            fStack_3a4 = (float)uStack_2a8;
            uStack_3a0 = uStack_2a0;
            uStack_39c = uStack_2a0;
            pbVar34 = (byte *)0x0;
            pfVar24 = (float *)0x0;
            pfVar33 = pfStack_230;
            fVar41 = (float)uStack_2a8;
            fStack_188 = fVar36;
            while (pfVar23 = param_4, param_4 = pfVar23, pbVar16 = pbStack_1c0, pfVar33 != pfVar1) {
              pfVar25 = pfVar33 + 1;
              pbVar16 = pbVar34 + 1;
              pbVar18 = pbVar16;
              pbVar30 = pbVar34;
              param_4 = pfVar33;
              if (pfVar24 == (float *)0x0) {
                if (pfVar25 == pfVar1) {
                  puVar29 = &uStack_298;
                  pfVar24 = (float *)0x0;
                  pfVar25 = pfVar1;
                }
                else {
                  uStack_298._0_4_ = SUB84(pfVar33,0);
                  uStack_298._4_4_ = (float)((ulonglong)pfVar33 >> 0x20);
                  puVar29 = &uStack_328;
                  pfVar24 = pfVar25;
                  pbVar18 = pbVar34 + 2;
                  pfVar25 = pfVar33 + 2;
                }
                *puVar29 = (ulonglong)pfVar24;
                pfVar23 = (float *)CONCAT44(uStack_298._4_4_,(float)uStack_298);
                param_4 = uStack_328;
                pbVar30 = pbVar16;
                pbStack_1c0 = pbVar34;
                if (pfVar23 == (float *)0x0) break;
              }
              pfStack_2c0 = param_4;
              pfStack_170 = pfVar23;
              pbStack_120 = pbStack_1c0;
              if (pfVar23 == (float *)0x0) goto LAB_141476f80;
              fVar36 = *pfVar23;
              fVar40 = *param_4;
              uStack_328 = (float *)CONCAT44(fStack_188,fVar36);
              uStack_320 = (float *)CONCAT44(fStack_18c,fVar40);
              pbStack_1c0 = pbVar30;
              fVar46 = (float)pdb_140deec10(&uStack_328);
              fVar37 = (float)pdb_140deec50(&uStack_328);
              pdb_140deec20(&uStack_328);
              uStack_128._0_4_ = fVar36;
              if ((fVar36 < 0.0) || (_DAT_142e36f28 < fVar36)) {
                uStack_298 = &uStack_128;
                fStack_290 = 7.7206726;
                uStack_28c = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_143307ab0,&uStack_298,&UNK_14330c128);
              }
              uVar11 = pdb_1413f9030(&lStack_388,fVar36);
              uVar15 = uStack_378;
              pbVar31 = pbStack_380;
              uVar22 = (ulonglong)uVar11;
              if (uStack_378 <= uVar22) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar22,uStack_378,&UNK_143306608);
              }
              if (uStack_378 <= uVar22 + 1) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar22 + 1,uStack_378,&UNK_143306620);
              }
              uVar38 = *(undefined8 *)(pbStack_380 + uVar22 * 8);
              uVar2 = *(undefined8 *)(pbStack_380 + uVar22 * 8 + 8);
              uStack_128 = CONCAT44(uStack_128._4_4_,fVar40);
              if ((fVar40 < 0.0) || (_DAT_142e36f28 < fVar40)) {
                uStack_298 = &uStack_128;
                fStack_290 = 7.7206726;
                uStack_28c = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_143307ab0,&uStack_298,&UNK_14330c140);
              }
              uVar11 = pdb_1413f9030(&lStack_388,fVar40);
              uVar22 = (ulonglong)uVar11;
              if (uVar15 <= uVar22) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar22,uVar15,&UNK_143306608);
              }
              if (uVar15 <= uVar22 + 1) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar22 + 1,uVar15,&UNK_143306620);
              }
              fVar50 = extraout_XMM0_Da_00 * (float)uVar2 +
                       (_DAT_142e36f28 - extraout_XMM0_Da_00) * (float)uVar38;
              fVar51 = extraout_XMM0_Da_00 * (float)((ulonglong)uVar2 >> 0x20) +
                       (_DAT_142e36f28 - extraout_XMM0_Da_00) * (float)((ulonglong)uVar38 >> 0x20);
              fVar42 = extraout_XMM0_Da_01 * (float)*(undefined8 *)(pbVar31 + uVar22 * 8 + 8) +
                       (_DAT_142e36f28 - extraout_XMM0_Da_01) *
                       (float)*(undefined8 *)(pbVar31 + uVar22 * 8);
              fVar43 = extraout_XMM0_Da_01 *
                       (float)((ulonglong)*(undefined8 *)(pbVar31 + uVar22 * 8 + 8) >> 0x20) +
                       (_DAT_142e36f28 - extraout_XMM0_Da_01) *
                       (float)((ulonglong)*(undefined8 *)(pbVar31 + uVar22 * 8) >> 0x20);
              fVar52 = fVar46 * (float)uStack_2a8 + _DAT_142e3b1d8;
              uStack_128 = CONCAT44((fVar51 + fVar43) * _UNK_142e36f64,
                                    (fVar50 + fVar42) * _DAT_142e36f60);
              pdb_140df4540(&uStack_298,&uStack_128,fVar41);
              fVar8 = fStack_290;
              fVar39 = uStack_298._4_4_;
              fVar46 = (float)uStack_298;
              fVar42 = fVar42 - fVar50;
              fVar43 = fVar43 - fVar51;
              fVar41 = _DAT_142e36f28 / SQRT(fVar43 * fVar43 + fVar42 * fVar42);
              fVar42 = fVar41 * fVar42;
              fVar43 = fVar41 * fVar43;
              uStack_2c8 = CONCAT44(fVar43,fVar42);
              pdb_140df4520(&uStack_298,&uStack_2c8);
              fVar9 = fStack_290;
              fVar51 = uStack_298._4_4_;
              fVar50 = (float)uStack_298;
              uStack_128 = CONCAT44(fVar42,(uint)fVar43 ^ _DAT_142e37820);
              pdb_140df4520(&uStack_298,&uStack_128);
              lVar14 = lStack_138;
              fVar47 = fVar37 * _DAT_142e378e0;
              fVar48 = fVar37 * _UNK_142e378e4;
              fVar49 = fVar37 * _UNK_142e378e8;
              fVar37 = fVar37 * _UNK_142e378ec;
              fVar42 = (float)uStack_298 * _DAT_14330bfd0;
              fVar43 = uStack_298._4_4_ * _UNK_14330bfd4;
              fVar44 = fStack_290 * _UNK_14330bfd8;
              fVar45 = fStack_290 * _UNK_14330bfdc;
              if (lStack_138 == lStack_148) {
                pdb_142d7eb40(&lStack_148);
              }
              lVar26 = lVar14 * 0x50;
              pfVar24 = (float *)(pbStack_140 + lVar26);
              *pfVar24 = fVar52 * fVar50;
              pfVar24[1] = fVar52 * fVar51;
              pfVar24[2] = fVar52 * fVar9;
              pfVar24[3] = fVar52 * fVar9;
              pfVar24 = (float *)(pbStack_140 + lVar26 + 0x10);
              *pfVar24 = fVar47;
              pfVar24[1] = fVar48;
              pfVar24[2] = fVar49;
              pfVar24[3] = fVar37;
              pfVar24 = (float *)(pbStack_140 + lVar26 + 0x20);
              *pfVar24 = fVar42;
              pfVar24[1] = fVar43;
              pfVar24[2] = fVar44;
              pfVar24[3] = fVar45;
              pfVar24 = (float *)(pbStack_140 + lVar26 + 0x30);
              *pfVar24 = fVar46;
              pfVar24[1] = fVar39;
              pfVar24[2] = fVar8;
              pfVar24[3] = fVar8;
              *(int *)(pbStack_140 + lVar26 + 0x40) =
                   (int)uStack_168 * ((int)pbStack_120 + 1) + 1000;
              *(ulonglong *)(pbStack_140 + lVar26 + 0x44) =
                   CONCAT44(fVar40 * fStack_3a4,fVar36 * fStack_3a8);
              lStack_138 = lVar14 + 1;
              pbVar34 = pbVar18;
              pfVar24 = pfVar23;
              pfVar33 = pfVar25;
            }
            pbStack_1c0 = pbVar16;
            pfStack_170 = (float *)0x0;
            pbVar30 = pbStack_1c0;
LAB_141476f80:
            pbStack_1c0 = pbVar30;
            if (pfStack_238 != (float *)0x0) {
              pub_1406abac0((byte *)pfStack_230,(longlong)pfStack_238 << 2,4);
            }
            fVar40 = fStack_174;
            pbVar34 = abStack_428;
            if (lStack_388 != 0) {
              pub_1406abac0(pbStack_380,lStack_388 << 3,4);
            }
            if (lStack_370 != 0) {
              pub_1406abac0(pbStack_368,lStack_370 << 2,4);
            }
            uVar15 = uStack_168;
          } while (uStack_168 < 5);
        }
LAB_141476fff:
        param_2 = pbStack_150;
        uStack_118 = pbStack_160;
        pbStack_120 = pbStack_158;
        *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
        in_stack_fffffffffffffbb8 = (float *)*param_8;
        lVar14 = *(longlong *)(in_stack_fffffffffffffbb8 + 0xc);
        puVar32 = *(undefined8 **)(in_stack_fffffffffffffbb8 + 0x10);
        if (lVar14 == *(longlong *)(in_stack_fffffffffffffbb8 + 8)) {
          pdb_142d7ede0(in_stack_fffffffffffffbb8 + 8);
        }
        lVar26 = *(longlong *)(in_stack_fffffffffffffbb8 + 10);
        *(byte **)(lVar26 + lVar14 * 0x28) = uStack_118;
        *(byte **)(lVar26 + 8 + lVar14 * 0x28) = pbStack_120;
        *(byte **)(lVar26 + 0x10 + lVar14 * 0x28) = param_2;
        *(undefined8 *)(lVar26 + 0x18 + lVar14 * 0x28) = uStack_2b0;
        *(undefined8 **)(lVar26 + 0x20 + lVar14 * 0x28) = puVar32;
        param_4 = (float *)(lVar14 + 1);
        *(float **)(in_stack_fffffffffffffbb8 + 0xc) = param_4;
        *(longlong *)(in_stack_fffffffffffffbb8 + 0x10) =
             *(longlong *)(in_stack_fffffffffffffbb8 + 0x10) + 1;
        if (lStack_138 == 0) {
          if (lStack_148 != 0) {
            pub_1406abac0(pbStack_140,lStack_148 * 0x50,0x10);
          }
          if (lStack_1b8 != 0) goto LAB_141477404;
          return;
        }
        uStack_f1 = 1;
        uStack_f2 = 0;
        puVar19 = (undefined8 *)pdb_1413e4400(param_5,&UNK_1433056c0);
        if (puVar19 != (undefined8 *)0x0) {
          uStack_f1 = 1;
          uStack_f2 = 0;
          param_2 = (byte *)(**(code **)(puVar19[1] + 0x18))(*puVar19);
          if (param_2 != (byte *)0x0) {
            param_4 = *(float **)(lStack_130 + 0x150);
            if (param_4 == (float *)0x0) {
              uStack_f1 = 1;
              uStack_f2 = 0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_143305b70);
            }
            LOCK();
            bVar35 = *(char *)(param_4 + 6) == '\0';
            if (bVar35) {
              *(char *)(param_4 + 6) = '\x01';
            }
            UNLOCK();
            if (!bVar35) {
              uStack_f1 = 1;
              uStack_f2 = 0;
              pdb_142dbd1a0(param_4 + 6,1,1000000000);
            }
            uStack_f1 = 1;
            uStack_f2 = 0;
            pdb_140e9a150(param_4 + 6);
            if ((*(longlong *)(param_4 + 4) == 0) ||
               (piVar20 = (int *)(*(longlong *)(param_4 + 2) + *(longlong *)(param_4 + 4) * 4 + -4),
               piVar20 == (int *)0x0)) {
              lVar14 = *(longlong *)(param_2 + 0x10);
              if (lVar14 == 0) {
                uStack_f1 = 1;
                uStack_f2 = 0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_143305b88);
              }
              iStack_240 = (int)lVar14 + -1;
            }
            else {
              iStack_240 = *piVar20;
              lVar14 = *(longlong *)(param_2 + 0x10);
            }
            lStack_288 = *(longlong *)(param_2 + 0x18);
            lStack_280 = *(longlong *)(param_2 + 0x20);
            uStack_270 = *(undefined4 *)(param_2 + 0x28);
            uStack_26c = *(undefined4 *)(param_2 + 0x2c);
            uStack_268 = *(undefined4 *)(param_2 + 0x30);
            uStack_264 = *(undefined4 *)(param_2 + 0x34);
            pbStack_260 = param_2 + 0x78;
            pbStack_258 = param_2 + 0x58;
            lStack_250 = *(longlong *)(param_2 + 0x38);
            lStack_248 = *(longlong *)(param_2 + 0x40);
            uStack_298._0_4_ = (float)*(longlong *)(param_2 + 8);
            uStack_298._4_4_ = (float)((ulonglong)*(longlong *)(param_2 + 8) >> 0x20);
            fStack_290 = (float)lVar14;
            uStack_28c = (undefined4)((ulonglong)lVar14 >> 0x20);
            lStack_1a8 = lStack_148;
            pbStack_120 = pbStack_140;
            pfStack_278 = param_4;
            if (lStack_138 != 0) {
              pbVar16 = pbStack_140 + lStack_138 * 0x50;
              uStack_118 = (byte *)CONCAT44(uStack_118._4_4_,(uStack_f8 & 0xff) << 0xd);
              puVar32 = &uStack_358;
              pbVar31 = (byte *)&uStack_2f8;
              param_2 = pbStack_140;
              do {
                uStack_3e8 = *(undefined4 *)param_2;
                uStack_3e4 = *(undefined4 *)(param_2 + 4);
                uStack_3e0 = *(undefined4 *)(param_2 + 8);
                uStack_3dc = *(undefined4 *)(param_2 + 0xc);
                uStack_3d8 = *(undefined4 *)(param_2 + 0x10);
                uStack_3d4 = *(undefined4 *)(param_2 + 0x14);
                uStack_3d0 = *(undefined4 *)(param_2 + 0x18);
                uStack_3cc = *(undefined4 *)(param_2 + 0x1c);
                uStack_3c8 = *(undefined4 *)(param_2 + 0x20);
                uStack_3c4 = *(undefined4 *)(param_2 + 0x24);
                uStack_3c0 = *(undefined4 *)(param_2 + 0x28);
                uStack_3bc = *(undefined4 *)(param_2 + 0x2c);
                uStack_3b8 = *(undefined4 *)(param_2 + 0x30);
                uStack_3b4 = *(undefined4 *)(param_2 + 0x34);
                uStack_3b0 = *(undefined4 *)(param_2 + 0x38);
                uStack_3ac = *(undefined4 *)(param_2 + 0x3c);
                uVar11 = *(uint *)(param_2 + 0x40);
                pbVar34 = (byte *)(ulonglong)uVar11;
                param_4 = *(float **)(param_2 + 0x44);
                pdb_140e07fe0(&pfStack_238,&uStack_3e8);
                uVar13 = pdb_1409012c0(*(undefined4 *)(lStack_130 + 0x274));
                pdb_140951920(&lStack_388);
                lStack_318 = uStack_228;
                uStack_328 = pfStack_238;
                uStack_320 = pfStack_230;
                uStack_2f8 = uStack_358;
                uVar38 = uStack_2f8;
                uStack_2f0 = uStack_350;
                uVar2 = uStack_2f0;
                uStack_2e0 = uStack_340;
                uStack_2e8 = uStack_348;
                uVar7 = uStack_2e8;
                uStack_2f8._0_4_ = (undefined4)uStack_358;
                uStack_2f8._4_4_ = (undefined4)((ulonglong)uStack_358 >> 0x20);
                uStack_2f0._0_4_ = (undefined4)uStack_350;
                uStack_208 = (undefined4)uStack_2f8;
                uStack_204 = uStack_2f8._4_4_;
                uStack_200 = (undefined4)uStack_2f0;
                uStack_2f0._4_4_ = (undefined4)((ulonglong)uStack_350 >> 0x20);
                uStack_2e8._0_4_ = (undefined4)uStack_348;
                uStack_2e8._4_4_ = (undefined4)((ulonglong)uStack_348 >> 0x20);
                uStack_1fc = uStack_2f0._4_4_;
                uStack_1f8 = (undefined4)uStack_2e8;
                uStack_1f4 = uStack_2e8._4_4_;
                uStack_1f0 = uStack_340;
                uStack_1dc = (float)uStack_118;
                uStack_2f8 = uVar38;
                uStack_2f0 = uVar2;
                uStack_2e8 = uVar7;
                uStack_1ec = uVar11;
                uStack_1e8 = uVar13;
                pfStack_1e4 = param_4;
                pdb_14094c790(abStack_428,&pfStack_238);
                pdb_1413f66a0(&uStack_298,abStack_428);
                param_2 = param_2 + 0x50;
              } while (param_2 != pbVar16);
            }
            if (lStack_1a8 != 0) {
              pub_1406abac0(pbStack_120,lStack_1a8 * 0x50,0x10);
            }
            in_stack_fffffffffffffbb8 = pfStack_278 + 6;
            uStack_f1 = 0;
            uStack_f2 = 0;
            pdb_140e9a350();
            LOCK();
            cVar10 = *(char *)in_stack_fffffffffffffbb8;
            if (cVar10 == '\x01') {
              *(char *)in_stack_fffffffffffffbb8 = '\0';
            }
            UNLOCK();
            if (cVar10 != '\x01') goto LAB_1414775d6;
            do {
              if (lStack_1d8 == 0) {
                return;
              }
LAB_141477404:
              plVar21 = (longlong *)pdb_140e97000();
              if ((char)plVar21[0xd] == '\x01') {
LAB_141477413:
                if (*plVar21 == 0) {
                  *plVar21 = -1;
                  uStack_118 = (byte *)plVar21;
                  pdb_140e95370(plVar21 + 1,uStack_1d0);
                  *(longlong *)uStack_118 = *(longlong *)uStack_118 + 1;
                  return;
                }
LAB_141477552:
                pbVar16 = (byte *)pdb_142dc8090(&UNK_1433079b0);
LAB_14147755e:
                pbVar16 = (byte *)pdb_142dd9610(pbVar16,0);
                if (pbVar16 != (byte *)0x0) goto LAB_14147636d;
              }
              else {
                plVar21 = (longlong *)pdb_142dd9610(plVar21,0);
                if (plVar21 != (longlong *)0x0) goto LAB_141477413;
              }
              pdb_142dc7890(&UNK_143307940);
LAB_1414775d6:
              uStack_f1 = 0;
              uStack_f2 = 0;
              pdb_142dbcef0(in_stack_fffffffffffffbb8);
            } while( true );
          }
        }
        uStack_f1 = 1;
        uStack_f2 = 0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14330c158);
      }
    }
    bVar4 = puVar27[-2];
    if ((char)bVar4 < -0x40) {
      bVar5 = puVar27[-3];
      if ((char)bVar5 < -0x40) {
        pbVar16 = puVar27 + -4;
        puVar27 = puVar27 + -4;
        uVar11 = bVar5 & 0x3f | (*pbVar16 & 7) << 6;
      }
      else {
        puVar27 = puVar27 + -3;
        uVar11 = bVar5 & 0xf;
      }
      uVar11 = bVar4 & 0x3f | uVar11 << 6;
    }
    else {
      puVar27 = puVar27 + -2;
      uVar11 = bVar4 & 0x1f;
    }
    uVar11 = (uint)(bVar3 & 0x3f) | uVar11 << 6;
    if (uVar11 != 0x5c) goto LAB_141476324;
LAB_14147633c:
    puVar28 = puVar27 + -0x14330c0b9;
    if (puVar28 < (undefined *)0x52) {
      in_stack_fffffffffffffbb8 = (float *)(0x51 - (longlong)puVar28);
      pbVar31 = puVar27 + 1;
      goto LAB_14147635e;
    }
    pdb_142dc8070(&UNK_14330c0ba,0x51,puVar28,0x51,&UNK_14330c2c0);
  }
  pdb_142dc8070(&UNK_14330c200,0x56,0);
LAB_141477702:
  pdb_142dc8070(&UNK_14330c200,0x56);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

