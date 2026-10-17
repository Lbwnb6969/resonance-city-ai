// Matched PDB: system_wall_constructor::construct_wooden_walls::construct_wall_boards::merge_narrow_planks_horizontal
// VA 0x141488be0, PDB extent 2199 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::merge_narrow_planks_horizontal
   Extent: 2199 bytes. No whole-program auto-analysis. */

void pdb_141488be0(ulonglong *param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  code *pcVar10;
  longlong lVar11;
  float fVar12;
  ulonglong uVar13;
  longlong lVar14;
  byte *pbVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  bool bVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 uStack_171;
  ulonglong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  longlong lStack_158;
  longlong lStack_150;
  undefined1 *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  
  fVar12 = _DAT_142e37848;
  if (param_1[2] != 0) {
    uVar20 = 0;
    lVar21 = 0;
    fVar27 = _DAT_142e3b1d8;
LAB_141488c7c:
    do {
      uVar22 = uVar20 * 5;
      fVar25 = (float)pdb_140deec50(param_1[1] + uVar20 * 0x28 + 0x10);
      uVar19 = param_1[2];
      if (fVar25 < fVar27) {
        if (uVar20 < uVar19) {
          uVar8 = param_1[1];
          uVar18 = *(ulonglong *)(uVar8 + uVar20 * 0x28);
          lVar9 = *(longlong *)(uVar8 + 8 + uVar20 * 0x28);
          fVar25 = *(float *)(uVar8 + 0x10 + uVar20 * 0x28);
          uVar2 = *(undefined8 *)(uVar8 + 0x14 + uVar20 * 0x28);
          fVar31 = (float)uVar2;
          fVar32 = (float)((ulonglong)uVar2 >> 0x20);
          fVar1 = *(float *)(uVar8 + 0x1c + uVar20 * 0x28);
          bVar4 = *(byte *)(uVar8 + 0x20 + uVar20 * 0x28);
          bVar5 = *(byte *)(uVar8 + 0x21 + uVar20 * 0x28);
          lVar11 = uVar19 * 0x28;
          fVar26 = fVar1 + fVar12;
          uVar24 = -(uint)NAN(fVar25);
          lVar14 = uVar8 + 0x28;
          if ((uVar18 & 1) == 0) {
            uVar22 = 0;
            lVar16 = lVar11;
            do {
              if (((uVar20 != uVar22) && (*(byte *)(lVar14 + -8) == bVar4)) &&
                 (((*(byte *)(lVar14 + -0x28) & 1) == 0 &&
                  ((fVar31 <= *(float *)(lVar14 + -0xc) + fVar12 &&
                   (*(float *)(lVar14 + -0x14) <= fVar26)))))) {
                fVar33 = *(float *)(lVar14 + -0x18);
                fVar34 = *(float *)(lVar14 + -0x10);
                fVar29 = fVar33;
                if (fVar33 <= fVar25) {
                  fVar29 = fVar25;
                }
                fVar33 = (float)(~uVar24 & (uint)fVar29 | uVar24 & (uint)fVar33);
                fVar29 = fVar34;
                if (fVar32 <= fVar34) {
                  fVar29 = fVar32;
                }
                fVar34 = (float)(~-(uint)NAN(fVar32) & (uint)fVar29 |
                                -(uint)NAN(fVar32) & (uint)fVar34);
                if (fVar33 < fVar34) goto LAB_141488e2c;
              }
              uVar22 = uVar22 + 1;
              lVar14 = lVar14 + 0x28;
              lVar16 = lVar16 + -0x28;
            } while (lVar16 != 0);
          }
          else {
            uVar22 = 0;
            lVar16 = lVar11;
            do {
              if (((((uVar20 != uVar22) && (*(byte *)(lVar14 + -8) == bVar4)) &&
                   ((*(byte *)(lVar14 + -0x28) & 1) != 0)) &&
                  ((*(longlong *)(lVar14 + -0x20) == lVar9 &&
                   (fVar31 <= *(float *)(lVar14 + -0xc) + fVar12)))) &&
                 (*(float *)(lVar14 + -0x14) <= fVar26)) {
                fVar33 = *(float *)(lVar14 + -0x18);
                fVar34 = *(float *)(lVar14 + -0x10);
                fVar29 = fVar33;
                if (fVar33 <= fVar25) {
                  fVar29 = fVar25;
                }
                fVar33 = (float)(~uVar24 & (uint)fVar29 | uVar24 & (uint)fVar33);
                fVar29 = fVar34;
                if (fVar32 <= fVar34) {
                  fVar29 = fVar32;
                }
                fVar34 = (float)(~-(uint)NAN(fVar32) & (uint)fVar29 |
                                -(uint)NAN(fVar32) & (uint)fVar34);
                if (fVar33 < fVar34) goto LAB_141488e2c;
              }
              uVar22 = uVar22 + 1;
              lVar14 = lVar14 + 0x28;
              lVar16 = lVar16 + -0x28;
            } while (lVar16 != 0);
          }
          goto LAB_141488c70;
        }
        pdb_142dc81f2(uVar20,uVar19,&UNK_14330d288);
        goto LAB_141489428;
      }
LAB_141488c70:
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar19);
LAB_141489369:
    param_1 = (ulonglong *)param_1[1];
    puStack_148 = &uStack_171;
    if (1 < uVar19) {
      if (uVar19 < 0x15) {
        lVar21 = 0x28;
        do {
          pdb_14145b0e0(param_1,(longlong)param_1 + lVar21);
          lVar21 = lVar21 + 0x28;
        } while (uVar19 * 0x28 != lVar21);
      }
      else {
LAB_14148943a:
        pdb_141465400(param_1,uVar19,&puStack_148);
      }
    }
  }
  return;
LAB_141488e2c:
  if (lVar14 != lVar11 + uVar8) {
    fVar27 = fVar34 - fVar33;
    uVar17 = ((lVar11 + uVar8) - lVar14) / 0x28;
    pbVar15 = (byte *)(lVar14 + 0x20);
    uVar13 = uVar22;
    do {
      uVar13 = uVar13 + 1;
      if ((uVar20 != uVar13) && (*pbVar15 == bVar4)) {
        fVar29 = *(float *)(pbVar15 + -0x10);
        fVar30 = *(float *)(pbVar15 + -8);
        if (*(longlong *)(pbVar15 + -0x20) == 1) {
          if (((byte)uVar18 & *(longlong *)(pbVar15 + -0x18) == lVar9) != 0) {
LAB_141488eca:
            if ((fVar31 <= *(float *)(pbVar15 + -4) + fVar12) &&
               (*(float *)(pbVar15 + -0xc) <= fVar26)) {
              fVar28 = fVar29;
              if (fVar29 <= fVar25) {
                fVar28 = fVar25;
              }
              fVar28 = (float)(~uVar24 & (uint)fVar28 | uVar24 & (uint)fVar29);
              fVar29 = fVar30;
              if (fVar32 <= fVar30) {
                fVar29 = fVar32;
              }
              fVar29 = (float)(~-(uint)NAN(fVar32) & (uint)fVar29 |
                              -(uint)NAN(fVar32) & (uint)fVar30);
              if ((fVar28 < fVar29) &&
                 (fVar30 = fVar29 - fVar28,
                 (int)((uint)((int)fVar27 >> 0x1f) >> 1 ^ (uint)fVar27) <=
                 (int)((uint)((int)fVar30 >> 0x1f) >> 1 ^ (uint)fVar30))) {
                uVar22 = uVar13;
                fVar33 = fVar28;
                fVar34 = fVar29;
                fVar27 = fVar30;
              }
            }
          }
        }
        else if ((uVar18 & 1) == 0) goto LAB_141488eca;
      }
      pbVar15 = pbVar15 + 0x28;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  uStack_170 = uVar18;
  lStack_150 = lVar21;
  if (uVar19 <= uVar22) {
LAB_141489428:
    pdb_142dc81f2(uVar22,uVar19,&UNK_14330d2a0);
    goto LAB_14148943a;
  }
  fVar27 = *(float *)(uVar8 + 0x10 + uVar22 * 0x28);
  uVar3 = *(undefined8 *)(uVar8 + 0x14 + uVar22 * 0x28);
  fVar29 = (float)uVar3;
  fVar26 = *(float *)(uVar8 + 0x1c + uVar22 * 0x28);
  uVar6 = *(undefined1 *)(uVar8 + 0x20 + uVar22 * 0x28);
  uStack_160 = *(undefined8 *)(uVar8 + uVar22 * 0x28);
  uStack_168 = *(undefined8 *)(uVar8 + 8 + uVar22 * 0x28);
  uVar18 = uVar20;
  if (uVar20 < uVar22) {
    uVar18 = uVar22;
  }
  uVar7 = *(undefined1 *)(uVar8 + 0x21 + uVar22 * 0x28);
  if (uVar20 <= uVar22) {
    uVar22 = uVar20;
  }
  lStack_158 = *(longlong *)(uVar8 + uVar18 * 0x28);
  func_0x000142e32770(uVar8 + uVar18 * 0x28,uVar8 + uVar18 * 0x28 + 0x28,(~uVar18 + uVar19) * 0x28);
  uVar8 = uVar19 - 1;
  param_1[2] = uVar8;
  if (lStack_158 == 2) {
    pdb_142dc7ef8(uVar18,uVar8,&UNK_14330d210);
    uVar18 = uVar19;
LAB_141489464:
    pdb_142dc7ef8(uVar22,uVar18,&UNK_14330d228);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar18 = uVar8;
  if (uVar8 <= uVar22) goto LAB_141489464;
  uVar18 = param_1[1];
  lVar14 = *(longlong *)(uVar18 + uVar22 * 0x28);
  func_0x000142e32770(uVar18 + uVar22 * 0x28,uVar18 + uVar22 * 0x28 + 0x28,(~uVar22 + uVar8) * 0x28)
  ;
  lVar21 = lStack_150;
  uVar18 = uVar19 - 2;
  param_1[2] = uVar18;
  if (lVar14 == 2) goto LAB_141489464;
  if (fVar27 < fVar33) {
    if (uVar18 == *param_1) {
      pdb_142d7ede0(param_1);
    }
    uVar19 = param_1[1];
    *(undefined8 *)(uVar19 + uVar18 * 0x28) = uStack_160;
    *(undefined8 *)(uVar19 + 8 + uVar18 * 0x28) = uStack_168;
    *(float *)(uVar19 + 0x10 + uVar18 * 0x28) = fVar27;
    *(float *)(uVar19 + 0x14 + uVar18 * 0x28) = fVar29;
    *(float *)(uVar19 + 0x18 + uVar18 * 0x28) = fVar33;
    *(float *)(uVar19 + 0x1c + uVar18 * 0x28) = fVar26;
    *(undefined1 *)(uVar19 + 0x20 + uVar18 * 0x28) = uVar6;
    *(undefined1 *)(uVar19 + 0x21 + uVar18 * 0x28) = uVar7;
    param_1[2] = uVar8;
    uVar18 = uVar8;
  }
  if (fVar34 < (float)((ulonglong)uVar3 >> 0x20)) {
    if (uVar18 == *param_1) {
      pdb_142d7ede0(param_1);
    }
    uVar19 = param_1[1];
    *(undefined8 *)(uVar19 + uVar18 * 0x28) = uStack_160;
    *(undefined8 *)(uVar19 + 8 + uVar18 * 0x28) = uStack_168;
    *(float *)(uVar19 + 0x10 + uVar18 * 0x28) = fVar34;
    *(undefined8 *)(uVar19 + 0x14 + uVar18 * 0x28) = uVar3;
    *(float *)(uVar19 + 0x1c + uVar18 * 0x28) = fVar26;
    *(undefined1 *)(uVar19 + 0x20 + uVar18 * 0x28) = uVar6;
    *(undefined1 *)(uVar19 + 0x21 + uVar18 * 0x28) = uVar7;
    uVar18 = uVar18 + 1;
    param_1[2] = uVar18;
  }
  if (fVar25 < fVar33) {
    if (uVar18 == *param_1) {
      pdb_142d7ede0(param_1);
    }
    uVar19 = param_1[1];
    *(ulonglong *)(uVar19 + uVar18 * 0x28) = uStack_170;
    *(longlong *)(uVar19 + 8 + uVar18 * 0x28) = lVar9;
    *(float *)(uVar19 + 0x10 + uVar18 * 0x28) = fVar25;
    *(float *)(uVar19 + 0x14 + uVar18 * 0x28) = fVar31;
    *(float *)(uVar19 + 0x18 + uVar18 * 0x28) = fVar33;
    *(float *)(uVar19 + 0x1c + uVar18 * 0x28) = fVar1;
    *(byte *)(uVar19 + 0x20 + uVar18 * 0x28) = bVar4;
    *(byte *)(uVar19 + 0x21 + uVar18 * 0x28) = bVar5;
    uVar18 = uVar18 + 1;
    param_1[2] = uVar18;
    if (fVar34 < fVar32) goto LAB_14148925d;
LAB_141489133:
    if (uVar18 != *param_1) goto LAB_141489146;
  }
  else {
    if (fVar32 <= fVar34) goto LAB_141489133;
LAB_14148925d:
    if (uVar18 == *param_1) {
      pdb_142d7ede0(param_1);
    }
    uVar19 = param_1[1];
    *(ulonglong *)(uVar19 + uVar18 * 0x28) = uStack_170;
    *(longlong *)(uVar19 + 8 + uVar18 * 0x28) = lVar9;
    *(float *)(uVar19 + 0x10 + uVar18 * 0x28) = fVar34;
    *(undefined8 *)(uVar19 + 0x14 + uVar18 * 0x28) = uVar2;
    *(float *)(uVar19 + 0x1c + uVar18 * 0x28) = fVar1;
    *(byte *)(uVar19 + 0x20 + uVar18 * 0x28) = bVar4;
    *(byte *)(uVar19 + 0x21 + uVar18 * 0x28) = bVar5;
    uVar18 = uVar18 + 1;
    param_1[2] = uVar18;
    if (uVar18 != *param_1) goto LAB_141489146;
  }
  pdb_142d7ede0(param_1);
LAB_141489146:
  fVar27 = fVar29;
  if (fVar31 <= fVar29) {
    fVar27 = fVar31;
  }
  fVar25 = fVar26;
  if (fVar26 <= fVar1) {
    fVar25 = fVar1;
  }
  uVar19 = param_1[1];
  *(ulonglong *)(uVar19 + uVar18 * 0x28) = uStack_170;
  *(longlong *)(uVar19 + 8 + uVar18 * 0x28) = lVar9;
  *(float *)(uVar19 + 0x10 + uVar18 * 0x28) = fVar33;
  *(uint *)(uVar19 + 0x14 + uVar18 * 0x28) =
       ~-(uint)NAN(fVar31) & (uint)fVar27 | -(uint)NAN(fVar31) & (uint)fVar29;
  *(float *)(uVar19 + 0x18 + uVar18 * 0x28) = fVar34;
  *(uint *)(uVar19 + 0x1c + uVar18 * 0x28) =
       ~-(uint)NAN(fVar1) & (uint)fVar25 | -(uint)NAN(fVar1) & (uint)fVar26;
  *(byte *)(uVar19 + 0x20 + uVar18 * 0x28) = bVar4 & 1;
  *(byte *)(uVar19 + 0x21 + uVar18 * 0x28) = bVar5 & 1;
  uVar19 = uVar18 + 1;
  param_1[2] = uVar19;
  if (lVar21 == 0x3ff) {
    if (1 < *_DAT_143ca8e90) {
      puStack_148 = (undefined1 *)0x0;
      puStack_140 = &UNK_14330d1c7;
      uStack_138 = 0x46;
      uStack_130 = 0;
      puStack_128 = &UNK_14330d0b8;
      uStack_120 = 0x53;
      uStack_118 = 2;
      puStack_110 = &UNK_14330d1c7;
      uStack_108 = 0x46;
      uStack_100 = 0x93900000001;
      puStack_f8 = &UNK_14330d2b8;
      uStack_f0 = 0x65;
      pdb_140f332f0(&uStack_171,&puStack_148);
      uVar19 = param_1[2];
    }
    goto LAB_141489369;
  }
  lVar21 = lVar21 + 1;
  bVar23 = uVar20 < 2;
  uVar20 = uVar20 - 2;
  if (bVar23) {
    uVar20 = 0;
  }
  fVar27 = _DAT_142e3b1d8;
  if (uVar18 < uVar20) goto LAB_141489369;
  goto LAB_141488c7c;
}

