// VA 0x14068c0f0, PDB extent 1424 bytes
// tiny_glade::gui::settings::do_gui_escape_menu_settings::closure$3
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x00014068ce3a) overlaps instruction at (ram,0x00014068ce35)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::settings::do_gui_escape_menu_settings::closure$3
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
   Extent: 1424 */

void pdb_14068c0f0(undefined8 *param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined *puVar8;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  uint uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  undefined1 *unaff_RBP;
  undefined2 in_SS;
  bool bVar21;
  undefined1 auStack_8a98 [35088];
  undefined1 *puStack_188;
  undefined1 auStack_178 [32];
  undefined8 *puStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined8 **ppuStack_140;
  undefined8 *puStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined1 uStack_119;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_e8;
  code *pcStack_e0;
  undefined **ppuStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar20 = auStack_178;
  uVar13 = pdb_140725a70(param_2);
  pdb_140732b10(uVar13);
  uStack_119 = '\0';
  pbVar15 = (byte *)*param_1;
  puVar16 = (undefined1 *)param_1[1];
  if (*pbVar15 == 5) {
code_r0x00014068c132:
    puVar19 = (undefined8 *)param_1[3];
    puStack_118 = (undefined *)param_1[4];
    uStack_110 = param_1[5];
    puStack_108 = (undefined *)param_1[6];
    uStack_100 = param_1[7];
    ppuStack_150 = &puStack_118;
    puStack_158 = puVar19;
    pdb_140370010(puVar16,&uStack_119,param_2,param_1[2]);
    goto LAB_14068c295;
  }
  *puVar16 = 2;
  bVar2 = *pbVar15;
  if (bVar2 < 3) {
    puVar19 = (undefined8 *)param_1[3];
    uStack_78 = param_1[8];
    uStack_70 = param_1[9];
    uStack_68 = param_1[10];
    uStack_60 = param_1[0xb];
    puStack_158 = (undefined8 *)param_1[2];
    puStack_c8 = (undefined *)param_1[0xc];
    uStack_c0 = param_1[0xd];
    uStack_b8 = param_1[0xe];
    uStack_b0 = param_1[0xf];
    puStack_e8 = (undefined8 *)param_1[0x10];
    pcStack_e0 = (code *)param_1[0x11];
    ppuStack_d8 = (undefined **)param_1[0x12];
    pcStack_d0 = (code *)param_1[0x13];
    uStack_a8 = param_1[0x14];
    uStack_a0 = param_1[0x15];
    uStack_98 = param_1[0x16];
    puStack_90 = (undefined *)param_1[0x17];
    puStack_118 = (undefined *)param_1[0x18];
    uStack_110 = param_1[0x19];
    puStack_108 = (undefined *)param_1[0x1a];
    uStack_100 = param_1[0x1b];
    uStack_128 = param_1[0x1c];
    ppuStack_130 = &puStack_118;
    puStack_138 = &uStack_a8;
    ppuStack_140 = &puStack_e8;
    ppuStack_148 = &puStack_c8;
    ppuStack_150 = (undefined **)&uStack_119;
    pdb_140370890(puVar19,pbVar15,&uStack_78,param_2);
    goto LAB_14068c295;
  }
  puVar17 = &UNK_142f958d0;
  uVar14 = (ulonglong)*(int *)(&UNK_142f958d0 + (ulonglong)(bVar2 - 3) * 4);
  bVar21 = 0xfffffffebd06a72f < uVar14;
  pbVar15 = &UNK_142f958d0 + uVar14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 3:
    puVar19 = (undefined8 *)param_1[3];
    pdb_1403705f0(&uStack_119,param_2,param_1[2],puVar19);
    break;
  case 4:
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  case 5:
    goto code_r0x00014068c132;
  case 6:
    puVar19 = (undefined8 *)param_1[3];
    puStack_158 = (undefined8 *)param_1[0x1d];
    pdb_14036f9d0(&uStack_119,param_2,param_1[2],puVar19);
    break;
  case 7:
    *(undefined1 *)param_1[0x1e] = 0;
    puVar17 = *(undefined **)(param_2 + 2);
    puStack_e8 = (undefined8 *)&UNK_142f95709;
    pcStack_e0 = (code *)0x10;
    puStack_118 = (undefined *)pdb_14072aeb0(&puStack_e8);
    puVar8 = _UNK_142f3b4f8;
    uVar13 = _DAT_142f3b4f0;
    uStack_110 = _DAT_142f3b4f0;
    puStack_108 = _UNK_142f3b4f8;
    uStack_110 = pdb_1400affa0(&puStack_118);
    puStack_118 = puVar17;
    uVar18 = pdb_1400b0130(&puStack_118);
    pdb_14072caa0(&puStack_118,param_2,uVar18);
    pdb_140734630(&uStack_a8,&puStack_118,&UNK_142f95719,0xd);
    puVar19 = (undefined8 *)param_1[3];
    puStack_c8 = &UNK_142f95726;
    uStack_c0 = 4;
    puVar17 = (undefined *)pdb_14072cd40(&uStack_98);
    puStack_e8 = (undefined8 *)pdb_14072aeb0(&puStack_c8);
    puStack_118 = (undefined *)pdb_140315970(&puStack_e8);
    uStack_110 = uVar13;
    puStack_108 = puVar8;
    uStack_110 = pdb_1400affa0(&puStack_118);
    puStack_118 = puVar17;
    uVar18 = pdb_1400b0130(&puStack_118);
    cVar9 = pdb_14072c9c0(&uStack_98,uVar18);
    if (cVar9 == '\0') {
      if (*_DAT_143ca8e90 != 0) {
        pcStack_e0 = pdb_1402ed420;
        pcStack_d0 = pdb_1402ed420;
        puStack_118 = &UNK_142f9589f;
        uStack_110 = 0x14;
        puStack_108 = &UNK_142f9589f;
        uStack_100 = 0x14;
        puStack_f8 = &UNK_142f958b8;
        puStack_e8 = &uStack_a8;
        ppuStack_d8 = &puStack_c8;
        pdb_1400c9be0(&UNK_142f95858,&puStack_e8,1,&puStack_118);
      }
      puVar17 = puStack_90;
      puStack_e8 = (undefined8 *)&UNK_142f95726;
      pcStack_e0 = (code *)0x4;
      puStack_118 = (undefined *)pdb_14072aeb0(&puStack_e8);
      uStack_110 = uVar13;
      puStack_108 = puVar8;
      uStack_110 = pdb_1400affa0(&puStack_118);
      puStack_118 = puVar17;
      uVar13 = pdb_1400b0130(&puStack_118);
      pdb_14072caa0(&puStack_118,&uStack_98,uVar13);
    }
    else {
      pdb_14072cd20(&puStack_118,&uStack_98,uVar18);
    }
    *(undefined4 *)puVar19[2] = *(undefined4 *)((longlong)puVar19 + 0x1c);
    pdb_140493740(&puStack_118,&uStack_119,*puVar19);
    break;
  case 8:
    puVar19 = (undefined8 *)param_1[3];
    pdb_140373b70(&uStack_119,param_2,param_1[2],puVar19);
    break;
  case 9:
    puVar19 = (undefined8 *)param_1[3];
    ppuStack_150 = (undefined **)(param_1 + 0x22);
    ppuStack_148 = (undefined **)(param_1 + 0x26);
    puStack_158 = puVar19;
    pdb_140373950(param_1[0x1c],param_2,&uStack_119,param_1[2]);
    break;
  case 10:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_142f95743,0x28,&UNK_142f95770);
  case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc:
    puVar17 = (undefined *)((ulonglong)pbVar15 & 0xff);
    pbVar15 = (byte *)0x1;
  case 0xd:
    goto code_r0x00014068ccb5;
  case 0xe:
    puVar16 = (undefined1 *)(ulonglong)(uint)((int)puVar16 + *param_2);
    puVar17 = &UNK_142f9d2d0;
  case 0x12:
