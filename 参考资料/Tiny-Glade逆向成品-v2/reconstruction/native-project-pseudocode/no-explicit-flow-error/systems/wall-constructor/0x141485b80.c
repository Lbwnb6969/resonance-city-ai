// VA 0x141485b80, PDB extent 5115 bytes
// system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_vertical_wall_boards
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_vertical_wall_boards
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
   Extent: 5115 */

void pdb_141485b80(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  ulonglong *puVar13;
  undefined4 uVar14;
  bool bVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  byte *pbVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  bool bVar26;
  uint uVar27;
  float fVar28;
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
  undefined1 *puStack_1c8;
  byte *pbStack_1c0;
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
  byte *pbStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined3 uStack_144;
  ulonglong uStack_140;
  undefined8 uStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  undefined1 *puStack_110;
  byte *pbStack_108;
  undefined1 *puStack_100;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  puVar13 = param_6;
  uStack_f0 = 0xfffffffffffffffe;
  uStack_f1 = 1;
  uStack_138 = param_4;
  pdb_141484310(&puStack_1c8,param_2,param_3,param_7,param_8,param_9);
  pbStack_118 = pbStack_1c0;
  pdb_141484710(pbStack_1c0,puStack_1b8,puVar13,0);
  if (puStack_1c8 != (undefined1 *)0x0) {
    pub_1406abac0(pbStack_118,(longlong)puStack_1c8 << 4,4);
  }
  uStack_140 = *param_6;
  pbStack_128 = (byte *)param_6[1];
  puVar22 = (undefined1 *)param_6[2];
  *param_6 = 0;
  param_6[1] = 8;
  param_6[2] = 0;
  pbStack_118 = puVar22;
  if (puVar22 == (undefined1 *)0x0) {
    pbVar17 = (byte *)0x8;
    pbVar16 = (byte *)0x1;
LAB_141485cee:
    pbVar1 = pbStack_128;
    uVar14 = param_10;
    fVar12 = _DAT_142e37870;
    fVar11 = _DAT_142e37848;
    uVar27 = _DAT_142e377e0;
    puStack_100 = (undefined1 *)0x0;
    puVar22 = (undefined1 *)0x0;
    pbVar23 = pbStack_128 + -7;
    pbStack_120 = pbVar16;
    puStack_110 = pbStack_118;
    pbStack_108 = pbVar17;
LAB_141485d3f:
    puVar2 = puStack_100;
    pbVar16 = pbStack_108;
    pbVar17 = pbVar23 + (longlong)puVar22 * 0x28;
    while (puVar24 = puVar22, pbVar18 = pbVar17, puVar24 < pbStack_118) {
      puVar22 = puVar24 + 1;
      pbVar17 = pbVar18 + 0x28;
      if (pbStack_120[(longlong)puVar24] == 0) goto code_r0x000141485d6b;
    }
    puStack_1c8 = &uStack_f2;
    if ((undefined1 *)0x1 < puStack_100) {
      if (puStack_100 < (undefined1 *)0x15) {
        pbVar1 = pbStack_108 + (longlong)puStack_100 * 0x28;
        pbVar17 = pbStack_108 + 0x28;
        do {
          pdb_14145b0e0(pbVar16,pbVar17);
          pbVar17 = pbVar17 + 0x28;
        } while (pbVar17 != pbVar1);
      }
      else {
        pdb_141465400(pbStack_108,puStack_100,&puStack_1c8);
      }
    }
    puVar13 = param_6;
    puStack_1b8 = puStack_100;
    puStack_1c8 = puStack_110;
    pbStack_1c0 = pbStack_108;
    if (*param_6 != 0) {
      pub_1406abac0((byte *)param_6[1],*param_6 * 0x28,8);
    }
    puVar13[2] = (ulonglong)puStack_1b8;
    *puVar13 = (ulonglong)puStack_1c8;
    puVar13[1] = (ulonglong)pbStack_1c0;
    if (pbStack_118 != (undefined1 *)0x0) {
      pub_1406abac0(pbStack_120,(ulonglong)pbStack_118,1);
    }
    if (uStack_140 != 0) {
      pub_1406abac0(pbStack_128,uStack_140 * 0x28,8);
    }
    puStack_1b8 = (undefined1 *)puVar13[2];
    puStack_1c8 = (undefined1 *)*puVar13;
    pbStack_1c0 = (byte *)puVar13[1];
    uStack_f1 = 0;
    pdb_1414536d0(&puStack_110,&puStack_1c8,uStack_138,&param_5,uVar14);
    fVar12 = _DAT_142e3b1d8;
    if (puStack_100 == (undefined1 *)0x0) goto LAB_141486838;
    puVar22 = (undefined1 *)0x0;
    pbVar16 = (byte *)0x0;
    do {
      while (fVar28 = (float)pdb_140deec10(pbStack_108 + (longlong)puVar22 * 0x28 + 0x10),
            puVar2 = puStack_100, fVar28 < fVar12) {
        if (puStack_100 <= puVar22) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(puVar22,puStack_100,&UNK_14330d170);
        }
        puVar24 = *(undefined1 **)(pbStack_108 + (longlong)puVar22 * 0x28);
        lVar8 = *(longlong *)(pbStack_108 + (longlong)puVar22 * 0x28 + 8);
        uVar3 = *(undefined8 *)(pbStack_108 + (longlong)puVar22 * 0x28 + 0x10);
        fVar35 = (float)uVar3;
        fVar36 = (float)((ulonglong)uVar3 >> 0x20);
        uVar4 = *(undefined8 *)(pbStack_108 + (longlong)puVar22 * 0x28 + 0x18);
        fVar33 = (float)uVar4;
        fVar34 = (float)((ulonglong)uVar4 >> 0x20);
        bVar7 = pbStack_108[(longlong)puVar22 * 0x28 + 0x20];
        lVar9 = (longlong)puStack_100 * 0x28;
        fVar28 = fVar33 + fVar11;
        uVar27 = -(uint)NAN(fVar36);
        pbVar17 = pbStack_108 + 0x28;
        if (((ulonglong)puVar24 & 1) == 0) {
          puVar25 = (undefined1 *)0x0;
          lVar20 = lVar9;
          do {
            if (((puVar22 != puVar25) && (pbVar17[-8] == bVar7)) &&
               (((pbVar17[-0x28] & 1) == 0 &&
                ((fVar35 <= *(float *)(pbVar17 + -0x10) + fVar11 &&
                 (*(float *)(pbVar17 + -0x18) <= fVar28)))))) {
              fVar37 = *(float *)(pbVar17 + -0x14);
              fVar38 = *(float *)(pbVar17 + -0xc);
              fVar29 = fVar37;
              if (fVar37 <= fVar36) {
                fVar29 = fVar36;
              }
              fVar37 = (float)(~uVar27 & (uint)fVar29 | uVar27 & (uint)fVar37);
              fVar29 = fVar38;
              if (fVar34 <= fVar38) {
                fVar29 = fVar34;
              }
              fVar38 = (float)(~-(uint)NAN(fVar34) & (uint)fVar29 |
                              -(uint)NAN(fVar34) & (uint)fVar38);
              if (fVar37 < fVar38) goto LAB_1414862ec;
            }
            puVar25 = puVar25 + 1;
            pbVar17 = pbVar17 + 0x28;
            lVar20 = lVar20 + -0x28;
          } while (lVar20 != 0);
          break;
        }
        puVar25 = (undefined1 *)0x0;
        lVar20 = lVar9;
        while ((((puVar22 == puVar25 || (pbVar17[-8] != bVar7)) || ((pbVar17[-0x28] & 1) == 0)) ||
               (((*(longlong *)(pbVar17 + -0x20) != lVar8 ||
                 (*(float *)(pbVar17 + -0x10) + fVar11 < fVar35)) ||
                (fVar28 < *(float *)(pbVar17 + -0x18)))))) {
LAB_1414861e0:
          puVar25 = puVar25 + 1;
          pbVar17 = pbVar17 + 0x28;
          lVar20 = lVar20 + -0x28;
          if (lVar20 == 0) goto LAB_141486130;
        }
        fVar37 = *(float *)(pbVar17 + -0x14);
        fVar38 = *(float *)(pbVar17 + -0xc);
        fVar29 = fVar37;
        if (fVar37 <= fVar36) {
          fVar29 = fVar36;
        }
        fVar37 = (float)(~uVar27 & (uint)fVar29 | uVar27 & (uint)fVar37);
        fVar29 = fVar38;
        if (fVar34 <= fVar38) {
          fVar29 = fVar34;
        }
        fVar38 = (float)(~-(uint)NAN(fVar34) & (uint)fVar29 | -(uint)NAN(fVar34) & (uint)fVar38);
        if (fVar38 <= fVar37) goto LAB_1414861e0;
LAB_1414862ec:
        if (pbVar17 != pbStack_108 + lVar9) {
          fVar29 = fVar38 - fVar37;
          uVar21 = (ulonglong)((longlong)(pbStack_108 + lVar9) - (longlong)pbVar17) / 0x28;
          pbVar17 = pbVar17 + 0x20;
          puVar19 = puVar25;
          do {
            puVar19 = puVar19 + 1;
            if ((puVar22 != puVar19) && (*pbVar17 == bVar7)) {
              fVar31 = *(float *)(pbVar17 + -0xc);
              fVar32 = *(float *)(pbVar17 + -4);
              if (*(longlong *)(pbVar17 + -0x20) == 1) {
                if (((byte)puVar24 & *(longlong *)(pbVar17 + -0x18) == lVar8) != 0) {
LAB_14148638a:
                  if ((fVar35 <= *(float *)(pbVar17 + -8) + fVar11) &&
                     (*(float *)(pbVar17 + -0x10) <= fVar28)) {
                    fVar30 = fVar31;
                    if (fVar31 <= fVar36) {
                      fVar30 = fVar36;
                    }
                    fVar30 = (float)(~uVar27 & (uint)fVar30 | uVar27 & (uint)fVar31);
                    fVar31 = fVar32;
                    if (fVar34 <= fVar32) {
                      fVar31 = fVar34;
                    }
                    fVar31 = (float)(~-(uint)NAN(fVar34) & (uint)fVar31 |
                                    -(uint)NAN(fVar34) & (uint)fVar32);
                    if ((fVar30 < fVar31) &&
                       (fVar32 = fVar31 - fVar30,
                       (int)((uint)((int)fVar29 >> 0x1f) >> 1 ^ (uint)fVar29) <=
                       (int)((uint)((int)fVar32 >> 0x1f) >> 1 ^ (uint)fVar32))) {
                      puVar25 = puVar19;
                      fVar37 = fVar30;
                      fVar38 = fVar31;
                      fVar29 = fVar32;
                    }
                  }
                }
              }
              else if (((ulonglong)puVar24 & 1) == 0) goto LAB_14148638a;
            }
            pbVar17 = pbVar17 + 0x28;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
        pbStack_128 = (byte *)CONCAT71(pbStack_128._1_7_,
                                       pbStack_108[(longlong)puVar22 * 0x28 + 0x21]);
        pbStack_120 = pbVar16;
        pbStack_118 = puVar24;
        if (puStack_100 <= puVar25) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(puVar25,puStack_100,&UNK_14330d188);
        }
        uVar5 = *(undefined8 *)(pbStack_108 + (longlong)puVar25 * 0x28 + 0x10);
        fVar31 = (float)uVar5;
        uVar6 = *(undefined8 *)(pbStack_108 + (longlong)puVar25 * 0x28 + 0x18);
        fVar28 = (float)uVar6;
        fVar29 = (float)((ulonglong)uVar6 >> 0x20);
        uStack_138 = CONCAT71(uStack_138._1_7_,pbStack_108[(longlong)puVar25 * 0x28 + 0x20]);
        uStack_158 = *(undefined8 *)(pbStack_108 + (longlong)puVar25 * 0x28);
        uStack_150 = *(undefined8 *)(pbStack_108 + (longlong)puVar25 * 0x28 + 8);
        pbStack_130 = (byte *)CONCAT71(pbStack_130._1_7_,
                                       pbStack_108[(longlong)puVar25 * 0x28 + 0x21]);
        puVar24 = puVar22;
        if (puVar22 < puVar25) {
          puVar24 = puVar25;
        }
        uStack_140 = *(ulonglong *)(pbStack_108 + (longlong)puVar24 * 0x28);
        pub_142e32770(pbStack_108 + (longlong)puVar24 * 0x28,
                      pbStack_108 + (longlong)puVar24 * 0x28 + 0x28,
                      (longlong)(puStack_100 + ~(ulonglong)puVar24) * 0x28);
        puVar19 = puVar2 + -1;
        puStack_100 = puVar19;
        if (uStack_140 == 2) {
          pdb_142dc7ef8(puVar24,puVar19,&UNK_14330d210);
          goto LAB_1414869d2;
        }
        if (puVar22 <= puVar25) {
          puVar25 = puVar22;
        }
        puVar24 = puVar19;
        if (puVar19 <= puVar25) {
LAB_1414869bf:
          puStack_100 = puVar24;
          pdb_142dc7ef8(puVar25,puVar24,&UNK_14330d228);
          goto LAB_1414869d2;
        }
        lVar9 = *(longlong *)(pbStack_108 + (longlong)puVar25 * 0x28);
        pub_142e32770(pbStack_108 + (longlong)puVar25 * 0x28,
                      pbStack_108 + (longlong)puVar25 * 0x28 + 0x28,
                      (longlong)(puVar19 + ~(ulonglong)puVar25) * 0x28);
        pbVar16 = pbStack_120;
        puVar24 = puVar2 + -2;
        if (lVar9 == 2) goto LAB_1414869bf;
        if (fVar37 <= (float)((ulonglong)uVar5 >> 0x20)) {
          if (fVar29 <= fVar38) goto LAB_14148657e;
LAB_1414865af:
          if (puVar24 == puStack_110) {
            puStack_100 = puVar24;
            pdb_142d7ede0(&puStack_110);
          }
          *(undefined8 *)(pbStack_108 + (longlong)puVar24 * 0x28) = uStack_158;
          *(undefined8 *)(pbStack_108 + (longlong)puVar24 * 0x28 + 8) = uStack_150;
          *(float *)(pbStack_108 + (longlong)puVar24 * 0x28 + 0x10) = fVar31;
          *(float *)(pbStack_108 + (longlong)puVar24 * 0x28 + 0x14) = fVar38;
          *(undefined8 *)(pbStack_108 + (longlong)puVar24 * 0x28 + 0x18) = uVar6;
          pbStack_108[(longlong)puVar24 * 0x28 + 0x20] = (byte)uStack_138;
          pbStack_108[(longlong)puVar24 * 0x28 + 0x21] = (byte)pbStack_130;
          puStack_100 = puVar24 + 1;
          if (fVar37 <= fVar36) goto LAB_141486588;
LAB_141486612:
          puVar2 = puStack_100;
          if (puStack_100 == puStack_110) {
            pdb_142d7ede0(&puStack_110);
          }
          *(byte **)(pbStack_108 + (longlong)puVar2 * 0x28) = pbStack_118;
          *(longlong *)(pbStack_108 + (longlong)puVar2 * 0x28 + 8) = lVar8;
          *(undefined8 *)(pbStack_108 + (longlong)puVar2 * 0x28 + 0x10) = uVar3;
          *(float *)(pbStack_108 + (longlong)puVar2 * 0x28 + 0x18) = fVar33;
          *(float *)(pbStack_108 + (longlong)puVar2 * 0x28 + 0x1c) = fVar37;
          pbStack_108[(longlong)puVar2 * 0x28 + 0x20] = bVar7;
          pbStack_108[(longlong)puVar2 * 0x28 + 0x21] = (byte)pbStack_128;
          puStack_100 = puVar2 + 1;
          if (fVar34 <= fVar38) goto LAB_141486592;
LAB_14148666e:
          puVar2 = puStack_100;
          if (puStack_100 == puStack_110) {
            pdb_142d7ede0(&puStack_110);
          }
          *(byte **)(pbStack_108 + (longlong)puVar2 * 0x28) = pbStack_118;
          *(longlong *)(pbStack_108 + (longlong)puVar2 * 0x28 + 8) = lVar8;
          *(float *)(pbStack_108 + (longlong)puVar2 * 0x28 + 0x10) = fVar35;
          *(float *)(pbStack_108 + (longlong)puVar2 * 0x28 + 0x14) = fVar38;
          *(undefined8 *)(pbStack_108 + (longlong)puVar2 * 0x28 + 0x18) = uVar4;
          pbStack_108[(longlong)puVar2 * 0x28 + 0x20] = bVar7;
          pbStack_108[(longlong)puVar2 * 0x28 + 0x21] = (byte)pbStack_128;
          puStack_100 = puVar2 + 1;
          if (puStack_100 == puStack_110) {
LAB_1414866c6:
            puVar2 = puStack_100;
            pdb_142d7ede0(&puStack_110);
            puStack_100 = puVar2;
          }
        }
        else {
          if (puVar24 == puStack_110) {
            puStack_100 = puVar24;
            pdb_142d7ede0(&puStack_110);
          }
          *(undefined8 *)(pbStack_108 + (longlong)puVar24 * 0x28) = uStack_158;
          *(undefined8 *)(pbStack_108 + (longlong)puVar24 * 0x28 + 8) = uStack_150;
          *(undefined8 *)(pbStack_108 + (longlong)puVar24 * 0x28 + 0x10) = uVar5;
          *(float *)(pbStack_108 + (longlong)puVar24 * 0x28 + 0x18) = fVar28;
          *(float *)(pbStack_108 + (longlong)puVar24 * 0x28 + 0x1c) = fVar37;
          pbStack_108[(longlong)puVar24 * 0x28 + 0x20] = (byte)uStack_138;
          pbStack_108[(longlong)puVar24 * 0x28 + 0x21] = (byte)pbStack_130;
          puVar24 = puVar19;
          if (fVar38 < fVar29) goto LAB_1414865af;
LAB_14148657e:
          puStack_100 = puVar24;
          if (fVar36 < fVar37) goto LAB_141486612;
LAB_141486588:
          if (fVar38 < fVar34) goto LAB_14148666e;
LAB_141486592:
          if (puStack_100 == puStack_110) goto LAB_1414866c6;
        }
        fVar34 = fVar31;
        if (fVar35 <= fVar31) {
          fVar34 = fVar35;
        }
        fVar36 = fVar28;
        if (fVar28 <= fVar33) {
          fVar36 = fVar33;
        }
        *(byte **)(pbStack_108 + (longlong)puStack_100 * 0x28) = pbStack_118;
        *(longlong *)(pbStack_108 + (longlong)puStack_100 * 0x28 + 8) = lVar8;
        *(uint *)(pbStack_108 + (longlong)puStack_100 * 0x28 + 0x10) =
             ~-(uint)NAN(fVar35) & (uint)fVar34 | -(uint)NAN(fVar35) & (uint)fVar31;
        *(float *)(pbStack_108 + (longlong)puStack_100 * 0x28 + 0x14) = fVar37;
        *(uint *)(pbStack_108 + (longlong)puStack_100 * 0x28 + 0x18) =
             ~-(uint)NAN(fVar33) & (uint)fVar36 | -(uint)NAN(fVar33) & (uint)fVar28;
        *(float *)(pbStack_108 + (longlong)puStack_100 * 0x28 + 0x1c) = fVar38;
        pbStack_108[(longlong)puStack_100 * 0x28 + 0x20] = bVar7 & 1;
        pbStack_108[(longlong)puStack_100 * 0x28 + 0x21] = (byte)pbStack_128 & 1;
        puVar2 = puStack_100 + 1;
        if (pbVar16 == (byte *)0x3ff) {
          puStack_100 = puVar2;
          if (1 < *_DAT_143ca8e90) {
            puStack_1c8 = (undefined1 *)0x0;
            pbStack_1c0 = &UNK_14330d1c7;
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
        pbVar16 = pbVar16 + 1;
        bVar26 = puVar22 < (undefined1 *)0x2;
        puVar22 = puVar22 + -2;
        if (bVar26) {
          puVar22 = (undefined1 *)0x0;
        }
        bVar26 = puStack_100 < puVar22;
        puStack_100 = puVar2;
        if (bVar26) goto LAB_14148681c;
      }
LAB_141486130:
      puVar22 = puVar22 + 1;
    } while (puVar22 < puStack_100);
LAB_14148681c:
    pbVar16 = pbStack_108;
    puStack_1c8 = &uStack_f2;
    if ((undefined1 *)0x1 < puStack_100) {
      if (puStack_100 < (undefined1 *)0x15) {
        pbVar1 = pbStack_108 + (longlong)puStack_100 * 0x28;
        pbVar17 = pbStack_108 + 0x28;
        do {
          pdb_14145b0e0(pbVar16,pbVar17);
          pbVar17 = pbVar17 + 0x28;
        } while (pbVar17 != pbVar1);
      }
      else {
        pdb_141465400(pbStack_108,puStack_100,&puStack_1c8);
      }
    }
LAB_141486838:
    param_1[2] = (ulonglong)puStack_100;
    *param_1 = (ulonglong)puStack_110;
    param_1[1] = (ulonglong)pbStack_108;
    return;
  }
  pdb_14007ee60();
  pbVar16 = pub_1406abae0((ulonglong)puVar22,1);
  if (pbVar16 == (byte *)0x0) {
    pdb_142dc7e2a(1,puVar22);
  }
  else {
    pdb_14007ee60();
    pbVar17 = pub_1406abab0((longlong)puVar22 * 0x28,8);
    if (pbVar17 != (byte *)0x0) goto LAB_141485cee;
    pbStack_160 = pbVar16;
    pdb_142dc7e2a(8,(longlong)puVar22 * 0x28);
  }
LAB_1414869d2:
                    /* WARNING: Does not return */
  pcVar10 = (code *)invalidInstructionException();
  (*pcVar10)();
code_r0x000141485d6b:
  pbStack_120[(longlong)puVar24] = 1;
  uVar21 = *(ulonglong *)(pbVar18 + 7);
  lVar8 = *(longlong *)(pbVar18 + 0xf);
  fVar28 = *(float *)(pbVar18 + 0x17);
  fVar33 = *(float *)(pbVar18 + 0x1b);
  fVar34 = *(float *)(pbVar18 + 0x1f);
  fVar35 = *(float *)(pbVar18 + 0x23);
  bVar7 = pbVar18[0x27];
  uStack_144 = (undefined3)((uint)*(undefined4 *)(pbVar18 + 0x2b) >> 8);
  uStack_148 = *(undefined4 *)(pbVar18 + 0x28);
  bVar26 = false;
  pbVar16 = (undefined1 *)0x0;
  pbStack_130 = pbVar23;
  if ((uVar21 & 1) == 0) {
LAB_141485dcf:
    do {
      pbVar17 = pbVar1 + (longlong)pbVar16 * 0x28 + 0x20;
      puVar24 = pbVar16;
      do {
        if (pbStack_118 <= puVar24) {
LAB_1414868b0:
          if (pbVar16 <= pbStack_118) {
            pbVar16 = pbStack_118;
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pbVar16,pbStack_118,&UNK_14330d270);
        }
        if ((((pbStack_120[(longlong)puVar24] == 0) && ((pbVar17[-0x20] & 1) == 0)) &&
            (*pbVar17 == bVar7)) &&
           ((((float)((uint)(fVar33 - *(float *)(pbVar17 + -0xc)) & uVar27) <= fVar11 &&
             ((float)((uint)(fVar35 - *(float *)(pbVar17 + -4)) & uVar27) <= fVar11)) &&
            ((fVar36 = *(float *)(pbVar17 + -8), fVar28 <= fVar36 + fVar12 &&
             (fVar37 = *(float *)(pbVar17 + -0x10), fVar37 <= fVar34 + fVar12)))))) {
          fVar38 = fVar37;
          if (fVar28 <= fVar37) {
            fVar38 = fVar28;
          }
          fVar28 = (float)(~-(uint)NAN(fVar28) & (uint)fVar38 | -(uint)NAN(fVar28) & (uint)fVar37);
          fVar37 = fVar36;
          if (fVar36 <= fVar34) {
            fVar37 = fVar34;
          }
          fVar34 = (float)(~-(uint)NAN(fVar34) & (uint)fVar37 | -(uint)NAN(fVar34) & (uint)fVar36);
          pbStack_120[(longlong)puVar24] = 1;
          pbVar16 = puVar24 + 1;
          bVar26 = true;
          bVar15 = bVar26;
          if (pbVar16 < pbStack_118) goto LAB_141485dcf;
          break;
        }
        puVar24 = puVar24 + 1;
        pbVar17 = pbVar17 + 0x28;
        bVar15 = bVar26;
      } while (puVar24 < pbStack_118);
      pbVar16 = (undefined1 *)0x0;
      bVar26 = false;
    } while (bVar15);
  }
  else {
LAB_141485ecf:
    do {
      bVar15 = bVar26;
      pbVar17 = pbVar1 + (longlong)pbVar16 * 0x28 + 0x20;
      puVar24 = pbVar16;
      do {
        if (pbStack_118 <= puVar24) goto LAB_1414868b0;
        if ((((((pbStack_120[(longlong)puVar24] == 0) && (*(longlong *)(pbVar17 + -0x20) == 1)) &&
              (*(longlong *)(pbVar17 + -0x18) == lVar8)) &&
             ((*pbVar17 == bVar7 &&
              ((float)((uint)(fVar33 - *(float *)(pbVar17 + -0xc)) & uVar27) <= fVar11)))) &&
            ((float)((uint)(fVar35 - *(float *)(pbVar17 + -4)) & uVar27) <= fVar11)) &&
           ((fVar36 = *(float *)(pbVar17 + -8), fVar28 <= fVar36 + fVar12 &&
            (fVar37 = *(float *)(pbVar17 + -0x10), fVar37 <= fVar34 + fVar12)))) {
          fVar38 = fVar37;
          if (fVar28 <= fVar37) {
            fVar38 = fVar28;
          }
          fVar28 = (float)(~-(uint)NAN(fVar28) & (uint)fVar38 | -(uint)NAN(fVar28) & (uint)fVar37);
          fVar37 = fVar36;
          if (fVar36 <= fVar34) {
            fVar37 = fVar34;
          }
          fVar34 = (float)(~-(uint)NAN(fVar34) & (uint)fVar37 | -(uint)NAN(fVar34) & (uint)fVar36);
          pbStack_120[(longlong)puVar24] = 1;
          pbVar16 = puVar24 + 1;
          bVar15 = true;
          bVar26 = bVar15;
          if (pbVar16 < pbStack_118) goto LAB_141485ecf;
          break;
        }
        puVar24 = puVar24 + 1;
        pbVar17 = pbVar17 + 0x28;
      } while (puVar24 < pbStack_118);
      pbVar16 = (undefined1 *)0x0;
      bVar26 = false;
    } while (bVar15);
  }
  if (puStack_100 == puStack_110) {
    pdb_142d7ede0(&puStack_110);
  }
  *(ulonglong *)(pbStack_108 + (longlong)puVar2 * 0x28) = uVar21;
  *(longlong *)(pbStack_108 + (longlong)puVar2 * 0x28 + 8) = lVar8;
  *(float *)(pbStack_108 + (longlong)puVar2 * 0x28 + 0x10) = fVar28;
  *(float *)(pbStack_108 + (longlong)puVar2 * 0x28 + 0x14) = fVar33;
  *(float *)(pbStack_108 + (longlong)puVar2 * 0x28 + 0x18) = fVar34;
  *(float *)(pbStack_108 + (longlong)puVar2 * 0x28 + 0x1c) = fVar35;
  pbStack_108[(longlong)puVar2 * 0x28 + 0x20] = bVar7;
  *(undefined4 *)(pbStack_108 + (longlong)puVar2 * 0x28 + 0x21) = uStack_148;
  *(uint *)(pbStack_108 + (longlong)puVar2 * 0x28 + 0x24) = CONCAT31(uStack_144,uStack_148._3_1_);
  puStack_100 = puVar2 + 1;
  pbVar23 = pbStack_130;
  goto LAB_141485d3f;
}

