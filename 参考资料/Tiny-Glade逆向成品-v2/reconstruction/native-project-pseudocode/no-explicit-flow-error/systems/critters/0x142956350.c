// VA 0x142956350, PDB extent 6110 bytes
// system_critters::shared::move_critters
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/shared.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::shared::move_critters
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/shared.rs
   Extent: 6110 */

void pdb_142956350(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  byte *pbVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  code *pcVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  float *pfVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 (*pauVar24) [16];
  uint *puVar25;
  float *pfVar26;
  undefined *puVar27;
  undefined4 *puVar28;
  float *pfVar29;
  undefined *puVar31;
  uint *puVar32;
  undefined *puVar33;
  float *pfVar34;
  longlong lVar35;
  bool bVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar41;
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined4 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined8 in_stack_fffffffffffffc68;
  undefined1 auStack_380 [24];
  float fStack_368;
  float fStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_340;
  float fStack_33c;
  float fStack_338;
  undefined4 uStack_334;
  uint *puStack_330;
  int iStack_328;
  longlong lStack_318;
  longlong lStack_308;
  byte bStack_300;
  longlong lStack_2f8;
  byte bStack_2f0;
  longlong lStack_2e8;
  byte bStack_2e0;
  longlong lStack_2d8;
  longlong lStack_2c8;
  undefined4 uStack_2bc;
  longlong lStack_2b8;
  longlong lStack_2b0;
  longlong lStack_2a8;
  longlong lStack_298;
  undefined4 uStack_28c;
  byte bStack_288;
  uint uStack_280;
  uint uStack_27c;
  byte bStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_250;
  float fStack_248;
  undefined8 uStack_240;
  float fStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  float *pfStack_210;
  undefined4 *puStack_208;
  undefined4 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  float fStack_1e0;
  float fStack_1dc;
  longlong lStack_1d0;
  undefined8 uStack_1c8;
  longlong lStack_1c0;
  uint *puStack_1b8;
  longlong lStack_1b0;
  undefined4 *puStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_17c;
  float fStack_174;
  float *pfStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  longlong lStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  undefined4 uStack_12c;
  longlong lStack_128;
  longlong lStack_120;
  longlong *plStack_118;
  longlong *plStack_110;
  longlong lStack_108;
  byte bStack_fd;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  undefined8 uStack_f0;
  float *pfVar30;
  
  uVar48 = (undefined4)((ulonglong)in_stack_fffffffffffffc68 >> 0x20);
  uStack_f0 = 0xfffffffffffffffe;
  cVar11 = pdb_140e94b40();
  if (cVar11 == '\0') {
    lStack_1d0 = 0;
  }
  else {
    puVar31 = &UNK_1436047d8;
    lVar35 = 0x26;
    uVar21 = 0x26;
    lVar13 = pdb_1429590d0(&UNK_1436047d8);
    if (lVar13 == 1) {
      if (0x26 < uVar21) {
LAB_14295784c:
        pdb_142dc8070(&UNK_1436047d8,0x26,0);
LAB_14295786c:
        pdb_142dc8070(&UNK_1436047d8,0x26);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar31 = &UNK_1436047d8;
      uVar14 = pdb_1429590d0(&UNK_1436047d8);
      if ((uVar14 & 1) != 0) {
        if (0x26 < uVar21 + 2) goto LAB_14295786c;
        lVar35 = 0x24 - uVar21;
        puVar31 = &UNK_1436047da + uVar21;
      }
    }
    puVar27 = &UNK_1436046e3;
    puVar33 = &UNK_1436046be;
    do {
      bVar3 = puVar27[-1];
      uVar12 = (uint)(char)bVar3;
      plStack_110 = param_3;
      if ((char)bVar3 < '\0') {
        bVar4 = puVar27[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar27[-3];
          if ((char)bVar5 < -0x40) {
            pbVar1 = puVar27 + -4;
            puVar27 = puVar27 + -4;
            uVar12 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar27 = puVar27 + -3;
            uVar12 = bVar5 & 0xf;
          }
          uVar12 = bVar4 & 0x3f | uVar12 << 6;
        }
        else {
          puVar27 = puVar27 + -2;
          uVar12 = bVar4 & 0x1f;
        }
        uVar12 = (uint)(bVar3 & 0x3f) | uVar12 << 6;
        if (uVar12 != 0x5c) goto LAB_1429564d4;
LAB_1429564ec:
        puVar33 = puVar27 + -0x1436046bd;
        if (puVar33 < (undefined *)0x26) {
          lVar13 = 0x25 - (longlong)puVar33;
          puVar33 = puVar27 + 1;
          goto LAB_14295650e;
        }
        pdb_142dc8070(&UNK_1436046be,0x25,puVar33,0x25,&UNK_143604898);
        goto LAB_14295784c;
      }
      puVar27 = puVar27 + -1;
      if (uVar12 == 0x5c) goto LAB_1429564ec;
LAB_1429564d4:
      if (uVar12 == 0x2f) goto LAB_1429564ec;
    } while (puVar27 != &UNK_1436046be);
    lVar13 = 0x25;
LAB_14295650e:
    plVar15 = (longlong *)pdb_140e97000();
    if (((char)plVar15[0xd] != '\x01') &&
       (plVar15 = (longlong *)pdb_142e2d6a0(plVar15,0), plVar15 == (longlong *)0x0))
    goto LAB_14295780d;
    if (*plVar15 != 0) goto LAB_1429577d9;
    *plVar15 = -1;
    plStack_118 = plVar15;
    uStack_1c8 = pdb_140e94f10(plVar15 + 1,puVar31,lVar35,puVar33,lVar13,1,0);
    uVar48 = (undefined4)((ulonglong)lVar13 >> 0x20);
    *plStack_118 = *plStack_118 + 1;
    lStack_1d0 = 1;
    param_3 = plStack_110;
  }
  fVar2 = *(float *)(*param_2 + 0x28);
  puVar16 = (undefined8 *)pdb_1429472f0(*param_5,&UNK_143600380);
  if ((puVar16 != (undefined8 *)0x0) &&
     (lVar13 = (**(code **)(puVar16[1] + 0x18))(*puVar16), lVar13 != 0)) {
    uStack_218 = *(undefined8 *)(lVar13 + 8);
    pfStack_210 = *(float **)(lVar13 + 0x10);
    lVar13 = pdb_1406d0830(*param_6);
    puVar16 = (undefined8 *)(lVar13 + 0x20);
    puVar17 = (undefined8 *)(lVar13 + 0x28);
    if (*(char *)(lVar13 + 0x298) == '\0') {
      puVar17 = (undefined8 *)(lVar13 + 0x10);
      puVar16 = (undefined8 *)(lVar13 + 8);
    }
    uStack_268 = *puVar17;
    uStack_270 = *puVar16;
    lVar13 = pdb_1406d0830(*param_7);
    puVar16 = (undefined8 *)(lVar13 + 0x20);
    puVar17 = (undefined8 *)(lVar13 + 0x28);
    if (*(char *)(lVar13 + 0x298) == '\0') {
      puVar17 = (undefined8 *)(lVar13 + 0x10);
      puVar16 = (undefined8 *)(lVar13 + 8);
    }
    uStack_228 = *puVar17;
    uStack_230 = *puVar16;
    lStack_108 = *param_1;
    lStack_1c0 = param_1[1];
    lVar13 = CONCAT44(uVar48,*(undefined4 *)((longlong)param_1 + 0x14));
    pdb_1429482f0(&fStack_338,lStack_1c0,lStack_108,(int)param_1[2],lVar13);
    fVar37 = (float)pub_142e32ad0();
    fVar10 = _DAT_142e36f28;
    puVar32 = (uint *)CONCAT44(uStack_334,fStack_338);
    puStack_1b8 = puStack_330;
    lStack_1b0 = lStack_318;
    lStack_148 = lStack_308;
    uStack_fc = (uint)bStack_300;
    lStack_140 = lStack_2f8;
    uStack_f8 = (uint)bStack_2f0;
    lStack_138 = lStack_2e8;
    uStack_f4 = (uint)bStack_2e0;
    lStack_168 = lStack_2d8;
    uStack_1f0 = *param_8;
    uStack_1f8 = *param_3;
    uStack_220 = *param_4;
    fVar50 = _DAT_142e36f28 - fVar37;
    bStack_fd = bStack_278;
    lStack_160 = lStack_2c8;
    uStack_12c = uStack_2bc;
    lStack_128 = lStack_2b8;
    lStack_120 = lStack_2b0;
    lStack_158 = lStack_2a8;
    lStack_150 = lStack_298;
    uStack_18c = uStack_28c;
    plStack_118 = (longlong *)(ulonglong)bStack_288;
    uVar21 = (ulonglong)uStack_280;
    plStack_110 = (longlong *)(ulonglong)uStack_27c;
LAB_1429567d7:
    if ((bStack_fd & 1) == 0) {
      if ((int)plStack_110 == (int)uVar21) {
        do {
          if (puVar32 == puStack_1b8) goto LAB_14295771c;
          uVar12 = *puVar32;
          puVar32 = puVar32 + 1;
          uVar21 = *(ulonglong *)
                    (*(longlong *)(lStack_1c0 + 0x100) + 0x58 + (ulonglong)uVar12 * 0xa0);
        } while (uVar21 == 0);
        lVar22 = *(longlong *)(lStack_1c0 + 0x100) + (ulonglong)uVar12 * 0xa0;
        uVar19 = (ulonglong)*(uint *)(lVar22 + 0x94);
        lVar35 = *(longlong *)(lStack_1c0 + 0x1a0);
        uVar14 = *(ulonglong *)(lVar35 + 0x40 + uVar19 * 0x48);
        lVar18 = *(longlong *)(lVar35 + 0x18 + uVar19 * 0x48);
        lVar35 = *(longlong *)(lVar35 + 0x38 + uVar19 * 0x48);
        if ((*(ulonglong *)(lStack_108 + 0x118) < uVar14) &&
           (uVar19 = *(ulonglong *)(lVar35 + *(ulonglong *)(lStack_108 + 0x118) * 8), uVar19 != 0))
        {
          lStack_128 = *(longlong *)(lVar18 + 0x10 + ~uVar19 * 0x30);
          uVar19 = *(ulonglong *)(lStack_108 + 0x120);
          if (uVar14 <= uVar19) goto LAB_142956a9d;
LAB_142956a0b:
          uVar19 = *(ulonglong *)(lVar35 + uVar19 * 8);
          if (uVar19 == 0) goto LAB_142956a9d;
          lStack_120 = *(longlong *)(lVar18 + 0x10 + ~uVar19 * 0x30);
        }
        else {
          lStack_128 = 0;
          uVar19 = *(ulonglong *)(lStack_108 + 0x120);
          if (uVar19 < uVar14) goto LAB_142956a0b;
LAB_142956a9d:
          lStack_120 = 0;
        }
        uVar19 = *(ulonglong *)(lStack_108 + 0x128);
        uVar6 = *(ulonglong *)(lVar22 + 0x88);
        if ((uVar19 < uVar6) && (*(longlong *)(*(longlong *)(lVar22 + 0x80) + uVar19 * 8) != 0)) {
          uStack_fc = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar22 + 0x80) >> 8),1);
          if ((uVar14 <= uVar19) || (uVar19 = *(ulonglong *)(lVar35 + uVar19 * 8), uVar19 == 0)) {
            lStack_148 = 0;
            uVar19 = *(ulonglong *)(lStack_108 + 0x130);
            goto joined_r0x000142956ba2;
          }
          lStack_148 = *(longlong *)(lVar18 + 0x10 + ~uVar19 * 0x30);
          uVar19 = *(ulonglong *)(lStack_108 + 0x130);
          if (uVar19 < uVar6) goto LAB_142956d6f;
LAB_142956dc1:
          uStack_f8 = 0;
          uVar19 = *(ulonglong *)(lStack_108 + 0x138);
joined_r0x000142956ddc:
          if (uVar6 <= uVar19) goto LAB_142956e3d;
LAB_142956dfe:
          if (*(longlong *)(*(longlong *)(lVar22 + 0x80) + uVar19 * 8) == 0) goto LAB_142956e3d;
          uStack_f4 = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar22 + 0x80) >> 8),1);
          if ((uVar19 < uVar14) && (uVar14 = *(ulonglong *)(lVar35 + uVar19 * 8), uVar14 != 0)) {
            lStack_138 = *(longlong *)(lVar18 + 0x10 + ~uVar14 * 0x30);
          }
          else {
            lStack_138 = 0;
          }
        }
        else {
          uStack_fc = 0;
          uVar19 = *(ulonglong *)(lStack_108 + 0x130);
joined_r0x000142956ba2:
          if (uVar6 <= uVar19) goto LAB_142956dc1;
LAB_142956d6f:
          if (*(longlong *)(*(longlong *)(lVar22 + 0x80) + uVar19 * 8) == 0) goto LAB_142956dc1;
          uStack_f8 = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar22 + 0x80) >> 8),1);
          if ((uVar19 < uVar14) && (uVar19 = *(ulonglong *)(lVar35 + uVar19 * 8), uVar19 != 0)) {
            lStack_140 = *(longlong *)(lVar18 + 0x10 + ~uVar19 * 0x30);
            uVar19 = *(ulonglong *)(lStack_108 + 0x138);
            goto joined_r0x000142956ddc;
          }
          lStack_140 = 0;
          uVar19 = *(ulonglong *)(lStack_108 + 0x138);
          if (uVar19 < uVar6) goto LAB_142956dfe;
