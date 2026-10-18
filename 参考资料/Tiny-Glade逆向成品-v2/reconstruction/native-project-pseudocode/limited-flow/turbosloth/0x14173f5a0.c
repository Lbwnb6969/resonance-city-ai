// VA 0x14173f5a0, PDB extent 666 bytes
// turbosloth::asset::impl$24::run::async_block$0<asset::texture::SourceImageAsset,enum2$<core::convert::Infallible>,turbosloth::asset::StoreAssetRecipe<asset::texture::SourceImageAsset> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x00014174043d) overlaps instruction at (ram,0x00014174043b)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::asset::impl$24::run::async_block$0<asset::texture::SourceImageAsset,enum2$<core::convert::Infallible>,turbosloth::asset::StoreAssetRecipe<asset::texture::SourceImageAsset>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 666 */

undefined8 *
pdb_14173f5a0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             longlong *param_9,undefined *param_10,longlong param_11,undefined8 param_12,
             undefined8 param_13,byte *param_14,undefined *param_15,undefined8 param_16,
             ulonglong param_17,byte *param_18,undefined8 param_19,undefined8 param_20,
             longlong *param_21,undefined *param_22,ulonglong param_23,byte *param_24,
             longlong param_25,undefined8 *param_26,undefined8 param_27,ulonglong param_28)

