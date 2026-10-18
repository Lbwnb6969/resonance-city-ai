// VA 0x141484710, PDB extent 2736 bytes
// system_wall_constructor::construct_wooden_walls::construct_wall_boards::subtract_wall_cutouts
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::subtract_wall_cutouts
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
   Extent: 2736 */

void pdb_141484710(undefined8 *param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  undefined4 uVar8;
  char cVar9;
  byte *pbVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  ulonglong uVar14;
  longlong lVar15;
  byte bVar16;
  undefined8 uVar17;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float fVar18;
  float fVar19;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  longlong lStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 *puStack_190;
  longlong lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  byte *pbStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  longlong *plStack_150;
  byte *pbStack_148;
  longlong lStack_140;
  byte *pbStack_138;
  longlong lStack_130;
  longlong lStack_128;
  byte *pbStack_120;
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
    lVar15 = 0;
    cStack_f2 = param_4;
    do {
      if (lVar15 == 0x10) {
        return;
      }
      uStack_168 = *param_1;
      uStack_160 = param_1[1];
      uVar14 = param_3[2];
      if (0x333333333333330 < uVar14) {
LAB_1414850ae:
        uVar17 = 0;
        pbVar13 = pbStack_170;
LAB_1414850b5:
        pdb_142dc7e2a(uVar17,pbVar13);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lStack_188 = lVar15 + 1;
      puStack_190 = puVar12;
      puStack_180 = param_1;
      uVar8 = 0;
      while( true ) {
        uStack_158 = uVar8;
        pbVar13 = (byte *)((uVar14 * 8 + 0x18) * 5);
        puStack_178 = param_1;
        pdb_14007ee60();
        uVar17 = 8;
        pbVar10 = pub_1406abab0((ulonglong)pbVar13,8);
        if (pbVar10 == (byte *)0x0) goto LAB_1414850b5;
        puStack_178 = puStack_178 + 2;
        lStack_140 = uVar14 + 3;
        lStack_130 = 0;
        plVar1 = (longlong *)param_3[1];
        lVar15 = param_3[2];
        param_3[2] = 0;
        uStack_154 = 0;
        plVar11 = plVar1;
        pbStack_170 = pbVar10;
        pbStack_138 = pbVar10;
        while ((plVar11 != plVar1 + lVar15 * 5 && (lVar2 = *plVar11, lVar2 != 2))) {
          plStack_150 = plVar11 + 5;
          pbVar13 = (byte *)plVar11[1];
          lStack_1a8 = plVar11[2];
          fStack_1a0 = *(float *)(plVar11 + 3);
          fStack_19c = *(float *)((longlong)plVar11 + 0x1c);
          uStack_198 = (undefined4)plVar11[4];
          uStack_194 = *(undefined4 *)((longlong)plVar11 + 0x24);
          cVar9 = pdb_140deeb90(&lStack_1a8,&uStack_168);
          lVar4 = lStack_130;
          fVar24 = fStack_19c;
          fVar19 = fStack_1a0;
          if (cVar9 == '\0') {
            if (lStack_130 == lStack_140) {
              pdb_142d7ede0(&lStack_140);
            }
            *(ulonglong *)(pbStack_138 + lVar4 * 0x28 + 0x20) = CONCAT44(uStack_194,uStack_198);
            *(longlong *)(pbStack_138 + lVar4 * 0x28 + 0x10) = lStack_1a8;
            *(longlong *)(pbStack_138 + lVar4 * 0x28 + 0x10 + 8) = CONCAT44(fStack_19c,fStack_1a0);
            *(longlong *)(pbStack_138 + lVar4 * 0x28) = lVar2;
            *(byte **)(pbStack_138 + lVar4 * 0x28 + 8) = pbVar13;
            lStack_130 = lVar4 + 1;
            plVar11 = plStack_150;
          }
          else {
            fVar22 = (float)((ulonglong)lStack_1a8 >> 0x20);
            lVar4 = CONCAT44(fStack_19c,fStack_1a0);
            uStack_f1 = (undefined1)uStack_198;
            fVar18 = (float)uStack_168;
            fVar23 = uStack_168._4_4_;
            fVar5 = (float)uStack_160;
            fVar6 = uStack_160._4_4_;
            fVar21 = (float)lStack_1a8;
            pbStack_148 = pbVar13;
            if (cStack_f2 == '\0') {
              pbVar10 = (byte *)0x0;
              if (fVar21 < (float)uStack_168) {
                fVar20 = fStack_1a0;
                if ((float)uStack_168 <= fStack_1a0) {
                  fVar20 = (float)uStack_168;
                }
                uStack_118 = lStack_1a8;
                uStack_110 = CONCAT44(fStack_19c,
                                      ~-(uint)NAN((float)uStack_168) & (uint)fVar20 |
                                      -(uint)NAN((float)uStack_168) & (uint)fStack_1a0);
                uStack_108 = (undefined1)uStack_198;
                lStack_128 = lVar2;
                pbStack_120 = pbVar13;
                pbVar10 = (byte *)pdb_140deec10(&uStack_118);
                if ((0.0 < extraout_XMM0_Da_03) &&
                   (pbVar10 = (byte *)pdb_140deec50(&uStack_118), lVar7 = lStack_130,
                   _DAT_142e37ad4 <= extraout_XMM0_Da_04)) {
                  if (lStack_130 == lStack_140) {
                    pdb_142d7ede0(&lStack_140);
                  }
                  *(ulonglong *)(pbStack_138 + lVar7 * 0x28 + 0x20) =
                       CONCAT71(uStack_107,uStack_108);
                  *(longlong *)(pbStack_138 + lVar7 * 0x28 + 0x10) = uStack_118;
                  *(longlong *)(pbStack_138 + lVar7 * 0x28 + 0x10 + 8) = uStack_110;
                  *(longlong *)(pbStack_138 + lVar7 * 0x28) = lStack_128;
                  *(byte **)(pbStack_138 + lVar7 * 0x28 + 8) = pbStack_120;
                  lStack_130 = lVar7 + 1;
                  pbVar10 = pbStack_138;
                }
              }
              if (fVar5 < fVar19) {
                fVar20 = fVar21;
                if (fVar21 <= fVar5) {
                  fVar20 = fVar5;
                }
                uStack_118 = CONCAT44(fVar22,~-(uint)NAN(fVar5) & (uint)fVar20 |
                                             -(uint)NAN(fVar5) & (uint)fVar21);
                pbStack_120 = pbStack_148;
                uStack_108 = uStack_f1;
                lStack_128 = lVar2;
                uStack_110 = lVar4;
                pbVar10 = (byte *)pdb_140deec10(&uStack_118);
                if ((0.0 < extraout_XMM0_Da_05) &&
                   (pbVar10 = (byte *)pdb_140deec50(&uStack_118), lVar4 = lStack_130,
                   _DAT_142e37ad4 <= extraout_XMM0_Da_06)) {
                  if (lStack_130 == lStack_140) {
                    pdb_142d7ede0(&lStack_140);
                  }
                  *(ulonglong *)(pbStack_138 + lVar4 * 0x28 + 0x20) =
                       CONCAT71(uStack_107,uStack_108);
                  *(longlong *)(pbStack_138 + lVar4 * 0x28 + 0x10) = uStack_118;
                  *(longlong *)(pbStack_138 + lVar4 * 0x28 + 0x10 + 8) = uStack_110;
                  *(longlong *)(pbStack_138 + lVar4 * 0x28) = lStack_128;
                  *(byte **)(pbStack_138 + lVar4 * 0x28 + 8) = pbStack_120;
                  lStack_130 = lVar4 + 1;
                  pbVar10 = pbStack_138;
                }
              }
              fVar20 = fVar18;
              if (fVar18 <= fVar21) {
                fVar20 = fVar21;
              }
              fVar21 = (float)(~-(uint)NAN(fVar21) & (uint)fVar20 |
                              -(uint)NAN(fVar21) & (uint)fVar18);
              fVar18 = fVar5;
              if (fVar19 <= fVar5) {
                fVar18 = fVar19;
              }
              fVar19 = (float)(~-(uint)NAN(fVar19) & (uint)fVar18 | -(uint)NAN(fVar19) & (uint)fVar5
                              );
              uStack_154 = (undefined4)CONCAT71((int7)((ulonglong)pbVar10 >> 8),1);
              plVar11 = plStack_150;
              if (fVar21 < fVar19) {
                if (fVar22 < fVar23) {
                  fVar18 = fVar24;
                  if (fVar23 <= fVar24) {
                    fVar18 = fVar23;
                  }
                  uStack_118 = CONCAT44(fVar22,fVar21);
                  uStack_110 = CONCAT44(~-(uint)NAN(fVar23) & (uint)fVar18 |
                                        -(uint)NAN(fVar23) & (uint)fVar24,fVar19);
                  pbStack_120 = pbStack_148;
                  uStack_108 = uStack_f1;
                  lStack_128 = lVar2;
                  fVar18 = (float)pdb_140deec10(&uStack_118);
                  if ((0.0 < fVar18) &&
                     (fVar18 = (float)pdb_140deec50(&uStack_118), lVar4 = lStack_130,
                     _DAT_142e37ad4 <= fVar18)) {
                    if (lStack_130 == lStack_140) {
                      pdb_142d7ede0(&lStack_140);
                    }
                    *(ulonglong *)(pbStack_138 + lVar4 * 0x28 + 0x20) =
                         CONCAT71(uStack_107,uStack_108);
                    *(longlong *)(pbStack_138 + lVar4 * 0x28 + 0x10) = uStack_118;
                    *(longlong *)(pbStack_138 + lVar4 * 0x28 + 0x10 + 8) = uStack_110;
                    *(longlong *)(pbStack_138 + lVar4 * 0x28) = lStack_128;
                    *(byte **)(pbStack_138 + lVar4 * 0x28 + 8) = pbStack_120;
                    lStack_130 = lVar4 + 1;
                  }
                }
                plVar11 = plStack_150;
                if (fVar6 < fVar24) {
                  fVar18 = fVar22;
                  if (fVar22 <= fVar6) {
                    fVar18 = fVar6;
                  }
                  uStack_118 = CONCAT44(~-(uint)NAN(fVar6) & (uint)fVar18 |
                                        -(uint)NAN(fVar6) & (uint)fVar22,fVar21);
                  uStack_110 = CONCAT44(fVar24,fVar19);
                  pbStack_120 = pbStack_148;
                  uStack_108 = uStack_f1;
                  lStack_128 = lVar2;
                  fVar19 = (float)pdb_140deec10(&uStack_118);
                  plVar11 = plStack_150;
                  if ((0.0 < fVar19) &&
                     (fVar19 = (float)pdb_140deec50(&uStack_118), lVar2 = lStack_130,
                     plVar11 = plStack_150, _DAT_142e37ad4 <= fVar19)) {
                    if (lStack_130 == lStack_140) {
                      pdb_142d7ede0(&lStack_140);
                    }
                    *(ulonglong *)(pbStack_138 + lVar2 * 0x28 + 0x20) =
                         CONCAT71(uStack_107,uStack_108);
                    *(longlong *)(pbStack_138 + lVar2 * 0x28 + 0x10) = uStack_118;
                    *(longlong *)(pbStack_138 + lVar2 * 0x28 + 0x10 + 8) = uStack_110;
                    *(longlong *)(pbStack_138 + lVar2 * 0x28) = lStack_128;
                    *(byte **)(pbStack_138 + lVar2 * 0x28 + 8) = pbStack_120;
                    lStack_130 = lVar2 + 1;
                    plVar11 = plStack_150;
                  }
                }
              }
            }
            else {
              pbVar10 = (byte *)0x0;
              if (fVar22 < uStack_168._4_4_) {
                fVar20 = fStack_19c;
                if (uStack_168._4_4_ <= fStack_19c) {
                  fVar20 = uStack_168._4_4_;
                }
                uStack_118 = lStack_1a8;
                uStack_110 = CONCAT44(~-(uint)NAN(uStack_168._4_4_) & (uint)fVar20 |
                                      -(uint)NAN(uStack_168._4_4_) & (uint)fStack_19c,fStack_1a0);
                uStack_108 = (undefined1)uStack_198;
                lStack_128 = lVar2;
                pbStack_120 = pbVar13;
                pbVar10 = (byte *)pdb_140deec10(&uStack_118);
                if ((0.0 < extraout_XMM0_Da) &&
                   (pbVar10 = (byte *)pdb_140deec50(&uStack_118), lVar7 = lStack_130,
                   0.0 < extraout_XMM0_Da_00)) {
                  if (lStack_130 == lStack_140) {
                    pdb_142d7ede0(&lStack_140);
                  }
                  *(ulonglong *)(pbStack_138 + lVar7 * 0x28 + 0x20) =
                       CONCAT71(uStack_107,uStack_108);
                  *(longlong *)(pbStack_138 + lVar7 * 0x28 + 0x10) = uStack_118;
                  *(longlong *)(pbStack_138 + lVar7 * 0x28 + 0x10 + 8) = uStack_110;
                  *(longlong *)(pbStack_138 + lVar7 * 0x28) = lStack_128;
                  *(byte **)(pbStack_138 + lVar7 * 0x28 + 8) = pbStack_120;
                  lStack_130 = lVar7 + 1;
                  pbVar10 = pbStack_138;
                }
              }
              if (fVar6 < fVar24) {
                fVar20 = fVar22;
                if (fVar22 <= fVar6) {
                  fVar20 = fVar6;
                }
                uStack_118 = CONCAT44(~-(uint)NAN(fVar6) & (uint)fVar20 |
                                      -(uint)NAN(fVar6) & (uint)fVar22,fVar21);
                pbStack_120 = pbStack_148;
                uStack_108 = uStack_f1;
                lStack_128 = lVar2;
                uStack_110 = lVar4;
                pbVar10 = (byte *)pdb_140deec10(&uStack_118);
                if ((0.0 < extraout_XMM0_Da_01) &&
                   (pbVar10 = (byte *)pdb_140deec50(&uStack_118), lVar4 = lStack_130,
                   0.0 < extraout_XMM0_Da_02)) {
                  if (lStack_130 == lStack_140) {
                    pdb_142d7ede0(&lStack_140);
                  }
                  *(ulonglong *)(pbStack_138 + lVar4 * 0x28 + 0x20) =
                       CONCAT71(uStack_107,uStack_108);
                  *(longlong *)(pbStack_138 + lVar4 * 0x28 + 0x10) = uStack_118;
                  *(longlong *)(pbStack_138 + lVar4 * 0x28 + 0x10 + 8) = uStack_110;
                  *(longlong *)(pbStack_138 + lVar4 * 0x28) = lStack_128;
                  *(byte **)(pbStack_138 + lVar4 * 0x28 + 8) = pbStack_120;
                  lStack_130 = lVar4 + 1;
                  pbVar10 = pbStack_138;
                }
              }
              fVar20 = fVar23;
              if (fVar23 <= fVar22) {
                fVar20 = fVar22;
              }
              fVar22 = (float)(~-(uint)NAN(fVar22) & (uint)fVar20 |
                              -(uint)NAN(fVar22) & (uint)fVar23);
              fVar23 = fVar6;
              if (fVar24 <= fVar6) {
                fVar23 = fVar24;
              }
              fVar24 = (float)(~-(uint)NAN(fVar24) & (uint)fVar23 | -(uint)NAN(fVar24) & (uint)fVar6
                              );
              uStack_154 = (undefined4)CONCAT71((int7)((ulonglong)pbVar10 >> 8),1);
              plVar11 = plStack_150;
              if (fVar22 < fVar24) {
                if (fVar21 < fVar18) {
                  fVar23 = fVar19;
                  if (fVar18 <= fVar19) {
                    fVar23 = fVar18;
                  }
                  uStack_118 = CONCAT44(fVar22,fVar21);
                  uStack_110 = CONCAT44(fVar24,~-(uint)NAN(fVar18) & (uint)fVar23 |
                                               -(uint)NAN(fVar18) & (uint)fVar19);
                  pbStack_120 = pbStack_148;
                  uStack_108 = uStack_f1;
                  lStack_128 = lVar2;
                  fVar18 = (float)pdb_140deec10(&uStack_118);
                  if ((0.0 < fVar18) &&
                     (fVar18 = (float)pdb_140deec50(&uStack_118), lVar4 = lStack_130, 0.0 < fVar18))
                  {
                    if (lStack_130 == lStack_140) {
                      pdb_142d7ede0(&lStack_140);
                    }
                    *(ulonglong *)(pbStack_138 + lVar4 * 0x28 + 0x20) =
                         CONCAT71(uStack_107,uStack_108);
                    *(longlong *)(pbStack_138 + lVar4 * 0x28 + 0x10) = uStack_118;
                    *(longlong *)(pbStack_138 + lVar4 * 0x28 + 0x10 + 8) = uStack_110;
                    *(longlong *)(pbStack_138 + lVar4 * 0x28) = lStack_128;
                    *(byte **)(pbStack_138 + lVar4 * 0x28 + 8) = pbStack_120;
                    lStack_130 = lVar4 + 1;
                  }
                }
                plVar11 = plStack_150;
                if (fVar5 < fVar19) {
                  fVar18 = fVar21;
                  if (fVar21 <= fVar5) {
                    fVar18 = fVar5;
                  }
                  uStack_118 = CONCAT44(fVar22,~-(uint)NAN(fVar5) & (uint)fVar18 |
                                               -(uint)NAN(fVar5) & (uint)fVar21);
                  uStack_110 = CONCAT44(fVar24,fVar19);
                  pbStack_120 = pbStack_148;
                  uStack_108 = uStack_f1;
                  lStack_128 = lVar2;
                  fVar19 = (float)pdb_140deec10(&uStack_118);
                  plVar11 = plStack_150;
                  if ((0.0 < fVar19) &&
                     (fVar19 = (float)pdb_140deec50(&uStack_118), lVar2 = lStack_130,
                     plVar11 = plStack_150, 0.0 < fVar19)) {
                    if (lStack_130 == lStack_140) {
                      pdb_142d7ede0(&lStack_140);
                    }
                    *(ulonglong *)(pbStack_138 + lVar2 * 0x28 + 0x20) =
                         CONCAT71(uStack_107,uStack_108);
                    *(longlong *)(pbStack_138 + lVar2 * 0x28 + 0x10) = uStack_118;
                    *(longlong *)(pbStack_138 + lVar2 * 0x28 + 0x10 + 8) = uStack_110;
                    *(longlong *)(pbStack_138 + lVar2 * 0x28) = lStack_128;
                    *(byte **)(pbStack_138 + lVar2 * 0x28 + 8) = pbStack_120;
                    lStack_130 = lVar2 + 1;
                    plVar11 = plStack_150;
                  }
                }
              }
            }
          }
        }
        uStack_118 = lStack_130;
        lStack_128 = lStack_140;
        pbStack_120 = pbStack_138;
        if (*param_3 != 0) {
          pub_1406abac0((byte *)param_3[1],*param_3 * 0x28,8);
        }
        param_3[2] = uStack_118;
        *param_3 = lStack_128;
        param_3[1] = (longlong)pbStack_120;
        bVar16 = (byte)uStack_158 | (byte)uStack_154;
        if (puStack_178 == puStack_190) break;
        uStack_168 = *puStack_178;
        uStack_160 = puStack_178[1];
        uVar14 = param_3[2];
        param_1 = puStack_178;
        uVar8 = CONCAT31((int3)((uint)uStack_158 >> 8),bVar16);
        if (0x333333333333330 < uVar14) goto LAB_1414850ae;
      }
      param_1 = puStack_180;
      puVar12 = puStack_190;
      lVar15 = lStack_188;
    } while ((bVar16 & 1) != 0);
  }
  return;
}