LAB_142956e3d:
          uStack_f4 = 0;
        }
        lVar23 = ~*(ulonglong *)(lVar35 + *(longlong *)(lStack_108 + 0x110) * 8) * 0x30;
        lStack_168 = *(longlong *)(lVar18 + 0x10 + lVar23);
        lStack_160 = *(longlong *)(lVar18 + 0x28 + lVar23);
        uVar14 = *(ulonglong *)(lStack_108 + 0x140);
        if ((uVar14 < uVar6) && (*(longlong *)(*(longlong *)(lVar22 + 0x80) + uVar14 * 8) != 0)) {
          lVar35 = ~*(ulonglong *)(lVar35 + uVar14 * 8) * 0x30;
          lStack_158 = *(longlong *)(lVar18 + 0x10 + lVar35);
          lStack_150 = *(longlong *)(lVar18 + 0x28 + lVar35);
          plVar15 = (longlong *)0x1;
        }
        else {
          plVar15 = (longlong *)0x0;
        }
        plStack_110 = (undefined8 *)0x0;
        lStack_1b0 = *(longlong *)(lVar22 + 0x50);
        uVar14 = 0;
      }
      else {
        uVar14 = (ulonglong)plStack_110 & 0xffffffff;
        plVar15 = plStack_118;
      }
      uVar12 = ~*(uint *)(lStack_1b0 + 8 + uVar14 * 0x10);
      uVar14 = (ulonglong)uVar12;
      pauVar24 = (undefined1 (*) [16])(uVar14 * 0x30 + lStack_168);
      puStack_1a8 = (undefined4 *)(lStack_160 + uVar14 * 4);
      puVar25 = (uint *)(lStack_128 + uVar14 * 8);
      pfVar30 = (float *)0x0;
      pfVar29 = (float *)0x0;
      pfVar20 = (float *)(lStack_148 + uVar14 * 4);
      if ((uStack_fc & 1) == 0) {
        pfVar20 = pfVar30;
      }
      pfVar26 = (float *)(uVar14 * 0x100 + lStack_140);
      if ((uStack_f8 & 1) == 0) {
        pfVar26 = pfVar30;
      }
      puVar16 = (undefined8 *)(lStack_120 + uVar14 * 0xc);
      pfVar34 = (float *)(uVar14 * 0x68 + lStack_138);
      if ((uStack_f4 & 1) == 0) {
        pfVar34 = pfVar30;
      }
      plStack_118 = (longlong *)0x0;
      puVar28 = puStack_200;
      if (((ulonglong)plVar15 & 1) != 0) {
        pfVar29 = (float *)(lStack_158 + uVar14 * 0x18);
        puStack_200 = (undefined4 *)(lStack_150 + uVar14 * 4);
        plStack_118 = (longlong *)CONCAT71((uint7)(uint3)(uVar12 >> 8),1);
        puVar28 = puStack_200;
      }
    }
    else {
      plVar15 = plStack_118;
      if ((int)plStack_110 == (int)uVar21) {
        do {
          if (puVar32 == puStack_1b8) goto LAB_14295771c;
          uVar12 = *puVar32;
          puVar32 = puVar32 + 1;
          uVar21 = *(ulonglong *)
                    (*(longlong *)(lStack_1c0 + 0x1a0) + 0x10 + (ulonglong)uVar12 * 0x48);
        } while (uVar21 == 0);
        lVar35 = *(longlong *)(lStack_1c0 + 0x1a0) + (ulonglong)uVar12 * 0x48;
        uVar14 = *(ulonglong *)(lVar35 + 0x40);
        lVar18 = *(longlong *)(lVar35 + 0x18);
        lVar35 = *(longlong *)(lVar35 + 0x38);
        if ((*(ulonglong *)(lStack_108 + 0x118) < uVar14) &&
           (uVar19 = *(ulonglong *)(lVar35 + *(ulonglong *)(lStack_108 + 0x118) * 8), uVar19 != 0))
        {
          lStack_128 = *(longlong *)(lVar18 + 0x10 + ~uVar19 * 0x30);
          uVar19 = *(ulonglong *)(lStack_108 + 0x120);
          if (uVar14 <= uVar19) goto LAB_142956a31;
LAB_1429569b0:
          uVar19 = *(ulonglong *)(lVar35 + uVar19 * 8);
          if (uVar19 == 0) goto LAB_142956a31;
          lStack_120 = *(longlong *)(lVar18 + 0x10 + ~uVar19 * 0x30);
          uVar19 = *(ulonglong *)(lStack_108 + 0x128);
          if (uVar19 < uVar14) goto LAB_142956a53;
LAB_142956b2b:
          uStack_fc = 0;
          uVar19 = *(ulonglong *)(lStack_108 + 0x130);
          if (uVar14 <= uVar19) goto LAB_142956bad;
LAB_142956b48:
          uVar19 = *(ulonglong *)(lVar35 + uVar19 * 8);
          if (uVar19 == 0) goto LAB_142956bad;
          lStack_140 = *(longlong *)(lVar18 + 0x10 + ~uVar19 * 0x30);
          uStack_f8 = (uint)CONCAT71((int7)((ulonglong)lStack_140 >> 8),1);
          uVar19 = *(ulonglong *)(lStack_108 + 0x138);
          if (uVar19 < uVar14) goto LAB_142956bca;
LAB_142956bf6:
          uStack_f4 = 0;
        }
        else {
          lStack_128 = 0;
          uVar19 = *(ulonglong *)(lStack_108 + 0x120);
          if (uVar19 < uVar14) goto LAB_1429569b0;
LAB_142956a31:
          lStack_120 = 0;
          uVar19 = *(ulonglong *)(lStack_108 + 0x128);
          if (uVar14 <= uVar19) goto LAB_142956b2b;
LAB_142956a53:
          uVar19 = *(ulonglong *)(lVar35 + uVar19 * 8);
          if (uVar19 == 0) goto LAB_142956b2b;
          lStack_148 = *(longlong *)(lVar18 + 0x10 + ~uVar19 * 0x30);
          uStack_fc = (uint)CONCAT71((int7)((ulonglong)lStack_148 >> 8),1);
          uVar19 = *(ulonglong *)(lStack_108 + 0x130);
          if (uVar19 < uVar14) goto LAB_142956b48;
LAB_142956bad:
          uStack_f8 = 0;
          uVar19 = *(ulonglong *)(lStack_108 + 0x138);
          if (uVar14 <= uVar19) goto LAB_142956bf6;
LAB_142956bca:
          uVar19 = *(ulonglong *)(lVar35 + uVar19 * 8);
          if (uVar19 == 0) goto LAB_142956bf6;
          lStack_138 = *(longlong *)(lVar18 + 0x10 + ~uVar19 * 0x30);
          uStack_f4 = (uint)CONCAT71((int7)((ulonglong)lStack_138 >> 8),1);
        }
        plStack_110 = (undefined8 *)0x0;
        if ((*(ulonglong *)(lStack_108 + 0x140) < uVar14) &&
           (uVar14 = *(ulonglong *)(lVar35 + *(ulonglong *)(lStack_108 + 0x140) * 8), uVar14 != 0))
        {
          lVar22 = ~uVar14 * 0x30;
          lStack_158 = *(longlong *)(lVar18 + 0x10 + lVar22);
          lStack_150 = *(longlong *)(lVar18 + 0x28 + lVar22);
          plVar15 = (longlong *)0x1;
        }
        else {
          plVar15 = (longlong *)0x0;
        }
        lVar35 = ~*(ulonglong *)(lVar35 + *(longlong *)(lStack_108 + 0x110) * 8) * 0x30;
        lStack_168 = *(longlong *)(lVar18 + 0x10 + lVar35);
        lStack_160 = *(longlong *)(lVar18 + 0x28 + lVar35);
      }
      uVar14 = (ulonglong)plStack_110 & 0xffffffff;
      pauVar24 = (undefined1 (*) [16])(uVar14 * 0x30 + lStack_168);
      puStack_1a8 = (undefined4 *)(lStack_160 + uVar14 * 4);
      puVar25 = (uint *)(lStack_128 + uVar14 * 8);
      pfVar29 = (float *)0x0;
      pfVar20 = (float *)(lStack_148 + uVar14 * 4);
      if ((uStack_fc & 1) == 0) {
        pfVar20 = pfVar29;
      }
      pfVar26 = (float *)(uVar14 * 0x100 + lStack_140);
      if ((uStack_f8 & 1) == 0) {
        pfVar26 = pfVar29;
      }
      puVar16 = (undefined8 *)(lStack_120 + uVar14 * 0xc);
      pfVar34 = (float *)(uVar14 * 0x68 + lStack_138);
      if ((uStack_f4 & 1) == 0) {
        pfVar34 = pfVar29;
      }
      plStack_118 = (longlong *)0x0;
      puVar28 = puStack_208;
      if (((ulonglong)plVar15 & 1) != 0) {
        pfVar29 = (float *)(lStack_158 + uVar14 * 0x18);
        puStack_208 = (undefined4 *)(lStack_150 + uVar14 * 4);
        plStack_118 = (longlong *)CONCAT71((int7)(uVar14 >> 8),1);
        puVar28 = puStack_208;
      }
    }
    plStack_110 = (longlong *)(ulonglong)((int)plStack_110 + 1);
    fVar51 = *(float *)(pauVar24[1] + 4);
    if (fVar51 <= 0.0) {
      fVar51 = 0.0;
    }
    *puStack_1a8 = uStack_12c;
    *(float *)(pauVar24[1] + 4) = fVar51;
    fVar51 = fVar10;
    if (pfVar20 != (float *)0x0) goto code_r0x000142956ff5;
    goto LAB_142957005;
  }
  goto LAB_14295781a;
