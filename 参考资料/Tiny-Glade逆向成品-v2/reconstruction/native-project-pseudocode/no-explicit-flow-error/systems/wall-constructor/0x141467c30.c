// VA 0x141467c30, PDB extent 6001 bytes
// system_wall_constructor::construct_fences::process_segment::process_segment<system_wall_constructor::construct_fences::construct_fences::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_fences/process_segment.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_fences::process_segment::process_segment<system_wall_constructor::construct_fences::construct_fences::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_fences/process_segment.rs
   Extent: 6001 */

longlong pdb_141467c30(undefined4 param_1,float param_2,longlong param_3,ulonglong param_4,
                      undefined8 param_5,ulonglong param_6,longlong param_7,ulonglong param_8,
                      ulonglong param_9,undefined8 *param_10)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  char cVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  byte bVar14;
  ulonglong *puVar15;
  longlong lVar16;
  undefined *puVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  ulonglong *puVar21;
  byte *pbVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong *in_R10;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong *puVar29;
  ulonglong *unaff_R15;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  ulonglong uStack_308;
  ulonglong *puStack_300;
  longlong lStack_2f8;
  longlong lStack_2f0;
  ulonglong *puStack_2e8;
  ulonglong *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  float fStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_280;
  ulonglong *puStack_278;
  ulonglong *puStack_270;
  undefined8 uStack_268;
  float fStack_260;
  float fStack_25c;
  undefined8 uStack_258;
  float fStack_250;
  float fStack_24c;
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  float fStack_228;
  float fStack_224;
  float fStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  longlong lStack_210;
  byte *pbStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined8 uStack_1c8;
  float fStack_1c0;
  undefined4 uStack_1bc;
  longlong lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  float fStack_168;
  undefined4 uStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_130;
  float fStack_12c;
  ulonglong *puStack_128;
  ulonglong uStack_120;
  ulonglong *puStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  if (param_4 < 2) {
    return 0;
  }
  uStack_100 = param_6 >> 0x3f;
  uStack_108 = param_6 * 2 + 1;
  puVar15 = &uStack_308;
  uStack_130 = param_1;
  pdb_1424c2e90(puVar15,param_3,param_4,_DAT_14330ad58);
  puVar21 = (ulonglong *)(param_4 * 0x48);
  if (param_4 < 0x1c71c71c71c71c8) {
    uStack_2a8 = param_4;
    uStack_2d8 = param_3;
    if (puVar21 == (ulonglong *)0x0) {
      puVar13 = (ulonglong *)0x4;
      param_4 = 0;
    }
    else {
      pdb_14007ee60();
      uVar20 = 4;
      puVar15 = puVar21;
      puVar13 = (ulonglong *)pub_1406abab0((ulonglong)puVar21,4);
      if (puVar13 == (ulonglong *)0x0) goto LAB_141467d19;
    }
    uVar12 = _UNK_142f6e3c4;
    uStack_298 = param_9;
    param_2 = param_2 + _DAT_142e37988;
    fStack_2c8 = param_2;
    uStack_120 = param_4;
    puStack_118 = puVar13;
    uStack_110 = 0;
    uStack_2b8 = puStack_300 + lStack_2f8;
    bVar10 = true;
    uStack_268 = 0;
    puStack_2e0 = puStack_300;
    puVar21 = puStack_300;
    fVar30 = _DAT_142e36f28;
    while (fVar31 = _DAT_142e42360, puVar21 != uStack_2b8) {
      puVar13 = puVar21 + 1;
      puVar18 = puVar13;
      if (bVar10) {
        if (puVar13 == uStack_2b8) break;
        puVar18 = puVar21 + 2;
        puVar15 = puVar21;
        puVar21 = puVar13;
      }
      uVar24 = *puVar15;
      uVar19 = *puVar21;
      if (uStack_2a8 <= uVar19) {
LAB_141468ff1:
        pdb_142dc8420(uVar24,uVar19,uStack_2a8,&UNK_14330aee8);
        goto LAB_1414690e1;
      }
      uVar19 = uVar19 + 1;
      if (uVar19 < uVar24) goto LAB_141468ff1;
      uVar25 = (uVar19 - uVar24) * 0xc;
      pbVar22 = (byte *)0x4;
      lVar28 = uVar19 - uVar24;
      uStack_258 = puVar21;
      puStack_128 = puVar18;
      if (lVar28 != 0) {
        pdb_14007ee60();
        pbVar22 = pub_1406abab0(uVar25,4);
        if (pbVar22 == (byte *)0x0) {
          pdb_142dc7e2a(4,uVar25);
          goto LAB_1414690e1;
        }
      }
      if (uVar19 != uVar24) {
        pub_142e32760(pbVar22,uStack_2d8 + uVar24 * 0xc,uVar25);
      }
      uStack_188 = lVar28;
      uStack_180 = (ulonglong *)pbVar22;
      uStack_178 = lVar28;
      pdb_140080930(&fStack_228,&uStack_188,0);
      if (SBORROW8(0,CONCAT44(fStack_224,fStack_228))) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143306430,0x2b,&uStack_188,&UNK_143306410,&UNK_14330af00);
      }
      uStack_198 = uStack_1f8;
      uStack_1a8 = pbStack_208;
      uStack_1a0 = uStack_200;
      lStack_1b0 = lStack_210;
      uStack_1c8 = CONCAT44(fStack_224,fStack_228);
      fStack_1c0 = fStack_220;
      uStack_1bc = uStack_21c;
      fVar30 = (float)pdb_140deea70(param_5);
      fVar31 = (fVar30 + _DAT_142e36f34) / _DAT_142e37834;
      fVar30 = 0.0;
      if (0.0 <= fVar31) {
        fVar30 = fVar31;
      }
      fVar31 = _DAT_142e36f28;
      if (fVar30 <= _DAT_142e36f28) {
        fVar31 = fVar30;
      }
      fVar30 = (_DAT_142e3788c - (fVar31 + fVar31)) * fVar31 * fVar31;
      pub_142e329c0((float)uStack_198 /
                    (fVar30 * _DAT_14330ad5c + (_DAT_142e36f28 - fVar30) * _DAT_142e3783c));
      pdb_1413f9380(&fStack_228,&uStack_1c8);
      if (SBORROW8(0,CONCAT44(fStack_224,fStack_228))) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143306430,0x2b,&uStack_188,&UNK_143306410,&UNK_143306710);
      }
      uStack_158 = uStack_1f8;
      uStack_188 = CONCAT44(fStack_224,fStack_228);
      uStack_180 = (ulonglong *)CONCAT44(uStack_21c,fStack_220);
      uStack_178 = CONCAT44(uStack_214,uStack_218);
      fStack_168 = SUB84(pbStack_208,0);
      uStack_164 = (undefined4)((ulonglong)pbStack_208 >> 0x20);
      fStack_160 = (float)uStack_200;
      uStack_15c = (undefined4)((ulonglong)uStack_200 >> 0x20);
      uStack_170 = lStack_210;
      if (uStack_1c8 != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_1bc,fStack_1c0),uStack_1c8 * 0xc,4);
      }
      fVar30 = _DAT_142e36f28;
      if (lStack_1b0 != 0) {
        pub_1406abac0(uStack_1a8,lStack_1b0 << 2,4);
      }
      lVar28 = uStack_178;
      auStack_248._0_8_ = uStack_268 + 1;
      uStack_198 = uStack_158;
      uStack_1a8 = (byte *)CONCAT44(uStack_164,fStack_168);
      uStack_1a0 = CONCAT44(uStack_15c,fStack_160);
      lStack_1b0 = uStack_170;
      uStack_1c8 = uStack_188;
      fStack_1c0 = (float)uStack_180;
      uStack_1bc = uStack_180._4_4_;
      puVar15 = (ulonglong *)((longlong)uStack_180 + uStack_178 * 0xc);
      bVar10 = true;
      lVar23 = 0;
      auStack_238._0_8_ = uStack_180;
      puVar13 = uStack_180;
      fVar31 = (float)uStack_178;
      while (puVar21 = puStack_128, puVar13 != puVar15) {
        puVar18 = (ulonglong *)((longlong)puVar13 + 0xc);
        puVar29 = puVar13;
        if (bVar10) {
          unaff_R15 = puVar15;
          if (puVar18 == puVar15) break;
          puVar29 = puVar18;
          puVar18 = puVar13 + 3;
          unaff_R15 = puVar13;
        }
        uVar24 = *unaff_R15;
        fVar33 = (float)uVar24;
        fVar30 = *(float *)(unaff_R15 + 1);
        uVar19 = *puVar29;
        fVar37 = (float)uVar19;
        fVar39 = *(float *)(puVar29 + 1);
        if (lVar23 == 0 && uStack_268 == 0) {
          fVar31 = (float)pdb_141b1e5a0(&uStack_108);
          lVar16 = uStack_108 * 0x2360ed051fc65da4;
          auVar44._8_8_ = 0;
          auVar44._0_8_ = uStack_108;
          uStack_108 = SUB168(auVar44 * ZEXT816(0x4385df649fccf645),0);
          uStack_100 = uStack_100 * 0x4385df649fccf645 +
                       SUB168(auVar44 * ZEXT816(0x4385df649fccf645),8) + lVar16;
          bVar14 = (byte)(uStack_100 >> 0x3a);
          fVar42 = ((float)(((uint)((uStack_100 ^ uStack_108) >> bVar14) |
                            (uint)((uStack_100 ^ uStack_108) << 0x40 - bVar14)) >> 9 | 0x3f800000) +
                   _DAT_142e36f34) * _DAT_142e382c0 + _DAT_142e3798c;
          fVar32 = fVar39 - fVar30;
          fVar34 = fVar37 - fVar33;
          fVar35 = _DAT_142e36f28 / SQRT(fVar32 * fVar32 + fVar34 * fVar34);
          uStack_188 = CONCAT44(fVar35 * fVar32,fVar35 * fVar34);
          pdb_140df4520(&fStack_228,&uStack_188);
          uVar25 = uStack_110;
          fVar35 = fStack_220;
          fVar34 = fStack_224;
          fVar32 = fStack_228;
          if (uStack_110 == uStack_120) {
            pdb_142d8d550(&uStack_120);
          }
          fVar38 = fVar31 * fVar42 * fVar42 * _DAT_142e37988;
          fVar42 = _DAT_142e36f28 / SQRT(fVar38 * fVar38 + _DAT_142e36f28);
          puStack_118[uVar25 * 9] = uVar24;
          *(float *)(puStack_118 + uVar25 * 9 + 1) = fVar30;
          puStack_118[uVar25 * 9 + 3] = CONCAT44(fStack_224,fStack_228);
          *(float *)(puStack_118 + uVar25 * 9 + 4) = fStack_220;
          *(float *)(puStack_118 + uVar25 * 9 + 5) = fVar42;
          fVar36 = fVar42 * 0.0;
          fVar38 = fVar38 * fVar42;
          *(ulonglong *)((longlong)puStack_118 + uVar25 * 0x48 + 0xc) =
               CONCAT44(fVar42 * param_2 + (float)(uVar24 >> 0x20),fVar38 * param_2 + fVar33);
          *(float *)((longlong)puStack_118 + uVar25 * 0x48 + 0x14) = fStack_2c8 * fVar36 + fVar30;
          *(float *)((longlong)puStack_118 + uVar25 * 0x48 + 0x24) = fVar38;
          *(float *)((longlong)puStack_118 + uVar25 * 0x48 + 0x2c) = fVar36;
          fVar31 = fVar35 * fVar42;
          puStack_118[uVar25 * 9 + 6] =
               CONCAT44(fVar38 * fVar35 - fVar36 * fVar32,fVar36 * fVar34 - fVar31);
          *(float *)(puStack_118 + uVar25 * 9 + 7) = fVar42 * fVar32 - fVar38 * fVar34;
          pbVar22 = (byte *)((longlong)puStack_118 + uVar25 * 0x48 + 0x3c);
          pbVar22[0] = 0x9a;
          pbVar22[1] = 0x99;
          pbVar22[2] = 0x99;
          pbVar22[3] = 0x3e;
          *(float *)(puStack_118 + uVar25 * 9 + 8) = fStack_2c8;
          pbVar22 = (byte *)((longlong)puStack_118 + uVar25 * 0x48 + 0x44);
          pbVar22[0] = 0x9a;
          pbVar22[1] = 0x99;
          pbVar22[2] = 0x99;
          pbVar22[3] = 0x3e;
          uStack_110 = uVar25 + 1;
        }
        fVar35 = (float)pdb_141b1e5a0(&uStack_108);
        lVar16 = uStack_108 * 0x2360ed051fc65da4;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uStack_108;
        uStack_108 = SUB168(auVar1 * ZEXT816(0x4385df649fccf645),0);
        uStack_100 = uStack_100 * 0x4385df649fccf645 +
                     SUB168(auVar1 * ZEXT816(0x4385df649fccf645),8) + lVar16;
        bVar14 = (byte)(uStack_100 >> 0x3a);
        fVar42 = ((float)(((uint)((uStack_100 ^ uStack_108) >> bVar14) |
                          (uint)((uStack_100 ^ uStack_108) << 0x40 - bVar14)) >> 9 | 0x3f800000) +
                 _DAT_142e36f34) * _DAT_142e382c0 + _DAT_142e3798c;
        fVar33 = fVar37 - fVar33;
        fVar30 = fVar39 - fVar30;
        fVar32 = _DAT_142e36f28 / SQRT(fVar30 * fVar30 + fVar33 * fVar33);
        uStack_188 = CONCAT44(fVar32 * fVar30,fVar33 * fVar32);
        pdb_140df4520(&fStack_228,&uStack_188);
        uVar24 = uStack_110;
        fVar34 = fStack_220;
        fVar32 = fStack_224;
        fVar33 = fStack_228;
        if (uStack_110 == uStack_120) {
          pdb_142d8d550(&uStack_120);
        }
        fVar30 = _DAT_142e36f28;
        fVar42 = fVar42 * fVar42;
        fVar36 = 0.0;
        if (lVar23 + 2 != lVar28) {
          fVar36 = fVar31 * fVar42 * _DAT_142e37988;
        }
        lVar23 = lVar23 + 1;
        fVar42 = fVar35 * fVar42 * _DAT_142e37988;
        fVar35 = _DAT_142e36f28 / SQRT(fVar36 * fVar36 + fVar42 * fVar42 + _DAT_142e36f28);
        puStack_118[uVar24 * 9] = uVar19;
        *(float *)(puStack_118 + uVar24 * 9 + 1) = fVar39;
        puStack_118[uVar24 * 9 + 3] = CONCAT44(fStack_224,fStack_228);
        *(float *)(puStack_118 + uVar24 * 9 + 4) = fStack_220;
        *(float *)(puStack_118 + uVar24 * 9 + 5) = fVar35;
        fVar36 = fVar35 * fVar36;
        fVar42 = fVar35 * fVar42;
        *(ulonglong *)((longlong)puStack_118 + uVar24 * 0x48 + 0xc) =
             CONCAT44(fVar35 * param_2 + (float)(uVar19 >> 0x20),fVar42 * param_2 + fVar37);
        *(float *)((longlong)puStack_118 + uVar24 * 0x48 + 0x14) = fStack_2c8 * fVar36 + fVar39;
        *(float *)((longlong)puStack_118 + uVar24 * 0x48 + 0x24) = fVar42;
        *(float *)((longlong)puStack_118 + uVar24 * 0x48 + 0x2c) = fVar36;
        fVar31 = fVar34 * fVar35;
        *(float *)(puStack_118 + uVar24 * 9 + 6) = fVar36 * fVar32 - fVar31;
        *(float *)((longlong)(puStack_118 + uVar24 * 9 + 6) + 4) = fVar42 * fVar34 - fVar36 * fVar33
        ;
        *(float *)(puStack_118 + uVar24 * 9 + 7) = fVar35 * fVar33 - fVar42 * fVar32;
        pbVar22 = (byte *)((longlong)puStack_118 + uVar24 * 0x48 + 0x3c);
        pbVar22[0] = 0x9a;
        pbVar22[1] = 0x99;
        pbVar22[2] = 0x99;
        pbVar22[3] = 0x3e;
        puStack_118[uVar24 * 9 + 8] = CONCAT44(uVar12,param_2);
        uStack_110 = uVar24 + 1;
        bVar10 = false;
        puVar13 = puVar18;
        unaff_R15 = puVar29;
      }
      if (uStack_1c8 != 0) {
        pub_1406abac0((byte *)auStack_238._0_8_,uStack_1c8 * 0xc,4);
      }
      if (lStack_1b0 != 0) {
        pub_1406abac0(uStack_1a8,lStack_1b0 << 2,4);
      }
      bVar10 = false;
      uStack_268 = auStack_248._0_8_;
      puVar15 = uStack_258;
    }
    puVar21 = puStack_118 + uStack_110 * 9;
    uStack_298 = uStack_298 - 1;
    uVar20 = *param_10;
    puStack_280 = (undefined1 *)param_10[1];
    lVar28 = 0;
    puVar15 = puStack_118;
    do {
      auVar44 = ZEXT416((uint)fVar30);
      do {
        lVar23 = lVar28;
        puVar13 = puVar15;
        if (puVar13 == puVar21) {
          puStack_270 = puStack_118 + uStack_110 * 9;
          bVar10 = true;
          puVar15 = puStack_118;
          lVar28 = 0;
          goto LAB_14146878e;
        }
        puVar15 = puVar13 + 9;
        lVar28 = lVar23 + 1;
      } while ((param_7 != 0 && lVar23 == 0) ||
              ((param_8 < uStack_298 && (lVar23 == uStack_110 - 1))));
      fVar33 = *(float *)(puVar13 + 5);
      fVar37 = *(float *)((longlong)puVar13 + 0x2c);
      fVar32 = *(float *)(puVar13 + 6);
      fVar34 = *(float *)((longlong)puVar13 + 0x34);
      fVar35 = *(float *)(puVar13 + 3);
      fVar42 = *(float *)((longlong)puVar13 + 0x1c);
      fVar36 = *(float *)(puVar13 + 4);
      fVar38 = *(float *)((longlong)puVar13 + 0x24);
      fVar40 = (float)*(undefined8 *)((longlong)puVar13 + 0x3c) + _DAT_14330ad60;
      fVar41 = (float)((ulonglong)*(undefined8 *)((longlong)puVar13 + 0x3c) >> 0x20) +
               _UNK_14330ad64;
      fVar43 = *(float *)((longlong)puVar13 + 0x44) + 0.0;
      uVar24 = *puVar13;
      uVar19 = puVar13[1];
      fVar30 = *(float *)((longlong)puVar13 + 4);
      fVar39 = *(float *)(puVar13 + 7);
      uVar12 = pdb_1409012c0(uStack_130);
      pdb_140a77410(&fStack_228);
      uStack_188 = CONCAT44(fVar42 * fVar40,fVar35 * fVar40);
      uStack_180 = (ulonglong *)CONCAT44(fVar38 * fVar41,fVar36 * fVar40);
      uStack_178 = CONCAT44(fVar37 * fVar41,fVar33 * fVar41);
      uStack_170 = CONCAT44(fVar34 * fVar43,fVar32 * fVar43);
      uStack_158 = CONCAT44((int)lVar23,(int)param_6);
      uStack_14c = 0;
      uStack_148 = uStack_1e8;
      uStack_144 = uStack_1e4;
      uStack_140 = uStack_1e0;
      uStack_13c = uStack_1dc;
      fStack_168 = fVar39 * fVar43;
      uStack_164 = (int)uVar24;
      fStack_160 = fVar30 + fVar31;
      uStack_15c = (int)uVar19;
      uStack_150 = uVar12;
      cVar11 = pdb_1413f6d90(uVar20,&uStack_188);
      fVar30 = _DAT_142e36f28;
      if (cVar11 != '\0') {
        *puStack_280 = 1;
        fVar30 = _DAT_142e36f28;
      }
    } while( true );
  }
  uVar20 = 0;
