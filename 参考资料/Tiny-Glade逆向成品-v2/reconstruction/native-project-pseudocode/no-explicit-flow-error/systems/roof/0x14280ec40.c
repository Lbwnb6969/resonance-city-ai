// VA 0x14280ec40, PDB extent 3199 bytes
// system_roof::edit_roof::edit_roof
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/edit_roof.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_roof::edit_roof::edit_roof
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/edit_roof.rs
   Extent: 3199 */

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
  float fVar10;
  float fVar11;
  undefined1 uVar12;
  byte bVar13;
  byte bVar14;
  undefined1 uVar15;
  int iVar16;
  int *piVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  byte bVar25;
  ulonglong uVar26;
  int *piVar27;
  int *piVar28;
  undefined1 uVar29;
  undefined8 *puVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  uint uVar36;
  uint uVar38;
  undefined1 auVar37 [16];
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
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
  uVar18 = *puVar6;
  uVar26 = 0;
  uVar19 = uVar18 - *(ulonglong *)(lVar7 + 0x18);
  if (uVar18 < *(ulonglong *)(lVar7 + 0x18)) {
    uVar19 = uVar26;
  }
  uVar23 = uVar18 - *(ulonglong *)(lVar7 + 0x38);
  if (uVar18 < *(ulonglong *)(lVar7 + 0x38)) {
    uVar23 = uVar26;
  }
  piVar17 = (int *)(uVar19 * 0x40 + *(longlong *)(lVar7 + 8));
  uVar18 = *(ulonglong *)(lVar7 + 0x10) - uVar19;
  if (*(ulonglong *)(lVar7 + 0x10) < uVar19) {
    piVar17 = (int *)0x8;
    uVar18 = uVar26;
  }
  piVar28 = (int *)(uVar23 * 0x40 + *(longlong *)(lVar7 + 0x28));
  uVar19 = *(ulonglong *)(lVar7 + 0x30) - uVar23;
  if (*(ulonglong *)(lVar7 + 0x30) < uVar23) {
    piVar28 = (int *)0x8;
    uVar19 = uVar26;
  }
  *puVar6 = (*(longlong *)(lVar7 + 0x40) - uVar19) - uVar18;
  fVar11 = _DAT_142e3b1d8;
  fVar10 = _DAT_142e36f28;
  piStack_118 = piVar17 + uVar18 * 0x10;
  piStack_120 = piVar28 + uVar19 * 0x10;
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
  if ((piVar17 == (int *)0x0) || (piVar17 == piStack_118)) {
    if ((piVar28 == (int *)0x0) || (piVar28 == piStack_120)) {
      return;
    }
    piVar27 = piVar28 + 0x10;
    piStack_190 = (int *)0x0;
  }
  else {
    piStack_190 = piVar17 + 0x10;
    piVar27 = piVar28;
    piVar28 = piVar17;
  }
  *puVar6 = *puVar6 + 1;
  uStack_148 = *(undefined8 *)(piVar28 + 8);
  uVar18 = pdb_140b54b40(uStack_f8);
  if ((uVar18 & 0xffffffff) == 0) {
    uStack_1d0 = piVar28 + 8;
    uStack_1c8 = 0x4280f8c0;
    uStack_1c4 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14359c6f0,&uStack_1d0,&UNK_14359c710);
  }
  uVar19 = uVar18 & 0xffffffff ^ 0xffffffff;
  iVar16 = (int)(uVar18 >> 0x20);
  if (((uVar19 < *(ulonglong *)(lStack_100 + 0x10)) &&
      (piVar17 = (int *)(uVar19 * 0x18 + *(longlong *)(lStack_100 + 8)), piVar17[4] == iVar16)) &&
     (*piVar17 != 0)) {
    uVar19 = *(ulonglong *)(piVar17 + 2);
    piStack_158 = piVar27;
    if (((uVar19 & 0xffffffff) < *(ulonglong *)(lVar7 + 0x38)) &&
       ((*(ulonglong *)(*(longlong *)(lVar7 + 0x28) + (uVar19 >> 6 & 0x3ffffff) * 8) >>
         (uVar19 & 0x3f) & 1) != 0)) {
      lVar24 = *(longlong *)(*(longlong *)(lStack_100 + 0x1a0) + 0x18 + (uVar19 >> 0x20) * 0x48);
      lVar20 = ~*(ulonglong *)
                 (*(longlong *)(*(longlong *)(lStack_100 + 0x1a0) + 0x38 + (uVar19 >> 0x20) * 0x48)
                 + *(longlong *)(lVar7 + 0x110) * 8) * 0x30;
      uVar19 = (ulonglong)(uint)~piVar17[1];
      puVar30 = (undefined8 *)(uVar19 * 0x58 + *(longlong *)(lVar24 + 0x10 + lVar20));
      lVar21 = *(longlong *)(lVar24 + 0x28 + lVar20);
      uStack_f0 = uVar19 * 4 + *(longlong *)(lVar24 + 0x20 + lVar20);
      fVar43 = 0.0;
      fVar44 = 0.0;
      if (*piVar28 == 0) {
LAB_14280f010:
        fVar33 = *(float *)(puVar30 + 6);
        iVar16 = piVar28[2];
        if (iVar16 != 0) goto LAB_14280f01e;
LAB_14280f087:
        bVar25 = 0;
        fVar34 = fVar33;
      }
      else {
        if (*piVar28 == 1) {
          fVar44 = (float)piVar28[1];
          fVar33 = 0.0;
          if (0.0 <= fVar44) {
            fVar33 = fVar44;
          }
          fVar34 = fVar10;
          if (fVar33 <= fVar10) {
            fVar34 = fVar33;
          }
          fVar44 = fVar44 - *(float *)((longlong)puVar30 + 0x2c);
          *(undefined4 *)(lVar21 + uVar19 * 4) = uVar3;
          *(float *)((longlong)puVar30 + 0x2c) = fVar34;
          goto LAB_14280f010;
        }
        fVar44 = (float)piVar28[1];
        *(undefined4 *)(lVar21 + uVar19 * 4) = uVar3;
        fVar34 = *(float *)((longlong)puVar30 + 0x2c) + fVar44;
        fVar33 = 0.0;
        if (0.0 <= fVar34) {
          fVar33 = fVar34;
        }
        fVar34 = fVar10;
        if (fVar33 <= fVar10) {
          fVar34 = fVar33;
        }
        *(float *)((longlong)puVar30 + 0x2c) = fVar34;
        fVar33 = *(float *)(puVar30 + 6);
        iVar16 = piVar28[2];
        if (iVar16 == 0) goto LAB_14280f087;
LAB_14280f01e:
        fVar34 = fVar10;
        if (iVar16 == 2) {
          fVar43 = (float)piVar28[3];
          *(undefined4 *)(lVar21 + uVar19 * 4) = uVar3;
          fVar45 = fVar11;
          if (fVar11 <= *(float *)(puVar30 + 6) + fVar43) {
            fVar45 = *(float *)(puVar30 + 6) + fVar43;
          }
          if (fVar45 <= fVar10) {
            fVar34 = fVar45;
          }
          *(float *)(puVar30 + 6) = fVar34;
        }
        else {
          fVar43 = (float)piVar28[3];
          fVar45 = 0.0;
          if (0.0 <= fVar43) {
            fVar45 = fVar43;
          }
          if (fVar45 <= fVar10) {
            fVar34 = fVar45;
          }
          *(undefined4 *)(lVar21 + uVar19 * 4) = uVar3;
          *(float *)(puVar30 + 6) = fVar34;
          fVar43 = fVar43 - fVar33;
        }
        bVar25 = 1;
      }
      fVar45 = 0.0;
      fVar46 = 0.0;
      if (piVar28[10] != 0) {
        if (piVar28[10] == 2) {
          uVar31 = *(undefined8 *)(piVar28 + 0xb);
          *(undefined4 *)(lVar21 + uVar19 * 4) = uVar3;
          fVar46 = (float)*(undefined8 *)((longlong)puVar30 + 0x24) + (float)uVar31;
          fVar35 = (float)((ulonglong)*(undefined8 *)((longlong)puVar30 + 0x24) >> 0x20) +
                   (float)((ulonglong)uVar31 >> 0x20);
          fVar39 = fVar35 * fVar35 + fVar46 * fVar46;
          uVar38 = (uint)(fVar10 < fVar39);
          auVar37._0_4_ = SQRT(fVar39);
          auVar37._4_4_ = auVar37._0_4_;
          auVar37._8_8_ = 0;
          auVar40._4_4_ = fVar35;
          auVar40._0_4_ = fVar46;
          auVar40._8_8_ = 0;
          auVar41 = divps(auVar40,auVar37);
          uVar36 = (int)(uVar38 << 0x1f) >> 0x1f;
          uVar38 = (int)(uVar38 << 0x1f) >> 0x1f;
          *(uint *)((longlong)puVar30 + 0x24) = ~uVar36 & (uint)fVar46 | auVar41._0_4_ & uVar36;
          *(uint *)(puVar30 + 5) = ~uVar38 & (uint)fVar35 | auVar41._4_4_ & uVar38;
        }
        else {
          uVar31 = *(undefined8 *)(piVar28 + 0xb);
          uVar26 = *(ulonglong *)((longlong)puVar30 + 0x24);
          fVar46 = (float)uVar26;
          fVar35 = (float)(uVar26 >> 0x20);
          fVar39 = fVar35 * fVar35 + fVar46 * fVar46;
          uVar38 = (uint)(fVar10 < fVar39);
          auVar41._0_4_ = SQRT(fVar39);
          auVar41._4_4_ = auVar41._0_4_;
          auVar41._8_8_ = 0;
          auVar42._8_8_ = 0;
          auVar42._0_8_ = uVar26;
          auVar41 = divps(auVar42,auVar41);
          uVar36 = (int)(uVar38 << 0x1f) >> 0x1f;
          uVar38 = (int)(uVar38 << 0x1f) >> 0x1f;
          *(undefined4 *)(lVar21 + uVar19 * 4) = uVar3;
          *(undefined8 *)((longlong)puVar30 + 0x24) = uVar31;
          uVar31 = CONCAT44((float)((ulonglong)uVar31 >> 0x20) -
                            (float)(~uVar38 & (uint)fVar35 | auVar41._4_4_ & uVar38),
                            (float)uVar31 - (float)(~uVar36 & (uint)fVar46 | auVar41._0_4_ & uVar36)
                           );
        }
        fVar46 = (float)((ulonglong)uVar31 >> 0x20);
        fVar46 = SQRT(fVar46 * fVar46 + (float)uVar31 * (float)uVar31);
      }
      if (piVar28[6] != 0) {
        if (piVar28[6] == 2) {
          fVar45 = (float)piVar28[7];
          *(undefined4 *)(lVar21 + uVar19 * 4) = uVar3;
          fVar35 = 0.0;
          if (0.0 <= *(float *)(puVar30 + 7) + fVar45) {
            fVar35 = *(float *)(puVar30 + 7) + fVar45;
          }
          fVar39 = fVar10;
          if (fVar35 <= fVar10) {
            fVar39 = fVar35;
          }
          *(float *)(puVar30 + 7) = fVar39;
        }
        else {
          fVar45 = (float)piVar28[7];
          fVar35 = 0.0;
          if (0.0 <= *(float *)(puVar30 + 7)) {
            fVar35 = *(float *)(puVar30 + 7);
          }
          fVar39 = fVar10;
          if (fVar35 <= fVar10) {
            fVar39 = fVar35;
          }
          *(undefined4 *)(lVar21 + uVar19 * 4) = uVar3;
          *(float *)(puVar30 + 7) = fVar45;
          fVar45 = fVar45 - fVar39;
        }
      }
      uStack_150 = uVar18;
      bVar13 = pdb_140b77b60(puVar30);
      piStack_1a0 = piVar28;
      if (piVar28[4] == 0) {
        fVar35 = 0.0;
        bVar14 = bVar13;
      }
      else if (piVar28[4] == 2) {
        fVar35 = (float)piVar28[5];
        *(undefined4 *)(lVar21 + uVar19 * 4) = uVar3;
        fVar32 = *(float *)((longlong)puVar30 + 0x34) + fVar35;
        fVar39 = 0.0;
        if (0.0 <= fVar32) {
          fVar39 = fVar32;
        }
        fVar32 = fVar10;
        if (fVar39 <= fVar10) {
          fVar32 = fVar39;
        }
        *(float *)((longlong)puVar30 + 0x34) = fVar32;
        bVar14 = pdb_140b77b60(puVar30);
      }
      else {
        fVar35 = (float)piVar28[5];
        fVar39 = 0.0;
        if (0.0 <= *(float *)((longlong)puVar30 + 0x34)) {
          fVar39 = *(float *)((longlong)puVar30 + 0x34);
        }
        fVar32 = fVar10;
        if (fVar39 <= fVar10) {
          fVar32 = fVar39;
        }
        *(undefined4 *)(lVar21 + uVar19 * 4) = uVar3;
        *(float *)((longlong)puVar30 + 0x34) = fVar35;
        bVar14 = pdb_140b77b60(puVar30);
        fVar35 = fVar35 - fVar32;
      }
      if (((bVar13 == bVar14) && (((fVar44 != 0.0 | bVar25) & bVar14) == 0)) &&
         ((fVar45 != 0.0 & bVar14) == 0)) {
        if (bVar13 == 0) goto LAB_14280f407;
LAB_14280f318:
        if (bVar14 == 0) {
          pdb_140b77b90(&uStack_174,puVar30);
          uStack_1b9 = uStack_16c;
          uStack_1c4._3_1_ = (undefined1)uStack_174;
          uStack_1c0 = (undefined3)((ulonglong)uStack_174 >> 8);
          uStack_1bd = (undefined4)((ulonglong)uStack_174 >> 0x20);
          *puStack_1a8 = uVar4;
          lVar24 = *(longlong *)(lVar8 + 0x30);
          uVar31 = *(undefined8 *)(lVar8 + 0x40);
          if (lVar24 == *(longlong *)(lVar8 + 0x20)) {
            pdb_142d7ede0(lStack_1b0);
          }
          lVar21 = *(longlong *)(lVar8 + 0x28);
          *(undefined8 *)(lVar21 + lVar24 * 0x28) = uVar31;
          *(undefined1 *)(lVar21 + 8 + lVar24 * 0x28) = 0xb;
          goto LAB_14280f478;
        }
      }
      else {
        uVar31 = *puVar30;
        *puStack_128 = uStack_188;
        lVar24 = *(longlong *)(lStack_160 + 0x30);
        uVar9 = *(undefined8 *)(lStack_160 + 0x40);
        if (lVar24 == *(longlong *)(lStack_160 + 0x20)) {
          pdb_142d7e980(lStack_140);
        }
        lVar21 = *(longlong *)(lStack_160 + 0x28);
        *(undefined8 *)(lVar21 + lVar24 * 0x10) = uVar9;
        *(undefined8 *)(lVar21 + 8 + lVar24 * 0x10) = uVar31;
        *(longlong *)(lStack_160 + 0x30) = lVar24 + 1;
        *(longlong *)(lStack_160 + 0x40) = *(longlong *)(lStack_160 + 0x40) + 1;
        if (bVar13 != 0) goto LAB_14280f318;
LAB_14280f407:
        if (bVar14 != 0) {
          pdb_140b77b90(&uStack_174,puVar30);
          uStack_1b9 = uStack_16c;
          uStack_1c4._3_1_ = (undefined1)uStack_174;
          uStack_1c0 = (undefined3)((ulonglong)uStack_174 >> 8);
          uStack_1bd = (undefined4)((ulonglong)uStack_174 >> 0x20);
          *puStack_1a8 = uVar4;
          lVar24 = *(longlong *)(lVar8 + 0x30);
          uVar31 = *(undefined8 *)(lVar8 + 0x40);
          if (lVar24 == *(longlong *)(lVar8 + 0x20)) {
            pdb_142d7ede0(lStack_1b0);
          }
          lVar21 = *(longlong *)(lVar8 + 0x28);
          *(undefined8 *)(lVar21 + lVar24 * 0x28) = uVar31;
          *(undefined1 *)(lVar21 + 8 + lVar24 * 0x28) = 10;
LAB_14280f478:
          puVar1 = (undefined4 *)(lVar21 + 0x14 + lVar24 * 0x28);
          *puVar1 = CONCAT31((undefined3)uStack_1c4,uStack_1c8._3_1_);
          puVar1[1] = CONCAT31(uStack_1c0,uStack_1c4._3_1_);
          puVar1[2] = uStack_1bd;
          puVar1[3] = uStack_1b9;
          puVar2 = (undefined8 *)(lVar21 + 9 + lVar24 * 0x28);
          *puVar2 = uStack_1d0;
          puVar2[1] = CONCAT44(uStack_1c4,uStack_1c8);
          *(longlong *)(lVar8 + 0x30) = lVar24 + 1;
          *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
        }
      }
      uVar38 = _DAT_142e377e0;
      if ((((fVar45 != 0.0) || (fVar44 != 0.0)) || (fVar43 != 0.0)) ||
         (lVar24 = lStack_108, fVar35 != 0.0)) {
        uVar36 = (uint)fVar43 & _DAT_142e377e0;
        fStack_184 = fVar46;
        fStack_180 = fVar34;
        fStack_17c = fVar33;
        fVar43 = (float)pub_142e329c0();
        fVar33 = (float)pub_142e329c0();
        fVar34 = (float)pub_142e329c0();
        fVar46 = (float)pub_142e329c0();
        pdb_140b77b90(&uStack_1d0,puVar30);
        *puStack_1a8 = uVar4;
        lVar24 = *(longlong *)(lVar8 + 0x30);
        uVar31 = *(undefined8 *)(lVar8 + 0x40);
        if (lVar24 == *(longlong *)(lVar8 + 0x20)) {
          pdb_142d7ede0(lStack_1b0);
        }
        lVar21 = *(longlong *)(lVar8 + 0x28);
        *(undefined8 *)(lVar21 + lVar24 * 0x28) = uVar31;
        *(undefined1 *)(lVar21 + 8 + lVar24 * 0x28) = 2;
        *(byte *)(lVar21 + 9 + lVar24 * 0x28) = bVar14;
        *(float *)(lVar21 + 0xc + lVar24 * 0x28) = fVar43;
        *(float *)(lVar21 + 0x10 + lVar24 * 0x28) = fVar46 + fVar33 + fVar34;
        *(uint *)(lVar21 + 0x14 + lVar24 * 0x28) =
             ~-(uint)(0.0 < fVar43) &
             (uint)((float)((uint)fVar45 & uVar38) +
                   (float)((uint)fVar44 & uVar38) + (float)((uint)fVar35 & uVar38)) |
             uVar36 & -(uint)(0.0 < fVar43);
        *(undefined4 *)(lVar21 + 0x20 + lVar24 * 0x28) = uStack_1c8;
        *(int **)(lVar21 + 0x18 + lVar24 * 0x28) = uStack_1d0;
        *(longlong *)(lVar8 + 0x30) = lVar24 + 1;
        *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
        fVar46 = fStack_184;
        fVar34 = fStack_180;
        fVar33 = fStack_17c;
        lVar24 = lStack_108;
      }
      lStack_108 = lVar24;
      if (0.0 < fVar46) {
        fVar43 = *(float *)((longlong)puVar30 + 0x24);
        fVar44 = *(float *)(puVar30 + 5);
        pdb_140b77b90((longlong)&uStack_1d0 + 4,puVar30);
        *puStack_1a8 = uVar4;
        lVar21 = *(longlong *)(lVar8 + 0x30);
        uVar31 = *(undefined8 *)(lVar8 + 0x40);
        if (lVar21 == *(longlong *)(lVar8 + 0x20)) {
          pdb_142d7ede0(lStack_1b0);
        }
        lVar20 = *(longlong *)(lVar8 + 0x28);
        *(undefined8 *)(lVar20 + lVar21 * 0x28) = uVar31;
        *(undefined1 *)(lVar20 + 8 + lVar21 * 0x28) = 3;
        *(float *)(lVar20 + 0xc + lVar21 * 0x28) = SQRT(fVar44 * fVar44 + fVar43 * fVar43);
        *(float *)(lVar20 + 0x10 + lVar21 * 0x28) = fVar46;
        puVar30 = (undefined8 *)(lVar20 + 0x14 + lVar21 * 0x28);
        *puVar30 = uStack_1d0;
        puVar30[1] = CONCAT44(uStack_1c4,uStack_1c8);
        *(longlong *)(lVar8 + 0x30) = lVar21 + 1;
        *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
      }
      uVar18 = uStack_150;
      *puStack_110 = uStack_178;
      lVar21 = *(longlong *)(lVar24 + 0x30);
      uVar31 = *(undefined8 *)(lVar24 + 0x40);
      if (lVar21 == *(longlong *)(lVar24 + 0x20)) {
        pdb_142d7e6e0(lStack_130);
      }
      piVar17 = piStack_190;
      lVar20 = *(longlong *)(lVar24 + 0x28);
      lVar22 = lVar21 * 0x20;
      *(undefined8 *)(lVar20 + lVar22) = uVar31;
      *(ulonglong *)(lVar20 + 8 + lVar22) = uVar18;
      *(undefined8 *)(lVar20 + 0x10 + lVar22) = uStack_148;
      *(undefined1 *)(lVar20 + 0x18 + lVar22) = 1;
      *(longlong *)(lVar24 + 0x30) = lVar21 + 1;
      *(longlong *)(lVar24 + 0x40) = *(longlong *)(lVar24 + 0x40) + 1;
      if ((fVar33 <= fVar11) || (fVar11 < fVar34)) goto LAB_14280f770;
      uVar29 = (undefined1)piStack_1a0[0xd];
      *puStack_168 = uVar5;
      lVar24 = *(longlong *)(lStack_198 + 0x30);
      uVar31 = *(undefined8 *)(lStack_198 + 0x40);
      uVar15 = 0;
      uVar12 = 0;
      if (lVar24 == *(longlong *)(lStack_198 + 0x20)) goto LAB_14280ee30;
      goto LAB_14280ee40;
    }
    uStack_1d0 = (int *)(uVar19 << 0x20);
  }
  else {
    uStack_1d0 = (int *)((uStack_f0 & 0xffffffff00000000) + 1);
  }
  uStack_1c8 = (undefined4)uVar18;
  uStack_1c4 = iVar16;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_14359c748,0x2b,&uStack_1d0,&UNK_14359c728,&UNK_14359c6d8);
