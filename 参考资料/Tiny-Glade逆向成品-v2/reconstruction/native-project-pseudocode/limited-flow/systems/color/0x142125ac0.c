// VA 0x142125ac0, PDB extent 4449 bytes
// system_color::style_picker::style_picker
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_picker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::style_picker::style_picker
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_picker.rs
   Extent: 4449 */

void pdb_142125ac0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  longlong param_9,undefined8 *param_10,longlong *param_11,undefined8 param_12,
                  undefined8 param_13,longlong *param_14)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  byte bVar16;
  longlong *plVar17;
  ulonglong uVar18;
  char in_R10B;
  int in_R11D;
  int iVar19;
  longlong *plVar20;
  undefined4 uVar21;
  int iVar22;
  undefined4 uVar23;
  int extraout_XMM0_Da;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 in_stack_fffffffffffff898;
  undefined8 uVar26;
  ulonglong in_stack_fffffffffffff8a0;
  undefined1 auStack_740 [696];
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  int iStack_448;
  int iStack_444;
  int iStack_440;
  int iStack_43c;
  int iStack_438;
  int iStack_434;
  int iStack_430;
  int iStack_42c;
  int iStack_428;
  int iStack_424;
  int iStack_420;
  int iStack_41c;
  int iStack_418;
  int iStack_414;
  int iStack_410;
  int iStack_40c;
  undefined8 uStack_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  longlong lStack_3f0;
  undefined8 uStack_3e8;
  code *pcStack_3e0;
  longlong lStack_3d8;
  int iStack_338;
  int iStack_334;
  int iStack_330;
  int iStack_32c;
  int iStack_328;
  int iStack_324;
  int iStack_320;
  int iStack_31c;
  int iStack_318;
  int iStack_314;
  int iStack_310;
  int iStack_30c;
  int iStack_308;
  int iStack_304;
  int iStack_300;
  int iStack_2fc;
  longlong lStack_2f8;
  uint uStack_2f0;
  uint uStack_2ec;
  int iStack_2e8;
  int iStack_2e4;
  undefined4 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined4 uStack_278;
  undefined4 uStack_274;
  int iStack_270;
  int iStack_26c;
  longlong lStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  longlong lStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  longlong lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 *puStack_200;
  undefined4 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  int iStack_1e0;
  int iStack_1dc;
  ulonglong uStack_1d8;
  ulonglong uStack_1d0;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined1 uStack_1a4;
  undefined1 uStack_1a3;
  undefined1 uStack_1a2;
  undefined1 uStack_1a1;
  undefined7 uStack_130;
  undefined4 uStack_129;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  uint uStack_108;
  uint uStack_104;
  int iStack_100;
  int iStack_fc;
  uint uStack_f0;
  int iStack_ec;
  undefined8 *puStack_e8;
  undefined4 uStack_dc;
  undefined1 *puStack_d8;
  int *piStack_d0;
  undefined8 uStack_c8;
  int *piStack_c0;
  undefined1 *puStack_b8;
  undefined4 *puStack_b0;
  undefined4 *puStack_a8;
  int iStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong *plStack_90;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffff898 >> 0x20);
  uStack_80 = 0xfffffffffffffffe;
  uStack_120 = *param_3;
  uStack_210 = param_3[4];
  uStack_208 = param_3[8];
  puVar3 = (undefined4 *)*param_5;
  uVar18 = param_5[4];
  uVar26 = param_5[8];
  plVar20 = (longlong *)*param_7;
  puStack_a8 = (undefined4 *)param_7[2];
  uStack_94 = *(undefined4 *)((longlong)param_7 + 0x1c);
  uStack_c8 = param_7[4];
  piStack_c0 = (int *)param_7[6];
  iStack_9c = *(int *)((longlong)param_7 + 0x3c);
  puStack_200 = (undefined1 *)param_7[8];
  puStack_1f8 = (undefined4 *)param_7[10];
  uStack_dc = *(undefined4 *)((longlong)param_7 + 0x5c);
  puStack_b8 = (undefined1 *)*param_8;
  puStack_b0 = (undefined4 *)param_8[2];
  uStack_98 = *(undefined4 *)((longlong)param_8 + 0x1c);
  puStack_d8 = (undefined1 *)param_8[4];
  piStack_d0 = (int *)param_8[6];
  iStack_a0 = *(int *)((longlong)param_8 + 0x3c);
  uStack_218 = param_1;
  pub_142e32760(auStack_740,param_9,0x2b8);
  uStack_118 = *(undefined8 *)(param_9 + 0x2b8);
  uStack_488 = *(undefined4 *)(param_9 + 0x2d8);
  uStack_484 = *(undefined4 *)(param_9 + 0x2dc);
  uStack_480 = *(undefined4 *)(param_9 + 0x2e0);
  uStack_47c = *(undefined4 *)(param_9 + 0x2e4);
  uVar24 = *(undefined4 *)(param_9 + 0x2e8);
  uStack_474 = *(undefined4 *)(param_9 + 0x2ec);
  uStack_470 = *(undefined4 *)(param_9 + 0x2f0);
  uStack_46c = *(undefined4 *)(param_9 + 0x2f4);
  uStack_468 = *(undefined4 *)(param_9 + 0x2f8);
  uStack_464 = *(undefined4 *)(param_9 + 0x2fc);
  uStack_460 = *(undefined4 *)(param_9 + 0x300);
  uStack_45c = *(undefined4 *)(param_9 + 0x304);
  uStack_458 = *(undefined4 *)(param_9 + 0x308);
  uStack_454 = *(undefined4 *)(param_9 + 0x30c);
  uStack_450 = *(undefined4 *)(param_9 + 0x310);
  uStack_44c = *(undefined4 *)(param_9 + 0x314);
  if (*(char *)((longlong)plVar20 + 0x89) != '\x01') {
    return;
  }
  uStack_110 = *(undefined8 *)(param_9 + 0x318);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  uVar4 = *param_2;
  uStack_478 = uVar24;
  pdb_140c9dd80(&uStack_3e8,3);
  uStack_2d8 = CONCAT62(uStack_2d8._2_6_,1);
  pdb_140c9dcb0(&uStack_1e8,&uStack_3e8,&uStack_2d8);
  pdb_140c9dc40(&uStack_3e8,&uStack_1e8);
  uStack_84 = 1;
  pdb_140c9dee0(&uStack_2d8);
  uStack_84 = 0;
  pdb_140c9dd20(&uStack_1e8,&uStack_3e8,&uStack_2d8);
  uStack_1f0 = uVar26;
  pdb_140c9dbe0(&uStack_3e8,&uStack_1e8,0);
  uStack_82 = 1;
  uVar21 = pdb_140a6ad50(uVar18);
  plVar17 = plVar20 + 8;
  plVar11 = (longlong *)0x0;
  if ((int)plVar20[8] != 2) {
    plVar11 = plVar17;
  }
  uStack_82 = 1;
  uVar25 = uVar1;
  pdb_1428b0a90(&uStack_2d8,uVar1,uVar2,uVar21,CONCAT44(uVar23,uVar24),
                in_stack_fffffffffffff8a0 & 0xffffffffffffff00,plVar11);
  uStack_82 = 0;
  pdb_1428b3120(&uStack_1e8,&uStack_3e8,&uStack_2d8);
  pdb_1428b3d80(uVar4,&UNK_14345fd7c,0x13,&uStack_1e8);
  plVar12 = (longlong *)0x0;
  plVar11 = plVar20;
  if (SBORROW8(0,*plVar20)) {
    plVar11 = plVar12;
  }
  plVar11 = plVar11 + 3;
  if (SBORROW8(0,*plVar20)) {
    plVar11 = plVar12;
  }
  uVar26 = *param_6;
  plVar14 = plVar17;
  if ((int)plVar20[8] == 2) {
    plVar14 = plVar12;
  }
  plStack_90 = plVar20;
  iVar22 = pdb_1428b3fc0(&uStack_2f0,auStack_740,uStack_120,*param_4,uVar26,plVar14,plVar11);
  uVar24 = (undefined4)((ulonglong)uVar26 >> 0x20);
  if (uStack_2f0 == 4) {
    lVar5 = *plStack_90;
    plVar11 = plStack_90;
  }
  else {
    uStack_108 = uStack_2f0;
    uStack_104 = uStack_2ec;
    iStack_100 = iStack_2e8;
    iStack_fc = iStack_2e4;
    uStack_3e8 = &uStack_108;
    pcStack_3e0 = pdb_1421272f0;
    pdb_140f60760(&uStack_1e8,&UNK_14345fd8f,&uStack_3e8);
    uStack_278 = (undefined4)uStack_1e8;
    uStack_274 = uStack_1e8._4_4_;
    iStack_270 = iStack_1e0;
    iStack_26c = iStack_1dc;
    lStack_268 = uStack_1d8;
    uStack_3e8 = (uint *)CONCAT44(uStack_2e0,(undefined4)uStack_3e8);
    uStack_3e8 = (uint *)CONCAT71(uStack_3e8._1_7_,5);
    uStack_2d8 = uStack_2d8 & 0xffffffffffffff00;
    uStack_81 = 1;
    pdb_140c9dcb0(&uStack_1e8,&uStack_3e8,&uStack_2d8);
    plVar11 = plStack_90;
    uStack_81 = 1;
    pdb_140c9dc40(&uStack_3e8,&uStack_1e8);
    uStack_85 = 1;
    pdb_140c9dee0(&uStack_2d8);
    uStack_85 = 0;
    pdb_140c9dd20(&uStack_1e8,&uStack_3e8,&uStack_2d8);
    uStack_83 = 1;
    uVar23 = pdb_140a6ad50(uVar18);
    plVar12 = (longlong *)0x0;
    if ((int)*plVar17 != 2) {
      plVar12 = plVar17;
    }
    uStack_83 = 1;
    pdb_1428b0a90(&uStack_2d8,uVar1,uVar2,uVar23,CONCAT44(uVar24,uVar25),1,plVar12);
    uStack_83 = 0;
    pdb_1428b3120(&uStack_3e8,&uStack_1e8,&uStack_2d8);
    uStack_81 = 0;
    puVar15 = (undefined8 *)&uStack_278;
    uStack_2d8 = pdb_1428b3ad0(uVar4);
    puStack_2d0 = puVar15;
    cVar9 = pdb_1408ffaf0(&uStack_2d8);
    uVar13 = uStack_104;
    uVar8 = uStack_108;
    if (cVar9 != '\0') {
      param_4 = (undefined8 *)CONCAT44(iStack_fc,iStack_100);
      cVar9 = pdb_1408ffa90(&uStack_2d8);
      if (cVar9 == '\0') {
        bVar16 = 0;
      }
      else {
        bVar16 = *(byte *)((longlong)plVar11 + 0x8a) ^ 1;
      }
      uStack_1e8 = CONCAT44(uStack_104,uStack_108);
      iStack_1e0 = iStack_100;
      iStack_1dc = iStack_fc;
      iVar22 = pdb_1428b2220(&uStack_1e8,auStack_740,uStack_118,&uStack_488,uStack_110,uStack_1f0,
                             param_12,param_13);
      uVar18 = (ulonglong)uVar13;
      lVar5 = *plVar11;
      lVar6 = uStack_1e8;
      goto joined_r0x000142126051;
    }
    lVar5 = *plVar11;
    iVar22 = extraout_XMM0_Da;
  }
  uVar8 = 4;
  bVar16 = 0;
  lVar6 = uStack_1e8;
