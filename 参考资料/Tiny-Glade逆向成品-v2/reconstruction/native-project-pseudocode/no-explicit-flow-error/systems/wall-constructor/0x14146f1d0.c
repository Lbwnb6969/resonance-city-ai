// VA 0x14146f1d0, PDB extent 4018 bytes
// system_wall_constructor::curved_halftimber::wooden_floor_borders::wooden_floor_borders
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/curved_halftimber/wooden_floor_borders.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::curved_halftimber::wooden_floor_borders::wooden_floor_borders
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/curved_halftimber/wooden_floor_borders.rs
   Extent: 4018 */

void pdb_14146f1d0(longlong *param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5,undefined8 *param_6,longlong *param_7)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  char cVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  byte bVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  float *pfVar22;
  longlong lVar23;
  ulonglong uVar24;
  int *piVar25;
  float *pfVar26;
  longlong lVar27;
  uint uVar28;
  ushort uVar29;
  longlong lVar30;
  longlong lVar31;
  float *pfVar32;
  undefined1 uVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  longlong lStack_2d0;
  byte *pbStack_2c8;
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  undefined8 uStack_2a0;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  byte **ppbStack_288;
  longlong lStack_248;
  byte *pbStack_240;
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [16];
  undefined8 uStack_218;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  longlong lStack_1b8;
  float fStack_1b0;
  undefined4 uStack_1ac;
  undefined7 uStack_1a8;
  undefined1 uStack_1a1;
  float fStack_1a0;
  undefined4 uStack_19c;
  undefined7 uStack_198;
  undefined1 uStack_191;
  undefined7 uStack_190;
  undefined1 uStack_189;
  undefined7 uStack_188;
  undefined8 uStack_181;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  undefined7 uStack_170;
  undefined1 uStack_169;
  undefined7 uStack_168;
  undefined8 uStack_161;
  byte *pbStack_158;
  byte *pbStack_150;
  float *pfStack_148;
  int iStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined8 uStack_130;
  float fStack_128;
  undefined8 uStack_120;
  byte *pbStack_118;
  float *pfStack_110;
  longlong lStack_108;
  longlong *plStack_100;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  lVar6 = *param_1;
  uVar20 = pdb_140b54b40(param_3,lVar6);
  if ((uVar20 & 0xffffffff) == 0) {
    return;
  }
  lVar31 = param_5[1];
  uVar24 = uVar20 & 0xffffffff ^ 0xffffffff;
  if (*(ulonglong *)(lVar31 + 0x10) <= uVar24) {
    return;
  }
  piVar25 = (int *)(uVar24 * 0x18 + *(longlong *)(lVar31 + 8));
  if (piVar25[4] != (int)(uVar20 >> 0x20)) {
    return;
  }
  if (*piVar25 == 0) {
    return;
  }
  lVar27 = *param_5;
  uVar20 = *(ulonglong *)(piVar25 + 2);
  if (*(ulonglong *)(lVar27 + 0x38) <= (uVar20 & 0xffffffff)) {
    return;
  }
  if ((*(ulonglong *)(*(longlong *)(lVar27 + 0x28) + (uVar20 >> 6 & 0x3ffffff) * 8) >>
       (uVar20 & 0x3f) & 1) == 0) {
    return;
  }
  lVar31 = *(longlong *)
            (*(longlong *)(*(longlong *)(lVar31 + 0x1a0) + 0x18 + (uVar20 >> 0x20) * 0x48) + 0x10 +
            ~*(ulonglong *)
              (*(longlong *)(*(longlong *)(lVar31 + 0x1a0) + 0x38 + (uVar20 >> 0x20) * 0x48) +
              *(longlong *)(lVar27 + 0x110) * 8) * 0x30);
  cVar5 = *(char *)(lVar31 + 0x40 + (ulonglong)(uint)~piVar25[1] * 0x58);
  if (cVar5 == '\0') {
    bVar18 = pdb_1408ff990(param_2 + 0x2a3);
  }
  else {
    if (cVar5 == '\x01') {
      return;
    }
    bVar18 = *(byte *)(lVar31 + (ulonglong)(uint)~piVar25[1] * 0x58 + 0x41) & 1;
  }
  if (bVar18 == 0) {
    return;
  }
  if (param_4[3] == 0) {
    return;
  }
  uVar20 = pdb_1400af0a0(param_4 + 4,param_1);
  lVar31 = *param_4;
  pfVar26 = (float *)param_4[1];
  bVar18 = (byte)(uVar20 >> 0x39);
  auVar36 = ZEXT216(CONCAT11(bVar18,bVar18));
  auVar36 = pshuflw(auVar36,auVar36,0);
  lVar27 = 0;
  do {
    uVar20 = uVar20 & (ulonglong)pfVar26;
    auVar4 = *(undefined1 (*) [16])(lVar31 + uVar20);
    auVar40[0] = -(auVar4[0] == auVar36[0]);
    auVar40[1] = -(auVar4[1] == auVar36[1]);
    auVar40[2] = -(auVar4[2] == auVar36[2]);
    auVar40[3] = -(auVar4[3] == auVar36[3]);
    auVar40[4] = -(auVar4[4] == auVar36[4]);
    auVar40[5] = -(auVar4[5] == auVar36[5]);
    auVar40[6] = -(auVar4[6] == auVar36[6]);
    auVar40[7] = -(auVar4[7] == auVar36[7]);
    auVar40[8] = -(auVar4[8] == auVar36[0]);
    auVar40[9] = -(auVar4[9] == auVar36[1]);
    auVar40[10] = -(auVar4[10] == auVar36[2]);
    auVar40[0xb] = -(auVar4[0xb] == auVar36[3]);
    auVar40[0xc] = -(auVar4[0xc] == auVar36[4]);
    auVar40[0xd] = -(auVar4[0xd] == auVar36[5]);
    auVar40[0xe] = -(auVar4[0xe] == auVar36[6]);
    auVar40[0xf] = -(auVar4[0xf] == auVar36[7]);
    uVar29 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf;
    uVar28 = (uint)uVar29;
    while (uVar29 != 0) {
      uVar7 = 0;
      for (uVar8 = uVar28; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      lVar30 = (uVar7 + uVar20 & (ulonglong)pfVar26) * -0x68;
      if (lVar6 == *(longlong *)(lVar31 + -0x68 + lVar30)) {
        uVar21 = pdb_140c2abc0(lVar31 + lVar30 + -0x60);
        pfVar22 = (float *)pdb_140c2b5c0(uVar21);
        fVar14 = _DAT_142e37ad4;
        plStack_100 = (longlong *)param_6[1];
        if (plStack_100 == (longlong *)0x0) {
          plStack_100 = (longlong *)param_6[2];
        }
        uStack_120 = *param_6;
        goto LAB_14146f444;
      }
      uVar29 = (ushort)(uVar28 - 1) & (ushort)uVar28;
      uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar29);
    }
    auVar39[0] = -(auVar4[0] == -1);
    auVar39[1] = -(auVar4[1] == -1);
    auVar39[2] = -(auVar4[2] == -1);
    auVar39[3] = -(auVar4[3] == -1);
    auVar39[4] = -(auVar4[4] == -1);
    auVar39[5] = -(auVar4[5] == -1);
    auVar39[6] = -(auVar4[6] == -1);
    auVar39[7] = -(auVar4[7] == -1);
    auVar39[8] = -(auVar4[8] == -1);
    auVar39[9] = -(auVar4[9] == -1);
    auVar39[10] = -(auVar4[10] == -1);
    auVar39[0xb] = -(auVar4[0xb] == -1);
    auVar39[0xc] = -(auVar4[0xc] == -1);
    auVar39[0xd] = -(auVar4[0xd] == -1);
    auVar39[0xe] = -(auVar4[0xe] == -1);
    auVar39[0xf] = -(auVar4[0xf] == -1);
    if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar39 >> 0x17,0) & 1) != 0) || (SUB161(auVar39 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar39 >> 0x27,0) & 1) != 0) || (SUB161(auVar39 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar39 >> 0x37,0) & 1) != 0) || (SUB161(auVar39 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar39 >> 0x47,0) & 1) != 0) || (SUB161(auVar39 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar39 >> 0x57,0) & 1) != 0) || (SUB161(auVar39 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar39 >> 0x67,0) & 1) != 0) || (SUB161(auVar39 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar39 >> 0x77,0) & 1) != 0) || auVar39[0xf] < '\0') {
      return;
    }
    uVar20 = uVar20 + lVar27 + 0x10;
    lVar27 = lVar27 + 0x10;
  } while( true );
