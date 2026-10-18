// VA 0x14295ef30, PDB extent 3289 bytes
// system_critters::sheep::sheep_umbrella::sheep_umbrellas
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_umbrella.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::sheep::sheep_umbrella::sheep_umbrellas
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_umbrella.rs
   Extent: 3289 */

void pdb_14295ef30(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  longlong *param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  byte bVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  int *piVar24;
  char cVar25;
  longlong lVar26;
  longlong *plVar27;
  longlong lVar28;
  uint *puVar29;
  float fVar30;
  float fVar31;
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
  undefined8 uStack_160;
  longlong lStack_158;
  longlong lStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  undefined8 uStack_130;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined4 uStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  undefined8 *puStack_e8;
  undefined4 *puStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong uStack_a8;
  undefined4 uStack_9c;
  longlong lStack_98;
  longlong lStack_90;
  char cStack_82;
  byte bStack_81;
  undefined8 uStack_80;
  
  fVar15 = _DAT_142e37890;
  fVar14 = _DAT_142e37830;
  fVar13 = _DAT_142e36f28;
  uStack_80 = 0xfffffffffffffffe;
  lStack_148 = *param_1;
  lStack_140 = param_1[1];
  uStack_124 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar29 = *(uint **)(lStack_148 + 0xf8);
  puVar1 = puVar29 + *(longlong *)(lStack_148 + 0x100);
  cStack_82 = *(char *)(lStack_148 + 0x108);
  lStack_108 = *param_2;
  lStack_138 = param_2[1];
  uStack_9c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_130 = *param_4;
  lStack_158 = *param_5;
  lStack_90 = 0;
  lStack_150 = 8;
  lStack_98 = 0;
  lStack_f0 = 0;
  lVar23 = 0;
  uStack_a8 = 0;
  lVar28 = lStack_148;
  lVar26 = lStack_140;
  lVar22 = lStack_138;
  cVar25 = cStack_82;
  uStack_160 = param_3;
  do {
    do {
      if (cVar25 == '\0') {
        if ((int)uStack_a8 == (int)lVar23) {
          if (puVar29 == puVar1) {
            return;
          }
          while( true ) {
            lVar23 = *(longlong *)
                      (*(longlong *)(lVar26 + 0x100) + 0x58 + (ulonglong)*puVar29 * 0xa0);
            if (lVar23 != 0) break;
            puVar29 = puVar29 + 1;
            if (puVar29 == puVar1) {
              return;
            }
          }
          lVar19 = *(longlong *)(lVar26 + 0x100) + (ulonglong)*puVar29 * 0xa0;
          uVar17 = (ulonglong)*(uint *)(lVar19 + 0x94);
          lVar20 = *(longlong *)(lVar26 + 0x1a0) + uVar17 * 0x48;
          uVar17 = *(ulonglong *)(*(longlong *)(lVar26 + 0x1a0) + 0x40 + uVar17 * 0x48);
          if ((*(ulonglong *)(lVar28 + 0x110) < uVar17) &&
             (uVar18 = *(ulonglong *)
                        (*(longlong *)(lVar20 + 0x38) + *(ulonglong *)(lVar28 + 0x110) * 8),
             uVar18 != 0)) {
            lStack_98 = *(longlong *)(*(longlong *)(lVar20 + 0x18) + 0x10 + ~uVar18 * 0x30);
            uVar18 = *(ulonglong *)(lVar28 + 0x118);
            lVar21 = *(longlong *)(lVar20 + 0x38);
            if (uVar17 <= uVar18) goto LAB_14295f1a4;
LAB_14295f20d:
            uVar17 = *(ulonglong *)(lVar21 + uVar18 * 8);
            lVar20 = *(longlong *)(lVar20 + 0x18);
            if (uVar17 == 0) goto LAB_14295f283;
            lStack_90 = *(longlong *)(lVar20 + 0x10 + ~uVar17 * 0x30);
          }
          else {
            lStack_98 = 0;
            uVar18 = *(ulonglong *)(lVar28 + 0x118);
            lVar21 = *(longlong *)(lVar20 + 0x38);
            if (uVar18 < uVar17) goto LAB_14295f20d;
LAB_14295f1a4:
            lVar20 = *(longlong *)(lVar20 + 0x18);
LAB_14295f283:
            lStack_90 = 0;
          }
          puVar29 = puVar29 + 1;
          lVar21 = ~*(ulonglong *)(lVar21 + *(longlong *)(lVar28 + 0x120) * 8) * 0x30;
          lStack_f0 = *(longlong *)(lVar20 + 0x10 + lVar21);
          lStack_110 = *(longlong *)(lVar20 + 0x28 + lVar21);
          lStack_150 = *(longlong *)(lVar19 + 0x50);
          uStack_a8 = 0;
          uVar17 = 0;
        }
        else {
          uVar17 = uStack_a8 & 0xffffffff;
        }
        uVar17 = (ulonglong)~*(uint *)(lStack_150 + 8 + uVar17 * 0x10);
      }
      else {
        if ((int)uStack_a8 == (int)lVar23) {
          if (puVar29 == puVar1) {
            return;
          }
          while( true ) {
            lVar23 = *(longlong *)
                      (*(longlong *)(lVar26 + 0x1a0) + 0x10 + (ulonglong)*puVar29 * 0x48);
            if (lVar23 != 0) break;
            puVar29 = puVar29 + 1;
            if (puVar29 == puVar1) {
              return;
            }
          }
          lVar20 = *(longlong *)(lVar26 + 0x1a0) + (ulonglong)*puVar29 * 0x48;
          uVar17 = *(ulonglong *)(lVar20 + 0x40);
          if ((*(ulonglong *)(lVar28 + 0x110) < uVar17) &&
             (uVar18 = *(ulonglong *)
                        (*(longlong *)(lVar20 + 0x38) + *(ulonglong *)(lVar28 + 0x110) * 8),
             uVar18 != 0)) {
            lStack_98 = *(longlong *)(*(longlong *)(lVar20 + 0x18) + 0x10 + ~uVar18 * 0x30);
            uVar18 = *(ulonglong *)(lVar28 + 0x118);
            lVar19 = *(longlong *)(lVar20 + 0x38);
            if (uVar17 <= uVar18) goto LAB_14295f136;
LAB_14295f1cc:
            uVar17 = *(ulonglong *)(lVar19 + uVar18 * 8);
            lVar20 = *(longlong *)(lVar20 + 0x18);
            if (uVar17 == 0) goto LAB_14295f233;
            lStack_90 = *(longlong *)(lVar20 + 0x10 + ~uVar17 * 0x30);
          }
          else {
            lStack_98 = 0;
            uVar18 = *(ulonglong *)(lVar28 + 0x118);
            lVar19 = *(longlong *)(lVar20 + 0x38);
            if (uVar18 < uVar17) goto LAB_14295f1cc;
LAB_14295f136:
            lVar20 = *(longlong *)(lVar20 + 0x18);
LAB_14295f233:
            lStack_90 = 0;
          }
          puVar29 = puVar29 + 1;
          lVar19 = ~*(ulonglong *)(lVar19 + *(longlong *)(lVar28 + 0x120) * 8) * 0x30;
          lStack_f0 = *(longlong *)(lVar20 + 0x10 + lVar19);
          lStack_110 = *(longlong *)(lVar20 + 0x28 + lVar19);
          uStack_a8 = 0;
        }
        uVar17 = uStack_a8 & 0xffffffff;
      }
      puStack_e8 = (undefined8 *)(uVar17 * 0x30 + lStack_98);
      piVar24 = (int *)(uVar17 * 0x90 + lStack_f0);
      puStack_e0 = (undefined4 *)(lStack_110 + uVar17 * 4);
      uVar4 = *(uint *)(lStack_90 + uVar17 * 8);
      uVar17 = (ulonglong)(byte)((char)uVar4 + 0x1e);
      if (uVar4 < 2) {
        uVar17 = 3;
      }
      bStack_81 = 0x1a >> ((byte)uVar17 & 0x1f);
      if (piVar24[0x20] == 0) {
        uVar9 = *puStack_e8;
        uVar10 = puStack_e8[1];
        uVar11 = puStack_e8[2];
        uVar12 = puStack_e8[5];
        uStack_200 = (undefined4)puStack_e8[3];
        if (*piVar24 != 1) {
          uVar17 = *(ulonglong *)(piVar24 + 2);
        }
        else {
          lStack_100 = CONCAT44(lStack_100._4_4_,piVar24[1]);
        }
        uStack_1e8 = (uint)(*piVar24 == 1);
        uStack_1a0 = *(ulonglong *)(piVar24 + 0x12);
        LOCK();
        piVar3 = (int *)((uStack_1a0 & 0xffffffffffffffc0) + 0x10 +
                        (ulonglong)((uint)uStack_1a0 & 0x3f) * 4);
        *piVar3 = *piVar3 + 1;
        UNLOCK();
        uStack_198 = *(ulonglong *)(piVar24 + 0x14);
        if (uStack_198 != 0) {
          LOCK();
          piVar3 = (int *)((uStack_198 & 0xffffffffffffffc0) + 0x10 +
                          (ulonglong)((uint)uStack_198 & 0x3f) * 4);
          *piVar3 = *piVar3 + 1;
          UNLOCK();
        }
        uStack_190 = *(ulonglong *)(piVar24 + 0x16);
        if (uStack_190 != 0) {
          LOCK();
          piVar3 = (int *)((uStack_190 & 0xffffffffffffffc0) + 0x10 +
                          (ulonglong)((uint)uStack_190 & 0x3f) * 4);
          *piVar3 = *piVar3 + 1;
          UNLOCK();
        }
        uStack_188 = *(ulonglong *)(piVar24 + 0x18);
        if (uStack_188 != 0) {
          LOCK();
          piVar3 = (int *)((uStack_188 & 0xffffffffffffffc0) + 0x10 +
                          (ulonglong)((uint)uStack_188 & 0x3f) * 4);
          *piVar3 = *piVar3 + 1;
          UNLOCK();
        }
        uStack_178 = *(undefined8 *)(piVar24 + 0x1c);
        uStack_180 = *(ulonglong *)(piVar24 + 0x1a);
        if (uStack_180 != 0) {
          LOCK();
          piVar3 = (int *)((uStack_180 & 0xfffffffffffffffc) + 0x10 +
                          (ulonglong)((uint)uStack_180 & 3) * 4);
          *piVar3 = *piVar3 + 1;
          UNLOCK();
        }
        uStack_1a8 = *(undefined8 *)(piVar24 + 0x10);
        uStack_170 = *(ulonglong *)(piVar24 + 0x1e);
        if (uStack_170 != 0) {
          LOCK();
          piVar3 = (int *)((uStack_170 & 0xfffffffffffffffc) + 0x10 +
                          (ulonglong)((uint)uStack_170 & 3) * 4);
          *piVar3 = *piVar3 + 1;
          UNLOCK();
        }
        uStack_1e4 = (undefined4)lStack_100;
        uStack_218 = (undefined4)uVar9;
        uStack_214 = (undefined4)((ulonglong)uVar9 >> 0x20);
        uStack_210 = (undefined4)uVar10;
        uStack_20c = (undefined4)((ulonglong)uVar10 >> 0x20);
        uStack_208 = (undefined4)uVar11;
        uStack_204 = (undefined4)((ulonglong)uVar11 >> 0x20);
        uStack_1f0 = (undefined4)uVar12;
        uStack_1ec = (undefined4)((ulonglong)uVar12 >> 0x20);
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
        uStack_1e0 = uVar17;
        pdb_14296c7e0(&uStack_d8,uStack_160,&uStack_1e8,&UNK_143604f10);
        uVar17 = uStack_d8;
        plVar27 = (longlong *)CONCAT44(uStack_c4,uStack_c8);
        if (plVar27 == (longlong *)0x0) {
          plVar27 = (longlong *)CONCAT44(uStack_bc,uStack_c0);
        }
        lVar28 = plVar27[2];
        if ((ulonglong)(*plVar27 - lVar28) < 0x20) {
          pdb_142d7f1b0(plVar27,lVar28,0x20,1,1);
        }
        lVar26 = plVar27[1];
        *(code **)(lVar26 + lVar28) = pdb_142969e10;
        *(ulonglong *)(lVar26 + 8 + lVar28) = uVar17;
        *(undefined4 *)(lVar26 + 0x10 + lVar28) = 0;
        *(byte *)(lVar26 + 0x14 + lVar28) = bStack_81 & 1;
        *(undefined1 *)(lVar26 + 0x18 + lVar28) = 0;
        plVar27[2] = lVar28 + 0x20;
        *puStack_e0 = uStack_124;
        *(ulonglong *)(piVar24 + 0x20) = uVar17;
        uVar18 = uVar17 & 0xffffffff;
        lVar28 = lStack_148;
        lVar26 = lStack_140;
        lVar22 = lStack_138;
        cVar25 = cStack_82;
        if (uVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143604f28);
        }
      }
      else {
        uVar17 = *(ulonglong *)(piVar24 + 0x20);
        uVar18 = uVar17 & 0xffffffff;
      }
      uStack_a8 = (ulonglong)((int)uStack_a8 + 1);
    } while ((((*(ulonglong *)(lVar22 + 0x10) <= (uVar18 ^ 0xffffffff)) ||
              (piVar24 = (int *)((uVar18 ^ 0xffffffff) * 0x18 + *(longlong *)(lVar22 + 8)),
              piVar24[4] != (int)(uVar17 >> 0x20))) || (*piVar24 == 0)) ||
            ((uVar17 = *(ulonglong *)(piVar24 + 2),
             *(ulonglong *)(lStack_108 + 0x38) <= (uVar17 & 0xffffffff) ||
             ((*(ulonglong *)(*(longlong *)(lStack_108 + 0x28) + (uVar17 >> 6 & 0x3ffffff) * 8) >>
               (uVar17 & 0x3f) & 1) == 0))));
    lVar28 = *(longlong *)(*(longlong *)(lVar22 + 0x1a0) + 0x18 + (uVar17 >> 0x20) * 0x48);
    lVar26 = *(longlong *)(*(longlong *)(lVar22 + 0x1a0) + 0x38 + (uVar17 >> 0x20) * 0x48);
    lVar20 = ~*(ulonglong *)(lVar26 + *(longlong *)(lStack_108 + 0x110) * 8) * 0x30;
    lVar22 = *(longlong *)(lVar28 + 0x10 + lVar20);
    puStack_e0 = *(undefined4 **)(lVar28 + 0x28 + lVar20);
    lVar20 = ~*(ulonglong *)(lVar26 + *(longlong *)(lStack_108 + 0x118) * 8) * 0x30;
    lVar26 = *(longlong *)(lVar28 + 0x10 + lVar20);
    lStack_100 = *(longlong *)(lVar28 + 0x28 + lVar20);
    uVar17 = (ulonglong)(uint)~piVar24[1];
    lVar28 = uVar17 * 0x30;
    uStack_118 = *(undefined4 *)(puStack_e8 + 3);
    uStack_120 = puStack_e8[2];
    *(undefined4 *)(lStack_100 + uVar17 * 4) = uStack_9c;
    *(undefined4 *)(lVar26 + 0x18 + lVar28) = uStack_118;
    *(undefined8 *)(lVar26 + 0x10 + lVar28) = uStack_120;
    uVar5 = *(undefined4 *)puStack_e8;
    uVar6 = *(undefined4 *)((longlong)puStack_e8 + 4);
    uVar7 = *(undefined4 *)(puStack_e8 + 1);
    uVar8 = *(undefined4 *)((longlong)puStack_e8 + 0xc);
    *(undefined4 *)(lStack_100 + uVar17 * 4) = uStack_9c;
    puVar2 = (undefined4 *)(lVar26 + lVar28);
    *puVar2 = uVar5;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    bVar16 = *(byte *)(lVar22 + 4 + uVar17 * 8) ^ 1;
    if (((bStack_81 & 1) == 0) && (bVar16 == 0)) {
      lStack_f8 = lVar22;
      pdb_140a8ccc0(&uStack_1e8,uStack_130,&UNK_143604f40,0x1e);
      if (uStack_1e8 == 2) {
        uStack_d8 = uStack_1e0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143604fd8,0x2b,&uStack_d8,&UNK_143604fb8,&UNK_143604f60);
      }
      uStack_b8 = uStack_1c8;
      uStack_b4 = uStack_1c4;
      uStack_b0 = uStack_1c0;
      uStack_ac = uStack_1bc;
      uStack_c8 = uStack_1d8;
      uStack_c4 = uStack_1d4;
      uStack_c0 = uStack_1d0;
      uStack_bc = uStack_1cc;
      uStack_d8 = CONCAT44(uStack_1e4,uStack_1e8);
      uStack_d0 = (undefined4)uStack_1e0;
      uStack_cc = uStack_1e0._4_4_;
      pdb_140a8e190(&uStack_d8,&uStack_120);
      pdb_140a8a6f0(&uStack_d8);
      pdb_1409a5ed0(&uStack_d8);
LAB_14295f7e9:
      lVar22 = lStack_f8;
      if (CONCAT44(uStack_c4,uStack_c8) != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_bc,uStack_c0),CONCAT44(uStack_c4,uStack_c8),1);
        lVar22 = lStack_f8;
      }
    }
    else if ((bStack_81 & bVar16) != 0) {
      lStack_f8 = lVar22;
      pdb_140a8ccc0(&uStack_1e8,uStack_130,&UNK_143604f78,0x1d);
      if (uStack_1e8 == 2) {
        uStack_d8 = uStack_1e0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143604fd8,0x2b,&uStack_d8,&UNK_143604fb8,&UNK_143604f98);
      }
      uStack_b8 = uStack_1c8;
      uStack_b4 = uStack_1c4;
      uStack_b0 = uStack_1c0;
      uStack_ac = uStack_1bc;
      uStack_c8 = uStack_1d8;
      uStack_c4 = uStack_1d4;
      uStack_c0 = uStack_1d0;
      uStack_bc = uStack_1cc;
      uStack_d8 = CONCAT44(uStack_1e4,uStack_1e8);
      uStack_d0 = (undefined4)uStack_1e0;
      uStack_cc = uStack_1e0._4_4_;
      pdb_140a8e190(&uStack_d8,&uStack_120);
      pdb_140a8a6f0(&uStack_d8);
      pdb_1409a5ed0(&uStack_d8);
      goto LAB_14295f7e9;
    }
    uVar5 = uStack_9c;
    *(undefined4 *)((longlong)puStack_e0 + uVar17 * 4) = uStack_9c;
    *(byte *)(lVar22 + 4 + uVar17 * 8) = bStack_81 & 1;
    fVar31 = fVar14;
    if ((bStack_81 & 1) == 0) {
      fVar31 = fVar15;
    }
    lVar26 = lVar26 + lVar28;
    fVar30 = *(float *)(lStack_158 + 0x28);
    *(undefined4 *)((longlong)puStack_e0 + uVar17 * 4) = uStack_9c;
    fVar30 = fVar31 * fVar30 + *(float *)(lVar22 + uVar17 * 8);
    fVar31 = 0.0;
    if (0.0 <= fVar30) {
      fVar31 = fVar30;
    }
    fVar30 = fVar13;
    if (fVar31 <= fVar13) {
      fVar30 = fVar31;
    }
    *(float *)(lVar22 + uVar17 * 8) = fVar30;
    fVar31 = (float)pdb_140dedcd0(&UNK_143604fb0);
    fVar31 = fVar31 * *(float *)((longlong)puStack_e8 + 0x1c);
    *(undefined4 *)(lStack_100 + uVar17 * 4) = uVar5;
    *(float *)(lVar26 + 0x1c) = fVar31;
    *(float *)(lVar26 + 0x20) = fVar31;
    *(float *)(lVar26 + 0x24) = fVar31;
    lVar28 = lStack_148;
    lVar26 = lStack_140;
    lVar22 = lStack_138;
    cVar25 = cStack_82;
  } while( true );
}

