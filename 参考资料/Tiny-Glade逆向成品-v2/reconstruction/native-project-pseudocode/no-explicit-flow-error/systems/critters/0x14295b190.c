// VA 0x14295b190, PDB extent 3273 bytes
// system_critters::sheep::sheep_floatie::sheep_floaties
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_floatie.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::sheep::sheep_floatie::sheep_floaties
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_floatie.rs
   Extent: 3273 */

void pdb_14295b190(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  longlong *param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  byte bVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  int *piVar23;
  char cVar24;
  longlong lVar25;
  longlong *plVar26;
  longlong lVar27;
  uint *puVar28;
  float fVar29;
  float fVar30;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  uint uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  ulonglong uStack_1a0;
  ulonglong uStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined8 uStack_178;
  ulonglong uStack_170;
  undefined8 uStack_168;
  longlong lStack_160;
  longlong lStack_158;
  longlong lStack_150;
  longlong lStack_148;
  longlong lStack_140;
  undefined8 uStack_138;
  longlong lStack_130;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined4 uStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong lStack_c0;
  undefined8 *puStack_b8;
  undefined4 *puStack_b0;
  ulonglong uStack_a8;
  longlong lStack_a0;
  undefined4 uStack_94;
  longlong lStack_90;
  int iStack_88;
  char cStack_81;
  undefined8 uStack_80;
  
  fVar14 = _DAT_142e37890;
  fVar13 = _DAT_142e37830;
  fVar12 = _DAT_142e36f28;
  uStack_80 = 0xfffffffffffffffe;
  lStack_150 = *param_1;
  lStack_148 = param_1[1];
  uStack_124 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar28 = *(uint **)(lStack_150 + 0xf8);
  puVar1 = puVar28 + *(longlong *)(lStack_150 + 0x100);
  cStack_81 = *(char *)(lStack_150 + 0x108);
  lStack_108 = *param_2;
  lStack_140 = param_2[1];
  uStack_94 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_138 = *param_4;
  lStack_160 = *param_5;
  lStack_a0 = 0;
  lStack_158 = 8;
  lStack_90 = 0;
  lStack_c0 = 0;
  lVar22 = 0;
  uStack_a8 = 0;
  lVar27 = lStack_150;
  lVar25 = lStack_148;
  lVar20 = lStack_140;
  cVar24 = cStack_81;
  uStack_168 = param_3;
  do {
    do {
      if (cVar24 == '\0') {
        if ((int)uStack_a8 == (int)lVar22) {
          if (puVar28 == puVar1) {
            return;
          }
          while( true ) {
            lVar22 = *(longlong *)
                      (*(longlong *)(lVar25 + 0x100) + 0x58 + (ulonglong)*puVar28 * 0xa0);
            if (lVar22 != 0) break;
            puVar28 = puVar28 + 1;
            if (puVar28 == puVar1) {
              return;
            }
          }
          lVar19 = *(longlong *)(lVar25 + 0x100) + (ulonglong)*puVar28 * 0xa0;
          uVar16 = (ulonglong)*(uint *)(lVar19 + 0x94);
          lVar17 = *(longlong *)(lVar25 + 0x1a0) + uVar16 * 0x48;
          uVar16 = *(ulonglong *)(*(longlong *)(lVar25 + 0x1a0) + 0x40 + uVar16 * 0x48);
          if ((*(ulonglong *)(lVar27 + 0x110) < uVar16) &&
             (uVar18 = *(ulonglong *)
                        (*(longlong *)(lVar17 + 0x38) + *(ulonglong *)(lVar27 + 0x110) * 8),
             uVar18 != 0)) {
            lStack_90 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + 0x10 + ~uVar18 * 0x30);
            uVar18 = *(ulonglong *)(lVar27 + 0x118);
            lVar21 = *(longlong *)(lVar17 + 0x38);
            if (uVar16 <= uVar18) goto LAB_14295b3f0;
LAB_14295b452:
            uVar16 = *(ulonglong *)(lVar21 + uVar18 * 8);
            lVar17 = *(longlong *)(lVar17 + 0x18);
            if (uVar16 == 0) goto LAB_14295b4b3;
            lStack_a0 = *(longlong *)(lVar17 + 0x10 + ~uVar16 * 0x30);
          }
          else {
            lStack_90 = 0;
            uVar18 = *(ulonglong *)(lVar27 + 0x118);
            lVar21 = *(longlong *)(lVar17 + 0x38);
            if (uVar18 < uVar16) goto LAB_14295b452;
LAB_14295b3f0:
            lVar17 = *(longlong *)(lVar17 + 0x18);
LAB_14295b4b3:
            lStack_a0 = 0;
          }
          puVar28 = puVar28 + 1;
          lVar21 = ~*(ulonglong *)(lVar21 + *(longlong *)(lVar27 + 0x120) * 8) * 0x30;
          lStack_c0 = *(longlong *)(lVar17 + 0x10 + lVar21);
          lStack_110 = *(longlong *)(lVar17 + 0x28 + lVar21);
          lStack_158 = *(longlong *)(lVar19 + 0x50);
          uStack_a8 = 0;
          uVar16 = 0;
        }
        else {
          uVar16 = uStack_a8 & 0xffffffff;
        }
        uVar16 = (ulonglong)~*(uint *)(lStack_158 + 8 + uVar16 * 0x10);
      }
      else {
        if ((int)uStack_a8 == (int)lVar22) {
          if (puVar28 == puVar1) {
            return;
          }
          while( true ) {
            lVar22 = *(longlong *)
                      (*(longlong *)(lVar25 + 0x1a0) + 0x10 + (ulonglong)*puVar28 * 0x48);
            if (lVar22 != 0) break;
            puVar28 = puVar28 + 1;
            if (puVar28 == puVar1) {
              return;
            }
          }
          lVar17 = *(longlong *)(lVar25 + 0x1a0) + (ulonglong)*puVar28 * 0x48;
          uVar16 = *(ulonglong *)(lVar17 + 0x40);
          if ((*(ulonglong *)(lVar27 + 0x110) < uVar16) &&
             (uVar18 = *(ulonglong *)
                        (*(longlong *)(lVar17 + 0x38) + *(ulonglong *)(lVar27 + 0x110) * 8),
             uVar18 != 0)) {
            lStack_90 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + 0x10 + ~uVar18 * 0x30);
            uVar18 = *(ulonglong *)(lVar27 + 0x118);
            lVar19 = *(longlong *)(lVar17 + 0x38);
            if (uVar16 <= uVar18) goto LAB_14295b386;
LAB_14295b418:
            uVar16 = *(ulonglong *)(lVar19 + uVar18 * 8);
            lVar17 = *(longlong *)(lVar17 + 0x18);
            if (uVar16 == 0) goto LAB_14295b471;
            lStack_a0 = *(longlong *)(lVar17 + 0x10 + ~uVar16 * 0x30);
          }
          else {
            lStack_90 = 0;
            uVar18 = *(ulonglong *)(lVar27 + 0x118);
            lVar19 = *(longlong *)(lVar17 + 0x38);
            if (uVar18 < uVar16) goto LAB_14295b418;
LAB_14295b386:
            lVar17 = *(longlong *)(lVar17 + 0x18);
LAB_14295b471:
            lStack_a0 = 0;
          }
          puVar28 = puVar28 + 1;
          lVar19 = ~*(ulonglong *)(lVar19 + *(longlong *)(lVar27 + 0x120) * 8) * 0x30;
          lStack_c0 = *(longlong *)(lVar17 + 0x10 + lVar19);
          lStack_110 = *(longlong *)(lVar17 + 0x28 + lVar19);
          uStack_a8 = 0;
        }
        uVar16 = uStack_a8 & 0xffffffff;
      }
      puStack_b8 = (undefined8 *)(uVar16 * 0x30 + lStack_90);
      piVar23 = (int *)(uVar16 * 0x90 + lStack_c0);
      puStack_b0 = (undefined4 *)(lStack_110 + uVar16 * 4);
      iStack_88 = *(int *)(lStack_a0 + uVar16 * 8);
      if (piVar23[0x20] == 0) {
        uVar8 = *puStack_b8;
        uVar9 = puStack_b8[1];
        uVar10 = puStack_b8[2];
        uVar11 = puStack_b8[5];
        uStack_200 = (undefined4)puStack_b8[3];
        if (*piVar23 != 1) {
          uStack_1e0 = *(undefined4 **)(piVar23 + 2);
        }
        else {
          lStack_100 = CONCAT44(lStack_100._4_4_,piVar23[1]);
          uStack_1e0 = puStack_b0;
        }
        uStack_1e8 = (uint)(*piVar23 == 1);
        uStack_1a0 = *(ulonglong *)(piVar23 + 0x12);
        LOCK();
        piVar3 = (int *)((uStack_1a0 & 0xffffffffffffffc0) + 0x10 +
                        (ulonglong)((uint)uStack_1a0 & 0x3f) * 4);
        *piVar3 = *piVar3 + 1;
        UNLOCK();
        uStack_198 = *(ulonglong *)(piVar23 + 0x14);
        if (uStack_198 != 0) {
          LOCK();
          piVar3 = (int *)((uStack_198 & 0xffffffffffffffc0) + 0x10 +
                          (ulonglong)((uint)uStack_198 & 0x3f) * 4);
          *piVar3 = *piVar3 + 1;
          UNLOCK();
        }
        uStack_190 = *(ulonglong *)(piVar23 + 0x16);
        if (uStack_190 != 0) {
          LOCK();
          piVar3 = (int *)((uStack_190 & 0xffffffffffffffc0) + 0x10 +
                          (ulonglong)((uint)uStack_190 & 0x3f) * 4);
          *piVar3 = *piVar3 + 1;
          UNLOCK();
        }
        uStack_188 = *(ulonglong *)(piVar23 + 0x18);
        if (uStack_188 != 0) {
          LOCK();
          piVar3 = (int *)((uStack_188 & 0xffffffffffffffc0) + 0x10 +
                          (ulonglong)((uint)uStack_188 & 0x3f) * 4);
          *piVar3 = *piVar3 + 1;
          UNLOCK();
        }
        uStack_178 = *(undefined8 *)(piVar23 + 0x1c);
        uStack_180 = *(ulonglong *)(piVar23 + 0x1a);
        if (uStack_180 != 0) {
          LOCK();
          piVar3 = (int *)((uStack_180 & 0xfffffffffffffffc) + 0x10 +
                          (ulonglong)((uint)uStack_180 & 3) * 4);
          *piVar3 = *piVar3 + 1;
          UNLOCK();
        }
        uStack_1a8 = *(undefined8 *)(piVar23 + 0x10);
        uStack_170 = *(ulonglong *)(piVar23 + 0x1e);
        if (uStack_170 != 0) {
          LOCK();
          piVar3 = (int *)((uStack_170 & 0xfffffffffffffffc) + 0x10 +
                          (ulonglong)((uint)uStack_170 & 3) * 4);
          *piVar3 = *piVar3 + 1;
          UNLOCK();
        }
        uStack_1e4 = (undefined4)lStack_100;
        uStack_218 = (undefined4)uVar8;
        uStack_214 = (undefined4)((ulonglong)uVar8 >> 0x20);
        uStack_210 = (undefined4)uVar9;
        uStack_20c = (undefined4)((ulonglong)uVar9 >> 0x20);
        uStack_208 = (undefined4)uVar10;
        uStack_204 = (undefined4)((ulonglong)uVar10 >> 0x20);
        uStack_1f0 = (undefined4)uVar11;
        uStack_1ec = (undefined4)((ulonglong)uVar11 >> 0x20);
        uStack_1b8 = 0;
        uStack_1b4 = 0;
        uStack_1b0 = uStack_1f0;
        uStack_1ac = uStack_1ec;
        uStack_1c8 = uStack_208;
        uStack_1c4 = uStack_204;
        uStack_1c0 = uStack_200;
        uStack_1bc = 0;
        uStack_1d8 = uStack_218;
        uStack_1d4 = uStack_214;
        uStack_1d0 = uStack_210;
        uStack_1cc = uStack_20c;
        pdb_14296c7e0(&uStack_f8,uStack_168,&uStack_1e8,&UNK_143604ad8);
        uVar16 = (ulonglong)uStack_f8;
        plVar26 = (longlong *)CONCAT44(uStack_e4,uStack_e8);
        if (plVar26 == (longlong *)0x0) {
          plVar26 = (longlong *)CONCAT44(uStack_dc,uStack_e0);
        }
        lVar27 = plVar26[2];
        if ((ulonglong)(*plVar26 - lVar27) < 0x20) {
          pdb_142d7f1b0(plVar26,lVar27,0x20,1,1);
        }
        lVar25 = plVar26[1];
        *(code **)(lVar25 + lVar27) = pdb_142969e10;
        *(ulonglong *)(lVar25 + 8 + lVar27) = uVar16;
        *(undefined4 *)(lVar25 + 0x10 + lVar27) = 0;
        *(bool *)(lVar25 + 0x14 + lVar27) = iStack_88 == 4;
        *(undefined1 *)(lVar25 + 0x18 + lVar27) = 0;
        plVar26[2] = lVar27 + 0x20;
        *puStack_b0 = uStack_124;
        *(ulonglong *)(piVar23 + 0x20) = uVar16;
        uVar18 = uVar16 & 0xffffffff;
        lVar27 = lStack_150;
        lVar25 = lStack_148;
        lVar20 = lStack_140;
        cVar24 = cStack_81;
        if (uVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143604af0);
        }
      }
      else {
        uVar16 = *(ulonglong *)(piVar23 + 0x20);
        uVar18 = uVar16 & 0xffffffff;
      }
      uStack_a8 = (ulonglong)((int)uStack_a8 + 1);
    } while ((((*(ulonglong *)(lVar20 + 0x10) <= (uVar18 ^ 0xffffffff)) ||
              (piVar23 = (int *)((uVar18 ^ 0xffffffff) * 0x18 + *(longlong *)(lVar20 + 8)),
              piVar23[4] != (int)(uVar16 >> 0x20))) || (*piVar23 == 0)) ||
            ((uVar16 = *(ulonglong *)(piVar23 + 2),
             *(ulonglong *)(lStack_108 + 0x38) <= (uVar16 & 0xffffffff) ||
             ((*(ulonglong *)(*(longlong *)(lStack_108 + 0x28) + (uVar16 >> 6 & 0x3ffffff) * 8) >>
               (uVar16 & 0x3f) & 1) == 0))));
    lVar27 = *(longlong *)(*(longlong *)(lVar20 + 0x1a0) + 0x18 + (uVar16 >> 0x20) * 0x48);
    lVar25 = *(longlong *)(*(longlong *)(lVar20 + 0x1a0) + 0x38 + (uVar16 >> 0x20) * 0x48);
    lVar20 = ~*(ulonglong *)(lVar25 + *(longlong *)(lStack_108 + 0x110) * 8) * 0x30;
    puStack_b0 = *(undefined4 **)(lVar27 + 0x10 + lVar20);
    lStack_130 = *(longlong *)(lVar27 + 0x28 + lVar20);
    lVar20 = ~*(ulonglong *)(lVar25 + *(longlong *)(lStack_108 + 0x118) * 8) * 0x30;
    lVar25 = *(longlong *)(lVar27 + 0x10 + lVar20);
    lStack_100 = *(longlong *)(lVar27 + 0x28 + lVar20);
    uVar16 = (ulonglong)(uint)~piVar23[1];
    lVar27 = uVar16 * 0x30;
    uStack_118 = *(undefined4 *)(puStack_b8 + 3);
    uStack_120 = puStack_b8[2];
    *(undefined4 *)(lStack_100 + uVar16 * 4) = uStack_94;
    *(undefined4 *)(lVar25 + 0x18 + lVar27) = uStack_118;
    *(undefined8 *)(lVar25 + 0x10 + lVar27) = uStack_120;
    uVar4 = *(undefined4 *)puStack_b8;
    uVar5 = *(undefined4 *)((longlong)puStack_b8 + 4);
    uVar6 = *(undefined4 *)(puStack_b8 + 1);
    uVar7 = *(undefined4 *)((longlong)puStack_b8 + 0xc);
    *(undefined4 *)(lStack_100 + uVar16 * 4) = uStack_94;
    puVar2 = (undefined4 *)(lVar25 + lVar27);
    *puVar2 = uVar4;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    bVar15 = *(byte *)((longlong)puStack_b0 + 4 + uVar16 * 8) ^ 1;
    if ((iStack_88 == 4) || (bVar15 != 0)) {
      if ((iStack_88 == 4 & bVar15) == 0) goto LAB_14295ba58;
      pdb_140a8ccc0(&uStack_1e8,uStack_138,&UNK_143604b40,0x1d);
      if (uStack_1e8 == 2) {
        uStack_f8 = uStack_1e0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143604ba0,0x2b,&uStack_f8,&UNK_143604b80,&UNK_143604b60);
      }
      uStack_d8 = uStack_1c8;
      uStack_d4 = uStack_1c4;
      uStack_d0 = uStack_1c0;
      uStack_cc = uStack_1bc;
      uStack_e8 = uStack_1d8;
      uStack_e4 = uStack_1d4;
      uStack_e0 = uStack_1d0;
      uStack_dc = uStack_1cc;
      uStack_f8 = (undefined4 *)CONCAT44(uStack_1e4,uStack_1e8);
      uStack_f0 = (undefined4)uStack_1e0;
      uStack_ec = uStack_1e0._4_4_;
      pdb_140a8e190(&uStack_f8,&uStack_120);
      pdb_140a8a6f0(&uStack_f8);
      pdb_1409a5ed0(&uStack_f8);
      if (CONCAT44(uStack_e4,uStack_e8) != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_dc,uStack_e0),CONCAT44(uStack_e4,uStack_e8),1);
      }
      *(undefined4 *)(lStack_130 + uVar16 * 4) = uStack_94;
      *(undefined1 *)((longlong)puStack_b0 + 4 + uVar16 * 8) = 1;