{
  int *piVar1;
  int iVar2;
  undefined *arg0;
  ulonglong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined4 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  longlong unaff_RBX;
  byte ***pppbVar19;
  byte *unaff_RDI;
  longlong lVar20;
  bool bVar21;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM0_Qb;
  undefined1 auVar22 [16];
  undefined8 in_XMM1_Qa;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  longlong lStackX_8;
  longlong lStackX_10;
  undefined4 uStackX_18;
  undefined4 uStackX_1c;
  undefined4 uStackX_20;
  undefined4 uStackX_24;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined4 in_stack_000001b8;
  undefined4 uStack00000000000001bc;
  undefined4 in_stack_000001c0;
  undefined4 uStack00000000000001c4;
  undefined *in_stack_000001d0;
  undefined8 *in_stack_000001d8;
  undefined *in_stack_000001e0;
  byte **ppbStack_100;
  undefined1 auStack_f8 [24];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  byte *pbStack_98;
  undefined8 uStack_90;
  byte *pbStack_88;
  undefined8 uStack_80;
  byte *pbStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_40;
  undefined4 uStack_3c;
  longlong *plStack_38;
  undefined8 uStack_30;
  
  pppbVar19 = (byte ***)auStack_f8;
  uStack_30 = 0xfffffffffffffffe;
  puVar17 = &UNK_14332bdb8;
  lVar10 = (longlong)*(int *)(&UNK_14332bdb8 + (ulonglong)*(byte *)(param_2 + 0x11) * 4);
  pcVar11 = &UNK_14332bdb8 + lVar10;
  iStack_40 = (int)param_2;
  uStack_3c = (undefined4)((ulonglong)param_2 >> 0x20);
  cVar8 = (char)pcVar11;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_2 + 0x11)) {
  case 0:
    uStack_d8 = *param_2;
    uStack_d0 = param_2[1];
    uStack_c8 = param_2[2];
    uStack_c0 = param_2[3];
    uStack_b8 = *(undefined4 *)(param_2 + 4);
    uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_b0 = *(undefined4 *)(param_2 + 5);
    uStack_ac = *(undefined4 *)((longlong)param_2 + 0x2c);
    uStack_a8 = *(undefined4 *)(param_2 + 6);
    uStack_a4 = *(undefined4 *)((longlong)param_2 + 0x34);
    uStack_a0 = *(undefined4 *)(param_2 + 7);
    uStack_9c = *(undefined4 *)((longlong)param_2 + 0x3c);
    param_2[8] = uStack_d8;
    param_2[9] = uStack_d0;
    param_2[10] = uStack_c8;
    param_2[0xb] = uStack_c0;
    *(undefined4 *)(param_2 + 0xc) = uStack_b8;
    *(undefined4 *)((longlong)param_2 + 100) = uStack_b4;
    *(undefined4 *)(param_2 + 0xd) = uStack_b0;
    *(undefined4 *)((longlong)param_2 + 0x6c) = uStack_ac;
    *(undefined4 *)(param_2 + 0xe) = uStack_a8;
    *(undefined4 *)((longlong)param_2 + 0x74) = uStack_a4;
    *(undefined4 *)(param_2 + 0xf) = uStack_a0;
    *(undefined4 *)((longlong)param_2 + 0x7c) = uStack_9c;
    *(undefined1 *)(param_2 + 0x10) = 0;
    goto code_r0x00014173f632;
  case 1:
                    /* WARNING: Subroutine does not return */
    ppbStack_100 = (byte **)0x14173f73e;
    pdb_142dc8570(&UNK_14332ba20);
  case 2:
                    /* WARNING: Subroutine does not return */
    ppbStack_100 = (byte **)0x14173f732;
    pdb_142dc8590(&UNK_14332ba20);
  case 3:
    plStack_38 = param_2 + 8;
    if (*(char *)(param_2 + 0x10) != '\0') {
      uStack_48 = plStack_38;
      if (*(char *)(param_2 + 0x10) != '\x01') {
                    /* WARNING: Subroutine does not return */
        ppbStack_100 = (byte **)0x14173f752;
        pdb_142dc8590(&UNK_14332bb50);
      }
                    /* WARNING: Subroutine does not return */
      ppbStack_100 = (byte **)0x14173f723;
      pdb_142dc8570(&UNK_14332bb50);
    }
code_r0x00014173f632:
    plStack_38 = param_2 + 8;
    lVar10 = *plStack_38;
    uVar18 = param_2[9];
    pbStack_98 = (byte *)param_2[10];
    uStack_90 = param_2[0xb];
    pbStack_78 = (byte *)param_2[0xc];
    puStack_70 = (undefined *)param_2[0xd];
    uStack_68 = param_2[0xe];
    puStack_60 = (undefined *)param_2[0xf];
    ppbStack_100 = (byte **)0x14173f65a;
    pdb_14098a860(&pbStack_78);
    pbStack_88 = pbStack_98;
    uStack_80 = uStack_90;
    lVar20 = CONCAT44(uStack_3c,iStack_40);
    *(undefined1 *)(lVar20 + 0x80) = 1;
    if (SBORROW8(0,lVar10)) {
      *param_1 = 2;
      uVar7 = 3;
    }
    else {
      pbStack_78 = pbStack_98;
      puStack_70 = (undefined *)uStack_90;
      ppbStack_100 = (byte **)0x14173f68e;
      pdb_14007ee60();
      ppbStack_100 = (byte **)0x14173f69d;
      pbVar15 = pub_1406abab0(0x30,8);
      if (pbVar15 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        ppbStack_100 = (byte **)0x14173f707;
        uStack_50 = uVar18;
        plStack_38 = (longlong *)lVar10;
        pdb_142dc7e11(8,0x30);
      }
      pbVar15[0] = 1;
      pbVar15[1] = 0;
      pbVar15[2] = 0;
      pbVar15[3] = 0;
      pbVar15[4] = 0;
      pbVar15[5] = 0;
      pbVar15[6] = 0;
      pbVar15[7] = 0;
      pbVar15[8] = 1;
      pbVar15[9] = 0;
      pbVar15[10] = 0;
      pbVar15[0xb] = 0;
      pbVar15[0xc] = 0;
      pbVar15[0xd] = 0;
      pbVar15[0xe] = 0;
      pbVar15[0xf] = 0;
      *(longlong *)(pbVar15 + 0x10) = lVar10;
      *(undefined8 *)(pbVar15 + 0x18) = uVar18;
      *(byte **)(pbVar15 + 0x20) = pbStack_78;
      *(undefined **)(pbVar15 + 0x28) = puStack_70;
      *param_1 = 0;
      param_1[1] = pbVar15;
      param_1[2] = &UNK_14332ba78;
      uVar7 = 1;
    }
    *(undefined1 *)(lVar20 + 0x88) = uVar7;
    return param_1;
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
    *(int *)(lVar10 + 0xd07aeba3) = *(int *)(lVar10 + 0xd07aeba3) + iStack_40;
                    /* WARNING: Subroutine does not return */
    ppbStack_100 = (byte **)0x14173f9e3;
    pdb_142dc8590();
  case 6:
    (&UNK_14332bd45)[lVar10] = (&UNK_14332bd45)[lVar10] + 'H';
                    /* WARNING: Subroutine does not return */
    ppbStack_100 = (byte **)0x14173f9d4;
    pdb_142dc8570();
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 8:
    param_1 = (undefined8 *)0x4332bdb8;
    uVar12 = (ulonglong)*(int *)(&UNK_14332bdd8 + (ulonglong)*(byte *)(param_2 + 0x3b) * 4);
    puVar17 = &UNK_14332bdd8 + uVar12;
    in_stack_000001d8 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_2 + 0x3b)) {
    case 0:
      unaff_RDI = &stack0xffffffffffffffe8;
      ppbStack_100 = (byte **)0x14173fb27;
      pub_142e32760(unaff_RDI,(int)in_XMM1_Qa,200);
      param_22 = *(undefined **)(unaff_RBX + 200);
      param_23 = *(undefined8 *)(unaff_RBX + 0xd0);
      param_24 = *(byte **)(unaff_RBX + 0xd8);
      param_25 = *(longlong *)(unaff_RBX + 0xe0);
      puVar17 = (undefined *)(unaff_RBX + 0xe8);
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      ppbStack_100 = (byte **)0x14173fce2;
      pdb_142dc8570(&UNK_14332ba20);
    case 2:
                    /* WARNING: Subroutine does not return */
      ppbStack_100 = (byte **)0x14173fcd6;
      pdb_142dc8590(&UNK_14332ba20);
    case 3:
      in_stack_000001e0 = (undefined *)(unaff_RBX + 0xe8);
      if (*(char *)(unaff_RBX + 0x1d0) != '\0') {
        if (*(char *)(unaff_RBX + 0x1d0) != '\x01') {
                    /* WARNING: Subroutine does not return */
          ppbStack_100 = (byte **)0x14173fcfc;
          in_stack_000001d0 = in_stack_000001e0;
          pdb_142dc8590(&UNK_14332bb50);
        }
        goto code_r0x00014173fcad;
      }
      goto code_r0x00014173fb85;
    case 4:
      param_26 = param_2;
                    /* WARNING: Could not emulate address calculation at 0x00014173fe07 */
                    /* WARNING: Treating indirect jump as call */
      puVar13 = (undefined8 *)
                (*(code *)(&UNK_14332bdd8 + *(int *)(&UNK_14332bdd8 + (longlong)puVar17 * 4)))();
      return puVar13;
    case 5:
      *(int *)(uVar12 + 0xd07ac8e7) = *(int *)(uVar12 + 0xd07ac8e7) + iStack_40;
      puVar17 = (undefined *)(ulonglong)((uint)puVar17 | 0x1beb5ac);
    case 6:
      piVar1 = (int *)((ulonglong)(((uint)puVar17 | 0x9b0d8d48) + (int)&pbStack_78) + 1);
      *piVar1 = *piVar1 + -0x480b0f90;
                    /* WARNING: Subroutine does not return */
      ppbStack_100 = (byte **)0x141740479;
      pdb_142dc8590(0x4332ba20);
    case 7:
      *(uint *)(param_2 + 0xe) =
           *(int *)(param_2 + 0xe) + (int)unaff_RBX + (uint)(0xfffffffebccd4227 < uVar12);
      goto code_r0x00014173fe7e;
    }
    break;
  case 9:
    *pcVar11 = *pcVar11 + cVar8;
    goto code_r0x00014173fcad;
  case 10:
    iStack_40._0_1_ = SUB81(param_2,0);
    iVar2 = CONCAT13((undefined1)iStack_40,uStack_48._5_3_) + (int)param_1;
    uStack_48._5_3_ = (undefined3)iVar2;
    iStack_40._1_3_ = (undefined3)((ulonglong)param_2 >> 8);
    iStack_40._0_1_ = (undefined1)((uint)iVar2 >> 0x18);
