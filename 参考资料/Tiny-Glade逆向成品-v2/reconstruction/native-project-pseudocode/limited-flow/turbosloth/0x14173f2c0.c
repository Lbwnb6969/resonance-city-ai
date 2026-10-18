// VA 0x14173f2c0, PDB extent 727 bytes
// turbosloth::asset::impl$24::run::async_block$0<clutter_pack_pipe::ClutterObjectList,enum2$<core::convert::Infallible>,turbosloth::asset::StoreAssetRecipe<clutter_pack_pipe::ClutterObjectList> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x00014173febc) overlaps instruction at (ram,0x00014173feb7)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::asset::impl$24::run::async_block$0<clutter_pack_pipe::ClutterObjectList,enum2$<core::convert::Infallible>,turbosloth::asset::StoreAssetRecipe<clutter_pack_pipe::ClutterObjectList>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 727 */

undefined8 * pdb_14173f2c0(undefined8 *param_1,undefined8 *param_2,longlong param_3,char param_4)

{
  char *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  byte *pbVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong *puVar12;
  undefined1 uVar13;
  char cVar14;
  uint uVar15;
  char cVar19;
  ulonglong uVar16;
  char *pcVar17;
  byte *pbVar18;
  undefined *puVar20;
  int iVar21;
  undefined8 uVar22;
  longlong unaff_RBX;
  undefined1 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulonglong unaff_RDI;
  longlong lVar26;
  char *unaff_R15;
  bool bVar27;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM0_Qb;
  undefined1 auVar28 [16];
  undefined8 in_XMM1_Qa;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined8 in_XMM2_Qa;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined8 in_XMM3_Qa;
  undefined4 uVar29;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  longlong in_stack_00000080;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined4 uStack0000000000000158;
  undefined4 uStack000000000000015c;
  undefined4 uStack0000000000000160;
  undefined4 uStack0000000000000164;
  longlong in_stack_00000178;
  longlong in_stack_00000180;
  undefined1 auStack_360 [48];
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 auStack_2e0 [2];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 *puStack_198;
  char acStack_188 [6];
  undefined1 auStack_182 [2];
  undefined8 uStack_180;
  undefined8 uStack_158;
  undefined1 auStack_150 [24];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  int iStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined7 uStack_b0;
  int iStack_a9;
  undefined5 uStack_a5;
  longlong lStack_a0;
  longlong lStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  uVar29 = (undefined4)((ulonglong)in_XMM3_Qa >> 0x20);
  puVar24 = &uStack_158;
  puVar25 = &uStack_d8;
  uStack_28 = 0xfffffffffffffffe;
  puVar20 = &UNK_14332bda8;
  uVar16 = (ulonglong)*(int *)(&UNK_14332bda8 + (ulonglong)*(byte *)(param_2 + 0x16) * 4);
  pcVar17 = &UNK_14332bda8 + uVar16;
  puStack_30 = param_2;
  iVar21 = (int)param_2;
  cVar14 = (char)pcVar17;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_2 + 0x16)) {
  case 0:
    uStack_138 = *param_2;
    uStack_130 = param_2[1];
    uStack_128 = param_2[2];
    uStack_120 = param_2[3];
    iStack_118 = *(int *)(param_2 + 4);
    uStack_114 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_110 = *(undefined4 *)(param_2 + 5);
    uStack_10c = *(undefined4 *)((longlong)param_2 + 0x2c);
    uStack_108 = *(undefined4 *)(param_2 + 6);
    uStack_104 = *(undefined4 *)((longlong)param_2 + 0x34);
    uStack_100 = *(undefined4 *)(param_2 + 7);
    uStack_fc = *(undefined4 *)((longlong)param_2 + 0x3c);
    uStack_f8 = param_2[8];
    uStack_f0 = param_2[9];
    param_2[10] = uStack_138;
    param_2[0xb] = uStack_130;
    param_2[0xc] = uStack_128;
    param_2[0xd] = uStack_120;
    *(int *)(param_2 + 0xe) = iStack_118;
    *(undefined4 *)((longlong)param_2 + 0x74) = uStack_114;
    *(undefined4 *)(param_2 + 0xf) = uStack_110;
    *(undefined4 *)((longlong)param_2 + 0x7c) = uStack_10c;
    *(undefined4 *)(param_2 + 0x10) = uStack_108;
    *(undefined4 *)((longlong)param_2 + 0x84) = uStack_104;
    *(undefined4 *)(param_2 + 0x11) = uStack_100;
    *(undefined4 *)((longlong)param_2 + 0x8c) = uStack_fc;
    param_2[0x12] = uStack_f8;
    param_2[0x13] = uStack_f0;
    *(undefined1 *)(param_2 + 0x14) = 0;
    goto code_r0x00014173f360;
  case 1:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8570(&UNK_14332ba20);
  case 2:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8590(&UNK_14332ba20);
  case 3:
    puStack_38 = param_2 + 10;
    if (*(char *)(param_2 + 0x14) != '\0') {
      if (*(char *)(param_2 + 0x14) != '\x01') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8590(&UNK_14332bb50);
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8570(&UNK_14332bb50);
    }
code_r0x00014173f360:
    puStack_40 = param_2 + 10;
    uStack_e8 = *puStack_40;
    uStack_e0 = param_2[0xb];
    lVar2 = param_2[0xc];
    uStack_b8 = param_2[0xf];
    lStack_c8 = param_2[0xd];
    uStack_c0 = param_2[0xe];
    uStack_88 = param_2[0x10];
    uStack_80 = param_2[0x11];
    uStack_78 = param_2[0x12];
    uStack_70 = param_2[0x13];
    pdb_14098a860(&uStack_88);
    puVar25 = puStack_30;
    uStack_d8 = uStack_e8;
    uStack_d0 = uStack_e0;
    iStack_a9._1_3_ = (undefined3)lStack_c8;
    uStack_a5 = (undefined5)((ulonglong)lStack_c8 >> 0x18);
    lStack_a0 = uStack_c0;
    lStack_98 = uStack_b8;
    *(undefined1 *)(puStack_30 + 0x14) = 1;
    if (SBORROW8(0,lVar2)) {
      *param_1 = 2;
      uVar13 = 3;
    }
    else {
      uStack_78 = uStack_e8;
      uStack_70 = uStack_e0;
      uStack_60 = lStack_c8;
      uStack_58 = uStack_c0;
      uStack_50 = uStack_b8;
      uStack_88 = 1;
      uStack_80 = 1;
      lStack_68 = lVar2;
      pdb_14007ee60();
      pbVar18 = pub_1406abab0(0x40,0x10);
      if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(0x10,0x40);
      }
      *(undefined8 *)(pbVar18 + 0x30) = uStack_58;
      *(undefined8 *)(pbVar18 + 0x38) = uStack_50;
      *(longlong *)(pbVar18 + 0x20) = lStack_68;
      *(undefined8 *)(pbVar18 + 0x28) = uStack_60;
      *(undefined8 *)(pbVar18 + 0x10) = uStack_78;
      *(undefined8 *)(pbVar18 + 0x18) = uStack_70;
      *(undefined8 *)pbVar18 = uStack_88;
      *(undefined8 *)(pbVar18 + 8) = uStack_80;
      *param_1 = 0;
      param_1[1] = pbVar18;
      param_1[2] = &UNK_14332ba98;
      uVar13 = 1;
    }
    *(undefined1 *)(puVar25 + 0x16) = uVar13;
    return param_1;
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
    *(int *)(uVar16 + 0xd07aeb93) = *(int *)(uVar16 + 0xd07aeb93) + iVar21;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8590();
  case 6:
    (&UNK_14332bd35)[uVar16] = (&UNK_14332bd35)[uVar16] ^ 0xa8;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8570();
  case 7:
    *(uint *)(param_2 + 0xc) =
         *(int *)(param_2 + 0xc) + iVar21 + (uint)(0xfffffffebccd4257 < uVar16);
    *(int *)(param_2 + 0xe) = (int)in_XMM3_Qa;
    *(undefined4 *)((longlong)param_2 + 0x74) = uVar29;
    *(undefined4 *)(param_2 + 0xf) = in_XMM3_Dc;
    *(undefined4 *)((longlong)param_2 + 0x7c) = in_XMM3_Dd;
    *(undefined1 *)(param_2 + 0x10) = 0;
    lVar2 = param_2[8];
    uVar22 = param_2[9];
    uStack_f8 = param_2[10];
    uStack_f0 = param_2[0xb];
    uStack_d8 = param_2[0xc];
    uStack_d0 = param_2[0xd];
    lStack_c8 = param_2[0xe];
    uStack_c0 = param_2[0xf];
    pdb_14098a860(puVar25);
    uStack_e8 = uStack_f8;
    uStack_e0 = uStack_f0;
    *(undefined1 *)(lStack_a0 + 0x80) = 1;
    if (SBORROW8(0,lVar2)) {
      *param_1 = 2;
      uVar13 = 3;
    }
    else {
      uStack_d8 = uStack_f8;
      uStack_d0 = uStack_f0;
      pdb_14007ee60();
      pbVar18 = pub_1406abab0(0x30,8);
      if (pbVar18 == (byte *)0x0) {
        uStack_b0 = (undefined7)uVar22;
        iStack_a9._0_1_ = (undefined1)((ulonglong)uVar22 >> 0x38);
        lStack_98 = lVar2;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      pbVar18[0] = 1;
      pbVar18[1] = 0;
      pbVar18[2] = 0;
      pbVar18[3] = 0;
      pbVar18[4] = 0;
      pbVar18[5] = 0;
      pbVar18[6] = 0;
      pbVar18[7] = 0;
      pbVar18[8] = 1;
      pbVar18[9] = 0;
      pbVar18[10] = 0;
      pbVar18[0xb] = 0;
      pbVar18[0xc] = 0;
      pbVar18[0xd] = 0;
      pbVar18[0xe] = 0;
      pbVar18[0xf] = 0;
      *(longlong *)(pbVar18 + 0x10) = lVar2;
      *(undefined8 *)(pbVar18 + 0x18) = uVar22;
      *(undefined8 *)(pbVar18 + 0x20) = uStack_d8;
      *(undefined8 *)(pbVar18 + 0x28) = uStack_d0;
      *param_1 = 0;
      param_1[1] = pbVar18;
      param_1[2] = &UNK_14332ba78;
      uVar13 = 1;
    }
    *(undefined1 *)(lStack_a0 + 0x88) = uVar13;
    return param_1;
  case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 9:
    *(char *)(param_3 + -0x73) = *(char *)(param_3 + -0x73) - param_4;
    pcVar17 = (char *)(ulonglong)((uint)pcVar17 | 0x1bec181);
  case 10:
    *(int *)(pcVar17 + -0x77cb615) = *(int *)(pcVar17 + -0x77cb615) + iVar21;
    uStack_b0 = (undefined7)lStack_a0;
    iStack_a9._1_3_ = (undefined3)((uint)(iStack_a9 + (int)param_1) >> 8);
    iStack_a9._0_1_ = (undefined1)((ulonglong)lStack_a0 >> 0x38);
                    /* WARNING: Subroutine does not return */
    pdb_142dc8570(&UNK_14332bb50);
  case 0xb:
    param_2[0xd] = uStack_f8;
    param_2[9] = CONCAT44(uStack_114,iStack_118);
    param_2[10] = CONCAT44(uStack_10c,uStack_110);
    *(undefined1 *)(param_2 + 0xe) = 0;
    lVar2 = param_2[7];
    uStack_e8 = param_2[8];
    uStack_e0 = param_2[9];
    uStack_d8 = param_2[10];
    uStack_d0 = param_2[0xb];
    lStack_c8 = param_2[0xc];
    uStack_c0 = param_2[0xd];
    uStack_158 = 0x14173f90f;
    pdb_14098a860(puVar25);
    uStack_138 = uStack_e8;
    uStack_130 = uStack_e0;
    *(undefined1 *)(CONCAT53(uStack_a5,iStack_a9._1_3_) + 0x70) = 1;
    if (SBORROW8(0,lVar2)) {
      *param_1 = 2;
      uVar13 = 3;
    }
    else {
      uStack_c0 = uStack_e8;
      uStack_b8 = uStack_e0;
      uStack_d8 = 1;
      uStack_d0 = 1;
      uStack_158 = 0x14173f954;
      lStack_c8 = lVar2;
      pdb_14007ee60();
      uStack_158 = 0x14173f963;
      pbVar18 = pub_1406abab0(0x28,8);
      if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        uStack_158 = 0x14173f9b8;
        pdb_142dc7e11(8,0x28);
      }
      *(undefined8 *)(pbVar18 + 0x20) = uStack_b8;
      *(longlong *)(pbVar18 + 0x10) = lStack_c8;
      *(undefined8 *)(pbVar18 + 0x18) = uStack_c0;
      *(undefined8 *)pbVar18 = uStack_d8;
      *(undefined8 *)(pbVar18 + 8) = uStack_d0;
      *param_1 = 0;
      param_1[1] = pbVar18;
      param_1[2] = &UNK_14332ba58;
      uVar13 = 1;
    }
    *(undefined1 *)(CONCAT53(uStack_a5,iStack_a9._1_3_) + 0x78) = uVar13;
    return param_1;
  case 0xc:
    (&UNK_14332bd6f)[uVar16] = (&UNK_14332bd6f)[uVar16] + -0x58;
    *pcVar17 = *pcVar17 + cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd:
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  case 0xe:
    *(char *)(param_2 + 0x1b) = *(char *)(param_2 + 0x1b) + (char)((ulonglong)unaff_RBX >> 8);
