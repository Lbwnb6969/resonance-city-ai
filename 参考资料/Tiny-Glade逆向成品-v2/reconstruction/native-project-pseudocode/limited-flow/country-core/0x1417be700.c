// VA 0x1417be700, PDB extent 994 bytes
// country_core::systems::wall::valid_enclosure::_::impl$0::deserialize<enum2$<serde_json::value::Value> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000143337677) overlaps instruction at (ram,0x000143337674)
    */
/* WARNING: Removing unreachable block (ram,0x0001417c1ff6) */
/* WARNING: Removing unreachable block (ram,0x0001417c0216) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::valid_enclosure::_::impl$0::deserialize<enum2$<serde_json::value::Value>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 994 */

code * pdb_1417be700(code *param_1,code *param_2,code *param_3,code *param_4)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  code cVar9;
  char cVar10;
  byte bVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar17;
  longlong lVar18;
  ulonglong uVar19;
  code *pcVar20;
  code *extraout_RAX;
  code *extraout_RAX_00;
  code *extraout_RAX_01;
  code *pcVar21;
  undefined4 *puVar22;
  code *pcVar23;
  undefined2 uVar24;
  char *pcVar25;
  code *unaff_RBX;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  char *pcVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  undefined8 *puVar34;
  undefined1 *puVar35;
  char *pcVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  undefined8 *puVar42;
  code *pcVar43;
  uint uVar44;
  undefined1 *puVar45;
  int iVar46;
  code *unaff_RDI;
  code *in_R10;
  ulonglong in_R11;
  longlong lVar47;
  undefined4 unaff_R13D;
  undefined8 *unaff_R14;
  byte *unaff_R15;
  undefined2 in_ES;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  undefined8 in_XMM0_Qa;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  code *in_XMM1_Qb;
  float unaff_XMM6_Da;
  undefined4 uVar51;
  byte in_stack_50ccddc09;
  ulonglong uStack_168;
  char acStack_160 [8];
  code *in_stack_fffffffffffffee0;
  undefined8 uStack_110;
  code *pcStack_108;
  ulonglong *puStack_100;
  undefined8 uStack_f8;
  char cVar52;
  ulonglong in_stack_ffffffffffffff18;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  char cStack_b8;
  undefined7 uStack_b7;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  char cStack_88;
  undefined1 uStack_87;
  undefined2 uStack_86;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  byte bVar4;
  byte bVar26;
  
  iVar14 = (int)((ulonglong)in_XMM0_Qa >> 0x20);
  uVar12 = (undefined4)in_XMM0_Qa;
  puVar41 = &stack0xfffffffffffffee8;
  puVar42 = (undefined8 *)&stack0xfffffffffffffee8;
  puVar38 = &stack0xfffffffffffffee8;
  puVar39 = &stack0xfffffffffffffee8;
  pcVar25 = &stack0xfffffffffffffee8;
  puVar33 = &stack0xfffffffffffffee8;
  pcVar30 = &stack0xfffffffffffffee8;
  puVar32 = &stack0xfffffffffffffee8;
  puVar28 = &stack0xfffffffffffffee8;
  puVar27 = &stack0xfffffffffffffee8;
  pcVar36 = &stack0xfffffffffffffee8;
  pcVar43 = (code *)&uStack_98;
  uStack_60 = 0xfffffffffffffffe;
  cVar9 = *param_2;
  pcVar21 = (code *)&UNK_1433375f8;
  uVar16 = (ulonglong)*(int *)(&UNK_1433375f8 + (ulonglong)(byte)cVar9 * 4);
  bVar48 = 0xfffffffebccc8a07 < uVar16;
  UNRECOVERED_JUMPTABLE = (code *)(&UNK_1433375f8 + uVar16);
  bVar50 = UNRECOVERED_JUMPTABLE == (code *)0x0;
  bVar49 = (POPCOUNT((ulonglong)UNRECOVERED_JUMPTABLE & 0xff) & 1U) != 0;
  cVar10 = (char)UNRECOVERED_JUMPTABLE;
  uVar13 = (uint)UNRECOVERED_JUMPTABLE;
  uVar24 = SUB82(param_2,0);
  bVar26 = (byte)unaff_RBX;
  uVar44 = (uint)param_1;
  bVar11 = (byte)param_4;
  iVar46 = (int)unaff_RDI;
  cVar52 = (char)(in_stack_ffffffffffffff18 >> 8);
  puVar45 = &stack0xfffffffffffffee8;
  puVar37 = &stack0xfffffffffffffee8;
  puVar40 = &stack0xfffffffffffffee8;
  puVar22 = (undefined4 *)&stack0xfffffffffffffee8;
  puVar8 = &stack0xfffffffffffffee8;
  puVar31 = &stack0xfffffffffffffee8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar9) {
  case (code)0x0:
    cVar10 = '\x12';
    goto code_r0x0001417be7d7;
  case (code)0x1:
    uStack_87 = param_2[1];
    cVar10 = '\0';
    goto code_r0x0001417be7d7;
  case (code)0x2:
    uStack_80 = (undefined4)*(undefined8 *)(param_2 + 0x10);
    uStack_7c = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    cVar10 = (char)(0xa0804 >> ((byte)(*(int *)(param_2 + 8) << 3) & 0x1f));
    goto code_r0x0001417be7d7;
  case (code)0x3:
    uVar15 = *(undefined8 *)(param_2 + 0x10);
    uStack_c0 = (undefined4)*(undefined8 *)(param_2 + 8);
    uStack_bc = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20);
    cStack_b8 = (char)uVar15;
    uStack_b7 = (undefined7)((ulonglong)uVar15 >> 8);
    pcStack_b0 = *(code **)(param_2 + 0x18);
    uStack_87 = SUB41((uint)uStack_c8 >> 8,0);
    uStack_86 = (undefined2)((uint)uStack_c8 >> 0x10);
    iStack_84 = iStack_c4;
    uStack_78 = (undefined4)uVar15;
    uStack_74 = (undefined4)((ulonglong)uVar15 >> 0x20);
    cVar10 = '\f';
    uStack_80 = uStack_c0;
    uStack_7c = uStack_bc;
    uStack_70 = pcStack_b0;
    goto code_r0x0001417be7d7;
  case (code)0x4:
    pdb_141bc80b0(&cStack_88,param_2 + 8);
    cVar10 = cStack_88;
    if (cStack_88 != '\x16') goto code_r0x0001417be7d7;
code_r0x0001417be7ce:
    uVar15 = CONCAT44(uStack_7c,uStack_80);
    goto code_r0x0001417be9b9;
  case (code)0x5:
    uStack_d8 = (undefined4)*(undefined8 *)(param_2 + 0x18);
    uStack_d4 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
    uStack_e0 = *(uint *)(param_2 + 0x10);
    uStack_dc = *(undefined4 *)(param_2 + 0x14);
    pdb_141ba70a0(&cStack_88,&stack0xffffffffffffff18);
    cVar10 = cStack_88;
    if (cStack_88 == '\x16') goto code_r0x0001417be7ce;