code_r0x00014173fcad:
    in_stack_000001d0 = in_stack_000001e0;
                    /* WARNING: Subroutine does not return */
    ppbStack_100 = (byte **)0x14173fcc7;
    pdb_142dc8570(&UNK_14332bb50);
  case 0xb:
    *pcVar11 = *pcVar11 + cVar8;
    break;
  case 0xc:
    *pcVar11 = *pcVar11;
    (&UNK_14332bd7f)[lVar10] = (&UNK_14332bd7f)[lVar10] + -0x48;
    *pcVar11 = *pcVar11 + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd:
    *(int *)(unaff_RBX + 0xf7501f8) = *(int *)(unaff_RBX + 0xf7501f8) + 1;
    goto code_r0x00014174044f;
  case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf:
code_r0x00014173fe7e:
    pppbVar19 = &ppbStack_100;
    *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
    pbStack_98 = (byte *)CONCAT44(pbStack_98._4_4_,(int)pbStack_98 - (int)unaff_RBX);
    pbStack_88 = (byte *)param_17;
    *(ulonglong *)((longlong)param_26 + 0x80) = param_17;
    *(int *)((longlong)param_26 + 0x70) = (int)param_4;
    *(int *)((longlong)param_26 + 0x74) = (int)((ulonglong)param_4 >> 0x20);
    *(undefined4 *)((longlong)param_26 + 0x78) = in_XMM3_Dc;
    *(undefined4 *)((longlong)param_26 + 0x7c) = in_XMM3_Dd;
    *(int *)((longlong)param_26 + 0x60) = (int)param_3;
    *(int *)((longlong)param_26 + 100) = (int)((ulonglong)param_3 >> 0x20);
    *(undefined4 *)((longlong)param_26 + 0x68) = in_XMM2_Dc;
    *(undefined4 *)((longlong)param_26 + 0x6c) = in_XMM2_Dd;
    *(int *)((longlong)param_26 + 0x50) = (int)in_XMM1_Qa;
    *(int *)((longlong)param_26 + 0x54) = (int)((ulonglong)in_XMM1_Qa >> 0x20);
    *(undefined4 *)((longlong)param_26 + 0x58) = in_XMM1_Dc;
    *(undefined4 *)((longlong)param_26 + 0x5c) = in_XMM1_Dd;
    *(undefined8 *)((longlong)param_26 + 0x40) = in_XMM0_Qa;
    *(undefined8 *)((longlong)param_26 + 0x48) = in_XMM0_Qb;
    ppbStack_100 = &pbStack_78;
    if (*(char *)((longlong)param_26 + 0x80) != '\0') {
      if (*(char *)((longlong)param_26 + 0x80) != '\x01') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8590(&UNK_14332bb00);
      }