code_r0x000142956ff5:
  fVar51 = *pfVar20;
  if ((fVar51 == 0.0) && (!NAN(fVar51))) goto LAB_1429567d7;
LAB_142957005:
  fVar53 = fVar51 * (float)*puVar16 * fVar2;
  fVar55 = fVar51 * (float)((ulonglong)*puVar16 >> 0x20) * fVar2;
  fVar51 = *(float *)(puVar16 + 1) * fVar2 * fVar51;
  uStack_240 = CONCAT44(fVar55,fVar53);
  uVar39 = CONCAT44((int)((ulonglong)lVar13 >> 0x20),fVar51 + *(float *)(pauVar24[1] + 8));
  fStack_238 = fVar51;
  uStack_1e8 = puVar28;
  pfStack_170 = pfVar29;
  pdb_140def2a0(&fStack_358,uStack_12c,puStack_1a8,fVar53 + *(float *)pauVar24[1],uVar39);
  uVar48 = (undefined4)((ulonglong)uVar39 >> 0x20);
  pfVar29 = &fStack_358;
  pdb_142b50090(auStack_380);
  lVar13 = CONCAT44(uVar48,0x43020000);
  fVar38 = (float)pdb_140a7d8d0(&uStack_270,*(float *)pauVar24[1] + fVar53,
                                *(float *)(pauVar24[1] + 8) + fVar51,_DAT_143006a28,lVar13);
  uVar12 = *puVar25;
  if (uVar12 == 2) {
    pfVar29 = pfStack_210;
    cVar11 = pdb_1419c1e90(uStack_218,pfStack_210,*(float *)pauVar24[1] + fVar53,
                           *(float *)(pauVar24[1] + 8) + fVar51);
    if ((0.0 < fVar38) || (pfVar26 != (float *)0x0 || cVar11 != '\0')) goto LAB_1429567d7;
    if (pfVar34 == (float *)0x0) {
LAB_14295764a:
      lVar18 = pdb_140b57780(uStack_1f8);
      lVar35 = lVar18;
LAB_142957670:
      do {
        uVar12 = (uint)((ulonglong)lVar13 >> 0x20);
        if (lVar35 == (longlong)pfVar29 * 0x38 + lVar18) goto LAB_1429572a6;
        lVar22 = lVar35 + 0x38;
        if (*puVar25 != 3) {
          lVar35 = pdb_140b54f80(uStack_220,*(undefined8 *)(lVar35 + 0x28),&UNK_143604700);
          if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143604718);
          }
          fVar38 = (float)pdb_14092f8b0(lVar35);
          uVar12 = (uint)((ulonglong)lVar13 >> 0x20);
          lVar35 = lVar22;
          if (fVar38 < *(float *)(pauVar24[1] + 4)) goto LAB_142957670;
        }
        lVar13 = (ulonglong)uVar12 << 0x20;
        pdb_140def2a0(&uStack_188);
        pdb_142b50090(&fStack_358,&uStack_188);
        pdb_142b500b0(&uStack_188,auStack_380,&fStack_358);
        lVar35 = lVar22;
      } while ((int)uStack_188 != 0);
      goto LAB_1429567d7;
    }
    uVar12 = *puVar25;
    bVar36 = true;
  }
  else {
    if ((pfVar26 != (float *)0x0) && (fVar38 <= 0.0)) goto LAB_1429567d7;
    bVar36 = pfVar34 != (float *)0x0;
    if (pfVar26 == (float *)0x0 && pfVar34 == (float *)0x0) goto LAB_14295764a;
  }
  iVar8 = uVar12 - 2;
  if (uVar12 < 2) {
    iVar8 = 3;
  }
  if (1 < iVar8 - 3U) {
    uStack_180 = *(undefined4 *)(pauVar24[1] + 8);
    uStack_188 = *(undefined8 *)pauVar24[1];
    fVar38 = fVar10 / SQRT(fVar51 * fVar51 + fVar55 * fVar55 + fVar53 * fVar53);
    fStack_174 = fVar51 * fVar38;
    uStack_17c = CONCAT44(fVar38 * fVar55,fVar38 * fVar53);
    uVar48 = _DAT_142e3c670;
    if (!bVar36) {
      uVar48 = _DAT_142e36f50;
    }
    pdb_1409ef140(&fStack_358,uStack_1f0,&uStack_188,uVar48);
    if ((iStack_328 != 2) &&
       (fVar38 = fStack_33c - *(float *)(pauVar24[1] + 4),
       fVar44 = fStack_340 - *(float *)pauVar24[1],
       fVar46 = fStack_338 - *(float *)(pauVar24[1] + 8),
       SQRT(fVar46 * fVar46 + fVar38 * fVar38 + fVar44 * fVar44) < fVar10)) goto LAB_1429567d7;
    if (!(bool)(bVar36 ^ 1U | iVar8 == 2)) {
      uVar48 = (undefined4)((ulonglong)lVar13 >> 0x20);
      fVar38 = (float)pdb_140a7d8d0(&uStack_230);
      lVar13 = CONCAT44(uVar48,0x43020000);
      fVar44 = (float)pdb_140a7d8d0(&uStack_230,*(float *)pauVar24[1] + fVar53,
                                    *(float *)(pauVar24[1] + 8) + fVar51,_DAT_143006a28,lVar13);
      if ((fVar38 <= 0.0) && (0.0 < fVar44)) goto LAB_1429567d7;
    }
  }