code_r0x0001417be7d7:
    uStack_a8._5_3_ = (undefined3)((uint)iStack_84 >> 8);
    uStack_a0 = (code *)CONCAT44(uStack_7c,uStack_80);
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    uStack_90 = (undefined4)uStack_70;
    uStack_8c = uStack_70._4_4_;
    uStack_a8 = (code *)CONCAT71(CONCAT34(uStack_a8._5_3_,
                                          CONCAT13((undefined1)iStack_84,
                                                   CONCAT21(uStack_86,uStack_87))),cVar10);
    uStack_f8 = (code *)&UNK_143336950;
    pdb_141b4d510(&cStack_88,&uStack_a8,&UNK_143336970,0x11);
    UNRECOVERED_JUMPTABLE = uStack_70;
    uVar51 = uStack_74;
    uVar12 = uStack_78;
    if (CONCAT22(uStack_86,CONCAT11(uStack_87,cStack_88)) == 1) {
      uStack_68 = (byte *)CONCAT44(uStack_7c,uStack_80);
      if (*(longlong *)uStack_68 == 1) {
        pdb_1404b38e0(uStack_68 + 8);
      }
      else if ((*(longlong *)uStack_68 == 0) && (*(ulonglong *)(uStack_68 + 0x10) != 0)) {
        pub_1406abac0(*(byte **)(uStack_68 + 8),*(ulonglong *)(uStack_68 + 0x10),1);
      }
      pub_1406abac0(uStack_68,0x28,8);
      uStack_f8 = (code *)&UNK_143336950;
      pdb_141b4d5b0(&cStack_88,&uStack_a8,&UNK_14333693f,0x11);
      uVar51 = uStack_7c;
      uVar12 = uStack_80;
      if (CONCAT22(uStack_86,CONCAT11(uStack_87,cStack_88)) == 2) {
        uStack_68 = (byte *)CONCAT44(uStack_7c,uStack_80);
        if (*(longlong *)uStack_68 == 1) {
          pdb_1404b38e0(uStack_68 + 8);
        }
        else if ((*(longlong *)uStack_68 == 0) && (*(ulonglong *)(uStack_68 + 0x10) != 0)) {
          pub_1406abac0(*(byte **)(uStack_68 + 8),*(ulonglong *)(uStack_68 + 0x10),1);
        }
        pub_1406abac0(uStack_68,0x28,8);
        uVar15 = pdb_142d86fc0(&UNK_1433369fc,0x49);
        pdb_1417c2e50(&uStack_a8);
code_r0x0001417be9b9:
        *(undefined8 *)(param_1 + 8) = uVar15;
        uVar12 = 1;
        goto code_r0x0001417be9c2;
      }
      uVar16 = CONCAT44(iStack_84,CONCAT22(uStack_86,CONCAT11(uStack_87,cStack_88)));
      pdb_1417c2e50(&uStack_a8);
code_r0x0001417be954:
      if ((uVar16 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_1430435e8,0x6d,&UNK_143043620);
      }
      pdb_140defa80(param_1 + 8,uVar16 >> 0x20,uVar12,uVar51);
      uVar12 = 0;
    }
    else {
      uVar16 = CONCAT44(uStack_7c,uStack_80);
      uVar15 = CONCAT44(uStack_74,uStack_78);
      pdb_1417c2e50(&uStack_a8);
      if (iStack_84 == 2) goto code_r0x0001417be954;
      *(ulonglong *)(param_1 + 8) = uVar16;
      *(undefined8 *)(param_1 + 0x10) = uVar15;
      uVar12 = 0;
      if (iStack_84 == 1) {
        *(code **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE;
        uVar12 = 1;
      }
    }
    *(undefined4 *)(param_1 + 4) = uVar12;
    uVar12 = 0;
code_r0x0001417be9c2:
    *(undefined4 *)param_1 = uVar12;
    return param_1;
  case (code)0x6:
    puVar1 = (uint *)(&UNK_143337581 + uVar16);
    *puVar1 = *puVar1 >> 0x16 | *puVar1 << 10;
                    /* WARNING: Could not recover jumptable at 0x0001417bec85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (code *)(*(code *)(&UNK_143337610 + *(int *)(&UNK_143337610 + (longlong)param_3 * 4)))
                           (&UNK_143337610 + *(int *)(&UNK_143337610 + (longlong)param_3 * 4));
    return UNRECOVERED_JUMPTABLE;
  case (code)0x7:
    goto code_r0x0001417bef6f;
  case (code)0x8:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
    UNRECOVERED_JUMPTABLE = (code *)pdb_141b7fb10();
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      return UNRECOVERED_JUMPTABLE;
    }
    if (((in_stack_ffffffffffffff18 & 1) == 0) && (cVar52 != '\0')) {
      pdb_140172c20(*(undefined8 *)CONCAT44(uStack_dc,uStack_e0),&UNK_14333682e,1);
    }
code_r0x0001417bef6f:
    pdb_140172c20(*(undefined8 *)param_1,&UNK_14333682e,1);
    return (code *)0x0;
  case (code)0x9:
    (&UNK_143337585)[uVar16] = (&UNK_143337585)[uVar16] | 0xf8;
    UNRECOVERED_JUMPTABLE = (code *)pdb_141b82660(&stack0xffffffffffffff18,param_2,0xb);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      if (((in_stack_ffffffffffffff18 & 1) == 0) && (cVar52 != '\0')) {
        plVar5 = *(longlong **)CONCAT44(uStack_dc,uStack_e0);
        lVar18 = plVar5[2];
        if (*plVar5 == lVar18) {
          uStack_f8 = (code *)0x1;
          pdb_142d7f1b0(plVar5,lVar18,1,1);
          lVar18 = plVar5[2];
        }
        *(undefined1 *)(plVar5[1] + lVar18) = 0x7d;
        plVar5[2] = lVar18 + 1;
      }
      plVar5 = *(longlong **)param_1;
      lVar18 = plVar5[2];
      if (*plVar5 == lVar18) {
        uStack_f8 = (code *)0x1;
        pdb_142d7f1b0(plVar5,lVar18,1,1);
        lVar18 = plVar5[2];
      }
      *(undefined1 *)(plVar5[1] + lVar18) = 0x7d;
      plVar5[2] = lVar18 + 1;
      return (code *)0x0;
    }
    return UNRECOVERED_JUMPTABLE;
  case (code)0xa:
    in(uVar24);
    lVar18 = 0;
    if (1 < (ulonglong)(byte)param_2[0x22]) {
      lVar18 = (ulonglong)(byte)param_2[0x22] - 1;
    }
                    /* WARNING: Could not emulate address calculation at 0x0001417bf378 */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (code *)(*(code *)(&UNK_143337620 + *(int *)(&UNK_143337620 + lVar18 * 4)))
                           (&UNK_143337620 + *(int *)(&UNK_143337620 + lVar18 * 4));
    return UNRECOVERED_JUMPTABLE;
  case (code)0xb:
    pdb_141bfe8d0(param_1,0x43336a50,0xc,3);
    return param_1;
  case (code)0xc:
    pcVar36 = (char *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff28);
    *pcVar36 = *pcVar36 + (char)pcVar36;
    pdb_141bfef80(param_1,&UNK_143336a50,0xc,0);
    return param_1;
  case (code)0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0xe:
    pdb_142d7f1b0();
    lVar18 = *(longlong *)(param_1 + 0x10);
    *(undefined1 *)(*(longlong *)(param_1 + 8) + lVar18) = 0x7d;
    *(longlong *)(param_1 + 0x10) = lVar18 + 1;
    return (code *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffff);
  case (code)0xf:
    param_2 = (code *)(ulonglong)(uVar44 + 8);
    param_3 = (code *)&UNK_143336ae4;
    param_4 = (code *)0x9;
    goto code_r0x0001417bf779;
  case (code)0x10:
  case (code)0x12:
                    /* WARNING: Could not recover jumptable at 0x0001417bf6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (code *)(*(code *)(&UNK_143337630 + *(int *)(&UNK_143337630 + _UNK_1433375f8 * 4)))();
    return UNRECOVERED_JUMPTABLE;
  case (code)0x11:
    param_2 = (code *)(ulonglong)(uVar44 + 8);
    param_3 = (code *)&UNK_143336acb;
    param_4 = (code *)0xd;
    puVar27 = &stack0xfffffffffffffee8;
    goto code_r0x0001417bf779;
  case (code)0x13:
    param_2 = (code *)(ulonglong)(uVar44 + 8);
    param_3 = (code *)&UNK_143336aed;
    param_4 = (code *)0x7;
    puVar27 = &stack0xfffffffffffffee8;
    goto code_r0x0001417bf779;
  case (code)0x14:
    *(uint *)(&UNK_143337585 + uVar16) =
         *(int *)(&UNK_143337585 + uVar16) + 0x433375f8 + (uint)(0x8a < bVar26);
    *(char *)(CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar26 + 0x75) + -0x49) =
         (char)((ulonglong)param_2 >> 8);
    _UNK_1433375b1 = _UNK_1433375b1 + uVar13;
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
    puVar27 = &stack0xfffffffffffffee0;
    goto code_r0x0001417bf779;
  case (code)0x15:
    param_2 = (code *)(ulonglong)(uVar44 + 8);
    param_3 = (code *)&UNK_143336af4;
    param_4 = (code *)0x7;
    puVar27 = &stack0xfffffffffffffee8;
code_r0x0001417bf779:
    *(undefined8 *)(puVar27 + -8) = 0x1417bf781;
    lVar18 = pdb_14054e5c0(param_1,param_2,param_3,param_4);
    if (lVar18 == 0) {
      return (code *)0x0;
    }
    pcVar43 = *(code **)(puVar27 + 0x40);
    puVar29 = puVar27 + 0x78;
pdb_142db8fb0:
    *(code **)(puVar29 + -8) = pcVar43;
    *(undefined8 *)(puVar29 + -0x10) = 0xfffffffffffffffe;
    *(undefined8 *)(puVar29 + -0x38) = 1;
    *(longlong *)(puVar29 + -0x30) = lVar18;
    *(undefined8 *)(puVar29 + -0x20) = 0;
    *(undefined8 *)(puVar29 + -0x18) = 0;
    *(undefined **)(puVar29 + -0x60) = &UNK_142db8fda;
    pdb_14007ee60();
    *(undefined **)(puVar29 + -0x60) = &UNK_142db8fe9;
    UNRECOVERED_JUMPTABLE = (code *)pub_1406abab0(0x28,8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x20) = *(undefined8 *)(puVar29 + -0x18);
      uVar15 = *(undefined8 *)(puVar29 + -0x38);
      uVar6 = *(undefined8 *)(puVar29 + -0x30);
      uVar7 = *(undefined8 *)(puVar29 + -0x20);
      *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x10) = *(undefined8 *)(puVar29 + -0x28);
      *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x18) = uVar7;
      *(undefined8 *)UNRECOVERED_JUMPTABLE = uVar15;
      *(undefined8 *)(UNRECOVERED_JUMPTABLE + 8) = uVar6;
      return UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar29 + -0x60) = &UNK_142db901a;
    pdb_142dc7e11(8,0x28);
  case (code)0x16:
    piVar17 = (int *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff20);
    *piVar17 = *piVar17 + (int)piVar17;
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    pdb_142d7f1b0(param_1,param_2,1,1);
    lVar18 = *(longlong *)(param_1 + 0x10);
    *(undefined1 *)(*(longlong *)(param_1 + 8) + lVar18) = 0x7d;
    *(longlong *)(param_1 + 0x10) = lVar18 + 1;
    unaff_R15[0x20] = 1;
    plVar5 = *(longlong **)unaff_R15;
    lVar47 = *(longlong *)(unaff_R15 + 0x18) + -1;
    *(longlong *)(unaff_R15 + 0x18) = lVar47;
    lVar18 = plVar5[2];
    if (*plVar5 == lVar18) {
      uStack_f8 = (code *)0x1;
      pdb_142d7f1b0(plVar5,lVar18,1,1);
      lVar18 = plVar5[2];
    }
    *(undefined1 *)(plVar5[1] + lVar18) = 10;
    lVar18 = lVar18 + 1;
    plVar5[2] = lVar18;
    if (lVar47 != 0) {
      uVar15 = *(undefined8 *)(unaff_R15 + 8);
      uVar16 = *(ulonglong *)(unaff_R15 + 0x10);
      do {
        if ((ulonglong)(*plVar5 - lVar18) < uVar16) {
          uStack_f8 = (code *)0x1;
          pdb_142d7f1b0(plVar5,lVar18,uVar16,1);
          lVar18 = plVar5[2];
code_r0x0001417bfa40:
          pub_142e32760(plVar5[1] + lVar18,uVar15,uVar16);
        }
        else if (uVar16 != 0) goto code_r0x0001417bfa40;
        lVar18 = lVar18 + uVar16;
        plVar5[2] = lVar18;
        lVar47 = lVar47 + -1;
      } while (lVar47 != 0);
    }
    if (*plVar5 == lVar18) {
      uStack_f8 = (code *)0x1;
      pdb_142d7f1b0(plVar5,lVar18,1,1);
      lVar18 = plVar5[2];
    }
    *(undefined1 *)(plVar5[1] + lVar18) = 0x7d;
    plVar5[2] = lVar18 + 1;
    return (code *)0x0;
  case (code)0x17:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
    goto code_r0x0001417bfcf4;
  case (code)0x18:
    *(undefined4 *)(&UNK_1433375fd + uVar16) = 0x433375f8;
    *(undefined8 *)UNRECOVERED_JUMPTABLE = 0x5765676174746f43;
    *param_1 = (code)0x3;
    *(undefined8 *)(param_1 + 8) = 0xd;
    *(code **)(param_1 + 0x10) = UNRECOVERED_JUMPTABLE;
    *(undefined8 *)(param_1 + 0x18) = 0xd;
    return param_1;
  case (code)0x19:
    puVar45 = (undefined1 *)(ulonglong)(uVar44 + (int)((ulonglong)unaff_RDI >> 0x10));
    param_1 = (code *)(puVar45 + 1);
    out(*puVar45,uVar24);
    *(undefined4 *)UNRECOVERED_JUMPTABLE = 0x746e614c;
code_r0x0001417bfcf4:
    *param_1 = (code)0x3;
    *(undefined8 *)(param_1 + 8) = 7;
    *(code **)(param_1 + 0x10) = UNRECOVERED_JUMPTABLE;
    *(undefined8 *)(param_1 + 0x18) = 7;
    return param_1;
  case (code)0x1a:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(cVar9) {
    case (code)0x0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x9:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xa:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x11:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x12:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x13:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x14:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x15:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x16:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x17:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x18:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x19:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x1a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x1b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x1c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x1d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x1e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x1f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x20:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x21:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x22:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x23:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x24:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x25:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x26:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x27:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x28:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x29:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x2a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x2b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x2c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x2d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x2e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x2f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x30:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x31:
    case (code)0x3a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x32:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x33:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x34:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x35:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x36:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x37:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x38:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x39:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x3b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x3c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x3d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x3e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x3f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x40:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x41:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x42:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x43:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x44:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x45:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x46:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x47:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x48:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x49:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x4a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x4b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x4c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x4d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x4e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x4f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x50:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x51:
    case (code)0x54:
    case (code)0x56:
    case (code)0x57:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x52:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x53:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x55:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x58:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x59:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x5a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x5b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x5c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x5d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x5e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x5f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x60:
    case (code)0x61:
    case (code)0x62:
    case (code)0x63:
    case (code)0x64:
    case (code)0x65:
    case (code)0x66:
    case (code)0x67:
    case (code)0x69:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x68:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x6a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x6b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x6c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x6d:
    case (code)0x6e:
    case (code)0x6f:
    case (code)0x70:
    case (code)0x71:
    case (code)0x72:
    case (code)0x73:
    case (code)0x74:
    case (code)0x76:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x75:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x77:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x78:
    case (code)0x79:
    case (code)0x7a:
    case (code)0x7e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x7b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x7c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x7d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x8b:
    case (code)0x8d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x90:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x92:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x93:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x94:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x95:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x96:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x97:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x98:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x99:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x9a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x9b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x9c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x9d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x9e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x9f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xa0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xa1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xa2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xa3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xa4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xa5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xa6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  case (code)0x1b:
    *param_1 = (code)(((char)*param_1 - (char)param_3) - bVar48);
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x1c:
    *(undefined8 *)(param_1 + 8) = 0xc;
    *(code **)(param_1 + 0x10) = UNRECOVERED_JUMPTABLE;
    *(undefined8 *)(param_1 + 0x18) = 0xc;
    return param_1;
  case (code)0x1d:
    pbVar2 = &UNK_143337581 + uVar16;
    bVar26 = *pbVar2;
    *pbVar2 = *pbVar2 - 8;
    pbVar2 = &UNK_1433375bf + uVar16;
    bVar3 = *pbVar2;
    bVar4 = *pbVar2;
    *pbVar2 = bVar4 + bVar11 + (7 < bVar26);
    _UNK_1433375f8 =
         CONCAT31(_UNK_1433375f9,
                  (UNK_1433375f8 - bVar11) -
                  (CARRY1(bVar3,bVar11) || CARRY1(bVar4 + bVar11,7 < bVar26)));
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
    pcVar43 = (code *)swi(1);
    UNRECOVERED_JUMPTABLE =
         (code *)(*pcVar43)(CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8),
                                     cVar10 + (char)*UNRECOVERED_JUMPTABLE + 'u') & 0xffffffff);
    return UNRECOVERED_JUMPTABLE;
  case (code)0x1e:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
    pdb_142dc7e2a();
    pdb_142dc7e2a(1,0xc);
    pcVar21 = (code *)0x1;
code_r0x0001417bff6c:
    *(int *)(pcVar21 + 1) = *(int *)(pcVar21 + 1) + iVar46;
    pdb_142dc7e2a(pcVar21,4);
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  case (code)0x1f:
                    /* WARNING: Could not recover jumptable at 0x0001417bffcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (code *)(*(code *)(&UNK_143337670 + *(int *)(&UNK_143337670 + _UNK_1433375f8 * 4)))();
    return UNRECOVERED_JUMPTABLE;
  case (code)0x20:
    if (param_2[199] != (code)0x0) {
      pcStack_108 = param_2;
      UNRECOVERED_JUMPTABLE = (code *)pdb_1409922e0(param_2 + 0x90);
    }
    return UNRECOVERED_JUMPTABLE;
  case (code)0x21:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
    *(char *)(uVar16 + 0x1b833bd75) = *(char *)(uVar16 + 0x1b833bd75) + cVar10;
    (&UNK_14333757b)[uVar16] = (&UNK_14333757b)[uVar16] | 0xf8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x22:
    if (!bVar50 && -0x1433375f9 < (longlong)uVar16) goto code_r0x0001417bff6c;
    if ((char)((char)((ulonglong)unaff_RBX >> 8) >> 1) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_2 = (code *)(ulonglong)(uVar44 + 8);
    param_3 = (code *)&UNK_143336acb;
    uVar15 = 0xd;
    goto code_r0x0001417c0052;
  case (code)0x23:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x24:
    puVar28 = &stack0xfffffffffffffee0;
    in(0x6a);
    uVar15 = 9;
code_r0x0001417c0052:
    *(undefined8 *)(puVar28 + -8) = 0x1417c005a;
    lVar18 = pdb_14054e5c0(param_1,param_2,param_3,uVar15);
    if (lVar18 == 0) {
      return (code *)0x0;
    }
    puVar29 = puVar28 + 0x58;
    goto pdb_142db8fb0;
  case (code)0x25:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    UNRECOVERED_JUMPTABLE =
         (code *)(*UNRECOVERED_JUMPTABLE)
                           (&UNK_1433375f8,param_2,(char)param_3 + (char)unaff_R13D + bVar48);
    return UNRECOVERED_JUMPTABLE;
  case (code)0x26:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
    pdb_142d7f1b0();
    lVar18 = *(longlong *)(unaff_RDI + 0x10);
    *(undefined1 *)(*(longlong *)(unaff_RDI + 8) + lVar18) = 0x7b;
    *(longlong *)(unaff_RDI + 0x10) = lVar18 + 1;
    UNRECOVERED_JUMPTABLE = (code *)pdb_141b7fe30(&stack0xffffffffffffff10,&UNK_143336b06,2);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      return UNRECOVERED_JUMPTABLE;
    }
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    param_2 = *(code **)(UNRECOVERED_JUMPTABLE + 0x10);
    if (*(code **)UNRECOVERED_JUMPTABLE == param_2) {
      uStack_f8 = (code *)0x1;
      param_3 = (code *)0x1;
      param_4 = (code *)0x1;
      goto code_r0x0001417c0269;
    }
    goto code_r0x0001417c0147;
  case (code)0x27:
    param_4 = (code *)0x4;
    goto code_r0x0001417c03dd;
  case (code)0x28:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
    _UNK_1433375b1 = CONCAT31(_UNK_1433375b2,UNK_1433375b1 + cVar10);
    *(uint *)UNRECOVERED_JUMPTABLE = *(int *)UNRECOVERED_JUMPTABLE + uVar13;
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
    UNRECOVERED_JUMPTABLE = param_1;
    param_1 = unaff_RDI;
code_r0x0001417c0269:
    pdb_142d7f1b0(UNRECOVERED_JUMPTABLE,param_2,param_3,param_4);
    param_2 = *(code **)(UNRECOVERED_JUMPTABLE + 0x10);
code_r0x0001417c0147:
    param_2[*(longlong *)(UNRECOVERED_JUMPTABLE + 8)] = (code)0x7d;
    *(code **)(UNRECOVERED_JUMPTABLE + 0x10) = param_2 + 1;
    param_1 = *(code **)param_1;
    param_2 = *(code **)(param_1 + 0x10);
    if (*(code **)param_1 == param_2) {
      uStack_f8 = (code *)0x1;
code_r0x0001417c0237:
      pdb_142d7f1b0(param_1,param_2,1,1);
      param_2 = *(code **)(param_1 + 0x10);
    }
    param_2[*(longlong *)(param_1 + 8)] = (code)0x7d;
    *(code **)(param_1 + 0x10) = param_2 + 1;
    return (code *)0x0;
  case (code)0x29:
                    /* WARNING: Could not emulate address calculation at 0x0001417c0292 */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (code *)(*(code *)(&UNK_1433375f8 +
                           *(int *)(&UNK_1433375f8 + (longlong)UNRECOVERED_JUMPTABLE * 4)))();
    return UNRECOVERED_JUMPTABLE;
  case (code)0x2a:
    piVar17 = (int *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff20);
    *piVar17 = *piVar17 + (int)piVar17;
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    goto code_r0x0001417c0237;
  case (code)0x2b:
    param_4 = (code *)0x2;
    pcVar21 = param_1;
    goto code_r0x0001417c03dd;
  case (code)0x2c:
    goto code_r0x0001417c03dd;
  case (code)0x2d:
    param_4 = (code *)0x0;
code_r0x0001417c03dd:
    pdb_142db8640(pcVar21,param_2,param_3,param_4);
    return param_1;
  case (code)0x2e:
    uVar15 = pdb_142db8610();
    *(undefined8 *)(param_1 + 8) = uVar15;
    *param_1 = (code)0x6;
    return param_1;
  case (code)0x2f:
    (&UNK_143337585)[uVar16] = (&UNK_143337585)[uVar16] + '\b';
    goto code_r0x0001417c04aa;
  case (code)0x30:
    *(undefined2 *)UNRECOVERED_JUMPTABLE = in_ES;
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
    pcVar30 = &stack0xfffffffffffffee8;
    goto LAB_1417c049f;
  case (code)0x31:
  case (code)0x3a:
    puVar32 = &stack0xfffffffffffffee8;
code_r0x0001417c04aa:
    *(undefined8 *)(puVar32 + -8) = 0x1417c04af;
    pdb_1416578a0(pcVar21);
    pcVar21 = (code *)&UNK_1433376b0;
    UNRECOVERED_JUMPTABLE =
         (code *)(longlong)*(int *)(&UNK_1433376b0 + (ulonglong)(byte)puVar32[0x28] * 4);
code_r0x0001417c04bf:
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + (longlong)pcVar21;
code_r0x0001417c04c2:
                    /* WARNING: Could not recover jumptable at 0x0001417c04c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  case (code)0x32:
    goto code_r0x0001417c048f;
  case (code)0x33:
    goto code_r0x0001417c04bf;
  case (code)0x34:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x35:
    UNRECOVERED_JUMPTABLE = (code *)((ulonglong)&stack0xffffffffffffff10 & 0xffffffff);
    puVar31 = &stack0xfffffffffffffee8;
    goto code_r0x0001417c048f;
  case (code)0x36:
    *(uint *)(param_2 + 0x28) = uVar13;
    do {
      *(code **)(param_2 + 0x28) = UNRECOVERED_JUMPTABLE;
      if (pcVar21 + (longlong)UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_1417c0481;
LAB_1417c045b:
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + 1;
      param_4 = (code *)(ulonglong)(byte)(param_3 + -1)[(longlong)UNRECOVERED_JUMPTABLE];
      if ((code *)0x22 < param_4) goto LAB_1417c04d0;
    } while (((ulonglong)unaff_RDI >> ((ulonglong)param_4 & 0x3f) & 1) != 0);
LAB_1417c049f:
    if (param_4 == (code *)0x22) {
      pcVar21 = (code *)(pcVar30 + 0x28);
      puVar32 = pcVar30;
      goto code_r0x0001417c04aa;
    }
LAB_1417c04d0:
    if ((int)param_4 != 0x7b) {
      *(undefined8 *)(pcVar30 + 0x28) = 10;
LAB_1417c048a:
      UNRECOVERED_JUMPTABLE = (code *)(pcVar30 + 0x28);
      puVar31 = pcVar30;
      goto code_r0x0001417c048f;
    }
    pcVar21 = param_2 + 0x48;
    *pcVar21 = (code)((char)*pcVar21 - 1);
    if (*pcVar21 == (code)0x0) {
      *(undefined8 *)(pcVar30 + 0x28) = 0x18;
      goto LAB_1417c048a;
    }
    *(code **)(param_2 + 0x28) = UNRECOVERED_JUMPTABLE;
    pcVar21 = (code *)(pcVar30 + 0x28);
    unaff_RBX = param_2;
    pcVar36 = pcVar30;
    break;
  case (code)0x37:
    pcVar30 = acStack_160;
    param_1 = (code *)&UNK_1433375f8;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0x28);
    if (UNRECOVERED_JUMPTABLE < *(code **)(param_2 + 0x20)) {
      param_3 = *(code **)(param_2 + 0x18);
      pcVar21 = (code *)-(longlong)*(code **)(param_2 + 0x20);
      unaff_RDI = (code *)0x100002600;
      pcVar30 = acStack_160;
      goto LAB_1417c045b;
    }
LAB_1417c0481:
    *(undefined8 *)(pcVar30 + 0x28) = 5;
    goto LAB_1417c048a;
  case (code)0x38:
    goto code_r0x0001417c04c2;
  case (code)0x39:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x3b:
    goto code_r0x0001417c0519;
  case (code)0x3c:
    (&UNK_1433375bf)[uVar16] = (&UNK_1433375bf)[uVar16] | bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x3d:
    unaff_RBX = (code *)((ulonglong)param_2 & 0xffffffff);
    pcVar36 = &stack0xfffffffffffffee8;
    break;
  case (code)0x3e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x3f:
    return param_1;
  case (code)0x40:
    *(int *)(&UNK_143337585 + uVar16) = *(int *)(&UNK_143337585 + uVar16) + 0x433375f8;
    lVar18 = pdb_141c06d70(&uStack_c8,param_2,2);
    if (lVar18 == 0) {
      if ((unaff_XMM6_Da == 0.0) && (in_XMM1_Qb = pcStack_b0, !NAN(unaff_XMM6_Da))) {
code_r0x0001417c0c12:
        uStack_d8 = (undefined4)uStack_a8;
        uStack_d4 = uStack_a8._4_4_;
        uStack_d0 = SUB82(uStack_a0,0);
        uStack_ce = (undefined2)((ulonglong)uStack_a0 >> 0x10);
        uStack_cc = uStack_a0._4_4_;
        uStack_e0 = (uint)in_XMM1_Qb;
        uStack_dc = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
        uStack_f8 = (code *)CONCAT44(iStack_c4,uStack_c8);
        uStack_94 = uStack_94 & 0xffffff;
        pdb_140ddcdc0(param_1,&uStack_f8);
        return param_1;
      }
      uStack_94 = CONCAT13(1,(undefined3)uStack_94);
      lVar18 = pdb_141c06050(&uStack_c8,&UNK_143336c7b,0xb,unaff_RDI + 0x10);
      in_XMM1_Qb = pcStack_b0;
      if (lVar18 == 0) goto code_r0x0001417c0c12;
    }
    *(longlong *)(param_1 + 8) = lVar18;
    *param_1 = (code)0x6;
    puVar22 = &uStack_c8;
    goto code_r0x0001417c0be9;
  case (code)0x41:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x42:
    puVar22 = (undefined4 *)(ulonglong)((int)pcVar43 - 0x30);
code_r0x0001417c0be9:
    pdb_1417c2cd0(puVar22);
    return param_1;
  case (code)0x43:
    bVar26 = *unaff_R15;
    *unaff_R15 = *unaff_R15 >> 1 | bVar26 << 7;
    cStack_b8 = cStack_b8 + -8 + (bVar26 & 1);
    uStack_c8 = uVar12;
    iStack_c4 = iVar14;
    goto code_r0x0001417c0c12;
  case (code)0x44:
    uStack_d0 = 0x3319;
    uStack_f8 = param_1;
    uVar13 = pdb_141764730();
    param_1 = (code *)(ulonglong)uVar13;
    unaff_RBX = (code *)*unaff_R14;
    uVar15 = *(undefined8 *)(unaff_R15 + 8);
    unaff_R14 = *(undefined8 **)(unaff_RBX + 0x100);
    if (unaff_R14 == *(undefined8 **)(unaff_RBX + 0xf0)) {
      pdb_142dbafc0(unaff_RBX + 0xf0);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_RBX + 0xf8);
    pcVar21 = (code *)((longlong)unaff_R14 * 0x1c);
    *(undefined4 *)(UNRECOVERED_JUMPTABLE + (longlong)pcVar21) = 3;
    *(undefined8 *)(UNRECOVERED_JUMPTABLE + 4 + (longlong)pcVar21) = uVar15;
    *(int *)(UNRECOVERED_JUMPTABLE + 0xc + (longlong)pcVar21) = iVar46;
    *(int *)(UNRECOVERED_JUMPTABLE + 0x10 + (longlong)pcVar21) =
         (int)CONCAT71(uStack_b7,cStack_b8) + 2;
    *(undefined4 *)(UNRECOVERED_JUMPTABLE + 0x14 + (longlong)pcVar21) = unaff_R13D;
    goto code_r0x0001417c150b;
  case (code)0x45:
    goto code_r0x0001417c15e8;
  case (code)0x46:
    *(int *)(uVar16 + 0x28666ec04) = (int)pcVar43;
code_r0x0001417c150b:
    *(int *)(UNRECOVERED_JUMPTABLE + 0x18 + (longlong)pcVar21) = (int)param_1;
    *(longlong *)(unaff_RBX + 0x100) = (longlong)unaff_R14 + 1;
    return UNRECOVERED_JUMPTABLE;
  case (code)0x47:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
    cVar9 = *unaff_RDI;
    *unaff_RDI = (code)((char)*unaff_RDI - 8);
    uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_d8 + cVar10 + (7 < (byte)cVar9));
    pcVar36 = &stack0xfffffffffffffee8;
    goto code_r0x0001417c1589;
  case (code)0x48:
    *(uint *)(param_1 + 0x20) = uVar13;
    UNRECOVERED_JUMPTABLE = param_1;
    goto code_r0x0001417c1783;
  case (code)0x49:
    uVar15 = pdb_142db90e0((ulonglong)&uStack_c0 & 0xffffffff);
    goto code_r0x0001417c1564;
  case (code)0x4a:
    goto code_r0x0001417c17be;
  case (code)0x4b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x4c:
    goto code_r0x0001417c179f;
  case (code)0x4d:
    pdb_141be54d0();
    pcVar21 = (code *)(ulonglong)(byte)uStack_c8;
    pcVar20 = (code *)CONCAT44(uStack_cc,CONCAT22(uStack_ce,uStack_d0));
    pcVar36 = &stack0xfffffffffffffee8;
    goto code_r0x0001417c185c;
  case (code)0x4e:
    return (code *)((ulonglong)param_1 & 0xffffffff);
  case (code)0x4f:
    goto code_r0x0001417c175d;
  case (code)0x50:
    goto code_r0x0001417c1946;
  case (code)0x51:
  case (code)0x54:
  case (code)0x56:
  case (code)0x57:
    *(int *)(uVar16 + 0x107b6be00) = *(int *)(uVar16 + 0x107b6be00) + 0x433375f8;
    param_1[-0x3d] = (code)((byte)param_1[-0x3d] & bVar26);
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  case (code)0x52:
    goto LAB_1417c1a1b;
  case (code)0x53:
    return UNRECOVERED_JUMPTABLE;
  case (code)0x55:
    iRam00000001ac94ea4b = iRam00000001ac94ea4b - iVar46;
    pcVar36 = &stack0xfffffffffffffee8;
    if (param_2[4] == (code)0x72 && *(int *)param_2 == 0x433375f8) {
      (&UNK_1433375f9)[uVar16] = 3;
      goto LAB_1417c1a1b;
    }
    goto LAB_1417c1a25;
  case (code)0x58:
    pcVar36 = &stack0xfffffffffffffee8;
    if (!bVar50) goto LAB_1417c1a25;
    (&UNK_1433375f9)[uVar16] = 2;
LAB_1417c1a1b:
    *UNRECOVERED_JUMPTABLE = (code)0x0;
    return UNRECOVERED_JUMPTABLE;
  case (code)0x59:
    *(undefined4 *)param_1 = 1;
    return param_1;
  case (code)0x5a:
    goto code_r0x0001417c1a84;
  case (code)0x5b:
    pcVar43 = param_1 + 1;
    out(*param_1,uVar24);
    if ((longlong)UNRECOVERED_JUMPTABLE < 0) goto code_r0x0001417c1ad6;
    goto code_r0x0001417c1b1a;
  case (code)0x5c:
    pcVar36 = &UNK_1433375b1 + uVar16;
    *pcVar36 = *pcVar36 + -8;
    out(*(undefined4 *)param_1,uVar24);
    if (*pcVar36 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x5d:
    pcVar36 = (char *)&uStack_90;
    goto code_r0x0001417c1ab9;
  case (code)0x5e:
    (&UNK_1433375f9)[uVar16] = 0;
    *UNRECOVERED_JUMPTABLE = (code)0x0;
    return UNRECOVERED_JUMPTABLE;
  case (code)0x5f:
    pdb_141b4dee0(&uStack_e0,param_2,&UNK_143336891,0xc);
    if (uStack_e0 != 1) {
      *(undefined4 *)(param_1 + 0xc) = uStack_d4;
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_d8,uStack_dc);
      uVar12 = 0;
      goto LAB_1417c1dcb;
    }
    goto LAB_1417c1d90;
  case (code)0x60:
  case (code)0x61:
  case (code)0x62:
  case (code)0x63:
  case (code)0x64:
  case (code)0x65:
  case (code)0x66:
  case (code)0x67:
  case (code)0x69:
    uVar15 = pdb_142db90e0();
    uStack_d8 = (undefined4)uVar15;
    uStack_d4 = (undefined4)((ulonglong)uVar15 >> 0x20);
    goto LAB_1417c1d90;
  case (code)0x68:
    uRam0000000650014d9a =
         uRam0000000650014d9a >> 1 | (uint)((uRam0000000650014d9a & 1) != 0) << 0x1f;
    uVar15 = pdb_142d8f140();
    *(undefined8 *)(&UNK_143337600 + uVar16) = uVar15;
    *UNRECOVERED_JUMPTABLE = (code)0x1;
    return UNRECOVERED_JUMPTABLE;
  case (code)0x6a:
LAB_1417c1d90:
    *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_d4,uStack_d8);
    uVar12 = 2;
LAB_1417c1dcb:
    *(undefined4 *)param_1 = uVar12;
    return param_1;
  case (code)0x6b:
    goto code_r0x0001417c1e5a;
  case (code)0x6c:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
    *(char *)(uVar16 + 0x152987872) = *(char *)(uVar16 + 0x152987872) + cVar10;
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
    *(char *)(uVar16 + 0x152a07972) = *(char *)(uVar16 + 0x152a07972) + cVar10;
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
    *(char *)(uVar16 + 0x152947a72) = *(char *)(uVar16 + 0x152947a72) + cVar10;
    if ((POPCOUNT(*(uint *)(param_1 + -0x80000000) & uVar44 & 0xff) & 1U) == 0) {
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
      pcVar25 = &stack0xfffffffffffffee8;
      goto code_r0x0001417c1eac;
    }
    pcVar36 = &stack0xfffffffffffffee8;
    pcVar25 = &stack0xfffffffffffffee8;
    if ((*(uint *)(param_1 + -0x80000000) & uVar44) == 0) goto code_r0x0001417c1eac;
    goto LAB_1417c1f58;
  case (code)0x6d:
  case (code)0x6e:
  case (code)0x6f:
  case (code)0x70:
  case (code)0x71:
  case (code)0x72:
  case (code)0x73:
  case (code)0x74:
  case (code)0x76:
    goto code_r0x0001417c1ecd;
  case (code)0x75:
    goto code_r0x0001417c1e67;
  case (code)0x77:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
    *(char *)(uVar16 + 0x152977b72) = *(char *)(uVar16 + 0x152977b72) + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x78:
  case (code)0x79:
  case (code)0x7a:
  case (code)0x7e:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  case (code)0x7b:
    uStack_f8 = (code *)CONCAT44(uStack_f8._4_4_,0x10);
    UNRECOVERED_JUMPTABLE =
         (code *)pdb_140f66e50(UNRECOVERED_JUMPTABLE,&UNK_1433372a0,0x11,&UNK_1433372b1);
    return UNRECOVERED_JUMPTABLE;
  case (code)0x7c:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  case (code)0x7d:
    pcVar21 = param_2;
    param_2 = (code *)&UNK_14301e550;
    goto pdb_140f679a0;
  default:
    if (bVar49) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    }
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  case (code)0x8b:
  case (code)0x8d:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  case (code)0x90:
    if (bVar50) {
      uVar16 = (ulonglong)(byte)param_3[8];
      if (6 < uVar16) {
        uStack_dc = (undefined4)((ulonglong)param_1 >> 0x20);
        uStack_f8 = (code *)0xfffffffffffffffe;
        if (*(longlong *)(param_3 + 0x10) != 0) {
          acStack_160[0] = '\0';
          acStack_160[1] = '\0';
          acStack_160[2] = '\0';
          acStack_160[3] = '\0';
          acStack_160[4] = '\0';
          acStack_160[5] = '\0';
          acStack_160[6] = '\0';
          acStack_160[7] = '\0';
        }
        uStack_168 = (ulonglong)(*(longlong *)(param_3 + 0x10) != 0);
        uStack_e0 = uVar44;
        pdb_14192c4b0(&stack0xfffffffffffffee0,&uStack_168);
        if (in_stack_fffffffffffffee0 != (code *)0x0) {
          do {
            pcStack_108 = in_stack_fffffffffffffee0 + uStack_110 * 0x20;
            puStack_100 = &uStack_168;
            if (*(ulonglong *)(in_stack_fffffffffffffee0 + uStack_110 * 0x18 + 0x168) != 0) {
              pub_1406abac0(*(byte **)(in_stack_fffffffffffffee0 + uStack_110 * 0x18 + 0x170),
                            *(ulonglong *)(in_stack_fffffffffffffee0 + uStack_110 * 0x18 + 0x168),1)
              ;
            }
            pdb_140966d70(&pcStack_108);
            pdb_14192c4b0(&stack0xfffffffffffffee0,&uStack_168);
          } while (in_stack_fffffffffffffee0 != (code *)0x0);
        }
        return in_stack_fffffffffffffee0;
      }
      pcVar21 = (code *)&UNK_1433377d8;
      goto code_r0x0001417c2d0d;
    }
    uStack_a8 = (code *)&UNK_1433375f8;
    pcStack_b0 = param_3;
    pdb_1409a45e0(param_3 + 0x18);
    if (SBORROW8(0,(longlong)uStack_a8)) {
      return pcStack_b0;
    }
    UNRECOVERED_JUMPTABLE = pcStack_b0;
    param_2 = uStack_a8;
    if (uStack_a8 == (code *)0x0) {
      return pcStack_b0;
    }
    goto code_r0x0001417c2d5b;
  case (code)0x92:
    (&UNK_143337585)[uVar16] = (&UNK_143337585)[uVar16] + -8;
    uVar16 = (ulonglong)(uVar13 | 0x1b74acb);
code_r0x0001417c2d0d:
                    /* WARNING: Could not recover jumptable at 0x0001417c2d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)(*(pcVar21 + *(int *)(pcVar21 + uVar16 * 4)))();
    return UNRECOVERED_JUMPTABLE;
  case (code)0x93:
    if (bVar49) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    }
    goto code_r0x0001417c2ca6;
  case (code)0x94:
    UNRECOVERED_JUMPTABLE = (code *)pdb_140f66f00(uVar13 | 0x1b73a1a,param_2,0xe);
    return UNRECOVERED_JUMPTABLE;
  case (code)0x95:
    uStack_f8 = (code *)CONCAT44(uStack_f8._4_4_,0x433375f8);
    UNRECOVERED_JUMPTABLE =
         (code *)pdb_140f66090(UNRECOVERED_JUMPTABLE,&UNK_143336a45,0xb,&stack0xffffffffffffff18);
    return UNRECOVERED_JUMPTABLE;
  case (code)0x96:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  case (code)0x97:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x98:
    pcVar36 = &stack0xfffffffffffffee8;
    goto code_r0x0001417c31ac;
  case (code)0x99:
    goto code_r0x0001417c3227;
  case (code)0x9a:
    goto code_r0x0001417c31dc;
  case (code)0x9b:
    if (!bVar48) goto code_r0x0001417c31f7;
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(uVar13 | 0x10c1c148);
    goto code_r0x0001417c320c;
  case (code)0x9c:
    pcVar36 = &stack0xfffffffffffffee8;
    goto LAB_1417c31c5;
  case (code)0x9d:
    goto code_r0x0001417c3240;
  case (code)0x9e:
    goto code_r0x0001417c3259;
  case (code)0x9f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0xa0:
    iVar14 = (uVar13 + 0xb7fe48c2) - (uint)bVar48;
    uStack_f8 = (code *)0x1;
    param_2 = (code *)&UNK_143336ab0;
    goto code_r0x0001417c33d2;
  case (code)0xa1:
    pcVar21 = (code *)0x9;
    goto pdb_140f679a0;
  case (code)0xa2:
                    /* WARNING: Could not recover jumptable at 0x0001417c3408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (code *)(*(param_3 + *(int *)(param_3 + (longlong)param_2 * 4)))
                           (&UNK_1433375f8,param_3 + *(int *)(param_3 + (longlong)param_2 * 4));
    return UNRECOVERED_JUMPTABLE;
  case (code)0xa3:
    pcVar21 = (code *)(ulonglong)(uVar13 | 0x48000000);
    goto pdb_140f679a0;
  case (code)0xa4:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
    pbVar2 = &UNK_143337585 + uVar16;
    bVar26 = *pbVar2;
    *pbVar2 = *pbVar2 - 8;
    iVar14 = uVar13 + 0x1b736de + (uint)(7 < bVar26);
code_r0x0001417c33d2:
    UNRECOVERED_JUMPTABLE = (code *)pdb_140f66e50(iVar14,param_2,0xd,&UNK_143336abd);
    return UNRECOVERED_JUMPTABLE;
  case (code)0xa5:
    pcVar21 = (code *)0x7;
pdb_140f679a0:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (code *)(**(code **)(*(longlong *)(pcVar21 + 8) + 0x18))(*(undefined8 *)pcVar21,param_2);
    return UNRECOVERED_JUMPTABLE;
  case (code)0xa6:
    goto code_r0x0001417c348e;
  case (code)0xa7:
  case (code)0xa8:
  case (code)0xa9:
    if (!SCARRY8(uVar16,0x1433375f8)) {
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + 1);
      goto code_r0x00014333762f;
    }
    param_1[0x63fe4871] = (code)((char)param_1[0x63fe4871] + 1);
  case (code)0xaa:
  case (code)0xab:
  case (code)0xac:
  case (code)0xad:
    pcVar43 = param_1 + 0x63fe4871;
    cVar9 = *pcVar43;
    *pcVar43 = (code)((char)*pcVar43 + 1);
    if (!SCARRY1((char)cVar9,'\x01')) {
      *param_2 = (code)((char)*param_2 + 1);
      *(uint *)(&UNK_1433375f6 + uVar16) = *(uint *)(&UNK_1433375f6 + uVar16) | 0xfe4885b0;
      UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(uVar13 + 0x30fe4887);
      puVar41 = &stack0xfffffffffffffee8;
      goto code_r0x00014333762f;
    }
    param_2[0x71] = (code)((char)param_2[0x71] + 1);
    (&UNK_143337640)[(longlong)param_1 * 2] = (&UNK_143337640)[(longlong)param_1 * 2] + -1;
    do {
      pcVar43 = pcVar21 + 0x77fe4871;
      *pcVar43 = (code)((char)*pcVar43 + 1);
      if (bVar48 || *pcVar43 == (code)0x0) {
        param_2[-0x7a] = (code)((char)param_2[-0x7a] + 1);
code_r0x00014333765e:
        param_1[(longlong)UNRECOVERED_JUMPTABLE * 4] =
             (code)((char)param_1[(longlong)UNRECOVERED_JUMPTABLE * 4] + 1);
        param_2[-0x79] = (code)((char)param_2[-0x79] + 1);
        pcVar21[-0x3f01b779] = (code)((char)pcVar21[-0x3f01b779] + 1);
        LOCK();
        cVar9 = UNRECOVERED_JUMPTABLE[-2];
        UNRECOVERED_JUMPTABLE[-2] = SUB81(pcVar21,0);
        pcVar21 = (code *)CONCAT71((int7)((ulonglong)pcVar21 >> 8),cVar9);
        UNLOCK();
        unaff_RDI = (code *)*puVar42;
        puVar42 = puVar42 + 1;
        *(int *)(UNRECOVERED_JUMPTABLE + -2) = (int)pcVar21;
        param_1 = (code *)0x85fe4889;
code_r0x000143337679:
        *(int *)(UNRECOVERED_JUMPTABLE + -2) = (int)pcVar21;
        UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(uint)(int)(short)UNRECOVERED_JUMPTABLE;
      }
      else {
        unaff_RBX[0x79] = (code)((char)unaff_RBX[0x79] + 1);
        unaff_RDI[(longlong)param_1 * 2 + 0x48] =
             (code)((char)unaff_RDI[(longlong)param_1 * 2 + 0x48] + 1);
        unaff_RBX[0x78] = (code)((char)unaff_RBX[0x78] + 1);
        unaff_RBX[0x7d] = (code)((char)unaff_RBX[0x7d] + 1);
        cVar9 = *param_2;
        *param_2 = (code)((char)*param_2 + 1);
        if (*param_2 == (code)0x0 || SCARRY1((char)cVar9,'\x01') != (char)*param_2 < '\0') {
          unaff_RDI[-0x77] = (code)((char)unaff_RDI[-0x77] + 1);
          param_1[-0x7a01b777] = (code)((char)param_1[-0x7a01b777] + 1);
          goto code_r0x000143337679;
        }
        pcVar43 = param_1 + -0x1b01b783;
        cVar9 = *pcVar43;
        *pcVar43 = (code)((char)*pcVar43 + 1);
        puVar41 = (undefined1 *)puVar42;
        if (SCARRY1((char)cVar9,'\x01') != (char)*pcVar43 < '\0') {
code_r0x00014333762f:
          param_2 = (code *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                                     CONCAT11((char)((ulonglong)param_2 >> 8) + '\x01',(char)param_2
                                             ));
          UNRECOVERED_JUMPTABLE[-2] = (code)((byte)UNRECOVERED_JUMPTABLE[-2] | 0x25);
          *(uint *)(UNRECOVERED_JUMPTABLE + -2) = *(uint *)(UNRECOVERED_JUMPTABLE + -2) | 0xfe4880ec
          ;
          *(int *)(UNRECOVERED_JUMPTABLE + -0x7f2601b8) =
               *(int *)(UNRECOVERED_JUMPTABLE + -0x7f2601b8) + 1;
          *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + 1);
          *(uint *)(UNRECOVERED_JUMPTABLE + -2) = *(uint *)(UNRECOVERED_JUMPTABLE + -2) | 0xfe48816d
          ;
          bVar48 = CARRY1((byte)UNRECOVERED_JUMPTABLE,(byte)pcVar21[-0x7a4f01b8]);
          UNRECOVERED_JUMPTABLE =
               (code *)CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8),
                                (byte)UNRECOVERED_JUMPTABLE + (char)pcVar21[-0x7a4f01b8]);
          cRam000000017431bee0 = cRam000000017431bee0 + '\x01';
          bVar26 = POPCOUNT(cRam000000017431bee0);
          LOCK();
          cVar9 = UNRECOVERED_JUMPTABLE[-2];
          UNRECOVERED_JUMPTABLE[-2] = SUB81(pcVar21,0);
          pcVar21 = (code *)CONCAT71((int7)((ulonglong)pcVar21 >> 8),cVar9);
          UNLOCK();
          puVar42 = (undefined8 *)puVar41;
          if ((bVar26 & 1) == 0) {
            UNRECOVERED_JUMPTABLE[0x48] =
                 (code)((byte)UNRECOVERED_JUMPTABLE[0x48] >> ((byte)cVar9 & 0x1f));
            unaff_RDI[-0x5901b798] = (code)((char)unaff_RDI[-0x5901b798] - 1);
            *(undefined8 *)(puVar41 + -8) = 0x6878fe48;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          goto code_r0x00014333765e;
        }
      }
      *(int *)(UNRECOVERED_JUMPTABLE + -2) = (int)pcVar21;
      if (!bVar48) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    } while( true );
  }
  *(undefined8 *)(pcVar36 + -8) = 0x1417c04f4;
  pdb_141654250(pcVar21);
  UNRECOVERED_JUMPTABLE = *(code **)(pcVar36 + 0x30);
  param_2 = (code *)&UNK_1433376d4;
  uVar16 = (ulonglong)*(int *)(&UNK_1433376d4 + (ulonglong)(byte)pcVar36[0x28] * 4);
  bVar48 = 0xfffffffebccc892b < uVar16;
  pcVar21 = (code *)(&UNK_1433376d4 + uVar16);
  bVar49 = pcVar21 == (code *)0x0;
  bVar26 = (byte)UNRECOVERED_JUMPTABLE;
  iVar14 = (int)UNRECOVERED_JUMPTABLE;
  bVar11 = (byte)pcVar21;
  uVar13 = (uint)pcVar21;
  pcVar20 = UNRECOVERED_JUMPTABLE;
  pcVar23 = pcVar21;
  pcVar25 = pcVar36;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(pcVar36[0x28]) {
  case '\0':
    *(undefined8 *)(pcVar36 + -8) = 0x1417c0516;
    UNRECOVERED_JUMPTABLE = (code *)pdb_141654940(UNRECOVERED_JUMPTABLE);
    bVar50 = UNRECOVERED_JUMPTABLE == (code *)0x0;
    puVar45 = pcVar36;
code_r0x0001417c0519:
    pcVar36 = puVar45;
    if (!bVar50) goto code_r0x0001417c062a;
    uVar15 = 0;
    break;
  case '\x01':
    *(undefined8 *)(pcVar36 + -8) = 0x1417c05a6;
    UNRECOVERED_JUMPTABLE = (code *)pdb_141654940(UNRECOVERED_JUMPTABLE);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto code_r0x0001417c062a;
    uVar15 = 1;
    break;
  case '\x02':
    *(undefined8 *)(pcVar36 + -8) = 0x1417c05bd;
    UNRECOVERED_JUMPTABLE = (code *)pdb_141654940(UNRECOVERED_JUMPTABLE);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto code_r0x0001417c062a;
    uVar15 = 2;
    break;
  case '\x03':
    *(undefined8 *)(pcVar36 + -8) = 0x1417c058b;
    UNRECOVERED_JUMPTABLE = (code *)pdb_141654940(UNRECOVERED_JUMPTABLE);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto code_r0x0001417c062a;
    uVar15 = 3;
    break;
  case '\x04':
    *(undefined8 *)(pcVar36 + -8) = 0x1417c05fd;
    UNRECOVERED_JUMPTABLE = (code *)pdb_141654940(UNRECOVERED_JUMPTABLE);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto code_r0x0001417c062a;
    uVar15 = 4;
    break;
  case '\x05':
    *(undefined8 *)(pcVar36 + -8) = 0x1417c0611;
    UNRECOVERED_JUMPTABLE = (code *)pdb_141654940(UNRECOVERED_JUMPTABLE);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto code_r0x0001417c062a;
    uVar15 = 5;
    break;
  case '\x06':
    *(undefined8 *)(pcVar36 + -8) = 0x1417c05e1;
    pdb_141655c40(param_1,UNRECOVERED_JUMPTABLE,&UNK_143336d88,1);
    lVar18 = *(longlong *)param_1;
    unaff_RBX[0x48] = (code)((char)unaff_RBX[0x48] + 1);
    if (lVar18 == 8) {
      return param_1;
    }
    goto code_r0x0001417c0648;
  case '\a':
    *(undefined8 *)(pcVar36 + -8) = 0x1417c0625;
    UNRECOVERED_JUMPTABLE = (code *)pdb_141654940(UNRECOVERED_JUMPTABLE);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto code_r0x0001417c062a;
    uVar15 = 7;
    break;
  case '\b':
code_r0x0001417c062a:
    *(code **)(param_1 + 8) = UNRECOVERED_JUMPTABLE;
    *(undefined8 *)param_1 = 8;
    unaff_RBX[0x48] = (code)((char)unaff_RBX[0x48] + 1);
    return param_1;
  case '\t':
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  case '\n':
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar26);
    *(undefined8 *)(pcVar36 + -8) = 0x1417c0d1b;
    UNRECOVERED_JUMPTABLE = (code *)pub_1406abab0(6,1);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
code_r0x0001417c0d78:
      *(undefined8 *)(pcVar36 + -8) = 0x1417c0d87;
      pdb_142dc7e2a(1,6);
      *(undefined8 *)(pcVar36 + -8) = 0x1417c0d96;
      pdb_142dc7e2a(1,3);
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    }
    *(undefined2 *)(UNRECOVERED_JUMPTABLE + 4) = 0x6e65;
    *(undefined4 *)UNRECOVERED_JUMPTABLE = 0x646f6f57;
    goto code_r0x0001417c0d50;
  case '\v':
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar26);
    *(undefined8 *)(pcVar36 + -8) = 0x1417c0cd5;
    UNRECOVERED_JUMPTABLE = (code *)pub_1406abab0(4,1);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      *(undefined8 *)(pcVar36 + -8) = 0x1417c0d78;
      pdb_142dc7e2a(1,4);
      goto code_r0x0001417c0d78;
    }
    *(undefined4 *)UNRECOVERED_JUMPTABLE = 0x656e6f4e;
    goto code_r0x0001417c0d50;
  case '\f':
code_r0x0001417c0d50:
    *param_1 = (code)0x3;
    *(code **)(param_1 + 8) = unaff_RDI;
    *(code **)(param_1 + 0x10) = UNRECOVERED_JUMPTABLE;
    *(code **)(param_1 + 0x18) = unaff_RDI;
    return param_1;
  case '\r':
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar26);
    param_1[-0x3d] = (code)((char)param_1[-0x3d] + (byte)unaff_RBX);
    *(undefined8 *)(pcVar36 + 0xa0) = *(undefined8 *)(pcVar36 + 0x50);
    uVar12 = *(undefined4 *)(pcVar36 + 0x40);
    iVar14 = *(int *)(pcVar36 + 0x44);
    in_XMM0_Dc = *(undefined4 *)(pcVar36 + 0x48);
    in_XMM0_Dd = *(undefined4 *)(pcVar36 + 0x4c);
code_r0x0001417c1589:
    *(undefined4 *)(pcVar36 + 0x90) = uVar12;
    *(int *)(pcVar36 + 0x94) = iVar14;
    *(undefined4 *)(pcVar36 + 0x98) = in_XMM0_Dc;
    *(undefined4 *)(pcVar36 + 0x9c) = in_XMM0_Dd;
                    /* WARNING: Could not recover jumptable at 0x0001417c15a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (code *)(*(code *)(&UNK_143337708 +
                           *(int *)(&UNK_143337708 + ((ulonglong)param_2 & 0xffffffff) * 4)))
                           ((ulonglong)UNRECOVERED_JUMPTABLE & 0xff,
                            &UNK_143337708 +
                            *(int *)(&UNK_143337708 + ((ulonglong)param_2 & 0xffffffff) * 4));
    return UNRECOVERED_JUMPTABLE;
  case '\x0e':
    UNRECOVERED_JUMPTABLE[-0x39] = (code)((byte)UNRECOVERED_JUMPTABLE[-0x39] & bVar11);
    uVar13 = (int)(int *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff28) +
             *(int *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff28);
    *(char *)(ulonglong)uVar13 = *(char *)(ulonglong)uVar13 + (char)uVar13;
    *(undefined8 *)(pcVar36 + -8) = 0x1417c16ea;
    pdb_141502000(pcVar36 + 0x70,pcVar36 + 0x30,&UNK_143336c60,0xf);
    if (*(int *)(pcVar36 + 0x70) == 1) {
      UNRECOVERED_JUMPTABLE = *(code **)(pcVar36 + 0x78);
code_r0x0001417c175d:
      *(code **)param_1 = UNRECOVERED_JUMPTABLE;
      cVar9 = (code)0x5;
      UNRECOVERED_JUMPTABLE = param_1;
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(pcVar36 + 0x84);
      uVar15 = *(undefined8 *)(pcVar36 + 0x7c);
      *(undefined8 *)param_1 = *(undefined8 *)(pcVar36 + 0x74);
      *(undefined8 *)(param_1 + 8) = uVar15;
      cVar9 = (code)0x4;
      UNRECOVERED_JUMPTABLE = param_1;
    }
    goto code_r0x0001417c17b1;
  case '\x0f':
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar26);
    pcVar25 = (char *)((longlong)&uStack_94 + (longlong)pcVar21 * 4 + 1);
    *pcVar25 = *pcVar25 + bVar11;
    puVar8 = pcVar36;
code_r0x0001417c15e8:
    puVar33 = puVar8;
    *(undefined8 *)(puVar33 + -8) = 0x1417c1602;
    pdb_141501430(puVar33 + 0x30,puVar33 + 0x70);
    if (puVar33[0x52] == '\x02') {
      uVar15 = *(undefined8 *)(puVar33 + 0x30);
code_r0x0001417c1564:
      *(undefined8 *)param_1 = uVar15;
      param_1[0x22] = (code)0x5;
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(puVar33 + 0x50);
    UNRECOVERED_JUMPTABLE = param_1;
code_r0x0001417c1783:
    uVar15 = *(undefined8 *)(puVar33 + 0x30);
    uVar6 = *(undefined8 *)(puVar33 + 0x38);
    uVar7 = *(undefined8 *)(puVar33 + 0x48);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x10) = *(undefined8 *)(puVar33 + 0x40);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x18) = uVar7;
    *(undefined8 *)UNRECOVERED_JUMPTABLE = uVar15;
    *(undefined8 *)(UNRECOVERED_JUMPTABLE + 8) = uVar6;
code_r0x0001417c179f:
    return UNRECOVERED_JUMPTABLE;
  case '\x10':
    *(undefined8 *)(pcVar36 + -8) = 0x1417c1670;
    pdb_1415023d0(pcVar21,pcVar36 + 0x30);
    if (*(int *)(pcVar36 + 0x58) == 1) {
      UNRECOVERED_JUMPTABLE = *(code **)(pcVar36 + 0x60);
      goto code_r0x0001417c175d;
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(pcVar36 + 100);
    *(undefined8 *)param_1 = *(undefined8 *)(pcVar36 + 0x5c);
    cVar9 = (code)0x3;
    UNRECOVERED_JUMPTABLE = param_1;
code_r0x0001417c17b1:
    UNRECOVERED_JUMPTABLE[0x22] = cVar9;
code_r0x0001417c17be:
    return UNRECOVERED_JUMPTABLE;
  case '\x11':
code_r0x0001417c185c:
    UNRECOVERED_JUMPTABLE = pcVar20;
    if ((char)pcVar21 == '\a') goto code_r0x0001417c1861;
    goto LAB_1417c1875;
  case '\x12':
    goto code_r0x0001417c1901;
  case '\x13':
    *(uint *)(UNRECOVERED_JUMPTABLE + 1) = *(uint *)(UNRECOVERED_JUMPTABLE + 1) | 0x48e0ffc8;
    goto code_r0x0001417c18a0;
  case '\x14':
    goto code_r0x0001417c18bd;
  case '\x15':
    pcVar36[0x60] = pcVar36[0x60] + bVar11 + bVar48;
LAB_1417c1875:
    *(undefined8 *)(pcVar36 + 0x38) = *(undefined8 *)(pcVar36 + 0x60);
    *(undefined8 *)(pcVar36 + 0x40) = *(undefined8 *)(pcVar36 + 0x68);
    *(undefined4 *)(pcVar36 + 0x29) = *(undefined4 *)(pcVar36 + 0x51);
    *(undefined4 *)(pcVar36 + 0x2d) = *(undefined4 *)(pcVar36 + 0x55);
    *(undefined4 *)(pcVar36 + 0x31) = *(undefined4 *)(pcVar36 + 0x59);
    *(undefined4 *)(pcVar36 + 0x35) = *(undefined4 *)(pcVar36 + 0x5d);
    pcVar36[0x28] = (char)pcVar21;
    uVar16 = (ulonglong)UNRECOVERED_JUMPTABLE & 0xff;
    pcVar21 = (code *)&UNK_143337718;
    uVar19 = (ulonglong)*(int *)(&UNK_143337718 + uVar16 * 4);
    UNRECOVERED_JUMPTABLE = (code *)(&UNK_143337718 + uVar19);
    bVar50 = UNRECOVERED_JUMPTABLE == (code *)0x0;
    bVar48 = (POPCOUNT((ulonglong)UNRECOVERED_JUMPTABLE & 0xff) & 1U) == 0;
    cVar10 = (char)UNRECOVERED_JUMPTABLE;
    pcVar20 = pcVar21;
    pcVar25 = pcVar36;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar16) {
    case 0:
code_r0x0001417c18a0:
      UNRECOVERED_JUMPTABLE = param_1;
      *(undefined8 *)(pcVar36 + -8) = 0x1417c18aa;
      pcVar20 = (code *)pdb_140de26b0(pcVar36 + 0x28);
      param_1 = UNRECOVERED_JUMPTABLE;
      if (pcVar20 == (code *)0x0) {
        *(undefined8 *)UNRECOVERED_JUMPTABLE = 0;
code_r0x0001417c18bd:
        return UNRECOVERED_JUMPTABLE;
      }
      goto code_r0x0001417c1861;
    case 1:
code_r0x0001417c1947:
      *(undefined8 *)(pcVar36 + -8) = 0x1417c1951;
      pcVar20 = (code *)pdb_140de26b0(pcVar36 + 0x28);
      if (pcVar20 == (code *)0x0) {
        *(undefined8 *)param_1 = 1;
        return param_1;
      }
      goto code_r0x0001417c1861;
    case 2:
code_r0x0001417c18de:
      *(undefined8 *)(pcVar36 + -8) = 0x1417c18e8;
      pcVar20 = (code *)pdb_140de26b0(pcVar36 + 0x28);
      if (pcVar20 == (code *)0x0) {
        *(undefined8 *)param_1 = 2;
        return param_1;
      }
      goto code_r0x0001417c1861;
    case 3:
code_r0x0001417c1901:
      *(undefined8 *)(pcVar36 + -8) = 0x1417c190b;
      pcVar20 = (code *)pdb_140de26b0(pcVar36 + 0x28);
      if (pcVar20 == (code *)0x0) {
        *(undefined8 *)param_1 = 3;
        return param_1;
      }
      goto code_r0x0001417c1861;
    case 4:
      pcVar36[-8] = -0x37;
      pcVar36[-7] = '\x18';
      pcVar36[-6] = '|';
      pcVar36[-5] = 'A';
      pcVar36[-4] = '\x01';
      pcVar36[-3] = '\0';
      pcVar36[-2] = '\0';
      pcVar36[-1] = '\0';
      pcVar20 = (code *)pdb_140de26b0(pcVar36 + 0x28);
      if (pcVar20 == (code *)0x0) {
        *(undefined8 *)param_1 = 4;
        return param_1;
      }
      goto code_r0x0001417c1861;
    case 5:
      builtin_strncpy(pcVar36 + -8,"t\x19|A\x01",6);
      pcVar36[-2] = '\0';
      pcVar36[-1] = '\0';
      pcVar20 = (code *)pdb_140de26b0(pcVar36 + 0x28);
      if (pcVar20 == (code *)0x0) {
        *(undefined8 *)param_1 = 5;
        return param_1;
      }
      goto code_r0x0001417c1861;
    case 6:
      pcVar36[-8] = -0x59;
      pcVar36[-7] = '\x19';
      pcVar36[-6] = '|';
      pcVar36[-5] = 'A';
      pcVar36[-4] = '\x01';
      pcVar36[-3] = '\0';
      pcVar36[-2] = '\0';
      pcVar36[-1] = '\0';
      pdb_141bebeb0(param_1,pcVar36 + 0x28,&UNK_143336d88,1);
      return param_1;
    case 7:
code_r0x0001417c1924:
      UNRECOVERED_JUMPTABLE = param_1;
      *(undefined8 *)(pcVar36 + -8) = 0x1417c192e;
      pcVar20 = (code *)pdb_140de26b0(pcVar36 + 0x28);
      param_1 = UNRECOVERED_JUMPTABLE;
      if (pcVar20 == (code *)0x0) {
        *(undefined8 *)UNRECOVERED_JUMPTABLE = 7;
code_r0x0001417c1946:
        return UNRECOVERED_JUMPTABLE;
      }
code_r0x0001417c1861:
      *(code **)(param_1 + 8) = pcVar20;
      *(undefined8 *)param_1 = 8;
      return param_1;
    case 8:
code_r0x0001417c1a66:
      UNRECOVERED_JUMPTABLE = (code *)((ulonglong)pcVar21 & 0xffffffff);
      param_3 = param_3 + -4;
      pcVar21 = param_2;
      if (param_3 < (code *)0xa) {
        param_4 = (code *)&UNK_143337738;
        goto code_r0x0001417c1a7d;
      }
      break;
    case 9:
    case 0xc:
    case 0xe:
    case 0xf:
      UNK_143337721 = UNK_143337721 + cVar10;
      bVar48 = UNK_143337721 == '\0';
      pcVar36 = (char *)&uStack_90;
code_r0x0001417c1b72:
      pcVar21 = param_2;
      if (bVar48) {
code_r0x0001417c1b74:
        UNRECOVERED_JUMPTABLE[1] = (code)0x7;
code_r0x0001417c1b84:
        pcVar21 = (code *)0x0;
code_r0x0001417c1b86:
        *UNRECOVERED_JUMPTABLE = SUB81(pcVar21,0);
        return UNRECOVERED_JUMPTABLE;
      }
      break;
    case 10:
      pcVar21 = param_2;
      if (0xfffffffebccc88e7 < uVar19 || bVar50) {
        cVar9 = (code)in((short)param_2);
        *unaff_RDI = cVar9;
        pbVar2 = (byte *)((ulonglong)(uint)(*(int *)(&UNK_14333774b + uVar19) * -0x49f0bbf6) - 0x7d)
        ;
        *pbVar2 = *pbVar2 | (byte)(*(int *)(&UNK_14333774b + uVar19) * -0x49f0bbf6);
        UNRECOVERED_JUMPTABLE = (code *)swi(1);
        UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      break;
    case 0xb:
      bVar50 = (*(ulonglong *)(param_2 + 5) ^ 0x776f646e69576567 | 0x143337718) == 0;
code_r0x0001417c1ab9:
      pcVar21 = param_2;
      if (bVar50) {
code_r0x0001417c1abf:
        UNRECOVERED_JUMPTABLE[1] = (code)0x0;
        goto code_r0x0001417c1b84;
      }
      break;
    case 0xd:
      pcVar43 = param_1 + 4;
      out(*(undefined4 *)param_1,(short)param_2);
code_r0x0001417c1b1a:
      out(*(undefined4 *)pcVar43,(short)param_2);
      if (bVar50) goto code_r0x0001417c1b86;
code_r0x0001417c1b1e:
      pcVar36 = (char *)(ulonglong)(uint)(*(int *)(unaff_RBX + 0x57) * 0xa334869);
      bVar48 = pcVar21 == (code *)0x0;
      pcVar21 = param_2;
      if (*(int *)(param_2 + 8) == 0x776f646e && bVar48) {
        UNRECOVERED_JUMPTABLE[1] = (code)0x1;
        goto code_r0x0001417c1b84;
      }
      break;
    case 0x10:
code_r0x0001417c1af8:
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)UNRECOVERED_JUMPTABLE);
code_r0x0001417c1afc:
      pcVar21 = param_2;
      pcVar36 = pcVar25;
      if (*(int *)(param_2 + 3) == 0x72657474 && *(int *)param_2 == 0x74756c43) {
        UNRECOVERED_JUMPTABLE[1] = (code)0x6;
        goto code_r0x0001417c1b84;
      }
      break;
    case 0x11:
      param_3 = pcVar21;
code_r0x0001417c1a7d:
      pcVar21 = param_4 + *(int *)(param_4 + (longlong)param_3 * 4);
code_r0x0001417c1a84:
      UNRECOVERED_JUMPTABLE = (code *)(*pcVar21)(pcVar21);
      return UNRECOVERED_JUMPTABLE;
    case 0x12:
      break;
    case 0x13:
      if (bVar50) {
        if (((int)param_2 != 0) && (*param_2 != (code)0x12)) {
code_r0x0001417c1c24:
          builtin_strncpy(pcVar36 + -8,"j\x1c|A\x01",6);
          pcVar36[-2] = '\0';
          pcVar36[-1] = '\0';
          uVar15 = pdb_142deedc0(param_2,pcVar36 + 0x2f,&UNK_143396738);
          *(undefined8 *)(param_1 + 8) = uVar15;
          *(undefined4 *)param_1 = 1;
          return param_1;
        }
        uVar15 = 0x200000000;
      }
      else {
        (&stack0xfffffffffffffee8)[(longlong)UNRECOVERED_JUMPTABLE] = 0;
        if (SUB81(param_2,0) != *param_2) goto code_r0x0001417c1c24;
        uVar15 = 0x300000000;
      }
      *(undefined8 *)param_1 = uVar15;
      return param_1;
    case 0x14:
      goto code_r0x0001417c1bba;
    case 0x15:
                    /* WARNING: Could not emulate address calculation at 0x0001417c1be3 */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE =
           (code *)(*(code *)(&UNK_143337760 +
                             *(int *)(&UNK_143337760 + (longlong)UNRECOVERED_JUMPTABLE * 4)))
                             (&UNK_143337760,*(undefined4 *)(pcVar36 + 0x38));
      return UNRECOVERED_JUMPTABLE;
    case 0x16:
      builtin_strncpy(pcVar36 + -8,"\x11\x1e|A\x01",6);
      pcVar36[-2] = '\0';
      pcVar36[-1] = '\0';
      uVar15 = pdb_142deedc0(param_2,pcVar36 + 0x37);
      *(undefined8 *)(param_1 + 8) = uVar15;
      *(undefined4 *)param_1 = 2;
      return param_1;
    case 0x17:
      if (((bVar50) && (param_2[4] == (code)0x61)) && (param_2[5] == (code)0x64)) {
code_r0x0001417c1eac:
        pcVar36 = pcVar25;
        if (param_2[6] == (code)0x65) {
code_r0x0001417c1eb6:
          pcVar36 = pcVar25;
          if ((param_2[7] == (code)0x53) && (param_2[8] == (code)0x68)) goto code_r0x0001417c1eca;
        }
      }
      goto LAB_1417c1f58;
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x21:
      return param_1;
    case 0x20:
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    case 0x22:
      if (bVar48) {
        *(char *)(uVar19 + 0x152867e92) = *(char *)(uVar19 + 0x152867e92) + cVar10;
        bVar48 = true;
        if ((POPCOUNT(*(uint *)(uVar19 + 0xc3337718) & (uint)unaff_RBX & 0xff) & 1U) == 0) {
code_r0x0001417c1ecb:
          if (!bVar48) {
code_r0x0001417c1ecd:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          bVar26 = (byte)((ulonglong)param_2 >> 8) | (byte)UNRECOVERED_JUMPTABLE[0x75];
          pcVar25 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                                     CONCAT11(bVar26,(char)param_2));
          if ((char)bVar26 < '\x01') {
            *UNRECOVERED_JUMPTABLE =
                 (code)((char)*UNRECOVERED_JUMPTABLE + (char)UNRECOVERED_JUMPTABLE);
            if (pcVar25[1] == 'o') {
code_r0x0001417c1e67:
              *(undefined2 *)param_1 = 0;
              return param_1;
            }
          }
          else if ((POPCOUNT(bVar26) & 1U) == 0) {
            *UNRECOVERED_JUMPTABLE =
                 (code)((char)*UNRECOVERED_JUMPTABLE + (char)UNRECOVERED_JUMPTABLE);
            if (((*pcVar25 == 'Y') && (pcVar25[1] == 'e')) && (pcVar25[2] == 's')) {
              *(undefined2 *)param_1 = 0x100;
              return param_1;
            }
          }
          else if (bVar26 == 0) goto code_r0x0001417c1ee0;
        }
        else {
          pcVar25 = pcVar36 + -8;
          pcVar36[-8] = '\x0f';
          pcVar36[-7] = -0x7b;
          pcVar36[-6] = -0x72;
          pcVar36[-5] = '\0';
          pcVar36[-4] = '\0';
          pcVar36[-3] = '\0';
          pcVar36[-2] = '\0';
          pcVar36[-1] = '\0';
          *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
code_r0x0001417c1eca:
          pcVar36 = pcVar25;
          if ((param_2[9] == (code)0x61) && (param_2[10] == (code)0x70)) {
            cVar9 = param_2[0xb];
joined_r0x0001417c1f56:
            if (cVar9 == (code)0x65) {
code_r0x0001417c1ee0:
              *(undefined2 *)param_1 = 0x200;
              return param_1;
            }
          }
        }
      }
      else if (bVar50) goto code_r0x0001417c1eb6;
LAB_1417c1f58:
      *(undefined8 *)(pcVar36 + -8) = 0x1417c1f61;
      pdb_140f35800(&cStack_b8);
      uStack_a0 = pcStack_b0;
code_r0x0001417c1f7a:
      *(undefined8 *)(pcVar36 + -8) = 0x1417c1f7f;
      uVar15 = pdb_142d8f140();
      *(undefined8 *)(param_1 + 8) = uVar15;
code_r0x0001417c1f84:
      *param_1 = (code)0x1;
code_r0x0001417c1f87:
      if (0 < (longlong)CONCAT71(uStack_b7,cStack_b8)) {
        *(undefined8 *)(pcVar36 + -8) = 0x1417c1f9f;
        pub_1406abac0((byte *)uStack_a0,CONCAT71(uStack_b7,cStack_b8),1);
      }
      return param_1;
    case 0x23:
      goto code_r0x0001417c1f7a;
    case 0x24:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2e:
      pcVar36[-8] = -0x69;
      pcVar36[-7] = ' ';
      pcVar36[-6] = '|';
      pcVar36[-5] = 'A';
      pcVar36[-4] = '\x01';
      pcVar36[-3] = '\0';
      pcVar36[-2] = '\0';
      pcVar36[-1] = '\0';
      uVar15 = pdb_142d8f140(param_2,param_3,&UNK_1433368f0,4);
      *(undefined8 *)(&UNK_143337720 + uVar19) = uVar15;
      *UNRECOVERED_JUMPTABLE = (code)0x1;
      return UNRECOVERED_JUMPTABLE;
    case 0x2d:
      goto code_r0x0001417c1f87;
    case 0x2f:
code_r0x0001417c1fbf:
      uVar16 = *(ulonglong *)(pcVar43 + -0x20);
      if (0 < (longlong)uVar16) {
        pbVar2 = *(byte **)(pcVar43 + -8);
        *(undefined8 *)(pcVar36 + -8) = 0x1417c1fd7;
        pub_1406abac0(pbVar2,uVar16,1);
        UNRECOVERED_JUMPTABLE = extraout_RAX;
      }
      return UNRECOVERED_JUMPTABLE;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x36:
      *(int *)UNRECOVERED_JUMPTABLE = *(int *)UNRECOVERED_JUMPTABLE + (int)UNRECOVERED_JUMPTABLE;
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
    case 0x35:
      *(char *)(uVar19 + 0x1b8f4b060) = *(char *)(uVar19 + 0x1b8f4b060) + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x33:
      param_2 = (code *)(ulonglong)CONCAT11(0xb8,SUB81(param_2,0));
      goto pdb_140f679a0;
    case 0x34:
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    default:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x43:
    case 0x45:
      return UNRECOVERED_JUMPTABLE;
    case 0x48:
      *(code **)(pcVar36 + -8) = pcVar43;
      pcVar36 = pcVar36 + -0x28;
      pcVar43 = param_2 + 0x40;
      UNRECOVERED_JUMPTABLE = (code *)(*(longlong *)(param_2 + 0x30) * 2);
      goto code_r0x0001417c2e2a;
    case 0x4a:
      *param_3 = (code)((char)*param_3 + (char)param_3);
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
code_r0x0001417c2e2a:
      pcVar21 = (code *)0x0;
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        pbVar2 = *(byte **)(*(longlong *)(pcVar43 + -0x18) + 8);
        uVar16 = *(ulonglong *)(pcVar43 + -0x10);
        *(undefined **)(pcVar36 + -8) = &UNK_1417c2e46;
        pub_1406abac0(pbVar2,uVar16,1);
        pcVar21 = extraout_RAX_01;
      }
      return pcVar21;
    case 0x4b:
