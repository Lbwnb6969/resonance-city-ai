// VA 0x1402f1e00, PDB extent 1194 bytes
// tiny_glade::app_config::get_cli_args
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/app_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000142f3b143) overlaps instruction at (ram,0x000142f3b142)
    */
/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure: tiny_glade::app_config::get_cli_args
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/app_config.rs
   Extent: 1194 */

uint * pdb_1402f1e00(uint *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint *puVar9;
  undefined7 uVar14;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined8 uVar13;
  byte bVar15;
  uint *arg0;
  uint *arg0_00;
  uint *puVar17;
  ulonglong *arg1;
  undefined1 *puVar18;
  undefined1 *puVar19;
  uint **ppuVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulonglong *puVar26;
  longlong lVar27;
  ulonglong *puVar28;
  undefined4 *puVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined1 *in_R11;
  byte *pbVar32;
  byte *pbVar33;
  undefined2 in_FS;
  uint *puStack_270;
  undefined1 auStack_268 [8];
  undefined8 auStack_260 [3];
  undefined *puStack_248;
  uint *puStack_240;
  undefined *puStack_238;
  uint *puStack_230;
  undefined1 *puStack_228;
  undefined4 *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined4 *puStack_200;
  uint *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined4 auStack_1e8 [2];
  undefined4 uStack_1e0;
  undefined8 *puStack_f8;
  code *pcStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  byte bStack_a8;
  undefined7 uStack_a7;
  byte *pbStack_a0;
  uint *puStack_98;
  longlong lStack_90;
  uint *puStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uVar16;
  
  puVar21 = (undefined8 *)auStack_268;
  puVar24 = (undefined8 *)auStack_268;
  ppuVar20 = (uint **)auStack_268;
  puVar23 = auStack_268;
  puVar22 = auStack_268;
  puVar19 = auStack_268;
  uStack_48 = 0xfffffffffffffffe;
  puStack_270 = (uint *)0x1402f1e32;
  pdb_1403799c0(&puStack_248);
  puVar9 = puStack_240;
  if ((int)puStack_248 != 2) {
    puStack_270 = (uint *)0x1402f1e4a;
    pub_142e32760(param_1,&puStack_248,0x150);
    return param_1;
  }
  puStack_68 = puStack_240;
  puVar17 = (uint *)(ulonglong)*(byte *)((longlong)puStack_240 + 0xd5);
  puStack_270 = (uint *)0x1402f1e78;
  uStack_50 = pdb_14026b080();
  pbVar32 = *(byte **)(puVar9 + 10);
  pbVar33 = pbVar32 + *(longlong *)(puVar9 + 0xc);
  puVar26 = *(ulonglong **)(puVar9 + 0x10) + *(longlong *)(puVar9 + 0x12) * 4;
  puVar4 = *(ulonglong **)(puVar9 + 0x10);
LAB_1402f1ea8:
  do {
    arg1 = puVar4;
    puVar25 = &uStack_50;
    if (pbVar32 == pbVar33) {
      puStack_270 = (uint *)0x1402f209d;
      pdb_1406cf3f0(&uStack_e8,500,200);
      puStack_270 = (uint *)0x1402f20b4;
      pdb_1406d03f0(&bStack_a8,&uStack_e8,2);
      puStack_270 = (uint *)0x1402f20d5;
      pdb_1406d0440(&uStack_e8,&bStack_a8,&UNK_142f39550,0x10);
      pcStack_f0 = pdb_14026d520;
      puStack_270 = (uint *)0x1402f20fe;
      puStack_f8 = puVar25;
      pdb_1402f1d70(&bStack_a8,&puStack_f8);
      uStack_58 = CONCAT71(uStack_a7,bStack_a8);
      pbStack_60 = pbStack_a0;
      puStack_270 = (uint *)0x1402f2135;
      pdb_1406cf2c0(&bStack_a8,&uStack_e8,pbStack_a0,puStack_98);
      puStack_270 = (uint *)0x1402f2142;
      pdb_1406cf430(&bStack_a8);
      if (uStack_58 != 0) {
        puStack_270 = (uint *)0x1402f2166;
        pub_1406abac0(pbStack_60,uStack_58,1);
      }
      puStack_270 = (uint *)0x1402f2173;
      pdb_1404b5840(&uStack_50);
      puStack_270 = (uint *)0x1402f2180;
      pdb_14026b410(&puStack_68);
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
      (*UNRECOVERED_JUMPTABLE)();
    }
    if (arg1 == puVar26) {
                    /* WARNING: Subroutine does not return */
      puStack_270 = (uint *)0x1402f2080;
      pdb_142dc8150(&UNK_142f467e8);
    }
    puVar4 = arg1 + 4;
    bVar5 = *pbVar32;
    puVar29 = (undefined4 *)(ulonglong)bVar5;
    pbVar32 = pbVar32 + 1;
  } while (bVar5 == 0xf);
  uVar8 = (ulonglong)*(int *)(&UNK_142f3b0cc + (ulonglong)(byte)*arg1 * 4);
  puVar9 = (uint *)(&UNK_142f3b0cc + uVar8);
  bVar5 = (byte)puVar9;
  uVar6 = (uint)puVar9;
  uVar14 = (undefined7)((ulonglong)puVar9 >> 8);
  bVar15 = (byte)puVar17;
  uVar16 = SUB84(puVar17,0);
  puVar18 = auStack_268;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((byte)*arg1) {
  case 0:
    uStack_e8 = uStack_e8 & 0xffffffffffffff00;
    goto code_r0x0001402f1f61;
  case 1:
  case 6:
    uStack_e8 = *arg1;
    uStack_e0 = arg1[1];
    uStack_d8 = arg1[2];
    uStack_d0 = arg1[3];
    goto code_r0x0001402f1f61;
  case 2:
    puStack_270 = (uint *)0x1402f1f59;
    pdb_140f60be0(&uStack_e0,arg1 + 1);
    uStack_e8 = CONCAT71(uStack_e8._1_7_,2);
    goto code_r0x0001402f1f61;
  case 3:
    puStack_270 = (uint *)0x1402f1f1c;
    pdb_140174e40(&uStack_e0,arg1 + 1);
    uStack_e8 = CONCAT71(uStack_e8._1_7_,3);
    goto code_r0x0001402f1f61;
  case 4:
    puStack_270 = (uint *)0x1402f1f36;
    pdb_140f60be0(&uStack_e0,arg1 + 1);
    uStack_e8 = CONCAT71(uStack_e8._1_7_,4);
    goto code_r0x0001402f1f61;
  case 5:
    puStack_270 = (uint *)0x1402f1f02;
    pdb_140174e40(&uStack_e0,arg1 + 1);
    uStack_e8 = CONCAT71(uStack_e8._1_7_,5);
code_r0x0001402f1f61:
    puVar17 = (uint *)&bStack_a8;
    puStack_270 = (uint *)0x1402f1f7a;
    pdb_14026b730(puVar17,puVar25,puVar29,&uStack_e8);
    puVar9 = (uint *)(ulonglong)bStack_a8;
    param_3 = puVar29;
  case 7:
  case 9:
    goto code_r0x0001402f1f82;
  case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    return puVar9;
  case 0xc:
  case 0xd:
  case 0x2b:
  case 0x38:
  case 0x39:
    *(byte *)puVar9 = (char)*puVar9 + bVar5 + (0xfffffffebd0c4f33 < uVar8);
    *(byte *)puVar9 = (char)*puVar9 + bVar5;
    puVar18 = auStack_268;
  case 0x6b:
code_r0x0001402f35f9:
    puVar9 = (uint *)((longlong)puVar17 + (longlong)puVar25);
    lVar27 = *(longlong *)((longlong)puVar17 + (longlong)puVar25);
    puVar19 = puVar18;
code_r0x0001402f3601:
    if (lVar27 == 0) {
      return puVar9;
    }
code_r0x0001402f3606:
    uVar30 = *(undefined8 *)(puVar9 + 2);
    uVar13 = *(undefined8 *)(puVar19 + 0x30);
    *(undefined4 **)(puVar19 + 0x30) = auStack_1e8;
    *(undefined8 *)(puVar19 + 0x28) = uVar13;
    *(undefined **)(puVar19 + -8) = &UNK_140f3c37e;
    uVar13 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar9 = (uint *)HeapFree(uVar13,0,uVar30);
    return puVar9;
  case 0x1f:
    puVar9 = (uint *)(ulonglong)puVar17[0xe];
    param_3 = (undefined4 *)0x1;
    goto code_r0x0001402f35a2;
  case 0x32:
    pcVar11 = (char *)((ulonglong)(uVar6 >> 0x13) - 0x77);
    *pcVar11 = *pcVar11 + bVar15;
    UNRECOVERED_JUMPTABLE = (code *)swi(1);
    puVar9 = (uint *)(*UNRECOVERED_JUMPTABLE)();
    return puVar9;
  case 0x33:
    *(byte *)puVar9 = (char)*puVar9 + bVar5;
code_r0x0001402f35a2:
    puStack_270 = (uint *)&UNK_1402f35ad;
    pub_1406abac0((byte *)puVar9,(ulonglong)arg1,(ulonglong)param_3);
    lVar27 = *(longlong *)(puVar17 + 6);
    if (SBORROW8(0,lVar27)) {
      return (uint *)-lVar27;
    }
    puVar9 = puVar17 + 6;
    goto code_r0x0001402f3601;
  case 0x34:
  case 0x35:
    puVar18 = (undefined1 *)(ulonglong)((int)auStack_268 - 0x28);
    puVar25 = (undefined8 *)0x8;
    if ((ulonglong)(byte)*puVar17 < 0x31) {
      UNRECOVERED_JUMPTABLE =
           (code *)(&UNK_142f3b0f8 + *(int *)(&UNK_142f3b0f8 + (ulonglong)(byte)*puVar17 * 4));
      goto code_r0x0001402f3586;
    }
    goto code_r0x0001402f35f9;
  case 0x36:
  case 0x37:
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(uVar6 + (int)arg1);
code_r0x0001402f3586:
                    /* WARNING: Could not recover jumptable at 0x0001402f3586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar9 = (uint *)(*UNRECOVERED_JUMPTABLE)();
    return puVar9;
  case 0x3c:
    return puVar17;
  case 0x3d:
    goto code_r0x0001402f3885;
  case 0x3e:
    (&UNK_142f3b04f)[uVar8] = (&UNK_142f3b04f)[uVar8] + bVar15;
    *puVar9 = *puVar9 >> 8 | *puVar9 << 0x18;
    puStack_248 = &UNK_142f397b8;
    puVar9 = (uint *)&UNK_142f39c5d;
    auStack_1e8[0] = uVar16;
    goto code_r0x0001402f3e74;
  case 0x3f:
    pbVar32 = &UNK_142f3b059 + uVar8;
    bVar5 = *pbVar32;
    *pbVar32 = *pbVar32 + bVar15;
    *(char *)((longlong)param_3 + -0x7d) =
         *(char *)((longlong)param_3 + -0x7d) + bVar15 + CARRY1(bVar5,bVar15);
    *puVar9 = *puVar9 >> 8 | *puVar9 << 0x18;
    puStack_218 = &UNK_142f39b48;
    puStack_220 = auStack_1e8;
    auStack_1e8[0] = uVar16;
    goto code_r0x0001402f3885;
  case 0x40:
    puStack_218 = &UNK_142f39ba0;
    puStack_220 = auStack_1e8;
    puStack_230 = (uint *)&UNK_142f39bd1;
    puStack_238 = &UNK_142f398d8;
    puStack_228 = (undefined1 *)0x5;
    puStack_248 = (undefined *)0x5;
    puVar12 = &UNK_142f39bfe;
    puVar31 = &UNK_142f39bf9;
    uVar30 = 0x14;
    puStack_240 = puVar9;
    auStack_1e8[0] = uVar16;
    goto code_r0x0001402f3ceb;
  case 0x41:
    pcVar11 = (char *)((ulonglong)puVar9 & 0xffffffffffffff80);
    *pcVar11 = *pcVar11 + (char)pcVar11;
    pcVar11[-0x73] = pcVar11[-0x73] + bVar15;
    puVar9 = (uint *)(ulonglong)((uint)pcVar11 | 0x2c46141);
    puStack_200 = auStack_1e8;
    puStack_1f8 = puVar17;
  case 0x42:
    goto code_r0x0001402f3a71;
  case 0x43:
    *(undefined2 *)((longlong)puVar9 * 5) = in_FS;
    *(byte *)puVar9 = (char)*puVar9 + bVar5;
    (&UNK_142f3b055)[uVar8] = (&UNK_142f3b055)[uVar8] + bVar15;
    puVar9 = (uint *)((ulonglong)puVar9 & 0xffffffffffffff48);
code_r0x0001402f3885:
    puStack_230 = (uint *)&UNK_142f3991b;
    puStack_238 = &UNK_142f39b10;
    puStack_228 = (undefined1 *)0x5;
    puStack_248 = (undefined *)0x8;
    puVar12 = &UNK_142f39b68;
    puVar31 = &UNK_142f39913;
    uVar30 = 0x17;
    puVar22 = auStack_268;
    puStack_240 = puVar9;
    goto code_r0x0001402f3ceb;
  case 0x44:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x45:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x46:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x47:
    puStack_248 = (undefined *)(ulonglong)(uVar6 + 0x2c4638c);
    puVar9 = (uint *)&UNK_142f39ac0;
  case 0x6d:
    puVar23 = auStack_268;
code_r0x0001402f3e74:
    *(undefined **)(puVar23 + -8) = &UNK_1402f3e7f;
    puVar9 = (uint *)pdb_140f66090(arg1,puVar9);
    return puVar9;
  case 0x48:
    *puVar9 = *puVar9 + uVar6;
    (&UNK_142f3b059)[uVar8] = (&UNK_142f3b059)[uVar8] + bVar15;
    puVar9 = (uint *)(ulonglong)(uVar6 + 0x2c46460);
    break;
  case 0x49:
    *(char *)puVar9 = (char)*puVar9;
    (&UNK_142f3b055)[uVar8] = (&UNK_142f3b055)[uVar8] + bVar15;
    puVar9 = (uint *)((ulonglong)puVar9 & 0xffffffffffffff68);
    goto code_r0x0001402f3a71;
  case 0x4a:
    *(undefined2 *)((longlong)puVar9 * 5) = in_FS;
    *(byte *)puVar9 = (char)*puVar9 + bVar5;
    *(byte *)(puVar17 + -0x12) = (byte)puVar17[-0x12] + bVar5;
    *puVar9 = *puVar9 | uVar6;
    *(byte *)puVar9 = (char)*puVar9 + bVar5;
  case 0x5d:
    puVar23 = auStack_268;
    goto code_r0x0001402f3e74;
  case 0x4b:
    (&UNK_142f3b059)[uVar8] = (&UNK_142f3b059)[uVar8] + bVar15;
    puVar9 = (uint *)(ulonglong)(uVar6 + 0x2c45f8d);
    break;
  case 0x4c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4d:
    puVar9 = (uint *)0x7;
    puVar23 = auStack_268;
    goto code_r0x0001402f3e74;
  case 0x4e:
    puVar9 = (uint *)(ulonglong)(uVar6 | 0x2c45e86);
    goto code_r0x0001402f3a95;
  case 0x4f:
    *(byte *)(puVar17 + -0x12) = (byte)puVar17[-0x12] + bVar5;
    uVar6 = LocalDescriptorTableRegister();
    *puVar9 = uVar6;
    puVar21 = auStack_260;
    puVar9 = (uint *)CONCAT71(uVar14,bVar5 + (char)*puVar9);
    *(char *)((longlong)puVar9 + -0x7d) = *(char *)((longlong)puVar9 + -0x7d) + auStack_268[0];
    *puVar9 = *puVar9 >> 8 | *puVar9 << 0x18;
    uStack_1e0 = auStack_268._0_4_;
    puVar9 = (uint *)&UNK_142f397b8;
  case 0x66:
    *(uint **)((longlong)puVar21 + 0x20) = puVar9;
    puVar9 = (uint *)&UNK_142f39c12;
    puVar23 = (undefined1 *)puVar21;
    goto code_r0x0001402f3e74;
  case 0x50:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x51:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x52:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x53:
    puVar12 = (undefined *)0x42f39b30;
    puVar31 = &UNK_142f39913;
    uVar30 = 0x13;
    puVar22 = auStack_268;
    goto code_r0x0001402f3ceb;
  case 0x54:
    return puVar9;
  case 0x55:
    piVar10 = (int *)CONCAT71(uVar14,bVar5 + (byte)puVar17[-0x12]);
    uVar6 = (int)piVar10 + *piVar10 + (uint)CARRY1(bVar5,(byte)puVar17[-0x12]);
    puVar9 = (uint *)(ulonglong)uVar6;
    *(char *)puVar9 = (char)*puVar9 + (char)uVar6;
    break;
  case 0x56:
    puVar17 = (uint *)CONCAT71((int7)((ulonglong)puVar17 >> 8),bVar15 + (&UNK_142f3b055)[uVar8]);
    puVar9 = (uint *)((ulonglong)puVar9 & 0xffffffffffffff70);
  case 0x62:
    *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
    *(char *)((longlong)puVar9 + -0x73) = *(char *)((longlong)puVar9 + -0x73) + (char)puVar17;
    puVar9 = (uint *)(ulonglong)((uint)puVar9 | 0x2c45e67);
    puStack_200 = auStack_1e8;
    puStack_210 = &UNK_142f39bd1;
    puStack_1f8 = puVar17;
code_r0x0001402f3d57:
    puStack_218 = &UNK_142f39b10;
    puStack_230 = (uint *)&UNK_142f3991b;
    puVar12 = &UNK_142f39bd6;
    puStack_240 = puVar9;
    puStack_220 = param_3;
    goto code_r0x0001402f3da7;
  case 0x57:
    puVar9 = (uint *)(ulonglong)(uVar6 + *puVar9);
    *(char *)((longlong)puVar9 + -0x73) = *(char *)((longlong)puVar9 + -0x73) + bVar15;
    *(byte *)((longlong)param_3 + -0x7d) = *(byte *)((longlong)param_3 + -0x7d) | bVar15;
    *puVar9 = *puVar9 >> 8 | *puVar9 << 0x19;
  case 0x5e:
    puStack_218 = &UNK_142f39ba0;
    puStack_220 = auStack_1e8;
    auStack_1e8[0] = uVar16;
code_r0x0001402f366f:
    puStack_230 = (uint *)&UNK_142f39bd1;
    puStack_238 = &UNK_142f398d8;
    puStack_228 = (undefined1 *)0x5;
    puStack_248 = (undefined *)0x5;
    puVar12 = &UNK_142f39be7;
    puVar31 = &UNK_142f39bf9;
    uVar30 = 0x12;
    puVar22 = auStack_268;
    puStack_240 = puVar9;
code_r0x0001402f3ceb:
    *(undefined **)(puVar22 + -8) = &UNK_1402f3cf6;
    puVar9 = (uint *)pdb_140f66f00(arg1,puVar12,uVar30,puVar31);
code_r0x0001402f3cf7:
    return puVar9;
  case 0x58:
    goto code_r0x0001402f3cf7;
  case 0x59:
    puVar9 = (uint *)0x42f398c6;
    break;
  case 0x5a:
    ppuVar20 = &puStack_270;
    puStack_228 = auStack_1f0;
    puStack_270 = puVar9;
    goto code_r0x0001402f3afb;
  case 0x5b:
    *(byte *)puVar9 = (char)*puVar9 + bVar5;
    puVar9 = (uint *)&UNK_142f39861;
    break;
  case 0x5c:
    puVar9 = (uint *)((ulonglong)puVar9 & 0xffffffffffffff48);
code_r0x0001402f3afb:
    *(undefined **)((longlong)ppuVar20 + 0x38) = &UNK_142f3991b;
    *(undefined **)((longlong)ppuVar20 + 0x30) = &UNK_142f398d8;
    *(uint **)((longlong)ppuVar20 + 0x28) = puVar9;
    *(undefined8 *)((longlong)ppuVar20 + 0x40) = 5;
    *(undefined8 *)((longlong)ppuVar20 + 0x20) = 8;
    puVar12 = &UNK_142f398f8;
code_r0x0001402f3b31:
    puVar31 = &UNK_142f39913;
    uVar30 = 0x1b;
    puVar22 = (undefined1 *)ppuVar20;
    goto code_r0x0001402f3ceb;
  case 0x5f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x60:
    puVar19 = (undefined1 *)(ulonglong)((int)auStack_268 + 0x28);
    goto code_r0x0001402f3606;
  case 0x61:
    *(byte *)puVar9 = (char)*puVar9 + bVar5;
    puVar25 = (undefined8 *)0x20;
    puVar18 = auStack_268;
    if (*(ulonglong *)(puVar17 + 2) != 0) {
      puStack_270 = (uint *)&UNK_1402f35f6;
      pub_1406abac0(*(byte **)(puVar17 + 4),*(ulonglong *)(puVar17 + 2),1);
      puVar18 = auStack_268;
    }
    goto code_r0x0001402f35f9;
  case 99:
    puVar17 = (uint *)(&UNK_142f3b055 + uVar8);
    *puVar17 = *puVar17 >> 1 | (uint)((*puVar17 & 1) != 0) << 0x1f;
    return puVar9;
  case 100:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x65:
    uVar2 = *puVar9;
    puVar9 = (uint *)(ulonglong)(uVar6 + uVar2);
    *(char *)puVar9 = (char)*puVar9 + (char)(uVar6 + uVar2);
    break;
  case 0x67:
    return puVar9;
  case 0x68:
    *(byte *)puVar9 = (char)*puVar9 + bVar5;
    (&UNK_142f3b055)[uVar8] = (&UNK_142f3b055)[uVar8] + bVar15;
    puVar9 = (uint *)((ulonglong)puVar9 & 0xffffffffffffff48);
    goto code_r0x0001402f366f;
  case 0x69:
    puVar12 = (undefined *)0x42f398f8;
    ppuVar20 = (uint **)auStack_268;
    goto code_r0x0001402f3b31;
  case 0x6a:
    goto code_r0x0001402f3d57;
  case 0x6c:
    break;
  case 0x6e:
  case 0x6f:
  case 0x70:
    uVar6 = (uint)auStack_1e8;
    if ((puVar9 != (uint *)0x0) && (puVar24 = (undefined8 *)auStack_268, (int)puVar26 < (int)uVar6))
    {
      out((undefined1)uStack_50,(short)arg1);
      out(uStack_58._7_1_,auStack_268._0_2_);
      out(uStack_58._6_1_,auStack_268._0_2_);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    do {
      puVar28 = puVar26;
      UNRECOVERED_JUMPTABLE = (code *)swi(0x84);
      (*UNRECOVERED_JUMPTABLE)();
      puVar24 = (undefined8 *)((longlong)puVar24 + 8);
      while (puVar26 = (ulonglong *)((ulonglong)puVar28 & 0xffffffff),
            '\0' < (char)((byte)*puVar4 & (byte)((ulonglong)puVar4 >> 8))) {
        UNRECOVERED_JUMPTABLE = (code *)swi(0x87);
        iVar7 = (*UNRECOVERED_JUMPTABLE)();
        *puVar24 = puVar17;
        LOCK();
        uVar8 = *puVar4;
        *(uint *)puVar4 = (uint)puVar28;
        UNLOCK();
        *(undefined8 *)((ulonglong)(uint)uVar8 - 0x796b02c5) = *puVar24;
        LOCK();
        uVar16 = *(undefined4 *)((longlong)puVar17 + -0x765a02c5);
        *(int *)((longlong)puVar17 + -0x765a02c5) = (int)puVar17;
        uVar3 = (ulonglong)puVar17 >> 0x20;
        UNLOCK();
        lVar27 = (ulonglong)(uint)uVar8 - 1;
        LOCK();
        uVar2 = (uint)*puVar4;
        *(uint *)puVar4 = (uint)lVar27;
        puVar28 = (ulonglong *)CONCAT44((int)((ulonglong)lVar27 >> 0x20),uVar2);
        UNLOCK();
        puVar17 = (uint *)0x0;
        puVar24 = puVar24 + 1;
        if (CONCAT71((int7)(CONCAT44((int)uVar3,uVar16) >> 8),
                     (char)uVar16 + *(char *)((longlong)arg1 + -0x78e502c5)) != 0) {
          LOCK();
          uVar1 = *in_R11;
          *in_R11 = (char)uVar2;
          lVar27 = CONCAT71((int7)((ulonglong)puVar28 >> 8),uVar1);
          UNLOCK();
          piVar10 = (int *)(lVar27 + -0x766302c5);
          *piVar10 = *piVar10 + iVar7 + (uint)(uVar2 < uVar6);
          piVar10 = (int *)(lVar27 + -0x7a7002c5);
          *piVar10 = *piVar10 + 0x3b;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    } while( true );
  }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar9 = (uint *)(**(code **)(arg1[1] + 0x18))(*arg1,puVar9);
  return puVar9;
code_r0x0001402f1f82:
  arg0_00 = puStack_98;
  arg0 = (uint *)&UNK_142f3b0e8;
  switch((int)puVar9) {
  case 2:
  case 4:
    puVar17 = arg0;
    if (pbStack_a0 != (byte *)0x0) {
      param_3 = (undefined4 *)0x1;
      puStack_270 = (uint *)0x1402f1fc0;
      puVar17 = puStack_98;
      pub_1406abac0((byte *)puStack_98,(ulonglong)pbStack_a0,1);
    }
    goto LAB_1402f1ea8;
  case 3:
    if (lStack_90 != 0) {
      puVar9 = puStack_98 + 2;
      lVar27 = lStack_90;
      do {
        if (*(ulonglong *)(puVar9 + -2) != 0) {
          arg0 = *(uint **)puVar9;
          param_3 = (undefined4 *)0x1;
          puStack_270 = (uint *)0x1402f1ffe;
          pub_1406abac0((byte *)arg0,*(ulonglong *)(puVar9 + -2),1);
        }
        puVar9 = puVar9 + 6;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    break;
  case 5:
    if (lStack_90 != 0) {
      puVar9 = puStack_98 + 2;
      lVar27 = lStack_90;
      do {
        if (*(ulonglong *)(puVar9 + -2) != 0) {
          arg0 = *(uint **)puVar9;
          param_3 = (undefined4 *)0x1;
          puStack_270 = (uint *)0x1402f2039;
          pub_1406abac0((byte *)arg0,*(ulonglong *)(puVar9 + -2),1);
        }
        puVar9 = puVar9 + 6;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    break;
  default:
    goto LAB_1402f1ea8;
  }
  puVar17 = arg0;
  if (pbStack_a0 != (byte *)0x0) {
    param_3 = (undefined4 *)0x8;
    puStack_270 = (uint *)0x1402f206f;
    pub_1406abac0((byte *)arg0_00,(longlong)pbStack_a0 * 0x18,8);
    puVar17 = arg0_00;
  }
  goto LAB_1402f1ea8;
code_r0x0001402f3a71:
  puStack_210 = &UNK_142f39bd1;
  puStack_218 = &UNK_142f39b10;
  puVar17 = (uint *)&UNK_142f3991b;
  puStack_220 = param_3;
code_r0x0001402f3a95:
  puVar12 = &UNK_142f39bc0;
  puStack_240 = puVar9;
  puStack_230 = puVar17;
code_r0x0001402f3da7:
  uStack_208 = 5;
  puStack_228 = (undefined1 *)0x5;
  puStack_238 = &UNK_142f39b80;
  puStack_248 = (undefined *)0x8;
  puStack_270 = (uint *)&UNK_1402f3dbf;
  puVar9 = (uint *)pdb_140f66ff0(arg1,puVar12,0x11,&UNK_142f39913);
  return puVar9;
}

