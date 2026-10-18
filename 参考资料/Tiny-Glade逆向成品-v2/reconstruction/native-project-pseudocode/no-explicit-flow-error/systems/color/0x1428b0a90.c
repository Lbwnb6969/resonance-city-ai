// VA 0x1428b0a90, PDB extent 4885 bytes
// system_color::style_picker_feedback::picker_cursor
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_picker_feedback.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::style_picker_feedback::picker_cursor
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_picker_feedback.rs
   Extent: 4885 */

undefined8 *
pdb_1428b0a90(undefined8 *param_1,float param_2,float param_3,float param_4,float param_5,
             undefined1 param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  char cVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  undefined *puVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  ulonglong uStack_188;
  undefined2 uStack_178;
  undefined1 uStack_176;
  undefined5 uStack_175;
  byte *pbStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined8 uStack_110;
  byte *pbStack_108;
  longlong lStack_100;
  ulonglong *puStack_f8;
  longlong lStack_f0;
  ulonglong uStack_e8;
  undefined8 uStack_e0;
  ulonglong *puStack_d8;
  ulonglong uStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  ulonglong *puStack_b0;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_a2 = param_6;
  if (param_7 != (int *)0x0) {
    if (*param_7 == 1) {
      uVar17 = *(ulonglong *)(param_7 + 4);
      if (2 < uVar17) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_1435ae2fe,0x28,&UNK_1435ae358);
      }
      pbVar8 = *(byte **)(&UNK_1435ae458 + uVar17 * 8);
      iVar1 = *(int *)(&UNK_1435ae470 + uVar17 * 4);
      pdb_14007ee60();
      puStack_b0 = (ulonglong *)pub_1406abab0(0x50,8);
      if (puStack_b0 != (ulonglong *)0x0) {
        iVar2 = param_7[1];
        pdb_14007ee60();
        pbVar7 = pub_1406abab0((ulonglong)pbVar8,1);
        if (pbVar7 == (byte *)0x0) {
          pdb_142dc7e2a(1,pbVar8);
        }
        else {
          pbStack_c0 = pbVar7;
          pbStack_b8 = pbVar8;
          pub_142e32760(pbVar7,&UNK_1435ae470 + iVar1,pbVar8);
          pdb_142b3c430(&lStack_100);
          puVar5 = puStack_f8;
          lVar12 = lStack_100;
          puVar9 = puStack_f8 + lStack_f0 * 5;
          uStack_160 = puStack_f8;
          uStack_150 = (undefined8 *)lStack_100;
          uStack_158 = (code *)puStack_f8;
          puVar14 = puStack_f8;
          puVar13 = puStack_f8;
          uStack_148 = (code *)puVar9;
          if (lStack_f0 != 0) {
            do {
              puVar15 = puVar13 + 5;
              pbVar8 = (byte *)*puVar13;
              pbVar7 = (byte *)puVar13[1];
              if (((char)puVar13[3] == '\x03') && (*(int *)((longlong)puVar13 + 0x1c) == iVar2)) {
                if (!SBORROW8(0,(longlong)pbVar8)) {
                  uStack_e8 = puVar13[2];
                  uStack_e0 = CONCAT62(CONCAT51(uStack_e0._3_5_,
                                                *(undefined1 *)((longlong)puVar13 + 0x1b)),
                                       *(undefined2 *)((longlong)puVar13 + 0x19));
                  uVar21 = (undefined4)puVar13[4];
                  uVar23 = (undefined4)(puVar13[4] >> 0x20);
                  uStack_158 = (code *)puVar15;
                  pbStack_c8 = pbVar8;
                  goto LAB_1428b1046;
                }
              }
              else if (pbVar8 != (byte *)0x0) {
                pub_1406abac0(pbVar7,(ulonglong)pbVar8,1);
              }
              puVar14 = puVar9;
              puVar13 = puVar15;
            } while (puVar15 != puVar9);
          }
          uStack_158 = (code *)puVar14;
          pdb_14007ee60();
          pbVar7 = pub_1406abab0(0x1b,1);
          uVar18 = _UNK_1435ae44b;
          if (pbVar7 != (byte *)0x0) {
            uStack_e8 = 0x1b;
            *(ulonglong *)(pbVar7 + 0xb) = CONCAT35(_UNK_1435ae448,_DAT_1435ae443);
            *(undefined8 *)(pbVar7 + 0x13) = uVar18;
            uVar18 = CONCAT53(_DAT_1435ae443,_UNK_1435ae440);
            *(undefined8 *)pbVar7 = _DAT_1435ae438;
            *(undefined8 *)(pbVar7 + 8) = uVar18;
            uVar21 = 0;
            uVar23 = 0;
            pbStack_c8 = (byte *)0x1b;
            puVar15 = puVar14;
LAB_1428b1046:
            if (puVar9 != puVar15) {
              uVar17 = (ulonglong)((longlong)puVar9 - (longlong)puVar15) / 0x28;
              puVar15 = puVar15 + 1;
              do {
                if (puVar15[-1] != 0) {
                  pub_1406abac0((byte *)*puVar15,puVar15[-1],1);
                }
                puVar15 = puVar15 + 5;
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
            }
            if (lVar12 != 0) {
              pub_1406abac0((byte *)puVar5,lVar12 * 0x28,8);
            }
            *puStack_b0 = (ulonglong)pbStack_b8;
            puStack_b0[1] = (ulonglong)pbStack_c0;
            puStack_b0[2] = (ulonglong)pbStack_b8;
            *(undefined1 *)(puStack_b0 + 3) = 3;
            *(int *)((longlong)puStack_b0 + 0x1c) = iVar2;
            *(undefined4 *)((longlong)puStack_b0 + 0x24) = 0;
            puStack_b0[5] = (ulonglong)pbStack_c8;
            puStack_b0[6] = (ulonglong)pbVar7;
            puStack_b0[7] = uStack_e8;
            *(undefined1 *)(puStack_b0 + 8) = 3;
            *(undefined2 *)((longlong)puStack_b0 + 0x41) = (undefined2)uStack_e0;
            *(undefined1 *)((longlong)puStack_b0 + 0x43) = uStack_e0._2_1_;
            *(int *)((longlong)puStack_b0 + 0x44) = iVar2;
            puStack_b0[9] = CONCAT44(uVar23,uVar21);
            lVar12 = 2;
            uVar17 = 2;
            puVar9 = puStack_b0;
            goto LAB_1428b12cb;
          }
          pdb_142dc7e2a(1,0x1b);
        }
        goto LAB_1428b16b7;
      }
LAB_1428b1627:
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x50);
    }
    cVar6 = pdb_1408ff980(param_7 + 0x11);
    pdb_14007ee60();
    puStack_b0 = (ulonglong *)pub_1406abab0(0x50,8);
    if (puStack_b0 == (ulonglong *)0x0) goto LAB_1428b1627;
    iVar1 = param_7[0x11];
    pdb_14007ee60();
    pbStack_b8 = (byte *)CONCAT71(pbStack_b8._1_7_,(char)iVar1);
    if (cVar6 == '\0') {
      pbVar8 = pub_1406abab0(0x19,1);
      uVar18 = _UNK_1435ae2a1;
      if (pbVar8 == (byte *)0x0) {
        pdb_142dc7e2a(1,0x19);
        goto LAB_1428b16b7;
      }
      pbStack_c0 = (byte *)0x19;
      *(ulonglong *)(pbVar8 + 9) = CONCAT17(UNK_1435ae2a0,CONCAT43(_UNK_1435ae29c,_DAT_1435ae299));
      *(undefined8 *)(pbVar8 + 0x11) = uVar18;
      uVar4 = _UNK_1435ae29c;
      uVar23 = _UNK_1435ae298;
      uVar21 = _UNK_1435ae294;
      *(undefined4 *)pbVar8 = _DAT_1435ae290;
      *(undefined4 *)(pbVar8 + 4) = uVar21;
      *(undefined4 *)(pbVar8 + 8) = uVar23;
      *(undefined4 *)(pbVar8 + 0xc) = uVar4;
      uStack_110 = 0x19;
      pbStack_108 = pbVar8;
      pbStack_c8 = pbVar8;
      pdb_142b3b880(&lStack_100);
    }
    else {
      pbVar8 = pub_1406abab0(0x18,1);
      uVar4 = _UNK_1435ae2b5;
      uVar23 = _UNK_1435ae2b1;
      uVar21 = _UNK_1435ae2ad;
      if (pbVar8 == (byte *)0x0) {
        pdb_142dc7e2a(1,0x18);
        goto LAB_1428b16b7;
      }
      pbStack_c0 = (byte *)0x18;
      *(undefined4 *)pbVar8 = _DAT_1435ae2a9;
      *(undefined4 *)(pbVar8 + 4) = uVar21;
      *(undefined4 *)(pbVar8 + 8) = uVar23;
      *(undefined4 *)(pbVar8 + 0xc) = uVar4;
      pbVar8[0x10] = 0x69;
      pbVar8[0x11] = 0x61;
      pbVar8[0x12] = 0x6c;
      pbVar8[0x13] = 0x5f;
      pbVar8[0x14] = 0x77;
      pbVar8[0x15] = 0x6f;
      pbVar8[0x16] = 0x6f;
      pbVar8[0x17] = 100;
      uStack_110 = 0x18;
      pbStack_108 = pbVar8;
      pbStack_c8 = pbVar8;
      pdb_142b3c430(&lStack_100);
    }
    puVar5 = puStack_f8;
    lVar12 = lStack_100;
    iVar1 = param_7[0x10];
    puVar9 = puStack_f8 + lStack_f0 * 5;
    uStack_160 = puStack_f8;
    uStack_150 = (undefined8 *)lStack_100;
    uStack_158 = (code *)puStack_f8;
    puVar14 = puStack_f8;
    puVar13 = puStack_f8;
    uStack_148 = (code *)puVar9;
    if (lStack_f0 != 0) {
      do {
        puVar15 = puVar13 + 5;
        uVar17 = *puVar13;
        pbVar8 = (byte *)puVar13[1];
        if (((char)puVar13[3] == '\x03') && (*(int *)((longlong)puVar13 + 0x1c) == iVar1)) {
          if (!SBORROW8(0,uVar17)) {
            uStack_188 = puVar13[2];
            uStack_176 = *(undefined1 *)((longlong)puVar13 + 0x1b);
            uStack_178 = *(undefined2 *)((longlong)puVar13 + 0x19);
            uVar21 = (undefined4)puVar13[4];
            uVar23 = (undefined4)(puVar13[4] >> 0x20);
            uStack_158 = (code *)puVar15;
            uStack_e8 = uVar17;
            goto LAB_1428b0e7f;
          }
        }
        else if (uVar17 != 0) {
          pub_1406abac0(pbVar8,uVar17,1);
        }
        puVar14 = puVar9;
        puVar13 = puVar15;
      } while (puVar15 != puVar9);
    }
    uStack_158 = (code *)puVar14;
    pdb_14007ee60();
    pbVar8 = pub_1406abab0(0x1b,1);
    uVar18 = _UNK_1435ae44b;
    if (pbVar8 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x1b);
