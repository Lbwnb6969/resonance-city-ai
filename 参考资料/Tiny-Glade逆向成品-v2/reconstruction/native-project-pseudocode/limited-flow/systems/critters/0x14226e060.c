// VA 0x14226e060, PDB extent 5246 bytes
// system_critters::butterfly::update_butterfly_states
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/butterfly.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::butterfly::update_butterfly_states
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/butterfly.rs
   Extent: 5246 */

void pdb_14226e060(longlong *param_1,undefined8 *param_2,undefined8 *param_3,byte *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 *param_7,undefined8 *param_8)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  byte bVar17;
  longlong lVar18;
  undefined *puVar19;
  uint *puVar20;
  longlong lVar21;
  undefined *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined *puVar25;
  bool bVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 in_stack_fffffffffffffd68;
  undefined4 uVar33;
  longlong lStack_280;
  longlong lStack_278;
  longlong lStack_270;
  longlong lStack_268;
  uint *puStack_260;
  uint *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  longlong lStack_240;
  undefined8 uStack_238;
  longlong lStack_230;
  undefined8 uStack_228;
  longlong lStack_220;
  undefined1 uStack_218;
  undefined4 uStack_214;
  longlong lStack_1f0;
  longlong lStack_1e8;
  undefined8 uStack_1e0;
  uint uStack_1d8;
  uint uStack_1d4;
  byte bStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  uint *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  longlong lStack_190;
  byte *pbStack_188;
  longlong lStack_180;
  longlong lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  longlong lStack_160;
  longlong lStack_158;
  longlong lStack_150;
  longlong lStack_148;
  ulonglong *puStack_140;
  ulonglong uStack_138;
  byte *pbStack_130;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  undefined8 uStack_110;
  longlong lStack_108;
  longlong *plStack_100;
  undefined4 uStack_f8;
  byte bStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uVar33 = (undefined4)((ulonglong)in_stack_fffffffffffffd68 >> 0x20);
  uStack_f0 = 0xfffffffffffffffe;
  puVar15 = param_2;
  cVar10 = pdb_140e94b40();
  if (cVar10 == '\0') {
    lVar21 = 0;
LAB_14226e287:
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    puStack_140 = (ulonglong *)*param_2;
    fVar28 = *(float *)(*param_6 + 0x28);
    lStack_178 = lVar21;
    lStack_128 = lVar21;
    puVar15 = (undefined8 *)pdb_1429472f0(*param_5,&UNK_143600380);
    if ((puVar15 == (undefined8 *)0x0) ||
       (lStack_128 = lVar21, lVar12 = (**(code **)(puVar15[1] + 0x18))(*puVar15), lVar12 == 0))
    goto LAB_14226f0b6;
    uStack_1a0 = *(undefined8 *)(lVar12 + 8);
    uStack_198 = *(undefined8 *)(lVar12 + 0x10);
    lStack_128 = lVar21;
    lVar12 = pdb_1406d0830(*param_7);
    puVar15 = (undefined8 *)(lVar12 + 0x20);
    puVar16 = (undefined8 *)(lVar12 + 0x28);
    if (*(char *)(lVar12 + 0x298) == '\0') {
      puVar16 = (undefined8 *)(lVar12 + 0x10);
      puVar15 = (undefined8 *)(lVar12 + 8);
    }
    uStack_1c0 = *puVar16;
    uStack_1c8 = *puVar15;
    lStack_128 = lVar21;
    pdb_140a8e090(&lStack_280,*param_3);
    fVar31 = (float)lStack_278;
    fVar30 = (float)lStack_280;
    lStack_268 = *(longlong *)param_4;
    lStack_280 = *(longlong *)(param_4 + 8);
    puStack_260 = *(uint **)(lStack_268 + 0xf8);
    puStack_258 = puStack_260 + *(longlong *)(lStack_268 + 0x100);
    uStack_218 = *(undefined1 *)(lStack_268 + 0x108);
    uStack_228 = 0;
    lStack_220 = 0;
    uStack_238 = 0;
    lStack_230 = 0;
    lStack_270 = lStack_280 + 0xf8;
    lStack_278 = lStack_280 + 0x198;
    uStack_250 = 8;
    uStack_248 = 0;
    lStack_240 = 8;
    lStack_128 = lVar21;
    pdb_142298f00(&lStack_190,&lStack_280);
    lStack_108 = *param_1;
    lStack_158 = param_1[1];
    pdb_142948280(&puStack_260,lStack_158,lStack_108,(int)param_1[2],
                  CONCAT44(uVar33,*(undefined4 *)((longlong)param_1 + 0x14)));
    fVar3 = _DAT_142e37adc;
    fVar9 = _DAT_142e36f28;
    lStack_160 = lStack_240;
    lStack_150 = lStack_230;
    lStack_148 = lStack_220;
    uStack_f8 = uStack_214;
    lStack_120 = lStack_1f0;
    lStack_118 = lStack_1e8;
    uStack_110 = uStack_1e0;
    uVar13 = (ulonglong)uStack_1d4;
    uStack_168 = *param_8;
    fVar32 = _DAT_142e36f50 * fVar28;
    bStack_f2 = bStack_1d0;
    pbStack_130 = pbStack_188;
    puStack_1a8 = puStack_258;
    uStack_138 = uVar13;
    if ((bStack_1d0 & 1) == 0) {
      if (uStack_1d4 != uStack_1d8) {
        uVar13 = (ulonglong)uStack_1d4;
LAB_14226e8a1:
        uVar13 = (ulonglong)~*(uint *)(lStack_160 + 8 + uVar13 * 0x10);
        goto LAB_14226e8b4;
      }
      if (puStack_260 != puStack_258) {
        puVar20 = puStack_260;
        do {
          if (*(longlong *)(*(longlong *)(lStack_158 + 0x100) + 0x58 + (ulonglong)*puVar20 * 0xa0)
              != 0) {
            lVar12 = *(longlong *)(lStack_158 + 0x100) + (ulonglong)*puVar20 * 0xa0;
            uVar13 = (ulonglong)*(uint *)(lVar12 + 0x94);
            lVar21 = *(longlong *)(lStack_158 + 0x1a0) + uVar13 * 0x48;
            uVar13 = *(ulonglong *)(*(longlong *)(lStack_158 + 0x1a0) + 0x40 + uVar13 * 0x48);
            if ((*(ulonglong *)(lStack_108 + 0x110) < uVar13) &&
               (uVar23 = *(ulonglong *)
                          (*(longlong *)(lVar21 + 0x38) + *(ulonglong *)(lStack_108 + 0x110) * 8),
               uVar23 != 0)) {
              lStack_120 = *(longlong *)(*(longlong *)(lVar21 + 0x18) + 0x10 + ~uVar23 * 0x30);
            }
            else {
              lStack_120 = 0;
            }
            lVar18 = *(longlong *)(lVar21 + 0x38);
            if (*(ulonglong *)(lStack_108 + 0x118) < uVar13) {
              uVar23 = *(ulonglong *)(lVar18 + *(ulonglong *)(lStack_108 + 0x118) * 8);
              lVar21 = *(longlong *)(lVar21 + 0x18);
              if (uVar23 == 0) goto LAB_14226e805;
              lStack_118 = *(longlong *)(lVar21 + 0x10 + ~uVar23 * 0x30);
              uVar23 = *(ulonglong *)(lStack_108 + 0x130);
              if (uVar23 < uVar13) goto LAB_14226e823;
LAB_14226e845:
              uStack_110 = 0;
            }
            else {
              lVar21 = *(longlong *)(lVar21 + 0x18);
LAB_14226e805:
              lStack_118 = 0;
              uVar23 = *(ulonglong *)(lStack_108 + 0x130);
              if (uVar13 <= uVar23) goto LAB_14226e845;
LAB_14226e823:
              uVar13 = *(ulonglong *)(lVar18 + uVar23 * 8);
              if (uVar13 == 0) goto LAB_14226e845;
              uStack_110 = *(undefined8 *)(lVar21 + 0x10 + ~uVar13 * 0x30);
            }
            lVar18 = ~*(ulonglong *)(lVar18 + *(longlong *)(lStack_108 + 0x120) * 8) * 0x30;
            lStack_150 = *(longlong *)(lVar21 + 0x10 + lVar18);
            lStack_148 = *(longlong *)(lVar21 + 0x28 + lVar18);
            lStack_160 = *(longlong *)(lVar12 + 0x50);
            uStack_138 = 0;
            uVar13 = 0;
            goto LAB_14226e8a1;
          }
          puVar20 = puVar20 + 1;
        } while (puVar20 != puStack_258);
      }
    }
    else {
      if (uStack_1d4 != uStack_1d8) {
LAB_14226e8b4:
        lVar21 = lStack_118 + uVar13 * 0xc;
        puVar20 = (uint *)(lStack_150 + uVar13 * 0x18);
        lVar12 = uVar13 * 0x30 + lStack_120;
        plStack_100 = (longlong *)(lStack_148 + uVar13 * 4);
        cVar10 = pdb_140a36620(uStack_168);
        if (cVar10 == '\x03') {
          pdb_140a34500(&lStack_280,uStack_168);
          fVar2 = *(float *)(lVar12 + 0x10);
          fVar29 = *(float *)(lVar12 + 0x18);
          fVar30 = SQRT(((float)lStack_278 - fVar29) * ((float)lStack_278 - fVar29) +
                        ((float)lStack_280 - fVar2) * ((float)lStack_280 - fVar2));
          bVar27 = _DAT_142e3788c == fVar30;
          bVar26 = _DAT_142e3788c < fVar30;
        }
        else {
          fVar2 = *(float *)(lVar12 + 0x10);
          fVar29 = *(float *)(lVar12 + 0x18);
          fVar30 = (fVar29 - fVar31) * (fVar29 - fVar31) + (fVar2 - fVar30) * (fVar2 - fVar30);
          bVar27 = fVar3 == fVar30;
          bVar26 = fVar3 < fVar30;
        }
        bVar27 = !bVar26 && !bVar27;
        uStack_138 = (ulonglong)((int)uStack_138 + 1);
        lVar12 = 0;
        do {
          lVar18 = lVar12;
          if (lStack_180 << 3 == lVar18) break;
          fVar30 = fVar2 - (float)*(undefined8 *)(pbStack_130 + lVar18);
          fVar31 = fVar29 - (float)((ulonglong)*(undefined8 *)(pbStack_130 + lVar18) >> 0x20);
          lVar12 = lVar18 + 8;
        } while (fVar3 <= fVar31 * fVar31 + fVar30 * fVar30);
        fVar32 = (float)puVar20[4] - fVar32;
        if (fVar32 <= 0.0) {
          fVar32 = 0.0;
        }
        *(undefined4 *)plStack_100 = uStack_f8;
        puVar20[4] = (uint)fVar32;
        if (!(bool)(~bVar27 & lStack_180 << 3 == lVar18)) {
          *(undefined4 *)plStack_100 = uStack_f8;
          puVar20[4] = 0x3f800000;
          fVar32 = fVar9;
        }
        fVar3 = (float)puVar20[3];
        if ((fVar3 <= 0.0) || (0.0 < *(float *)(lVar21 + 4))) {
          if (fVar3 <= 0.0) {
            *(undefined4 *)plStack_100 = uStack_f8;
            fVar32 = (float)puVar20[3];
            puVar20[3] = (uint)(fVar32 + fVar28);
            if (fVar32 + fVar28 <= 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00014226edac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(&UNK_1434c8a90 + *(int *)(&UNK_1434c8a90 + (ulonglong)*puVar20 * 4)))
                        (&UNK_1434c8a90,-(uint)(0.0 < (float)puVar20[4]) & (uint)_DAT_142e37adc,
                         _DAT_142e3788c);
              return;
            }
            auVar8._8_8_ = 0;
            auVar8._0_8_ = *puStack_140;
            uVar13 = SUB168(auVar8 * ZEXT816(0x4385df649fccf645),0);
            uVar23 = puStack_140[1] * 0x4385df649fccf645 +
                     SUB168(auVar8 * ZEXT816(0x4385df649fccf645),8) +
                     *puStack_140 * 0x2360ed051fc65da4;
            puStack_140[1] = uVar23;
            uVar24 = uVar23 ^ uVar13;
            bVar17 = (byte)(uVar23 >> 0x3a);
            *puStack_140 = uVar13;
            fVar28 = ((float)(((uint)(uVar24 >> bVar17) | (uint)(uVar24 << 0x40 - bVar17)) >> 9 |
                             0x3f800000) + _DAT_142e36f34) * _DAT_142e37988 + _DAT_142e3787c;
            *(undefined4 *)plStack_100 = uStack_f8;
            puVar20[3] = (uint)fVar28;
            uStack_f1 = bVar27;
                    /* WARNING: Could not recover jumptable at 0x00014226ecaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_1434c8a90 + *(int *)(&UNK_1434c8a90 + (ulonglong)*puVar20 * 4)))
                      (&UNK_1434c8a90,-(uint)(0.0 < (float)puVar20[4]) & (uint)_DAT_142e37adc,
                       _DAT_142e3788c);
            return;
          }
LAB_14226eae9:
          fVar28 = _DAT_142e3788c;
          if (0.0 < fVar3) goto LAB_14226ecc1;
          bVar26 = false;
        }
        else {
          fVar30 = (float)((uint)(_DAT_142e36f50 - (float)puVar20[5]) & _DAT_142e377e0);
          if ((fVar30 < _DAT_142e3787c) || (_DAT_14300a334 <= fVar30)) goto LAB_14226eae9;
          *(undefined4 *)plStack_100 = uStack_f8;
          fVar32 = (float)puVar20[3];
          puVar20[3] = (uint)(fVar32 - fVar28);
          bVar26 = true;
          if (0.0 < fVar32 - fVar28) {
                    /* WARNING: Could not recover jumptable at 0x00014226eacf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_1434c8a90 + *(int *)(&UNK_1434c8a90 + (ulonglong)*puVar20 * 4)))
                      (&UNK_1434c8a90,-(uint)(0.0 < (float)puVar20[4]) & (uint)_DAT_142e37adc);
            return;
          }
        }
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *puStack_140;
        uVar13 = SUB168(auVar7 * ZEXT816(0x4385df649fccf645),0);
        uVar23 = puStack_140[1] * 0x4385df649fccf645 +
                 SUB168(auVar7 * ZEXT816(0x4385df649fccf645),8) + *puStack_140 * 0x2360ed051fc65da4;
        puStack_140[1] = uVar23;
        uVar24 = uVar23 ^ uVar13;
        bVar17 = (byte)(uVar23 >> 0x3a);
        *puStack_140 = uVar13;
        uVar11 = (uint)(((float)(((uint)(uVar24 >> bVar17) | (uint)(uVar24 << 0x40 - bVar17)) >> 9 |
                                0x3f800000) + _DAT_142e36f34) * _DAT_142e37838 + _DAT_142e36f50) ^
                 _DAT_142e37820;
        *(undefined4 *)plStack_100 = uStack_f8;
        puVar20[3] = uVar11;
        fVar32 = (float)puVar20[4];
        fVar28 = _DAT_142e3788c;
        uStack_f1 = bVar27;
        if (bVar26) {
          fVar28 = fVar9;
        }
LAB_14226ecc1:
                    /* WARNING: Could not recover jumptable at 0x00014226ecf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_1434c8a90 + *(int *)(&UNK_1434c8a90 + (ulonglong)*puVar20 * 4)))
                  (&UNK_1434c8a90,fVar28,-(uint)(0.0 < fVar32) & (uint)_DAT_142e37adc);
        return;
      }
      if (puStack_260 != puStack_258) {
        puVar20 = puStack_260;
        do {
          if (*(longlong *)(*(longlong *)(lStack_158 + 0x1a0) + 0x10 + (ulonglong)*puVar20 * 0x48)
              != 0) {
            lVar21 = *(longlong *)(lStack_158 + 0x1a0) + (ulonglong)*puVar20 * 0x48;
            uVar13 = *(ulonglong *)(lVar21 + 0x40);
            if ((*(ulonglong *)(lStack_108 + 0x110) < uVar13) &&
               (uVar23 = *(ulonglong *)
                          (*(longlong *)(lVar21 + 0x38) + *(ulonglong *)(lStack_108 + 0x110) * 8),
               uVar23 != 0)) {
              lStack_120 = *(longlong *)(*(longlong *)(lVar21 + 0x18) + 0x10 + ~uVar23 * 0x30);
            }
            else {
              lStack_120 = 0;
            }
            lVar12 = *(longlong *)(lVar21 + 0x38);
            if (*(ulonglong *)(lStack_108 + 0x118) < uVar13) {
              uVar23 = *(ulonglong *)(lVar12 + *(ulonglong *)(lStack_108 + 0x118) * 8);
              lVar21 = *(longlong *)(lVar21 + 0x18);
              if (uVar23 == 0) goto LAB_14226e76c;
              lStack_118 = *(longlong *)(lVar21 + 0x10 + ~uVar23 * 0x30);
              uVar23 = *(ulonglong *)(lStack_108 + 0x130);
              if (uVar23 < uVar13) goto LAB_14226e78a;
LAB_14226e7ac:
              uStack_110 = 0;
            }
            else {
              lVar21 = *(longlong *)(lVar21 + 0x18);
LAB_14226e76c:
              lStack_118 = 0;
              uVar23 = *(ulonglong *)(lStack_108 + 0x130);
              if (uVar13 <= uVar23) goto LAB_14226e7ac;
LAB_14226e78a:
              uVar13 = *(ulonglong *)(lVar12 + uVar23 * 8);
              if (uVar13 == 0) goto LAB_14226e7ac;
              uStack_110 = *(undefined8 *)(lVar21 + 0x10 + ~uVar13 * 0x30);
            }
            lVar12 = ~*(ulonglong *)(lVar12 + *(longlong *)(lStack_108 + 0x120) * 8) * 0x30;
            lStack_150 = *(longlong *)(lVar21 + 0x10 + lVar12);
            lStack_148 = *(longlong *)(lVar21 + 0x28 + lVar12);
            uVar13 = 0;
            uStack_138 = uVar13;
            goto LAB_14226e8b4;
          }
          puVar20 = puVar20 + 1;
        } while (puVar20 != puStack_258);
      }
    }
    if (lStack_190 != 0) {
      pub_1406abac0(pbStack_188,lStack_190 << 3,4);
    }
    if (lStack_178 == 0) {
      return;
    }
    plVar14 = (longlong *)pdb_140e97000();
    if ((char)plVar14[0xd] != '\x01') goto LAB_14226f082;
    do {
      if (*plVar14 == 0) {
        *plVar14 = -1;
        pbStack_130 = (byte *)plVar14;
        pdb_140e95370(plVar14 + 1,uStack_170);
        *(longlong *)pbStack_130 = *(longlong *)pbStack_130 + 1;
        return;
      }
LAB_14226f076:
      plVar14 = (longlong *)pdb_142dc8090(&UNK_1436007f8);
LAB_14226f082:
      plVar14 = (longlong *)pdb_142e2d6a0(plVar14,0);
    } while (plVar14 != (longlong *)0x0);
  }
  else {
    lVar21 = 0x33;
    lVar12 = pdb_14226fc20(0x33);
    puVar19 = &UNK_1434c89a8;
    if (lVar12 == 1) {
      if ((undefined8 *)0x33 < puVar15) {
LAB_14226f0ef:
        pdb_142dc8070(&UNK_1434c89a8,0x33,0);
LAB_14226f10f:
        pdb_142dc8070(&UNK_1434c89a8,0x33);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar13 = pdb_14226fc20(puVar15);
      if ((uVar13 & 1) != 0) {
        if (0x33 < (longlong)puVar15 + 2U) goto LAB_14226f10f;
        lVar21 = 0x31 - (longlong)puVar15;
        puVar19 = &UNK_1434c89aa + (longlong)puVar15;
      }
    }
    puVar22 = &UNK_1434c8930;
    puVar25 = &UNK_1434c8908;
    do {
      bVar17 = puVar22[-1];
      uVar11 = (uint)(char)bVar17;
      pbStack_130 = param_4;
      if ((char)bVar17 < '\0') {
        bVar4 = puVar22[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar22[-3];
          if ((char)bVar5 < -0x40) {
            pbVar1 = puVar22 + -4;
            puVar22 = puVar22 + -4;
            uVar11 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar22 = puVar22 + -3;
            uVar11 = bVar5 & 0xf;
          }
          uVar11 = bVar4 & 0x3f | uVar11 << 6;
        }
        else {
          puVar22 = puVar22 + -2;
          uVar11 = bVar4 & 0x1f;
        }
        uVar11 = (uint)(bVar17 & 0x3f) | uVar11 << 6;
        if (uVar11 != 0x5c) goto LAB_14226e1d4;
LAB_14226e1f0:
        puVar25 = puVar22 + -0x1434c8907;
        if ((undefined *)0x28 < puVar25) {
          pdb_142dc8070(&UNK_1434c8908,0x28,puVar25,0x28,&UNK_1434c8a40);
          goto LAB_14226f0ef;
        }
        lVar12 = 0x28 - (longlong)puVar25;
        puVar25 = puVar22 + 1;
        goto LAB_14226e216;
      }
      puVar22 = puVar22 + -1;
      if (uVar11 == 0x5c) goto LAB_14226e1f0;
LAB_14226e1d4:
      if (uVar11 == 0x2f) goto LAB_14226e1f0;
    } while (puVar22 != &UNK_1434c8908);
    lVar12 = 0x28;
LAB_14226e216:
    plVar14 = (longlong *)pdb_140e97000();
    if (((char)plVar14[0xd] == '\x01') ||
       (plVar14 = (longlong *)pdb_142e2d6a0(plVar14,0), plVar14 != (longlong *)0x0)) {
      if (*plVar14 != 0) goto LAB_14226f076;
      *plVar14 = -1;
      plStack_100 = plVar14;
      uStack_170 = pdb_140e94f10(plVar14 + 1,puVar19,lVar21,puVar25,lVar12,1,0);
      uVar33 = (undefined4)((ulonglong)lVar12 >> 0x20);
      *plStack_100 = *plStack_100 + 1;
      lVar21 = 1;
      param_4 = pbStack_130;
      goto LAB_14226e287;
    }
  }
  pdb_142dc7890(&UNK_143600788);
LAB_14226f0b6:
  lStack_128 = lVar21;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1434c8930);
}