LAB_14295ba7d:
      fVar30 = fVar13;
    }
    else {
      pdb_140a8ccc0(&uStack_1e8,uStack_138,&UNK_143604b08,0x1e);
      if (uStack_1e8 == 2) {
        uStack_f8 = uStack_1e0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143604ba0,0x2b,&uStack_f8,&UNK_143604b80,&UNK_143604b28);
      }
      uStack_d8 = uStack_1c8;
      uStack_d4 = uStack_1c4;
      uStack_d0 = uStack_1c0;
      uStack_cc = uStack_1bc;
      uStack_e8 = uStack_1d8;
      uStack_e4 = uStack_1d4;
      uStack_e0 = uStack_1d0;
      uStack_dc = uStack_1cc;
      uStack_f8 = (undefined4 *)CONCAT44(uStack_1e4,uStack_1e8);
      uStack_f0 = (undefined4)uStack_1e0;
      uStack_ec = uStack_1e0._4_4_;
      pdb_140a8e190(&uStack_f8,&uStack_120);
      pdb_140a8a6f0(&uStack_f8);
      pdb_1409a5ed0(&uStack_f8);
      if (CONCAT44(uStack_e4,uStack_e8) != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_dc,uStack_e0),CONCAT44(uStack_e4,uStack_e8),1);
      }