joined_r0x000142126051:
  if (!SBORROW8(0,lVar5)) {
    uVar13 = *(uint *)(plVar11 + 6);
    if ((uVar8 == 4) || (uVar13 == 4)) {
      if (uVar13 == 4 && uVar8 == 4) {
        *puStack_b0 = uStack_98;
        *puStack_b8 = 0;
        return;
      }
    }
    else if (uVar13 == uVar8) {
      uStack_1e8 = lVar6;
                    /* WARNING: Could not recover jumptable at 0x000142126082. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14345fe44 + *(int *)(&UNK_14345fe44 + (ulonglong)uVar8 * 4)))
                (plVar11[7],&UNK_14345fe44 + *(int *)(&UNK_14345fe44 + (ulonglong)uVar8 * 4));
      return;
    }
    *puStack_a8 = uStack_94;
    uStack_1e8 = *plVar11;
    *plVar11 = -0x8000000000000000;
    if (!SBORROW8(0,uStack_1e8)) {
      iStack_1e0 = (int)plVar11[1];
      iStack_1dc = *(int *)((longlong)plVar11 + 0xc);
      uStack_1d8 = plVar11[2];
      uStack_1d0 = plVar11[3];
      iStack_1c8 = (int)plVar11[4];
      iStack_1c4 = *(int *)((longlong)plVar11 + 0x24);
      iStack_1c0 = (int)plVar11[5];
      iStack_1bc = *(int *)((longlong)plVar11 + 0x2c);
      iStack_1b8 = (int)plVar11[6];
      iStack_1b4 = *(int *)((longlong)plVar11 + 0x34);
      uStack_1b0 = (undefined4)plVar11[7];
      uStack_1ac = (undefined4)((ulonglong)plVar11[7] >> 0x20);
      pdb_142121690(auStack_740,&uStack_1e8);
      if (uStack_1e8 != 0) {
        pub_1406abac0((byte *)CONCAT44(iStack_1dc,iStack_1e0),uStack_1e8 << 5,8);
      }
      iVar22 = pdb_14109d800(&uStack_1d0);
      lVar6 = uStack_1e8;
    }
  }
  uStack_1e8 = lVar6;
  iStack_ec = (int)uVar18;
  *puStack_b0 = uStack_98;
  *puStack_b8 = 0;
  if (uVar8 != 4) {
    uStack_f0 = uVar8;
    puStack_e8 = param_4;
    if ((int)*plVar17 == 0) {
      iStack_1e0 = (int)plVar11[9];
      uVar13 = *(uint *)(plVar11 + 10);
      iVar22 = (int)plVar11[0xc];
      uStack_c8 = CONCAT44(uStack_c8._4_4_,(int)plVar11[0xd]);
      in_R10B = *(char *)((longlong)plVar11 + 0x74);
      if (in_R10B != '\x02') {
        uStack_130 = (undefined7)*(undefined8 *)((longlong)plVar11 + 0x75);
        uStack_129._1_3_ = (undefined3)((uint)*(int *)((longlong)plVar11 + 0x7c) >> 8);
        uStack_129._0_1_ =
             (undefined1)((ulonglong)*(undefined8 *)((longlong)plVar11 + 0x75) >> 0x38);
      }
      puStack_d8 = (undefined1 *)
                   CONCAT71(puStack_d8._1_7_,*(undefined1 *)((longlong)plVar11 + 0x84));
      iStack_a0 = (int)plVar11[0x10];
      piStack_d0 = (int *)CONCAT71(piStack_d0._1_7_,*(undefined1 *)((longlong)plVar11 + 0x85));
      iVar19 = *(int *)((longlong)plVar11 + 0x44);
      plVar17 = (longlong *)(ulonglong)*(uint *)((longlong)plVar11 + 0x4c);
      in_R11D = *(int *)((longlong)plVar11 + 100);
      piStack_c0 = (int *)CONCAT71(piStack_c0._1_7_,*(undefined1 *)((longlong)plVar11 + 0x87));
      iStack_1bc = *(int *)((longlong)plVar11 + 0x6c);
      uVar18 = 0;
      uStack_1d0 = (ulonglong)*(uint *)(plVar11 + 0xb);
      if (*(uint *)((longlong)plVar11 + 0x54) == 0) {
        uStack_1d0 = uVar18;
      }
      plVar20 = (longlong *)(ulonglong)*(uint *)(plVar11 + 0xe);
      uStack_1d0 = (ulonglong)*(uint *)((longlong)plVar11 + 0x5c) << 0x20 | uStack_1d0;
      uVar10 = (uint)*(byte *)((longlong)plVar11 + 0x86);
      uStack_1d8 = (ulonglong)*(uint *)((longlong)plVar11 + 0x54) << 0x20;
      iStack_9c = iStack_1e0;
    }
    else {
      if ((int)*plVar17 == 2) {
        if (bVar16 == 0) {
          return;
        }
        pdb_142121450(&iStack_338,auStack_740,&uStack_f0);
        if (iStack_338 == 2) {
          return;
        }
        uStack_408 = lStack_2f8;
        iStack_418 = iStack_308;
        iStack_414 = iStack_304;
        iStack_410 = iStack_300;
        iStack_40c = iStack_2fc;
        iStack_428 = iStack_318;
        iStack_424 = iStack_314;
        iStack_420 = iStack_310;
        iStack_41c = iStack_30c;
        iStack_438 = iStack_328;
        iStack_434 = iStack_324;
        iStack_430 = iStack_320;
        iStack_42c = iStack_31c;
        iStack_448 = iStack_338;
        iStack_444 = iStack_334;
        iStack_440 = iStack_330;
        iStack_43c = iStack_32c;
        *piStack_c0 = iStack_9c;
        pdb_1428ae1d0(&iStack_448,uStack_c8);
        if (iStack_448 != 1) {
          *puStack_1f8 = uStack_dc;
          *puStack_200 = uStack_408._4_1_;
        }
        *puStack_a8 = uStack_94;
        plVar20[0x10] = lStack_2f8;
        *(int *)(plVar20 + 0xe) = iStack_308;
        *(int *)((longlong)plVar20 + 0x74) = iStack_304;
        *(int *)(plVar20 + 0xf) = iStack_300;
        *(int *)((longlong)plVar20 + 0x7c) = iStack_2fc;
        *(int *)(plVar20 + 0xc) = iStack_318;
        *(int *)((longlong)plVar20 + 100) = iStack_314;
        *(int *)(plVar20 + 0xd) = iStack_310;
        *(int *)((longlong)plVar20 + 0x6c) = iStack_30c;
        *(int *)(plVar20 + 10) = iStack_328;
        *(int *)((longlong)plVar20 + 0x54) = iStack_324;
        *(int *)(plVar20 + 0xb) = iStack_320;
        *(int *)((longlong)plVar20 + 0x5c) = iStack_31c;
        *(int *)plVar17 = iStack_338;
        *(int *)((longlong)plVar20 + 0x44) = iStack_334;
        *(int *)(plVar20 + 9) = iStack_330;
        *(int *)((longlong)plVar20 + 0x4c) = iStack_32c;
        *piStack_d0 = iStack_a0;
        *puStack_d8 = 1;
        *(undefined4 *)param_14[2] = *(undefined4 *)((longlong)param_14 + 0x1c);
        lVar5 = *param_14;
        lVar6 = *(longlong *)(lVar5 + 0x30);
        uVar26 = *(undefined8 *)(lVar5 + 0x40);
        if (lVar6 == *(longlong *)(lVar5 + 0x20)) {
          pdb_142d7e6e0(lVar5 + 0x20);
        }
        lVar7 = *(longlong *)(lVar5 + 0x28);
        *(undefined4 *)(lVar7 + lVar6 * 0x20) = 0xf;
        *(undefined8 *)(lVar7 + 0x18 + lVar6 * 0x20) = uVar26;
        *(longlong *)(lVar5 + 0x30) = lVar6 + 1;
        *(longlong *)(lVar5 + 0x40) = *(longlong *)(lVar5 + 0x40) + 1;
        return;
      }
      uVar13 = *(uint *)(plVar11 + 10);
      uStack_1d0 = plVar11[0xb];
      iVar19 = *(int *)((longlong)plVar11 + 0x44);
      iStack_1e0 = (int)plVar11[9];
      uVar18 = 1;
      uStack_1d8 = 0;
      plVar20 = param_14;
      uVar10 = uVar8;
      iStack_1bc = iStack_ec;
    }
    uStack_1d8 = uVar13 | uStack_1d8;
    uStack_1e8._0_4_ = (undefined4)uVar18;
    uStack_1e8 = CONCAT44(iVar19,(undefined4)uStack_1e8);
    iStack_1dc = (int)plVar17;
    iStack_1c0 = (undefined4)uStack_c8;
    iStack_1b8 = (int)plVar20;
    iStack_1b4 = CONCAT31((int3)uStack_130,in_R10B);
    uStack_1b0 = (undefined4)((uint7)uStack_130 >> 0x18);
    uStack_1ac = uStack_129;
    iStack_1a8 = iStack_a0;
    uStack_1a4 = puStack_d8._0_1_;
    uStack_1a3 = piStack_d0._0_1_;
    uStack_1a2 = (undefined1)uVar10;
    uStack_1a1 = piStack_c0._0_1_;
    iStack_1c8 = iVar22;
    iStack_1c4 = in_R11D;
    if (SBORROW8(0,*plVar11)) {
      uStack_2d8 = CONCAT44(iStack_ec,uVar8);
      puStack_2d0 = param_4;
      pdb_142121cf0(&uStack_3e8,auStack_740,&uStack_2d8,&uStack_1e8);
      if (lStack_3d8 == 0) {
        if (uStack_3e8 == (uint *)0x0) {
          return;
        }
        pub_1406abac0((byte *)pcStack_3e0,(longlong)uStack_3e8 << 5,8);
        return;
      }
      uStack_86 = 1;
      pdb_1428b4650(&uStack_400,&uStack_f0,auStack_740,uStack_120,uStack_210,uStack_208);
      plVar20 = plStack_90;
      lStack_248 = lStack_3d8;
      uStack_258 = (longlong)uStack_3e8;
      uStack_250 = pcStack_3e0;
      uStack_228 = CONCAT44(iStack_ec,uStack_f0);
      uStack_220 = puStack_e8;
      uStack_240 = uStack_400;
      uStack_23c = uStack_3fc;
      uStack_238 = uStack_3f8;
      uStack_234 = uStack_3f4;
      lStack_230 = lStack_3f0;
      *puStack_a8 = uStack_94;
      lVar5 = *plVar11;
      if (!SBORROW8(0,lVar5)) {
        if (lVar5 != 0) {
          pub_1406abac0((byte *)plStack_90[1],lVar5 << 5,8);
        }
        pdb_14109d800(plVar20 + 3);
      }
      *(int *)(plStack_90 + 6) = (int)uStack_228;
      *(int *)((longlong)plStack_90 + 0x34) = uStack_228._4_4_;
      *(int *)(plStack_90 + 7) = (int)uStack_220;
      *(int *)((longlong)plStack_90 + 0x3c) = uStack_220._4_4_;
      plStack_90[4] = CONCAT44(uStack_234,uStack_238);
      plStack_90[5] = lStack_230;
      plStack_90[2] = lStack_248;
      plStack_90[3] = CONCAT44(uStack_23c,uStack_240);
      *(int *)plStack_90 = (int)uStack_258;
      *(int *)((longlong)plStack_90 + 4) = uStack_258._4_4_;
      *(int *)(plStack_90 + 1) = (int)uStack_250;
      *(int *)((longlong)plStack_90 + 0xc) = uStack_250._4_4_;
      if (SBORROW8(0,*plStack_90)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14345fdc8);
      }
    }
    if (bVar16 != 0) {
      uVar24 = *(undefined4 *)((longlong)param_10 + 0x1c);
      puVar3 = (undefined4 *)param_10[2];
      *puVar3 = uVar24;
      uVar26 = *param_10;
      cVar9 = pdb_140ae5010(uVar26,uStack_218);
      plVar20 = plStack_90;
      if (cVar9 != '\0') {
        *puVar3 = uVar24;
        pdb_1421233e0(plStack_90,uVar26);
        pdb_142121690(auStack_740,plVar20,0);
        *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
        lVar5 = *param_11;
        lVar6 = *(longlong *)(lVar5 + 0x30);
        uVar26 = *(undefined8 *)(lVar5 + 0x40);
        if (lVar6 == *(longlong *)(lVar5 + 0x20)) {
          pdb_142d7e8a0(lVar5 + 0x20);
        }
        *(undefined8 *)(*(longlong *)(lVar5 + 0x28) + lVar6 * 8) = uVar26;
        *(longlong *)(lVar5 + 0x30) = lVar6 + 1;
        *(longlong *)(lVar5 + 0x40) = *(longlong *)(lVar5 + 0x40) + 1;
        *(undefined4 *)param_14[2] = *(undefined4 *)((longlong)param_14 + 0x1c);
        lVar5 = *param_14;
        lVar6 = *(longlong *)(lVar5 + 0x30);
        uVar26 = *(undefined8 *)(lVar5 + 0x40);
        if (lVar6 == *(longlong *)(lVar5 + 0x20)) {
          pdb_142d7e6e0(lVar5 + 0x20);
        }
        lVar7 = *(longlong *)(lVar5 + 0x28);
        *(undefined4 *)(lVar7 + lVar6 * 0x20) = 0x10;
        *(undefined8 *)(lVar7 + 0x18 + lVar6 * 0x20) = uVar26;
        *(longlong *)(lVar5 + 0x30) = lVar6 + 1;
        *(longlong *)(lVar5 + 0x40) = *(longlong *)(lVar5 + 0x40) + 1;
        *puStack_a8 = uStack_94;
        if (!SBORROW8(0,*plStack_90)) {
          pdb_14109f060(plStack_90);
        }
        *plStack_90 = -0x8000000000000000;
        return;
      }
    }
    pdb_142121690(auStack_740,plStack_90,0);
    *puStack_b0 = uStack_98;
    *puStack_b8 = 1;
  }
  return;
}

