// VA 0x1408afac0, PDB extent 4150 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_assemble_wood_misc::assemble_stringers
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_assemble_wood_misc.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_assemble_wood_misc::assemble_stringers
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_assemble_wood_misc.rs
   Extent: 4150 */

void pdb_1408afac0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  byte *******param_5,ulonglong param_6,longlong param_7,ulonglong param_8,
                  byte *******param_9,ulonglong param_10,byte param_11,byte param_12,int *param_13,
                  ushort param_14)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  byte ******ppppppbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte *******pppppppbVar7;
  byte *******pppppppbVar8;
  byte *******pppppppbVar9;
  ulonglong uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  byte ******ppppppbVar15;
  undefined8 uVar16;
  longlong lVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  longlong lStack_270;
  byte *******pppppppbStack_268;
  ulonglong uStack_260;
  ulonglong uStack_258;
  byte *******pppppppbStack_250;
  longlong lStack_248;
  longlong lStack_240;
  ulonglong uStack_238;
  byte *******pppppppbStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  byte *******pppppppbStack_218;
  byte *******pppppppbStack_210;
  byte *******pppppppbStack_208;
  longlong lStack_200;
  undefined8 uStack_1f8;
  ulonglong uStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  undefined8 uStack_1d8;
  ulonglong uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 *puStack_1c0;
  byte *******pppppppbStack_1b8;
  byte *******pppppppbStack_1b0;
  byte *******pppppppbStack_1a8;
  byte ******ppppppbStack_1a0;
  byte *******pppppppbStack_190;
  byte *******pppppppbStack_188;
  byte *******pppppppbStack_180;
  ulonglong uStack_178;
  byte ******ppppppbStack_170;
  longlong lStack_168;
  byte ******ppppppbStack_160;
  undefined4 uStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  byte *******pppppppbStack_140;
  byte ******ppppppbStack_138;
  byte *******pppppppbStack_130;
  byte ******ppppppbStack_128;
  byte *******pppppppbStack_120;
  byte *******pppppppbStack_118;
  byte *******pppppppbStack_110;
  ulonglong uStack_108;
  byte *******pppppppbStack_100;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  if (1 < param_10) {
    if (*param_13 == 1) {
      fVar19 = _DAT_142e3c608 - (float)param_13[1];
      if (_DAT_142e3c608 - (float)param_13[1] <= 0.0) {
        fVar19 = 0.0;
      }
      ppppppbVar15 = (byte ******)(ulonglong)(uint)fVar19;
    }
    else {
      ppppppbVar15 = (byte ******)0x0;
    }
    if (param_13[2] == 1) {
      fVar19 = _DAT_142e3c608 - (float)param_13[3];
      if (_DAT_142e3c608 - (float)param_13[3] <= 0.0) {
        fVar19 = 0.0;
      }
      ppppppbVar15 = (byte ******)((ulonglong)ppppppbVar15 | (ulonglong)(uint)fVar19 << 0x20);
    }
    ppppppbStack_170 = (byte ******)0x0;
    lStack_168 = 8;
    ppppppbStack_160 = (byte ******)0x0;
    fStack_150 = _DAT_142e36f28 / (float)(longlong)(param_10 - 1);
    pppppppbStack_250 = (byte *******)((longlong)param_9 + param_10 * 0xc);
    lStack_248 = (longlong)param_5 + param_6 * 4;
    lStack_240 = param_7 + param_8 * 8;
    if (param_6 < param_10) {
      param_10 = param_6;
    }
    uStack_258 = param_8;
    if (param_10 <= param_8) {
      uStack_258 = param_10;
    }
    pppppppbVar7 = (byte *******)0x0;
    uStack_220 = param_1;
    uStack_14c = param_3;
    uStack_148 = param_2;
    uStack_144 = param_4;
    while ((pppppppbVar7 < (byte *******)0x2 &&
           ((pppppppbVar8 = (byte *******)((longlong)pppppppbVar7 + 1),
            (byte)(pppppppbVar7 == (byte *******)0x1 & param_12 |
                  pppppppbVar7 == (byte *******)0x0 & param_11) != 1 ||
            ((pppppppbVar7 == (byte *******)0x0 &&
             (pppppppbStack_130 = (byte *******)0x2,
             pppppppbVar7 = (byte *******)((longlong)pppppppbVar7 + 1),
             pppppppbVar8 = pppppppbStack_130, param_12 == 0))))))) {
      pppppppbStack_130 = pppppppbVar8;
      uStack_154 = 0x3e99999a;
      ppppppbStack_138 = (byte ******)CONCAT44(ppppppbStack_138._4_4_,0xbe6147ad);
      pppppppbStack_140 = (byte *******)CONCAT44(pppppppbStack_140._4_4_,fStack_150);
      pppppppbStack_218 = param_9;
      pppppppbStack_210 = pppppppbStack_250;
      pppppppbStack_208 = param_5;
      lStack_200 = lStack_248;
      uStack_1f8 = 0;
      lStack_1e8 = param_7;
      lStack_1e0 = lStack_240;
      uStack_1d8 = 0;
      uStack_1d0 = uStack_258;
      uStack_1c8 = 0;
      puStack_1c0 = &uStack_154;
      pppppppbStack_1b8 = (byte *******)&pppppppbStack_118;
      pppppppbStack_1b0 = (byte *******)&pppppppbStack_140;
      pppppppbStack_1a8 = (byte *******)&pppppppbStack_188;
      ppppppbStack_1a0 = (byte ******)&ppppppbStack_138;
      uStack_f1 = 1;
      uStack_1f0 = param_10;
      pppppppbStack_188 = pppppppbVar7;
      pppppppbStack_118 = (byte *******)ppppppbVar15;
      pdb_14149a300(&lStack_270,&pppppppbStack_218);
      uVar6 = uStack_260;
      pppppppbVar7 = pppppppbStack_268;
      if (1 < uStack_260) {
        fVar19 = *(float *)((longlong)pppppppbStack_268 + uStack_260 * 0xc + -0x10) * _DAT_142e37ae4
        ;
        uVar16 = *(undefined8 *)((longlong)pppppppbStack_268 + uStack_260 * 0xc + -0x18);
        uVar2 = *(undefined8 *)((longlong)pppppppbStack_268 + uStack_260 * 0xc + -0xc);
        fVar20 = (float)uVar16 * _DAT_142f6e3e0;
        fVar21 = (float)((ulonglong)uVar16 >> 0x20) * _UNK_142f6e3e4;
        fVar22 = (float)uVar2 * _DAT_143015120;
        fVar24 = (float)((ulonglong)uVar2 >> 0x20) * _UNK_143015124;
        fVar25 = *(float *)((longlong)pppppppbStack_268 + uStack_260 * 0xc + -4) * _DAT_142f95160;
        if ((param_14 & 1) == 0) {
          if ((param_14 & 0x100) != 0) goto LAB_1408aff75;
LAB_1408afeb1:
          if (0x555555555555555 < uStack_260) goto LAB_1408b05c5;
LAB_1408aff99:
          pppppppbVar8 = (byte *******)(uStack_260 * 0x18);
          ppppppbStack_128 = ppppppbVar15;
          pdb_14007ee60();
          uVar16 = 4;
          pppppppbVar9 = (byte *******)pub_1406abab0((ulonglong)pppppppbVar8,4);
          if (pppppppbVar9 != (byte *******)0x0) {
            pppppppbStack_100 = pppppppbVar7;
            puStack_228 = (undefined8 *)((longlong)pppppppbVar7 + uVar6 * 0xc + -0xc);
            pppppppbStack_218 = (byte *******)(uVar6 * 2);
            pppppppbStack_208 = (byte *******)0x0;
            uVar1 = uVar6 - 1;
            uVar5 = 0;
            pppppppbStack_230 = pppppppbVar9;
            pppppppbStack_210 = pppppppbVar9;
            while (uVar18 = uVar5, pppppppbVar8 = pppppppbStack_208, uVar18 < uVar1) {
              uVar16 = *(undefined8 *)((longlong)pppppppbStack_100 + uVar18 * 0xc);
              fVar20 = (float)uVar16;
              fVar21 = (float)((ulonglong)uVar16 >> 0x20);
              fVar19 = *(float *)((longlong)pppppppbStack_100 + uVar18 * 0xc + 8);
              if (pppppppbStack_208 == pppppppbStack_218) {
                pdb_142db7820(&pppppppbStack_218);
              }
              *(undefined8 *)((longlong)pppppppbStack_210 + (longlong)pppppppbVar8 * 0xc) = uVar16;
              *(float *)((longlong)pppppppbStack_210 + (longlong)pppppppbVar8 * 0xc + 8) = fVar19;
              pppppppbVar7 = (byte *******)((longlong)pppppppbVar8 + 1);
              if (uVar18 == 0) {
                fVar24 = (float)*(undefined8 *)((longlong)pppppppbStack_100 + 0xc) - fVar20;
                fVar25 = (float)((ulonglong)*(undefined8 *)((longlong)pppppppbStack_100 + 0xc) >>
                                0x20) - fVar21;
                fVar22 = *(float *)((longlong)pppppppbStack_100 + 0x14) - fVar19;
              }
              else {
                uVar16 = *(undefined8 *)((longlong)pppppppbStack_100 + uVar18 * 0xc + -0xc);
                fVar24 = fVar20 - (float)uVar16;
                fVar25 = fVar21 - (float)((ulonglong)uVar16 >> 0x20);
                fVar22 = fVar19 - *(float *)((longlong)pppppppbStack_100 + uVar18 * 0xc + -4);
              }
              fVar23 = _DAT_142e36f28 / SQRT(fVar24 * fVar24 + fVar25 * fVar25 + fVar22 * fVar22);
              bVar11 = (int)fVar23 - 1U < 0x7fffff ||
                       (int)ABS(fVar23) - 0x800000U < 0x7f000000 && -1 < (int)fVar23;
              if (bVar11) {
                fVar22 = fVar22 * fVar23;
                if (uVar6 <= uVar18 + 2) goto LAB_1408b0189;
LAB_1408b01be:
                uVar16 = *(undefined8 *)((longlong)pppppppbStack_100 + (uVar18 + 2) * 0xc);
                uVar2 = *(undefined8 *)((longlong)pppppppbStack_100 + uVar18 * 0xc + 0xc);
                fVar31 = (float)uVar2;
                fVar32 = (float)((ulonglong)uVar2 >> 0x20);
                fVar29 = *(float *)((longlong)pppppppbStack_100 + uVar18 * 0xc + 0x14);
                fVar26 = (float)uVar16 - fVar31;
                fVar27 = (float)((ulonglong)uVar16 >> 0x20) - fVar32;
                fVar28 = *(float *)((longlong)pppppppbStack_100 + (uVar18 + 2) * 0xc + 8) - fVar29;
              }
              else {
                fVar22 = 0.0;
                if (uVar18 + 2 < uVar6) goto LAB_1408b01be;
LAB_1408b0189:
                uVar16 = *(undefined8 *)((longlong)pppppppbStack_100 + uVar18 * 0xc + 0xc);
                fVar31 = (float)uVar16;
                fVar32 = (float)((ulonglong)uVar16 >> 0x20);
                fVar29 = *(float *)((longlong)pppppppbStack_100 + uVar18 * 0xc + 0x14);
                fVar26 = fVar31 - fVar20;
                fVar27 = fVar32 - fVar21;
                fVar28 = fVar29 - fVar19;
              }
              fVar30 = _DAT_142e36f28 / SQRT(fVar28 * fVar28 + fVar27 * fVar27 + fVar26 * fVar26);
              bVar14 = (int)fVar30 - 1U < 0x7fffff ||
                       (int)ABS(fVar30) - 0x800000U < 0x7f000000 && -1 < (int)fVar30;
              if (bVar14) {
                fVar28 = fVar28 * fVar30;
              }
              else {
                fVar28 = 0.0;
              }
              uVar12 = (uint)bVar11;
              uVar13 = (uint)bVar14;
              uVar5 = uVar18 + 1;
              pppppppbStack_208 = pppppppbVar7;
              if ((float)((int)(uVar13 << 0x1f) >> 0x1f & (uint)(fVar27 * fVar30)) *
                  (float)((int)(uVar12 << 0x1f) >> 0x1f & (uint)(fVar25 * fVar23)) +
                  (float)((int)(uVar13 << 0x1f) >> 0x1f & (uint)(fVar26 * fVar30)) *
                  (float)((int)(uVar12 << 0x1f) >> 0x1f & (uint)(fVar24 * fVar23)) + fVar22 * fVar28
                  < _DAT_142f44734) {
                lVar17 = (uVar18 - 1) + (ulonglong)(uVar18 == 0);
                fVar22 = *(float *)((longlong)pppppppbStack_100 + lVar17 * 0xc + 8);
                uVar10 = uVar18 + 2;
                if (uVar1 < uVar18 + 2) {
                  uVar10 = uVar1;
                }
                fVar24 = *(float *)((longlong)pppppppbStack_100 + uVar10 * 0xc + 8);
                uVar16 = *(undefined8 *)((longlong)pppppppbStack_100 + lVar17 * 0xc);
                fVar26 = (float)uVar16;
                fVar27 = (float)((ulonglong)uVar16 >> 0x20);
                uVar16 = *(undefined8 *)((longlong)pppppppbStack_100 + uVar10 * 0xc);
                fVar25 = (float)uVar16;
                fVar23 = (float)((ulonglong)uVar16 >> 0x20);
                fVar33 = ((fVar29 * _DAT_142e37adc + fVar19 * _DAT_143006a20 + fVar22 + fVar22) -
                         fVar24) * _DAT_142e37ae4;
                fVar30 = (((fVar19 * _DAT_142e3788c - fVar22) - fVar29 * _DAT_142e3788c) + fVar24) *
                         _DAT_143015150;
                fVar24 = ((fVar26 + fVar26 + fVar20 * _DAT_143015140 + fVar31 * _DAT_1430067b0) -
                         fVar25) * _DAT_142f6e3e0;
                fVar28 = ((fVar27 + fVar27 + fVar21 * _UNK_143015144 + fVar32 * _UNK_1430067b4) -
                         fVar23) * _UNK_142f6e3e4;
                fVar25 = (((fVar20 * _DAT_1430067c0 - fVar26) - fVar31 * _DAT_1430067c0) + fVar25) *
                         _DAT_143015160;
                fVar23 = (((fVar21 * _UNK_1430067c4 - fVar27) - fVar32 * _UNK_1430067c4) + fVar23) *
                         _UNK_143015164;
                if (pppppppbVar7 == pppppppbStack_218) {
                  pdb_142db7820(&pppppppbStack_218);
                }
                fVar19 = (fVar30 + (fVar29 - fVar22) * _DAT_142e36f50 + fVar19 + fVar19 + fVar33) *
                         _DAT_142e36f50;
                *(ulonglong *)((longlong)pppppppbStack_210 + (longlong)pppppppbVar7 * 0xc) =
                     CONCAT44((fVar23 + (fVar32 - fVar27) * _UNK_142e36f64 + fVar21 + fVar21 +
                                        fVar28) * _UNK_142e36f64,
                              (fVar25 + (fVar31 - fVar26) * _DAT_142e36f60 + fVar20 + fVar20 +
                                        fVar24) * _DAT_142e36f60);
                *(float *)((longlong)pppppppbStack_210 + (longlong)pppppppbVar7 * 0xc + 8) = fVar19;
                pppppppbStack_208 = (byte *******)((longlong)pppppppbVar8 + 2);
              }
            }
            if (pppppppbStack_208 == pppppppbStack_218) {
              pdb_142db7820(&pppppppbStack_218);
            }
            *(undefined4 *)((longlong)pppppppbStack_210 + (longlong)pppppppbVar8 * 0xc + 8) =
                 *(undefined4 *)(puStack_228 + 1);
            *(undefined8 *)((longlong)pppppppbStack_210 + (longlong)pppppppbVar8 * 0xc) =
                 *puStack_228;
            uStack_108 = (longlong)pppppppbVar8 + 1;
            pppppppbStack_118 = pppppppbStack_218;
            pppppppbStack_110 = pppppppbStack_210;
            ppppppbStack_138 = (byte ******)0x1f;
            ppppppbVar15 = ppppppbStack_128;
            pppppppbVar7 = pppppppbStack_100;
            if (uStack_108 < 0x20) goto LAB_1408b045b;
            pppppppbStack_218 = &ppppppbStack_138;
            pppppppbStack_210 = (byte *******)&pppppppbStack_118;
            pppppppbStack_208 = (byte *******)&pppppppbStack_140;
            lStack_200 = 0;
            uStack_1f8 = 0x1f;
            pppppppbStack_140 = pppppppbVar8;
            pdb_14149a030(&pppppppbStack_188,&pppppppbStack_218);
            pppppppbVar7 = pppppppbStack_100;
            ppppppbVar15 = ppppppbStack_128;
            if (pppppppbStack_118 != (byte *******)0x0) {
              pub_1406abac0((byte *)pppppppbStack_110,(longlong)pppppppbStack_118 * 0xc,4);
              ppppppbVar15 = ppppppbStack_128;
            }
            goto LAB_1408b0485;
          }
        }
        else {
          fVar23 = *(float *)(pppppppbStack_268 + 1) * _DAT_142f95160;
          fVar29 = *(float *)((longlong)pppppppbStack_268 + 0x14) * _DAT_142e37ae4;
          *pppppppbStack_268 =
               (byte ******)
               CONCAT44((float)((ulonglong)*(undefined8 *)((longlong)pppppppbStack_268 + 0xc) >>
                               0x20) * _UNK_142f6e3e4 +
                        (float)((ulonglong)*pppppppbStack_268 >> 0x20) * _UNK_143015124,
                        (float)*(undefined8 *)((longlong)pppppppbStack_268 + 0xc) * _DAT_142f6e3e0 +
                        SUB84(*pppppppbStack_268,0) * _DAT_143015120);
          *(float *)(pppppppbStack_268 + 1) = fVar29 + fVar23;
          if ((param_14 & 0x100) == 0) goto LAB_1408afeb1;
LAB_1408aff75:
          *(float *)((longlong)pppppppbStack_268 + uStack_260 * 0xc + -0xc) = fVar20 + fVar22;
          *(float *)((longlong)pppppppbStack_268 + uStack_260 * 0xc + -8) = fVar21 + fVar24;
          *(float *)((longlong)pppppppbStack_268 + uStack_260 * 0xc + -4) = fVar19 + fVar25;
          if (uStack_260 < 0x555555555555556) goto LAB_1408aff99;
LAB_1408b05c5:
          uVar16 = 0;
          pppppppbVar8 = pppppppbStack_230;
        }
        pppppppbStack_120 = pppppppbVar7;
        pdb_142dc7e2a(uVar16,pppppppbVar8);
LAB_1408b063d:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uStack_260 == 0) {
        pppppppbStack_118 = (byte *******)0x0;
        pppppppbStack_110 = (byte *******)0x4;
        uStack_108 = 0;
      }
      else {
        pdb_14007ee60();
        pppppppbVar8 = (byte *******)pub_1406abab0(0xc,4);
        if (pppppppbVar8 == (byte *******)0x0) {
          pppppppbStack_120 = pppppppbVar7;
          pdb_142dc7e2a(4,0xc);
          goto LAB_1408b063d;
        }
        pppppppbStack_118 = (byte *******)0x1;
        *(undefined4 *)(pppppppbVar8 + 1) = *(undefined4 *)(pppppppbVar7 + 1);
        *pppppppbVar8 = *pppppppbVar7;
        uStack_108 = 1;
        pppppppbStack_110 = pppppppbVar8;
      }
LAB_1408b045b:
      uStack_178 = uStack_108;
      pppppppbStack_188 = pppppppbStack_118;
      pppppppbStack_180 = pppppppbStack_110;
LAB_1408b0485:
      pppppppbVar8 = pppppppbStack_188;
      uVar6 = uStack_178;
      pppppppbVar9 = pppppppbStack_180;
      if (uStack_178 < 2) {
        if (pppppppbStack_188 != (byte *******)0x0) {
          pub_1406abac0((byte *)pppppppbStack_180,(longlong)pppppppbStack_188 * 0xc,4);
        }
        pppppppbVar8 = (byte *******)0x8000000000000000;
        uVar6 = uStack_238;
        pppppppbVar9 = pppppppbStack_190;
      }
      pppppppbStack_190 = pppppppbVar9;
      uStack_238 = uVar6;
      if (lStack_270 != 0) {
        pub_1406abac0((byte *)pppppppbVar7,lStack_270 * 0xc,4);
      }
      ppppppbVar4 = ppppppbStack_160;
      pppppppbVar7 = pppppppbStack_130;
      if (!SBORROW8(0,(longlong)pppppppbVar8)) {
        pppppppbStack_100 = pppppppbVar8;
        if (ppppppbStack_160 == ppppppbStack_170) {
          pdb_142d7ede0(&ppppppbStack_170);
        }
        *(byte ********)(lStack_168 + (longlong)ppppppbVar4 * 0x28) = pppppppbStack_100;
        *(byte ********)(lStack_168 + 8 + (longlong)ppppppbVar4 * 0x28) = pppppppbStack_190;
        *(ulonglong *)(lStack_168 + 0x10 + (longlong)ppppppbVar4 * 0x28) = uStack_238;
        *(undefined8 *)(lStack_168 + 0x18 + (longlong)ppppppbVar4 * 0x28) = _DAT_143015130;
        *(undefined4 *)(lStack_168 + 0x20 + (longlong)ppppppbVar4 * 0x28) = 0x3d4ccccd;
        *(undefined1 *)(lStack_168 + 0x24 + (longlong)ppppppbVar4 * 0x28) = 1;
        ppppppbStack_160 = (byte ******)((longlong)ppppppbVar4 + 1);
        pppppppbVar7 = pppppppbStack_130;
      }
    }
    pppppppbStack_208 = (byte *******)ppppppbStack_160;
    pppppppbStack_218 = (byte *******)ppppppbStack_170;
    pppppppbStack_210 = (byte *******)lStack_168;
    uStack_f1 = 0;
    pdb_1408b13e0(uStack_220,uStack_148,uStack_14c,&pppppppbStack_218,uStack_144);
  }
  return;
}