code_r0x0001417c2dc3:
      *(code **)(pcVar36 + 0x10) = param_2;
      *(code **)(pcVar36 + -8) = pcVar43;
      pcVar36 = pcVar36 + -0x28;
      pcVar43 = param_2 + 0x40;
      UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0x28);
      param_2 = *(code **)(UNRECOVERED_JUMPTABLE + 0x10);
code_r0x0001417c2de6:
      if (param_2 != (code *)0x0) {
        pbVar2 = *(byte **)(pcVar43 + -0x10);
        *(undefined **)(pcVar36 + -8) = &UNK_1417c2dfe;
        pub_1406abac0(pbVar2,(longlong)param_2 << 5,8);
        UNRECOVERED_JUMPTABLE = extraout_RAX_00;
      }
      return UNRECOVERED_JUMPTABLE;
    case 0x4c:
      puVar1 = (uint *)(&UNK_1433376eb + uVar19);
      *puVar1 = *puVar1 >> 6 | *puVar1 << 0x1a;
code_r0x0001417c31c2:
      in_R11 = in_R11 | (ulonglong)param_1;
LAB_1417c31c5:
      in_R11 = in_R11 << ((char)param_3 * '\b' & 0x3fU) | *(ulonglong *)(param_2 + 0x38);
      *(ulonglong *)(param_2 + 0x38) = in_R11;
    case 0x4e:
      bVar48 = in_R10 < (code *)0x4;
      bVar50 = in_R10 == (code *)0x4;
      puVar37 = pcVar36;
