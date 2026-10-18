// VA 0x142091d60, PDB extent 5215 bytes
// forest::manage_tree_prefabs::manage_tree_prefabs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/forest/src/manage_tree_prefabs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: forest::manage_tree_prefabs::manage_tree_prefabs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/forest/src/manage_tree_prefabs.rs
   Extent: 5215 */

void pdb_142091d60(undefined8 param_1,longlong *param_2,int *param_3,longlong param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 *param_7,undefined8 *param_8,
                  longlong *param_9,undefined8 *param_10,undefined8 param_11,undefined8 *param_12,
                  undefined8 *param_13,longlong *param_14)

{
  byte *pbVar1;
  undefined4 *puVar2;
  float *pfVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  byte bVar15;
  uint uVar16;
  undefined4 uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  int *piVar24;
  longlong *plVar25;
  int *piVar26;
  int *piVar27;
  longlong *plVar28;
  undefined *puVar29;
  undefined *puVar30;
  int *piVar31;
  int *piVar32;
  int *piVar33;
  longlong lVar34;
  int *piVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined8 auStack_250 [2];
  longlong *plStack_240;
  longlong *plStack_238;
  undefined1 auStack_228 [16];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  float afStack_1f4 [2];
  float fStack_1ec;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 *puStack_1c0;
  int *piStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined4 uStack_144;
  int *piStack_140;
  int *piStack_138;
  int *piStack_130;
  int *piStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong *plStack_110;
  longlong lStack_108;
  longlong *plStack_100;
  char cStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  plVar20 = param_2;
  piStack_130 = param_3;
  lStack_118 = param_4;
  cStack_f1 = pdb_140e94b40();
  if (cStack_f1 == '\0') {
    uStack_1d0 = 0;
    goto LAB_142091f7c;
  }
  plVar28 = (longlong *)0x30;
  lVar18 = pdb_142091940(0x30);
  piVar33 = (int *)&UNK_1434507d8;
  if (lVar18 == 1) {
    if ((longlong *)0x30 < plVar20) {
LAB_142092d1f:
      pdb_142dc8070(&UNK_1434507d8,0x30,0);
LAB_142092d3f:
      pdb_142dc8070(&UNK_1434507d8,0x30);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar19 = pdb_142091940(plVar20);
    if ((uVar19 & 1) != 0) {
      if (0x30 < (longlong)plVar20 + 2U) goto LAB_142092d3f;
      plVar28 = (longlong *)(0x2e - (longlong)plVar20);
      piVar33 = (int *)((longlong)plVar20 + 0x1434507da);
    }
  }
  puVar29 = &UNK_1434506e1;
  piVar35 = (int *)&UNK_1434506b1;
  do {
    bVar15 = puVar29[-1];
    uVar16 = (uint)(char)bVar15;
    if ((char)bVar15 < '\0') {
      bVar4 = puVar29[-2];
      if ((char)bVar4 < -0x40) {
        bVar5 = puVar29[-3];
        if ((char)bVar5 < -0x40) {
          pbVar1 = puVar29 + -4;
          puVar29 = puVar29 + -4;
          uVar16 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar29 = puVar29 + -3;
          uVar16 = bVar5 & 0xf;
        }
        uVar16 = bVar4 & 0x3f | uVar16 << 6;
      }
      else {
        puVar29 = puVar29 + -2;
        uVar16 = bVar4 & 0x1f;
      }
      uVar16 = (uint)(bVar15 & 0x3f) | uVar16 << 6;
      if (uVar16 != 0x5c) goto LAB_142091ed4;
LAB_142091eec:
      puVar30 = puVar29 + -0x1434506b0;
      if ((undefined *)0x30 < puVar30) {
        pdb_142dc8070(&UNK_1434506b1,0x30,puVar30,0x30,&UNK_143450870);
        goto LAB_142092d1f;
      }
      piVar27 = (int *)(0x30 - (longlong)puVar30);
      piVar35 = (int *)(puVar29 + 1);
      goto LAB_142091f0e;
    }
    puVar29 = puVar29 + -1;
    if (uVar16 == 0x5c) goto LAB_142091eec;
LAB_142091ed4:
    if (uVar16 == 0x2f) goto LAB_142091eec;
  } while (puVar29 != &UNK_1434506b1);
  piVar27 = (int *)0x30;
LAB_142091f0e:
  plVar20 = (longlong *)pdb_140e97000();
  if ((char)plVar20[0xd] != '\x01') goto LAB_142092c4c;
  do {
    if (*plVar20 == 0) {
      *plVar20 = -1;
      plStack_100 = plVar20;
      uStack_1c8 = pdb_140e94f10(plVar20 + 1,piVar33,plVar28,piVar35,piVar27,1,0);
      *plStack_100 = *plStack_100 + 1;
      uStack_1d0 = 1;
      uStack_1a8 = uStack_1c8;
LAB_142091f7c:
      param_14[2] = 0;
      lVar18 = pdb_1406d0830(*param_12);
      puVar22 = (undefined8 *)(lVar18 + 0x20);
      puVar21 = (undefined8 *)(lVar18 + 0x28);
      if (*(char *)(lVar18 + 0x298) == '\0') {
        puVar21 = (undefined8 *)(lVar18 + 0x10);
        puVar22 = (undefined8 *)(lVar18 + 8);
      }
      uStack_200 = *puVar21;
      uStack_208 = *puVar22;
      pdb_140bfabf0(auStack_290,param_11);
      lVar18 = pdb_1406d0830(*param_13);
      puVar22 = (undefined8 *)(lVar18 + 0x20);
      puVar21 = (undefined8 *)(lVar18 + 0x28);
      if (*(char *)(lVar18 + 0x298) == '\0') {
        puVar21 = (undefined8 *)(lVar18 + 0x10);
        puVar22 = (undefined8 *)(lVar18 + 8);
      }
      uStack_210 = *puVar21;
      uStack_218 = *puVar22;
      puVar22 = (undefined8 *)pdb_14288c8c0(*param_2,&UNK_1435ab180);
      if ((puVar22 == (undefined8 *)0x0) ||
         (lVar18 = (**(code **)(puVar22[1] + 0x18))(*puVar22), lVar18 == 0)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1434506e8);
      }
      lVar6 = param_7[1];
      uVar19 = *(ulonglong *)*param_7;
      piVar27 = (int *)0x0;
      piVar35 = (int *)(uVar19 - *(ulonglong *)(lVar6 + 0x18));
      if (uVar19 < *(ulonglong *)(lVar6 + 0x18)) {
        piVar35 = piVar27;
      }
      piVar26 = (int *)(uVar19 - *(ulonglong *)(lVar6 + 0x38));
      if (uVar19 < *(ulonglong *)(lVar6 + 0x38)) {
        piVar26 = piVar27;
      }
      lVar34 = (longlong)piVar35 * 0x28 + *(longlong *)(lVar6 + 8);
      piVar24 = *(int **)(lVar6 + 0x10);
      piVar7 = *(int **)(lVar6 + 0x30);
      piVar32 = (int *)((longlong)piVar7 - (longlong)piVar26);
      if (piVar7 < piVar26) {
        piVar32 = piVar27;
      }
      piVar31 = (int *)((longlong)piVar24 - (longlong)piVar35);
      if (piVar24 < piVar35) {
        lVar34 = 8;
        piVar31 = piVar27;
      }
      piVar33 = (int *)(lVar34 + -0x28 + (longlong)piVar31 * 0x28);
      if (piVar24 < piVar35 || (int *)((longlong)piVar24 - (longlong)piVar35) == (int *)0x0) {
        piVar33 = piVar27;
      }
      piVar31 = (int *)((longlong)piVar31 + (longlong)piVar32);
      if (piVar26 < piVar7) {
        piVar31 = piVar27;
      }
      if (piVar35 < piVar24) {
        piVar31 = piVar27;
      }
      piVar27 = (int *)((longlong)piVar26 * 0x28 + *(longlong *)(lVar6 + 0x28));
      if (piVar7 < piVar26) {
        piVar27 = (int *)0x8;
      }
      lStack_108 = *(undefined8 *)(lVar18 + 8);
      piStack_138 = *(int **)(lVar18 + 0x10);
      piStack_140 = piVar27 + (longlong)piVar32 * 10 + -10;
      if (piVar7 <= piVar26) {
        piStack_140 = piVar33;
      }
      *(ulonglong *)*param_7 = *(longlong *)(lVar6 + 0x40) - (longlong)piVar31;
      fVar14 = _DAT_14300e4bc;
      uVar17 = _DAT_143006a28;
      uVar16 = _DAT_142e377e0;
      plStack_100 = *(longlong **)piStack_130;
      piVar26 = (int *)plStack_100[1];
      piVar35 = piVar26 + plStack_100[2] * 0x14;
      piStack_128 = piStack_140 + 1;
      plStack_110 = (longlong *)*param_8;
      for (; piVar26 != piVar35; piVar26 = piVar26 + 0x14) {
        pdb_140b40d00(afStack_1f4);
        fVar13 = fStack_1ec;
        fVar12 = afStack_1f4[0];
        if ((fVar14 < (float)((uint)afStack_1f4[0] & uVar16)) ||
           (fVar14 < (float)((uint)fStack_1ec & uVar16))) {
          uStack_198 = (longlong *)CONCAT71(uStack_198._1_7_,1);
          piVar33 = (int *)CONCAT71((int7)((ulonglong)piVar33 >> 8),1);
        }
        else {
          fVar36 = (float)pdb_140a7d8d0(auStack_290,afStack_1f4[0],fStack_1ec,uVar17,0x43020000);
          fVar37 = (float)pdb_140a7d8d0(auStack_280,fVar12,fVar13,uVar17,0x43020000);
          fVar38 = (float)pdb_140a7d8d0(auStack_270,fVar12,fVar13,uVar17,0x43020000);
          fVar39 = (float)pdb_140a7d8d0(auStack_260,fVar12,fVar13,uVar17,0x43020000);
          fVar40 = (float)pdb_140a7d8d0(&uStack_208,fVar12,fVar13,uVar17,0x43020000);
          fVar41 = (float)pdb_140a7d8d0(&uStack_218,fVar12,fVar13,uVar17,0x43020000);
          if ((0.0 < fVar40) || (0.0 < fVar41)) {
            uStack_198 = (longlong *)((ulonglong)uStack_198 & 0xffffffffffffff00);
            piVar33 = (int *)0x0;
          }
          else {
            bVar15 = pdb_1419c1e90(lStack_108,piStack_138,fVar12,fVar13);
            fVar39 = fVar36 + fVar37 + fVar38 + fVar39;
            fVar36 = 0.0;
            if (0.0 <= fVar39) {
              fVar36 = fVar39;
            }
            fVar37 = _DAT_142e36f28;
            if (fVar36 <= _DAT_142e36f28) {
              fVar37 = fVar36;
            }
            bVar15 = (bVar15 ^ 1) & fVar37 <= 0.0;
            uStack_198 = (longlong *)CONCAT71(uStack_198._1_7_,bVar15);
            if ((piStack_140 == (int *)0x0) || (bVar15 == 0)) {
              if (bVar15 == 0) goto LAB_142092414;
            }
            else if (*piStack_140 == 1) {
              fVar36 = fVar12;
              fVar37 = (float)pdb_140df2a20(piStack_128,fVar12,fVar13);
              fVar36 = SQRT((fVar36 - fVar13) * (fVar36 - fVar13) +
                            (fVar37 - fVar12) * (fVar37 - fVar12));
              uStack_198 = (longlong *)CONCAT71(uStack_198._1_7_,_DAT_142f3e570 <= fVar36);
              if (fVar36 < _DAT_142f3e570) {
LAB_142092414:
                piVar33 = (int *)0x0;
                goto LAB_1420921d6;
              }
            }
            else {
              fVar36 = (float)*(undefined8 *)(piStack_140 + 1) - fVar12;
              fVar37 = (float)((ulonglong)*(undefined8 *)(piStack_140 + 1) >> 0x20) - fVar13;
              fVar36 = SQRT(fVar37 * fVar37 + fVar36 * fVar36);
              uStack_198 = (longlong *)
                           CONCAT71(uStack_198._1_7_,
                                    (float)piStack_140[3] + _DAT_142f3e570 <= fVar36);
              if (fVar36 < (float)piStack_140[3] + _DAT_142f3e570) goto LAB_142092414;
            }
            pdb_140defa80(auStack_228,fVar12,fVar13,_DAT_142f3e570);
            pdb_14288cb90(plStack_110,auStack_228,&uStack_198);
            piVar33 = (int *)((ulonglong)uStack_198 & 0xff);
          }
        }
LAB_1420921d6:
        uVar8 = *(undefined8 *)(piVar26 + 0x10);
        lVar18 = param_14[2];
        if (lVar18 == *param_14) {
          pdb_142d7e980(param_14);
        }
        lVar6 = param_14[1];
        *(undefined8 *)(lVar6 + lVar18 * 0x10) = uVar8;
        *(char *)(lVar6 + 8 + lVar18 * 0x10) = (char)piVar33;
        piVar27 = (int *)(lVar18 + 1);
        param_14[2] = (longlong)piVar27;
      }
      uStack_1d8 = pdb_140dedfe0(*(undefined4 *)(*param_9 + 0x2c));
      fVar36 = _DAT_143057f10;
      fVar13 = _DAT_142f95160;
      fVar12 = _DAT_142e37988;
      piStack_140 = (int *)param_14[1] + param_14[2] * 4;
      lStack_120 = *param_6;
      lStack_108 = param_6[1];
      uStack_1b0 = *param_10;
      piStack_128 = (int *)CONCAT44(piStack_128._4_4_,piStack_130[7]);
      puStack_1a0 = *(undefined4 **)(piStack_130 + 4);
      uStack_144 = *(undefined4 *)((longlong)param_5 + 0x1c);
      piStack_138 = (int *)*param_5;
      puStack_1c0 = (undefined4 *)param_5[2];
      piStack_1b8 = piStack_138 + 8;
      fVar37 = (float)_DAT_1430132e0;
      uVar19 = (ulonglong)_DAT_1430132e0 >> 0x20;
      param_2 = (longlong *)0x0;
      plVar28 = param_14;
      piVar26 = (int *)param_14[1];
      plVar20 = plStack_100;
LAB_142092500:
      while (piVar24 = piVar26, piVar24 != piStack_140) {
        if ((char)plVar20[3] == '\x01') {
          fVar38 = (float)pdb_140e02880(&uStack_1d8);
          fVar40 = fVar38 * fVar13 + (_DAT_142e36f28 - fVar38) * fVar12;
          fVar38 = 0.0;
          plVar20 = plStack_100;
          fVar39 = 0.0;
        }
        else {
          if ((longlong *)plVar20[2] <= param_2) goto LAB_142092c81;
          fVar38 = *(float *)(plVar20[1] + 0x1c + (longlong)param_2 * 0x50);
          fVar40 = 0.0;
          fVar39 = _DAT_142e36f28;
        }
        piVar26 = piVar24 + 4;
        plVar28 = (longlong *)((longlong)param_2 + 1);
        if ((char)piVar24[2] == '\0') goto LAB_1420926a0;
        if (*piVar24 == 0) {
          piStack_130 = piVar26;
          pdb_140f04c70(auStack_250,lStack_118,&UNK_143450748);
          uVar8 = auStack_250[0];
          if ((longlong *)plStack_100[2] <= param_2) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(param_2,(longlong *)plStack_100[2],&UNK_143450760);
          }
          plVar20 = plStack_240;
          if (plStack_240 == (longlong *)0x0) {
            plVar20 = plStack_238;
          }
          piVar27 = (int *)((longlong)param_2 * 0x50);
          uVar17 = *(undefined4 *)(plStack_100[1] + 0x1c + (longlong)piVar27);
          lVar18 = plVar20[2];
          if ((ulonglong)(*plVar20 - lVar18) < 0x30) {
            pdb_142d7f1b0(plVar20,lVar18,0x30,1,1);
          }
          lVar6 = plVar20[1];
          *(code **)(lVar6 + lVar18) = pdb_14288d050;
          *(undefined8 *)(lVar6 + 8 + lVar18) = uVar8;
          *(longlong **)(lVar6 + 0x10 + lVar18) = param_2;
          *(undefined4 *)(lVar6 + 0x18 + lVar18) = uVar17;
          *(float *)(lVar6 + 0x1c + lVar18) = fVar39;
          *(float *)(lVar6 + 0x20 + lVar18) = fVar40;
          *(undefined1 *)(lVar6 + 0x28 + lVar18) = 0;
          plVar20[2] = lVar18 + 0x30;
          plVar25 = (longlong *)plStack_100[2];
          if (plVar25 <= param_2) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(param_2,plVar25,&UNK_143450778);
          }
          lVar18 = plStack_100[1];
          fVar39 = *(float *)(lVar18 + 0x10 + (longlong)piVar27);
          fVar40 = *(float *)(lVar18 + 0x14 + (longlong)piVar27);
          fVar41 = *(float *)(lVar18 + 0x18 + (longlong)piVar27);
          if (((fVar36 <= fVar39) && (fVar39 < fVar14)) && ((fVar36 <= fVar41 && (fVar41 < fVar14)))
             ) {
            fVar40 = (float)pdb_14140ce00(uStack_1b0,fVar39,fVar41);
            fVar42 = fVar38 * fVar37;
            lVar18 = plVar20[2];
            if ((ulonglong)(*plVar20 - lVar18) < 0x20) {
              pdb_142d7f1b0(plVar20,lVar18,0x20,1,1);
            }
            lVar6 = plVar20[1];
            *(code **)(lVar6 + lVar18) = pdb_14288cee0;
            *(undefined8 *)(lVar6 + 8 + lVar18) = uVar8;
            *(ulonglong *)(lVar6 + 0x10 + lVar18) =
                 CONCAT44(fVar40 + fVar38 * (float)uVar19,fVar39 + fVar42);
            *(float *)(lVar6 + 0x18 + lVar18) = fVar42 + fVar41;
            *(undefined1 *)(lVar6 + 0x1c + lVar18) = 0;
            plVar20[2] = lVar18 + 0x20;
            plVar25 = (longlong *)plStack_100[2];
          }
          plVar20 = plStack_100;
          if (plVar25 <= param_2) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(param_2,plVar25,&UNK_143450790);
          }
          plVar25 = *(longlong **)(plStack_100[1] + (longlong)piVar27);
          uVar9 = *(undefined8 *)(plStack_100[1] + 8 + (longlong)piVar27);
          LOCK();
          lVar18 = *plVar25;
          *plVar25 = *plVar25 + 1;
          UNLOCK();
          if (*plVar25 == 0 || SCARRY8(lVar18,1) != *plVar25 < 0) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
          uStack_198 = plVar25;
          uStack_190 = uVar9;
          plStack_110 = plVar25;
          uVar17 = pdb_140de85e0(plVar25,_DAT_142e36f28);
          piVar35 = piStack_138;
          if ((longlong *)plVar20[2] <= param_2) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(param_2,(longlong *)plVar20[2],&UNK_1434507a8);
          }
          lVar18 = plVar20[1];
          uStack_168 = *(undefined4 *)(lVar18 + 0x48 + (longlong)piVar27);
          fStack_170 = *(float *)(lVar18 + 0x20 + (longlong)piVar27);
          fStack_16c = *(float *)(lVar18 + 0x24 + (longlong)piVar27);
          uStack_164 = *(undefined4 *)(lVar18 + 0x2c + (longlong)piVar27);
          uVar10 = *(undefined8 *)(lVar18 + 0x34 + (longlong)piVar27);
          uStack_154 = *(undefined4 *)(lVar18 + 0x3c + (longlong)piVar27);
          *puStack_1c0 = uStack_144;
          uStack_150 = *(undefined8 *)(piStack_138 + 0x10);
          uStack_198 = plStack_110;
          uStack_188 = uVar8;
          uStack_15c = (undefined4)uVar10;
          uStack_158 = (undefined4)((ulonglong)uVar10 >> 0x20);
          lVar18 = *(longlong *)(piStack_138 + 0xc);
          uStack_190 = uVar9;
          fStack_180 = fVar39;
          fStack_17c = fVar40;
          fStack_178 = fVar41;
          fStack_174 = fVar38;
          uStack_160 = uVar17;
          if (lVar18 == *(longlong *)(piStack_138 + 8)) {
            pdb_142d8d780(piStack_1b8);
          }
          lVar6 = *(longlong *)(piStack_138 + 10);
          lVar34 = lVar18 * 0x50;
          puVar22 = (undefined8 *)(lVar6 + 0x40 + lVar34);
          *puVar22 = CONCAT44(uStack_154,uStack_158);
          puVar22[1] = uStack_150;
          puVar2 = (undefined4 *)(lVar6 + 0x30 + lVar34);
          *puVar2 = uStack_168;
          puVar2[1] = uStack_164;
          puVar2[2] = uStack_160;
          puVar2[3] = uStack_15c;
          pfVar3 = (float *)(lVar6 + 0x20 + lVar34);
          *pfVar3 = fStack_178;
          pfVar3[1] = fStack_174;
          pfVar3[2] = fStack_170;
          pfVar3[3] = fStack_16c;
          puVar2 = (undefined4 *)(lVar6 + 0x10 + lVar34);
          *puVar2 = (undefined4)uStack_188;
          puVar2[1] = uStack_188._4_4_;
          puVar2[2] = fStack_180;
          puVar2[3] = fStack_17c;
          puVar2 = (undefined4 *)(lVar6 + lVar34);
          *puVar2 = (undefined4)uStack_198;
          puVar2[1] = uStack_198._4_4_;
          puVar2[2] = (undefined4)uStack_190;
          puVar2[3] = uStack_190._4_4_;
          piVar33 = (int *)(lVar18 + 1);
          *(int **)(piStack_138 + 0xc) = piVar33;
          *(longlong *)(piStack_138 + 0x10) = *(longlong *)(piStack_138 + 0x10) + 1;
          *puStack_1a0 = piStack_128._0_4_;
          if ((longlong *)plVar20[2] <= param_2) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(param_2,(longlong *)plVar20[2],&UNK_1434507c0);
          }
          *(undefined8 *)(plVar20[1] + 0x40 + (longlong)piVar27) = uVar8;
          param_2 = plVar28;
          piVar26 = piStack_130;
        }
        else {
          piVar27 = *(int **)piVar24;
          if (((ulonglong)piVar27 & 0xffffffff) == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143450718);
          }
          uVar23 = (ulonglong)piVar27 & 0xffffffff ^ 0xffffffff;
          param_2 = plVar28;
          if (((uVar23 < *(ulonglong *)(lStack_108 + 0x10)) &&
              (piVar24 = (int *)(uVar23 * 0x18 + *(longlong *)(lStack_108 + 8)),
              piVar24[4] == (int)((ulonglong)piVar27 >> 0x20))) && (*piVar24 != 0)) {
            uVar16 = piVar24[2];
            if (((ulonglong)uVar16 < *(ulonglong *)(lStack_120 + 0x38)) &&
               ((*(ulonglong *)(*(longlong *)(lStack_120 + 0x28) + (ulonglong)(uVar16 >> 6) * 8) >>
                 ((ulonglong)uVar16 & 0x3f) & 1) != 0)) {
              plVar20 = *(longlong **)(lStack_118 + 8);
              if (plVar20 == (longlong *)0x0) {
                plVar20 = *(longlong **)(lStack_118 + 0x10);
              }
              lVar18 = plVar20[2];
              if ((ulonglong)(*plVar20 - lVar18) < 0x18) {
                pdb_142d7f1b0(plVar20,lVar18,0x18,1,1);
              }
              lVar6 = plVar20[1];
              *(code **)(lVar6 + lVar18) = pdb_14288cf40;
              *(int **)(lVar6 + 8 + lVar18) = piVar27;
              *(code **)(lVar6 + 0x10 + lVar18) = pdb_14288d0b0;
              goto LAB_14209276c;
            }
          }
        }
      }
      *puStack_1a0 = piStack_128._0_4_;
      *(undefined1 *)(plVar20 + 3) = 1;
      if (cStack_f1 == '\0') {
        return;
      }
      plVar20 = (longlong *)pdb_140e97000();
      if (((char)plVar20[0xd] != '\x01') &&
         (plVar20 = (longlong *)pdb_142e2ab20(plVar20,0), plVar20 == (longlong *)0x0)) break;
      if (*plVar20 == 0) {
        *plVar20 = -1;
        plStack_100 = plVar20;
        pdb_140e95370(plVar20 + 1,uStack_1a8);
        *plStack_100 = *plStack_100 + 1;
        return;
      }
    }
    plVar20 = (longlong *)pdb_142dc8090(&UNK_1435ab5d0);
