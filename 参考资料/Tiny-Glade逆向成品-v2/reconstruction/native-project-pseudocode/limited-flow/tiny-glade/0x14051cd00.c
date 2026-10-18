// VA 0x14051cd00, PDB extent 23726 bytes
// minidump_unwind::mips::get_caller_frame::async_fn$0<minidump_unwind::symbols::MultiSymbolProvider>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000140525094) overlaps instruction at (ram,0x000140525090)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   minidump_unwind::mips::get_caller_frame::async_fn$0<minidump_unwind::symbols::MultiSymbolProvider>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 23726 */

code * pdb_14051cd00(undefined8 param_1,code *param_2,code *param_3,longlong param_4)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  longlong *plVar36;
  char cVar37;
  byte bVar38;
  undefined1 uVar39;
  uint uVar40;
  undefined4 uVar41;
  uint uVar42;
  longlong lVar43;
  ulonglong uVar44;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *puVar45;
  longlong *plVar46;
  byte *pbVar47;
  byte *pbVar48;
  uint *puVar49;
  uint7 uVar55;
  code *pcVar50;
  undefined1 *puVar51;
  undefined8 uVar52;
  int *piVar53;
  char cVar56;
  char cVar57;
  uint uVar58;
  code *pcVar59;
  ulonglong uVar60;
  char *pcVar61;
  undefined8 *puVar62;
  uint uVar63;
  undefined1 *puVar64;
  undefined *puVar65;
  code *pcVar66;
  longlong lVar67;
  undefined8 uVar68;
  code *unaff_RBX;
  undefined1 *puVar70;
  undefined1 *puVar71;
  undefined1 *puVar72;
  undefined1 *puVar73;
  undefined1 *puVar74;
  undefined1 *puVar75;
  undefined1 *puVar76;
  undefined1 *puVar77;
  undefined1 *puVar78;
  undefined1 *puVar79;
  undefined1 *puVar80;
  undefined1 *puVar81;
  undefined1 *puVar82;
  undefined1 *puVar83;
  undefined1 *puVar84;
  undefined1 *puVar85;
  undefined1 *puVar86;
  undefined1 *puVar87;
  undefined1 *puVar88;
  undefined1 *puVar89;
  undefined8 *puVar90;
  code *pcVar91;
  code *pcVar92;
  ulonglong *puVar93;
  longlong lVar94;
  undefined8 uVar95;
  undefined8 in_R10;
  code *unaff_R12;
  code *unaff_R13;
  code *unaff_R14;
  code *unaff_R15;
  bool bVar96;
  bool bVar97;
  code cVar98;
  uint extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  uint extraout_XMM0_Db;
  uint extraout_XMM0_Dc;
  uint uVar99;
  uint extraout_XMM0_Dd;
  uint uVar100;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined1 auStackX_10 [16];
  undefined8 uStackX_20;
  undefined1 auStack_88 [8];
  undefined8 auStack_80 [4];
  undefined8 auStack_60 [2];
  longlong lStack_50;
  undefined8 uStack_48;
  undefined7 uVar54;
  byte bVar69;
  
  puVar62 = (undefined8 *)&stack0xffffffffffffffc0;
  uStack_48 = 0x14051cd16;
  lVar43 = pdb_142d7c6d0();
  cVar37 = cRam20b085c748000020;
  lVar43 = -lVar43;
  puVar71 = &stack0xffffffffffffffc0 + lVar43;
  puVar64 = &stack0xffffffffffffffc0 + lVar43;
  puVar74 = &stack0xffffffffffffffc0 + lVar43;
  puVar51 = &stack0xffffffffffffffc0 + lVar43;
  puVar79 = &stack0xffffffffffffffc0 + lVar43;
  puVar85 = &stack0xffffffffffffffc0 + lVar43;
  puVar78 = &stack0xffffffffffffffc0 + lVar43;
  puVar73 = &stack0xffffffffffffffc0 + lVar43;
  puVar80 = &stack0xffffffffffffffc0 + lVar43;
  puVar89 = &stack0xffffffffffffffc0 + lVar43;
  puVar87 = &stack0xffffffffffffffc0 + lVar43;
  puVar82 = &stack0xffffffffffffffc0 + lVar43;
  puVar83 = &stack0xffffffffffffffc0 + lVar43;
  puVar86 = &stack0xffffffffffffffc0 + lVar43;
  puVar84 = &stack0xffffffffffffffc0 + lVar43;
  puVar76 = &stack0xffffffffffffffc0 + lVar43;
  puVar88 = &stack0xffffffffffffffc0 + lVar43;
  puVar70 = &stack0xffffffffffffffc0 + lVar43;
  puVar90 = (undefined8 *)(&stack0x00000040 + lVar43);
  *(undefined8 *)(&stack0x00003260 + lVar43) = 0xfffffffffffffffe;
  *(undefined8 *)(&stack0x000030e8 + lVar43) = param_1;
  cVar98 = param_2[0x951];
  pcVar59 = (code *)&UNK_142f6430c;
  uVar44 = (ulonglong)*(int *)(&UNK_142f6430c + (ulonglong)(byte)cVar98 * 4);
  bVar96 = 0xfffffffebd09bcf3 < uVar44;
  UNRECOVERED_JUMPTABLE = (code *)(&UNK_142f6430c + uVar44);
  bVar97 = UNRECOVERED_JUMPTABLE == (code *)0x0;
  *(code **)(&stack0x00003250 + lVar43) = param_2;
  bVar38 = (byte)UNRECOVERED_JUMPTABLE;
  uVar39 = (undefined1)((ulonglong)UNRECOVERED_JUMPTABLE >> 8);
  uVar40 = (uint)UNRECOVERED_JUMPTABLE;
  uVar54 = (undefined7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8);
  cVar57 = (char)param_2;
  bVar69 = (byte)((ulonglong)param_2 >> 8);
  uVar63 = (uint)param_2;
  cVar56 = (char)unaff_RBX;
  iVar2 = (int)puVar90;
  pcVar66 = param_2;
  puVar81 = &stack0xffffffffffffffc0 + lVar43;
  puVar75 = &stack0xffffffffffffffc0 + lVar43;
  puVar72 = &stack0xffffffffffffffc0 + lVar43;
  pcVar92 = param_2;
  pcVar50 = param_3;
  pcVar91 = param_2;
  uVar42 = extraout_XMM0_Da;
  uVar58 = extraout_XMM0_Db;
  uVar99 = extraout_XMM0_Dc;
  uVar100 = extraout_XMM0_Dd;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar98) {
  case (code)0x0:
    param_2[0x950] = (code)0x0;
    uVar52 = *(undefined8 *)(param_2 + 0x940);
    *(uint *)(param_2 + 0x930) = *(uint *)(param_2 + 0x940);
    *(uint *)(param_2 + 0x934) = *(uint *)(param_2 + 0x944);
    *(uint *)(param_2 + 0x938) = *(uint *)(param_2 + 0x948);
    *(uint *)(param_2 + 0x93c) = *(uint *)(param_2 + 0x94c);
    pcVar66 = (code *)(&stack0x00002710 + lVar43);
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051cd88;
    pub_142e32760(pcVar66,uVar52,600);
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051cd94;
    pdb_140753310(param_2);
    param_2 = *(code **)(&stack0x00003250 + lVar43);
    param_2[0x950] = (code)0x1;
    *(undefined8 *)(param_2 + 0x260) = 2;
    unaff_R13 = param_2 + 8;
    unaff_RBX = *(code **)(param_2 + 0x938);
    *(code **)(&stack0x00003240 + lVar43) = param_2 + 0x960;
    if (*param_2 == (code)0x0) {
      *(code **)(param_2 + 0xc30) = unaff_R13;
      *(code **)(param_2 + 0xc38) = unaff_RBX;
      UNRECOVERED_JUMPTABLE = param_2 + 0xc46;
      param_2[0xc46] = (code)0x0;
      *(undefined2 *)(param_2 + 0xc44) = 0;
      plVar46 = plRam0000000143ca3d50;
      lVar94 = *_DAT_143ca4b08;
      *(code **)(&stack0x00003258 + lVar43) = UNRECOVERED_JUMPTABLE;
      if (lVar94 == 0) {
        bVar38 = *(byte *)(plRam0000000143ca3d50 + 2);
        pcVar66 = (code *)(ulonglong)bVar38;
        if (2 < bVar38) {
          *(code **)(&stack0x000031b8 + lVar43) = UNRECOVERED_JUMPTABLE;
          *(undefined8 *)(&stack0x000031b0 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x1405202ac;
          uVar42 = pdb_142db8070(plRam0000000143ca3d50);
          pcVar66 = (code *)(ulonglong)uVar42;
          UNRECOVERED_JUMPTABLE = *(code **)(&stack0x00003258 + lVar43);
          if ((char)uVar42 != '\0') goto code_r0x00014051d4f2;
          goto code_r0x00014051d319;
        }
        if (bVar38 == 0) goto code_r0x00014051d319;
code_r0x00014051d4f2:
        lVar94 = *plVar46;
        *(code **)(&stack0x000031b8 + lVar43) = UNRECOVERED_JUMPTABLE;
        *(undefined8 *)(&stack0x000031b0 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d50f;
        cVar37 = pdb_140dd7f60(lVar94);
        if (cVar37 == '\0') goto code_r0x00014051d319;
        lVar94 = *plVar46;
        lVar67 = *(longlong *)(lVar94 + 0x38);
        if (lVar67 == 0) {
          *(undefined8 *)(&stack0x000031b8 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(undefined8 *)(&stack0x000031b0 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520679;
          pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f63700);
          goto code_r0x0001405216a5;
        }
        uVar41 = *(undefined4 *)(lVar94 + 0x40);
        uVar8 = *(undefined4 *)(lVar94 + 0x44);
        uVar9 = *(undefined4 *)(lVar94 + 0x48);
        uVar10 = *(undefined4 *)(lVar94 + 0x4c);
        *(undefined8 *)(&stack0x00002710 + lVar43) = *(undefined8 *)(lVar94 + 0x30);
        *(longlong *)(&stack0x00002718 + lVar43) = lVar67;
        *(undefined4 *)(&stack0x00002720 + lVar43) = uVar41;
        *(undefined4 *)(&stack0x00002724 + lVar43) = uVar8;
        *(undefined4 *)(&stack0x00002728 + lVar43) = uVar9;
        *(undefined4 *)(&stack0x0000272c + lVar43) = uVar10;
        *(undefined8 *)(&stack0x00002730 + lVar43) = 0;
        *(undefined **)(&stack0x00003168 + lVar43) = &UNK_142f631e0;
        *(undefined8 *)(&stack0x00003170 + lVar43) = 0x15;
        *(undefined1 **)(&stack0x000031d8 + lVar43) = &stack0x00002710 + lVar43;
        *(undefined1 **)(&stack0x000031e0 + lVar43) = &stack0x00003168 + lVar43;
        *(undefined **)(&stack0x000031e8 + lVar43) = &UNK_142f62e58;
        *(undefined1 **)(&stack0x000031c0 + lVar43) = &stack0x000031d8 + lVar43;
        *(undefined8 *)(&stack0x000031c8 + lVar43) = 1;
        *(longlong *)(&stack0x000031d0 + lVar43) = lVar94 + 0x30;
        *(undefined8 *)(&stack0x000031b8 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
        *(undefined8 *)(&stack0x000031b0 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d5e2;
        puVar51 = &stack0x000031c0 + lVar43;
        pdb_140dd9020();
        if ((*_DAT_143ca4ab0 == 0) &&
           (4 < *(ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90))) {
          lVar94 = *plVar46;
          uVar41 = *(undefined4 *)(lVar94 + 0x20);
          uVar8 = *(undefined4 *)(lVar94 + 0x24);
          uVar9 = *(undefined4 *)(lVar94 + 0x28);
          uVar10 = *(undefined4 *)(lVar94 + 0x2c);
          *(undefined8 *)(&stack0x000031f0 + lVar43) = 5;
          *(undefined4 *)(&stack0x000031f8 + lVar43) = uVar41;
          *(undefined4 *)(&stack0x000031fc + lVar43) = uVar8;
          *(undefined4 *)(&stack0x00003200 + lVar43) = uVar9;
          *(undefined4 *)(&stack0x00003204 + lVar43) = uVar10;
          *(undefined8 *)(&stack0x000031b8 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(undefined8 *)(&stack0x000031b0 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d643;
          uVar52 = pdb_140f33290();
          pcVar66 = *(code **)(puVar51 + 0x18);
          *(undefined8 *)(&stack0x000031b8 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(undefined8 *)(&stack0x000031b0 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d676;
          cVar37 = (*pcVar66)(uVar52,&stack0x000031f0 + lVar43);
          if (cVar37 != '\0') {
            *(undefined8 *)(&stack0x000019b0 + lVar43) = *(undefined8 *)(&stack0x00003200 + lVar43);
            *(undefined4 *)(&stack0x000019a0 + lVar43) = *(undefined4 *)(&stack0x000031f0 + lVar43);
            *(undefined4 *)(&stack0x000019a4 + lVar43) = *(undefined4 *)(&stack0x000031f4 + lVar43);
            *(undefined4 *)(&stack0x000019a8 + lVar43) = *(undefined4 *)(&stack0x000031f8 + lVar43);
            *(undefined4 *)(&stack0x000019ac + lVar43) = *(undefined4 *)(&stack0x000031fc + lVar43);
            *(undefined8 *)(&stack0x000031b8 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
            *(undefined8 *)(&stack0x000031b0 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
            *(undefined1 **)(&stack0xffffffffffffffe0 + lVar43) = &stack0x000031c0 + lVar43;
            *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d6cd;
            pdb_140dd7f80(lVar94,uVar52,puVar51,&stack0x000019a0 + lVar43);
          }
        }
      }
      else {
code_r0x00014051d319:
        plVar46 = plRam0000000143ca3d50;
        if ((*_DAT_143ca4ab0 == 0) &&
           (4 < *(ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90))) {
          unaff_R14 = (code *)*plRam0000000143ca3d50;
          uVar42 = *(uint *)(unaff_R14 + 0x20);
          uVar58 = *(uint *)(unaff_R14 + 0x24);
          uVar99 = *(uint *)(unaff_R14 + 0x28);
          uVar100 = *(uint *)(unaff_R14 + 0x2c);
          *(undefined8 *)(&stack0x00003108 + lVar43) = 5;
          *(uint *)(&stack0x00003110 + lVar43) = uVar42;
          *(uint *)(&stack0x00003114 + lVar43) = uVar58;
          *(uint *)(&stack0x00003118 + lVar43) = uVar99;
          *(uint *)(&stack0x0000311c + lVar43) = uVar100;
          *(undefined8 *)(&stack0x000031b8 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(undefined8 *)(&stack0x000031b0 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d381;
          unaff_R15 = (code *)pdb_140f33290();
          UNRECOVERED_JUMPTABLE = *(code **)(pcVar66 + 0x18);
          *(undefined8 *)(&stack0x000031b8 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(undefined8 *)(&stack0x000031b0 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d3b4;
          cVar37 = (*UNRECOVERED_JUMPTABLE)(unaff_R15,&stack0x00003108 + lVar43);
          if (cVar37 != '\0') {
            lVar94 = *plVar46;
            lVar67 = *(longlong *)(lVar94 + 0x38);
            if (lVar67 == 0) {
              *(undefined8 *)(&stack0x000031b8 + lVar43) =
                   *(undefined8 *)(&stack0x00003258 + lVar43);
              *(undefined8 *)(&stack0x000031b0 + lVar43) =
                   *(undefined8 *)(&stack0x00003240 + lVar43);
              *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520794;
              pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f63700);
              goto code_r0x0001405216a5;
            }
            uVar52 = *(undefined8 *)(lVar94 + 0x40);
            uVar95 = *(undefined8 *)(lVar94 + 0x48);
            *(undefined8 *)(&stack0x00002710 + lVar43) = *(undefined8 *)(lVar94 + 0x30);
            *(longlong *)(&stack0x00002718 + lVar43) = lVar67;
            *(undefined8 *)(&stack0x00002720 + lVar43) = uVar52;
            *(undefined8 *)(&stack0x00002728 + lVar43) = uVar95;
            *(undefined8 *)(&stack0x00002730 + lVar43) = 0;
            *(undefined **)(&stack0x000031c0 + lVar43) = &UNK_142f631e0;
            *(undefined8 *)(&stack0x000031c8 + lVar43) = 0x15;
            *(undefined1 **)(&stack0x000031f0 + lVar43) = &stack0x00002710 + lVar43;
            *(undefined1 **)(&stack0x000031f8 + lVar43) = &stack0x000031c0 + lVar43;
            *(undefined **)(&stack0x00003200 + lVar43) = &UNK_142f62e58;
            *(undefined1 **)(&stack0x000031d8 + lVar43) = &stack0x000031f0 + lVar43;
            *(undefined8 *)(&stack0x000031e0 + lVar43) = 1;
            *(longlong *)(&stack0x000031e8 + lVar43) = lVar94 + 0x30;
            UNRECOVERED_JUMPTABLE = *(code **)(&stack0x00003118 + lVar43);
            goto code_r0x00014051d463;
          }
        }
      }
      goto code_r0x00014051d6ce;
    }
    *(code **)(param_2 + 0xc38) = unaff_R13;
    *(code **)(param_2 + 0xc40) = unaff_RBX;
    pcVar50 = param_2 + 0xc4a;
    param_2[0xc4a] = (code)0x0;
code_r0x00014051cef6:
    *(undefined2 *)(param_2 + 0xc48) = 0;
    plVar46 = plRam0000000143ca3d50;
    lVar94 = *_DAT_143ca4b08;
    *(code **)(&stack0x00003258 + lVar43) = pcVar50;
    if (lVar94 == 0) {
      bVar38 = *(byte *)(plRam0000000143ca3d50 + 2);
      pcVar66 = (code *)(ulonglong)bVar38;
      if (2 < bVar38) {
        *(code **)(&stack0x00003198 + lVar43) = pcVar50;
        *(undefined8 *)(&stack0x00003190 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x1405202e4;
        uVar42 = pdb_142db8070(plRam0000000143ca3d50);
        pcVar66 = (code *)(ulonglong)uVar42;
        pcVar50 = *(code **)(&stack0x00003258 + lVar43);
        if ((char)uVar42 != '\0') goto code_r0x00014051dbd3;
        goto code_r0x00014051cf19;
      }
      if (bVar38 == 0) goto code_r0x00014051cf19;
code_r0x00014051dbd3:
      lVar94 = *plVar46;
      *(code **)(&stack0x00003198 + lVar43) = pcVar50;
      *(undefined8 *)(&stack0x00003190 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051dbf0;
      cVar37 = pdb_140dd7f60(lVar94);
      if (cVar37 == '\0') goto code_r0x00014051cf19;
      lVar94 = *plVar46;
      lVar67 = *(longlong *)(lVar94 + 0x38);
      if (lVar67 == 0) {
        *(undefined8 *)(&stack0x00003198 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
        *(undefined8 *)(&stack0x00003190 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x1405206ac;
        pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f63700);
        goto code_r0x0001405216a5;
      }
      uVar41 = *(undefined4 *)(lVar94 + 0x40);
      uVar8 = *(undefined4 *)(lVar94 + 0x44);
      uVar9 = *(undefined4 *)(lVar94 + 0x48);
      uVar10 = *(undefined4 *)(lVar94 + 0x4c);
      *(undefined8 *)(&stack0x00002710 + lVar43) = *(undefined8 *)(lVar94 + 0x30);
      *(longlong *)(&stack0x00002718 + lVar43) = lVar67;
      *(undefined4 *)(&stack0x00002720 + lVar43) = uVar41;
      *(undefined4 *)(&stack0x00002724 + lVar43) = uVar8;
      *(undefined4 *)(&stack0x00002728 + lVar43) = uVar9;
      *(undefined4 *)(&stack0x0000272c + lVar43) = uVar10;
      *(undefined8 *)(&stack0x00002730 + lVar43) = 0;
      *(undefined **)(&stack0x00003168 + lVar43) = &UNK_142f631e0;
      *(undefined8 *)(&stack0x00003170 + lVar43) = 0x15;
      *(undefined1 **)(&stack0x000031d8 + lVar43) = &stack0x00002710 + lVar43;
      *(undefined1 **)(&stack0x000031e0 + lVar43) = &stack0x00003168 + lVar43;
      *(undefined **)(&stack0x000031e8 + lVar43) = &UNK_142f62e58;
      *(undefined1 **)(&stack0x000031c0 + lVar43) = &stack0x000031d8 + lVar43;
      *(undefined8 *)(&stack0x000031c8 + lVar43) = 1;
      *(longlong *)(&stack0x000031d0 + lVar43) = lVar94 + 0x30;
      *(undefined8 *)(&stack0x00003198 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
      *(undefined8 *)(&stack0x00003190 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051dcc3;
      puVar51 = &stack0x000031c0 + lVar43;
      pdb_140dd9020();
      if ((*_DAT_143ca4ab0 == 0) &&
         (4 < *(ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90))) {
        lVar94 = *plVar46;
        uVar41 = *(undefined4 *)(lVar94 + 0x20);
        uVar8 = *(undefined4 *)(lVar94 + 0x24);
        uVar9 = *(undefined4 *)(lVar94 + 0x28);
        uVar10 = *(undefined4 *)(lVar94 + 0x2c);
        *(undefined8 *)(&stack0x000031f0 + lVar43) = 5;
        *(undefined4 *)(&stack0x000031f8 + lVar43) = uVar41;
        *(undefined4 *)(&stack0x000031fc + lVar43) = uVar8;
        *(undefined4 *)(&stack0x00003200 + lVar43) = uVar9;
        *(undefined4 *)(&stack0x00003204 + lVar43) = uVar10;
        *(undefined8 *)(&stack0x00003198 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
        *(undefined8 *)(&stack0x00003190 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051dd24;
        uVar52 = pdb_140f33290();
        pcVar66 = *(code **)(puVar51 + 0x18);
        *(undefined8 *)(&stack0x00003198 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
        *(undefined8 *)(&stack0x00003190 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051dd57;
        cVar37 = (*pcVar66)(uVar52,&stack0x000031f0 + lVar43);
        if (cVar37 != '\0') {
          *(undefined8 *)(&stack0x000019b0 + lVar43) = *(undefined8 *)(&stack0x00003200 + lVar43);
          *(undefined4 *)(&stack0x000019a0 + lVar43) = *(undefined4 *)(&stack0x000031f0 + lVar43);
          *(undefined4 *)(&stack0x000019a4 + lVar43) = *(undefined4 *)(&stack0x000031f4 + lVar43);
          *(undefined4 *)(&stack0x000019a8 + lVar43) = *(undefined4 *)(&stack0x000031f8 + lVar43);
          *(undefined4 *)(&stack0x000019ac + lVar43) = *(undefined4 *)(&stack0x000031fc + lVar43);
          *(undefined8 *)(&stack0x00003198 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(undefined8 *)(&stack0x00003190 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
          *(undefined1 **)(&stack0xffffffffffffffe0 + lVar43) = &stack0x000031c0 + lVar43;
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051ddae;
          pdb_140dd7f80(lVar94,uVar52,puVar51,&stack0x000019a0 + lVar43);
        }
      }
    }
    else {
code_r0x00014051cf19:
      plVar46 = plRam0000000143ca3d50;
      if ((*_DAT_143ca4ab0 == 0) &&
         (4 < *(ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90))) {
        pcVar59 = (code *)*plRam0000000143ca3d50;
        uVar42 = *(uint *)(pcVar59 + 0x20);
        uVar58 = *(uint *)(pcVar59 + 0x24);
        uVar99 = *(uint *)(pcVar59 + 0x28);
        uVar100 = *(uint *)(pcVar59 + 0x2c);
        *(undefined8 *)(&stack0x00003108 + lVar43) = 5;
        *(uint *)(&stack0x00003110 + lVar43) = uVar42;
        *(uint *)(&stack0x00003114 + lVar43) = uVar58;
        *(uint *)(&stack0x00003118 + lVar43) = uVar99;
        *(uint *)(&stack0x0000311c + lVar43) = uVar100;
        *(undefined8 *)(&stack0x00003198 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
        *(undefined8 *)(&stack0x00003190 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051cf81;
        uVar52 = pdb_140f33290();
        pcVar66 = *(code **)(pcVar66 + 0x18);
        *(undefined8 *)(&stack0x00003198 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
        *(undefined8 *)(&stack0x00003190 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051cfb4;
        cVar37 = (*pcVar66)(uVar52,&stack0x00003108 + lVar43);
        if (cVar37 != '\0') {
          lVar94 = *plVar46;
          lVar67 = *(longlong *)(lVar94 + 0x38);
          if (lVar67 == 0) {
            *(undefined8 *)(&stack0x00003198 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
            *(undefined8 *)(&stack0x00003190 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
            *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14052075a;
            pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f63700);
            goto code_r0x0001405216a5;
          }
          uVar52 = *(undefined8 *)(lVar94 + 0x40);
          uVar95 = *(undefined8 *)(lVar94 + 0x48);
          *(undefined8 *)(&stack0x00002710 + lVar43) = *(undefined8 *)(lVar94 + 0x30);
          *(longlong *)(&stack0x00002718 + lVar43) = lVar67;
          *(undefined8 *)(&stack0x00002720 + lVar43) = uVar52;
          *(undefined8 *)(&stack0x00002728 + lVar43) = uVar95;
          *(undefined8 *)(&stack0x00002730 + lVar43) = 0;
          *(undefined **)(&stack0x000031c0 + lVar43) = &UNK_142f631e0;
          *(undefined8 *)(&stack0x000031c8 + lVar43) = 0x15;
          *(undefined1 **)(&stack0x000031f0 + lVar43) = &stack0x00002710 + lVar43;
          *(undefined1 **)(&stack0x000031f8 + lVar43) = &stack0x000031c0 + lVar43;
          *(undefined **)(&stack0x00003200 + lVar43) = &UNK_142f62e58;
          *(undefined1 **)(&stack0x000031d8 + lVar43) = &stack0x000031f0 + lVar43;
          *(undefined8 *)(&stack0x000031e0 + lVar43) = 1;
          *(longlong *)(&stack0x000031e8 + lVar43) = lVar94 + 0x30;
          *(undefined8 *)(&stack0x000019b0 + lVar43) = *(undefined8 *)(&stack0x00003118 + lVar43);
          *(undefined4 *)(&stack0x000019a0 + lVar43) = *(undefined4 *)(&stack0x00003108 + lVar43);
          *(undefined4 *)(&stack0x000019a4 + lVar43) = *(undefined4 *)(&stack0x0000310c + lVar43);
          *(undefined4 *)(&stack0x000019a8 + lVar43) = *(undefined4 *)(&stack0x00003110 + lVar43);
          *(undefined4 *)(&stack0x000019ac + lVar43) = *(undefined4 *)(&stack0x00003114 + lVar43);
          *(undefined8 *)(&stack0x00003198 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(undefined8 *)(&stack0x00003190 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
          *(undefined1 **)(&stack0xffffffffffffffe0 + lVar43) = &stack0x000031d8 + lVar43;
          goto code_r0x00014051d0ad;
        }
      }
    }
    goto code_r0x00014051ddaf;
  case (code)0x1:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520420;
    pdb_142dc8570(&UNK_142f636b8);
  case (code)0x2:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520414;
    pdb_142dc8590(&UNK_142f636b8);
  case (code)0x3:
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(byte)param_2[0xc46];
    pcVar66 = param_2 + 0x960;
    goto code_r0x00014051ce92;
  case (code)0x4:
    pcVar50 = param_2 + 0xc4a;
    cVar98 = param_2[0xc4a];
    pcVar66 = param_2 + 0x960;
    pcVar59 = (code *)&UNK_142f64368;
    uVar44 = (ulonglong)*(int *)(&UNK_142f64368 + (ulonglong)(byte)cVar98 * 4);
    bVar96 = 0xfffffffebd09bc97 < uVar44;
    bVar97 = SCARRY8(uVar44,0x142f64368);
    UNRECOVERED_JUMPTABLE = (code *)(&UNK_142f64368 + uVar44);
    *(code **)(&stack0x00003240 + lVar43) = pcVar66;
    bVar38 = (byte)UNRECOVERED_JUMPTABLE;
    uVar40 = (uint)UNRECOVERED_JUMPTABLE;
    uVar54 = (undefined7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8);
    cVar37 = (char)pcVar66;
    puVar64 = &stack0xffffffffffffffc0 + lVar43;
    puVar51 = &stack0xffffffffffffffc0 + lVar43;
    puVar79 = &stack0xffffffffffffffc0 + lVar43;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(cVar98) {
    case (code)0x0:
      unaff_R13 = *(code **)(param_2 + 0xc38);
      unaff_RBX = *(code **)(param_2 + 0xc40);
      goto code_r0x00014051cef6;
    case (code)0x1:
      *(code **)(&stack0x00003060 + lVar43) = pcVar66;
      goto code_r0x0001405204f2;
    case (code)0x2:
      *(code **)(&stack0x00003060 + lVar43) = pcVar66;
      goto code_r0x000140520480;
    case (code)0x3:
      *(code **)(&stack0x00003258 + lVar43) = pcVar50;
      uVar52 = *(undefined8 *)(param_2 + 0xc20);
      lVar94 = *(longlong *)(param_2 + 0xc28);
      goto code_r0x00014051dfab;
    case (code)0x4:
      goto code_r0x00014051ce99;
    case (code)0x5:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x1405204cc;
      pdb_142dc8570();
    case (code)0x6:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14052045a;
      pdb_142dc8590();
    case (code)0x7:
      cVar37 = *(char *)(ulonglong)(uVar40 & 0xbe410000);
      pcVar61 = (char *)(ulonglong)CONCAT31((int3)((uVar40 & 0xbe410000) >> 8),cVar37);
      *pcVar61 = *pcVar61 + cVar37;
      pcVar66 = param_2;
code_r0x00014051d2b5:
      uVar52 = 2;
      goto code_r0x000140520b2b;
    case (code)0x8:
      cRam00000000f07f8f6a = (cRam00000000f07f8f6a - cVar37) - bVar96;
      *param_2 = (code)((char)*param_2 << 1);
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
      goto code_r0x000140520e8a;
    case (code)0x9:
      goto code_r0x0001405211f5;
    case (code)0xa:
      goto code_r0x000140521198;
    case (code)0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xc:
      puVar88 = &stack0xffffffffffffffc0 + lVar43;
      goto code_r0x000140520e8a;
    case (code)0xd:
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38 + bVar96);
      *param_3 = (code)((char)*param_3 + 0x68);
      halt_baddata();
    case (code)0xe:
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38 + bVar96);
      *param_3 = (code)((char)*param_3 + 0x68);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xf:
      pcVar59 = (code *)&UNK_142f6d868;
      *(uint *)UNRECOVERED_JUMPTABLE = *(uint *)UNRECOVERED_JUMPTABLE - uVar40;
      goto code_r0x0001405211e3;
    case (code)0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x11:
      if (-0x142f64369 < (longlong)uVar44) {
        (&stack0x00050bd90d6d)[lVar43] = (&stack0x00050bd90d6d)[lVar43] & 0x68;
        *UNRECOVERED_JUMPTABLE =
             (code)((byte)*UNRECOVERED_JUMPTABLE ^ (byte)((ulonglong)UNRECOVERED_JUMPTABLE >> 8));
        *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
        goto code_r0x000140521198;
      }
      goto code_r0x0001405211cc;
    case (code)0x12:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x13:
      *param_3 = (code)((char)*param_3 + 0x68);
      halt_baddata();
    case (code)0x14:
      bVar96 = *(ulonglong *)(&stack0x00002ad0 + lVar43) < 0x1000;
      break;
    case (code)0x15:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x16:
      bVar96 = *(uint *)(&stack0x00002868 + lVar43) < 0x1000;
      break;
    case (code)0x17:
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar37);
      bVar96 = CARRY1((byte)*UNRECOVERED_JUMPTABLE,bVar38);
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
      break;
    case (code)0x18:
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar37);
      bVar96 = CARRY1((byte)*UNRECOVERED_JUMPTABLE,bVar38);
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
      break;
    case (code)0x19:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x1a:
      uVar42 = *(uint *)(&stack0x00002ac8 + lVar43);
      uVar52 = *(undefined8 *)(*(longlong *)(&stack0x00003250 + lVar43) + 0x930);
      param_2 = (code *)&UNK_142f63118;
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x1405212d5;
      uVar44 = pdb_1407e85f0(uVar52,&UNK_142f63118,2);
      pcVar59 = pcRam0000000143ca3d38;
      if ((uVar44 < uVar42) ||
         ((uVar42 == uVar44 &&
          (*(char *)(*(longlong *)
                      (*(longlong *)(*(longlong *)(&stack0x00003250 + lVar43) + 0x938) + 0x10) +
                    0x6c8) == '\x06')))) {
                    /* WARNING: Could not recover jumptable at 0x00014052130c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar66 = (code *)(*(code *)(&UNK_142f643d0 +
                                    *(int *)(&UNK_142f643d0 +
                                            (ulonglong)*(uint *)(&stack0x00002750 + lVar43) * 4)))()
        ;
        return pcVar66;
      }
      if (*_DAT_143ca4b08 == 0) {
        cVar98 = pcRam0000000143ca3d38[0x10];
        param_2 = (code *)(ulonglong)(byte)cVar98;
        if (2 < (byte)cVar98) {
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14052162b;
          uVar42 = pdb_142db8070(pcRam0000000143ca3d38);
          param_2 = (code *)(ulonglong)uVar42;
          cVar98 = SUB41(uVar42,0);
        }
        if (cVar98 != (code)0x0) {
          uVar52 = *(undefined8 *)pcVar59;
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140521494;
          cVar37 = pdb_140dd7f60(uVar52);
          goto code_r0x000140521495;
        }
      }
      goto code_r0x00014052132c;
    case (code)0x1b:
      *UNRECOVERED_JUMPTABLE = (code)((byte)*UNRECOVERED_JUMPTABLE & bVar38);
      (&UNK_142f642f5)[uVar44] = (&UNK_142f642f5)[uVar44] + 'h';
      *UNRECOVERED_JUMPTABLE = (code)((byte)*UNRECOVERED_JUMPTABLE & bVar38);
      (&UNK_142f642f1)[uVar44] = (&UNK_142f642f1)[uVar44] + 'h';
      UNRECOVERED_JUMPTABLE = (code *)0x0;
      goto code_r0x000140521525;
    case (code)0x1c:
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
      goto code_r0x0001405214d9;
    case (code)0x1d:
      goto code_r0x000140521500;
    case (code)0x1e:
      uVar42 = in((short)pcVar66);
      *(uint *)param_3 = uVar42;
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
      (&UNK_142f642f1)[uVar44] = (&UNK_142f642f1)[uVar44] + 'h';
      puVar90 = (undefined8 *)0x2030;
      param_3 = param_3 + 4;
      goto code_r0x0001405214d9;
    case (code)0x1f:
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
      goto code_r0x000140521500;
    case (code)0x20:
      (&UNK_142f6432f)[uVar44] = (&UNK_142f6432f)[uVar44] + 'h';
code_r0x000140521525:
      puVar51 = (undefined1 *)(ulonglong)((uint)UNRECOVERED_JUMPTABLE & 0x10000);
      *puVar51 = *puVar51;
      goto code_r0x00014052152e;
    case (code)0x21:
      UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(uVar40 + 0x2a4194a);
      goto code_r0x000140521500;
    case (code)0x22:
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
      pcVar61 = &UNK_142f642f1 + uVar44;
      *pcVar61 = *pcVar61 + 'h';
      piVar53 = (int *)((ulonglong)puVar90 & 0xffffffff);
      puVar90 = (undefined8 *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffff);
      if (*pcVar61 == '\0') {
        *(char *)piVar53 = (char)*piVar53 + (char)piVar53;
        goto code_r0x00014052152e;
      }
      *piVar53 = *piVar53 - iVar2;
      *(char *)piVar53 = (char)*piVar53 + (char)piVar53;
      puVar90[0x5ae] = piVar53 + -2;
      uVar52 = puVar90[0x4da];
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x1405215be;
      pub_142e32760(puVar90 + -0xb,cVar56 + 'C',0x6c8);
      goto code_r0x0001405215be;
    case (code)0x23:
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
      goto code_r0x000140522961;
    case (code)0x24:
      goto code_r0x0001405229e0;
    case (code)0x25:
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        *(undefined **)(&stack0x00000030 + lVar43) = &UNK_142f64368;
        *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_140522a0d;
        pdb_1405233b0(&UNK_142f643b8);
        *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_140522a1e;
        pdb_1404b31b0(*(longlong *)(&stack0x00000030 + lVar43) + 0xcd0);
        goto code_r0x000140522a1f;
      }
      if (uVar40 != 4) {
        return UNRECOVERED_JUMPTABLE;
      }
      UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(UNK_142f643c0 - 3);
      *(undefined **)(&stack0x00000030 + lVar43) = &UNK_142f64368;
    case (code)0x26:
      uVar42 = (uint)UNRECOVERED_JUMPTABLE;
      uVar58 = uVar42 + 0xf04d8948;
      UNRECOVERED_JUMPTABLE = (code *)(ulonglong)uVar58;
      if (uVar42 < 0xfb276b8 && uVar58 != 0) {
code_r0x000140522a1f:
        lVar94 = *(longlong *)(&stack0x00000030 + lVar43);
        *(undefined1 *)(lVar94 + 0x41) = 0;
        if (*(char *)(lVar94 + 0x40) != '\0') {
          *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_140522a3a;
          pdb_140522f70(*(longlong *)(&stack0x00000030 + lVar43) + 0x10);
        }
        pcVar66 = *(code **)(&stack0x00000030 + lVar43);
        pcVar66[0x40] = (code)0x0;
        return pcVar66;
      }
code_r0x0001405229e0:
      pcVar66 = *(code **)(&stack0x00000030 + lVar43);
      pcVar59 = (code *)&UNK_142f643f4;
      lVar43 = (longlong)*(int *)(&UNK_142f643f4 + (longlong)UNRECOVERED_JUMPTABLE * 4);
code_r0x0001405229ef:
                    /* WARNING: Could not recover jumptable at 0x0001405229f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar66 = (code *)(*(pcVar59 + lVar43))(pcVar59,pcVar66);
      return pcVar66;
    case (code)0x27:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x28:
      lVar43 = CONCAT71(uVar54,bVar38 + 0x81);
      goto code_r0x0001405229ef;
    case (code)0x29:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x2a:
      *(uint *)UNRECOVERED_JUMPTABLE = *(uint *)UNRECOVERED_JUMPTABLE | uVar40;
      *unaff_RBX = (code)((char)*unaff_RBX + bVar38);
      if (*unaff_RBX == (code)0x0) {
        *(undefined8 *)(&stack0x00000030 + lVar43) = *(undefined8 *)(param_2 + 0x9c0);
        puVar90 = *(undefined8 **)(param_2 + 0x9c8);
        *(undefined8 **)(&stack0x00000038 + lVar43) = puVar90;
        pcVar66 = (code *)*puVar90;
        if (pcVar66 != (code *)0x0) {
          *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_140522c42;
          (*pcVar66)(*(undefined8 *)(&stack0x00000030 + lVar43));
        }
        uVar44 = *(ulonglong *)(*(longlong *)(&stack0x00000038 + lVar43) + 8);
        param_2 = *(code **)(&stack0x00000028 + lVar43);
        if (uVar44 != 0) {
          uVar60 = *(ulonglong *)(*(longlong *)(&stack0x00000038 + lVar43) + 0x10);
          *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_140522cb3;
          pub_1406abac0(*(byte **)(&stack0x00000030 + lVar43),uVar44,uVar60);
        }
      }
      goto code_r0x000140522d51;
    case (code)0x2b:
      *(uint *)(&UNK_142f64369 + uVar44) = *(uint *)(&UNK_142f64369 + uVar44) | 0x758948c8;
      *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_140522b5f;
      cVar37 = func_0xfed30c5e();
      *unaff_RBX = (code)((char)*unaff_RBX + cVar37);
      if (*unaff_RBX != (code)0x0) goto code_r0x000140522d51;
      *(undefined8 *)(&stack0x00000030 + lVar43) = *(undefined8 *)(param_2 + 0xc20);
      puVar90 = *(undefined8 **)(param_2 + 0xc28);
      *(undefined8 **)(&stack0x00000038 + lVar43) = puVar90;
      pcVar66 = (code *)*puVar90;
      if (pcVar66 != (code *)0x0) {
        *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_140522b8e;
        (*pcVar66)(*(undefined8 *)(&stack0x00000030 + lVar43));
      }
      pcVar59 = *(code **)(&stack0x00000030 + lVar43);
      pcVar66 = *(code **)(*(longlong *)(&stack0x00000038 + lVar43) + 8);
      if (pcVar66 != (code *)0x0) {
        pcVar50 = *(code **)(*(longlong *)(&stack0x00000038 + lVar43) + 0x10);
        goto code_r0x000140522ba4;
      }
      goto code_r0x000140522ba9;
    case (code)0x2c:
code_r0x000140522ba4:
      *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_140522ba9;
      pub_1406abac0((byte *)pcVar59,(ulonglong)pcVar66,(ulonglong)pcVar50);
code_r0x000140522ba9:
      pcVar66 = *(code **)(&stack0x00000028 + lVar43);
      param_2 = *(code **)(pcVar66 + 0x988);
      if (param_2 != (code *)0x0) {
        uVar44 = (longlong)param_2 << 4;
code_r0x000140522bc0:
        if (param_2 + uVar44 + 0x21 != (code *)0x0) {
          lVar94 = *(longlong *)(pcVar66 + 0x980);
          *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_140522be6;
          pub_1406abac0((byte *)(lVar94 - (uVar44 + 0x10)),(ulonglong)(param_2 + uVar44 + 0x21),0x10
                       );
        }
      }
      param_2 = pcVar66;
      param_2[0xc44] = (code)0x0;
      param_2[0xc45] = (code)0x0;
code_r0x000140522d51:
      if (*(uint *)(param_2 + 0x260) != 2) {
        *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_140522d6a;
        pdb_1404b6860(*(longlong *)(&stack0x00000028 + lVar43) + 0x260);
      }
      pcVar66 = *(code **)(&stack0x00000028 + lVar43);
      pcVar66[0x950] = (code)0x0;
      return pcVar66;
    case (code)0x2d:
      *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_140522e7d;
      pub_1406abac0(&UNK_142f64368,(ulonglong)pcVar66,(ulonglong)pcVar50);
      param_2 = *(code **)(&stack0x00000028 + lVar43);
    case (code)0x31:
      *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_140522e8d;
      UNRECOVERED_JUMPTABLE = (code *)pdb_1404dee10(param_2 + 0x960);
      *(undefined2 *)(param_2 + 0xc44) = 0;
code_r0x000140522e9c:
      return UNRECOVERED_JUMPTABLE;
    case (code)0x2e:
      goto code_r0x000140522e9c;
    case (code)0x2f:
      LOCK();
      bVar69 = (&stack0x000142f64328)[lVar43];
      (&stack0x000142f64328)[lVar43] = bVar38;
      UNRECOVERED_JUMPTABLE = (code *)CONCAT71(uVar54,bVar69);
      UNLOCK();
    case (code)0x30:
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)UNRECOVERED_JUMPTABLE);
      UNRECOVERED_JUMPTABLE[-0x7d] = (code)((char)UNRECOVERED_JUMPTABLE[-0x7d] + 0x68);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x32:
      *(undefined8 **)((longlong)&uStack_48 + lVar43) = puVar90;
      *(code **)((longlong)&lStack_50 + lVar43) = param_2;
      pcVar66 = *(code **)(param_2 + 0x988);
      if (*(int *)(pcVar66 + 0x260) != 2) {
        lVar94 = *(longlong *)(param_2 + 0x988);
        *(undefined **)((longlong)auStack_80 + lVar43) = &UNK_140522ecc;
        pcVar66 = (code *)pdb_1404b6860(lVar94 + 0x260);
      }
      return pcVar66;
    case (code)0x33:
      *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_14052339a;
      pcVar66 = (code *)pdb_140523070();
      return pcVar66;
    case (code)0x34:
      goto code_r0x0001405233c5;
    case (code)0x35:
      pcVar66 = (code *)swi(3);
      pcVar66 = (code *)(*pcVar66)();
      return pcVar66;
    case (code)0x36:
      puVar90 = (undefined8 *)((ulonglong)(auStackX_10 + lVar43) & 0xffffffff);
      *puVar90 = 0xfffffffffffffffe;
      goto code_r0x0001405233c5;
    case (code)0x37:
      return UNRECOVERED_JUMPTABLE;
    case (code)0x38:
      *(undefined1 *)((longlong)UNRECOVERED_JUMPTABLE * 2) =
           *(undefined1 *)((longlong)UNRECOVERED_JUMPTABLE * 2);
      puVar65 = (undefined *)(ulonglong)(uVar63 + 0xc98);
      goto code_r0x0001405233df;
    case (code)0x39:
      *(code **)((longlong)&uStack_48 + lVar43) = unaff_RBX;
      *(undefined **)((longlong)&lStack_50 + lVar43) = &UNK_140523796;
      lVar94 = pdb_142d7c6d0();
      lVar94 = -lVar94;
      puVar64 = (undefined1 *)((longlong)&uStack_48 + lVar94 + lVar43);
      puVar84 = (undefined1 *)((longlong)&uStack_48 + lVar94 + lVar43);
      puVar86 = (undefined1 *)((longlong)&uStack_48 + lVar94 + lVar43);
      puVar85 = (undefined1 *)((longlong)&uStack_48 + lVar94 + lVar43);
      puVar79 = (undefined1 *)((longlong)&uStack_48 + lVar94 + lVar43);
      puVar87 = (undefined1 *)((longlong)&uStack_48 + lVar94 + lVar43);
      puVar51 = (undefined1 *)((longlong)&uStack_48 + lVar94 + lVar43);
      puVar76 = (undefined1 *)((longlong)&uStack_48 + lVar94 + lVar43);
      puVar80 = (undefined1 *)((longlong)&uStack_48 + lVar94 + lVar43);
      puVar89 = (undefined1 *)((longlong)&uStack_48 + lVar94 + lVar43);
      puVar77 = (undefined1 *)((longlong)&uStack_48 + lVar94 + lVar43);
      puVar78 = (undefined1 *)((longlong)&uStack_48 + lVar94 + lVar43);
      puVar88 = (undefined1 *)((longlong)&uStack_48 + lVar94 + lVar43);
      puVar81 = (undefined1 *)((longlong)&uStack_48 + lVar94 + lVar43);
      puVar74 = (undefined1 *)((longlong)&uStack_48 + lVar94 + lVar43);
      puVar73 = (undefined1 *)((longlong)&uStack_48 + lVar94 + lVar43);
      puVar90 = (undefined8 *)(&stack0x00000038 + lVar94 + lVar43);
      *(undefined4 *)(&stack0x00003c68 + lVar94 + lVar43) = unaff_XMM7_Da;
      *(undefined4 *)(&stack0x00003c6c + lVar94 + lVar43) = unaff_XMM7_Db;
      *(undefined4 *)(&stack0x00003c70 + lVar94 + lVar43) = unaff_XMM7_Dc;
      *(undefined4 *)(&stack0x00003c74 + lVar94 + lVar43) = unaff_XMM7_Dd;
      *(undefined4 *)(&stack0x00003c58 + lVar94 + lVar43) = unaff_XMM6_Da;
      *(undefined4 *)(&stack0x00003c5c + lVar94 + lVar43) = unaff_XMM6_Db;
      *(undefined4 *)(&stack0x00003c60 + lVar94 + lVar43) = unaff_XMM6_Dc;
      *(undefined4 *)(&stack0x00003c64 + lVar94 + lVar43) = unaff_XMM6_Dd;
      *(undefined8 *)(&stack0x00003c50 + lVar94 + lVar43) = 0xfffffffffffffffe;
      *(code **)(&stack0x00003b90 + lVar94 + lVar43) = pcVar66;
      pcVar92 = pcVar59 + 0xdb0;
      uVar41 = extraout_XMM0_Da_00;
      if (*(uint *)(pcVar59 + 0xdb0) != 2) {
        pcVar66 = pcVar59 + 0xdc8;
        *(undefined **)((longlong)&lStack_50 + lVar94 + lVar43) = &UNK_1405237e3;
        uVar41 = pdb_140dd8eb0(pcVar92);
      }
      if ((*_DAT_143ca4ab0 == 0) && (lVar67 = *(longlong *)(pcVar59 + 0xdd0), lVar67 != 0)) {
        uVar41 = *(undefined4 *)(lVar67 + 0x14);
        uVar8 = *(undefined4 *)(lVar67 + 0x18);
        uVar9 = *(undefined4 *)(lVar67 + 0x1c);
        *(undefined4 *)(&stack0x00001448 + lVar94 + lVar43) = *(undefined4 *)(lVar67 + 0x10);
        *(undefined4 *)(&stack0x0000144c + lVar94 + lVar43) = uVar41;
        *(undefined4 *)(&stack0x00001450 + lVar94 + lVar43) = uVar8;
        *(undefined4 *)(&stack0x00001454 + lVar94 + lVar43) = uVar9;
        *(undefined1 **)(&stack0x000020c8 + lVar94 + lVar43) = &stack0x00001448 + lVar94 + lVar43;
        *(code **)(&stack0x000020d0 + lVar94 + lVar43) = pdb_1402ed400;
        *(undefined1 **)(&stack0xffffffffffffffd8 + lVar94 + lVar43) =
             &stack0x000020c8 + lVar94 + lVar43;
        pcVar66 = (code *)&UNK_142f63f27;
        *(undefined **)((longlong)&lStack_50 + lVar94 + lVar43) = &UNK_14052384c;
        uVar41 = pdb_140523550(pcVar92,&UNK_142f63f27,0x15,&UNK_142f63f3c);
      }
      *(code **)(&stack0x00003b78 + lVar94 + lVar43) = pcVar92;
      cVar98 = pcVar59[0x60];
      pcVar61 = &UNK_142f6444c;
      uVar44 = (ulonglong)*(int *)(&UNK_142f6444c + (ulonglong)(byte)cVar98 * 4);
      bVar96 = 0xfffffffebd09bbb3 < uVar44;
      UNRECOVERED_JUMPTABLE = (code *)(&UNK_142f6444c + uVar44);
      *(code **)(&stack0x00003c48 + lVar94 + lVar43) = pcVar59;
      cVar37 = (char)UNRECOVERED_JUMPTABLE;
      uVar55 = (uint7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8);
      bVar38 = (byte)((ulonglong)pcVar66 >> 8);
      pcVar50 = UNRECOVERED_JUMPTABLE;
      puVar70 = (undefined1 *)((longlong)&uStack_48 + lVar94 + lVar43);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(cVar98) {
      case (code)0x0:
        pcVar59[0x62] = (code)0x1;
        param_2 = pcRam0000000143ca4008;
        if (*_DAT_143ca4b08 == 0) {
          cVar98 = pcRam0000000143ca4008[0x10];
          pcVar66 = (code *)(ulonglong)(byte)cVar98;
          if (2 < (byte)cVar98) {
            *(undefined **)((longlong)&lStack_50 + lVar94 + lVar43) = &UNK_140523d20;
            uVar42 = pdb_142db8070(pcRam0000000143ca4008);
            pcVar66 = (code *)(ulonglong)uVar42;
            pcVar59 = *(code **)(&stack0x00003c48 + lVar94 + lVar43);
            cVar98 = SUB41(uVar42,0);
          }
          pcVar92 = param_2;
          if (cVar98 != (code)0x0) {
            uVar52 = *(undefined8 *)param_2;
            *(undefined **)((longlong)&lStack_50 + lVar94 + lVar43) = &UNK_140523ad4;
            cVar37 = pdb_140dd7f60(uVar52);
            pcVar59 = *(code **)(&stack0x00003c48 + lVar94 + lVar43);
            if (cVar37 != '\0') {
              lVar67 = *(longlong *)param_2;
              lVar7 = *(longlong *)(lVar67 + 0x38);
              if (lVar7 == 0) {
                *(undefined **)((longlong)&lStack_50 + lVar94 + lVar43) = &UNK_140523dd7;
                pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f62e18);
                break;
              }
              UNRECOVERED_JUMPTABLE = (code *)(lVar67 + 0x30);
              uVar41 = *(undefined4 *)(lVar67 + 0x40);
              uVar8 = *(undefined4 *)(lVar67 + 0x44);
              uVar9 = *(undefined4 *)(lVar67 + 0x48);
              uVar10 = *(undefined4 *)(lVar67 + 0x4c);
              *(undefined8 *)(&stack0x000020c8 + lVar94 + lVar43) = *(undefined8 *)(lVar67 + 0x30);
              *(longlong *)(&stack0x000020d0 + lVar94 + lVar43) = lVar7;
              *(undefined4 *)(&stack0x000020d8 + lVar94 + lVar43) = uVar41;
              *(undefined4 *)(&stack0x000020dc + lVar94 + lVar43) = uVar8;
              *(undefined4 *)(&stack0x000020e0 + lVar94 + lVar43) = uVar9;
              *(undefined4 *)(&stack0x000020e4 + lVar94 + lVar43) = uVar10;
              *(undefined8 *)(&stack0x000020e8 + lVar94 + lVar43) = 0;
              lVar67 = *(longlong *)(pcVar59 + 0x10);
              uVar95 = 0;
              uVar52 = 1;
              if (!SBORROW8(0,*(longlong *)(lVar67 + 0x18))) {
                uVar52 = *(undefined8 *)(lVar67 + 0x20);
                uVar95 = *(undefined8 *)(lVar67 + 0x28);
              }
              *(undefined8 *)(&stack0x00000d78 + lVar94 + lVar43) = uVar52;
              *(undefined8 *)(&stack0x00000d80 + lVar94 + lVar43) = uVar95;
              *(longlong *)(&stack0x00001448 + lVar94 + lVar43) = lVar67 + 0x48;
              *(code **)(&stack0x00001450 + lVar94 + lVar43) = pdb_140f71a50;
              *(undefined1 **)(&stack0x00001458 + lVar94 + lVar43) =
                   &stack0x00000d78 + lVar94 + lVar43;
              *(code **)(&stack0x00001460 + lVar94 + lVar43) = pdb_1402ed400;
              *(undefined **)(&stack0x00003be0 + lVar94 + lVar43) = &UNK_142f62e30;
              *(undefined1 **)(&stack0x00003be8 + lVar94 + lVar43) =
                   &stack0x00001448 + lVar94 + lVar43;
              *(undefined1 **)(&stack0x00002d78 + lVar94 + lVar43) =
                   &stack0x000020c8 + lVar94 + lVar43;
              goto code_r0x000140523ba8;
            }
          }
        }
        pcVar91 = pcRam0000000143ca4008;
        puVar51 = (undefined1 *)((longlong)&uStack_48 + lVar94 + lVar43);
        if ((*_DAT_143ca4ab0 == 0) &&
           (puVar51 = (undefined1 *)((longlong)&uStack_48 + lVar94 + lVar43),
           4 < *(ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90))) {
          param_3 = *(code **)pcRam0000000143ca4008;
          uVar42 = *(uint *)(param_3 + 0x20);
          uVar58 = *(uint *)(param_3 + 0x24);
          uVar99 = *(uint *)(param_3 + 0x28);
          uVar100 = *(uint *)(param_3 + 0x2c);
          *(undefined8 *)(&stack0x00003b60 + lVar94 + lVar43) = 5;
          *(uint *)(&stack0x00003b68 + lVar94 + lVar43) = uVar42;
          *(uint *)(&stack0x00003b6c + lVar94 + lVar43) = uVar58;
          *(uint *)(&stack0x00003b70 + lVar94 + lVar43) = uVar99;
          *(uint *)(&stack0x00003b74 + lVar94 + lVar43) = uVar100;
          *(undefined **)((longlong)&lStack_50 + lVar94 + lVar43) = &UNK_1405238d2;
          unaff_RBX = (code *)pdb_140f33290();
          param_2 = (code *)(&stack0x00003b60 + lVar94 + lVar43);
          UNRECOVERED_JUMPTABLE = *(code **)(pcVar66 + 0x18);
          *(undefined **)((longlong)&lStack_50 + lVar94 + lVar43) = &UNK_1405238e7;
          cVar37 = (*UNRECOVERED_JUMPTABLE)(unaff_RBX);
          bVar97 = cVar37 == '\0';
          unaff_R15 = *(code **)(&stack0x00003c48 + lVar94 + lVar43);
          unaff_R14 = pcVar66;
          goto code_r0x0001405238f1;
        }
        goto code_r0x000140523c7c;
      case (code)0x1:
                    /* WARNING: Subroutine does not return */
        *(undefined **)((longlong)&lStack_50 + lVar94 + lVar43) = &UNK_140523d55;
        pdb_142dc8570(&UNK_142f62e78);
      case (code)0x2:
                    /* WARNING: Subroutine does not return */
        *(undefined **)((longlong)&lStack_50 + lVar94 + lVar43) = &UNK_140523d43;
        pdb_142dc8590(&UNK_142f62e78);
      case (code)0x3:
        UNRECOVERED_JUMPTABLE = pcVar59 + 0x98;
        pcVar92 = pcVar59 + 0x68;
        pcVar61 = &UNK_142f64474;
        iVar2 = *(int *)(&UNK_142f64474 + (ulonglong)(byte)pcVar59[0x98] * 4);
        pcVar50 = (code *)(&UNK_142f64474 + iVar2);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(pcVar59[0x98]) {
        case (code)0x0:
          lVar43 = *(longlong *)(pcVar59 + 0x68);
          uVar52 = *(undefined8 *)(pcVar59 + 0x70);
          uVar95 = *(undefined8 *)(pcVar59 + 0x78);
          goto code_r0x000140523dfb;
        case (code)0x1:
          *(code **)(&stack0x00003b88 + lVar94 + lVar43) = UNRECOVERED_JUMPTABLE;
          goto code_r0x000140523d7b;
        case (code)0x2:
          *(code **)(&stack0x00003b88 + lVar94 + lVar43) = UNRECOVERED_JUMPTABLE;
          puVar65 = &UNK_142f63038;
          goto code_r0x000140523d69;
        case (code)0x3:
          uVar52 = *(undefined8 *)(pcVar59 + 0x88);
          lVar43 = *(longlong *)(pcVar59 + 0x90);
          goto code_r0x000140524104;
        case (code)0x4:
code_r0x000140524615:
                    /* WARNING: Could not recover jumptable at 0x000140524623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pcVar66 = (code *)(*(code *)(&UNK_142f64484 +
                                      *(int *)(&UNK_142f64484 + (longlong)pcVar50 * 4)))();
          return pcVar66;
        case (code)0x5:
          *(undefined **)((longlong)&lStack_50 + lVar94 + lVar43) = &UNK_140525304;
          pdb_142dc7e2a((ulonglong)unaff_RBX & 0xffffffff,param_3);
          goto code_r0x0001405259a8;
        case (code)0x6:
          LOCK();
          *pcVar50 = (code)((char)*pcVar50 + (char)pcVar50);
          UNLOCK();
          goto code_r0x0001405252ab;
        case (code)0x7:
          break;
        case (code)0x8:
          goto code_r0x000140524c45;
        case (code)0x9:
          pcVar66 = *(code **)(&UNK_142f1515d + iVar2);
          *(undefined **)((longlong)&lStack_50 + lVar94 + lVar43) = &UNK_14052524d;
          piVar53 = (int *)(*pcVar66)();
          *(int *)((longlong)piVar53 + -0x73) = *(int *)((longlong)piVar53 + -0x73) + -1;
          *piVar53 = *piVar53 + (int)piVar53;
          *(char *)((longlong)piVar53 + -0x77) =
               *(char *)((longlong)piVar53 + -0x77) + (char)pcVar61;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (code)0xa:
          goto code_r0x000140525215;
        case (code)0xb:
          pcVar66 = *(code **)(&UNK_142f16a5d + iVar2);
          *(undefined **)((longlong)&lStack_50 + lVar94 + lVar43) = &UNK_140525234;
          piVar53 = (int *)(*pcVar66)();
          *(int *)((longlong)piVar53 + -0x73) = *(int *)((longlong)piVar53 + -0x73) + -1;
          *piVar53 = *piVar53 + (int)piVar53;
          *(char *)((longlong)piVar53 + -0x77) =
               *(char *)((longlong)piVar53 + -0x77) + (char)pcVar61;
          goto code_r0x000140524d5a;
        case (code)0xc:
          puVar70 = (undefined1 *)((longlong)&uStack_48 + lVar94 + lVar43);
          goto code_r0x0001405251ed;
        case (code)0xd:
          pcVar66 = *(code **)(&UNK_142f1385d + iVar2);
          *(undefined **)((longlong)&lStack_50 + lVar94 + lVar43) = &UNK_140525266;
          piVar53 = (int *)(*pcVar66)();
          *(int *)((longlong)piVar53 + -0x73) = *(int *)((longlong)piVar53 + -0x73) + -1;
          iVar2 = *piVar53;
          *piVar53 = *piVar53 + (int)piVar53;
          *(char *)((longlong)piVar53 + -0x77) =
               *(char *)((longlong)piVar53 + -0x77) + (char)pcVar61;
          uVar44 = (ulonglong)CONCAT11(0xf0,(char)pcVar61);
          pcVar66 = *(code **)(CONCAT71((int7)((ulonglong)piVar53 >> 8),(char)piVar53 + -0x10) +
                              -0x52517);
          *(undefined **)((longlong)&lStack_50 + lVar94 + lVar43) = &UNK_14052527f;
          piVar53 = (int *)(*pcVar66)(uVar44,(char)iVar2);
          *(int *)((longlong)piVar53 + -0x73) = *(int *)((longlong)piVar53 + -0x73) + -1;
          *piVar53 = *piVar53 + (int)piVar53;
          *(char *)((longlong)piVar53 + -0x77) = *(char *)((longlong)piVar53 + -0x77) + (char)uVar44
          ;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      case (code)0xf:
        *(undefined **)((longlong)&lStack_50 + lVar94 + lVar43) = &UNK_1405252dd;
        pdb_142dc7e2a(uVar41,param_3);
        break;
      case (code)0x4:
        puVar51 = (undefined1 *)(ulonglong)(byte)pcVar59[0xf2];
        goto code_r0x000140523a7a;
      case (code)0x6:
        *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar37);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((longlong)&lStack_50 + lVar94 + lVar43) = &UNK_140523da0;
        pdb_142dc8590(&UNK_142f62f58);
      case (code)0x7:
        *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar37);
code_r0x000140523d7b:
                    /* WARNING: Subroutine does not return */
        *(undefined **)((longlong)&lStack_50 + lVar94 + lVar43) = &UNK_140523d87;
        pdb_142dc8570(&UNK_142f63038);
      case (code)0x8:
        *(uint *)(param_3 + 0x40) = 0;
        goto code_r0x000140523cc9;
      case (code)0x9:
        *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar37 + bVar96);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (code)0xa:
        goto code_r0x000140523a2b;
      case (code)0xb:
        cVar57 = 'L' - bVar38;
        puVar65 = (undefined *)CONCAT71(0x142f644,cVar57);
        lVar67 = CONCAT71(uVar55,cVar37 - (0x4c < bVar38));
        pcVar61 = (char *)((longlong)puVar65 * 5 + -0x53);
        uRame990028a481be802 = (int)UNRECOVERED_JUMPTABLE;
        *pcVar61 = *pcVar61 + cVar57;
        puVar77 = (undefined1 *)((longlong)&lStack_50 + lVar94 + lVar43);
        *(longlong *)((longlong)&lStack_50 + lVar94 + lVar43) = lVar67;
        pcVar61 = (char *)(lVar67 + -0x73);
        *pcVar61 = *pcVar61 + cVar57;
code_r0x000140523d69:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar77 + -8) = &UNK_140523d6e;
        pdb_142dc8590(puVar65);
      case (code)0xc:
        *(code **)((longlong)&lStack_50 + lVar94 + lVar43) = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (code)0xd:
      case (code)0x5:
        puVar51 = (undefined1 *)((ulonglong)uVar55 << 8);
        *puVar51 = *puVar51;
code_r0x000140523a7a:
                    /* WARNING: Could not recover jumptable at 0x000140523a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar66 = (code *)(*(code *)(&UNK_142f64460 +
                                    *(int *)(&UNK_142f64460 + (longlong)puVar51 * 4)))();
        return pcVar66;
      case (code)0xe:
        pcVar66 = (code *)&UNK_142f6444b;
        if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
          *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar37);
          goto code_r0x000140524508;
        }
        param_3 = (code *)0x42f6444b;
        UNRECOVERED_JUMPTABLE = (code *)(ulonglong)uRam0000000000000000;
        puVar51 = (undefined1 *)((longlong)&uStack_48 + lVar94 + lVar43);
        goto code_r0x000140524508;
      case (code)0x10:
        *(int *)(&stack0x00003c28 + lVar94 + lVar43) = (int)pcVar92;
        goto code_r0x000140525280;
      case (code)0x11:
code_r0x0001405252ab:
        cVar37 = (char)pcVar50;
        *pcVar50 = (code)((char)*pcVar50 + cVar37);
        pcVar50[0xf0b8] = (code)((char)pcVar50[0xf0b8] + cVar37);
        *pcVar50 = (code)((char)*pcVar50 + cVar37);
        goto code_r0x000140525299;
      case (code)0x12:
        puVar62 = (undefined8 *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffff);
        pcVar61 = (char *)(((ulonglong)puVar90 & 0xffffffff) * 2);
        *pcVar61 = (*pcVar61 - bVar38) - bVar96;
        pcVar61 = (char *)(((ulonglong)puVar90 & 0xffffffff) - 0x73);
        *pcVar61 = *pcVar61 + 'L';
        uVar42 = (int)puVar90 + 0x2d;
        *(char *)(ulonglong)uVar42 = *(char *)(ulonglong)uVar42 + (char)uVar42;
        goto code_r0x000140524c1b;
      case (code)0x13:
        UNK_142f6444c = UNK_142f6444c + cVar37 + bVar96;
        *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar37);
        goto code_r0x00014052521c;
      case (code)0x14:
        goto code_r0x0001405251ed;
      case (code)0x15:
        *(char *)(uVar44 + 0x153b3cf98) = *(char *)(uVar44 + 0x153b3cf98) + (char)pcVar66;
        UNK_142f64412 = UNK_142f64412 + cVar37;
        pcVar50 = (code *)((ulonglong)pcVar92 & 0xffffffff);
        pcVar92 = (code *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffff);
        *pcVar50 = (code)((char)*pcVar50 + (char)pcVar50);
code_r0x000140525215:
        *pcVar61 = *pcVar61 + (char)pcVar50;
        puVar70 = (undefined1 *)((longlong)&uStack_48 + lVar94 + lVar43);
        goto code_r0x0001405251ed;
      case (code)0x16:
        goto code_r0x0001405251d4;
      case (code)0x17:
        UNK_142f6444c = UNK_142f6444c + cVar37 + bVar96;
        *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar37);
        goto code_r0x000140525235;
      }
      goto code_r0x0001405259a8;
    case (code)0x3a:
code_r0x000140523c65:
      (&UNK_142f642f1)[uVar44] = (&UNK_142f642f1)[uVar44] + 'h';
code_r0x000140523c68:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x3b:
      goto code_r0x000140523c53;
    case (code)0x3c:
      UNK_142f642f3 = UNK_142f642f3 & 0x68;
      puVar87 = (undefined1 *)((longlong)&uStack_48 + lVar43);
      *(code **)((longlong)&uStack_48 + lVar43) = UNRECOVERED_JUMPTABLE;
      cRam000000064ecf5155 = cRam000000064ecf5155 + -0x68;
      *(int *)(&stack0xfffffffffffffff0 + lVar43) = (int)pcVar66;
      goto code_r0x000140523951;
    case (code)0x3d:
      goto code_r0x000140523980;
    case (code)0x3e:
      goto code_r0x000140523997;
    case (code)0x3f:
      goto code_r0x000140523c8c;
    case (code)0x40:
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
      puVar76 = &stack0xffffffffffffffc0 + lVar43;
      goto code_r0x000140523c8c;
    case (code)0x41:
      goto code_r0x000140523c04;
    case (code)0x42:
      unaff_R15 = pcVar66;
      puVar64 = &stack0xffffffffffffffc0 + lVar43;
      if (!bVar97) goto code_r0x000140523c12;
      goto code_r0x000140523c18;
    case (code)0x43:
      goto code_r0x000140523947;
    case (code)0x44:
      goto code_r0x000140523c68;
    case (code)0x45:
      if (!bVar97) {
        *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
        puVar51 = &stack0xffffffffffffffc0 + lVar43;
        goto code_r0x000140523c53;
      }
      pcVar61 = &UNK_142f642f1 + uVar44;
      cVar57 = *pcVar61;
      *pcVar61 = *pcVar61 + 'h';
      cVar56 = (char)((ulonglong)pcVar66 >> 8);
      if (SCARRY1(cVar57,'h') == *pcVar61 < '\0') {
        (&stack0x00050bd90d6d)[lVar43] = (&stack0x00050bd90d6d)[lVar43] & 0x68;
        *(char *)((longlong)UNRECOVERED_JUMPTABLE * 2) =
             *(char *)((longlong)UNRECOVERED_JUMPTABLE * 2) + cVar56;
        goto code_r0x000140523c65;
      }
      pcVar66 = (code *)CONCAT62((int6)((ulonglong)pcVar66 >> 0x10),
                                 CONCAT11(cVar56 + (&stack0x00000047)[lVar43],cVar37));
      puVar76 = &stack0xffffffffffffffc0 + lVar43;
      pcVar59 = unaff_R15;
      goto code_r0x000140523c85;
    case (code)0x46:
code_r0x000140523997:
      UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(uVar40 | 0x8d480000);
      UNRECOVERED_JUMPTABLE[-0x77] = (code)((char)UNRECOVERED_JUMPTABLE[-0x77] + 0x68);
      pcVar59 = (code *)(ulonglong)((uVar40 | 0x8d480000) + 0xd);
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
      puVar64 = &stack0xffffffffffffffc0 + lVar43;
      goto code_r0x000140523980;
    case (code)0x47:
      pcVar66 = pcVar59;
      puVar51 = &stack0xffffffffffffffc0 + lVar43;
      pcVar59 = unaff_R15;
      goto code_r0x000140524508;
    case (code)0x48:
      puVar70 = &stack0xffffffffffffffc0 + lVar43;
      pcVar59 = unaff_R15;
      goto code_r0x0001405251ed;
    case (code)0x49:
      pcVar59 = (code *)(ulonglong)(iVar2 + 0x3410);
      goto code_r0x000140525172;
    case (code)0x4a:
      *(undefined4 *)(&stack0x00001478 + lVar43) = 0x42f64368;
      puVar84 = &stack0xffffffffffffffc0 + lVar43;
      goto code_r0x000140525172;
    case (code)0x4b:
      *unaff_RBX = SUB81((ulonglong)unaff_RBX >> 8,0);
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
      puVar79 = &stack0xffffffffffffffc0 + lVar43;
      puVar62 = puVar90;
      goto code_r0x000140524ad4;
    case (code)0x4c:
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
      goto code_r0x000140525124;
    case (code)0x4d:
      *(undefined4 *)(&stack0x00003c00 + lVar43) = 0x42f64368;
      goto code_r0x0001405250fa;
    case (code)0x4e:
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
      puVar86 = &stack0xffffffffffffffc0 + lVar43;
      goto code_r0x000140525124;
    case (code)0x4f:
      pcVar59 = (code *)(ulonglong)*(uint *)(param_2 + 0x9a8);
      goto code_r0x0001405250e7;
    case (code)0x50:
      goto code_r0x000140525154;
    }
joined_r0x00014052120d:
    if (!bVar96) {
code_r0x0001405211cc:
      pcVar59 = (code *)&UNK_142f643ac;
      lVar94 = (longlong)
               *(int *)(&UNK_142f643ac + ((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffff) * 4);
code_r0x0001405211d9:
      UNRECOVERED_JUMPTABLE = pcVar59 + lVar94;
code_r0x0001405211dc:
                    /* WARNING: Could not recover jumptable at 0x0001405211dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar66 = (code *)(*UNRECOVERED_JUMPTABLE)();
      return pcVar66;
    }
code_r0x000140520eee:
    unaff_RBX = pcRam0000000143ca3d40;
    if (*_DAT_143ca4b08 == 0) {
      cVar98 = pcRam0000000143ca3d40[0x10];
      pcVar66 = (code *)(ulonglong)(byte)cVar98;
      if (2 < (byte)cVar98) {
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14052160f;
        uVar42 = pdb_142db8070(pcRam0000000143ca3d40);
        pcVar66 = (code *)(ulonglong)uVar42;
        if ((char)uVar42 != '\0') goto code_r0x000140521061;
        goto code_r0x000140520f01;
      }
      if (cVar98 == (code)0x0) goto code_r0x000140520f01;
code_r0x000140521061:
      uVar52 = *(undefined8 *)unaff_RBX;
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140521069;
      cVar37 = pdb_140dd7f60(uVar52);
      if (cVar37 == '\0') goto code_r0x000140520f01;
      lVar94 = *(longlong *)unaff_RBX;
      lVar67 = *(longlong *)(lVar94 + 0x38);
      if (lVar67 == 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140521653;
        pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f636e8);
        goto code_r0x0001405216a5;
      }
      uVar41 = *(undefined4 *)(lVar94 + 0x40);
      uVar8 = *(undefined4 *)(lVar94 + 0x44);
      uVar9 = *(undefined4 *)(lVar94 + 0x48);
      uVar10 = *(undefined4 *)(lVar94 + 0x4c);
      *(undefined8 *)(&stack0x000019a0 + lVar43) = *(undefined8 *)(lVar94 + 0x30);
      *(longlong *)(&stack0x000019a8 + lVar43) = lVar67;
      *(undefined4 *)(&stack0x000019b0 + lVar43) = uVar41;
      *(undefined4 *)(&stack0x000019b4 + lVar43) = uVar8;
      *(undefined4 *)(&stack0x000019b8 + lVar43) = uVar9;
      *(undefined4 *)(&stack0x000019bc + lVar43) = uVar10;
      *(undefined8 *)(&stack0x000019c0 + lVar43) = 0;
      *(undefined **)(&stack0x000022d0 + lVar43) = &UNK_142f63188;
      *(undefined8 *)(&stack0x000022d8 + lVar43) = 0x73;
      *(code **)(&stack0x00002510 + lVar43) = param_3;
      *(undefined1 **)(&stack0x00002518 + lVar43) = &stack0x000022d0 + lVar43;
      *(undefined **)(&stack0x00002520 + lVar43) = &UNK_142f62e58;
      *(undefined1 **)(&stack0x000023a0 + lVar43) = &stack0x00002510 + lVar43;
      *(undefined8 *)(&stack0x000023a8 + lVar43) = 1;
      *(longlong *)(&stack0x000023b0 + lVar43) = lVar94 + 0x30;
      param_3 = (code *)(&stack0x000023a0 + lVar43);
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140521119;
      param_2 = param_3;
      pdb_140dd9020();
      if ((*_DAT_143ca4ab0 == 0) &&
         (4 < *(ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90)))
      goto code_r0x000140521140;
    }
    else {
code_r0x000140520f01:
      UNRECOVERED_JUMPTABLE = pcRam0000000143ca3d40;
      if ((*_DAT_143ca4ab0 == 0) &&
         (4 < *(ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90))) {
        lVar94 = *(longlong *)pcRam0000000143ca3d40;
        uVar41 = *(undefined4 *)(lVar94 + 0x20);
        uVar8 = *(undefined4 *)(lVar94 + 0x24);
        uVar9 = *(undefined4 *)(lVar94 + 0x28);
        uVar10 = *(undefined4 *)(lVar94 + 0x2c);
        *(undefined8 *)(&stack0x00002f90 + lVar43) = 5;
        *(undefined4 *)(&stack0x00002f98 + lVar43) = uVar41;
        *(undefined4 *)(&stack0x00002f9c + lVar43) = uVar8;
        *(undefined4 *)(&stack0x00002fa0 + lVar43) = uVar9;
        *(undefined4 *)(&stack0x00002fa4 + lVar43) = uVar10;
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520f4c;
        uVar52 = pdb_140f33290();
        pcVar59 = *(code **)(pcVar66 + 0x18);
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520f61;
        cVar37 = (*pcVar59)(uVar52,&stack0x00002f90 + lVar43);
        if (cVar37 != '\0') {
          lVar67 = *(longlong *)UNRECOVERED_JUMPTABLE;
          lVar7 = *(longlong *)(lVar67 + 0x38);
          if (lVar7 == 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14052166e;
            pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f636e8);
code_r0x0001405216a5:
                    /* WARNING: Does not return */
            pcVar66 = (code *)invalidInstructionException();
            (*pcVar66)();
          }
          uVar95 = *(undefined8 *)(lVar67 + 0x40);
          uVar68 = *(undefined8 *)(lVar67 + 0x48);
          *(undefined8 *)(&stack0x000019a0 + lVar43) = *(undefined8 *)(lVar67 + 0x30);
          *(longlong *)(&stack0x000019a8 + lVar43) = lVar7;
          *(undefined8 *)(&stack0x000019b0 + lVar43) = uVar95;
          *(undefined8 *)(&stack0x000019b8 + lVar43) = uVar68;
          *(undefined8 *)(&stack0x000019c0 + lVar43) = 0;
          *(undefined **)(&stack0x000023a0 + lVar43) = &UNK_142f63188;
          *(undefined8 *)(&stack0x000023a8 + lVar43) = 0x73;
          *(code **)(&stack0x00002610 + lVar43) = param_3;
          *(undefined1 **)(&stack0x00002618 + lVar43) = &stack0x000023a0 + lVar43;
          *(undefined **)(&stack0x00002620 + lVar43) = &UNK_142f62e58;
          *(undefined1 **)(&stack0x00002510 + lVar43) = &stack0x00002610 + lVar43;
          *(undefined8 *)(&stack0x00002518 + lVar43) = 1;
          *(longlong *)(&stack0x00002520 + lVar43) = lVar67 + 0x30;
          *(undefined8 *)(&stack0x00002080 + lVar43) = *(undefined8 *)(&stack0x00002fa0 + lVar43);
          *(undefined4 *)(&stack0x00002070 + lVar43) = *(undefined4 *)(&stack0x00002f90 + lVar43);
          *(undefined4 *)(&stack0x00002074 + lVar43) = *(undefined4 *)(&stack0x00002f94 + lVar43);
          *(undefined4 *)(&stack0x00002078 + lVar43) = *(undefined4 *)(&stack0x00002f98 + lVar43);
          *(undefined4 *)(&stack0x0000207c + lVar43) = *(undefined4 *)(&stack0x00002f9c + lVar43);
          *(undefined1 **)(&stack0xffffffffffffffe0 + lVar43) = &stack0x00002510 + lVar43;
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14052103f;
          pdb_140dd7f80(lVar94,uVar52,pcVar66,&stack0x00002070 + lVar43);
        }
      }
    }
    goto code_r0x000140521542;
  case (code)0x5:
    *(code **)(&stack0x00003248 + lVar43) = param_2 + 0x9ec;
    puVar49 = (uint *)(ulonglong)(byte)param_2[0x9ec];
    pcVar59 = param_2 + 0x960;
    goto code_r0x00014051ce53;
  case (code)0x6:
    *(code **)(&stack0x00003248 + lVar43) = param_2 + 0xa00;
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(byte)param_2[0xa00];
    pcVar59 = param_2 + 0x960;
    goto code_r0x00014051ce0d;
  case (code)0x7:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
code_r0x00014051ce0d:
    *(code **)(&stack0x00003258 + lVar43) = pcVar59;
                    /* WARNING: Could not recover jumptable at 0x00014051ce22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar66 = (code *)(*(code *)(&UNK_142f64328 +
                                *(int *)(&UNK_142f64328 + (longlong)UNRECOVERED_JUMPTABLE * 4)))();
    return pcVar66;
  default:
    UNRECOVERED_JUMPTABLE = (code *)CONCAT71(uVar54,bVar38 + (char)*UNRECOVERED_JUMPTABLE + bVar96);
code_r0x000140520472:
    UNRECOVERED_JUMPTABLE[-0x77] = (code)((char)UNRECOVERED_JUMPTABLE[-0x77] + 0xc);
    pbVar48 = (byte *)((ulonglong)puVar90 & 0xffffffff);
    *pbVar48 = *pbVar48 & bVar69;
    *pbVar48 = *pbVar48 + (char)pbVar48;
code_r0x000140520480:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14052048c;
    pdb_142dc8590(&UNK_142f63778);
  case (code)0x9:
  case (code)0x11:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0xa:
    (&stack0x00050bd90bfd)[lVar43] = (&stack0x00050bd90bfd)[lVar43] & 0xc;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0xb:
code_r0x00014051d0ad:
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d0b5;
    pdb_140dd7f80(pcVar59);
code_r0x00014051ddaf:
    lVar94 = *(longlong *)(unaff_RBX + 0x10);
    *(undefined8 *)(&stack0x00003198 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
    *(undefined8 *)(&stack0x00003190 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
    puVar65 = &UNK_142f63118;
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051ddea;
    uVar44 = pdb_140108ac0(unaff_R13,&UNK_142f63118,2,lVar94 + 0x520);
    if ((uVar44 & 1) == 0) {
      *(undefined8 *)(&stack0x00003240 + lVar43) = 2;
      lVar94 = *(longlong *)(&stack0x00003250 + lVar43);
    }
    else {
      *(code **)(&stack0x00003238 + lVar43) = unaff_R13;
      *(code **)(&stack0x00003230 + lVar43) = param_3;
      *(undefined **)(*(longlong *)(&stack0x00003250 + lVar43) + 0xc30) = puVar65;
      lVar94 = *(longlong *)(unaff_RBX + 0x10);
      uVar52 = *(undefined8 *)(unaff_RBX + 0x18);
      uVar95 = *(undefined8 *)(lVar94 + 0x6a0);
      *(undefined8 *)(&stack0x000030c0 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
      *(undefined8 *)(&stack0x000030b8 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051de45;
      lVar67 = pdb_1407e47d0(uVar52,uVar95);
      if (lVar67 == 0) {
        lVar94 = *(longlong *)(&stack0x00003250 + lVar43);
        param_3 = *(code **)(&stack0x00003230 + lVar43);
code_r0x00014051e33a:
        *(undefined2 *)(lVar94 + 0xc48) = 0;
        *(undefined8 *)(&stack0x00003240 + lVar43) = 2;
      }
      else {
        lVar7 = *(longlong *)(unaff_RBX + 0x30);
        uVar41 = 0;
        if ((lVar7 != 0) && (uVar41 = 0, *(int *)(lVar7 + 0x690) == 1)) {
          uVar41 = *(undefined4 *)(lVar7 + 0x694);
        }
        *(undefined4 *)(&stack0x00003248 + lVar43) = uVar41;
        lVar94 = lVar94 + 0x520;
        *(undefined8 *)(&stack0x000030c0 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
        uVar52 = *(undefined8 *)(&stack0x00003240 + lVar43);
        *(undefined8 *)(&stack0x000030b8 + lVar43) = uVar52;
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051dea4;
        pdb_140754df0(&stack0x00002730 + lVar43,lVar94);
        uVar68 = *(undefined8 *)unaff_RBX;
        uVar3 = *(undefined8 *)(unaff_RBX + 8);
        *(undefined8 *)(&stack0x00002710 + lVar43) = uVar68;
        *(undefined8 *)(&stack0x00002718 + lVar43) = uVar3;
        *(undefined8 *)(&stack0x00002720 + lVar43) = *(undefined8 *)(&stack0x00003238 + lVar43);
        *(longlong *)(&stack0x00002728 + lVar43) = lVar94;
        *(longlong *)(&stack0x00002760 + lVar43) = lVar67;
        *(undefined8 *)(&stack0x00002768 + lVar43) = uVar95;
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051deef;
        pub_142e32760(&stack0x00002770 + lVar43,*(undefined8 *)(&stack0x00003238 + lVar43),600);
        *(undefined4 *)(&stack0x000029c8 + lVar43) = *(undefined4 *)(&stack0x00003248 + lVar43);
        (&stack0x000029cc)[lVar43] = lVar7 != 0;
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051df21;
        pub_142e32760(&stack0x000019a0 + lVar43,&stack0x00002718 + lVar43,0x2b8);
        lVar94 = *(longlong *)(&stack0x00003250 + lVar43);
        *(undefined2 *)(lVar94 + 0xc48) = 0x101;
        *(undefined8 *)(lVar94 + 0x960) = uVar68;
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051df4d;
        pub_142e32760(lVar94 + 0x968,&stack0x000019a0 + lVar43,0x2b8);
        uVar95 = *(undefined8 *)(unaff_RBX + 0x28);
        lVar94 = *(longlong *)(lVar94 + 0x9b0);
        *(undefined8 *)(&stack0x00003188 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
        *(undefined8 *)(&stack0x00003180 + lVar43) = uVar52;
        *(undefined **)(&stack0xffffffffffffffe0 + lVar43) = &UNK_142f63718;
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051df88;
        uVar52 = pdb_14074f0b0(uVar95,lVar94,&UNK_142f62fb0,uVar52);
        param_3 = *(code **)(&stack0x00003230 + lVar43);
        lVar67 = *(longlong *)(&stack0x00003250 + lVar43);
        *(undefined8 *)(lVar67 + 0xc20) = uVar52;
        *(longlong *)(lVar67 + 0xc28) = lVar94;
code_r0x00014051dfab:
        pcVar66 = *(code **)(lVar94 + 0x18);
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051dfb1;
        cVar37 = (*pcVar66)(uVar52,param_3);
        if (cVar37 == '\x02') {
          **(undefined1 **)(&stack0x00003258 + lVar43) = 3;
          **(undefined8 **)(&stack0x000030e8 + lVar43) = 3;
          pcVar66 = (code *)0x4;
          goto code_r0x0001405215e2;
        }
        *(undefined8 *)(&stack0x00003230 + lVar43) =
             *(undefined8 *)(*(longlong *)(&stack0x00003250 + lVar43) + 0xc20);
        puVar4 = *(undefined8 **)(*(longlong *)(&stack0x00003250 + lVar43) + 0xc28);
        *(undefined8 **)(&stack0x00003238 + lVar43) = puVar4;
        pcVar66 = (code *)*puVar4;
        if (pcVar66 != (code *)0x0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e023;
          (*pcVar66)(*(undefined8 *)(&stack0x00003230 + lVar43));
        }
        uVar44 = *(ulonglong *)(*(longlong *)(&stack0x00003238 + lVar43) + 8);
        uVar52 = *(undefined8 *)(&stack0x00003258 + lVar43);
        if (uVar44 != 0) {
          uVar60 = *(ulonglong *)(*(longlong *)(&stack0x00003238 + lVar43) + 0x10);
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e04b;
          pub_1406abac0(*(byte **)(&stack0x00003230 + lVar43),uVar44,uVar60);
        }
        lVar67 = *(longlong *)(&stack0x00003250 + lVar43);
        lVar7 = *(longlong *)(&stack0x00003240 + lVar43);
        if (cVar37 != '\x01') {
          lVar5 = *(longlong *)(lVar7 + 0x28);
          lVar94 = lVar67;
          if (lVar5 != 0) {
            lVar67 = lVar5 * 0x10 + 0x10;
            uVar44 = lVar5 + lVar67 + 0x11;
            if (uVar44 != 0) {
              lVar7 = *(longlong *)(lVar7 + 0x20);
              *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e302;
              pub_1406abac0((byte *)(lVar7 - lVar67),uVar44,0x10);
            }
          }
          goto code_r0x00014051e33a;
        }
        puVar4 = (undefined8 *)(lVar67 + 0x9c0);
        *(undefined8 *)(&stack0x00003188 + lVar43) = uVar52;
        *(longlong *)(&stack0x00003180 + lVar43) = lVar7;
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e08c;
        uVar52 = pdb_1407e85f0(puVar4,&UNK_142f63790,2);
        *(undefined8 *)(&stack0x000030e0 + lVar43) = uVar52;
        *(undefined8 *)(&stack0x00003188 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
        *(longlong *)(&stack0x00003180 + lVar43) = lVar7;
        puVar65 = &UNK_142f63118;
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e0be;
        uVar52 = pdb_1407e85f0(puVar4,&UNK_142f63118,2);
        plVar46 = plRam0000000143ca3d48;
        *(undefined8 *)(&stack0x00003178 + lVar43) = uVar52;
        if (*_DAT_143ca4b08 == 0) {
          bVar38 = *(byte *)(plRam0000000143ca3d48 + 2);
          puVar65 = (undefined *)(ulonglong)bVar38;
          if (2 < bVar38) {
            *(undefined8 *)(&stack0x00003188 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
            *(longlong *)(&stack0x00003180 + lVar43) = lVar7;
            *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520388;
            uVar42 = pdb_142db8070(plRam0000000143ca3d48);
            puVar65 = (undefined *)(ulonglong)uVar42;
            if ((char)uVar42 != '\0') goto code_r0x00014051e9df;
            goto code_r0x00014051e0d9;
          }
          if (bVar38 == 0) goto code_r0x00014051e0d9;
code_r0x00014051e9df:
          lVar94 = *plVar46;
          *(undefined8 *)(&stack0x00003188 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(longlong *)(&stack0x00003180 + lVar43) = lVar7;
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e9fc;
          cVar37 = pdb_140dd7f60(lVar94);
          if (cVar37 == '\0') goto code_r0x00014051e0d9;
          lVar94 = *plVar46;
          lVar5 = *(longlong *)(lVar94 + 0x38);
          if (lVar5 == 0) {
            *(undefined8 *)(&stack0x00003188 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
            *(longlong *)(&stack0x00003180 + lVar43) = lVar7;
            *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x1405207ec;
            pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f63798);
            goto code_r0x0001405216a5;
          }
          uVar41 = *(undefined4 *)(lVar94 + 0x40);
          uVar8 = *(undefined4 *)(lVar94 + 0x44);
          uVar9 = *(undefined4 *)(lVar94 + 0x48);
          uVar10 = *(undefined4 *)(lVar94 + 0x4c);
          *(undefined8 *)(&stack0x00002710 + lVar43) = *(undefined8 *)(lVar94 + 0x30);
          *(longlong *)(&stack0x00002718 + lVar43) = lVar5;
          *(undefined4 *)(&stack0x00002720 + lVar43) = uVar41;
          *(undefined4 *)(&stack0x00002724 + lVar43) = uVar8;
          *(undefined4 *)(&stack0x00002728 + lVar43) = uVar9;
          *(undefined4 *)(&stack0x0000272c + lVar43) = uVar10;
          *(undefined8 *)(&stack0x00002730 + lVar43) = 0;
          *(undefined1 **)(&stack0x000019a0 + lVar43) = &stack0x000030e0 + lVar43;
          *(code **)(&stack0x000019a8 + lVar43) = pdb_140f71410;
          *(undefined1 **)(&stack0x000019b0 + lVar43) = &stack0x00003178 + lVar43;
          *(code **)(&stack0x000019b8 + lVar43) = pdb_140f71410;
          *(undefined **)(&stack0x000031c0 + lVar43) = &UNK_142f63288;
          *(undefined1 **)(&stack0x000031c8 + lVar43) = &stack0x000019a0 + lVar43;
          *(undefined1 **)(&stack0x000031f0 + lVar43) = &stack0x00002710 + lVar43;
          *(undefined1 **)(&stack0x000031f8 + lVar43) = &stack0x000031c0 + lVar43;
          *(undefined **)(&stack0x00003200 + lVar43) = &UNK_142f62e58;
          *(undefined1 **)(&stack0x000031d8 + lVar43) = &stack0x000031f0 + lVar43;
          *(undefined8 *)(&stack0x000031e0 + lVar43) = 1;
          *(longlong *)(&stack0x000031e8 + lVar43) = lVar94 + 0x30;
          *(undefined8 *)(&stack0x00003188 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(longlong *)(&stack0x00003180 + lVar43) = lVar7;
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051eaf9;
          pdb_140331e30(&stack0x000031d8 + lVar43);
        }
        else {
code_r0x00014051e0d9:
          plVar46 = plRam0000000143ca3d48;
          if ((*_DAT_143ca4ab0 == 0) &&
             (4 < *(ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90))) {
            lVar94 = *plRam0000000143ca3d48;
            uVar41 = *(undefined4 *)(lVar94 + 0x20);
            uVar8 = *(undefined4 *)(lVar94 + 0x24);
            uVar9 = *(undefined4 *)(lVar94 + 0x28);
            uVar10 = *(undefined4 *)(lVar94 + 0x2c);
            *(undefined8 *)(&stack0x000030f0 + lVar43) = 5;
            *(undefined4 *)(&stack0x000030f8 + lVar43) = uVar41;
            *(undefined4 *)(&stack0x000030fc + lVar43) = uVar8;
            *(undefined4 *)(&stack0x00003100 + lVar43) = uVar9;
            *(undefined4 *)(&stack0x00003104 + lVar43) = uVar10;
            *(undefined8 *)(&stack0x00003188 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
            *(longlong *)(&stack0x00003180 + lVar43) = lVar7;
            *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e13a;
            uVar52 = pdb_140f33290();
            pcVar66 = *(code **)(puVar65 + 0x18);
            *(undefined8 *)(&stack0x00003188 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
            *(longlong *)(&stack0x00003180 + lVar43) = lVar7;
            *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e166;
            cVar37 = (*pcVar66)(uVar52,&stack0x000030f0 + lVar43);
            if (cVar37 != '\0') {
              lVar5 = *plVar46;
              lVar6 = *(longlong *)(lVar5 + 0x38);
              if (lVar6 == 0) {
                *(undefined8 *)(&stack0x00003188 + lVar43) =
                     *(undefined8 *)(&stack0x00003258 + lVar43);
                *(longlong *)(&stack0x00003180 + lVar43) = lVar7;
                *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520852;
                pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f63798);
                goto code_r0x0001405216a5;
              }
              uVar95 = *(undefined8 *)(lVar5 + 0x40);
              uVar68 = *(undefined8 *)(lVar5 + 0x48);
              *(undefined8 *)(&stack0x00002710 + lVar43) = *(undefined8 *)(lVar5 + 0x30);
              *(longlong *)(&stack0x00002718 + lVar43) = lVar6;
              *(undefined8 *)(&stack0x00002720 + lVar43) = uVar95;
              *(undefined8 *)(&stack0x00002728 + lVar43) = uVar68;
              *(undefined8 *)(&stack0x00002730 + lVar43) = 0;
              *(undefined1 **)(&stack0x000019a0 + lVar43) = &stack0x000030e0 + lVar43;
              *(code **)(&stack0x000019a8 + lVar43) = pdb_140f71410;
              *(undefined1 **)(&stack0x000019b0 + lVar43) = &stack0x00003178 + lVar43;
              *(code **)(&stack0x000019b8 + lVar43) = pdb_140f71410;
              *(undefined **)(&stack0x00003168 + lVar43) = &UNK_142f63288;
              *(undefined1 **)(&stack0x00003170 + lVar43) = &stack0x000019a0 + lVar43;
              *(undefined1 **)(&stack0x000031d8 + lVar43) = &stack0x00002710 + lVar43;
              *(undefined1 **)(&stack0x000031e0 + lVar43) = &stack0x00003168 + lVar43;
              *(undefined **)(&stack0x000031e8 + lVar43) = &UNK_142f62e58;
              *(undefined1 **)(&stack0x000031c0 + lVar43) = &stack0x000031d8 + lVar43;
              *(undefined8 *)(&stack0x000031c8 + lVar43) = 1;
              *(longlong *)(&stack0x000031d0 + lVar43) = lVar5 + 0x30;
              *(undefined8 *)(&stack0x00003200 + lVar43) =
                   *(undefined8 *)(&stack0x00003100 + lVar43);
              *(undefined4 *)(&stack0x000031f0 + lVar43) =
                   *(undefined4 *)(&stack0x000030f0 + lVar43);
              *(undefined4 *)(&stack0x000031f4 + lVar43) =
                   *(undefined4 *)(&stack0x000030f4 + lVar43);
              *(undefined4 *)(&stack0x000031f8 + lVar43) =
                   *(undefined4 *)(&stack0x000030f8 + lVar43);
              *(undefined4 *)(&stack0x000031fc + lVar43) =
                   *(undefined4 *)(&stack0x000030fc + lVar43);
              *(undefined8 *)(&stack0x00003188 + lVar43) =
                   *(undefined8 *)(&stack0x00003258 + lVar43);
              *(longlong *)(&stack0x00003180 + lVar43) = lVar7;
              *(undefined1 **)(&stack0xffffffffffffffe0 + lVar43) = &stack0x000031c0 + lVar43;
              *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e294;
              pdb_140dd7f80(lVar94,uVar52,puVar65,&stack0x000031f0 + lVar43);
            }
          }
        }
        lVar94 = *(longlong *)(&stack0x00003250 + lVar43);
        *(undefined4 *)(&stack0x00003248 + lVar43) = *(undefined4 *)(lVar94 + 0x9fc);
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051eb26;
        pub_142e32760(&stack0x000023a0 + lVar43,lVar94 + 0xa00,0xd0);
        *(undefined8 *)(&stack0x00003258 + lVar43) = *(undefined8 *)(lVar94 + 0xad0);
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051eb4d;
        pub_142e32760(&stack0x00002610 + lVar43,lVar94 + 0xad8,0x100);
        *(undefined8 *)(&stack0x00003238 + lVar43) = *(undefined8 *)(lVar94 + 0xbd8);
        *(undefined8 *)(&stack0x000024a0 + lVar43) = *(undefined8 *)(lVar94 + 0xc10);
        uVar52 = *(undefined8 *)(lVar94 + 0xc08);
        *(undefined8 *)(&stack0x00002490 + lVar43) = *(undefined8 *)(lVar94 + 0xc00);
        *(undefined8 *)(&stack0x00002498 + lVar43) = uVar52;
        uVar52 = *(undefined8 *)(lVar94 + 0xbf8);
        *(undefined8 *)(&stack0x00002480 + lVar43) = *(undefined8 *)(lVar94 + 0xbf0);
        *(undefined8 *)(&stack0x00002488 + lVar43) = uVar52;
        uVar52 = *(undefined8 *)(lVar94 + 0xbe8);
        *(undefined8 *)(&stack0x00002470 + lVar43) = *(undefined8 *)(lVar94 + 0xbe0);
        *(undefined8 *)(&stack0x00002478 + lVar43) = uVar52;
        uVar52 = *(undefined8 *)(lVar67 + 0x9c8);
        uVar95 = *(undefined8 *)(lVar67 + 0x9d0);
        uVar68 = *(undefined8 *)(lVar67 + 0x9d8);
        uVar3 = *(undefined8 *)(lVar67 + 0x9e0);
        uVar31 = *(undefined8 *)(lVar67 + 0x9e8);
        uVar32 = *(undefined8 *)(lVar67 + 0x9ec);
        uVar33 = *(undefined8 *)(lVar67 + 0x9f4);
        *(undefined8 *)(&stack0x00003074 + lVar43) = *puVar4;
        *(undefined8 *)(&stack0x0000307c + lVar43) = uVar52;
        *(undefined8 *)(&stack0x00003084 + lVar43) = uVar95;
        *(undefined8 *)(&stack0x0000308c + lVar43) = uVar68;
        *(undefined8 *)(&stack0x00003094 + lVar43) = uVar3;
        *(undefined8 *)(&stack0x0000309c + lVar43) = uVar31;
        *(undefined8 *)(&stack0x000030a0 + lVar43) = uVar32;
        *(undefined8 *)(&stack0x000030a8 + lVar43) = uVar33;
        uVar52 = *(undefined8 *)(lVar94 + 0x980);
        uVar95 = *(undefined8 *)(lVar94 + 0x988);
        uVar68 = *(undefined8 *)(lVar94 + 0x990);
        uVar3 = *(undefined8 *)(lVar94 + 0x998);
        uVar31 = *(undefined8 *)(lVar94 + 0x9a8);
        *(undefined8 *)(&stack0x00003010 + lVar43) = *(undefined8 *)(lVar94 + 0x9a0);
        *(undefined8 *)(&stack0x00003018 + lVar43) = uVar31;
        *(undefined8 *)(&stack0x00003000 + lVar43) = uVar68;
        *(undefined8 *)(&stack0x00003008 + lVar43) = uVar3;
        *(undefined8 *)(&stack0x00002ff0 + lVar43) = uVar52;
        *(undefined8 *)(&stack0x00002ff8 + lVar43) = uVar95;
        *(undefined2 *)(lVar94 + 0xc48) = 0;
        *(undefined8 *)(&stack0x00003240 + lVar43) = 0;
      }
    }
    *(undefined4 *)(&stack0x00003150 + lVar43) = *(undefined4 *)(&stack0x000030a0 + lVar43);
    *(undefined4 *)(&stack0x00003154 + lVar43) = *(undefined4 *)(&stack0x000030a4 + lVar43);
    *(undefined4 *)(&stack0x00003158 + lVar43) = *(undefined4 *)(&stack0x000030a8 + lVar43);
    *(undefined4 *)(&stack0x0000315c + lVar43) = *(undefined4 *)(&stack0x000030ac + lVar43);
    *(undefined4 *)(&stack0x00003140 + lVar43) = *(undefined4 *)(&stack0x00003090 + lVar43);
    *(undefined4 *)(&stack0x00003144 + lVar43) = *(undefined4 *)(&stack0x00003094 + lVar43);
    *(undefined4 *)(&stack0x00003148 + lVar43) = *(undefined4 *)(&stack0x00003098 + lVar43);
    *(undefined4 *)(&stack0x0000314c + lVar43) = *(undefined4 *)(&stack0x0000309c + lVar43);
    *(undefined4 *)(&stack0x00003130 + lVar43) = *(undefined4 *)(&stack0x00003080 + lVar43);
    *(undefined4 *)(&stack0x00003134 + lVar43) = *(undefined4 *)(&stack0x00003084 + lVar43);
    *(undefined4 *)(&stack0x00003138 + lVar43) = *(undefined4 *)(&stack0x00003088 + lVar43);
    *(undefined4 *)(&stack0x0000313c + lVar43) = *(undefined4 *)(&stack0x0000308c + lVar43);
    *(undefined4 *)(&stack0x00003120 + lVar43) = *(undefined4 *)(&stack0x00003070 + lVar43);
    *(undefined4 *)(&stack0x00003124 + lVar43) = *(undefined4 *)(&stack0x00003074 + lVar43);
    *(undefined4 *)(&stack0x00003128 + lVar43) = *(undefined4 *)(&stack0x00003078 + lVar43);
    *(undefined4 *)(&stack0x0000312c + lVar43) = *(undefined4 *)(&stack0x0000307c + lVar43);
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051ec50;
    pub_142e32760(&stack0x000022d0 + lVar43,&stack0x000023a0 + lVar43,0xd0);
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051ec6c;
    pub_142e32760(&stack0x00002510 + lVar43,&stack0x00002610 + lVar43,0x100);
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051ec88;
    pub_142e32760(&stack0x00002ee0 + lVar43,&stack0x00002470 + lVar43,0x94);
    *(undefined8 *)(&stack0x0000224c + lVar43) = *(undefined8 *)(&stack0x00002fa8 + lVar43);
    *(undefined8 *)(&stack0x00002254 + lVar43) = *(undefined8 *)(&stack0x00002fb0 + lVar43);
    *(undefined8 *)(&stack0x0000225c + lVar43) = *(undefined8 *)(&stack0x00002fb8 + lVar43);
    *(undefined8 *)(&stack0x00002264 + lVar43) = *(undefined8 *)(&stack0x00002fc0 + lVar43);
    *(undefined8 *)(&stack0x0000226c + lVar43) = *(undefined8 *)(&stack0x00002fc8 + lVar43);
    *(undefined8 *)(&stack0x00002274 + lVar43) = *(undefined8 *)(&stack0x00002fd0 + lVar43);
    *(undefined8 *)(&stack0x0000227c + lVar43) = *(undefined8 *)(&stack0x00002fd8 + lVar43);
    *(undefined8 *)(&stack0x00002284 + lVar43) = *(undefined8 *)(&stack0x00002fe0 + lVar43);
    *(undefined8 *)(&stack0x0000228c + lVar43) = *(undefined8 *)(&stack0x00002fe8 + lVar43);
    *(undefined8 *)(&stack0x00002294 + lVar43) = *(undefined8 *)(&stack0x00002ff0 + lVar43);
    *(undefined8 *)(&stack0x0000229c + lVar43) = *(undefined8 *)(&stack0x00002ff8 + lVar43);
    *(undefined8 *)(&stack0x000022a4 + lVar43) = *(undefined8 *)(&stack0x00003000 + lVar43);
    *(undefined8 *)(&stack0x000022ac + lVar43) = *(undefined8 *)(&stack0x00003008 + lVar43);
    *(undefined8 *)(&stack0x000022b4 + lVar43) = *(undefined8 *)(&stack0x00003010 + lVar43);
    *(undefined8 *)(&stack0x000022bc + lVar43) = *(undefined8 *)(&stack0x00003018 + lVar43);
    *(undefined1 *)(lVar94 + 0xc4a) = 1;
    *(undefined4 *)(&stack0x00002e60 + lVar43) = *(undefined4 *)(&stack0x00003120 + lVar43);
    *(undefined4 *)(&stack0x00002e64 + lVar43) = *(undefined4 *)(&stack0x00003124 + lVar43);
    *(undefined4 *)(&stack0x00002e68 + lVar43) = *(undefined4 *)(&stack0x00003128 + lVar43);
    *(undefined4 *)(&stack0x00002e6c + lVar43) = *(undefined4 *)(&stack0x0000312c + lVar43);
    *(undefined4 *)(&stack0x00002e70 + lVar43) = *(undefined4 *)(&stack0x00003130 + lVar43);
    *(undefined4 *)(&stack0x00002e74 + lVar43) = *(undefined4 *)(&stack0x00003134 + lVar43);
    *(undefined4 *)(&stack0x00002e78 + lVar43) = *(undefined4 *)(&stack0x00003138 + lVar43);
    *(undefined4 *)(&stack0x00002e7c + lVar43) = *(undefined4 *)(&stack0x0000313c + lVar43);
    *(undefined4 *)(&stack0x00002e80 + lVar43) = *(undefined4 *)(&stack0x00003140 + lVar43);
    *(undefined4 *)(&stack0x00002e84 + lVar43) = *(undefined4 *)(&stack0x00003144 + lVar43);
    *(undefined4 *)(&stack0x00002e88 + lVar43) = *(undefined4 *)(&stack0x00003148 + lVar43);
    *(undefined4 *)(&stack0x00002e8c + lVar43) = *(undefined4 *)(&stack0x0000314c + lVar43);
    *(undefined4 *)(&stack0x00002e90 + lVar43) = *(undefined4 *)(&stack0x00003150 + lVar43);
    *(undefined4 *)(&stack0x00002e94 + lVar43) = *(undefined4 *)(&stack0x00003154 + lVar43);
    *(undefined4 *)(&stack0x00002e98 + lVar43) = *(undefined4 *)(&stack0x00003158 + lVar43);
    *(undefined4 *)(&stack0x00002e9c + lVar43) = *(undefined4 *)(&stack0x0000315c + lVar43);
    puVar51 = &stack0x000015a0 + lVar43;
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051ed4f;
    pub_142e32760(puVar51,&stack0x000022d0 + lVar43,0xd0);
    puVar70 = &stack0x00001200 + lVar43;
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051ed67;
    pub_142e32760(puVar70,&stack0x00002510 + lVar43,0x100);
    puVar88 = &stack0x00001870 + lVar43;
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051ed7f;
    pub_142e32760(puVar88,&stack0x00002ee0 + lVar43,0x94);
    puVar64 = &stack0x00000b58 + lVar43;
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051ed9b;
    pub_142e32760(puVar64,&stack0x00002070 + lVar43,0x254);
    if (*(int *)(lVar94 + 0x260) != 2) {
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051edb7;
      pdb_1404b6860(*(longlong *)(&stack0x00003250 + lVar43) + 0x260);
    }
    *(code **)(&stack0x00003230 + lVar43) = param_3;
    pcVar61 = *(char **)(&stack0x00003250 + lVar43);
    pcVar61[0x950] = '\x01';
    unaff_R13 = *(code **)(&stack0x00003240 + lVar43);
    *(code **)(pcVar61 + 0x260) = unaff_R13;
    puVar79 = &stack0x00002e60;
code_r0x00014051ede2:
    puVar45 = (undefined4 *)(puVar79 + lVar43);
    pcVar61[0x270] = '\0';
    pcVar61[0x271] = '\0';
    pcVar61[0x272] = '\0';
    pcVar61[0x273] = '\0';
    pcVar61[0x274] = '\0';
    pcVar61[0x275] = '\0';
    pcVar61[0x276] = '\0';
    pcVar61[0x277] = '\0';
    pcVar61[0x280] = '\0';
    pcVar61[0x281] = '\0';
    pcVar61[0x282] = '\0';
    pcVar61[0x283] = '\0';
    pcVar61[0x284] = '\0';
    pcVar61[0x285] = '\0';
    pcVar61[0x286] = '\0';
    pcVar61[0x287] = -0x80;
    pcVar61[0x2a0] = '\b';
    pcVar61[0x2a1] = '\0';
    pcVar61[0x2a2] = '\0';
    pcVar61[0x2a3] = '\0';
    uVar41 = puVar45[1];
    uVar8 = puVar45[2];
    uVar9 = puVar45[3];
    uVar10 = puVar45[4];
    uVar11 = puVar45[5];
    uVar12 = puVar45[6];
    uVar13 = puVar45[7];
    uVar14 = puVar45[8];
    uVar15 = puVar45[9];
    uVar16 = puVar45[10];
    uVar17 = puVar45[0xb];
    uVar18 = puVar45[0xc];
    uVar19 = puVar45[0xd];
    uVar20 = puVar45[0xe];
    uVar21 = puVar45[0xf];
    *(undefined4 *)(pcVar61 + 0x2a4) = *puVar45;
    *(undefined4 *)(pcVar61 + 0x2a8) = uVar41;
    *(undefined4 *)(pcVar61 + 0x2ac) = uVar8;
    *(undefined4 *)(pcVar61 + 0x2b0) = uVar9;
    *(undefined4 *)(pcVar61 + 0x2b4) = uVar10;
    *(undefined4 *)(pcVar61 + 0x2b8) = uVar11;
    *(undefined4 *)(pcVar61 + 700) = uVar12;
    *(undefined4 *)(pcVar61 + 0x2c0) = uVar13;
    *(undefined4 *)(pcVar61 + 0x2c4) = uVar14;
    *(undefined4 *)(pcVar61 + 0x2c8) = uVar15;
    *(undefined4 *)(pcVar61 + 0x2cc) = uVar16;
    *(undefined4 *)(pcVar61 + 0x2d0) = uVar17;
    *(undefined4 *)(pcVar61 + 0x2d4) = uVar18;
    *(undefined4 *)(pcVar61 + 0x2d8) = uVar19;
    *(undefined4 *)(pcVar61 + 0x2dc) = uVar20;
    *(undefined4 *)(pcVar61 + 0x2e0) = uVar21;
    *(undefined4 *)(pcVar61 + 0x2e4) = *(undefined4 *)(&stack0x00003248 + lVar43);
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051ee54;
    pub_142e32760(pcVar61 + 0x2e8,puVar51,0xd0);
    uVar52 = *(undefined8 *)(&stack0x00003258 + lVar43);
    *(undefined8 *)(pcVar61 + 0x3b8) = uVar52;
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051ee77;
    pub_142e32760(pcVar61 + 0x3c0,puVar70,0x100);
    *(undefined8 *)(pcVar61 + 0x4c0) = *(undefined8 *)(&stack0x00003238 + lVar43);
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051ee9a;
    pub_142e32760(pcVar61 + 0x4c8,puVar88,0x94);
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051eeaf;
    pub_142e32760(pcVar61 + 0x55c,puVar64,0x254);
    pcVar61[0x7b0] = '\0';
    pcVar61[0x7b1] = '\0';
    pcVar61[0x7b2] = '\0';
    pcVar61[0x7b3] = '\0';
    pcVar61[0x7b4] = '\0';
    pcVar61[0x7b5] = '\0';
    pcVar61[0x7b6] = '\0';
    pcVar61[0x7b7] = '\0';
    pcVar61[0x7b8] = '\b';
    pcVar61[0x7b9] = '\0';
    pcVar61[0x7ba] = '\0';
    pcVar61[0x7bb] = '\0';
    pcVar61[0x7bc] = '\0';
    pcVar61[0x7bd] = '\0';
    pcVar61[0x7be] = '\0';
    pcVar61[0x7bf] = '\0';
    pcVar61[0x7c0] = '\0';
    pcVar61[0x7c1] = '\0';
    pcVar61[0x7c2] = '\0';
    pcVar61[0x7c3] = '\0';
    pcVar61[0x7c4] = '\0';
    pcVar61[0x7c5] = '\0';
    pcVar61[0x7c6] = '\0';
    pcVar61[0x7c7] = '\0';
    pcVar61[0x7c8] = '\0';
    pcVar61[0x7c9] = '\0';
    pcVar61[0x7ca] = '\0';
    pcVar61[0x7cb] = '\0';
    pcVar61[0x7cc] = '\0';
    pcVar61[0x7cd] = '\0';
    pcVar61[0x7ce] = '\0';
    pcVar61[1999] = -0x80;
    pcVar61[0x8c0] = '\0';
    pcVar61[0x8c1] = '\0';
    pcVar61[0x8c2] = '\0';
    pcVar61[0x8c3] = '\0';
    pcVar61[0x8c4] = '\0';
    pcVar61[0x8c5] = '\0';
    pcVar61[0x8c6] = '\0';
    pcVar61[0x8c7] = -0x80;
    pcVar61[0x8d8] = '\0';
    pcVar61[0x8d9] = '\0';
    pcVar61[0x8da] = '\0';
    pcVar61[0x8db] = '\0';
    pcVar61[0x8dc] = '\0';
    pcVar61[0x8dd] = '\0';
    pcVar61[0x8de] = '\0';
    pcVar61[0x8df] = -0x80;
    pcVar61[0x8f0] = '\0';
    pcVar61[0x8f1] = '\0';
    pcVar61[0x8f2] = '\0';
    pcVar61[0x8f3] = '\0';
    pcVar61[0x8f8] = '\0';
    pcVar61[0x8f9] = '\0';
    pcVar61[0x8fa] = '\0';
    pcVar61[0x8fb] = '\0';
    *(undefined8 *)(pcVar61 + 0x900) = uVar52;
    *(undefined8 *)(pcVar61 + 0x908) = uVar52;
    pcVar61[0x910] = '\0';
    pcVar61[0x911] = '\0';
    pcVar61[0x912] = '\0';
    pcVar61[0x913] = '\0';
    pcVar61[0x914] = '\0';
    pcVar61[0x915] = '\0';
    pcVar61[0x916] = '\0';
    pcVar61[0x917] = '\0';
    pcVar61[0x920] = '\0';
    pcVar61[0x921] = '\0';
    pcVar61[0x922] = '\0';
    pcVar61[0x923] = '\0';
    pcVar61[0x924] = '\0';
    pcVar61[0x925] = '\0';
    pcVar61[0x926] = '\0';
    pcVar61[0x927] = '\0';
    pcVar61[0x928] = '\x04';
    if ((int)unaff_R13 != 2) {
      pcVar61[0x950] = '\0';
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051f15d;
      pub_142e32760(&stack0x000019a0 + lVar43,pcVar61 + 0x268,0x6c8);
      puVar88 = &stack0xffffffffffffffc0 + lVar43;
      goto code_r0x000140520e8a;
    }
    pcVar1 = pcVar61 + 8;
    uVar52 = *(undefined8 *)(pcVar61 + 0x938);
    *(char **)(&stack0x00003258 + lVar43) = pcVar61 + 0x960;
    *(char **)(pcVar61 + 0x960) = pcVar1;
    *(undefined8 *)(pcVar61 + 0x968) = uVar52;
    param_3 = *(code **)(&stack0x00003230 + lVar43);
    if (*pcVar61 == '\0') {
      *(char **)(&stack0x00003248 + lVar43) = pcVar61 + 0x9ec;
      pcVar61[0x9ec] = '\0';
      *(undefined8 *)(pcVar61 + 0x970) = uVar52;
      plVar46 = plRam0000000143ca3d58;
      if (*_DAT_143ca4b08 == 0) {
        bVar38 = *(byte *)(plRam0000000143ca3d58 + 2);
        puVar64 = (undefined1 *)(ulonglong)bVar38;
        if (2 < bVar38) {
          *(undefined8 *)(&stack0x00003218 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
          *(undefined8 *)(&stack0x00003210 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14052027b;
          uVar42 = pdb_142db8070(plRam0000000143ca3d58);
          puVar64 = (undefined1 *)(ulonglong)uVar42;
          if ((char)uVar42 != '\0') goto code_r0x00014051f5e1;
          goto code_r0x00014051f191;
        }
        if (bVar38 == 0) goto code_r0x00014051f191;
code_r0x00014051f5e1:
        lVar94 = *plVar46;
        *(undefined8 *)(&stack0x00003218 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
        *(undefined8 *)(&stack0x00003210 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051f605;
        cVar37 = pdb_140dd7f60(lVar94);
        if (cVar37 == '\0') goto code_r0x00014051f191;
        lVar94 = *plVar46;
        lVar67 = *(longlong *)(lVar94 + 0x38);
        if (lVar67 == 0) {
          *(undefined8 *)(&stack0x00003218 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
          *(undefined8 *)(&stack0x00003210 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520646;
          pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f63810);
          goto code_r0x0001405216a5;
        }
        uVar41 = *(undefined4 *)(lVar94 + 0x40);
        uVar8 = *(undefined4 *)(lVar94 + 0x44);
        uVar9 = *(undefined4 *)(lVar94 + 0x48);
        uVar10 = *(undefined4 *)(lVar94 + 0x4c);
        *(undefined8 *)(&stack0x00002710 + lVar43) = *(undefined8 *)(lVar94 + 0x30);
        *(longlong *)(&stack0x00002718 + lVar43) = lVar67;
        *(undefined4 *)(&stack0x00002720 + lVar43) = uVar41;
        *(undefined4 *)(&stack0x00002724 + lVar43) = uVar8;
        *(undefined4 *)(&stack0x00002728 + lVar43) = uVar9;
        *(undefined4 *)(&stack0x0000272c + lVar43) = uVar10;
        *(undefined8 *)(&stack0x00002730 + lVar43) = 0;
        *(undefined **)(&stack0x00003168 + lVar43) = &UNK_142f632f0;
        *(undefined8 *)(&stack0x00003170 + lVar43) = 0x17;
        *(undefined1 **)(&stack0x000031d8 + lVar43) = &stack0x00002710 + lVar43;
        *(undefined1 **)(&stack0x000031e0 + lVar43) = &stack0x00003168 + lVar43;
        *(undefined **)(&stack0x000031e8 + lVar43) = &UNK_142f62e58;
        *(undefined1 **)(&stack0x000031c0 + lVar43) = &stack0x000031d8 + lVar43;
        *(undefined8 *)(&stack0x000031c8 + lVar43) = 1;
        *(longlong *)(&stack0x000031d0 + lVar43) = lVar94 + 0x30;
        *(undefined8 *)(&stack0x00003218 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
        *(undefined8 *)(&stack0x00003210 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051f6d8;
        puVar51 = &stack0x000031c0 + lVar43;
        pdb_140dd9020();
        if ((*_DAT_143ca4ab0 == 0) &&
           (4 < *(ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90))) {
          lVar94 = *plVar46;
          uVar41 = *(undefined4 *)(lVar94 + 0x20);
          uVar8 = *(undefined4 *)(lVar94 + 0x24);
          uVar9 = *(undefined4 *)(lVar94 + 0x28);
          uVar10 = *(undefined4 *)(lVar94 + 0x2c);
          *(undefined8 *)(&stack0x000031f0 + lVar43) = 5;
          *(undefined4 *)(&stack0x000031f8 + lVar43) = uVar41;
          *(undefined4 *)(&stack0x000031fc + lVar43) = uVar8;
          *(undefined4 *)(&stack0x00003200 + lVar43) = uVar9;
          *(undefined4 *)(&stack0x00003204 + lVar43) = uVar10;
          *(undefined8 *)(&stack0x00003218 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
          *(undefined8 *)(&stack0x00003210 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051f73a;
          uVar52 = pdb_140f33290();
          pcVar66 = *(code **)(puVar51 + 0x18);
          *(undefined8 *)(&stack0x00003218 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
          *(undefined8 *)(&stack0x00003210 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051f76d;
          cVar37 = (*pcVar66)(uVar52,&stack0x000031f0 + lVar43);
          if (cVar37 != '\0') {
            *(undefined8 *)(&stack0x00003130 + lVar43) = *(undefined8 *)(&stack0x00003200 + lVar43);
            *(undefined4 *)(&stack0x00003120 + lVar43) = *(undefined4 *)(&stack0x000031f0 + lVar43);
            *(undefined4 *)(&stack0x00003124 + lVar43) = *(undefined4 *)(&stack0x000031f4 + lVar43);
            *(undefined4 *)(&stack0x00003128 + lVar43) = *(undefined4 *)(&stack0x000031f8 + lVar43);
            *(undefined4 *)(&stack0x0000312c + lVar43) = *(undefined4 *)(&stack0x000031fc + lVar43);
            *(undefined8 *)(&stack0x00003218 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
            *(undefined8 *)(&stack0x00003210 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
            *(undefined1 **)(&stack0xffffffffffffffe0 + lVar43) = &stack0x000031c0 + lVar43;
            *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051f7c4;
            pdb_140dd7f80(lVar94,uVar52,puVar51,&stack0x00003120 + lVar43);
          }
        }
      }
      else {
code_r0x00014051f191:
        plVar46 = plRam0000000143ca3d58;
        if ((*_DAT_143ca4ab0 == 0) &&
           (4 < *(ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90))) {
          lVar94 = *plRam0000000143ca3d58;
          uVar41 = *(undefined4 *)(lVar94 + 0x20);
          uVar8 = *(undefined4 *)(lVar94 + 0x24);
          uVar9 = *(undefined4 *)(lVar94 + 0x28);
          uVar10 = *(undefined4 *)(lVar94 + 0x2c);
          *(undefined8 *)(&stack0x00003108 + lVar43) = 5;
          *(undefined4 *)(&stack0x00003110 + lVar43) = uVar41;
          *(undefined4 *)(&stack0x00003114 + lVar43) = uVar8;
          *(undefined4 *)(&stack0x00003118 + lVar43) = uVar9;
          *(undefined4 *)(&stack0x0000311c + lVar43) = uVar10;
          *(undefined8 *)(&stack0x00003218 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
          *(undefined8 *)(&stack0x00003210 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051f1f9;
          uVar52 = pdb_140f33290();
          pcVar66 = *(code **)(puVar64 + 0x18);
          *(undefined8 *)(&stack0x00003218 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
          *(undefined8 *)(&stack0x00003210 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051f22c;
          cVar37 = (*pcVar66)(uVar52,&stack0x00003108 + lVar43);
          if (cVar37 != '\0') {
            lVar67 = *plVar46;
            lVar7 = *(longlong *)(lVar67 + 0x38);
            if (lVar7 == 0) {
              *(undefined8 *)(&stack0x00003218 + lVar43) =
                   *(undefined8 *)(&stack0x00003248 + lVar43);
              *(undefined8 *)(&stack0x00003210 + lVar43) =
                   *(undefined8 *)(&stack0x00003258 + lVar43);
              *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520720;
              pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f63810);
              goto code_r0x0001405216a5;
            }
            uVar95 = *(undefined8 *)(lVar67 + 0x40);
            uVar68 = *(undefined8 *)(lVar67 + 0x48);
            *(undefined8 *)(&stack0x00002710 + lVar43) = *(undefined8 *)(lVar67 + 0x30);
            *(longlong *)(&stack0x00002718 + lVar43) = lVar7;
            *(undefined8 *)(&stack0x00002720 + lVar43) = uVar95;
            *(undefined8 *)(&stack0x00002728 + lVar43) = uVar68;
            *(undefined8 *)(&stack0x00002730 + lVar43) = 0;
            *(undefined **)(&stack0x000031c0 + lVar43) = &UNK_142f632f0;
            *(undefined8 *)(&stack0x000031c8 + lVar43) = 0x17;
            *(undefined1 **)(&stack0x000031f0 + lVar43) = &stack0x00002710 + lVar43;
            *(undefined1 **)(&stack0x000031f8 + lVar43) = &stack0x000031c0 + lVar43;
            *(undefined **)(&stack0x00003200 + lVar43) = &UNK_142f62e58;
            *(undefined1 **)(&stack0x000031d8 + lVar43) = &stack0x000031f0 + lVar43;
            *(undefined8 *)(&stack0x000031e0 + lVar43) = 1;
            *(longlong *)(&stack0x000031e8 + lVar43) = lVar67 + 0x30;
            *(undefined8 *)(&stack0x00003130 + lVar43) = *(undefined8 *)(&stack0x00003118 + lVar43);
            *(undefined4 *)(&stack0x00003120 + lVar43) = *(undefined4 *)(&stack0x00003108 + lVar43);
            *(undefined4 *)(&stack0x00003124 + lVar43) = *(undefined4 *)(&stack0x0000310c + lVar43);
            *(undefined4 *)(&stack0x00003128 + lVar43) = *(undefined4 *)(&stack0x00003110 + lVar43);
            *(undefined4 *)(&stack0x0000312c + lVar43) = *(undefined4 *)(&stack0x00003114 + lVar43);
            *(undefined8 *)(&stack0x00003218 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
            *(undefined8 *)(&stack0x00003210 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
            *(undefined1 **)(&stack0xffffffffffffffe0 + lVar43) = &stack0x000031d8 + lVar43;
            *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051f32d;
            pdb_140dd7f80(lVar94,uVar52,puVar64,&stack0x00003120 + lVar43);
          }
        }
      }
      lVar94 = *(longlong *)(*(longlong *)(*(longlong *)(&stack0x00003250 + lVar43) + 0x970) + 0x10)
      ;
      *(undefined8 *)(&stack0x00003218 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
      *(undefined8 *)(&stack0x00003210 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
      uVar42 = 0x42f63118;
      uVar52 = 2;
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051f814;
      uVar44 = pdb_140154e10(pcVar1,&UNK_142f63118,2,lVar94 + 0x520);
      if ((uVar44 & 1) == 0) {
code_r0x00014051f86d:
        pcVar66 = *(code **)(&stack0x00003250 + lVar43);
      }
      else {
        pcVar66 = *(code **)(&stack0x00003250 + lVar43);
        *(uint *)(pcVar66 + 0x9e0) = uVar42;
        uVar58 = 0x100;
        if (*(char *)(*(longlong *)(*(longlong *)(pcVar66 + 0x970) + 0x10) + 0x6c8) != '\x06') {
          if (0xffffffef < uVar42) goto code_r0x000140520b2b;
          *(uint *)(pcVar66 + 0x9e0) = uVar42 + 0x10;
          uVar58 = 0xfc;
        }
        *(uint *)(pcVar66 + 0x978) = 0;
        *(uint *)(pcVar66 + 0x97c) = uVar58;
        uVar42 = 0;
        while (uVar52 = 2, uVar42 < uVar58) {
          *(uint *)(pcVar66 + 0x978) = uVar42 + 1;
          uVar58 = uVar42 * 4 + *(uint *)(pcVar66 + 0x9e0);
          if (CARRY4(uVar42 * 4,*(uint *)(pcVar66 + 0x9e0))) break;
          *(uint *)(pcVar66 + 0x9e4) = uVar58;
          lVar94 = *(longlong *)(pcVar66 + 0x970);
          plVar46 = *(longlong **)(lVar94 + 8);
          uVar44 = (ulonglong)uVar58 - plVar46[4];
          if ((((ulonglong)uVar58 < (ulonglong)plVar46[4]) || ((ulonglong)plVar46[1] < uVar44)) ||
             (plVar46[1] - uVar44 < 4)) break;
          uVar42 = *(uint *)(*plVar46 + uVar44);
          uVar58 = uVar42 >> 0x18 | (uVar42 & 0xff0000) >> 8 | (uVar42 & 0xff00) << 8 |
                   uVar42 << 0x18;
          if ((char)plVar46[6] == '\0') {
            uVar58 = uVar42;
          }
          uVar44 = (ulonglong)uVar58;
          *(uint *)(pcVar66 + 0x9e8) = uVar58;
          uVar52 = *(undefined8 *)(lVar94 + 0x28);
          *(undefined8 *)(pcVar66 + 0x980) = *(undefined8 *)(lVar94 + 0x18);
          *(undefined8 *)(pcVar66 + 0x988) = uVar52;
          *(ulonglong *)(pcVar66 + 0x990) = uVar44;
          pcVar66[0x9d8] = (code)0x0;
          if (uVar44 < 0x1000) {
            pcVar66[0x9d8] = (code)0x1;
          }
          else {
            *(uint *)(pcVar66 + 0x998) = *(uint *)(pcVar66 + 0x980);
            *(uint *)(pcVar66 + 0x99c) = *(uint *)(pcVar66 + 0x984);
            *(uint *)(pcVar66 + 0x9a0) = *(uint *)(pcVar66 + 0x988);
            *(uint *)(pcVar66 + 0x9a4) = *(uint *)(pcVar66 + 0x98c);
            *(ulonglong *)(pcVar66 + 0x9a8) = uVar44;
            pcVar66[0x9d0] = (code)0x0;
            *(code **)(&stack0x00003240 + lVar43) = pcVar66 + 0x9d8;
            *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d221;
            UNRECOVERED_JUMPTABLE = param_3;
            bVar38 = pdb_14051cb10(pcVar66 + 0x998);
            if (bVar38 == 2) {
              **(undefined1 **)(&stack0x00003240 + lVar43) = 3;
              **(undefined1 **)(&stack0x00003248 + lVar43) = 3;
              **(undefined8 **)(&stack0x000030e8 + lVar43) = 3;
              pcVar66 = (code *)0x5;
              goto code_r0x0001405215e2;
            }
            pcVar66 = *(code **)(&stack0x00003250 + lVar43);
            if (pcVar66[0x9d0] == (code)0x3) {
              *(undefined8 *)(&stack0x00003230 + lVar43) = *(undefined8 *)(pcVar66 + 0x9c0);
              puVar4 = *(undefined8 **)(pcVar66 + 0x9c8);
              *(undefined8 **)(&stack0x00003238 + lVar43) = puVar4;
              pcVar66 = (code *)*puVar4;
              if (pcVar66 != (code *)0x0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d269;
                (*pcVar66)(*(undefined8 *)(&stack0x00003230 + lVar43));
              }
              UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(&stack0x00003238 + lVar43) + 8);
              pcVar66 = *(code **)(&stack0x00003250 + lVar43);
              if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                uVar44 = *(ulonglong *)(*(longlong *)(&stack0x00003238 + lVar43) + 0x10);
                *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d291;
                pub_1406abac0(*(byte **)(&stack0x00003230 + lVar43),(ulonglong)UNRECOVERED_JUMPTABLE
                              ,uVar44);
              }
            }
            **(undefined1 **)(&stack0x00003240 + lVar43) = 1;
            param_2 = pcRam0000000143ca3d60;
            if ((bVar38 & 1) != 0) {
              if (0xfffffffb < *(uint *)(pcVar66 + 0x9e4)) goto code_r0x00014051d2b5;
              uVar42 = *(uint *)(pcVar66 + 0x9e4) + 4;
              unaff_R15 = (code *)(ulonglong)uVar42;
              *(uint *)(&stack0x00003178 + lVar43) = uVar42;
              if (*_DAT_143ca4b08 != 0) goto code_r0x00014051f897;
              cVar98 = pcRam0000000143ca3d60[0x10];
              UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(byte)cVar98;
              if ((byte)cVar98 < 3) goto joined_r0x00014051fe65;
              *(undefined8 *)(&stack0x00003218 + lVar43) =
                   *(undefined8 *)(&stack0x00003248 + lVar43);
              *(undefined8 *)(&stack0x00003210 + lVar43) =
                   *(undefined8 *)(&stack0x00003258 + lVar43);
              *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x1405203f8;
              UNRECOVERED_JUMPTABLE = (code *)pdb_142db8070(pcRam0000000143ca3d60);
              goto code_r0x0001405203f9;
            }
          }
          uVar58 = *(uint *)(pcVar66 + 0x97c);
          uVar42 = *(uint *)(pcVar66 + 0x978);
        }
      }
code_r0x000140520b2b:
      *(undefined8 *)(&stack0x00003240 + lVar43) = uVar52;
      *(undefined4 *)(&stack0x000030a0 + lVar43) = *(undefined4 *)(&stack0x00002fd8 + lVar43);
      *(undefined4 *)(&stack0x000030a4 + lVar43) = *(undefined4 *)(&stack0x00002fdc + lVar43);
      *(undefined4 *)(&stack0x000030a8 + lVar43) = *(undefined4 *)(&stack0x00002fe0 + lVar43);
      *(undefined4 *)(&stack0x000030ac + lVar43) = *(undefined4 *)(&stack0x00002fe4 + lVar43);
      *(undefined4 *)(&stack0x00003090 + lVar43) = *(undefined4 *)(&stack0x00002fc8 + lVar43);
      *(undefined4 *)(&stack0x00003094 + lVar43) = *(undefined4 *)(&stack0x00002fcc + lVar43);
      *(undefined4 *)(&stack0x00003098 + lVar43) = *(undefined4 *)(&stack0x00002fd0 + lVar43);
      *(undefined4 *)(&stack0x0000309c + lVar43) = *(undefined4 *)(&stack0x00002fd4 + lVar43);
      *(undefined4 *)(&stack0x00003080 + lVar43) = *(undefined4 *)(&stack0x00002fb8 + lVar43);
      *(undefined4 *)(&stack0x00003084 + lVar43) = *(undefined4 *)(&stack0x00002fbc + lVar43);
      *(undefined4 *)(&stack0x00003088 + lVar43) = *(undefined4 *)(&stack0x00002fc0 + lVar43);
      *(undefined4 *)(&stack0x0000308c + lVar43) = *(undefined4 *)(&stack0x00002fc4 + lVar43);
      *(undefined4 *)(&stack0x00003070 + lVar43) = *(undefined4 *)(&stack0x00002fa8 + lVar43);
      *(undefined4 *)(&stack0x00003074 + lVar43) = *(undefined4 *)(&stack0x00002fac + lVar43);
      *(undefined4 *)(&stack0x00003078 + lVar43) = *(undefined4 *)(&stack0x00002fb0 + lVar43);
      *(undefined4 *)(&stack0x0000307c + lVar43) = *(undefined4 *)(&stack0x00002fb4 + lVar43);
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520b86;
      pub_142e32760(&stack0x000023a0 + lVar43,&stack0x00002510 + lVar43,0xd0);
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520ba2;
      pub_142e32760(&stack0x00002610 + lVar43,&stack0x00002070 + lVar43,0x100);
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520bbe;
      pub_142e32760(&stack0x00002470 + lVar43,&stack0x000022d0 + lVar43,0x94);
      *(undefined8 *)(&stack0x00001b7c + lVar43) = *(undefined8 *)(&stack0x00002ee0 + lVar43);
      *(undefined8 *)(&stack0x00001b84 + lVar43) = *(undefined8 *)(&stack0x00002ee8 + lVar43);
      *(undefined8 *)(&stack0x00001b8c + lVar43) = *(undefined8 *)(&stack0x00002ef0 + lVar43);
      *(undefined8 *)(&stack0x00001b94 + lVar43) = *(undefined8 *)(&stack0x00002ef8 + lVar43);
      *(undefined8 *)(&stack0x00001b9c + lVar43) = *(undefined8 *)(&stack0x00002f00 + lVar43);
      *(undefined8 *)(&stack0x00001ba4 + lVar43) = *(undefined8 *)(&stack0x00002f08 + lVar43);
      *(undefined8 *)(&stack0x00001bac + lVar43) = *(undefined8 *)(&stack0x00002f10 + lVar43);
      *(undefined8 *)(&stack0x00001bb4 + lVar43) = *(undefined8 *)(&stack0x00002f18 + lVar43);
      *(undefined8 *)(&stack0x00001bbc + lVar43) = *(undefined8 *)(&stack0x00002f20 + lVar43);
      *(undefined8 *)(&stack0x00001bc4 + lVar43) = *(undefined8 *)(&stack0x00002f28 + lVar43);
      *(undefined8 *)(&stack0x00001bcc + lVar43) = *(undefined8 *)(&stack0x00002f30 + lVar43);
      *(undefined8 *)(&stack0x00001bd4 + lVar43) = *(undefined8 *)(&stack0x00002f38 + lVar43);
      *(undefined8 *)(&stack0x00001bdc + lVar43) = *(undefined8 *)(&stack0x00002f40 + lVar43);
      *(undefined8 *)(&stack0x00001be4 + lVar43) = *(undefined8 *)(&stack0x00002f48 + lVar43);
      *(undefined8 *)(&stack0x00001bec + lVar43) = *(undefined8 *)(&stack0x00002f50 + lVar43);
      pcVar66[0x9ec] = (code)0x1;
      *(undefined4 *)(&stack0x00002e20 + lVar43) = *(undefined4 *)(&stack0x00003070 + lVar43);
      *(undefined4 *)(&stack0x00002e24 + lVar43) = *(undefined4 *)(&stack0x00003074 + lVar43);
      *(undefined4 *)(&stack0x00002e28 + lVar43) = *(undefined4 *)(&stack0x00003078 + lVar43);
      *(undefined4 *)(&stack0x00002e2c + lVar43) = *(undefined4 *)(&stack0x0000307c + lVar43);
      *(undefined4 *)(&stack0x00002e30 + lVar43) = *(undefined4 *)(&stack0x00003080 + lVar43);
      *(undefined4 *)(&stack0x00002e34 + lVar43) = *(undefined4 *)(&stack0x00003084 + lVar43);
      *(undefined4 *)(&stack0x00002e38 + lVar43) = *(undefined4 *)(&stack0x00003088 + lVar43);
      *(undefined4 *)(&stack0x00002e3c + lVar43) = *(undefined4 *)(&stack0x0000308c + lVar43);
      *(undefined4 *)(&stack0x00002e40 + lVar43) = *(undefined4 *)(&stack0x00003090 + lVar43);
      *(undefined4 *)(&stack0x00002e44 + lVar43) = *(undefined4 *)(&stack0x00003094 + lVar43);
      *(undefined4 *)(&stack0x00002e48 + lVar43) = *(undefined4 *)(&stack0x00003098 + lVar43);
      *(undefined4 *)(&stack0x00002e4c + lVar43) = *(undefined4 *)(&stack0x0000309c + lVar43);
      *(undefined4 *)(&stack0x00002e50 + lVar43) = *(undefined4 *)(&stack0x000030a0 + lVar43);
      *(undefined4 *)(&stack0x00002e54 + lVar43) = *(undefined4 *)(&stack0x000030a4 + lVar43);
      *(undefined4 *)(&stack0x00002e58 + lVar43) = *(undefined4 *)(&stack0x000030a8 + lVar43);
      *(undefined4 *)(&stack0x00002e5c + lVar43) = *(undefined4 *)(&stack0x000030ac + lVar43);
      puVar51 = &stack0x000014d0 + lVar43;
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520c85;
      pub_142e32760(puVar51,&stack0x000023a0 + lVar43,0xd0);
      puVar70 = &stack0x00001100 + lVar43;
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520c9d;
      pub_142e32760(puVar70,&stack0x00002610 + lVar43,0x100);
      puVar88 = &stack0x000017d8 + lVar43;
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520cb5;
      pub_142e32760(puVar88,&stack0x00002470 + lVar43,0x94);
      puVar64 = &stack0x00000904 + lVar43;
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520cd1;
      pub_142e32760(puVar64,&stack0x000019a0 + lVar43,0x254);
      if (*(uint *)(pcVar66 + 0x260) != 2) {
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520ced;
        pdb_1404b6860(*(longlong *)(&stack0x00003250 + lVar43) + 0x260);
      }
      param_2 = *(code **)(&stack0x00003250 + lVar43);
      param_2[0x950] = (code)0x1;
      unaff_R13 = *(code **)(&stack0x00003240 + lVar43);
      *(code **)(param_2 + 0x260) = unaff_R13;
      puVar79 = &stack0x00002e20;
    }
    else {
      *(char **)(&stack0x00003248 + lVar43) = pcVar61 + 0xa00;
      pcVar61[0xa00] = '\0';
      *(undefined8 *)(pcVar61 + 0x970) = uVar52;
      plVar46 = plRam0000000143ca3d68;
      if (*_DAT_143ca4b08 == 0) {
        bVar38 = *(byte *)(plRam0000000143ca3d68 + 2);
        puVar64 = (undefined1 *)(ulonglong)bVar38;
        if (2 < bVar38) {
          *(undefined8 *)(&stack0x00003228 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
          *(undefined8 *)(&stack0x00003220 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520243;
          uVar42 = pdb_142db8070(plRam0000000143ca3d68);
          puVar64 = (undefined1 *)(ulonglong)uVar42;
          if ((char)uVar42 != '\0') goto code_r0x00014051f350;
          goto code_r0x00014051ef94;
        }
        if (bVar38 == 0) goto code_r0x00014051ef94;
code_r0x00014051f350:
        lVar94 = *plVar46;
        *(undefined8 *)(&stack0x00003228 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
        *(undefined8 *)(&stack0x00003220 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051f374;
        cVar37 = pdb_140dd7f60(lVar94);
        if (cVar37 == '\0') goto code_r0x00014051ef94;
        lVar94 = *plVar46;
        lVar67 = *(longlong *)(lVar94 + 0x38);
        if (lVar67 == 0) {
          *(undefined8 *)(&stack0x00003228 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
          *(undefined8 *)(&stack0x00003220 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14052060c;
          pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f638a0);
          goto code_r0x0001405216a5;
        }
        uVar41 = *(undefined4 *)(lVar94 + 0x40);
        uVar8 = *(undefined4 *)(lVar94 + 0x44);
        uVar9 = *(undefined4 *)(lVar94 + 0x48);
        uVar10 = *(undefined4 *)(lVar94 + 0x4c);
        *(undefined8 *)(&stack0x00002710 + lVar43) = *(undefined8 *)(lVar94 + 0x30);
        *(longlong *)(&stack0x00002718 + lVar43) = lVar67;
        *(undefined4 *)(&stack0x00002720 + lVar43) = uVar41;
        *(undefined4 *)(&stack0x00002724 + lVar43) = uVar8;
        *(undefined4 *)(&stack0x00002728 + lVar43) = uVar9;
        *(undefined4 *)(&stack0x0000272c + lVar43) = uVar10;
        *(undefined8 *)(&stack0x00002730 + lVar43) = 0;
        *(undefined **)(&stack0x00003168 + lVar43) = &UNK_142f632f0;
        *(undefined8 *)(&stack0x00003170 + lVar43) = 0x17;
        *(undefined1 **)(&stack0x000031d8 + lVar43) = &stack0x00002710 + lVar43;
        *(undefined1 **)(&stack0x000031e0 + lVar43) = &stack0x00003168 + lVar43;
        *(undefined **)(&stack0x000031e8 + lVar43) = &UNK_142f62e58;
        *(undefined1 **)(&stack0x000031c0 + lVar43) = &stack0x000031d8 + lVar43;
        *(undefined8 *)(&stack0x000031c8 + lVar43) = 1;
        *(longlong *)(&stack0x000031d0 + lVar43) = lVar94 + 0x30;
        *(undefined8 *)(&stack0x00003228 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
        *(undefined8 *)(&stack0x00003220 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051f447;
        puVar51 = &stack0x000031c0 + lVar43;
        pdb_140dd9020();
        if ((*_DAT_143ca4ab0 == 0) &&
           (4 < *(ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90))) {
          lVar94 = *plVar46;
          uVar41 = *(undefined4 *)(lVar94 + 0x20);
          uVar8 = *(undefined4 *)(lVar94 + 0x24);
          uVar9 = *(undefined4 *)(lVar94 + 0x28);
          uVar10 = *(undefined4 *)(lVar94 + 0x2c);
          *(undefined8 *)(&stack0x000031f0 + lVar43) = 5;
          *(undefined4 *)(&stack0x000031f8 + lVar43) = uVar41;
          *(undefined4 *)(&stack0x000031fc + lVar43) = uVar8;
          *(undefined4 *)(&stack0x00003200 + lVar43) = uVar9;
          *(undefined4 *)(&stack0x00003204 + lVar43) = uVar10;
          *(undefined8 *)(&stack0x00003228 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
          *(undefined8 *)(&stack0x00003220 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051f4a9;
          uVar52 = pdb_140f33290();
          pcVar66 = *(code **)(puVar51 + 0x18);
          *(undefined8 *)(&stack0x00003228 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
          *(undefined8 *)(&stack0x00003220 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051f4dc;
          cVar37 = (*pcVar66)(uVar52,&stack0x000031f0 + lVar43);
          if (cVar37 != '\0') {
            *(undefined8 *)(&stack0x00003130 + lVar43) = *(undefined8 *)(&stack0x00003200 + lVar43);
            *(undefined4 *)(&stack0x00003120 + lVar43) = *(undefined4 *)(&stack0x000031f0 + lVar43);
            *(undefined4 *)(&stack0x00003124 + lVar43) = *(undefined4 *)(&stack0x000031f4 + lVar43);
            *(undefined4 *)(&stack0x00003128 + lVar43) = *(undefined4 *)(&stack0x000031f8 + lVar43);
            *(undefined4 *)(&stack0x0000312c + lVar43) = *(undefined4 *)(&stack0x000031fc + lVar43);
            *(undefined8 *)(&stack0x00003228 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
            *(undefined8 *)(&stack0x00003220 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
            *(undefined1 **)(&stack0xffffffffffffffe0 + lVar43) = &stack0x000031c0 + lVar43;
            *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051f533;
            pdb_140dd7f80(lVar94,uVar52,puVar51,&stack0x00003120 + lVar43);
          }
        }
      }
      else {
code_r0x00014051ef94:
        plVar46 = plRam0000000143ca3d68;
        if ((*_DAT_143ca4ab0 == 0) &&
           (4 < *(ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90))) {
          lVar94 = *plRam0000000143ca3d68;
          uVar41 = *(undefined4 *)(lVar94 + 0x20);
          uVar8 = *(undefined4 *)(lVar94 + 0x24);
          uVar9 = *(undefined4 *)(lVar94 + 0x28);
          uVar10 = *(undefined4 *)(lVar94 + 0x2c);
          *(undefined8 *)(&stack0x00003108 + lVar43) = 5;
          *(undefined4 *)(&stack0x00003110 + lVar43) = uVar41;
          *(undefined4 *)(&stack0x00003114 + lVar43) = uVar8;
          *(undefined4 *)(&stack0x00003118 + lVar43) = uVar9;
          *(undefined4 *)(&stack0x0000311c + lVar43) = uVar10;
          *(undefined8 *)(&stack0x00003228 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
          *(undefined8 *)(&stack0x00003220 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051effc;
          uVar52 = pdb_140f33290();
          pcVar66 = *(code **)(puVar64 + 0x18);
          *(undefined8 *)(&stack0x00003228 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
          *(undefined8 *)(&stack0x00003220 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051f02f;
          cVar37 = (*pcVar66)(uVar52,&stack0x00003108 + lVar43);
          if (cVar37 != '\0') {
            lVar67 = *plVar46;
            lVar7 = *(longlong *)(lVar67 + 0x38);
            if (lVar7 == 0) {
              *(undefined8 *)(&stack0x00003228 + lVar43) =
                   *(undefined8 *)(&stack0x00003248 + lVar43);
              *(undefined8 *)(&stack0x00003220 + lVar43) =
                   *(undefined8 *)(&stack0x00003258 + lVar43);
              *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x1405206e6;
              pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f638a0);
              goto code_r0x0001405216a5;
            }
            uVar95 = *(undefined8 *)(lVar67 + 0x40);
            uVar68 = *(undefined8 *)(lVar67 + 0x48);
            *(undefined8 *)(&stack0x00002710 + lVar43) = *(undefined8 *)(lVar67 + 0x30);
            *(longlong *)(&stack0x00002718 + lVar43) = lVar7;
            *(undefined8 *)(&stack0x00002720 + lVar43) = uVar95;
            *(undefined8 *)(&stack0x00002728 + lVar43) = uVar68;
            *(undefined8 *)(&stack0x00002730 + lVar43) = 0;
            *(undefined **)(&stack0x000031c0 + lVar43) = &UNK_142f632f0;
            *(undefined8 *)(&stack0x000031c8 + lVar43) = 0x17;
            *(undefined1 **)(&stack0x000031f0 + lVar43) = &stack0x00002710 + lVar43;
            *(undefined1 **)(&stack0x000031f8 + lVar43) = &stack0x000031c0 + lVar43;
            *(undefined **)(&stack0x00003200 + lVar43) = &UNK_142f62e58;
            *(undefined1 **)(&stack0x000031d8 + lVar43) = &stack0x000031f0 + lVar43;
            *(undefined8 *)(&stack0x000031e0 + lVar43) = 1;
            *(longlong *)(&stack0x000031e8 + lVar43) = lVar67 + 0x30;
            *(undefined8 *)(&stack0x00003130 + lVar43) = *(undefined8 *)(&stack0x00003118 + lVar43);
            *(undefined4 *)(&stack0x00003120 + lVar43) = *(undefined4 *)(&stack0x00003108 + lVar43);
            *(undefined4 *)(&stack0x00003124 + lVar43) = *(undefined4 *)(&stack0x0000310c + lVar43);
            *(undefined4 *)(&stack0x00003128 + lVar43) = *(undefined4 *)(&stack0x00003110 + lVar43);
            *(undefined4 *)(&stack0x0000312c + lVar43) = *(undefined4 *)(&stack0x00003114 + lVar43);
            *(undefined8 *)(&stack0x00003228 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
            *(undefined8 *)(&stack0x00003220 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
            *(undefined1 **)(&stack0xffffffffffffffe0 + lVar43) = &stack0x000031d8 + lVar43;
            *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051f130;
            pdb_140dd7f80(lVar94,uVar52,puVar64,&stack0x00003120 + lVar43);
          }
        }
      }
      lVar94 = *(longlong *)(*(longlong *)(*(longlong *)(&stack0x00003250 + lVar43) + 0x970) + 0x10)
      ;
      *(undefined8 *)(&stack0x00003228 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
      *(undefined8 *)(&stack0x00003220 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
      puVar65 = &UNK_142f63118;
      uVar52 = 2;
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051f583;
      uVar44 = pdb_140108ac0(pcVar1,&UNK_142f63118,2,lVar94 + 0x520);
      if ((uVar44 & 1) == 0) {
code_r0x00014051f5b8:
        pcVar66 = *(code **)(&stack0x00003250 + lVar43);
      }
      else {
        pcVar66 = *(code **)(&stack0x00003250 + lVar43);
        *(undefined **)(pcVar66 + 0x978) = puVar65;
        *(undefined8 *)(pcVar66 + 0x980) = 0;
        *(undefined8 *)(pcVar66 + 0x988) = 0x80;
        uVar60 = 0x80;
        uVar44 = 0;
        while (uVar52 = 2, uVar44 < uVar60) {
          *(ulonglong *)(pcVar66 + 0x980) = uVar44 + 1;
          uVar60 = uVar44 * 8 + *(ulonglong *)(pcVar66 + 0x978);
          if (CARRY8(uVar44 * 8,*(ulonglong *)(pcVar66 + 0x978))) break;
          *(ulonglong *)(pcVar66 + 0x990) = uVar60;
          lVar94 = *(longlong *)(pcVar66 + 0x970);
          plVar46 = *(longlong **)(lVar94 + 8);
          uVar44 = uVar60 - plVar46[4];
          if (((uVar60 < (ulonglong)plVar46[4]) || ((ulonglong)plVar46[1] < uVar44)) ||
             (plVar46[1] - uVar44 < 8)) break;
          pcVar1 = *(char **)(*plVar46 + uVar44);
          pcVar61 = (char *)((ulonglong)pcVar1 >> 0x38 |
                             ((ulonglong)pcVar1 & 0xff000000000000) >> 0x28 |
                             ((ulonglong)pcVar1 & 0xff0000000000) >> 0x18 |
                             ((ulonglong)pcVar1 & 0xff00000000) >> 8 |
                             ((ulonglong)pcVar1 & 0xff000000) << 8 |
                             ((ulonglong)pcVar1 & 0xff0000) << 0x18 |
                             ((ulonglong)pcVar1 & 0xff00) << 0x28 | (longlong)pcVar1 << 0x38);
          if ((char)plVar46[6] == '\0') {
            pcVar61 = pcVar1;
          }
          *(char **)(pcVar66 + 0x998) = pcVar61;
          uVar52 = *(undefined8 *)(lVar94 + 0x28);
          *(undefined8 *)(pcVar66 + 0x9a0) = *(undefined8 *)(lVar94 + 0x18);
          *(undefined8 *)(pcVar66 + 0x9a8) = uVar52;
          *(char **)(pcVar66 + 0x9b0) = pcVar61;
          param_2 = pcVar66 + 0x9f8;
          pcVar66[0x9f8] = (code)0x0;
          if ((char *)0xfff < pcVar61) {
code_r0x00014051d0ec:
            *(uint *)(pcVar66 + 0x9b8) = *(uint *)(pcVar66 + 0x9a0);
            *(uint *)(pcVar66 + 0x9bc) = *(uint *)(pcVar66 + 0x9a4);
            *(uint *)(pcVar66 + 0x9c0) = *(uint *)(pcVar66 + 0x9a8);
            *(uint *)(pcVar66 + 0x9c4) = *(uint *)(pcVar66 + 0x9ac);
            *(char **)(pcVar66 + 0x9c8) = pcVar61;
            pcVar66[0x9f0] = (code)0x0;
            *(code **)(&stack0x00003240 + lVar43) = param_2;
            *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d11e;
            param_2 = param_3;
            uVar42 = pdb_14051cb10(pcVar66 + 0x9b8);
            unaff_RBX = (code *)(ulonglong)uVar42;
            if ((char)uVar42 == '\x02') {
              **(undefined1 **)(&stack0x00003240 + lVar43) = 3;
              **(undefined1 **)(&stack0x00003248 + lVar43) = 3;
              **(undefined8 **)(&stack0x000030e8 + lVar43) = 3;
              pcVar66 = (code *)0x6;
              goto code_r0x0001405215e2;
            }
            pcVar66 = *(code **)(&stack0x00003250 + lVar43);
            if (pcVar66[0x9f0] == (code)0x3) {
              *(undefined8 *)(&stack0x00003230 + lVar43) = *(undefined8 *)(pcVar66 + 0x9e0);
              puVar4 = *(undefined8 **)(pcVar66 + 0x9e8);
              *(undefined8 **)(&stack0x00003238 + lVar43) = puVar4;
              pcVar66 = (code *)*puVar4;
              if (pcVar66 != (code *)0x0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d166;
                (*pcVar66)(*(undefined8 *)(&stack0x00003230 + lVar43));
              }
code_r0x00014051d167:
              param_2 = *(code **)(*(longlong *)(&stack0x00003238 + lVar43) + 8);
              pcVar66 = *(code **)(&stack0x00003250 + lVar43);
              if (param_2 != (code *)0x0) {
                uVar44 = *(ulonglong *)(*(longlong *)(&stack0x00003238 + lVar43) + 0x10);
                *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d18e;
                pub_1406abac0(*(byte **)(&stack0x00003230 + lVar43),(ulonglong)param_2,uVar44);
              }
            }
code_r0x00014051d18e:
            **(undefined1 **)(&stack0x00003240 + lVar43) = 1;
            plVar46 = plRam0000000143ca3d70;
            if (((ulonglong)unaff_RBX & 1) == 0) goto code_r0x000140521761;
            if (*(ulonglong *)(pcVar66 + 0x990) < 0xfffffffffffffff8) {
              lVar94 = *(ulonglong *)(pcVar66 + 0x990) + 8;
              *(longlong *)(&stack0x00003178 + lVar43) = lVar94;
              if (*_DAT_143ca4b08 == 0) {
                bVar38 = *(byte *)(plRam0000000143ca3d70 + 2);
                param_2 = (code *)(ulonglong)bVar38;
                if (2 < bVar38) {
                  *(undefined8 *)(&stack0x00003228 + lVar43) =
                       *(undefined8 *)(&stack0x00003248 + lVar43);
                  *(undefined8 *)(&stack0x00003220 + lVar43) =
                       *(undefined8 *)(&stack0x00003258 + lVar43);
                  *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x1405203c0;
                  uVar42 = pdb_142db8070(plRam0000000143ca3d70);
                  param_2 = (code *)(ulonglong)uVar42;
                  if ((char)uVar42 != '\0') goto code_r0x00014051fa8e;
                  goto code_r0x00014051e3c4;
                }
                if (bVar38 == 0) goto code_r0x00014051e3c4;
code_r0x00014051fa8e:
                lVar67 = *plVar46;
                *(undefined8 *)(&stack0x00003228 + lVar43) =
                     *(undefined8 *)(&stack0x00003248 + lVar43);
                *(undefined8 *)(&stack0x00003220 + lVar43) =
                     *(undefined8 *)(&stack0x00003258 + lVar43);
                *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051fab2;
                cVar37 = pdb_140dd7f60(lVar67);
                if (cVar37 == '\0') goto code_r0x00014051e3c4;
                lVar67 = *plVar46;
                lVar7 = *(longlong *)(lVar67 + 0x38);
                if (lVar7 == 0) {
                  *(undefined8 *)(&stack0x00003228 + lVar43) =
                       *(undefined8 *)(&stack0x00003248 + lVar43);
                  *(undefined8 *)(&stack0x00003220 + lVar43) =
                       *(undefined8 *)(&stack0x00003258 + lVar43);
                  *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14052088c;
                  pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f638d0);
                  goto code_r0x0001405216a5;
                }
                uVar41 = *(undefined4 *)(lVar67 + 0x40);
                uVar8 = *(undefined4 *)(lVar67 + 0x44);
                uVar9 = *(undefined4 *)(lVar67 + 0x48);
                uVar10 = *(undefined4 *)(lVar67 + 0x4c);
                *(undefined8 *)(&stack0x00002710 + lVar43) = *(undefined8 *)(lVar67 + 0x30);
                *(longlong *)(&stack0x00002718 + lVar43) = lVar7;
                *(undefined4 *)(&stack0x00002720 + lVar43) = uVar41;
                *(undefined4 *)(&stack0x00002724 + lVar43) = uVar8;
                *(undefined4 *)(&stack0x00002728 + lVar43) = uVar9;
                *(undefined4 *)(&stack0x0000272c + lVar43) = uVar10;
                *(undefined8 *)(&stack0x00002730 + lVar43) = 0;
                *(longlong *)(&stack0x00003120 + lVar43) =
                     *(longlong *)(&stack0x00003250 + lVar43) + 0x998;
                *(code **)(&stack0x00003128 + lVar43) = pdb_140f71410;
                *(undefined1 **)(&stack0x00003130 + lVar43) = &stack0x00003178 + lVar43;
                *(code **)(&stack0x00003138 + lVar43) = pdb_140f71410;
                *(undefined **)(&stack0x000031c0 + lVar43) = &UNK_142f63858;
                *(undefined1 **)(&stack0x000031c8 + lVar43) = &stack0x00003120 + lVar43;
                *(undefined1 **)(&stack0x000031f0 + lVar43) = &stack0x00002710 + lVar43;
                *(undefined1 **)(&stack0x000031f8 + lVar43) = &stack0x000031c0 + lVar43;
                *(undefined **)(&stack0x00003200 + lVar43) = &UNK_142f62e58;
                *(undefined1 **)(&stack0x000031d8 + lVar43) = &stack0x000031f0 + lVar43;
                *(undefined8 *)(&stack0x000031e0 + lVar43) = 1;
                *(longlong *)(&stack0x000031e8 + lVar43) = lVar67 + 0x30;
                *(undefined8 *)(&stack0x00003228 + lVar43) =
                     *(undefined8 *)(&stack0x00003248 + lVar43);
                *(undefined8 *)(&stack0x00003220 + lVar43) =
                     *(undefined8 *)(&stack0x00003258 + lVar43);
                *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051fbbc;
                pdb_140331f90(&stack0x000031d8 + lVar43);
              }
              else {
code_r0x00014051e3c4:
                plVar46 = plRam0000000143ca3d70;
                if ((*_DAT_143ca4ab0 == 0) &&
                   (4 < *(ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90))) {
                  lVar67 = *plRam0000000143ca3d70;
                  uVar41 = *(undefined4 *)(lVar67 + 0x20);
                  uVar8 = *(undefined4 *)(lVar67 + 0x24);
                  uVar9 = *(undefined4 *)(lVar67 + 0x28);
                  uVar10 = *(undefined4 *)(lVar67 + 0x2c);
                  *(undefined8 *)(&stack0x000030f0 + lVar43) = 5;
                  *(undefined4 *)(&stack0x000030f8 + lVar43) = uVar41;
                  *(undefined4 *)(&stack0x000030fc + lVar43) = uVar8;
                  *(undefined4 *)(&stack0x00003100 + lVar43) = uVar9;
                  *(undefined4 *)(&stack0x00003104 + lVar43) = uVar10;
                  *(undefined8 *)(&stack0x00003228 + lVar43) =
                       *(undefined8 *)(&stack0x00003248 + lVar43);
                  *(undefined8 *)(&stack0x00003220 + lVar43) =
                       *(undefined8 *)(&stack0x00003258 + lVar43);
                  *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e42b;
                  uVar52 = pdb_140f33290();
                  pcVar66 = *(code **)(param_2 + 0x18);
                  *(undefined8 *)(&stack0x00003228 + lVar43) =
                       *(undefined8 *)(&stack0x00003248 + lVar43);
                  *(undefined8 *)(&stack0x00003220 + lVar43) =
                       *(undefined8 *)(&stack0x00003258 + lVar43);
                  *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e45e;
                  cVar37 = (*pcVar66)(uVar52,&stack0x000030f0 + lVar43);
                  if (cVar37 != '\0') {
                    lVar7 = *plVar46;
                    lVar5 = *(longlong *)(lVar7 + 0x38);
                    if (lVar5 == 0) {
                      *(undefined8 *)(&stack0x00003228 + lVar43) =
                           *(undefined8 *)(&stack0x00003248 + lVar43);
                      *(undefined8 *)(&stack0x00003220 + lVar43) =
                           *(undefined8 *)(&stack0x00003258 + lVar43);
                      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520900;
                      pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f638d0);
                      goto code_r0x0001405216a5;
                    }
                    uVar95 = *(undefined8 *)(lVar7 + 0x40);
                    uVar68 = *(undefined8 *)(lVar7 + 0x48);
                    *(undefined8 *)(&stack0x00002710 + lVar43) = *(undefined8 *)(lVar7 + 0x30);
                    *(longlong *)(&stack0x00002718 + lVar43) = lVar5;
                    *(undefined8 *)(&stack0x00002720 + lVar43) = uVar95;
                    *(undefined8 *)(&stack0x00002728 + lVar43) = uVar68;
                    *(undefined8 *)(&stack0x00002730 + lVar43) = 0;
                    *(longlong *)(&stack0x00003120 + lVar43) =
                         *(longlong *)(&stack0x00003250 + lVar43) + 0x998;
                    *(code **)(&stack0x00003128 + lVar43) = pdb_140f71410;
                    *(undefined1 **)(&stack0x00003130 + lVar43) = &stack0x00003178 + lVar43;
                    *(code **)(&stack0x00003138 + lVar43) = pdb_140f71410;
                    *(undefined **)(&stack0x00003168 + lVar43) = &UNK_142f63858;
                    *(undefined1 **)(&stack0x00003170 + lVar43) = &stack0x00003120 + lVar43;
                    *(undefined1 **)(&stack0x000031d8 + lVar43) = &stack0x00002710 + lVar43;
                    *(undefined1 **)(&stack0x000031e0 + lVar43) = &stack0x00003168 + lVar43;
                    *(undefined **)(&stack0x000031e8 + lVar43) = &UNK_142f62e58;
                    *(undefined1 **)(&stack0x000031c0 + lVar43) = &stack0x000031d8 + lVar43;
                    *(undefined8 *)(&stack0x000031c8 + lVar43) = 1;
                    *(longlong *)(&stack0x000031d0 + lVar43) = lVar7 + 0x30;
                    *(undefined8 *)(&stack0x00003200 + lVar43) =
                         *(undefined8 *)(&stack0x00003100 + lVar43);
                    *(undefined4 *)(&stack0x000031f0 + lVar43) =
                         *(undefined4 *)(&stack0x000030f0 + lVar43);
                    *(undefined4 *)(&stack0x000031f4 + lVar43) =
                         *(undefined4 *)(&stack0x000030f4 + lVar43);
                    *(undefined4 *)(&stack0x000031f8 + lVar43) =
                         *(undefined4 *)(&stack0x000030f8 + lVar43);
                    *(undefined4 *)(&stack0x000031fc + lVar43) =
                         *(undefined4 *)(&stack0x000030fc + lVar43);
                    *(undefined8 *)(&stack0x00003228 + lVar43) =
                         *(undefined8 *)(&stack0x00003248 + lVar43);
                    *(undefined8 *)(&stack0x00003220 + lVar43) =
                         *(undefined8 *)(&stack0x00003258 + lVar43);
                    *(undefined1 **)(&stack0xffffffffffffffe0 + lVar43) = &stack0x000031c0 + lVar43;
                    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e599;
                    pdb_140dd7f80(lVar67,uVar52,param_2,&stack0x000031f0 + lVar43);
                  }
                }
              }
              *(undefined8 *)(&stack0x00002800 + lVar43) = 0;
              *(undefined8 *)(&stack0x00002808 + lVar43) = 0;
              *(undefined8 *)(&stack0x000027f0 + lVar43) = 0;
              *(undefined8 *)(&stack0x000027f8 + lVar43) = 0;
              *(undefined8 *)(&stack0x000027e0 + lVar43) = 0;
              *(undefined8 *)(&stack0x000027e8 + lVar43) = 0;
              *(undefined8 *)(&stack0x000027d0 + lVar43) = 0;
              *(undefined8 *)(&stack0x000027d8 + lVar43) = 0;
              *(undefined8 *)(&stack0x000027c0 + lVar43) = 0;
              *(undefined8 *)(&stack0x000027c8 + lVar43) = 0;
              *(undefined8 *)(&stack0x000027b0 + lVar43) = 0;
              *(undefined8 *)(&stack0x000027b8 + lVar43) = 0;
              *(undefined8 *)(&stack0x000027a0 + lVar43) = 0;
              *(undefined8 *)(&stack0x000027a8 + lVar43) = 0;
              *(undefined8 *)(&stack0x00002790 + lVar43) = 0;
              *(undefined8 *)(&stack0x00002798 + lVar43) = 0;
              *(undefined8 *)(&stack0x00002780 + lVar43) = 0;
              *(undefined8 *)(&stack0x00002788 + lVar43) = 0;
              *(undefined8 *)(&stack0x00002770 + lVar43) = 0;
              *(undefined8 *)(&stack0x00002778 + lVar43) = 0;
              *(undefined8 *)(&stack0x00002760 + lVar43) = 0;
              *(undefined8 *)(&stack0x00002768 + lVar43) = 0;
              *(undefined8 *)(&stack0x00002750 + lVar43) = 0;
              *(undefined8 *)(&stack0x00002758 + lVar43) = 0;
              *(undefined8 *)(&stack0x00002740 + lVar43) = 0;
              *(undefined8 *)(&stack0x00002748 + lVar43) = 0;
              *(undefined8 *)(&stack0x00002730 + lVar43) = 0;
              *(undefined8 *)(&stack0x00002738 + lVar43) = 0;
              *(undefined8 *)(&stack0x00002720 + lVar43) = 0;
              *(undefined8 *)(&stack0x00002728 + lVar43) = 0;
              *(undefined8 *)(&stack0x00002710 + lVar43) = 0;
              *(undefined8 *)(&stack0x00002718 + lVar43) = 0;
              *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051fc44;
              pub_142e32780(&stack0x00002810 + lVar43,0,0x158);
              uVar52 = *(undefined8 *)(*(longlong *)(&stack0x00003250 + lVar43) + 0x998);
              *(undefined8 *)(&stack0x00003228 + lVar43) =
                   *(undefined8 *)(&stack0x00003248 + lVar43);
              *(undefined8 *)(&stack0x00003220 + lVar43) =
                   *(undefined8 *)(&stack0x00003258 + lVar43);
              *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051fc87;
              pdb_1407e8520(&stack0x00002710 + lVar43,&UNK_142f63790,2,uVar52);
              *(undefined8 *)(&stack0x00003228 + lVar43) =
                   *(undefined8 *)(&stack0x00003248 + lVar43);
              *(undefined8 *)(&stack0x00003220 + lVar43) =
                   *(undefined8 *)(&stack0x00003258 + lVar43);
              puVar65 = &UNK_142f63118;
              *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051fcc0;
              pdb_1407e8520(&stack0x00002710 + lVar43,&UNK_142f63118,2,lVar94);
              *(undefined8 *)(&stack0x00003228 + lVar43) =
                   *(undefined8 *)(&stack0x00003248 + lVar43);
              *(undefined8 *)(&stack0x00003220 + lVar43) =
                   *(undefined8 *)(&stack0x00003258 + lVar43);
              *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051fce2;
              plVar46 = (longlong *)pdb_140f3bda0();
              if ((char)plVar46[2] == '\x01') {
                lVar94 = *plVar46;
                puVar65 = (undefined *)plVar46[1];
              }
              else {
                *(undefined8 *)(&stack0x00003228 + lVar43) =
                     *(undefined8 *)(&stack0x00003248 + lVar43);
                *(undefined8 *)(&stack0x00003220 + lVar43) =
                     *(undefined8 *)(&stack0x00003258 + lVar43);
                *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14052031f;
                lVar94 = pdb_140f4fd10();
                *plVar46 = lVar94;
                plVar46[1] = (longlong)puVar65;
                *(undefined1 *)(plVar46 + 2) = 1;
              }
              *plVar46 = lVar94 + 1;
              *(undefined8 *)(&stack0x00003130 + lVar43) = _UNK_142f63ef0;
              *(undefined8 *)(&stack0x00003138 + lVar43) = _UNK_142f63ef8;
              *(undefined4 *)(&stack0x00003120 + lVar43) = _UNK_142f63ee0;
              *(undefined4 *)(&stack0x00003124 + lVar43) = _UNK_142f63ee4;
              *(undefined4 *)(&stack0x00003128 + lVar43) = _UNK_142f63ee8;
              *(undefined4 *)(&stack0x0000312c + lVar43) = _UNK_142f63eec;
              *(longlong *)(&stack0x00003140 + lVar43) = lVar94;
              *(undefined **)(&stack0x00003148 + lVar43) = puVar65;
              *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051fd3e;
              pdb_1403b1940(&stack0x00003120 + lVar43,&UNK_142f63790,2);
              *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051fd58;
              pdb_1403b1940(&stack0x00003120 + lVar43,&UNK_142f63118,2);
              *(undefined4 *)(&stack0x00003238 + lVar43) =
                   *(undefined4 *)(&stack0x0000274c + lVar43);
              *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051fd85;
              pub_142e32760(&stack0x00002510 + lVar43,&stack0x00002750 + lVar43,0xd0);
              *(undefined8 *)(&stack0x00003230 + lVar43) =
                   *(undefined8 *)(&stack0x00002820 + lVar43);
              *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051fdac;
              pub_142e32760(&stack0x00002070 + lVar43,&stack0x00002828 + lVar43,0x100);
              *(undefined8 *)(&stack0x000030d8 + lVar43) =
                   *(undefined8 *)(&stack0x00002928 + lVar43);
              *(undefined8 *)(&stack0x000022d0 + lVar43) =
                   *(undefined8 *)(&stack0x00002930 + lVar43);
              *(undefined8 *)(&stack0x000022d8 + lVar43) =
                   *(undefined8 *)(&stack0x00002938 + lVar43);
              *(undefined8 *)(&stack0x000022e0 + lVar43) =
                   *(undefined8 *)(&stack0x00002940 + lVar43);
              *(undefined8 *)(&stack0x000022e8 + lVar43) =
                   *(undefined8 *)(&stack0x00002948 + lVar43);
              *(undefined8 *)(&stack0x000022f0 + lVar43) =
                   *(undefined8 *)(&stack0x00002950 + lVar43);
              *(undefined8 *)(&stack0x000022f8 + lVar43) =
                   *(undefined8 *)(&stack0x00002958 + lVar43);
              *(undefined8 *)(&stack0x00002300 + lVar43) =
                   *(undefined8 *)(&stack0x00002960 + lVar43);
              *(undefined8 *)(&stack0x00002fd8 + lVar43) =
                   *(undefined8 *)(&stack0x0000273c + lVar43);
              *(undefined8 *)(&stack0x00002fe0 + lVar43) =
                   *(undefined8 *)(&stack0x00002744 + lVar43);
              *(undefined8 *)(&stack0x00002fcc + lVar43) =
                   *(undefined8 *)(&stack0x00002730 + lVar43);
              *(undefined8 *)(&stack0x00002fd4 + lVar43) =
                   *(undefined8 *)(&stack0x00002738 + lVar43);
              *(undefined8 *)(&stack0x00002fbc + lVar43) =
                   *(undefined8 *)(&stack0x00002720 + lVar43);
              *(undefined8 *)(&stack0x00002fc4 + lVar43) =
                   *(undefined8 *)(&stack0x00002728 + lVar43);
              *(undefined8 *)(&stack0x00002fac + lVar43) =
                   *(undefined8 *)(&stack0x00002710 + lVar43);
              *(undefined8 *)(&stack0x00002fb4 + lVar43) =
                   *(undefined8 *)(&stack0x00002718 + lVar43);
              *(undefined8 *)(&stack0x00002f48 + lVar43) =
                   *(undefined8 *)(&stack0x00003140 + lVar43);
              *(undefined8 *)(&stack0x00002f50 + lVar43) =
                   *(undefined8 *)(&stack0x00003148 + lVar43);
              *(undefined8 *)(&stack0x00002f38 + lVar43) =
                   *(undefined8 *)(&stack0x00003130 + lVar43);
              *(undefined8 *)(&stack0x00002f40 + lVar43) =
                   *(undefined8 *)(&stack0x00003138 + lVar43);
              *(undefined8 *)(&stack0x00002f28 + lVar43) =
                   *(undefined8 *)(&stack0x00003120 + lVar43);
              *(undefined8 *)(&stack0x00002f30 + lVar43) =
                   *(undefined8 *)(&stack0x00003128 + lVar43);
              uVar52 = 0;
              goto code_r0x00014051f5b8;
            }
            uVar52 = 2;
            break;
          }
code_r0x00014052175e:
          *param_2 = (code)0x1;
code_r0x000140521761:
          uVar60 = *(ulonglong *)(pcVar66 + 0x988);
          uVar44 = *(ulonglong *)(pcVar66 + 0x980);
        }
      }
      *(undefined8 *)(&stack0x00003240 + lVar43) = uVar52;
      *(undefined4 *)(&stack0x000030a0 + lVar43) = *(undefined4 *)(&stack0x00002fd8 + lVar43);
      *(undefined4 *)(&stack0x000030a4 + lVar43) = *(undefined4 *)(&stack0x00002fdc + lVar43);
      *(undefined4 *)(&stack0x000030a8 + lVar43) = *(undefined4 *)(&stack0x00002fe0 + lVar43);
      *(undefined4 *)(&stack0x000030ac + lVar43) = *(undefined4 *)(&stack0x00002fe4 + lVar43);
      *(undefined4 *)(&stack0x00003090 + lVar43) = *(undefined4 *)(&stack0x00002fc8 + lVar43);
      *(undefined4 *)(&stack0x00003094 + lVar43) = *(undefined4 *)(&stack0x00002fcc + lVar43);
      *(undefined4 *)(&stack0x00003098 + lVar43) = *(undefined4 *)(&stack0x00002fd0 + lVar43);
      *(undefined4 *)(&stack0x0000309c + lVar43) = *(undefined4 *)(&stack0x00002fd4 + lVar43);
      *(undefined4 *)(&stack0x00003080 + lVar43) = *(undefined4 *)(&stack0x00002fb8 + lVar43);
      *(undefined4 *)(&stack0x00003084 + lVar43) = *(undefined4 *)(&stack0x00002fbc + lVar43);
      *(undefined4 *)(&stack0x00003088 + lVar43) = *(undefined4 *)(&stack0x00002fc0 + lVar43);
      *(undefined4 *)(&stack0x0000308c + lVar43) = *(undefined4 *)(&stack0x00002fc4 + lVar43);
      *(undefined4 *)(&stack0x00003070 + lVar43) = *(undefined4 *)(&stack0x00002fa8 + lVar43);
      *(undefined4 *)(&stack0x00003074 + lVar43) = *(undefined4 *)(&stack0x00002fac + lVar43);
      *(undefined4 *)(&stack0x00003078 + lVar43) = *(undefined4 *)(&stack0x00002fb0 + lVar43);
      *(undefined4 *)(&stack0x0000307c + lVar43) = *(undefined4 *)(&stack0x00002fb4 + lVar43);
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14052099b;
      pub_142e32760(&stack0x000023a0 + lVar43,&stack0x00002510 + lVar43,0xd0);
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x1405209b7;
      pub_142e32760(&stack0x00002610 + lVar43,&stack0x00002070 + lVar43,0x100);
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x1405209d3;
      pub_142e32760(&stack0x00002470 + lVar43,&stack0x000022d0 + lVar43,0x94);
      *(undefined8 *)(&stack0x00001b7c + lVar43) = *(undefined8 *)(&stack0x00002ee0 + lVar43);
      *(undefined8 *)(&stack0x00001b84 + lVar43) = *(undefined8 *)(&stack0x00002ee8 + lVar43);
      *(undefined8 *)(&stack0x00001b8c + lVar43) = *(undefined8 *)(&stack0x00002ef0 + lVar43);
      *(undefined8 *)(&stack0x00001b94 + lVar43) = *(undefined8 *)(&stack0x00002ef8 + lVar43);
      *(undefined8 *)(&stack0x00001b9c + lVar43) = *(undefined8 *)(&stack0x00002f00 + lVar43);
      *(undefined8 *)(&stack0x00001ba4 + lVar43) = *(undefined8 *)(&stack0x00002f08 + lVar43);
      *(undefined8 *)(&stack0x00001bac + lVar43) = *(undefined8 *)(&stack0x00002f10 + lVar43);
      *(undefined8 *)(&stack0x00001bb4 + lVar43) = *(undefined8 *)(&stack0x00002f18 + lVar43);
      *(undefined8 *)(&stack0x00001bbc + lVar43) = *(undefined8 *)(&stack0x00002f20 + lVar43);
      *(undefined8 *)(&stack0x00001bc4 + lVar43) = *(undefined8 *)(&stack0x00002f28 + lVar43);
      *(undefined8 *)(&stack0x00001bcc + lVar43) = *(undefined8 *)(&stack0x00002f30 + lVar43);
      *(undefined8 *)(&stack0x00001bd4 + lVar43) = *(undefined8 *)(&stack0x00002f38 + lVar43);
      *(undefined8 *)(&stack0x00001bdc + lVar43) = *(undefined8 *)(&stack0x00002f40 + lVar43);
      *(undefined8 *)(&stack0x00001be4 + lVar43) = *(undefined8 *)(&stack0x00002f48 + lVar43);
      *(undefined8 *)(&stack0x00001bec + lVar43) = *(undefined8 *)(&stack0x00002f50 + lVar43);
      pcVar66[0xa00] = (code)0x1;
      *(undefined4 *)(&stack0x00002de0 + lVar43) = *(undefined4 *)(&stack0x00003070 + lVar43);
      *(undefined4 *)(&stack0x00002de4 + lVar43) = *(undefined4 *)(&stack0x00003074 + lVar43);
      *(undefined4 *)(&stack0x00002de8 + lVar43) = *(undefined4 *)(&stack0x00003078 + lVar43);
      *(undefined4 *)(&stack0x00002dec + lVar43) = *(undefined4 *)(&stack0x0000307c + lVar43);
      *(undefined4 *)(&stack0x00002df0 + lVar43) = *(undefined4 *)(&stack0x00003080 + lVar43);
      *(undefined4 *)(&stack0x00002df4 + lVar43) = *(undefined4 *)(&stack0x00003084 + lVar43);
      *(undefined4 *)(&stack0x00002df8 + lVar43) = *(undefined4 *)(&stack0x00003088 + lVar43);
      *(undefined4 *)(&stack0x00002dfc + lVar43) = *(undefined4 *)(&stack0x0000308c + lVar43);
      *(undefined4 *)(&stack0x00002e00 + lVar43) = *(undefined4 *)(&stack0x00003090 + lVar43);
      *(undefined4 *)(&stack0x00002e04 + lVar43) = *(undefined4 *)(&stack0x00003094 + lVar43);
      *(undefined4 *)(&stack0x00002e08 + lVar43) = *(undefined4 *)(&stack0x00003098 + lVar43);
      *(undefined4 *)(&stack0x00002e0c + lVar43) = *(undefined4 *)(&stack0x0000309c + lVar43);
      *(undefined4 *)(&stack0x00002e10 + lVar43) = *(undefined4 *)(&stack0x000030a0 + lVar43);
      *(undefined4 *)(&stack0x00002e14 + lVar43) = *(undefined4 *)(&stack0x000030a4 + lVar43);
      *(undefined4 *)(&stack0x00002e18 + lVar43) = *(undefined4 *)(&stack0x000030a8 + lVar43);
      *(undefined4 *)(&stack0x00002e1c + lVar43) = *(undefined4 *)(&stack0x000030ac + lVar43);
      puVar51 = &stack0x00001400 + lVar43;
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520a9a;
      pub_142e32760(puVar51,&stack0x000023a0 + lVar43,0xd0);
      puVar70 = &stack0x00001000 + lVar43;
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520ab2;
      pub_142e32760(puVar70,&stack0x00002610 + lVar43,0x100);
      puVar88 = &stack0x00001740 + lVar43;
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520aca;
      pub_142e32760(puVar88,&stack0x00002470 + lVar43,0x94);
      puVar64 = &stack0x000006b0 + lVar43;
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520ae6;
      pub_142e32760(puVar64,&stack0x000019a0 + lVar43,0x254);
      if (*(uint *)(pcVar66 + 0x260) != 2) {
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520b02;
        pdb_1404b6860(*(longlong *)(&stack0x00003250 + lVar43) + 0x260);
      }
      param_2 = *(code **)(&stack0x00003250 + lVar43);
      param_2[0x950] = (code)0x1;
      unaff_R13 = *(code **)(&stack0x00003240 + lVar43);
      *(code **)(param_2 + 0x260) = unaff_R13;
      puVar79 = &stack0x00002de0;
    }
    puVar49 = (uint *)(puVar79 + lVar43);
    *(undefined8 *)(param_2 + 0x270) = 0;
    *(undefined8 *)(param_2 + 0x280) = 0x8000000000000000;
    *(uint *)(param_2 + 0x2a0) = 8;
    uVar42 = puVar49[1];
    uVar58 = puVar49[2];
    uVar99 = puVar49[3];
    uVar100 = puVar49[4];
    uVar40 = puVar49[5];
    uVar63 = puVar49[6];
    uVar22 = puVar49[7];
    uVar23 = puVar49[8];
    uVar24 = puVar49[9];
    uVar25 = puVar49[10];
    uVar26 = puVar49[0xb];
    uVar27 = puVar49[0xc];
    uVar28 = puVar49[0xd];
    uVar29 = puVar49[0xe];
    uVar30 = puVar49[0xf];
    *(uint *)(param_2 + 0x2a4) = *puVar49;
    *(uint *)(param_2 + 0x2a8) = uVar42;
    *(uint *)(param_2 + 0x2ac) = uVar58;
    *(uint *)(param_2 + 0x2b0) = uVar99;
    *(uint *)(param_2 + 0x2b4) = uVar100;
    *(uint *)(param_2 + 0x2b8) = uVar40;
    *(uint *)(param_2 + 700) = uVar63;
    *(uint *)(param_2 + 0x2c0) = uVar22;
    *(uint *)(param_2 + 0x2c4) = uVar23;
    *(uint *)(param_2 + 0x2c8) = uVar24;
    *(uint *)(param_2 + 0x2cc) = uVar25;
    *(uint *)(param_2 + 0x2d0) = uVar26;
    *(uint *)(param_2 + 0x2d4) = uVar27;
    *(uint *)(param_2 + 0x2d8) = uVar28;
    *(uint *)(param_2 + 0x2dc) = uVar29;
    *(uint *)(param_2 + 0x2e0) = uVar30;
    *(uint *)(param_2 + 0x2e4) = *(uint *)(&stack0x00003238 + lVar43);
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520d83;
    pub_142e32760(param_2 + 0x2e8,puVar51,0xd0);
    uVar52 = *(undefined8 *)(&stack0x00003230 + lVar43);
    *(undefined8 *)(param_2 + 0x3b8) = uVar52;
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520da6;
    pub_142e32760(param_2 + 0x3c0,puVar70,0x100);
    *(undefined8 *)(param_2 + 0x4c0) = *(undefined8 *)(&stack0x000030d8 + lVar43);
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520dc9;
    pub_142e32760(param_2 + 0x4c8,puVar88,0x94);
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520dde;
    pub_142e32760(param_2 + 0x55c,puVar64,0x254);
    *(undefined8 *)(param_2 + 0x7b0) = 0;
    *(undefined8 *)(param_2 + 0x7b8) = 8;
    *(undefined8 *)(param_2 + 0x7c0) = 0;
    *(undefined8 *)(param_2 + 0x7c8) = 0x8000000000000000;
    *(undefined8 *)(param_2 + 0x8c0) = 0x8000000000000000;
    *(undefined8 *)(param_2 + 0x8d8) = 0x8000000000000000;
    *(uint *)(param_2 + 0x8f0) = 0;
    *(uint *)(param_2 + 0x8f8) = 0;
    *(undefined8 *)(param_2 + 0x900) = uVar52;
    *(undefined8 *)(param_2 + 0x908) = uVar52;
    *(undefined8 *)(param_2 + 0x910) = 0;
    *(undefined8 *)(param_2 + 0x920) = 0;
code_r0x000140520e4c:
    param_2[0x928] = (code)0x1;
    unaff_R12 = param_2 + 0x950;
    param_2[0x950] = (code)0x0;
    puVar51 = &stack0x000019a0 + lVar43;
code_r0x000140520e6f:
    puVar70 = (undefined1 *)((longlong)puVar62 + lVar43);
    *(undefined8 *)((longlong)puVar62 + lVar43 + -8) = 0x140520e7a;
    pub_142e32760(puVar51);
    puVar88 = (undefined1 *)((longlong)puVar62 + lVar43);
    if ((int)unaff_R13 != 2) {
code_r0x000140520e8a:
      *(undefined8 *)(puVar88 + -8) = 0x140520ea9;
      pub_142e32760(&stack0x00002718 + lVar43,&stack0x000019a0 + lVar43,0x6c8);
      *(code **)(&stack0x00002710 + lVar43) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x000140520ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar66 = (code *)(*(code *)(&UNK_142f64388 +
                                  *(int *)(&UNK_142f64388 +
                                          (ulonglong)*(uint *)(&stack0x00002750 + lVar43) * 4)))
                                  (&UNK_142f64388,
                                   &UNK_142f64388 +
                                   *(int *)(&UNK_142f64388 +
                                           (ulonglong)*(uint *)(&stack0x00002750 + lVar43) * 4));
      return pcVar66;
    }
    uVar52 = 2;
    goto code_r0x0001405215be;
  case (code)0xc:
    *UNRECOVERED_JUMPTABLE = (code)((byte)*UNRECOVERED_JUMPTABLE ^ bVar38);
    (&UNK_142f64297)[uVar44] = (&UNK_142f64297)[uVar44] + '\f';
    bVar38 = bVar38 ^ (byte)*UNRECOVERED_JUMPTABLE;
    pbVar48 = (byte *)CONCAT71(uVar54,bVar38);
    pbVar48[-0x77] = pbVar48[-0x77] + 0xc;
    *pbVar48 = *pbVar48 ^ bVar38;
    cRam000000064ecf4ec1 = cRam000000064ecf4ec1 + '\f';
    *pbVar48 = *pbVar48 | bVar69;
    *pbVar48 = *pbVar48 + bVar38;
    pcVar59 = (code *)&UNK_142f638e8;
    goto code_r0x000140520563;
  case (code)0xd:
    (&UNK_142f64299)[uVar44] = (&UNK_142f64299)[uVar44] + '\f';
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x1405204e5;
    pdb_142dc8570();
  case (code)0xe:
    pcVar61 = (char *)CONCAT71(uVar54,9);
    *pcVar61 = *pcVar61 + '\t';
    if (pcVar61 < (char *)0x1000) goto code_r0x00014052175e;
    goto code_r0x00014051d0ec;
  case (code)0xf:
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0xffffffffe9000009;
    *(uint *)param_3 = *(uint *)param_3 & uVar40;
    (&UNK_142f64299)[uVar44] = (&UNK_142f64299)[uVar44] + '\f';
    UNRECOVERED_JUMPTABLE =
         (code *)CONCAT62((int6)((ulonglong)UNRECOVERED_JUMPTABLE >> 0x10),CONCAT11(0x43,bVar38));
    pcVar59 = (code *)CONCAT62(0x142f6,CONCAT11(uVar39,0xc));
    *(uint *)UNRECOVERED_JUMPTABLE = *(uint *)UNRECOVERED_JUMPTABLE | (uint)UNRECOVERED_JUMPTABLE;
  case (code)0x1b:
    cVar56 = (char)pcVar59;
    UNRECOVERED_JUMPTABLE[-0x77] = (code)((char)UNRECOVERED_JUMPTABLE[-0x77] + cVar56);
    *param_3 = (code)((char)*param_3 + cVar56);
    cVar37 = in(CONCAT11(0x86,cVar57));
    puVar49 = (uint *)CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8),cVar37);
    *puVar49 = *puVar49 | (uint)puVar49;
    *(char *)((longlong)puVar49 + -0x73) = *(char *)((longlong)puVar49 + -0x73) + cVar56;
    *(char *)puVar49 = (char)*puVar49 + cVar37;
code_r0x00014051ce53:
    *(code **)(&stack0x00003258 + lVar43) = pcVar59;
                    /* WARNING: Could not recover jumptable at 0x00014051ce68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar66 = (code *)(*(code *)(&UNK_142f64348 + *(int *)(&UNK_142f64348 + (longlong)puVar49 * 4)))
                                ();
    return pcVar66;
  case (code)0x12:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
    goto code_r0x00014051d167;
  case (code)0x13:
    goto code_r0x00014051d18e;
  case (code)0x14:
    *UNRECOVERED_JUMPTABLE = (code)((byte)*UNRECOVERED_JUMPTABLE ^ bVar38);
    (&UNK_142f64299)[uVar44] = (&UNK_142f64299)[uVar44] + '\f';
code_r0x000140520563:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520568;
    pdb_142dc8590(pcVar59);
  case (code)0x15:
    pbVar48 = (byte *)((ulonglong)puVar90 & 0xffffffff);
    *pbVar48 = *pbVar48 & bVar69;
    *pbVar48 = *pbVar48 + (char)pbVar48;
code_r0x0001405204f2:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x1405204fe;
    pdb_142dc8570(&UNK_142f63778);
  case (code)0x16:
    puVar49 = (uint *)CONCAT71(uVar54,cVar56);
    *puVar49 = *puVar49 | (uint)puVar49;
    *param_3 = (code)((char)*param_3 + 0xc);
    *(char *)puVar49 = (char)*puVar49 + cVar56;
                    /* WARNING: Could not recover jumptable at 0x00014051d1d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar66 = (code *)(*(code *)(&UNK_142f64358 + *(int *)(&UNK_142f64358 + (longlong)puVar49 * 4)))
                                ();
    return pcVar66;
  case (code)0x17:
    pcVar66 = (code *)(ulonglong)(uVar63 + 0x960);
code_r0x00014051ce92:
    pcVar59 = (code *)&UNK_142f64378;
code_r0x00014051ce99:
    iVar2 = *(int *)(pcVar59 + (longlong)UNRECOVERED_JUMPTABLE * 4);
    *(code **)(&stack0x00003240 + lVar43) = pcVar66;
                    /* WARNING: Could not recover jumptable at 0x00014051cea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar66 = (code *)(*(pcVar59 + iVar2))();
    return pcVar66;
  case (code)0x18:
    bVar38 = bVar38 + (char)*UNRECOVERED_JUMPTABLE + bVar96;
    pbVar47 = (byte *)CONCAT71(uVar54,bVar38);
    pbVar48 = pbVar47 + -0x75;
    *pbVar48 = *pbVar48 + 0xc;
    pcVar61 = (char *)(CONCAT71(uVar54,bVar38 ^ *pbVar47) + -0x77);
    *pcVar61 = *pcVar61 + '\f';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x19:
    *(uint *)(param_2 + -0x7a74b7fe) = *(uint *)(param_2 + -0x7a74b7fe) | 0x3218;
    *(code **)(&stack0x00003020 + lVar43) = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14052043a;
    pdb_142dc8590(&UNK_142f638b8);
  case (code)0x1a:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
    pcVar66 = unaff_R12;
code_r0x00014051d463:
    *(code **)(&stack0x000019b0 + lVar43) = UNRECOVERED_JUMPTABLE;
    *(undefined4 *)(&stack0x000019a0 + lVar43) = *(undefined4 *)(&stack0x00003108 + lVar43);
    *(undefined4 *)(&stack0x000019a4 + lVar43) = *(undefined4 *)(&stack0x0000310c + lVar43);
    *(undefined4 *)(&stack0x000019a8 + lVar43) = *(undefined4 *)(&stack0x00003110 + lVar43);
    *(undefined4 *)(&stack0x000019ac + lVar43) = *(undefined4 *)(&stack0x00003114 + lVar43);
    *(undefined8 *)(&stack0x000031b8 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
    *(undefined8 *)(&stack0x000031b0 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
    *(undefined1 **)(&stack0xffffffffffffffe0 + lVar43) = &stack0x000031d8 + lVar43;
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d4b5;
    pdb_140dd7f80(unaff_R14,unaff_R15,pcVar66,&stack0x000019a0 + lVar43);
code_r0x00014051d6ce:
    lVar94 = *(longlong *)(unaff_RBX + 0x10);
    *(undefined8 *)(&stack0x000031b8 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
    *(undefined8 *)(&stack0x000031b0 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
    uVar41 = 0x42f63118;
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d709;
    uVar44 = pdb_140154e10(unaff_R13,&UNK_142f63118,2,lVar94 + 0x520);
    if ((uVar44 & 1) == 0) {
      *(undefined8 *)(&stack0x00003240 + lVar43) = 2;
      lVar94 = *(longlong *)(&stack0x00003250 + lVar43);
    }
    else {
      *(code **)(&stack0x00003238 + lVar43) = unaff_R13;
      *(code **)(&stack0x00003230 + lVar43) = param_3;
      *(undefined4 *)(*(longlong *)(&stack0x00003250 + lVar43) + 0xc40) = uVar41;
      lVar94 = *(longlong *)(unaff_RBX + 0x10);
      uVar52 = *(undefined8 *)(unaff_RBX + 0x18);
      uVar95 = *(undefined8 *)(lVar94 + 0x6a0);
      *(undefined8 *)(&stack0x000030d0 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
      *(undefined8 *)(&stack0x000030c8 + lVar43) = *(undefined8 *)(&stack0x00003240 + lVar43);
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d763;
      lVar67 = pdb_1407e47d0(uVar52,uVar95);
      if (lVar67 == 0) {
        lVar94 = *(longlong *)(&stack0x00003250 + lVar43);
        param_3 = *(code **)(&stack0x00003230 + lVar43);
code_r0x00014051e312:
        *(undefined2 *)(lVar94 + 0xc44) = 0;
        *(undefined8 *)(&stack0x00003240 + lVar43) = 2;
      }
      else {
        lVar7 = *(longlong *)(unaff_RBX + 0x30);
        uVar41 = 0;
        if ((lVar7 != 0) && (uVar41 = 0, *(int *)(lVar7 + 0x690) == 1)) {
          uVar41 = *(undefined4 *)(lVar7 + 0x694);
        }
        *(undefined4 *)(&stack0x00003248 + lVar43) = uVar41;
        lVar94 = lVar94 + 0x520;
        *(undefined8 *)(&stack0x000030d0 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
        uVar52 = *(undefined8 *)(&stack0x00003240 + lVar43);
        *(undefined8 *)(&stack0x000030c8 + lVar43) = uVar52;
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d7c2;
        pdb_140754df0(&stack0x00002730 + lVar43,lVar94);
        uVar68 = *(undefined8 *)unaff_RBX;
        uVar3 = *(undefined8 *)(unaff_RBX + 8);
        *(undefined8 *)(&stack0x00002710 + lVar43) = uVar68;
        *(undefined8 *)(&stack0x00002718 + lVar43) = uVar3;
        *(undefined8 *)(&stack0x00002720 + lVar43) = *(undefined8 *)(&stack0x00003238 + lVar43);
        *(longlong *)(&stack0x00002728 + lVar43) = lVar94;
        *(longlong *)(&stack0x00002760 + lVar43) = lVar67;
        *(undefined8 *)(&stack0x00002768 + lVar43) = uVar95;
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d80d;
        pub_142e32760(&stack0x00002770 + lVar43,*(undefined8 *)(&stack0x00003238 + lVar43),600);
        *(undefined4 *)(&stack0x000029c8 + lVar43) = *(undefined4 *)(&stack0x00003248 + lVar43);
        (&stack0x000029cc)[lVar43] = lVar7 != 0;
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d83f;
        pub_142e32760(&stack0x000019a0 + lVar43,&stack0x00002718 + lVar43,0x2b8);
        lVar94 = *(longlong *)(&stack0x00003250 + lVar43);
        *(undefined2 *)(lVar94 + 0xc44) = 0x101;
        *(undefined8 *)(lVar94 + 0x960) = uVar68;
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d86b;
        pub_142e32760(lVar94 + 0x968,&stack0x000019a0 + lVar43,0x2b8);
        uVar95 = *(undefined8 *)(unaff_RBX + 0x28);
        lVar94 = *(longlong *)(lVar94 + 0x9b0);
        *(undefined8 *)(&stack0x000031a8 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
        *(undefined8 *)(&stack0x000031a0 + lVar43) = uVar52;
        *(undefined **)(&stack0xffffffffffffffe0 + lVar43) = &UNK_142f637b0;
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d8a6;
        uVar52 = pdb_14074f0b0(uVar95,lVar94,&UNK_142f62fb0,uVar52);
        param_3 = *(code **)(&stack0x00003230 + lVar43);
        lVar67 = *(longlong *)(&stack0x00003250 + lVar43);
        *(undefined8 *)(lVar67 + 0xc20) = uVar52;
        *(longlong *)(lVar67 + 0xc28) = lVar94;
        pcVar66 = *(code **)(lVar94 + 0x18);
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d8cf;
        cVar37 = (*pcVar66)(uVar52,param_3);
        if (cVar37 == '\x02') {
          **(undefined1 **)(&stack0x00003258 + lVar43) = 3;
          **(undefined8 **)(&stack0x000030e8 + lVar43) = 3;
          pcVar66 = (code *)0x3;
          goto code_r0x0001405215e2;
        }
        *(undefined8 *)(&stack0x00003230 + lVar43) =
             *(undefined8 *)(*(longlong *)(&stack0x00003250 + lVar43) + 0xc20);
        puVar4 = *(undefined8 **)(*(longlong *)(&stack0x00003250 + lVar43) + 0xc28);
        *(undefined8 **)(&stack0x00003238 + lVar43) = puVar4;
        pcVar66 = (code *)*puVar4;
        if (pcVar66 != (code *)0x0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d941;
          (*pcVar66)(*(undefined8 *)(&stack0x00003230 + lVar43));
        }
        uVar44 = *(ulonglong *)(*(longlong *)(&stack0x00003238 + lVar43) + 8);
        uVar52 = *(undefined8 *)(&stack0x00003258 + lVar43);
        if (uVar44 != 0) {
          uVar60 = *(ulonglong *)(*(longlong *)(&stack0x00003238 + lVar43) + 0x10);
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d969;
          pub_1406abac0(*(byte **)(&stack0x00003230 + lVar43),uVar44,uVar60);
        }
        lVar67 = *(longlong *)(&stack0x00003250 + lVar43);
        lVar7 = *(longlong *)(&stack0x00003240 + lVar43);
        if (cVar37 != '\x01') {
          lVar5 = *(longlong *)(lVar7 + 0x28);
          lVar94 = lVar67;
          if (lVar5 != 0) {
            lVar67 = lVar5 * 0x10 + 0x10;
            uVar44 = lVar5 + lVar67 + 0x11;
            if (uVar44 != 0) {
              lVar7 = *(longlong *)(lVar7 + 0x20);
              *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e2cd;
              pub_1406abac0((byte *)(lVar7 - lVar67),uVar44,0x10);
            }
          }
          goto code_r0x00014051e312;
        }
        puVar4 = (undefined8 *)(lVar67 + 0x9c0);
        *(undefined8 *)(&stack0x000031a8 + lVar43) = uVar52;
        *(longlong *)(&stack0x000031a0 + lVar43) = lVar7;
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d9aa;
        uVar41 = pdb_140756e50(puVar4,&UNK_142f63790,2);
        *(undefined4 *)(&stack0x000030e0 + lVar43) = uVar41;
        *(undefined8 *)(&stack0x000031a8 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
        *(longlong *)(&stack0x000031a0 + lVar43) = lVar7;
        puVar65 = &UNK_142f63118;
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051d9db;
        uVar41 = pdb_140756e50(puVar4,&UNK_142f63118,2);
        plVar46 = plRam0000000143ca3d48;
        *(undefined4 *)(&stack0x00003178 + lVar43) = uVar41;
        if (*_DAT_143ca4b08 == 0) {
          bVar38 = *(byte *)(plRam0000000143ca3d48 + 2);
          puVar65 = (undefined *)(ulonglong)bVar38;
          if (2 < bVar38) {
            *(undefined8 *)(&stack0x000031a8 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
            *(longlong *)(&stack0x000031a0 + lVar43) = lVar7;
            *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520357;
            uVar42 = pdb_142db8070(plRam0000000143ca3d48);
            puVar65 = (undefined *)(ulonglong)uVar42;
            if ((char)uVar42 != '\0') goto code_r0x00014051e5bb;
            goto code_r0x00014051d9f5;
          }
          if (bVar38 == 0) goto code_r0x00014051d9f5;
code_r0x00014051e5bb:
          lVar94 = *plVar46;
          *(undefined8 *)(&stack0x000031a8 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(longlong *)(&stack0x000031a0 + lVar43) = lVar7;
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e5d8;
          cVar37 = pdb_140dd7f60(lVar94);
          if (cVar37 == '\0') goto code_r0x00014051d9f5;
          lVar94 = *plVar46;
          lVar5 = *(longlong *)(lVar94 + 0x38);
          if (lVar5 == 0) {
            *(undefined8 *)(&stack0x000031a8 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
            *(longlong *)(&stack0x000031a0 + lVar43) = lVar7;
            *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x1405207c0;
            pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f63798);
            goto code_r0x0001405216a5;
          }
          uVar41 = *(undefined4 *)(lVar94 + 0x40);
          uVar8 = *(undefined4 *)(lVar94 + 0x44);
          uVar9 = *(undefined4 *)(lVar94 + 0x48);
          uVar10 = *(undefined4 *)(lVar94 + 0x4c);
          *(undefined8 *)(&stack0x00002710 + lVar43) = *(undefined8 *)(lVar94 + 0x30);
          *(longlong *)(&stack0x00002718 + lVar43) = lVar5;
          *(undefined4 *)(&stack0x00002720 + lVar43) = uVar41;
          *(undefined4 *)(&stack0x00002724 + lVar43) = uVar8;
          *(undefined4 *)(&stack0x00002728 + lVar43) = uVar9;
          *(undefined4 *)(&stack0x0000272c + lVar43) = uVar10;
          *(undefined8 *)(&stack0x00002730 + lVar43) = 0;
          *(undefined1 **)(&stack0x000019a0 + lVar43) = &stack0x000030e0 + lVar43;
          *(code **)(&stack0x000019a8 + lVar43) = pdb_140f73bd0;
          *(undefined1 **)(&stack0x000019b0 + lVar43) = &stack0x00003178 + lVar43;
          *(code **)(&stack0x000019b8 + lVar43) = pdb_140f73bd0;
          *(undefined **)(&stack0x000031c0 + lVar43) = &UNK_142f63288;
          *(undefined1 **)(&stack0x000031c8 + lVar43) = &stack0x000019a0 + lVar43;
          *(undefined1 **)(&stack0x000031f0 + lVar43) = &stack0x00002710 + lVar43;
          *(undefined1 **)(&stack0x000031f8 + lVar43) = &stack0x000031c0 + lVar43;
          *(undefined **)(&stack0x00003200 + lVar43) = &UNK_142f62e58;
          *(undefined1 **)(&stack0x000031d8 + lVar43) = &stack0x000031f0 + lVar43;
          *(undefined8 *)(&stack0x000031e0 + lVar43) = 1;
          *(longlong *)(&stack0x000031e8 + lVar43) = lVar94 + 0x30;
          *(undefined8 *)(&stack0x000031a8 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(longlong *)(&stack0x000031a0 + lVar43) = lVar7;
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e6d5;
          pdb_140331e30(&stack0x000031d8 + lVar43);
        }
        else {
code_r0x00014051d9f5:
          plVar46 = plRam0000000143ca3d48;
          if ((*_DAT_143ca4ab0 == 0) &&
             (4 < *(ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90))) {
            lVar94 = *plRam0000000143ca3d48;
            uVar41 = *(undefined4 *)(lVar94 + 0x20);
            uVar8 = *(undefined4 *)(lVar94 + 0x24);
            uVar9 = *(undefined4 *)(lVar94 + 0x28);
            uVar10 = *(undefined4 *)(lVar94 + 0x2c);
            *(undefined8 *)(&stack0x000030f0 + lVar43) = 5;
            *(undefined4 *)(&stack0x000030f8 + lVar43) = uVar41;
            *(undefined4 *)(&stack0x000030fc + lVar43) = uVar8;
            *(undefined4 *)(&stack0x00003100 + lVar43) = uVar9;
            *(undefined4 *)(&stack0x00003104 + lVar43) = uVar10;
            *(undefined8 *)(&stack0x000031a8 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
            *(longlong *)(&stack0x000031a0 + lVar43) = lVar7;
            *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051da56;
            uVar52 = pdb_140f33290();
            pcVar66 = *(code **)(puVar65 + 0x18);
            *(undefined8 *)(&stack0x000031a8 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
            *(longlong *)(&stack0x000031a0 + lVar43) = lVar7;
            *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051da82;
            cVar37 = (*pcVar66)(uVar52,&stack0x000030f0 + lVar43);
            if (cVar37 != '\0') {
              lVar5 = *plVar46;
              lVar6 = *(longlong *)(lVar5 + 0x38);
              if (lVar6 == 0) {
                *(undefined8 *)(&stack0x000031a8 + lVar43) =
                     *(undefined8 *)(&stack0x00003258 + lVar43);
                *(longlong *)(&stack0x000031a0 + lVar43) = lVar7;
                *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14052081f;
                pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f63798);
                goto code_r0x0001405216a5;
              }
              uVar95 = *(undefined8 *)(lVar5 + 0x40);
              uVar68 = *(undefined8 *)(lVar5 + 0x48);
              *(undefined8 *)(&stack0x00002710 + lVar43) = *(undefined8 *)(lVar5 + 0x30);
              *(longlong *)(&stack0x00002718 + lVar43) = lVar6;
              *(undefined8 *)(&stack0x00002720 + lVar43) = uVar95;
              *(undefined8 *)(&stack0x00002728 + lVar43) = uVar68;
              *(undefined8 *)(&stack0x00002730 + lVar43) = 0;
              *(undefined1 **)(&stack0x000019a0 + lVar43) = &stack0x000030e0 + lVar43;
              *(code **)(&stack0x000019a8 + lVar43) = pdb_140f73bd0;
              *(undefined1 **)(&stack0x000019b0 + lVar43) = &stack0x00003178 + lVar43;
              *(code **)(&stack0x000019b8 + lVar43) = pdb_140f73bd0;
              *(undefined **)(&stack0x00003168 + lVar43) = &UNK_142f63288;
              *(undefined1 **)(&stack0x00003170 + lVar43) = &stack0x000019a0 + lVar43;
              *(undefined1 **)(&stack0x000031d8 + lVar43) = &stack0x00002710 + lVar43;
              *(undefined1 **)(&stack0x000031e0 + lVar43) = &stack0x00003168 + lVar43;
              *(undefined **)(&stack0x000031e8 + lVar43) = &UNK_142f62e58;
              *(undefined1 **)(&stack0x000031c0 + lVar43) = &stack0x000031d8 + lVar43;
              *(undefined8 *)(&stack0x000031c8 + lVar43) = 1;
              *(longlong *)(&stack0x000031d0 + lVar43) = lVar5 + 0x30;
              *(undefined8 *)(&stack0x00003200 + lVar43) =
                   *(undefined8 *)(&stack0x00003100 + lVar43);
              *(undefined4 *)(&stack0x000031f0 + lVar43) =
                   *(undefined4 *)(&stack0x000030f0 + lVar43);
              *(undefined4 *)(&stack0x000031f4 + lVar43) =
                   *(undefined4 *)(&stack0x000030f4 + lVar43);
              *(undefined4 *)(&stack0x000031f8 + lVar43) =
                   *(undefined4 *)(&stack0x000030f8 + lVar43);
              *(undefined4 *)(&stack0x000031fc + lVar43) =
                   *(undefined4 *)(&stack0x000030fc + lVar43);
              *(undefined8 *)(&stack0x000031a8 + lVar43) =
                   *(undefined8 *)(&stack0x00003258 + lVar43);
              *(longlong *)(&stack0x000031a0 + lVar43) = lVar7;
              *(undefined1 **)(&stack0xffffffffffffffe0 + lVar43) = &stack0x000031c0 + lVar43;
              *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051dbb0;
              pdb_140dd7f80(lVar94,uVar52,puVar65,&stack0x000031f0 + lVar43);
            }
          }
        }
        lVar94 = *(longlong *)(&stack0x00003250 + lVar43);
        *(undefined4 *)(&stack0x00003248 + lVar43) = *(undefined4 *)(lVar94 + 0x9fc);
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e702;
        pub_142e32760(&stack0x000023a0 + lVar43,lVar94 + 0xa00,0xd0);
        *(undefined8 *)(&stack0x00003258 + lVar43) = *(undefined8 *)(lVar94 + 0xad0);
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e729;
        pub_142e32760(&stack0x00002610 + lVar43,lVar94 + 0xad8,0x100);
        *(undefined8 *)(&stack0x00003238 + lVar43) = *(undefined8 *)(lVar94 + 0xbd8);
        *(undefined8 *)(&stack0x000024a0 + lVar43) = *(undefined8 *)(lVar94 + 0xc10);
        uVar52 = *(undefined8 *)(lVar94 + 0xc08);
        *(undefined8 *)(&stack0x00002490 + lVar43) = *(undefined8 *)(lVar94 + 0xc00);
        *(undefined8 *)(&stack0x00002498 + lVar43) = uVar52;
        uVar52 = *(undefined8 *)(lVar94 + 0xbf8);
        *(undefined8 *)(&stack0x00002480 + lVar43) = *(undefined8 *)(lVar94 + 0xbf0);
        *(undefined8 *)(&stack0x00002488 + lVar43) = uVar52;
        uVar52 = *(undefined8 *)(lVar94 + 0xbe8);
        *(undefined8 *)(&stack0x00002470 + lVar43) = *(undefined8 *)(lVar94 + 0xbe0);
        *(undefined8 *)(&stack0x00002478 + lVar43) = uVar52;
        uVar52 = *(undefined8 *)(lVar67 + 0x9c8);
        uVar95 = *(undefined8 *)(lVar67 + 0x9d0);
        uVar68 = *(undefined8 *)(lVar67 + 0x9d8);
        uVar3 = *(undefined8 *)(lVar67 + 0x9e0);
        uVar31 = *(undefined8 *)(lVar67 + 0x9e8);
        uVar32 = *(undefined8 *)(lVar67 + 0x9ec);
        uVar33 = *(undefined8 *)(lVar67 + 0x9f4);
        *(undefined8 *)(&stack0x00003074 + lVar43) = *puVar4;
        *(undefined8 *)(&stack0x0000307c + lVar43) = uVar52;
        *(undefined8 *)(&stack0x00003084 + lVar43) = uVar95;
        *(undefined8 *)(&stack0x0000308c + lVar43) = uVar68;
        *(undefined8 *)(&stack0x00003094 + lVar43) = uVar3;
        *(undefined8 *)(&stack0x0000309c + lVar43) = uVar31;
        *(undefined8 *)(&stack0x000030a0 + lVar43) = uVar32;
        *(undefined8 *)(&stack0x000030a8 + lVar43) = uVar33;
        uVar52 = *(undefined8 *)(lVar94 + 0x980);
        uVar95 = *(undefined8 *)(lVar94 + 0x988);
        uVar68 = *(undefined8 *)(lVar94 + 0x990);
        uVar3 = *(undefined8 *)(lVar94 + 0x998);
        uVar31 = *(undefined8 *)(lVar94 + 0x9a8);
        *(undefined8 *)(&stack0x00003010 + lVar43) = *(undefined8 *)(lVar94 + 0x9a0);
        *(undefined8 *)(&stack0x00003018 + lVar43) = uVar31;
        *(undefined8 *)(&stack0x00003000 + lVar43) = uVar68;
        *(undefined8 *)(&stack0x00003008 + lVar43) = uVar3;
        *(undefined8 *)(&stack0x00002ff0 + lVar43) = uVar52;
        *(undefined8 *)(&stack0x00002ff8 + lVar43) = uVar95;
        *(undefined2 *)(lVar94 + 0xc44) = 0;
        *(undefined8 *)(&stack0x00003240 + lVar43) = 0;
      }
    }
    *(undefined4 *)(&stack0x00003150 + lVar43) = *(undefined4 *)(&stack0x000030a0 + lVar43);
    *(undefined4 *)(&stack0x00003154 + lVar43) = *(undefined4 *)(&stack0x000030a4 + lVar43);
    *(undefined4 *)(&stack0x00003158 + lVar43) = *(undefined4 *)(&stack0x000030a8 + lVar43);
    *(undefined4 *)(&stack0x0000315c + lVar43) = *(undefined4 *)(&stack0x000030ac + lVar43);
    *(undefined4 *)(&stack0x00003140 + lVar43) = *(undefined4 *)(&stack0x00003090 + lVar43);
    *(undefined4 *)(&stack0x00003144 + lVar43) = *(undefined4 *)(&stack0x00003094 + lVar43);
    *(undefined4 *)(&stack0x00003148 + lVar43) = *(undefined4 *)(&stack0x00003098 + lVar43);
    *(undefined4 *)(&stack0x0000314c + lVar43) = *(undefined4 *)(&stack0x0000309c + lVar43);
    *(undefined4 *)(&stack0x00003130 + lVar43) = *(undefined4 *)(&stack0x00003080 + lVar43);
    *(undefined4 *)(&stack0x00003134 + lVar43) = *(undefined4 *)(&stack0x00003084 + lVar43);
    *(undefined4 *)(&stack0x00003138 + lVar43) = *(undefined4 *)(&stack0x00003088 + lVar43);
    *(undefined4 *)(&stack0x0000313c + lVar43) = *(undefined4 *)(&stack0x0000308c + lVar43);
    *(undefined4 *)(&stack0x00003120 + lVar43) = *(undefined4 *)(&stack0x00003070 + lVar43);
    *(undefined4 *)(&stack0x00003124 + lVar43) = *(undefined4 *)(&stack0x00003074 + lVar43);
    *(undefined4 *)(&stack0x00003128 + lVar43) = *(undefined4 *)(&stack0x00003078 + lVar43);
    *(undefined4 *)(&stack0x0000312c + lVar43) = *(undefined4 *)(&stack0x0000307c + lVar43);
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e82c;
    pub_142e32760(&stack0x000022d0 + lVar43,&stack0x000023a0 + lVar43,0xd0);
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e848;
    pub_142e32760(&stack0x00002510 + lVar43,&stack0x00002610 + lVar43,0x100);
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e864;
    pub_142e32760(&stack0x00002ee0 + lVar43,&stack0x00002470 + lVar43,0x94);
    *(undefined8 *)(&stack0x0000224c + lVar43) = *(undefined8 *)(&stack0x00002fa8 + lVar43);
    *(undefined8 *)(&stack0x00002254 + lVar43) = *(undefined8 *)(&stack0x00002fb0 + lVar43);
    *(undefined8 *)(&stack0x0000225c + lVar43) = *(undefined8 *)(&stack0x00002fb8 + lVar43);
    *(undefined8 *)(&stack0x00002264 + lVar43) = *(undefined8 *)(&stack0x00002fc0 + lVar43);
    *(undefined8 *)(&stack0x0000226c + lVar43) = *(undefined8 *)(&stack0x00002fc8 + lVar43);
    *(undefined8 *)(&stack0x00002274 + lVar43) = *(undefined8 *)(&stack0x00002fd0 + lVar43);
    *(undefined8 *)(&stack0x0000227c + lVar43) = *(undefined8 *)(&stack0x00002fd8 + lVar43);
    *(undefined8 *)(&stack0x00002284 + lVar43) = *(undefined8 *)(&stack0x00002fe0 + lVar43);
    *(undefined8 *)(&stack0x0000228c + lVar43) = *(undefined8 *)(&stack0x00002fe8 + lVar43);
    *(undefined8 *)(&stack0x00002294 + lVar43) = *(undefined8 *)(&stack0x00002ff0 + lVar43);
    *(undefined8 *)(&stack0x0000229c + lVar43) = *(undefined8 *)(&stack0x00002ff8 + lVar43);
    *(undefined8 *)(&stack0x000022a4 + lVar43) = *(undefined8 *)(&stack0x00003000 + lVar43);
    *(undefined8 *)(&stack0x000022ac + lVar43) = *(undefined8 *)(&stack0x00003008 + lVar43);
    *(undefined8 *)(&stack0x000022b4 + lVar43) = *(undefined8 *)(&stack0x00003010 + lVar43);
    *(undefined8 *)(&stack0x000022bc + lVar43) = *(undefined8 *)(&stack0x00003018 + lVar43);
    *(undefined1 *)(lVar94 + 0xc46) = 1;
    *(undefined4 *)(&stack0x00002ea0 + lVar43) = *(undefined4 *)(&stack0x00003120 + lVar43);
    *(undefined4 *)(&stack0x00002ea4 + lVar43) = *(undefined4 *)(&stack0x00003124 + lVar43);
    *(undefined4 *)(&stack0x00002ea8 + lVar43) = *(undefined4 *)(&stack0x00003128 + lVar43);
    *(undefined4 *)(&stack0x00002eac + lVar43) = *(undefined4 *)(&stack0x0000312c + lVar43);
    *(undefined4 *)(&stack0x00002eb0 + lVar43) = *(undefined4 *)(&stack0x00003130 + lVar43);
    *(undefined4 *)(&stack0x00002eb4 + lVar43) = *(undefined4 *)(&stack0x00003134 + lVar43);
    *(undefined4 *)(&stack0x00002eb8 + lVar43) = *(undefined4 *)(&stack0x00003138 + lVar43);
    *(undefined4 *)(&stack0x00002ebc + lVar43) = *(undefined4 *)(&stack0x0000313c + lVar43);
    *(undefined4 *)(&stack0x00002ec0 + lVar43) = *(undefined4 *)(&stack0x00003140 + lVar43);
    *(undefined4 *)(&stack0x00002ec4 + lVar43) = *(undefined4 *)(&stack0x00003144 + lVar43);
    *(undefined4 *)(&stack0x00002ec8 + lVar43) = *(undefined4 *)(&stack0x00003148 + lVar43);
    *(undefined4 *)(&stack0x00002ecc + lVar43) = *(undefined4 *)(&stack0x0000314c + lVar43);
    *(undefined4 *)(&stack0x00002ed0 + lVar43) = *(undefined4 *)(&stack0x00003150 + lVar43);
    *(undefined4 *)(&stack0x00002ed4 + lVar43) = *(undefined4 *)(&stack0x00003154 + lVar43);
    *(undefined4 *)(&stack0x00002ed8 + lVar43) = *(undefined4 *)(&stack0x00003158 + lVar43);
    *(undefined4 *)(&stack0x00002edc + lVar43) = *(undefined4 *)(&stack0x0000315c + lVar43);
    puVar51 = &stack0x00001670 + lVar43;
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e92b;
    pub_142e32760(puVar51,&stack0x000022d0 + lVar43,0xd0);
    puVar70 = &stack0x00001300 + lVar43;
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e943;
    pub_142e32760(puVar70,&stack0x00002510 + lVar43,0x100);
    puVar88 = &stack0x00001908 + lVar43;
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e95b;
    pub_142e32760(puVar88,&stack0x00002ee0 + lVar43,0x94);
    puVar64 = &stack0x00000dac + lVar43;
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e977;
    pub_142e32760(puVar64,&stack0x00002070 + lVar43,0x254);
    if (*(int *)(lVar94 + 0x260) != 2) {
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051e993;
      pdb_1404b6860(*(longlong *)(&stack0x00003250 + lVar43) + 0x260);
    }
    *(code **)(&stack0x00003230 + lVar43) = param_3;
    pcVar61 = *(char **)(&stack0x00003250 + lVar43);
    pcVar61[0x950] = '\x01';
    unaff_R13 = *(code **)(&stack0x00003240 + lVar43);
    *(code **)(pcVar61 + 0x260) = unaff_R13;
    puVar79 = &stack0x00002ea0;
    goto code_r0x00014051ede2;
  case (code)0x1c:
    (&UNK_142f64299)[uVar44] = (&UNK_142f64299)[uVar44] + '\f';
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520473;
    pdb_142dc8590();
  case (code)0x1d:
    if ((longlong)UNRECOVERED_JUMPTABLE < 0) goto code_r0x000140520472;
    *(uint *)param_2 = uVar40;
code_r0x0001405203f9:
    UNRECOVERED_JUMPTABLE = (code *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffff);
    cVar98 = SUB81(UNRECOVERED_JUMPTABLE,0);
joined_r0x00014051fe65:
    if (cVar98 == (code)0x0) {
code_r0x00014051f897:
      pcVar66 = pcRam0000000143ca3d60;
      if ((*_DAT_143ca4ab0 == 0) &&
         (4 < *(ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90))) {
        lVar94 = *(longlong *)pcRam0000000143ca3d60;
        uVar41 = *(undefined4 *)(lVar94 + 0x20);
        uVar8 = *(undefined4 *)(lVar94 + 0x24);
        uVar9 = *(undefined4 *)(lVar94 + 0x28);
        uVar10 = *(undefined4 *)(lVar94 + 0x2c);
        *(undefined8 *)(&stack0x000030f0 + lVar43) = 5;
        *(undefined4 *)(&stack0x000030f8 + lVar43) = uVar41;
        *(undefined4 *)(&stack0x000030fc + lVar43) = uVar8;
        *(undefined4 *)(&stack0x00003100 + lVar43) = uVar9;
        *(undefined4 *)(&stack0x00003104 + lVar43) = uVar10;
        *(undefined8 *)(&stack0x00003218 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
        *(undefined8 *)(&stack0x00003210 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051f8fe;
        uVar52 = pdb_140f33290();
        pcVar59 = *(code **)(UNRECOVERED_JUMPTABLE + 0x18);
        *(undefined8 *)(&stack0x00003218 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
        *(undefined8 *)(&stack0x00003210 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051f931;
        cVar37 = (*pcVar59)(uVar52,&stack0x000030f0 + lVar43);
        if (cVar37 != '\0') {
          lVar67 = *(longlong *)pcVar66;
          lVar7 = *(longlong *)(lVar67 + 0x38);
          if (lVar7 == 0) {
            *(undefined8 *)(&stack0x00003218 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
            *(undefined8 *)(&stack0x00003210 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
            *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14052093a;
            pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f63840);
            goto code_r0x0001405216a5;
          }
          uVar95 = *(undefined8 *)(lVar67 + 0x40);
          uVar68 = *(undefined8 *)(lVar67 + 0x48);
          *(undefined8 *)(&stack0x00002710 + lVar43) = *(undefined8 *)(lVar67 + 0x30);
          *(longlong *)(&stack0x00002718 + lVar43) = lVar7;
          *(undefined8 *)(&stack0x00002720 + lVar43) = uVar95;
          *(undefined8 *)(&stack0x00002728 + lVar43) = uVar68;
          *(undefined8 *)(&stack0x00002730 + lVar43) = 0;
          *(longlong *)(&stack0x00003120 + lVar43) =
               *(longlong *)(&stack0x00003250 + lVar43) + 0x9e8;
          *(code **)(&stack0x00003128 + lVar43) = pdb_140f73bd0;
          *(undefined1 **)(&stack0x00003130 + lVar43) = &stack0x00003178 + lVar43;
          *(code **)(&stack0x00003138 + lVar43) = pdb_140f73bd0;
          *(undefined **)(&stack0x00003168 + lVar43) = &UNK_142f63858;
          *(undefined1 **)(&stack0x00003170 + lVar43) = &stack0x00003120 + lVar43;
          *(undefined1 **)(&stack0x000031d8 + lVar43) = &stack0x00002710 + lVar43;
          *(undefined1 **)(&stack0x000031e0 + lVar43) = &stack0x00003168 + lVar43;
          *(undefined **)(&stack0x000031e8 + lVar43) = &UNK_142f62e58;
          *(undefined1 **)(&stack0x000031c0 + lVar43) = &stack0x000031d8 + lVar43;
          *(undefined8 *)(&stack0x000031c8 + lVar43) = 1;
          *(longlong *)(&stack0x000031d0 + lVar43) = lVar67 + 0x30;
          *(undefined8 *)(&stack0x00003200 + lVar43) = *(undefined8 *)(&stack0x00003100 + lVar43);
          *(undefined4 *)(&stack0x000031f0 + lVar43) = *(undefined4 *)(&stack0x000030f0 + lVar43);
          *(undefined4 *)(&stack0x000031f4 + lVar43) = *(undefined4 *)(&stack0x000030f4 + lVar43);
          *(undefined4 *)(&stack0x000031f8 + lVar43) = *(undefined4 *)(&stack0x000030f8 + lVar43);
          *(undefined4 *)(&stack0x000031fc + lVar43) = *(undefined4 *)(&stack0x000030fc + lVar43);
          *(undefined8 *)(&stack0x00003218 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
          *(undefined8 *)(&stack0x00003210 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
          *(undefined1 **)(&stack0xffffffffffffffe0 + lVar43) = &stack0x000031c0 + lVar43;
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051fa6c;
          pdb_140dd7f80(lVar94,uVar52,UNRECOVERED_JUMPTABLE,&stack0x000031f0 + lVar43);
        }
      }
    }
    else {
      uVar52 = *(undefined8 *)param_2;
      *(undefined8 *)(&stack0x00003218 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
      *(undefined8 *)(&stack0x00003210 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051fe8f;
      cVar37 = pdb_140dd7f60(uVar52);
      if (cVar37 == '\0') goto code_r0x00014051f897;
      lVar94 = *(longlong *)param_2;
      lVar67 = *(longlong *)(lVar94 + 0x38);
      if (lVar67 == 0) {
        *(undefined8 *)(&stack0x00003218 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
        *(undefined8 *)(&stack0x00003210 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x1405208c6;
        pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f63840);
        goto code_r0x0001405216a5;
      }
      uVar41 = *(undefined4 *)(lVar94 + 0x40);
      uVar8 = *(undefined4 *)(lVar94 + 0x44);
      uVar9 = *(undefined4 *)(lVar94 + 0x48);
      uVar10 = *(undefined4 *)(lVar94 + 0x4c);
      *(undefined8 *)(&stack0x00002710 + lVar43) = *(undefined8 *)(lVar94 + 0x30);
      *(longlong *)(&stack0x00002718 + lVar43) = lVar67;
      *(undefined4 *)(&stack0x00002720 + lVar43) = uVar41;
      *(undefined4 *)(&stack0x00002724 + lVar43) = uVar8;
      *(undefined4 *)(&stack0x00002728 + lVar43) = uVar9;
      *(undefined4 *)(&stack0x0000272c + lVar43) = uVar10;
      *(undefined8 *)(&stack0x00002730 + lVar43) = 0;
      *(longlong *)(&stack0x00003120 + lVar43) = *(longlong *)(&stack0x00003250 + lVar43) + 0x9e8;
      *(code **)(&stack0x00003128 + lVar43) = pdb_140f73bd0;
      *(undefined1 **)(&stack0x00003130 + lVar43) = &stack0x00003178 + lVar43;
      *(code **)(&stack0x00003138 + lVar43) = pdb_140f73bd0;
      *(undefined **)(&stack0x000031c0 + lVar43) = &UNK_142f63858;
      *(undefined1 **)(&stack0x000031c8 + lVar43) = &stack0x00003120 + lVar43;
      *(undefined1 **)(&stack0x000031f0 + lVar43) = &stack0x00002710 + lVar43;
      *(undefined1 **)(&stack0x000031f8 + lVar43) = &stack0x000031c0 + lVar43;
      *(undefined **)(&stack0x00003200 + lVar43) = &UNK_142f62e58;
      *(undefined1 **)(&stack0x000031d8 + lVar43) = &stack0x000031f0 + lVar43;
      *(undefined8 *)(&stack0x000031e0 + lVar43) = 1;
      *(longlong *)(&stack0x000031e8 + lVar43) = lVar94 + 0x30;
      *(undefined8 *)(&stack0x00003218 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
      *(undefined8 *)(&stack0x00003210 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14051ff99;
      pdb_140331ee0(&stack0x000031d8 + lVar43);
    }
    *(undefined8 *)(&stack0x00002800 + lVar43) = 0;
    *(undefined8 *)(&stack0x00002808 + lVar43) = 0;
    *(undefined8 *)(&stack0x000027f0 + lVar43) = 0;
    *(undefined8 *)(&stack0x000027f8 + lVar43) = 0;
    *(undefined8 *)(&stack0x000027e0 + lVar43) = 0;
    *(undefined8 *)(&stack0x000027e8 + lVar43) = 0;
    *(undefined8 *)(&stack0x000027d0 + lVar43) = 0;
    *(undefined8 *)(&stack0x000027d8 + lVar43) = 0;
    *(undefined8 *)(&stack0x000027c0 + lVar43) = 0;
    *(undefined8 *)(&stack0x000027c8 + lVar43) = 0;
    *(undefined8 *)(&stack0x000027b0 + lVar43) = 0;
    *(undefined8 *)(&stack0x000027b8 + lVar43) = 0;
    *(undefined8 *)(&stack0x000027a0 + lVar43) = 0;
    *(undefined8 *)(&stack0x000027a8 + lVar43) = 0;
    *(undefined8 *)(&stack0x00002790 + lVar43) = 0;
    *(undefined8 *)(&stack0x00002798 + lVar43) = 0;
    *(undefined8 *)(&stack0x00002780 + lVar43) = 0;
    *(undefined8 *)(&stack0x00002788 + lVar43) = 0;
    *(undefined8 *)(&stack0x00002770 + lVar43) = 0;
    *(undefined8 *)(&stack0x00002778 + lVar43) = 0;
    *(undefined8 *)(&stack0x00002760 + lVar43) = 0;
    *(undefined8 *)(&stack0x00002768 + lVar43) = 0;
    *(undefined8 *)(&stack0x00002750 + lVar43) = 0;
    *(undefined8 *)(&stack0x00002758 + lVar43) = 0;
    *(undefined8 *)(&stack0x00002740 + lVar43) = 0;
    *(undefined8 *)(&stack0x00002748 + lVar43) = 0;
    *(undefined8 *)(&stack0x00002730 + lVar43) = 0;
    *(undefined8 *)(&stack0x00002738 + lVar43) = 0;
    *(undefined8 *)(&stack0x00002720 + lVar43) = 0;
    *(undefined8 *)(&stack0x00002728 + lVar43) = 0;
    *(undefined8 *)(&stack0x00002710 + lVar43) = 0;
    *(undefined8 *)(&stack0x00002718 + lVar43) = 0;
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520021;
    pub_142e32780(&stack0x00002810 + lVar43,0,0x158);
    uVar41 = *(undefined4 *)(*(longlong *)(&stack0x00003250 + lVar43) + 0x9e8);
    *(undefined8 *)(&stack0x00003218 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
    *(undefined8 *)(&stack0x00003210 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520064;
    pdb_1407e8520(&stack0x00002710 + lVar43,&UNK_142f63790,2,uVar41);
    *(undefined8 *)(&stack0x00003218 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
    *(undefined8 *)(&stack0x00003210 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
    puVar65 = &UNK_142f63118;
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14052009d;
    pdb_1407e8520(&stack0x00002710 + lVar43,&UNK_142f63118,2,(ulonglong)unaff_R15 & 0xffffffff);
    *(undefined8 *)(&stack0x00003218 + lVar43) = *(undefined8 *)(&stack0x00003248 + lVar43);
    *(undefined8 *)(&stack0x00003210 + lVar43) = *(undefined8 *)(&stack0x00003258 + lVar43);
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x1405200c6;
    uVar52 = pdb_140332e50(&UNK_142f63ec8);
    *(undefined8 *)(&stack0x00003130 + lVar43) = _UNK_142f63ef0;
    *(undefined8 *)(&stack0x00003138 + lVar43) = _UNK_142f63ef8;
    *(undefined4 *)(&stack0x00003120 + lVar43) = _UNK_142f63ee0;
    *(undefined4 *)(&stack0x00003124 + lVar43) = _UNK_142f63ee4;
    *(undefined4 *)(&stack0x00003128 + lVar43) = _UNK_142f63ee8;
    *(undefined4 *)(&stack0x0000312c + lVar43) = _UNK_142f63eec;
    *(undefined8 *)(&stack0x00003140 + lVar43) = uVar52;
    *(undefined **)(&stack0x00003148 + lVar43) = puVar65;
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14052010a;
    pdb_1403b1940(&stack0x00003120 + lVar43,&UNK_142f63790,2);
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520124;
    pdb_1403b1940(&stack0x00003120 + lVar43,&UNK_142f63118,2);
    *(undefined4 *)(&stack0x00003238 + lVar43) = *(undefined4 *)(&stack0x0000274c + lVar43);
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520151;
    pub_142e32760(&stack0x00002510 + lVar43,&stack0x00002750 + lVar43,0xd0);
    *(undefined8 *)(&stack0x00003230 + lVar43) = *(undefined8 *)(&stack0x00002820 + lVar43);
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140520178;
    pub_142e32760(&stack0x00002070 + lVar43,&stack0x00002828 + lVar43,0x100);
    *(undefined8 *)(&stack0x000030d8 + lVar43) = *(undefined8 *)(&stack0x00002928 + lVar43);
    *(undefined8 *)(&stack0x000022d0 + lVar43) = *(undefined8 *)(&stack0x00002930 + lVar43);
    *(undefined8 *)(&stack0x000022d8 + lVar43) = *(undefined8 *)(&stack0x00002938 + lVar43);
    *(undefined8 *)(&stack0x000022e0 + lVar43) = *(undefined8 *)(&stack0x00002940 + lVar43);
    *(undefined8 *)(&stack0x000022e8 + lVar43) = *(undefined8 *)(&stack0x00002948 + lVar43);
    *(undefined8 *)(&stack0x000022f0 + lVar43) = *(undefined8 *)(&stack0x00002950 + lVar43);
    *(undefined8 *)(&stack0x000022f8 + lVar43) = *(undefined8 *)(&stack0x00002958 + lVar43);
    *(undefined8 *)(&stack0x00002300 + lVar43) = *(undefined8 *)(&stack0x00002960 + lVar43);
    *(undefined8 *)(&stack0x00002fd8 + lVar43) = *(undefined8 *)(&stack0x0000273c + lVar43);
    *(undefined8 *)(&stack0x00002fe0 + lVar43) = *(undefined8 *)(&stack0x00002744 + lVar43);
    *(undefined8 *)(&stack0x00002fcc + lVar43) = *(undefined8 *)(&stack0x00002730 + lVar43);
    *(undefined8 *)(&stack0x00002fd4 + lVar43) = *(undefined8 *)(&stack0x00002738 + lVar43);
    *(undefined8 *)(&stack0x00002fbc + lVar43) = *(undefined8 *)(&stack0x00002720 + lVar43);
    *(undefined8 *)(&stack0x00002fc4 + lVar43) = *(undefined8 *)(&stack0x00002728 + lVar43);
    *(undefined8 *)(&stack0x00002fac + lVar43) = *(undefined8 *)(&stack0x00002710 + lVar43);
    *(undefined8 *)(&stack0x00002fb4 + lVar43) = *(undefined8 *)(&stack0x00002718 + lVar43);
    *(undefined8 *)(&stack0x00002f48 + lVar43) = *(undefined8 *)(&stack0x00003140 + lVar43);
    *(undefined8 *)(&stack0x00002f50 + lVar43) = *(undefined8 *)(&stack0x00003148 + lVar43);
    *(undefined8 *)(&stack0x00002f38 + lVar43) = *(undefined8 *)(&stack0x00003130 + lVar43);
    *(undefined8 *)(&stack0x00002f40 + lVar43) = *(undefined8 *)(&stack0x00003138 + lVar43);
    *(undefined8 *)(&stack0x00002f28 + lVar43) = *(undefined8 *)(&stack0x00003120 + lVar43);
    *(undefined8 *)(&stack0x00002f30 + lVar43) = *(undefined8 *)(&stack0x00003128 + lVar43);
    uVar52 = 0;
    goto code_r0x00014051f86d;
  case (code)0x1e:
    *(uint *)UNRECOVERED_JUMPTABLE = *(uint *)UNRECOVERED_JUMPTABLE ^ uVar40;
    (&UNK_142f64297)[uVar44] = (&UNK_142f64297)[uVar44] + '\f';
    (&UNK_142f64291)[uVar44] = (&UNK_142f64291)[uVar44] + '\f';
    param_2[0x142f64354] = (code)0x0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x1f:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
    goto code_r0x000140520e4c;
  case (code)0x20:
    *(int *)(&stack0xffffffffffffffe0 + lVar43) = (int)param_3;
    goto code_r0x000140521198;
  case (code)0x21:
    cVar37 = bVar38 + *(char *)((longlong)UNRECOVERED_JUMPTABLE * 2);
    pbVar48 = (byte *)(CONCAT71(uVar54,cVar37) + -0x75);
    bVar38 = *pbVar48;
    *pbVar48 = *pbVar48 + 0xc;
    unaff_RBX[0x20] =
         (code)((char)unaff_RBX[0x20] + cVar37 +
               (0x42f6430c < *(uint *)param_3 ||
               0x42f6430c - *(uint *)param_3 < (uint)(0xf3 < bVar38)));
    goto code_r0x000140521140;
  case (code)0x22:
    goto code_r0x000140521140;
  case (code)0x23:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
    (&UNK_142f64299)[uVar44] = (&UNK_142f64299)[uVar44] + '\f';
    puVar62 = &uStack_48;
    *(undefined8 *)((longlong)puVar62 + lVar43) = 0x48000002;
    puVar51 = (undefined1 *)(ulonglong)(iVar2 + 0x1960);
    goto code_r0x000140520e6f;
  case (code)0x24:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x25:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38 + bVar96);
    *param_3 = (code)((char)*param_3 + 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x26:
    goto code_r0x000140521183;
  case (code)0x27:
    goto code_r0x0001405211dc;
  case (code)0x28:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
code_r0x000140521140:
    unaff_RBX = *(code **)unaff_RBX;
    uVar42 = *(uint *)(unaff_RBX + 0x20);
    uVar58 = *(uint *)(unaff_RBX + 0x24);
    uVar99 = *(uint *)(unaff_RBX + 0x28);
    uVar100 = *(uint *)(unaff_RBX + 0x2c);
    *(undefined8 *)(&stack0x00002610 + lVar43) = 5;
    *(uint *)(&stack0x00002618 + lVar43) = uVar42;
    *(uint *)(&stack0x0000261c + lVar43) = uVar58;
    *(uint *)(&stack0x00002620 + lVar43) = uVar99;
    *(uint *)(&stack0x00002624 + lVar43) = uVar100;
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14052115e;
    unaff_R14 = (code *)pdb_140f33290();
    pcVar66 = *(code **)(param_2 + 0x18);
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140521173;
    cVar37 = (*pcVar66)(unaff_R14,&stack0x00002610 + lVar43);
    if (cVar37 != '\0') {
      UNRECOVERED_JUMPTABLE = *(code **)(&stack0x00002620 + lVar43);
      unaff_R15 = param_2;
code_r0x000140521183:
      *(code **)(&stack0x00002080 + lVar43) = UNRECOVERED_JUMPTABLE;
      *(undefined4 *)(&stack0x00002070 + lVar43) = *(undefined4 *)(&stack0x00002610 + lVar43);
      *(undefined4 *)(&stack0x00002074 + lVar43) = *(undefined4 *)(&stack0x00002614 + lVar43);
      *(undefined4 *)(&stack0x00002078 + lVar43) = *(undefined4 *)(&stack0x00002618 + lVar43);
      *(undefined4 *)(&stack0x0000207c + lVar43) = *(undefined4 *)(&stack0x0000261c + lVar43);
code_r0x000140521198:
      *(code **)(&stack0xffffffffffffffe0 + lVar43) = param_3;
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x1405211b2;
      pdb_140dd7f80(unaff_RBX,unaff_R14,unaff_R15,&stack0x00002070 + lVar43);
    }
    goto code_r0x000140521542;
  case (code)0x29:
    goto code_r0x0001405211f5;
  case (code)0x2a:
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(uVar40 + 0x42f6430c);
    goto code_r0x0001405211dc;
  case (code)0x2b:
code_r0x0001405211e3:
    pcVar66 = (code *)swi(3);
    pcVar66 = (code *)(*pcVar66)(CONCAT71((int7)((ulonglong)pcVar59 >> 8),
                                          (char)pcVar59 + (char)((ulonglong)pcVar59 >> 8)));
    return pcVar66;
  case (code)0x2c:
    lVar94 = CONCAT71(uVar54,unaff_RBX[(ulonglong)UNRECOVERED_JUMPTABLE & 0xff]);
    *(uint *)(param_2 + lVar94 + -0x7efb9cb8) =
         *(uint *)(param_2 + lVar94 + -0x7efb9cb8) ^ (int)&stack0xffffffffffffffc0 + (int)lVar43;
    goto code_r0x0001405211d9;
  case (code)0x2d:
    goto code_r0x0001405211fd;
  case (code)0x2e:
    (&UNK_142f6428d)[uVar44] = (&UNK_142f6428d)[uVar44] + '\f';
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar57);
    bVar96 = CARRY1((byte)*UNRECOVERED_JUMPTABLE,bVar38);
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
    goto joined_r0x00014052120d;
  case (code)0x2f:
    UNRECOVERED_JUMPTABLE = (code *)CONCAT71(uVar54,uRam1000f9814800002b);
code_r0x0001405211f5:
    cVar98 = *UNRECOVERED_JUMPTABLE;
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (byte)UNRECOVERED_JUMPTABLE);
    if (!CARRY1((byte)cVar98,(byte)UNRECOVERED_JUMPTABLE)) {
code_r0x0001405211fd:
      goto code_r0x0001405211cc;
    }
    goto code_r0x000140520eee;
  case (code)0x30:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x31:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38 + bVar96);
    *param_3 = (code)((char)*param_3 + 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x32:
    UNK_142f6434c = UNK_142f6434c + bVar38 + bVar96;
    break;
  case (code)0x33:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x34:
code_r0x0001405214a4:
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140521689;
      pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f636d0);
      goto code_r0x0001405216a5;
    }
    break;
  case (code)0x35:
    cVar37 = (char)*(uint *)UNRECOVERED_JUMPTABLE;
    pcVar59 = param_2;
code_r0x000140521495:
    if (cVar37 != '\0') {
      pcVar59 = *(code **)pcVar59;
      UNRECOVERED_JUMPTABLE = *(code **)(pcVar59 + 0x38);
      goto code_r0x0001405214a4;
    }
code_r0x00014052132c:
    pcVar66 = pcRam0000000143ca3d38;
    if ((*_DAT_143ca4ab0 == 0) && (4 < *(ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90)))
    {
      lVar94 = *(longlong *)pcRam0000000143ca3d38;
      uVar41 = *(undefined4 *)(lVar94 + 0x20);
      uVar8 = *(undefined4 *)(lVar94 + 0x24);
      uVar9 = *(undefined4 *)(lVar94 + 0x28);
      uVar10 = *(undefined4 *)(lVar94 + 0x2c);
      *(undefined8 *)(&stack0x00002f78 + lVar43) = 5;
      *(undefined4 *)(&stack0x00002f80 + lVar43) = uVar41;
      *(undefined4 *)(&stack0x00002f84 + lVar43) = uVar8;
      *(undefined4 *)(&stack0x00002f88 + lVar43) = uVar9;
      *(undefined4 *)(&stack0x00002f8c + lVar43) = uVar10;
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140521377;
      uVar52 = pdb_140f33290();
      UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0x18);
      *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14052138c;
      cVar37 = (*UNRECOVERED_JUMPTABLE)(uVar52,&stack0x00002f78 + lVar43);
      if (cVar37 != '\0') {
        lVar67 = *(longlong *)pcVar66;
        lVar7 = *(longlong *)(lVar67 + 0x38);
        if (lVar7 == 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x1405216a4;
          pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f636d0);
          goto code_r0x0001405216a5;
        }
        uVar95 = *(undefined8 *)(lVar67 + 0x40);
        uVar68 = *(undefined8 *)(lVar67 + 0x48);
        *(undefined8 *)(&stack0x000019a0 + lVar43) = *(undefined8 *)(lVar67 + 0x30);
        *(longlong *)(&stack0x000019a8 + lVar43) = lVar7;
        *(undefined8 *)(&stack0x000019b0 + lVar43) = uVar95;
        *(undefined8 *)(&stack0x000019b8 + lVar43) = uVar68;
        *(undefined8 *)(&stack0x000019c0 + lVar43) = 0;
        *(undefined **)(&stack0x000023a0 + lVar43) = &UNK_142f63138;
        *(undefined8 *)(&stack0x000023a8 + lVar43) = 0x6d;
        *(code **)(&stack0x00002610 + lVar43) = param_3;
        *(undefined1 **)(&stack0x00002618 + lVar43) = &stack0x000023a0 + lVar43;
        *(undefined **)(&stack0x00002620 + lVar43) = &UNK_142f62e58;
        *(undefined1 **)(&stack0x00002510 + lVar43) = &stack0x00002610 + lVar43;
        *(undefined8 *)(&stack0x00002518 + lVar43) = 1;
        *(longlong *)(&stack0x00002520 + lVar43) = lVar67 + 0x30;
        *(undefined8 *)(&stack0x00002080 + lVar43) = *(undefined8 *)(&stack0x00002f88 + lVar43);
        *(undefined4 *)(&stack0x00002070 + lVar43) = *(undefined4 *)(&stack0x00002f78 + lVar43);
        *(undefined4 *)(&stack0x00002074 + lVar43) = *(undefined4 *)(&stack0x00002f7c + lVar43);
        *(undefined4 *)(&stack0x00002078 + lVar43) = *(undefined4 *)(&stack0x00002f80 + lVar43);
        *(undefined4 *)(&stack0x0000207c + lVar43) = *(undefined4 *)(&stack0x00002f84 + lVar43);
        *(undefined1 **)(&stack0xffffffffffffffe0 + lVar43) = &stack0x00002510 + lVar43;
        *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14052146a;
        pdb_140dd7f80(lVar94,uVar52,param_2,&stack0x00002070 + lVar43);
      }
    }
    goto code_r0x000140521542;
  case (code)0x36:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
    break;
  case (code)0x37:
    cVar98 = *param_3;
    *param_3 = (code)((char)*param_3 + 0xc);
    *(uint *)(&stack0x000019b0 + lVar43) =
         *(int *)(&stack0x000019b0 + lVar43) + uVar40 + (uint)(0xf3 < (byte)cVar98);
    break;
  case (code)0x38:
    break;
  case (code)0x39:
    *(undefined4 *)(&stack0x000019c0 + lVar43) = 0;
    goto code_r0x0001405214d9;
  case (code)0x3a:
    *(uint *)UNRECOVERED_JUMPTABLE = *(uint *)UNRECOVERED_JUMPTABLE + 9 + (uint)bVar96;
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
    *(undefined8 *)(unaff_RBX + 0x920) = 0;
    unaff_RBX[0x928] = (code)0x1;
    return UNRECOVERED_JUMPTABLE;
  case (code)0x3b:
    (&UNK_142f6430e)[uVar44] = uVar39;
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
    goto code_r0x00014052297c;
  case (code)0x3c:
    goto code_r0x00014052296c;
  case (code)0x3d:
    goto code_r0x00014052297c;
  case (code)0x3e:
code_r0x000140522961:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)UNRECOVERED_JUMPTABLE);
    if (UNRECOVERED_JUMPTABLE[0x950] == (code)0x0) goto code_r0x00014052298f;
code_r0x00014052296c:
    if (*(int *)(*(longlong *)(&stack0x00003250 + lVar43) + 0x260) == 2) goto code_r0x00014052298f;
code_r0x00014052297c:
    *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x14052298f;
    pdb_1404b6860(*(longlong *)(&stack0x00003250 + lVar43) + 0x260);
code_r0x00014052298f:
    pcVar66 = *(code **)(&stack0x00003250 + lVar43);
    pcVar66[0x950] = (code)0x0;
    return pcVar66;
  case (code)0x3f:
    bVar38 = bVar38 ^ (byte)*UNRECOVERED_JUMPTABLE;
    pcVar66 = (code *)CONCAT71(uVar54,bVar38);
    pcVar66[9] = (code)((char)pcVar66[9] + CARRY1(bVar69,bVar38));
    *pcVar66 = (code)((char)*pcVar66 + bVar38);
    return pcVar66;
  case (code)0x40:
    pcVar66 = *(code **)(uVar44 + 0xd03f01f7);
    *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_140522a63;
    (*pcVar66)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x41:
    uVar44 = (ulonglong)((uVar40 + 0xb72f76b8) * 0x10);
    pcVar66 = param_2;
    goto code_r0x000140522bc0;
  case (code)0x42:
    if ((longlong)UNRECOVERED_JUMPTABLE < 0) {
      param_2[(longlong)(&UNK_142f64354 + uVar44)] =
           (code)((char)param_2[(longlong)(&UNK_142f64354 + uVar44)] + bVar69);
      *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_140522b05;
      pcVar66 = (code *)pdb_140522f70(0x42f6431c);
      return pcVar66;
    }
    unaff_RBX[-0x77c0240] = (code)((char)unaff_RBX[-0x77c0240] + bVar38);
    pcVar59 = (code *)(ulonglong)(*(uint *)param_3 + 0x42f6430c);
    LOCK();
    *(uint *)UNRECOVERED_JUMPTABLE = uVar63;
    UNLOCK();
    UNRECOVERED_JUMPTABLE = (code *)CONCAT71(uVar54,bVar38 + (char)*UNRECOVERED_JUMPTABLE);
  case (code)0x43:
    UNRECOVERED_JUMPTABLE[-0x77] = (code)((char)UNRECOVERED_JUMPTABLE[-0x77] + (char)pcVar59);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x44:
    if (uVar63 != 0) {
      param_3 = *(code **)(*(longlong *)(&stack0x00000038 + lVar43) + 0x10);
      goto code_r0x000140522e28;
    }
    goto code_r0x000140522e2d;
  case (code)0x45:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
    (&UNK_142f6428f)[uVar44] = (&UNK_142f6428f)[uVar44] + '\f';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x46:
    goto code_r0x000140522e2d;
  case (code)0x47:
    cVar37 = bVar38 + 0x43;
    pcVar61 = (char *)CONCAT71(uVar54,cVar37);
    *(int *)(param_3 + -0x38990005) = *(int *)(param_3 + -0x38990005) >> 0xc;
    LOCK();
    pcVar61[0xc] = '\f';
    UNLOCK();
    *pcVar61 = *pcVar61 + cVar37;
    *pcVar61 = *pcVar61 + cVar37;
    goto code_r0x000140522e2d;
  case (code)0x48:
code_r0x000140522e28:
    *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_140522e2d;
    pub_1406abac0((byte *)&UNK_142f6430c,(ulonglong)param_2,(ulonglong)param_3);
code_r0x000140522e2d:
    lVar94 = *(longlong *)(&stack0x00000028 + lVar43);
    *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_140522e3d;
    UNRECOVERED_JUMPTABLE = (code *)pdb_1404dee10(lVar94 + 0x960);
    *(undefined2 *)(lVar94 + 0xc48) = 0;
    param_2 = *(code **)(&stack0xffffffffffffffe8 + lVar43);
code_r0x000140522e49:
    param_2[0x5d] = (code)((char)param_2[0x5d] - cVar56);
    return UNRECOVERED_JUMPTABLE;
  case (code)0x49:
    goto code_r0x000140522e49;
  case (code)0x4a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x4b:
    goto code_r0x000140523369;
  case (code)0x4c:
    *(uint *)(&stack0xffffffffffffffd0 + lVar43) = uVar63;
    *(undefined8 **)((longlong)&uStack_48 + lVar43) = puVar90;
    *(code **)((longlong)&lStack_50 + lVar43) = param_2;
    *(code **)((longlong)auStack_60 + lVar43 + 8) = param_3;
    *(code **)((longlong)auStack_60 + lVar43) = unaff_RBX;
    puVar71 = auStack_88 + lVar43;
  case (code)0x4d:
    UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0x58);
    pcVar59 = *(code **)(UNRECOVERED_JUMPTABLE + 0x40);
    puVar72 = puVar71;
code_r0x000140523369:
    uVar52 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x48);
    *(undefined **)(puVar72 + -8) = &UNK_140523372;
    pcVar66 = (code *)pdb_1400b64a0(pcVar59,uVar52);
    return pcVar66;
  case (code)0x4e:
    return UNRECOVERED_JUMPTABLE;
  case (code)0x4f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x50:
    *(code **)((longlong)&uStackX_20 + lVar43) = param_3;
    *(code **)(&stack0x00000028 + lVar43) = param_2;
    *(code **)(&stack0x00000030 + lVar43) = param_2;
    *(undefined **)(&stack0x00000038 + lVar43) = &UNK_142f63f15;
    *(undefined1 **)(&stack0x00000040 + lVar43) = &stack0x00000078 + lVar43;
    pcVar66 = *(code **)(unaff_RBX + 0x20);
    *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_140523765;
    pcVar66 = (code *)(*pcVar66)(extraout_XMM0_Da,&stack0xffffffffffffffe8 + lVar43);
    return pcVar66;
  case (code)0x51:
    goto code_r0x000140523c09;
  case (code)0x52:
    goto code_r0x000140523bf7;
  case (code)0x53:
    *param_3 = (code)((char)*param_3 + 0xc);
code_r0x0001405238f7:
    param_2 = *(code **)pcVar91;
    pcVar59 = *(code **)(param_2 + 0x38);
    puVar80 = puVar89;
    if (pcVar59 == (code *)0x0) {
      *(undefined **)(puVar89 + -8) = &UNK_140523df5;
      pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f62e18);
      goto code_r0x0001405259a8;
    }
    goto code_r0x000140523907;
  case (code)0x54:
    pcVar61 = (char *)CONCAT71(uVar54,cRam20b085c748000020);
    *pcVar61 = *pcVar61 + cRam20b085c748000020;
    *pcVar61 = *pcVar61 + cVar37;
    *pcVar61 = *pcVar61 + cVar37;
code_r0x000140523907:
    UNRECOVERED_JUMPTABLE = param_2 + 0x30;
    uVar52 = *(undefined8 *)(param_2 + 0x40);
    uVar95 = *(undefined8 *)(param_2 + 0x48);
    puVar90[0x412] = *(undefined8 *)(param_2 + 0x30);
    puVar90[0x413] = pcVar59;
    puVar90[0x414] = uVar52;
    puVar90[0x415] = uVar95;
    puVar90[0x416] = 0;
    pcVar50 = *(code **)(unaff_R15 + 0x10);
    pcVar59 = pcVar50 + 0x48;
    pcVar66 = (code *)0x0;
    bVar97 = SBORROW8(0,*(longlong *)(pcVar50 + 0x18));
    param_4 = 1;
    puVar87 = puVar80;
    param_2 = pcVar91;
code_r0x000140523947:
    if (!bVar97) {
      param_4 = *(longlong *)(pcVar50 + 0x20);
      pcVar66 = *(code **)(pcVar50 + 0x28);
    }
code_r0x000140523951:
    puVar90[-0xb] = param_4;
    puVar90[-10] = pcVar66;
    puVar90[0x282] = pcVar59;
    puVar90[0x283] = pdb_140f71a50;
    puVar90[0x284] = puVar90 + -0xb;
    pcVar59 = pdb_1402ed400;
    puVar64 = puVar87;
    pcVar92 = param_2;
code_r0x000140523980:
    pcVar66 = unaff_RBX;
    puVar90[0x285] = pcVar59;
    puVar90[0x1a8] = &UNK_142f62e30;
    puVar90[0x1a9] = puVar90 + 0x282;
    puVar90[0xce] = puVar90 + 0x412;
    puVar90[0xcf] = puVar90 + 0x1a8;
    puVar90[0xd0] = &UNK_142f62e58;
    puVar90[0x5a8] = puVar90 + 0xce;
    puVar90[0x5a9] = 1;
    puVar90[0x5aa] = UNRECOVERED_JUMPTABLE;
    puVar90[0x684] = puVar90[0x767];
    *(undefined4 *)(puVar90 + 0x682) = *(undefined4 *)(puVar90 + 0x765);
    *(undefined4 *)((longlong)puVar90 + 0x3414) = *(undefined4 *)((longlong)puVar90 + 0x3b2c);
    *(undefined4 *)(puVar90 + 0x683) = *(undefined4 *)(puVar90 + 0x766);
    *(undefined4 *)((longlong)puVar90 + 0x341c) = *(undefined4 *)((longlong)puVar90 + 0x3b34);
    *(undefined8 **)(puVar64 + 0x20) = puVar90 + 0x5a8;
    *(undefined **)(puVar64 + -8) = &UNK_140523a2a;
    pdb_140dd7f80(param_3,pcVar66,unaff_R14,puVar90 + 0x682);
code_r0x000140523a2b:
code_r0x000140523c75:
    puVar51 = puVar64;
    pcVar59 = (code *)puVar90[0x782];
code_r0x000140523c7c:
    param_3 = *(code **)pcVar59;
    puVar76 = puVar51;
    unaff_R15 = pcVar59;
    if (param_3 == (code *)0x2) {
code_r0x000140523c85:
      UNRECOVERED_JUMPTABLE = (code *)0x2;
    }
    else {
code_r0x000140523c8c:
      pcVar92 = *(code **)(unaff_R15 + 8);
      puVar90[0x282] = param_3;
      puVar90[0x283] = pcVar92;
      pcVar66 = (code *)(puVar90 + 0x282);
      *(undefined **)(puVar76 + -8) = &UNK_140523cb1;
      pdb_1407e38e0(puVar90 + 0x412);
      UNRECOVERED_JUMPTABLE = (code *)0x2;
      if (*(char *)(puVar90 + 0x412) != '\0') {
        UNRECOVERED_JUMPTABLE = param_3;
      }
      pcVar59 = (code *)puVar90[0x782];
    }
code_r0x000140523cc9:
    *(code **)(pcVar59 + 0x30) = UNRECOVERED_JUMPTABLE;
    *(code **)(pcVar59 + 0x38) = pcVar92;
    cVar98 = (code)(*(longlong *)(*(longlong *)(pcVar59 + 0x10) + 0x10) != 0);
    pcVar59[0x61] = cVar98;
    pcVar59[0x62] = (code)0x0;
    *(undefined8 *)(pcVar59 + 0x40) = 0;
    puVar78 = puVar76;
    puVar89 = puVar76;
    if ((bool)cVar98) {
      do {
        lVar43 = *(longlong *)(pcVar59 + 0x10);
        *(longlong *)(pcVar59 + 0x50) = *(longlong *)(lVar43 + 0x10) + -1;
        if ((*(longlong *)(lVar43 + 0x10) == 0) ||
           (lVar43 = *(longlong *)(lVar43 + 8) + *(longlong *)(lVar43 + 0x10) * 0x6d0 + -0x6d0,
           lVar43 == 0)) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar78 + -8) = &UNK_140525816;
          pdb_142dc8150(&UNK_142f62e90);
        }
        *(longlong *)(pcVar59 + 0x58) = lVar43;
        uVar52 = *(undefined8 *)(pcVar59 + 0x18);
        uVar95 = *(undefined8 *)(pcVar59 + 0x20);
        pcVar92 = pcVar59 + 0x68;
        *(longlong *)(pcVar59 + 0x68) = lVar43;
        *(undefined8 *)(pcVar59 + 0x70) = uVar52;
        *(undefined8 *)(pcVar59 + 0x78) = uVar95;
        UNRECOVERED_JUMPTABLE = pcVar59 + 0x98;
        pcVar59[0x98] = (code)0x0;
code_r0x000140523dfb:
        *(longlong *)(pcVar59 + 0x80) = lVar43;
        pcVar66 = *(code **)(lVar43 + 0x6a0);
        puVar90[0x774] = UNRECOVERED_JUMPTABLE;
        *(undefined **)(puVar78 + -8) = &UNK_140523e15;
        lVar43 = pdb_1407e47d0(uVar52);
        if (lVar43 == 0) {
          lVar43 = puVar90[0x782];
          *(undefined1 *)(lVar43 + 0x98) = 1;
          lVar43 = *(longlong *)(lVar43 + 0x40);
          puVar51 = puVar78;
        }
        else {
          puVar90[0x774] = UNRECOVERED_JUMPTABLE;
          *(undefined **)(puVar78 + -8) = &UNK_140523e38;
          pdb_140f60be0(puVar90 + 0x682,lVar43);
          pcVar66 = *(code **)(lVar43 + 0x18);
          if (pcVar66 != (code *)0x8000000000000004) {
            pcVar50 = (code *)0x1;
            if ((longlong)pcVar66 < 0) {
              pcVar50 = pcVar66;
            }
            goto code_r0x000140524615;
          }
          lVar94 = puVar90[0x782];
          *(undefined4 *)(puVar90 + 0x1aa) = *(undefined4 *)(lVar43 + 0xd0);
          uVar52 = *(undefined8 *)(lVar43 + 200);
          puVar90[0x1a8] = *(undefined8 *)(lVar43 + 0xc0);
          puVar90[0x1a9] = uVar52;
          uVar52 = *(undefined8 *)(lVar43 + 0x48);
          *(undefined1 *)(puVar90 + 0x286) = *(undefined1 *)(lVar43 + 0xf4);
          uVar68 = *(undefined8 *)(lVar43 + 0xd4);
          uVar3 = *(undefined8 *)(lVar43 + 0xdc);
          uVar31 = *(undefined8 *)(lVar43 + 0xec);
          puVar90[0x284] = *(undefined8 *)(lVar43 + 0xe4);
          puVar90[0x285] = uVar31;
          puVar90[0x282] = uVar68;
          puVar90[0x283] = uVar3;
          uVar68 = *(undefined8 *)(lVar43 + 0xb8);
          puVar90[0x41e] = *(undefined8 *)(lVar43 + 0xb0);
          puVar90[0x41f] = uVar68;
          uVar68 = *(undefined8 *)(lVar43 + 0xa8);
          puVar90[0x41c] = *(undefined8 *)(lVar43 + 0xa0);
          puVar90[0x41d] = uVar68;
          uVar68 = *(undefined8 *)(lVar43 + 0x98);
          puVar90[0x41a] = *(undefined8 *)(lVar43 + 0x90);
          puVar90[0x41b] = uVar68;
          uVar68 = *(undefined8 *)(lVar43 + 0x50);
          uVar3 = *(undefined8 *)(lVar43 + 0x58);
          uVar31 = *(undefined8 *)(lVar43 + 0x60);
          uVar32 = *(undefined8 *)(lVar43 + 0x68);
          uVar33 = *(undefined8 *)(lVar43 + 0x70);
          uVar34 = *(undefined8 *)(lVar43 + 0x78);
          uVar35 = *(undefined8 *)(lVar43 + 0x88);
          puVar90[0x418] = *(undefined8 *)(lVar43 + 0x80);
          puVar90[0x419] = uVar35;
          puVar90[0x416] = uVar33;
          puVar90[0x417] = uVar34;
          puVar90[0x414] = uVar31;
          puVar90[0x415] = uVar32;
          puVar90[0x412] = uVar68;
          puVar90[0x413] = uVar3;
          puVar90[0x5aa] = puVar90[0x684];
          puVar90[0x5a8] = puVar90[0x682];
          puVar90[0x5a9] = puVar90[0x683];
          lVar67 = *(longlong *)(lVar94 + 0x80);
          uVar44 = *(ulonglong *)(lVar67 + 0x568);
          if (!SBORROW8(0,uVar44)) {
            if (uVar44 != 0) {
              pbVar48 = *(byte **)(lVar67 + 0x570);
              *(undefined **)(puVar78 + -8) = &UNK_140523f4f;
              pub_1406abac0(pbVar48,uVar44,1);
            }
            uVar44 = *(ulonglong *)(lVar67 + 0x580);
            if (uVar44 != 0x8000000000000004) {
              uVar60 = 1;
              if ((longlong)uVar44 < 0) {
                uVar60 = uVar44 ^ 0x8000000000000000;
              }
              if ((uVar60 == 0) || (puVar93 = (ulonglong *)(lVar67 + 0x580), uVar60 != 1)) {
                puVar93 = (ulonglong *)(lVar67 + 0x588);
              }
              uVar44 = *puVar93;
              if (uVar44 != 0) {
                pbVar48 = (byte *)puVar93[1];
                *(undefined **)(puVar78 + -8) = &UNK_140523fb5;
                pub_1406abac0(pbVar48,uVar44,1);
              }
            }
            lVar67 = *(longlong *)(lVar94 + 0x80);
          }
          *(undefined8 *)(lVar67 + 0x578) = puVar90[0x5aa];
          uVar68 = puVar90[0x5a9];
          *(undefined8 *)(lVar67 + 0x568) = puVar90[0x5a8];
          *(undefined8 *)(lVar67 + 0x570) = uVar68;
          *(undefined8 *)(lVar67 + 0x580) = 0x8000000000000004;
          *(undefined8 *)(lVar67 + 0x588) = puVar90[0x77a];
          *(undefined8 *)(lVar67 + 0x590) = puVar90[0x77b];
          *(undefined8 *)(lVar67 + 0x598) = puVar90[0x77c];
          *(undefined4 *)(lVar67 + 0x5a0) = unaff_XMM6_Da;
          *(undefined4 *)(lVar67 + 0x5a4) = unaff_XMM6_Db;
          *(undefined4 *)(lVar67 + 0x5a8) = unaff_XMM6_Dc;
          *(undefined4 *)(lVar67 + 0x5ac) = unaff_XMM6_Dd;
          *(undefined8 *)(lVar67 + 0x5b0) = uVar52;
          uVar52 = puVar90[0x41f];
          *(undefined8 *)(lVar67 + 0x618) = puVar90[0x41e];
          *(undefined8 *)(lVar67 + 0x620) = uVar52;
          uVar52 = puVar90[0x41d];
          *(undefined8 *)(lVar67 + 0x608) = puVar90[0x41c];
          *(undefined8 *)(lVar67 + 0x610) = uVar52;
          uVar52 = puVar90[0x41b];
          *(undefined8 *)(lVar67 + 0x5f8) = puVar90[0x41a];
          *(undefined8 *)(lVar67 + 0x600) = uVar52;
          uVar52 = puVar90[0x412];
          uVar68 = puVar90[0x413];
          uVar3 = puVar90[0x414];
          uVar31 = puVar90[0x415];
          uVar41 = *(undefined4 *)(puVar90 + 0x416);
          uVar8 = *(undefined4 *)((longlong)puVar90 + 0x20b4);
          uVar9 = *(undefined4 *)(puVar90 + 0x417);
          uVar10 = *(undefined4 *)((longlong)puVar90 + 0x20bc);
          uVar11 = *(undefined4 *)((longlong)puVar90 + 0x20c4);
          uVar12 = *(undefined4 *)(puVar90 + 0x419);
          uVar13 = *(undefined4 *)((longlong)puVar90 + 0x20cc);
          *(undefined4 *)(lVar67 + 0x5e8) = *(undefined4 *)(puVar90 + 0x418);
          *(undefined4 *)(lVar67 + 0x5ec) = uVar11;
          *(undefined4 *)(lVar67 + 0x5f0) = uVar12;
          *(undefined4 *)(lVar67 + 0x5f4) = uVar13;
          *(undefined4 *)(lVar67 + 0x5d8) = uVar41;
          *(undefined4 *)(lVar67 + 0x5dc) = uVar8;
          *(undefined4 *)(lVar67 + 0x5e0) = uVar9;
          *(undefined4 *)(lVar67 + 0x5e4) = uVar10;
          *(undefined8 *)(lVar67 + 0x5c8) = uVar3;
          *(undefined8 *)(lVar67 + 0x5d0) = uVar31;
          *(undefined8 *)(lVar67 + 0x5b8) = uVar52;
          *(undefined8 *)(lVar67 + 0x5c0) = uVar68;
          *(undefined4 *)(lVar67 + 0x638) = *(undefined4 *)(puVar90 + 0x1aa);
          uVar52 = puVar90[0x1a9];
          *(undefined8 *)(lVar67 + 0x628) = puVar90[0x1a8];
          *(undefined8 *)(lVar67 + 0x630) = uVar52;
          uVar41 = *(undefined4 *)((longlong)puVar90 + 0x1414);
          uVar8 = *(undefined4 *)(puVar90 + 0x283);
          uVar9 = *(undefined4 *)((longlong)puVar90 + 0x141c);
          uVar10 = *(undefined4 *)(puVar90 + 0x284);
          uVar11 = *(undefined4 *)((longlong)puVar90 + 0x1424);
          uVar12 = *(undefined4 *)(puVar90 + 0x285);
          uVar13 = *(undefined4 *)((longlong)puVar90 + 0x142c);
          *(undefined4 *)(lVar67 + 0x63c) = *(undefined4 *)(puVar90 + 0x282);
          *(undefined4 *)(lVar67 + 0x640) = uVar41;
          *(undefined4 *)(lVar67 + 0x644) = uVar8;
          *(undefined4 *)(lVar67 + 0x648) = uVar9;
          *(undefined4 *)(lVar67 + 0x64c) = uVar10;
          *(undefined4 *)(lVar67 + 0x650) = uVar11;
          *(undefined4 *)(lVar67 + 0x654) = uVar12;
          *(undefined4 *)(lVar67 + 0x658) = uVar13;
          *(undefined1 *)(lVar67 + 0x65c) = *(undefined1 *)(puVar90 + 0x286);
          uVar52 = *(undefined8 *)(lVar94 + 0x80);
          puVar90[0x774] = UNRECOVERED_JUMPTABLE;
          *(undefined **)(puVar78 + 0x20) = &UNK_142f63000;
          *(undefined **)(puVar78 + -8) = &UNK_1405240e8;
          uVar52 = pdb_14074f360(uVar95,lVar43,&UNK_142f62fb0,uVar52);
          lVar94 = puVar90[0x782];
          *(undefined8 *)(lVar94 + 0x88) = uVar52;
          *(longlong *)(lVar94 + 0x90) = lVar43;
          puVar89 = puVar78;
code_r0x000140524104:
          puVar90[0x780] = UNRECOVERED_JUMPTABLE;
          uVar95 = puVar90[0x76b];
          pcVar66 = *(code **)(lVar43 + 0x18);
          *(undefined **)(puVar89 + -8) = &UNK_140524115;
          cVar37 = (*pcVar66)(uVar52,uVar95);
          if (cVar37 == '\x02') {
            *(undefined1 *)puVar90[0x780] = 3;
            pcVar66 = (code *)0x1;
            cVar98 = (code)0x3;
            goto code_r0x000140525726;
          }
          puVar90[0x781] = *(undefined8 *)(puVar90[0x782] + 0x88);
          puVar62 = *(undefined8 **)(puVar90[0x782] + 0x90);
          puVar90[0x77f] = puVar62;
          pcVar66 = (code *)*puVar62;
          if (pcVar66 != (code *)0x0) {
            uVar52 = puVar90[0x781];
            *(undefined **)(puVar89 + -8) = &UNK_140524152;
            (*pcVar66)(uVar52);
          }
          pbVar48 = (byte *)puVar90[0x781];
          uVar44 = *(ulonglong *)(puVar90[0x77f] + 8);
          if (uVar44 != 0) {
            uVar60 = *(ulonglong *)(puVar90[0x77f] + 0x10);
            *(undefined **)(puVar89 + -8) = &UNK_140524173;
            pub_1406abac0(pbVar48,uVar44,uVar60);
          }
          lVar43 = puVar90[0x782];
          pcVar66 = *(code **)(*(longlong *)(lVar43 + 0x80) + 0x560);
          uVar44 = (ulonglong)pcVar66 >> 1;
          if (uVar44 != 0) {
            lVar94 = *(longlong *)(*(longlong *)(lVar43 + 0x80) + 0x558);
            pcVar66 = (code *)((longlong)pcVar66 * 0x38 + lVar94 + -8);
            puVar62 = (undefined8 *)(lVar94 + 0x30);
            do {
              uVar52 = puVar62[-6];
              puVar62[-6] = *(undefined8 *)(pcVar66 + -0x30);
              *(undefined8 *)(pcVar66 + -0x30) = uVar52;
              uVar52 = puVar62[-5];
              puVar62[-5] = *(undefined8 *)(pcVar66 + -0x28);
              *(undefined8 *)(pcVar66 + -0x28) = uVar52;
              uVar52 = puVar62[-4];
              puVar62[-4] = *(undefined8 *)(pcVar66 + -0x20);
              *(undefined8 *)(pcVar66 + -0x20) = uVar52;
              uVar52 = puVar62[-3];
              puVar62[-3] = *(undefined8 *)(pcVar66 + -0x18);
              *(undefined8 *)(pcVar66 + -0x18) = uVar52;
              uVar52 = puVar62[-2];
              puVar62[-2] = *(undefined8 *)(pcVar66 + -0x10);
              *(undefined8 *)(pcVar66 + -0x10) = uVar52;
              uVar52 = puVar62[-1];
              puVar62[-1] = *(undefined8 *)(pcVar66 + -8);
              *(undefined8 *)(pcVar66 + -8) = uVar52;
              uVar52 = *puVar62;
              *puVar62 = *(undefined8 *)pcVar66;
              *(undefined8 *)pcVar66 = uVar52;
              puVar62 = puVar62 + 7;
              pcVar66 = pcVar66 + -0x38;
              uVar44 = uVar44 - 1;
            } while (uVar44 != 0);
          }
          *(undefined1 *)(lVar43 + 0x98) = 1;
          lVar43 = *(longlong *)(lVar43 + 0x40);
          puVar51 = puVar89;
        }
        if (lVar43 != 0) {
          lVar94 = puVar90[0x782];
          pcVar66 = *(code **)(lVar94 + 0x50);
          uVar52 = *(undefined8 *)(lVar94 + 0x58);
          UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar94 + 0x48) + 0x20);
          *(undefined **)(puVar51 + -8) = &UNK_14052426a;
          (*UNRECOVERED_JUMPTABLE)(lVar43,pcVar66,uVar52);
        }
        pcVar59 = (code *)puVar90[0x782];
        unaff_RBX = *(code **)(pcVar59 + 0x30);
        puVar89 = puVar51;
        if (unaff_RBX == (code *)0x2) break;
        lVar43 = *(longlong *)(pcVar59 + 0x10);
        if (*(longlong *)(lVar43 + 0x10) == 0) {
code_r0x0001405257f8:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar51 + -8) = &UNK_140525804;
          pdb_142dc8150(&UNK_142f62ea8);
        }
        lVar94 = *(longlong *)(lVar43 + 0x10) * 0x6d0;
        lVar67 = *(longlong *)(lVar43 + 8) + lVar94 + -0x6d0;
        if (lVar67 == 0) goto code_r0x0001405257f8;
        unaff_R13 = *(code **)(pcVar59 + 0x38);
        lVar94 = *(longlong *)(lVar43 + 8) + lVar94;
        *(longlong *)pcVar92 = lVar67;
        plVar36 = plRam0000000143ca4018;
        plVar46 = plRam0000000143ca4010;
        param_2 = *(code **)(lVar43 + 0x10);
        param_3 = (code *)0x0;
        if ((code *)0x1 < param_2) {
          param_2 = (code *)((longlong)param_2 * 0x6d0);
          param_3 = param_2 + *(longlong *)(lVar43 + 8) + -0xda0;
        }
        if (SBORROW8(0,*(longlong *)(lVar94 + -0x70))) {
          if (*_DAT_143ca4b08 == 0) {
            param_2 = (code *)(ulonglong)*(byte *)(plRam0000000143ca4010 + 2);
            if (2 < *(byte *)(plRam0000000143ca4010 + 2)) {
              *(undefined **)(puVar51 + -8) = &UNK_140525842;
              uVar39 = pdb_142db8070(plRam0000000143ca4010);
              param_2 = (code *)CONCAT71((int7)((ulonglong)param_2 >> 8),uVar39);
            }
            if ((char)param_2 != '\0') {
              lVar43 = *plVar46;
              *(undefined **)(puVar51 + -8) = &UNK_140524671;
              cVar37 = pdb_140dd7f60(lVar43);
              if (cVar37 != '\0') {
                lVar43 = *plVar46;
                lVar94 = *(longlong *)(lVar43 + 0x38);
                if (lVar94 != 0) {
                  uVar41 = *(undefined4 *)(lVar43 + 0x40);
                  uVar8 = *(undefined4 *)(lVar43 + 0x44);
                  uVar9 = *(undefined4 *)(lVar43 + 0x48);
                  uVar10 = *(undefined4 *)(lVar43 + 0x4c);
                  puVar90[0x412] = *(undefined8 *)(lVar43 + 0x30);
                  puVar90[0x413] = lVar94;
                  *(undefined4 *)(puVar90 + 0x414) = uVar41;
                  *(undefined4 *)((longlong)puVar90 + 0x20a4) = uVar8;
                  *(undefined4 *)(puVar90 + 0x415) = uVar9;
                  *(undefined4 *)((longlong)puVar90 + 0x20ac) = uVar10;
                  puVar90[0x416] = 0;
                  puVar90[0x775] = *(longlong *)pcVar92 + 0x6a0;
                  puVar90[0x776] = pdb_140f71410;
                  puVar90[0x76c] = &UNK_142f62ed8;
                  puVar90[0x76d] = puVar90 + 0x775;
                  puVar90[0x5a8] = puVar90 + 0x412;
                  puVar90[0x5a9] = puVar90 + 0x76c;
                  puVar90[0x5aa] = &UNK_142f62e58;
                  puVar90[0x1a8] = puVar90 + 0x5a8;
                  puVar90[0x1a9] = 1;
                  puVar90[0x1aa] = lVar43 + 0x30;
                  *(undefined **)(puVar51 + -8) = &UNK_140524748;
                  puVar62 = puVar90 + 0x1a8;
                  pdb_140dd9020();
                  if ((*_DAT_143ca4ab0 == 0) &&
                     (4 < *(ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90))) {
                    lVar43 = *plVar46;
                    uVar41 = *(undefined4 *)(lVar43 + 0x20);
                    uVar8 = *(undefined4 *)(lVar43 + 0x24);
                    uVar9 = *(undefined4 *)(lVar43 + 0x28);
                    uVar10 = *(undefined4 *)(lVar43 + 0x2c);
                    puVar90[0x682] = 5;
                    *(undefined4 *)(puVar90 + 0x683) = uVar41;
                    *(undefined4 *)((longlong)puVar90 + 0x341c) = uVar8;
                    *(undefined4 *)(puVar90 + 0x684) = uVar9;
                    *(undefined4 *)((longlong)puVar90 + 0x3424) = uVar10;
                    *(undefined **)(puVar51 + -8) = &UNK_14052478e;
                    uVar52 = pdb_140f33290();
                    pcVar66 = (code *)puVar62[3];
                    *(undefined **)(puVar51 + -8) = &UNK_1405247a2;
                    cVar37 = (*pcVar66)(uVar52,puVar90 + 0x682);
                    if (cVar37 != '\0') {
                      puVar90[0x284] = puVar90[0x684];
                      *(undefined4 *)(puVar90 + 0x282) = *(undefined4 *)(puVar90 + 0x682);
                      *(undefined4 *)((longlong)puVar90 + 0x1414) =
                           *(undefined4 *)((longlong)puVar90 + 0x3414);
                      *(undefined4 *)(puVar90 + 0x283) = *(undefined4 *)(puVar90 + 0x683);
                      *(undefined4 *)((longlong)puVar90 + 0x141c) =
                           *(undefined4 *)((longlong)puVar90 + 0x341c);
                      *(undefined8 **)(puVar51 + 0x20) = puVar90 + 0x1a8;
                      *(undefined **)(puVar51 + -8) = &UNK_1405247e1;
                      pdb_140dd7f80(lVar43,uVar52,puVar62,puVar90 + 0x282);
                    }
                  }
                  goto code_r0x00014052496f;
                }
                *(undefined **)(puVar51 + -8) = &UNK_14052593b;
                pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f62ec0);
                goto code_r0x0001405259a8;
              }
            }
          }
          if ((*_DAT_143ca4ab0 == 0) &&
             (4 < *(ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90))) {
            lVar43 = *plRam0000000143ca4010;
            uVar41 = *(undefined4 *)(lVar43 + 0x20);
            uVar8 = *(undefined4 *)(lVar43 + 0x24);
            uVar9 = *(undefined4 *)(lVar43 + 0x28);
            uVar10 = *(undefined4 *)(lVar43 + 0x2c);
            puVar90[0x75f] = 5;
            *(undefined4 *)(puVar90 + 0x760) = uVar41;
            *(undefined4 *)((longlong)puVar90 + 0x3b04) = uVar8;
            *(undefined4 *)(puVar90 + 0x761) = uVar9;
            *(undefined4 *)((longlong)puVar90 + 0x3b0c) = uVar10;
            *(undefined **)(puVar51 + -8) = &UNK_140524347;
            uVar52 = pdb_140f33290();
            pcVar66 = *(code **)(param_2 + 0x18);
            *(undefined **)(puVar51 + -8) = &UNK_14052435d;
            cVar37 = (*pcVar66)(uVar52,puVar90 + 0x75f);
            if (cVar37 != '\0') {
              lVar94 = *plRam0000000143ca4010;
              lVar67 = *(longlong *)(lVar94 + 0x38);
              if (lVar67 == 0) {
                *(undefined **)(puVar51 + -8) = &UNK_140525956;
                pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f62ec0);
                goto code_r0x0001405259a8;
              }
              uVar95 = *(undefined8 *)(lVar94 + 0x40);
              uVar68 = *(undefined8 *)(lVar94 + 0x48);
              puVar90[0x412] = *(undefined8 *)(lVar94 + 0x30);
              puVar90[0x413] = lVar67;
              puVar90[0x414] = uVar95;
              puVar90[0x415] = uVar68;
              puVar90[0x416] = 0;
              puVar90[0x1a8] = *(longlong *)pcVar92 + 0x6a0;
              puVar90[0x1a9] = pdb_140f71410;
              puVar90[0x775] = &UNK_142f62ed8;
              puVar90[0x776] = puVar90 + 0x1a8;
              puVar90[0x682] = puVar90 + 0x412;
              puVar90[0x683] = puVar90 + 0x775;
              puVar90[0x684] = &UNK_142f62e58;
              puVar90[0x5a8] = puVar90 + 0x682;
              puVar90[0x5a9] = 1;
              puVar90[0x5aa] = lVar94 + 0x30;
              puVar90[0x284] = puVar90[0x761];
              *(undefined4 *)(puVar90 + 0x282) = *(undefined4 *)(puVar90 + 0x75f);
              *(undefined4 *)((longlong)puVar90 + 0x1414) =
                   *(undefined4 *)((longlong)puVar90 + 0x3afc);
              *(undefined4 *)(puVar90 + 0x283) = *(undefined4 *)(puVar90 + 0x760);
              *(undefined4 *)((longlong)puVar90 + 0x141c) =
                   *(undefined4 *)((longlong)puVar90 + 0x3b04);
              *(undefined8 **)(puVar51 + 0x20) = puVar90 + 0x5a8;
              *(undefined **)(puVar51 + -8) = &UNK_140524469;
              pdb_140dd7f80(lVar43,uVar52,param_2,puVar90 + 0x282);
            }
          }
        }
        else {
          puVar90[0x771] = lVar94 + -0x70;
          if (*_DAT_143ca4b08 == 0) {
            param_2 = (code *)(ulonglong)*(byte *)(plRam0000000143ca4018 + 2);
            if (2 < *(byte *)(plRam0000000143ca4018 + 2)) {
              *(undefined **)(puVar51 + -8) = &UNK_140525855;
              uVar39 = pdb_142db8070(plRam0000000143ca4018);
              param_2 = (code *)CONCAT71((int7)((ulonglong)param_2 >> 8),uVar39);
            }
            if ((char)param_2 != '\0') {
              lVar43 = *plVar36;
              *(undefined **)(puVar51 + -8) = &UNK_14052480b;
              cVar37 = pdb_140dd7f60(lVar43);
              if (cVar37 != '\0') {
                lVar43 = *plVar36;
                lVar94 = *(longlong *)(lVar43 + 0x38);
                if (lVar94 != 0) {
                  uVar41 = *(undefined4 *)(lVar43 + 0x40);
                  uVar8 = *(undefined4 *)(lVar43 + 0x44);
                  uVar9 = *(undefined4 *)(lVar43 + 0x48);
                  uVar10 = *(undefined4 *)(lVar43 + 0x4c);
                  puVar90[0x412] = *(undefined8 *)(lVar43 + 0x30);
                  puVar90[0x413] = lVar94;
                  *(undefined4 *)(puVar90 + 0x414) = uVar41;
                  *(undefined4 *)((longlong)puVar90 + 0x20a4) = uVar8;
                  *(undefined4 *)(puVar90 + 0x415) = uVar9;
                  *(undefined4 *)((longlong)puVar90 + 0x20ac) = uVar10;
                  puVar90[0x416] = 0;
                  puVar90[0x775] = puVar90 + 0x771;
                  puVar90[0x776] = pdb_140493ec0;
                  puVar90[0x76c] = &UNK_142f62f08;
                  puVar90[0x76d] = puVar90 + 0x775;
                  puVar90[0x5a8] = puVar90 + 0x412;
                  puVar90[0x5a9] = puVar90 + 0x76c;
                  puVar90[0x5aa] = &UNK_142f62e58;
                  puVar90[0x1a8] = puVar90 + 0x5a8;
                  puVar90[0x1a9] = 1;
                  puVar90[0x1aa] = lVar43 + 0x30;
                  *(undefined **)(puVar51 + -8) = &UNK_1405248e1;
                  puVar62 = puVar90 + 0x1a8;
                  pdb_140dd9020();
                  if ((*_DAT_143ca4ab0 == 0) &&
                     (4 < *(ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90))) {
                    lVar43 = *plVar36;
                    uVar41 = *(undefined4 *)(lVar43 + 0x20);
                    uVar8 = *(undefined4 *)(lVar43 + 0x24);
                    uVar9 = *(undefined4 *)(lVar43 + 0x28);
                    uVar10 = *(undefined4 *)(lVar43 + 0x2c);
                    puVar90[0x682] = 5;
                    *(undefined4 *)(puVar90 + 0x683) = uVar41;
                    *(undefined4 *)((longlong)puVar90 + 0x341c) = uVar8;
                    *(undefined4 *)(puVar90 + 0x684) = uVar9;
                    *(undefined4 *)((longlong)puVar90 + 0x3424) = uVar10;
                    *(undefined **)(puVar51 + -8) = &UNK_14052491f;
                    uVar52 = pdb_140f33290();
                    pcVar66 = (code *)puVar62[3];
                    *(undefined **)(puVar51 + -8) = &UNK_140524933;
                    cVar37 = (*pcVar66)(uVar52,puVar90 + 0x682);
                    if (cVar37 != '\0') {
                      puVar90[0x284] = puVar90[0x684];
                      *(undefined4 *)(puVar90 + 0x282) = *(undefined4 *)(puVar90 + 0x682);
                      *(undefined4 *)((longlong)puVar90 + 0x1414) =
                           *(undefined4 *)((longlong)puVar90 + 0x3414);
                      *(undefined4 *)(puVar90 + 0x283) = *(undefined4 *)(puVar90 + 0x683);
                      *(undefined4 *)((longlong)puVar90 + 0x141c) =
                           *(undefined4 *)((longlong)puVar90 + 0x341c);
                      *(undefined8 **)(puVar51 + 0x20) = puVar90 + 0x1a8;
                      *(undefined **)(puVar51 + -8) = &UNK_14052496e;
                      pdb_140dd7f80(lVar43,uVar52,puVar62,puVar90 + 0x282);
                    }
                  }
                  goto code_r0x00014052496f;
                }
                *(undefined **)(puVar51 + -8) = &UNK_14052591d;
                pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f62ef0);
                goto code_r0x0001405259a8;
              }
            }
          }
          if (*_DAT_143ca4ab0 == 0) {
            bVar96 = *(ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90) < 5;
code_r0x0001405244ad:
            plVar46 = plRam0000000143ca4018;
            if (!bVar96) {
              unaff_R14 = (code *)*plRam0000000143ca4018;
              uVar42 = *(uint *)(unaff_R14 + 0x20);
              uVar58 = *(uint *)(unaff_R14 + 0x24);
              uVar99 = *(uint *)(unaff_R14 + 0x28);
              uVar100 = *(uint *)(unaff_R14 + 0x2c);
              puVar90[0x762] = 5;
              *(uint *)(puVar90 + 0x763) = uVar42;
              *(uint *)((longlong)puVar90 + 0x3b1c) = uVar58;
              *(uint *)(puVar90 + 0x764) = uVar99;
              *(uint *)((longlong)puVar90 + 0x3b24) = uVar100;
              *(undefined **)(puVar51 + -8) = &UNK_1405244d9;
              pcVar59 = (code *)pdb_140f33290();
              pcVar66 = *(code **)(param_2 + 0x18);
              *(undefined **)(puVar51 + -8) = &UNK_1405244ef;
              cVar37 = (*pcVar66)(pcVar59,puVar90 + 0x762);
              if (cVar37 != '\0') {
                UNRECOVERED_JUMPTABLE = *(code **)((code *)*plVar46 + 0x38);
                pcVar66 = (code *)*plVar46;
                unaff_R12 = param_2;
                if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                  *(undefined **)(puVar51 + -8) = &UNK_140525971;
                  pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f62ef0);
                  goto code_r0x0001405259a8;
                }
code_r0x000140524508:
                uVar52 = *(undefined8 *)(pcVar66 + 0x40);
                uVar95 = *(undefined8 *)(pcVar66 + 0x48);
                puVar90[0x412] = *(undefined8 *)(pcVar66 + 0x30);
                puVar90[0x413] = UNRECOVERED_JUMPTABLE;
                puVar90[0x414] = uVar52;
                puVar90[0x415] = uVar95;
                puVar90[0x416] = 0;
                puVar90[0x1a8] = puVar90 + 0x771;
                puVar90[0x1a9] = pdb_140493ec0;
                puVar90[0x775] = &UNK_142f62f08;
                puVar90[0x776] = puVar90 + 0x1a8;
                puVar90[0x682] = puVar90 + 0x412;
                puVar90[0x683] = puVar90 + 0x775;
                puVar90[0x684] = &UNK_142f62e58;
                puVar90[0x5a8] = puVar90 + 0x682;
                puVar90[0x5a9] = 1;
                puVar90[0x5aa] = pcVar66 + 0x30;
                puVar90[0x284] = puVar90[0x764];
                *(undefined4 *)(puVar90 + 0x282) = *(undefined4 *)(puVar90 + 0x762);
                *(undefined4 *)((longlong)puVar90 + 0x1414) =
                     *(undefined4 *)((longlong)puVar90 + 0x3b14);
                *(undefined4 *)(puVar90 + 0x283) = *(undefined4 *)(puVar90 + 0x763);
                *(undefined4 *)((longlong)puVar90 + 0x141c) =
                     *(undefined4 *)((longlong)puVar90 + 0x3b1c);
                *(undefined8 **)(puVar51 + 0x20) = puVar90 + 0x5a8;
                *(undefined **)(puVar51 + -8) = &UNK_1405245f3;
                pdb_140dd7f80(unaff_R14,pcVar59,unaff_R12,puVar90 + 0x282);
              }
            }
          }
        }
code_r0x00014052496f:
        unaff_R15 = (code *)puVar90[0x782];
        unaff_R14 = unaff_R15 + 0x70;
        *(undefined8 *)(unaff_R15 + 0x80) = *(undefined8 *)(unaff_R15 + 0x68);
        *(code **)(unaff_R15 + 0xa0) = param_3;
        *(code **)(unaff_R15 + 0x70) = unaff_RBX;
        *(code **)(unaff_R15 + 0x78) = unaff_R13;
        *(undefined8 *)(unaff_R15 + 0x88) = *(undefined8 *)(unaff_R15 + 0x18);
        *(undefined8 *)(unaff_R15 + 0x90) = *(undefined8 *)(unaff_R15 + 0x28);
        *(undefined8 *)(unaff_R15 + 0x98) = *(undefined8 *)(unaff_R15 + 0x20);
        unaff_R12 = unaff_R15 + 0xb0;
        *(undefined8 *)(unaff_R15 + 0xb0) = *(undefined8 *)(unaff_R15 + 0x50);
        *(code **)(unaff_R15 + 0xe8) = unaff_R14;
        pcVar92 = unaff_R15 + 0xf2;
        unaff_R15[0xf2] = (code)0x0;
        *(undefined2 *)(unaff_R15 + 0xf0) = 0;
        param_3 = unaff_R15 + 0xb8;
        *(undefined8 *)(unaff_R15 + 0xb8) = *(undefined8 *)(unaff_R15 + 0x50);
        lVar43 = *_DAT_143ca4b08;
        puVar90[0x781] = unaff_R12;
        puVar79 = puVar51;
        puVar85 = puVar51;
        if (lVar43 == 0) {
code_r0x000140525095:
          unaff_RBX = pcRam0000000143ca4028;
          param_2 = (code *)(ulonglong)(byte)pcRam0000000143ca4028[0x10];
          if (2 < (byte)pcRam0000000143ca4028[0x10]) {
            puVar90[0x77d] = unaff_R12;
            *(undefined **)(puVar85 + -8) = &UNK_14052582f;
            bVar38 = pdb_142db8070(pcRam0000000143ca4028);
            param_2 = (code *)(ulonglong)bVar38;
          }
code_r0x0001405250a9:
          unaff_R15 = (code *)puVar90[0x782];
          puVar79 = puVar85;
          if ((char)param_2 == '\0') goto code_r0x000140524a0f;
code_r0x0001405250b8:
          uVar52 = *(undefined8 *)unaff_RBX;
          puVar90[0x77d] = unaff_R12;
          *(undefined **)(puVar79 + -8) = &UNK_1405250c7;
          cVar37 = pdb_140dd7f60(uVar52);
          unaff_R15 = (code *)puVar90[0x782];
          puVar78 = puVar79;
          param_2 = pcVar92;
          if (cVar37 == '\0') goto code_r0x000140524a0f;
code_r0x0001405250d7:
          pcVar66 = *(code **)unaff_RBX;
          pcVar59 = *(code **)(pcVar66 + 0x38);
          puVar82 = puVar78;
          if (pcVar59 == (code *)0x0) {
            puVar90[0x77d] = unaff_R12;
            *(undefined **)(puVar78 + -8) = &UNK_1405258ff;
            pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f62f58);
            goto code_r0x0001405259a8;
          }
code_r0x0001405250e7:
          in_R10 = *(undefined8 *)(pcVar66 + 0x30);
          pcVar50 = *(code **)(pcVar66 + 0x40);
          param_4 = *(longlong *)(pcVar66 + 0x48);
          puVar90[0x775] = in_R10;
          puVar83 = puVar82;
code_r0x0001405250fa:
          puVar90[0x776] = pcVar59;
          puVar90[0x777] = pcVar50;
          puVar90[0x778] = param_4;
          puVar90[0x779] = 0;
          puVar86 = puVar83;
          if (pcVar59 == (code *)0x1) {
            puVar90[0x77d] = unaff_R12;
            *(undefined **)(puVar83 + -8) = &UNK_1405258da;
            pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f62f58);
            goto code_r0x0001405259a8;
          }
code_r0x000140525124:
          UNRECOVERED_JUMPTABLE = pcVar66 + 0x30;
          puVar90[0x682] = in_R10;
          puVar90[0x683] = pcVar59;
          puVar90[0x684] = pcVar50;
          puVar90[0x685] = param_4;
          puVar90[0x686] = 1;
          param_4 = *(longlong *)(unaff_R14 + 0x10);
          pcVar59 = (code *)0x0;
          puVar84 = puVar86;
          pcVar92 = param_2;
          pcVar50 = (code *)0x1;
          if (!SBORROW8(0,*(longlong *)(param_4 + 0x660))) {
            pcVar50 = *(code **)(param_4 + 0x668);
            puVar81 = puVar86;
code_r0x00014052516b:
            pcVar59 = *(code **)(param_4 + 0x670);
            puVar84 = puVar81;
            pcVar92 = param_2;
          }
code_r0x000140525172:
          puVar90[0x771] = pcVar50;
          puVar90[0x772] = pcVar59;
          puVar90[0x282] = puVar90 + 0x775;
          puVar90[0x283] = param_3;
          puVar90[0x284] = &UNK_142f62f70;
          puVar90[0x285] = puVar90 + 0x682;
          puVar90[0x286] = puVar90 + 0x771;
          puVar90[0x287] = &UNK_142f62f90;
          pcVar61 = (char *)(puVar90 + 0x282);
          pcVar59 = unaff_R15;
code_r0x0001405251d4:
          puVar90[0x76c] = pcVar61;
          puVar90[0x76d] = 2;
          puVar90[0x76e] = UNRECOVERED_JUMPTABLE;
          puVar70 = puVar84;
code_r0x0001405251ed:
          puVar90[0x77d] = unaff_R12;
          *(undefined **)(puVar70 + -8) = &UNK_140525207;
          pdb_140dd86f0(pcVar59 + 0xc0);
          unaff_R15 = (code *)puVar90[0x782];
          unaff_R15[0xf0] = (code)0x1;
          puVar79 = puVar70;
          puVar62 = puVar90;
        }
        else {
code_r0x000140524a0f:
          lVar43 = *(longlong *)pcRam0000000143ca4028;
          puVar90[0x76c] = 2;
          puVar90[0x770] = lVar43;
          puVar62 = puVar90;
          if (*_DAT_143ca4ab0 == 0) {
            lVar94 = *(longlong *)(lVar43 + 0x38);
            if (lVar94 == 0) {
              *(undefined **)(puVar79 + -8) = &UNK_1405258b5;
              pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f62f58);
              goto code_r0x0001405259a8;
            }
            uVar52 = *(undefined8 *)(lVar43 + 0x30);
            uVar95 = *(undefined8 *)(lVar43 + 0x40);
            uVar68 = *(undefined8 *)(lVar43 + 0x48);
            puVar90[0x775] = uVar52;
            puVar90[0x776] = lVar94;
            puVar90[0x777] = uVar95;
            puVar90[0x778] = uVar68;
            puVar90[0x779] = 0;
            if (lVar94 == 1) {
              *(undefined **)(puVar79 + -8) = &UNK_140525897;
              pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f62f58);
              goto code_r0x0001405259a8;
            }
            UNRECOVERED_JUMPTABLE = (code *)(lVar43 + 0x30);
            puVar90[0x682] = uVar52;
            puVar90[0x683] = lVar94;
            puVar90[0x684] = uVar95;
            puVar90[0x685] = uVar68;
            puVar90[0x686] = 1;
            lVar43 = *(longlong *)(unaff_R14 + 0x10);
            pcVar59 = (code *)0x0;
            pcVar66 = (code *)0x1;
            if (!SBORROW8(0,*(longlong *)(lVar43 + 0x660))) {
              pcVar66 = *(code **)(lVar43 + 0x668);
              pcVar59 = *(code **)(lVar43 + 0x670);
            }
code_r0x000140524ad4:
            puVar62[0x75d] = pcVar66;
            puVar62[0x75e] = pcVar59;
            puVar62[0x282] = puVar62 + 0x775;
            puVar62[0x283] = param_3;
            puVar62[0x284] = &UNK_142f62f70;
            puVar62[0x285] = puVar62 + 0x682;
            puVar62[0x286] = puVar62 + 0x75d;
            puVar62[0x287] = &UNK_142f62f90;
            puVar62[0x771] = puVar62 + 0x282;
            puVar62[0x772] = 2;
            puVar62[0x773] = UNRECOVERED_JUMPTABLE;
            *(undefined **)(puVar79 + -8) = &UNK_140524b62;
            pdb_140dd83b0(puVar62 + 0x76c,puVar62 + 0x771);
            unaff_R15 = (code *)puVar62[0x782];
          }
          unaff_R15[0xf0] = (code)0x1;
          uVar52 = puVar62[0x76d];
          uVar42 = *(uint *)(puVar62 + 0x76e);
          uVar58 = *(uint *)((longlong)puVar62 + 0x3b74);
          uVar99 = *(uint *)(puVar62 + 0x76f);
          uVar100 = *(uint *)((longlong)puVar62 + 0x3b7c);
          *(undefined8 *)(unaff_R15 + 0xc0) = puVar62[0x76c];
          *(undefined8 *)(unaff_R15 + 200) = uVar52;
          *(uint *)(unaff_R15 + 0xd0) = uVar42;
          *(uint *)(unaff_R15 + 0xd4) = uVar58;
          *(uint *)(unaff_R15 + 0xd8) = uVar99;
          *(uint *)(unaff_R15 + 0xdc) = uVar100;
          *(undefined8 *)(unaff_R15 + 0xe0) = puVar62[0x770];
        }
        puVar62[0x282] = unaff_R14;
        *(undefined1 *)(puVar62 + 0x283) = 0;
        unaff_R15[0xf1] = (code)0x0;
        puVar90 = puVar62;
        if (*(uint *)(unaff_R15 + 0xc0) == 2) {
          *(undefined **)(puVar79 + -8) = &UNK_140524be8;
          pub_142e32760(unaff_R15 + 0x100,puVar62 + 0x282,0xc80);
          puVar62[0x77f] = unaff_R15 + 0x100;
          uVar52 = puVar62[0x76b];
          *(undefined **)(puVar79 + -8) = &UNK_140524c09;
          pdb_140506ea0(puVar62 + 0x682,unaff_R15 + 0x100,uVar52);
          param_3 = (code *)puVar62[0x682];
          if (param_3 == (code *)0x3) {
            cVar98 = (code)0x4;
code_r0x0001405254d4:
            pcVar59 = (code *)puVar62[0x782];
            *pcVar92 = cVar98;
            pcVar66 = (code *)0x1;
            pcVar59[0x60] = (code)0x4;
            uVar42 = *(uint *)(pcVar59 + 0xdb0);
            puVar89 = puVar79;
            goto joined_r0x0001405254ee;
          }
code_r0x000140524c1b:
          *(undefined **)(puVar79 + -8) = &UNK_140524c34;
          pub_142e32760(puVar62 + 0x5a8,puVar62 + 0x683,0x6c8);
          pcVar66 = (code *)puVar62[0x782];
          pcVar50 = (code *)(ulonglong)((byte)pcVar66[0x108] - 3);
          puVar80 = puVar79;
          puVar90 = puVar62;
code_r0x000140524c45:
          puVar88 = puVar80;
          if ((uint)pcVar50 < 6) {
            pcVar92 = (code *)puVar90[0x781];
            puVar87 = puVar80;
            puVar85 = puVar80;
            puVar86 = puVar80;
            puVar81 = puVar80;
            switch(&UNK_142f64494 + *(int *)(&UNK_142f64494 + (longlong)pcVar50 * 4)) {
            case (undefined *)0x140524c65:
              puVar90[0x77e] = pcVar92;
              *(undefined **)(puVar80 + -8) = &UNK_140524c78;
              pdb_14033a7b0(pcVar66 + 0x110);
              break;
            case (undefined *)0x14052521c:
code_r0x00014052521c:
              puVar90[0x77e] = pcVar92;
              *(undefined **)(puVar85 + -8) = &UNK_14052522f;
              pdb_14033aa10(pcVar66 + 0x110);
              puVar81 = puVar85;
              break;
            case (undefined *)0x140525235:
code_r0x000140525235:
              puVar90[0x77e] = pcVar92;
              *(undefined **)(puVar86 + -8) = &UNK_140525248;
              pdb_14033bd00(pcVar66 + 0x110);
              puVar81 = puVar86;
              break;
            case (undefined *)0x14052524e:
              puVar90[0x77e] = pcVar92;
              *(undefined **)(puVar80 + -8) = &UNK_140525261;
              pdb_14033b2b0(pcVar66 + 0x110);
              break;
            case (undefined *)0x140525267:
              puVar90[0x77e] = pcVar92;
              *(undefined **)(puVar80 + -8) = &UNK_14052527a;
              pdb_14033b5c0(pcVar66 + 0x110);
              break;
            case (undefined *)0x140525280:
code_r0x000140525280:
              puVar90[0x77e] = pcVar92;
              *(undefined **)(puVar87 + -8) = &UNK_140525293;
              pdb_140522b20(pcVar66 + 0x110);
              puVar81 = puVar87;
            }
            goto code_r0x000140524d5a;
          }
code_r0x000140525299:
          pcVar92 = (code *)puVar90[0x781];
          lVar43 = puVar90[0x782];
          *(undefined1 *)(lVar43 + 0xf1) = 0;
          cVar37 = *(char *)(lVar43 + 0xf0);
        }
        else {
          *(undefined **)(puVar79 + -8) = &UNK_140524ca1;
          pub_142e32760(puVar62 + 0x412,puVar62 + 0x282,0xc80);
          unaff_R15[0xf0] = (code)0x0;
          uVar42 = *(uint *)(unaff_R15 + 0xc4);
          uVar58 = *(uint *)(unaff_R15 + 200);
          uVar99 = *(uint *)(unaff_R15 + 0xcc);
          uVar100 = *(uint *)(unaff_R15 + 0xd0);
          uVar40 = *(uint *)(unaff_R15 + 0xd4);
          uVar63 = *(uint *)(unaff_R15 + 0xd8);
          uVar22 = *(uint *)(unaff_R15 + 0xdc);
          *(uint *)(puVar62 + 0x5a2) = *(uint *)(unaff_R15 + 0xc0);
          *(uint *)((longlong)puVar62 + 0x2d14) = uVar42;
          *(uint *)(puVar62 + 0x5a3) = uVar58;
          *(uint *)((longlong)puVar62 + 0x2d1c) = uVar99;
          *(uint *)(puVar62 + 0x5a4) = uVar100;
          *(uint *)((longlong)puVar62 + 0x2d24) = uVar40;
          *(uint *)(puVar62 + 0x5a5) = uVar63;
          *(uint *)((longlong)puVar62 + 0x2d2c) = uVar22;
          puVar62[0x5a6] = *(undefined8 *)(unaff_R15 + 0xe0);
          *(undefined **)(puVar79 + -8) = &UNK_140524cde;
          pub_142e32760(unaff_R15 + 0x100,puVar62 + 0x412,0xcb0);
          puVar62[0x77f] = unaff_R15 + 0x100;
          uVar52 = puVar62[0x76b];
          *(undefined **)(puVar79 + -8) = &UNK_140524cff;
          pdb_1405260a0(puVar62 + 0x682,unaff_R15 + 0x100,uVar52);
          param_3 = (code *)puVar62[0x682];
          if (param_3 == (code *)0x3) {
            cVar98 = (code)0x3;
            goto code_r0x0001405254d4;
          }
          *(undefined **)(puVar79 + -8) = &UNK_140524d2a;
          pub_142e32760(puVar62 + 0x5a8,puVar62 + 0x683,0x6c8);
          uVar52 = puVar62[0x77f];
          *(undefined **)(puVar79 + -8) = &UNK_140524d37;
          pdb_1405233b0(uVar52);
          lVar43 = puVar62[0x782];
          pcVar92 = (code *)puVar62[0x781];
          puVar62[0x77e] = pcVar92;
          *(undefined **)(puVar79 + -8) = &UNK_140524d59;
          pdb_1404b31b0(lVar43 + 0xd80);
          puVar81 = puVar79;
code_r0x000140524d5a:
          lVar43 = puVar90[0x782];
          *(undefined1 *)(lVar43 + 0xf1) = 0;
          cVar37 = *(char *)(lVar43 + 0xf0);
          puVar88 = puVar81;
        }
        if (cVar37 != '\0') {
          lVar43 = puVar90[0x782];
          puVar90[0x77d] = pcVar92;
          *(undefined **)(puVar88 + -8) = &UNK_140524d8b;
          pdb_140522f70(lVar43 + 0xc0);
        }
        lVar43 = puVar90[0x782];
        *(undefined1 *)(lVar43 + 0xf0) = 0;
        pcVar66 = (code *)(puVar90 + 0x1a8);
        *(undefined **)(puVar88 + -8) = &UNK_140524db7;
        pub_142e32760(pcVar66,puVar90 + 0x5a8,0x6c8);
        *(undefined1 *)(lVar43 + 0xf2) = 1;
        *(undefined **)(puVar88 + -8) = &UNK_140524dd1;
        pub_142e32760(puVar90 + -0xb,pcVar66,0x6c8);
        *(undefined **)(puVar88 + -8) = &UNK_140524dda;
        pdb_1405229b0(pcVar92);
        puVar89 = puVar88;
        if ((int)param_3 == 2) {
          pcVar59 = (code *)puVar90[0x782];
          pcVar59[0x61] = (code)0x0;
          break;
        }
        puVar90[0xce] = param_3;
        *(undefined **)(puVar88 + -8) = &UNK_140524e7c;
        pub_142e32760(puVar90 + 0xcf,puVar90 + -0xb,0x6c8);
        plVar46 = *(longlong **)(puVar90[0x782] + 0x10);
        lVar43 = plVar46[2];
        if (lVar43 == *plVar46) {
          *(undefined **)(puVar88 + -8) = &UNK_140524e98;
          pdb_142d7ea60(plVar46);
        }
        lVar94 = plVar46[1];
        pcVar66 = (code *)(puVar90 + 0xce);
        *(undefined **)(puVar88 + -8) = &UNK_140524eb6;
        pub_142e32760(lVar43 * 0x6d0 + lVar94,pcVar66,0x6d0);
        plVar46[2] = lVar43 + 1;
        pcVar59 = (code *)puVar90[0x782];
        puVar78 = puVar88;
      } while (((byte)pcVar59[0x61] & 1) != 0);
    }
    plVar46 = plRam0000000143ca4020;
    if (*_DAT_143ca4b08 == 0) {
      bVar38 = *(byte *)(plRam0000000143ca4020 + 2);
      pcVar66 = (code *)(ulonglong)bVar38;
      if (2 < bVar38) {
        *(undefined **)(puVar89 + -8) = &UNK_140525868;
        uVar42 = pdb_142db8070(plRam0000000143ca4020);
        pcVar66 = (code *)(ulonglong)uVar42;
        pcVar59 = (code *)puVar90[0x782];
        if ((char)uVar42 != '\0') goto code_r0x000140525515;
        goto code_r0x000140524ee4;
      }
      if (bVar38 == 0) goto code_r0x000140524ee4;
code_r0x000140525515:
      lVar43 = *plVar46;
      *(undefined **)(puVar89 + -8) = &UNK_14052551d;
      cVar37 = pdb_140dd7f60(lVar43);
      pcVar59 = (code *)puVar90[0x782];
      if (cVar37 == '\0') goto code_r0x000140524ee4;
      lVar43 = *plVar46;
      lVar94 = *(longlong *)(lVar43 + 0x38);
      if (lVar94 == 0) {
        *(undefined **)(puVar89 + -8) = &UNK_14052598c;
        pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f62f18);
        goto code_r0x0001405259a8;
      }
      uVar41 = *(undefined4 *)(lVar43 + 0x40);
      uVar8 = *(undefined4 *)(lVar43 + 0x44);
      uVar9 = *(undefined4 *)(lVar43 + 0x48);
      uVar10 = *(undefined4 *)(lVar43 + 0x4c);
      puVar90[0x412] = *(undefined8 *)(lVar43 + 0x30);
      puVar90[0x413] = lVar94;
      *(undefined4 *)(puVar90 + 0x414) = uVar41;
      *(undefined4 *)((longlong)puVar90 + 0x20a4) = uVar8;
      *(undefined4 *)(puVar90 + 0x415) = uVar9;
      *(undefined4 *)((longlong)puVar90 + 0x20ac) = uVar10;
      puVar90[0x416] = 0;
      lVar94 = *(longlong *)(pcVar59 + 0x10);
      uVar95 = 0;
      uVar52 = 1;
      if (!SBORROW8(0,*(longlong *)(lVar94 + 0x18))) {
        uVar52 = *(undefined8 *)(lVar94 + 0x20);
        uVar95 = *(undefined8 *)(lVar94 + 0x28);
      }
      puVar90[0x76c] = uVar52;
      puVar90[0x76d] = uVar95;
      puVar90[0x282] = lVar94 + 0x48;
      puVar90[0x283] = pdb_140f71a50;
      puVar90[0x284] = puVar90 + 0x76c;
      puVar90[0x285] = pdb_1402ed400;
      puVar90[0x771] = &UNK_142f62f30;
      puVar90[0x772] = puVar90 + 0x282;
      puVar90[0x1a8] = puVar90 + 0x412;
      puVar90[0x1a9] = puVar90 + 0x771;
      puVar90[0x1aa] = &UNK_142f62e58;
      puVar90[0x775] = puVar90 + 0x1a8;
      puVar90[0x776] = 1;
      puVar90[0x777] = lVar43 + 0x30;
      *(undefined **)(puVar89 + -8) = &UNK_14052563c;
      puVar62 = puVar90 + 0x775;
      pdb_140dd9020();
      if ((*_DAT_143ca4ab0 == 0) &&
         (4 < *(ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90))) {
        lVar43 = *plVar46;
        uVar41 = *(undefined4 *)(lVar43 + 0x20);
        uVar8 = *(undefined4 *)(lVar43 + 0x24);
        uVar9 = *(undefined4 *)(lVar43 + 0x28);
        uVar10 = *(undefined4 *)(lVar43 + 0x2c);
        puVar90[0x5a8] = 5;
        *(undefined4 *)(puVar90 + 0x5a9) = uVar41;
        *(undefined4 *)((longlong)puVar90 + 0x2d4c) = uVar8;
        *(undefined4 *)(puVar90 + 0x5aa) = uVar9;
        *(undefined4 *)((longlong)puVar90 + 0x2d54) = uVar10;
        *(undefined **)(puVar89 + -8) = &UNK_140525679;
        uVar52 = pdb_140f33290();
        pcVar66 = (code *)puVar62[3];
        *(undefined **)(puVar89 + -8) = &UNK_14052568e;
        cVar37 = (*pcVar66)(uVar52,puVar90 + 0x5a8);
        if (cVar37 != '\0') {
          puVar90[0x684] = puVar90[0x5aa];
          *(undefined4 *)(puVar90 + 0x682) = *(undefined4 *)(puVar90 + 0x5a8);
          *(undefined4 *)((longlong)puVar90 + 0x3414) = *(undefined4 *)((longlong)puVar90 + 0x2d44);
          *(undefined4 *)(puVar90 + 0x683) = *(undefined4 *)(puVar90 + 0x5a9);
          *(undefined4 *)((longlong)puVar90 + 0x341c) = *(undefined4 *)((longlong)puVar90 + 0x2d4c);
          *(undefined8 **)(puVar89 + 0x20) = puVar90 + 0x775;
          *(undefined **)(puVar89 + -8) = &UNK_1405256c9;
          pdb_140dd7f80(lVar43,uVar52,puVar62,puVar90 + 0x682);
        }
      }
    }
    else {
code_r0x000140524ee4:
      plVar46 = plRam0000000143ca4020;
      if ((*_DAT_143ca4ab0 != 0) ||
         (*(ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90) < 5))
      goto code_r0x0001405256d1;
      lVar43 = *plRam0000000143ca4020;
      uVar41 = *(undefined4 *)(lVar43 + 0x20);
      uVar8 = *(undefined4 *)(lVar43 + 0x24);
      uVar9 = *(undefined4 *)(lVar43 + 0x28);
      uVar10 = *(undefined4 *)(lVar43 + 0x2c);
      puVar90[0x775] = 5;
      *(undefined4 *)(puVar90 + 0x776) = uVar41;
      *(undefined4 *)((longlong)puVar90 + 0x3bb4) = uVar8;
      *(undefined4 *)(puVar90 + 0x777) = uVar9;
      *(undefined4 *)((longlong)puVar90 + 0x3bbc) = uVar10;
      *(undefined **)(puVar89 + -8) = &UNK_140524f2f;
      uVar52 = pdb_140f33290();
      UNRECOVERED_JUMPTABLE = *(code **)(pcVar66 + 0x18);
      *(undefined **)(puVar89 + -8) = &UNK_140524f43;
      cVar37 = (*UNRECOVERED_JUMPTABLE)(uVar52,puVar90 + 0x775);
      pcVar59 = (code *)puVar90[0x782];
      if (cVar37 == '\0') goto code_r0x0001405256d1;
      lVar94 = *plVar46;
      lVar67 = *(longlong *)(lVar94 + 0x38);
      if (lVar67 == 0) {
        *(undefined **)(puVar89 + -8) = &UNK_1405259a7;
        pdb_142dc8110(&UNK_142f62d90,0x22,&UNK_142f62f18);
code_r0x0001405259a8:
                    /* WARNING: Does not return */
        pcVar66 = (code *)invalidInstructionException();
        (*pcVar66)();
      }
      uVar95 = *(undefined8 *)(lVar94 + 0x40);
      uVar68 = *(undefined8 *)(lVar94 + 0x48);
      puVar90[0x412] = *(undefined8 *)(lVar94 + 0x30);
      puVar90[0x413] = lVar67;
      puVar90[0x414] = uVar95;
      puVar90[0x415] = uVar68;
      puVar90[0x416] = 0;
      lVar67 = *(longlong *)(pcVar59 + 0x10);
      uVar68 = 0;
      uVar95 = 1;
      if (!SBORROW8(0,*(longlong *)(lVar67 + 0x18))) {
        uVar95 = *(undefined8 *)(lVar67 + 0x20);
        uVar68 = *(undefined8 *)(lVar67 + 0x28);
      }
      puVar90[0x76c] = uVar95;
      puVar90[0x76d] = uVar68;
      puVar90[0x282] = lVar67 + 0x48;
      puVar90[0x283] = pdb_140f71a50;
      puVar90[0x284] = puVar90 + 0x76c;
      puVar90[0x285] = pdb_1402ed400;
      puVar90[0x771] = &UNK_142f62f30;
      puVar90[0x772] = puVar90 + 0x282;
      puVar90[0x5a8] = puVar90 + 0x412;
      puVar90[0x5a9] = puVar90 + 0x771;
      puVar90[0x5aa] = &UNK_142f62e58;
      puVar90[0x1a8] = puVar90 + 0x5a8;
      puVar90[0x1a9] = 1;
      puVar90[0x1aa] = lVar94 + 0x30;
      puVar90[0x684] = puVar90[0x777];
      *(undefined4 *)(puVar90 + 0x682) = *(undefined4 *)(puVar90 + 0x775);
      *(undefined4 *)((longlong)puVar90 + 0x3414) = *(undefined4 *)((longlong)puVar90 + 0x3bac);
      *(undefined4 *)(puVar90 + 0x683) = *(undefined4 *)(puVar90 + 0x776);
      *(undefined4 *)((longlong)puVar90 + 0x341c) = *(undefined4 *)((longlong)puVar90 + 0x3bb4);
      *(undefined8 **)(puVar89 + 0x20) = puVar90 + 0x1a8;
      *(undefined **)(puVar89 + -8) = &UNK_14052508f;
      pdb_140dd7f80(lVar43,uVar52,pcVar66,puVar90 + 0x682);
    }
    pcVar59 = (code *)puVar90[0x782];
code_r0x0001405256d1:
    lVar43 = *(longlong *)(pcVar59 + 0x40);
    cVar98 = (code)0x1;
    puVar90[0x781] = lVar43;
    if (lVar43 == 0) {
      pcVar66 = (code *)0x0;
      pcVar59[0x60] = (code)0x1;
      uVar42 = *(uint *)(pcVar59 + 0xdb0);
    }
    else {
      puVar62 = *(undefined8 **)(pcVar59 + 0x48);
      puVar90[0x77f] = puVar62;
      pcVar66 = (code *)*puVar62;
      if (pcVar66 != (code *)0x0) {
        uVar52 = puVar90[0x781];
        *(undefined **)(puVar89 + -8) = &UNK_140525703;
        (*pcVar66)(uVar52);
      }
      uVar44 = *(ulonglong *)(puVar90[0x77f] + 8);
      if (uVar44 != 0) {
        uVar60 = *(ulonglong *)(puVar90[0x77f] + 0x10);
        pbVar48 = (byte *)puVar90[0x781];
        *(undefined **)(puVar89 + -8) = &UNK_140525724;
        pub_1406abac0(pbVar48,uVar44,uVar60);
      }
      pcVar66 = (code *)0x0;
code_r0x000140525726:
      pcVar59 = (code *)puVar90[0x782];
      pcVar59[0x60] = cVar98;
      uVar42 = *(uint *)(pcVar59 + 0xdb0);
    }
joined_r0x0001405254ee:
    if (uVar42 != 2) {
      *(undefined **)(puVar89 + -8) = &UNK_14052574e;
      pdb_140dd8e80(pcVar59 + 0xdb0,pcVar59 + 0xdc8);
    }
    if ((*_DAT_143ca4ab0 == 0) && (lVar43 = *(longlong *)(pcVar59 + 0xdd0), lVar43 != 0)) {
      uVar41 = *(undefined4 *)(lVar43 + 0x14);
      uVar8 = *(undefined4 *)(lVar43 + 0x18);
      uVar9 = *(undefined4 *)(lVar43 + 0x1c);
      *(undefined4 *)(puVar90 + 0x282) = *(undefined4 *)(lVar43 + 0x10);
      *(undefined4 *)((longlong)puVar90 + 0x1414) = uVar41;
      *(undefined4 *)(puVar90 + 0x283) = uVar8;
      *(undefined4 *)((longlong)puVar90 + 0x141c) = uVar9;
      puVar90[0x412] = puVar90 + 0x282;
      puVar90[0x413] = pdb_1402ed400;
      *(undefined8 **)(puVar89 + 0x20) = puVar90 + 0x412;
      uVar52 = puVar90[0x768];
      *(undefined **)(puVar89 + -8) = &UNK_1405257bb;
      pdb_140523550(uVar52,&UNK_142f63f27,0x15,&UNK_142f63f1f);
    }
    return pcVar66;
  case (code)0x55:
    UNK_142f64299 = UNK_142f64299 + '\f' + bVar96;
    halt_baddata();
  case (code)0x56:
    *param_3 = (code)((char)*param_3 + 0xc);
    *(uint *)(&stack0x00003450 + lVar43) = *(int *)(&stack0x00003450 + lVar43) - uVar40;
    puVar51 = &stack0xffffffffffffffc0 + lVar43;
    goto code_r0x000140523c53;
  case (code)0x57:
    goto code_r0x000140523c3a;
  case (code)0x58:
code_r0x000140523ba8:
    puVar90[0x5a9] = puVar90 + 0x775;
    puVar64 = puVar74;
    pcVar92 = param_2;
    goto code_r0x000140523bb6;
  case (code)0x59:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
    puVar64 = &stack0xffffffffffffffc0 + lVar43;
code_r0x000140523bb6:
    puVar90[0x5aa] = &UNK_142f62e58;
    puVar90[-0xb] = puVar90 + 0x5a8;
    puVar90[-10] = 1;
    puVar90[-9] = UNRECOVERED_JUMPTABLE;
    param_3 = (code *)(puVar90 + -0xb);
    *(undefined **)(puVar64 + -8) = &UNK_140523be7;
    pcVar66 = param_3;
    pdb_140dd9020();
    if (*_DAT_143ca4ab0 == 0) {
      puVar93 = (ulonglong *)CONCAT44(uRam0000000143ca8e94,_DAT_143ca8e90);
code_r0x000140523bfd:
      bVar96 = *puVar93 < 5;
      puVar79 = puVar64;
code_r0x000140523c04:
      puVar64 = puVar79;
      if (!bVar96) {
        unaff_RBX = *(code **)pcVar92;
        puVar75 = puVar64;
code_r0x000140523c09:
        uVar42 = *(uint *)(unaff_RBX + 0x20);
        uVar58 = *(uint *)(unaff_RBX + 0x24);
        uVar99 = *(uint *)(unaff_RBX + 0x28);
        uVar100 = *(uint *)(unaff_RBX + 0x2c);
        puVar90[0xce] = 5;
        unaff_R15 = pcVar66;
        puVar64 = puVar75;
        param_2 = pcVar92;
code_r0x000140523c18:
        *(uint *)(puVar90 + 0xcf) = uVar42;
        *(uint *)((longlong)puVar90 + 0x67c) = uVar58;
        *(uint *)(puVar90 + 0xd0) = uVar99;
        *(uint *)((longlong)puVar90 + 0x684) = uVar100;
        *(undefined **)(puVar64 + -8) = &UNK_140523c24;
        unaff_R14 = (code *)pdb_140f33290();
        pcVar66 = (code *)(puVar90 + 0xce);
        UNRECOVERED_JUMPTABLE = *(code **)(unaff_R15 + 0x18);
        *(undefined **)(puVar64 + -8) = &UNK_140523c39;
        UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)(unaff_R14);
        pcVar92 = param_2;
code_r0x000140523c3a:
        if ((char)UNRECOVERED_JUMPTABLE != '\0') {
          puVar90[0x684] = puVar90[0xd0];
          uVar42 = *(uint *)(puVar90 + 0xce);
          uVar58 = *(uint *)((longlong)puVar90 + 0x674);
          uVar99 = *(uint *)(puVar90 + 0xcf);
          uVar100 = *(uint *)((longlong)puVar90 + 0x67c);
          puVar51 = puVar64;
code_r0x000140523c53:
          pcVar66 = unaff_R14;
          puVar64 = puVar51;
          *(uint *)(puVar90 + 0x682) = uVar42;
          *(uint *)((longlong)puVar90 + 0x3414) = uVar58;
          *(uint *)(puVar90 + 0x683) = uVar99;
          *(uint *)((longlong)puVar90 + 0x341c) = uVar100;
          *(code **)(puVar64 + 0x20) = param_3;
          *(undefined **)(puVar64 + -8) = &UNK_140523c74;
          pdb_140dd7f80(unaff_RBX,pcVar66,unaff_R15,puVar90 + 0x682);
        }
      }
    }
    goto code_r0x000140523c75;
  case (code)0x5a:
    param_3 = (code *)(ulonglong)*(uint *)(&stack0x00003c50 + lVar43);
code_r0x0001405238f1:
    pcVar66 = param_2;
    puVar51 = puVar73;
    puVar89 = puVar73;
    pcVar92 = pcVar91;
    pcVar59 = unaff_R15;
    if (!bVar97) goto code_r0x0001405238f7;
    goto code_r0x000140523c7c;
  case (code)0x5b:
    (&UNK_142f642d3)[uVar44] = (&UNK_142f642d3)[uVar44] & 0xc;
code_r0x000140523c12:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)UNRECOVERED_JUMPTABLE);
    *(uint *)(&stack0x000006b8 + lVar43) =
         *(int *)(&stack0x000006b8 + lVar43) + (uint)UNRECOVERED_JUMPTABLE + 0xf000000 +
         (uint)(0xf0ffffff < (uint)UNRECOVERED_JUMPTABLE);
    unaff_R15 = pcVar66;
    puVar64 = &stack0xffffffffffffffc0 + lVar43;
    goto code_r0x000140523c18;
  case (code)0x5c:
    (&stack0x000000bf)[lVar43] = 0;
code_r0x000140523bf7:
    puVar93 = (ulonglong *)(ulonglong)_DAT_143ca8e90;
    puVar64 = &stack0xffffffffffffffc0 + lVar43;
    goto code_r0x000140523bfd;
  case (code)0x5d:
    *(char *)(param_4 + -0x73) = *(char *)(param_4 + -0x73) + (char)param_4 + bVar96;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x5e:
    goto code_r0x0001405244ad;
  case (code)0x5f:
    lVar94 = CONCAT71(uVar54,bVar38 + bVar96);
    pcVar61 = (char *)(lVar94 + -0x73);
    *pcVar61 = *pcVar61 + '\f';
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)((uint)lVar94 | 0x2a3ddd4);
    puVar84 = &stack0xffffffffffffffc0 + lVar43;
    goto code_r0x000140525172;
  case (code)0x60:
    UNK_142f6430c = UNK_142f6430c + bVar38;
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
    pbVar48 = &stack0xffffffffffffffcb + lVar43;
    bVar38 = *pbVar48;
    *pbVar48 = *pbVar48 + 0xc;
    UNK_142f6430c = UNK_142f6430c + (char)unaff_R14 + (0xf3 < bVar38);
code_r0x000140525154:
    puVar90 = (undefined8 *)*puVar90;
    puVar86 = &stack0x00000048 + lVar43;
    goto code_r0x000140525124;
  case (code)0x61:
    goto code_r0x00014052516b;
  case (code)0x62:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x63:
    goto code_r0x0001405250d7;
  case (code)0x64:
    puVar90 = (undefined8 *)0x3c10;
    goto code_r0x0001405250a9;
  case (code)0x65:
    *(char *)(uVar44 + 0xce430390) = *(char *)(uVar44 + 0xce430390) + cVar57;
    puVar90 = (undefined8 *)0x3c10;
    goto code_r0x0001405250b8;
  case (code)0x66:
    (&UNK_142f64297)[uVar44] = (&UNK_142f64297)[uVar44] + '\f';
    puVar85 = &stack0xffffffffffffffc0 + lVar43;
    goto code_r0x000140525095;
  case (code)0x67:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar38);
    puVar83 = &stack0xffffffffffffffc0 + lVar43;
    goto code_r0x0001405250fa;
  }
  pcVar66 = pcVar59 + 0x30;
  uVar42 = *(uint *)(pcVar59 + 0x40);
  uVar58 = *(uint *)(pcVar59 + 0x44);
  uVar99 = *(uint *)(pcVar59 + 0x48);
  uVar100 = *(uint *)(pcVar59 + 0x4c);
  *(undefined8 *)(&stack0x000019a0 + lVar43) = *(undefined8 *)(pcVar59 + 0x30);
  *(code **)(&stack0x000019a8 + lVar43) = UNRECOVERED_JUMPTABLE;
  *(uint *)(&stack0x000019b0 + lVar43) = uVar42;
  *(uint *)(&stack0x000019b4 + lVar43) = uVar58;
  *(uint *)(&stack0x000019b8 + lVar43) = uVar99;
  *(uint *)(&stack0x000019bc + lVar43) = uVar100;
  *(undefined8 *)(&stack0x000019c0 + lVar43) = 0;
code_r0x0001405214d9:
  puVar90[0x49a] = &UNK_142f63138;
  puVar90[0x49b] = 0x6d;
  puVar90[0x406] = param_3;
  UNRECOVERED_JUMPTABLE = (code *)(puVar90 + 0x49a);
code_r0x000140521500:
  puVar90[0x407] = UNRECOVERED_JUMPTABLE;
  puVar90[0x408] = &UNK_142f62e58;
  puVar90[0x4ba] = puVar90 + 0x406;
  puVar90[0x4bb] = 1;
code_r0x00014052152e:
  puVar90[0x4bc] = pcVar66;
  *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140521541;
  pdb_140331d80(puVar90 + 0x4ba);
code_r0x000140521542:
  uVar52 = 2;
  *(undefined8 *)((longlong)&uStack_48 + lVar43) = 0x140521553;
  pdb_1404b6860(puVar90 + 0x4da);
  puVar70 = &stack0xffffffffffffffc0 + lVar43;
code_r0x0001405215be:
  *unaff_R12 = (code)0x0;
  puVar62 = (undefined8 *)puVar90[0x615];
  *puVar62 = uVar52;
  *(undefined8 *)(puVar70 + -8) = 0x1405215e0;
  pub_142e32760(puVar62 + 1,puVar90 + -0xb,0x6c8);
  pcVar66 = (code *)0x1;
code_r0x0001405215e2:
  *(char *)(puVar90[0x642] + 0x951) = (char)pcVar66;
  return pcVar66;
code_r0x0001405233c5:
  param_2 = (code *)&UNK_142f64368;
  unaff_RBX = (code *)&UNK_142f64fe8;
  if (_UNK_142f64fe8 != 2) {
    puVar65 = &UNK_142f65000;
code_r0x0001405233df:
    *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_1405233e7;
    pdb_140dd8eb0(unaff_RBX,puVar65);
  }
  pbVar48 = _DAT_143ca4ab0;
  if ((*_DAT_143ca4ab0 == 0) && (lVar94 = *(longlong *)(param_2 + 0xca0), lVar94 != 0)) {
    uVar41 = *(undefined4 *)(lVar94 + 0x14);
    uVar8 = *(undefined4 *)(lVar94 + 0x18);
    uVar9 = *(undefined4 *)(lVar94 + 0x1c);
    *(undefined4 *)(puVar90 + -5) = *(undefined4 *)(lVar94 + 0x10);
    *(undefined4 *)((longlong)puVar90 + -0x24) = uVar41;
    *(undefined4 *)(puVar90 + -4) = uVar8;
    *(undefined4 *)((longlong)puVar90 + -0x1c) = uVar9;
    puVar90[-2] = puVar90 + -5;
    puVar90[-1] = pdb_1402ed400;
    *(undefined8 **)(&stack0xffffffffffffffe0 + lVar43) = puVar90 + -2;
    *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_140523441;
    pdb_140523550(unaff_RBX,&UNK_142f63f27,0x15,&UNK_142f63f3c);
  }
  puVar90[-3] = unaff_RBX;
  switch(param_2[8]) {
  case (code)0x3:
    *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_14052346a;
    pdb_14033a7b0(param_2 + 0x10);
    break;
  case (code)0x4:
    *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_14052349a;
    pdb_14033b5c0(param_2 + 0x10);
    break;
  case (code)0x5:
    *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_140523482;
    pdb_14033bd00(param_2 + 0x10);
    break;
  case (code)0x6:
    *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_14052348e;
    pdb_14033b2b0(param_2 + 0x10);
    break;
  case (code)0x7:
    *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_140523476;
    pdb_14033aa10(param_2 + 0x10);
    break;
  case (code)0x8:
    *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_1405234a6;
    pdb_140522b20(param_2 + 0x10);
  }
  pcVar66 = param_2 + 0xc80;
  if (*(uint *)pcVar66 != 2) {
    *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_1405234c2;
    pdb_140dd8e80(pcVar66,param_2 + 0xc98);
  }
  UNRECOVERED_JUMPTABLE = (code *)(ulonglong)*pbVar48;
  if (*pbVar48 == 0) {
    lVar94 = *(longlong *)(param_2 + 0xca0);
    UNRECOVERED_JUMPTABLE = (code *)0x0;
    if (lVar94 != 0) {
      uVar41 = *(undefined4 *)(lVar94 + 0x14);
      uVar8 = *(undefined4 *)(lVar94 + 0x18);
      uVar9 = *(undefined4 *)(lVar94 + 0x1c);
      *(undefined4 *)(puVar90 + -5) = *(undefined4 *)(lVar94 + 0x10);
      *(undefined4 *)((longlong)puVar90 + -0x24) = uVar41;
      *(undefined4 *)(puVar90 + -4) = uVar8;
      *(undefined4 *)((longlong)puVar90 + -0x1c) = uVar9;
      puVar90[-2] = puVar90 + -5;
      puVar90[-1] = pdb_1402ed400;
      *(undefined8 **)(&stack0xffffffffffffffe0 + lVar43) = puVar90 + -2;
      *(undefined **)((longlong)&uStack_48 + lVar43) = &UNK_140523515;
      UNRECOVERED_JUMPTABLE = (code *)pdb_140523550(pcVar66,&UNK_142f63f27,0x15,&UNK_142f63f1f);
    }
  }
  return UNRECOVERED_JUMPTABLE;
}