code_r0x0001417c31dc:
      if (bVar48 || bVar50) {
        pcVar21 = *(code **)(param_2 + 0x18);
        pcVar36 = puVar37;
code_r0x0001417c31f0:
        pcVar21 = (code *)((ulonglong)pcVar21 ^ in_R11);
        param_1 = *(code **)(param_2 + 0x10);
        puVar38 = pcVar36;
code_r0x0001417c31f7:
        UNRECOVERED_JUMPTABLE = param_1 + *(longlong *)param_2;
        unaff_RDI = pcVar21 + *(longlong *)(param_2 + 8);
        param_1 = (code *)((longlong)param_1 << 0xd | (ulonglong)param_1 >> 0x33);
        pcVar21 = (code *)((longlong)pcVar21 << 0x10 | (ulonglong)pcVar21 >> 0x30);
        puVar39 = puVar38;
code_r0x0001417c320c:
        uVar16 = (ulonglong)param_1 ^ (ulonglong)UNRECOVERED_JUMPTABLE;
        pcVar21 = (code *)((ulonglong)pcVar21 ^ (ulonglong)unaff_RDI);
        unaff_RDI = unaff_RDI + uVar16;
        UNRECOVERED_JUMPTABLE =
             pcVar21 + ((longlong)UNRECOVERED_JUMPTABLE << 0x20 |
                       (ulonglong)UNRECOVERED_JUMPTABLE >> 0x20);
        *(ulonglong *)(param_2 + 0x10) = (uVar16 << 0x11 | uVar16 >> 0x2f) ^ (ulonglong)unaff_RDI;
        puVar40 = puVar39;
code_r0x0001417c3227:
        *(ulonglong *)(param_2 + 0x18) =
             ((longlong)pcVar21 << 0x15 | (ulonglong)pcVar21 >> 0x2b) ^
             (ulonglong)UNRECOVERED_JUMPTABLE;
        unaff_RDI = (code *)((longlong)unaff_RDI << 0x20 | (ulonglong)unaff_RDI >> 0x20);
        *(code **)(param_2 + 8) = unaff_RDI;
        *(ulonglong *)param_2 = (ulonglong)UNRECOVERED_JUMPTABLE ^ in_R11;
        puVar22 = (undefined4 *)puVar40;
code_r0x0001417c3240:
        if (param_3 == (code *)0x8) {
          param_3 = (code *)0x4;
          in_R10 = (code *)0x0;
          UNRECOVERED_JUMPTABLE = (code *)0x4;
          pcVar21 = (code *)0x5;
code_r0x0001417c3259:
          puVar22 = &uStack_90;
          pcVar43 = pcVar21 + -0x3f + (longlong)unaff_RDI;
          uVar13 = *(uint *)pcVar43;
          *(uint *)pcVar43 = *(uint *)pcVar43 + (uint)pcVar21;
          pcVar36 = (char *)&uStack_90;
          if (CARRY4(uVar13,(uint)pcVar21)) {
LAB_1417c3260:
            param_4 = (code *)((ulonglong)param_4 |
                              (ulonglong)
                              *(ushort *)
                               (UNRECOVERED_JUMPTABLE +
                               (longlong)((undefined1 *)((longlong)puVar22 + (longlong)in_R10) + 4))
                              << ((char)UNRECOVERED_JUMPTABLE * '\b' & 0x3fU));
            UNRECOVERED_JUMPTABLE = (code *)((ulonglong)UNRECOVERED_JUMPTABLE | 2);
            pcVar36 = (char *)puVar22;
          }
        }
        else {
          param_3 = param_3 + -4;
          UNRECOVERED_JUMPTABLE = (code *)0x0;
          param_4 = (code *)0x0;
          pcVar36 = (char *)puVar22;
          if ((code *)0x1 < param_3) goto LAB_1417c3260;
        }
        if (UNRECOVERED_JUMPTABLE < param_3) {
          in_R10 = in_R10 + (longlong)UNRECOVERED_JUMPTABLE;
code_r0x0001417c3286:
          uVar13 = (int)UNRECOVERED_JUMPTABLE << 3;
          UNRECOVERED_JUMPTABLE = (code *)(ulonglong)uVar13;
          param_4 = (code *)((ulonglong)param_4 |
                            (ulonglong)(byte)(pcVar36 + 4)[(longlong)in_R10] <<
                            ((byte)uVar13 & 0x3f));
        }
        *(code **)(param_2 + 0x38) = param_4;
      }
      else {
        param_3 = param_3 + 4;
      }
      *(code **)(param_2 + 0x40) = param_3;
