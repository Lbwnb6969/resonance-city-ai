// VA 0x1429820f0, PDB extent 1615 bytes
// toolbar::toolbar_systems::toolbar_alignment
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000142983719) overlaps instruction at (ram,0x000142983718)
    */
/* WARNING: Removing unreachable block (ram,0x000142982a36) */
/* WARNING: Removing unreachable block (ram,0x000142982a84) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::toolbar_systems::toolbar_alignment
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_systems.rs
   Extent: 1615 */

void pdb_1429820f0(undefined8 param_1,ulonglong *param_2,ulonglong *param_3,float param_4)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined3 uVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  undefined *puVar12;
  longlong lVar13;
  ulonglong *puVar14;
  undefined6 uVar21;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int *piVar19;
  char *pcVar20;
  undefined8 *in_RCX;
  ulonglong *puVar22;
  uint *puVar23;
  longlong lVar24;
  undefined4 *puVar25;
  ulonglong *puVar26;
  char cVar29;
  ulonglong *puVar27;
  ulonglong *puVar28;
  char cVar30;
  longlong unaff_RBX;
  undefined8 uVar31;
  undefined8 *puVar32;
  longlong *plVar33;
  longlong *plVar34;
  ulonglong **ppuVar35;
  longlong *plVar36;
  ulonglong *unaff_RBP;
  ulonglong **ppuVar37;
  undefined4 uVar38;
  undefined8 uVar39;
  undefined8 unaff_RSI;
  ulonglong *puVar40;
  ulonglong *puVar41;
  uint uVar42;
  longlong lVar43;
  uint uVar44;
  undefined8 *in_R9;
  int iVar45;
  bool bVar46;
  undefined4 *unaff_R12;
  ulonglong *puVar47;
  longlong unaff_R13;
  ulonglong *puVar48;
  undefined8 uVar49;
  undefined4 *unaff_R14;
  ulonglong *puVar50;
  int *unaff_R15;
  undefined8 *puVar51;
  bool bVar52;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float fVar53;
  int extraout_XMM0_Db;
  int extraout_XMM0_Db_00;
  int extraout_XMM0_Db_01;
  int extraout_XMM0_Db_02;
  int extraout_XMM0_Db_03;
  int extraout_XMM0_Db_04;
  float fVar54;
  int iVar55;
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar59;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float in_XMM5_Db;
  float unaff_XMM7_Da;
  float unaff_XMM9_Da;
  float fVar60;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  longlong unaff_retaddr;
  undefined8 uStackX_8;
  undefined1 auStack_e237 [144];
  undefined1 auStack_e1a7 [38895];
  undefined1 auStack_49b8 [18560];
  undefined1 *puStack_138;
  ulonglong **ppuStack_c0;
  ulonglong *puStack_b8;
  ulonglong *apuStack_b0 [2];
  ulonglong *puStack_a0;
  longlong alStack_98 [2];
  undefined4 uStack_84;
  ulonglong *puStack_78;
  undefined4 uStack_6c;
  ulonglong *puStack_68;
  ulonglong *puStack_60;
  undefined8 uStack_58;
  ulonglong *puStack_50;
  undefined8 *puStack_48;
  undefined4 uVar58;
  
  iVar45 = (int)((ulonglong)param_1 >> 0x20);
  fVar53 = (float)param_1;
  uVar31 = (undefined8)in_ST1;
  plVar33 = alStack_98;
  plVar36 = alStack_98;
  ppuVar35 = (ulonglong **)alStack_98;
  puVar41 = (ulonglong *)*param_2;
  puVar51 = (undefined8 *)*param_3;
  uVar44 = *(uint *)((longlong)in_R9 + 0x1c);
  puVar40 = (ulonglong *)(ulonglong)uVar44;
  puVar48 = (ulonglong *)*in_R9;
  puVar47 = (ulonglong *)in_R9[2];
  puVar26 = (ulonglong *)*in_RCX;
  uVar15 = puVar41[3];
  puVar50 = (ulonglong *)(ulonglong)(uint)uVar15;
  uVar11 = *(uint *)((longlong)puVar41 + 0x1c);
  ppuVar37 = (ulonglong **)(ulonglong)uVar11;
  uVar4 = (uint)puVar41[4];
  puVar27 = (ulonglong *)(ulonglong)uVar4;
  puStack_78 = (ulonglong *)CONCAT44(puStack_78._4_4_,*(undefined4 *)((longlong)puVar41 + 0x24));
  *(uint *)puVar47 = uVar44;
  uVar17 = puVar48[0x15];
  if (uVar17 != 0) {
    in_R9 = (undefined8 *)(uVar17 * 0x28);
    param_3 = in_R9 + -5;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = param_3;
    puVar22 = (ulonglong *)puVar48[0x14];
    param_2 = puVar22;
    if (((SUB164(auVar6 * ZEXT816(0xcccccccccccccccd),8) >> 5 & 1) == 0) &&
       (param_2 = puVar22 + 5, *(byte *)((longlong)puVar22 + 0x24) != 4)) {
      *(byte *)((longlong)puVar22 + 0x24) = (byte)(0x1020300 >> (((byte)puVar26[0x1e] & 3) << 3));
    }
    if ((ulonglong *)0x27 < param_3) {
      do {
        if (*(byte *)((longlong)param_2 + 0x24) == 4) {
          bVar3 = *(byte *)((longlong)param_2 + 0x4c);
        }
        else {
          uVar42 = 0x1020300 >> (((byte)puVar26[0x1e] & 3) << 3);
          param_3 = (ulonglong *)(ulonglong)uVar42;
          *(byte *)((longlong)param_2 + 0x24) = (byte)uVar42;
          bVar3 = *(byte *)((longlong)param_2 + 0x4c);
        }
        if (bVar3 != 4) {
          uVar42 = 0x1020300 >> (((byte)puVar26[0x1e] & 3) << 3);
          param_3 = (ulonglong *)(ulonglong)uVar42;
          *(byte *)((longlong)param_2 + 0x4c) = (byte)uVar42;
        }
        param_2 = param_2 + 10;
      } while (param_2 != puVar22 + uVar17 * 5);
    }
  }
  uVar17 = puVar26[0x1e];
  *(uint *)puVar47 = uVar44;
  puVar22 = (ulonglong *)&UNK_143607f28;
  lVar13 = (longlong)*(int *)(&UNK_143607f28 + (ulonglong)(byte)uVar17 * 4);
  puVar14 = (ulonglong *)(&UNK_143607f28 + lVar13);
  uStack_6c = uVar44;
  puStack_50 = puVar26;
  puStack_48 = puVar51;
  cVar30 = (char)uVar4;
  uVar8 = (undefined3)(uVar4 >> 8);
  cVar29 = (char)((ulonglong)param_2 >> 8);
  cVar10 = (char)puVar14;
  uVar21 = (undefined6)((ulonglong)puVar14 >> 0x10);
  puVar28 = param_2;
  plVar34 = alStack_98;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((byte)uVar17) {
  case 0:
    puStack_a0 = (ulonglong *)0x1429821c1;
    pdb_142390ba0(puVar48,puVar50,uVar11);
    *(uint *)puVar47 = uVar44;
    puStack_a0 = (ulonglong *)0x1429821d3;
    pdb_142390670(puVar48,(uint)uVar15,uVar11);
    param_3 = puStack_78;
    *(uint *)puVar47 = uVar44;
    puStack_a0 = (ulonglong *)0x1429821e8;
    pdb_1423905a0(puVar48,puVar27,(ulonglong)puStack_78 & 0xffffffff);
    *(uint *)puVar47 = uVar44;
    param_2 = (ulonglong *)(ulonglong)uVar4;
    param_3 = (ulonglong *)((ulonglong)param_3 & 0xffffffff);
    puStack_a0 = (ulonglong *)0x1429821f9;
    pdb_142390670(puVar48);
    fVar53 = extraout_XMM0_Da;
    iVar45 = extraout_XMM0_Db;
    break;
  case 1:
    puStack_a0 = (ulonglong *)0x142982309;
    pdb_1423908f0(puVar48,puVar50,ppuVar37);
    *(uint *)puVar47 = uVar44;
    puStack_a0 = (ulonglong *)0x14298231b;
    pdb_142390e40(puVar48,puVar50,ppuVar37);
    param_3 = puStack_78;
    *(uint *)puVar47 = uVar44;
    puStack_a0 = (ulonglong *)0x142982330;
    pdb_142390ad0(puVar48,puVar27,(ulonglong)puStack_78 & 0xffffffff);
    *(uint *)puVar47 = uVar44;
    param_3 = (ulonglong *)((ulonglong)param_3 & 0xffffffff);
    puStack_a0 = (ulonglong *)0x142982341;
    pdb_142390c70(puVar48);
    param_2 = puVar27;
    fVar53 = extraout_XMM0_Da_02;
    iVar45 = extraout_XMM0_Db_02;
    break;
  case 2:
    puStack_a0 = (ulonglong *)0x142982276;
    pdb_142390820(puVar48,puVar50,ppuVar37);
    *(uint *)puVar47 = uVar44;
    puStack_a0 = (ulonglong *)0x142982288;
    pdb_142390e40(puVar48,puVar50,ppuVar37);
    param_3 = puStack_78;
    *(uint *)puVar47 = uVar44;
    puStack_a0 = (ulonglong *)0x14298229d;
    pdb_142390ad0(puVar48,puVar27,(ulonglong)puStack_78 & 0xffffffff);
    *(uint *)puVar47 = uVar44;
    param_3 = (ulonglong *)((ulonglong)param_3 & 0xffffffff);
    puStack_a0 = (ulonglong *)0x1429822ae;
    pdb_142390670(puVar48);
    param_2 = puVar27;
    fVar53 = extraout_XMM0_Da_00;
    iVar45 = extraout_XMM0_Db_00;
    break;
  case 3:
    puStack_a0 = (ulonglong *)0x1429822c1;
    pdb_142390ba0(puVar48,puVar50,ppuVar37);
    *(uint *)puVar47 = uVar44;
    puStack_a0 = (ulonglong *)0x1429822d3;
    pdb_142390c70(puVar48,puVar50,ppuVar37);
    param_3 = puStack_78;
    *(uint *)puVar47 = uVar44;
    puStack_a0 = (ulonglong *)0x1429822e8;
    pdb_1423905a0(puVar48,puVar27,(ulonglong)puStack_78 & 0xffffffff);
    *(uint *)puVar47 = uVar44;
    param_3 = (ulonglong *)((ulonglong)param_3 & 0xffffffff);
    puStack_a0 = (ulonglong *)0x1429822f9;
    pdb_142390c70(puVar48);
    param_2 = puVar27;
    fVar53 = extraout_XMM0_Da_01;
    iVar45 = extraout_XMM0_Db_01;
    break;
  default:
    puStack_68 = (ulonglong *)CONCAT44(puStack_68._4_4_,(int)alStack_98);
    puVar40 = puStack_50;
    goto code_r0x00014298238d;
  case 5:
  case 7:
code_r0x00014298240c:
                    /* WARNING: Could not recover jumptable at 0x00014298241a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_143607f38 + *(int *)(&UNK_143607f38 + (longlong)puVar14 * 4)))();
    return;
  case 8:
    *(byte *)((longlong)puVar27 + 99) = *(byte *)((longlong)puVar27 + 99) - cVar29;
    puVar28 = puVar27;
    puVar22 = puVar48;
    goto code_r0x0001429824b0;
  case 9:
    goto code_r0x0001429825e3;
  case 10:
    goto code_r0x000142982558;
  case 0xb:
    goto code_r0x00014298259f;
  case 0xc:
  case 0xe:
    *(byte *)puVar14 = (byte)*puVar14 + cVar10;
    *(byte *)puVar14 = (byte)*puVar14 + cVar10;
    puVar22 = puVar48;
    goto code_r0x0001429826f0;
  case 0xd:
  case 0xf:
    goto code_r0x000142982640;
  case 0x10:
    goto LAB_142982d4a;
  case 0x11:
    *(int *)(lVar13 + 0x14bd28221) = *(int *)(lVar13 + 0x14bd28221) + 1;
    goto code_r0x000142982d85;
  case 0x12:
    *(byte *)puVar41 = (byte)*puVar41 | 0x28;
    puVar14 = (ulonglong *)
              CONCAT62(uVar21,CONCAT11((char)((ulonglong)puVar14 >> 8) - cVar30,cVar10));
    goto code_r0x000142982d85;
  case 0x13:
    goto LAB_142982d4a;
  case 0x14:
    puVar27 = (ulonglong *)(ulonglong)CONCAT31(uVar8,cVar30 + cVar29);
  case 0x17:
    puVar26 = puVar22;
    puVar28 = puVar27;
    unaff_XMM9_Da = _DAT_142e37988;
    goto code_r0x000142982949;
  case 0x15:
    plVar33 = alStack_98;
    goto LAB_142983137;
  case 0x16:
    goto LAB_142983190;
  case 0x18:
    piVar19 = (int *)CONCAT62(uVar21,CONCAT11(0x24,cVar10));
    *piVar19 = *piVar19 + (int)piVar19;
    *(byte *)(puVar41 + 0x286c0fea) = (byte)puVar41[0x286c0fea] + cVar10;
    *(char *)((longlong)piVar19 + -0x7f) = *(char *)((longlong)piVar19 + -0x7f) + '(';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x19:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1a:
    LOCK();
    *(byte *)puVar14 = (byte)*puVar14 + cVar10;
    UNLOCK();
    (&UNK_143607eb5)[lVar13] = (&UNK_143607eb5)[lVar13] + '(';
    puVar14 = (ulonglong *)(ulonglong)((uint)puVar14 | 0xc84cbb);
    goto code_r0x0001429832cd;
  case 0x1b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1c:
    puVar28 = (ulonglong *)(ulonglong)CONCAT31(uVar8,cVar30 + cVar29);
    unaff_XMM11_Da = _DAT_142e37844 * unaff_XMM9_Da + fVar53 * unaff_XMM7_Da;
    goto code_r0x0001429834b8;
  case 0x1d:
    goto code_r0x0001429834dd;
  case 0x1e:
    fpatan(in_ST1,in_ST0);
    unaff_XMM11_Da = unaff_XMM11_Da + fVar53;
    puVar28 = puVar27;
code_r0x0001429834b8:
    puVar14 = (ulonglong *)(ulonglong)(byte)puVar50[0x1e];
    puVar22 = puVar48;
    goto code_r0x0001429834c0;
  case 0x1f:
    puVar14 = (ulonglong *)((ulonglong)puVar14 ^ 0x45);
    goto code_r0x0001429834d0;
  case 0x20:
    puVar1 = (uint *)(alStack_98[0] + -0x75);
    *puVar1 = *puVar1 << 7 | *puVar1 >> 0x19;
    puVar14 = (ulonglong *)
              CONCAT71((int7)((ulonglong)puVar14 >> 8),(cVar10 + -0x49) - ((*puVar1 & 1) != 0));
  case 0x23:
    uVar38 = SUB84(puVar14,0);
    puVar25 = (undefined4 *)(ulonglong)(uint)puVar41[2];
    goto code_r0x00014298370d;
  case 0x21:
  case 0x22:
    goto code_r0x000142983712;
  case 0x24:
  case 0x25:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar50 = (ulonglong *)puVar41[1];
  uStack_58 = (undefined8 *)(puVar41[2] << 5);
  puVar51 = (undefined8 *)0x0;
  puStack_60 = puVar50;
  puStack_78 = puVar48;
  puStack_68 = puVar47;
  puVar40 = puStack_50;
code_r0x00014298238d:
  for (; uVar44 = uStack_6c, puVar41 = puStack_78, uVar31 = (undefined8)in_ST1, uStack_58 != puVar51
      ; puVar51 = puVar51 + 4) {
    uVar11 = (uint)puVar50[2];
    puVar26 = (ulonglong *)(ulonglong)uVar11;
    if (uVar11 != 0) {
      uVar4 = *(uint *)((byte *)((longlong)puStack_60 + 0x14) + (longlong)puVar51);
      param_3 = (ulonglong *)(ulonglong)uVar4;
      uVar17 = puVar40[0x1e];
      *(uint *)puVar47 = uStack_6c;
      if (1 < (byte)((byte)uVar17 - 1)) {
        puStack_a0 = (ulonglong *)0x142982402;
        pdb_1423905a0(puStack_78,uVar11,uVar4);
        puVar14 = (ulonglong *)(ulonglong)(byte)puVar40[0x1e];
        *(uint *)puVar47 = uVar44;
        goto code_r0x00014298240c;
      }
      puStack_a0 = (ulonglong *)0x1429823d5;
      pdb_142390ad0(puStack_78,uVar11,uVar4);
      uVar17 = puVar40[0x1e];
      *(uint *)puVar47 = uVar44;
      puVar48 = puVar41;
      switch((byte)uVar17) {
      case 1:
        param_2 = (ulonglong *)(ulonglong)uVar11;
        param_3 = (ulonglong *)(ulonglong)uVar4;
        puStack_a0 = (ulonglong *)0x142982429;
        pdb_142390c70(puVar41);
        puVar47 = puStack_68;
        fVar53 = extraout_XMM0_Da_04;
        iVar45 = extraout_XMM0_Db_04;
        break;
      case 2:
        puStack_a0 = (ulonglong *)0x14298237d;
        pdb_142390670(puVar41);
        param_2 = puVar26;
        puVar47 = puStack_68;
        fVar53 = extraout_XMM0_Da_03;
        iVar45 = extraout_XMM0_Db_03;
      }
    }
    puVar50 = puVar50 + 4;
  }
  puVar50 = (ulonglong *)(ulonglong)*(uint *)(puStack_48 + 3);
  ppuVar37 = (ulonglong **)(ulonglong)*(uint *)((longlong)puStack_48 + 0x1c);
  puVar28 = (ulonglong *)(ulonglong)*(uint *)(puStack_48 + 4);
  puVar41 = (ulonglong *)(ulonglong)*(uint *)((longlong)puStack_48 + 0x24);
  puVar40 = (ulonglong *)(ulonglong)uStack_6c;
  *(uint *)puVar47 = uStack_6c;
  uVar17 = puVar48[0x15];
  puVar26 = puStack_50;
  puVar22 = puVar48;
  puVar51 = puStack_48;
  if (uVar17 != 0) {
    in_R9 = (undefined8 *)(uVar17 * 0x28);
    param_3 = in_R9 + -5;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = param_3;
    puVar14 = (ulonglong *)puVar48[0x14];
    param_2 = puVar14;
    if (((SUB164(auVar7 * ZEXT816(0xcccccccccccccccd),8) >> 5 & 1) == 0) &&
       (param_2 = puVar14 + 5, *(byte *)((longlong)puVar14 + 0x24) != 4)) {
      *(byte *)((longlong)puVar14 + 0x24) = (byte)(0x1020300 >> (((byte)puStack_50[0x1e] & 3) << 3))
      ;
    }
    if ((ulonglong *)0x27 < param_3) {
      puVar14 = puVar14 + uVar17 * 5;
      do {
        if (*(byte *)((longlong)param_2 + 0x24) == 4) {
          bVar3 = *(byte *)((longlong)param_2 + 0x4c);
        }
        else {
          uVar44 = 0x1020300 >> (((byte)puVar26[0x1e] & 3) << 3);
          param_3 = (ulonglong *)(ulonglong)uVar44;
          *(byte *)((longlong)param_2 + 0x24) = (byte)uVar44;
          puVar27 = puVar28;
code_r0x000142982558:
          bVar3 = *(byte *)((longlong)param_2 + 0x4c);
          puVar28 = puVar27;
        }
        if (bVar3 != 4) {
          uVar44 = 0x1020300 >> (((byte)puVar26[0x1e] & 3) << 3);
          param_3 = (ulonglong *)(ulonglong)uVar44;
          *(byte *)((longlong)param_2 + 0x4c) = (byte)uVar44;
        }
        uVar31 = (undefined8)in_ST1;
        param_2 = param_2 + 10;
        puVar22 = puVar48;
      } while (param_2 != puVar14);
    }
  }
code_r0x0001429824b0:
  uVar58 = SUB84(in_R9,0);
  uVar17 = puVar26[0x1e];
  uVar38 = SUB84(puVar40,0);
  *(undefined4 *)puVar47 = uVar38;
  puVar26 = (ulonglong *)&UNK_143607f48;
  uVar15 = (ulonglong)*(int *)(&UNK_143607f48 + (ulonglong)(byte)uVar17 * 4);
  puVar14 = (ulonglong *)(&UNK_143607f48 + uVar15);
  cVar10 = (char)puVar14;
  puVar27 = puVar28;
  puVar48 = puVar22;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((byte)uVar17) {
  case 0:
    puStack_a0 = (ulonglong *)0x1429824da;
    pdb_142390ba0(puVar22,puVar50,ppuVar37);
    *(undefined4 *)puVar47 = uVar38;
    puStack_a0 = (ulonglong *)0x1429824ec;
    pdb_142390670(puVar22,puVar50,ppuVar37);
    *(undefined4 *)puVar47 = uVar38;
    puStack_a0 = (ulonglong *)0x1429824fd;
    pdb_1423905a0(puVar22,puVar28,(ulonglong)puVar41 & 0xffffffff);
    *(undefined4 *)puVar47 = uVar38;
    puStack_a0 = (ulonglong *)0x14298250e;
    pdb_142390670(puVar22,puVar28,(ulonglong)puVar41 & 0xffffffff);
    break;
  case 1:
    puStack_a0 = (ulonglong *)0x142982611;
    pdb_1423908f0(puVar22,puVar50,ppuVar37);
    *(undefined4 *)puVar47 = uVar38;
    puStack_a0 = (ulonglong *)0x142982623;
    pdb_142390e40(puVar22,puVar50,ppuVar37);
    *(undefined4 *)puVar47 = uVar38;
    puStack_a0 = (ulonglong *)0x142982634;
    pdb_142390ad0(puVar22,puVar28,(ulonglong)puVar41 & 0xffffffff);
    *(undefined4 *)puVar47 = uVar38;
    param_3 = (ulonglong *)((ulonglong)puVar41 & 0xffffffff);
code_r0x000142982640:
    puStack_a0 = (ulonglong *)0x142982645;
    pdb_142390c70(puVar22,puVar28,param_3);
    break;
  case 2:
    puStack_a0 = (ulonglong *)0x142982586;
    pdb_142390820(puVar22,puVar50,ppuVar37);
    *(undefined4 *)puVar47 = uVar38;
    puStack_a0 = (ulonglong *)0x142982598;
    pdb_142390e40(puVar22,puVar50,ppuVar37);
    *(undefined4 *)puVar47 = uVar38;
code_r0x00014298259f:
    puStack_a0 = (ulonglong *)0x1429825a9;
    pdb_142390ad0(puVar22,puVar27,(ulonglong)puVar41 & 0xffffffff);
    *(int *)puVar47 = (int)puVar40;
    puStack_a0 = (ulonglong *)0x1429825ba;
    pdb_142390670(puVar48,puVar27,(ulonglong)puVar41 & 0xffffffff);
    break;
  case 3:
    puStack_a0 = (ulonglong *)0x1429825cd;
    pdb_142390ba0(puVar22,puVar50,ppuVar37);
    *(undefined4 *)puVar47 = uVar38;
    puStack_a0 = (ulonglong *)0x1429825df;
    pdb_142390c70(puVar22,puVar50,ppuVar37);
    *(undefined4 *)puVar47 = uVar38;
code_r0x0001429825e3:
    puStack_a0 = (ulonglong *)0x1429825f0;
    pdb_1423905a0(puVar48,puVar27,(ulonglong)puVar41 & 0xffffffff);
    *(int *)puVar47 = (int)puVar40;
    puStack_a0 = (ulonglong *)0x142982601;
    pdb_142390c70(puVar48,puVar27,(ulonglong)puVar41 & 0xffffffff);
    break;
  default:
    goto code_r0x00014298270c;
  case 5:
  case 7:
    bVar3 = in((short)param_2);
    *(byte *)puVar41 = bVar3;
    break;
  case 8:
    goto code_r0x000142982d85;
  case 9:
    *(uint *)(&UNK_143607f49 + uVar15) = *(uint *)(&UNK_143607f49 + uVar15) | 0xf3e0ffc8;
    goto code_r0x000142982da6;
  case 10:
    puVar26 = (ulonglong *)&UNK_143607f47;
    if (puVar14 != (ulonglong *)0x0) {
      puStack_a0 = (ulonglong *)&UNK_143607f47;
      ppuStack_c0 = apuStack_b0 + 1;
      ppuVar35 = apuStack_b0 + 1;
      cVar29 = '\x02';
      puVar40 = (ulonglong *)ppuVar37;
      do {
        puVar40 = puVar40 + -1;
        ppuVar35 = ppuVar35 + -1;
        *ppuVar35 = (ulonglong *)*puVar40;
        cVar29 = cVar29 + -1;
      } while ('\0' < cVar29);
      puVar14 = (ulonglong *)CONCAT71((int7)((ulonglong)puVar14 >> 8),cVar10 + -0x7f);
      apuStack_b0[1] = (ulonglong *)ppuVar37;
      goto code_r0x000142982d9c;
    }
code_r0x000142982da6:
    auVar56._4_4_ = in_XMM1._4_4_ - in_XMM2._4_4_;
    auVar56._0_4_ = in_XMM1._0_4_ - in_XMM2._0_4_;
    auVar56._8_4_ = in_XMM1._8_4_ - in_XMM2._8_4_;
    auVar56._12_4_ = in_XMM1._12_4_ - in_XMM2._12_4_;
    fVar53 = fVar53 * unaff_XMM10_Da;
    in_XMM2 = auVar56;
    in_XMM5_Da = unaff_XMM15_Da;
    in_XMM5_Db = unaff_XMM15_Da;
    goto code_r0x000142982db6;
  case 0xb:
    goto code_r0x000142982d95;
  case 0xc:
    goto code_r0x000142982949;
  case 0xd:
    pshufw(uVar31,uVar31,0x50);
    ppuVar35 = (ulonglong **)alStack_98;
    goto code_r0x000142983199;
  case 0xe:
    ppuVar35 = ppuVar37 + 1;
    ppuVar37 = (ulonglong **)*ppuVar37;
    goto code_r0x000142983199;
  case 0xf:
    goto code_r0x000142982949;
  case 0x10:
    return;
  case 0x11:
    puVar50 = (ulonglong *)*param_2;
    puStack_a0 = (ulonglong *)0x14298338a;
    pdb_142390ba0(puVar50,ppuVar37,puVar28);
    goto code_r0x00014298338a;
  case 0x12:
    puVar50 = (ulonglong *)*param_2;
    puStack_a0 = (ulonglong *)0x1429832f2;
    pdb_142390ba0(puVar50,ppuVar37,puVar28);
    goto code_r0x0001429832f2;
  case 0x13:
    puVar50 = (ulonglong *)*param_2;
    puStack_a0 = (ulonglong *)0x14298333e;
    pdb_1423908f0(puVar50,ppuVar37,puVar28);
    goto code_r0x00014298333e;
  case 0x14:
code_r0x0001429834c0:
    puVar27 = puVar28;
    plVar36 = alStack_98;
    if (1 < (byte)((char)puVar14 - 1U)) goto code_r0x0001429834d0;
    goto LAB_1429834fc;
  case 0x15:
LAB_1429834fc:
    ppuVar35 = (ulonglong **)plVar36;
    switch(&UNK_143607f98 + *(int *)(&UNK_143607f98 + (longlong)puVar14 * 4)) {
    case (undefined *)0x142983522:
code_r0x000142983522:
      plVar36 = (longlong *)ppuVar35;
      break;
    case (undefined *)0x14298354d:
    }
    goto code_r0x000142983564;
  case 0x16:
    puVar14 = (ulonglong *)(ulonglong)((uint)puVar14 | 0xc84ac1);
    goto code_r0x0001429834d0;
  case 0x17:
    cRam00000001a8ebcc49 = cRam00000001a8ebcc49 + 'H' + (0xfffffffebc9f80b7 < uVar15);
    UNK_143607f0f = UNK_143607f0f + cVar10;
code_r0x0001429834f0:
    pcVar20 = (char *)((ulonglong)puVar14 & 0xffffffffffffff10);
    *pcVar20 = *pcVar20 + (char)pcVar20;
    *pcVar20 = *pcVar20 + (char)pcVar20;
    plVar36 = plVar33;
    goto code_r0x0001429834f7;
  case 0x18:
    *(byte *)puVar14 = (byte)*puVar14 + cVar10;
    pcVar20 = &UNK_143607f09 + uVar15;
    *pcVar20 = *pcVar20 + 'H';
    puVar26 = (ulonglong *)&UNK_143607f47;
    if (*pcVar20 == '\0') {
      _UNK_143607f47 = uVar38;
    }
    goto code_r0x00014298372a;
  case 0x19:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1a:
    *(byte *)((longlong)puVar40 + 0x66) = *(byte *)((longlong)puVar40 + 0x66) << 6;
    goto LAB_142983740;
  case 0x1b:
    goto code_r0x00014298372a;
  case 0x1c:
  case 0x1d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar40 = (ulonglong *)puVar51[1];
  uStack_58 = (undefined8 *)(puVar51[2] << 5);
  puVar51 = (undefined8 *)0x0;
  puVar22 = (ulonglong *)(ulonglong)uStack_6c;
  ppuVar37 = (ulonglong **)puStack_50;
  puVar50 = puVar47;
  puStack_60 = puVar40;
  while( true ) {
    puVar47 = puStack_78;
    if (uStack_58 == puVar51) {
      return;
    }
    puVar41 = (ulonglong *)(ulonglong)(uint)puVar40[2];
    if ((uint)puVar40[2] != 0) break;
code_r0x000142982682:
    puVar40 = puVar40 + 4;
    puVar51 = puVar51 + 4;
  }
  uVar44 = *(uint *)((byte *)((longlong)puStack_60 + 0x14) + (longlong)puVar51);
  puVar27 = (ulonglong *)(ulonglong)uVar44;
  uVar17 = (ulonglong)ppuVar37[0x1e];
  *(int *)puVar50 = (int)puVar22;
  if ((byte)((byte)uVar17 - 1) < 2) {
    puStack_a0 = (ulonglong *)0x1429826cc;
    pdb_142390ad0(puStack_78,puVar41,uVar44);
    uVar17 = (ulonglong)ppuVar37[0x1e];
    *(int *)puVar50 = (int)puVar22;
    switch((byte)uVar17) {
    case 1:
      goto code_r0x000142982670;
    }
code_r0x00014298271c:
    puStack_a0 = (ulonglong *)0x142982729;
    pdb_142390670(puVar47,(ulonglong)puVar41 & 0xffffffff,puVar27);
    puVar50 = puStack_68;
    goto code_r0x000142982682;
  }
code_r0x0001429826f0:
  puVar47 = puStack_78;
  param_2 = (ulonglong *)((ulonglong)puVar41 & 0xffffffff);
  puStack_a0 = (ulonglong *)0x142982702;
  param_3 = puVar27;
  fVar53 = (float)pdb_1423905a0(puStack_78);
  puVar14 = (ulonglong *)(ulonglong)(byte)ppuVar37[0x1e];
  *(int *)puVar50 = (int)puVar22;
code_r0x00014298270c:
  uVar31 = in_XMM2._0_8_;
  uVar38 = SUB84(in_R9,0);
  puVar26 = (ulonglong *)&UNK_143607f58;
  lVar13 = (longlong)puVar14 * 4;
  puVar14 = (ulonglong *)(&UNK_143607f58 + *(int *)(&UNK_143607f58 + lVar13));
  cVar10 = (char)puVar14;
  puVar28 = puVar27;
  plVar36 = alStack_98;
  puVar48 = puVar22;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(puVar14) {
  case (ulonglong *)0x142982670:
code_r0x000142982670:
    puStack_a0 = (ulonglong *)0x14298267d;
    pdb_142390c70(puVar47,(ulonglong)puVar41 & 0xffffffff,puVar27);
    puVar50 = puStack_68;
    goto code_r0x000142982682;
  case (ulonglong *)0x14298271c:
    goto code_r0x00014298271c;
  case (ulonglong *)0x142982951:
    *(byte *)((longlong)ppuVar37 + 0x50d81fd0c) = *(byte *)((longlong)ppuVar37 + 0x50d81fd0c) + 0x58
    ;
    puVar14 = (ulonglong *)((ulonglong)puVar14 & 0xffffffffffffffe0);
    *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
  case (ulonglong *)0x142982959:
    *(byte *)((longlong)puVar14 + -0x77) = *(byte *)((longlong)puVar14 + -0x77) + 0x58;
code_r0x000142982949:
    puStack_50 = puVar26;
    lVar13 = 0;
    uStack_6c = CONCAT13((char)ppuVar37,(undefined3)uStack_6c);
    puVar27 = puVar28;
    ppuVar35 = (ulonglong **)alStack_98;
    puVar48 = (ulonglong *)&stack0x00000048;
    unaff_XMM12_Da = _DAT_1430348dc;
    goto LAB_142982995;
  case (ulonglong *)0x142982d9c:
    goto code_r0x000142982d9c;
  case (ulonglong *)0x142982daf:
    return;
  case (ulonglong *)0x142982db4:
code_r0x000142982db6:
    puVar23 = (uint *)puStack_48[0x1f];
    puVar1 = puVar23 + puStack_48[0x20];
    param_4 = param_4 + in_XMM5_Da * _UNK_143607b40 + in_XMM5_Da * _UNK_143607b40;
    fVar60 = in_XMM4_Da + in_XMM5_Db * _UNK_143607b44 + in_XMM5_Db * _UNK_143607b44;
    if (*(char *)(puStack_48 + 0x21) != '\0') {
      lVar16 = 0;
      lVar13 = 0;
      in_R9 = (undefined8 *)0x0;
      do {
        if ((int)in_R9 == (int)lVar16) {
          if (puVar23 == puVar1) goto code_r0x000142982fed;
          while( true ) {
            uVar17 = (ulonglong)*puVar23;
            in_R9 = (undefined8 *)(uVar17 * 9);
            lVar16 = *(longlong *)(*(longlong *)(unaff_RBX + 0x1a0) + 0x10 + uVar17 * 0x48);
            if (lVar16 != 0) break;
            puVar23 = puVar23 + 1;
            if (puVar23 == puVar1) goto code_r0x000142982fed;
          }
          lVar13 = *(longlong *)(unaff_RBX + 0x1a0) + uVar17 * 0x48;
          lVar43 = *(longlong *)(lVar13 + 0x18);
          lVar24 = ~*(ulonglong *)(*(longlong *)(lVar13 + 0x38) + puStack_48[0x22] * 8) * 0x30;
          lVar13 = *(longlong *)(lVar43 + 0x10 + lVar24);
          puVar23 = puVar23 + 1;
          in_R9 = (undefined8 *)0x0;
          unaff_RBP = *(ulonglong **)(lVar43 + 0x28 + lVar24);
        }
        puVar27 = unaff_RBP;
        lVar43 = (longlong)in_R9 * 0x10;
        *(float *)(lVar13 + lVar43) = fVar53;
        *(int *)(lVar13 + 4 + lVar43) = in_XMM2._0_4_;
        puVar50 = (ulonglong *)(ulonglong)uStack_58._4_4_;
        *(uint *)((longlong)puVar27 + (longlong)in_R9 * 4) = uStack_58._4_4_;
        *(ulonglong *)(lVar13 + 8 + lVar43) = CONCAT44(fVar60,param_4);
        in_R9 = (undefined8 *)(ulonglong)((int)in_R9 + 1);
        unaff_RBP = puVar27;
      } while( true );
    }
    in_R9 = (undefined8 *)0x0;
    while (puVar23 != puVar1) {
      lVar13 = *(longlong *)(unaff_RBX + 0x100);
      while( true ) {
        in_R9 = (undefined8 *)((ulonglong)*puVar23 * 0xa0);
        lVar16 = *(longlong *)(lVar13 + 0x58 + (longlong)in_R9);
        if (lVar16 != 0) break;
        puVar23 = puVar23 + 1;
        if (puVar23 == puVar1) goto code_r0x000142982fed;
      }
      uVar17 = (ulonglong)*(uint *)((longlong)in_R9 + lVar13 + 0x94);
      lVar43 = *(longlong *)(*(longlong *)(unaff_RBX + 0x1a0) + 0x18 + uVar17 * 0x48);
      lVar24 = ~*(ulonglong *)
                 (*(longlong *)(*(longlong *)(unaff_RBX + 0x1a0) + 0x38 + uVar17 * 0x48) +
                 puStack_48[0x22] * 8) * 0x30;
      puVar5 = *(undefined8 **)(lVar43 + 0x10 + lVar24);
      puVar27 = *(ulonglong **)(lVar43 + 0x28 + lVar24);
      lVar13 = *(longlong *)((longlong)in_R9 + lVar13 + 0x50);
      puVar23 = puVar23 + 1;
      uVar15 = 0;
      uVar17 = 1;
      while( true ) {
        uVar18 = uVar17;
        uVar17 = (ulonglong)~*(uint *)(lVar13 + 8 + uVar15 * 0x10);
        puVar50 = (ulonglong *)(uVar17 * 0x10);
        *(float *)(puVar5 + uVar17 * 2) = fVar53;
        *(int *)((longlong)puVar5 + 4 + (longlong)puVar50) = in_XMM2._0_4_;
        *(uint *)((longlong)puVar27 + uVar17 * 4) = uStack_58._4_4_;
        (puVar5 + 1)[uVar17 * 2] = CONCAT44(fVar60,param_4);
        puVar48 = (ulonglong *)&stack0x00000048;
        iVar45 = (int)uVar18;
        in_R9 = puVar5;
        if (iVar45 == (int)lVar16) break;
        uVar17 = (ulonglong)(iVar45 + 1);
        uVar15 = uVar18;
      }
    }
code_r0x000142982fed:
    unaff_XMM11_Da = *(float *)((longlong)puVar51 + 0x2c);
    if (((ulonglong)puStack_68 & 1) == 0) {
      puStack_78 = (ulonglong *)CONCAT44(puStack_78._4_4_,fVar60);
      puVar50 = (ulonglong *)&stack0x00000068;
      puStack_a0 = (ulonglong *)0x142983017;
      pdb_140deead0(puVar50);
      in_XMM2 = ZEXT416(*(uint *)(unaff_retaddr + 4));
      puStack_a0 = (ulonglong *)0x142983030;
      cVar10 = pdb_140deec60(puVar50);
      if (cVar10 != '\0') goto code_r0x000142983034;
code_r0x000142983056:
      fVar53 = *(float *)(unaff_R13 + 0x58) / unaff_XMM9_Da + *(float *)((longlong)puVar51 + 0x2c);
    }
    else {
code_r0x000142983034:
      puStack_a0 = (ulonglong *)0x142983041;
      cVar10 = pdb_140a00370(uStackX_8);
      if ((cVar10 == '\0') || (*unaff_R15 != 0)) goto code_r0x000142983056;
      puStack_a0 = (ulonglong *)0x142983201;
      cVar10 = pdb_140938ba0(*unaff_R14);
      fVar53 = *(float *)((longlong)puVar51 + 0x2c);
      if (cVar10 == '\0') {
        fVar53 = fVar53 + *(float *)(unaff_R13 + 0x58) / _DAT_142e37ae0;
      }
    }
    fVar60 = 0.0;
    if (0.0 <= fVar53) {
      fVar60 = fVar53;
    }
    fVar53 = unaff_XMM14_Da;
    if (fVar60 <= unaff_XMM14_Da) {
      fVar53 = fVar60;
    }
    *(float *)((longlong)puVar51 + 0x2c) = fVar53;
    if ((unaff_XMM11_Da != unaff_XMM13_Da) || (fVar53 <= unaff_XMM13_Da)) {
      plVar33 = alStack_98;
      if ((unaff_XMM11_Da == unaff_XMM14_Da) && (plVar33 = alStack_98, fVar53 < unaff_XMM14_Da)) {
        *unaff_R12 = (undefined4)uStack_58;
        uVar17 = puStack_50[6];
        uVar15 = puStack_50[8];
        if (uVar17 == puStack_50[4]) {
          puStack_a0 = (ulonglong *)0x142983108;
          pdb_142d7e6e0(unaff_RSI);
        }
        uVar18 = puStack_50[5];
        lVar13 = uVar17 * 0x20;
        *(undefined4 *)(uVar18 + lVar13) = 0x15;
        goto code_r0x00014298311f;
      }
    }
    else {
      *unaff_R12 = (undefined4)uStack_58;
      uVar17 = puStack_50[6];
      uVar15 = puStack_50[8];
      if (uVar17 == puStack_50[4]) {
        puStack_a0 = (ulonglong *)0x1429830b9;
        pdb_142d7e6e0(unaff_RSI);
      }
      uVar18 = puStack_50[5];
      lVar13 = uVar17 * 0x20;
      *(undefined4 *)(uVar18 + lVar13) = 0x14;
code_r0x00014298311f:
      *(ulonglong *)(uVar18 + 0x18 + lVar13) = uVar15;
      puVar50 = (ulonglong *)(uVar17 + 1);
      puStack_50[6] = (ulonglong)puVar50;
      puStack_50[8] = puStack_50[8] + 1;
      puVar48 = (ulonglong *)&stack0x00000048;
      plVar33 = alStack_98;
    }
LAB_142983137:
    *(undefined8 *)((longlong)plVar33 + -8) = 0x142983149;
    fVar53 = (float)pdb_140dedcd0(&UNK_143607eb8);
    unaff_XMM15_Da = unaff_XMM15_Da * unaff_XMM12_Da * fVar53;
    **(undefined4 **)((longlong)plVar33 + 0xc0) = *(undefined4 *)((longlong)plVar33 + 0x6c);
    fVar53 = *(float *)(puVar51 + 3);
    iVar45 = *(int *)((longlong)puVar51 + 0x1c);
    puVar14 = *(ulonglong **)(*(longlong *)((longlong)plVar33 + 0xb8) + 0xa0);
    param_2 = (ulonglong *)(*(longlong *)(*(longlong *)((longlong)plVar33 + 0xb8) + 0xa8) * 0x28);
    puVar22 = (ulonglong *)0x0;
    plVar34 = plVar33;
    param_3 = puVar14;
LAB_142983190:
    do {
      puVar28 = puVar27;
      uVar58 = SUB84(in_R9,0);
      bVar52 = param_2 == puVar22;
      puVar26 = puVar22;
      puVar27 = puVar28;
      ppuVar35 = (ulonglong **)plVar34;
      puVar22 = puVar48;
      if (bVar52) goto LAB_142982986;
code_r0x000142983199:
      puVar27 = param_3 + 2;
      param_3 = param_3 + 5;
      in_XMM1._0_4_ = -(uint)((float)*puVar27 == fVar53);
      iVar55 = -(uint)((int)(*puVar27 >> 0x20) == iVar45);
      in_XMM1._4_4_ = in_XMM1._0_4_;
      in_XMM1._8_4_ = iVar55;
      in_XMM1._12_4_ = iVar55;
      uVar44 = movmskpd(uVar58,in_XMM1);
      in_R9 = (undefined8 *)(ulonglong)uVar44;
      puVar22 = puVar26 + 5;
      puVar26 = puVar22;
      puVar27 = puVar28;
      plVar34 = (longlong *)ppuVar35;
    } while (uVar44 != 3);
code_r0x0001429831bb:
    puVar22 = puVar48;
    uVar31 = in_XMM2._0_8_;
    uVar38 = SUB84(in_R9,0);
    fVar53 = 0.0;
    param_3 = (ulonglong *)&UNK_143607f78;
    param_2 = (ulonglong *)
              (&UNK_143607f78 + *(int *)(&UNK_143607f78 + (ulonglong)(byte)puVar47[0x1e] * 4));
    plVar33 = (longlong *)ppuVar35;
    fVar60 = unaff_XMM15_Da;
    plVar36 = (longlong *)ppuVar35;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((byte)puVar47[0x1e]) {
    case 0:
      break;
    case 1:
      fVar60 = (float)((uint)unaff_XMM15_Da ^ _DAT_142e37820);
    case 2:
      unaff_XMM15_Da = 0.0;
      fVar53 = fVar60;
      break;
    case 3:
      unaff_XMM15_Da = (float)((uint)unaff_XMM15_Da ^ _DAT_142e37820);
      break;
    case 4:
      goto code_r0x0001429832c6;
    case 5:
      goto code_r0x0001429833aa;
    case 6:
      goto code_r0x000142983312;
    case 7:
      goto code_r0x000142390ad0;
    case 8:
      goto code_r0x0001429834f0;
    case 9:
      goto code_r0x000142983522;
    case 10:
      puVar14 = (ulonglong *)(ulonglong)((uint)puVar14 | 0xc84a91);
      goto LAB_1429834fc;
    case 0xb:
      puVar27 = (ulonglong *)
                CONCAT71((int7)((ulonglong)puVar27 >> 8),
                         (char)puVar27 + (char)((ulonglong)param_2 >> 8));
      goto code_r0x000142983564;
    case 0xc:
      goto code_r0x000142983753;
    case 0xd:
      LOCK();
      *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
      UNLOCK();
      *(byte *)((longlong)puVar40 + 0xf) =
           *(byte *)((longlong)puVar40 + 0xf) + (char)((ulonglong)puVar14 >> 8);
      out(CONCAT11(0x96,(char)param_2),(uint)puVar14);
      goto code_r0x000142983767;
    case 0xe:
      goto code_r0x000142983753;
    case 0xf:
      uVar44 = movmskps((int)puVar26,in_XMM2);
      puVar26 = (ulonglong *)(ulonglong)uVar44;
      goto code_r0x000142983753;
    default:
      piVar19 = (int *)((longlong)*(int *)(&UNK_143607f78 + (ulonglong)(byte)puVar47[0x1e] * 4) +
                       0xf5c17eaf);
      *piVar19 = *piVar19 + (int)ppuVar37;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(float *)((longlong)(puVar14 + -4) + (longlong)puVar26) = fVar53;
    *(float *)((byte *)((longlong)puVar14 + -0x1c) + (longlong)puVar26) = unaff_XMM15_Da;
LAB_142982986:
    do {
      lVar13 = 1;
      puVar48 = puVar22;
      if (puVar40 == (ulonglong *)0x2) {
        return;
      }
LAB_142982995:
      puVar40 = (ulonglong *)(lVar13 + 1);
      *(ulonglong **)((longlong)ppuVar35 + 0xd0) = puVar40;
      bVar3 = (byte)puVar48[lVar13 * 2 + 1];
      puVar50 = (ulonglong *)(ulonglong)bVar3;
      puVar22 = puVar48;
    } while (((char)ppuVar37 == '\x10') != (bool)bVar3);
    puVar51 = (undefined8 *)puVar48[lVar13 * 2];
    unaff_XMM15_Da = *(float *)(puVar47 + 0x1d) * **(float **)((longlong)ppuVar35 + 200);
    plVar33 = (longlong *)ppuVar35;
    if (bVar3 == 0) {
      plVar36 = *(longlong **)((longlong)ppuVar35 + 0xb0);
      if ((char)plVar36[0xc] == '\x01') goto LAB_142982ab0;
      if (*(char *)((longlong)plVar36 + 0x66) == '\0') {
        bVar9 = *(byte *)((longlong)puVar47 + 0xf1);
        if (SBORROW8(0,*plVar36)) goto LAB_1429829e1;
      }
      else {
        bVar9 = *(byte *)((longlong)puVar47 + 0xf1);
      }
      if (bVar9 == 0) goto LAB_142982ab0;
      *(undefined4 *)((longlong)puVar51 + 0x2c) = 0x3f800000;
      goto LAB_142983137;
    }
    bVar9 = *(byte *)((longlong)puVar47 + 0xf1);
LAB_1429829e1:
    if (bVar9 == 0) {
LAB_142982ab0:
      *(undefined4 *)((longlong)puVar51 + 0x2c) = 0;
      goto LAB_142983137;
    }
    *(undefined8 *)((longlong)ppuVar35 + -8) = 0x1429829f6;
    pdb_140a6ad50(*(undefined8 *)((longlong)ppuVar35 + 0xa8));
    lVar13 = *(longlong *)((longlong)ppuVar35 + 0x38);
    puVar23 = *(uint **)(lVar13 + 0xf8);
    puVar1 = puVar23 + *(longlong *)(lVar13 + 0x100);
    if (*(char *)(lVar13 + 0x108) == '\0') {
      *(undefined8 *)((longlong)ppuVar35 + 0x30) = 0;
LAB_142982c10:
      if (puVar23 != puVar1) {
        uVar44 = *puVar23;
        puVar23 = puVar23 + 1;
        lVar13 = *(longlong *)(puVar41[0x20] + 0x58 + (ulonglong)uVar44 * 0xa0);
        if (lVar13 != 0) {
          lVar16 = puVar41[0x20] + (ulonglong)uVar44 * 0xa0;
          uVar15 = (ulonglong)*(uint *)(lVar16 + 0x94);
          uVar17 = puVar41[0x34];
          uVar44 = (uint)lVar13;
          if ((*(ulonglong *)(*(longlong *)((longlong)ppuVar35 + 0x38) + 0x118) <
               *(ulonglong *)(uVar17 + 0x40 + uVar15 * 0x48)) &&
             (uVar18 = *(ulonglong *)
                        (*(longlong *)(uVar17 + 0x38 + uVar15 * 0x48) +
                        *(ulonglong *)(*(longlong *)((longlong)ppuVar35 + 0x38) + 0x118) * 8),
             uVar18 != 0)) {
            lVar13 = *(longlong *)
                      (*(longlong *)(uVar17 + uVar15 * 0x48 + 0x18) + 0x10 + ~uVar18 * 0x30);
            uVar17 = *(ulonglong *)(*(longlong *)((longlong)ppuVar35 + 0x38) + 0x120);
            if (uVar17 < *(ulonglong *)(lVar16 + 0x88)) {
LAB_142982cbf:
              if (*(longlong *)(*(longlong *)(lVar16 + 0x80) + uVar17 * 8) != 0) {
                lVar16 = *(longlong *)(lVar16 + 0x50);
                lVar43 = (ulonglong)~*(uint *)(lVar16 + 8) * 3 + lVar13;
                uVar11 = 0;
                goto LAB_142982d10;
              }
            }
          }
          else {
            lVar13 = 0;
            uVar17 = *(ulonglong *)(*(longlong *)((longlong)ppuVar35 + 0x38) + 0x120);
            if (uVar17 < *(ulonglong *)(lVar16 + 0x88)) goto LAB_142982cbf;
          }
          lVar16 = *(longlong *)(lVar16 + 0x50);
          lVar43 = (ulonglong)~*(uint *)(lVar16 + 8) * 3 + lVar13;
          uVar11 = 0;
LAB_142982be5:
          uVar11 = uVar11 + 1;
          bVar46 = false;
          bVar52 = false;
          if (bVar3 == 0) goto LAB_142982d21;
          while (uVar11 != uVar44) {
            while( true ) {
              lVar43 = (ulonglong)~*(uint *)(lVar16 + 8 + (ulonglong)uVar11 * 0x10) * 3 + lVar13;
              if (!bVar46) goto LAB_142982be5;
LAB_142982d10:
              uVar11 = uVar11 + 1;
              bVar46 = true;
              bVar52 = true;
              if (bVar3 == 0) break;
LAB_142982d21:
              bVar46 = bVar52;
              *(ulonglong *)((longlong)ppuVar35 + 0x30) =
                   CONCAT71((int7)((ulonglong)*(undefined8 *)((longlong)ppuVar35 + 0x30) >> 8),
                            (byte)*(undefined8 *)((longlong)ppuVar35 + 0x30) | *(byte *)(lVar43 + 1)
                           );
              if (uVar11 == uVar44) goto LAB_142982c10;
            }
          }
        }
        goto LAB_142982c10;
      }
    }
    else {
      *(undefined8 *)((longlong)ppuVar35 + 0x30) = 0;
LAB_142982af0:
      if (puVar23 != puVar1) {
        uVar44 = *puVar23;
        puVar23 = puVar23 + 1;
        lVar13 = *(longlong *)(puVar41[0x34] + 0x10 + (ulonglong)uVar44 * 0x48);
        if (lVar13 != 0) {
          lVar16 = puVar41[0x34] + (ulonglong)uVar44 * 0x48;
          uVar44 = (uint)lVar13;
          if ((*(ulonglong *)(*(longlong *)((longlong)ppuVar35 + 0x38) + 0x118) <
               *(ulonglong *)(lVar16 + 0x40)) &&
             (uVar17 = *(ulonglong *)
                        (*(longlong *)(lVar16 + 0x38) +
                        *(ulonglong *)(*(longlong *)((longlong)ppuVar35 + 0x38) + 0x118) * 8),
             uVar17 != 0)) {
            lVar13 = *(longlong *)(*(longlong *)(lVar16 + 0x18) + 0x10 + ~uVar17 * 0x30);
            uVar17 = *(ulonglong *)(*(longlong *)((longlong)ppuVar35 + 0x38) + 0x120);
          }
          else {
            lVar13 = 0;
            uVar17 = *(ulonglong *)(*(longlong *)((longlong)ppuVar35 + 0x38) + 0x120);
          }
          lVar43 = lVar13;
          if ((uVar17 < *(ulonglong *)(lVar16 + 0x40)) &&
             (*(longlong *)(*(longlong *)(lVar16 + 0x38) + uVar17 * 8) != 0)) {
            uVar11 = 0;
            goto LAB_142982ba4;
          }
          uVar11 = 0;
LAB_142982ac2:
          uVar11 = uVar11 + 1;
          bVar46 = false;
          bVar52 = false;
          if (bVar3 == 0) goto LAB_142982bb5;
          while (uVar11 != uVar44) {
            while( true ) {
              lVar13 = (ulonglong)uVar11 * 3 + lVar43;
              if (!bVar46) goto LAB_142982ac2;
LAB_142982ba4:
              uVar11 = uVar11 + 1;
              bVar46 = true;
              bVar52 = true;
              if (bVar3 == 0) break;
LAB_142982bb5:
              bVar46 = bVar52;
              *(ulonglong *)((longlong)ppuVar35 + 0x30) =
                   CONCAT71((int7)((ulonglong)*(undefined8 *)((longlong)ppuVar35 + 0x30) >> 8),
                            (byte)*(undefined8 *)((longlong)ppuVar35 + 0x30) | *(byte *)(lVar13 + 1)
                           );
              if (uVar11 == uVar44) goto LAB_142982af0;
            }
          }
        }
        goto LAB_142982af0;
      }
    }
LAB_142982d4a:
    puVar14 = (ulonglong *)(ulonglong)(byte)puVar47[0x1e];
    if (1 < (byte)((byte)puVar47[0x1e] - 1)) {
code_r0x000142982d85:
    }
  case (ulonglong *)0x142982d95:
code_r0x000142982d95:
    puVar26 = (ulonglong *)&UNK_143607f68;
    goto code_r0x000142982d9c;
  case (ulonglong *)0x1429831b8:
    puVar40 = (ulonglong *)(ulonglong)(uint)((int)puVar40 + *(int *)((longlong)ppuVar37 + -0x2b));
    goto code_r0x0001429831bb;
  case (ulonglong *)0x1429831c0:
    LOCK();
    *(byte *)puVar14 = (byte)*puVar14 + cVar10;
    UNLOCK();
    *(byte *)((longlong)puVar40 + 0xf) =
         *(byte *)((longlong)puVar40 + 0xf) + (char)((ulonglong)puVar14 >> 8);
    out((short)param_2,(int)puVar14);
    pbVar2 = (byte *)((longlong)ppuVar37 + 0x50d81fd65);
    *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
    bVar3 = *pbVar2;
    ppuVar35 = &puStack_a0;
    puStack_a0 = (ulonglong *)ppuVar37;
    cVar29 = '\x02';
    do {
      ppuVar37 = ppuVar37 + -1;
      ppuVar35 = ppuVar35 + -1;
      *ppuVar35 = *ppuVar37;
      cVar29 = cVar29 + -1;
    } while ('\0' < cVar29);
    puStack_b8 = (ulonglong *)&puStack_a0;
    ppuVar35 = (ulonglong **)auStack_49b8;
    puVar14 = (ulonglong *)
              CONCAT71((int7)((ulonglong)puVar14 >> 8),cVar10 + -0x70 + ((char)bVar3 < '\0'));
    ppuVar37 = &puStack_a0;
    goto code_r0x0001429831bb;
  case (ulonglong *)0x1429832a6:
    puVar14 = (ulonglong *)(ulonglong)*(byte *)(_UNK_143607f58 + 0xf0);
    puStack_b8 = puVar27;
    apuStack_b0[0] = (ulonglong *)ppuVar37;
    apuStack_b0[1] = puVar41;
    puStack_a0 = puVar40;
code_r0x0001429832c6:
    puVar22 = (ulonglong *)&UNK_143607f88;
code_r0x0001429832cd:
                    /* WARNING: Could not emulate address calculation at 0x0001429832cd */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((longlong)*(int *)((longlong)puVar22 + (longlong)puVar14 * 4) + (longlong)puVar22))()
    ;
    return;
  case (ulonglong *)0x1429832f2:
