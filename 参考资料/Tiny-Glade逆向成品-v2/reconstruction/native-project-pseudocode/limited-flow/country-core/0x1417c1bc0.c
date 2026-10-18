// VA 0x1417c1bc0, PDB extent 176 bytes
// country_core::systems::wall::valid_enclosure::_::impl$0::deserialize::impl$2::visit_enum<serde::private::de::content::EnumRefDeserializer<serde_json::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000143337760) overlaps instruction at (ram,0x00014333775f)
    */
/* WARNING: Removing unreachable block (ram,0x0001409a46cb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::valid_enclosure::_::impl$0::deserialize::impl$2::visit_enum<serde::private::de::content::EnumRefDeserializer<serde_json::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 176 */

ulonglong *
pdb_1417c1bc0(ulonglong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *extraout_RAX;
  ulonglong *extraout_RAX_00;
  ulonglong *extraout_RAX_01;
  ulonglong *puVar10;
  ulonglong *puVar11;
  byte *arg0;
  ulonglong uVar12;
  int iVar13;
  undefined *puVar14;
  longlong unaff_RBX;
  undefined8 *puVar15;
  undefined1 *puVar16;
  ulonglong **ppuVar17;
  undefined8 *unaff_RBP;
  undefined8 *unaff_RSI;
  undefined1 *unaff_RDI;
  ulonglong uVar18;
  longlong in_R10;
  char *pcVar19;
  ulonglong in_R11;
  undefined2 in_FS;
  ulonglong *in_stack_00000010;
  undefined8 *puStackX_18;
  undefined1 auStackX_20 [8];
  undefined1 auStack_4d1a [19546];
  undefined8 uStack_c0;
  ulonglong auStack_98 [3];
  undefined *puStack_80;
  ulonglong uStack_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  undefined *puStack_60;
  undefined1 auStack_48 [4];
  ushort auStack_44 [2];
  longlong lStack_40;
  ulonglong *puStack_38;
  ulonglong *puStack_30;
  ulonglong *puStack_28;
  longlong lVar20;
  ulonglong in_stack_ffffffffffffffe8;
  ulonglong *puStack_10;
  
  puVar16 = auStack_48;
  ppuVar17 = (ulonglong **)auStack_48;
  pdb_141b4cd90(&stack0xffffffffffffffe8);
  puVar11 = (ulonglong *)&UNK_143337760;
  uVar8 = (ulonglong)*(int *)(&UNK_143337760 + (in_stack_ffffffffffffffe8 & 0xff) * 4);
  puVar9 = (ulonglong *)(&UNK_143337760 + uVar8);
  iVar13 = (int)puStack_10;
  cVar4 = (char)puVar9;
  puVar10 = puStack_10;
  puVar3 = auStack_48;
  puVar15 = unaff_RBP;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(in_stack_ffffffffffffffe8 & 0xff) {
  case 0:
    if ((puStack_10 == (ulonglong *)0x0) || ((char)*puStack_10 == '\x12')) {
      uVar8 = 0x200000000;
code_r0x0001417c1c47:
      *param_1 = uVar8;
      return param_1;
    }
    goto code_r0x0001417c1c53;
  case 1:
    if ((puStack_10 == (ulonglong *)0x0) || ((char)*puStack_10 == '\x12')) {
      uVar8 = 0x300000000;
      goto code_r0x0001417c1c47;
    }
code_r0x0001417c1c53:
    uVar8 = pdb_142deedc0(puStack_10,&stack0xffffffffffffffe7,&UNK_143396738);
    param_1[1] = uVar8;
code_r0x0001417c1c24:
    *(undefined4 *)param_1 = 1;
    return param_1;
  case 2:
    pdb_141b569d0(param_1,puStack_10,&UNK_143336d98,1);
    return param_1;
  case 3:
    param_1[1] = (ulonglong)puStack_10;
    goto code_r0x0001417c1c24;
  case 4:
                    /* WARNING: Could not emulate address calculation at 0x0001417c1e4b */
                    /* WARNING: Treating indirect jump as call */
    puVar10 = (ulonglong *)
              (*(code *)(&UNK_143337770 + *(int *)(&UNK_143337770 + (longlong)puVar9 * 4)))();
    return puVar10;
  case 5:
    if (*(char *)((longlong)puStack_10 + 0xb) == 'e') {
      *(undefined2 *)param_1 = 0x200;
      return param_1;
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xf:
    param_1 = (ulonglong *)(ulonglong)((uint)param_1 | *(uint *)((longlong)unaff_RBP + 0x75));
    while( true ) {
      bVar5 = (byte)puVar9 | 0x80;
      if ((POPCOUNT(bVar5) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar11 = (ulonglong *)((longlong)puVar11 + -1);
      if (puVar11 == (ulonglong *)0x0 || bVar5 == 0) break;
      puVar9 = (ulonglong *)
               CONCAT71((int7)((ulonglong)puVar9 >> 8),
                        bVar5 + *(char *)(((ulonglong)puVar9 | 0x80) + 0x75750b7a));
    }
    break;
  case 0xe:
    if (puVar9 == (ulonglong *)0x0) {
      *(undefined2 *)param_1 = 0;
      return param_1;
    }
    break;
  case 0x10:
    if (*(char *)((longlong)puStack_10 + 2) == 's') {
      *(undefined2 *)param_1 = 0x100;
      return param_1;
    }
    break;
  case 0x11:
    if (puVar9 == (ulonglong *)0x0) {
      if (iVar13 < 1) {
        return (ulonglong *)0x0;
      }
      param_3 = (ulonglong *)0x1;
      arg0 = (byte *)unaff_RBP[-1];
      goto code_r0x0001417c1fd2;
    }
    uVar1 = in((short)puStack_10);
    *unaff_RDI = uVar1;
    goto code_r0x0001417c200d;
  case 0x12:
    switch(*(int *)(&UNK_143337760 + (in_stack_ffffffffffffffe8 & 0xff) * 4)) {
    case -0x4333775e:
      if ((short)*puStack_10 != 0x6f4e) goto LAB_1417c2079;
      goto code_r0x0001417c200d;
    case -0x4333775d:
      if (*(char *)((longlong)puStack_10 + 2) != 's' || (short)*puStack_10 != 0x6559)
      goto LAB_1417c2079;
      (&UNK_143337761)[uVar8] = 1;
      goto code_r0x0001417c206f;
    default:
      goto LAB_1417c2079;
    case -0x43337754:
      uVar12 = *puStack_10 ^ 0x536564616d657250;
      uVar18 = (ulonglong)(uint)puStack_10[1] ^ 0x65706168;
      break;
    case -0x43337752:
      uVar12 = *puStack_10 ^ 0x636e4564696c6156;
      uVar18 = *(ulonglong *)((longlong)puStack_10 + 6) ^ 0x657275736f6c636e;
    }
    if (uVar18 != 0 || uVar12 != 0) {
LAB_1417c2079:
      uVar7 = pdb_142d8f140(puStack_10,param_3,&UNK_1433368f0,4);
      *(undefined8 *)(&UNK_143337768 + uVar8) = uVar7;
      *(char *)puVar9 = '\x01';
      return puVar9;
    }
    (&UNK_143337761)[uVar8] = 2;
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
    unaff_RDI[0x143337716] = unaff_RDI[0x143337716] + cVar4;
    pcVar2 = (code *)swi(1);
    puVar10 = (ulonglong *)(*pcVar2)();
    return puVar10;
  case 0x1b:
    arg0 = (byte *)(ulonglong)*(uint *)(unaff_RBP + -1);
code_r0x0001417c1fd2:
    pub_1406abac0(arg0,(ulonglong)puStack_10,(ulonglong)param_3);
    return extraout_RAX;
  case 0x1d:
code_r0x0001417c200d:
    (&UNK_143337761)[uVar8] = 0;
code_r0x0001417c206f:
    *(char *)puVar9 = '\0';
    return puVar9;
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x24:
    goto code_r0x0001417c2d32;
  case 0x21:
    *(char *)puVar9 = (char)*puVar9 + cVar4;
    puVar9 = puStack_10;
    goto pdb_140f679a0;
  case 0x22:
    bVar5 = (byte)param_3[1];
    if (6 < (ulonglong)bVar5) {
code_r0x0001417c2db0:
      puStack_28 = (ulonglong *)0xfffffffffffffffe;
      uVar8 = param_3[2];
      if (uVar8 != 0) {
        puStack_80 = (undefined *)param_3[3];
        auStack_98[1] = 0;
        uStack_70 = 0;
        auStack_98[2] = uVar8;
        uStack_68 = uVar8;
        puStack_60 = puStack_80;
      }
      auStack_98[0] = (ulonglong)(uVar8 != 0);
      uStack_c0 = 0x1409a4652;
      uStack_78 = auStack_98[0];
      puStack_10 = param_1;
      pdb_14192c4b0(&stack0xffffffffffffffb0,auStack_98);
      do {
        puStack_38 = (ulonglong *)(lStack_40 * 0x20 + 0x1417c1bd2);
        uVar8 = *(ulonglong *)(lStack_40 * 0x18 + 0x1417c1d3a);
        puStack_30 = auStack_98;
        if (uVar8 != 0) {
          uStack_c0 = 0x1409a46ad;
          pub_1406abac0(*(byte **)(lStack_40 * 0x18 + 0x1417c1d42),uVar8,1);
        }
        uStack_c0 = 0x1409a46b6;
        pdb_140966d70(&puStack_38);
        uStack_c0 = 0x1409a46c2;
        pdb_14192c4b0(&stack0xffffffffffffffb0,auStack_98);
      } while( true );
    }
    switch(bVar5) {
    default:
      return (ulonglong *)(&UNK_1433377d8 + *(int *)(&UNK_1433377d8 + (ulonglong)bVar5 * 4));
    case 3:
      puVar10 = (ulonglong *)param_3[2];
      if (puVar10 == (ulonglong *)0x0) {
        return (ulonglong *)(&UNK_1433377d8 + *(int *)(&UNK_1433377d8 + (ulonglong)bVar5 * 4));
      }
      puVar11 = (ulonglong *)param_3[3];
      param_3 = (ulonglong *)0x1;
      puVar3 = (undefined1 *)register0x00000020;
      puVar15 = unaff_RSI;
      break;
    case 4:
      uVar8 = param_3[3];
      uVar12 = param_3[4];
      unaff_RBP[-2] = uVar8;
      unaff_RBP[-3] = param_3;
      pdb_14098ae50(uVar8,uVar12);
      uVar8 = ((ulonglong *)unaff_RBP[-3])[2];
      if (uVar8 == 0) {
        return (ulonglong *)unaff_RBP[-3];
      }
      puVar10 = (ulonglong *)(uVar8 << 5);
      param_3 = (ulonglong *)0x8;
      puVar11 = (ulonglong *)unaff_RBP[-2];
      puStackX_18 = unaff_RSI;
      goto code_r0x0001406abac0;
    case 5:
      goto code_r0x0001417c2db0;
    }
    goto code_r0x0001417c2d32;
  case 0x23:
    *(undefined4 *)(unaff_RBP + -2) = 0x43337760;
    unaff_RBP[-3] = param_3;
    pdb_1409a45e0(param_3 + 3);
    puVar10 = (ulonglong *)unaff_RBP[-2];
    puVar11 = (ulonglong *)unaff_RBP[-3];
    if (SBORROW8(0,(longlong)puVar10)) {
      return puVar11;
    }
    if (puVar10 == (ulonglong *)0x0) {
      return puVar11;
    }
    puVar11 = (ulonglong *)puVar11[1];
    param_3 = (ulonglong *)0x1;
    puStackX_18 = unaff_RSI;
    goto code_r0x0001406abac0;
  default:
    goto code_r0x0001417c2dea;
  case 0x31:
  case 0x33:
    *(char *)puVar9 = (char)*puVar9 + cVar4;
    goto code_r0x0001417c2dea;
  case 0x36:
    *unaff_RBP = 0xfffffffffffffffe;
    puVar11 = _UNK_143337770;
    puVar9 = (ulonglong *)(ulonglong)UNK_143337760;
    if (puVar9 < (ulonglong *)0x15) {
      puVar14 = &UNK_1433377f4;
code_r0x0001417c2e75:
                    /* WARNING: Could not recover jumptable at 0x0001417c2e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar10 = (ulonglong *)(*(code *)(puVar14 + *(int *)(puVar14 + (longlong)puVar9 * 4)))();
      return puVar10;
    }
    puStack_10 = (ulonglong *)0xfffffffffffffffe;
    puStack_28 = (ulonglong *)&UNK_143337768;
    puStack_30 = (ulonglong *)_UNK_143337778;
    for (lVar20 = 0; (ulonglong *)lVar20 != puStack_30; lVar20 = lVar20 + 1) {
      puStack_38 = puVar11 + lVar20 * 8;
      puStack_60 = &UNK_140973995;
      pdb_14098ca70();
      puStack_60 = &UNK_1409739a3;
      pdb_14098ca70(puStack_38 + 4);
    }
    if (*puStack_28 == 0) {
      return puStack_28;
    }
    puVar10 = (ulonglong *)(*puStack_28 << 6);
    param_3 = (ulonglong *)0x8;
    register0x00000020 = (BADSPACEBASE *)auStackX_20;
    param_1 = in_stack_00000010;
    goto code_r0x0001406abac0;
  case 0x38:
    if (uVar8 < 0xfffffffebccc88a0) {
      puVar14 = (undefined *)0x433377f4;
      goto code_r0x0001417c2e75;
    }
    unaff_RBP[-2] = puVar9;
    while (unaff_RBP[-4] != unaff_RBP[-1]) {
      unaff_RBP[-1] = unaff_RBP[-1] + 1;
      pdb_14098ca70(puVar9);
      puVar9 = puVar9 + 4;
    }
    uVar8 = ((ulonglong *)unaff_RBP[-3])[1];
    if (uVar8 == 0) {
      return (ulonglong *)unaff_RBP[-3];
    }
    puVar10 = (ulonglong *)(uVar8 << 5);
    param_3 = (ulonglong *)0x8;
    puVar11 = (ulonglong *)unaff_RBP[-2];
    register0x00000020 = (BADSPACEBASE *)auStackX_20;
    param_1 = in_stack_00000010;
code_r0x0001406abac0:
    *(undefined8 **)((longlong)register0x00000020 + -8) = puStackX_18;
    *(ulonglong **)((longlong)register0x00000020 + -0x10) = param_1;
    puVar9 = puVar11;
    if ((ulonglong *)0x10 < param_3) {
      puVar9 = (ulonglong *)puVar11[-1];
    }
    *(undefined **)((longlong)register0x00000020 + -0x40) = &UNK_140f3c37e;
    uVar7 = GetProcessHeap(puVar11,puVar10);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar10 = (ulonglong *)HeapFree(uVar7,0,puVar9);
    return puVar10;
  case 0x39:
    *(char *)puVar9 = (char)*puVar9 + cVar4;
    *(char *)puVar9 = (char)*puVar9 + cVar4;
    (&UNK_1433376e9)[uVar8] = (&UNK_1433376e9)[uVar8] + '`';
    puVar10 = (ulonglong *)0x0;
    if ((puStack_10[6] & 0x7fffffffffffffff) != 0) {
      puStack_80 = &UNK_1417c2e46;
      pub_1406abac0(*(byte **)(puStack_10[5] + 8),puStack_10[6],1);
      puVar10 = extraout_RAX_01;
    }
    return puVar10;
  case 0x3a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3b:
    puVar15 = (undefined8 *)&stack0xffffffffffffffb0;
    cVar4 = '\x18';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar15 = puVar15 + -1;
      *puVar15 = *unaff_RBP;
      cVar4 = cVar4 + -1;
    } while ('\0' < cVar4);
    puVar16 = auStack_4d1a;
    *(undefined1 *)(unaff_RBX + 0x14) = 0;
    puStack_10 = (ulonglong *)(ulonglong)(iVar13 + (uint)puVar9);
    goto code_r0x0001417c3283;
  case 0x3c:
    puStack_10[2] = (ulonglong)param_1 ^ (ulonglong)unaff_RDI;
    puVar11 = (ulonglong *)((ulonglong)puVar9 ^ 0x28666eec000000);
    puStack_10[3] = (ulonglong)puVar11;
    puStack_10[1] = (longlong)unaff_RDI << 0x20 | (ulonglong)unaff_RDI >> 0x20;
    *puStack_10 = (ulonglong)puVar9 ^ in_R11;
    if (param_3 == (ulonglong *)0x8) {
      param_3 = (ulonglong *)0x4;
      in_R10 = 0;
      puVar9 = (ulonglong *)0x4;
      goto code_r0x0001417c324e;
    }
    param_3 = (ulonglong *)((longlong)param_3 + -4);
    puVar9 = (ulonglong *)0x0;
    param_4 = 0;
    if ((ulonglong *)0x1 < param_3) goto LAB_1417c3260;
    goto LAB_1417c327e;
  case 0x3d:
code_r0x0001417c324e:
    *(char *)((longlong)puVar9 + 4) = *(char *)((longlong)puVar9 + 4) >> ((byte)puVar11 & 0x1f);
    if ((ulonglong *)((ulonglong)puVar9 | 1) < param_3) {
LAB_1417c3260:
      param_4 = param_4 | (ulonglong)*(ushort *)((longlong)puVar9 + (longlong)auStack_44 + in_R10)
                          << ((char)puVar9 * '\b' & 0x3fU);
      puVar9 = (ulonglong *)((ulonglong)puVar9 | 2);
    }
LAB_1417c327e:
    if (puVar9 < param_3) {
code_r0x0001417c3283:
      pcVar19 = (char *)(in_R10 + (longlong)puVar9);
      uVar6 = (int)puVar9 << 3;
      puVar9 = (ulonglong *)(ulonglong)uVar6;
      param_4 = param_4 | (ulonglong)(byte)(puVar16 + 4)[(longlong)pcVar19] << ((byte)uVar6 & 0x3f);
    }
    puStack_10[7] = param_4;
    puStack_10[8] = (ulonglong)param_3;
    return puVar9;
  case 0x3e:
    puStack_10 = (ulonglong *)&UNK_143336a64;
    puStack_28 = puVar9;
  case 0x42:
    puVar10 = (ulonglong *)pdb_140f66090(&UNK_143337760,puStack_10);
    return puVar10;
  case 0x3f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x40:
    puVar9 = (ulonglong *)pdb_140f66090(&UNK_143337760,&UNK_143336a6b,5,&stack0xffffffffffffffe8);
    ppuVar17 = &puStack_10;
  case 0x41:
    pcVar2 = (code *)puVar9[0x7189069];
    *(undefined8 *)((longlong)ppuVar17 + -8) = 0x1417c3363;
    puVar10 = (ulonglong *)(*pcVar2)();
    return puVar10;
  case 0x43:
    puStack_28 = (ulonglong *)0x1;
    goto code_r0x0001417c33cb;
  case 0x44:
    (&UNK_143337727)[uVar8] = (&UNK_143337727)[uVar8] + -0x60;
    puVar9 = (ulonglong *)((ulonglong)puVar9 & 0xffffffffffffff20);
    *(int *)puVar9 = (int)*puVar9 + (int)puVar9;
    *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
code_r0x0001417c33cb:
    puVar10 = (ulonglong *)pdb_140f66e50(puVar9,&UNK_143336ab0,0xd,&UNK_143336abd);
    return puVar10;
  case 0x45:
    puVar10 = (ulonglong *)pdb_140f66090(&UNK_143337760,0x43336a60,4,&stack0xffffffffffffffe8);
    return puVar10;
  case 0x46:
    puVar9 = (ulonglong *)&UNK_143336b20;
    puVar11 = puStack_10;
    goto pdb_140f679a0;
  case 0x47:
    pcVar2 = (code *)swi(3);
    puVar10 = (ulonglong *)(*pcVar2)();
    return puVar10;
  case 0x48:
    puVar10 = (ulonglong *)pdb_140f66090((ulonglong)puVar9 & 0xffffffffffffff30,puStack_10,0xe);
    return puVar10;
  case 0x49:
    pcVar2 = (code *)swi(3);
    puVar10 = (ulonglong *)(*pcVar2)();
    return puVar10;
  case 0x4a:
    puVar11 = (ulonglong *)((ulonglong)puStack_10 & 0xffffffff);
pdb_140f679a0:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar10 = (ulonglong *)(**(code **)(puVar11[1] + 0x18))(*puVar11,puVar9);
    return puVar10;
  case 0x4b:
    puStack_28 = (ulonglong *)&UNK_1433372c8;
    puVar10 = (ulonglong *)pdb_140f661d0((uint)puVar9 | 0x1b738f6,&UNK_1433372e8,0xe);
    return puVar10;
  case 0x4c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4d:
  case 0x4e:
  case 0x4f:
    *(undefined2 *)(uVar8 + 0x4123f3a1e) = in_FS;
    *(char *)((longlong)puStack_10 + -0x3f01b75c) =
         *(char *)((longlong)puStack_10 + -0x3f01b75c) + '\x01';
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
    *(char *)((longlong)puStack_10 + -0x3f01b75c) =
         *(char *)((longlong)puStack_10 + -0x3f01b75c) + '\x01';
    *unaff_RDI = (char)*param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pdb_140f35800(unaff_RBP + -4);
  unaff_RBP[-1] = unaff_RBP[-3];
  uVar8 = pdb_142d8f140(unaff_RBP[-3],unaff_RBP[-2],&UNK_1433368f0,4);
  param_1[1] = uVar8;
  *(undefined1 *)param_1 = 1;
  if (0 < (longlong)unaff_RBP[-4]) {
    pub_1406abac0((byte *)unaff_RBP[-1],unaff_RBP[-4],1);
  }
  return param_1;
code_r0x0001417c2d32:
  puStackX_18 = puVar15;
  register0x00000020 = (BADSPACEBASE *)puVar3;
  goto code_r0x0001406abac0;
code_r0x0001417c2dea:
  pub_1406abac0((byte *)unaff_RBP[-2],(ulonglong)(uint)(iVar13 << 5),8);
  return extraout_RAX_00;
}