LAB_1428b16b7:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uStack_188 = 0x1b;
    *(ulonglong *)(pbVar8 + 0xb) = CONCAT35(_UNK_1435ae448,_DAT_1435ae443);
    *(undefined8 *)(pbVar8 + 0x13) = uVar18;
    uVar18 = CONCAT53(_DAT_1435ae443,_UNK_1435ae440);
    *(undefined8 *)pbVar8 = _DAT_1435ae438;
    *(undefined8 *)(pbVar8 + 8) = uVar18;
    uVar21 = 0;
    uVar23 = 0;
    uStack_e8 = 0x1b;
    puVar15 = puVar14;
LAB_1428b0e7f:
    pbVar7 = pbStack_c0;
    if (puVar9 != puVar15) {
      uVar17 = (ulonglong)((longlong)puVar9 - (longlong)puVar15) / 0x28;
      puVar15 = puVar15 + 1;
      do {
        if (puVar15[-1] != 0) {
          pub_1406abac0((byte *)*puVar15,puVar15[-1],1);
        }
        puVar15 = puVar15 + 5;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    if (lVar12 != 0) {
      pub_1406abac0((byte *)puVar5,lVar12 * 0x28,8);
    }
    *puStack_b0 = (ulonglong)pbVar7;
    puStack_b0[1] = (ulonglong)pbStack_c8;
    puStack_b0[2] = (ulonglong)pbVar7;
    *(undefined1 *)(puStack_b0 + 3) = 5;
    *(undefined1 *)((longlong)puStack_b0 + 0x19) = pbStack_b8._0_1_;
    *(undefined4 *)((longlong)puStack_b0 + 0x24) = 0;
    puStack_b0[5] = uStack_e8;
    puStack_b0[6] = (ulonglong)pbVar8;
    puStack_b0[7] = uStack_188;
    *(undefined1 *)(puStack_b0 + 8) = 3;
    *(undefined2 *)((longlong)puStack_b0 + 0x41) = uStack_178;
    *(undefined1 *)((longlong)puStack_b0 + 0x43) = uStack_176;
    *(int *)((longlong)puStack_b0 + 0x44) = iVar1;
    puStack_b0[9] = CONCAT44(uVar23,uVar21);
    uStack_e0 = 2;
    puStack_d8 = puStack_b0;
    uStack_d0 = 2;
    if ((char)param_7[0xd] != '\0') {
      lVar12 = 2;
      uVar17 = 2;
      puVar9 = puStack_b0;
      goto LAB_1428b12cb;
    }
    iVar1 = param_7[0xe];
    pdb_142b3ac70(&lStack_100);
    puVar5 = puStack_f8;
    lVar12 = lStack_100;
    puVar9 = puStack_f8 + lStack_f0 * 5;
    uStack_160 = puStack_f8;
    uStack_150 = (undefined8 *)lStack_100;
    uStack_158 = (code *)puStack_f8;
    puVar14 = puStack_f8;
    puVar13 = puStack_f8;
    uStack_148 = (code *)puVar9;
    if (lStack_f0 != 0) {
      do {
        puVar15 = puVar13 + 5;
        puVar14 = (ulonglong *)*puVar13;
        if (((char)puVar13[3] == '\x03') && (*(int *)((longlong)puVar13 + 0x1c) == iVar1)) {
          if (!SBORROW8(0,(longlong)puVar14)) {
            uVar17 = puVar13[2];
            uStack_176 = *(undefined1 *)((longlong)puVar13 + 0x1b);
            uStack_178 = *(undefined2 *)((longlong)puVar13 + 0x19);
            pbStack_c8 = (byte *)CONCAT44(pbStack_c8._4_4_,(int)puVar13[4]);
            pbStack_c0 = (byte *)CONCAT44(pbStack_c0._4_4_,*(undefined4 *)((longlong)puVar13 + 0x24)
                                         );
            uStack_158 = (code *)puVar15;
            pbStack_b8 = (byte *)puVar13[1];
            puStack_b0 = puVar14;
            goto LAB_1428b11c3;
          }
        }
        else if (puVar14 != (ulonglong *)0x0) {
          pub_1406abac0((byte *)puVar13[1],(ulonglong)puVar14,1);
        }
        puVar14 = puVar9;
        puVar13 = puVar15;
      } while (puVar15 != puVar9);
    }
    uStack_158 = (code *)puVar14;
    pdb_14007ee60();
    uVar17 = 0x1b;
    pbVar8 = pub_1406abab0(0x1b,1);
    uVar18 = _UNK_1435ae44b;
    if (pbVar8 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x1b);
      goto LAB_1428b16b7;
    }
    *(ulonglong *)(pbVar8 + 0xb) = CONCAT35(_UNK_1435ae448,_DAT_1435ae443);
    *(undefined8 *)(pbVar8 + 0x13) = uVar18;
    uVar18 = CONCAT53(_DAT_1435ae443,_UNK_1435ae440);
    *(undefined8 *)pbVar8 = _DAT_1435ae438;
    *(undefined8 *)(pbVar8 + 8) = uVar18;
    pbStack_c0 = (byte *)((ulonglong)pbStack_c0 & 0xffffffff00000000);
    puStack_b0 = (ulonglong *)0x1b;
    puVar15 = puVar14;
    pbStack_b8 = pbVar8;
LAB_1428b11c3:
    if (puVar9 != puVar15) {
      uVar10 = (ulonglong)((longlong)puVar9 - (longlong)puVar15) / 0x28;
      puVar15 = puVar15 + 1;
      do {
        if (puVar15[-1] != 0) {
          pub_1406abac0((byte *)*puVar15,puVar15[-1],1);
        }
        puVar15 = puVar15 + 5;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (lVar12 != 0) {
      pub_1406abac0((byte *)puVar5,lVar12 * 0x28,8);
    }
    uVar10 = uStack_d0;
    if (uStack_d0 != uStack_e0) {
      puStack_d8[uStack_d0 * 5] = (ulonglong)puStack_b0;
      puStack_d8[uStack_d0 * 5 + 1] = (ulonglong)pbStack_b8;
      puStack_d8[uStack_d0 * 5 + 2] = uVar17;
      *(undefined1 *)(puStack_d8 + uStack_d0 * 5 + 3) = 3;
      *(undefined2 *)((longlong)puStack_d8 + uStack_d0 * 0x28 + 0x19) = uStack_178;
      *(undefined1 *)((longlong)puStack_d8 + uStack_d0 * 0x28 + 0x1b) = uStack_176;
      *(int *)((longlong)puStack_d8 + uStack_d0 * 0x28 + 0x1c) = iVar1;
      *(undefined4 *)(puStack_d8 + uStack_d0 * 5 + 4) = pbStack_c8._0_4_;
      *(undefined4 *)((longlong)puStack_d8 + uStack_d0 * 0x28 + 0x24) = pbStack_c0._0_4_;
      lVar12 = uStack_d0 + 1;
      uVar17 = uStack_e0;
      puVar9 = puStack_d8;
      goto LAB_1428b12cb;
    }
    pdb_142d7ede0(&uStack_e0);
    puStack_d8[uVar10 * 5] = (ulonglong)puStack_b0;
    puStack_d8[uVar10 * 5 + 1] = (ulonglong)pbStack_b8;
    puStack_d8[uVar10 * 5 + 2] = uVar17;
    *(undefined1 *)(puStack_d8 + uVar10 * 5 + 3) = 3;
    *(undefined2 *)((longlong)puStack_d8 + uVar10 * 0x28 + 0x19) = uStack_178;
    *(undefined1 *)((longlong)puStack_d8 + uVar10 * 0x28 + 0x1b) = uStack_176;
    *(int *)((longlong)puStack_d8 + uVar10 * 0x28 + 0x1c) = iVar1;
    *(undefined4 *)(puStack_d8 + uVar10 * 5 + 4) = pbStack_c8._0_4_;
    *(undefined4 *)((longlong)puStack_d8 + uVar10 * 0x28 + 0x24) = pbStack_c0._0_4_;
    if (!SBORROW8(0,uStack_e0)) {
      lVar12 = uVar10 + 1;
      uVar17 = uStack_e0;
      puVar9 = puStack_d8;
      goto LAB_1428b12cb;
    }
  }
  puVar9 = (ulonglong *)0x8;
  lVar12 = 0;
  uVar17 = 0;
LAB_1428b12cb:
  uVar18 = 0x17;
  if (param_7 == (int *)0x0) {
    uVar18 = 0x1d;
  }
  puVar16 = &UNK_1435ae38d;
  if (param_7 == (int *)0x0) {
    puVar16 = &UNK_1435ae370;
  }
  fVar19 = (float)(longlong)(lVar12 + -1 + (ulonglong)(lVar12 == 0)) * _DAT_14304abd4 +
           _DAT_142e37844;
  fVar20 = _DAT_1435ae280 + param_2 + fVar19;
  fVar22 = _DAT_1435ae280 + param_2;
  if ((param_4 < fVar20) && (fVar22 = (param_2 - fVar19) + _DAT_1435ae284, fVar22 <= _DAT_142e37880)
     ) {
    fVar22 = _DAT_142e37880;
  }
  uStack_a1 = 1;
  pdb_1420f3f90(&lStack_100,fVar20,puVar9 + lVar12 * 5);
  pdb_142b3ce60(&uStack_e0,puStack_f8,lStack_f0,&UNK_1435ae3a4,1);
  uStack_160 = (ulonglong *)&uStack_a2;
  uStack_158 = pdb_140f72cf0;
  uStack_148 = pdb_140001020;
  uStack_150 = &uStack_e0;
  pdb_140f60760(&uStack_178,&UNK_1435ae3a5,&uStack_160);
  param_5 = param_5 + _DAT_142f6d800;
  if (uStack_e0 != 0) {
    pub_1406abac0((byte *)puStack_d8,uStack_e0,1);
  }
  fVar19 = _DAT_142f57bc4 + param_3;
  if (param_5 <= _DAT_142e382c8) {
    param_5 = _DAT_142e382c8;
  }
  if (lStack_f0 != 0) {
    puVar13 = puStack_f8 + 1;
    lVar11 = lStack_f0;
    do {
      if (puVar13[-1] != 0) {
        pub_1406abac0((byte *)*puVar13,puVar13[-1],1);
      }
      puVar13 = puVar13 + 3;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if (param_5 <= fVar19) {
    fVar19 = param_5;
  }
  if (lStack_100 != 0) {
    pub_1406abac0((byte *)puStack_f8,lStack_100 * 0x18,8);
  }
  puStack_b0 = (ulonglong *)CONCAT53(uStack_175,CONCAT12(uStack_176,uStack_178));
  uStack_160 = (ulonglong *)0x1;
  uStack_158 = (code *)0x1;
  uStack_118 = param_6;
  uStack_150 = (undefined8 *)uVar17;
  uStack_148 = (code *)puVar9;
  uStack_140 = lVar12;
  uStack_138 = puVar16;
  uStack_130 = uVar18;
  fStack_128 = param_2;
  fStack_124 = param_3;
  fStack_120 = fVar22;
  fStack_11c = fVar19;
  pdb_14007ee60();
  pbVar8 = pub_1406abab0(0x50,8);
  pbStack_b8 = pbStack_170;
  if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x50);
  }
  *(ulonglong *)(pbVar8 + 0x40) = CONCAT44(fStack_11c,fStack_120);
  *(ulonglong *)(pbVar8 + 0x48) = CONCAT71(uStack_117,uStack_118);
  *(undefined4 *)(pbVar8 + 0x30) = (undefined4)uStack_130;
  *(undefined4 *)(pbVar8 + 0x34) = uStack_130._4_4_;
  *(float *)(pbVar8 + 0x38) = fStack_128;
  *(float *)(pbVar8 + 0x3c) = fStack_124;
  *(undefined4 *)(pbVar8 + 0x20) = (undefined4)uStack_140;
  *(undefined4 *)(pbVar8 + 0x24) = uStack_140._4_4_;
  *(undefined4 *)(pbVar8 + 0x28) = (undefined4)uStack_138;
  *(undefined4 *)(pbVar8 + 0x2c) = uStack_138._4_4_;
  *(undefined4 *)(pbVar8 + 0x10) = (undefined4)uStack_150;
  *(undefined4 *)(pbVar8 + 0x14) = uStack_150._4_4_;
  *(undefined4 *)(pbVar8 + 0x18) = (undefined4)uStack_148;
  *(undefined4 *)(pbVar8 + 0x1c) = uStack_148._4_4_;
  *(undefined4 *)pbVar8 = (undefined4)uStack_160;
  *(undefined4 *)(pbVar8 + 4) = uStack_160._4_4_;
  *(undefined4 *)(pbVar8 + 8) = (undefined4)uStack_158;
  *(undefined4 *)(pbVar8 + 0xc) = uStack_158._4_4_;
  pdb_1409baea0(&uStack_160,pbStack_170,uStack_168,pbVar8,&UNK_1435ae3c0);
  param_1[4] = uStack_140;
  param_1[2] = uStack_150;
  param_1[3] = uStack_148;
  *param_1 = uStack_160;
  param_1[1] = uStack_158;
  if (puStack_b0 != (ulonglong *)0x0) {
    pub_1406abac0(pbStack_b8,(ulonglong)puStack_b0,1);
  }
  return param_1;
}

