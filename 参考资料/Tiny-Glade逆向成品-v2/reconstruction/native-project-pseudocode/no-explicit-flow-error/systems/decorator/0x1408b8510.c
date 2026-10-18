// VA 0x1408b8510, PDB extent 4251 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_wooden_railings_assemble::assemble_wooden_railings
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_wooden_railings_assemble.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_wooden_railings_assemble::assemble_wooden_railings
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_wooden_railings_assemble.rs
   Extent: 4251 */

ulonglong pdb_1408b8510(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                       undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,
                       undefined8 param_8,ushort param_9,byte param_10,char param_11,
                       undefined8 param_12,byte param_13,byte param_14,int *param_15,
                       longlong param_16,byte *param_17,undefined8 param_18,undefined8 *param_19)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  byte *pbVar18;
  undefined8 uVar19;
  float fVar20;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  longlong lStack_248;
  longlong lStack_240;
  byte *pbStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  longlong lStack_210;
  longlong lStack_208;
  longlong *plStack_200;
  undefined8 uStack_1f8;
  undefined4 auStack_1f0 [2];
  undefined8 *puStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  byte *pbStack_1d8;
  undefined8 *puStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  longlong lStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  byte *apbStack_188 [2];
  byte *pbStack_178;
  byte *pbStack_170;
  ulonglong uStack_168;
  byte **ppbStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 *puStack_f0;
  undefined4 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  ulonglong *puStack_c8;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  longlong lStack_a8;
  undefined8 *puStack_a0;
  ulonglong uStack_98;
  byte *pbStack_90;
  ulonglong uStack_88;
  byte *pbStack_80;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uVar8 = _DAT_142e36f50;
  uStack_70 = 0xfffffffffffffffe;
  uVar11 = (ulonglong)(param_10 < 2);
  if ((undefined8 *)0x1 < param_7 && param_10 >= 2) {
    uStack_158 = param_7;
    puStack_228 = param_19;
    if (param_7 != param_19) {
      pdb_142dc7fb4(0,&uStack_158,&puStack_228,0);
LAB_1408b9076:
      uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143015b48);
    }
    if (*param_15 == 1) {
      fVar20 = _DAT_142e3c608 - (float)param_15[1];
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      uVar11 = (ulonglong)(uint)fVar20;
    }
    else {
      uVar11 = 0;
    }
    if (param_15[2] == 1) {
      fVar20 = _DAT_142e3c608 - (float)param_15[3];
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      uVar11 = uVar11 | (ulonglong)(uint)fVar20 << 0x20;
    }
    uStack_b4 = (undefined4)uVar11;
    uStack_b8 = (undefined4)(uVar11 >> 0x20);
    lStack_1b8 = -0x8000000000000000;
    lStack_1a0 = -0x8000000000000000;
    apbStack_188[0] = (byte *)0x0;
    pbStack_178 = (byte *)0x0;
    plStack_200 = param_1;
    if (param_17 != (byte *)0x0) {
      lVar17 = 0;
      pbVar18 = (byte *)0x0;
      do {
        uVar11 = *(ulonglong *)(param_16 + lVar17);
        if (1 < uVar11) {
          uStack_73 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar11,2,&UNK_143015c20);
        }
        apbStack_188[uVar11 * 2] = (byte *)0x1;
        apbStack_188[uVar11 * 2 + 1] = pbVar18;
        pbVar18 = pbVar18 + 1;
        lVar17 = lVar17 + 0x48;
      } while ((longlong)param_17 * 0x48 != lVar17);
    }
    uVar4 = *(undefined4 *)(&UNK_143015920 + (ulonglong)(param_11 == '\x04') * 4);
    uStack_ac = (uint)CONCAT11(pbStack_178 != (byte *)0x0,apbStack_188[0] != (byte *)0x0);
    lStack_210 = (longlong)param_2 + (longlong)param_3 * 4;
    if (param_7 <= param_3) {
      param_3 = param_7;
    }
    lStack_208 = param_4 + (longlong)param_5 * 8;
    puStack_218 = param_5;
    if (param_3 <= param_5) {
      puStack_218 = param_3;
    }
    uStack_b0 = (uint)apbStack_188[0] ^ 1;
    if ((param_9 & 1) == 0) {
      uStack_b0 = 0;
    }
    uStack_b0 = uStack_b0 | (uint)(pbStack_178 == (byte *)0x0) << 8 & (uint)param_9;
    ppbStack_160 = apbStack_188;
    puStack_a0 = param_7;
    uVar11 = 0;
    pbVar18 = apbStack_188[0];
    puStack_220 = param_2;
    uStack_168 = (ulonglong)pbStack_178;
    lStack_a8 = param_4;
    pbStack_90 = apbStack_188[0];
    uStack_88 = (ulonglong)pbStack_178;
    while ((puVar15 = puStack_a0, uVar11 < 2 &&
           ((uVar1 = uVar11 + 1, uVar16 = uVar1, uStack_98 = uVar11,
            (byte)(uVar11 == 1 & param_14 | uVar11 == 0 & param_13) != 1 ||
            ((uVar11 == 0 && (uVar16 = 2, uStack_98 = uVar1, param_14 == 0))))))) {
      uStack_158 = param_6;
      uStack_148 = puStack_220;
      uStack_140 = (undefined8 *)lStack_210;
      uStack_138 = (byte *)0x0;
      uStack_120 = lStack_208;
      uStack_118 = 0;
      puStack_110 = puStack_218;
      uStack_108 = 0;
      uStack_100 = param_6;
      puStack_f0 = &uStack_b4;
      puStack_e8 = &uStack_b8;
      uStack_e0 = param_18;
      uStack_d0 = param_8;
      puStack_c8 = &uStack_98;
      uStack_73 = 1;
      uStack_150 = (byte *)((longlong)param_6 + (longlong)param_7 * 0xc);
      uStack_130 = param_3;
      lStack_128 = param_4;
      uStack_f8 = puStack_a0;
      puStack_d8 = puStack_a0;
      pdb_14149a6f0(&lStack_240,&uStack_158);
      puVar9 = puStack_230;
      pbStack_80 = pbStack_238;
      puVar15 = (undefined8 *)((longlong)puStack_230 - 1);
      if (1 < uStack_98) {
        if (((ulonglong)pbVar18 & 1) == 0) {
          if (uStack_88 != 1) {
            uVar11 = 0;
            pbVar18 = (byte *)0x0;
            goto LAB_1408b8a69;
          }
          ppbStack_160 = apbStack_188 + 2;
        }
        else {
          puVar15 = (undefined8 *)0x0;
        }
        pbVar12 = ppbStack_160[1];
        if (pbVar12 < param_17) {
          if (puVar15 < param_7) {
            if (puVar15 < puStack_230) {
              uStack_72 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uStack_98,2,&UNK_1430150c0);
            }
LAB_1408b9179:
            uStack_72 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(puVar15,puStack_230,&UNK_143015c08);
          }
LAB_1408b9157:
          uStack_72 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(puVar15,puStack_a0,&UNK_143015bf0);
        }
LAB_1408b9134:
        uStack_72 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pbVar12,param_17,&UNK_143015bd8);
      }
      if (((ulonglong)pbStack_90 & 1) != 0) {
        pbVar12 = apbStack_188[1];
        if (param_17 <= apbStack_188[1]) goto LAB_1408b9134;
        if (puStack_230 == (undefined8 *)0x0) {
          puVar15 = (undefined8 *)0x0;
          goto LAB_1408b9179;
        }
        lVar17 = (longlong)apbStack_188[1] * 0x48 + param_16;
        fVar20 = *(float *)(param_16 + 0x30 + (longlong)apbStack_188[1] * 0x48);
        fVar5 = *(float *)(param_6 + 1);
        fVar6 = *(float *)(pbStack_238 + 8);
        uVar19 = *(undefined8 *)(param_16 + 0x28 + (longlong)apbStack_188[1] * 0x48);
        *(ulonglong *)(lVar17 + 0x10 + uStack_98 * 0xc) =
             CONCAT44(((float)((ulonglong)uVar19 >> 0x20) - (float)((ulonglong)*param_6 >> 0x20)) +
                      (float)((ulonglong)*(undefined8 *)pbStack_238 >> 0x20),
                      ((float)uVar19 - (float)*param_6) + (float)*(undefined8 *)pbStack_238);
        *(float *)(lVar17 + 0x18 + uStack_98 * 0xc) = (fVar20 - fVar5) + fVar6;
      }
      pbVar18 = pbStack_90;
      if ((uStack_168 & 1) == 0) {
        uVar11 = 0;
      }
      else {
        pbVar12 = pbStack_170;
        if (param_17 <= pbStack_170) goto LAB_1408b9134;
        if (param_7 <= puVar15) goto LAB_1408b9157;
        lVar17 = param_16 + (longlong)pbStack_170 * 0x48;
        fVar20 = *(float *)(param_16 + 0x30 + (longlong)pbStack_170 * 0x48);
        lVar14 = (longlong)puVar15 * 0xc;
        fVar5 = *(float *)((longlong)param_6 + lVar14 + 8);
        fVar6 = *(float *)(pbStack_238 + lVar14 + 8);
        uVar19 = *(undefined8 *)(param_16 + 0x28 + (longlong)pbStack_170 * 0x48);
        *(ulonglong *)(lVar17 + 0x10 + uStack_98 * 0xc) =
             CONCAT44(((float)((ulonglong)uVar19 >> 0x20) -
                      (float)((ulonglong)*(undefined8 *)((longlong)param_6 + lVar14) >> 0x20)) +
                      (float)((ulonglong)*(undefined8 *)(pbStack_238 + lVar14) >> 0x20),
                      ((float)uVar19 - (float)*(undefined8 *)((longlong)param_6 + lVar14)) +
                      (float)*(undefined8 *)(pbStack_238 + lVar14));
        *(float *)(lVar17 + 0x18 + uStack_98 * 0xc) = (fVar20 - fVar5) + fVar6;
        uVar11 = 1;
      }