LAB_1429572a6:
  *puStack_1a8 = uStack_12c;
  *(ulonglong *)pauVar24[1] =
       CONCAT44(fVar55 + (float)((ulonglong)*(undefined8 *)pauVar24[1] >> 0x20),
                fVar53 + (float)*(undefined8 *)pauVar24[1]);
  *(float *)(pauVar24[1] + 8) = fVar51 + *(float *)(pauVar24[1] + 8);
  pdb_140df45c0(&fStack_358,&uStack_240);
  fVar51 = fVar10 / SQRT(fStack_350 * fStack_350 + fStack_354 * fStack_354 + fStack_358 * fStack_358
                        );
  if ((int)fVar51 - 1U < 0x7fffff || (int)ABS(fVar51) - 0x800000U < 0x7f000000 && -1 < (int)fVar51)
  {
    uStack_250 = CONCAT44(fStack_354 * fVar51,fStack_358 * fVar51);
    fStack_248 = fStack_350 * fVar51;
    uStack_188 = _DAT_142e37b50;
    uStack_180 = 0xbf800000;
    pdb_140f335d0(&fStack_358,&uStack_188,&uStack_250);
    fVar51 = fStack_350 * *(float *)(*pauVar24 + 8) + fStack_358 * *(float *)*pauVar24;
    fVar38 = fStack_34c * *(float *)(*pauVar24 + 0xc) + fStack_354 * *(float *)(*pauVar24 + 4);
    auVar40._0_4_ =
         (float)((uint)(fVar38 + fVar51) & _DAT_142e37820 ^ (uint)*(float *)*pauVar24) * fVar37 +
         fVar50 * fStack_358;
    auVar40._4_4_ =
         (float)((uint)(fVar38 + fVar51) & _UNK_142e37824 ^ (uint)*(float *)(*pauVar24 + 4)) *
         fVar37 + fVar50 * fStack_354;
    auVar40._8_4_ =
         (float)((uint)(fVar38 + fVar51) & _UNK_142e37828 ^ (uint)*(float *)(*pauVar24 + 8)) *
         fVar37 + fVar50 * fStack_350;
    auVar40._12_4_ =
         (float)((uint)(fVar38 + fVar51) & _UNK_142e3782c ^ (uint)*(float *)(*pauVar24 + 0xc)) *
         fVar37 + fVar50 * fStack_34c;
    fVar51 = auVar40._8_4_ * auVar40._8_4_ + auVar40._0_4_ * auVar40._0_4_;
    fVar38 = auVar40._12_4_ * auVar40._12_4_ + auVar40._4_4_ * auVar40._4_4_;
    auVar42._4_4_ = fVar51;
    auVar42._0_4_ = fVar51;
    auVar42._8_4_ = fVar51;
    auVar42._12_4_ = fVar51;
    auVar43._4_4_ = fVar38 + fVar51;
    auVar43._0_4_ = fVar38 + fVar51;
    auVar43._8_4_ = fVar38 + fVar51;
    auVar43._12_4_ = fVar38 + fVar51;
    auVar43 = sqrtps(auVar42,auVar43);
    auVar43 = divps(auVar40,auVar43);
    *puStack_1a8 = uStack_12c;
    *pauVar24 = auVar43;
  }
  if (pfStack_170 != (float *)0x0) {
    fVar51 = *(float *)(pauVar24[1] + 0xc);
    fVar45 = (float)*(undefined8 *)pauVar24[2];
    fVar47 = (float)((ulonglong)*(undefined8 *)pauVar24[2] >> 0x20);
    fVar38 = *(float *)*pauVar24;
    fVar53 = *(float *)(*pauVar24 + 4);
    fVar55 = *(float *)(*pauVar24 + 8);
    fVar44 = *(float *)(*pauVar24 + 0xc);
    fVar46 = *(float *)pauVar24[1];
    fVar9 = *(float *)(pauVar24[1] + 4);
    fVar41 = *(float *)(pauVar24[1] + 8);
    *uStack_1e8 = uStack_18c;
    if (*(longlong *)(pfStack_170 + 2) != 0) {
      puStack_1a8 = (undefined4 *)(ulonglong)(uint)fVar2;
      uStack_1e8 = (undefined4 *)CONCAT44(fVar37,fVar37);
      fVar52 = fVar55 + fVar55;
      fVar56 = fVar53 + fVar53;
      fVar49 = (fVar38 + fVar38) * fVar44;
      fVar54 = (fVar38 + fVar38) * fVar38;
      lVar35 = *(longlong *)pfStack_170;
      lVar18 = *(longlong *)(pfStack_170 + 2) * 0x18;
      uVar39 = CONCAT44(fVar9 + (fVar52 * fVar53 - fVar49) * fVar47 * _UNK_143604604 +
                                (fVar10 - (fVar54 + fVar52 * fVar55)) * fVar45 * _UNK_1436045f4 +
                                (fVar44 * fVar52 + fVar56 * fVar38) * fVar51 * 0.0,
                        fVar46 + (fVar52 * fVar38 + fVar56 * fVar44) * fVar47 * _DAT_143604600 +
                                 (fVar56 * fVar38 - fVar44 * fVar52) * fVar45 * _DAT_1436045f0 +
                                 (fVar10 - (fVar52 * fVar55 + fVar56 * fVar53)) * fVar51 * 0.0);
      fVar41 = fVar41 + (fVar10 - (fVar54 + fVar56 * fVar53)) * fVar47 * _UNK_143604608 +
                        (fVar52 * fVar53 + fVar49) * fVar45 * _UNK_1436045f8 +
                        (fVar52 * fVar38 - fVar56 * fVar44) * fVar51 * 0.0;
      uVar14 = lVar18 - 0x18;
      uVar12 = (uint)(uVar14 / 0x18);
      lVar22 = lVar35;
      if ((~uVar12 & 7) != 0) {
        lVar23 = -(ulonglong)(uVar12 + 1 & 7);
        do {
          *(undefined8 *)(lVar22 + 8) = uVar39;
          *(float *)(lVar22 + 0x10) = fVar41;
          lVar22 = lVar22 + 0x18;
          lVar23 = lVar23 + 1;
        } while (lVar23 != 0);
      }
      fStack_368 = fVar2;
      fStack_364 = fVar2;
      uStack_360 = 0;
      uStack_35c = 0;
      fStack_1e0 = fVar37;
      fStack_1dc = fVar37;
      uStack_1a0 = 0;
      uStack_19c = 0;
      if (0xa7 < uVar14) {
        do {
          *(undefined8 *)(lVar22 + 8) = uVar39;
          *(float *)(lVar22 + 0x10) = fVar41;
          *(undefined8 *)(lVar22 + 0x20) = uVar39;
          *(float *)(lVar22 + 0x28) = fVar41;
          *(undefined8 *)(lVar22 + 0x38) = uVar39;
          *(float *)(lVar22 + 0x40) = fVar41;
          *(undefined8 *)(lVar22 + 0x50) = uVar39;
          *(float *)(lVar22 + 0x58) = fVar41;
          *(undefined8 *)(lVar22 + 0x68) = uVar39;
          *(float *)(lVar22 + 0x70) = fVar41;
          *(undefined8 *)(lVar22 + 0x80) = uVar39;
          *(float *)(lVar22 + 0x88) = fVar41;
          *(undefined8 *)(lVar22 + 0x98) = uVar39;
          *(float *)(lVar22 + 0xa0) = fVar41;
          *(undefined8 *)(lVar22 + 0xb0) = uVar39;
          *(float *)(lVar22 + 0xb8) = fVar41;
          lVar22 = lVar22 + 0xc0;
        } while (lVar22 != lVar35 + lVar18);
      }
    }
  }
  goto LAB_1429567d7;
LAB_14295771c:
  if (lStack_1d0 == 0) {
    return;
  }
  plVar15 = (longlong *)pdb_140e97000();
  if ((char)plVar15[0xd] != '\x01') goto LAB_1429577e5;
  do {
    if (*plVar15 == 0) {
      *plVar15 = -1;
      plStack_110 = plVar15;
      pdb_140e95370(plVar15 + 1,uStack_1c8);
      *plStack_110 = *plStack_110 + 1;
      return;
    }
LAB_1429577d9:
    plVar15 = (longlong *)pdb_142dc8090(&UNK_1436007f8);
LAB_1429577e5:
    plVar15 = (longlong *)pdb_142e2d6a0(plVar15,0);
  } while (plVar15 != (longlong *)0x0);
LAB_14295780d:
  pdb_142dc7890(&UNK_143600788);
LAB_14295781a:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1436046e8);
}