code_r0x00014068ccbd:
                    /* WARNING: Could not recover jumptable at 0x00014068cccb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_142f958f0 + *(int *)(&UNK_142f958f0 + (longlong)puVar17 * 4)))
              (puVar16,&UNK_142f958f0 + *(int *)(&UNK_142f958f0 + (longlong)puVar17 * 4));
    return;
  case 0xf:
    *(int *)pbVar15 = *(int *)pbVar15 + (int)pbVar15;
    bVar21 = CARRY1(*pbVar15,(byte)pbVar15);
    *pbVar15 = *pbVar15 + (byte)pbVar15;
    goto code_r0x00014068ccb5;
  case 0x10:
    *(undefined2 *)(uVar14 + 0x1575ca1d2) = in_SS;
    goto code_r0x00014068ccbd;
  case 0x11:
    puVar17 = (undefined *)(ulonglong)*(uint *)(uVar14 + 0x64edebc10);
    goto code_r0x00014068ccbd;
  case 0x13:
    pbVar15 = (byte *)0x48000000;
  case 0x17:
    if (pbVar15 < &UNK_142f958d1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(&UNK_142f958d0,pbVar15,&UNK_142f95810);
    }
code_r0x00014068ce3b:
    pbVar15 = *(byte **)(unaff_RBP + 0xb0);
    goto code_r0x00014068ce42;
  case 0x14:
    puStack_188 = &stack0xfffffffffffffe80;
    unaff_RBP = &stack0xfffffffffffffe80;
    puVar20 = auStack_8a98;
    goto code_r0x00014068ce4d;
  case 0x15:
    uVar12 = (int)pbVar15 - (uint)bVar21;
    *(char *)(ulonglong)uVar12 = *(char *)(ulonglong)uVar12 + (char)uVar12;
    goto code_r0x00014068ce3b;
  case 0x16:
    (&UNK_142f9585b)[uVar14] = (&UNK_142f9585b)[uVar14] + (char)puVar16;
    puVar16 = (undefined1 *)0xc8ec0a70;
    goto code_r0x00014068ce46;
  case 0x18:
    goto code_r0x00014068ce42;
  case 0x19:
    goto code_r0x00014068ce46;
  case 0x1a:
    pbVar15 = (byte *)((ulonglong)pbVar15 & 0xffffffffffffff00);
    *pbVar15 = *pbVar15;
code_r0x00014068ce42:
    puVar16 = (undefined1 *)0x3c8ec0a70;
code_r0x00014068ce46:
    pbVar1 = pbVar15 + (longlong)puVar16 * 8 + 0x10;
    pbVar15 = (byte *)(ulonglong)*pbVar1;
    puVar16 = (undefined1 *)(ulonglong)*pbVar1;
code_r0x00014068ce4d:
    uVar11 = SUB81(pbVar15,0);
    cVar9 = '\x01';
    if (2 < (byte)puVar16) {
      cVar9 = (byte)puVar16 - 3;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(cVar9) {
    case '\0':
      uVar11 = 3;
      break;
    case '\x02':
      uVar11 = 5;
      break;
    case '\x03':
      uVar11 = 6;
      break;
    case '\x04':
      uVar11 = 7;
      break;
    case '\x05':
      uVar11 = 8;
      break;
    case '\x06':
      uVar11 = 9;
      break;
    case '\a':
      uVar11 = 10;
    }
    unaff_RBP[-0x10] = uVar11;
    *(undefined8 *)(unaff_RBP + -0x18) = 7;
    uVar13 = *(undefined8 *)(unaff_RBP + 0x90);
    *(undefined8 *)(puVar20 + -8) = 0x14068cea3;
    pdb_140a003a0(uVar13,unaff_RBP + -0x18);
    lVar4 = *(longlong *)(unaff_RBP + 0xa8);
    if (lVar4 != 0) {
      pbVar15 = *(byte **)(unaff_RBP + 0xb0);
      *(undefined8 *)(puVar20 + -8) = 0x14068ceca;
      pub_1406abac0(pbVar15,lVar4 * 0x18,8);
    }
    return;
  }
LAB_14068c295:
  cVar9 = pdb_140373e30(*(undefined8 *)param_1[0x1f],*puVar19);
  if (cVar9 != '\0') {
    uVar18 = 0x19;
    uVar13 = pdb_140dc6290(&UNK_142f9572a,0x19);
    pdb_1407339e0(&puStack_118,param_2,uVar13,uVar18);
    uVar13 = pdb_140725900(&puStack_118);
    cVar10 = pdb_140732b50(uVar13);
    if (cVar10 != '\0') {
      plVar3 = (longlong *)param_1[0x20];
      *(undefined4 *)plVar3[2] = *(undefined4 *)((longlong)plVar3 + 0x1c);
      lVar4 = *plVar3;
      lVar5 = *(longlong *)(lVar4 + 0x30);
      uVar13 = *(undefined8 *)(lVar4 + 0x40);
      if (lVar5 == *(longlong *)(lVar4 + 0x20)) {
        pdb_142d7e980(lVar4 + 0x20);
      }
      lVar6 = *(longlong *)(lVar4 + 0x28);
      *(undefined8 *)(lVar6 + lVar5 * 0x10) = uVar13;
      *(char *)(lVar6 + 8 + lVar5 * 0x10) = cVar9;
      *(longlong *)(lVar4 + 0x30) = lVar5 + 1;
      *(longlong *)(lVar4 + 0x40) = *(longlong *)(lVar4 + 0x40) + 1;
    }
  }
  if (uStack_119 != '\0') {
    plVar3 = (longlong *)param_1[0x21];
    *(undefined4 *)plVar3[2] = *(undefined4 *)((longlong)plVar3 + 0x1c);
    lVar4 = *plVar3;
    lVar5 = *(longlong *)(lVar4 + 0x30);
    uVar13 = *(undefined8 *)(lVar4 + 0x40);
    if (lVar5 == *(longlong *)(lVar4 + 0x20)) {
      pdb_142d7e8a0(lVar4 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar4 + 0x28) + lVar5 * 8) = uVar13;
    *(longlong *)(lVar4 + 0x30) = lVar5 + 1;
    *(longlong *)(lVar4 + 0x40) = *(longlong *)(lVar4 + 0x40) + 1;
  }
  return;
code_r0x00014068ccb5:
  bVar2 = (byte)puVar17;
  if (bVar21) {
    bVar2 = (byte)pbVar15;
  }
  puVar17 = (undefined *)(ulonglong)bVar2;
  goto code_r0x00014068ccbd;
}