LAB_141467d19:
  pdb_142dc7e2a(uVar20,puVar21);
LAB_1414690e1:
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
LAB_14146878e:
  if (puVar15 == puStack_270) {
LAB_141468f4a:
    if (uStack_120 != 0) {
      pub_1406abac0((byte *)puStack_118,uStack_120 * 0x48,4);
    }
    if (uStack_308 != 0) {
      pub_1406abac0((byte *)puStack_2e0,uStack_308 << 3,8);
    }
    return lVar28;
  }
  puVar21 = puVar15 + 9;
  puVar13 = puVar15;
  if (bVar10) {
    if (puVar21 == puStack_270) goto LAB_141468f4a;
    puVar13 = puVar21;
    in_R10 = puVar15;
    puVar21 = puVar15 + 0x12;
  }
  puStack_278 = puVar21;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uStack_108;
  uVar24 = uStack_100 * 0x4385df649fccf645 +
           SUB168(auVar2 * ZEXT816(0x4385df649fccf645),8) + uStack_108 * 0x2360ed051fc65da4;
  uVar19 = uVar24 ^ SUB168(auVar2 * ZEXT816(0x4385df649fccf645),0);
  uStack_2b8 = (ulonglong *)*in_R10;
  uStack_2b0 = 0;
  uStack_2a8 = *(ulonglong *)((longlong)in_R10 + 0xc);
  uStack_2a0 = 0;
  uStack_298 = *puVar13;
  uStack_290 = 0;
  uStack_2d8 = *(longlong *)((longlong)puVar13 + 0xc);
  uStack_2d0 = 0;
  bVar14 = (byte)(uVar24 >> 0x3a);
  fVar30 = (float)(((uint)(uVar19 >> bVar14) | (uint)(uVar19 << 0x40 - bVar14)) >> 9 | 0x3f800000) +
           _DAT_142e36f34;
  lVar23 = uStack_108 * 0x17bce35bdf69743c;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uStack_108;
  uStack_108 = SUB168(auVar3 * ZEXT816(0x529ed9eb20e0ae99),0);
  uStack_100 = uStack_100 * 0x529ed9eb20e0ae99 +
               SUB168(auVar3 * ZEXT816(0x529ed9eb20e0ae99),8) + lVar23;
  auStack_248 = ZEXT416(*(uint *)((longlong)puVar13 + 0x14));
  uVar12 = *(undefined4 *)((longlong)in_R10 + 0x14);
  auStack_238 = ZEXT416((uint)puVar13[1]);
  uVar24 = in_R10[1];
  bVar14 = (byte)(uStack_100 >> 0x3a);
  fStack_1d4 = fVar30 * _DAT_142e37988 + (auVar44._0_4_ - fVar30) * _DAT_142e3b1d8;
  fVar30 = (float)(((uint)((uStack_100 ^ uStack_108) >> bVar14) |
                   (uint)((uStack_100 ^ uStack_108) << 0x40 - bVar14)) >> 9 | 0x3f800000) +
           _DAT_142e36f34;
  fStack_1d0 = fVar30 * _DAT_142e3c670 + (auVar44._0_4_ - fVar30) * _DAT_142e382c0;
  fStack_1cc = (fStack_1d0 - fStack_1d4) * fStack_2c8;
  puStack_2e8 = puVar13;
  fVar30 = (float)pub_142e32a40(fStack_1cc * _DAT_142e37adc);
  uVar19 = (longlong)(fVar30 - _DAT_142e36f2c) & (longlong)fVar30 >> 0x3f | (longlong)fVar30;
  if (fVar30 < 0.0) {
    uVar19 = 0;
  }
  if (_DAT_142e36f30 < fVar30) {
    uVar19 = 0xffffffffffffffff;
  }
  uVar25 = 4;
  if (uVar19 < 4) {
    uVar25 = uVar19;
  }
  if (uVar19 == 0) {
    uVar25 = 1;
  }
  fStack_12c = (float)(uVar25 - 1);
  lStack_2f0 = lVar28 + 1;
  auVar8._4_4_ = uVar12;
  auVar8._0_4_ = auStack_248._0_4_;
  auVar8._8_4_ = auStack_248._4_4_;
  auVar8._12_4_ = 0;
  auVar9._4_4_ = (int)uVar24;
  auVar9._0_4_ = auStack_238._0_4_;
  auVar9._8_4_ = auStack_238._4_4_;
  auVar9._12_4_ = 0;
  auStack_248 = auVar8;
  auStack_238 = auVar9;
  for (uVar24 = 0; uVar24 < uVar25; uVar24 = uVar24 + 1) {
    fVar30 = _DAT_142e36f50;
    if (uVar25 != 1) {
      fVar30 = (float)(longlong)uVar24 / fStack_12c;
    }
    fVar36 = auVar44._0_4_;
    fVar30 = fVar30 * fStack_1d0 + (fVar36 - fVar30) * fStack_1d4;
    fVar31 = fVar36 - fVar30;
    fVar39 = auVar44._8_4_;
    fVar32 = (float)uStack_2a8 * fVar30 + (float)uStack_2b8 * fVar31;
    fVar34 = uStack_2a8._4_4_ * fVar30 + uStack_2b8._4_4_ * fVar31;
    fStack_250 = (float)uStack_2a0 * 0.0 + (float)uStack_2b0 * fVar39;
    fStack_24c = uStack_2a0._4_4_ * 0.0 + uStack_2b0._4_4_ * fVar39;
    fVar33 = (float)uStack_2d8 * fVar30 + (float)uStack_298 * fVar31;
    fVar37 = uStack_2d8._4_4_ * fVar30 + uStack_298._4_4_ * fVar31;
    fStack_260 = (float)uStack_2d0 * 0.0 + (float)uStack_290 * fVar39;
    fStack_25c = uStack_2d0._4_4_ * 0.0 + uStack_290._4_4_ * fVar39;
    fVar35 = fVar30 * (float)auStack_248._0_4_ + fVar31 * (float)auStack_238._0_4_;
    fVar42 = fVar30 * (float)auStack_248._4_4_ + fVar31 * (float)auStack_238._4_4_;
    fVar30 = fVar33 - fVar32;
    fVar31 = fVar37 - fVar34;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uStack_108;
    uVar19 = SUB168(auVar4 * ZEXT816(0x4385df649fccf645),0);
    uVar26 = uStack_100 * 0x4385df649fccf645 +
             SUB168(auVar4 * ZEXT816(0x4385df649fccf645),8) + uStack_108 * 0x2360ed051fc65da4;
    puVar17 = (undefined *)0x0;
    uVar27 = uVar26 ^ uVar19;
    bVar14 = (byte)(uVar26 >> 0x3a);
    fVar39 = fVar35 - fVar42;
    uStack_268 = CONCAT44(fVar37,fVar33);
    if (_DAT_142e3c608 <=
        (float)(((uint)(uVar27 >> bVar14) | (uint)(uVar27 << 0x40 - bVar14)) >> 9 | 0x3f800000) +
        _DAT_142e36f34) {
      puStack_128 = (ulonglong *)CONCAT44(puStack_128._4_4_,fVar42);
      uStack_258 = (ulonglong *)CONCAT44(fVar34,fVar32);
      uStack_108 = uVar19;
      uStack_100 = uVar26;
    }
    else {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uStack_108;
      uVar19 = uStack_100 * 0x529ed9eb20e0ae99 +
               SUB168(auVar5 * ZEXT816(0x529ed9eb20e0ae99),8) + uStack_108 * 0x17bce35bdf69743c;
      uVar26 = uVar19 ^ SUB168(auVar5 * ZEXT816(0x529ed9eb20e0ae99),0);
      bVar14 = (byte)(uVar19 >> 0x3a);
      if (_DAT_142e36f50 <=
          (float)(((uint)(uVar26 >> bVar14) | (uint)(uVar26 << 0x40 - bVar14)) >> 9 | 0x3f800000) +
          _DAT_142e36f34) {
        uStack_258 = (ulonglong *)CONCAT44(fVar34,fVar32);
        fVar37 = fVar30;
        fVar38 = fVar39;
        fVar33 = fVar42;
      }
      else {
        fVar31 = (float)((uint)fVar31 ^ _UNK_142e37824);
        uStack_258 = (ulonglong *)CONCAT44(fVar37,fVar33);
        fVar37 = (float)((uint)fVar30 ^ _DAT_142e37820);
        fVar38 = (float)((uint)fVar39 ^ _DAT_142e37820);
        fStack_250 = fStack_260;
        fStack_24c = fStack_25c;
        fVar33 = fVar35;
      }
      puStack_128 = (ulonglong *)CONCAT44(puStack_128._4_4_,fVar33);
      lVar23 = uStack_108 * 0x25f041404bd80e82;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uStack_108;
      uStack_108 = SUB168(auVar6 * ZEXT816(0xeb5ae837ed42153d),0);
      uStack_100 = uStack_100 * -0x14a517c812bdeac3 +
                   lVar23 + SUB168(auVar6 * ZEXT816(0xeb5ae837ed42153d),8);
      bVar14 = (byte)(uStack_100 >> 0x3a);
      fVar33 = (float)(((uint)((uStack_108 ^ uStack_100) >> bVar14) |
                       (uint)((uStack_108 ^ uStack_100) << 0x40 - bVar14)) >> 9 | 0x3f800000) +
               _DAT_142e36f34;
      fVar31 = fVar31 - (fVar33 * _DAT_142e36f50 + (fVar36 - fVar33) * _DAT_142e3b1d8) * fStack_1cc;
      uStack_1c8 = CONCAT44(fVar31,fVar37);
      uStack_188 = CONCAT44(fVar30,(uint)fVar39 ^ _DAT_142e37820);
      fStack_1c0 = fVar38;
      pdb_140df4520(&fStack_228,&uStack_188);
      uVar19 = pdb_141b1e510(&uStack_108,2);
      if (1 < uVar19) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar19,2,&UNK_143510930);
      }
      puVar17 = &UNK_14330ae88;
      fVar33 = *(float *)(&UNK_14330ae88 + uVar19 * 4) * _DAT_142e37ad4;
      fVar39 = fVar38 + fVar33 * fStack_220;
      fVar30 = fVar37 + fVar33 * fStack_228;
      fVar31 = fVar31 + fVar33 * fStack_224;
      auVar44 = ZEXT416((uint)_DAT_142e36f28);
    }
    fVar33 = auVar44._0_4_;
    fVar37 = fVar33 / SQRT(fVar30 * fVar30 + fVar31 * fVar31 + fVar39 * fVar39);
    fVar30 = fVar37 * fVar30;
    fVar31 = fVar37 * fVar31;
    fVar37 = fVar37 * fVar39;
    uStack_1c8 = CONCAT44(fVar31,fVar30);
    fStack_1c0 = fVar37;
    if ((((fVar37 == 0.0) && (!NAN(fVar37))) && (fVar30 == 0.0)) && (!NAN(fVar30))) {
      if ((fVar31 == fVar33) && (!NAN(fVar31) && !NAN(fVar33))) {
        pdb_142d8d508(CONCAT71((int7)((ulonglong)puVar17 >> 8),1),&uStack_1c8,&UNK_14330ae90,
                      &UNK_14330ae9c,0x65,&UNK_14330aed0);
        goto LAB_1414690e1;
      }
    }
    fVar40 = fVar37 * 0.0 - fVar30 * 0.0;
    fVar38 = fVar30 * _DAT_142e36f28 - fVar31 * 0.0;
    fVar39 = fVar31 * 0.0 - fVar37;
    fVar33 = fVar33 / SQRT(fVar40 * fVar40 + fVar39 * fVar39 + fVar38 * fVar38);
    fVar40 = fVar40 * fVar33;
    fVar38 = fVar38 * fVar33;
    fVar36 = fVar39 * fVar33 * _DAT_142e3b1d8;
    fVar41 = (fVar30 * fVar38 - fVar37 * (fVar31 * 0.0 - fVar37 * _DAT_142e36f28) * fVar33) *
             _DAT_1430151c0;
    fVar33 = (fVar31 * fVar39 * fVar33 - fVar30 * fVar40) * _UNK_1430151c4;
    uVar12 = pdb_1409012c0(uStack_130);
    pdb_140a77410(&fStack_228);
    fVar39 = SQRT((fVar42 - fVar35) * (fVar42 - fVar35) +
                  (fVar34 - uStack_268._4_4_) * (fVar34 - uStack_268._4_4_) +
                  (fVar32 - (float)uStack_268) * (fVar32 - (float)uStack_268));
    uStack_188 = CONCAT44(_DAT_142e3c660 * fVar40,fVar36);
    uStack_180 = (ulonglong *)CONCAT44(fVar30 * fVar39,_UNK_142e3c664 * fVar38);
    uStack_178 = CONCAT44(fVar37 * fVar39,fVar31 * fVar39);
    uStack_170 = CONCAT44(fVar41,(fVar40 * fVar37 - fVar31 * fVar38) * _UNK_142f6a634);
    uStack_164 = SUB84(uStack_258,0);
    fStack_160 = (float)((ulonglong)uStack_258 >> 0x20);
    uStack_15c = puStack_128._0_4_;
    uStack_158 = CONCAT44((int)uVar24 + (int)lVar28 * 4 + 4,(int)param_6);
    uStack_14c = 0;
    uStack_148 = uStack_1e8;
    uStack_144 = uStack_1e4;
    uStack_140 = uStack_1e0;
    uStack_13c = uStack_1dc;
    fStack_168 = fVar33;
    uStack_150 = uVar12;
    cVar11 = pdb_1413f6d90(uVar20,&uStack_188);
    if (cVar11 != '\0') {
      *puStack_280 = 1;
    }
    auVar44 = ZEXT416((uint)_DAT_142e36f28);
  }
  bVar10 = false;
  puVar15 = puStack_278;
  in_R10 = puStack_2e8;
  lVar28 = lStack_2f0;
  goto LAB_14146878e;
}