code_r0x00014174044f:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)pppbVar19 + -8) = 0x14174045b;
      pdb_142dc8570(&UNK_14332bb00);
    }
    param_23 = *(ulonglong *)((longlong)param_26 + 0x40);
    param_24 = *(byte **)((longlong)param_26 + 0x48);
    puVar17 = *(undefined **)((longlong)param_26 + 0x50);
    lStackX_8 = *(longlong *)((longlong)param_26 + 0x60);
    lStackX_10 = *(longlong *)((longlong)param_26 + 0x68);
    uStackX_18 = *(undefined4 *)((longlong)param_26 + 0x70);
    uStackX_1c = *(undefined4 *)((longlong)param_26 + 0x74);
    uStackX_20 = *(undefined4 *)((longlong)param_26 + 0x78);
    uStackX_24 = *(undefined4 *)((longlong)param_26 + 0x7c);
    pdb_141c2f360(&param_9,lStackX_8 + 0x10,param_24,puVar17);
    arg0 = param_22;
    plVar6 = param_21;
    uVar5 = param_20;
    uVar4 = param_19;
    pbVar15 = param_18;
    uVar12 = param_17;
    uVar18 = param_11;
    lVar10 = lStackX_10;
    auVar22[0] = -((char)param_9 == DAT_142f5c7c0);
    auVar22[1] = -(param_9._1_1_ == UNK_142f5c7c1);
    auVar22[2] = -(param_9._2_1_ == UNK_142f5c7c2);
    auVar22[3] = -(param_9._3_1_ == UNK_142f5c7c3);
    auVar22[4] = -(param_9._4_1_ == UNK_142f5c7c4);
    auVar22[5] = -(param_9._5_1_ == UNK_142f5c7c5);
    auVar22[6] = -(param_9._6_1_ == UNK_142f5c7c6);
    auVar22[7] = -(param_9._7_1_ == UNK_142f5c7c7);
    auVar22[8] = -((char)param_10 == UNK_142f5c7c8);
    auVar22[9] = -(param_10._1_1_ == UNK_142f5c7c9);
    auVar22[10] = -(param_10._2_1_ == UNK_142f5c7ca);
    auVar22[0xb] = -(param_10._3_1_ == UNK_142f5c7cb);
    auVar22[0xc] = -(param_10._4_1_ == UNK_142f5c7cc);
    auVar22[0xd] = -(param_10._5_1_ == UNK_142f5c7cd);
    auVar22[0xe] = -(param_10._6_1_ == UNK_142f5c7ce);
    auVar22[0xf] = -(param_10._7_1_ == UNK_142f5c7cf);
    if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf
                ) == 0xffff) {
      pdb_14098a860(&lStackX_8);
      if (param_23 != 0) {
        pub_1406abac0(param_24,param_23,1);
      }
      *(undefined1 *)((longlong)param_26 + 0x80) = 1;
code_r0x000141740265:
      lVar20 = (longlong)param_26;
      param_9 = (longlong *)uVar18;
      pdb_14007ee60();
      pbVar15 = pub_1406abab0(8,8);
      if (pbVar15 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,8);
      }
      *(undefined8 *)pbVar15 = uVar18;
      uVar18 = 1;
      puVar17 = &UNK_1430712c0;
    }
    else {
      uStack_30 = CONCAT44(param_16._4_4_,(undefined4)param_16);
      iStack_40 = (int)param_14;
      uStack_3c = param_14._4_4_;
      plStack_38 = (longlong *)param_15;
      uStack_50 = param_12;
      uStack_48._0_4_ = (undefined4)param_13;
      uStack_48._4_4_ = (undefined4)((ulonglong)param_13 >> 0x20);
      uStack_68 = param_9;
      puStack_60 = param_10;
      uStack_58 = param_11;
      if (lStackX_10 == 0) {
        uVar16 = (undefined4)CONCAT71((int7)((ulonglong)param_10 >> 8),1);
      }
      else {
        lVar20 = lStackX_10 + 0x38;
        LOCK();
        bVar21 = *(char *)(lStackX_10 + 0x38) == '\0';
        if (bVar21) {
          *(char *)(lStackX_10 + 0x38) = '\x01';
        }
        UNLOCK();
        if (!bVar21) {
          param_28._0_7_ = CONCAT16(1,(undefined6)param_28);
          param_28 = CONCAT17(1,(uint7)param_28);
          pdb_142dc6be0(lVar20);
        }
        puVar3 = _DAT_143ca8f38;
        if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
          uVar9 = 0;
          cVar8 = *(char *)(lVar10 + 0x39);
        }
        else {
          param_28._0_7_ = CONCAT16(1,(undefined6)param_28);
          param_28 = CONCAT17(1,(uint7)param_28);
          uVar9 = pdb_142dc79e0();
          uVar9 = uVar9 ^ 1;
          cVar8 = *(char *)(lVar10 + 0x39);
        }
        if (cVar8 != '\0') {
          uVar12 = (ulonglong)param_10 >> 8;
          param_10 = (undefined *)CONCAT71((int7)uVar12,(char)uVar9);
          puStack_e0 = &UNK_14332bae8;
          param_9 = (longlong *)lVar20;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_14332b8d0,0x2b,&param_9,&UNK_14332b940);
        }
        param_28._4_4_ = (undefined4)(param_28 >> 0x20);
        param_28 = CONCAT44(param_28._4_4_,uVar9);
        uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
        param_16._0_4_ = (undefined4)uStack_30;
        param_16._4_4_ = uStack_30._4_4_;
        param_13 = CONCAT44(uStack_48._4_4_,(undefined4)uStack_48);
        param_14 = (byte *)CONCAT44(uStack_3c,iStack_40);
        param_9 = (longlong *)uStack_68;
        param_10 = puStack_60;
        param_11 = uStack_58;
        param_12 = uStack_50;
        param_15 = (undefined *)plStack_38;
        param_17 = uVar12;
        param_18 = pbVar15;
        param_19 = uVar4;
        param_20 = uVar5;
        param_25 = lVar20;
        pdb_1417b89d0(lVar10 + 0x40,&param_9);
        if (((char)param_28 == '\0') && ((*puVar3 & 0x7fffffffffffffff) != 0)) {
          param_28._0_7_ = CONCAT16(1,(int6)param_28);
          param_28 = (ulonglong)(uint7)param_28;
          cVar8 = pdb_142dc79e0();
          if (cVar8 == '\0') {
            *(undefined1 *)(lVar10 + 0x39) = 1;
          }
        }
        uVar16 = 0;
        LOCK();
        cVar8 = *(char *)(lVar10 + 0x38);
        *(char *)(lVar10 + 0x38) = '\0';
        UNLOCK();
        if (cVar8 == '\x02') {
          param_28._0_7_ = CONCAT16(1,(int6)param_28);
          param_28 = (ulonglong)(uint7)param_28;
          pdb_142dc6ca0();
          uVar16 = 0;
        }
      }
      param_28 = CONCAT44(param_28._4_4_,uVar16);
      pbStack_78 = param_24;
      param_5 = 0;
      param_6 = 1;
      param_7 = 0;
      param_11 = 0x60000020;
      param_9 = &param_5;
      param_10 = &UNK_14332b508;
      puStack_70 = puVar17;
      cVar8 = pdb_140f58310(&pbStack_78,&param_9);
      uVar4 = param_7;
      if (cVar8 != '\0') {
        puStack_e0 = &UNK_14332b5e0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14332b538,0x37,(longlong)&param_27 + 7,&UNK_14332b890);
      }
      param_25 = param_5;
      if (plVar6 == (longlong *)0x0) {
        pbVar14 = (byte *)0x0;
        arg0 = puVar17;
        uVar18 = param_6;
      }
      else {
        param_8 = param_6;
        param_9 = plVar6;
        param_10 = arg0;
        if (arg0 == (undefined *)0x0) {
          pbVar14 = (byte *)0x1;
        }
        else {
          pdb_14007ee60();
          pbVar14 = pub_1406abab0((ulonglong)arg0,1);
          if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(1,arg0);
          }
        }
        pub_142e32760(pbVar14,plVar6 + 2,arg0);
        LOCK();
        *param_9 = *param_9 + -1;
        UNLOCK();
        if (*param_9 == 0) {
          pdb_1406ed6a0(&param_9);
        }
        uVar18 = param_8;
      }
      if (((char)param_28 != '\0') && (uVar12 != 0)) {
        pub_1406abac0(pbVar15,uVar12,1);
      }
      pdb_14098a860(&lStackX_8);
      lVar10 = param_25;
      if (param_23 != 0) {
        pub_1406abac0(param_24,param_23,1);
      }
      lVar20 = (longlong)param_26;
      *(undefined1 *)((longlong)param_26 + 0x80) = 1;
      if (SBORROW8(0,lVar10)) goto code_r0x000141740265;
      if (lVar10 == -0x7fffffffffffffff) {
        *param_1 = 2;
        uVar7 = 3;
        goto code_r0x0001417402a5;
      }
      param_9 = (longlong *)0x1;
      param_10 = (undefined *)0x1;
      param_11 = lVar10;
      param_13 = uVar4;
      param_12 = uVar18;
      param_14 = pbVar14;
      param_15 = arg0;
      pdb_14007ee60();
      pbVar15 = pub_1406abab0(0x38,8);
      if (pbVar15 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x38);
      }
      *(undefined **)(pbVar15 + 0x30) = param_15;
      *(undefined8 *)(pbVar15 + 0x20) = param_13;
      *(byte **)(pbVar15 + 0x28) = param_14;
      *(longlong *)(pbVar15 + 0x10) = param_11;
      *(undefined8 *)(pbVar15 + 0x18) = param_12;
      *(longlong **)pbVar15 = param_9;
      *(undefined **)(pbVar15 + 8) = param_10;
      puVar17 = &UNK_14332ba38;
      uVar18 = 0;
    }
    *param_1 = uVar18;
    param_1[1] = pbVar15;
    param_1[2] = puVar17;
    uVar7 = 1;
    param_26 = (undefined8 *)lVar20;
