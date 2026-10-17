// Matched PDB: system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_vertical_wall_boards
// VA 0x141485b80, PDB extent 5115 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_vertical_wall_boards
   Extent: 5115 bytes. No whole-program auto-analysis. */

void pdb_141485b80(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  code *pcVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  ulonglong *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  bool bVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  longlong lVar19;
  byte *pbVar20;
  longlong lVar21;
  undefined1 *puVar22;
  longlong lVar23;
  char *pcVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  bool bVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  undefined4 uVar41;
  undefined1 *puStack_1c8;
  undefined *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  longlong lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined3 uStack_144;
  ulonglong uStack_140;
  undefined8 uStack_138;
  longlong lStack_130;
  ulonglong uStack_128;
  longlong lStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  ulonglong uStack_108;
  undefined1 *puStack_100;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  puVar11 = param_6;
  uStack_f0 = 0xfffffffffffffffe;
  uStack_f1 = 1;
  uVar40 = param_8;
  uStack_138 = param_4;
  pdb_141484310(&puStack_1c8,param_2,param_3,param_7,param_8,param_9);
  puStack_118 = puStack_1c0;
  pdb_141484710(puStack_1c0,puStack_1b8,puVar11,0);
  if (puStack_1c8 != (undefined1 *)0x0) {
    func_0x0001406abac0(puStack_118,(longlong)puStack_1c8 << 4,4);
  }
  uStack_140 = *param_6;
  uStack_128 = param_6[1];
  puVar22 = (undefined1 *)param_6[2];
  *param_6 = 0;
  param_6[1] = 8;
  param_6[2] = 0;
  puStack_118 = puVar22;
  if (puVar22 == (undefined1 *)0x0) {
    uVar16 = 8;
    lVar15 = 1;
LAB_141485cee:
    uVar12 = param_10;
    fVar10 = _DAT_142e37870;
    fVar9 = _DAT_142e37848;
    uVar28 = _DAT_142e377e0;
    puStack_100 = (undefined1 *)0x0;
    lVar19 = uStack_128 + 0x20;
    puVar22 = (undefined1 *)0x0;
    lVar23 = uStack_128 - 7;
    lStack_120 = lVar15;
    puStack_110 = puStack_118;
    uStack_108 = uVar16;
LAB_141485d3f:
    puVar1 = puStack_100;
    uVar16 = uStack_108;
    uVar41 = (undefined4)((ulonglong)uVar40 >> 0x20);
    puVar13 = (undefined4 *)(lVar23 + (longlong)puVar22 * 0x28);
    puVar26 = puVar22;
    while (puVar17 = puVar13, puVar26 < puStack_118) {
      puVar22 = puVar26 + 1;
      pcVar24 = puVar26 + lStack_120;
      puVar13 = puVar17 + 10;
      puVar26 = puVar22;
      if (*pcVar24 == '\0') goto code_r0x000141485d6b;
    }
    puStack_1c8 = &uStack_f2;
    if ((undefined1 *)0x1 < puStack_100) {
      if (puStack_100 < (undefined1 *)0x15) {
        lVar19 = uStack_108 + (longlong)puStack_100 * 0x28;
        lVar15 = uStack_108 + 0x28;
        do {
          pdb_14145b0e0(uVar16,lVar15);
          uVar41 = (undefined4)((ulonglong)uVar40 >> 0x20);
          lVar15 = lVar15 + 0x28;
        } while (lVar15 != lVar19);
      }
      else {
        pdb_141465400(uStack_108,puStack_100,&puStack_1c8);
      }
    }
    puVar11 = param_6;
    puStack_1b8 = puStack_100;
    puStack_1c8 = puStack_110;
    puStack_1c0 = (undefined *)uStack_108;
    if (*param_6 != 0) {
      func_0x0001406abac0(param_6[1],*param_6 * 0x28,8);
    }
    puVar11[2] = (ulonglong)puStack_1b8;
    *puVar11 = (ulonglong)puStack_1c8;
    puVar11[1] = (ulonglong)puStack_1c0;
    if (puStack_118 != (undefined1 *)0x0) {
      func_0x0001406abac0(lStack_120,puStack_118,1);
    }
    if (uStack_140 != 0) {
      func_0x0001406abac0(uStack_128,uStack_140 * 0x28,8);
    }
    puStack_1b8 = (undefined1 *)puVar11[2];
    puStack_1c8 = (undefined1 *)*puVar11;
    puStack_1c0 = (undefined *)puVar11[1];
    uStack_f1 = 0;
    pdb_1414536d0(&puStack_110,&puStack_1c8,uStack_138,&param_5,CONCAT44(uVar41,uVar12));
    fVar10 = _DAT_142e3b1d8;
    if (puStack_100 == (undefined1 *)0x0) goto LAB_141486838;
    puVar22 = (undefined1 *)0x0;
    lVar15 = 0;
    do {
      while (fVar29 = (float)pdb_140deec10(uStack_108 + (longlong)puVar22 * 0x28 + 0x10),
            puVar1 = puStack_100, fVar29 < fVar10) {
        if (puStack_100 <= puVar22) {
          pdb_142dc81f2(puVar22,puStack_100,&UNK_14330d170);
          goto LAB_1414869d2;
        }
        puVar26 = *(undefined1 **)(uStack_108 + (longlong)puVar22 * 0x28);
        lVar23 = *(longlong *)(uStack_108 + 8 + (longlong)puVar22 * 0x28);
        uVar40 = *(undefined8 *)(uStack_108 + 0x10 + (longlong)puVar22 * 0x28);
        fVar36 = (float)uVar40;
        fVar37 = (float)((ulonglong)uVar40 >> 0x20);
        uVar2 = *(undefined8 *)(uStack_108 + 0x18 + (longlong)puVar22 * 0x28);
        fVar34 = (float)uVar2;
        fVar35 = (float)((ulonglong)uVar2 >> 0x20);
        bVar6 = *(byte *)(uStack_108 + 0x20 + (longlong)puVar22 * 0x28);
        lVar8 = (longlong)puStack_100 * 0x28;
        fVar29 = fVar34 + fVar9;
        uVar28 = -(uint)NAN(fVar37);
        lVar19 = uStack_108 + 0x28;
        if (((ulonglong)puVar26 & 1) == 0) {
          puVar25 = (undefined1 *)0x0;
          lVar21 = lVar8;
          do {
            if (((puVar22 != puVar25) && (*(byte *)(lVar19 + -8) == bVar6)) &&
               (((*(byte *)(lVar19 + -0x28) & 1) == 0 &&
                ((fVar36 <= *(float *)(lVar19 + -0x10) + fVar9 &&
                 (*(float *)(lVar19 + -0x18) <= fVar29)))))) {
              fVar38 = *(float *)(lVar19 + -0x14);
              fVar39 = *(float *)(lVar19 + -0xc);
              fVar30 = fVar38;
              if (fVar38 <= fVar37) {
                fVar30 = fVar37;
              }
              fVar38 = (float)(~uVar28 & (uint)fVar30 | uVar28 & (uint)fVar38);
              fVar30 = fVar39;
              if (fVar35 <= fVar39) {
                fVar30 = fVar35;
              }
              fVar39 = (float)(~-(uint)NAN(fVar35) & (uint)fVar30 |
                              -(uint)NAN(fVar35) & (uint)fVar39);
              if (fVar38 < fVar39) goto LAB_1414862ec;
            }
            puVar25 = puVar25 + 1;
            lVar19 = lVar19 + 0x28;
            lVar21 = lVar21 + -0x28;
          } while (lVar21 != 0);
          break;
        }
        puVar25 = (undefined1 *)0x0;
        lVar21 = lVar8;
        while ((((puVar22 == puVar25 || (*(byte *)(lVar19 + -8) != bVar6)) ||
                ((*(byte *)(lVar19 + -0x28) & 1) == 0)) ||
               (((*(longlong *)(lVar19 + -0x20) != lVar23 ||
                 (*(float *)(lVar19 + -0x10) + fVar9 < fVar36)) ||
                (fVar29 < *(float *)(lVar19 + -0x18)))))) {
LAB_1414861e0:
          puVar25 = puVar25 + 1;
          lVar19 = lVar19 + 0x28;
          lVar21 = lVar21 + -0x28;
          if (lVar21 == 0) goto LAB_141486130;
        }
        fVar38 = *(float *)(lVar19 + -0x14);
        fVar39 = *(float *)(lVar19 + -0xc);
        fVar30 = fVar38;
        if (fVar38 <= fVar37) {
          fVar30 = fVar37;
        }
        fVar38 = (float)(~uVar28 & (uint)fVar30 | uVar28 & (uint)fVar38);
        fVar30 = fVar39;
        if (fVar35 <= fVar39) {
          fVar30 = fVar35;
        }
        fVar39 = (float)(~-(uint)NAN(fVar35) & (uint)fVar30 | -(uint)NAN(fVar35) & (uint)fVar39);
        if (fVar39 <= fVar38) goto LAB_1414861e0;
LAB_1414862ec:
        if (lVar19 != lVar8 + uStack_108) {
          fVar30 = fVar39 - fVar38;
          uVar16 = ((lVar8 + uStack_108) - lVar19) / 0x28;
          pbVar20 = (byte *)(lVar19 + 0x20);
          puVar18 = puVar25;
          do {
            puVar18 = puVar18 + 1;
            if ((puVar22 != puVar18) && (*pbVar20 == bVar6)) {
              fVar32 = *(float *)(pbVar20 + -0xc);
              fVar33 = *(float *)(pbVar20 + -4);
              if (*(longlong *)(pbVar20 + -0x20) == 1) {
                if (((byte)puVar26 & *(longlong *)(pbVar20 + -0x18) == lVar23) != 0) {
LAB_14148638a:
                  if ((fVar36 <= *(float *)(pbVar20 + -8) + fVar9) &&
                     (*(float *)(pbVar20 + -0x10) <= fVar29)) {
                    fVar31 = fVar32;
                    if (fVar32 <= fVar37) {
                      fVar31 = fVar37;
                    }
                    fVar31 = (float)(~uVar28 & (uint)fVar31 | uVar28 & (uint)fVar32);
                    fVar32 = fVar33;
                    if (fVar35 <= fVar33) {
                      fVar32 = fVar35;
                    }
                    fVar32 = (float)(~-(uint)NAN(fVar35) & (uint)fVar32 |
                                    -(uint)NAN(fVar35) & (uint)fVar33);
                    if ((fVar31 < fVar32) &&
                       (fVar33 = fVar32 - fVar31,
                       (int)((uint)((int)fVar30 >> 0x1f) >> 1 ^ (uint)fVar30) <=
                       (int)((uint)((int)fVar33 >> 0x1f) >> 1 ^ (uint)fVar33))) {
                      puVar25 = puVar18;
                      fVar38 = fVar31;
                      fVar39 = fVar32;
                      fVar30 = fVar33;
                    }
                  }
                }
              }
              else if (((ulonglong)puVar26 & 1) == 0) goto LAB_14148638a;
            }
            pbVar20 = pbVar20 + 0x28;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        uStack_128 = CONCAT71(uStack_128._1_7_,
                              *(undefined1 *)(uStack_108 + 0x21 + (longlong)puVar22 * 0x28));
        lStack_120 = lVar15;
        puStack_118 = puVar26;
        if (puStack_100 <= puVar25) {
          pdb_142dc81f2(puVar25,puStack_100,&UNK_14330d188);
          goto LAB_1414869d2;
        }
        uVar3 = *(undefined8 *)(uStack_108 + 0x10 + (longlong)puVar25 * 0x28);
        fVar32 = (float)uVar3;
        uVar4 = *(undefined8 *)(uStack_108 + 0x18 + (longlong)puVar25 * 0x28);
        fVar29 = (float)uVar4;
        fVar30 = (float)((ulonglong)uVar4 >> 0x20);
        uStack_138 = CONCAT71(uStack_138._1_7_,
                              *(undefined1 *)(uStack_108 + 0x20 + (longlong)puVar25 * 0x28));
        uStack_158 = *(undefined8 *)(uStack_108 + (longlong)puVar25 * 0x28);
        uStack_150 = *(undefined8 *)(uStack_108 + 8 + (longlong)puVar25 * 0x28);
        lStack_130 = CONCAT71(lStack_130._1_7_,
                              *(undefined1 *)(uStack_108 + 0x21 + (longlong)puVar25 * 0x28));
        puVar26 = puVar22;
        if (puVar22 < puVar25) {
          puVar26 = puVar25;
        }
        uStack_140 = *(ulonglong *)(uStack_108 + (longlong)puVar26 * 0x28);
        func_0x000142e32770(uStack_108 + (longlong)puVar26 * 0x28,
                            uStack_108 + (longlong)puVar26 * 0x28 + 0x28,
                            (longlong)(puStack_100 + ~(ulonglong)puVar26) * 0x28);
        puVar18 = puVar1 + -1;
        puStack_100 = puVar18;
        if (uStack_140 == 2) {
          pdb_142dc7ef8(puVar26,puVar18,&UNK_14330d210);
          goto LAB_1414869d2;
        }
        if (puVar22 <= puVar25) {
          puVar25 = puVar22;
        }
        puVar26 = puVar18;
        if (puVar18 <= puVar25) {
LAB_1414869bf:
          puStack_100 = puVar26;
          pdb_142dc7ef8(puVar25,puVar26,&UNK_14330d228);
          goto LAB_1414869d2;
        }
        lVar19 = *(longlong *)(uStack_108 + (longlong)puVar25 * 0x28);
        func_0x000142e32770(uStack_108 + (longlong)puVar25 * 0x28,
                            uStack_108 + (longlong)puVar25 * 0x28 + 0x28,
                            (longlong)(puVar18 + ~(ulonglong)puVar25) * 0x28);
        lVar15 = lStack_120;
        puVar26 = puVar1 + -2;
        if (lVar19 == 2) goto LAB_1414869bf;
        if (fVar38 <= (float)((ulonglong)uVar3 >> 0x20)) {
          if (fVar30 <= fVar39) goto LAB_14148657e;
LAB_1414865af:
          if (puVar26 == puStack_110) {
            puStack_100 = puVar26;
            pdb_142d7ede0(&puStack_110);
          }
          *(undefined8 *)(uStack_108 + (longlong)puVar26 * 0x28) = uStack_158;
          *(undefined8 *)(uStack_108 + 8 + (longlong)puVar26 * 0x28) = uStack_150;
          *(float *)(uStack_108 + 0x10 + (longlong)puVar26 * 0x28) = fVar32;
          *(float *)(uStack_108 + 0x14 + (longlong)puVar26 * 0x28) = fVar39;
          *(undefined8 *)(uStack_108 + 0x18 + (longlong)puVar26 * 0x28) = uVar4;
          *(undefined1 *)(uStack_108 + 0x20 + (longlong)puVar26 * 0x28) = (undefined1)uStack_138;
          *(undefined1 *)(uStack_108 + 0x21 + (longlong)puVar26 * 0x28) = (undefined1)lStack_130;
          puStack_100 = puVar26 + 1;
          if (fVar38 <= fVar37) goto LAB_141486588;
LAB_141486612:
          puVar1 = puStack_100;
          if (puStack_100 == puStack_110) {
            pdb_142d7ede0(&puStack_110);
          }
          *(undefined **)(uStack_108 + (longlong)puVar1 * 0x28) = puStack_118;
          *(longlong *)(uStack_108 + 8 + (longlong)puVar1 * 0x28) = lVar23;
          *(undefined8 *)(uStack_108 + 0x10 + (longlong)puVar1 * 0x28) = uVar40;
          *(float *)(uStack_108 + 0x18 + (longlong)puVar1 * 0x28) = fVar34;
          *(float *)(uStack_108 + 0x1c + (longlong)puVar1 * 0x28) = fVar38;
          *(byte *)(uStack_108 + 0x20 + (longlong)puVar1 * 0x28) = bVar6;
          *(byte *)(uStack_108 + 0x21 + (longlong)puVar1 * 0x28) = (byte)uStack_128;
          puStack_100 = puVar1 + 1;
          if (fVar35 <= fVar39) goto LAB_141486592;
LAB_14148666e:
          puVar1 = puStack_100;
          if (puStack_100 == puStack_110) {
            pdb_142d7ede0(&puStack_110);
          }
          *(undefined **)(uStack_108 + (longlong)puVar1 * 0x28) = puStack_118;
          *(longlong *)(uStack_108 + 8 + (longlong)puVar1 * 0x28) = lVar23;
          *(float *)(uStack_108 + 0x10 + (longlong)puVar1 * 0x28) = fVar36;
          *(float *)(uStack_108 + 0x14 + (longlong)puVar1 * 0x28) = fVar39;
          *(undefined8 *)(uStack_108 + 0x18 + (longlong)puVar1 * 0x28) = uVar2;
          *(byte *)(uStack_108 + 0x20 + (longlong)puVar1 * 0x28) = bVar6;
          *(byte *)(uStack_108 + 0x21 + (longlong)puVar1 * 0x28) = (byte)uStack_128;
          puStack_100 = puVar1 + 1;
          if (puStack_100 == puStack_110) {
LAB_1414866c6:
            puVar1 = puStack_100;
            pdb_142d7ede0(&puStack_110);
            puStack_100 = puVar1;
          }
        }
        else {
          if (puVar26 == puStack_110) {
            puStack_100 = puVar26;
            pdb_142d7ede0(&puStack_110);
          }
          *(undefined8 *)(uStack_108 + (longlong)puVar26 * 0x28) = uStack_158;
          *(undefined8 *)(uStack_108 + 8 + (longlong)puVar26 * 0x28) = uStack_150;
          *(undefined8 *)(uStack_108 + 0x10 + (longlong)puVar26 * 0x28) = uVar3;
          *(float *)(uStack_108 + 0x18 + (longlong)puVar26 * 0x28) = fVar29;
          *(float *)(uStack_108 + 0x1c + (longlong)puVar26 * 0x28) = fVar38;
          *(undefined1 *)(uStack_108 + 0x20 + (longlong)puVar26 * 0x28) = (undefined1)uStack_138;
          *(undefined1 *)(uStack_108 + 0x21 + (longlong)puVar26 * 0x28) = (undefined1)lStack_130;
          puVar26 = puVar18;
          if (fVar39 < fVar30) goto LAB_1414865af;
LAB_14148657e:
          puStack_100 = puVar26;
          if (fVar37 < fVar38) goto LAB_141486612;
LAB_141486588:
          if (fVar39 < fVar35) goto LAB_14148666e;
LAB_141486592:
          if (puStack_100 == puStack_110) goto LAB_1414866c6;
        }
        fVar35 = fVar32;
        if (fVar36 <= fVar32) {
          fVar35 = fVar36;
        }
        fVar37 = fVar29;
        if (fVar29 <= fVar34) {
          fVar37 = fVar34;
        }
        *(undefined **)(uStack_108 + (longlong)puStack_100 * 0x28) = puStack_118;
        *(longlong *)(uStack_108 + 8 + (longlong)puStack_100 * 0x28) = lVar23;
        *(uint *)(uStack_108 + 0x10 + (longlong)puStack_100 * 0x28) =
             ~-(uint)NAN(fVar36) & (uint)fVar35 | -(uint)NAN(fVar36) & (uint)fVar32;
        *(float *)(uStack_108 + 0x14 + (longlong)puStack_100 * 0x28) = fVar38;
        *(uint *)(uStack_108 + 0x18 + (longlong)puStack_100 * 0x28) =
             ~-(uint)NAN(fVar34) & (uint)fVar37 | -(uint)NAN(fVar34) & (uint)fVar29;
        *(float *)(uStack_108 + 0x1c + (longlong)puStack_100 * 0x28) = fVar39;
        *(byte *)(uStack_108 + 0x20 + (longlong)puStack_100 * 0x28) = bVar6 & 1;
        *(byte *)(uStack_108 + 0x21 + (longlong)puStack_100 * 0x28) = (byte)uStack_128 & 1;
        puVar1 = puStack_100 + 1;
        if (lVar15 == 0x3ff) {
          puStack_100 = puVar1;
          if (1 < *_DAT_143ca8e90) {
            puStack_1c8 = (undefined1 *)0x0;
            puStack_1c0 = &UNK_14330d1c7;
            puStack_1b8 = (undefined1 *)0x46;
            uStack_1b0 = 0;
            puStack_1a8 = &UNK_14330d0b8;
            uStack_1a0 = 0x53;
            uStack_198 = 2;
            puStack_190 = &UNK_14330d1c7;
            uStack_188 = 0x46;
            uStack_180 = 0x8d500000001;
            puStack_178 = &UNK_14330d1a0;
            uStack_170 = 0x4f;
            pdb_140f332f0(&uStack_f2,&puStack_1c8);
          }
          goto LAB_14148681c;
        }
        lVar15 = lVar15 + 1;
        bVar27 = puVar22 < (undefined1 *)0x2;
        puVar22 = puVar22 + -2;
        if (bVar27) {
          puVar22 = (undefined1 *)0x0;
        }
        bVar27 = puStack_100 < puVar22;
        puStack_100 = puVar1;
        if (bVar27) goto LAB_14148681c;
      }
LAB_141486130:
      puVar22 = puVar22 + 1;
    } while (puVar22 < puStack_100);
LAB_14148681c:
    uVar16 = uStack_108;
    puStack_1c8 = &uStack_f2;
    if ((undefined1 *)0x1 < puStack_100) {
      if (puStack_100 < (undefined1 *)0x15) {
        lVar19 = uStack_108 + (longlong)puStack_100 * 0x28;
        lVar15 = uStack_108 + 0x28;
        do {
          pdb_14145b0e0(uVar16,lVar15);
          lVar15 = lVar15 + 0x28;
        } while (lVar15 != lVar19);
      }
      else {
        pdb_141465400(uStack_108,puStack_100,&puStack_1c8);
      }
    }
LAB_141486838:
    param_1[2] = (ulonglong)puStack_100;
    *param_1 = (ulonglong)puStack_110;
    param_1[1] = uStack_108;
    return;
  }
  pdb_14007ee60();
  lVar15 = func_0x0001406abae0(puVar22,1);
  if (lVar15 == 0) {
    pdb_142dc7e2a(1,puVar22);
  }
  else {
    pdb_14007ee60();
    uVar16 = func_0x0001406abab0((longlong)puVar22 * 0x28,8);
    if (uVar16 != 0) goto LAB_141485cee;
    lStack_160 = lVar15;
    pdb_142dc7e2a(8,(longlong)puVar22 * 0x28);
  }
  goto LAB_1414869d2;
code_r0x000141485d6b:
  puVar22[lStack_120 + -1] = 1;
  uVar16 = *(ulonglong *)((longlong)puVar17 + 7);
  lVar15 = *(longlong *)((longlong)puVar17 + 0xf);
  fVar29 = *(float *)((longlong)puVar17 + 0x17);
  fVar34 = *(float *)((longlong)puVar17 + 0x1b);
  fVar35 = *(float *)((longlong)puVar17 + 0x1f);
  fVar36 = *(float *)((longlong)puVar17 + 0x23);
  cVar5 = *(char *)((longlong)puVar17 + 0x27);
  uStack_144 = (undefined3)((uint)*(undefined4 *)((longlong)puVar17 + 0x2b) >> 8);
  uStack_148 = puVar17[10];
  bVar27 = false;
  puVar26 = (undefined1 *)0x0;
  lStack_130 = lVar23;
  if ((uVar16 & 1) == 0) {
LAB_141485dcf:
    do {
      pcVar24 = (char *)(lVar19 + (longlong)puVar26 * 0x28);
      puVar25 = puVar26;
      do {
        if (puStack_118 <= puVar25) goto LAB_1414868b0;
        if ((((puVar25[lStack_120] == '\0') && ((pcVar24[-0x20] & 1U) == 0)) && (*pcVar24 == cVar5))
           && ((((float)((uint)(fVar34 - *(float *)(pcVar24 + -0xc)) & uVar28) <= fVar9 &&
                ((float)((uint)(fVar36 - *(float *)(pcVar24 + -4)) & uVar28) <= fVar9)) &&
               ((fVar37 = *(float *)(pcVar24 + -8), fVar29 <= fVar37 + fVar10 &&
                (fVar38 = *(float *)(pcVar24 + -0x10), fVar38 <= fVar35 + fVar10)))))) {
          fVar39 = fVar38;
          if (fVar29 <= fVar38) {
            fVar39 = fVar29;
          }
          fVar29 = (float)(~-(uint)NAN(fVar29) & (uint)fVar39 | -(uint)NAN(fVar29) & (uint)fVar38);
          fVar38 = fVar37;
          if (fVar37 <= fVar35) {
            fVar38 = fVar35;
          }
          fVar35 = (float)(~-(uint)NAN(fVar35) & (uint)fVar38 | -(uint)NAN(fVar35) & (uint)fVar37);
          puVar25[lStack_120] = 1;
          puVar26 = puVar25 + 1;
          bVar27 = true;
          bVar14 = bVar27;
          if (puVar26 < puStack_118) goto LAB_141485dcf;
          break;
        }
        puVar25 = puVar25 + 1;
        pcVar24 = pcVar24 + 0x28;
        bVar14 = bVar27;
      } while (puVar25 < puStack_118);
      puVar26 = (undefined1 *)0x0;
      bVar27 = false;
    } while (bVar14);
  }
  else {
LAB_141485ecf:
    do {
      bVar14 = bVar27;
      pcVar24 = (char *)(lVar19 + (longlong)puVar26 * 0x28);
      puVar25 = puVar26;
      do {
        if (puStack_118 <= puVar25) goto LAB_1414868b0;
        if ((((((puVar25[lStack_120] == '\0') && (*(longlong *)(pcVar24 + -0x20) == 1)) &&
              (*(longlong *)(pcVar24 + -0x18) == lVar15)) &&
             ((*pcVar24 == cVar5 &&
              ((float)((uint)(fVar34 - *(float *)(pcVar24 + -0xc)) & uVar28) <= fVar9)))) &&
            ((float)((uint)(fVar36 - *(float *)(pcVar24 + -4)) & uVar28) <= fVar9)) &&
           ((fVar37 = *(float *)(pcVar24 + -8), fVar29 <= fVar37 + fVar10 &&
            (fVar38 = *(float *)(pcVar24 + -0x10), fVar38 <= fVar35 + fVar10)))) {
          fVar39 = fVar38;
          if (fVar29 <= fVar38) {
            fVar39 = fVar29;
          }
          fVar29 = (float)(~-(uint)NAN(fVar29) & (uint)fVar39 | -(uint)NAN(fVar29) & (uint)fVar38);
          fVar38 = fVar37;
          if (fVar37 <= fVar35) {
            fVar38 = fVar35;
          }
          fVar35 = (float)(~-(uint)NAN(fVar35) & (uint)fVar38 | -(uint)NAN(fVar35) & (uint)fVar37);
          puVar25[lStack_120] = 1;
          puVar26 = puVar25 + 1;
          bVar14 = true;
          bVar27 = bVar14;
          if (puVar26 < puStack_118) goto LAB_141485ecf;
          break;
        }
        puVar25 = puVar25 + 1;
        pcVar24 = pcVar24 + 0x28;
      } while (puVar25 < puStack_118);
      puVar26 = (undefined1 *)0x0;
      bVar27 = false;
    } while (bVar14);
  }
  if (puStack_100 == puStack_110) {
    pdb_142d7ede0(&puStack_110);
  }
  *(ulonglong *)(uStack_108 + (longlong)puVar1 * 0x28) = uVar16;
  *(longlong *)(uStack_108 + 8 + (longlong)puVar1 * 0x28) = lVar15;
  *(float *)(uStack_108 + 0x10 + (longlong)puVar1 * 0x28) = fVar29;
  *(float *)(uStack_108 + 0x14 + (longlong)puVar1 * 0x28) = fVar34;
  *(float *)(uStack_108 + 0x18 + (longlong)puVar1 * 0x28) = fVar35;
  *(float *)(uStack_108 + 0x1c + (longlong)puVar1 * 0x28) = fVar36;
  *(char *)(uStack_108 + 0x20 + (longlong)puVar1 * 0x28) = cVar5;
  *(undefined4 *)(uStack_108 + 0x21 + (longlong)puVar1 * 0x28) = uStack_148;
  *(uint *)(uStack_108 + 0x24 + (longlong)puVar1 * 0x28) = CONCAT31(uStack_144,uStack_148._3_1_);
  puStack_100 = puVar1 + 1;
  lVar23 = lStack_130;
  goto LAB_141485d3f;
LAB_1414868b0:
  if (puVar26 <= puStack_118) {
    puVar26 = puStack_118;
  }
  pdb_142dc81f2(puVar26,puStack_118,&UNK_14330d270);
LAB_1414869d2:
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}

