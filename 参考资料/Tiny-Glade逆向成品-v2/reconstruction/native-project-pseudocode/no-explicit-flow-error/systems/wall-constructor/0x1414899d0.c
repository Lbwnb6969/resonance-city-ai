// VA 0x1414899d0, PDB extent 3925 bytes
// system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_circle_horizontal_wall_boards
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_circle_horizontal_wall_boards
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
   Extent: 3925 */

ulonglong *
pdb_1414899d0(ulonglong *param_1,undefined1 *param_2,longlong param_3,longlong param_4,float param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9,
             undefined1 param_10)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  code *pcVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined8 unaff_R15;
  float extraout_XMM0_Da;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  longlong lStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  ulonglong *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 *puStack_1c8;
  byte *pbStack_1c0;
  undefined1 *puStack_1b8;
  longlong lStack_1b0;
  byte *pbStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined1 *puStack_188;
  byte *pbStack_180;
  undefined1 *puStack_178;
  byte *pbStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  longlong lStack_150;
  longlong lStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  byte *pbStack_130;
  undefined1 *puStack_128;
  undefined1 *puStack_118;
  byte *pbStack_110;
  undefined1 *puStack_108;
  undefined1 uStack_f9;
  byte *pbStack_f8;
  undefined1 *puStack_f0;
  undefined1 uStack_e1;
  byte *pbStack_e0;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  
  uStack_d0 = 0xfffffffffffffffe;
  pdb_141484310(&lStack_1b0,param_3,param_4,param_6,param_7,param_8);
  uVar11 = pdb_140930190(param_3,CONCAT71((int7)((ulonglong)unaff_R15 >> 8),param_10) & 0xffffffff);
  fVar23 = extraout_XMM0_Da;
  if ((uVar11 & 1) == 0) {
    fVar23 = *(float *)(param_3 + 0x278);
  }
  if (param_5 <= _DAT_142e37ad4 + fVar23) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
  }
  else {
    fVar2 = *(float *)(param_4 + 0x3c);
    uStack_198 = 0;
    fStack_18c = param_5;
    fStack_194 = fVar23;
    fStack_190 = fVar2;
    pdb_1414887e0(&lStack_1f0,&uStack_198,1,param_9);
    lStack_150 = lStack_1e0 * 0x10 + lStack_1e8;
    lStack_168 = lStack_1e8;
    lStack_160 = lStack_1e8;
    lStack_158 = lStack_1f0;
    lStack_148 = param_4;
    pdb_1413e6100(&puStack_1c8,&lStack_168);
    uStack_d1 = 1;
    pdb_141484710(pbStack_1a8,uStack_1a0,&puStack_1c8,1);
    if (puStack_1b8 != (undefined1 *)0x0) {
      pbVar17 = pbStack_1c0 + 0x21;
      puVar18 = puStack_1b8;
      do {
        lStack_160 = *(longlong *)(pbVar17 + -0x11);
        lStack_158 = *(longlong *)(pbVar17 + -9);
        pbVar17[-0x21] = 0;
        pbVar17[-0x20] = 0;
        pbVar17[-0x1f] = 0;
        pbVar17[-0x1e] = 0;
        pbVar17[-0x1d] = 0;
        pbVar17[-0x1c] = 0;
        pbVar17[-0x1b] = 0;
        pbVar17[-0x1a] = 0;
        *(longlong *)(pbVar17 + -0x19) = lStack_168;
        *(longlong *)(pbVar17 + -0x11) = lStack_160;
        *(longlong *)(pbVar17 + -9) = lStack_158;
        pbVar17[-1] = 1;
        pbVar17[0] = 0;
        pbVar17 = pbVar17 + 0x28;
        puVar18 = puVar18 + -1;
      } while (puVar18 != (undefined1 *)0x0);
    }
    puStack_138 = puStack_1c8;
    pbStack_130 = pbStack_1c0;
    puStack_128 = puStack_1b8;
    pdb_141488be0(&puStack_138);
    puVar18 = puStack_128;
    if (_DAT_142e37848 < fVar2) {
      puStack_140 = puStack_138;
      pbStack_e0 = pbStack_130;
      puStack_138 = (undefined1 *)0x0;
      pbStack_130 = (byte *)0x8;
      puStack_128 = (undefined1 *)0x0;
      puStack_f0 = puVar18;
      puStack_1d8 = param_1;
      puStack_1d0 = param_2;
      if (puVar18 == (undefined1 *)0x0) {
        pbStack_110 = (byte *)0x8;
        pbStack_f8 = (byte *)0x1;
        uVar11 = 0;
      }
      else {
        pdb_14007ee60();
        pbStack_f8 = pub_1406abae0((ulonglong)puVar18,1);
        if (pbStack_f8 == (byte *)0x0) {
          uStack_d2 = 1;
          pdb_142dc7e2a(1,puVar18);
LAB_14148a31d:
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        uVar11 = (longlong)puVar18 * 0x28;
        pdb_14007ee60();
        pbStack_110 = pub_1406abab0(uVar11,8);
        if (pbStack_110 == (byte *)0x0) {
          pbStack_170 = pbStack_f8;
          uStack_d3 = 1;
          pdb_142dc7e2a(8,uVar11);
          goto LAB_14148a31d;
        }
      }
      fVar23 = _DAT_142e37870;
      uVar10 = _DAT_142e377e0;
      puStack_108 = (undefined1 *)0x0;
      fVar27 = _DAT_142e3784c + fVar2;
      puVar20 = (undefined1 *)0x0;
      puVar18 = puStack_f0;
      puVar22 = (undefined1 *)0x0;
      puStack_118 = puStack_f0;
LAB_141489d40:
      while (puVar21 = puVar22, puVar19 = puStack_108, uStack_e1 = puVar21 < puVar18,
            (bool)uStack_e1) {
        puVar22 = puVar21 + 1;
        if (pbStack_f8[(longlong)puVar21] == 0) {
          uVar7 = *(ulonglong *)(pbStack_e0 + (longlong)puVar21 * 0x28);
          lVar8 = *(longlong *)(pbStack_e0 + (longlong)puVar21 * 0x28 + 8);
          fVar26 = *(float *)(pbStack_e0 + (longlong)puVar21 * 0x28 + 0x14);
          fVar29 = *(float *)(pbStack_e0 + (longlong)puVar21 * 0x28 + 0x18);
          fVar28 = *(float *)(pbStack_e0 + (longlong)puVar21 * 0x28 + 0x1c);
          bVar5 = pbStack_e0[(longlong)puVar21 * 0x28 + 0x20];
          bVar6 = pbStack_e0[(longlong)puVar21 * 0x28 + 0x21];
          if ((*(float *)(pbStack_e0 + (longlong)puVar21 * 0x28 + 0x10) <= fVar23) &&
             (fVar27 <= fVar29)) {
            pbStack_f8[(longlong)puVar21] = 1;
            puStack_188 = puStack_1d0;
            lVar13 = pdb_140315970(&puStack_188);
            lStack_168 = lVar13 * 0x16453 + (longlong)puVar21 * 0x13f955 + 0x49;
            fVar24 = (float)pdb_140e02880(&lStack_168);
            puVar19 = puStack_108;
            fVar24 = fVar24 * fVar2;
            fVar29 = fVar24;
            if (puStack_108 == puStack_118) {
              pdb_142d7ede0(&puStack_118);
            }
            goto LAB_14148a063;
          }
          if (*(float *)(pbStack_e0 + (longlong)puVar21 * 0x28 + 0x10) <= fVar23) {
            uVar12 = 0;
            puVar15 = (undefined1 *)0x0;
            puVar18 = puStack_f0;
            if ((uVar7 & 1) == 0) {
              do {
                if (puStack_f0 == puVar15) {
LAB_14148a28c:
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(puStack_f0,puStack_f0,&UNK_14330d320);
                }
                if ((((puVar21 != puVar15) && (pbStack_f8[(longlong)puVar15] == 0)) &&
                    (fVar27 <= *(float *)(pbStack_e0 + uVar12 + 0x18))) &&
                   ((((float)((uint)(fVar26 - *(float *)(pbStack_e0 + uVar12 + 0x14)) & uVar10) <=
                      fVar23 &&
                     ((float)((uint)(fVar28 - *(float *)(pbStack_e0 + uVar12 + 0x1c)) & uVar10) <=
                      fVar23)) &&
                    ((pbStack_e0[uVar12 + 0x20] == bVar5 &&
                     ((pbStack_e0[uVar12] == 0 && (pbStack_e0[uVar12 + 0x21] == bVar6))))))))
                goto LAB_141489f4d;
                puVar15 = puVar15 + 1;
                uVar12 = uVar12 + 0x28;
              } while (uVar11 != uVar12);
            }
            else {
              do {
                if (puStack_f0 == puVar15) goto LAB_14148a28c;
                if (((((puVar21 != puVar15) && (pbStack_f8[(longlong)puVar15] == 0)) &&
                     (fVar27 <= *(float *)(pbStack_e0 + uVar12 + 0x18))) &&
                    (((float)((uint)(fVar26 - *(float *)(pbStack_e0 + uVar12 + 0x14)) & uVar10) <=
                      fVar23 &&
                     ((float)((uint)(fVar28 - *(float *)(pbStack_e0 + uVar12 + 0x1c)) & uVar10) <=
                      fVar23)))) &&
                   (((pbStack_e0[uVar12 + 0x20] == bVar5 &&
                     ((*(int *)(pbStack_e0 + uVar12) == 1 &&
                      (*(longlong *)(pbStack_e0 + uVar12 + 8) == lVar8)))) &&
                    (pbStack_e0[uVar12 + 0x21] == bVar6)))) goto LAB_141489f4d;
                puVar15 = puVar15 + 1;
                uVar12 = uVar12 + 0x28;
              } while (uVar11 != uVar12);
            }
          }
        }
      }
      pbVar17 = pbStack_e0 + (longlong)puVar18 * 0x28;
      uStack_e1 = 0;
      pbVar16 = pbStack_e0;
      puVar18 = (undefined1 *)0x0;
      while ((pbVar14 = pbVar16, pbVar14 != pbVar17 && (lVar8 = *(longlong *)pbVar14, lVar8 != 2)))
      {
        lStack_168 = *(longlong *)(pbVar14 + 8);
        lStack_160 = *(longlong *)(pbVar14 + 0x10);
        lStack_158 = *(longlong *)(pbVar14 + 0x18);
        lStack_150 = *(longlong *)(pbVar14 + 0x20);
        if (puStack_f0 <= puVar18) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(puVar18,puStack_f0,&UNK_14330d2f0);
        }
        puVar22 = puVar18 + 1;
        pbVar1 = pbStack_f8 + (longlong)puVar18;
        pbVar16 = pbVar14 + 0x28;
        puVar18 = puVar22;
        if (*pbVar1 == 0) {
          if (puVar20 == puStack_118) {
            pdb_142d7ede0(&puStack_118);
          }
          *(longlong *)(pbStack_110 + (longlong)puVar20 * 0x28) = lVar8;
          *(longlong *)(pbStack_110 + (longlong)puVar20 * 0x28 + 8) = lStack_168;
          *(longlong *)(pbStack_110 + (longlong)puVar20 * 0x28 + 8 + 8) = lStack_160;
          *(longlong *)(pbStack_110 + (longlong)puVar20 * 0x28 + 0x18) = lStack_158;
          *(longlong *)(pbStack_110 + (longlong)puVar20 * 0x28 + 0x18 + 8) = lStack_150;
          puStack_108 = puVar20 + 1;
          pbVar16 = pbVar14 + 0x28;
          puVar20 = puStack_108;
        }
      }
      if (puStack_140 != (undefined1 *)0x0) {
        pub_1406abac0(pbStack_e0,(longlong)puStack_140 * 0x28,8);
        puVar20 = puStack_108;
      }
      pbVar17 = pbStack_110;
      puStack_188 = &uStack_f9;
      if ((undefined1 *)0x1 < puVar20) {
        if (puVar20 < (undefined1 *)0x15) {
          pbVar14 = pbStack_110 + (longlong)puVar20 * 0x28;
          pbVar16 = pbStack_110 + 0x28;
          do {
            pdb_14145b0e0(pbVar17,pbVar16);
            pbVar16 = pbVar16 + 0x28;
          } while (pbVar16 != pbVar14);
        }
        else {
          pdb_141465400(pbStack_110,puVar20,&puStack_188);
        }
      }
      puStack_178 = puStack_108;
      puStack_188 = puStack_118;
      pbStack_180 = pbStack_110;
      if (puStack_138 != (undefined1 *)0x0) {
        pub_1406abac0(pbStack_130,(longlong)puStack_138 * 0x28,8);
      }
      param_1 = puStack_1d8;
      puStack_128 = puStack_178;
      puStack_138 = puStack_188;
      pbStack_130 = pbStack_180;
      if (puStack_f0 != (undefined1 *)0x0) {
        pub_1406abac0(pbStack_f8,(ulonglong)puStack_f0,1);
      }
    }
    param_1[2] = (ulonglong)puStack_128;
    *param_1 = (ulonglong)puStack_138;
    param_1[1] = (ulonglong)pbStack_130;
  }
  if (lStack_1b0 != 0) {
    pub_1406abac0(pbStack_1a8,lStack_1b0 << 4,4);
  }
  return param_1;