code_r0x0001417402a5:
    *(undefined1 *)((longlong)param_26 + 0x88) = uVar7;
    return param_1;
  }
  ppbStack_100 = (byte **)0x14173fb5f;
  in_stack_000001e0 = puVar17;
  pub_142e32760(puVar17,unaff_RDI,0xe8);
  *(undefined1 *)(unaff_RBX + 0x1d0) = 0;
code_r0x00014173fb85:
  lVar10 = *(longlong *)(unaff_RBX + 0xe8);
  ppbStack_100 = (byte **)0x14173fba5;
  pub_142e32760(&param_26,unaff_RBX + 0xf0,0xc0);
  in_stack_000001a8 = *(undefined8 *)(unaff_RBX + 0x1b0);
  in_stack_000001b0 = *(undefined8 *)(unaff_RBX + 0x1b8);
  in_stack_000001b8 = *(undefined4 *)(unaff_RBX + 0x1c0);
  uStack00000000000001bc = *(undefined4 *)(unaff_RBX + 0x1c4);
  in_stack_000001c0 = *(undefined4 *)(unaff_RBX + 0x1c8);
  uStack00000000000001c4 = *(undefined4 *)(unaff_RBX + 0x1cc);
  ppbStack_100 = (byte **)0x14173fbcd;
  pdb_14098a860(&stack0x000001a8);
  ppbStack_100 = (byte **)0x14173fbe4;
  pub_142e32760(&uStack_d8,&param_26,0xc0);
  puVar13 = in_stack_000001d8;
  *(undefined1 *)(in_stack_000001d8 + 0x3a) = 1;
  if (SBORROW8(0,lVar10)) {
    *param_1 = 2;
    uVar7 = 3;
  }
  else {
    ppbStack_100 = (byte **)0x14173fc1b;
    pub_142e32760(&stack0x000000e8,&uStack_d8,0xc0);
    param_26 = (undefined8 *)0x1;
    param_27 = 1;
    ppbStack_100 = (byte **)0x14173fc3d;
    param_28 = lVar10;
    pdb_14007ee60();
    ppbStack_100 = (byte **)0x14173fc4c;
    pbVar15 = pub_1406abab0(0xd8,8);
    if (pbVar15 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      ppbStack_100 = (byte **)0x14173fca5;
      pdb_142dc7e11(8,0xd8);
    }
    ppbStack_100 = (byte **)0x14173fc69;
    pub_142e32760(pbVar15,&param_26,0xd8);
    *param_1 = 0;
    param_1[1] = pbVar15;
    param_1[2] = &UNK_14332bab8;
    uVar7 = 1;
  }
  *(undefined1 *)(puVar13 + 0x3b) = uVar7;
  return param_1;
}

