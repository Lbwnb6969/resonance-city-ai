// VA 0x142954610, PDB extent 7354 bytes
// system_critters::fish::fish
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/fish.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::fish::fish
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/fish.rs
   Extent: 7354 */

void pdb_142954610(longlong *param_1,longlong *param_2,undefined8 *param_3,ulonglong *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 param_9,undefined8 *param_10,undefined8 *param_11,longlong *param_12,
                  undefined8 *param_13,longlong *param_14,longlong *param_15,undefined8 *param_16)

{
  undefined8 *puVar1;
  uint *puVar2;
  float *pfVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong *puVar19;
  char cVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  char *pcVar28;
  int *piVar29;
  ulonglong uVar30;
  longlong lVar31;
  float *pfVar32;
  ulonglong uVar33;
  int iVar34;
  longlong *plVar35;
  undefined8 *puVar36;
  ulonglong uVar37;
  uint *puVar38;
  longlong *plVar39;
  longlong lVar40;
  longlong lVar41;
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
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined8 in_stack_fffffffffffffc68;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
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
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [20];
  undefined1 auStack_28c [12];
  undefined1 auStack_280 [8];
  float fStack_278;
  undefined1 auStack_270 [8];
  float fStack_268;
  undefined1 auStack_260 [8];
  float fStack_258;
  undefined1 auStack_250 [8];
  float fStack_248;
  longlong lStack_240;
  longlong lStack_238;
  longlong lStack_230;
  undefined8 uStack_228;
  longlong *plStack_220;
  undefined8 uStack_218;
  float fStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulonglong uStack_1f8;
  longlong lStack_1f0;
  undefined8 uStack_1e8;
  float *pfStack_1e0;
  undefined8 uStack_1d8;
  float fStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  ulonglong uStack_1b8;
  ulonglong uStack_1b0;
  ulonglong uStack_1a8;
  longlong lStack_1a0;
  ulonglong *puStack_198;
  byte *pbStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  longlong lStack_170;
  longlong *plStack_168;
  undefined8 uStack_160;
  float fStack_158;
  undefined1 *puStack_150;
  undefined8 *puStack_148;
  float fStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  longlong *plStack_118;
  longlong *plStack_110;
  undefined8 uStack_108;
  float fStack_100;
  float *pfStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  uVar24 = *param_7;
  uStack_2e8 = param_7[0x12];
  uStack_2e0 = param_7[0x13];
  uStack_2f8 = param_7[0x10];
  uStack_2f0 = param_7[0x11];
  uStack_308 = param_7[0xe];
  uStack_300 = param_7[0xf];
  uStack_318 = param_7[0xc];
  uStack_310 = param_7[0xd];
  uStack_358 = *(undefined4 *)(param_7 + 4);
  uStack_354 = *(undefined4 *)((longlong)param_7 + 0x24);
  uStack_350 = *(undefined4 *)(param_7 + 5);
  uStack_34c = *(undefined4 *)((longlong)param_7 + 0x2c);
  uStack_348 = *(undefined4 *)(param_7 + 6);
  uStack_344 = *(undefined4 *)((longlong)param_7 + 0x34);
  uStack_340 = *(undefined4 *)(param_7 + 7);
  uStack_33c = *(undefined4 *)((longlong)param_7 + 0x3c);
  uStack_338 = *(undefined4 *)(param_7 + 8);
  uStack_334 = *(undefined4 *)((longlong)param_7 + 0x44);
  uStack_330 = *(undefined4 *)(param_7 + 9);
  uStack_32c = *(undefined4 *)((longlong)param_7 + 0x4c);
  uStack_328 = *(undefined4 *)(param_7 + 10);
  uStack_324 = *(undefined4 *)((longlong)param_7 + 0x54);
  uStack_320 = *(undefined4 *)(param_7 + 0xb);
  uStack_31c = *(undefined4 *)((longlong)param_7 + 0x5c);
  puStack_150 = (undefined1 *)*param_10;
  uStack_1c8 = param_10[4];
  *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
  param_5 = (longlong *)*param_5;
  plStack_220 = param_1;
  puStack_1c0 = param_3;
  puStack_198 = param_4;
  plStack_168 = param_2;
  lVar21 = pdb_1406d0830(uVar24);
  puVar1 = (undefined8 *)(lVar21 + 0x20);
  puVar36 = (undefined8 *)(lVar21 + 0x28);
  if (*(char *)(lVar21 + 0x298) == '\0') {
    puVar36 = (undefined8 *)(lVar21 + 0x10);
    puVar1 = (undefined8 *)(lVar21 + 8);
  }
  uStack_200 = *puVar36;
  uStack_208 = *puVar1;
  pdb_140bfabf0(auStack_2d0,&uStack_358);
  fVar58 = _UNK_143014b84;
  uVar61 = _DAT_143006a28;
  fVar50 = _UNK_142e61234;
  fVar47 = _DAT_142e61230;
  fVar46 = _DAT_142e36f50;
  fVar13 = _DAT_142e36f38;
  plStack_110 = param_5;
  if ((ulonglong)param_5[6] < 200) {
    lVar21 = *param_14;
    pfVar32 = (float *)param_14[2];
    fVar43 = *(float *)((longlong)param_14 + 0x1c);
    plStack_118 = param_5 + 3;
    lVar40 = 0;
    uStack_1a8 = CONCAT44(uStack_1a8._4_4_,fVar43);
    pfStack_f8 = pfVar32;
    do {
      if ((ulonglong)plStack_110[6] < 200) {
        uVar33 = *(ulonglong *)(lVar21 + 0x10);
        puStack_148 = (undefined8 *)0x0;
        fStack_140 = (float)uVar33;
        uStack_13c = (undefined4)(uVar33 >> 0x20);
        if (uVar33 == 0) {
          pdb_142e2d840(&puStack_148);
LAB_142956042:
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2();
        }
        uVar27 = *puStack_198;
        uVar37 = uVar27 + 0xa0761d6478bd642f;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar37 ^ 0xe7037ed1a0b428db;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar37;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = SUB168(auVar5 * auVar9,0) ^ SUB168(auVar5 * auVar9,8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar33;
        uVar30 = SUB168(auVar6 * auVar10,8);
        uVar22 = SUB168(auVar6 * auVar10,0);
        *puStack_198 = uVar37;
        if (uVar22 < uVar33) {
          uVar23 = -uVar33;
          if ((uVar23 | uVar33) >> 0x20 == 0) {
            uVar23 = (uVar23 & 0xffffffff) % (uVar33 & 0xffffffff);
          }
          else {
            uVar23 = uVar23 % uVar33;
          }
          if (uVar22 < uVar23) {
            uVar27 = uVar27 + 0x40ec3ac8f17ac85e;
            do {
              auVar7._8_8_ = 0;
              auVar7._0_8_ = uVar27 ^ 0xe7037ed1a0b428db;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = uVar27;
              uVar37 = uVar37 + 0xa0761d6478bd642f;
              uVar22 = SUB168(auVar7 * auVar11,8) ^ SUB168(auVar7 * auVar11,0);
              uVar27 = uVar27 + 0xa0761d6478bd642f;
            } while (uVar33 * uVar22 < uVar23);
            *puStack_198 = uVar37;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar22;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar33;
            uVar30 = SUB168(auVar8 * auVar12,8);
          }
        }
        *pfVar32 = fVar43;
        if (*(ulonglong *)(lVar21 + 0x10) <= uVar30) goto LAB_142956042;
        lVar41 = *(longlong *)(lVar21 + 8);
        lVar31 = lVar41 + uVar30 * 0xc;
        in_stack_fffffffffffffc68 =
             CONCAT44((int)((ulonglong)in_stack_fffffffffffffc68 >> 0x20),0x43020000);
        fVar42 = (float)pdb_140a7d8d0(&uStack_208,*(undefined4 *)(lVar41 + uVar30 * 0xc),
                                      *(undefined4 *)(lVar41 + 4 + uVar30 * 0xc),uVar61,
                                      in_stack_fffffffffffffc68);
        if (fVar42 <= fVar46) {
          *(undefined1 *)(lVar31 + 8) = 0;
        }
        else if (*(char *)(lVar31 + 8) == '\0') {
          *(undefined1 *)(lVar31 + 8) = 1;
          pdb_140df4520(&puStack_188,lVar31);
          uStack_108 = CONCAT44((float)uStack_180,(int)puStack_188);
          pdb_140df4540(&puStack_148,&uStack_108,_DAT_143009bc0);
          puVar19 = puStack_198;
          fVar43 = (float)pdb_140e02880(puStack_198);
          fVar42 = (float)pdb_140e02880(puVar19);
          fVar57 = SUB84(puStack_148,0);
          uVar33 = (ulonglong)puStack_148 >> 0x20;
          fVar42 = (fVar42 + fVar13) * fVar46 + fStack_140;
          pdb_140df4940(&puStack_148);
          puVar36 = puStack_148;
          lVar31 = CONCAT44(uStack_13c,fStack_140);
          pdb_14007ee60();
          puVar1 = puStack_1c0;
          uVar24 = pdb_140ed5970(*puStack_1c0);
          plVar39 = (longlong *)puVar1[1];
          if (plVar39 == (longlong *)0x0) {
            plVar39 = (longlong *)puStack_1c0[2];
          }
          lVar41 = plVar39[2];
          if ((ulonglong)(*plVar39 - lVar41) < 0x68) {
            in_stack_fffffffffffffc68 = 0;
            pdb_142d7f1b0(plVar39,lVar41,0x68,1,1);
          }
          puVar19 = puStack_198;
          fVar57 = (fVar43 + fVar13) * fVar46 + fVar57;
          fVar59 = fVar58 + (float)uVar33;
          lVar26 = plVar39[1];
          *(code **)(lVar26 + lVar41) = pdb_142969d90;
          plVar35 = (longlong *)(lVar26 + 8 + lVar41);
          *plVar35 = (longlong)puVar36;
          plVar35[1] = lVar31;
          *(ulonglong *)(lVar26 + 0x18 + lVar41) = CONCAT44(fVar59,fVar57);
          *(float *)(lVar26 + 0x20 + lVar41) = fVar42;
          *(undefined8 *)(lVar26 + 0x24 + lVar41) = 0x3f8000003f800000;
          *(undefined4 *)(lVar26 + 0x2c + lVar41) = 0x3f800000;
          *(undefined4 *)(lVar26 + 0x38 + lVar41) = 0;
          *(undefined8 *)(lVar26 + 0x40 + lVar41) = 0x2cae82919f90dd16;
          *(undefined1 *)(lVar26 + 0x48 + lVar41) = 0x14;
          *(undefined8 *)(lVar26 + 0x58 + lVar41) = uVar24;
          plVar39[2] = lVar41 + 0x68;
          fVar43 = (float)pdb_140e02880(puStack_198);
          fVar44 = (float)pdb_140e02880(puVar19);
          fVar45 = (float)pdb_140e02880(puVar19);
          plVar39 = plStack_110;
          lVar31 = plStack_110[2];
          if (lVar31 == *plStack_110) {
            pdb_142d89250(plStack_110);
          }
          lVar41 = plVar39[1];
          *(ulonglong *)(lVar41 + lVar31 * 0x18) = CONCAT44(fVar59,fVar57);
          *(float *)(lVar41 + 8 + lVar31 * 0x18) = fVar42;
          *(ulonglong *)(lVar41 + 0xc + lVar31 * 0x18) = CONCAT44(fVar44 + fVar50,fVar43 + fVar47);
          *(float *)(lVar41 + 0x14 + lVar31 * 0x18) = fVar45 + fVar13;
          plVar39[2] = lVar31 + 1;
          lVar31 = plVar39[5];
          if (lVar31 == plVar39[3]) {
            pdb_142d7f080(plStack_118);
          }
          lVar41 = plStack_110[4];
          lVar26 = lVar31 * 0x38;
          *(undefined4 *)(lVar41 + lVar26) = 0;
          *(undefined8 *)(lVar41 + 0x10 + lVar26) = uVar24;
          uVar24 = _DAT_14367da50;
          *(undefined8 *)(lVar41 + 0x18 + lVar26) = _DAT_14367da50;
          uVar60 = _DAT_14367da58;
          *(undefined4 *)(lVar41 + 0x20 + lVar26) = _DAT_14367da58;
          *(undefined8 *)(lVar41 + 0x24 + lVar26) = uVar24;
          *(undefined4 *)(lVar41 + 0x2c + lVar26) = uVar60;
          *(undefined4 *)(lVar41 + 0x30 + lVar26) = 0;
          plStack_110[5] = lVar31 + 1;
          plStack_110[6] = plStack_110[6] + 1;
          pfVar32 = pfStack_f8;
          fVar43 = (float)uStack_1a8;
        }
      }
      lVar40 = lVar40 + 1;
    } while (lVar40 != 0x14);
  }
  plVar39 = plStack_110;
  uVar33 = plStack_110[2];
  uVar37 = uVar33 * 0x18;
  if (uVar33 < 0x555555555555556) goto LAB_142954bca;
  uVar33 = 0;
  do {
    pdb_142dc7e2a(uVar33,uVar37);
LAB_142954bca:
    uStack_1b0 = uVar33;
    if (uVar37 == 0) {
      pbStack_190 = (byte *)0x4;
      goto LAB_142954c93;
    }
    plVar35 = (longlong *)plVar39[1];
    pdb_14007ee60();
    uVar33 = 4;
    pbStack_190 = pub_1406abab0(uVar37,4);
  } while (pbStack_190 == (byte *)0x0);
  if (uStack_1b0 != 0) {
    uVar27 = 0;
    uVar33 = uStack_1b0;
    do {
      if (uVar37 == uVar27) break;
      uStack_134 = *(undefined4 *)((longlong)plVar35 + 0x14);
      uStack_13c = (undefined4)*(undefined8 *)((longlong)plVar35 + 0xc);
      uStack_138 = (undefined4)((ulonglong)*(undefined8 *)((longlong)plVar35 + 0xc) >> 0x20);
      fStack_140 = *(float *)(plVar35 + 1);
      lVar21 = plVar35[1];
      puStack_148 = (undefined8 *)*plVar35;
      plVar35 = plVar35 + 3;
      *(ulonglong *)(pbStack_190 + uVar27 + 0x10) = CONCAT44(uStack_134,uStack_138);
      *(undefined8 **)(pbStack_190 + uVar27) = puStack_148;
      *(longlong *)(pbStack_190 + uVar27 + 8) = lVar21;
      uVar27 = uVar27 + 0x18;
      uVar33 = uVar33 - 1;
    } while (uVar33 != 0);
  }
LAB_142954c93:
  fVar50 = _UNK_143604474;
  fVar47 = _DAT_143604470;
  uVar61 = _DAT_143006a28;
  fVar46 = _DAT_142e3787c;
  fVar13 = _DAT_142e36f28;
  puStack_188 = (undefined8 *)0x0;
  uStack_180 = 8;
  puStack_178 = (undefined8 *)0x0;
  fVar58 = 0.0;
  switch(*puStack_150) {
  case 0:
    if (*(int *)(puStack_150 + 8) != 0) break;
  case 1:
  case 9:
  case 0xc:
  case 0xf:
    fVar58 = _DAT_142e37830;
    break;
  case 2:
  case 3:
    fVar58 = *(float *)*param_16 + _DAT_143308ea0;
    break;
  case 4:
  case 5:
  case 0xb:
  case 0xd:
    fVar58 = _UNK_143604460;
  }
  puStack_150 = (undefined1 *)plVar39[1];
  uStack_1f8 = plVar39[2];
  if ((ulonglong)plVar39[5] < (ulonglong)plVar39[2]) {
    uStack_1f8 = plVar39[5];
  }
  lStack_230 = plVar39[4];
  lStack_238 = *param_15 + 0x98;
  lStack_170 = *param_6;
  uStack_228 = *param_13;
  lStack_1a0 = *plStack_168;
  lStack_1f0 = plStack_168[1];
  uStack_1e8 = *param_8;
  plStack_168 = (longlong *)0x0;
  plVar39 = (longlong *)0x0;
  uStack_1b8 = uVar37;
LAB_142954dfc:
  while( true ) {
    plVar35 = plStack_168;
    uStack_1a8 = (ulonglong)plStack_168;
    if (uStack_1f8 <= plStack_168) {
      uStack_138 = SUB84(puStack_178,0);
      uStack_134 = (undefined4)((ulonglong)puStack_178 >> 0x20);
      puStack_148 = puStack_188;
      fStack_140 = (float)uStack_180;
      uStack_13c = uStack_180._4_4_;
      pdb_142b4fd30(plStack_110,&puStack_148);
      plStack_110[6] = plStack_110[2];
      pfStack_f8 = (float *)*param_11;
      lVar21 = param_11[1];
      uVar33 = *(ulonglong *)pfStack_f8;
      uVar27 = 0;
      uVar37 = uVar33 - *(ulonglong *)(lVar21 + 0x18);
      if (uVar33 < *(ulonglong *)(lVar21 + 0x18)) {
        uVar37 = uVar27;
      }
      uVar22 = uVar33 - *(ulonglong *)(lVar21 + 0x38);
      if (uVar33 < *(ulonglong *)(lVar21 + 0x38)) {
        uVar22 = uVar27;
      }
      lVar40 = uVar37 * 0x10 + *(longlong *)(lVar21 + 8);
      uVar33 = *(ulonglong *)(lVar21 + 0x10) - uVar37;
      if (*(ulonglong *)(lVar21 + 0x10) < uVar37) {
        lVar40 = 8;
        uVar33 = uVar27;
      }
      lVar31 = uVar22 * 0x10 + *(longlong *)(lVar21 + 0x28);
      uVar37 = *(ulonglong *)(lVar21 + 0x30) - uVar22;
      if (*(ulonglong *)(lVar21 + 0x30) < uVar22) {
        lVar31 = 8;
        uVar37 = uVar27;
      }
      *(ulonglong *)pfStack_f8 = (*(longlong *)(lVar21 + 0x40) - uVar37) - uVar33;
      fVar43 = _DAT_142f57bc8;
      fVar58 = _DAT_142e37988;
      fVar46 = _DAT_142e37830;
      plStack_168 = (longlong *)(uVar33 * 0x10 + lVar40);
      puStack_150 = (undefined1 *)(uVar37 * 0x10 + lVar31);
      plStack_118 = (longlong *)*param_12;
      do {
        fVar18 = _UNK_143604484;
        fVar17 = _DAT_143604480;
        fVar16 = _DAT_14301920c;
        fVar15 = _DAT_142f61034;
        fVar14 = _DAT_142f60fec;
        fVar55 = _UNK_142f46988;
        fVar56 = _UNK_142f46984;
        fVar51 = _DAT_142f46980;
        fVar49 = _UNK_142f46978;
        fVar48 = _UNK_142f46974;
        fVar59 = _DAT_142f46970;
        fVar45 = _UNK_142e37b08;
        fVar44 = _UNK_142e37b04;
        fVar57 = _DAT_142e37b00;
        fVar42 = _DAT_142e3788c;
        if ((lVar40 == 0) || ((longlong *)lVar40 == plStack_168)) {
          if ((lVar31 == 0) || ((undefined1 *)lVar31 == puStack_150)) {
            plStack_168 = (longlong *)plStack_110[1];
            lVar21 = plStack_110[4];
            uVar33 = plStack_110[2];
            if ((ulonglong)plStack_110[5] < (ulonglong)plStack_110[2]) {
              uVar33 = plStack_110[5];
            }
            plStack_110 = (longlong *)*plStack_220;
            lVar40 = plStack_220[1];
            puStack_150 = (undefined1 *)
                          CONCAT44(puStack_150._4_4_,*(undefined4 *)((longlong)plStack_220 + 0x14));
            uVar37 = uStack_1b8;
            uVar27 = 0;
            plVar39 = plStack_110;
            while (uVar22 = uVar27,
                  uVar61 = (undefined4)((ulonglong)in_stack_fffffffffffffc68 >> 0x20),
                  uVar22 < uVar33) {
              uVar27 = uVar22 + 1;
              uVar24 = *(undefined8 *)(lVar21 + 0x10 + uVar22 * 0x38);
              uVar30 = (ulonglong)~(uint)uVar24;
              if ((((uVar30 < *(ulonglong *)(lVar40 + 0x10)) &&
                   (piVar29 = (int *)(uVar30 * 0x18 + *(longlong *)(lVar40 + 8)),
                   piVar29[4] == (int)((ulonglong)uVar24 >> 0x20))) && (*piVar29 != 0)) &&
                 ((uVar30 = *(ulonglong *)(piVar29 + 2),
                  (uVar30 & 0xffffffff) < *(ulonglong *)((longlong)plVar39 + 0x38) &&
                  ((*(ulonglong *)
                     (*(longlong *)((longlong)plVar39 + 0x28) + (uVar30 >> 6 & 0x3ffffff) * 8) >>
                    (uVar30 & 0x3f) & 1) != 0)))) {
                pfVar32 = (float *)((longlong)plStack_168 + uVar22 * 0x18);
                lVar31 = *(longlong *)
                          (*(longlong *)(lVar40 + 0x1a0) + 0x18 + (uVar30 >> 0x20) * 0x48);
                lVar26 = ~*(ulonglong *)
                           (*(longlong *)
                             (*(longlong *)(lVar40 + 0x1a0) + 0x38 + (uVar30 >> 0x20) * 0x48) +
                           *(longlong *)((longlong)plVar39 + 0x110) * 8) * 0x30;
                lVar41 = *(longlong *)(lVar31 + 0x10 + lVar26);
                plStack_118 = *(longlong **)(lVar31 + 0x28 + lVar26);
                pfStack_f8 = (float *)(ulonglong)(uint)~piVar29[1];
                lVar31 = (longlong)pfStack_f8 * 0x30;
                pfVar3 = (float *)(lVar41 + lVar31);
                fVar46 = *pfVar3;
                fVar47 = pfVar3[1];
                fVar50 = pfVar3[2];
                fVar58 = pfVar3[3];
                fVar52 = fVar50 * fVar50;
                fVar53 = fVar58 * fVar58;
                fVar54 = fVar47 * fVar47 + fVar46 * fVar46;
                fVar43 = fVar50 * fVar45 + fVar47 * fVar44 + fVar46 * fVar57;
                fVar43 = fVar43 + fVar43;
                fVar58 = fVar58 + fVar58;
                fStack_210 = fVar58 * (fVar46 * fVar49 - fVar47 * fVar55) +
                             fVar43 * fVar50 + (fVar53 - (fVar54 + fVar52)) * fVar45;
                uStack_218 = CONCAT44(fVar58 * (fVar50 * fVar48 - fVar46 * fVar56) +
                                      fVar43 * fVar47 + (fVar53 - (fVar54 + fVar52)) * fVar44,
                                      fVar58 * (fVar47 * fVar59 - fVar50 * fVar51) +
                                      fVar43 * fVar46 + (fVar53 - (fVar54 + fVar52)) * fVar57);
                uStack_108 = CONCAT44(pfVar32[5],pfVar32[3]);
                pdb_140df4520(&puStack_148,&uStack_108);
                fVar46 = SUB84(puStack_148,0);
                fVar47 = (float)((ulonglong)puStack_148 >> 0x20);
                fVar50 = fVar13 / SQRT(fStack_140 * fStack_140 + fVar47 * fVar47 + fVar46 * fVar46);
                if ((int)fVar50 - 1U < 0x7fffff ||
                    (int)ABS(fVar50) - 0x800000U < 0x7f000000 && -1 < (int)fVar50) {
                  fStack_1d0 = fStack_140 * fVar50;
                  uStack_1d8 = CONCAT44(fVar47 * fVar50,fVar46 * fVar50);
                }
                else {
                  fStack_1d0 = 0.0;
                  uStack_1d8 = 0;
                }
                plVar39 = (longlong *)(lVar41 + lVar31);
                fVar46 = *(float *)((longlong)plVar39 + 0x14) - pfVar32[1];
                fVar47 = (SQRT((*(float *)(plVar39 + 3) - pfVar32[2]) *
                               (*(float *)(plVar39 + 3) - pfVar32[2]) +
                               fVar46 * fVar46 +
                               (*(float *)(plVar39 + 2) - *pfVar32) *
                               (*(float *)(plVar39 + 2) - *pfVar32)) / *(float *)(lStack_170 + 0x28)
                         + fVar14) / fVar16;
                fVar46 = 0.0;
                if (0.0 <= fVar47) {
                  fVar46 = fVar47;
                }
                fVar47 = fVar13;
                if (fVar46 <= fVar13) {
                  fVar47 = fVar46;
                }
                fVar46 = SQRT((pfVar32[5] + fVar18) * (pfVar32[5] + fVar18) +
                              (pfVar32[4] + fVar15) * (pfVar32[4] + fVar15) +
                              (pfVar32[3] + fVar17) * (pfVar32[3] + fVar17));
                in_stack_fffffffffffffc68 =
                     CONCAT44(uVar61,fVar46 * fVar46 *
                                     (fVar42 - (fVar47 + fVar47)) * fVar47 * fVar47);
                pdb_140de9a40(auStack_28c,&uStack_218,&uStack_1d8,*(float *)(lStack_170 + 0x28),
                              in_stack_fffffffffffffc68);
                pdb_14052dc80(&puStack_148,auStack_28c);
                *(undefined4 *)((longlong)plStack_118 + (longlong)pfStack_f8 * 4) =
                     puStack_150._0_4_;
                *plVar39 = (longlong)puStack_148;
                plVar39[1] = CONCAT44(uStack_13c,fStack_140);
                fStack_140 = pfVar32[2];
                puStack_148 = *(undefined8 **)pfVar32;
                *(undefined4 *)((longlong)plStack_118 + (longlong)pfStack_f8 * 4) =
                     puStack_150._0_4_;
                *(float *)(plVar39 + 3) = fStack_140;
                plVar39[2] = (longlong)puStack_148;
                uVar37 = uStack_1b8;
                plVar39 = plStack_110;
              }
            }
            if (uStack_1b0 != 0) {
              pub_1406abac0(pbStack_190,uVar37,4);
            }
            return;
          }
          lVar40 = 0;
          lVar21 = lVar31;
          lVar31 = lVar31 + 0x10;
        }
        else {
          lVar21 = lVar40;
          lVar40 = lVar40 + 0x10;
        }
        *(ulonglong *)pfStack_f8 = *(ulonglong *)pfStack_f8 + 1;
        lVar21 = pdb_140b54f80(plStack_118,*(undefined8 *)(lVar21 + 8),&UNK_1436044b8);
        if (((lVar21 != 0) && (*(uint *)(lVar21 + 600) < 2)) &&
           (*(float *)(lVar21 + 0x284) <= fVar58 && fVar58 != *(float *)(lVar21 + 0x284))) {
          uVar24 = pdb_14092f900(lVar21);
          pdb_140a85120(&puStack_148,uVar24,fVar46);
          lVar21 = plStack_110[1];
          uVar33 = plStack_110[2];
          if ((ulonglong)plStack_110[5] < (ulonglong)plStack_110[2]) {
            uVar33 = plStack_110[5];
          }
          uVar37 = 0;
          while (uVar27 = uVar37, uVar27 < uVar33) {
            fVar42 = *(float *)(lVar21 + uVar27 * 0x18);
            cVar20 = pdb_140a84de0(&puStack_148,fVar42,*(undefined4 *)(lVar21 + 8 + uVar27 * 0x18));
            uVar37 = uVar27 + 1;
            if (cVar20 != '\0') {
              pfVar32 = (float *)(lVar21 + uVar27 * 0x18);
              fVar57 = *pfVar32;
              fVar44 = pfVar32[2];
              fVar45 = (float)pdb_140a85110(&puStack_148);
              uStack_160 = CONCAT44(fVar44 - fVar42,fVar57 - fVar45);
              pdb_140df4520(&uStack_108,&uStack_160);
              *(ulonglong *)(pfVar32 + 3) =
                   CONCAT44((float)((ulonglong)uStack_108 >> 0x20) * fVar50,
                            (float)uStack_108 * fVar47);
              pfVar32[5] = fStack_100 * fVar43;
            }
          }
        }
      } while( true );
    }
    in_stack_fffffffffffffc68 =
         CONCAT44((int)((ulonglong)in_stack_fffffffffffffc68 >> 0x20),0x43020000);
    fVar43 = (float)pdb_140a7d8d0(&uStack_208,
                                  *(undefined4 *)
                                   ((longlong)puStack_150 + (longlong)plStack_168 * 0x18),
                                  *(undefined4 *)
                                   ((longlong)puStack_150 + 8 + (longlong)plStack_168 * 0x18),uVar61
                                  ,in_stack_fffffffffffffc68);
    puVar1 = puStack_178;
    plStack_168 = (longlong *)(uStack_1a8 + 1);
    plStack_118 = (longlong *)((longlong)plVar39 + 1);
    if (_DAT_142e36f50 < fVar43) break;
    if (puStack_178 == puStack_188) {
      pdb_142d896b0(&puStack_188);
    }
    *(longlong **)(uStack_180 + (longlong)puVar1 * 8) = plVar39;
    puStack_178 = (undefined8 *)((longlong)puVar1 + 1);
    plVar39 = plStack_118;
  }
  pfStack_f8 = (float *)((longlong)puStack_150 + (longlong)plVar35 * 0x18);
  fVar43 = *pfStack_f8;
  fVar42 = pfStack_f8[2];
  cVar20 = pdb_140a3d910(lStack_238);
  lVar21 = uStack_1a8 * 0x38 + lStack_230;
  fVar44 = _DAT_14300798c;
  fVar57 = _DAT_142e37adc;
  if (cVar20 == '\0') {
    fVar44 = _DAT_142e3788c;
    fVar57 = _DAT_142f57bc8;
  }
  puStack_148 = &uStack_208;
  uVar33 = uStack_1b0;
  cVar20 = pdb_142b4ef10(pfStack_f8,lVar21,plVar39,pbStack_190,uStack_1b0,puStack_198,fVar44,fVar57,
                         0x3f4ccccd,0x3d6f9db2,&puStack_148,*(undefined4 *)(lStack_170 + 0x28));
  puVar1 = puStack_178;
  uVar60 = (undefined4)(uVar33 >> 0x20);
  if (cVar20 != '\0') {
    if (puStack_178 == puStack_188) {
      pdb_142d896b0(&puStack_188);
    }
    *(longlong **)(uStack_180 + (longlong)puVar1 * 8) = plVar39;
    puStack_178 = (undefined8 *)((longlong)puVar1 + 1);
  }
  uVar24 = CONCAT44(uVar60,0x43020000);
  fVar57 = (float)pdb_140a7d8d0(auStack_2d0,fVar43,fVar42,uVar61,uVar24);
  uVar24 = CONCAT44((int)((ulonglong)uVar24 >> 0x20),0x43020000);
  fVar44 = (float)pdb_140a7d8d0(auStack_2c0,fVar43,fVar42,uVar61,uVar24);
  uVar24 = CONCAT44((int)((ulonglong)uVar24 >> 0x20),0x43020000);
  fVar45 = (float)pdb_140a7d8d0(auStack_2b0,fVar43,fVar42,uVar61,uVar24);
  in_stack_fffffffffffffc68 = CONCAT44((int)((ulonglong)uVar24 >> 0x20),0x43020000);
  fVar59 = (float)pdb_140a7d8d0(auStack_2a0,fVar43,fVar42,uVar61,in_stack_fffffffffffffc68);
  fVar59 = fVar57 + fVar44 + fVar45 + fVar59;
  fVar57 = 0.0;
  if (0.0 <= fVar59) {
    fVar57 = fVar59;
  }
  fVar44 = fVar13;
  if (fVar57 <= fVar13) {
    fVar44 = fVar57;
  }
  if (fVar44 < _DAT_142e3b1d8) {
    lVar40 = pdb_140b57780(uStack_228,fVar43,fVar42);
    uVar60 = (undefined4)((ulonglong)in_stack_fffffffffffffc68 >> 0x20);
    if (lVar21 != 0) {
      lVar31 = 0;
      do {
        pfVar32 = (float *)(lVar40 + 0x20 + lVar31);
        if ((*pfVar32 <= fVar46 && fVar46 != *pfVar32) &&
           (pfVar32 = (float *)(lVar40 + 0x24 + lVar31), *pfVar32 <= fVar46 && fVar46 != *pfVar32))
        {
          fVar59 = (float)*(undefined8 *)(lVar40 + lVar31);
          fVar48 = (float)((ulonglong)*(undefined8 *)(lVar40 + lVar31) >> 0x20);
          uVar24 = *(undefined8 *)(lVar40 + 8 + lVar31);
          fVar44 = (float)uVar24;
          fVar45 = (float)((ulonglong)uVar24 >> 0x20);
          fVar49 = fVar44 - fVar59;
          fVar51 = fVar45 - fVar48;
          fVar57 = fVar51 * fVar51 + fVar49 * fVar49;
          if (fVar57 <= _DAT_143006dc0) {
            fVar57 = _DAT_143006dc0;
          }
          fVar55 = ((fVar42 - fVar48) * fVar51 + (fVar43 - fVar59) * fVar49) / fVar57;
          fVar56 = 0.0;
          if (0.0 <= fVar55) {
            fVar56 = fVar55;
          }
          fVar55 = fVar13;
          if (fVar56 <= fVar13) {
            fVar55 = fVar56;
          }
          fVar56 = fVar43 - (fVar55 * fVar44 + (fVar13 - fVar55) * fVar59);
          fVar55 = fVar42 - (fVar55 * fVar45 + (fVar13 - fVar55) * fVar48);
          if (SQRT(fVar55 * fVar55 + fVar56 * fVar56) < _DAT_142e3c628) {
            fVar57 = (fVar51 * (pfStack_f8[2] - fVar48) + fVar49 * (*pfStack_f8 - fVar59)) / fVar57;
            fVar43 = 0.0;
            if (0.0 <= fVar57) {
              fVar43 = fVar57;
            }
            fVar42 = fVar13;
            if (fVar43 <= fVar13) {
              fVar42 = fVar43;
            }
            fVar57 = *pfStack_f8 - (fVar44 * fVar42 + (fVar13 - fVar42) * fVar59);
            fVar42 = pfStack_f8[2] - (fVar45 * fVar42 + (fVar13 - fVar42) * fVar48);
            fVar43 = fVar13 / SQRT(fVar42 * fVar42 + fVar57 * fVar57);
            puStack_148 = (undefined8 *)CONCAT44(fVar43 * fVar42,fVar43 * fVar57);
            pdb_140df4520(auStack_250,&puStack_148);
            fStack_100 = pfStack_f8[5];
            uStack_108 = *(undefined8 *)(pfStack_f8 + 3);
            fVar43 = (float)*(longlong *)(pfStack_f8 + 4);
            fVar42 = (float)((ulonglong)*(longlong *)(pfStack_f8 + 4) >> 0x20);
            fVar43 = SQRT(fVar42 * fVar42 + pfStack_f8[3] * pfStack_f8[3] + fVar43 * fVar43);
            fStack_140 = fVar43 * fStack_248;
            puStack_148 = (undefined8 *)
                          CONCAT44(auStack_250._4_4_ * fVar43,auStack_250._0_4_ * fVar43);
            in_stack_fffffffffffffc68 = CONCAT44(uVar60,0x41200000);
            pdb_140de9a40(&uStack_160,&uStack_108,&puStack_148,*(undefined4 *)(lStack_170 + 0x28),
                          in_stack_fffffffffffffc68);
            pfStack_f8[5] = fStack_158;
            *(undefined8 *)(pfStack_f8 + 3) = uStack_160;
            break;
          }
        }
        lVar31 = lVar31 + 0x38;
      } while (lVar21 * 0x38 - lVar31 != 0);
    }
  }
  uStack_108 = CONCAT44(pfStack_f8[2],*pfStack_f8);
  pdb_140df4540(&puStack_148,&uStack_108,_DAT_143009bc0);
  pfStack_f8[2] = fStack_140;
  *(undefined8 **)pfStack_f8 = puStack_148;
  puVar38 = *(uint **)(lStack_1a0 + 0xf8);
  puVar2 = puVar38 + *(longlong *)(lStack_1a0 + 0x100);
  cVar20 = *(char *)(lStack_1a0 + 0x108);
  pfStack_1e0 = pfStack_f8 + 3;
  lVar21 = 0;
  lVar41 = 8;
  lVar40 = 0;
  uVar33 = 0;
  lVar31 = 0;
  lVar26 = lStack_1f0;
  do {
    uVar60 = (undefined4)((ulonglong)in_stack_fffffffffffffc68 >> 0x20);
    if (cVar20 == '\0') {
      if ((int)uVar33 == (int)lVar21) {
        do {
          if (puVar38 == puVar2) goto LAB_142955650;
          uVar4 = *puVar38;
          puVar38 = puVar38 + 1;
          lVar21 = *(longlong *)(*(longlong *)(lVar26 + 0x100) + 0x58 + (ulonglong)uVar4 * 0xa0);
        } while (lVar21 == 0);
        lVar25 = *(longlong *)(lVar26 + 0x100) + (ulonglong)uVar4 * 0xa0;
        uVar33 = (ulonglong)*(uint *)(lVar25 + 0x94);
        lVar40 = *(longlong *)(lVar26 + 0x1a0);
        lVar31 = lVar40 + uVar33 * 0x48;
        lVar41 = *(longlong *)(lVar40 + 0x38 + uVar33 * 0x48);
        uVar33 = *(ulonglong *)(lVar40 + 0x40 + uVar33 * 0x48);
        if ((*(ulonglong *)(lStack_1a0 + 0x118) < uVar33) &&
           (uVar37 = *(ulonglong *)(lVar41 + *(ulonglong *)(lStack_1a0 + 0x118) * 8), uVar37 != 0))
        {
          lVar40 = *(longlong *)(*(longlong *)(lVar31 + 0x18) + 0x10 + ~uVar37 * 0x30);
          uVar37 = *(ulonglong *)(lStack_1a0 + 0x120);
          if (uVar33 <= uVar37) goto LAB_1429554a1;
LAB_14295547a:
          uVar33 = *(ulonglong *)(lVar41 + uVar37 * 8);
          if (uVar33 == 0) goto LAB_1429554a1;
          lVar31 = *(longlong *)(*(longlong *)(lVar31 + 0x18) + 0x10 + ~uVar33 * 0x30);
        }
        else {
          lVar40 = 0;
          uVar37 = *(ulonglong *)(lStack_1a0 + 0x120);
          if (uVar37 < uVar33) goto LAB_14295547a;
LAB_1429554a1:
          lVar31 = 0;
        }
        lVar41 = *(longlong *)(lVar25 + 0x50);
        uVar33 = 0;
      }
      iVar34 = (int)uVar33;
      uVar33 = (ulonglong)~*(uint *)(lVar41 + 8 + uVar33 * 0x10);
    }
    else {
      if ((int)uVar33 == (int)lVar21) {
        do {
          if (puVar38 == puVar2) goto LAB_142955650;
          uVar4 = *puVar38;
          puVar38 = puVar38 + 1;
          lVar21 = *(longlong *)(*(longlong *)(lVar26 + 0x1a0) + 0x10 + (ulonglong)uVar4 * 0x48);
        } while (lVar21 == 0);
        lVar31 = *(longlong *)(lVar26 + 0x1a0) + (ulonglong)uVar4 * 0x48;
        uVar33 = *(ulonglong *)(lVar31 + 0x40);
        if ((*(ulonglong *)(lStack_1a0 + 0x118) < uVar33) &&
           (uVar37 = *(ulonglong *)
                      (*(longlong *)(lVar31 + 0x38) + *(ulonglong *)(lStack_1a0 + 0x118) * 8),
           uVar37 != 0)) {
          lVar40 = *(longlong *)(*(longlong *)(lVar31 + 0x18) + 0x10 + ~uVar37 * 0x30);
          uVar37 = *(ulonglong *)(lStack_1a0 + 0x120);
          if (uVar33 <= uVar37) goto LAB_142955499;
LAB_142955446:
          uVar33 = *(ulonglong *)(*(longlong *)(lVar31 + 0x38) + uVar37 * 8);
          if (uVar33 == 0) goto LAB_142955499;
          lVar31 = *(longlong *)(*(longlong *)(lVar31 + 0x18) + 0x10 + ~uVar33 * 0x30);
        }
        else {
          lVar40 = 0;
          uVar37 = *(ulonglong *)(lStack_1a0 + 0x120);
          if (uVar37 < uVar33) goto LAB_142955446;
LAB_142955499:
          lVar31 = 0;
        }
        uVar33 = 0;
      }
      iVar34 = (int)uVar33;
    }
    lVar25 = uVar33 * 0x30 + lVar40;
    pcVar28 = (char *)(uVar33 + lVar31);
    uVar33 = (ulonglong)(iVar34 + 1);
    if (*pcVar28 == '\x02') {
      fVar43 = *(float *)(lVar25 + 0x10);
      fVar42 = *(float *)(lVar25 + 0x18);
      fVar57 = fVar43 - *pfStack_f8;
      fVar44 = fVar42 - pfStack_f8[2];
      if (SQRT(fVar44 * fVar44 + fVar57 * fVar57) < _DAT_142e37830) {
        fVar43 = *pfStack_f8 - fVar43;
        fVar42 = pfStack_f8[2] - fVar42;
        fVar57 = fVar13 / SQRT(fVar42 * fVar42 + fVar43 * fVar43);
        puStack_148 = (undefined8 *)CONCAT44(fVar57 * fVar42,fVar57 * fVar43);
        lStack_240 = lVar31;
        pdb_140df4520(auStack_260,&puStack_148);
        fStack_100 = pfStack_f8[5];
        uStack_108 = *(undefined8 *)(pfStack_f8 + 3);
        fStack_140 = fStack_258 * _DAT_142e37834;
        puStack_148 = (undefined8 *)
                      CONCAT44(auStack_260._4_4_ * _UNK_142e37864,auStack_260._0_4_ * _DAT_142e37860
                              );
        in_stack_fffffffffffffc68 = CONCAT44(uVar60,0x40a00000);
        pdb_140de9a40(&uStack_160,&uStack_108,&puStack_148,*(undefined4 *)(lStack_170 + 0x28),
                      in_stack_fffffffffffffc68);
        pfStack_f8[5] = fStack_158;
        *(undefined8 *)(pfStack_f8 + 3) = uStack_160;
        lVar31 = lStack_240;
        lVar26 = lStack_1f0;
      }
    }
  } while( true );
LAB_142955650:
  pdb_140a8e090(&puStack_148,uStack_1e8);
  uVar60 = (undefined4)((ulonglong)in_stack_fffffffffffffc68 >> 0x20);
  fVar43 = *pfStack_f8;
  fVar42 = pfStack_f8[2];
  fVar57 = puStack_148._0_4_ - fVar43;
  fVar44 = fStack_140 - fVar42;
  if (SQRT(fVar44 * fVar44 + fVar57 * fVar57) < fVar58) {
    pdb_140a8e090(&puStack_148,uStack_1e8);
    fVar43 = fVar43 - puStack_148._0_4_;
    fVar42 = fVar42 - fStack_140;
    fVar57 = fVar13 / SQRT(fVar42 * fVar42 + fVar43 * fVar43);
    puStack_148 = (undefined8 *)CONCAT44(fVar57 * fVar42,fVar57 * fVar43);
    pdb_140df4520(auStack_270,&puStack_148);
    fStack_100 = pfStack_f8[5];
    uStack_108 = *(undefined8 *)(pfStack_f8 + 3);
    fStack_140 = fStack_268 * _DAT_142f57bc8;
    puStack_148 = (undefined8 *)CONCAT44(auStack_270._4_4_ * fVar50,auStack_270._0_4_ * fVar47);
    in_stack_fffffffffffffc68 = CONCAT44(uVar60,0x41200000);
    pdb_140de9a40(&uStack_160,&uStack_108,&puStack_148,*(undefined4 *)(lStack_170 + 0x28),
                  in_stack_fffffffffffffc68);
    pfStack_f8[5] = fStack_158;
    *(undefined8 *)(pfStack_f8 + 3) = uStack_160;
  }
  cVar20 = pdb_140a36620(uStack_1c8);
  plVar39 = plStack_118;
  if (cVar20 == '\x03') {
    pdb_140a34500(&puStack_148,uStack_1c8);
    uVar60 = (undefined4)((ulonglong)in_stack_fffffffffffffc68 >> 0x20);
    fVar43 = *pfStack_f8;
    fVar42 = pfStack_f8[2];
    fVar57 = puStack_148._0_4_ - fVar43;
    fVar44 = fStack_140 - fVar42;
    plVar39 = plStack_118;
    if (SQRT(fVar44 * fVar44 + fVar57 * fVar57) < _DAT_142e37830) {
      pdb_140a34500(&puStack_148,uStack_1c8);
      fVar43 = fVar43 - puStack_148._0_4_;
      fVar42 = fVar42 - fStack_140;
      fVar57 = fVar13 / SQRT(fVar42 * fVar42 + fVar43 * fVar43);
      puStack_148 = (undefined8 *)CONCAT44(fVar57 * fVar42,fVar57 * fVar43);
      pdb_140df4520(auStack_280,&puStack_148);
      fStack_100 = pfStack_1e0[2];
      uStack_108 = *(undefined8 *)pfStack_1e0;
      fStack_140 = fStack_278 * _DAT_142f57bc8;
      puStack_148 = (undefined8 *)CONCAT44(auStack_280._4_4_ * fVar50,auStack_280._0_4_ * fVar47);
      in_stack_fffffffffffffc68 = CONCAT44(uVar60,0x41200000);
      pdb_140de9a40(&uStack_160,&uStack_108,&puStack_148,*(undefined4 *)(lStack_170 + 0x28),
                    in_stack_fffffffffffffc68);
      pfStack_1e0[2] = fStack_158;
      *(undefined8 *)pfStack_1e0 = uStack_160;
      plVar39 = plStack_118;
    }
  }
  goto LAB_142954dfc;
}