LAB_14146f444:
  do {
    while( true ) {
      while( true ) {
        pfVar32 = pfVar22;
        if (pfVar32 == pfVar26) {
          return;
        }
        if ((*(char *)((longlong)pfVar32 + 0x11) == '\0') &&
           ((*(char *)(pfVar32 + 4) == '\x01' || (*(char *)(pfVar32 + 4) == '\x04')))) break;
        pfVar22 = pfVar32 + 5;
      }
      piVar25 = (int *)pdb_14092f900(param_2);
      pfStack_110 = pfVar32 + 5;
      if (*piVar25 == 1) break;
      pdb_14092f930(param_2);
      pbStack_f8 = (byte *)(piVar25 + 1);
      pdb_141c40430(piVar25 + 4);
      pdb_140df4540(&fStack_298,pbStack_f8);
      pdb_140aaa9f0(&lStack_1b8,&fStack_298);
      uVar19 = pdb_140315970(param_1);
      pdb_140aaac40(&uStack_350,&lStack_1b8,uVar19);
      uVar19 = pdb_1409012c0(uStack_320);
      pdb_1408fd550(&fStack_208,uVar19);
      pdb_14007ee60();
      ppbStack_288 = (byte **)CONCAT44(fStack_1fc,fStack_200);
      fStack_290 = fStack_208;
      fStack_28c = fStack_204;
      uStack_169 = (undefined1)uStack_310;
      uStack_168 = (undefined7)((ulonglong)uStack_310 >> 8);
      uStack_161 = uStack_308;
      uStack_179 = (undefined1)uStack_320;
      uStack_178 = (undefined7)(CONCAT44(uStack_31c,uStack_320) >> 8);
      uStack_171 = (undefined1)uStack_318;
      uStack_170 = (undefined7)((ulonglong)uStack_318 >> 8);
      uStack_189 = (undefined1)uStack_330;
      uStack_188 = (undefined7)((ulonglong)uStack_330 >> 8);
      uStack_181 = uStack_328;
      uStack_19c._3_1_ = (undefined1)uStack_340;
      uStack_198 = (undefined7)((ulonglong)uStack_340 >> 8);
      uStack_191 = (undefined1)uStack_338;
      uStack_190 = (undefined7)((ulonglong)uStack_338 >> 8);
      uStack_1ac._3_1_ = (undefined1)uStack_350;
      uStack_1a8 = (undefined7)((ulonglong)uStack_350 >> 8);
      uStack_1a1 = (undefined1)uStack_348;
      fStack_1a0 = (float)((ulonglong)uStack_348 >> 8);
      uStack_19c._0_3_ = (undefined3)((ulonglong)uStack_348 >> 0x28);
      uVar21 = pdb_140ed5970(uStack_120);
      plVar3 = plStack_100;
      lVar31 = plStack_100[2];
      if ((ulonglong)(*plStack_100 - lVar31) < 200) {
        pdb_142d7f1b0(plStack_100,lVar31,200,1,1);
      }
      lVar27 = plVar3[1];
      *(code **)(lVar27 + lVar31) = pdb_141414080;
      uVar15 = _UNK_142e4e658;
      puVar2 = (undefined8 *)(lVar27 + 8 + lVar31);
      *puVar2 = _DAT_142e4e650;
      puVar2[1] = uVar15;
      *(undefined8 *)(lVar27 + 0x18 + lVar31) = 0;
      *(undefined4 *)(lVar27 + 0x20 + lVar31) = 0;
      *(undefined8 *)(lVar27 + 0x24 + lVar31) = 0x3f8000003f800000;
      *(undefined4 *)(lVar27 + 0x2c + lVar31) = 0x3f800000;
      puVar2 = (undefined8 *)(lVar27 + 0x30 + lVar31);
      *puVar2 = CONCAT44(fStack_294,fStack_298);
      puVar2[1] = CONCAT44(fStack_28c,fStack_290);
      *(byte ***)(lVar27 + 0x40 + lVar31) = ppbStack_288;
      *(undefined1 *)(lVar27 + 0x48 + lVar31) = 0x16;
      auVar36[7] = uStack_1a1;
      auVar36._0_7_ = uStack_1a8;
      auVar36._8_4_ = fStack_1a0;
      auVar36._12_4_ = uStack_19c;
      auVar4[7] = uStack_191;
      auVar4._0_7_ = uStack_198;
      auVar4._8_7_ = uStack_190;
      auVar4[0xf] = uStack_189;
      auVar12._7_8_ = uStack_181;
      auVar12._0_7_ = uStack_188;
      auVar12[0xf] = uStack_179;
      plVar1 = (longlong *)(lVar27 + 0x49 + lVar31);
      *plVar1 = lStack_1b8;
      plVar1[1] = CONCAT44(uStack_1ac,fStack_1b0);
      *(undefined1 (*) [16])(lVar27 + 0x59 + lVar31) = auVar36;
      *(undefined1 (*) [16])(lVar27 + 0x69 + lVar31) = auVar4;
      *(undefined1 (*) [16])(lVar27 + 0x79 + lVar31) = auVar12;
      puVar2 = (undefined8 *)(lVar27 + 0x89 + lVar31);
      *puVar2 = CONCAT17(uStack_171,uStack_178);
      puVar2[1] = CONCAT17(uStack_169,uStack_170);
      puVar2 = (undefined8 *)(lVar27 + 0x98 + lVar31);
      *puVar2 = CONCAT71(uStack_168,uStack_169);
      puVar2[1] = uStack_161;
      *(longlong *)(lVar27 + 0xa8 + lVar31) = lVar6;
      *(undefined1 *)(lVar27 + 0xb0 + lVar31) = 0;
      *(undefined8 *)(lVar27 + 0xb8 + lVar31) = uVar21;
      plVar3[2] = lVar31 + 200;
      lVar31 = param_7[2];
      if (lVar31 == *param_7) {
        pdb_142db0920(param_7);
      }
      *(undefined8 *)(param_7[1] + lVar31 * 8) = uVar21;
      param_7[2] = lVar31 + 1;
      pfVar22 = pfStack_110;
    }
    piVar25 = piVar25 + 1;
    fVar34 = (float)pdb_140deec10(pfVar32);
    fVar35 = (float)pdb_140df3ee0(piVar25);
    if (fVar34 + fVar14 <= fVar35) {
      fVar34 = *pfVar32;
      fVar35 = (float)pdb_140df3ee0(piVar25);
      if ((NAN(fVar34 / fVar35)) ||
         (fVar34 = pfVar32[2], fVar35 = (float)pdb_140df3ee0(piVar25), NAN(fVar34 / fVar35))) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
      }
      pub_142e32a70();
      pub_142e32a70();
      pdb_140df37e0(&lStack_1b8,piVar25);
      pdb_1413f8b70(&lStack_2d0,&lStack_1b8);
      if (lStack_1b8 != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_1ac,fStack_1b0),lStack_1b8 << 3,4);
      }
      if (CONCAT44(uStack_19c,fStack_1a0) != 0) {
        pub_1406abac0((byte *)CONCAT17(uStack_191,uStack_198),CONCAT44(uStack_19c,fStack_1a0) << 2,4
                     );
      }
    }
    else {
      pdb_140df0e20(&lStack_2d0,piVar25);
    }
    pfVar22 = pfStack_110;
  } while (SBORROW8(0,lStack_2d0));
  uStack_218 = uStack_2a0;
  auStack_228 = auStack_2b0;
  auStack_238 = auStack_2c0;
  lStack_248 = lStack_2d0;
  pbStack_240 = pbStack_2c8;
  pdb_140df37e0(&lStack_1b8,piVar25);
  lStack_108 = lStack_1b8;
  pbStack_f8 = (byte *)CONCAT44(uStack_1ac,fStack_1b0);
  lVar31 = CONCAT17(uStack_1a1,uStack_1a8);
  if (CONCAT44(uStack_19c,fStack_1a0) != 0) {
    pub_1406abac0((byte *)CONCAT17(uStack_191,uStack_198),CONCAT44(uStack_19c,fStack_1a0) << 2,4);
  }
  pbStack_118 = pbStack_240;
  pbStack_150 = pbStack_240 + auStack_238._0_8_ * 8;
  iStack_140 = 0;
  pfStack_148 = pfVar32;
  if (auStack_238._0_8_ != 0) {
    lVar31 = lVar31 << 3;
    pbStack_158 = pbStack_240;
    do {
      pbStack_158 = pbStack_158 + 8;
      pdb_140df4540(&fStack_204);
      fStack_208 = 1.4013e-45;
      if (iStack_140 == 1) {
        fStack_13c = (float)uStack_130;
        fStack_138 = (float)((ulonglong)uStack_130 >> 0x20);
        uStack_130 = CONCAT44(fStack_200,fStack_204);
        fVar34 = fStack_1fc;
        fVar35 = fStack_204;
        fVar43 = fStack_200;
        fVar44 = fStack_128;
      }
      else {
        fStack_298 = 1.4013e-45;
        fStack_294 = fStack_204;
        fStack_290 = fStack_200;
        fStack_28c = fStack_1fc;
        ppbStack_288 = &pbStack_158;
        pdb_14141f650(&lStack_1b8,&fStack_298);
        auVar9._4_7_ = uStack_1a8;
        auVar9._0_4_ = uStack_1ac;
        auVar9[0xb] = uStack_1a1;
        uStack_130 = auVar9._4_8_;
        fStack_128 = fStack_1a0;
        iStack_140 = (int)lStack_1b8;
        fStack_13c = (float)((ulonglong)lStack_1b8 >> 0x20);
        fStack_138 = fStack_1b0;
        fStack_134 = uStack_1ac;
        if (iStack_140 != 1) break;
        fVar35 = (float)uStack_1a8;
        fVar43 = auVar9._8_4_;
        fVar34 = fStack_1a0;
        fVar44 = uStack_1ac;
      }
      fVar17 = fStack_138;
      fVar16 = fStack_13c;
      fVar41 = fVar35 - fStack_13c;
      fVar42 = fVar43 - fStack_138;
      lVar27 = 0;
      do {
        lVar30 = lVar27;
        if (lVar31 == lVar30) break;
        fVar37 = (float)*(undefined8 *)(pbStack_f8 + lVar30) - fStack_13c;
        fVar38 = (float)((ulonglong)*(undefined8 *)(pbStack_f8 + lVar30) >> 0x20) - fVar44;
        lVar27 = lVar30 + 8;
      } while (fVar14 <= SQRT(fVar38 * fVar38 + fVar37 * fVar37));
      lVar27 = 0;
      do {
        lVar23 = lVar27;
        if (lVar31 == lVar23) break;
        fVar37 = (float)*(undefined8 *)(pbStack_f8 + lVar23) - fVar35;
        fVar38 = (float)((ulonglong)*(undefined8 *)(pbStack_f8 + lVar23) >> 0x20) - fVar34;
        lVar27 = lVar23 + 8;
      } while (fVar14 <= SQRT(fVar38 * fVar38 + fVar37 * fVar37));
      fStack_134 = fVar44;
      fStack_128 = fVar34;
      uVar19 = pdb_1409012c0(4);
      pdb_1408fd550(&fStack_298,uVar19);
      fStack_208 = fStack_298;
      fStack_204 = fStack_294;
      fStack_200 = fStack_290;
      fStack_1fc = fStack_28c;
      pdb_14007ee60();
      uStack_2e8 = CONCAT44(fStack_204,fStack_208);
      uStack_2e0 = CONCAT44(fStack_1fc,fStack_200);
      fStack_200 = (fVar44 + fVar34) * _DAT_142e36f50;
      fStack_208 = (fVar16 + fVar35) * _DAT_142e36f60;
      fStack_204 = (fVar17 + fVar43) * _UNK_142e36f64;
      uVar33 = lVar31 != lVar23;
      uVar28 = (uint)(lVar31 != lVar30);
      fVar34 = SQRT(fVar42 * fVar42 + fVar41 * fVar41 + (fVar34 - fVar44) * (fVar34 - fVar44));
      pdb_140aaa800(&fStack_298,&fStack_208);
      uVar19 = pdb_140315970(param_1);
      pdb_140aaac40(&fStack_208,&fStack_298,uVar19);
      uStack_2f8 = uStack_2e8;
      uStack_2f0 = uStack_2e0;
      uStack_169 = (undefined1)uStack_1c8;
      uStack_168 = (undefined7)((ulonglong)uStack_1c8 >> 8);
      uStack_161 = uStack_1c0;
      uStack_179 = (undefined1)uStack_1d8;
      uStack_178 = (undefined7)((ulonglong)uStack_1d8 >> 8);
      uStack_171 = (undefined1)uStack_1d0;
      uStack_170 = (undefined7)((ulonglong)uStack_1d0 >> 8);
      uStack_189 = (undefined1)uStack_1e8;
      uStack_188 = (undefined7)((ulonglong)uStack_1e8 >> 8);
      uStack_181 = uStack_1e0;
      uStack_19c._3_1_ = (undefined1)uStack_1f8;
      uStack_198 = (undefined7)((ulonglong)uStack_1f8 >> 8);
      uStack_191 = (undefined1)uStack_1f0;
      uStack_190 = (undefined7)((ulonglong)uStack_1f0 >> 8);
      uStack_1ac._3_1_ = SUB41(fStack_208,0);
      uStack_1a8 = (undefined7)(CONCAT44(fStack_204,fStack_208) >> 8);
      uStack_1a1 = SUB41(fStack_200,0);
      fStack_1a0 = (float)(CONCAT44(fStack_1fc,fStack_200) >> 8);
      uStack_19c._0_3_ = (undefined3)((uint)fStack_1fc >> 8);
      uVar21 = pdb_140ed5970(uStack_120);
      lVar27 = plStack_100[2];
      if ((ulonglong)(*plStack_100 - lVar27) < 200) {
        pdb_142d7f1b0(plStack_100,lVar27,200,1,1,fVar34,uVar28,uVar33);
      }
      lVar30 = plStack_100[1];
      *(code **)(lVar30 + lVar27) = pdb_141414080;
      uVar15 = _UNK_142e4e658;
      puVar2 = (undefined8 *)(lVar30 + 8 + lVar27);
      *puVar2 = _DAT_142e4e650;
      puVar2[1] = uVar15;
      *(undefined8 *)(lVar30 + 0x18 + lVar27) = 0;
      *(undefined4 *)(lVar30 + 0x20 + lVar27) = 0;
      *(undefined8 *)(lVar30 + 0x24 + lVar27) = 0x3f8000003f800000;
      *(undefined4 *)(lVar30 + 0x2c + lVar27) = 0x3f800000;
      puVar2 = (undefined8 *)(lVar30 + 0x30 + lVar27);
      *puVar2 = uStack_300;
      puVar2[1] = uStack_2f8;
      *(undefined8 *)(lVar30 + 0x40 + lVar27) = uStack_2f0;
      *(undefined1 *)(lVar30 + 0x48 + lVar27) = 0x16;
      auVar10[7] = uStack_1a1;
      auVar10._0_7_ = uStack_1a8;
      auVar10._8_4_ = fStack_1a0;
      auVar10._12_4_ = uStack_19c;
      auVar11[7] = uStack_191;
      auVar11._0_7_ = uStack_198;
      auVar11._8_7_ = uStack_190;
      auVar11[0xf] = uStack_189;
      auVar13._7_8_ = uStack_181;
      auVar13._0_7_ = uStack_188;
      auVar13[0xf] = uStack_179;
      plVar3 = (longlong *)(lVar30 + 0x49 + lVar27);
      *plVar3 = lStack_1b8;
      plVar3[1] = CONCAT44(uStack_1ac,fStack_1b0);
      *(undefined1 (*) [16])(lVar30 + 0x59 + lVar27) = auVar10;
      *(undefined1 (*) [16])(lVar30 + 0x69 + lVar27) = auVar11;
      *(undefined1 (*) [16])(lVar30 + 0x79 + lVar27) = auVar13;
      puVar2 = (undefined8 *)(lVar30 + 0x89 + lVar27);
      *puVar2 = CONCAT17(uStack_171,uStack_178);
      puVar2[1] = CONCAT17(uStack_169,uStack_170);
      puVar2 = (undefined8 *)(lVar30 + 0x98 + lVar27);
      *puVar2 = CONCAT71(uStack_168,uStack_169);
      puVar2[1] = uStack_161;
      *(longlong *)(lVar30 + 0xa8 + lVar27) = lVar6;
      *(undefined1 *)(lVar30 + 0xb0 + lVar27) = 0;
      *(undefined8 *)(lVar30 + 0xb8 + lVar27) = uVar21;
      plStack_100[2] = lVar27 + 200;
      lVar27 = param_7[2];
      if (lVar27 == *param_7) {
        pdb_142db0920(param_7);
      }
      *(undefined8 *)(param_7[1] + lVar27 * 8) = uVar21;
      param_7[2] = lVar27 + 1;
    } while (pbStack_158 != pbStack_150);
  }
  if (lStack_108 != 0) {
    pub_1406abac0(pbStack_f8,lStack_108 << 3,4);
  }
  pfVar22 = pfStack_110;
  if (lStack_248 != 0) {
    pub_1406abac0(pbStack_118,lStack_248 << 3,4);
  }
  if (auStack_238._8_8_ != 0) {
    pub_1406abac0((byte *)auStack_228._0_8_,auStack_238._8_8_ << 2,4);
  }
  goto LAB_14146f444;
}