LAB_1408b8a69:
      uVar1 = (longlong)puStack_230 * 0xc;
      if ((undefined8 *)0xaaaaaaaaaaaaaaa < puStack_230) {
        uVar19 = 0;
LAB_1408b8ed4:
        uStack_72 = 1;
        pdb_142dc7e2a(uVar19,uVar1);
        goto LAB_1408b929b;
      }
      uStack_88 = uVar11;
      if (uVar1 == 0) {
        pbVar12 = (byte *)0x4;
        puVar15 = (undefined8 *)0x0;
      }
      else {
        pdb_14007ee60();
        uVar19 = 4;
        pbVar12 = pub_1406abab0(uVar1,4);
        puVar15 = puVar9;
        if (pbVar12 == (byte *)0x0) goto LAB_1408b8ed4;
      }
      uStack_148 = (undefined8 *)0x0;
      uStack_158 = puVar15;
      uStack_150 = pbVar12;
      if (puVar9 != (undefined8 *)0x0) {
        pub_142e32760(pbVar12,pbStack_80,uVar1);
        uStack_148 = puVar9;
      }
      uStack_72 = 1;
      pdb_140080930(&uStack_1f8,&uStack_158,0);
      uVar11 = uVar16;
      if (SBORROW8(0,CONCAT44(uStack_1f8._4_4_,(undefined4)uStack_1f8))) {
LAB_1408b8bb5:
        param_4 = lStack_a8;
        if (lStack_240 != 0) {
          pub_1406abac0(pbStack_80,lStack_240 * 0xc,4);
          param_4 = lStack_a8;
        }
      }
      else {
        lStack_128 = lStack_1c8;
        uStack_138 = pbStack_1d8;
        uStack_130 = puStack_1d0;
        uStack_148 = puStack_1e8;
        uStack_140 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
        uStack_158 = (undefined8 *)CONCAT44(uStack_1f8._4_4_,(undefined4)uStack_1f8);
        uStack_150 = (byte *)CONCAT44(auStack_1f0[1],auStack_1f0[0]);
        pdb_14148ba90(&uStack_278,&uStack_158,uVar8,1);
        if (uStack_158 != (undefined8 *)0x0) {
          pub_1406abac0(uStack_150,(longlong)uStack_158 * 0xc,4);
        }
        if (uStack_140 != (undefined8 *)0x0) {
          pub_1406abac0(uStack_138,(longlong)uStack_140 << 2,4);
        }
        if (SBORROW8(0,CONCAT44(uStack_274,uStack_278))) goto LAB_1408b8bb5;
        lStack_128 = lStack_248;
        uStack_138 = (byte *)CONCAT44(uStack_254,uStack_258);
        uStack_130 = (undefined8 *)CONCAT44(uStack_24c,uStack_250);
        uStack_148 = (undefined8 *)CONCAT44(uStack_264,uStack_268);
        puVar15 = uStack_148;
        uStack_140 = (undefined8 *)CONCAT44(uStack_25c,uStack_260);
        uStack_158 = (undefined8 *)CONCAT44(uStack_274,uStack_278);
        uStack_150 = (byte *)CONCAT44(uStack_26c,uStack_270);
        pbVar18 = uStack_150;
        uStack_71 = 1;
        pdb_140c9ac70(uStack_150,uStack_148,uStack_b0);
        uVar1 = uStack_168;
        if (((ulonglong)pbStack_90 & 1) != 0) {
          if (param_17 <= apbStack_188[1]) {
            uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(apbStack_188[1],param_17,&UNK_143015b00);
          }
          puStack_1e8 = *(undefined8 **)(param_16 + 0x20 + (longlong)apbStack_188[1] * 0x48);
          puVar2 = (undefined4 *)(param_16 + 0x10 + (longlong)apbStack_188[1] * 0x48);
          uStack_1f8._0_4_ = *puVar2;
          uStack_1f8._4_4_ = puVar2[1];
          auStack_1f0[0] = puVar2[2];
          auStack_1f0[1] = puVar2[3];
          if (1 < uStack_98) {
            uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uStack_98,2,&UNK_143015b00);
          }
          if (puVar15 == (undefined8 *)0x0) {
            uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(0,0,&UNK_143015b18);
          }
          *(undefined4 *)(pbVar18 + 8) = auStack_1f0[uStack_98 * 3];
          *(undefined8 *)pbVar18 = *(undefined8 *)((longlong)&uStack_1f8 + uStack_98 * 0xc);
        }
        if ((uStack_168 & 1) != 0) {
          if (param_17 <= pbStack_170) {
            uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pbStack_170,param_17,&UNK_143015b30);
          }
          puStack_1e8 = *(undefined8 **)(param_16 + 0x20 + (longlong)pbStack_170 * 0x48);
          puVar2 = (undefined4 *)(param_16 + 0x10 + (longlong)pbStack_170 * 0x48);
          uStack_1f8._0_4_ = *puVar2;
          uStack_1f8._4_4_ = puVar2[1];
          auStack_1f0[0] = puVar2[2];
          auStack_1f0[1] = puVar2[3];
          if (1 < uStack_98) {
            uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uStack_98,2,&UNK_143015b30);
          }
          if ((puVar15 == (undefined8 *)0x0) ||
             (pbVar18 + (longlong)puVar15 * 0xc + -0xc == (byte *)0x0)) goto LAB_1408b9076;
          *(undefined4 *)(pbVar18 + (longlong)puVar15 * 0xc + -4) = auStack_1f0[uStack_98 * 3];
          *(undefined8 *)(pbVar18 + (longlong)puVar15 * 0xc + -0xc) =
               *(undefined8 *)((longlong)&uStack_1f8 + uStack_98 * 0xc);
        }
        if ((param_9 & 1) != 0) {
          if (puVar15 == (undefined8 *)0x0) {
            uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(0,0,&UNK_143015b60);
          }
          if (puVar9 == (undefined8 *)0x0) {
            uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(0,0,&UNK_143015b78);
          }
          uVar19 = *(undefined8 *)pbVar18;
          *(undefined4 *)(pbStack_80 + 8) = *(undefined4 *)(pbVar18 + 8);
          *(undefined8 *)pbStack_80 = uVar19;
        }
        if ((param_9 & 0x100) != 0) {
          if ((puVar15 == (undefined8 *)0x0) ||
             (pbVar18 + (longlong)puVar15 * 0xc + -0xc == (byte *)0x0)) {
            uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143015b90);
          }
          if ((puVar9 == (undefined8 *)0x0) ||
             (pbStack_80 + (longlong)puVar9 * 0xc + -0xc == (byte *)0x0)) {
            uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143015ba8);
          }
          uVar19 = *(undefined8 *)(pbVar18 + (longlong)puVar15 * 0xc + -0xc);
          *(undefined4 *)(pbStack_80 + (longlong)puVar9 * 0xc + -4) =
               *(undefined4 *)(pbVar18 + (longlong)puVar15 * 0xc + -4);
          *(undefined8 *)(pbStack_80 + (longlong)puVar9 * 0xc + -0xc) = uVar19;
        }
        uStack_88 = lStack_240;
        if (1 < uStack_98) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uStack_98,2,&UNK_143015bc0);
        }
        if (0 < (&lStack_1b8)[uStack_98 * 3]) {
          pub_1406abac0(*(byte **)(&uStack_1b0 + uStack_98 * 6),(&lStack_1b8)[uStack_98 * 3] * 0xc,4
                       );
        }
        uVar16 = uStack_98;
        (&lStack_1b8)[uStack_98 * 3] = uStack_88;
        *(byte **)(&uStack_1b0 + uVar16 * 6) = pbStack_80;
        *(undefined8 **)(&uStack_1a8 + uVar16 * 6) = puVar9;
        if (uStack_158 != (undefined8 *)0x0) {
          pub_1406abac0(pbVar18,(longlong)uStack_158 * 0xc,4);
        }
        param_4 = lStack_a8;
        if (uStack_140 != (undefined8 *)0x0) {
          pub_1406abac0(uStack_138,(longlong)uStack_140 << 2,4);
        }
        uStack_88 = uVar1;
        pbVar18 = pbStack_90;
      }
    }
    if ((!SBORROW8(0,lStack_1b8)) || (uVar11 = -lStack_1a0, !SBORROW8(0,lStack_1a0))) {
      uVar11 = (longlong)param_7 * 4;
      pbVar18 = (byte *)((longlong)param_7 * 0xc);
      pdb_14007ee60();
      pbVar12 = pub_1406abab0((ulonglong)pbVar18,4);
      if (pbVar12 == (byte *)0x0) {
        uStack_73 = 1;
        pdb_142dc7e2a(4,pbVar18);
      }
      else {
        pub_142e32760(pbVar12,param_6,pbVar18);
        pdb_14007ee60();
        pbVar13 = pub_1406abab0(uVar11,4);
        plVar10 = plStack_200;
        if (pbVar13 != (byte *)0x0) {
          pub_142e32760(pbVar13,param_18,uVar11);
          uStack_108 = CONCAT44(uStack_194,uStack_198);
          uStack_100 = (undefined8 *)CONCAT44(uStack_18c,uStack_190);
          uStack_118 = CONCAT44(uStack_1a4,uStack_1a8);
          puStack_110 = (undefined8 *)lStack_1a0;
          lStack_128 = lStack_1b8;
          uStack_120 = CONCAT44(uStack_1ac,uStack_1b0);
          uStack_f8._0_6_ = CONCAT24((short)uStack_ac,uVar4);
          lVar17 = plVar10[2];
          uStack_158 = puVar15;
          uStack_150 = pbVar12;
          uStack_148 = puVar15;
          uStack_140 = puVar15;
          uStack_138 = pbVar13;
          uStack_130 = puVar15;
          if (lVar17 == *plVar10) {
            pdb_142d8d8d0(plVar10);
          }
          uVar11 = plVar10[1];
          lVar14 = lVar17 * 0x68;
          *(undefined8 **)(uVar11 + 0x60 + lVar14) = uStack_f8;
          puVar15 = (undefined8 *)(uVar11 + 0x50 + lVar14);
          *puVar15 = uStack_108;
          puVar15[1] = uStack_100;
          puVar15 = (undefined8 *)(uVar11 + 0x40 + lVar14);
          *puVar15 = uStack_118;
          puVar15[1] = puStack_110;
          plVar3 = (longlong *)(uVar11 + 0x30 + lVar14);
          *plVar3 = lStack_128;
          plVar3[1] = uStack_120;
          puVar15 = (undefined8 *)(uVar11 + 0x20 + lVar14);
          *puVar15 = uStack_138;
          puVar15[1] = uStack_130;
          puVar15 = (undefined8 *)(uVar11 + 0x10 + lVar14);
          *puVar15 = uStack_148;
          puVar15[1] = uStack_140;
          *(undefined8 *)(uVar11 + lVar14) = uStack_158;
          ((undefined8 *)(uVar11 + lVar14))[1] = uStack_150;
          plVar10[2] = lVar17 + 1;
          return uVar11;
        }
        pbStack_90 = pbVar12;
        pbStack_80 = pbVar18;
        pdb_142dc7e2a(4,uVar11);
      }
LAB_1408b929b:
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
  }
  return uVar11;
}