LAB_14280f770:
  piVar28 = piStack_158;
  if ((fVar33 <= fVar11) && (fVar11 < fVar34)) {
    uVar29 = (undefined1)piStack_1a0[0xd];
    *puStack_168 = uVar5;
    lVar24 = *(longlong *)(lStack_198 + 0x30);
    uVar31 = *(undefined8 *)(lStack_198 + 0x40);
    uVar15 = 1;
    uVar12 = 1;
    if (lVar24 == *(longlong *)(lStack_198 + 0x20)) {
LAB_14280ee30:
      uVar15 = uVar12;
      pdb_142d7e6e0(lStack_138);
    }
LAB_14280ee40:
    lVar21 = *(longlong *)(lStack_198 + 0x28);
    lVar20 = lVar24 * 0x20;
    *(undefined8 *)(lVar21 + lVar20) = uVar31;
    *(undefined8 *)(lVar21 + 8 + lVar20) = uStack_148;
    *(ulonglong *)(lVar21 + 0x10 + lVar20) = uStack_150;
    *(undefined1 *)(lVar21 + 0x18 + lVar20) = uVar29;
    *(undefined1 *)(lVar21 + 0x19 + lVar20) = uVar15;
    *(longlong *)(lStack_198 + 0x30) = lVar24 + 1;
    *(longlong *)(lStack_198 + 0x40) = *(longlong *)(lStack_198 + 0x40) + 1;
    piVar28 = piStack_158;
  }
  goto LAB_14280ee94;
}