LAB_14295ba58:
      *(undefined4 *)(lStack_130 + uVar16 * 4) = uStack_94;
      *(bool *)((longlong)puStack_b0 + 4 + uVar16 * 8) = iStack_88 == 4;
      fVar30 = fVar14;
      if (iStack_88 == 4) goto LAB_14295ba7d;
    }
    uVar4 = uStack_94;
    lVar25 = lVar25 + lVar27;
    fVar29 = *(float *)(lStack_160 + 0x28);
    *(undefined4 *)(lStack_130 + uVar16 * 4) = uStack_94;
    fVar29 = fVar30 * fVar29 + *(float *)((longlong)puStack_b0 + uVar16 * 8);
    fVar30 = 0.0;
    if (0.0 <= fVar29) {
      fVar30 = fVar29;
    }
    fVar29 = fVar12;
    if (fVar30 <= fVar12) {
      fVar29 = fVar30;
    }
    *(float *)((longlong)puStack_b0 + uVar16 * 8) = fVar29;
    fVar30 = (float)pdb_140dedcd0(&UNK_143604b78);
    fVar30 = fVar30 * *(float *)((longlong)puStack_b8 + 0x1c);
    *(undefined4 *)(lStack_100 + uVar16 * 4) = uVar4;
    *(float *)(lVar25 + 0x1c) = fVar30;
    *(float *)(lVar25 + 0x20) = fVar30;
    *(float *)(lVar25 + 0x24) = fVar30;
    lVar27 = lStack_150;
    lVar25 = lStack_148;
    lVar20 = lStack_140;
    cVar24 = cStack_81;
  } while( true );
}

