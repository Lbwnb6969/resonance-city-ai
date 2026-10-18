// VA 0x140bec4b0, PDB extent 2295 bytes
// country_core::resources::in_progress_curve::InProgressCurve::compute_final_curve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/in_progress_curve.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::in_progress_curve::InProgressCurve::compute_final_curve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/in_progress_curve.rs
   Extent: 2295 */

undefined8 * pdb_140bec4b0(undefined8 *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  byte *pbVar11;
  longlong lVar12;
  byte *pbVar13;
  char cVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  longlong lVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  undefined1 auStack_160 [48];
  ulonglong uStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  longlong lStack_118;
  byte *pbStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong lStack_d8;
  byte *pbStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  ulonglong uStack_88;
  byte *pbStack_80;
  ulonglong uStack_78;
  undefined4 uStack_70;
  undefined8 *puStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  char cStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pbVar8 = *(byte **)(param_2 + 0x10);
  pbVar13 = *(byte **)(param_2 + 0x58);
  puVar6 = (ulonglong *)(param_2 + 8);
  uVar20 = *(longlong *)(param_2 + 0x60) << 3;
  do {
    if (uVar20 == 0) goto LAB_140bec575;
    pbVar7 = *(byte **)(pbVar13 + (uVar20 - 8));
    uVar20 = uVar20 - 8;
  } while ((int)pbVar8 + -0x14 <= (int)pbVar7);
  if (pbVar7 == (byte *)0x0) {
LAB_140bec575:
    if (param_4 == '\0') {
      cVar14 = '\0';
    }
    else {
      uVar20 = (longlong)pbVar8 * 8;
      if (0x7ffffffffffffffc < uVar20 || (ulonglong)pbVar8 >> 0x3d != 0) {
        uVar19 = 0;
LAB_140bec5a7:
        cStack_49 = '\0';
        pdb_142dc7e2a(uVar19,uVar20);
        goto LAB_140becc5b;
      }
      if (uVar20 == 0) {
        pbStack_60 = (byte *)0x4;
        pbVar7 = (byte *)*puVar6;
        pbVar11 = (byte *)0x0;
      }
      else {
        pbStack_58 = (byte *)*puVar6;
        pdb_14007ee60();
        uVar19 = 4;
        pbStack_60 = pub_1406abab0(uVar20,4);
        pbVar7 = pbStack_58;
        pbVar11 = pbVar8;
        if (pbStack_60 == (byte *)0x0) goto LAB_140bec5a7;
      }
      if (pbVar8 != (byte *)0x0) {
        pub_142e32760(pbStack_60,pbVar7,uVar20);
      }
      uVar10 = *(ulonglong *)(param_2 + 0x28);
      uVar20 = uVar10 * 4;
      if (0x7ffffffffffffffc < uVar20 || uVar10 >> 0x3e != 0) {
        uVar19 = 0;
        pbStack_58 = pbVar11;
LAB_140bec70d:
        pdb_142dc7e2a(uVar19,uVar20);
        goto LAB_140becc5b;
      }
      if (uVar20 == 0) {
        pbVar7 = (byte *)0x4;
        param_1 = param_1;
        pbStack_a0 = pbVar11;
      }
      else {
        puVar2 = *(undefined4 **)(param_2 + 0x20);
        puStack_68 = param_1;
        pbStack_58 = pbVar11;
        pdb_14007ee60();
        uVar19 = 4;
        pbVar7 = pub_1406abab0(uVar20,4);
        if (pbVar7 == (byte *)0x0) goto LAB_140bec70d;
        param_1 = puStack_68;
        pbStack_a0 = pbStack_58;
        if (uVar10 != 0) {
          uVar20 = uVar10 - 1;
          if (uVar10 < uVar10 - 1) {
            uVar20 = uVar10;
          }
          if (uVar20 < 8) {
            lVar12 = 0;
            uVar20 = uVar10;
            puVar17 = puVar2;
          }
          else {
            uVar20 = uVar20 + 1;
            uVar15 = 8;
            if ((uVar20 & 7) != 0) {
              uVar15 = (ulonglong)((uint)uVar20 & 7);
            }
            lVar12 = uVar20 - uVar15;
            uVar20 = uVar10 - lVar12;
            puVar17 = puVar2 + lVar12;
            lVar18 = 0;
            do {
              uVar19 = *(undefined8 *)((longlong)(puVar2 + lVar18) + 8);
              uVar4 = *(undefined8 *)(puVar2 + lVar18 + 4);
              uVar5 = *(undefined8 *)((longlong)(puVar2 + lVar18 + 4) + 8);
              *(undefined8 *)(pbVar7 + lVar18 * 4) = *(undefined8 *)(puVar2 + lVar18);
              *(undefined8 *)(pbVar7 + lVar18 * 4 + 8) = uVar19;
              *(undefined8 *)(pbVar7 + lVar18 * 4 + 0x10) = uVar4;
              *(undefined8 *)(pbVar7 + lVar18 * 4 + 0x10 + 8) = uVar5;
              lVar18 = lVar18 + 8;
            } while (lVar12 != lVar18);
          }
          pbVar11 = pbVar7 + lVar12 * 4;
          do {
            if (puVar17 == puVar2 + uVar10) break;
            uVar1 = *puVar17;
            puVar17 = puVar17 + 1;
            *(undefined4 *)pbVar11 = uVar1;
            pbVar11 = pbVar11 + 4;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
        }
      }
      uStack_70 = *(undefined4 *)(param_2 + 0x30);
      pbStack_98 = pbStack_60;
      cStack_49 = 0;
      pbStack_90 = pbVar8;
      uStack_88 = uVar10;
      pbStack_80 = pbVar7;
      uStack_78 = uVar10;
      pdb_1419a9b00(&uStack_130,&pbStack_a0,0x32,*(undefined8 *)(param_2 + 0x40),
                    *(undefined8 *)(param_2 + 0x48));
      uStack_f0 = uStack_130;
      uStack_b8 = pbStack_128;
      pbVar7 = uStack_b8;
      uStack_b0 = pbStack_120;
      pbVar8 = uStack_b0;
      puVar6 = (ulonglong *)&uStack_e8;
      if (SBORROW8(0,uStack_130)) goto LAB_140becb74;
      uStack_c8 = uStack_108;
      uStack_c4 = uStack_104;
      uStack_c0 = uStack_100;
      uStack_bc = uStack_fc;
      lStack_d8 = lStack_118;
      pbStack_d0 = pbStack_110;
      uStack_b8._0_4_ = SUB84(pbStack_128,0);
      uStack_b8._4_4_ = (undefined4)((ulonglong)pbStack_128 >> 0x20);
      uStack_b0._0_4_ = SUB84(pbStack_120,0);
      uStack_b0._4_4_ = (undefined4)((ulonglong)pbStack_120 >> 0x20);
      uStack_e8 = (undefined4)uStack_b8;
      uStack_e4 = uStack_b8._4_4_;
      uStack_e0 = (undefined4)uStack_b0;
      uStack_dc = uStack_b0._4_4_;
      cVar14 = '\x01';
      uVar20 = uStack_130;
      uStack_b8 = pbVar7;
      uStack_b0 = pbVar8;
    }
    cStack_49 = cVar14;
    pdb_140b41dc0(&pbStack_a0,*puVar6,pbVar8,_DAT_142e3b1d8);
    uVar10 = *(ulonglong *)(param_2 + 0x50);
    if (uVar10 != 0) {
      pub_1406abac0(pbVar13,uVar10 << 3,8);
    }
    if (*(longlong *)(param_2 + 0x68) != 0) {
      pub_1406abac0(*(byte **)(param_2 + 0x70),*(longlong *)(param_2 + 0x68) << 3,4);
    }
    *(byte **)(param_2 + 0x70) = pbStack_80;
    *(ulonglong *)(param_2 + 0x78) = uStack_78;
    *(byte **)(param_2 + 0x60) = pbStack_90;
    *(ulonglong *)(param_2 + 0x68) = uStack_88;
    *(ulonglong *)(param_2 + 0x50) = (ulonglong)pbStack_a0;
    *(byte **)(param_2 + 0x58) = pbStack_98;
    if (cVar14 != '\0') {
      if (uVar20 != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_e4,uStack_e8),uVar20 << 3,4);
      }
      if (lStack_d8 != 0) {
        pub_1406abac0(pbStack_d0,lStack_d8 << 2,4);
      }
    }
    goto LAB_140bec75c;
  }
  if (param_4 == '\0') {
    if (pbVar8 < pbVar7) {
      pdb_142dc8420(pbVar7,pbVar8,pbVar8,&UNK_143065bd0);
LAB_140becc48:
      pdb_142dc8420(pbVar7);
LAB_140becc5b:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pdb_140b41dc0(auStack_160,(longlong)pbVar7 * 8 + *puVar6,(longlong)pbVar8 - (longlong)pbVar7,
                  _DAT_142e3b1d8);
  }
  else {
    uVar10 = (longlong)pbVar8 * 8;
    uStack_f8 = uVar10;
    pbStack_60 = pbVar8;
    if (pbVar8 == (byte *)0x0) {
      pbStack_58 = (byte *)0x4;
    }
    else {
      uVar15 = *puVar6;
      pdb_14007ee60();
      pbStack_58 = pub_1406abab0(uVar10,4);
      if (pbStack_58 == (byte *)0x0) {
        pdb_142dc7e2a(4,uVar10);
        pcVar3 = (code *)swi(3);
        puVar9 = (undefined8 *)(*pcVar3)();
        return puVar9;
      }
      pub_142e32760(pbStack_58,uVar15,uVar10);
    }
    uVar15 = *(ulonglong *)(param_2 + 0x28);
    uVar10 = uVar15 * 4;
    if (0x7ffffffffffffffc < uVar10 || uVar15 >> 0x3e != 0) {
      uVar19 = 0;
LAB_140bec8cb:
      pdb_142dc7e2a(uVar19,uVar10);
      goto LAB_140becc5b;
    }
    if (uVar10 == 0) {
      pbVar8 = (byte *)0x4;
    }
    else {
      puVar2 = *(undefined4 **)(param_2 + 0x20);
      puStack_68 = param_1;
      pdb_14007ee60();
      uVar19 = 4;
      pbVar8 = pub_1406abab0(uVar10,4);
      if (pbVar8 == (byte *)0x0) goto LAB_140bec8cb;
      param_1 = puStack_68;
      if (uVar15 != 0) {
        uVar10 = uVar15 - 1;
        if (uVar15 < uVar15 - 1) {
          uVar10 = uVar15;
        }
        if (uVar10 < 8) {
          lVar12 = 0;
          uVar10 = uVar15;
          puVar17 = puVar2;
        }
        else {
          uVar10 = uVar10 + 1;
          uVar16 = 8;
          if ((uVar10 & 7) != 0) {
            uVar16 = (ulonglong)((uint)uVar10 & 7);
          }
          lVar12 = uVar10 - uVar16;
          uVar10 = uVar15 - lVar12;
          puVar17 = puVar2 + lVar12;
          lVar18 = 0;
          do {
            uVar19 = *(undefined8 *)((longlong)(puVar2 + lVar18) + 8);
            uVar4 = *(undefined8 *)(puVar2 + lVar18 + 4);
            uVar5 = *(undefined8 *)((longlong)(puVar2 + lVar18 + 4) + 8);
            *(undefined8 *)(pbVar8 + lVar18 * 4) = *(undefined8 *)(puVar2 + lVar18);
            *(undefined8 *)(pbVar8 + lVar18 * 4 + 8) = uVar19;
            *(undefined8 *)(pbVar8 + lVar18 * 4 + 0x10) = uVar4;
            *(undefined8 *)(pbVar8 + lVar18 * 4 + 0x10 + 8) = uVar5;
            lVar18 = lVar18 + 8;
          } while (lVar12 != lVar18);
        }
        pbVar13 = pbVar8 + lVar12 * 4;
        do {
          if (puVar17 == puVar2 + uVar15) break;
          uVar1 = *puVar17;
          puVar17 = puVar17 + 1;
          *(undefined4 *)pbVar13 = uVar1;
          pbVar13 = pbVar13 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    uStack_70 = *(undefined4 *)(param_2 + 0x30);
    pbStack_98 = pbStack_58;
    pbStack_a0 = pbStack_60;
    pbStack_90 = pbStack_60;
    uStack_88 = uVar15;
    pbStack_80 = pbVar8;
    uStack_78 = uVar15;
    pdb_1419a9b00(&uStack_130,&pbStack_a0,0x32,*(undefined8 *)(param_2 + 0x40),
                  *(undefined8 *)(param_2 + 0x48));
    uStack_b8 = pbStack_128;
    pbVar8 = uStack_b8;
    uStack_b0 = pbStack_120;
    pbVar13 = uStack_b0;
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
    pbStack_d0 = pbStack_110;
    uStack_b8._0_4_ = SUB84(pbStack_128,0);
    uStack_b8._4_4_ = (undefined4)((ulonglong)pbStack_128 >> 0x20);
    uStack_b0._0_4_ = SUB84(pbStack_120,0);
    uStack_b0._4_4_ = (undefined4)((ulonglong)pbStack_120 >> 0x20);
    uStack_e8 = (undefined4)uStack_b8;
    uStack_e4 = uStack_b8._4_4_;
    uStack_e0 = (undefined4)uStack_b0;
    uStack_dc = uStack_b0._4_4_;
    uStack_f0 = uStack_130;
    uStack_b8 = pbVar8;
    uStack_b0 = pbVar13;
    if (pbStack_120 < pbVar7) goto LAB_140becc48;
    pdb_140b41dc0(auStack_160,pbStack_128 + (longlong)pbVar7 * 8,
                  (longlong)pbStack_120 - (longlong)pbVar7,_DAT_142e3b1d8);
    if (uStack_130 != 0) {
      pub_1406abac0(pbStack_128,uStack_130 << 3,4);
    }
    if (lStack_d8 != 0) {
      pub_1406abac0(pbStack_d0,lStack_d8 << 2,4);
    }
  }
  pdb_140b417e0(param_2 + 0x50,auStack_160,uVar20 >> 3,pbVar7);
LAB_140bec75c:
  pbVar8 = *(byte **)(param_2 + 0x78);
  uVar20 = (longlong)pbVar8 * 8;
  if (uVar20 < 0x7ffffffffffffffd && (ulonglong)pbVar8 >> 0x3d == 0) goto LAB_140bec794;
  uVar19 = 0;
  while( true ) {
    pdb_142dc7e2a(uVar19,uVar20);
LAB_140bec794:
    param_2 = *(longlong *)(param_2 + 0x70);
    if (uVar20 == 0) break;
    pdb_14007ee60();
    uVar19 = 4;
    pbVar7 = pub_1406abab0(uVar20,4);
    pbVar13 = pbVar8;
    if (pbVar7 != (byte *)0x0) {
LAB_140bec7c6:
      pbStack_90 = (byte *)0x0;
      pbStack_a0 = pbVar13;
      pbStack_98 = pbVar7;
      if (pbVar8 != (byte *)0x0) {
        pub_142e32760(pbVar7,param_2,uVar20);
        pbStack_90 = pbVar8;
      }
      pdb_140080c90(param_1,&pbStack_a0,0);
      return param_1;
    }
  }
  pbVar7 = (byte *)0x4;
  pbVar13 = (byte *)0x0;
  goto LAB_140bec7c6;
}