LAB_142092c4c:
    plVar20 = (longlong *)pdb_142e2ab20(plVar20,0);
  } while (plVar20 != (longlong *)0x0);
  pdb_142dc7890(&UNK_1435ab560);
LAB_142092c81:
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(param_2);
LAB_1420926a0:
  param_2 = plVar28;
  piVar27 = piVar24;
  if (*piVar24 != 0) {
    piVar27 = *(int **)piVar24;
    if (((ulonglong)piVar27 & 0xffffffff) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143450730);
    }
    uVar23 = (ulonglong)piVar27 & 0xffffffff ^ 0xffffffff;
    if (((uVar23 < *(ulonglong *)(lStack_108 + 0x10)) &&
        (piVar24 = (int *)(uVar23 * 0x18 + *(longlong *)(lStack_108 + 8)),
        piVar24[4] == (int)((ulonglong)piVar27 >> 0x20))) && (*piVar24 != 0)) {
      uVar16 = piVar24[2];
      if (((ulonglong)uVar16 < *(ulonglong *)(lStack_120 + 0x38)) &&
         ((*(ulonglong *)(*(longlong *)(lStack_120 + 0x28) + (ulonglong)(uVar16 >> 6) * 8) >>
           ((ulonglong)uVar16 & 0x3f) & 1) != 0)) goto LAB_142092500;
    }
    plVar20 = *(longlong **)(lStack_118 + 8);
    if (plVar20 == (longlong *)0x0) {
      plVar20 = *(longlong **)(lStack_118 + 0x10);
    }
    lVar18 = plVar20[2];
    if ((ulonglong)(*plVar20 - lVar18) < 0x18) {
      pdb_142d7f1b0(plVar20,lVar18,0x18,1,1);
    }
    lVar6 = plVar20[1];
    *(code **)(lVar6 + lVar18) = pdb_14288d000;
    *(int **)(lVar6 + 8 + lVar18) = piVar27;
    *(undefined1 *)(lVar6 + 0x10 + lVar18) = 0;
LAB_14209276c:
    piVar33 = (int *)(lVar18 + 0x18);
    plVar20[2] = (longlong)piVar33;
    param_2 = plVar28;
    plVar20 = plStack_100;
    piVar35 = piVar26;
  }
  goto LAB_142092500;
}

