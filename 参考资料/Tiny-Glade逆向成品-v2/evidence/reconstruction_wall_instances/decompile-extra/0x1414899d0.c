// Matched PDB: system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_circle_horizontal_wall_boards
// VA 0x1414899d0, PDB extent 3925 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_circle_horizontal_wall_boards
   Extent: 3925 bytes. No whole-program auto-analysis. */

ulonglong *
pdb_1414899d0(ulonglong *param_1,undefined1 *param_2,longlong param_3,longlong param_4,float param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9,
             undefined1 param_10)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  code *pcVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined8 unaff_R15;
  float extraout_XMM0_Da;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  longlong lStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  ulonglong *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 *puStack_1c8;
  longlong *plStack_1c0;
  undefined1 *puStack_1b8;
  longlong lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined1 *puStack_188;
  longlong *plStack_180;
  undefined1 *puStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  longlong lStack_150;
  longlong lStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  longlong *plStack_130;
  undefined1 *puStack_128;
  undefined1 *puStack_118;
  longlong *plStack_110;
  undefined1 *puStack_108;
  undefined1 uStack_f9;
  longlong lStack_f8;
  undefined1 *puStack_f0;
  undefined1 uStack_e1;
  longlong *plStack_e0;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  
  uStack_d0 = 0xfffffffffffffffe;
  pdb_141484310(&lStack_1b0,param_3,param_4,param_6,param_7,param_8);
  uVar10 = pdb_140930190(param_3,CONCAT71((int7)((ulonglong)unaff_R15 >> 8),param_10) & 0xffffffff);
  fVar22 = extraout_XMM0_Da;
  if ((uVar10 & 1) == 0) {
    fVar22 = *(float *)(param_3 + 0x278);
  }
  if (param_5 <= _DAT_142e37ad4 + fVar22) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
  }
  else {
    fVar2 = *(float *)(param_4 + 0x3c);
    uStack_198 = 0;
    fStack_18c = param_5;
    fStack_194 = fVar22;
    fStack_190 = fVar2;
    pdb_1414887e0(&lStack_1f0,&uStack_198,1,param_9);
    lStack_150 = lStack_1e0 * 0x10 + lStack_1e8;
    lStack_168 = lStack_1e8;
    lStack_160 = lStack_1e8;
    lStack_158 = lStack_1f0;
    lStack_148 = param_4;
    pdb_1413e6100(&puStack_1c8,&lStack_168);
    uStack_d1 = 1;
    pdb_141484710(uStack_1a8,uStack_1a0,&puStack_1c8,1);
    if (puStack_1b8 != (undefined1 *)0x0) {
      lVar16 = (longlong)plStack_1c0 + 0x21;
      puVar17 = puStack_1b8;
      do {
        lStack_160 = *(longlong *)(lVar16 + -0x11);
        lStack_158 = *(longlong *)(lVar16 + -9);
        *(undefined8 *)(lVar16 + -0x21) = 0;
        *(longlong *)(lVar16 + -0x19) = lStack_168;
        *(longlong *)(lVar16 + -0x11) = lStack_160;
        *(longlong *)(lVar16 + -9) = lStack_158;
        *(undefined2 *)(lVar16 + -1) = 1;
        lVar16 = lVar16 + 0x28;
        puVar17 = puVar17 + -1;
      } while (puVar17 != (undefined1 *)0x0);
    }
    puStack_138 = puStack_1c8;
    plStack_130 = plStack_1c0;
    puStack_128 = puStack_1b8;
    pdb_141488be0(&puStack_138);
    puVar17 = puStack_128;
    if (_DAT_142e37848 < fVar2) {
      puStack_140 = puStack_138;
      plStack_e0 = plStack_130;
      puStack_138 = (undefined1 *)0x0;
      plStack_130 = (longlong *)0x8;
      puStack_128 = (undefined1 *)0x0;
      puStack_f0 = puVar17;
      puStack_1d8 = param_1;
      puStack_1d0 = param_2;
      if (puVar17 == (undefined1 *)0x0) {
        plVar11 = (longlong *)0x8;
        lStack_f8 = 1;
        lVar16 = 0;
      }
      else {
        pdb_14007ee60();
        lStack_f8 = func_0x0001406abae0(puVar17,1);
        if (lStack_f8 == 0) {
          uStack_d2 = 1;
          pdb_142dc7e2a(1,puVar17);
LAB_14148a31d:
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        lVar16 = (longlong)puVar17 * 0x28;
        pdb_14007ee60();
        plVar11 = (longlong *)func_0x0001406abab0(lVar16,8);
        if (plVar11 == (longlong *)0x0) {
          lStack_170 = lStack_f8;
          uStack_d3 = 1;
          pdb_142dc7e2a(8,lVar16);
          goto LAB_14148a31d;
        }
      }
      fVar22 = _DAT_142e37870;
      uVar9 = _DAT_142e377e0;
      puStack_108 = (undefined1 *)0x0;
      fVar26 = _DAT_142e3784c + fVar2;
      puVar19 = (undefined1 *)0x0;
      puVar17 = puStack_f0;
      puVar21 = (undefined1 *)0x0;
      puStack_118 = puStack_f0;
      plStack_110 = plVar11;
LAB_141489d40:
      while (puVar20 = puVar21, puVar18 = puStack_108, uStack_e1 = puVar20 < puVar17,
            (bool)uStack_e1) {
        puVar21 = puVar20 + 1;
        if (puVar20[lStack_f8] == '\0') {
          uVar10 = plStack_e0[(longlong)puVar20 * 5];
          lVar7 = plStack_e0[(longlong)puVar20 * 5 + 1];
          fVar25 = *(float *)((longlong)plStack_e0 + (longlong)puVar20 * 0x28 + 0x14);
          fVar28 = *(float *)(plStack_e0 + (longlong)puVar20 * 5 + 3);
          fVar27 = *(float *)((longlong)plStack_e0 + (longlong)puVar20 * 0x28 + 0x1c);
          cVar5 = (char)plStack_e0[(longlong)puVar20 * 5 + 4];
          cVar6 = *(char *)((longlong)plStack_e0 + (longlong)puVar20 * 0x28 + 0x21);
          if ((*(float *)(plStack_e0 + (longlong)puVar20 * 5 + 2) <= fVar22) && (fVar26 <= fVar28))
          {
            puVar20[lStack_f8] = 1;
            puStack_188 = puStack_1d0;
            lVar12 = pdb_140315970(&puStack_188);
            lStack_168 = lVar12 * 0x16453 + (longlong)puVar20 * 0x13f955 + 0x49;
            fVar23 = (float)pdb_140e02880(&lStack_168);
            puVar18 = puStack_108;
            fVar23 = fVar23 * fVar2;
            fVar28 = fVar23;
            if (puStack_108 == puStack_118) {
              pdb_142d7ede0(&puStack_118);
            }
            goto LAB_14148a063;
          }
          if (*(float *)(plStack_e0 + (longlong)puVar20 * 5 + 2) <= fVar22) {
            lVar12 = 0;
            puVar14 = (undefined1 *)0x0;
            puVar17 = puStack_f0;
            if ((uVar10 & 1) == 0) {
              do {
                if (puStack_f0 == puVar14) goto LAB_14148a28c;
                if ((((puVar20 != puVar14) && (puVar14[lStack_f8] == '\0')) &&
                    (fVar26 <= *(float *)((longlong)plStack_e0 + lVar12 + 0x18))) &&
                   ((((float)((uint)(fVar25 - *(float *)((longlong)plStack_e0 + lVar12 + 0x14)) &
                             uVar9) <= fVar22 &&
                     ((float)((uint)(fVar27 - *(float *)((longlong)plStack_e0 + lVar12 + 0x1c)) &
                             uVar9) <= fVar22)) &&
                    ((*(char *)((longlong)plStack_e0 + lVar12 + 0x20) == cVar5 &&
                     ((*(char *)((longlong)plStack_e0 + lVar12) == '\0' &&
                      (*(char *)((longlong)plStack_e0 + lVar12 + 0x21) == cVar6))))))))
                goto LAB_141489f4d;
                puVar14 = puVar14 + 1;
                lVar12 = lVar12 + 0x28;
              } while (lVar16 != lVar12);
            }
            else {
              do {
                if (puStack_f0 == puVar14) goto LAB_14148a28c;
                if (((((puVar20 != puVar14) && (puVar14[lStack_f8] == '\0')) &&
                     (fVar26 <= *(float *)((longlong)plStack_e0 + lVar12 + 0x18))) &&
                    (((float)((uint)(fVar25 - *(float *)((longlong)plStack_e0 + lVar12 + 0x14)) &
                             uVar9) <= fVar22 &&
                     ((float)((uint)(fVar27 - *(float *)((longlong)plStack_e0 + lVar12 + 0x1c)) &
                             uVar9) <= fVar22)))) &&
                   (((*(char *)((longlong)plStack_e0 + lVar12 + 0x20) == cVar5 &&
                     ((*(int *)((longlong)plStack_e0 + lVar12) == 1 &&
                      (*(longlong *)((longlong)plStack_e0 + lVar12 + 8) == lVar7)))) &&
                    (*(char *)((longlong)plStack_e0 + lVar12 + 0x21) == cVar6))))
                goto LAB_141489f4d;
                puVar14 = puVar14 + 1;
                lVar12 = lVar12 + 0x28;
              } while (lVar16 != lVar12);
            }
          }
        }
      }
      plVar11 = plStack_e0 + (longlong)puVar17 * 5;
      plVar15 = plStack_e0;
      puVar17 = (undefined1 *)0x0;
      while ((plVar13 = plVar15, plVar13 != plVar11 && (lVar16 = *plVar13, lVar16 != 2))) {
        lStack_168 = plVar13[1];
        lStack_160 = plVar13[2];
        lStack_158 = plVar13[3];
        lStack_150 = plVar13[4];
        if (puStack_f0 <= puVar17) {
          pdb_142dc81f2(puVar17,puStack_f0,&UNK_14330d2f0);
          goto LAB_14148a31d;
        }
        puVar21 = puVar17 + 1;
        pcVar1 = puVar17 + lStack_f8;
        plVar15 = plVar13 + 5;
        puVar17 = puVar21;
        if (*pcVar1 == '\0') {
          if (puVar19 == puStack_118) {
            pdb_142d7ede0(&puStack_118);
          }
          plStack_110[(longlong)puVar19 * 5] = lVar16;
          plStack_110[(longlong)puVar19 * 5 + 1] = lStack_168;
          (plStack_110 + (longlong)puVar19 * 5 + 1)[1] = lStack_160;
          plStack_110[(longlong)puVar19 * 5 + 3] = lStack_158;
          (plStack_110 + (longlong)puVar19 * 5 + 3)[1] = lStack_150;
          puStack_108 = puVar19 + 1;
          plVar15 = plVar13 + 5;
          puVar19 = puStack_108;
        }
      }
      if (puStack_140 != (undefined1 *)0x0) {
        func_0x0001406abac0(plStack_e0,(longlong)puStack_140 * 0x28,8);
        puVar19 = puStack_108;
      }
      plVar11 = plStack_110;
      puStack_188 = &uStack_f9;
      if ((undefined1 *)0x1 < puVar19) {
        if (puVar19 < (undefined1 *)0x15) {
          plVar13 = plStack_110 + (longlong)puVar19 * 5;
          plVar15 = plStack_110 + 5;
          do {
            pdb_14145b0e0(plVar11,plVar15);
            plVar15 = plVar15 + 5;
          } while (plVar15 != plVar13);
        }
        else {
          pdb_141465400(plStack_110,puVar19,&puStack_188);
        }
      }
      puStack_178 = puStack_108;
      puStack_188 = puStack_118;
      plStack_180 = plStack_110;
      if (puStack_138 != (undefined1 *)0x0) {
        func_0x0001406abac0(plStack_130,(longlong)puStack_138 * 0x28,8);
      }
      param_1 = puStack_1d8;
      puStack_128 = puStack_178;
      puStack_138 = puStack_188;
      plStack_130 = plStack_180;
      if (puStack_f0 != (undefined1 *)0x0) {
        func_0x0001406abac0(lStack_f8,puStack_f0,1);
      }
    }
    param_1[2] = (ulonglong)puStack_128;
    *param_1 = (ulonglong)puStack_138;
    param_1[1] = (ulonglong)plStack_130;
  }
  if (lStack_1b0 != 0) {
    func_0x0001406abac0(uStack_1a8,lStack_1b0 << 4,4);
  }
  return param_1;
LAB_14148a28c:
  pdb_142dc81f2(puStack_f0,puStack_f0,&UNK_14330d320);
  goto LAB_14148a31d;
LAB_141489f4d:
  if (puStack_f0 <= puVar14) {
    pdb_142dc81f2(puVar14,puStack_f0,&UNK_14330d308);
    goto LAB_14148a31d;
  }
  fVar23 = *(float *)(plStack_e0 + (longlong)puVar14 * 5 + 2);
  fVar24 = *(float *)((longlong)plStack_e0 + (longlong)puVar14 * 0x28 + 0x14);
  fVar3 = *(float *)((longlong)plStack_e0 + (longlong)puVar14 * 0x28 + 0x1c);
  puVar20[lStack_f8] = 1;
  puVar14[lStack_f8] = 1;
  fVar4 = fVar24;
  if (fVar25 <= fVar24) {
    fVar4 = fVar25;
  }
  fVar25 = (float)(~-(uint)NAN(fVar25) & (uint)fVar4 | -(uint)NAN(fVar25) & (uint)fVar24);
  fVar24 = fVar3;
  if (fVar3 <= fVar27) {
    fVar24 = fVar27;
  }
  fVar27 = (float)(~-(uint)NAN(fVar27) & (uint)fVar24 | -(uint)NAN(fVar27) & (uint)fVar3);
  if (puStack_108 == puStack_118) {
    pdb_142d7ede0(&puStack_118);
  }
LAB_14148a063:
  plStack_110[(longlong)puVar18 * 5] = uVar10;
  plStack_110[(longlong)puVar18 * 5 + 1] = lVar7;
  *(float *)(plStack_110 + (longlong)puVar18 * 5 + 2) = fVar23;
  *(float *)((longlong)plStack_110 + (longlong)puVar18 * 0x28 + 0x14) = fVar25;
  *(float *)(plStack_110 + (longlong)puVar18 * 5 + 3) = fVar28 + fVar2;
  *(float *)((longlong)plStack_110 + (longlong)puVar18 * 0x28 + 0x1c) = fVar27;
  *(char *)(plStack_110 + (longlong)puVar18 * 5 + 4) = cVar5;
  *(char *)((longlong)plStack_110 + (longlong)puVar18 * 0x28 + 0x21) = cVar6;
  puVar19 = puVar18 + 1;
  puVar17 = puStack_f0;
  puStack_108 = puVar19;
  goto LAB_141489d40;
}