code_r0x0001417c329f:
      return UNRECOVERED_JUMPTABLE;
    case 0x4d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x50:
      pcVar23 = (code *)CONCAT71(0x1433377,in_stack_50ccddc09 & 0x18);
      iVar14 = uStack_68._1_4_ + 1;
      uStack_68._0_5_ = CONCAT41(iVar14,(undefined1)uStack_68);
code_r0x0001417c32d1:
      pcVar21 = param_2;
      if ((code *)0x1 < pcVar23) {
        param_4 = param_3;
      }
      param_2 = (code *)&UNK_143337848;
      param_3 = (code *)(longlong)*(int *)(&UNK_143337848 + (longlong)param_4 * 4);
      goto code_r0x0001417c32e8;
    case 0x51:
code_r0x0001417c3347:
      *(undefined8 *)(pcVar36 + -8) = 0x1417c335e;
      UNRECOVERED_JUMPTABLE = (code *)pdb_140f66090(pcVar21,&UNK_143336a6b,5,pcVar36 + 0x30);
      return UNRECOVERED_JUMPTABLE;
    case 0x52:
      goto code_r0x0001417c337c;
    case 0x53:
      *(int *)(pcVar36 + 0x20) = (int)UNRECOVERED_JUMPTABLE;
      pcVar36[-8] = '0';
      pcVar36[-7] = '3';
      pcVar36[-6] = '|';
      pcVar36[-5] = 'A';
      pcVar36[-4] = '\x01';
      pcVar36[-3] = '\0';
      pcVar36[-2] = '\0';
      pcVar36[-1] = '\0';
      UNRECOVERED_JUMPTABLE = (code *)pdb_140f66090(&UNK_143337718,&UNK_143336a64,7,pcVar36 + 0x30);
      return UNRECOVERED_JUMPTABLE;
    case 0x54:
      *(int *)(param_1 + 99) = *(int *)(param_1 + 99) + 0x43337718;