LAB_141489f4d:
  if (puStack_f0 <= puVar15) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(puVar15,puStack_f0,&UNK_14330d308);
  }
  fVar24 = *(float *)(pbStack_e0 + (longlong)puVar15 * 0x28 + 0x10);
  fVar25 = *(float *)(pbStack_e0 + (longlong)puVar15 * 0x28 + 0x14);
  fVar3 = *(float *)(pbStack_e0 + (longlong)puVar15 * 0x28 + 0x1c);
  pbStack_f8[(longlong)puVar21] = 1;
  pbStack_f8[(longlong)puVar15] = 1;
  fVar4 = fVar25;
  if (fVar26 <= fVar25) {
    fVar4 = fVar26;
  }
  fVar26 = (float)(~-(uint)NAN(fVar26) & (uint)fVar4 | -(uint)NAN(fVar26) & (uint)fVar25);
  fVar25 = fVar3;
  if (fVar3 <= fVar28) {
    fVar25 = fVar28;
  }
  fVar28 = (float)(~-(uint)NAN(fVar28) & (uint)fVar25 | -(uint)NAN(fVar28) & (uint)fVar3);
  if (puStack_108 == puStack_118) {
    pdb_142d7ede0(&puStack_118);
  }
LAB_14148a063:
  *(ulonglong *)(pbStack_110 + (longlong)puVar19 * 0x28) = uVar7;
  *(longlong *)(pbStack_110 + (longlong)puVar19 * 0x28 + 8) = lVar8;
  *(float *)(pbStack_110 + (longlong)puVar19 * 0x28 + 0x10) = fVar24;
  *(float *)(pbStack_110 + (longlong)puVar19 * 0x28 + 0x14) = fVar26;
  *(float *)(pbStack_110 + (longlong)puVar19 * 0x28 + 0x18) = fVar29 + fVar2;
  *(float *)(pbStack_110 + (longlong)puVar19 * 0x28 + 0x1c) = fVar28;
  pbStack_110[(longlong)puVar19 * 0x28 + 0x20] = bVar5;
  pbStack_110[(longlong)puVar19 * 0x28 + 0x21] = bVar6;
  puVar20 = puVar19 + 1;
  puVar18 = puStack_f0;
  puStack_108 = puVar20;
  goto LAB_141489d40;
}

