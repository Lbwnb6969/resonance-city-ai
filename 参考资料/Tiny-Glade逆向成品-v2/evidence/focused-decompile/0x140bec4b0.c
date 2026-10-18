// Matched PDB: country_core::resources::in_progress_curve::InProgressCurve::compute_final_curve
// VA 0x140bec4b0, PDB extent 2295 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::resources::in_progress_curve::InProgressCurve::compute_final_curve
   Extent: 2295 bytes. No whole-program auto-analysis. */

undefined8 * pdb_140bec4b0(undefined8 *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  char cVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  undefined1 auStack_160 [48];
  ulonglong uStack_130;
  longlong lStack_128;
  ulonglong uStack_120;
  longlong lStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong lStack_f8;
  ulonglong uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 *puStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  char cStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar10 = *(ulonglong *)(param_2 + 0x10);
  lVar7 = *(longlong *)(param_2 + 0x58);
  puVar6 = (ulonglong *)(param_2 + 8);
  uVar20 = *(longlong *)(param_2 + 0x60) << 3;
  do {
    if (uVar20 == 0) goto LAB_140bec575;
    uVar9 = *(ulonglong *)(lVar7 + -8 + uVar20);
    uVar20 = uVar20 - 8;
  } while ((int)uVar10 + -0x14 <= (int)uVar9);
  if (uVar9 == 0) {
LAB_140bec575:
    if (param_4 == '\0') {
      cVar13 = '\0';
    }
    else {
      uVar20 = uVar10 * 8;
      if (0x7ffffffffffffffc < uVar20 || uVar10 >> 0x3d != 0) {
        uVar19 = 0;
LAB_140bec5a7:
        cStack_49 = '\0';
        pdb_142dc7e2a(uVar19,uVar20);
        goto LAB_140becc5b;
      }
      if (uVar20 == 0) {
        uStack_60 = 4;
        uVar9 = *puVar6;
        uVar14 = 0;
      }
      else {
        uStack_58 = *puVar6;
        pdb_14007ee60();
        uVar19 = 4;
        uStack_60 = func_0x0001406abab0(uVar20,4);
        uVar9 = uStack_58;
        uVar14 = uVar10;
        if (uStack_60 == 0) goto LAB_140bec5a7;
      }
      if (uVar10 != 0) {
        func_0x000142e32760(uStack_60,uVar9,uVar20);
      }
      uVar9 = *(ulonglong *)(param_2 + 0x28);
      uVar20 = uVar9 * 4;
      if (0x7ffffffffffffffc < uVar20 || uVar9 >> 0x3e != 0) {
        uVar19 = 0;
        uStack_58 = uVar14;
LAB_140bec70d:
        pdb_142dc7e2a(uVar19,uVar20);
        goto LAB_140becc5b;
      }
      if (uVar20 == 0) {
        lVar11 = 4;
        param_1 = param_1;
        uStack_a0 = uVar14;
      }
      else {
        puVar2 = *(undefined4 **)(param_2 + 0x20);
        puStack_68 = param_1;
        uStack_58 = uVar14;
        pdb_14007ee60();
        uVar19 = 4;
        lVar11 = func_0x0001406abab0(uVar20,4);
        if (lVar11 == 0) goto LAB_140bec70d;
        param_1 = puStack_68;
        uStack_a0 = uStack_58;
        if (uVar9 != 0) {
          uVar20 = uVar9 - 1;
          if (uVar9 < uVar9 - 1) {
            uVar20 = uVar9;
          }
          if (uVar20 < 8) {
            lVar18 = 0;
            uVar20 = uVar9;
            puVar16 = puVar2;
          }
          else {
            uVar20 = uVar20 + 1;
            uVar14 = 8;
            if ((uVar20 & 7) != 0) {
              uVar14 = (ulonglong)((uint)uVar20 & 7);
            }
            lVar18 = uVar20 - uVar14;
            uVar20 = uVar9 - lVar18;
            puVar16 = puVar2 + lVar18;
            lVar17 = 0;
            do {
              uVar19 = *(undefined8 *)((longlong)(puVar2 + lVar17) + 8);
              uVar4 = *(undefined8 *)(puVar2 + lVar17 + 4);
              uVar5 = *(undefined8 *)((longlong)(puVar2 + lVar17 + 4) + 8);
              puVar8 = (undefined8 *)(lVar11 + lVar17 * 4);
              *puVar8 = *(undefined8 *)(puVar2 + lVar17);
              puVar8[1] = uVar19;
              puVar8 = (undefined8 *)(lVar11 + 0x10 + lVar17 * 4);
              *puVar8 = uVar4;
              puVar8[1] = uVar5;
              lVar17 = lVar17 + 8;
            } while (lVar18 != lVar17);
          }
          puVar12 = (undefined4 *)(lVar11 + lVar18 * 4);
          do {
            if (puVar16 == puVar2 + uVar9) break;
            uVar1 = *puVar16;
            puVar16 = puVar16 + 1;
            *puVar12 = uVar1;
            puVar12 = puVar12 + 1;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
        }
      }
      uStack_70 = *(undefined4 *)(param_2 + 0x30);
      uStack_98 = uStack_60;
      cStack_49 = 0;
      uStack_90 = uVar10;
      uStack_88 = uVar9;
      uStack_80 = lVar11;
      uStack_78 = uVar9;
      pdb_1419a9b00(&uStack_130,&uStack_a0,0x32,*(undefined8 *)(param_2 + 0x40),
                    *(undefined8 *)(param_2 + 0x48));
      uStack_f0 = uStack_130;
      uStack_b8 = lStack_128;
      lVar11 = uStack_b8;
      uStack_b0 = uStack_120;
      uVar10 = uStack_b0;
      puVar6 = (ulonglong *)&uStack_e8;
      if (SBORROW8(0,uStack_130)) goto LAB_140becb74;
      uStack_c8 = uStack_108;
      uStack_c4 = uStack_104;
      uStack_c0 = uStack_100;
      uStack_bc = uStack_fc;
      lStack_d8 = lStack_118;
      uStack_d0 = uStack_110;
      uStack_b8._0_4_ = (undefined4)lStack_128;
      uStack_b8._4_4_ = (undefined4)((ulonglong)lStack_128 >> 0x20);
      uStack_b0._0_4_ = (undefined4)uStack_120;
      uStack_b0._4_4_ = (undefined4)(uStack_120 >> 0x20);
      uStack_e8 = (undefined4)uStack_b8;
      uStack_e4 = uStack_b8._4_4_;
      uStack_e0 = (undefined4)uStack_b0;
      uStack_dc = uStack_b0._4_4_;
      cVar13 = '\x01';
      uVar20 = uStack_130;
      uStack_b8 = lVar11;
      uStack_b0 = uVar10;
    }
    cStack_49 = cVar13;
    pdb_140b41dc0(&uStack_a0,*puVar6,uVar10,_DAT_142e3b1d8);
    lVar11 = *(longlong *)(param_2 + 0x50);
    if (lVar11 != 0) {
      func_0x0001406abac0(lVar7,lVar11 << 3,8);
    }
    if (*(longlong *)(param_2 + 0x68) != 0) {
      func_0x0001406abac0(*(undefined8 *)(param_2 + 0x70),*(longlong *)(param_2 + 0x68) << 3,4);
    }
    *(undefined4 *)(param_2 + 0x70) = (undefined4)uStack_80;
    *(undefined4 *)(param_2 + 0x74) = uStack_80._4_4_;
    *(undefined4 *)(param_2 + 0x78) = (undefined4)uStack_78;
    *(undefined4 *)(param_2 + 0x7c) = uStack_78._4_4_;
    *(undefined4 *)(param_2 + 0x60) = (undefined4)uStack_90;
    *(undefined4 *)(param_2 + 100) = uStack_90._4_4_;
    *(undefined4 *)(param_2 + 0x68) = (undefined4)uStack_88;
    *(undefined4 *)(param_2 + 0x6c) = uStack_88._4_4_;
    *(undefined4 *)(param_2 + 0x50) = (undefined4)uStack_a0;
    *(undefined4 *)(param_2 + 0x54) = uStack_a0._4_4_;
    *(undefined4 *)(param_2 + 0x58) = (undefined4)uStack_98;
    *(undefined4 *)(param_2 + 0x5c) = uStack_98._4_4_;
    if (cVar13 != '\0') {
      if (uVar20 != 0) {
        func_0x0001406abac0(CONCAT44(uStack_e4,uStack_e8),uVar20 << 3,4);
      }
      if (lStack_d8 != 0) {
        func_0x0001406abac0(uStack_d0,lStack_d8 << 2,4);
      }
    }
    goto LAB_140bec75c;
  }
  if (param_4 == '\0') {
    if (uVar10 < uVar9) {
      pdb_142dc8420(uVar9,uVar10,uVar10,&UNK_143065bd0);
LAB_140becc48:
      pdb_142dc8420(uVar9);
LAB_140becc5b:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pdb_140b41dc0(auStack_160,uVar9 * 8 + *puVar6,uVar10 - uVar9,_DAT_142e3b1d8);
  }
  else {
    lVar7 = uVar10 * 8;
    lStack_f8 = lVar7;
    uStack_60 = uVar10;
    if (uVar10 == 0) {
      uStack_58 = 4;
    }
    else {
      uVar10 = *puVar6;
      pdb_14007ee60();
      uStack_58 = func_0x0001406abab0(lVar7,4);
      if (uStack_58 == 0) {
        pdb_142dc7e2a(4,lVar7);
        pcVar3 = (code *)swi(3);
        puVar8 = (undefined8 *)(*pcVar3)();
        return puVar8;
      }
      func_0x000142e32760(uStack_58,uVar10,lVar7);
    }
    uVar14 = *(ulonglong *)(param_2 + 0x28);
    uVar10 = uVar14 * 4;
    if (0x7ffffffffffffffc < uVar10 || uVar14 >> 0x3e != 0) {
      uVar19 = 0;
LAB_140bec8cb:
      pdb_142dc7e2a(uVar19,uVar10);
      goto LAB_140becc5b;
    }
    if (uVar10 == 0) {
      lVar7 = 4;
    }
    else {
      puVar2 = *(undefined4 **)(param_2 + 0x20);
      puStack_68 = param_1;
      pdb_14007ee60();
      uVar19 = 4;
      lVar7 = func_0x0001406abab0(uVar10,4);
      if (lVar7 == 0) goto LAB_140bec8cb;
      param_1 = puStack_68;
      if (uVar14 != 0) {
        uVar10 = uVar14 - 1;
        if (uVar14 < uVar14 - 1) {
          uVar10 = uVar14;
        }
        if (uVar10 < 8) {
          lVar11 = 0;
          uVar10 = uVar14;
          puVar16 = puVar2;
        }
        else {
          uVar10 = uVar10 + 1;
          uVar15 = 8;
          if ((uVar10 & 7) != 0) {
            uVar15 = (ulonglong)((uint)uVar10 & 7);
          }
          lVar11 = uVar10 - uVar15;
          uVar10 = uVar14 - lVar11;
          puVar16 = puVar2 + lVar11;
          lVar18 = 0;
          do {
            uVar19 = *(undefined8 *)((longlong)(puVar2 + lVar18) + 8);
            uVar4 = *(undefined8 *)(puVar2 + lVar18 + 4);
            uVar5 = *(undefined8 *)((longlong)(puVar2 + lVar18 + 4) + 8);
            puVar8 = (undefined8 *)(lVar7 + lVar18 * 4);
            *puVar8 = *(undefined8 *)(puVar2 + lVar18);
            puVar8[1] = uVar19;
            puVar8 = (undefined8 *)(lVar7 + 0x10 + lVar18 * 4);
            *puVar8 = uVar4;
            puVar8[1] = uVar5;
            lVar18 = lVar18 + 8;
          } while (lVar11 != lVar18);
        }
        puVar12 = (undefined4 *)(lVar7 + lVar11 * 4);
        do {
          if (puVar16 == puVar2 + uVar14) break;
          uVar1 = *puVar16;
          puVar16 = puVar16 + 1;
          *puVar12 = uVar1;
          puVar12 = puVar12 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    uStack_70 = *(undefined4 *)(param_2 + 0x30);
    uStack_98 = uStack_58;
    uStack_a0 = uStack_60;
    uStack_90 = uStack_60;
    uStack_88 = uVar14;
    uStack_80 = lVar7;
    uStack_78 = uVar14;
    pdb_1419a9b00(&uStack_130,&uStack_a0,0x32,*(undefined8 *)(param_2 + 0x40),
                  *(undefined8 *)(param_2 + 0x48));
    uStack_b8 = lStack_128;
    lVar7 = uStack_b8;
    uStack_b0 = uStack_120;
    uVar10 = uStack_b0;
    if (SBORROW8(0,uStack_130)) {
LAB_140becb74:
      param_1[1] = uStack_b8;
      param_1[2] = uStack_b0;
      *param_1 = 0x8000000000000000;
      return param_1;
    }
    uStack_c8 = uStack_108;
    uStack_c4 = uStack_104;
    uStack_c0 = uStack_100;
    uStack_bc = uStack_fc;
    lStack_d8 = lStack_118;
    uStack_d0 = uStack_110;
    uStack_b8._0_4_ = (undefined4)lStack_128;
    uStack_b8._4_4_ = (undefined4)((ulonglong)lStack_128 >> 0x20);
    uStack_b0._0_4_ = (undefined4)uStack_120;
    uStack_b0._4_4_ = (undefined4)(uStack_120 >> 0x20);
    uStack_e8 = (undefined4)uStack_b8;
    uStack_e4 = uStack_b8._4_4_;
    uStack_e0 = (undefined4)uStack_b0;
    uStack_dc = uStack_b0._4_4_;
    uStack_f0 = uStack_130;
    uStack_b8 = lVar7;
    uStack_b0 = uVar10;
    if (uStack_120 < uVar9) goto LAB_140becc48;
    pdb_140b41dc0(auStack_160,uVar9 * 8 + lStack_128,uStack_120 - uVar9,_DAT_142e3b1d8);
    if (uStack_130 != 0) {
      func_0x0001406abac0(lStack_128,uStack_130 << 3,4);
    }
    if (lStack_d8 != 0) {
      func_0x0001406abac0(uStack_d0,lStack_d8 << 2,4);
    }
  }
  pdb_140b417e0(param_2 + 0x50,auStack_160,uVar20 >> 3,uVar9);
LAB_140bec75c:
  uVar20 = *(ulonglong *)(param_2 + 0x78);
  uVar10 = uVar20 * 8;
  if (uVar10 < 0x7ffffffffffffffd && uVar20 >> 0x3d == 0) goto LAB_140bec794;
  uVar19 = 0;
  while( true ) {
    pdb_142dc7e2a(uVar19,uVar10);
LAB_140bec794:
    param_2 = *(longlong *)(param_2 + 0x70);
    if (uVar10 == 0) break;
    pdb_14007ee60();
    uVar19 = 4;
    lVar7 = func_0x0001406abab0(uVar10,4);
    uVar9 = uVar20;
    if (lVar7 != 0) {
LAB_140bec7c6:
      uStack_90 = 0;
      uStack_a0 = uVar9;
      uStack_98 = lVar7;
      if (uVar20 != 0) {
        func_0x000142e32760(lVar7,param_2,uVar10);
        uStack_90 = uVar20;
      }
      pdb_140080c90(param_1,&uStack_a0,0);
      return param_1;
    }
  }
  lVar7 = 4;
  uVar9 = 0;
  goto LAB_140bec7c6;
}