code_r0x0001429832f2:
    puVar26 = puVar50;
    *(int *)puVar47 = (int)puVar51;
    puStack_a0 = (ulonglong *)0x142983303;
    pdb_142390c70(puVar26,(ulonglong)ppuVar37 & 0xffffffff,puVar28);
    *(int *)puVar47 = (int)puVar51;
    param_2 = (ulonglong *)((ulonglong)puVar41 & 0xffffffff);
    param_3 = (ulonglong *)((ulonglong)puVar40 & 0xffffffff);
    ppuVar35 = &puStack_68;
    puVar27 = puStack_78;
code_r0x000142983312:
    uVar38 = SUB84(param_2,0);
    *(byte *)((longlong)puVar27 + 0x5d) = *(byte *)((longlong)puVar27 + 0x5d) & (byte)puVar27;
    uVar31 = *ppuVar35;
    uVar39 = ppuVar35[1];
    uVar49 = ppuVar35[3];
    puVar32 = ppuVar35 + 5;
    break;
  case (ulonglong *)0x14298333e:
code_r0x00014298333e:
    puVar26 = puVar50;
    *(int *)puVar47 = (int)puVar51;
    puStack_a0 = (ulonglong *)0x14298334f;
    pdb_142390e40(puVar26,(ulonglong)ppuVar37 & 0xffffffff,puVar28);
    *(int *)puVar47 = (int)puVar51;
    param_2 = (ulonglong *)((ulonglong)puVar41 & 0xffffffff);
    param_3 = (ulonglong *)((ulonglong)puVar40 & 0xffffffff);
    ppuVar35 = &puStack_68;
    puVar27 = puStack_78;
