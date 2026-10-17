// Matched PDB: system_wall_constructor::construct_wooden_walls::construct_wall_boards::subtract_wall_cutouts
// VA 0x141484710, PDB extent 2736 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::subtract_wall_cutouts
   Extent: 2736 bytes. No whole-program auto-analysis. */

void pdb_141484710(undefined8 *param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte bVar15;
  undefined8 uVar16;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float fVar17;
  float fVar18;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  longlong lStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 *puStack_190;
  longlong lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  longlong lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  longlong *plStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_130;
  longlong lStack_128;
  longlong lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  char cStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    puVar12 = param_1 + param_2 * 2;
    lVar13 = 0;
    cStack_f2 = param_4;
    do {
      if (lVar13 == 0x10) {
        return;
      }
      uStack_168 = *param_1;
      uStack_160 = param_1[1];
      uVar14 = param_3[2];
      if (0x333333333333330 < uVar14) {
LAB_1414850ae:
        uVar16 = 0;
        lVar13 = lStack_170;
LAB_1414850b5:
        pdb_142dc7e2a(uVar16,lVar13);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lStack_188 = lVar13 + 1;
      puStack_190 = puVar12;
      puStack_180 = param_1;
      uVar7 = 0;
      while( true ) {
        uStack_158 = uVar7;
        lVar13 = (uVar14 * 8 + 0x18) * 5;
        puStack_178 = param_1;
        pdb_14007ee60();
        uVar16 = 8;
        lVar9 = func_0x0001406abab0(lVar13,8);
        if (lVar9 == 0) goto LAB_1414850b5;
        puStack_178 = puStack_178 + 2;
        lStack_140 = uVar14 + 3;
        lStack_130 = 0;
        plVar1 = (longlong *)param_3[1];
        lVar13 = param_3[2];
        param_3[2] = 0;
        uStack_154 = 0;
        plVar10 = plVar1;
        lStack_170 = lVar9;
        lStack_138 = lVar9;
        while ((plVar10 != plVar1 + lVar13 * 5 && (lVar9 = *plVar10, lVar9 != 2))) {
          plStack_150 = plVar10 + 5;
          lVar3 = plVar10[1];
          lStack_1a8 = plVar10[2];
          fStack_1a0 = *(float *)(plVar10 + 3);
          fStack_19c = *(float *)((longlong)plVar10 + 0x1c);
          uStack_198 = (undefined4)plVar10[4];
          uStack_194 = *(undefined4 *)((longlong)plVar10 + 0x24);
          cVar8 = pdb_140deeb90(&lStack_1a8,&uStack_168);
          lVar4 = lStack_130;
          fVar23 = fStack_19c;
          fVar18 = fStack_1a0;
          if (cVar8 == '\0') {
            if (lStack_130 == lStack_140) {
              pdb_142d7ede0(&lStack_140);
            }
            *(ulonglong *)(lStack_138 + 0x20 + lVar4 * 0x28) = CONCAT44(uStack_194,uStack_198);
            plVar10 = (longlong *)(lStack_138 + 0x10 + lVar4 * 0x28);
            *plVar10 = lStack_1a8;
            plVar10[1] = CONCAT44(fStack_19c,fStack_1a0);
            plVar10 = (longlong *)(lStack_138 + lVar4 * 0x28);
            *plVar10 = lVar9;
            plVar10[1] = lVar3;
            lStack_130 = lVar4 + 1;
            plVar10 = plStack_150;
          }
          else {
            fVar21 = (float)((ulonglong)lStack_1a8 >> 0x20);
            lVar4 = CONCAT44(fStack_19c,fStack_1a0);
            uStack_f1 = (undefined1)uStack_198;
            fVar17 = (float)uStack_168;
            fVar22 = uStack_168._4_4_;
            fVar5 = (float)uStack_160;
            fVar6 = uStack_160._4_4_;
            fVar20 = (float)lStack_1a8;
            lStack_148 = lVar3;
            if (cStack_f2 == '\0') {
              lVar11 = 0;
              if (fVar20 < (float)uStack_168) {
                fVar19 = fStack_1a0;
                if ((float)uStack_168 <= fStack_1a0) {
                  fVar19 = (float)uStack_168;
                }
                uStack_118 = lStack_1a8;
                uStack_110 = CONCAT44(fStack_19c,
                                      ~-(uint)NAN((float)uStack_168) & (uint)fVar19 |
                                      -(uint)NAN((float)uStack_168) & (uint)fStack_1a0);
                uStack_108 = (undefined1)uStack_198;
                lStack_128 = lVar9;
                lStack_120 = lVar3;
                lVar11 = pdb_140deec10(&uStack_118);
                if ((0.0 < extraout_XMM0_Da_03) &&
                   (lVar11 = pdb_140deec50(&uStack_118), lVar3 = lStack_130,
                   _DAT_142e37ad4 <= extraout_XMM0_Da_04)) {
                  if (lStack_130 == lStack_140) {
                    pdb_142d7ede0(&lStack_140);
                  }
                  *(ulonglong *)(lStack_138 + 0x20 + lVar3 * 0x28) = CONCAT71(uStack_107,uStack_108)
                  ;
                  plVar10 = (longlong *)(lStack_138 + 0x10 + lVar3 * 0x28);
                  *plVar10 = uStack_118;
                  plVar10[1] = uStack_110;
                  plVar10 = (longlong *)(lStack_138 + lVar3 * 0x28);
                  *plVar10 = lStack_128;
                  plVar10[1] = lStack_120;
                  lStack_130 = lVar3 + 1;
                  lVar11 = lStack_138;
                }
              }
              if (fVar5 < fVar18) {
                fVar19 = fVar20;
                if (fVar20 <= fVar5) {
                  fVar19 = fVar5;
                }
                uStack_118 = CONCAT44(fVar21,~-(uint)NAN(fVar5) & (uint)fVar19 |
                                             -(uint)NAN(fVar5) & (uint)fVar20);
                lStack_120 = lStack_148;
                uStack_108 = uStack_f1;
                lStack_128 = lVar9;
                uStack_110 = lVar4;
                lVar11 = pdb_140deec10(&uStack_118);
                if ((0.0 < extraout_XMM0_Da_05) &&
                   (lVar11 = pdb_140deec50(&uStack_118), lVar3 = lStack_130,
                   _DAT_142e37ad4 <= extraout_XMM0_Da_06)) {
                  if (lStack_130 == lStack_140) {
                    pdb_142d7ede0(&lStack_140);
                  }
                  *(ulonglong *)(lStack_138 + 0x20 + lVar3 * 0x28) = CONCAT71(uStack_107,uStack_108)
                  ;
                  plVar10 = (longlong *)(lStack_138 + 0x10 + lVar3 * 0x28);
                  *plVar10 = uStack_118;
                  plVar10[1] = uStack_110;
                  plVar10 = (longlong *)(lStack_138 + lVar3 * 0x28);
                  *plVar10 = lStack_128;
                  plVar10[1] = lStack_120;
                  lStack_130 = lVar3 + 1;
                  lVar11 = lStack_138;
                }
              }
              fVar19 = fVar17;
              if (fVar17 <= fVar20) {
                fVar19 = fVar20;
              }
              fVar20 = (float)(~-(uint)NAN(fVar20) & (uint)fVar19 |
                              -(uint)NAN(fVar20) & (uint)fVar17);
              fVar17 = fVar5;
              if (fVar18 <= fVar5) {
                fVar17 = fVar18;
              }
              fVar18 = (float)(~-(uint)NAN(fVar18) & (uint)fVar17 | -(uint)NAN(fVar18) & (uint)fVar5
                              );
              uStack_154 = (undefined4)CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
              plVar10 = plStack_150;
              if (fVar20 < fVar18) {
                if (fVar21 < fVar22) {
                  fVar17 = fVar23;
                  if (fVar22 <= fVar23) {
                    fVar17 = fVar22;
                  }
                  uStack_118 = CONCAT44(fVar21,fVar20);
                  uStack_110 = CONCAT44(~-(uint)NAN(fVar22) & (uint)fVar17 |
                                        -(uint)NAN(fVar22) & (uint)fVar23,fVar18);
                  lStack_120 = lStack_148;
                  uStack_108 = uStack_f1;
                  lStack_128 = lVar9;
                  fVar17 = (float)pdb_140deec10(&uStack_118);
                  if ((0.0 < fVar17) &&
                     (fVar17 = (float)pdb_140deec50(&uStack_118), lVar3 = lStack_130,
                     _DAT_142e37ad4 <= fVar17)) {
                    if (lStack_130 == lStack_140) {
                      pdb_142d7ede0(&lStack_140);
                    }
                    *(ulonglong *)(lStack_138 + 0x20 + lVar3 * 0x28) =
                         CONCAT71(uStack_107,uStack_108);
                    plVar10 = (longlong *)(lStack_138 + 0x10 + lVar3 * 0x28);
                    *plVar10 = uStack_118;
                    plVar10[1] = uStack_110;
                    plVar10 = (longlong *)(lStack_138 + lVar3 * 0x28);
                    *plVar10 = lStack_128;
                    plVar10[1] = lStack_120;
                    lStack_130 = lVar3 + 1;
                  }
                }
                plVar10 = plStack_150;
                if (fVar6 < fVar23) {
                  fVar17 = fVar21;
                  if (fVar21 <= fVar6) {
                    fVar17 = fVar6;
                  }
                  uStack_118 = CONCAT44(~-(uint)NAN(fVar6) & (uint)fVar17 |
                                        -(uint)NAN(fVar6) & (uint)fVar21,fVar20);
                  uStack_110 = CONCAT44(fVar23,fVar18);
                  lStack_120 = lStack_148;
                  uStack_108 = uStack_f1;
                  lStack_128 = lVar9;
                  fVar18 = (float)pdb_140deec10(&uStack_118);
                  plVar10 = plStack_150;
                  if ((0.0 < fVar18) &&
                     (fVar18 = (float)pdb_140deec50(&uStack_118), lVar9 = lStack_130,
                     plVar10 = plStack_150, _DAT_142e37ad4 <= fVar18)) {
                    if (lStack_130 == lStack_140) {
                      pdb_142d7ede0(&lStack_140);
                    }
                    *(ulonglong *)(lStack_138 + 0x20 + lVar9 * 0x28) =
                         CONCAT71(uStack_107,uStack_108);
                    plVar10 = (longlong *)(lStack_138 + 0x10 + lVar9 * 0x28);
                    *plVar10 = uStack_118;
                    plVar10[1] = uStack_110;
                    plVar10 = (longlong *)(lStack_138 + lVar9 * 0x28);
                    *plVar10 = lStack_128;
                    plVar10[1] = lStack_120;
                    lStack_130 = lVar9 + 1;
                    plVar10 = plStack_150;
                  }
                }
              }
            }
            else {
              lVar11 = 0;
              if (fVar21 < uStack_168._4_4_) {
                fVar19 = fStack_19c;
                if (uStack_168._4_4_ <= fStack_19c) {
                  fVar19 = uStack_168._4_4_;
                }
                uStack_118 = lStack_1a8;
                uStack_110 = CONCAT44(~-(uint)NAN(uStack_168._4_4_) & (uint)fVar19 |
                                      -(uint)NAN(uStack_168._4_4_) & (uint)fStack_19c,fStack_1a0);
                uStack_108 = (undefined1)uStack_198;
                lStack_128 = lVar9;
                lStack_120 = lVar3;
                lVar11 = pdb_140deec10(&uStack_118);
                if ((0.0 < extraout_XMM0_Da) &&
                   (lVar11 = pdb_140deec50(&uStack_118), lVar3 = lStack_130,
                   0.0 < extraout_XMM0_Da_00)) {
                  if (lStack_130 == lStack_140) {
                    pdb_142d7ede0(&lStack_140);
                  }
                  *(ulonglong *)(lStack_138 + 0x20 + lVar3 * 0x28) = CONCAT71(uStack_107,uStack_108)
                  ;
                  plVar10 = (longlong *)(lStack_138 + 0x10 + lVar3 * 0x28);
                  *plVar10 = uStack_118;
                  plVar10[1] = uStack_110;
                  plVar10 = (longlong *)(lStack_138 + lVar3 * 0x28);
                  *plVar10 = lStack_128;
                  plVar10[1] = lStack_120;
                  lStack_130 = lVar3 + 1;
                  lVar11 = lStack_138;
                }
              }
              if (fVar6 < fVar23) {
                fVar19 = fVar21;
                if (fVar21 <= fVar6) {
                  fVar19 = fVar6;
                }
                uStack_118 = CONCAT44(~-(uint)NAN(fVar6) & (uint)fVar19 |
                                      -(uint)NAN(fVar6) & (uint)fVar21,fVar20);
                lStack_120 = lStack_148;
                uStack_108 = uStack_f1;
                lStack_128 = lVar9;
                uStack_110 = lVar4;
                lVar11 = pdb_140deec10(&uStack_118);
                if ((0.0 < extraout_XMM0_Da_01) &&
                   (lVar11 = pdb_140deec50(&uStack_118), lVar3 = lStack_130,
                   0.0 < extraout_XMM0_Da_02)) {
                  if (lStack_130 == lStack_140) {
                    pdb_142d7ede0(&lStack_140);
                  }
                  *(ulonglong *)(lStack_138 + 0x20 + lVar3 * 0x28) = CONCAT71(uStack_107,uStack_108)
                  ;
                  plVar10 = (longlong *)(lStack_138 + 0x10 + lVar3 * 0x28);
                  *plVar10 = uStack_118;
                  plVar10[1] = uStack_110;
                  plVar10 = (longlong *)(lStack_138 + lVar3 * 0x28);
                  *plVar10 = lStack_128;
                  plVar10[1] = lStack_120;
                  lStack_130 = lVar3 + 1;
                  lVar11 = lStack_138;
                }
              }
              fVar19 = fVar22;
              if (fVar22 <= fVar21) {
                fVar19 = fVar21;
              }
              fVar21 = (float)(~-(uint)NAN(fVar21) & (uint)fVar19 |
                              -(uint)NAN(fVar21) & (uint)fVar22);
              fVar22 = fVar6;
              if (fVar23 <= fVar6) {
                fVar22 = fVar23;
              }
              fVar23 = (float)(~-(uint)NAN(fVar23) & (uint)fVar22 | -(uint)NAN(fVar23) & (uint)fVar6
                              );
              uStack_154 = (undefined4)CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
              plVar10 = plStack_150;
              if (fVar21 < fVar23) {
                if (fVar20 < fVar17) {
                  fVar22 = fVar18;
                  if (fVar17 <= fVar18) {
                    fVar22 = fVar17;
                  }
                  uStack_118 = CONCAT44(fVar21,fVar20);
                  uStack_110 = CONCAT44(fVar23,~-(uint)NAN(fVar17) & (uint)fVar22 |
                                               -(uint)NAN(fVar17) & (uint)fVar18);
                  lStack_120 = lStack_148;
                  uStack_108 = uStack_f1;
                  lStack_128 = lVar9;
                  fVar17 = (float)pdb_140deec10(&uStack_118);
                  if ((0.0 < fVar17) &&
                     (fVar17 = (float)pdb_140deec50(&uStack_118), lVar3 = lStack_130, 0.0 < fVar17))
                  {
                    if (lStack_130 == lStack_140) {
                      pdb_142d7ede0(&lStack_140);
                    }
                    *(ulonglong *)(lStack_138 + 0x20 + lVar3 * 0x28) =
                         CONCAT71(uStack_107,uStack_108);
                    plVar10 = (longlong *)(lStack_138 + 0x10 + lVar3 * 0x28);
                    *plVar10 = uStack_118;
                    plVar10[1] = uStack_110;
                    plVar10 = (longlong *)(lStack_138 + lVar3 * 0x28);
                    *plVar10 = lStack_128;
                    plVar10[1] = lStack_120;
                    lStack_130 = lVar3 + 1;
                  }
                }
                plVar10 = plStack_150;
                if (fVar5 < fVar18) {
                  fVar17 = fVar20;
                  if (fVar20 <= fVar5) {
                    fVar17 = fVar5;
                  }
                  uStack_118 = CONCAT44(fVar21,~-(uint)NAN(fVar5) & (uint)fVar17 |
                                               -(uint)NAN(fVar5) & (uint)fVar20);
                  uStack_110 = CONCAT44(fVar23,fVar18);
                  lStack_120 = lStack_148;
                  uStack_108 = uStack_f1;
                  lStack_128 = lVar9;
                  fVar18 = (float)pdb_140deec10(&uStack_118);
                  plVar10 = plStack_150;
                  if ((0.0 < fVar18) &&
                     (fVar18 = (float)pdb_140deec50(&uStack_118), lVar9 = lStack_130,
                     plVar10 = plStack_150, 0.0 < fVar18)) {
                    if (lStack_130 == lStack_140) {
                      pdb_142d7ede0(&lStack_140);
                    }
                    *(ulonglong *)(lStack_138 + 0x20 + lVar9 * 0x28) =
                         CONCAT71(uStack_107,uStack_108);
                    plVar10 = (longlong *)(lStack_138 + 0x10 + lVar9 * 0x28);
                    *plVar10 = uStack_118;
                    plVar10[1] = uStack_110;
                    plVar10 = (longlong *)(lStack_138 + lVar9 * 0x28);
                    *plVar10 = lStack_128;
                    plVar10[1] = lStack_120;
                    lStack_130 = lVar9 + 1;
                    plVar10 = plStack_150;
                  }
                }
              }
            }
          }
        }
        uStack_118 = lStack_130;
        lStack_128 = lStack_140;
        lStack_120 = lStack_138;
        if (*param_3 != 0) {
          func_0x0001406abac0(param_3[1],*param_3 * 0x28,8);
        }
        param_3[2] = uStack_118;
        *param_3 = lStack_128;
        param_3[1] = lStack_120;
        bVar15 = (byte)uStack_158 | (byte)uStack_154;
        if (puStack_178 == puStack_190) break;
        uStack_168 = *puStack_178;
        uStack_160 = puStack_178[1];
        uVar14 = param_3[2];
        param_1 = puStack_178;
        uVar7 = CONCAT31((int3)((uint)uStack_158 >> 8),bVar15);
        if (0x333333333333330 < uVar14) goto LAB_1414850ae;
      }
      param_1 = puStack_180;
      puVar12 = puStack_190;
      lVar13 = lStack_188;
    } while ((bVar15 & 1) != 0);
  }
  return;
}