code_r0x0001417c32e8:
                    /* WARNING: Could not recover jumptable at 0x0001417c32eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE = (code *)(*(param_3 + (longlong)param_2))(pcVar21);
      return UNRECOVERED_JUMPTABLE;
    case 0x55:
      return UNRECOVERED_JUMPTABLE;
    case 0x56:
code_r0x0001417c337c:
      *(undefined8 *)(pcVar36 + -8) = 0x1417c338c;
      UNRECOVERED_JUMPTABLE = (code *)pdb_140f66090();
      return UNRECOVERED_JUMPTABLE;
    case 0x57:
      if (bVar48) {
        UNRECOVERED_JUMPTABLE = *(code **)(uVar19 + 0x17bf7fa60);
        builtin_strncpy(pcVar36 + -8,"53|A\x01",6);
        pcVar36[-2] = '\0';
        pcVar36[-1] = '\0';
        UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
      }
code_r0x0001417c3335:
      return UNRECOVERED_JUMPTABLE;
    case 0x58:
code_r0x0001417c34cf:
      *(ulonglong *)(pcVar36 + 0x28) = (ulonglong)(pcVar36 + 0x40) & 0xffffffff;
      *(undefined8 *)(pcVar36 + 0x20) = 2;
    case 0x5c:
code_r0x0001417c34ef:
      *(undefined8 *)(pcVar36 + -8) = 0x1417c34fd;
      UNRECOVERED_JUMPTABLE = (code *)pdb_140f66e50(UNRECOVERED_JUMPTABLE);
      return UNRECOVERED_JUMPTABLE;
    case 0x59:
code_r0x0001417c356a:
      *(undefined8 *)(pcVar36 + -8) = 0x1417c3572;
      UNRECOVERED_JUMPTABLE = (code *)pdb_140f66090(UNRECOVERED_JUMPTABLE);
      return UNRECOVERED_JUMPTABLE;
    case 0x5a:
code_r0x0001417c3519:
      pcVar21 = param_2;
      param_2 = (code *)(ulonglong)
                        (((int)UNRECOVERED_JUMPTABLE - 0xf272b4U ^ 0x8d4801b7) + 0x1b735f3);
      if (pcVar20 != (code *)0x0) {
        param_2 = param_4;
      }
      goto pdb_140f679a0;
    case 0x5b:
      param_2 = (code *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffff);
      goto pdb_140f679a0;
    case 0x5d:
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    case 0x5e:
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    case 0x5f:
    case 0x60:
    case 0x61:
      uRam00000000e5637560 = (undefined1)((ulonglong)UNRECOVERED_JUMPTABLE >> 8);
      param_1 = (code *)CONCAT71((int7)((ulonglong)param_1 >> 8),(char)param_1 + '\x01');
      UNRECOVERED_JUMPTABLE = (code *)(ulonglong)uRama1a7fe48a1e9fe48;
      param_2[-0x5e] = (code)((char)param_2[-0x5e] + 1);
      cVar10 = uStack_f8._2_1_ + '\x01';
      uStack_f8._0_3_ = CONCAT12(cVar10,(undefined2)uStack_f8);
      *param_2 = (code)((char)*param_2 - 1);
    case 0x62:
    case 99:
    case 100:
    case 0x65:
      UNRECOVERED_JUMPTABLE[0x2ffe48a1] = (code)((char)UNRECOVERED_JUMPTABLE[0x2ffe48a1] - 1);
      uRama20cfe48a275fe48 = SUB81(UNRECOVERED_JUMPTABLE,0);
      uRama1e9fe48a1c6fe48 = uRama20cfe48a275fe48;
      unaff_RDI[0x52fe48a1] = (code)((char)unaff_RDI[0x52fe48a1] + 1);
      param_1[-0x5d] = (code)((char)param_1[-0x5d] - 1);
      param_1[-0x5c] = (code)((char)param_1[-0x5c] + 1);
      *pcVar36 = *pcVar36 + '\x01';
      UNRECOVERED_JUMPTABLE[0x56fe48a3] = (code)((char)UNRECOVERED_JUMPTABLE[0x56fe48a3] + 1);
      *unaff_RDI = *param_1;
      *unaff_RBX = (code)((char)*unaff_RBX + 1);
      unaff_RDI[1] = param_1[1];
      param_1[-0x5a] = (code)((char)param_1[-0x5a] + 1);
      param_1[-0x5a] = (code)((char)param_1[-0x5a] + 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x0001417c1ba4:
    param_1 = UNRECOVERED_JUMPTABLE;
code_r0x0001417c1ba7:
    UNRECOVERED_JUMPTABLE = param_1;
    *(undefined8 *)(pcVar36 + -8) = 0x1417c1bac;
    uVar15 = pdb_142d8f140(pcVar21);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE + 8) = uVar15;
    *UNRECOVERED_JUMPTABLE = (code)0x1;
code_r0x0001417c1bba:
    return UNRECOVERED_JUMPTABLE;
  case '\x16':
    goto code_r0x0001417c1924;
  case '\x17':
    goto code_r0x0001417c1947;
  case '\x18':
    goto code_r0x0001417c18de;
  case '\x19':
    param_1[-0x3d] = (code)((byte)param_1[-0x3d] & (byte)unaff_RBX);
LAB_1417c1a25:
    *(undefined8 *)(pcVar36 + -8) = 0x1417c1a43;
    uVar15 = pdb_142d8f140(param_2,param_3,&UNK_143336a70,4);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE + 8) = uVar15;
    *UNRECOVERED_JUMPTABLE = (code)0x1;
    return UNRECOVERED_JUMPTABLE;
  case '\x1a':
  case '\x1d':
  case '\x1f':
  case ' ':
    pcVar21 = (code *)(ulonglong)(uVar13 ^ 0x776f646e);
    goto code_r0x0001417c1b1e;
  case '\x1b':
    goto code_r0x0001417c1af8;
  case '\x1c':
    UNRECOVERED_JUMPTABLE[-0x77] = (code)((byte)UNRECOVERED_JUMPTABLE[-0x77] & bVar11);
    puVar42 = (undefined8 *)(pcVar36 + -8);
    *(code **)(pcVar36 + -8) = pcVar43;
    cVar10 = '\a';
    do {
      pcVar43 = pcVar43 + -8;
      puVar42 = puVar42 + -1;
      *puVar42 = *(undefined8 *)pcVar43;
      cVar10 = cVar10 + -1;
    } while ('\0' < cVar10);
    *(char **)(pcVar36 + -0x48) = pcVar36 + -8;
    pcVar36 = pcVar36 + -0x8d91;
    goto code_r0x0001417c1a66;
  case '\x1e':
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + *(longlong *)(&UNK_1433376dd + uVar16);
    pcVar25 = (char *)&uStack_90;
code_r0x0001417c1ad6:
    if ((int)param_4 != 0 || (int)pcVar21 != *(int *)(param_2 + 3)) {
      if (*(int *)(param_2 + 3) == 0x6e726574 && *(int *)param_2 == 0x746e614c) {
        UNRECOVERED_JUMPTABLE[1] = (code)0x4;
        goto code_r0x0001417c1b84;
      }
      goto code_r0x0001417c1afc;
    }
    UNRECOVERED_JUMPTABLE[1] = (code)0x3;
    goto code_r0x0001417c1b84;
  case '!':
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + 0xfc90949;
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)UNRECOVERED_JUMPTABLE);
    *(int *)UNRECOVERED_JUMPTABLE = *(int *)UNRECOVERED_JUMPTABLE + (int)UNRECOVERED_JUMPTABLE;
    goto code_r0x0001417c1abf;
  case '\"':
    return UNRECOVERED_JUMPTABLE;
  case '#':
    UNRECOVERED_JUMPTABLE =
         (code *)CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8),bVar26 + 0x41);
    bVar48 = (int)param_4 == 0 && uVar13 == 0x7372;
    goto code_r0x0001417c1b72;
  case '$':
    goto code_r0x0001417c1ba7;
  case '%':
    *(int *)unaff_RDI = *(int *)unaff_RDI + iVar14;
    goto code_r0x0001417c1b74;
  case '&':
    *(int *)(&UNK_14333768d + uVar16) = *(int *)(&UNK_14333768d + uVar16) + iVar14;
    *UNRECOVERED_JUMPTABLE = (code)((byte)*UNRECOVERED_JUMPTABLE | bVar26);
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar26);
    pcVar21 = param_2;
    goto code_r0x0001417c1ba4;
  case '\'':
    return UNRECOVERED_JUMPTABLE;
  case '(':
    *(uint *)(UNRECOVERED_JUMPTABLE + 1) = *(uint *)(UNRECOVERED_JUMPTABLE + 1) | 0x80e0ffc8;
code_r0x0001417c1e5a:
    cVar10 = (char)UNRECOVERED_JUMPTABLE;
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
    UNRECOVERED_JUMPTABLE[0xf6f017a] = (code)((char)UNRECOVERED_JUMPTABLE[0xf6f017a] + cVar10);
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
    param_1[-0x39] = (code)((char)param_1[-0x39] + (char)((ulonglong)UNRECOVERED_JUMPTABLE >> 8));
    halt_baddata();
  case ')':
  case '*':
  case '+':
  case ',':
  case '-':
  case '.':
  case '/':
  case '0':
  case '2':
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(uint)(int)(short)UNRECOVERED_JUMPTABLE;
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar26);
    UNRECOVERED_JUMPTABLE[0xf68087a] = (code)((char)UNRECOVERED_JUMPTABLE[0xf68087a] + bVar26);
    bVar48 = (POPCOUNT(*(uint *)(param_1 + -0x80000000) & uVar13 & 0xff) & 1U) == 0;
    goto code_r0x0001417c1ecb;
  case '1':
    return UNRECOVERED_JUMPTABLE;
  case '3':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '4':
    pbVar2 = (byte *)((longlong)&uStack_7c + (longlong)param_1 * 2 + 2);
    *pbVar2 = *pbVar2 | (byte)((ulonglong)pcVar21 >> 8);
    if ((((UNK_1433376dd == 'o') && (UNK_1433376de == 's')) && (UNK_1433376df == 'u')) &&
       (cVar9 = UNK_1433376e1, UNK_1433376e0 == 'r')) goto joined_r0x0001417c1f56;
    goto LAB_1417c1f58;
  case '5':
    goto code_r0x0001417c1f5d;
  case '6':
  case '7':
  case '8':
  case '9':
  case ':':
  case ';':
  case '<':
  case '=':
  case '?':
    *(char **)(pcVar36 + 0x10) = &UNK_1433376d4;
    *(code **)(pcVar36 + -8) = pcVar43;
    *(code **)(pcVar36 + -0x10) = param_1;
    pcVar36 = pcVar36 + -0x38;
    pcVar43 = (code *)&UNK_143337714;
    goto code_r0x0001417c1fbf;
  case '>':
    if (!bVar48) {
      UNRECOVERED_JUMPTABLE[-0x73] = (code)((char)UNRECOVERED_JUMPTABLE[-0x73] - bVar11);
      puVar34 = (undefined8 *)(pcVar36 + -8);
      pcVar36 = pcVar36 + -8;
      *puVar34 = 0x40;
      goto code_r0x0001417c1fbf;
    }
    do {
      bVar26 = (char)UNRECOVERED_JUMPTABLE + (char)UNRECOVERED_JUMPTABLE[0x75750b7a] + bVar48;
      bVar48 = false;
      bVar11 = bVar26 | 0x80;
      UNRECOVERED_JUMPTABLE =
           (code *)(CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8),bVar26) | 0x80);
      if ((POPCOUNT(bVar11) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pcVar21 = pcVar21 + -1;
    } while (pcVar21 != (code *)0x0 && bVar11 != 0);
    goto code_r0x0001417c1f5d;
  case '@':
    *(int *)(UNRECOVERED_JUMPTABLE + 0x8468948) =
         *(int *)(UNRECOVERED_JUMPTABLE + 0x8468948) + 0x433376d4;
    goto code_r0x0001417c1f84;
  case 'A':
  case 'B':
  case 'C':
  case 'G':
code_r0x0001417c2ca6:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  case 'D':
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + -0x73;
    *(uint *)UNRECOVERED_JUMPTABLE =
         *(uint *)UNRECOVERED_JUMPTABLE >> 1 |
         (uint)((*(uint *)UNRECOVERED_JUMPTABLE & 1) != 0) << 0x1f;
    goto pdb_140f679a0;
  case 'E':
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  case 'F':
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  default:
    (&UNK_14333768c)[uVar16] = (&UNK_14333768c)[uVar16] | bVar26;
    *(int *)UNRECOVERED_JUMPTABLE = *(int *)UNRECOVERED_JUMPTABLE + iVar14;
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar26);
code_r0x0001417c2d5b:
    uVar16 = 1;
    uVar15 = *(undefined8 *)(pcVar36 + 0x40);
    puVar35 = pcVar36 + 0x48;
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + 8);
    goto code_r0x0001406abac0;
  case 'T':
  case 'V':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 'Y':
    *(undefined4 *)(pcVar36 + 0x10) = 0x433376d4;
    goto code_r0x0001417c2dc3;
  case '[':
    *(undefined **)(pcVar36 + -8) = &UNK_1417c2de6;
    UNRECOVERED_JUMPTABLE = (code *)func_0x000151ccb92e();
    goto code_r0x0001417c2de6;
  case '\\':
    *(undefined **)(pcVar36 + -8) = &UNK_1417c2d84;
    pdb_14098ae50();
    if (*(longlong *)(pcStack_b0 + 0x10) == 0) {
      return pcStack_b0;
    }
    param_2 = (code *)(*(longlong *)(pcStack_b0 + 0x10) << 5);
    uVar16 = 8;
    uVar15 = *(undefined8 *)(pcVar36 + 0x40);
    puVar35 = pcVar36 + 0x48;
    UNRECOVERED_JUMPTABLE = uStack_a8;
code_r0x0001406abac0:
    *(undefined8 *)(puVar35 + -8) = uVar15;
    *(code **)(puVar35 + -0x10) = param_1;
    pcVar43 = UNRECOVERED_JUMPTABLE;
    if (0x10 < uVar16) {
      pcVar43 = *(code **)(UNRECOVERED_JUMPTABLE + -8);
    }
    *(undefined **)(puVar35 + -0x40) = &UNK_140f3c37e;
    uVar15 = GetProcessHeap(UNRECOVERED_JUMPTABLE,param_2);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)HeapFree(uVar15,0,pcVar43);
    return UNRECOVERED_JUMPTABLE;
  case ']':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '^':
    goto code_r0x0001417c31f0;
  case '_':
    in_R11 = in_R11 | (ulonglong)
                      *(ushort *)(pcVar36 + CONCAT71((int7)((ulonglong)pcVar21 >> 8),1) * 4 + 4) <<
                      (bVar26 * '\b' & 0x3f);
code_r0x0001417c31ac:
    UNRECOVERED_JUMPTABLE = (code *)((ulonglong)UNRECOVERED_JUMPTABLE | 2);
    if (UNRECOVERED_JUMPTABLE < param_1) {
      pbVar2 = (byte *)(pcVar36 + 4 + (longlong)UNRECOVERED_JUMPTABLE);
      uVar13 = (int)UNRECOVERED_JUMPTABLE << 3;
      UNRECOVERED_JUMPTABLE = (code *)(ulonglong)uVar13;
      param_1 = (code *)((ulonglong)*pbVar2 << ((byte)uVar13 & 0x3f));
      goto code_r0x0001417c31c2;
    }
    goto LAB_1417c31c5;
  case '`':
    goto code_r0x0001417c31c2;
  case 'a':
    goto code_r0x0001417c3286;
  case 'b':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 'c':
    _UNK_143337679 = _UNK_143337679 << 0xb;
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  case 'd':
    goto code_r0x0001417c32d1;
  case 'e':
    goto code_r0x0001417c329f;
  case 'f':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 'g':
    goto code_r0x0001417c3335;
  case 'h':
    pbVar2 = &UNK_1433376d3 + uVar16;
    *pbVar2 = *pbVar2 << 1 | (char)*pbVar2 < '\0';
    pcVar21 = (code *)(&UNK_1433376d3 + uVar16);
    if (pcVar21 == (code *)0x0 || bVar49) {
      *(int *)(pcVar36 + 0x30) = iVar14;
      *(undefined **)(pcVar36 + 0x20) = &UNK_143336f88;
      goto code_r0x0001417c337c;
    }
    *(int *)(pcVar36 + 0x30) = iVar14;
    *(undefined **)(pcVar36 + 0x20) = &UNK_143336fe8;
    goto code_r0x0001417c3347;
  case 'i':
code_r0x0001417c348e:
    pcVar21 = UNRECOVERED_JUMPTABLE;
    goto pdb_140f679a0;
  case 'j':
    *(uint *)(UNRECOVERED_JUMPTABLE + -0x73) = *(int *)(UNRECOVERED_JUMPTABLE + -0x73) + uVar13;
    pcVar20 = pcVar21;
    goto code_r0x0001417c3519;
  case 'k':
    UNRECOVERED_JUMPTABLE = (code *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff28);
    goto code_r0x0001417c34cf;
  case 'l':
    goto code_r0x0001417c34ef;
  case 'm':
    pcVar21 = UNRECOVERED_JUMPTABLE;
    goto pdb_140f679a0;
  case 'n':
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  case 'o':
    goto code_r0x0001417c356a;
  case 'p':
  case 'q':
  case 'r':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 's':
  case 't':
  case 'u':
  case 'v':
    UNK_1433376d4 = UNK_1433376d4 + '\x01';
    return UNRECOVERED_JUMPTABLE;
  }
  *(undefined8 *)param_1 = uVar15;
  unaff_RBX[0x48] = (code)((char)unaff_RBX[0x48] + 1);
code_r0x0001417c0648:
  uVar16 = *(ulonglong *)(unaff_RBX + 0x28);
  if (uVar16 < *(ulonglong *)(unaff_RBX + 0x20)) {
    do {
      uVar16 = uVar16 + 1;
      bVar26 = *(byte *)(*(longlong *)(unaff_RBX + 0x18) + -1 + uVar16);
      if ((0x20 < (ulonglong)bVar26) ||
         (((ulonglong)unaff_RDI >> ((ulonglong)bVar26 & 0x3f) & 1) == 0)) {
        if (bVar26 == 0x7d) {
          *(ulonglong *)(unaff_RBX + 0x28) = uVar16;
          return param_1;
        }
        *(undefined8 *)(pcVar36 + 0x28) = 10;
        goto code_r0x0001417c068e;
      }
      *(ulonglong *)(unaff_RBX + 0x28) = uVar16;
    } while (uVar16 != *(ulonglong *)(unaff_RBX + 0x20));
  }
  *(undefined8 *)(pcVar36 + 0x28) = 3;
code_r0x0001417c068e:
  *(undefined8 *)(pcVar36 + -8) = 0x1417c0698;
  uVar15 = pdb_142d855a0(unaff_RBX,pcVar36 + 0x28);
LAB_1417c052b:
  *(undefined8 *)(param_1 + 8) = uVar15;
  *(undefined8 *)param_1 = 8;
  return param_1;
code_r0x0001417c048f:
  *(undefined8 *)(puVar31 + -8) = 0x1417c049a;
  uVar15 = pdb_142d84ef0(param_2,UNRECOVERED_JUMPTABLE);
  goto LAB_1417c052b;
code_r0x0001417c1f5d:
  goto LAB_1417c1f58;
}

