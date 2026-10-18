// VA 0x141ada910, PDB extent 561 bytes
// country_core::resources::walls::inner_wall_state::deserialize_wall_style<enum2$<serde_json::value::Value> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000141adbfd0) overlaps instruction at (ram,0x000141adbfcf)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000141adbc2d) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::inner_wall_state::deserialize_wall_style<enum2$<serde_json::value::Value>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
   Extent: 561 */

ulonglong ****
pdb_141ada910(ulonglong ****param_1,ulonglong ***param_2,undefined8 param_3,ulonglong ****param_4)

{
  uint *puVar1;
  byte *pbVar2;
  ulonglong **ppuVar3;
  ulonglong ****ppppuVar4;
  code *pcVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong ****ppppuVar11;
  undefined7 uVar17;
  ulonglong ****extraout_RAX;
  int *piVar12;
  ulonglong ***pppuVar13;
  ulonglong ****ppppuVar15;
  ulonglong ***extraout_RAX_00;
  ulonglong ***pppuVar16;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong ****ppppuVar23;
  ulonglong ****ppppuVar24;
  undefined2 uVar25;
  uint uVar26;
  undefined6 uVar28;
  ulonglong uVar27;
  int *unaff_RBX;
  ulonglong ****ppppuVar29;
  ulonglong ****ppppuVar30;
  ulonglong ****ppppuVar31;
  ulonglong ****unaff_RSI;
  byte *unaff_RDI;
  undefined *puVar32;
  int iVar33;
  ulonglong ****in_R10;
  int unaff_R12D;
  int *unaff_R13;
  ulonglong ***unaff_R14;
  undefined2 in_FS;
  bool bVar34;
  bool bVar35;
  undefined1 in_XMM0 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  char in_XMM1_Ba;
  char in_XMM1_Bb;
  char in_XMM1_Bc;
  char in_XMM1_Bd;
  char in_XMM1_Be;
  char in_XMM1_Bf;
  char in_XMM1_Bg;
  char in_XMM1_Bh;
  char in_XMM1_Bi;
  char in_XMM1_Bj;
  char in_XMM1_Bk;
  char in_XMM1_Bl;
  char in_XMM1_Bm;
  char in_XMM1_Bn;
  char in_XMM1_Bo;
  char in_XMM1_Bp;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auStack_84cf [24411];
  undefined *puStack_2574;
  undefined8 uStack_254c;
  undefined1 *puStack_f8;
  undefined *puStack_d0;
  undefined *apuStack_a0 [3];
  ulonglong ***apppuStack_88 [2];
  ulonglong ***pppuStack_78;
  ulonglong ****ppppuStack_70;
  ulonglong ****ppppuStack_68;
  ulonglong ****ppppuStack_60;
  ulonglong ***pppuStack_58;
  ulonglong ***pppuStack_50;
  ulonglong ****ppppuStack_48;
  ulonglong ****ppppuStack_40;
  ulonglong ****ppppuStack_38;
  undefined8 uStack_30;
  ulonglong ****ppppuStack_28;
  char *pcVar14;
  
  ppppuVar31 = (ulonglong ****)&ppppuStack_68;
  ppppuVar30 = (ulonglong ****)&ppppuStack_68;
  ppppuVar29 = (ulonglong ****)&ppppuStack_68;
  ppppuVar24 = (ulonglong ****)&ppppuStack_68;
  ppppuVar15 = (ulonglong ****)&stack0xffffffffffffffe8;
  puVar32 = &UNK_143389340;
  uVar10 = (ulonglong)*(int *)(&UNK_143389340 + (ulonglong)*(byte *)param_2 * 4);
  bVar34 = 0xfffffffebcc76cbf < uVar10;
  ppppuVar11 = (ulonglong ****)(&UNK_143389340 + uVar10);
  bVar35 = ppppuVar11 == (ulonglong ****)0x0;
  bVar18 = (byte)param_1;
  uVar26 = (uint)param_1;
  bVar20 = (byte)ppppuVar11;
  uVar9 = (uint)ppppuVar11;
  uVar17 = (undefined7)((ulonglong)ppppuVar11 >> 8);
  bVar19 = (byte)((ulonglong)param_2 >> 8);
  uVar25 = SUB82(param_2,0);
  uVar28 = (undefined6)((ulonglong)param_2 >> 0x10);
  iVar33 = (int)in_R10;
  iVar8 = (int)&ppppuStack_68;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)param_2) {
  case 0:
    ppppuStack_38 = (ulonglong ****)CONCAT71(ppppuStack_38._1_7_,7);
    goto code_r0x000141adaafa;
  case 1:
    bVar20 = *(byte *)((longlong)param_2 + 1);
    *(byte *)((longlong)param_1 + 1) = bVar20;
    *(byte *)param_1 = 0;
    return (ulonglong ****)(ulonglong)bVar20;
  case 2:
    uStack_30 = (ulonglong ****)param_2[2];
    if (param_2[1] == (ulonglong **)0x0) {
      ppppuStack_38 = (ulonglong ****)CONCAT71(ppppuStack_38._1_7_,1);
    }
    else if (param_2[1] == (ulonglong **)0x1) {
      ppppuStack_38 = (ulonglong ****)CONCAT71(ppppuStack_38._1_7_,2);
    }
    else {
      ppppuStack_38 = (ulonglong ****)CONCAT71(ppppuStack_38._1_7_,3);
    }
code_r0x000141adaafa:
    ppppuStack_70 = (ulonglong ****)0x141adaaff;
    ppppuVar15 = (ulonglong ****)
                 pdb_142db90e0(&ppppuStack_38,&stack0xffffffffffffffe7,&UNK_1433885b0);
    param_1[1] = (ulonglong ***)ppppuVar15;
    *(byte *)param_1 = 1;
    return ppppuVar15;
  case 3:
    param_4 = (ulonglong ****)param_2[1];
    in_R10 = (ulonglong ****)param_2[2];
    ppppuVar11 = (ulonglong ****)param_2[3];
    switch(ppppuVar11) {
    case (ulonglong ****)0x5:
      if ((*(char *)((longlong)in_R10 + 4) != 'e' || *(int *)in_R10 != 0x6e6f7453) &&
         (*(char *)((longlong)in_R10 + 4) != 'n' || *(int *)in_R10 != 0x69616c50))
      goto code_r0x000141adaa3d;
      *(byte *)((longlong)param_1 + 1) = 0;
      goto code_r0x000141adaa2f;
    default:
      goto code_r0x000141adaa3d;
    case (ulonglong ****)0xa:
      if (*(short *)(in_R10 + 1) != 0x7374 || *in_R10 != (ulonglong ***)0x72696b5368746957)
      goto code_r0x000141adaa3d;
      goto code_r0x000141adaa08;
    case (ulonglong ****)0xc:
      param_2 = (ulonglong ***)((ulonglong)*in_R10 ^ 0x626d6954666c6148);
      puVar32 = (undefined *)((ulonglong)*(uint *)(in_R10 + 1) ^ 0x64657265 | (ulonglong)param_2);
      break;
    case (ulonglong ****)0xf:
      param_2 = (ulonglong ***)0x746957656e6f7453;
      goto code_r0x000141ada9d2;
    }
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xc:
  case 0xe:
  case 0xf:
    if (puVar32 == (undefined *)0x0 && param_2 == (ulonglong ***)0x0) {
      *(byte *)((longlong)param_1 + 1) = 2;
code_r0x000141adaa2f:
      ppppuVar15 = (ulonglong ****)0x0;
      *(byte *)param_1 = 0;
    }
    else {
code_r0x000141adaa3d:
      ppppuStack_38 = (ulonglong ****)CONCAT71(ppppuStack_38._1_7_,5);
      ppppuStack_70 = (ulonglong ****)0x141adaa68;
      ppppuStack_48 = in_R10;
      ppppuStack_40 = param_4;
      uStack_30 = in_R10;
      ppppuStack_28 = ppppuVar11;
      pppuVar13 = (ulonglong ***)
                  pdb_142db9150(&ppppuStack_38,&stack0xffffffffffffffe7,&UNK_1433885b0);
      param_1[1] = pppuVar13;
      ppppuVar15 = (ulonglong ****)0x1;
      *(byte *)param_1 = 1;
      param_4 = ppppuStack_40;
      in_R10 = ppppuStack_48;
    }
    if (param_4 == (ulonglong ****)0x0) {
      return ppppuVar15;
    }
    ppppuStack_70 = (ulonglong ****)0x141adaa96;
    pub_1406abac0((byte *)in_R10,(ulonglong)param_4,1);
    return extraout_RAX;
  case 4:
    ppppuStack_28 = (ulonglong ****)0xfffffffffffffffe;
    ppuVar3 = param_2[3];
    pppuStack_50 = (ulonglong ***)param_2[1];
    pppuVar13 = (ulonglong ***)param_2[2];
    ppppuStack_48 = (ulonglong ****)(pppuVar13 + (longlong)ppuVar3 * 4);
    pppuStack_78 = (ulonglong ***)CONCAT71(pppuStack_78._1_7_,10);
    apuStack_a0[0] = &UNK_142def059;
    ppppuStack_60 = (ulonglong ****)pppuVar13;
    pppuStack_58 = pppuVar13;
    ppppuStack_38 = (ulonglong ****)pppuStack_50;
    pppuVar16 = (ulonglong ***)pdb_142db90e0(&pppuStack_78,(longlong)&uStack_30 + 7,&UNK_1433885b0);
    param_1[1] = pppuVar16;
    *(byte *)param_1 = 1;
    apuStack_a0[0] = &UNK_142def070;
    ppppuStack_40 = (ulonglong ****)pppuVar13;
    pdb_14098ae50(pppuVar13,ppuVar3);
    if (ppppuStack_38 != (ulonglong ****)0x0) {
      apuStack_a0[0] = &UNK_142def08d;
      pub_1406abac0((byte *)ppppuStack_40,(longlong)ppppuStack_38 << 5,8);
    }
    return param_1;
  case 5:
    pppuStack_78 = (ulonglong ***)param_2[1];
    ppppuStack_70 = (ulonglong ****)param_2[2];
    ppppuStack_48 = (ulonglong ****)param_2[3];
    if (pppuStack_78 == (ulonglong ***)0x0) {
      ppppuStack_48 = (ulonglong ****)0x0;
    }
    apppuStack_88[0] = (ulonglong ***)(ulonglong)(pppuStack_78 != (ulonglong ***)0x0);
    apppuStack_88[1] = (ulonglong ***)0x0;
    ppppuStack_60 = (ulonglong ****)0x0;
    ppppuStack_40 = (ulonglong ****)CONCAT71(ppppuStack_40._1_7_,6);
    apuStack_a0[0] = (undefined *)CONCAT71(apuStack_a0[0]._1_7_,0xb);
    puStack_d0 = &UNK_142deef6d;
    ppppuStack_68 = (ulonglong ****)apppuStack_88[0];
    pppuStack_58 = pppuStack_78;
    pppuStack_50 = (ulonglong ***)ppppuStack_70;
    pppuVar13 = (ulonglong ***)pdb_142db90e0(apuStack_a0,&stack0xffffffffffffffe7,&UNK_1433885b0);
    param_1[1] = pppuVar13;
    *(byte *)param_1 = 1;
    puStack_d0 = &UNK_142deef7e;
    pdb_1409880a0(apppuStack_88);
    puStack_d0 = &UNK_142deef88;
    pdb_1409946a0(&ppppuStack_40);
    return param_1;
  case 6:
    bVar19 = *unaff_RDI;
    *(byte *)ppppuVar11 = *(char *)ppppuVar11 + bVar20;
    (&stack0xffffffffffffffed)[CONCAT71((int7)((ulonglong)param_1 >> 8),bVar18 | bVar19) * 4] =
         (&stack0xffffffffffffffed)[CONCAT71((int7)((ulonglong)param_1 >> 8),bVar18 | bVar19) * 4] +
         (bVar18 | bVar19);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb:
code_r0x000141ada9d2:
    if (*(longlong *)((longlong)in_R10 + 7) != 0x737472696b536874 || param_2 != *in_R10)
    goto code_r0x000141adaa3d;
code_r0x000141adaa08:
    *(byte *)((longlong)param_1 + 1) = 1;
    goto code_r0x000141adaa2f;
  case 0xd:
    *(byte *)((longlong)param_1 + -0x7f) = *(byte *)((longlong)param_1 + -0x7f) | bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x11:
    pcVar5 = (code *)swi(3);
    ppppuVar15 = (ulonglong ****)(*pcVar5)();
    return ppppuVar15;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    *(int *)param_1 = *(int *)param_1 + 0x43389340;
    break;
  case 0x18:
    break;
  case 0x19:
    *(int *)param_1 = *(int *)param_1 + iVar33;
    break;
  case 0x1a:
    break;
  case 0x1b:
    goto code_r0x000141adae9e;
  case 0x1c:
    break;
  case 0x1d:
    break;
  case 0x1e:
    goto code_r0x000141adae8c;
  case 0x1f:
    break;
  case 0x20:
    break;
  case 0x21:
    break;
  case 0x22:
    break;
  case 0x23:
    *(byte *)ppppuVar11 = *(char *)ppppuVar11 + bVar20;
    *(undefined1 *)((longlong)unaff_RSI + 1) = 0x1f;
    goto code_r0x000141adae9e;
  case 0x24:
    goto code_r0x000141adaec8;
  case 0x25:
    break;
  case 0x26:
    break;
  case 0x27:
    *(byte *)ppppuVar11 = *(char *)ppppuVar11 + bVar20;
    *(undefined1 *)((longlong)unaff_RSI + 1) = 5;
  case 0x38:
    break;
  case 0x28:
    goto code_r0x000141adaed4;
  case 0x29:
    break;
  case 0x2a:
    break;
  case 0x2b:
    break;
  case 0x2c:
    break;
  case 0x2d:
    goto code_r0x000141adaeda;
  case 0x2e:
    break;
  case 0x2f:
    *(byte *)ppppuVar11 = *(char *)ppppuVar11 + bVar20;
    *(undefined1 *)((longlong)unaff_RSI + 1) = 0x29;
  case 0x31:
    break;
  case 0x30:
    break;
  case 0x32:
    break;
  case 0x33:
    break;
  case 0x34:
    goto LAB_141adad89;
  case 0x35:
    goto code_r0x000141adad99;
  case 0x36:
    *(byte *)param_1 = *(byte *)param_1 & bVar20;
  case 0x3c:
    bVar20 = bVar20 & (byte)((ulonglong)param_1 >> 8);
    piVar12 = (int *)CONCAT71(uVar17,bVar20);
    out(uVar25,bVar20);
    *piVar12 = *piVar12 + (int)piVar12;
    piVar12 = piVar12 + 0x48091f;
    *(byte *)piVar12 = (char)*piVar12 + bVar20;
    ppppuVar11 = ppppuStack_40;
    if ((char)*piVar12 == '\0') {
code_r0x000141adad7e:
      unaff_RSI[1] = (ulonglong ***)ppppuVar11;
      uVar6 = 1;
      goto LAB_141adaf54;
    }
    goto LAB_141adad89;
  case 0x37:
    break;
  case 0x39:
    break;
  case 0x3a:
    goto code_r0x000141adae68;
  case 0x3b:
    *(byte *)ppppuVar11 = *(char *)ppppuVar11 + bVar20;
    *(undefined1 *)((longlong)unaff_RSI + 1) = 0xd;
    goto code_r0x000141adaed4;
  case 0x3d:
    break;
  case 0x3e:
    goto code_r0x000141adaeb6;
  case 0x3f:
    break;
  case 0x40:
    *(byte *)ppppuVar11 = *(char *)ppppuVar11 + bVar20;
LAB_141adad89:
    param_1 = (ulonglong ****)&UNK_143389384;
    ppppuVar11 = (ulonglong ****)
                 (longlong)*(int *)(&UNK_143389384 + ((ulonglong)ppppuStack_48 >> 8 & 0xff) * 4);
code_r0x000141adad99:
                    /* WARNING: Could not recover jumptable at 0x000141adad9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppppuVar15 = (ulonglong ****)(*(code *)((longlong)ppppuVar11 + (longlong)param_1))();
    return ppppuVar15;
  case 0x41:
    break;
  case 0x42:
    break;
  case 0x43:
    uVar6 = in(uVar25);
    pbVar2 = (byte *)(CONCAT71(uVar17,uVar6) + -0x77);
    *pbVar2 = *pbVar2 ^ bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x44:
    break;
  case 0x45:
    break;
  case 0x46:
    goto code_r0x000141adad7e;
  case 0x47:
    break;
  case 0x48:
    break;
  case 0x49:
    *(undefined1 *)((longlong)unaff_RSI + 1) = 0x18;
    goto code_r0x000141adae68;
  case 0x4a:
    ppppuVar11 = (ulonglong ****)CONCAT71(uVar17,bVar20 + *(char *)ppppuVar11);
    *(int *)unaff_RDI = *(int *)unaff_RDI + iVar8;
    goto code_r0x000141adb54d;
  case 0x4b:
    auVar42[0] = -(in_XMM1_Ba == UNK_142e49990);
    auVar42[1] = -(in_XMM1_Bb == UNK_142e49991);
    auVar42[2] = -(in_XMM1_Bc == UNK_142e49992);
    auVar42[3] = -(in_XMM1_Bd == UNK_142e49993);
    auVar42[4] = -(in_XMM1_Be == UNK_142e49994);
    auVar42[5] = -(in_XMM1_Bf == UNK_142e49995);
    auVar42[6] = -(in_XMM1_Bg == UNK_142e49996);
    auVar42[7] = -(in_XMM1_Bh == UNK_142e49997);
    auVar42[8] = -(in_XMM1_Bi == UNK_142e49998);
    auVar42[9] = -(in_XMM1_Bj == UNK_142e49999);
    auVar42[10] = -(in_XMM1_Bk == UNK_142e4999a);
    auVar42[0xb] = -(in_XMM1_Bl == UNK_142e4999b);
    auVar42[0xc] = -(in_XMM1_Bm == UNK_142e4999c);
    auVar42[0xd] = -(in_XMM1_Bn == UNK_142e4999d);
    auVar42[0xe] = -(in_XMM1_Bo == UNK_142e4999e);
    auVar42[0xf] = -(in_XMM1_Bp == UNK_142e4999f);
    auVar42 = auVar42 & in_XMM0;
    if ((ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar42[0xf] >> 7) << 0xf) == 0xffff) {
code_r0x000141adb747:
      (&UNK_143389341)[uVar10] = 0xd;
    }
    else {
      auVar37[0] = -(*(byte *)param_2 == UNK_143388370);
      auVar37[1] = -(*(byte *)((longlong)param_2 + 1) == UNK_143388371);
      auVar37[2] = -(*(byte *)((longlong)param_2 + 2) == UNK_143388372);
      auVar37[3] = -(*(byte *)((longlong)param_2 + 3) == UNK_143388373);
      auVar37[4] = -(*(byte *)((longlong)param_2 + 4) == UNK_143388374);
      auVar37[5] = -(*(byte *)((longlong)param_2 + 5) == UNK_143388375);
      auVar37[6] = -(*(byte *)((longlong)param_2 + 6) == UNK_143388376);
      auVar37[7] = -(*(byte *)((longlong)param_2 + 7) == UNK_143388377);
      auVar37[8] = -(*(byte *)(param_2 + 1) == UNK_143388378);
      auVar37[9] = -(*(byte *)((longlong)param_2 + 9) == UNK_143388379);
      auVar37[10] = -(*(byte *)((longlong)param_2 + 10) == UNK_14338837a);
      auVar37[0xb] = -(*(byte *)((longlong)param_2 + 0xb) == UNK_14338837b);
      auVar37[0xc] = -(*(byte *)((longlong)param_2 + 0xc) == UNK_14338837c);
      auVar37[0xd] = -(*(byte *)((longlong)param_2 + 0xd) == UNK_14338837d);
      auVar37[0xe] = -(*(byte *)((longlong)param_2 + 0xe) == UNK_14338837e);
      auVar37[0xf] = -(*(byte *)((longlong)param_2 + 0xf) == UNK_14338837f);
      auVar43[0] = -(*(byte *)(param_2 + 2) == UNK_143388380);
      auVar43[1] = -(UNK_143388381 == '\0');
      auVar43[2] = -(UNK_143388382 == '\0');
      auVar43[3] = -(UNK_143388383 == '\0');
      auVar43[4] = -(UNK_143388384 == '\0');
      auVar43[5] = -(UNK_143388385 == '\0');
      auVar43[6] = -(UNK_143388386 == '\0');
      auVar43[7] = -(UNK_143388387 == '\0');
      auVar43[8] = -(UNK_143388388 == '\0');
      auVar43[9] = -(UNK_143388389 == '\0');
      auVar43[10] = -(UNK_14338838a == '\0');
      auVar43[0xb] = -(UNK_14338838b == '\0');
      auVar43[0xc] = -(UNK_14338838c == '\0');
      auVar43[0xd] = -(UNK_14338838d == '\0');
      auVar43[0xe] = -(UNK_14338838e == '\0');
      auVar43[0xf] = -(UNK_14338838f == '\0');
      auVar43 = auVar43 & auVar37;
      if ((ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar43[0xf] >> 7) << 0xf) == 0xffff) {
        (&UNK_143389341)[uVar10] = 0x1d;
      }
      else {
        auVar38[0] = -(*(byte *)param_2 == UNK_1433882e0);
        auVar38[1] = -(*(byte *)((longlong)param_2 + 1) == UNK_1433882e1);
        auVar38[2] = -(*(byte *)((longlong)param_2 + 2) == UNK_1433882e2);
        auVar38[3] = -(*(byte *)((longlong)param_2 + 3) == UNK_1433882e3);
        auVar38[4] = -(*(byte *)((longlong)param_2 + 4) == UNK_1433882e4);
        auVar38[5] = -(*(byte *)((longlong)param_2 + 5) == UNK_1433882e5);
        auVar38[6] = -(*(byte *)((longlong)param_2 + 6) == UNK_1433882e6);
        auVar38[7] = -(*(byte *)((longlong)param_2 + 7) == UNK_1433882e7);
        auVar38[8] = -(*(byte *)(param_2 + 1) == UNK_1433882e8);
        auVar38[9] = -(*(byte *)((longlong)param_2 + 9) == UNK_1433882e9);
        auVar38[10] = -(*(byte *)((longlong)param_2 + 10) == UNK_1433882ea);
        auVar38[0xb] = -(*(byte *)((longlong)param_2 + 0xb) == UNK_1433882eb);
        auVar38[0xc] = -(*(byte *)((longlong)param_2 + 0xc) == UNK_1433882ec);
        auVar38[0xd] = -(*(byte *)((longlong)param_2 + 0xd) == UNK_1433882ed);
        auVar38[0xe] = -(*(byte *)((longlong)param_2 + 0xe) == UNK_1433882ee);
        auVar38[0xf] = -(*(byte *)((longlong)param_2 + 0xf) == UNK_1433882ef);
        auVar44[0] = -(*(byte *)(param_2 + 2) == UNK_143388380);
        auVar44[1] = -(UNK_143388381 == '\0');
        auVar44[2] = -(UNK_143388382 == '\0');
        auVar44[3] = -(UNK_143388383 == '\0');
        auVar44[4] = -(UNK_143388384 == '\0');
        auVar44[5] = -(UNK_143388385 == '\0');
        auVar44[6] = -(UNK_143388386 == '\0');
        auVar44[7] = -(UNK_143388387 == '\0');
        auVar44[8] = -(UNK_143388388 == '\0');
        auVar44[9] = -(UNK_143388389 == '\0');
        auVar44[10] = -(UNK_14338838a == '\0');
        auVar44[0xb] = -(UNK_14338838b == '\0');
        auVar44[0xc] = -(UNK_14338838c == '\0');
        auVar44[0xd] = -(UNK_14338838d == '\0');
        auVar44[0xe] = -(UNK_14338838e == '\0');
        auVar44[0xf] = -(UNK_14338838f == '\0');
        auVar44 = auVar44 & auVar38;
        if ((ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar44[0xf] >> 7) << 0xf) == 0xffff) {
          (&UNK_143389341)[uVar10] = 0x29;
        }
        else {
          auVar39[0] = -(*(byte *)param_2 == UNK_143388390);
          auVar39[1] = -(*(byte *)((longlong)param_2 + 1) == UNK_143388391);
          auVar39[2] = -(*(byte *)((longlong)param_2 + 2) == UNK_143388392);
          auVar39[3] = -(*(byte *)((longlong)param_2 + 3) == UNK_143388393);
          auVar39[4] = -(*(byte *)((longlong)param_2 + 4) == UNK_143388394);
          auVar39[5] = -(*(byte *)((longlong)param_2 + 5) == UNK_143388395);
          auVar39[6] = -(*(byte *)((longlong)param_2 + 6) == UNK_143388396);
          auVar39[7] = -(*(byte *)((longlong)param_2 + 7) == UNK_143388397);
          auVar39[8] = -(*(byte *)(param_2 + 1) == UNK_143388398);
          auVar39[9] = -(*(byte *)((longlong)param_2 + 9) == UNK_143388399);
          auVar39[10] = -(*(byte *)((longlong)param_2 + 10) == UNK_14338839a);
          auVar39[0xb] = -(*(byte *)((longlong)param_2 + 0xb) == UNK_14338839b);
          auVar39[0xc] = -(*(byte *)((longlong)param_2 + 0xc) == UNK_14338839c);
          auVar39[0xd] = -(*(byte *)((longlong)param_2 + 0xd) == UNK_14338839d);
          auVar39[0xe] = -(*(byte *)((longlong)param_2 + 0xe) == UNK_14338839e);
          auVar39[0xf] = -(*(byte *)((longlong)param_2 + 0xf) == UNK_14338839f);
          auVar45[0] = -(*(byte *)(param_2 + 2) == UNK_142e478c0);
          auVar45[1] = -(UNK_142e478c1 == '\0');
          auVar45[2] = -(UNK_142e478c2 == '\0');
          auVar45[3] = -(UNK_142e478c3 == '\0');
          auVar45[4] = -(UNK_142e478c4 == '\0');
          auVar45[5] = -(UNK_142e478c5 == '\0');
          auVar45[6] = -(UNK_142e478c6 == '\0');
          auVar45[7] = -(UNK_142e478c7 == '\0');
          auVar45[8] = -(UNK_142e478c8 == '\0');
          auVar45[9] = -(UNK_142e478c9 == '\0');
          auVar45[10] = -(UNK_142e478ca == '\0');
          auVar45[0xb] = -(UNK_142e478cb == '\0');
          auVar45[0xc] = -(UNK_142e478cc == '\0');
          auVar45[0xd] = -(UNK_142e478cd == '\0');
          auVar45[0xe] = -(UNK_142e478ce == '\0');
          auVar45[0xf] = -(UNK_142e478cf == '\0');
          auVar45 = auVar45 & auVar39;
          if ((ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar45[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141adb7c5;
          (&UNK_143389341)[uVar10] = 0x35;
        }
      }
    }
    goto code_r0x000141adb891;
  case 0x4c:
    if (bVar35) {
      param_2 = (ulonglong ***)(ulonglong)*(uint *)(param_2 + 1);
      if (in_R10 == (ulonglong ****)0x6e61635f && param_4 == (ulonglong ****)0x0) {
        (&UNK_143389341)[uVar10] = 6;
      }
      else {
        param_1 = (ulonglong ****)((ulonglong)param_1 ^ (ulonglong)*param_2);
        param_4 = (ulonglong ****)(ulonglong)*(uint *)(param_2 + 1);
code_r0x000141adb5a2:
        if (param_4 != (ulonglong ****)0x32765f74 || param_1 != (ulonglong ****)0x0) {
          param_1 = (ulonglong ****)0x725f636972626166;
          ppppuVar30 = ppppuVar29;
          goto code_r0x000141adb5bc;
        }
        *(char *)((longlong)ppppuVar11 + 1) = '\x0f';
      }
    }
    else {
code_r0x000141adb50f:
      if (*(longlong *)((longlong)param_2 + 6) != 0x676f6c5f65657274 ||
          param_1 != (ulonglong ****)*param_2) goto code_r0x000141adb529;
      *(char *)((longlong)ppppuVar11 + 1) = '#';
    }
    goto code_r0x000141adb891;
  case 0x4d:
    ppppuVar11 = (ulonglong ****)CONCAT71(uVar17,bVar20 + *(char *)ppppuVar11);
    pbVar2 = (byte *)((longlong)ppppuVar11 + -0x47);
    bVar20 = *pbVar2;
    *pbVar2 = *pbVar2 + bVar18;
    if (*pbVar2 != 0) {
      if (!CARRY1(bVar20,bVar18)) {
        ppppuVar29 = (ulonglong ****)&ppppuStack_60;
        ppppuVar11 = (ulonglong ****)(ulonglong)(uint)((int)ppppuVar11 + *(int *)ppppuVar11);
        pcVar14 = (char *)((longlong)ppppuVar11 + -0x47);
        cVar7 = *pcVar14;
        *pcVar14 = *pcVar14 + bVar18;
        if (!SCARRY1(cVar7,bVar18)) {
          iVar8 = in(uVar25);
          *(int *)unaff_RDI = iVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto code_r0x000141adb5a2;
      }
      if (CARRY1(bVar20,bVar18)) {
        if (*(longlong *)((longlong)param_2 + 6) == 0x736c6f6f745f775f && uVar26 == *(uint *)param_2
           ) {
          *(char *)((longlong)ppppuVar11 + 1) = '\x19';
          goto code_r0x000141adb891;
        }
        if (*(longlong *)((longlong)param_2 + 6) == 0x726574747568735f &&
            *param_2 == (ulonglong **)0x735f776f646e6977) goto code_r0x000141adb863;
        param_1 = (ulonglong ****)0x72745f6e65646c6f;
      }
      else {
        param_1 = (ulonglong ****)(ulonglong)(uVar26 ^ *(uint *)param_2);
      }
      goto code_r0x000141adb50f;
    }
code_r0x000141adb529:
    ppppuVar24 = (ulonglong ****)&ppppuStack_68;
    if (*(longlong *)((longlong)param_2 + 6) != 0x656361665f775f6e ||
        *param_2 != (ulonglong **)0x5f6e696b706d7570) {
LAB_141adb7c5:
      *(undefined8 *)((longlong)ppppuVar24 + -8) = 0x141adb7e3;
      pppuVar13 = (ulonglong ***)pdb_142d8f140(param_2,&UNK_143389340,&UNK_1433888a0,0x39);
      ppppuVar11[1] = pppuVar13;
      cVar7 = '\x01';
      goto LAB_141adb893;
    }
code_r0x000141adb54d:
    *(char *)((longlong)ppppuVar11 + 1) = '\'';
    goto code_r0x000141adb891;
  case 0x4e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4f:
    if (*(byte *)(param_2 + 1) == 0x72 && uVar26 == *(uint *)param_2) {
      (&UNK_143389341)[uVar10] = 0x16;
    }
    else if (*(byte *)(param_2 + 1) == 0x78 && *param_2 == (ulonglong **)0x6f627265776f6c66) {
      (&UNK_143389341)[uVar10] = 0x32;
    }
    else {
      ppppuVar24 = (ulonglong ****)&ppppuStack_68;
      if (*(byte *)(param_2 + 1) != 0x6c || *param_2 != (ulonglong **)0x6c65625f726f6f64)
      goto LAB_141adb7c5;
      (&UNK_143389341)[uVar10] = 0x33;
    }
    goto code_r0x000141adb891;
  case 0x50:
    ppppuVar24 = (ulonglong ****)&ppppuStack_68;
    if (param_4 != (ulonglong ****)0x0 || param_1 != (ulonglong ****)0x0) goto LAB_141adb7c5;
    (&UNK_143389341)[uVar10] = 0x28;
    goto code_r0x000141adb891;
  case 0x51:
    pbVar2 = (byte *)((longlong)param_1 + 9);
    *pbVar2 = *pbVar2 + bVar20;
    if (*pbVar2 == 0) {
      (&UNK_143389341)[uVar10] = 4;
    }
    else if (*(short *)((longlong)param_2 + 4) == 0x7465 && *(uint *)param_2 == 0x6b637562) {
      (&UNK_143389341)[uVar10] = 8;
    }
    else {
      if (*(short *)((longlong)param_2 + 4) == 0x6c65 && *(uint *)param_2 == 0x72726162)
      goto code_r0x000141adb747;
      ppppuVar24 = (ulonglong ****)&stack0xfffffffffffffff0;
      if (*(short *)((longlong)param_2 + 4) != 0x7465 || *(uint *)param_2 != 0x6b736162)
      goto LAB_141adb7c5;
      (&UNK_143389341)[uVar10] = 0x11;
    }
    goto code_r0x000141adb891;
  case 0x52:
    *(int *)unaff_RSI = *(int *)unaff_RSI + unaff_R12D;
    break;
  case 0x53:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x54:
    *(byte *)ppppuVar11 = *(char *)ppppuVar11 + bVar20;
    *(int *)unaff_RDI = *(int *)unaff_RDI + 0x43389340;
    goto code_r0x000141adae8c;
  case 0x55:
    *(byte *)ppppuVar11 = *(char *)ppppuVar11 + bVar20;
    goto code_r0x000141adaeb6;
  case 0x56:
    param_2 = (ulonglong ***)CONCAT62(uVar28,CONCAT11(bVar19 + (char)unaff_RBX,(char)param_2));
    auVar41[0] = -(in_XMM1_Ba == UNK_1433882f0);
    auVar41[1] = -(in_XMM1_Bb == UNK_1433882f1);
    auVar41[2] = -(in_XMM1_Bc == UNK_1433882f2);
    auVar41[3] = -(in_XMM1_Bd == UNK_1433882f3);
    auVar41[4] = -(in_XMM1_Be == UNK_1433882f4);
    auVar41[5] = -(in_XMM1_Bf == UNK_1433882f5);
    auVar41[6] = -(in_XMM1_Bg == UNK_1433882f6);
    auVar41[7] = -(in_XMM1_Bh == UNK_1433882f7);
    auVar41[8] = -(in_XMM1_Bi == UNK_1433882f8);
    auVar41[9] = -(in_XMM1_Bj == UNK_1433882f9);
    auVar41[10] = -(in_XMM1_Bk == UNK_1433882fa);
    auVar41[0xb] = -(in_XMM1_Bl == UNK_1433882fb);
    auVar41[0xc] = -(in_XMM1_Bm == UNK_1433882fc);
    auVar41[0xd] = -(in_XMM1_Bn == UNK_1433882fd);
    auVar41[0xe] = -(in_XMM1_Bo == UNK_1433882fe);
    auVar41[0xf] = -(in_XMM1_Bp == UNK_1433882ff);
    auVar36[0] = -(in_XMM0[0] == UNK_143388300);
    auVar36[1] = -(in_XMM0[1] == UNK_143388301);
    auVar36[2] = -(in_XMM0[2] == UNK_143388302);
    auVar36[3] = -(in_XMM0[3] == UNK_143388303);
    auVar36[4] = -(in_XMM0[4] == UNK_143388304);
    auVar36[5] = -(in_XMM0[5] == UNK_143388305);
    auVar36[6] = -(in_XMM0[6] == UNK_143388306);
    auVar36[7] = -(in_XMM0[7] == UNK_143388307);
    auVar36[8] = -(in_XMM0[8] == UNK_143388308);
    auVar36[9] = -(in_XMM0[9] == UNK_143388309);
    auVar36[10] = -(in_XMM0[10] == UNK_14338830a);
    auVar36[0xb] = -(in_XMM0[0xb] == UNK_14338830b);
    auVar36[0xc] = -(in_XMM0[0xc] == UNK_14338830c);
    auVar36[0xd] = -(in_XMM0[0xd] == UNK_14338830d);
    auVar36[0xe] = -(in_XMM0[0xe] == UNK_14338830e);
    auVar36[0xf] = -(in_XMM0[0xf] == UNK_14338830f);
    auVar36 = auVar36 & auVar41;
    if ((ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) == 0xffff) {
      (&UNK_143389341)[uVar10] = 0x2a;
    }
    else {
      ppppuStack_70 = (ulonglong ****)0x141adb1ed;
      iVar8 = pub_142e32750(param_2,&UNK_14338886b);
      ppppuVar24 = (ulonglong ****)&ppppuStack_68;
      if (iVar8 != 0) goto LAB_141adb7c5;
      (&UNK_143389341)[uVar10] = 0x36;
    }
    goto code_r0x000141adb891;
  case 0x57:
  case 0x58:
  case 0x5a:
  case 0x5b:
  case 0x5d:
    ppppuVar24 = (ulonglong ****)(ulonglong)*(uint *)((longlong)param_1 + 0x72);
    if (bVar35) {
      uVar9 = *(uint *)(param_2 + 2);
      auVar46[0] = -((char)uVar9 == UNK_143388340);
      auVar46[1] = -((char)(uVar9 >> 8) == UNK_143388341);
      auVar46[2] = -((char)(uVar9 >> 0x10) == UNK_143388342);
      auVar46[3] = -((char)(uVar9 >> 0x18) == UNK_143388343);
      auVar46[4] = -(UNK_143388344 == '\0');
      auVar46[5] = -(UNK_143388345 == '\0');
      auVar46[6] = -(UNK_143388346 == '\0');
      auVar46[7] = -(UNK_143388347 == '\0');
      auVar46[8] = -(UNK_143388348 == '\0');
      auVar46[9] = -(UNK_143388349 == '\0');
      auVar46[10] = -(UNK_14338834a == '\0');
      auVar46[0xb] = -(UNK_14338834b == '\0');
      auVar46[0xc] = -(UNK_14338834c == '\0');
      auVar46[0xd] = -(UNK_14338834d == '\0');
      auVar46[0xe] = -(UNK_14338834e == '\0');
      auVar46[0xf] = -(UNK_14338834f == '\0');
      auVar40[0] = -(*(byte *)param_2 == UNK_143388350);
      auVar40[1] = -(*(byte *)((longlong)param_2 + 1) == UNK_143388351);
      auVar40[2] = -(*(byte *)((longlong)param_2 + 2) == UNK_143388352);
      auVar40[3] = -(*(byte *)((longlong)param_2 + 3) == UNK_143388353);
      auVar40[4] = -(*(byte *)((longlong)param_2 + 4) == UNK_143388354);
      auVar40[5] = -(*(byte *)((longlong)param_2 + 5) == UNK_143388355);
      auVar40[6] = -(*(byte *)((longlong)param_2 + 6) == UNK_143388356);
      auVar40[7] = -(*(byte *)((longlong)param_2 + 7) == UNK_143388357);
      auVar40[8] = -(*(byte *)(param_2 + 1) == UNK_143388358);
      auVar40[9] = -(*(byte *)((longlong)param_2 + 9) == UNK_143388359);
      auVar40[10] = -(*(byte *)((longlong)param_2 + 10) == UNK_14338835a);
      auVar40[0xb] = -(*(byte *)((longlong)param_2 + 0xb) == UNK_14338835b);
      auVar40[0xc] = -(*(byte *)((longlong)param_2 + 0xc) == UNK_14338835c);
      auVar40[0xd] = -(*(byte *)((longlong)param_2 + 0xd) == UNK_14338835d);
      auVar40[0xe] = -(*(byte *)((longlong)param_2 + 0xe) == UNK_14338835e);
      auVar40[0xf] = -(*(byte *)((longlong)param_2 + 0xf) == UNK_14338835f);
      auVar40 = auVar40 & auVar46;
      if ((ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar40[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141adb7c5;
      (&UNK_143389341)[uVar10] = 0x13;
    }
    else {
      ppppuVar11 = (ulonglong ****)
                   CONCAT71(uVar17,(bVar20 | (unaff_RDI + -0x4a)[(longlong)param_1]) + 0x41);
      if ((int)param_4 == 0 && uVar26 == 0x32) {
        *(char *)((longlong)ppppuVar11 + 1) = '\x18';
      }
      else {
        if (*(byte *)((longlong)param_2 + 4) != 0x6c || *(uint *)param_2 != 0x69766e61)
        goto LAB_141adb7c5;
        *(char *)((longlong)ppppuVar11 + 1) = ',';
      }
    }
    goto code_r0x000141adb891;
  case 0x59:
    if (bVar34) {
code_r0x000141adb622:
      ppppuVar24 = (ulonglong ****)&ppppuStack_68;
      if (!bVar35) goto LAB_141adb7c5;
      (&UNK_143389341)[uVar10] = 0x26;
    }
    else {
code_r0x000141adb5bc:
      ppppuVar24 = ppppuVar30;
      if (*(uint *)(param_2 + 1) != 0x736c6c6f || param_1 != (ulonglong ****)*param_2)
      goto LAB_141adb7c5;
      *(char *)((longlong)ppppuVar11 + 1) = '-';
    }
    goto code_r0x000141adb891;
  case 0x5c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5e:
    *(byte *)ppppuVar11 = *(char *)ppppuVar11 + bVar20;
    if (*param_2 == (ulonglong **)0x7473656e64726962) {
      (&UNK_143389341)[uVar10] = 9;
    }
    else {
      if (*param_2 != (ulonglong **)0x6b63617473796168) {
        bVar35 = *param_2 == (ulonglong **)0x326e696b706d7570;
        goto code_r0x000141adb622;
      }
      (&UNK_143389341)[uVar10] = 0xe;
    }
    goto code_r0x000141adb891;
  case 0x5f:
    *unaff_RBX = *unaff_RBX + (int)unaff_RBX;
    goto code_r0x000141adb891;
  case 0x60:
    goto LAB_141adb913;
  case 0x61:
code_r0x000141adb863:
    *(char *)((longlong)ppppuVar11 + 1) = '\x1c';
    goto code_r0x000141adb891;
  case 0x62:
    ppppuVar11 = (ulonglong ****)(ulonglong)(uVar9 ^ *(uint *)((longlong)param_2 + 3));
    if ((uVar26 | 0x43389340) == 0) {
      *(char *)((longlong)ppppuVar11 + 1) = '\x05';
      *(char *)ppppuVar11 = '\0';
      return ppppuVar11;
    }
    goto LAB_141adbbe7;
  case 99:
    if (*(short *)(param_2 + 1) == 0x7374 && *param_2 == (ulonglong **)0x72696b735f736168)
    goto code_r0x000141adba23;
    goto LAB_141adbbe7;
  case 100:
    ppppuVar11 = (ulonglong ****)CONCAT71(uVar17,bVar20 | bVar19);
    *unaff_RBX = *unaff_RBX + iVar8;
    goto code_r0x000141adb891;
  case 0x65:
    ppppuVar11 = (ulonglong ****)CONCAT71(uVar17,(bVar20 - 0x3a) + bVar34);
    *unaff_RBX = *unaff_RBX + (int)ppppuVar11;
LAB_141adb913:
    *(char *)ppppuVar11 = '\0';
    return ppppuVar11;
  case 0x66:
    ppppuVar11 = (ulonglong ****)(ulonglong)((uint)CONCAT71(uVar17,bVar20 + 0x41) ^ 0x65);
    if ((uVar26 | 0x43389340) == 0) {
      *(char *)((longlong)ppppuVar11 + 1) = '\0';
      *(char *)ppppuVar11 = '\0';
      return ppppuVar11;
    }
    if (*(byte *)((longlong)param_2 + 4) == 0x65 && *(uint *)param_2 == 0x6c797473) {
      *(char *)((longlong)ppppuVar11 + 1) = '\x06';
      *(char *)ppppuVar11 = '\0';
      return ppppuVar11;
    }
    goto LAB_141adbbe7;
  case 0x67:
  case 0x68:
  case 0x6b:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
    return (ulonglong ****)CONCAT71(uVar17,bVar20 + 0x81);
  case 0x69:
    *(int *)((longlong)unaff_RSI + 0xf) = *(int *)((longlong)unaff_RSI + 0xf) + iVar8;
    if ((ushort)((ushort)(SUB161(in_XMM0 >> 7,0) & 1) | (ushort)(SUB161(in_XMM0 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(in_XMM0 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(in_XMM0 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(in_XMM0 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(in_XMM0 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(in_XMM0 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(in_XMM0 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(in_XMM0 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(in_XMM0 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(in_XMM0 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(in_XMM0 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(in_XMM0 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(in_XMM0 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(in_XMM0 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(in_XMM0[0xf] >> 7) << 0xf) == 0xffff) {
      (&UNK_143389341)[uVar10] = 0xe;
      *(char *)ppppuVar11 = '\0';
      return ppppuVar11;
    }
    goto LAB_141adbbe7;
  case 0x6a:
code_r0x000141adba23:
    (&UNK_143389341)[uVar10] = 6;
    *(char *)ppppuVar11 = '\0';
    return ppppuVar11;
  case 0x6c:
    *(uint *)unaff_RSI = *(int *)unaff_RSI + uVar9;
code_r0x000141adb891:
    cVar7 = '\0';
LAB_141adb893:
    *(char *)ppppuVar11 = cVar7;
    return ppppuVar11;
  case 0x71:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x72:
    if (*(longlong *)((longlong)param_2 + 3) == 0x6465736f6c636e65 &&
        param_1 == (ulonglong ****)*param_2) goto code_r0x000141adbbf0;
    if (*(longlong *)((longlong)param_2 + 3) == 0x7468676965685f68 &&
        *param_2 == (ulonglong **)0x6965685f68637261) goto code_r0x000141adbc14;
    uVar22 = (ulonglong)*param_2 ^ 0x646e616865657266;
    goto code_r0x000141adbad9;
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x7b:
    *(byte *)ppppuVar11 = *(char *)ppppuVar11 + bVar20;
    pcVar14 = &UNK_1433892f9 + uVar10;
    cVar7 = *pcVar14;
    *pcVar14 = *pcVar14 + bVar18;
    if (!SCARRY1(cVar7,bVar18)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar25 = CONCAT11(0x52,(char)param_2);
    uVar27 = CONCAT62(uVar28,uVar25);
    (&UNK_1433892c3)[uVar10] = (&UNK_1433892c3)[uVar10] | bVar18;
    while (uVar22 = 0, param_1 != (ulonglong ****)0x0) {
      param_1 = (ulonglong ****)((longlong)param_1 + -1);
      out(*(undefined1 *)unaff_RSI,uVar25);
      unaff_RSI = (ulonglong ****)((longlong)unaff_RSI + 1);
    }
code_r0x000141adbb91:
    if (uVar27 == 0 && uVar22 == 0) {
      (&UNK_143389341)[uVar10] = 3;
      *(char *)ppppuVar11 = '\0';
      return ppppuVar11;
    }
    goto LAB_141adbbe7;
  case 0x79:
    if (bVar34) {
code_r0x000141adbb36:
      *(byte *)ppppuVar11 = *(char *)ppppuVar11 + bVar20;
      (&UNK_1433892f9)[uVar10] = (&UNK_1433892f9)[uVar10] + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto code_r0x000141adbad1;
  case 0x7a:
    ppppuVar24 = (ulonglong ****)&ppppuStack_70;
    cVar7 = '\x16';
    do {
      ppppuVar15 = ppppuVar15 + -1;
      ppppuVar24 = ppppuVar24 + -1;
      *ppppuVar24 = *ppppuVar15;
      cVar7 = cVar7 + -1;
    } while ('\0' < cVar7);
    *(byte *)ppppuVar11 = *(char *)ppppuVar11 + bVar20;
    *(byte *)((longlong)param_1 + 0x148880a) = *(byte *)((longlong)param_1 + 0x148880a) + bVar19;
    goto code_r0x000141adbaf5;
  case 0x7c:
    lVar21 = CONCAT71(0x686372,bRam0000000068637219 | 0x61);
    uVar26 = (int)lVar21 + *(int *)(lVar21 + 9);
    param_1 = (ulonglong ****)(ulonglong)uVar26;
    ppppuVar24 = apppuStack_88 + 1;
    cVar7 = '\a';
    do {
      ppppuVar15 = ppppuVar15 + -1;
      ppppuVar24 = ppppuVar24 + -1;
      *ppppuVar24 = *ppppuVar15;
      cVar7 = cVar7 + -1;
    } while ('\0' < cVar7);
    ppppuVar31 = (ulonglong ****)auStack_84cf;
    *(uint *)ppppuVar11 = *(int *)ppppuVar11 + uVar9;
    pbVar2 = &UNK_1433892f9 + uVar10;
    bVar18 = *pbVar2;
    bVar19 = (byte)uVar26;
    *pbVar2 = *pbVar2 + bVar19;
    if (CARRY1(bVar18,bVar19)) goto code_r0x000141adbb36;
code_r0x000141adbad1:
    *(undefined8 *)((longlong)ppppuVar31 + -8) = 0x48646e61;
    uVar22 = (ulonglong)((uint)param_1 ^ *(uint *)param_2);
code_r0x000141adbad9:
    if (*(longlong *)((longlong)param_2 + 3) == 0x79745f646e616865 && uVar22 == 0) {
      (&UNK_143389341)[uVar10] = 10;
code_r0x000141adbaf5:
      *(char *)ppppuVar11 = '\0';
      return ppppuVar11;
    }
    goto LAB_141adbbe7;
  case 0x7d:
    if ((longlong)ppppuVar11 >= 0) {
      return ppppuVar11;
    }
    if (bVar35) {
      if (param_2 == (ulonglong ***)0x0 && param_1 == (ulonglong ****)0x0) {
        (&UNK_143389341)[uVar10] = 0xc;
        uRam0000000000000000 = 0;
        return (ulonglong ****)0x0;
      }
      goto LAB_141adbbe7;
    }
    if (bVar34) {
      pcVar5 = (code *)swi(3);
      ppppuVar15 = (ulonglong ****)(*pcVar5)();
      return ppppuVar15;
    }
    param_1 = (ulonglong ****)((longlong)param_1 + 0x113fff3);
    goto code_r0x000141adbbd1;
  default:
code_r0x000141adbc14:
    (&UNK_143389341)[uVar10] = 4;
    *(char *)ppppuVar11 = '\0';
    return ppppuVar11;
  case 0x7f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x81:
    return ppppuVar11;
  case 0x82:
    ppppuVar11 = (ulonglong ****)(ulonglong)(uVar9 + *(int *)param_1 + (uint)bVar34);
code_r0x000141adbbd1:
    if (*(longlong *)((longlong)param_2 + 7) == 0x6e6f69737265765f &&
        param_1 == (ulonglong ****)*param_2) {
      *(char *)((longlong)ppppuVar11 + 1) = '\t';
      *(char *)ppppuVar11 = '\0';
      return ppppuVar11;
    }
LAB_141adbbe7:
    *(char *)((longlong)ppppuVar11 + 1) = '\x0f';
    *(char *)ppppuVar11 = '\0';
    return ppppuVar11;
  case 0x87:
    goto code_r0x000141adbbf2;
  case 0x8f:
    bVar20 = in(uVar25);
    *unaff_RDI = bVar20;
    if (bVar34 || bVar35) {
      puStack_f8 = (undefined1 *)&ppppuStack_70;
      ppppuVar30 = (ulonglong ****)&ppppuStack_70;
      ppppuVar23 = (ulonglong ****)&ppppuStack_70;
      ppppuVar24 = (ulonglong ****)&ppppuStack_70;
      cVar7 = '\x10';
      ppppuVar4 = ppppuVar15;
      do {
        ppppuVar4 = ppppuVar4 + -1;
        ppppuVar30 = ppppuVar30 + -1;
        *ppppuVar30 = *ppppuVar4;
        cVar7 = cVar7 + -1;
      } while ('\0' < cVar7);
      ppppuStack_70 = ppppuVar15;
      if ((longlong)ppppuVar11 < 0) {
        while (((byte)(((byte)(*(byte *)((longlong)param_2 + 5) + 0xbf) < 0x1a) << 5 |
                      *(byte *)((longlong)param_2 + 5)) == 0x6e &&
               ((byte)(((byte)(*(byte *)((longlong)param_2 + 6) + 0xbf) < 0x1a) << 5 |
                      *(byte *)((longlong)param_2 + 6)) == 0x67))) {
          puStack_2574 = &UNK_14273bd78;
          pdb_14273d7e0(unaff_RDI + 1,unaff_R13 + 6);
          uVar9 = (uint)(byte)ppppuStack_48;
          if (pppuStack_50 != (ulonglong ***)0x7) {
            uVar26 = (uint)((ulonglong)ppppuStack_48 >> 8);
            uVar10 = (ulonglong)ppppuStack_48 >> 0x10;
            ppppuVar24 = ppppuStack_28;
            goto code_r0x00014273c31d;
          }
code_r0x00014273bc87:
          while( true ) {
            piVar12 = unaff_R13;
            unaff_R13 = piVar12 + 0xc;
            if (unaff_R13 == unaff_RBX) {
              uVar26 = ((uint)unaff_R14 & 0xff) << 8;
              pppuVar13 = (ulonglong ***)0x0;
              pppuVar16 = (ulonglong ***)(ulonglong)uVar26;
              if (apppuStack_88[0] != (ulonglong ***)0x0) {
                puStack_2574 = &UNK_14273c41f;
                pub_1406abac0((byte *)pppuStack_78,(longlong)apppuStack_88[0] * 0x30,8);
                pppuVar13 = extraout_RAX_00;
                pppuVar16 = pppuStack_78;
              }
              *(undefined2 *)(unaff_RSI + 1) = 1;
              *(ushort *)((longlong)unaff_RSI + 10) = (ushort)uVar26 | 5;
              *(uint *)((longlong)unaff_RSI + 0xc) = uVar9;
              unaff_RSI[2] = unaff_R14;
              unaff_RSI[3] = pppuVar13;
              unaff_RSI[4] = pppuVar16;
              *unaff_RSI = (ulonglong ***)0x7;
              return unaff_RSI;
            }
            param_2 = *(ulonglong ****)unaff_R13;
            if (*(longlong *)(piVar12 + 0xe) != 4) break;
            if ((((byte)(((byte)(*(byte *)param_2 + 0xbf) < 0x1a) << 5 | *(byte *)param_2) != 0x72)
                || ((byte)(((byte)(*(byte *)((longlong)param_2 + 1) + 0xbf) < 0x1a) << 5 |
                          *(byte *)((longlong)param_2 + 1)) != 0x65)) ||
               (((byte)(((byte)(*(byte *)((longlong)param_2 + 2) + 0xbf) < 0x1a) << 5 |
                       *(byte *)((longlong)param_2 + 2)) != 0x70 ||
                ((byte)(((byte)(*(byte *)((longlong)param_2 + 3) + 0xbf) < 0x1a) << 5 |
                       *(byte *)((longlong)param_2 + 3)) != 0x72)))) goto code_r0x00014273bf75;
            pbVar2 = *(byte **)(piVar12 + 0x12);
            if (*(longlong *)(piVar12 + 0x14) != 2) goto code_r0x00014273c299;
            bVar20 = ((byte)(*pbVar2 + 0xbf) < 0x1a) << 5 | *pbVar2;
            if (bVar20 == 0x32) goto code_r0x00014273bc63;
            if ((bVar20 != 0x31) ||
               ((byte)(((byte)(pbVar2[1] + 0xbf) < 0x1a) << 5 | pbVar2[1]) != 0x32))
            goto code_r0x00014273c299;
            unaff_R14 = (ulonglong ***)0x0;
          }
          if (((((*(longlong *)(piVar12 + 0xe) != 7) ||
                ((byte)(((byte)(*(byte *)param_2 + 0xbf) < 0x1a) << 5 | *(byte *)param_2) != 0x70))
               || ((byte)(((byte)(*(byte *)((longlong)param_2 + 1) + 0xbf) < 0x1a) << 5 |
                         *(byte *)((longlong)param_2 + 1)) != 0x61)) ||
              (((byte)(((byte)(*(byte *)((longlong)param_2 + 2) + 0xbf) < 0x1a) << 5 |
                      *(byte *)((longlong)param_2 + 2)) != 100 ||
               ((byte)(((byte)(*(byte *)((longlong)param_2 + 3) + 0xbf) < 0x1a) << 5 |
                      *(byte *)((longlong)param_2 + 3)) != 100)))) ||
             ((byte)(((byte)(*(byte *)((longlong)param_2 + 4) + 0xbf) < 0x1a) << 5 |
                    *(byte *)((longlong)param_2 + 4)) != 0x69)) break;
        }
code_r0x00014273bf75:
        puStack_2574 = &UNK_14273bf7d;
        pdb_140f5e160();
        ppppuVar24 = ppppuVar23;
        ppppuVar15 = ppppuStack_70;
        if (SBORROW8(0,(longlong)ppppuStack_70)) {
          uStack_254c = 1;
          ppppuVar24 = &pppuStack_50;
          puStack_2574 = &UNK_14273bfb4;
          pdb_140225b90(ppppuVar24,ppppuStack_60,0,1);
          if ((int)pppuStack_50 == 1) {
            puStack_2574 = &UNK_14273c7a8;
            pdb_142dc7e2a(ppppuStack_48,ppppuStack_40);
code_r0x00014273c812:
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          ppppuVar15 = ppppuStack_48;
          if (ppppuStack_60 == (ulonglong ****)0x0) {
            ppppuStack_60 = (ulonglong ****)0x0;
            ppppuStack_68 = ppppuStack_40;
          }
          else {
            puStack_2574 = &UNK_14273bfdd;
            ppppuVar24 = ppppuStack_40;
            pub_142e32760(ppppuStack_40,ppppuStack_68,ppppuStack_60);
            ppppuStack_68 = ppppuStack_40;
          }
        }
        ppppuStack_48 = ppppuVar15;
        uVar9 = unaff_R13[4];
        ppppuStack_38 = ppppuStack_68;
code_r0x00014273c30d:
        uVar26 = uVar9 >> 8;
        uVar10 = (ulonglong)(uVar9 >> 0x10);
        pppuStack_50 = (ulonglong ***)0x2;
        uStack_30 = ppppuStack_60;
        ppppuStack_40 = ppppuStack_48;
code_r0x00014273c31d:
        *unaff_RSI = pppuStack_50;
        unaff_RSI[1] = (ulonglong ***)
                       (uVar10 << 0x10 | (ulonglong)((uVar26 & 0xff) << 8 | uVar9 & 0xff));
        unaff_RSI[2] = (ulonglong ***)ppppuStack_40;
        unaff_RSI[3] = (ulonglong ***)ppppuStack_38;
        unaff_RSI[4] = (ulonglong ***)uStack_30;
        unaff_RSI[5] = (ulonglong ***)ppppuVar24;
        if (apppuStack_88[0] != (ulonglong ***)0x0) {
          puStack_2574 = &UNK_14273b523;
          pub_1406abac0((byte *)pppuStack_78,(longlong)apppuStack_88[0] * 0x30,8);
        }
        return unaff_RSI;
      }
    }
    else if (!bVar35) {
      out(*(int *)unaff_RSI,uVar25);
      uVar22 = (ulonglong)param_1 ^ (ulonglong)*param_2;
      uVar27 = (ulonglong)*(byte *)(param_2 + 1) ^ 0x6e;
      goto code_r0x000141adbb91;
    }
code_r0x000141adbbf0:
    param_1 = (ulonglong ****)0x2;
code_r0x000141adbbf2:
    (&UNK_143389341)[uVar10] = (char)param_1;
    *(char *)ppppuVar11 = '\0';
    return ppppuVar11;
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x96:
    *(undefined2 *)((longlong)ppppuVar11 + (longlong)param_1 * 4) = in_FS;
    *(byte *)ppppuVar11 = *(char *)ppppuVar11 + bVar20;
    pcVar14 = &stack0xfffffffffffffff5 + (longlong)param_1 * 4;
    cVar7 = *pcVar14;
    *pcVar14 = *pcVar14 + bVar18;
    if (SCARRY1(cVar7,bVar18) == *pcVar14 < '\0') {
      ppppuVar11 = (ulonglong ****)CONCAT71(uVar17,*(byte *)param_1);
      goto code_r0x000141adbfd7;
    }
    param_1 = (ulonglong ****)(ulonglong)(uVar26 + 8);
  case 0x95:
code_r0x000141adbfd7:
    uStack_30 = (ulonglong ****)&UNK_143389148;
    ppppuStack_38 = (ulonglong ****)&UNK_1433892d8;
    ppppuStack_28 = (ulonglong ****)0x5;
    ppppuStack_48 = (ulonglong ****)0xb;
    ppppuStack_70 = (ulonglong ****)&UNK_141adc063;
    ppppuStack_40 = param_1;
    ppppuVar15 = (ulonglong ****)pdb_140f67100(ppppuVar11,&UNK_143389232,0xb,&UNK_14338913d);
    return ppppuVar15;
  case 0x93:
    puVar1 = (uint *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x8a,bVar18)) + -0x48);
    uVar26 = *puVar1;
    *puVar1 = *puVar1 + uVar9;
    cVar7 = bVar20 + CARRY4(uVar26,uVar9);
    pcVar14 = (char *)CONCAT71(uVar17,cVar7);
    *pcVar14 = *pcVar14 + cVar7;
    ppppuStack_70 = (ulonglong ****)&UNK_141adbf48;
    ppppuVar15 = (ulonglong ****)pdb_140f673b0(pcVar14);
    return ppppuVar15;
  case 0x94:
    pcVar5 = (code *)swi(3);
    ppppuVar15 = (ulonglong ****)(*pcVar5)();
    return ppppuVar15;
  }
code_r0x000141adaf52:
  uVar6 = 0;
LAB_141adaf54:
  *(undefined1 *)unaff_RSI = uVar6;
  return unaff_RSI;
code_r0x00014273bc63:
  unaff_R14 = (ulonglong ***)CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
  if ((byte)(((byte)(pbVar2[1] + 0xbf) < 0x1a) << 5 | pbVar2[1]) != 0x34) {
code_r0x00014273c299:
    puStack_2574 = &UNK_14273c2a1;
    pdb_140f5e160();
    if (!SBORROW8(0,(longlong)ppppuStack_70)) {
      uVar9 = piVar12[0x16];
      ppppuStack_48 = ppppuStack_70;
      ppppuStack_38 = ppppuStack_68;
      goto code_r0x00014273c30d;
    }
    uStack_254c = 1;
    ppppuVar24 = &pppuStack_50;
    puStack_2574 = &UNK_14273c2d8;
    pdb_140225b90(ppppuVar24,ppppuStack_60,0,1);
    if ((int)pppuStack_50 == 1) {
      puStack_2574 = &UNK_14273c7e4;
      pdb_142dc7e2a(ppppuStack_48,ppppuStack_40);
      goto code_r0x00014273c812;
    }
    ppppuStack_38 = ppppuStack_40;
    if (ppppuStack_60 == (ulonglong ****)0x0) {
      ppppuStack_60 = (ulonglong ****)0x0;
      uVar9 = piVar12[0x16];
    }
    else {
      puStack_2574 = &UNK_14273c301;
      ppppuVar24 = ppppuStack_40;
      pub_142e32760(ppppuStack_40,ppppuStack_68,ppppuStack_60);
      uVar9 = piVar12[0x16];
    }
    goto code_r0x00014273c30d;
  }
  goto code_r0x00014273bc87;
code_r0x000141adaeb6:
  *(int *)(param_1 + (longlong)unaff_R13) = *(int *)(param_1 + (longlong)unaff_R13) + iVar33;
  ppppuVar11 = (ulonglong ****)((ulonglong)&ppppuStack_68 & 0xffffffff);
  *(char *)ppppuVar11 = *(char *)ppppuVar11 + (char)ppppuVar11;
  _UNK_141ae3aaf = _UNK_141ae3aaf + 0x43389340;
code_r0x000141adaec8:
  _UNK_141ae31b8 = _UNK_141ae31b8 + iVar33;
  iRam0000000188742bc3 = iRam0000000188742bc3 + (int)param_4;
  *(int *)unaff_RSI = *(int *)unaff_RSI + (int)ppppuVar11;
code_r0x000141adaeda:
  goto code_r0x000141adaf52;
code_r0x000141adae68:
  goto code_r0x000141adaf52;
code_r0x000141adaed4:
  goto code_r0x000141adaf52;
code_r0x000141adae8c:
  goto code_r0x000141adaf52;
code_r0x000141adae9e:
  goto code_r0x000141adaf52;
}

