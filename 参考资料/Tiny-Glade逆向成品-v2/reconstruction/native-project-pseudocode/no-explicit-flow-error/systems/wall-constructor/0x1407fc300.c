// VA 0x1407fc300, PDB extent 3889 bytes
// system_wall_constructor::construct_arches::wooden_arch_frame::create_wooden_arch_cornerpieces_for_lintel
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/wooden_arch_frame.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_arches::wooden_arch_frame::create_wooden_arch_cornerpieces_for_lintel
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/wooden_arch_frame.rs
   Extent: 3889 */

undefined8 * pdb_1407fc300(undefined8 *param_1,code *param_2,float *param_3,undefined1 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  uint uVar5;
  code *pcVar6;
  float fVar8;
  undefined1 auVar7 [16];
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  longlong alStack_2d8 [7];
  longlong alStack_2a0 [7];
  undefined1 auStack_268 [16];
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [16];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 auStack_228 [16];
  code *pcStack_218;
  code *pcStack_210;
  code *pcStack_208;
  longlong lStack_200;
  uint uStack_1f8;
  float fStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  code *pcStack_1d8;
  code *pcStack_1d0;
  code *pcStack_1c8;
  longlong lStack_1c0;
  uint uStack_1b8;
  float fStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  float fStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [8];
  float fStack_178;
  undefined1 auStack_170 [8];
  float fStack_168;
  undefined8 uStack_160;
  float fStack_158;
  undefined8 uStack_150;
  float fStack_148;
  undefined8 uStack_140;
  float fStack_138;
  code *pcStack_130;
  code *pcStack_128;
  code **ppcStack_120;
  code *pcStack_118;
  float fStack_110;
  float fStack_10c;
  undefined4 uStack_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  ppcStack_120 = *(code ***)(param_2 + 0x28);
  if ((code *)0x1 < ppcStack_120) {
    pcStack_128 = (code *)0x0;
    pcStack_130 = param_2;
    pdb_1413ec120(&pcStack_218,&pcStack_130);
    pdb_140080930(&pcStack_130,&pcStack_218,0);
    if (!SBORROW8(0,(longlong)pcStack_130)) {
      uStack_1b8 = (uint)fStack_110;
      fStack_1b4 = fStack_10c;
      uStack_1b0 = uStack_108;
      uStack_1ac = fStack_104;
      pcStack_1c8 = (code *)ppcStack_120;
      lStack_1c0 = (longlong)pcStack_118;
      pcStack_1d8 = pcStack_130;
      pcStack_1d0 = pcStack_128;
      pdb_14017ede0(&pcStack_218,pcStack_128,pcStack_128 + (longlong)ppcStack_120 * 0xc);
      pdb_140080c90(&pcStack_130,&pcStack_218,0);
      pcVar4 = pcStack_1c8;
      pcVar3 = pcStack_1d0;
      if (SBORROW8(0,(longlong)pcStack_130)) {
        *param_1 = 0;
        param_1[1] = 8;
        param_1[2] = 0;
      }
      else {
        uStack_1f8 = (uint)fStack_110;
        fStack_1f4 = fStack_10c;
        uStack_1f0 = uStack_108;
        uStack_1ec = fStack_104;
        pcStack_208 = (code *)ppcStack_120;
        lStack_200 = (longlong)pcStack_118;
        pcStack_218 = pcStack_130;
        pcStack_210 = pcStack_128;
        fVar17 = *param_3;
        if (*param_3 <= _DAT_142e37848) {
          fVar17 = _DAT_142e37848;
        }
        if (fVar17 <= fStack_100) {
          fVar8 = param_3[1];
          if (param_3[1] <= fVar17) {
            fVar8 = fVar17;
          }
          if (fVar8 < fVar17) {
            uStack_140 = CONCAT44(uStack_140._4_4_,fVar17);
            pcStack_130 = (code *)&uStack_140;
            pcStack_128 = pdb_140f705d0;
            ppcStack_120 = (code **)&fStack_198;
            pcStack_118 = pdb_140f705d0;
            fStack_198 = fVar8;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143006800,&pcStack_130,&UNK_1430068a0);
          }
          if (fStack_100 < 0.0) {
            uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
            pcStack_130 = (code *)&uStack_140;
            pcStack_128 = pdb_140f705d0;
            ppcStack_120 = (code **)&fStack_198;
            pcStack_118 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143006800,&pcStack_130,&UNK_1430068a0);
          }
          if (pcStack_1c8 == (code *)0x1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143308560);
          }
          if (pcStack_1c8 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143308518,0x2d,&UNK_143308548);
          }
          fVar18 = param_3[2];
          fVar10 = param_3[5];
          fVar19 = 0.0;
          if (0.0 <= fVar10) {
            fVar19 = fVar10;
          }
          fVar13 = fStack_100;
          if (fVar19 <= fStack_100) {
            fVar13 = fVar19;
          }
          auStack_248 = ZEXT416((uint)fVar13);
          fVar19 = param_3[6];
          pcStack_130 = pcStack_1d0;
          pcStack_128 = pcStack_1c8;
          ppcStack_120 = (code **)pdb_140ade410;
          pcStack_118 = (code *)0x0;
          fStack_110 = 0.0;
          fStack_10c = 0.0;
          pdb_14141df70(&pcStack_130);
          pcVar6 = (code *)(ulonglong)(uint)fStack_110;
          if (pcVar4 <= pcVar6) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pcVar6,pcVar4,&UNK_143006980);
          }
          pcVar1 = pcVar6 + 1;
          if (pcVar4 <= pcVar1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pcVar1,pcVar4,&UNK_143006980);
          }
          fVar12 = fVar19 * 0.0;
          fVar13 = (float)*(undefined8 *)(pcVar3 + (longlong)pcVar6 * 0xc);
          fVar15 = (float)((ulonglong)*(undefined8 *)(pcVar3 + (longlong)pcVar6 * 0xc) >> 0x20);
          fVar14 = fStack_10c * ((float)*(undefined8 *)(pcVar3 + (longlong)pcVar1 * 0xc) - fVar13) +
                   fVar13 + fVar12;
          fVar15 = fStack_10c *
                   ((float)((ulonglong)*(undefined8 *)(pcVar3 + (longlong)pcVar1 * 0xc) >> 0x20) -
                   fVar15) + fVar15 + fVar19;
          fVar13 = (*(float *)(pcVar3 + (longlong)pcVar1 * 0xc + 8) -
                   *(float *)(pcVar3 + (longlong)pcVar6 * 0xc + 8)) * fStack_10c +
                   *(float *)(pcVar3 + (longlong)pcVar6 * 0xc + 8) + fVar12;
          uStack_150 = CONCAT44(fVar15,fVar14);
          fStack_148 = fVar13;
          if (pcStack_1c8 == (code *)0x1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143308560);
          }
          if (pcStack_1c8 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143308518,0x2d,&UNK_143308548);
          }
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          fVar9 = fStack_100 - fVar18;
          if (fStack_100 - fVar18 <= 0.0) {
            fVar9 = 0.0;
          }
          auVar7._0_4_ = fStack_100 - fVar10;
          auVar7._4_4_ = fVar9 * _DAT_142e36f50;
          auVar7._8_8_ = 0;
          auVar7 = maxps(ZEXT416((uint)fVar17) << 0x20,auVar7);
          auVar11._4_4_ = fVar8;
          auVar11._0_4_ = fStack_100;
          auVar11._8_8_ = 0;
          auVar7 = minps(auVar11,auVar7);
          pcStack_130 = pcStack_1d0;
          pcStack_128 = pcStack_1c8;
          ppcStack_120 = (code **)pdb_140ade410;
          pcStack_118 = (code *)0x0;
          fStack_110 = 0.0;
          fStack_10c = 0.0;
          pdb_14141df70(&pcStack_130);
          pcVar6 = (code *)(ulonglong)(uint)fStack_110;
          if (pcVar4 <= pcVar6) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pcVar6,pcVar4,&UNK_143006998);
          }
          pcVar1 = pcVar6 + 1;
          if (pcVar4 <= pcVar1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pcVar1,pcVar4,&UNK_143006998);
          }
          if (pcStack_1c8 == (code *)0x1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143308560);
          }
          if (pcStack_1c8 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143308518,0x2d,&UNK_143308548);
          }
          auStack_268 = ZEXT416((uint)fStack_10c);
          uVar2 = *(undefined8 *)(pcVar3 + (longlong)pcVar6 * 0xc + 8);
          fVar8 = (float)uVar2;
          fVar17 = *(float *)(pcVar3 + (longlong)pcVar1 * 0xc + 8);
          auStack_258 = ZEXT416(*(uint *)(pcVar3 + (longlong)pcVar6 * 0xc));
          pcStack_130 = pcStack_1d0;
          pcStack_128 = pcStack_1c8;
          ppcStack_120 = (code **)pdb_140ade410;
          pcStack_118 = (code *)0x0;
          fStack_110 = 0.0;
          fStack_10c = 0.0;
          pdb_14141df70(&pcStack_130);
          pcVar6 = (code *)(ulonglong)(uint)fStack_110;
          if (pcVar4 <= pcVar6) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pcVar6,pcVar4,&UNK_1430069b0);
          }
          pcVar1 = pcVar6 + 1;
          if (pcVar4 <= pcVar1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pcVar1,pcVar4,&UNK_1430069b0);
          }
          fVar18 = (float)*(undefined8 *)(pcVar3 + (longlong)pcVar6 * 0xc);
          fVar10 = (float)((ulonglong)*(undefined8 *)(pcVar3 + (longlong)pcVar6 * 0xc) >> 0x20);
          fVar18 = fVar12 + fStack_10c *
                            ((float)*(undefined8 *)(pcVar3 + (longlong)pcVar1 * 0xc) - fVar18) +
                            fVar18;
          fVar19 = fVar19 + fStack_10c *
                            ((float)((ulonglong)*(undefined8 *)(pcVar3 + (longlong)pcVar1 * 0xc) >>
                                    0x20) - fVar10) + fVar10;
          fStack_158 = (*(float *)(pcVar3 + (longlong)pcVar1 * 0xc + 8) -
                       *(float *)(pcVar3 + (longlong)pcVar6 * 0xc + 8)) * fStack_10c +
                       *(float *)(pcVar3 + (longlong)pcVar6 * 0xc + 8) + fVar12;
          uStack_160 = CONCAT44(fVar19,fVar18);
          if (pcStack_1c8 == (code *)0x1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143308560);
          }
          auStack_228 = ZEXT416((uint)fStack_158);
          uStack_238 = CONCAT44(fVar19,fVar18);
          uStack_230 = 0;
          if (pcStack_1c8 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143308518,0x2d,&UNK_143308548);
          }
          pcStack_130 = pcStack_1d0;
          pcStack_128 = pcStack_1c8;
          ppcStack_120 = (code **)pdb_140ade410;
          pcStack_118 = (code *)0x0;
          fStack_110 = 0.0;
          fStack_10c = 0.0;
          pdb_14141df70(&pcStack_130);
          fVar10 = _DAT_142e37848;
          fVar18 = _DAT_142e36f28;
          pcVar6 = (code *)(ulonglong)(uint)fStack_110;
          if (pcVar4 <= pcVar6) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pcVar6,pcVar4,&UNK_1430069c8);
          }
          pcVar1 = pcVar6 + 1;
          if (pcVar4 <= pcVar1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pcVar1,pcVar4,&UNK_1430069c8);
          }
          fVar19 = ((float)auStack_268._0_4_ *
                    ((float)((ulonglong)uVar2 >> 0x20) - (float)auStack_258._0_4_) +
                    (float)auStack_258._0_4_ + fVar12) - fVar14;
          fVar8 = ((float)auStack_268._0_4_ * (fVar17 - fVar8) + fVar8 + fVar12) - fVar13;
          fVar9 = SQRT(fVar8 * fVar8 + fVar19 * fVar19);
          fVar17 = (float)*(undefined8 *)(pcVar3 + (longlong)pcVar6 * 0xc + 8);
          fVar16 = (fStack_10c *
                    ((float)((ulonglong)*(undefined8 *)(pcVar3 + (longlong)pcVar6 * 0xc + 8) >> 0x20
                            ) - *(float *)(pcVar3 + (longlong)pcVar6 * 0xc)) +
                    *(float *)(pcVar3 + (longlong)pcVar6 * 0xc) + fVar12) - (float)uStack_238;
          fVar12 = (fStack_10c * (*(float *)(pcVar3 + (longlong)pcVar1 * 0xc + 8) - fVar17) + fVar17
                   + fVar12) - (float)auStack_228._0_4_;
          fVar20 = SQRT(fVar12 * fVar12 + fVar16 * fVar16);
          fVar17 = fVar20;
          if (fVar9 <= fVar20) {
            fVar17 = fVar9;
          }
          fVar17 = (float)(~-(uint)NAN(fVar9) & (uint)fVar17 | -(uint)NAN(fVar9) & (uint)fVar20);
          if (_DAT_142e37848 < fVar17) {
            fVar9 = _DAT_142e36f28 / fVar9;
            uVar5 = (uint)((int)fVar9 - 1U < 0x7fffff ||
                          (int)ABS(fVar9) - 0x800000U < 0x7f000000 && -1 < (int)fVar9);
            pcStack_130 = (code *)(CONCAT44((int)(uVar5 << 0x1f) >> 0x1f,
                                            (int)(uVar5 << 0x1f) >> 0x1f) &
                                  CONCAT44(fVar8 * fVar9,fVar19 * fVar9));
            pdb_140df4520(auStack_170,&pcStack_130);
            fVar18 = fVar18 / fVar20;
            uVar5 = (uint)((int)fVar18 - 1U < 0x7fffff ||
                          (int)ABS(fVar18) - 0x800000U < 0x7f000000 && -1 < (int)fVar18);
            pcStack_130 = (code *)(CONCAT44((int)(uVar5 << 0x1f) >> 0x1f,
                                            (int)(uVar5 << 0x1f) >> 0x1f) &
                                  CONCAT44(fVar12 * fVar18,fVar16 * fVar18));
            pdb_140df4520(auStack_180,&pcStack_130);
            fVar18 = fStack_168;
            fVar8 = fStack_178;
            fVar19 = auStack_170._0_4_;
            fVar12 = auStack_170._4_4_;
            if (fVar10 < fStack_168 * fStack_168 + fVar12 * fVar12 + fVar19 * fVar19) {
              fVar9 = auStack_180._0_4_;
              fVar16 = auStack_180._4_4_;
              if (fVar10 < fStack_178 * fStack_178 + fVar16 * fVar16 + fVar9 * fVar9) {
                pdb_1407fd240(&fStack_198);
                fStack_138 = fVar13 + fVar18 * fVar17;
                uStack_140 = CONCAT44(fVar15 + fVar12 * fVar17,fVar14 + fVar19 * fVar17);
                fStack_110 = fStack_148;
                pcStack_118 = (code *)uStack_150;
                fStack_10c = auStack_170._0_4_;
                uStack_108 = auStack_170._4_4_;
                fStack_104 = fStack_168;
                fStack_100 = (float)auStack_248._0_4_;
                uStack_fc = 0x3f800000;
                pcStack_130 = pcVar3;
                pcStack_128 = pcVar4;
                ppcStack_120 = &pcStack_1d8;
                pdb_14141e8d0(alStack_2a0,&uStack_150,&uStack_140,param_3,param_4,&pcStack_130);
                if (!SBORROW8(0,alStack_2a0[0])) {
                  pdb_1407fd290(&fStack_198,alStack_2a0);
                }
                fStack_138 = auStack_228._0_4_ + fVar8 * fVar17;
                uStack_140 = CONCAT44(uStack_238._4_4_ + fVar17 * fVar16,
                                      (float)uStack_238 + fVar17 * fVar9);
                fStack_110 = fStack_158;
                pcStack_118 = (code *)uStack_160;
                fStack_10c = auStack_180._0_4_;
                uStack_108 = auStack_180._4_4_;
                fStack_104 = fStack_178;
                uStack_fc = 0xbf800000;
                pcStack_130 = pcVar3;
                pcStack_128 = pcVar4;
                ppcStack_120 = &pcStack_1d8;
                fStack_100 = (float)auVar7._0_4_;
                pdb_14141e8d0(alStack_2d8,&uStack_160,&uStack_140,param_3,param_4,&pcStack_130);
                if (!SBORROW8(0,alStack_2d8[0])) {
                  pdb_1407fd290(&fStack_198,alStack_2d8);
                }
                param_1[2] = uStack_188;
                *param_1 = CONCAT44(uStack_194,fStack_198);
                param_1[1] = uStack_190;
                pdb_14049c2a0(&pcStack_218);
                pdb_1400d9b40(&pcStack_1d8);
                return param_1;
              }
            }
          }
        }
        *param_1 = 0;
        param_1[1] = 8;
        param_1[2] = 0;
        if (pcStack_218 != (code *)0x0) {
          pub_1406abac0((byte *)pcStack_210,(longlong)pcStack_218 << 3,4);
        }
        if (lStack_200 != 0) {
          pub_1406abac0((byte *)CONCAT44(fStack_1f4,uStack_1f8),lStack_200 << 2,4);
        }
      }
      if (pcStack_1d8 != (code *)0x0) {
        pub_1406abac0((byte *)pcStack_1d0,(longlong)pcStack_1d8 * 0xc,4);
      }
      if (lStack_1c0 == 0) {
        return param_1;
      }
      pub_1406abac0((byte *)CONCAT44(fStack_1b4,uStack_1b8),lStack_1c0 << 2,4);
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  return param_1;
}

