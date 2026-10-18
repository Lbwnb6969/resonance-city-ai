// VA 0x1417c0ca0, PDB extent 247 bytes
// country_core::resources::walls::decorator::_::impl$0::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001433376f8) overlaps instruction at (ram,0x0001433376f7)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator::_::impl$0::serialize<serde_json::value::ser::Serializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 247 */

ulonglong *
pdb_1417c0ca0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4,
             undefined8 *param_5)

{
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong *extraout_RAX;
  ulonglong *extraout_RAX_00;
  ulonglong *extraout_RAX_01;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  int iVar14;
  undefined *puVar15;
  longlong unaff_RBX;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  undefined8 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined8 *unaff_RBP;
  undefined8 *puVar27;
  undefined8 unaff_RSI;
  ulonglong uVar28;
  undefined8 unaff_RDI;
  char *pcVar29;
  ulonglong in_R10;
  byte *pbVar30;
  ulonglong in_R11;
  undefined2 in_FS;
  bool bVar31;
  bool bVar32;
  undefined8 uVar33;
  undefined4 extraout_XMM0_Dd;
  ulonglong *unaff_retaddr;
  ulonglong uStackX_8;
  ulonglong uStackX_10;
  ulonglong *puStackX_18;
  ulonglong *in_stack_00000020;
  byte in_stack_143337693;
  undefined1 auStack_4d0a [19586];
  undefined1 *puStack_88;
  undefined1 auStack_80 [48];
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [16];
  longlong lStack_28;
  longlong lStack_20;
  ulonglong *puStack_18;
  byte bStack_10;
  undefined8 uStack_f;
  undefined4 uStack_7;
  undefined1 auStack_3 [3];
  
  uStack_f._7_1_ = (byte)unaff_RSI;
  uStack_7 = (undefined4)((ulonglong)unaff_RSI >> 8);
  auStack_3 = SUB83((ulonglong)unaff_RSI >> 0x28,0);
  bStack_10 = (byte)unaff_RDI;
  uStack_f._0_4_ = (int)((ulonglong)unaff_RDI >> 8);
  uStack_f._4_3_ = (undefined3)((ulonglong)unaff_RDI >> 0x28);
  puVar16 = (undefined8 *)auStack_38;
  puVar19 = (undefined8 *)auStack_38;
  puVar18 = auStack_38;
  puVar20 = auStack_38;
  puVar21 = (undefined8 *)auStack_38;
  puVar22 = auStack_38;
  puVar23 = (undefined8 *)auStack_38;
  puVar24 = auStack_38;
  puVar26 = auStack_38;
  puVar25 = auStack_38;
  uVar28 = *param_2;
  pcVar29 = (char *)(ulonglong)(byte)uVar28;
  uVar33 = pdb_14007ee60();
  puVar9 = (ulonglong *)&UNK_1433376f8;
  uVar10 = (ulonglong)*(int *)(&UNK_1433376f8 + (longlong)pcVar29 * 4);
  bVar31 = 0xfffffffebccc8907 < uVar10;
  puVar11 = (ulonglong *)(&UNK_1433376f8 + uVar10);
  bVar32 = puVar11 == (ulonglong *)0x0;
  bVar4 = (byte)puVar11;
  puVar12 = puVar11;
  puVar17 = auStack_38;
  puVar27 = unaff_RBP;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((byte)uVar28) {
  case 0:
    uVar28 = 4;
    pbVar30 = pub_1406abab0(4,1);
    if (pbVar30 != (byte *)0x0) {
      pbVar30[0] = 0x4e;
      pbVar30[1] = 0x6f;
      pbVar30[2] = 0x6e;
      pbVar30[3] = 0x65;
code_r0x0001417c0d50:
      *(char *)param_1 = '\x03';
      param_1[1] = uVar28;
      param_1[2] = (ulonglong)pbVar30;
      param_1[3] = uVar28;
      return param_1;
    }
    goto code_r0x0001417c0d69;
  case 1:
    uVar28 = 3;
    pbVar30 = pub_1406abab0(3,1);
    if (pbVar30 != (byte *)0x0) {
      pbVar30[2] = 0x77;
      pbVar30[0] = 0x4c;
      pbVar30[1] = 0x6f;
      goto code_r0x0001417c0d50;
    }
    goto code_r0x0001417c0d87;
  case 2:
    uVar28 = 4;
    pbVar30 = pub_1406abab0(4,1);
    if (pbVar30 != (byte *)0x0) {
      pbVar30[0] = 0x48;
      pbVar30[1] = 0x69;
      pbVar30[2] = 0x67;
      pbVar30[3] = 0x68;
      goto code_r0x0001417c0d50;
    }
code_r0x0001417c0d69:
    pdb_142dc7e2a(1,4);
code_r0x0001417c0d78:
    pdb_142dc7e2a(1,6);
code_r0x0001417c0d87:
    pdb_142dc7e2a(1,3);
    pcVar3 = (code *)swi(3);
    puVar11 = (ulonglong *)(*pcVar3)();
    return puVar11;
  case 3:
    uVar28 = 6;
    pbVar30 = pub_1406abab0(6,1);
    if (pbVar30 != (byte *)0x0) {
      pbVar30[4] = 0x65;
      pbVar30[5] = 0x6e;
      pbVar30[0] = 0x57;
      pbVar30[1] = 0x6f;
      pbVar30[2] = 0x6f;
      pbVar30[3] = 100;
      goto code_r0x0001417c0d50;
    }
    goto code_r0x0001417c0d78;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x0001417c15a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar11 = (ulonglong *)
              (*(code *)(&UNK_143337708 + *(int *)(&UNK_143337708 + (longlong)param_2 * 4)))
                        (puVar11,&UNK_143337708 + *(int *)(&UNK_143337708 + (longlong)param_2 * 4));
    return puVar11;
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
    if (bVar32) {
      *param_1 = CONCAT35(auStack_3,CONCAT41(uStack_7,uStack_f._7_1_));
      *(char *)((longlong)param_1 + 0x22) = '\x05';
      return param_1;
    }
    param_1[4] = (ulonglong)puStackX_18;
    param_1[2] = uStackX_8;
    param_1[3] = uStackX_10;
    *param_1 = CONCAT35(auStack_3,CONCAT41(uStack_7,uStack_f._7_1_));
    param_1[1] = (ulonglong)unaff_retaddr;
    return param_1;
  case 7:
    _UNK_143337681 = CONCAT12(UNK_143337683 | bVar4,_UNK_143337681);
    *param_1 = (ulonglong)&UNK_143337658;
    *(char *)((longlong)param_1 + 0x22) = '\x03';
    return param_1;
  case 8:
    auStack_3 = SUB43(extraout_XMM0_Dd,0);
    bStack_10 = bVar4;
    uStack_f = uVar33;
                    /* WARNING: Could not recover jumptable at 0x0001417c189e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar11 = (ulonglong *)(*(code *)(&UNK_143337718 + _UNK_143337af8))();
    return puVar11;
  case 9:
    puVar9 = (ulonglong *)pdb_140de26b0();
    if (puVar9 == (ulonglong *)0x0) {
      *param_1 = 7;
      return param_1;
    }
    goto code_r0x0001417c1861;
  case 10:
    return puVar9;
  case 0xb:
    puVar9 = (ulonglong *)pdb_140de26b0();
    bVar31 = puVar9 == (ulonglong *)0x0;
    goto code_r0x0001417c18eb;
  case 0xc:
    if (puVar11 < (ulonglong *)0x2) {
      puVar9 = (ulonglong *)pdb_140de26b0((ulonglong)&bStack_10 & 0xffffffff);
      if (puVar9 == (ulonglong *)0x0) {
        *param_1 = 0;
        return param_1;
      }
      goto code_r0x0001417c1861;
    }
    bVar31 = false;
code_r0x0001417c18eb:
    if (bVar31) {
      *param_1 = 2;
      return param_1;
    }
    goto code_r0x0001417c1861;
  case 0xd:
    puVar9 = (ulonglong *)pdb_140de26b0();
    if (puVar9 == (ulonglong *)0x0) {
      *param_1 = 1;
      return param_1;
    }
    goto code_r0x0001417c1861;
  case 0xe:
    puVar9 = (ulonglong *)pdb_140de26b0();
    if (puVar9 == (ulonglong *)0x0) {
      *param_1 = 5;
      return param_1;
    }
    goto code_r0x0001417c1861;
  case 0xf:
    puVar9 = (ulonglong *)pdb_140de26b0();
    if (puVar9 == (ulonglong *)0x0) {
      *param_1 = 3;
      return param_1;
    }
code_r0x0001417c1861:
    param_1[1] = (ulonglong)puVar9;
    *param_1 = 8;
    return param_1;
  case 0x10:
    param_1[1] = (ulonglong)puVar11;
    *(char *)param_1 = '\x01';
    return param_1;
  case 0x11:
  case 0x14:
  case 0x16:
  case 0x17:
    puVar12 = param_2;
    puVar17 = auStack_38;
    if (param_4 != (ulonglong *)0x0 || (int)puVar11 != 0x74) goto code_r0x0001417c1b9a;
    UNK_1433376f9 = 2;
    break;
  case 0x12:
    if (bVar32) goto code_r0x0001417c1b86;
    puVar17 = (undefined1 *)(ulonglong)(uint)(*(int *)(unaff_RBX + 0x57) * 0xa334869);
    puVar12 = param_2;
    if ((int)param_2[1] != 0x776f646e || puVar11 != (ulonglong *)0x0) goto code_r0x0001417c1b9a;
    UNK_1433376f9 = 1;
    break;
  case 0x13:
    cVar6 = in((short)param_2);
    *pcVar29 = cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x15:
    *(char *)(uVar10 + 0x1b7a8e33b) =
         *(char *)(uVar10 + 0x1b7a8e33b) + (char)((ulonglong)unaff_RBX >> 8);
code_r0x0001417c1b01:
    puVar12 = param_2;
    puVar17 = (undefined1 *)puVar16;
    if (*(int *)((longlong)param_2 + 3) != 0x72657474 || (int)puVar11 != (int)*param_2)
    goto code_r0x0001417c1b9a;
    *(byte *)((longlong)puVar9 + 1) = 6;
    break;
  case 0x18:
    puVar9 = (ulonglong *)(ulonglong)(*(int *)(&UNK_143337701 + uVar10) + 0x433376f8U);
    puVar16 = unaff_RBP + 1;
    if (*(int *)(&UNK_143337701 + uVar10) + 0x433376f8U == 0) {
      uRam0000000000000001 = 3;
    }
    else {
      if (*(int *)((longlong)param_2 + 3) != 0x6e726574 || (int)*param_2 != 0x746e614c) {
        puVar11 = (ulonglong *)0x74756c43;
        goto code_r0x0001417c1b01;
      }
      *(byte *)((longlong)puVar9 + 1) = 4;
    }
    break;
  case 0x19:
    pcVar3 = (code *)swi(3);
    puVar11 = (ulonglong *)(*pcVar3)();
    return puVar11;
  case 0x1a:
    break;
  case 0x1b:
    pdb_141b4cd90();
    uVar28 = uStackX_10;
    puVar11 = (ulonglong *)&UNK_143337760;
    uVar10 = (ulonglong)*(int *)(&UNK_143337760 + (ulonglong)uStack_f._7_1_ * 4);
    puVar9 = (ulonglong *)(&UNK_143337760 + uVar10);
    iVar14 = (int)unaff_retaddr;
    cVar6 = (char)puVar9;
    puVar20 = auStack_38;
    param_2 = unaff_retaddr;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uStack_f._7_1_) {
    case 0:
      if ((unaff_retaddr == (ulonglong *)0x0) || ((byte)*unaff_retaddr == 0x12)) {
        uVar28 = 0x200000000;
code_r0x0001417c1c47:
        *param_1 = uVar28;
        return param_1;
      }
      goto code_r0x0001417c1c53;
    case 1:
      if ((unaff_retaddr == (ulonglong *)0x0) || ((byte)*unaff_retaddr == 0x12)) {
        uVar28 = 0x300000000;
        goto code_r0x0001417c1c47;
      }
code_r0x0001417c1c53:
      uVar28 = pdb_142deedc0(unaff_retaddr,(longlong)&uStack_f + 6,&UNK_143396738);
      param_1[1] = uVar28;
code_r0x0001417c1c24:
      *(undefined4 *)param_1 = 1;
      return param_1;
    case 2:
      pdb_141b569d0(param_1,unaff_retaddr,&UNK_143336d98,1);
      return param_1;
    case 3:
      param_1[1] = (ulonglong)unaff_retaddr;
      goto code_r0x0001417c1c24;
    case 4:
                    /* WARNING: Could not emulate address calculation at 0x0001417c1e4b */
                    /* WARNING: Treating indirect jump as call */
      puVar11 = (ulonglong *)
                (*(code *)(&UNK_143337770 + *(int *)(&UNK_143337770 + (longlong)puVar9 * 4)))();
      return puVar11;
    case 5:
      goto code_r0x0001417c1eda;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xf:
      bVar31 = false;
      param_1 = (ulonglong *)(ulonglong)((uint)param_1 | *(uint *)((longlong)unaff_RBP + 0x75));
code_r0x0001417c1f45:
      do {
        bVar4 = (char)puVar9 + *(byte *)((longlong)puVar9 + 0x75750b7a) + bVar31;
        bVar31 = false;
        bVar5 = bVar4 | 0x80;
        puVar9 = (ulonglong *)(CONCAT71((int7)((ulonglong)puVar9 >> 8),bVar4) | 0x80);
        if ((POPCOUNT(bVar5) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar11 = (ulonglong *)((longlong)puVar11 + -1);
      } while (puVar11 != (ulonglong *)0x0 && bVar5 != 0);
      goto code_r0x0001417c1f61;
    case 0xe:
      if (puVar9 == (ulonglong *)0x0) {
        *(undefined2 *)param_1 = 0;
        return param_1;
      }
      goto LAB_1417c1f58;
    case 0x10:
      if (*(byte *)((longlong)unaff_retaddr + 2) == 0x73) {
        *(undefined2 *)param_1 = 0x100;
        return param_1;
      }
      goto LAB_1417c1f58;
    case 0x11:
      if (puVar9 == (ulonglong *)0x0) {
        if (iVar14 < 1) {
          return (ulonglong *)0x0;
        }
        param_3 = (ulonglong *)0x1;
        puVar11 = (ulonglong *)unaff_RBP[-1];
        goto code_r0x0001417c1fd2;
      }
      cVar6 = in((short)unaff_retaddr);
      *pcVar29 = cVar6;
      goto code_r0x0001417c200d;
    case 0x12:
      switch(*(int *)(&UNK_143337760 + (ulonglong)uStack_f._7_1_ * 4)) {
      case -0x4333775e:
        if ((short)*unaff_retaddr != 0x6f4e) goto LAB_1417c2079;
        goto code_r0x0001417c200d;
      case -0x4333775d:
        if (*(byte *)((longlong)unaff_retaddr + 2) != 0x73 || (short)*unaff_retaddr != 0x6559)
        goto LAB_1417c2079;
        (&UNK_143337761)[uVar10] = 1;
        goto code_r0x0001417c206f;
      default:
        goto LAB_1417c2079;
      case -0x43337754:
        uVar28 = *unaff_retaddr ^ 0x536564616d657250;
        uVar13 = (ulonglong)(uint)unaff_retaddr[1] ^ 0x65706168;
        break;
      case -0x43337752:
        uVar28 = *unaff_retaddr ^ 0x636e4564696c6156;
        uVar13 = *(ulonglong *)((longlong)unaff_retaddr + 6) ^ 0x657275736f6c636e;
      }
      if (uVar13 != 0 || uVar28 != 0) {
LAB_1417c2079:
        uVar33 = pdb_142d8f140(unaff_retaddr,param_3,&UNK_1433368f0,4);
        *(undefined8 *)(&UNK_143337768 + uVar10) = uVar33;
        *(byte *)puVar9 = 1;
        return puVar9;
      }
      (&UNK_143337761)[uVar10] = 2;
      goto code_r0x0001417c206f;
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1c:
      pcVar29[0x143337716] = pcVar29[0x143337716] + cVar6;
      pcVar3 = (code *)swi(1);
      puVar11 = (ulonglong *)(*pcVar3)();
      return puVar11;
    case 0x1b:
      puVar11 = (ulonglong *)(ulonglong)*(uint *)(unaff_RBP + -1);
      goto code_r0x0001417c1fd2;
    case 0x1d:
code_r0x0001417c200d:
      (&UNK_143337761)[uVar10] = 0;
code_r0x0001417c206f:
      *(byte *)puVar9 = 0;
      return puVar9;
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x24:
code_r0x0001417c2d32:
      param_5 = puVar27;
      in_stack_00000020 = param_1;
      break;
    case 0x21:
      *(byte *)puVar9 = (byte)*puVar9 + cVar6;
      unaff_retaddr = puVar11;
      goto pdb_140f679a0;
    case 0x22:
      goto code_r0x0001417c2cf7;
    case 0x23:
      *(undefined4 *)(unaff_RBP + -2) = 0x43337760;
      puVar9 = puVar11;
code_r0x0001417c2d37:
      unaff_RBP[-2] = puVar9;
      unaff_RBP[-3] = param_3;
      *(undefined **)(puVar18 + -8) = &UNK_1417c2d48;
      pdb_1409a45e0(param_3 + 3);
      puVar11 = (ulonglong *)unaff_RBP[-3];
      if (SBORROW8(0,unaff_RBP[-2])) {
        return puVar11;
      }
      if (unaff_RBP[-2] == 0) {
        return puVar11;
      }
      puVar11 = (ulonglong *)puVar11[1];
      param_3 = (ulonglong *)0x1;
      param_5 = *(undefined8 **)(puVar18 + 0x40);
      puVar19 = (undefined8 *)(puVar18 + 0x48);
      in_stack_00000020 = param_1;
      break;
    default:
      param_3 = (ulonglong *)0x8;
      param_2 = (ulonglong *)(ulonglong)(uint)(iVar14 << 5);
      goto code_r0x0001417c2df5;
    case 0x31:
    case 0x33:
      *(byte *)puVar9 = (byte)*puVar9 + cVar6;
code_r0x0001417c2df5:
      pub_1406abac0((byte *)unaff_RBP[-2],(ulonglong)param_2,(ulonglong)param_3);
      return extraout_RAX_00;
    case 0x36:
      *unaff_RBP = 0xfffffffffffffffe;
      puVar9 = (ulonglong *)(ulonglong)UNK_143337760;
      if (puVar9 < (ulonglong *)0x15) {
        puVar15 = &UNK_1433377f4;
code_r0x0001417c2e75:
                    /* WARNING: Could not recover jumptable at 0x0001417c2e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar11 = (ulonglong *)(*(code *)(puVar15 + *(int *)(puVar15 + (longlong)puVar9 * 4)))();
        return puVar11;
      }
      uStackX_10 = (ulonglong)puStackX_18;
      uStackX_8 = uVar28;
      uStack_f._7_1_ = (byte)_UNK_143337770;
      uStack_7 = (undefined4)((ulonglong)_UNK_143337770 >> 8);
      auStack_3 = SUB83((ulonglong)_UNK_143337770 >> 0x28,0);
      puStack_18 = (ulonglong *)&UNK_143337768;
      lStack_20 = _UNK_143337778;
      bStack_10 = 0;
      uStack_f._0_4_ = 0;
      uStack_f._4_3_ = 0;
      puStackX_18 = in_stack_00000020;
      while (lVar8 = CONCAT35(uStack_f._4_3_,CONCAT41((int)uStack_f,bStack_10)), lVar8 != lStack_20)
      {
        lStack_28 = lVar8 * 0x40 + CONCAT35(auStack_3,CONCAT41(uStack_7,uStack_f._7_1_));
        lVar8 = lVar8 + 1;
        bStack_10 = (byte)lVar8;
        uStack_f._0_4_ = (int)((ulonglong)lVar8 >> 8);
        uStack_f._4_3_ = (undefined3)((ulonglong)lVar8 >> 0x28);
        puStack_50 = &UNK_140973995;
        pdb_14098ca70();
        puStack_50 = &UNK_1409739a3;
        pdb_14098ca70(lStack_28 + 0x20);
      }
      puVar11 = (ulonglong *)CONCAT35(auStack_3,CONCAT41(uStack_7,uStack_f._7_1_));
      if (*puStack_18 == 0) {
        return puStack_18;
      }
      param_3 = (ulonglong *)0x8;
      puVar19 = (undefined8 *)&stack0x00000030;
      in_stack_00000020 = puStackX_18;
      break;
    case 0x38:
      if (uVar10 < 0xfffffffebccc88a0) {
        puVar15 = (undefined *)0x433377f4;
        goto code_r0x0001417c2e75;
      }
      unaff_RBP[-2] = puVar9;
      while (unaff_RBP[-4] != unaff_RBP[-1]) {
        unaff_RBP[-1] = unaff_RBP[-1] + 1;
        pdb_14098ca70(puVar9);
        puVar9 = puVar9 + 4;
      }
      if (((ulonglong *)unaff_RBP[-3])[1] == 0) {
        return (ulonglong *)unaff_RBP[-3];
      }
      param_3 = (ulonglong *)0x8;
      puVar11 = (ulonglong *)unaff_RBP[-2];
      puVar19 = (undefined8 *)&stack0x00000030;
      break;
    case 0x39:
      *(byte *)puVar9 = (byte)*puVar9 + cVar6;
      *(byte *)puVar9 = (byte)*puVar9 + cVar6;
      (&UNK_1433376e9)[uVar10] = (&UNK_1433376e9)[uVar10] + '`';
      puVar22 = &stack0xffffffffffffffc0;
      goto code_r0x0001417c2e05;
    case 0x3a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3b:
      puVar27 = (undefined8 *)&stack0xffffffffffffffc0;
      cVar6 = '\x18';
      do {
        unaff_RBP = unaff_RBP + -1;
        puVar27 = puVar27 + -1;
        *puVar27 = *unaff_RBP;
        cVar6 = cVar6 + -1;
      } while ('\0' < cVar6);
      puVar25 = auStack_4d0a;
      *(undefined1 *)(unaff_RBX + 0x14) = 0;
      param_2 = (ulonglong *)(ulonglong)(iVar14 + (uint)puVar9);
      goto code_r0x0001417c3283;
    case 0x3c:
      goto code_r0x0001417c3220;
    case 0x3d:
      (&UNK_143337764)[uVar10] = (&UNK_143337764)[uVar10];
      goto code_r0x0001417c3254;
    case 0x3e:
      goto code_r0x0001417c330e;
    case 0x3f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x40:
      puVar9 = (ulonglong *)((ulonglong)puVar9 & 0xffffffffffffff20);
      goto code_r0x0001417c3340;
    case 0x41:
      puVar11 = (ulonglong *)(**(code **)(uVar10 + 0x17bf7faa8))();
      return puVar11;
    case 0x42:
      goto code_r0x0001417c332b;
    case 0x43:
      uStackX_8 = CONCAT44(uStackX_8._4_4_,0x43337760);
      uStack_7 = 0x1433371;
      auStack_3 = (undefined1  [3])0x0;
      bStack_10 = (byte)&uStackX_8;
      uStack_f._0_4_ = (int)((ulonglong)&uStackX_8 >> 8);
      uStack_f._7_1_ = 0xd0;
      uStack_f._4_3_ = (undefined3)((ulonglong)&uStackX_8 >> 0x28);
      puStack_18 = (ulonglong *)0x1;
      goto code_r0x0001417c33cb;
    case 0x44:
      (&UNK_143337727)[uVar10] = (&UNK_143337727)[uVar10] + -0x60;
      puVar9 = (ulonglong *)((ulonglong)puVar9 & 0xffffffffffffff20);
      *(int *)puVar9 = (int)*puVar9 + (int)puVar9;
      *(byte *)puVar9 = (byte)*puVar9 + (char)puVar9;
code_r0x0001417c33cb:
      puVar11 = (ulonglong *)pdb_140f66e50(puVar9,&UNK_143336ab0,0xd,&UNK_143336abd);
      return puVar11;
    case 0x45:
      puVar15 = (undefined *)0x43336a60;
      goto code_r0x0001417c337c;
    case 0x46:
      goto code_r0x0001417c3513;
    case 0x47:
      pcVar3 = (code *)swi(3);
      puVar11 = (ulonglong *)(*pcVar3)();
      return puVar11;
    case 0x48:
      param_2 = (ulonglong *)((ulonglong)puVar9 & 0xffffffffffffff30);
      goto code_r0x0001417c355f;
    case 0x49:
      pcVar3 = (code *)swi(3);
      puVar11 = (ulonglong *)(*pcVar3)();
      return puVar11;
    case 0x4a:
      goto pdb_140f679a0;
    case 0x4b:
      uStack_7 = 0x1433377;
      auStack_3 = (undefined1  [3])0x0;
      bStack_10 = (byte)&uStackX_8;
      uStack_f._0_4_ = (int)((ulonglong)&uStackX_8 >> 8);
      uStack_f._4_3_ = (undefined3)((ulonglong)&uStackX_8 >> 0x28);
      uStack_f._4_4_ = CONCAT13(0x60,uStack_f._4_3_);
      puStack_18 = (ulonglong *)&UNK_1433372c8;
      puVar11 = (ulonglong *)pdb_140f661d0((uint)puVar9 | 0x1b738f6,&UNK_1433372e8,0xe);
      return puVar11;
    case 0x4c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4d:
    case 0x4e:
    case 0x4f:
      *(undefined2 *)(uVar10 + 0x4123f3a1e) = in_FS;
      *(byte *)((longlong)unaff_retaddr + -0x3f01b75c) =
           *(byte *)((longlong)unaff_retaddr + -0x3f01b75c) + 1;
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
      *(byte *)((longlong)unaff_retaddr + -0x3f01b75c) =
           *(byte *)((longlong)unaff_retaddr + -0x3f01b75c) + 1;
      *pcVar29 = (char)*param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto code_r0x0001406abac0;
  case 0x1c:
code_r0x0001417c1b9a:
    *(byte *)((longlong)puVar9 + -0x77) = *(byte *)((longlong)puVar9 + -0x77) + (char)puVar12;
    puVar1 = (uint *)((longlong)puVar12 * 5 + -0x3e);
    *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
    *(undefined8 *)(puVar17 + -8) = 0x1417c1bac;
    uVar28 = pdb_142d8f140();
    puVar9[1] = uVar28;
    puVar11 = (ulonglong *)0x1;
code_r0x0001417c1bb8:
    *(byte *)puVar9 = (byte)puVar11;
    return puVar9;
  case 0x1d:
    goto code_r0x0001417c1bb8;
  case 0x1e:
    uVar28 = pdb_142db90e0(&uStackX_10,0x43396a68,&UNK_1433966f8);
    param_1[1] = uVar28;
    *(undefined4 *)param_1 = 2;
    return param_1;
  case 0x1f:
    cRam0000000152a57872 = cRam0000000152a57872 + -8;
    cRam0000000152987972 = cRam0000000152987972 + -8;
    UNK_1433376f8 = UNK_1433376f8 + -0x18;
  case 0x2a:
    cRam0000000152a07a72 = cRam0000000152a07a72 + -8;
    cVar6 = UNK_1433376f8 + -8;
    cRam0000000152947b72 = cRam0000000152947b72 + -8;
    uVar7 = (uint)param_1[-0x10000000] & (uint)param_1;
    if ((POPCOUNT(uVar7 & 0xff) & 1U) == 0) {
      UNK_1433376f8 = UNK_1433376f8 + -0x10;
code_r0x0001417c1eac:
      if ((((*(byte *)((longlong)param_2 + 6) == 0x65) && (*(byte *)((longlong)param_2 + 7) == 0x53)
           ) && ((byte)param_2[1] == 0x68)) &&
         ((*(byte *)((longlong)param_2 + 9) == 0x61 &&
          (unaff_retaddr = param_2, *(byte *)((longlong)param_2 + 10) == 0x70)))) {
code_r0x0001417c1eda:
        if (*(byte *)((longlong)unaff_retaddr + 0xb) == 0x65) {
code_r0x0001417c1ee0:
          *(undefined2 *)param_1 = 0x200;
          return param_1;
        }
      }
    }
    else {
      UNK_1433376f8 = cVar6;
      if (uVar7 == 0) goto code_r0x0001417c1eac;
    }
LAB_1417c1f58:
    pdb_140f35800(unaff_RBP + -4);
code_r0x0001417c1f61:
    unaff_RBP[-1] = unaff_RBP[-3];
    uVar28 = pdb_142d8f140(unaff_RBP[-3],unaff_RBP[-2],&UNK_1433368f0,4);
    param_1[1] = uVar28;
code_r0x0001417c1f84:
    *(char *)param_1 = '\x01';
    if (0 < (longlong)unaff_RBP[-4]) {
      pub_1406abac0((byte *)unaff_RBP[-1],unaff_RBP[-4],1);
    }
LAB_1417c1f9f:
    return param_1;
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x29:
    goto code_r0x0001417c1ee0;
  case 0x28:
    uRam0000000043337700 = pdb_142deedc0(param_2,auStack_3 + 2,&UNK_143396738);
    uRam00000000433376f8 = 2;
    return (ulonglong *)0x433376f8;
  case 0x2b:
    puVar11 = (ulonglong *)(&UNK_1433376f7 + uVar10);
    if (puVar11 != (ulonglong *)0x0 && !bVar32) goto code_r0x0001417c1f45;
    goto code_r0x0001417c1f61;
  case 0x2c:
    *(undefined4 *)(param_1 + 1) = 0x433376f8;
    goto code_r0x0001417c1f84;
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x36:
    _UNK_143337681 = CONCAT12(UNK_143337683 + bVar4,_UNK_143337681);
    unaff_retaddr = param_2;
code_r0x0001417c1fd2:
    pub_1406abac0((byte *)puVar11,(ulonglong)unaff_retaddr,(ulonglong)param_3);
    return extraout_RAX;
  case 0x35:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x37:
    goto LAB_1417c1f9f;
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3e:
    pcVar3 = (code *)swi(3);
    puVar11 = (ulonglong *)(*pcVar3)();
    return puVar11;
  case 0x3b:
    in((short)param_2);
    cVar6 = cRam00000000b8410185 + -0x7b + bVar31;
    pcVar29 = (char *)CONCAT71(0xb84101,cVar6);
    *pcVar29 = *pcVar29 + cVar6;
    unaff_retaddr = puVar11;
    goto pdb_140f679a0;
  case 0x3c:
    pcVar3 = (code *)swi(3);
    puVar11 = (ulonglong *)(*pcVar3)();
    return puVar11;
  case 0x3d:
    unaff_RBP = (undefined8 *)&stack0xffffffffffffffc0;
    puVar18 = auStack_80;
    uStack_48 = 0xfffffffffffffffe;
    puVar9 = (ulonglong *)*puVar11;
    puVar20 = auStack_80;
    puVar27 = (undefined8 *)&stack0xffffffffffffffc0;
    param_3 = puVar11;
    if ((ulonglong *)*puVar11 != (ulonglong *)0x8000000000000001) goto code_r0x0001417c2d37;
code_r0x0001417c2cf7:
    bVar4 = (byte)param_3[1];
    if (6 < (ulonglong)bVar4) {
code_r0x0001417c2db0:
      *(undefined8 *)(puVar20 + 0x40) = *(undefined8 *)(puVar20 + 0x40);
      *(ulonglong **)(puVar20 + 0x38) = param_1;
      *(char **)(puVar20 + 0x30) = pcVar29;
      *(longlong *)(puVar20 + 0x28) = unaff_RBX;
      *(undefined8 *)(puVar20 + 0x20) = 0xfffffffffffffffe;
      uVar28 = param_3[2];
      if (uVar28 == 0) {
        uVar10 = 0;
      }
      else {
        uVar13 = param_3[3];
        uVar10 = param_3[4];
        *(undefined8 *)(puVar20 + -0x48) = 0;
        *(ulonglong *)(puVar20 + -0x40) = uVar28;
        *(ulonglong *)(puVar20 + -0x38) = uVar13;
        *(undefined8 *)(puVar20 + -0x28) = 0;
        *(ulonglong *)(puVar20 + -0x20) = uVar28;
        *(ulonglong *)(puVar20 + -0x18) = uVar13;
      }
      uVar28 = (ulonglong)(uVar28 != 0);
      *(ulonglong *)(puVar20 + -0x50) = uVar28;
      *(ulonglong *)(puVar20 + -0x30) = uVar28;
      *(ulonglong *)(puVar20 + -0x10) = uVar10;
      puVar17 = puVar20 + -0x50;
      *(undefined8 *)(puVar20 + -0x78) = 0x1409a4652;
      pdb_14192c4b0(puVar20 + -8,puVar17);
      lVar8 = *(longlong *)(puVar20 + -8);
      if (lVar8 != 0) {
        do {
          lVar2 = *(longlong *)(puVar20 + 8);
          *(undefined1 **)(puVar20 + 0x18) = puVar17;
          *(longlong *)(puVar20 + 0x10) = lVar2 * 0x20 + lVar8;
          uVar28 = *(ulonglong *)(lVar8 + 0x168 + lVar2 * 0x18);
          if (uVar28 != 0) {
            pbVar30 = *(byte **)(lVar8 + lVar2 * 0x18 + 0x170);
            *(undefined8 *)(puVar20 + -0x78) = 0x1409a46ad;
            pub_1406abac0(pbVar30,uVar28,1);
          }
          *(undefined8 *)(puVar20 + -0x78) = 0x1409a46b6;
          pdb_140966d70(puVar20 + 0x10);
          *(undefined8 *)(puVar20 + -0x78) = 0x1409a46c2;
          pdb_14192c4b0(puVar20 + -8,puVar17);
          lVar8 = *(longlong *)(puVar20 + -8);
        } while (lVar8 != 0);
      }
      return (ulonglong *)0x0;
    }
    puVar11 = (ulonglong *)(&UNK_1433377d8 + *(int *)(&UNK_1433377d8 + (ulonglong)bVar4 * 4));
    switch(bVar4) {
    default:
      goto code_r0x0001417c2daa;
    case 3:
      if (param_3[2] == 0) {
        return puVar11;
      }
      puVar11 = (ulonglong *)param_3[3];
      param_3 = (ulonglong *)0x1;
      puVar19 = (undefined8 *)(puVar20 + 0x48);
      puVar27 = *(undefined8 **)(puVar20 + 0x40);
      goto code_r0x0001417c2d32;
    case 4:
      uVar28 = param_3[3];
      uVar10 = param_3[4];
      puVar27[-2] = uVar28;
      puVar27[-3] = param_3;
      *(undefined **)(puVar20 + -8) = &UNK_1417c2d84;
      pdb_14098ae50(uVar28,uVar10);
      break;
    case 5:
      goto code_r0x0001417c2db0;
    }
    goto code_r0x0001417c2d85;
  default:
code_r0x0001417c2d85:
    puVar11 = (ulonglong *)puVar27[-3];
    unaff_RBP = puVar27;
    if (puVar11[2] == 0) {
code_r0x0001417c2daa:
      return puVar11;
    }
code_r0x0001417c2d92:
    param_3 = (ulonglong *)0x8;
    puVar11 = (ulonglong *)unaff_RBP[-2];
    puVar21 = (undefined8 *)(puVar20 + 0x48);
code_r0x0001417c2da3:
    param_5 = (undefined8 *)*puVar21;
    puVar19 = puVar21 + 1;
    in_stack_00000020 = param_1;
code_r0x0001406abac0:
    *(undefined8 **)((longlong)puVar19 + -8) = param_5;
    *(ulonglong **)((longlong)puVar19 + -0x10) = in_stack_00000020;
    if ((ulonglong *)0x10 < param_3) {
      puVar11 = (ulonglong *)puVar11[-1];
    }
    *(undefined **)((longlong)puVar19 + -0x40) = &UNK_140f3c37e;
    uVar33 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar11 = (ulonglong *)HeapFree(uVar33,0,puVar11);
    return puVar11;
  case 0x4b:
  case 0x4d:
    puVar20 = &stack0xffffffffffffffc0;
    cVar6 = UNK_14333767d + bVar4;
    _UNK_14333767b = CONCAT12(cVar6 + bVar31,_UNK_14333767b);
    (&UNK_143337740)[unaff_RBX] = (&UNK_143337740)[unaff_RBX] << (bVar4 & 0x1f);
    goto code_r0x0001417c2d92;
  case 0x50:
    goto code_r0x0001417c2df5;
  case 0x52:
code_r0x0001417c2e05:
    *(ulonglong **)(puVar22 + 0x10) = param_2;
    *(undefined8 **)(puVar22 + -8) = unaff_RBP;
    puVar11 = (ulonglong *)0x0;
    if ((param_2[6] & 0x7fffffffffffffff) != 0) {
      pbVar30 = *(byte **)(param_2[5] + 8);
      uVar28 = param_2[6];
      *(undefined **)(puVar22 + -0x30) = &UNK_1417c2e46;
      pub_1406abac0(pbVar30,uVar28,1);
      puVar11 = extraout_RAX_01;
    }
    return puVar11;
  case 0x53:
    goto code_r0x0001417c2da3;
  case 0x54:
    UNK_1433376c5 = UNK_1433376c5 + -0x76;
    in_R11 = in_R11 | (longlong)pcVar29 << (bVar4 & 0x3f);
    puVar9 = (ulonglong *)&UNK_1433376c7;
    if (&UNK_1433376c7 < param_1) {
      param_1 = (ulonglong *)(ulonglong)in_stack_143337693;
      goto code_r0x0001417c31ba;
    }
    goto LAB_1417c31c5;
  case 0x55:
    UNK_1433376f8 = '\0';
    goto LAB_1417c31ec;
  case 0x56:
    puVar9 = (ulonglong *)&UNK_1433376fc;
code_r0x0001417c31ba:
    uVar7 = (int)puVar9 << 3;
    puVar9 = (ulonglong *)(ulonglong)uVar7;
    in_R11 = in_R11 | (longlong)param_1 << ((byte)uVar7 & 0x3f);
LAB_1417c31c5:
    in_R11 = in_R11 << ((char)param_3 * '\b' & 0x3fU) | param_2[7];
    param_2[7] = in_R11;
    if (4 < in_R10) {
      param_3 = (ulonglong *)((longlong)param_3 + 4);
      goto LAB_1417c329b;
    }
LAB_1417c31ec:
    uVar13 = param_2[3] ^ in_R11;
    uVar28 = param_2[2];
    uVar10 = *param_2 + uVar28;
    uVar28 = (uVar28 << 0xd | uVar28 >> 0x33) ^ uVar10;
    puVar11 = (ulonglong *)((uVar13 << 0x10 | uVar13 >> 0x30) ^ param_2[1] + uVar13);
    pcVar29 = (char *)(param_2[1] + uVar13 + uVar28);
    puVar9 = (ulonglong *)((uVar10 << 0x20 | uVar10 >> 0x20) + (longlong)puVar11);
    param_1 = (ulonglong *)(uVar28 << 0x11 | uVar28 >> 0x2f);
    unaff_retaddr = param_2;
code_r0x0001417c3220:
    unaff_retaddr[2] = (ulonglong)param_1 ^ (ulonglong)pcVar29;
    unaff_retaddr[3] = ((longlong)puVar11 << 0x15 | (ulonglong)puVar11 >> 0x2b) ^ (ulonglong)puVar9;
    unaff_retaddr[1] = (longlong)pcVar29 << 0x20 | (ulonglong)pcVar29 >> 0x20;
    *unaff_retaddr = (ulonglong)puVar9 ^ in_R11;
    if (param_3 == (ulonglong *)0x8) {
LAB_1417c3246:
      param_3 = (ulonglong *)0x4;
      in_R10 = 0;
      puVar9 = (ulonglong *)0x4;
      puVar24 = (undefined1 *)puVar23;
code_r0x0001417c3254:
      param_2 = unaff_retaddr;
      puVar25 = puVar24;
      if ((ulonglong *)((ulonglong)puVar9 | 1) < param_3) {
LAB_1417c3260:
        param_4 = (ulonglong *)
                  ((ulonglong)param_4 |
                  (ulonglong)*(ushort *)((longlong)puVar9 + (longlong)(puVar24 + in_R10 + 4)) <<
                  ((char)puVar9 * '\b' & 0x3fU));
        puVar9 = (ulonglong *)((ulonglong)puVar9 | 2);
        param_2 = unaff_retaddr;
        puVar25 = puVar24;
      }
    }
    else {
      param_3 = (ulonglong *)((longlong)param_3 + -4);
      param_2 = unaff_retaddr;
code_r0x0001417c32aa:
      unaff_retaddr = param_2;
      puVar9 = (ulonglong *)0x0;
      param_4 = (ulonglong *)0x0;
      param_2 = unaff_retaddr;
      puVar24 = auStack_38;
      if ((ulonglong *)0x1 < param_3) goto LAB_1417c3260;
    }
    if (puVar9 < param_3) {
code_r0x0001417c3283:
      pbVar30 = (byte *)(in_R10 + (longlong)puVar9);
      uVar7 = (int)puVar9 << 3;
      puVar9 = (ulonglong *)(ulonglong)uVar7;
      param_4 = (ulonglong *)
                ((ulonglong)param_4 |
                (ulonglong)(byte)(puVar25 + 4)[(longlong)pbVar30] << ((byte)uVar7 & 0x3f));
    }
    param_2[7] = (ulonglong)param_4;
LAB_1417c329b:
    param_2[8] = (ulonglong)param_3;
    return puVar9;
  case 0x57:
    (&UNK_143337681)[uVar10] = (&UNK_143337681)[uVar10] + -8;
    puVar23 = unaff_RBP + 1;
    unaff_retaddr = param_2;
    goto LAB_1417c3246;
  case 0x58:
    goto code_r0x0001417c32aa;
  case 0x59:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5a:
    _UNK_143337685 = _UNK_143337685 >> 1 | (uint)((_UNK_143337685 & 1) != 0) << 0x1f;
    goto code_r0x0001417c32da;
  case 0x5b:
    puStack_18 = (ulonglong *)0x44eab386;
    puVar15 = &UNK_143336a5c;
code_r0x0001417c337c:
    puVar11 = (ulonglong *)pdb_140f66090(puVar11,puVar15,4,(longlong)&uStack_f + 7);
    return puVar11;
  case 0x5c:
    puVar27 = (undefined8 *)&stack0xffffffffffffffc0;
    cVar6 = '\b';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar27 = puVar27 + -1;
      *puVar27 = *unaff_RBP;
      cVar6 = cVar6 + -1;
    } while ('\0' < cVar6);
    puStack_88 = &stack0xffffffffffffffc0;
    uStack_f._0_4_ = (int)uStack_f + 1;
    if (1 < CONCAT71((int7)((ulonglong)puVar11 >> 8),
                     bVar4 & (&stack0x00000001)[(longlong)puVar11 * 4])) {
      param_4 = param_3;
    }
code_r0x0001417c32da:
                    /* WARNING: Could not recover jumptable at 0x0001417c32eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar11 = (ulonglong *)
              (*(code *)(&UNK_143337848 + *(int *)(&UNK_143337848 + (longlong)param_4 * 4)))
                        (param_2,&UNK_143337848,
                         &UNK_143337848 + *(int *)(&UNK_143337848 + (longlong)param_4 * 4));
    return puVar11;
  case 0x5d:
code_r0x0001417c3340:
    puStack_18 = puVar9;
code_r0x0001417c3359:
    puVar11 = (ulonglong *)pdb_140f66090();
    return puVar11;
  case 0x5e:
    goto code_r0x0001417c3359;
  case 0x5f:
code_r0x0001417c330e:
    puStack_18 = (ulonglong *)0x43336fc8;
    unaff_retaddr = (ulonglong *)&UNK_143336a64;
code_r0x0001417c332b:
    puVar11 = (ulonglong *)pdb_140f66090(puVar11,unaff_retaddr);
    return puVar11;
  case 0x60:
    _UNK_14333767b = _UNK_14333767b >> 4 | _UNK_14333767b << 0x1c;
    unaff_retaddr = puVar11;
    goto pdb_140f679a0;
  case 0x61:
    uStack_7 = (undefined4)((ulonglong)puVar11 >> 8);
    auStack_3 = SUB83((ulonglong)puVar11 >> 0x28,0);
    puStack_18 = (ulonglong *)&UNK_1433371d0;
    uStack_f._7_1_ = bVar4;
    goto code_r0x0001417c355f;
  case 0x62:
    puVar26 = &stack0xffffffffffffffc0;
  case 100:
    _UNK_143337681 = _UNK_143337681 + (int)puVar11;
    *(undefined1 **)(puVar26 + 0x28) = puVar26 + 0x40;
    *(undefined8 *)(puVar26 + 0x20) = 2;
    *(undefined8 *)(puVar26 + -8) = 0x1417c34fd;
    puVar11 = (ulonglong *)pdb_140f66e50(&UNK_143337630,&UNK_143336aff,7,&UNK_143336b06);
    return puVar11;
  case 99:
code_r0x0001417c3513:
    unaff_retaddr = param_2;
    goto pdb_140f679a0;
  case 0x65:
    param_2 = puVar9;
code_r0x0001417c355f:
    puVar11 = (ulonglong *)pdb_140f66090(param_2);
    return puVar11;
  case 0x66:
    unaff_retaddr = puVar9;
pdb_140f679a0:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar11 = (ulonglong *)(**(code **)(unaff_retaddr[1] + 0x18))(*unaff_retaddr);
    return puVar11;
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
    *(char *)param_1 = (char)*param_1 + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x0001417c1b86:
  *(byte *)puVar9 = 0;
  return puVar9;
}