code_r0x00014173fca0:
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(puVar20,param_2);
  case 0xf:
    UNK_14332bda8 = UNK_14332bda8 - cVar14;
    *pcVar17 = *pcVar17 + cVar14;
    in_stack_00000180 = unaff_RBX + 0xe8;
    pub_142e32760(in_stack_00000180,(int)in_XMM1_Qa,0xe8);
    *(undefined1 *)(unaff_RBX + 0x1d0) = 0;
    lVar2 = *(longlong *)(unaff_RBX + 0xe8);
    pub_142e32760(&stack0x00000070,unaff_RBX + 0xf0,0xc0);
    in_stack_00000148 = *(undefined8 *)(unaff_RBX + 0x1b0);
    in_stack_00000150 = *(undefined8 *)(unaff_RBX + 0x1b8);
    uStack0000000000000158 = *(undefined4 *)(unaff_RBX + 0x1c0);
    uStack000000000000015c = *(undefined4 *)(unaff_RBX + 0x1c4);
    uStack0000000000000160 = *(undefined4 *)(unaff_RBX + 0x1c8);
    uStack0000000000000164 = *(undefined4 *)(unaff_RBX + 0x1cc);
    pdb_14098a860(&stack0x00000148);
    pub_142e32760(&uStack_138,&stack0x00000070,0xc0);
    lVar26 = in_stack_00000178;
    *(undefined1 *)(in_stack_00000178 + 0x1d0) = 1;
    if (SBORROW8(0,lVar2)) {
      *param_1 = 2;
      uVar13 = 3;
    }
    else {
      pub_142e32760(&stack0x00000088,&uStack_138,0xc0);
      in_stack_00000070 = 1;
      in_stack_00000078 = 1;
      in_stack_00000080 = lVar2;
      pdb_14007ee60();
      pbVar18 = pub_1406abab0(0xd8,8);
      if (pbVar18 == (byte *)0x0) {
        puVar20 = (undefined *)0x8;
        param_2 = (undefined8 *)0xd8;
        goto code_r0x00014173fca0;
      }
      pub_142e32760(pbVar18,&stack0x00000070,0xd8);
      *param_1 = 0;
      param_1[1] = pbVar18;
      param_1[2] = &UNK_14332bab8;
      uVar13 = 1;
    }
    *(undefined1 *)(lVar26 + 0x1d8) = uVar13;
    return param_1;
  case 0x10:
    puVar24 = (undefined8 *)auStack_360;
    puVar23 = auStack_360;
    puVar25 = auStack_2e0;
    uStack_180 = 0xfffffffffffffffe;
    param_1 = (undefined8 *)&UNK_14332bda8;
    puStack_198 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x11)) {
    case 0:
      uStack_260 = *param_2;
      uStack_258 = param_2[1];
      uStack_250 = param_2[2];
      uStack_248 = param_2[3];
      uStack_2d0 = param_2[4];
      uStack_2c8 = param_2[5];
      uStack_2c0 = *(undefined4 *)(param_2 + 6);
      uStack_2bc = *(undefined4 *)((longlong)param_2 + 0x34);
      uStack_2b8 = *(undefined4 *)(param_2 + 7);
      uStack_2b4 = *(undefined4 *)((longlong)param_2 + 0x3c);
      pdb_141748860(&uStack_220,&uStack_260,&uStack_2d0);
      uStack_330 = uStack_220;
      uStack_328 = uStack_218;
      uStack_320 = uStack_210;
      uStack_31c = uStack_20c;
      uStack_318 = uStack_208;
      uStack_314 = uStack_204;
      in_XMM1_Dc = uStack_208;
      in_XMM1_Dd = uStack_204;
      in_XMM2_Dc = uStack_1f8;
      in_XMM2_Dd = uStack_1f4;
      uVar29 = uStack_1ec;
      in_XMM3_Dc = uStack_1e8;
      in_XMM3_Dd = uStack_1e4;
      in_XMM0_Qa = uStack_220;
      in_XMM0_Qb = uStack_218;
      goto code_r0x00014173fe7c;
    case 1:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8570(&UNK_14332ba20);
    case 2:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8590(&UNK_14332ba20);
    }
    break;
  case 0x11:
    goto code_r0x000141740439;
  case 0x12:
    *pcVar17 = *pcVar17 + cVar14;
    bVar27 = ((uint)pcVar17 + (int)puVar25 & 0x75) == 0;
    puVar24 = (undefined8 *)&stack0xfffffffffffffea0;
    goto code_r0x00014174043b;
  case 0x13:
    puVar23 = auStack_150;
    LOCK();
    *pcVar17 = *pcVar17 + cVar14;
    UNLOCK();
    pcVar1 = (char *)((longlong)param_1 + 0xf);
    cVar14 = *pcVar1;
    cVar19 = (char)((ulonglong)pcVar17 >> 8);
    *pcVar1 = *pcVar1 + cVar19;
    if (*pcVar1 != '\0' && SCARRY1(cVar14,cVar19) == *pcVar1 < '\0') {
      (&UNK_14332bd33)[uVar16] = (&UNK_14332bd33)[uVar16] + -0x58;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iStack_118 = iStack_118 + -0x4332bda8;
    uStack_210 = (int)in_XMM1_Qa;
    uStack_20c = (int)((ulonglong)in_XMM1_Qa >> 0x20);
    uStack_200 = (int)in_XMM2_Qa;
    uStack_1fc = (int)((ulonglong)in_XMM2_Qa >> 0x20);
    uStack_1f0 = (int)in_XMM3_Qa;
code_r0x00014173fe7c:
    *(undefined4 *)(puVar25 + -6) = uStack_200;
    *(undefined4 *)((longlong)puVar25 + -0x2c) = uStack_1fc;
    *(undefined4 *)(puVar25 + -5) = in_XMM2_Dc;
    *(undefined4 *)((longlong)puVar25 + -0x24) = in_XMM2_Dd;
    *(undefined4 *)(puVar25 + -4) = uStack_1f0;
    *(undefined4 *)((longlong)puVar25 + -0x1c) = uVar29;
    *(undefined4 *)(puVar25 + -3) = in_XMM3_Dc;
    *(undefined4 *)((longlong)puVar25 + -0x14) = in_XMM3_Dd;
    puVar25[-2] = puVar25[0x20];
    param_2 = (undefined8 *)puVar25[0x29];
    param_2[0x10] = puVar25[0x20];
    *(undefined4 *)(param_2 + 0xe) = uStack_1f0;
    *(undefined4 *)((longlong)param_2 + 0x74) = uVar29;
    *(undefined4 *)(param_2 + 0xf) = in_XMM3_Dc;
    *(undefined4 *)((longlong)param_2 + 0x7c) = in_XMM3_Dd;
    *(undefined4 *)(param_2 + 0xc) = uStack_200;
    *(undefined4 *)((longlong)param_2 + 100) = uStack_1fc;
    *(undefined4 *)(param_2 + 0xd) = in_XMM2_Dc;
    *(undefined4 *)((longlong)param_2 + 0x6c) = in_XMM2_Dd;
    *(undefined4 *)(param_2 + 10) = uStack_210;
    *(undefined4 *)((longlong)param_2 + 0x54) = uStack_20c;
    *(undefined4 *)(param_2 + 0xb) = in_XMM1_Dc;
    *(undefined4 *)((longlong)param_2 + 0x5c) = in_XMM1_Dd;
    param_2[8] = in_XMM0_Qa;
    param_2[9] = in_XMM0_Qb;
    puVar24 = (undefined8 *)puVar23;
  }
  if (*(char *)(param_2 + 0x10) != '\0') {
    if (*(char *)(param_2 + 0x10) != '\x01') {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)puVar24 + -8) = 0x14174046a;
      pdb_142dc8590(&UNK_14332bb00);
    }
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)puVar24 + -8) = 0x14174045b;
    pdb_142dc8570(&UNK_14332bb00);
  }
  puVar25[0x26] = param_2[8];
  uVar22 = param_2[9];
  unaff_RDI = param_2[10];
  uVar3 = param_2[0xc];
  uVar7 = param_2[0xd];
  uVar29 = *(undefined4 *)((longlong)param_2 + 0x74);
  uVar8 = *(undefined4 *)(param_2 + 0xf);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(puVar25 + 0x12) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)puVar25 + 0x94) = uVar29;
  *(undefined4 *)(puVar25 + 0x13) = uVar8;
  *(undefined4 *)((longlong)puVar25 + 0x9c) = uVar9;
  puVar25[0x10] = uVar3;
  puVar25[0x11] = uVar7;
  lVar2 = puVar25[0x10];
  puVar25[0x27] = uVar22;
  *(undefined8 *)((longlong)puVar24 + -8) = 0x14173ff09;
  pdb_141c2f360(puVar25 + 0x18,lVar2 + 0x10,uVar22,unaff_RDI);
  auVar28[0] = -(*(char *)(puVar25 + 0x18) == DAT_142f5c7c0);
  auVar28[1] = -(*(char *)((longlong)puVar25 + 0xc1) == UNK_142f5c7c1);
  auVar28[2] = -(*(char *)((longlong)puVar25 + 0xc2) == UNK_142f5c7c2);
  auVar28[3] = -(*(char *)((longlong)puVar25 + 0xc3) == UNK_142f5c7c3);
  auVar28[4] = -(*(char *)((longlong)puVar25 + 0xc4) == UNK_142f5c7c4);
  auVar28[5] = -(*(char *)((longlong)puVar25 + 0xc5) == UNK_142f5c7c5);
  auVar28[6] = -(*(char *)((longlong)puVar25 + 0xc6) == UNK_142f5c7c6);
  auVar28[7] = -(*(char *)((longlong)puVar25 + 199) == UNK_142f5c7c7);
  auVar28[8] = -(*(char *)(puVar25 + 0x19) == UNK_142f5c7c8);
  auVar28[9] = -(*(char *)((longlong)puVar25 + 0xc9) == UNK_142f5c7c9);
  auVar28[10] = -(*(char *)((longlong)puVar25 + 0xca) == UNK_142f5c7ca);
  auVar28[0xb] = -(*(char *)((longlong)puVar25 + 0xcb) == UNK_142f5c7cb);
  auVar28[0xc] = -(*(char *)((longlong)puVar25 + 0xcc) == UNK_142f5c7cc);
  auVar28[0xd] = -(*(char *)((longlong)puVar25 + 0xcd) == UNK_142f5c7cd);
  auVar28[0xe] = -(*(char *)((longlong)puVar25 + 0xce) == UNK_142f5c7ce);
  auVar28[0xf] = -(*(char *)((longlong)puVar25 + 0xcf) == UNK_142f5c7cf);
  uVar22 = puVar25[0x1a];
  if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf)
      == 0xffff) {
    *(undefined8 *)((longlong)puVar24 + -8) = 0x14173ff38;
    pdb_14098a860(puVar25 + 0x10);
    uVar16 = puVar25[0x26];
    if (uVar16 != 0) {
      pbVar18 = (byte *)puVar25[0x27];
      *(undefined8 *)((longlong)puVar24 + -8) = 0x14173ff57;
      pub_1406abac0(pbVar18,uVar16,1);
    }
    lVar26 = puVar25[0x29];
    *(undefined1 *)(lVar26 + 0x80) = 1;
code_r0x000141740265:
    puVar25[0x18] = uVar22;
    *(undefined8 *)((longlong)puVar24 + -8) = 0x141740271;
    pdb_14007ee60();
    *(undefined8 *)((longlong)puVar24 + -8) = 0x141740280;
    pbVar18 = pub_1406abab0(8,8);
    if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)puVar24 + -8) = 0x141740363;
      pdb_142dc7e11(8,8);
    }
    *(undefined8 *)pbVar18 = uVar22;
    uVar22 = 1;
    puVar20 = &UNK_1430712c0;
  }
  else {
    puVar25[0xf] = puVar25[0x25];
    puVar25[0xd] = puVar25[0x23];
    puVar25[0xe] = puVar25[0x24];
    *(undefined4 *)(puVar25 + 0xb) = *(undefined4 *)(puVar25 + 0x21);
    *(undefined4 *)((longlong)puVar25 + 0x5c) = *(undefined4 *)((longlong)puVar25 + 0x10c);
    *(undefined4 *)(puVar25 + 0xc) = *(undefined4 *)(puVar25 + 0x22);
    *(undefined4 *)((longlong)puVar25 + 100) = *(undefined4 *)((longlong)puVar25 + 0x114);
    *(undefined4 *)(puVar25 + 9) = *(undefined4 *)(puVar25 + 0x1f);
    *(undefined4 *)((longlong)puVar25 + 0x4c) = *(undefined4 *)((longlong)puVar25 + 0xfc);
    *(undefined4 *)(puVar25 + 10) = *(undefined4 *)(puVar25 + 0x20);
    *(undefined4 *)((longlong)puVar25 + 0x54) = *(undefined4 *)((longlong)puVar25 + 0x104);
    *(undefined4 *)(puVar25 + 7) = *(undefined4 *)(puVar25 + 0x1d);
    *(undefined4 *)((longlong)puVar25 + 0x3c) = *(undefined4 *)((longlong)puVar25 + 0xec);
    *(undefined4 *)(puVar25 + 8) = *(undefined4 *)(puVar25 + 0x1e);
    *(undefined4 *)((longlong)puVar25 + 0x44) = *(undefined4 *)((longlong)puVar25 + 0xf4);
    puVar25[5] = puVar25[0x1b];
    puVar25[6] = puVar25[0x1c];
    puVar25[2] = puVar25[0x18];
    puVar25[3] = puVar25[0x19];
    puVar25[4] = uVar22;
    unaff_RBX = puVar25[0x11];
    if (unaff_RBX == 0) {
      uVar29 = (undefined4)CONCAT71((int7)((ulonglong)puVar25[0x19] >> 8),1);
    }
    else {
      lVar2 = unaff_RBX + 0x38;
      LOCK();
      bVar27 = *(char *)(unaff_RBX + 0x38) == '\0';
      if (bVar27) {
        *(char *)(unaff_RBX + 0x38) = '\x01';
      }
      UNLOCK();
      if (!bVar27) {
        *(undefined1 *)((longlong)puVar25 + 0x15f) = 1;
        *(undefined1 *)((longlong)puVar25 + 0x15e) = 1;
        *(undefined8 *)((longlong)puVar24 + -8) = 0x1417403b0;
        pdb_142dc6be0(lVar2);
      }
      puVar12 = _DAT_143ca8f38;
      if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
        uVar15 = 0;
        cVar14 = *(char *)(unaff_RBX + 0x39);
      }
      else {
        *(undefined1 *)((longlong)puVar25 + 0x15f) = 1;
        *(undefined1 *)((longlong)puVar25 + 0x15e) = 1;
        *(undefined8 *)((longlong)puVar24 + -8) = 0x1417403c9;
        uVar15 = pdb_142dc79e0();
        uVar15 = uVar15 ^ 1;
        cVar14 = *(char *)(unaff_RBX + 0x39);
      }
      if (cVar14 != '\0') {
        puVar25[0x18] = lVar2;
        *(char *)(puVar25 + 0x19) = (char)uVar15;
        *(undefined **)((longlong)puVar24 + 0x20) = &UNK_14332bae8;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)puVar24 + -8) = 0x141740410;
        pdb_142dc8170(&UNK_14332b8d0,0x2b,puVar25 + 0x18,&UNK_14332b940);
      }
      *(uint *)(puVar25 + 0x2b) = uVar15;
      puVar25[0x28] = lVar2;
      puVar25[0x22] = puVar25[0xc];
      puVar25[0x23] = puVar25[0xd];
      puVar25[0x20] = puVar25[10];
      puVar25[0x21] = puVar25[0xb];
      *(undefined4 *)(puVar25 + 0x1e) = *(undefined4 *)(puVar25 + 8);
      *(undefined4 *)((longlong)puVar25 + 0xf4) = *(undefined4 *)((longlong)puVar25 + 0x44);
      *(undefined4 *)(puVar25 + 0x1f) = *(undefined4 *)(puVar25 + 9);
      *(undefined4 *)((longlong)puVar25 + 0xfc) = *(undefined4 *)((longlong)puVar25 + 0x4c);
      *(undefined4 *)(puVar25 + 0x1c) = *(undefined4 *)(puVar25 + 6);
      *(undefined4 *)((longlong)puVar25 + 0xe4) = *(undefined4 *)((longlong)puVar25 + 0x34);
      *(undefined4 *)(puVar25 + 0x1d) = *(undefined4 *)(puVar25 + 7);
      *(undefined4 *)((longlong)puVar25 + 0xec) = *(undefined4 *)((longlong)puVar25 + 0x3c);
      *(undefined4 *)(puVar25 + 0x1a) = *(undefined4 *)(puVar25 + 4);
      *(undefined4 *)((longlong)puVar25 + 0xd4) = *(undefined4 *)((longlong)puVar25 + 0x24);
      *(undefined4 *)(puVar25 + 0x1b) = *(undefined4 *)(puVar25 + 5);
      *(undefined4 *)((longlong)puVar25 + 0xdc) = *(undefined4 *)((longlong)puVar25 + 0x2c);
      puVar25[0x18] = puVar25[2];
      puVar25[0x19] = puVar25[3];
      *(undefined8 *)((longlong)puVar24 + -8) = 0x141740071;
      pdb_1417b89d0(unaff_RBX + 0x40,puVar25 + 0x18);
      unaff_R15 = (char *)(unaff_RBX + 0x38);
      if ((*(char *)(puVar25 + 0x2b) == '\0') && ((*puVar12 & 0x7fffffffffffffff) != 0)) {
        *(undefined1 *)((longlong)puVar25 + 0x15f) = 0;
        *(undefined1 *)((longlong)puVar25 + 0x15e) = 1;
        *(undefined8 *)((longlong)puVar24 + -8) = 0x141740438;
        pcVar17 = (char *)pdb_142dc79e0();
code_r0x000141740439:
        bVar27 = (char)pcVar17 == '\0';
code_r0x00014174043b:
        if (bVar27) {
          *(undefined1 *)(unaff_RBX + 0x39) = 1;
        }
      }
      uVar29 = 0;
      LOCK();
      cVar14 = *unaff_R15;
      *unaff_R15 = '\0';
      UNLOCK();
      if (cVar14 == '\x02') {
        *(undefined1 *)((longlong)puVar25 + 0x15f) = 0;
        *(undefined1 *)((longlong)puVar25 + 0x15e) = 1;
        *(undefined8 *)((longlong)puVar24 + -8) = 0x1417400af;
        pdb_142dc6ca0();
        uVar29 = 0;
      }
    }
    *(undefined4 *)(puVar25 + 0x2b) = uVar29;
    *puVar25 = puVar25[0x27];
    puVar25[1] = unaff_RDI;
    puVar25[0x14] = 0;
    puVar25[0x15] = 1;
    puVar25[0x16] = 0;
    puVar25[0x1a] = 0x60000020;
    puVar25[0x18] = puVar25 + 0x14;
    puVar25[0x19] = &UNK_14332b508;
    *(undefined8 *)((longlong)puVar24 + -8) = 0x141740122;
    cVar14 = pdb_140f58310(puVar25,puVar25 + 0x18);
    if (cVar14 != '\0') {
      *(undefined **)((longlong)puVar24 + 0x20) = &UNK_14332b5e0;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)puVar24 + -8) = 0x141740394;
      pdb_142dc8170(&UNK_14332b538,0x37,(longlong)puVar25 + 0x157,&UNK_14332b890);
    }
    uVar22 = puVar25[0x15];
    uVar3 = puVar25[0x16];
    lVar2 = puVar25[0xe];
    puVar25[0x28] = puVar25[0x14];
    if (lVar2 == 0) {
      pbVar18 = (byte *)0x0;
      cVar14 = *(char *)(puVar25 + 0x2b);
    }
    else {
      unaff_RDI = puVar25[0xf];
      puVar25[0x18] = lVar2;
      puVar25[0x19] = unaff_RDI;
      puVar25[0x17] = uVar22;
      if (unaff_RDI == 0) {
        pbVar18 = (byte *)0x1;
      }
      else {
        *(undefined8 *)((longlong)puVar24 + -8) = 0x141740173;
        pdb_14007ee60();
        *(undefined8 *)((longlong)puVar24 + -8) = 0x141740180;
        pbVar18 = pub_1406abab0(unaff_RDI,1);
        if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)puVar24 + -8) = 0x141740195;
          pdb_142dc7e11(1,unaff_RDI);
        }
      }
      *(undefined8 *)((longlong)puVar24 + -8) = 0x1417401bf;
      pub_142e32760(pbVar18,lVar2 + 0x10,unaff_RDI);
      plVar4 = (longlong *)puVar25[0x18];
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        *(undefined8 *)((longlong)puVar24 + -8) = 0x1417401d8;
        pdb_1406ed6a0(puVar25 + 0x18);
      }
      uVar22 = puVar25[0x17];
      cVar14 = *(char *)(puVar25 + 0x2b);
    }
    if ((cVar14 != '\0') && (uVar16 = puVar25[10], uVar16 != 0)) {
      pbVar5 = (byte *)puVar25[0xb];
      *(undefined8 *)((longlong)puVar24 + -8) = 0x141740201;
      pub_1406abac0(pbVar5,uVar16,1);
    }
    *(undefined8 *)((longlong)puVar24 + -8) = 0x14174020e;
    pdb_14098a860(puVar25 + 0x10);
    lVar2 = puVar25[0x28];
    uVar16 = puVar25[0x26];
    if (uVar16 != 0) {
      pbVar5 = (byte *)puVar25[0x27];
      *(undefined8 *)((longlong)puVar24 + -8) = 0x141740234;
      pub_1406abac0(pbVar5,uVar16,1);
    }
    lVar26 = puVar25[0x29];
    *(undefined1 *)(lVar26 + 0x80) = 1;
    if (SBORROW8(0,lVar2)) goto code_r0x000141740265;
    if (lVar2 == -0x7fffffffffffffff) {
      *param_1 = 2;
      uVar13 = 3;
      goto code_r0x0001417402a5;
    }
    puVar25[0x18] = 1;
    puVar25[0x19] = 1;
    puVar25[0x1a] = lVar2;
    puVar25[0x1b] = uVar22;
    puVar25[0x1c] = uVar3;
    puVar25[0x1d] = pbVar18;
    puVar25[0x1e] = unaff_RDI;
    *(undefined8 *)((longlong)puVar24 + -8) = 0x141740301;
    pdb_14007ee60();
    *(undefined8 *)((longlong)puVar24 + -8) = 0x141740310;
    pbVar18 = pub_1406abab0(0x38,8);
    if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)puVar24 + -8) = 0x141740422;
      pdb_142dc7e11(8,0x38);
    }
    *(undefined8 *)(pbVar18 + 0x30) = puVar25[0x1e];
    uVar22 = puVar25[0x18];
    uVar3 = puVar25[0x19];
    uVar7 = puVar25[0x1a];
    uVar10 = puVar25[0x1b];
    uVar11 = puVar25[0x1d];
    *(undefined8 *)(pbVar18 + 0x20) = puVar25[0x1c];
    *(undefined8 *)(pbVar18 + 0x28) = uVar11;
    *(undefined8 *)(pbVar18 + 0x10) = uVar7;
    *(undefined8 *)(pbVar18 + 0x18) = uVar10;
    *(undefined8 *)pbVar18 = uVar22;
    *(undefined8 *)(pbVar18 + 8) = uVar3;
    puVar20 = &UNK_14332ba38;
    uVar22 = 0;
  }
  *param_1 = uVar22;
  param_1[1] = pbVar18;
  param_1[2] = puVar20;
  uVar13 = 1;
code_r0x0001417402a5:
  *(undefined1 *)(lVar26 + 0x88) = uVar13;
  return param_1;
}