code_r0x000142390ad0:
    *(byte *)((longlong)puVar27 + 0x5d) = *(byte *)((longlong)puVar27 + 0x5d) & (byte)puVar27;
    ppuVar35[4] = ppuVar35[3];
    ppuVar35[3] = ppuVar35[1];
    ppuVar35[2] = *ppuVar35;
    ppuVar35[1] = puVar27;
    ppuVar35[-0x39] = (ulonglong *)0x142390af7;
    pdb_1411bdcb0(ppuVar35 + -0x32,puVar26,(ulonglong)param_2 & 0xffffffff,
                  (ulonglong)param_3 & 0xffffffff);
    if (*(int *)(ppuVar35 + -0x32) == 4) {
      ppuVar35[-0x39] = (ulonglong *)0x142390b10;
      pdb_14238fa10(ppuVar35 + -0x2a,ppuVar35[-0x31]);
      *(undefined1 *)((longlong)ppuVar35 + -5) = 1;
      ppuVar35[-0x34] = (ulonglong *)(ppuVar35 + -0x2a);
      ppuVar35[-0x39] = (ulonglong *)0x142390b30;
      pdb_1411be200(ppuVar35 + -0x32,puVar26,(ulonglong)param_2 & 0xffffffff,
                    (ulonglong)param_3 & 0xffffffff);
      if (*(int *)(ppuVar35 + -0x32) == 4) {
        return;
      }
      ppuVar35[-0x2c] = ppuVar35[-0x30];
      ppuVar35[-0x2b] = ppuVar35[-0x2f];
      ppuVar35[-0x2e] = ppuVar35[-0x32];
      ppuVar35[-0x2d] = ppuVar35[-0x31];
      puVar12 = &UNK_1434e0000;
    }
    else {
      ppuVar35[-0x2c] = ppuVar35[-0x30];
      ppuVar35[-0x2b] = ppuVar35[-0x2f];
      ppuVar35[-0x2e] = ppuVar35[-0x32];
      ppuVar35[-0x2d] = ppuVar35[-0x31];
      puVar12 = &UNK_1434dffe8;
    }
    ppuVar35[-0x34] = (ulonglong *)puVar12;
                    /* WARNING: Subroutine does not return */
    ppuVar35[-0x39] = (ulonglong *)0x142390b9e;
    pdb_142dc8170(&UNK_1434dfe58,0x2b,ppuVar35 + -0x2e,&UNK_1434dfe38);
  case (ulonglong *)0x14298338a:
code_r0x00014298338a:
    puVar26 = puVar50;
    *(int *)puVar47 = (int)puVar51;
    puStack_a0 = (ulonglong *)0x14298339b;
    pdb_142390670(puVar26,(ulonglong)ppuVar37 & 0xffffffff,puVar28);
    *(int *)puVar47 = (int)puVar51;
    param_2 = (ulonglong *)((ulonglong)puVar41 & 0xffffffff);
    param_3 = (ulonglong *)((ulonglong)puVar40 & 0xffffffff);
    ppuVar35 = &puStack_68;
    puVar27 = puStack_78;
code_r0x0001429833aa:
    uVar38 = SUB84(param_2,0);
    *(byte *)((longlong)puVar27 + 0x5d) = *(byte *)((longlong)puVar27 + 0x5d) & (byte)puVar27;
    uVar31 = *ppuVar35;
    uVar39 = ppuVar35[1];
    uVar49 = ppuVar35[3];
    puVar32 = ppuVar35 + 5;
    break;
  case (ulonglong *)0x1429834d0:
code_r0x0001429834d0:
                    /* WARNING: Could not recover jumptable at 0x0001429834de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_143607f98 + *(int *)(&UNK_143607f98 + (longlong)puVar14 * 4)))();
    return;
  case (ulonglong *)0x1429834e2:
code_r0x0001429834dd:
    apuStack_b0[1] = (ulonglong *)&puStack_a0;
    *(undefined4 *)puVar48[2] = uStack_84;
    puVar47 = (ulonglong *)*puVar48;
    *(undefined4 *)(puVar47 + 2) = 0;
    plVar36 = (longlong *)auStack_e1a7;
    puStack_a0 = (ulonglong *)ppuVar37;
  case (ulonglong *)0x1429834f7:
code_r0x0001429834f7:
LAB_1429836e4:
    fVar60 = unaff_XMM9_Da * _DAT_142e3a74c;
    *(undefined8 *)((longlong)plVar36 + -8) = 0x142983700;
    fVar53 = (float)pdb_140dedcd0(&UNK_143607eb8);
    fVar53 = fVar53 * fVar60;
    uVar38 = *(undefined4 *)((longlong)puVar51 + 0x1c);
    puVar25 = (undefined4 *)puVar51[2];
code_r0x00014298370d:
    *puVar25 = uVar38;
    puVar22 = (ulonglong *)*puVar51;
code_r0x000142983712:
    in_XMM1._8_8_ = 0;
    in_XMM1._0_8_ = *puVar47;
    puVar14 = (ulonglong *)puVar22[0x14];
    puVar26 = (ulonglong *)(puVar22[0x15] << 3);
code_r0x00014298372a:
    param_2 = (ulonglong *)((longlong)puVar26 * 5);
    puVar26 = (ulonglong *)0x0;
    param_3 = puVar14;
  case (ulonglong *)0x142983733:
LAB_142983740:
    do {
      uVar38 = SUB84(in_R9,0);
      if (param_2 == puVar26) {
        return;
      }
      puVar40 = param_3 + 2;
      param_3 = param_3 + 5;
      uVar31 = CONCAT44(-(uint)((int)(*puVar40 >> 0x20) == in_XMM1._4_4_),
                        -(uint)((int)*puVar40 == in_XMM1._0_4_));
code_r0x000142983753:
      auVar57._0_4_ = (undefined4)uVar31;
      uVar58 = (undefined4)((ulonglong)uVar31 >> 0x20);
      auVar57._4_4_ = auVar57._0_4_;
      auVar57._8_4_ = uVar58;
      auVar57._12_4_ = uVar58;
      uVar44 = movmskpd(uVar38,auVar57);
      in_R9 = (undefined8 *)(ulonglong)uVar44;
      puVar26 = puVar26 + 5;
    } while (uVar44 != 3);
code_r0x000142983767:
    fVar54 = 0.0;
    fVar60 = fVar53;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((byte)puVar50[0x1e]) {
    case 0:
      fVar60 = (float)((uint)fVar53 ^ _DAT_142e37820);
    case 3:
      fVar53 = 0.0;
      fVar54 = fVar60;
      break;
    case 2:
      fVar53 = (float)((uint)fVar53 ^ _DAT_142e37820);
    case 1:
      break;
    default:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(float *)((longlong)(puVar14 + -4) + (longlong)puVar26) = fVar53;
    *(float *)((byte *)((longlong)puVar14 + -0x1c) + (longlong)puVar26) = fVar54;
    return;
  case (ulonglong *)0x14298350d:
    ppuVar35 = &puStack_a0;
    puStack_a0 = (ulonglong *)ppuVar37;
    cVar10 = '\x12';
    do {
      ppuVar37 = ppuVar37 + -1;
      ppuVar35 = ppuVar35 + -1;
      *ppuVar35 = *ppuVar37;
      cVar10 = cVar10 + -1;
    } while ('\0' < cVar10);
    puStack_138 = (undefined1 *)&puStack_a0;
    plVar36 = (longlong *)auStack_e237;
code_r0x000142983564:
    puVar47 = (ulonglong *)*puVar22;
    fVar53 = *(float *)(puVar47 + 2);
    uVar17 = *puVar27;
    *(undefined8 *)((longlong)plVar36 + -8) = 0x142983577;
    cVar10 = pdb_140a00370(uVar17);
    if (cVar10 == '\0') {
code_r0x0001429835ff:
      fVar60 = *(float *)(*puVar40 + 0x58) / _DAT_142e37988;
code_r0x00014298360f:
      uVar38 = *(undefined4 *)((longlong)puVar22 + 0x1c);
      puVar25 = (undefined4 *)puVar22[2];
      *puVar25 = uVar38;
      fVar60 = fVar60 + *(float *)(puVar47 + 2);
    }
    else {
      *(float *)((longlong)plVar36 + 0x20) =
           _DAT_142f3e558 * unaff_XMM9_Da + _DAT_142f3e558 * unaff_XMM9_Da + unaff_XMM11_Da;
      *(undefined8 *)((longlong)plVar36 + -8) = 0x1429835b7;
      pdb_140deead0((undefined1 *)((longlong)plVar36 + 0x30));
      *(undefined8 *)((longlong)plVar36 + -8) = 0x1429835cb;
      cVar10 = pdb_140deec60((undefined1 *)((longlong)plVar36 + 0x30));
      if (cVar10 == '\0') goto code_r0x0001429835ff;
      uVar38 = *(undefined4 *)**(undefined8 **)((longlong)plVar36 + 0x108);
      *(undefined8 *)((longlong)plVar36 + -8) = 0x1429835e6;
      cVar10 = pdb_140938ba0(uVar38);
      if (cVar10 == '\0') {
        fVar60 = *(float *)(*puVar40 + 0x58) / _DAT_142e37ae0;
        goto code_r0x00014298360f;
      }
      fVar60 = *(float *)(puVar47 + 2);
      uVar38 = *(undefined4 *)((longlong)puVar22 + 0x1c);
      puVar25 = (undefined4 *)puVar22[2];
    }
    fVar54 = _DAT_142e36f28;
    plVar33 = *(longlong **)((longlong)plVar36 + 0x120);
    fVar59 = 0.0;
    if (0.0 <= fVar60) {
      fVar59 = fVar60;
    }
    fVar60 = _DAT_142e36f28;
    if (fVar59 <= _DAT_142e36f28) {
      fVar60 = fVar59;
    }
    *puVar25 = uVar38;
    *(float *)(puVar47 + 2) = fVar60;
    if ((fVar53 != 0.0) || (fVar60 <= 0.0)) {
      if ((fVar53 == _DAT_142e36f28) &&
         ((!NAN(fVar53) && !NAN(_DAT_142e36f28) && (fVar60 < fVar54)))) {
        *(undefined4 *)plVar33[2] = *(undefined4 *)((longlong)plVar33 + 0x1c);
        lVar13 = *plVar33;
        lVar16 = *(longlong *)(lVar13 + 0x30);
        uVar31 = *(undefined8 *)(lVar13 + 0x40);
        if (lVar16 == *(longlong *)(lVar13 + 0x20)) {
          *(undefined8 *)((longlong)plVar36 + -8) = 0x1429836c2;
          pdb_142d7e6e0(lVar13 + 0x20);
        }
        lVar43 = *(longlong *)(lVar13 + 0x28);
        lVar24 = lVar16 * 0x20;
        *(undefined4 *)(lVar43 + lVar24) = 0x15;
        goto code_r0x0001429836d4;
      }
    }
    else {
      *(undefined4 *)plVar33[2] = *(undefined4 *)((longlong)plVar33 + 0x1c);
      lVar13 = *plVar33;
      lVar16 = *(longlong *)(lVar13 + 0x30);
      uVar31 = *(undefined8 *)(lVar13 + 0x40);
      if (lVar16 == *(longlong *)(lVar13 + 0x20)) {
        *(undefined8 *)((longlong)plVar36 + -8) = 0x14298367a;
        pdb_142d7e6e0(lVar13 + 0x20);
      }
      lVar43 = *(longlong *)(lVar13 + 0x28);
      lVar24 = lVar16 * 0x20;
      *(undefined4 *)(lVar43 + lVar24) = 0x14;
code_r0x0001429836d4:
      *(undefined8 *)(lVar43 + 0x18 + lVar24) = uVar31;
      *(longlong *)(lVar13 + 0x30) = lVar16 + 1;
      *(longlong *)(lVar13 + 0x40) = *(longlong *)(lVar13 + 0x40) + 1;
    }
    goto LAB_1429836e4;
  case (ulonglong *)0x14298373a:
    *(byte *)puVar14 = (byte)*puVar14 + cVar10;
    *(byte *)puVar14 = (byte)*puVar14 + cVar10;
    goto LAB_142983740;
  case (ulonglong *)0x142983742:
    return;
  case (ulonglong *)0x142983749:
    puStack_a0 = puVar14;
    UNK_143607edb =
         UNK_143607edb + 'X' +
         (0xfffffffebc9f80a7U < (ulonglong)(longlong)*(int *)(&UNK_143607f58 + lVar13));
    *(byte *)puVar14 = (byte)*puVar14 >> 6;
    goto code_r0x000142983753;
  case (ulonglong *)0x143607f58:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)((longlong)puVar32 + -8) = uVar49;
  *(undefined8 *)((longlong)puVar32 + -0x10) = uVar39;
  *(undefined8 *)((longlong)puVar32 + -0x18) = uVar31;
  *(ulonglong **)((longlong)puVar32 + -0x20) = puVar27;
  *(undefined8 *)((longlong)puVar32 + -0x1f0) = 0x1423905c7;
  pdb_1411bdcb0((undefined1 *)((longlong)puVar32 + -0x1b8),puVar26,uVar38,
                (ulonglong)param_3 & 0xffffffff);
  if (*(int *)((longlong)puVar32 + -0x1b8) == 4) {
    *(undefined8 *)((longlong)puVar32 + -0x1f0) = 0x1423905e0;
    pdb_14238fa10((undefined1 *)((longlong)puVar32 + -0x178),
                  *(undefined8 *)((longlong)puVar32 + -0x1b0));
    *(undefined1 *)((longlong)puVar32 + -0x2d) = 0;
    *(undefined1 **)((longlong)puVar32 + -0x1c8) = (undefined1 *)((longlong)puVar32 + -0x178);
    *(undefined8 *)((longlong)puVar32 + -0x1f0) = 0x142390600;
    pdb_1411be200((undefined1 *)((longlong)puVar32 + -0x1b8),puVar26,uVar38,
                  (ulonglong)param_3 & 0xffffffff);
    if (*(int *)((longlong)puVar32 + -0x1b8) == 4) {
      return;
    }
    *(undefined8 *)((longlong)puVar32 + -0x188) = *(undefined8 *)((longlong)puVar32 + -0x1a8);
    *(undefined8 *)((longlong)puVar32 + -0x180) = *(undefined8 *)((longlong)puVar32 + -0x1a0);
    *(undefined8 *)((longlong)puVar32 + -0x198) = *(undefined8 *)((longlong)puVar32 + -0x1b8);
    *(undefined8 *)((longlong)puVar32 + -400) = *(undefined8 *)((longlong)puVar32 + -0x1b0);
    puVar12 = &UNK_1434e0000;
  }
  else {
    *(undefined8 *)((longlong)puVar32 + -0x188) = *(undefined8 *)((longlong)puVar32 + -0x1a8);
    *(undefined8 *)((longlong)puVar32 + -0x180) = *(undefined8 *)((longlong)puVar32 + -0x1a0);
    *(undefined8 *)((longlong)puVar32 + -0x198) = *(undefined8 *)((longlong)puVar32 + -0x1b8);
    *(undefined8 *)((longlong)puVar32 + -400) = *(undefined8 *)((longlong)puVar32 + -0x1b0);
    puVar12 = &UNK_1434dffe8;
  }
  *(undefined **)((longlong)puVar32 + -0x1c8) = puVar12;
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((longlong)puVar32 + -0x1f0) = 0x14239066e;
  pdb_142dc8170(&UNK_1434dfe58,0x2b,(undefined1 *)((longlong)puVar32 + -0x198),&UNK_1434dfe38);
code_r0x000142982d9c:
                    /* WARNING: Could not recover jumptable at 0x000142982da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((longlong)*(int *)((longlong)puVar26 + (longlong)puVar14 * 4) + (longlong)puVar26))();
  return;
}

