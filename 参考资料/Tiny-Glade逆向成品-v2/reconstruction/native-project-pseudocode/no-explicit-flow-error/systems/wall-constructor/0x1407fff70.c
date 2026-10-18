// VA 0x1407fff70, PDB extent 3439 bytes
// system_wall_constructor::segmentation::calculate_wall_path_segmentation::process_segment
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/segmentation/calculate_wall_path_segmentation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::segmentation::calculate_wall_path_segmentation::process_segment
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/segmentation/calculate_wall_path_segmentation.rs
   Extent: 3439 */

ulonglong *
pdb_1407fff70(ulonglong *param_1,ulonglong *param_2,longlong **param_3,longlong ***param_4,
             undefined4 param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  float fVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  longlong **pplVar10;
  int iVar11;
  uint uVar12;
  longlong ***ppplVar13;
  ulonglong *puVar14;
  longlong *plVar15;
  byte *pbVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong **pplVar19;
  longlong ***ppplVar20;
  undefined8 uVar21;
  longlong ***ppplVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong ***ppplVar25;
  undefined1 uVar26;
  bool bVar27;
  float fVar28;
  uint extraout_XMM0_Da;
  float fVar29;
  undefined4 uVar30;
  float fVar32;
  longlong lVar31;
  longlong lVar33;
  float fVar34;
  longlong *plStack_1e0;
  longlong **pplStack_1d8;
  longlong **pplStack_1d0;
  ulonglong *puStack_1c8;
  ulonglong uStack_1c0;
  ulonglong *puStack_1b8;
  ulonglong *puStack_1b0;
  ulonglong uStack_1a8;
  ulonglong uStack_1a0;
  longlong **pplStack_198;
  longlong **pplStack_190;
  longlong ***ppplStack_188;
  longlong ***ppplStack_180;
  longlong ***ppplStack_178;
  undefined8 uStack_170;
  longlong **pplStack_168;
  undefined8 uStack_160;
  ulonglong uStack_158;
  longlong **pplStack_150;
  undefined4 uStack_148;
  ulonglong uStack_128;
  byte *pbStack_120;
  ulonglong uStack_118;
  longlong **pplStack_110;
  longlong **pplStack_108;
  longlong **pplStack_100;
  longlong *plStack_f8;
  code *pcStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  longlong **pplStack_d0;
  byte *pbStack_c8;
  longlong **pplStack_c0;
  float fStack_b4;
  longlong *plStack_b0;
  ulonglong *puStack_a8;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  ppplVar22 = param_4 + 2;
  ppplVar13 = (longlong ***)pdb_1413f84b0(ppplVar22);
  uVar26 = ppplVar13 == (longlong ***)0x0;
  if (-1 < (longlong)ppplVar13) goto LAB_1407fffe9;
  uVar21 = 0;
  do {
    uVar26 = 1;
    pdb_142dc7e2a(uVar21,ppplVar13);
LAB_1407fffe9:
    if ((bool)uVar26) {
      pbStack_c8 = (byte *)0x1;
      break;
    }
    pdb_14007ee60();
    uVar21 = 1;
    pbStack_c8 = pub_1406abae0((ulonglong)ppplVar13,1);
  } while (pbStack_c8 == (byte *)0x0);
  pplStack_d0 = (longlong **)ppplVar13;
  pplStack_c0 = (longlong **)ppplVar13;
  plStack_f8 = (longlong *)pdb_1413f84b0(param_3 + 2);
  uStack_128 = 0;
  if ((longlong **)plStack_f8 == (longlong **)0x1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143306a00);
  }
  if ((longlong **)plStack_f8 == (longlong **)0x0) {
    ppplStack_188 = (longlong ***)&uStack_128;
    ppplStack_180 = (longlong ***)pdb_140f72a40;
    ppplStack_178 = (longlong ***)&plStack_f8;
    uStack_170 = pdb_140f72a40;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_1433069b0,&ppplStack_188,&UNK_1433069d0);
  }
  ppplVar13 = (longlong ***)pdb_1413f84b0(ppplVar22);
  uVar2 = (longlong)ppplVar13 * 8;
  if (0x7ffffffffffffffc < uVar2 || (ulonglong)ppplVar13 >> 0x3d != 0) {
    uVar21 = 0;
LAB_140800083:
    pdb_142dc7e2a(uVar21,uVar2);
    goto LAB_140800b17;
  }
  puStack_1c8 = (ulonglong *)param_4;
  puStack_1b8 = param_1;
  pplStack_198 = (longlong **)ppplVar13;
  plStack_b0 = (longlong *)param_3;
  if (uVar2 == 0) {
    pplStack_190 = (longlong **)0x0;
    puStack_a8 = (ulonglong *)0x4;
    if ((longlong ***)0x1 < ppplVar13) goto LAB_1408000f7;
LAB_140800133:
    puVar14 = puStack_a8;
    puStack_1b0 = param_2;
    if ((longlong ***)pplStack_198 != (longlong ***)0x0) goto LAB_14080013b;
  }
  else {
    pdb_14007ee60();
    uVar21 = 4;
    puVar14 = (ulonglong *)pub_1406abab0(uVar2,4);
    if (puVar14 == (ulonglong *)0x0) goto LAB_140800083;
    pplStack_190 = pplStack_198;
    puStack_a8 = puVar14;
    if (pplStack_198 < (longlong ***)0x2) goto LAB_140800133;
LAB_1408000f7:
    puVar14 = puStack_a8;
    puStack_1b0 = param_2;
    pub_142e32780(puStack_a8,0);
    puVar14 = puVar14 + ((longlong)ppplVar13 - 1);
LAB_14080013b:
    *puVar14 = 0;
  }
  pplStack_1d0 = (longlong **)pdb_1413f84b0(param_3 + 2);
  pplStack_100 = pplStack_1d0;
  pplStack_1d8 = (longlong **)pdb_1413f84b0(ppplVar22);
  fVar34 = _DAT_142e37870;
  fVar29 = _DAT_142e36f50;
  fVar3 = _DAT_142e36f28;
  if (pplStack_1d8 != pplStack_100) {
    pdb_142dc7fb4(0,&pplStack_1d8,&pplStack_1d0,0);
    goto LAB_140800b17;
  }
  if (pplStack_100 < (longlong ***)0x2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143006ec0,0x22,&UNK_143006ee8);
  }
  uStack_1c0 = (longlong)pplStack_100 - 1;
  uStack_1a0 = (longlong)pplStack_100 - 2;
  ppplStack_178 = (longlong ***)0x0;
  uStack_170 = (code *)0x1;
  pplStack_168 = (longlong **)CONCAT71(pplStack_168._1_7_,2);
  uStack_160 = (code *)uStack_1c0;
  uStack_158 = uStack_1a0;
  pplStack_150 = (longlong **)CONCAT71(pplStack_150._1_7_,4);
  lVar24 = 0;
  do {
    pplVar10 = pplStack_198;
    ppplVar22 = (&ppplStack_178)[lVar24 * 3];
    ppplVar13 = (longlong ***)(&uStack_170)[lVar24 * 3];
    plStack_f8 = (longlong *)*plStack_b0;
    pcStack_f0 = (code *)plStack_b0[1];
    uStack_e8 = plStack_b0[2];
    uStack_e0 = plStack_b0[3];
    if ((uint)uStack_e0 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8510(&UNK_143006f48);
    }
    iVar11 = (int)ppplVar13 + (int)uStack_e8;
    if (iVar11 == -0x80000000 && (uint)uStack_e0 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8550(&UNK_143006f48);
    }
    iVar11 = iVar11 % (int)(uint)uStack_e0;
    uVar12 = -(uint)uStack_e0;
    if ((int)-(uint)uStack_e0 < 0) {
      uVar12 = (uint)uStack_e0;
    }
    plVar17 = (longlong *)(longlong)(int)((iVar11 >> 0x1f & uVar12) + iVar11);
    if (pcStack_f0 <= plVar17) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(plVar17,pcStack_f0,&UNK_143006f48);
    }
    if ((int)uStack_e8 + (int)ppplVar22 == -0x80000000 && (uint)uStack_e0 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8550(&UNK_143006f60);
    }
    iVar11 = ((int)uStack_e8 + (int)ppplVar22) % (int)(uint)uStack_e0;
    plVar15 = (longlong *)(longlong)(int)((iVar11 >> 0x1f & uVar12) + iVar11);
    if (pcStack_f0 <= plVar15) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(plVar15,pcStack_f0,&UNK_143006f60);
    }
    fVar28 = *(float *)((longlong)plStack_f8 + (longlong)plVar17 * 0xc) -
             *(float *)((longlong)plStack_f8 + (longlong)plVar15 * 0xc);
    fVar32 = *(float *)((longlong)plStack_f8 + (longlong)plVar17 * 0xc + 8) -
             *(float *)((longlong)plStack_f8 + (longlong)plVar15 * 0xc + 8);
    fVar28 = SQRT(fVar32 * fVar32 + fVar28 * fVar28);
    if (fVar28 <= fVar34) {
      fVar28 = fVar34;
    }
    fVar32 = 0.0 / fVar28;
    if (fVar3 <= 0.0 / fVar28) {
      fVar32 = fVar3;
    }
    ppplVar20 = ppplVar13;
    if (fVar32 < fVar29) {
      ppplVar20 = ppplVar22;
    }
    if (pplStack_c0 <= ppplVar20) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(ppplVar20,pplStack_c0,&UNK_143006f78);
    }
    pbStack_c8[(longlong)ppplVar20] =
         pbStack_c8[(longlong)ppplVar20] | *(byte *)(&pplStack_168 + lVar24 * 3);
    pdb_1413f84b0(&uStack_e8);
    if (ppplVar13 < ppplVar22) {
      ppplVar22 = ppplVar13;
    }
    uVar12 = pdb_1413fb5c0(ppplVar22);
    uVar2 = uStack_1c0;
    if (pplVar10 <= ppplVar20) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(ppplVar20,pplVar10,&UNK_143006f90);
    }
    lVar24 = lVar24 + 1;
    *(uint *)(puStack_a8 + (longlong)ppplVar20) = uVar12;
    *(uint *)((longlong)puStack_a8 + ((longlong)ppplVar20 * 2 + 1) * 4) = extraout_XMM0_Da;
  } while (lVar24 != 2);
  pplVar19 = (longlong **)((uStack_1c0 - 1) + (ulonglong)(uStack_1c0 == 0));
  uVar18 = (longlong)pplVar19 * 8;
  if (0x7ffffffffffffff8 < uVar18 || (ulonglong)pplVar19 >> 0x3d != 0) {
    uVar21 = 0;
LAB_1408003b8:
    pdb_142dc7e2a(uVar21,uVar18);
LAB_140800b17:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (uVar18 == 0) {
    pbVar16 = (byte *)0x8;
    pplVar19 = (longlong **)0x0;
    lVar24 = _DAT_142e4ff90;
    lVar7 = _UNK_142e4ff98;
    auVar8 = _DAT_142e4ffa0;
    lVar31 = _DAT_143006db0;
    lVar33 = _UNK_143006db8;
  }
  else {
    pdb_14007ee60();
    uVar21 = 8;
    pbVar16 = pub_1406abab0(uVar18,8);
    lVar24 = _DAT_142e4ff90;
    lVar7 = _UNK_142e4ff98;
    auVar8 = _DAT_142e4ffa0;
    lVar31 = _DAT_143006db0;
    lVar33 = _UNK_143006db8;
    if (pbVar16 == (byte *)0x0) goto LAB_1408003b8;
  }
  _DAT_142e4ff90 = lVar24;
  _UNK_142e4ff98 = lVar7;
  _DAT_142e4ffa0 = auVar8;
  _DAT_143006db0 = lVar31;
  _UNK_143006db8 = lVar33;
  if (uVar2 < 2) {
    uStack_118 = 0;
  }
  else {
    if (uStack_1a0 < 4) {
      uVar18 = 1;
      uStack_118 = 0;
    }
    else {
      uStack_118 = uStack_1a0 & 0xfffffffffffffffc;
      uVar18 = uStack_118 + 1;
      uVar23 = 0;
      do {
        *(longlong *)(pbVar16 + uVar23 * 8) = lVar31;
        *(longlong *)(pbVar16 + uVar23 * 8 + 8) = lVar33;
        *(longlong *)(pbVar16 + uVar23 * 8 + 0x10) = lVar31 + lVar24;
        *(longlong *)(pbVar16 + uVar23 * 8 + 0x10 + 8) = lVar33 + lVar7;
        uVar23 = uVar23 + 4;
        lVar31 = lVar31 + auVar8._0_8_;
        lVar33 = lVar33 + auVar8._8_8_;
      } while (uStack_118 != uVar23);
      if (uStack_1a0 == uStack_118) goto LAB_14080047f;
    }
    do {
      *(ulonglong *)(pbVar16 + uStack_118 * 8) = uVar18;
      uVar18 = uVar18 + 1;
      uStack_118 = uStack_118 + 1;
    } while (uVar2 != uVar18);
  }
LAB_14080047f:
  pbStack_120 = pbVar16;
  uStack_128 = (ulonglong)pplVar19;
  while (uStack_118 != 0) {
    uStack_1a8 = 0;
    fStack_b4 = 0.0;
    plStack_1e0 = (longlong *)0x0;
    ppplStack_180 = &pplStack_d0;
    ppplStack_188 = (longlong ***)puStack_1c8;
    ppplStack_178 = (longlong ***)&fStack_b4;
    uStack_170 = (code *)&uStack_1a8;
    pplStack_168 = &plStack_1e0;
    pdb_1413e5bf0(&uStack_128,&ppplStack_188);
    if (fStack_b4 <= 0.0) break;
    if (uStack_118 <= uStack_1a8) {
      pdb_142dc7eb2();
      goto LAB_140800b17;
    }
    ppplVar22 = *(longlong ****)(pbStack_120 + uStack_1a8 * 8);
    lVar24 = uStack_118 * 8;
    uStack_118 = uStack_118 - 1;
    *(undefined8 *)(pbStack_120 + uStack_1a8 * 8) = *(undefined8 *)(pbStack_120 + lVar24 + -8);
    plStack_f8 = (longlong *)*plStack_b0;
    pcStack_f0 = (code *)plStack_b0[1];
    uStack_e8 = plStack_b0[2];
    uStack_e0 = plStack_b0[3];
    if (pplStack_c0 <= ppplVar22) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(ppplVar22,pplStack_c0,&UNK_143007140);
    }
    pbStack_c8[(longlong)ppplVar22] = pbStack_c8[(longlong)ppplVar22] | 1;
    pplStack_110 = (longlong **)pdb_1413f84b0(&uStack_e8);
    pplStack_108 = (longlong **)ppplVar22;
    if (pplStack_110 <= ppplVar22) {
      ppplStack_188 = &pplStack_108;
      ppplStack_180 = (longlong ***)pdb_140f72a40;
      ppplStack_178 = &pplStack_110;
      uStack_170 = pdb_140f72a40;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_1433069b0,&ppplStack_188,&UNK_1433069d0);
    }
    ppplVar13 = ppplVar22;
    fVar29 = 0.0;
    if ((pplStack_110 <= (longlong ***)((longlong)ppplVar22 + 1U)) &&
       (ppplVar13 = (longlong ***)((longlong)ppplVar22 - 1), fVar29 = fVar3,
       ppplVar22 == (longlong ***)0x0)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143306a00);
    }
    if (pplVar10 <= ppplVar22) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(ppplVar22,pplVar10,&UNK_143007158);
    }
    *(uint *)(puStack_a8 + (longlong)ppplVar22) = (uint)ppplVar13;
    *(float *)((longlong)puStack_a8 + ((longlong)ppplVar22 * 2 + 1) * 4) = fVar29;
  }
  ppplVar13 = (longlong ***)0x0;
  ppplVar22 = (longlong ***)0x0;
  bVar6 = true;
  while (ppplVar25 = ppplVar22, ppplVar20 = ppplVar13, ppplVar25 < pplStack_100) {
    if (pplStack_c0 <= ppplVar25) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(ppplVar25,pplStack_c0,&UNK_143006f30);
    }
    ppplVar22 = (longlong ***)((longlong)ppplVar25 + 1);
    bVar27 = (pbStack_c8[(longlong)ppplVar25] & 0xf) == 0;
    ppplVar13 = ppplVar25;
    if (bVar27) {
      ppplVar13 = ppplVar20;
    }
    bVar9 = !bVar6;
    bVar6 = !bVar27;
    if (bVar9 && !bVar27) {
      ppplStack_188 = (longlong ***)*plStack_b0;
      ppplStack_180 = (longlong ***)plStack_b0[1];
      ppplStack_178 = (longlong ***)plStack_b0[2];
      uStack_170 = (code *)plStack_b0[3];
      pdb_140801020(ppplVar20,ppplVar22,&ppplStack_188,pbStack_c8,pplStack_c0,puStack_a8,pplVar10,
                    param_5);
      ppplVar13 = ppplVar25;
    }
  }
  if (!bVar6) {
    ppplStack_188 = (longlong ***)*plStack_b0;
    ppplStack_180 = (longlong ***)plStack_b0[1];
    ppplStack_178 = (longlong ***)plStack_b0[2];
    uStack_170 = (code *)plStack_b0[3];
    pdb_140801020(ppplVar20,pplStack_100,&ppplStack_188,pbStack_c8,pplStack_c0,puStack_a8,pplVar10,
                  param_5);
  }
  if ((longlong ***)pplVar10 == (longlong ***)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_143006f00);
  }
  puVar14 = puStack_a8 + (longlong)pplVar10;
  if (puVar14 == (ulonglong *)0x8) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143006f18);
  }
  fVar3 = *(float *)((longlong)puStack_a8 + 4);
  uVar12 = (uint)*puStack_a8;
  pplStack_108 = (longlong **)*puStack_a8;
  puVar1 = puVar14 + -1;
  uVar4 = (uint)*puVar1;
  fVar29 = *(float *)((longlong)puVar14 + -4);
  pplStack_110 = (longlong **)*puVar1;
  fVar34 = (fVar29 - fVar3) + (float)(longlong)((ulonglong)uVar4 - (ulonglong)uVar12);
  if (0.0 <= fVar34) {
    plStack_f8 = plStack_b0;
    pcStack_f0 = pdb_14141d7c0;
    ppplStack_180 =
         (longlong ***)((ulonglong)(-(uint)(_DAT_142e36f28 == fVar3) & 1) + (ulonglong)uVar12 + 1);
    ppplStack_178 = (longlong ***)(((ulonglong)uVar4 - (ulonglong)(-(uint)(fVar29 == 0.0) & 1)) + 1)
    ;
    if (ppplStack_178 < ppplStack_180) {
      ppplStack_178 = ppplStack_180;
    }
    ppplStack_188 = (longlong ***)0x1;
    uStack_170 = (code *)CONCAT44(uVar12,1);
    pplStack_168 = (longlong **)CONCAT44(pplStack_168._4_4_,fVar3);
    uStack_160 = (code *)CONCAT44(uVar4,1);
    uStack_158 = CONCAT44(uStack_158._4_4_,fVar29);
    pplStack_150 = &plStack_f8;
    uStack_148 = 0;
    uStack_e8 = *puStack_a8;
    uStack_e0 = *puVar1;
    uVar30 = pdb_141420250(&ppplStack_188,_DAT_142e377f0);
    puVar14 = puStack_1b8;
    puStack_1b8[2] = (ulonglong)pplStack_c0;
    *puStack_1b8 = (ulonglong)pplStack_d0;
    puStack_1b8[1] = (ulonglong)pbStack_c8;
    puStack_1b8[8] = 0;
    puStack_1b8[9] = 0;
    puStack_1b8[0xb] = 0;
    puStack_1b8[0xc] = 0;
    puStack_1b8[0xf] = *puStack_1b0;
    *(int *)(puStack_1b8 + 0x10) = (int)puStack_1b0[1];
    puStack_1b8[3] = (ulonglong)pplStack_190;
    puStack_1b8[4] = (ulonglong)puStack_a8;
    puStack_1b8[5] = (ulonglong)pplVar10;
    puStack_1b8[6] = 0;
    puStack_1b8[7] = 4;
    puStack_1b8[10] = 4;
    puStack_1b8[0xd] = 8;
    puStack_1b8[0xe] = 0;
    *(undefined4 *)((longlong)puStack_1b8 + 0x84) = uVar30;
    if ((longlong **)uStack_128 != (longlong **)0x0) {
      pub_1406abac0(pbStack_120,uStack_128 << 3,8);
    }
    return puVar14;
  }
  plStack_f8 = (longlong *)CONCAT44(plStack_f8._4_4_,fVar34);
  ppplStack_188 = &pplStack_108;
  ppplStack_180 = (longlong ***)pdb_14141e820;
  ppplStack_178 = &pplStack_110;
  uStack_170 = pdb_14141e820;
  pplStack_168 = &plStack_f8;
  uStack_160 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_1433084e0,&ppplStack_188,&UNK_143308500);
}

