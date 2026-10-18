// VA 0x142957b30, PDB extent 4594 bytes
// system_critters::shared::critters_avoid_collisions
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/shared.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::shared::critters_avoid_collisions
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/shared.rs
   Extent: 4594 */

void pdb_142957b30(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7,longlong *param_8)

{
  byte *pbVar1;
  uint *puVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 uVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  char cVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined4 *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 *puVar25;
  longlong lVar26;
  int *piVar27;
  undefined *puVar28;
  ulonglong uVar29;
  undefined *puVar30;
  undefined4 *puVar31;
  undefined *puVar32;
  uint *puVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  longlong in_stack_fffffffffffffd48;
  undefined8 uVar44;
  undefined1 auStack_298 [24];
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [8];
  float fStack_238;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  int iStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 *puStack_1b8;
  longlong lStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  undefined8 uStack_1a0;
  float fStack_198;
  undefined8 uStack_194;
  float fStack_18c;
  longlong lStack_188;
  undefined8 uStack_180;
  longlong lStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_160;
  undefined4 uStack_154;
  longlong lStack_150;
  int *piStack_148;
  longlong lStack_140;
  undefined4 *puStack_138;
  longlong lStack_130;
  ulonglong uStack_128;
  longlong *plStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong *plStack_108;
  undefined4 uStack_fc;
  char cStack_f5;
  uint uStack_f4;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  cVar13 = pdb_140e94b40();
  if (cVar13 == '\0') {
    lStack_188 = 0;
  }
  else {
    puVar30 = &UNK_143604801;
    lVar26 = 0x32;
    uVar23 = 0x32;
    lVar15 = pdb_1429590d0(&UNK_143604801);
    if (lVar15 == 1) {
      if (0x32 < uVar23) {
LAB_142958a4c:
        pdb_142dc8070(&UNK_143604801,0x32,0);
LAB_142958a6c:
        pdb_142dc8070(&UNK_143604801,0x32);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      puVar30 = &UNK_143604801;
      uVar16 = pdb_1429590d0(&UNK_143604801);
      if ((uVar16 & 1) != 0) {
        if (0x32 < uVar23 + 2) goto LAB_142958a6c;
        lVar26 = 0x30 - uVar23;
        puVar30 = &UNK_143604803 + uVar23;
      }
    }
    puVar28 = &UNK_1436046e3;
    puVar32 = &UNK_1436046be;
    do {
      bVar4 = puVar28[-1];
      uVar14 = (uint)(char)bVar4;
      plStack_120 = param_4;
      if ((char)bVar4 < '\0') {
        bVar5 = puVar28[-2];
        if ((char)bVar5 < -0x40) {
          bVar6 = puVar28[-3];
          if ((char)bVar6 < -0x40) {
            pbVar1 = puVar28 + -4;
            puVar28 = puVar28 + -4;
            uVar14 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar28 = puVar28 + -3;
            uVar14 = bVar6 & 0xf;
          }
          uVar14 = bVar5 & 0x3f | uVar14 << 6;
        }
        else {
          puVar28 = puVar28 + -2;
          uVar14 = bVar5 & 0x1f;
        }
        uVar14 = (uint)(bVar4 & 0x3f) | uVar14 << 6;
        if (uVar14 != 0x5c) goto LAB_142957cb4;
LAB_142957cd2:
        puVar32 = puVar28 + -0x1436046bd;
        if (puVar32 < (undefined *)0x26) {
          in_stack_fffffffffffffd48 = 0x25 - (longlong)puVar32;
          puVar32 = puVar28 + 1;
          goto LAB_142957cfa;
        }
        pdb_142dc8070(&UNK_1436046be,0x25,puVar32,0x25,&UNK_143604898);
        goto LAB_142958a4c;
      }
      puVar28 = puVar28 + -1;
      if (uVar14 == 0x5c) goto LAB_142957cd2;
LAB_142957cb4:
      if (uVar14 == 0x2f) goto LAB_142957cd2;
    } while (puVar28 != &UNK_1436046be);
    in_stack_fffffffffffffd48 = 0x25;
LAB_142957cfa:
    plVar17 = (longlong *)pdb_140e97000();
    if (((char)plVar17[0xd] != '\x01') &&
       (plVar17 = (longlong *)pdb_142e2d6a0(plVar17,0), plVar17 == (longlong *)0x0))
    goto LAB_142958a0d;
    if (*plVar17 != 0) goto LAB_1429589d9;
    *plVar17 = -1;
    plStack_108 = plVar17;
    uStack_180 = pdb_140e94f10(plVar17 + 1,puVar30,lVar26,puVar32,in_stack_fffffffffffffd48,1,0);
    *plStack_108 = *plStack_108 + 1;
    lStack_188 = 1;
    param_4 = plStack_120;
  }
  puVar18 = (undefined8 *)pdb_1429472f0(*param_4,&UNK_143600380);
  if ((puVar18 != (undefined8 *)0x0) &&
     (lVar15 = (**(code **)(puVar18[1] + 0x18))(*puVar18), lVar15 != 0)) {
    uStack_1d8 = *(undefined8 *)(lVar15 + 8);
    puStack_1d0 = *(undefined1 **)(lVar15 + 0x10);
    lVar15 = pdb_1406d0830(*param_6);
    puVar18 = (undefined8 *)(lVar15 + 0x20);
    puVar19 = (undefined8 *)(lVar15 + 0x28);
    if (*(char *)(lVar15 + 0x298) == '\0') {
      puVar19 = (undefined8 *)(lVar15 + 0x10);
      puVar18 = (undefined8 *)(lVar15 + 8);
    }
    uStack_1f8 = *puVar19;
    uStack_200 = *puVar18;
    pdb_140bfabf0(auStack_280,param_5);
    uVar11 = _DAT_143006a28;
    fVar10 = _DAT_142e3b1d8;
    fVar9 = _DAT_142e36f28;
    lStack_168 = *param_1;
    plStack_120 = (longlong *)param_1[1];
    uStack_fc = *(undefined4 *)((longlong)param_1 + 0x14);
    puVar33 = *(uint **)(lStack_168 + 0xf8);
    puVar2 = puVar33 + *(longlong *)(lStack_168 + 0x100);
    cStack_f5 = *(char *)(lStack_168 + 0x108);
    uStack_1c8 = *param_7;
    uStack_1c0 = *param_3;
    uStack_1e0 = *param_2;
    uStack_154 = *(undefined4 *)((longlong)param_8 + 0x1c);
    lStack_160 = *param_8;
    puStack_1b8 = (undefined4 *)param_8[2];
    lStack_1b0 = lStack_160 + 0x20;
    lStack_170 = 8;
    lStack_140 = 0;
    lStack_118 = 0;
    uStack_f4 = 0;
    lStack_130 = 0;
    lStack_178 = 8;
    lStack_110 = 0;
    uStack_128 = 0;
    lVar15 = 0;
    plStack_108 = (longlong *)0x0;
LAB_142957f1b:
    do {
      if (cStack_f5 == '\0') {
        if ((int)plStack_108 == (int)lVar15) {
          do {
            if (puVar33 == puVar2) goto LAB_14295891c;
            uVar14 = *puVar33;
            puVar33 = puVar33 + 1;
            lVar15 = *(longlong *)(plStack_120[0x20] + 0x58 + (ulonglong)uVar14 * 0xa0);
          } while (lVar15 == 0);
          lVar20 = plStack_120[0x20] + (ulonglong)uVar14 * 0xa0;
          uVar23 = (ulonglong)*(uint *)(lVar20 + 0x94);
          lVar22 = plStack_120[0x34];
          lVar26 = lVar22 + uVar23 * 0x48;
          lVar24 = *(longlong *)(lVar22 + 0x38 + uVar23 * 0x48);
          uVar23 = *(ulonglong *)(lVar22 + 0x40 + uVar23 * 0x48);
          if (*(ulonglong *)(lStack_168 + 0x110) < uVar23) {
            uVar16 = *(ulonglong *)(lVar24 + *(ulonglong *)(lStack_168 + 0x110) * 8);
            lVar26 = *(longlong *)(lVar26 + 0x18);
            if (uVar16 == 0) {
              uVar16 = *(ulonglong *)(lStack_168 + 0x120);
              goto joined_r0x0001429580cd;
            }
            lStack_118 = *(longlong *)(lVar26 + 0x10 + ~uVar16 * 0x30);
            uVar16 = *(ulonglong *)(lStack_168 + 0x120);
            if (uVar16 < uVar23) goto LAB_1429581ff;
LAB_142958234:
            lStack_110 = 0;
            uVar16 = *(ulonglong *)(lStack_168 + 0x128);
            uVar29 = *(ulonglong *)(lVar20 + 0x88);
            if (uVar29 <= uVar16) goto LAB_142958291;
LAB_142958252:
            if (*(longlong *)(*(longlong *)(lVar20 + 0x80) + uVar16 * 8) == 0) goto LAB_142958291;
            uStack_f4 = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar20 + 0x80) >> 8),1);
            if ((uVar16 < uVar23) && (uVar23 = *(ulonglong *)(lVar24 + uVar16 * 8), uVar23 != 0)) {
              lStack_130 = *(longlong *)(lVar26 + 0x10 + ~uVar23 * 0x30);
            }
            else {
              lStack_130 = 0;
            }
          }
          else {
            lVar26 = *(longlong *)(lVar26 + 0x18);
            uVar16 = *(ulonglong *)(lStack_168 + 0x120);
joined_r0x0001429580cd:
            lStack_118 = 0;
            if (uVar23 <= uVar16) goto LAB_142958234;
LAB_1429581ff:
            uVar16 = *(ulonglong *)(lVar24 + uVar16 * 8);
            if (uVar16 == 0) goto LAB_142958234;
            lStack_110 = *(longlong *)(lVar26 + 0x10 + ~uVar16 * 0x30);
            uVar16 = *(ulonglong *)(lStack_168 + 0x128);
            uVar29 = *(ulonglong *)(lVar20 + 0x88);
            if (uVar16 < uVar29) goto LAB_142958252;
LAB_142958291:
            uStack_f4 = 0;
          }
          uVar23 = *(ulonglong *)(lStack_168 + 0x130);
          uStack_128 = 0;
          if (uVar23 < uVar29) {
            uStack_128 = CONCAT71((int7)(uVar23 >> 8),
                                  *(longlong *)(*(longlong *)(lVar20 + 0x80) + uVar23 * 8) != 0);
          }
          plStack_108 = (longlong *)0x0;
          lVar22 = ~*(ulonglong *)(lVar24 + *(longlong *)(lStack_168 + 0x118) * 8) * 0x30;
          lStack_140 = *(longlong *)(lVar26 + 0x10 + lVar22);
          lStack_150 = *(longlong *)(lVar26 + 0x28 + lVar22);
          lStack_170 = *(longlong *)(lVar20 + 0x50);
          uVar23 = 0;
        }
        else {
          uVar23 = (ulonglong)plStack_108 & 0xffffffff;
        }
        puVar18 = (undefined8 *)(lStack_170 + uVar23 * 0x10);
        uVar23 = (ulonglong)~*(uint *)(lStack_170 + 8 + uVar23 * 0x10);
      }
      else {
        if ((int)plStack_108 == (int)lVar15) {
          do {
            if (puVar33 == puVar2) goto LAB_14295891c;
            uVar14 = *puVar33;
            puVar33 = puVar33 + 1;
            lVar15 = *(longlong *)(plStack_120[0x34] + 0x10 + (ulonglong)uVar14 * 0x48);
          } while (lVar15 == 0);
          lVar26 = plStack_120[0x34] + (ulonglong)uVar14 * 0x48;
          lVar22 = *(longlong *)(lVar26 + 0x38);
          uVar23 = *(ulonglong *)(lVar26 + 0x40);
          if (*(ulonglong *)(lStack_168 + 0x110) < uVar23) {
            uVar16 = *(ulonglong *)(lVar22 + *(ulonglong *)(lStack_168 + 0x110) * 8);
            lVar24 = *(longlong *)(lVar26 + 0x18);
            if (uVar16 == 0) {
              uVar16 = *(ulonglong *)(lStack_168 + 0x120);
              goto joined_r0x0001429580b0;
            }
            lStack_118 = *(longlong *)(lVar24 + 0x10 + ~uVar16 * 0x30);
            uVar16 = *(ulonglong *)(lStack_168 + 0x120);
            if (uVar16 < uVar23) goto LAB_1429580ef;
LAB_14295811d:
            lStack_110 = 0;
            uVar16 = *(ulonglong *)(lStack_168 + 0x128);
            if (uVar23 <= uVar16) goto LAB_142958160;
LAB_142958134:
            uVar16 = *(ulonglong *)(lVar22 + uVar16 * 8);
            if (uVar16 == 0) goto LAB_142958160;
            lStack_130 = *(longlong *)(lVar24 + 0x10 + ~uVar16 * 0x30);
            uStack_f4 = (uint)CONCAT71((int7)((ulonglong)lStack_130 >> 8),1);
          }
          else {
            lVar24 = *(longlong *)(lVar26 + 0x18);
            uVar16 = *(ulonglong *)(lStack_168 + 0x120);
joined_r0x0001429580b0:
            lStack_118 = 0;
            if (uVar23 <= uVar16) goto LAB_14295811d;
LAB_1429580ef:
            uVar16 = *(ulonglong *)(lVar22 + uVar16 * 8);
            if (uVar16 == 0) goto LAB_14295811d;
            lStack_110 = *(longlong *)(lVar24 + 0x10 + ~uVar16 * 0x30);
            uVar16 = *(ulonglong *)(lStack_168 + 0x128);
            if (uVar16 < uVar23) goto LAB_142958134;
LAB_142958160:
            uStack_f4 = 0;
          }
          plStack_108 = (longlong *)0x0;
          uStack_128 = 0;
          if (*(ulonglong *)(lStack_168 + 0x130) < uVar23) {
            uStack_128 = CONCAT71((int7)(uVar23 >> 8),
                                  *(longlong *)(lVar22 + *(ulonglong *)(lStack_168 + 0x130) * 8) !=
                                  0);
          }
          lVar22 = ~*(ulonglong *)(lVar22 + *(longlong *)(lStack_168 + 0x118) * 8) * 0x30;
          lStack_140 = *(longlong *)(lVar24 + 0x10 + lVar22);
          lStack_150 = *(longlong *)(lVar24 + 0x28 + lVar22);
          lStack_178 = *(longlong *)(lVar26 + 8);
        }
        uVar23 = (ulonglong)plStack_108 & 0xffffffff;
        puVar18 = (undefined8 *)(lStack_178 + uVar23 * 8);
      }
      lVar26 = uVar23 * 0x30 + lStack_118;
      puStack_138 = (undefined4 *)(lStack_150 + uVar23 * 4);
      piStack_148 = (int *)(lStack_110 + uVar23 * 8);
      piVar27 = (int *)(uVar23 * 0x10 + lStack_140);
      lVar22 = uVar23 * 0x68 + lStack_130;
      if ((uStack_f4 & 1) == 0) {
        lVar22 = 0;
      }
      uVar7 = *puVar18;
      if ((int)uVar7 == 0) goto LAB_14295891c;
      plStack_108 = (longlong *)(ulonglong)((int)plStack_108 + 1);
      *puStack_138 = uStack_fc;
    } while (*piVar27 != 1);
    uVar3 = *(undefined8 *)(lVar26 + 0x10);
    fVar38 = (float)uVar3;
    fVar37 = (float)((ulonglong)uVar3 >> 0x20);
    fVar35 = *(float *)(lVar26 + 0x18);
    fVar39 = (float)piVar27[1] - fVar38;
    fVar41 = (float)piVar27[3] - fVar35;
    fVar36 = fVar9 / SQRT(fVar41 * fVar41 + fVar39 * fVar39);
    if ((int)fVar36 - 1U < 0x7fffff || (int)ABS(fVar36) - 0x800000U < 0x7f000000 && -1 < (int)fVar36
       ) {
      fVar39 = fVar39 * fVar36;
      fVar41 = fVar41 * fVar36;
    }
    else {
      fVar41 = 0.0;
      fVar39 = 0.0;
    }
    uVar44 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffd48 >> 0x20),(float)piVar27[3] + fVar41
                     );
    fStack_1a8 = fVar39;
    fStack_1a4 = fVar41;
    pdb_140def2a0(auStack_240,fVar38,fVar35,(float)piVar27[1] + fVar39,uVar44);
    uVar40 = (undefined4)((ulonglong)uVar44 >> 0x20);
    puVar25 = auStack_240;
    pdb_142b50090(auStack_298);
    fVar42 = fVar39 * fVar10 + fVar38;
    fVar43 = fVar41 * fVar10 + fVar35;
    in_stack_fffffffffffffd48 = CONCAT44(uVar40,0x43020000);
    fVar36 = (float)pdb_140a7d8d0(&uStack_200,fVar42,fVar43,uVar11,in_stack_fffffffffffffd48);
    if ((*piStack_148 != 2) ||
       (puVar25 = puStack_1d0, cVar13 = pdb_1419c1e90(uStack_1d8,puStack_1d0,fVar42,fVar43),
       fVar36 <= 0.0 && cVar13 == '\0')) {
      if ((char)uStack_128 == '\x01') {
        uVar44 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffd48 >> 0x20),0x43020000);
        fVar36 = (float)pdb_140a7d8d0(auStack_280,fVar38,fVar35,uVar11,uVar44);
        uVar44 = CONCAT44((int)((ulonglong)uVar44 >> 0x20),0x43020000);
        fVar42 = (float)pdb_140a7d8d0(auStack_270,fVar38,fVar35,uVar11,uVar44);
        uVar44 = CONCAT44((int)((ulonglong)uVar44 >> 0x20),0x43020000);
        fVar43 = (float)pdb_140a7d8d0(auStack_260,fVar38,fVar35,uVar11,uVar44);
        uVar44 = CONCAT44((int)((ulonglong)uVar44 >> 0x20),0x43020000);
        fVar34 = (float)pdb_140a7d8d0(auStack_250,fVar38,fVar35,uVar11,uVar44);
        fVar34 = fVar36 + fVar42 + fVar43 + fVar34;
        fVar36 = 0.0;
        if (0.0 <= fVar34) {
          fVar36 = fVar34;
        }
        fVar42 = fVar9;
        if (fVar36 <= fVar9) {
          fVar42 = fVar36;
        }
        fVar36 = _DAT_142e37988;
        if (0.0 < fVar42) {
          fVar36 = (float)*(undefined8 *)(piVar27 + 2);
          fVar42 = (float)((ulonglong)*(undefined8 *)(piVar27 + 2) >> 0x20);
          fVar36 = SQRT(fVar42 * fVar42 + (float)piVar27[1] * (float)piVar27[1] + fVar36 * fVar36);
        }
        fVar42 = fVar39 * fVar36 + fVar38;
        fVar43 = fVar41 * fVar36 + fVar35;
        uVar44 = CONCAT44((int)((ulonglong)uVar44 >> 0x20),0x43020000);
        fVar36 = (float)pdb_140a7d8d0(auStack_280,fVar42,fVar43,uVar11,uVar44);
        uVar44 = CONCAT44((int)((ulonglong)uVar44 >> 0x20),0x43020000);
        fVar39 = (float)pdb_140a7d8d0(auStack_270,fVar42,fVar43,uVar11,uVar44);
        uVar44 = CONCAT44((int)((ulonglong)uVar44 >> 0x20),0x43020000);
        fVar41 = (float)pdb_140a7d8d0(auStack_260,fVar42,fVar43,uVar11,uVar44);
        in_stack_fffffffffffffd48 = CONCAT44((int)((ulonglong)uVar44 >> 0x20),0x43020000);
        fVar42 = (float)pdb_140a7d8d0(auStack_250,fVar42,fVar43,uVar11,in_stack_fffffffffffffd48);
        fVar42 = fVar36 + fVar39 + fVar41 + fVar42;
        fVar36 = 0.0;
        if (0.0 <= fVar42) {
          fVar36 = fVar42;
        }
        fVar39 = fVar9;
        if (fVar36 <= fVar9) {
          fVar39 = fVar36;
        }
        if (fVar39 <= 0.0) {
          uVar40 = *(undefined4 *)(&UNK_143600850 + (ulonglong)(lVar22 == 0) * 4);
LAB_1429586ca:
          if (2 < *piStack_148 - 2U) goto LAB_142957f1b;
          pdb_140df4520(auStack_240,&fStack_1a8);
          fVar36 = auStack_240._0_4_;
          fVar39 = auStack_240._4_4_;
          fVar41 = fVar9 / SQRT(fVar39 * fVar39 + fVar36 * fVar36 + fStack_238 * fStack_238);
          fStack_18c = fVar41 * fStack_238;
          uStack_194 = CONCAT44(fVar41 * fVar39,fVar41 * fVar36);
          uStack_1a0 = uVar3;
          fStack_198 = fVar35;
          pdb_1409ef140(auStack_240,uStack_1c8,&uStack_1a0,uVar40);
          if ((iStack_210 == 2) ||
             (fVar37 = fStack_224 - fVar37,
             fVar35 = SQRT((fStack_220 - fVar35) * (fStack_220 - fVar35) +
                           fVar37 * fVar37 + (fStack_228 - fVar38) * (fStack_228 - fVar38)),
             fVar9 <= fVar35)) goto LAB_142957f1b;
          if ((fVar35 < _DAT_142e3798c) && ((uStack_128 & 1) != 0)) {
            *puStack_1b8 = uStack_154;
            lVar26 = *(longlong *)(lStack_160 + 0x30);
            uVar3 = *(undefined8 *)(lStack_160 + 0x40);
            if (lVar26 == *(longlong *)(lStack_160 + 0x20)) {
              pdb_142d7e980(lStack_1b0);
            }
            lVar22 = *(longlong *)(lStack_160 + 0x28);
            *(undefined8 *)(lVar22 + lVar26 * 0x10) = uVar7;
            *(undefined8 *)(lVar22 + 8 + lVar26 * 0x10) = uVar3;
            *(longlong *)(lStack_160 + 0x30) = lVar26 + 1;
            *(longlong *)(lStack_160 + 0x40) = *(longlong *)(lStack_160 + 0x40) + 1;
          }
        }
      }
      else {
        uVar40 = _DAT_142e3c670;
        if (lVar22 != 0) goto LAB_1429586ca;
        puVar21 = (undefined4 *)pdb_140b57780(uStack_1c0,fVar38,fVar35);
        puVar12 = puVar21;
LAB_142958860:
        do {
          puVar31 = puVar12;
          if (puVar31 == puVar21 + (longlong)puVar25 * 0xe) goto LAB_142957f1b;
          lVar26 = pdb_140b54f80(uStack_1e0,*(undefined8 *)(puVar31 + 10),&UNK_143604748);
          uVar40 = (undefined4)((ulonglong)in_stack_fffffffffffffd48 >> 0x20);
          if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143604760);
          }
          puVar12 = puVar31 + 0xe;
          if (*piStack_148 != 3) {
            fVar35 = (float)pdb_14092f8b0(lVar26);
            uVar40 = (undefined4)((ulonglong)in_stack_fffffffffffffd48 >> 0x20);
            if (fVar35 < fVar37) goto LAB_142958860;
          }
          in_stack_fffffffffffffd48 = CONCAT44(uVar40,puVar31[3]);
          pdb_140def2a0(&uStack_1a0,*puVar31,puVar31[1],puVar31[2],in_stack_fffffffffffffd48);
          pdb_142b50090(auStack_240,&uStack_1a0);
          pdb_142b500b0(&uStack_1a0,auStack_298,auStack_240);
        } while ((int)uStack_1a0 != 0);
      }
    }
    *puStack_138 = uStack_fc;
    *piVar27 = 0;
    goto LAB_142957f1b;
  }
  goto LAB_142958a1a;
LAB_14295891c:
  if (lStack_188 == 0) {
    return;
  }
  plVar17 = (longlong *)pdb_140e97000();
  if ((char)plVar17[0xd] != '\x01') goto LAB_1429589e5;
  do {
    if (*plVar17 == 0) {
      *plVar17 = -1;
      plStack_120 = plVar17;
      pdb_140e95370(plVar17 + 1,uStack_180);
      *plStack_120 = *plStack_120 + 1;
      return;
    }
LAB_1429589d9:
    plVar17 = (longlong *)pdb_142dc8090(&UNK_1436007f8);
LAB_1429589e5:
    plVar17 = (longlong *)pdb_142e2d6a0(plVar17,0);
  } while (plVar17 != (longlong *)0x0);
LAB_142958a0d:
  pdb_142dc7890(&UNK_143600788);
LAB_142958a1a:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143604730);
}

