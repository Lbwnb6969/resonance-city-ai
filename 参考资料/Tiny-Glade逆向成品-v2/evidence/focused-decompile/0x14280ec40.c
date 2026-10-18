// Matched PDB: system_roof::edit_roof::edit_roof
// VA 0x14280ec40, PDB extent 3199 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: system_roof::edit_roof::edit_roof
   Extent: 3199 bytes. No whole-program auto-analysis. */

void pdb_14280ec40(undefined8 *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  undefined1 uVar13;
  byte bVar14;
  byte bVar15;
  undefined1 uVar16;
  int iVar17;
  int *piVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  byte bVar26;
  ulonglong uVar27;
  int *piVar28;
  int *piVar29;
  undefined1 uVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  uint uVar37;
  uint uVar39;
  undefined1 auVar38 [16];
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined3 uStack_1c0;
  undefined4 uStack_1bd;
  undefined4 uStack_1b9;
  longlong lStack_1b0;
  undefined4 *puStack_1a8;
  int *piStack_1a0;
  longlong lStack_198;
  int *piStack_190;
  undefined4 uStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined4 uStack_178;
  undefined8 uStack_174;
  undefined4 uStack_16c;
  undefined4 *puStack_168;
  longlong lStack_160;
  int *piStack_158;
  ulonglong uStack_150;
  undefined8 uStack_148;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_130;
  undefined4 *puStack_128;
  int *piStack_120;
  int *piStack_118;
  undefined4 *puStack_110;
  longlong lStack_108;
  longlong lStack_100;
  undefined8 uStack_f8;
  ulonglong uStack_f0;
  
  puVar6 = (ulonglong *)*param_3;
  lVar7 = param_3[1];
  uVar19 = *puVar6;
  uVar27 = 0;
  uVar20 = uVar19 - *(ulonglong *)(lVar7 + 0x18);
  if (uVar19 < *(ulonglong *)(lVar7 + 0x18)) {
    uVar20 = uVar27;
  }
  uVar24 = uVar19 - *(ulonglong *)(lVar7 + 0x38);
  if (uVar19 < *(ulonglong *)(lVar7 + 0x38)) {
    uVar24 = uVar27;
  }
  piVar18 = (int *)(uVar20 * 0x40 + *(longlong *)(lVar7 + 8));
  uVar19 = *(ulonglong *)(lVar7 + 0x10) - uVar20;
  if (*(ulonglong *)(lVar7 + 0x10) < uVar20) {
    piVar18 = (int *)0x8;
    uVar19 = uVar27;
  }
  piVar29 = (int *)(uVar24 * 0x40 + *(longlong *)(lVar7 + 0x28));
  uVar20 = *(ulonglong *)(lVar7 + 0x30) - uVar24;
  if (*(ulonglong *)(lVar7 + 0x30) < uVar24) {
    piVar29 = (int *)0x8;
    uVar20 = uVar27;
  }
  *puVar6 = (*(longlong *)(lVar7 + 0x40) - uVar20) - uVar19;
  fVar12 = _DAT_142e3b1d8;
  fVar11 = _DAT_142e36f28;
  piStack_118 = piVar18 + uVar19 * 0x10;
  piStack_120 = piVar29 + uVar20 * 0x10;
  uStack_f8 = *param_1;
  lVar7 = *param_2;
  lStack_100 = param_2[1];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_188 = *(undefined4 *)((longlong)param_6 + 0x1c);
  lStack_160 = *param_6;
  puStack_128 = (undefined4 *)param_6[2];
  uVar4 = *(undefined4 *)((longlong)param_7 + 0x1c);
  lVar8 = *param_7;
  puStack_1a8 = (undefined4 *)param_7[2];
  uStack_178 = *(undefined4 *)((longlong)param_5 + 0x1c);
  lStack_108 = *param_5;
  puStack_110 = (undefined4 *)param_5[2];
  uVar5 = *(undefined4 *)((longlong)param_4 + 0x1c);
  lStack_198 = *param_4;
  puStack_168 = (undefined4 *)param_4[2];
  lStack_140 = lStack_160 + 0x20;
  lStack_1b0 = lVar8 + 0x20;
  lStack_130 = lStack_108 + 0x20;
  lStack_138 = lStack_198 + 0x20;
LAB_14280ee94:
  if ((piVar18 == (int *)0x0) || (piVar18 == piStack_118)) {
    if ((piVar29 == (int *)0x0) || (piVar29 == piStack_120)) {
      return;
    }
    piVar28 = piVar29 + 0x10;
    piStack_190 = (int *)0x0;
  }
  else {
    piStack_190 = piVar18 + 0x10;
    piVar28 = piVar29;
    piVar29 = piVar18;
  }
  *puVar6 = *puVar6 + 1;
  uStack_148 = *(undefined8 *)(piVar29 + 8);
  uVar19 = pdb_140b54b40(uStack_f8);
  if ((uVar19 & 0xffffffff) != 0) {
    uVar20 = uVar19 & 0xffffffff ^ 0xffffffff;
    iVar17 = (int)(uVar19 >> 0x20);
    if (((uVar20 < *(ulonglong *)(lStack_100 + 0x10)) &&
        (piVar18 = (int *)(uVar20 * 0x18 + *(longlong *)(lStack_100 + 8)), piVar18[4] == iVar17)) &&
       (*piVar18 != 0)) {
      uVar20 = *(ulonglong *)(piVar18 + 2);
      piStack_158 = piVar28;
      if (((uVar20 & 0xffffffff) < *(ulonglong *)(lVar7 + 0x38)) &&
         ((*(ulonglong *)(*(longlong *)(lVar7 + 0x28) + (uVar20 >> 6 & 0x3ffffff) * 8) >>
           (uVar20 & 0x3f) & 1) != 0)) {
        lVar25 = *(longlong *)(*(longlong *)(lStack_100 + 0x1a0) + 0x18 + (uVar20 >> 0x20) * 0x48);
        lVar21 = ~*(ulonglong *)
                   (*(longlong *)
                     (*(longlong *)(lStack_100 + 0x1a0) + 0x38 + (uVar20 >> 0x20) * 0x48) +
                   *(longlong *)(lVar7 + 0x110) * 8) * 0x30;
        uVar20 = (ulonglong)(uint)~piVar18[1];
        puVar31 = (undefined8 *)(uVar20 * 0x58 + *(longlong *)(lVar25 + 0x10 + lVar21));
        lVar22 = *(longlong *)(lVar25 + 0x28 + lVar21);
        uStack_f0 = uVar20 * 4 + *(longlong *)(lVar25 + 0x20 + lVar21);
        fVar44 = 0.0;
        fVar45 = 0.0;
        if (*piVar29 == 0) {
LAB_14280f010:
          fVar34 = *(float *)(puVar31 + 6);
          iVar17 = piVar29[2];
          if (iVar17 != 0) goto LAB_14280f01e;
LAB_14280f087:
          bVar26 = 0;
          fVar35 = fVar34;
        }
        else {
          if (*piVar29 == 1) {
            fVar45 = (float)piVar29[1];
            fVar34 = 0.0;
            if (0.0 <= fVar45) {
              fVar34 = fVar45;
            }
            fVar35 = fVar11;
            if (fVar34 <= fVar11) {
              fVar35 = fVar34;
            }
            fVar45 = fVar45 - *(float *)((longlong)puVar31 + 0x2c);
            *(undefined4 *)(lVar22 + uVar20 * 4) = uVar3;
            *(float *)((longlong)puVar31 + 0x2c) = fVar35;
            goto LAB_14280f010;
          }
          fVar45 = (float)piVar29[1];
          *(undefined4 *)(lVar22 + uVar20 * 4) = uVar3;
          fVar35 = *(float *)((longlong)puVar31 + 0x2c) + fVar45;
          fVar34 = 0.0;
          if (0.0 <= fVar35) {
            fVar34 = fVar35;
          }
          fVar35 = fVar11;
          if (fVar34 <= fVar11) {
            fVar35 = fVar34;
          }
          *(float *)((longlong)puVar31 + 0x2c) = fVar35;
          fVar34 = *(float *)(puVar31 + 6);
          iVar17 = piVar29[2];
          if (iVar17 == 0) goto LAB_14280f087;
LAB_14280f01e:
          fVar35 = fVar11;
          if (iVar17 == 2) {
            fVar44 = (float)piVar29[3];
            *(undefined4 *)(lVar22 + uVar20 * 4) = uVar3;
            fVar46 = fVar12;
            if (fVar12 <= *(float *)(puVar31 + 6) + fVar44) {
              fVar46 = *(float *)(puVar31 + 6) + fVar44;
            }
            if (fVar46 <= fVar11) {
              fVar35 = fVar46;
            }
            *(float *)(puVar31 + 6) = fVar35;
          }
          else {
            fVar44 = (float)piVar29[3];
            fVar46 = 0.0;
            if (0.0 <= fVar44) {
              fVar46 = fVar44;
            }
            if (fVar46 <= fVar11) {
              fVar35 = fVar46;
            }
            *(undefined4 *)(lVar22 + uVar20 * 4) = uVar3;
            *(float *)(puVar31 + 6) = fVar35;
            fVar44 = fVar44 - fVar34;
          }
          bVar26 = 1;
        }
        fVar46 = 0.0;
        fVar47 = 0.0;
        if (piVar29[10] != 0) {
          if (piVar29[10] == 2) {
            uVar32 = *(undefined8 *)(piVar29 + 0xb);
            *(undefined4 *)(lVar22 + uVar20 * 4) = uVar3;
            fVar47 = (float)*(undefined8 *)((longlong)puVar31 + 0x24) + (float)uVar32;
            fVar36 = (float)((ulonglong)*(undefined8 *)((longlong)puVar31 + 0x24) >> 0x20) +
                     (float)((ulonglong)uVar32 >> 0x20);
            fVar40 = fVar36 * fVar36 + fVar47 * fVar47;
            uVar39 = (uint)(fVar11 < fVar40);
            auVar38._0_4_ = SQRT(fVar40);
            auVar38._4_4_ = auVar38._0_4_;
            auVar38._8_8_ = 0;
            auVar41._4_4_ = fVar36;
            auVar41._0_4_ = fVar47;
            auVar41._8_8_ = 0;
            auVar42 = divps(auVar41,auVar38);
            uVar37 = (int)(uVar39 << 0x1f) >> 0x1f;
            uVar39 = (int)(uVar39 << 0x1f) >> 0x1f;
            *(uint *)((longlong)puVar31 + 0x24) = ~uVar37 & (uint)fVar47 | auVar42._0_4_ & uVar37;
            *(uint *)(puVar31 + 5) = ~uVar39 & (uint)fVar36 | auVar42._4_4_ & uVar39;
          }
          else {
            uVar32 = *(undefined8 *)(piVar29 + 0xb);
            uVar27 = *(ulonglong *)((longlong)puVar31 + 0x24);
            fVar47 = (float)uVar27;
            fVar36 = (float)(uVar27 >> 0x20);
            fVar40 = fVar36 * fVar36 + fVar47 * fVar47;
            uVar39 = (uint)(fVar11 < fVar40);
            auVar42._0_4_ = SQRT(fVar40);
            auVar42._4_4_ = auVar42._0_4_;
            auVar42._8_8_ = 0;
            auVar43._8_8_ = 0;
            auVar43._0_8_ = uVar27;
            auVar42 = divps(auVar43,auVar42);
            uVar37 = (int)(uVar39 << 0x1f) >> 0x1f;
            uVar39 = (int)(uVar39 << 0x1f) >> 0x1f;
            *(undefined4 *)(lVar22 + uVar20 * 4) = uVar3;
            *(undefined8 *)((longlong)puVar31 + 0x24) = uVar32;
            uVar32 = CONCAT44((float)((ulonglong)uVar32 >> 0x20) -
                              (float)(~uVar39 & (uint)fVar36 | auVar42._4_4_ & uVar39),
                              (float)uVar32 -
                              (float)(~uVar37 & (uint)fVar47 | auVar42._0_4_ & uVar37));
          }
          fVar47 = (float)((ulonglong)uVar32 >> 0x20);
          fVar47 = SQRT(fVar47 * fVar47 + (float)uVar32 * (float)uVar32);
        }
        if (piVar29[6] != 0) {
          if (piVar29[6] == 2) {
            fVar46 = (float)piVar29[7];
            *(undefined4 *)(lVar22 + uVar20 * 4) = uVar3;
            fVar36 = 0.0;
            if (0.0 <= *(float *)(puVar31 + 7) + fVar46) {
              fVar36 = *(float *)(puVar31 + 7) + fVar46;
            }
            fVar40 = fVar11;
            if (fVar36 <= fVar11) {
              fVar40 = fVar36;
            }
            *(float *)(puVar31 + 7) = fVar40;
          }
          else {
            fVar46 = (float)piVar29[7];
            fVar36 = 0.0;
            if (0.0 <= *(float *)(puVar31 + 7)) {
              fVar36 = *(float *)(puVar31 + 7);
            }
            fVar40 = fVar11;
            if (fVar36 <= fVar11) {
              fVar40 = fVar36;
            }
            *(undefined4 *)(lVar22 + uVar20 * 4) = uVar3;
            *(float *)(puVar31 + 7) = fVar46;
            fVar46 = fVar46 - fVar40;
          }
        }
        uStack_150 = uVar19;
        bVar14 = pdb_140b77b60(puVar31);
        piStack_1a0 = piVar29;
        if (piVar29[4] == 0) {
          fVar36 = 0.0;
          bVar15 = bVar14;
        }
        else if (piVar29[4] == 2) {
          fVar36 = (float)piVar29[5];
          *(undefined4 *)(lVar22 + uVar20 * 4) = uVar3;
          fVar33 = *(float *)((longlong)puVar31 + 0x34) + fVar36;
          fVar40 = 0.0;
          if (0.0 <= fVar33) {
            fVar40 = fVar33;
          }
          fVar33 = fVar11;
          if (fVar40 <= fVar11) {
            fVar33 = fVar40;
          }
          *(float *)((longlong)puVar31 + 0x34) = fVar33;
          bVar15 = pdb_140b77b60(puVar31);
        }
        else {
          fVar36 = (float)piVar29[5];
          fVar40 = 0.0;
          if (0.0 <= *(float *)((longlong)puVar31 + 0x34)) {
            fVar40 = *(float *)((longlong)puVar31 + 0x34);
          }
          fVar33 = fVar11;
          if (fVar40 <= fVar11) {
            fVar33 = fVar40;
          }
          *(undefined4 *)(lVar22 + uVar20 * 4) = uVar3;
          *(float *)((longlong)puVar31 + 0x34) = fVar36;
          bVar15 = pdb_140b77b60(puVar31);
          fVar36 = fVar36 - fVar33;
        }
        if (((bVar14 == bVar15) && (((fVar45 != 0.0 | bVar26) & bVar15) == 0)) &&
           ((fVar46 != 0.0 & bVar15) == 0)) {
          if (bVar14 == 0) goto LAB_14280f407;
LAB_14280f318:
          if (bVar15 == 0) {
            pdb_140b77b90(&uStack_174,puVar31);
            uStack_1b9 = uStack_16c;
            uStack_1c4._3_1_ = (undefined1)uStack_174;
            uStack_1c0 = (undefined3)((ulonglong)uStack_174 >> 8);
            uStack_1bd = (undefined4)((ulonglong)uStack_174 >> 0x20);
            *puStack_1a8 = uVar4;
            lVar25 = *(longlong *)(lVar8 + 0x30);
            uVar32 = *(undefined8 *)(lVar8 + 0x40);
            if (lVar25 == *(longlong *)(lVar8 + 0x20)) {
              pdb_142d7ede0(lStack_1b0);
            }
            lVar22 = *(longlong *)(lVar8 + 0x28);
            *(undefined8 *)(lVar22 + lVar25 * 0x28) = uVar32;
            *(undefined1 *)(lVar22 + 8 + lVar25 * 0x28) = 0xb;
            goto LAB_14280f478;
          }
        }
        else {
          uVar32 = *puVar31;
          *puStack_128 = uStack_188;
          lVar25 = *(longlong *)(lStack_160 + 0x30);
          uVar9 = *(undefined8 *)(lStack_160 + 0x40);
          if (lVar25 == *(longlong *)(lStack_160 + 0x20)) {
            pdb_142d7e980(lStack_140);
          }
          lVar22 = *(longlong *)(lStack_160 + 0x28);
          *(undefined8 *)(lVar22 + lVar25 * 0x10) = uVar9;
          *(undefined8 *)(lVar22 + 8 + lVar25 * 0x10) = uVar32;
          *(longlong *)(lStack_160 + 0x30) = lVar25 + 1;
          *(longlong *)(lStack_160 + 0x40) = *(longlong *)(lStack_160 + 0x40) + 1;
          if (bVar14 != 0) goto LAB_14280f318;
LAB_14280f407:
          if (bVar15 != 0) {
            pdb_140b77b90(&uStack_174,puVar31);
            uStack_1b9 = uStack_16c;
            uStack_1c4._3_1_ = (undefined1)uStack_174;
            uStack_1c0 = (undefined3)((ulonglong)uStack_174 >> 8);
            uStack_1bd = (undefined4)((ulonglong)uStack_174 >> 0x20);
            *puStack_1a8 = uVar4;
            lVar25 = *(longlong *)(lVar8 + 0x30);
            uVar32 = *(undefined8 *)(lVar8 + 0x40);
            if (lVar25 == *(longlong *)(lVar8 + 0x20)) {
              pdb_142d7ede0(lStack_1b0);
            }
            lVar22 = *(longlong *)(lVar8 + 0x28);
            *(undefined8 *)(lVar22 + lVar25 * 0x28) = uVar32;
            *(undefined1 *)(lVar22 + 8 + lVar25 * 0x28) = 10;
LAB_14280f478:
            puVar1 = (undefined4 *)(lVar22 + 0x14 + lVar25 * 0x28);
            *puVar1 = CONCAT31((undefined3)uStack_1c4,uStack_1c8._3_1_);
            puVar1[1] = CONCAT31(uStack_1c0,uStack_1c4._3_1_);
            puVar1[2] = uStack_1bd;
            puVar1[3] = uStack_1b9;
            puVar2 = (undefined8 *)(lVar22 + 9 + lVar25 * 0x28);
            *puVar2 = uStack_1d0;
            puVar2[1] = CONCAT44(uStack_1c4,uStack_1c8);
            *(longlong *)(lVar8 + 0x30) = lVar25 + 1;
            *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
          }
        }
        uVar39 = _DAT_142e377e0;
        if ((((fVar46 != 0.0) || (fVar45 != 0.0)) || (fVar44 != 0.0)) ||
           (lVar25 = lStack_108, fVar36 != 0.0)) {
          uVar37 = (uint)fVar44 & _DAT_142e377e0;
          fStack_184 = fVar47;
          fStack_180 = fVar35;
          fStack_17c = fVar34;
          fVar44 = (float)func_0x000142e329c0();
          fVar34 = (float)func_0x000142e329c0();
          fVar35 = (float)func_0x000142e329c0();
          fVar47 = (float)func_0x000142e329c0();
          pdb_140b77b90(&uStack_1d0,puVar31);
          *puStack_1a8 = uVar4;
          lVar25 = *(longlong *)(lVar8 + 0x30);
          uVar32 = *(undefined8 *)(lVar8 + 0x40);
          if (lVar25 == *(longlong *)(lVar8 + 0x20)) {
            pdb_142d7ede0(lStack_1b0);
          }
          lVar22 = *(longlong *)(lVar8 + 0x28);
          *(undefined8 *)(lVar22 + lVar25 * 0x28) = uVar32;
          *(undefined1 *)(lVar22 + 8 + lVar25 * 0x28) = 2;
          *(byte *)(lVar22 + 9 + lVar25 * 0x28) = bVar15;
          *(float *)(lVar22 + 0xc + lVar25 * 0x28) = fVar44;
          *(float *)(lVar22 + 0x10 + lVar25 * 0x28) = fVar47 + fVar34 + fVar35;
          *(uint *)(lVar22 + 0x14 + lVar25 * 0x28) =
               ~-(uint)(0.0 < fVar44) &
               (uint)((float)((uint)fVar46 & uVar39) +
                     (float)((uint)fVar45 & uVar39) + (float)((uint)fVar36 & uVar39)) |
               uVar37 & -(uint)(0.0 < fVar44);
          *(undefined4 *)(lVar22 + 0x20 + lVar25 * 0x28) = uStack_1c8;
          *(int **)(lVar22 + 0x18 + lVar25 * 0x28) = uStack_1d0;
          *(longlong *)(lVar8 + 0x30) = lVar25 + 1;
          *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
          fVar47 = fStack_184;
          fVar35 = fStack_180;
          fVar34 = fStack_17c;
          lVar25 = lStack_108;
        }
        lStack_108 = lVar25;
        if (0.0 < fVar47) {
          fVar44 = *(float *)((longlong)puVar31 + 0x24);
          fVar45 = *(float *)(puVar31 + 5);
          pdb_140b77b90((longlong)&uStack_1d0 + 4,puVar31);
          *puStack_1a8 = uVar4;
          lVar22 = *(longlong *)(lVar8 + 0x30);
          uVar32 = *(undefined8 *)(lVar8 + 0x40);
          if (lVar22 == *(longlong *)(lVar8 + 0x20)) {
            pdb_142d7ede0(lStack_1b0);
          }
          lVar21 = *(longlong *)(lVar8 + 0x28);
          *(undefined8 *)(lVar21 + lVar22 * 0x28) = uVar32;
          *(undefined1 *)(lVar21 + 8 + lVar22 * 0x28) = 3;
          *(float *)(lVar21 + 0xc + lVar22 * 0x28) = SQRT(fVar45 * fVar45 + fVar44 * fVar44);
          *(float *)(lVar21 + 0x10 + lVar22 * 0x28) = fVar47;
          puVar31 = (undefined8 *)(lVar21 + 0x14 + lVar22 * 0x28);
          *puVar31 = uStack_1d0;
          puVar31[1] = CONCAT44(uStack_1c4,uStack_1c8);
          *(longlong *)(lVar8 + 0x30) = lVar22 + 1;
          *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
        }
        uVar19 = uStack_150;
        *puStack_110 = uStack_178;
        lVar22 = *(longlong *)(lVar25 + 0x30);
        uVar32 = *(undefined8 *)(lVar25 + 0x40);
        if (lVar22 == *(longlong *)(lVar25 + 0x20)) {
          pdb_142d7e6e0(lStack_130);
        }
        piVar18 = piStack_190;
        lVar21 = *(longlong *)(lVar25 + 0x28);
        lVar23 = lVar22 * 0x20;
        *(undefined8 *)(lVar21 + lVar23) = uVar32;
        *(ulonglong *)(lVar21 + 8 + lVar23) = uVar19;
        *(undefined8 *)(lVar21 + 0x10 + lVar23) = uStack_148;
        *(undefined1 *)(lVar21 + 0x18 + lVar23) = 1;
        *(longlong *)(lVar25 + 0x30) = lVar22 + 1;
        *(longlong *)(lVar25 + 0x40) = *(longlong *)(lVar25 + 0x40) + 1;
        if ((fVar34 <= fVar12) || (fVar12 < fVar35)) goto LAB_14280f770;
        uVar30 = (undefined1)piStack_1a0[0xd];
        *puStack_168 = uVar5;
        lVar25 = *(longlong *)(lStack_198 + 0x30);
        uVar32 = *(undefined8 *)(lStack_198 + 0x40);
        uVar16 = 0;
        uVar13 = 0;
        if (lVar25 == *(longlong *)(lStack_198 + 0x20)) goto LAB_14280ee30;
        goto LAB_14280ee40;
      }
      uStack_1d0 = (int *)(uVar20 << 0x20);
    }
    else {
      uStack_1d0 = (int *)((uStack_f0 & 0xffffffff00000000) + 1);
    }
    uStack_1c8 = (undefined4)uVar19;
    uStack_1c4 = iVar17;
    pdb_142dc8170(&UNK_14359c748,0x2b,&uStack_1d0,&UNK_14359c728,&UNK_14359c6d8);
  }
  uStack_1d0 = piVar29 + 8;
  uStack_1c8 = 0x4280f8c0;
  uStack_1c4 = 1;
  pdb_142dc83d0(&UNK_14359c6f0,&uStack_1d0,&UNK_14359c710);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
LAB_14280f770:
  piVar29 = piStack_158;
  if ((fVar34 <= fVar12) && (fVar12 < fVar35)) {
    uVar30 = (undefined1)piStack_1a0[0xd];
    *puStack_168 = uVar5;
    lVar25 = *(longlong *)(lStack_198 + 0x30);
    uVar32 = *(undefined8 *)(lStack_198 + 0x40);
    uVar16 = 1;
    uVar13 = 1;
    if (lVar25 == *(longlong *)(lStack_198 + 0x20)) {
LAB_14280ee30:
      uVar16 = uVar13;
      pdb_142d7e6e0(lStack_138);
    }
LAB_14280ee40:
    lVar22 = *(longlong *)(lStack_198 + 0x28);
    lVar21 = lVar25 * 0x20;
    *(undefined8 *)(lVar22 + lVar21) = uVar32;
    *(undefined8 *)(lVar22 + 8 + lVar21) = uStack_148;
    *(ulonglong *)(lVar22 + 0x10 + lVar21) = uStack_150;
    *(undefined1 *)(lVar22 + 0x18 + lVar21) = uVar30;
    *(undefined1 *)(lVar22 + 0x19 + lVar21) = uVar16;
    *(longlong *)(lStack_198 + 0x30) = lVar25 + 1;
    *(longlong *)(lStack_198 + 0x40) = *(longlong *)(lStack_198 + 0x40) + 1;
    piVar29 = piStack_158;
  }
  goto LAB_14280ee94;
}

