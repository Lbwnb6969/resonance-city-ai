// VA 0x1402f3f10, PDB extent 64353 bytes
// tiny_glade::app_config::impl$6::augment_args
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/app_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::app_config::impl$6::augment_args
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/app_config.rs
   Extent: 64353 */

void pdb_1402f3f10(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  code *pcVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong lVar15;
  byte *pbVar16;
  undefined1 uVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  undefined8 uVar21;
  longlong lVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined8 uStack_48;
  
  uStack_48 = 0x1402f3f26;
  lVar15 = pdb_142d7c6d0();
  lVar15 = -lVar15;
  *(undefined4 *)(&stack0x000047a0 + lVar15) = unaff_XMM6_Da;
  *(undefined4 *)(&stack0x000047a4 + lVar15) = unaff_XMM6_Db;
  *(undefined4 *)(&stack0x000047a8 + lVar15) = unaff_XMM6_Dc;
  *(undefined4 *)(&stack0x000047ac + lVar15) = unaff_XMM6_Dd;
  *(undefined8 *)(&stack0x00004798 + lVar15) = 0xfffffffffffffffe;
  *(undefined8 *)(&stack0x00003d08 + lVar15) = param_1;
  *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f3f5c;
  pub_142e32760(&stack0x00003f90 + lVar15);
  *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
  *(undefined8 *)(&stack0x00003d38 + lVar15) = 0;
  *(undefined8 *)(&stack0x00003d20 + lVar15) = 0;
  *(undefined8 *)(&stack0x00003d28 + lVar15) = 0;
  *(undefined **)(&stack0x00004270 + lVar15) = &UNK_142f39cb2;
  *(undefined8 *)(&stack0x00004278 + lVar15) = 0x15;
  *(undefined **)(&stack0x00004280 + lVar15) = &UNK_142f39cc7;
  *(undefined8 *)(&stack0x00004288 + lVar15) = 0x1d;
  *(undefined **)(&stack0x00004290 + lVar15) = &UNK_142f39ce4;
  *(undefined8 *)(&stack0x00004298 + lVar15) = 0xe;
  *(undefined **)(&stack0x000042a0 + lVar15) = &UNK_142f39cf2;
  *(undefined8 *)(&stack0x000042a8 + lVar15) = 0x10;
  *(undefined **)(&stack0x000042b0 + lVar15) = &UNK_142f39d02;
  *(undefined8 *)(&stack0x000042b8 + lVar15) = 0x12;
  *(undefined **)(&stack0x000042c0 + lVar15) = &UNK_142f39d14;
  *(undefined8 *)(&stack0x000042c8 + lVar15) = 0x12;
  *(undefined **)(&stack0x000042d0 + lVar15) = &UNK_142f39d26;
  *(undefined8 *)(&stack0x000042d8 + lVar15) = 0x15;
  *(undefined **)(&stack0x000042e0 + lVar15) = &UNK_142f39d3b;
  *(undefined8 *)(&stack0x000042e8 + lVar15) = 0x1b;
  *(undefined **)(&stack0x000042f0 + lVar15) = &UNK_142f39d56;
  *(undefined8 *)(&stack0x000042f8 + lVar15) = 10;
  *(undefined **)(&stack0x00004300 + lVar15) = &UNK_142f39d60;
  *(undefined8 *)(&stack0x00004308 + lVar15) = 0x10;
  *(undefined **)(&stack0x00004310 + lVar15) = &UNK_142f39d70;
  *(undefined8 *)(&stack0x00004318 + lVar15) = 0x10;
  *(undefined **)(&stack0x00004320 + lVar15) = &UNK_142f39d80;
  *(undefined8 *)(&stack0x00004328 + lVar15) = 0x10;
  *(undefined **)(&stack0x00004330 + lVar15) = &UNK_142f39d90;
  *(undefined8 *)(&stack0x00004338 + lVar15) = 0x10;
  *(undefined **)(&stack0x00004340 + lVar15) = &UNK_142f39da0;
  *(undefined8 *)(&stack0x00004348 + lVar15) = 0x18;
  *(undefined **)(&stack0x00004350 + lVar15) = &UNK_142f39db8;
  *(undefined8 *)(&stack0x00004358 + lVar15) = 0x12;
  *(undefined **)(&stack0x00004360 + lVar15) = &UNK_142f39dca;
  *(undefined8 *)(&stack0x00004368 + lVar15) = 0x1a;
  *(undefined **)(&stack0x00004370 + lVar15) = &UNK_142f39de4;
  *(undefined8 *)(&stack0x00004378 + lVar15) = 0xc;
  *(undefined **)(&stack0x00004380 + lVar15) = &UNK_142f39df0;
  *(undefined8 *)(&stack0x00004388 + lVar15) = 0xc;
  *(undefined **)(&stack0x00004390 + lVar15) = &UNK_142f39dfc;
  *(undefined8 *)(&stack0x00004398 + lVar15) = 0xb;
  *(undefined **)(&stack0x000043a0 + lVar15) = &UNK_142f39e07;
  *(undefined8 *)(&stack0x000043a8 + lVar15) = 0x12;
  *(undefined **)(&stack0x000043b0 + lVar15) = &UNK_142f39e19;
  *(undefined8 *)(&stack0x000043b8 + lVar15) = 0xb;
  *(undefined **)(&stack0x000043c0 + lVar15) = &UNK_142f39e24;
  *(undefined8 *)(&stack0x000043c8 + lVar15) = 0x11;
  *(undefined **)(&stack0x000043d0 + lVar15) = &UNK_142f39e35;
  *(undefined8 *)(&stack0x000043d8 + lVar15) = 0xb;
  *(undefined **)(&stack0x000043e0 + lVar15) = &UNK_142f39e40;
  *(undefined8 *)(&stack0x000043e8 + lVar15) = 2;
  *(undefined **)(&stack0x000043f0 + lVar15) = &UNK_142f39e42;
  *(undefined8 *)(&stack0x000043f8 + lVar15) = 0x14;
  *(undefined **)(&stack0x00004400 + lVar15) = &UNK_142f39e56;
  *(undefined8 *)(&stack0x00004408 + lVar15) = 0x13;
  *(undefined **)(&stack0x00004410 + lVar15) = &UNK_142f39e69;
  *(undefined8 *)(&stack0x00004418 + lVar15) = 0x16;
  *(undefined **)(&stack0x00004420 + lVar15) = &UNK_142f39e7f;
  *(undefined8 *)(&stack0x00004428 + lVar15) = 0x17;
  *(undefined **)(&stack0x00004430 + lVar15) = &UNK_142f39e96;
  *(undefined8 *)(&stack0x00004438 + lVar15) = 0x15;
  *(undefined **)(&stack0x00004440 + lVar15) = &UNK_142f39eab;
  *(undefined8 *)(&stack0x00004448 + lVar15) = 0x12;
  uVar17 = 1;
  uVar23 = 8;
  puVar27 = &UNK_142f39cab;
  uVar19 = 7;
  lVar20 = 0x18;
  uVar24 = 0;
  uVar26 = 0;
  uVar21 = 8;
  lVar25 = 8;
  lVar22 = 0;
  do {
    uVar8 = *(undefined8 *)(&stack0x00004258 + lVar20 + lVar15);
    uVar9 = *(undefined8 *)(&stack0x00004260 + lVar20 + lVar15);
    *(longlong *)(&stack0x00004530 + lVar15) = lVar22;
    *(longlong *)(&stack0x00004538 + lVar15) = lVar25;
    *(undefined8 *)(&stack0x00004540 + lVar15) = *(undefined8 *)(&stack0x00003d30 + lVar15);
    *(undefined8 *)(&stack0x00004548 + lVar15) = *(undefined8 *)(&stack0x00003d38 + lVar15);
    *(undefined8 *)(&stack0x00004550 + lVar15) = uVar21;
    *(undefined4 *)(&stack0x00004558 + lVar15) = *(undefined4 *)(&stack0x00003d20 + lVar15);
    *(undefined4 *)(&stack0x0000455c + lVar15) = *(undefined4 *)(&stack0x00003d24 + lVar15);
    *(undefined4 *)(&stack0x00004560 + lVar15) = *(undefined4 *)(&stack0x00003d28 + lVar15);
    *(undefined4 *)(&stack0x00004564 + lVar15) = *(undefined4 *)(&stack0x00003d2c + lVar15);
    *(undefined8 *)(&stack0x00004568 + lVar15) = uVar23;
    *(undefined8 *)(&stack0x00004570 + lVar15) = uVar26;
    *(undefined **)(&stack0x00004578 + lVar15) = puVar27;
    *(undefined8 *)(&stack0x00004580 + lVar15) = uVar19;
    (&stack0x00004588)[lVar15] = (char)uVar24;
    (&stack0x00004589)[lVar15] = uVar17;
    *(undefined2 *)(&stack0x0000458e + lVar15) = *(undefined2 *)(&stack0x00003f64 + lVar15);
    *(undefined4 *)(&stack0x0000458a + lVar15) = *(undefined4 *)(&stack0x00003f60 + lVar15);
    lVar10 = *(longlong *)(&stack0x00004540 + lVar15);
    if (lVar10 == lVar22) {
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f43d9;
      pdb_142d8afd0(&stack0x00004530 + lVar15);
      lVar25 = *(longlong *)(&stack0x00004538 + lVar15);
    }
    *(undefined8 *)(lVar25 + lVar10 * 0x10) = uVar8;
    *(undefined8 *)(lVar25 + 8 + lVar10 * 0x10) = uVar9;
    *(longlong *)(&stack0x00004540 + lVar15) = lVar10 + 1;
    lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
    lVar25 = *(longlong *)(&stack0x00004538 + lVar15);
    *(undefined8 *)(&stack0x00003d30 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
    *(undefined8 *)(&stack0x00003d38 + lVar15) = *(undefined8 *)(&stack0x00004548 + lVar15);
    uVar21 = *(undefined8 *)(&stack0x00004550 + lVar15);
    *(undefined8 *)(&stack0x00003d20 + lVar15) = *(undefined8 *)(&stack0x00004558 + lVar15);
    *(undefined8 *)(&stack0x00003d28 + lVar15) = *(undefined8 *)(&stack0x00004560 + lVar15);
    uVar23 = *(undefined8 *)(&stack0x00004568 + lVar15);
    uVar26 = *(undefined8 *)(&stack0x00004570 + lVar15);
    puVar27 = *(undefined **)(&stack0x00004578 + lVar15);
    uVar19 = *(undefined8 *)(&stack0x00004580 + lVar15);
    uVar24 = (ulonglong)(byte)(&stack0x00004588)[lVar15];
    uVar17 = (&stack0x00004589)[lVar15];
    *(undefined4 *)(&stack0x00003f60 + lVar15) = *(undefined4 *)(&stack0x0000458a + lVar15);
    *(undefined2 *)(&stack0x00003f64 + lVar15) = *(undefined2 *)(&stack0x0000458e + lVar15);
    lVar20 = lVar20 + 0x10;
  } while (lVar20 != 0x1f8);
  *(undefined4 *)(&stack0x00004530 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
  *(undefined4 *)(&stack0x00004534 + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
  *(undefined4 *)(&stack0x00004538 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
  *(undefined4 *)(&stack0x0000453c + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
  *(undefined4 *)(&stack0x00003d10 + lVar15) = *(undefined4 *)(&stack0x00003d20 + lVar15);
  *(undefined4 *)(&stack0x00003d14 + lVar15) = *(undefined4 *)(&stack0x00003d24 + lVar15);
  *(undefined4 *)(&stack0x00003d18 + lVar15) = *(undefined4 *)(&stack0x00003d28 + lVar15);
  *(undefined4 *)(&stack0x00003d1c + lVar15) = *(undefined4 *)(&stack0x00003d2c + lVar15);
  *(undefined4 *)(&stack0x00003f70 + lVar15) = *(undefined4 *)(&stack0x00003f60 + lVar15);
  *(undefined2 *)(&stack0x00003f74 + lVar15) = *(undefined2 *)(&stack0x00003f64 + lVar15);
  *(longlong *)(&stack0x00004260 + lVar15) = lVar22;
  *(longlong *)(&stack0x00004268 + lVar15) = lVar25;
  *(undefined4 *)(&stack0x00004270 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
  *(undefined4 *)(&stack0x00004274 + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
  *(undefined4 *)(&stack0x00004278 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
  *(undefined4 *)(&stack0x0000427c + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
  *(undefined8 *)(&stack0x00004280 + lVar15) = uVar21;
  *(undefined4 *)(&stack0x00004288 + lVar15) = *(undefined4 *)(&stack0x00003d20 + lVar15);
  *(undefined4 *)(&stack0x0000428c + lVar15) = *(undefined4 *)(&stack0x00003d24 + lVar15);
  *(undefined4 *)(&stack0x00004290 + lVar15) = *(undefined4 *)(&stack0x00003d28 + lVar15);
  *(undefined4 *)(&stack0x00004294 + lVar15) = *(undefined4 *)(&stack0x00003d2c + lVar15);
  *(undefined8 *)(&stack0x00004790 + lVar15) = uVar23;
  *(undefined8 *)(&stack0x00004298 + lVar15) = uVar23;
  *(undefined8 *)(&stack0x000042a0 + lVar15) = uVar26;
  *(undefined **)(&stack0x000042a8 + lVar15) = puVar27;
  *(undefined8 *)(&stack0x00004788 + lVar15) = uVar19;
  *(undefined8 *)(&stack0x000042b0 + lVar15) = uVar19;
  *(ulonglong *)(&stack0x00003f88 + lVar15) = uVar24;
  (&stack0x000042b8)[lVar15] = (&stack0x00004588)[lVar15];
  (&stack0x000042b9)[lVar15] = uVar17;
  *(undefined4 *)(&stack0x000042ba + lVar15) = *(undefined4 *)(&stack0x00003f70 + lVar15);
  *(undefined2 *)(&stack0x000042be + lVar15) = *(undefined2 *)(&stack0x00003f74 + lVar15);
  lVar20 = *(longlong *)(&stack0x00004068 + lVar15);
  if (lVar20 == *(longlong *)(&stack0x00004058 + lVar15)) {
    *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f44b6;
    pdb_142dbde00(&stack0x00004058 + lVar15);
  }
  lVar10 = *(longlong *)(&stack0x00004060 + lVar15);
  lVar18 = lVar20 * 0x60;
  *(longlong *)(lVar10 + lVar18) = lVar22;
  *(longlong *)(lVar10 + 8 + lVar18) = lVar25;
  uVar23 = *(undefined8 *)(&stack0x00004538 + lVar15);
  puVar4 = (undefined8 *)(lVar10 + 0x10 + lVar18);
  *puVar4 = *(undefined8 *)(&stack0x00004530 + lVar15);
  puVar4[1] = uVar23;
  *(undefined8 *)(lVar10 + 0x20 + lVar18) = uVar21;
  uVar7 = *(undefined4 *)(&stack0x00003d14 + lVar15);
  uVar13 = *(undefined4 *)(&stack0x00003d18 + lVar15);
  uVar14 = *(undefined4 *)(&stack0x00003d1c + lVar15);
  puVar5 = (undefined4 *)(lVar10 + 0x28 + lVar18);
  *puVar5 = *(undefined4 *)(&stack0x00003d10 + lVar15);
  puVar5[1] = uVar7;
  puVar5[2] = uVar13;
  puVar5[3] = uVar14;
  *(undefined8 *)(lVar10 + 0x38 + lVar18) = *(undefined8 *)(&stack0x00004790 + lVar15);
  *(undefined8 *)(lVar10 + 0x40 + lVar18) = uVar26;
  *(undefined **)(lVar10 + 0x48 + lVar18) = puVar27;
  *(undefined8 *)(lVar10 + 0x50 + lVar18) = *(undefined8 *)(&stack0x00004788 + lVar15);
  *(char *)(lVar10 + 0x58 + lVar18) = (char)*(undefined8 *)(&stack0x00003f88 + lVar15);
  *(undefined1 *)(lVar10 + 0x59 + lVar18) = uVar17;
  *(undefined4 *)(lVar10 + 0x5a + lVar18) = *(undefined4 *)(&stack0x00003f70 + lVar15);
  *(undefined2 *)(lVar10 + 0x5e + lVar18) = *(undefined2 *)(&stack0x00003f74 + lVar15);
  *(longlong *)(&stack0x00004068 + lVar15) = lVar20 + 1;
  *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f4557;
  pub_142e32760(&stack0x00004260 + lVar15,&stack0x00003f90 + lVar15,0x2c8);
  *(undefined8 *)(&stack0x00004008 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004010 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004020 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004028 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004038 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004040 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004050 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004058 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004068 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004070 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004080 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004088 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004098 + lVar15) = 0;
  *(undefined8 *)(&stack0x000040a0 + lVar15) = 0;
  *(undefined8 *)(&stack0x000040b0 + lVar15) = 0;
  *(undefined8 *)(&stack0x000040b8 + lVar15) = 0;
  *(undefined8 *)(&stack0x000040c8 + lVar15) = 0;
  *(undefined8 *)(&stack0x000040d0 + lVar15) = 0;
  *(undefined8 *)(&stack0x000040e0 + lVar15) = 0;
  *(undefined8 *)(&stack0x000040e8 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004110 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004118 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004128 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004130 + lVar15) = 0;
  *(undefined8 *)(&stack0x00003f90 + lVar15) = 0;
  *(undefined8 *)(&stack0x00003fa0 + lVar15) = 0;
  *(undefined8 *)(&stack0x00003fb8 + lVar15) = 0;
  *(undefined8 *)(&stack0x00003fc8 + lVar15) = 0;
  *(undefined8 *)(&stack0x00003fe0 + lVar15) = 5;
  *(undefined8 *)(&stack0x00003ff8 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004000 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004018 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004030 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004048 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004060 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004078 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004090 + lVar15) = 8;
  *(undefined8 *)(&stack0x000040a8 + lVar15) = 8;
  *(undefined8 *)(&stack0x000040c0 + lVar15) = 8;
  *(undefined8 *)(&stack0x000040d8 + lVar15) = 4;
  *(undefined8 *)(&stack0x000040f0 + lVar15) = 8;
  *(undefined8 *)(&stack0x000040f8 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004100 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004108 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004120 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004138 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004140 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004148 + lVar15) = 0x8000000000000000;
  *(undefined8 *)(&stack0x00004160 + lVar15) = 0x8000000000000000;
  *(undefined **)(&stack0x00004178 + lVar15) = &UNK_142f39cb2;
  *(undefined8 *)(&stack0x00004180 + lVar15) = 0x15;
  *(undefined8 *)(&stack0x00004188 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004198 + lVar15) = 0;
  *(undefined8 *)(&stack0x000041a8 + lVar15) = 0x11000000110000;
  *(undefined4 *)(&stack0x000041b0 + lVar15) = 0;
  *(undefined2 *)(&stack0x000041b4 + lVar15) = 0xd09;
  *(undefined8 *)(&stack0x00004530 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004538 + lVar15) = 1;
  *(undefined **)(&stack0x00004540 + lVar15) = &UNK_142f39ebd;
  *(undefined8 *)(&stack0x00004548 + lVar15) = 0x15;
  *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f4749;
  pdb_1401783b0(&stack0x00003d30 + lVar15,&stack0x00004530 + lVar15);
  if (*(longlong *)(&stack0x000040e8 + lVar15) != 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f4771;
    pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000040e8 + lVar15) << 4,8);
  }
  *(undefined8 *)(&stack0x000040f8 + lVar15) = *(undefined8 *)(&stack0x00003d40 + lVar15);
  *(undefined4 *)(&stack0x000040e8 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
  *(undefined4 *)(&stack0x000040ec + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
  *(undefined4 *)(&stack0x000040f0 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
  *(undefined4 *)(&stack0x000040f4 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
  *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f479f;
  pub_142e32760(&stack0x00003d30 + lVar15,&stack0x00003f90 + lVar15,0x228);
  if ((*(longlong *)(&stack0x00003d80 + lVar15) != 5) &&
     (3 < (uint)*(longlong *)(&stack0x00003d80 + lVar15))) {
    *(undefined8 *)(&stack0x00004788 + lVar15) = *(undefined8 *)(&stack0x00003d88 + lVar15);
    *(undefined8 **)(&stack0x00004790 + lVar15) = *(undefined8 **)(&stack0x00003d90 + lVar15);
    pcVar11 = (code *)**(undefined8 **)(&stack0x00003d90 + lVar15);
    if (pcVar11 != (code *)0x0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f47de;
      (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
    }
    uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
    if (uVar24 != 0) {
      uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f47ff;
      pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
    }
  }
  *(undefined8 *)(&stack0x00003d80 + lVar15) = 1;
  *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f4826;
  pub_142e32760(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15,0x1f8);
  *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00003f38 + lVar15);
  *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x00003f3c + lVar15);
  *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00003f40 + lVar15);
  *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x00003f44 + lVar15);
  *(undefined8 *)(&stack0x00004748 + lVar15) = *(undefined8 *)(&stack0x00003f48 + lVar15);
  *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f39ed2;
  *(undefined8 *)(&stack0x00004730 + lVar15) = 0x15;
  *(uint *)(&stack0x00004750 + lVar15) = *(uint *)(&stack0x00003f50 + lVar15) | 4;
  *(uint *)(&stack0x00004754 + lVar15) = *(uint *)(&stack0x00003f54 + lVar15) & 0xffffff00;
  *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f488a;
  pdb_140ec70b0(&stack0x00004260 + lVar15,&stack0x00004530 + lVar15);
  *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f48a4;
  pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00004260 + lVar15,0x2c8);
  uVar23 = _UNK_142f39548;
  uVar21 = _DAT_142f39540;
  *(undefined8 *)(&stack0x000042d8 + lVar15) = 0;
  *(undefined8 *)(&stack0x000042e0 + lVar15) = 0;
  *(undefined8 *)(&stack0x000042f0 + lVar15) = 0;
  *(undefined8 *)(&stack0x000042f8 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004308 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004310 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004320 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004328 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004338 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004340 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004350 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004358 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004368 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004370 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004380 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004388 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004398 + lVar15) = 0;
  *(undefined8 *)(&stack0x000043a0 + lVar15) = 0;
  *(undefined8 *)(&stack0x000043b0 + lVar15) = 0;
  *(undefined8 *)(&stack0x000043b8 + lVar15) = 0;
  *(undefined8 *)(&stack0x000043e0 + lVar15) = 0;
  *(undefined8 *)(&stack0x000043e8 + lVar15) = 0;
  *(undefined8 *)(&stack0x000043f8 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004400 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004260 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004270 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004288 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004298 + lVar15) = 0;
  *(undefined8 *)(&stack0x000042b0 + lVar15) = 5;
  *(undefined8 *)(&stack0x000042c8 + lVar15) = 0;
  *(undefined8 *)(&stack0x000042d0 + lVar15) = 8;
  *(undefined8 *)(&stack0x000042e8 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004300 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004318 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004330 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004348 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004360 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004378 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004390 + lVar15) = 8;
  *(undefined8 *)(&stack0x000043a8 + lVar15) = 4;
  *(undefined8 *)(&stack0x000043c0 + lVar15) = 8;
  *(undefined8 *)(&stack0x000043c8 + lVar15) = 0;
  *(undefined8 *)(&stack0x000043d0 + lVar15) = 0;
  *(undefined8 *)(&stack0x000043d8 + lVar15) = 8;
  *(undefined8 *)(&stack0x000043f0 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004408 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004410 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004418 + lVar15) = 0x8000000000000000;
  *(undefined8 *)(&stack0x00004430 + lVar15) = 0x8000000000000000;
  *(undefined **)(&stack0x00004448 + lVar15) = &UNK_142f39cc7;
  *(undefined8 *)(&stack0x00004450 + lVar15) = 0x1d;
  *(undefined8 *)(&stack0x00004458 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004468 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004478 + lVar15) = _DAT_142f39540;
  *(undefined8 *)(&stack0x00004480 + lVar15) = _UNK_142f39548;
  *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
  *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
  *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f39ee7;
  *(undefined8 *)(&stack0x00003d48 + lVar15) = 0x1d;
  *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f4a76;
  pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
  puVar4 = (undefined8 *)(&stack0x000042d8 + lVar15);
  if (*(longlong *)(&stack0x000043b8 + lVar15) != 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f4a9e;
    pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000043b8 + lVar15) << 4,8);
  }
  *(undefined8 *)(&stack0x000043c8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
  *(undefined8 *)(&stack0x000043b8 + lVar15) = *(undefined8 *)(&stack0x00004530 + lVar15);
  *(undefined8 *)(&stack0x000043c0 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
  *(undefined8 *)(&stack0x00004548 + lVar15) = *(undefined8 *)(&stack0x00004278 + lVar15);
  *(undefined8 *)(&stack0x00004550 + lVar15) = *(undefined8 *)(&stack0x00004280 + lVar15);
  *(undefined8 *)(&stack0x00004570 + lVar15) = *(undefined8 *)(&stack0x000042a0 + lVar15);
  *(undefined8 *)(&stack0x00004578 + lVar15) = *(undefined8 *)(&stack0x000042a8 + lVar15);
  *(undefined8 *)(&stack0x00004588 + lVar15) = *(undefined8 *)(&stack0x000042b8 + lVar15);
  *(undefined8 *)(&stack0x00004590 + lVar15) = *(undefined8 *)(&stack0x000042c0 + lVar15);
  *(undefined8 *)(&stack0x000045a8 + lVar15) = *puVar4;
  *(undefined8 *)(&stack0x000045b0 + lVar15) = *(undefined8 *)(&stack0x000042e0 + lVar15);
  *(undefined8 *)(&stack0x000045c0 + lVar15) = *(undefined8 *)(&stack0x000042f0 + lVar15);
  *(undefined8 *)(&stack0x000045c8 + lVar15) = *(undefined8 *)(&stack0x000042f8 + lVar15);
  *(undefined8 *)(&stack0x000045d8 + lVar15) = *(undefined8 *)(&stack0x00004308 + lVar15);
  *(undefined8 *)(&stack0x000045e0 + lVar15) = *(undefined8 *)(&stack0x00004310 + lVar15);
  *(undefined8 *)(&stack0x000045f0 + lVar15) = *(undefined8 *)(&stack0x00004320 + lVar15);
  *(undefined8 *)(&stack0x000045f8 + lVar15) = *(undefined8 *)(&stack0x00004328 + lVar15);
  *(undefined8 *)(&stack0x00004608 + lVar15) = *(undefined8 *)(&stack0x00004338 + lVar15);
  *(undefined8 *)(&stack0x00004610 + lVar15) = *(undefined8 *)(&stack0x00004340 + lVar15);
  *(undefined8 *)(&stack0x00004620 + lVar15) = *(undefined8 *)(&stack0x00004350 + lVar15);
  *(undefined8 *)(&stack0x00004628 + lVar15) = *(undefined8 *)(&stack0x00004358 + lVar15);
  *(undefined8 *)(&stack0x00004638 + lVar15) = *(undefined8 *)(&stack0x00004368 + lVar15);
  *(undefined8 *)(&stack0x00004640 + lVar15) = *(undefined8 *)(&stack0x00004370 + lVar15);
  *(undefined8 *)(&stack0x00004650 + lVar15) = *(undefined8 *)(&stack0x00004380 + lVar15);
  *(undefined8 *)(&stack0x00004658 + lVar15) = *(undefined8 *)(&stack0x00004388 + lVar15);
  *(undefined8 *)(&stack0x00004668 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004670 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004680 + lVar15) = *(undefined8 *)(&stack0x000043b0 + lVar15);
  *(undefined8 *)(&stack0x00004688 + lVar15) = *(undefined8 *)(&stack0x000043b8 + lVar15);
  *(undefined8 *)(&stack0x000046b0 + lVar15) = 0;
  *(undefined8 *)(&stack0x000046b8 + lVar15) = 0;
  *(undefined8 *)(&stack0x000046c8 + lVar15) = 0;
  *(undefined8 *)(&stack0x000046d0 + lVar15) = 0;
  *(undefined8 *)(&stack0x000046f0 + lVar15) = *(undefined8 *)(&stack0x00004420 + lVar15);
  *(undefined8 *)(&stack0x000046f8 + lVar15) = *(undefined8 *)(&stack0x00004428 + lVar15);
  *(undefined8 *)(&stack0x00004708 + lVar15) = *(undefined8 *)(&stack0x00004438 + lVar15);
  *(undefined8 *)(&stack0x00004710 + lVar15) = *(undefined8 *)(&stack0x00004440 + lVar15);
  *(undefined4 *)(&stack0x00004530 + lVar15) = *(undefined4 *)(&stack0x00004260 + lVar15);
  *(undefined4 *)(&stack0x00004534 + lVar15) = *(undefined4 *)(&stack0x00004264 + lVar15);
  *(undefined4 *)(&stack0x00004538 + lVar15) = *(undefined4 *)(&stack0x00004268 + lVar15);
  *(undefined4 *)(&stack0x0000453c + lVar15) = *(undefined4 *)(&stack0x0000426c + lVar15);
  *(undefined8 *)(&stack0x00004540 + lVar15) = *(undefined8 *)(&stack0x00004270 + lVar15);
  *(undefined4 *)(&stack0x00004558 + lVar15) = *(undefined4 *)(&stack0x00004288 + lVar15);
  *(undefined4 *)(&stack0x0000455c + lVar15) = *(undefined4 *)(&stack0x0000428c + lVar15);
  *(undefined4 *)(&stack0x00004560 + lVar15) = *(undefined4 *)(&stack0x00004290 + lVar15);
  *(undefined4 *)(&stack0x00004564 + lVar15) = *(undefined4 *)(&stack0x00004294 + lVar15);
  *(undefined8 *)(&stack0x00004568 + lVar15) = *(undefined8 *)(&stack0x00004298 + lVar15);
  *(undefined8 *)(&stack0x00004580 + lVar15) = 5;
  *(undefined8 *)(&stack0x00004598 + lVar15) = 0;
  *(undefined8 *)(&stack0x000045a0 + lVar15) = 8;
  *(undefined8 *)(&stack0x000045b8 + lVar15) = 8;
  *(undefined8 *)(&stack0x000045d0 + lVar15) = 8;
  *(undefined8 *)(&stack0x000045e8 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004600 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004618 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004630 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004648 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004660 + lVar15) = 8;
  *(undefined8 *)(&stack0x00004678 + lVar15) = 4;
  *(undefined4 *)(&stack0x00004690 + lVar15) = *(undefined4 *)(&stack0x000043c0 + lVar15);
  *(undefined4 *)(&stack0x00004694 + lVar15) = *(undefined4 *)(&stack0x000043c4 + lVar15);
  *(undefined4 *)(&stack0x00004698 + lVar15) = *(undefined4 *)(&stack0x000043c8 + lVar15);
  *(undefined4 *)(&stack0x0000469c + lVar15) = *(undefined4 *)(&stack0x000043cc + lVar15);
  *(undefined8 *)(&stack0x000046a0 + lVar15) = 0;
  *(undefined8 *)(&stack0x000046a8 + lVar15) = 8;
  *(undefined8 *)(&stack0x000046c0 + lVar15) = 8;
  *(undefined8 *)(&stack0x000046d8 + lVar15) = 8;
  *(undefined8 *)(&stack0x000046e0 + lVar15) = 0;
  *(undefined8 *)(&stack0x000046e8 + lVar15) = 0x8000000000000000;
  *(undefined8 *)(&stack0x00004700 + lVar15) = 0x8000000000000000;
  *(undefined **)(&stack0x00004718 + lVar15) = &UNK_142f39cc7;
  *(undefined8 *)(&stack0x00004720 + lVar15) = 0x1d;
  *(undefined8 *)(&stack0x00004728 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004730 + lVar15) = *(undefined8 *)(&stack0x00004460 + lVar15);
  *(undefined8 *)(&stack0x00004738 + lVar15) = 0;
  *(undefined8 *)(&stack0x00004740 + lVar15) = *(undefined8 *)(&stack0x00004470 + lVar15);
  *(undefined8 *)(&stack0x00004748 + lVar15) = uVar21;
  *(undefined8 *)(&stack0x00004750 + lVar15) = uVar23;
  if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
     (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
    *(undefined8 *)(&stack0x00004788 + lVar15) = *(undefined8 *)(&stack0x00004588 + lVar15);
    *(undefined8 **)(&stack0x00004790 + lVar15) = *(undefined8 **)(&stack0x00004590 + lVar15);
    pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
    if (pcVar11 != (code *)0x0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f4d32;
      (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
    }
    uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
    if (uVar24 != 0) {
      uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f4d53;
      pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
    }
  }
  *(undefined8 *)(&stack0x00004580 + lVar15) = 0;
  *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f4d7e;
  pub_142e32760(&stack0x00004260 + lVar15,&stack0x00004530 + lVar15,0x180);
  *(undefined8 *)(&stack0x000043e8 + lVar15) = *(undefined8 *)(&stack0x000046b8 + lVar15);
  *(undefined8 *)(&stack0x000043f0 + lVar15) = *(undefined8 *)(&stack0x000046c0 + lVar15);
  *(undefined8 *)(&stack0x000043f8 + lVar15) = *(undefined8 *)(&stack0x000046c8 + lVar15);
  *(undefined8 *)(&stack0x00004400 + lVar15) = *(undefined8 *)(&stack0x000046d0 + lVar15);
  *(undefined8 *)(&stack0x00004408 + lVar15) = *(undefined8 *)(&stack0x000046d8 + lVar15);
  *(undefined8 *)(&stack0x00004410 + lVar15) = *(undefined8 *)(&stack0x000046e0 + lVar15);
  *(undefined8 *)(&stack0x00004418 + lVar15) = *(undefined8 *)(&stack0x000046e8 + lVar15);
  *(undefined8 *)(&stack0x00004420 + lVar15) = *(undefined8 *)(&stack0x000046f0 + lVar15);
  *(undefined8 *)(&stack0x00004428 + lVar15) = *(undefined8 *)(&stack0x000046f8 + lVar15);
  *(undefined8 *)(&stack0x00004430 + lVar15) = *(undefined8 *)(&stack0x00004700 + lVar15);
  *(undefined8 *)(&stack0x00004438 + lVar15) = *(undefined8 *)(&stack0x00004708 + lVar15);
  *(undefined8 *)(&stack0x00004440 + lVar15) = *(undefined8 *)(&stack0x00004710 + lVar15);
  *(undefined8 *)(&stack0x00004448 + lVar15) = *(undefined8 *)(&stack0x00004718 + lVar15);
  *(undefined8 *)(&stack0x00004450 + lVar15) = *(undefined8 *)(&stack0x00004720 + lVar15);
  *(undefined4 *)(&stack0x00004468 + lVar15) = *(undefined4 *)(&stack0x00004738 + lVar15);
  *(undefined4 *)(&stack0x0000446c + lVar15) = *(undefined4 *)(&stack0x0000473c + lVar15);
  *(undefined4 *)(&stack0x00004470 + lVar15) = *(undefined4 *)(&stack0x00004740 + lVar15);
  *(undefined4 *)(&stack0x00004474 + lVar15) = *(undefined4 *)(&stack0x00004744 + lVar15);
  *(undefined8 *)(&stack0x00004478 + lVar15) = *(undefined8 *)(&stack0x00004748 + lVar15);
  *(undefined8 *)(&stack0x000043e0 + lVar15) = *(undefined8 *)(&stack0x000046b0 + lVar15);
  *(undefined **)(&stack0x00004458 + lVar15) = &UNK_142f39f04;
  *(undefined8 *)(&stack0x00004460 + lVar15) = 0x1d;
  *(undefined4 *)(&stack0x00004480 + lVar15) = 0;
  (&stack0x00004484)[lVar15] = 0;
  (&stack0x00004487)[lVar15] = 0;
  *(undefined2 *)(&stack0x00004485 + lVar15) = 0xd;
  *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f4e42;
  pdb_14007ee60();
  *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f4e51;
  pbVar16 = pub_1406abab0(0x10,8);
  if (pbVar16 == (byte *)0x0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fef73;
    pdb_142dc7e2a(8,0x10);
  }
  else {
    *(undefined **)pbVar16 = &UNK_142f39f21;
    pbVar16[8] = 5;
    pbVar16[9] = 0;
    pbVar16[10] = 0;
    pbVar16[0xb] = 0;
    pbVar16[0xc] = 0;
    pbVar16[0xd] = 0;
    pbVar16[0xe] = 0;
    pbVar16[0xf] = 0;
    if (*(longlong *)(&stack0x000043d0 + lVar15) != 0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f4e98;
      pub_1406abac0(*(byte **)(&stack0x000043d8 + lVar15),
                    *(longlong *)(&stack0x000043d0 + lVar15) << 4,8);
    }
    *(undefined8 *)(&stack0x000043d0 + lVar15) = 1;
    *(byte **)(&stack0x000043d8 + lVar15) = pbVar16;
    *(undefined8 *)(&stack0x000043e0 + lVar15) = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f4ed1;
    pub_142e32760(&stack0x00004530 + lVar15,&stack0x00004260 + lVar15,0x180);
    *(undefined8 *)(&stack0x00004718 + lVar15) = *(undefined8 *)(&stack0x00004448 + lVar15);
    *(undefined8 *)(&stack0x00004720 + lVar15) = *(undefined8 *)(&stack0x00004450 + lVar15);
    *(undefined8 *)(&stack0x00004708 + lVar15) = *(undefined8 *)(&stack0x00004438 + lVar15);
    *(undefined8 *)(&stack0x00004710 + lVar15) = *(undefined8 *)(&stack0x00004440 + lVar15);
    *(undefined8 *)(&stack0x000046f8 + lVar15) = *(undefined8 *)(&stack0x00004428 + lVar15);
    *(undefined8 *)(&stack0x00004700 + lVar15) = *(undefined8 *)(&stack0x00004430 + lVar15);
    *(undefined4 *)(&stack0x000046e8 + lVar15) = *(undefined4 *)(&stack0x00004418 + lVar15);
    *(undefined4 *)(&stack0x000046ec + lVar15) = *(undefined4 *)(&stack0x0000441c + lVar15);
    *(undefined4 *)(&stack0x000046f0 + lVar15) = *(undefined4 *)(&stack0x00004420 + lVar15);
    *(undefined4 *)(&stack0x000046f4 + lVar15) = *(undefined4 *)(&stack0x00004424 + lVar15);
    *(undefined4 *)(&stack0x000046d8 + lVar15) = *(undefined4 *)(&stack0x00004408 + lVar15);
    *(undefined4 *)(&stack0x000046dc + lVar15) = *(undefined4 *)(&stack0x0000440c + lVar15);
    *(undefined4 *)(&stack0x000046e0 + lVar15) = *(undefined4 *)(&stack0x00004410 + lVar15);
    *(undefined4 *)(&stack0x000046e4 + lVar15) = *(undefined4 *)(&stack0x00004414 + lVar15);
    *(undefined4 *)(&stack0x000046c8 + lVar15) = *(undefined4 *)(&stack0x000043f8 + lVar15);
    *(undefined4 *)(&stack0x000046cc + lVar15) = *(undefined4 *)(&stack0x000043fc + lVar15);
    *(undefined4 *)(&stack0x000046d0 + lVar15) = *(undefined4 *)(&stack0x00004400 + lVar15);
    *(undefined4 *)(&stack0x000046d4 + lVar15) = *(undefined4 *)(&stack0x00004404 + lVar15);
    *(undefined8 *)(&stack0x000046b8 + lVar15) = *(undefined8 *)(&stack0x000043e8 + lVar15);
    *(undefined8 *)(&stack0x000046c0 + lVar15) = *(undefined8 *)(&stack0x000043f0 + lVar15);
    *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00004468 + lVar15);
    *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x0000446c + lVar15);
    *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00004470 + lVar15);
    *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x00004474 + lVar15);
    *(undefined8 *)(&stack0x00004748 + lVar15) = *(undefined8 *)(&stack0x00004478 + lVar15);
    *(undefined8 *)(&stack0x000046b0 + lVar15) = 1;
    *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f39f04;
    *(undefined8 *)(&stack0x00004730 + lVar15) = 0x1d;
    *(undefined4 *)(&stack0x00004750 + lVar15) = 4;
    *(undefined4 *)(&stack0x00004754 + lVar15) = *(undefined4 *)(&stack0x00004484 + lVar15);
    *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f4f7b;
    pdb_140ec70b0(&stack0x00003f90 + lVar15,&stack0x00004530 + lVar15);
    *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f4f95;
    pub_142e32760(&stack0x00004260 + lVar15,&stack0x00003f90 + lVar15,0x2c8);
    *(undefined8 *)(&stack0x00004008 + lVar15) = 0;
    *(undefined8 *)(&stack0x00004010 + lVar15) = 0;
    *(undefined8 *)(&stack0x00004020 + lVar15) = 0;
    *(undefined8 *)(&stack0x00004028 + lVar15) = 0;
    *(undefined8 *)(&stack0x00004038 + lVar15) = 0;
    *(undefined8 *)(&stack0x00004040 + lVar15) = 0;
    *(undefined8 *)(&stack0x00004050 + lVar15) = 0;
    *(undefined8 *)(&stack0x00004058 + lVar15) = 0;
    *(undefined8 *)(&stack0x00004068 + lVar15) = 0;
    *(undefined8 *)(&stack0x00004070 + lVar15) = 0;
    *(undefined8 *)(&stack0x00004080 + lVar15) = 0;
    *(undefined8 *)(&stack0x00004088 + lVar15) = 0;
    *(undefined8 *)(&stack0x00004098 + lVar15) = 0;
    *(undefined8 *)(&stack0x000040a0 + lVar15) = 0;
    *(undefined8 *)(&stack0x000040b0 + lVar15) = 0;
    *(undefined8 *)(&stack0x000040b8 + lVar15) = 0;
    *(undefined8 *)(&stack0x000040c8 + lVar15) = 0;
    *(undefined8 *)(&stack0x000040d0 + lVar15) = 0;
    *(undefined8 *)(&stack0x000040e0 + lVar15) = 0;
    *(undefined8 *)(&stack0x000040e8 + lVar15) = 0;
    *(undefined8 *)(&stack0x00004110 + lVar15) = 0;
    *(undefined8 *)(&stack0x00004118 + lVar15) = 0;
    *(undefined8 *)(&stack0x00004128 + lVar15) = 0;
    *(undefined8 *)(&stack0x00004130 + lVar15) = 0;
    *(undefined8 *)(&stack0x00003f90 + lVar15) = 0;
    *(undefined8 *)(&stack0x00003fa0 + lVar15) = 0;
    *(undefined8 *)(&stack0x00003fb8 + lVar15) = 0;
    *(undefined8 *)(&stack0x00003fc8 + lVar15) = 0;
    *(undefined8 *)(&stack0x00003fe0 + lVar15) = 5;
    *(undefined8 *)(&stack0x00003ff8 + lVar15) = 0;
    *(undefined8 *)(&stack0x00004000 + lVar15) = 8;
    *(undefined8 *)(&stack0x00004018 + lVar15) = 8;
    *(undefined8 *)(&stack0x00004030 + lVar15) = 8;
    *(undefined8 *)(&stack0x00004048 + lVar15) = 8;
    *(undefined8 *)(&stack0x00004060 + lVar15) = 8;
    *(undefined8 *)(&stack0x00004078 + lVar15) = 8;
    *(undefined8 *)(&stack0x00004090 + lVar15) = 8;
    *(undefined8 *)(&stack0x000040a8 + lVar15) = 8;
    *(undefined8 *)(&stack0x000040c0 + lVar15) = 8;
    *(undefined8 *)(&stack0x000040d8 + lVar15) = 4;
    *(undefined8 *)(&stack0x000040f0 + lVar15) = 8;
    *(undefined8 *)(&stack0x000040f8 + lVar15) = 0;
    *(undefined8 *)(&stack0x00004100 + lVar15) = 0;
    *(undefined8 *)(&stack0x00004108 + lVar15) = 8;
    *(undefined8 *)(&stack0x00004120 + lVar15) = 8;
    *(undefined8 *)(&stack0x00004138 + lVar15) = 8;
    *(undefined8 *)(&stack0x00004140 + lVar15) = 0;
    *(undefined8 *)(&stack0x00004148 + lVar15) = 0x8000000000000000;
    *(undefined8 *)(&stack0x00004160 + lVar15) = 0x8000000000000000;
    *(undefined **)(&stack0x00004178 + lVar15) = &UNK_142f39ce4;
    *(undefined8 *)(&stack0x00004180 + lVar15) = 0xe;
    *(undefined8 *)(&stack0x00004188 + lVar15) = 0;
    *(undefined8 *)(&stack0x00004198 + lVar15) = 0;
    *(undefined8 *)(&stack0x000041a8 + lVar15) = uVar21;
    *(undefined8 *)(&stack0x000041b0 + lVar15) = uVar23;
    *(undefined8 *)(&stack0x00004530 + lVar15) = 0;
    *(undefined8 *)(&stack0x00004538 + lVar15) = 1;
    *(undefined **)(&stack0x00004540 + lVar15) = &UNK_142f39f26;
    *(undefined8 *)(&stack0x00004548 + lVar15) = 0xe;
    *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f5160;
    pdb_1401783b0(&stack0x00003d30 + lVar15,&stack0x00004530 + lVar15);
    puVar1 = (undefined8 *)(&stack0x00004008 + lVar15);
    if (*(longlong *)(&stack0x000040e8 + lVar15) != 0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f518f;
      pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000040e8 + lVar15) << 4,8);
    }
    *(undefined8 *)(&stack0x000040f8 + lVar15) = *(undefined8 *)(&stack0x00003d40 + lVar15);
    *(undefined8 *)(&stack0x000040e8 + lVar15) = *(undefined8 *)(&stack0x00003d30 + lVar15);
    *(undefined8 *)(&stack0x000040f0 + lVar15) = *(undefined8 *)(&stack0x00003d38 + lVar15);
    *(undefined8 *)(&stack0x00003d30 + lVar15) = *(undefined8 *)(&stack0x00003fa8 + lVar15);
    *(undefined8 *)(&stack0x00003d38 + lVar15) = *(undefined8 *)(&stack0x00003fb0 + lVar15);
    *(undefined8 *)(&stack0x00003d20 + lVar15) = *(undefined8 *)(&stack0x00003fd0 + lVar15);
    *(undefined8 *)(&stack0x00003d28 + lVar15) = *(undefined8 *)(&stack0x00003fd8 + lVar15);
    *(undefined8 *)(&stack0x00003d10 + lVar15) = *puVar1;
    *(undefined8 *)(&stack0x00003d18 + lVar15) = *(undefined8 *)(&stack0x00004010 + lVar15);
    *(undefined8 *)(&stack0x00003f60 + lVar15) = *(undefined8 *)(&stack0x00004020 + lVar15);
    *(undefined8 *)(&stack0x00003f68 + lVar15) = *(undefined8 *)(&stack0x00004028 + lVar15);
    *(undefined8 *)(&stack0x00003f70 + lVar15) = *(undefined8 *)(&stack0x00004038 + lVar15);
    *(undefined8 *)(&stack0x00003f78 + lVar15) = *(undefined8 *)(&stack0x00004040 + lVar15);
    *(undefined8 *)(&stack0x00003c50 + lVar15) = *(undefined8 *)(&stack0x00004050 + lVar15);
    *(undefined8 *)(&stack0x00003c58 + lVar15) = *(undefined8 *)(&stack0x00004058 + lVar15);
    *(undefined8 *)(&stack0x00003c60 + lVar15) = *(undefined8 *)(&stack0x00004068 + lVar15);
    *(undefined8 *)(&stack0x00003c68 + lVar15) = *(undefined8 *)(&stack0x00004070 + lVar15);
    *(undefined8 *)(&stack0x00003c70 + lVar15) = *(undefined8 *)(&stack0x00004080 + lVar15);
    *(undefined8 *)(&stack0x00003c78 + lVar15) = *(undefined8 *)(&stack0x00004088 + lVar15);
    *(undefined8 *)(&stack0x00003c80 + lVar15) = *(undefined8 *)(&stack0x00004098 + lVar15);
    *(undefined8 *)(&stack0x00003c88 + lVar15) = *(undefined8 *)(&stack0x000040a0 + lVar15);
    *(undefined8 *)(&stack0x00003c90 + lVar15) = *(undefined8 *)(&stack0x000040b0 + lVar15);
    *(undefined8 *)(&stack0x00003c98 + lVar15) = *(undefined8 *)(&stack0x000040b8 + lVar15);
    *(undefined8 *)(&stack0x00003ca0 + lVar15) = 0;
    *(undefined8 *)(&stack0x00003ca8 + lVar15) = 0;
    *(undefined8 *)(&stack0x00003cb0 + lVar15) = *(undefined8 *)(&stack0x000040e0 + lVar15);
    *(undefined8 *)(&stack0x00003cb8 + lVar15) = *(undefined8 *)(&stack0x000040e8 + lVar15);
    *(undefined8 *)(&stack0x00003cc0 + lVar15) = 0;
    *(undefined8 *)(&stack0x00003cc8 + lVar15) = 0;
    *(undefined8 *)(&stack0x00003cd0 + lVar15) = 0;
    *(undefined8 *)(&stack0x00003cd8 + lVar15) = 0;
    *(undefined8 *)(&stack0x00003ce0 + lVar15) = *(undefined8 *)(&stack0x00004150 + lVar15);
    *(undefined8 *)(&stack0x00003ce8 + lVar15) = *(undefined8 *)(&stack0x00004158 + lVar15);
    *(undefined8 *)(&stack0x00003cf0 + lVar15) = *(undefined8 *)(&stack0x00004168 + lVar15);
    *(undefined8 *)(&stack0x00003cf8 + lVar15) = *(undefined8 *)(&stack0x00004170 + lVar15);
    uVar26 = *(undefined8 *)(&stack0x00003f90 + lVar15);
    uVar19 = *(undefined8 *)(&stack0x00003f98 + lVar15);
    *(undefined8 *)(&stack0x00003f90 + lVar15) = uVar21;
    *(undefined8 *)(&stack0x00003f98 + lVar15) = uVar23;
    *(undefined8 *)(&stack0x00003a20 + lVar15) = uVar26;
    *(undefined8 *)(&stack0x00003a28 + lVar15) = uVar19;
    *(undefined8 *)(&stack0x00003a30 + lVar15) = *(undefined8 *)(&stack0x00003fa0 + lVar15);
    *(undefined8 *)(&stack0x00003a38 + lVar15) = *(undefined8 *)(&stack0x00003d30 + lVar15);
    *(undefined8 *)(&stack0x00003a40 + lVar15) = *(undefined8 *)(&stack0x00003d38 + lVar15);
    *(undefined4 *)(&stack0x00003a48 + lVar15) = *(undefined4 *)(&stack0x00003fb8 + lVar15);
    *(undefined4 *)(&stack0x00003a4c + lVar15) = *(undefined4 *)(&stack0x00003fbc + lVar15);
    *(undefined4 *)(&stack0x00003a50 + lVar15) = *(undefined4 *)(&stack0x00003fc0 + lVar15);
    *(undefined4 *)(&stack0x00003a54 + lVar15) = *(undefined4 *)(&stack0x00003fc4 + lVar15);
    *(undefined8 *)(&stack0x00003a58 + lVar15) = *(undefined8 *)(&stack0x00003fc8 + lVar15);
    *(undefined8 *)(&stack0x00003a60 + lVar15) = *(undefined8 *)(&stack0x00003d20 + lVar15);
    *(undefined8 *)(&stack0x00003a68 + lVar15) = *(undefined8 *)(&stack0x00003d28 + lVar15);
    *(undefined8 *)(&stack0x00003a70 + lVar15) = 4;
    *(undefined8 *)(&stack0x00003a78 + lVar15) = 1;
    *(undefined **)(&stack0x00003a80 + lVar15) = &UNK_142e41778;
    *(undefined8 *)(&stack0x00003a88 + lVar15) = 0;
    *(undefined8 *)(&stack0x00003a90 + lVar15) = 8;
    *(undefined8 *)(&stack0x00003a98 + lVar15) = *(undefined8 *)(&stack0x00003d10 + lVar15);
    *(undefined8 *)(&stack0x00003aa0 + lVar15) = *(undefined8 *)(&stack0x00003d18 + lVar15);
    *(undefined8 *)(&stack0x00003aa8 + lVar15) = 8;
    *(undefined8 *)(&stack0x00003ab0 + lVar15) = *(undefined8 *)(&stack0x00003f60 + lVar15);
    *(undefined8 *)(&stack0x00003ab8 + lVar15) = *(undefined8 *)(&stack0x00003f68 + lVar15);
    *(undefined8 *)(&stack0x00003ac0 + lVar15) = 8;
    *(undefined8 *)(&stack0x00003ac8 + lVar15) = *(undefined8 *)(&stack0x00003f70 + lVar15);
    *(undefined8 *)(&stack0x00003ad0 + lVar15) = *(undefined8 *)(&stack0x00003f78 + lVar15);
    *(undefined8 *)(&stack0x00003ad8 + lVar15) = 8;
    *(undefined8 *)(&stack0x00003ae0 + lVar15) = *(undefined8 *)(&stack0x00003c50 + lVar15);
    *(undefined8 *)(&stack0x00003ae8 + lVar15) = *(undefined8 *)(&stack0x00003c58 + lVar15);
    *(undefined8 *)(&stack0x00003af0 + lVar15) = 8;
    *(undefined8 *)(&stack0x00003af8 + lVar15) = *(undefined8 *)(&stack0x00003c60 + lVar15);
    *(undefined8 *)(&stack0x00003b00 + lVar15) = *(undefined8 *)(&stack0x00003c68 + lVar15);
    *(undefined8 *)(&stack0x00003b08 + lVar15) = 8;
    *(undefined8 *)(&stack0x00003b10 + lVar15) = *(undefined8 *)(&stack0x00003c70 + lVar15);
    *(undefined8 *)(&stack0x00003b18 + lVar15) = *(undefined8 *)(&stack0x00003c78 + lVar15);
    *(undefined8 *)(&stack0x00003b20 + lVar15) = 8;
    *(undefined8 *)(&stack0x00003b28 + lVar15) = *(undefined8 *)(&stack0x00003c80 + lVar15);
    *(undefined8 *)(&stack0x00003b30 + lVar15) = *(undefined8 *)(&stack0x00003c88 + lVar15);
    *(undefined8 *)(&stack0x00003b38 + lVar15) = 8;
    *(undefined8 *)(&stack0x00003b40 + lVar15) = *(undefined8 *)(&stack0x00003c90 + lVar15);
    *(undefined8 *)(&stack0x00003b48 + lVar15) = *(undefined8 *)(&stack0x00003c98 + lVar15);
    *(undefined8 *)(&stack0x00003b50 + lVar15) = 8;
    *(undefined8 *)(&stack0x00003b58 + lVar15) = *(undefined8 *)(&stack0x00003ca0 + lVar15);
    *(undefined8 *)(&stack0x00003b60 + lVar15) = *(undefined8 *)(&stack0x00003ca8 + lVar15);
    *(undefined8 *)(&stack0x00003b68 + lVar15) = 4;
    *(undefined4 *)(&stack0x00003b70 + lVar15) = *(undefined4 *)(&stack0x00003cb0 + lVar15);
    *(undefined4 *)(&stack0x00003b74 + lVar15) = *(undefined4 *)(&stack0x00003cb4 + lVar15);
    *(undefined4 *)(&stack0x00003b78 + lVar15) = *(undefined4 *)(&stack0x00003cb8 + lVar15);
    *(undefined4 *)(&stack0x00003b7c + lVar15) = *(undefined4 *)(&stack0x00003cbc + lVar15);
    *(undefined8 *)(&stack0x00003b80 + lVar15) = *(undefined8 *)(&stack0x000040f0 + lVar15);
    *(undefined8 *)(&stack0x00003b88 + lVar15) = *(undefined8 *)(&stack0x000040f8 + lVar15);
    *(undefined8 *)(&stack0x00003b90 + lVar15) = 0;
    *(undefined8 *)(&stack0x00003b98 + lVar15) = 8;
    *(undefined8 *)(&stack0x00003ba0 + lVar15) = *(undefined8 *)(&stack0x00003cc0 + lVar15);
    *(undefined8 *)(&stack0x00003ba8 + lVar15) = *(undefined8 *)(&stack0x00003cc8 + lVar15);
    *(undefined8 *)(&stack0x00003bb0 + lVar15) = 8;
    *(undefined8 *)(&stack0x00003bb8 + lVar15) = *(undefined8 *)(&stack0x00003cd0 + lVar15);
    *(undefined8 *)(&stack0x00003bc0 + lVar15) = *(undefined8 *)(&stack0x00003cd8 + lVar15);
    *(undefined8 *)(&stack0x00003bc8 + lVar15) = 8;
    *(undefined8 *)(&stack0x00003bd0 + lVar15) = 0;
    *(undefined8 *)(&stack0x00003bd8 + lVar15) = 0x8000000000000000;
    *(undefined8 *)(&stack0x00003be0 + lVar15) = *(undefined8 *)(&stack0x00003ce0 + lVar15);
    *(undefined8 *)(&stack0x00003be8 + lVar15) = *(undefined8 *)(&stack0x00003ce8 + lVar15);
    *(undefined8 *)(&stack0x00003bf0 + lVar15) = 0x8000000000000000;
    *(undefined4 *)(&stack0x00003bf8 + lVar15) = *(undefined4 *)(&stack0x00003cf0 + lVar15);
    *(undefined4 *)(&stack0x00003bfc + lVar15) = *(undefined4 *)(&stack0x00003cf4 + lVar15);
    *(undefined4 *)(&stack0x00003c00 + lVar15) = *(undefined4 *)(&stack0x00003cf8 + lVar15);
    *(undefined4 *)(&stack0x00003c04 + lVar15) = *(undefined4 *)(&stack0x00003cfc + lVar15);
    *(undefined **)(&stack0x00003c08 + lVar15) = &UNK_142f39ce4;
    *(undefined8 *)(&stack0x00003c10 + lVar15) = 0xe;
    *(undefined8 *)(&stack0x00003c18 + lVar15) = 0;
    *(undefined8 *)(&stack0x00003c20 + lVar15) = *(undefined8 *)(&stack0x00004190 + lVar15);
    *(undefined8 *)(&stack0x00003c28 + lVar15) = 0;
    *(undefined8 *)(&stack0x00003c30 + lVar15) = *(undefined8 *)(&stack0x000041a0 + lVar15);
    *(undefined4 *)(&stack0x00003c40 + lVar15) = *(undefined4 *)(&stack0x00003f98 + lVar15);
    *(undefined8 *)(&stack0x00003c38 + lVar15) = *(undefined8 *)(&stack0x00003f90 + lVar15);
    (&stack0x00003c47)[lVar15] = (&stack0x00003f9f)[lVar15];
    *(undefined2 *)(&stack0x00003c45 + lVar15) = *(undefined2 *)(&stack0x00003f9d + lVar15);
    (&stack0x00003c44)[lVar15] = 0;
    *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f550e;
    pdb_140eb2530(&stack0x00003f90 + lVar15,&UNK_142f39f34,0x1c);
    lVar22 = *(longlong *)(&stack0x00003f90 + lVar15);
    if (!SBORROW8(0,lVar22)) {
      *(undefined8 *)(&stack0x00004530 + lVar15) = *(undefined8 *)(&stack0x00003f98 + lVar15);
      *(undefined8 *)(&stack0x00004538 + lVar15) = *(undefined8 *)(&stack0x00003fa0 + lVar15);
    }
    uVar24 = *(ulonglong *)(&stack0x00003bd8 + lVar15);
    if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f554f;
      pub_1406abac0(*(byte **)(&stack0x00003be0 + lVar15),uVar24,1);
    }
    *(longlong *)(&stack0x00003bd8 + lVar15) = lVar22;
    *(undefined4 *)(&stack0x00003be0 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
    *(undefined4 *)(&stack0x00003be4 + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
    *(undefined4 *)(&stack0x00003be8 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
    *(undefined4 *)(&stack0x00003bec + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
    *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f557d;
    pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00003a20 + lVar15,0x228);
    *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f558c;
    pdb_140eccac0(&stack0x00004530 + lVar15,0);
    lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
    if (!SBORROW8(0,lVar22)) {
      *(undefined8 *)(&stack0x00003d30 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
      *(undefined8 *)(&stack0x00003d38 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
    }
    uVar24 = *(ulonglong *)(&stack0x00004160 + lVar15);
    if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f55cd;
      pub_1406abac0(*(byte **)(&stack0x00004168 + lVar15),uVar24,1);
    }
    *(longlong *)(&stack0x00004160 + lVar15) = lVar22;
    *(undefined4 *)(&stack0x00004168 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
    *(undefined4 *)(&stack0x0000416c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
    *(undefined4 *)(&stack0x00004170 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
    *(undefined4 *)(&stack0x00004174 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
    *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f55fb;
    pub_142e32760(&stack0x00003d30 + lVar15,&stack0x00003f90 + lVar15,0x1f8);
    *(undefined4 *)(&stack0x00003f38 + lVar15) = *(undefined4 *)(&stack0x00003c28 + lVar15);
    *(undefined4 *)(&stack0x00003f3c + lVar15) = *(undefined4 *)(&stack0x00003c2c + lVar15);
    *(undefined4 *)(&stack0x00003f40 + lVar15) = *(undefined4 *)(&stack0x00003c30 + lVar15);
    *(undefined4 *)(&stack0x00003f44 + lVar15) = *(undefined4 *)(&stack0x00003c34 + lVar15);
    *(undefined4 *)(&stack0x00003f48 + lVar15) = *(undefined4 *)(&stack0x00003c38 + lVar15);
    *(undefined4 *)(&stack0x00003f4c + lVar15) = *(undefined4 *)(&stack0x00003c3c + lVar15);
    *(undefined4 *)(&stack0x00003f50 + lVar15) = *(undefined4 *)(&stack0x00003c40 + lVar15);
    *(undefined4 *)(&stack0x00003f54 + lVar15) = *(undefined4 *)(&stack0x00003c44 + lVar15);
    *(undefined **)(&stack0x00003f28 + lVar15) = &UNK_142f39f50;
    *(undefined8 *)(&stack0x00003f30 + lVar15) = 0xe;
    if (_DAT_143ca3100 != 0) {
      (&stack0x00004768)[lVar15] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fef45;
      pdb_142d846d9(0x143ca30e8);
    }
    uVar19 = _DAT_143ca30f8;
    uVar26 = _DAT_143ca30f0;
    *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f5665;
    pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00003d30 + lVar15,0x228);
    *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f566a;
    pdb_14007ee60();
    *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f5679;
    pbVar16 = pub_1406abab0(0x10,8);
    if (pbVar16 == (byte *)0x0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fef85;
      pdb_142dc7e2a(8,0x10);
    }
    else {
      *(undefined8 *)pbVar16 = uVar26;
      *(undefined8 *)(pbVar16 + 8) = uVar19;
      if (*(longlong *)(&stack0x00004100 + lVar15) != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f56ae;
        pub_1406abac0(*(byte **)(&stack0x00004108 + lVar15),
                      *(longlong *)(&stack0x00004100 + lVar15) << 4,8);
      }
      *(undefined8 *)(&stack0x00004100 + lVar15) = 1;
      *(byte **)(&stack0x00004108 + lVar15) = pbVar16;
      *(undefined8 *)(&stack0x00004110 + lVar15) = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f56e7;
      pub_142e32760(&stack0x00004530 + lVar15,&stack0x00003f90 + lVar15,0x228);
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f56f7;
      pdb_140ec70b0(&stack0x00004260 + lVar15,&stack0x00004530 + lVar15);
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f5711;
      pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00004260 + lVar15,0x2c8);
      *(undefined8 *)(&stack0x000042d8 + lVar15) = 0;
      *(undefined8 *)(&stack0x000042e0 + lVar15) = 0;
      *(undefined8 *)(&stack0x000042f0 + lVar15) = 0;
      *(undefined8 *)(&stack0x000042f8 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004308 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004310 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004320 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004328 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004338 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004340 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004350 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004358 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004368 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004370 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004380 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004388 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004398 + lVar15) = 0;
      *(undefined8 *)(&stack0x000043a0 + lVar15) = 0;
      *(undefined8 *)(&stack0x000043b0 + lVar15) = 0;
      *(undefined8 *)(&stack0x000043b8 + lVar15) = 0;
      *(undefined8 *)(&stack0x000043e0 + lVar15) = 0;
      *(undefined8 *)(&stack0x000043e8 + lVar15) = 0;
      *(undefined8 *)(&stack0x000043f8 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004400 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004260 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004270 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004288 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004298 + lVar15) = 0;
      *(undefined8 *)(&stack0x000042b0 + lVar15) = 5;
      *(undefined8 *)(&stack0x000042c8 + lVar15) = 0;
      *(undefined8 *)(&stack0x000042d0 + lVar15) = 8;
      *(undefined8 *)(&stack0x000042e8 + lVar15) = 8;
      *(undefined8 *)(&stack0x00004300 + lVar15) = 8;
      *(undefined8 *)(&stack0x00004318 + lVar15) = 8;
      *(undefined8 *)(&stack0x00004330 + lVar15) = 8;
      *(undefined8 *)(&stack0x00004348 + lVar15) = 8;
      *(undefined8 *)(&stack0x00004360 + lVar15) = 8;
      *(undefined8 *)(&stack0x00004378 + lVar15) = 8;
      *(undefined8 *)(&stack0x00004390 + lVar15) = 8;
      *(undefined8 *)(&stack0x000043a8 + lVar15) = 4;
      *(undefined8 *)(&stack0x000043c0 + lVar15) = 8;
      *(undefined8 *)(&stack0x000043c8 + lVar15) = 0;
      *(undefined8 *)(&stack0x000043d0 + lVar15) = 0;
      *(undefined8 *)(&stack0x000043d8 + lVar15) = 8;
      *(undefined8 *)(&stack0x000043f0 + lVar15) = 8;
      *(undefined8 *)(&stack0x00004408 + lVar15) = 8;
      *(undefined8 *)(&stack0x00004410 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004418 + lVar15) = 0x8000000000000000;
      *(undefined8 *)(&stack0x00004430 + lVar15) = 0x8000000000000000;
      *(undefined **)(&stack0x00004448 + lVar15) = &UNK_142f39cf2;
      *(undefined8 *)(&stack0x00004450 + lVar15) = 0x10;
      *(undefined8 *)(&stack0x00004458 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004468 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004478 + lVar15) = uVar21;
      *(undefined8 *)(&stack0x00004480 + lVar15) = uVar23;
      *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
      *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
      *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f39f5e;
      *(undefined8 *)(&stack0x00003d48 + lVar15) = 0x10;
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f58dc;
      pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
      if (*(longlong *)(&stack0x000043b8 + lVar15) != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f58fd;
        pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000043b8 + lVar15) << 4,8);
      }
      *(undefined8 *)(&stack0x000043c8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
      *(undefined8 *)(&stack0x000043b8 + lVar15) = *(undefined8 *)(&stack0x00004530 + lVar15);
      *(undefined8 *)(&stack0x000043c0 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
      *(undefined8 *)(&stack0x00004548 + lVar15) = *(undefined8 *)(&stack0x00004278 + lVar15);
      *(undefined8 *)(&stack0x00004550 + lVar15) = *(undefined8 *)(&stack0x00004280 + lVar15);
      *(undefined8 *)(&stack0x00004570 + lVar15) = *(undefined8 *)(&stack0x000042a0 + lVar15);
      *(undefined8 *)(&stack0x00004578 + lVar15) = *(undefined8 *)(&stack0x000042a8 + lVar15);
      *(undefined8 *)(&stack0x00004588 + lVar15) = *(undefined8 *)(&stack0x000042b8 + lVar15);
      *(undefined8 *)(&stack0x00004590 + lVar15) = *(undefined8 *)(&stack0x000042c0 + lVar15);
      *(undefined8 *)(&stack0x000045a8 + lVar15) = *puVar4;
      *(undefined8 *)(&stack0x000045b0 + lVar15) = *(undefined8 *)(&stack0x000042e0 + lVar15);
      *(undefined8 *)(&stack0x000045c0 + lVar15) = *(undefined8 *)(&stack0x000042f0 + lVar15);
      *(undefined8 *)(&stack0x000045c8 + lVar15) = *(undefined8 *)(&stack0x000042f8 + lVar15);
      *(undefined8 *)(&stack0x000045d8 + lVar15) = *(undefined8 *)(&stack0x00004308 + lVar15);
      *(undefined8 *)(&stack0x000045e0 + lVar15) = *(undefined8 *)(&stack0x00004310 + lVar15);
      *(undefined8 *)(&stack0x000045f0 + lVar15) = *(undefined8 *)(&stack0x00004320 + lVar15);
      *(undefined8 *)(&stack0x000045f8 + lVar15) = *(undefined8 *)(&stack0x00004328 + lVar15);
      *(undefined8 *)(&stack0x00004608 + lVar15) = *(undefined8 *)(&stack0x00004338 + lVar15);
      *(undefined8 *)(&stack0x00004610 + lVar15) = *(undefined8 *)(&stack0x00004340 + lVar15);
      *(undefined8 *)(&stack0x00004620 + lVar15) = *(undefined8 *)(&stack0x00004350 + lVar15);
      *(undefined8 *)(&stack0x00004628 + lVar15) = *(undefined8 *)(&stack0x00004358 + lVar15);
      *(undefined8 *)(&stack0x00004638 + lVar15) = *(undefined8 *)(&stack0x00004368 + lVar15);
      *(undefined8 *)(&stack0x00004640 + lVar15) = *(undefined8 *)(&stack0x00004370 + lVar15);
      *(undefined8 *)(&stack0x00004650 + lVar15) = *(undefined8 *)(&stack0x00004380 + lVar15);
      *(undefined8 *)(&stack0x00004658 + lVar15) = *(undefined8 *)(&stack0x00004388 + lVar15);
      *(undefined8 *)(&stack0x00004668 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004670 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004680 + lVar15) = *(undefined8 *)(&stack0x000043b0 + lVar15);
      *(undefined8 *)(&stack0x00004688 + lVar15) = *(undefined8 *)(&stack0x000043b8 + lVar15);
      *(undefined8 *)(&stack0x000046b0 + lVar15) = 0;
      *(undefined8 *)(&stack0x000046b8 + lVar15) = 0;
      *(undefined8 *)(&stack0x000046c8 + lVar15) = 0;
      *(undefined8 *)(&stack0x000046d0 + lVar15) = 0;
      *(undefined8 *)(&stack0x000046f0 + lVar15) = *(undefined8 *)(&stack0x00004420 + lVar15);
      *(undefined8 *)(&stack0x000046f8 + lVar15) = *(undefined8 *)(&stack0x00004428 + lVar15);
      *(undefined8 *)(&stack0x00004708 + lVar15) = *(undefined8 *)(&stack0x00004438 + lVar15);
      *(undefined8 *)(&stack0x00004710 + lVar15) = *(undefined8 *)(&stack0x00004440 + lVar15);
      *(undefined4 *)(&stack0x00004530 + lVar15) = *(undefined4 *)(&stack0x00004260 + lVar15);
      *(undefined4 *)(&stack0x00004534 + lVar15) = *(undefined4 *)(&stack0x00004264 + lVar15);
      *(undefined4 *)(&stack0x00004538 + lVar15) = *(undefined4 *)(&stack0x00004268 + lVar15);
      *(undefined4 *)(&stack0x0000453c + lVar15) = *(undefined4 *)(&stack0x0000426c + lVar15);
      *(undefined8 *)(&stack0x00004540 + lVar15) = *(undefined8 *)(&stack0x00004270 + lVar15);
      *(undefined4 *)(&stack0x00004558 + lVar15) = *(undefined4 *)(&stack0x00004288 + lVar15);
      *(undefined4 *)(&stack0x0000455c + lVar15) = *(undefined4 *)(&stack0x0000428c + lVar15);
      *(undefined4 *)(&stack0x00004560 + lVar15) = *(undefined4 *)(&stack0x00004290 + lVar15);
      *(undefined4 *)(&stack0x00004564 + lVar15) = *(undefined4 *)(&stack0x00004294 + lVar15);
      *(undefined8 *)(&stack0x00004568 + lVar15) = *(undefined8 *)(&stack0x00004298 + lVar15);
      *(undefined8 *)(&stack0x00004580 + lVar15) = 5;
      *(undefined8 *)(&stack0x00004598 + lVar15) = 0;
      *(undefined8 *)(&stack0x000045a0 + lVar15) = 8;
      *(undefined8 *)(&stack0x000045b8 + lVar15) = 8;
      *(undefined8 *)(&stack0x000045d0 + lVar15) = 8;
      *(undefined8 *)(&stack0x000045e8 + lVar15) = 8;
      *(undefined8 *)(&stack0x00004600 + lVar15) = 8;
      *(undefined8 *)(&stack0x00004618 + lVar15) = 8;
      *(undefined8 *)(&stack0x00004630 + lVar15) = 8;
      *(undefined8 *)(&stack0x00004648 + lVar15) = 8;
      *(undefined8 *)(&stack0x00004660 + lVar15) = 8;
      *(undefined8 *)(&stack0x00004678 + lVar15) = 4;
      *(undefined4 *)(&stack0x00004690 + lVar15) = *(undefined4 *)(&stack0x000043c0 + lVar15);
      *(undefined4 *)(&stack0x00004694 + lVar15) = *(undefined4 *)(&stack0x000043c4 + lVar15);
      *(undefined4 *)(&stack0x00004698 + lVar15) = *(undefined4 *)(&stack0x000043c8 + lVar15);
      *(undefined4 *)(&stack0x0000469c + lVar15) = *(undefined4 *)(&stack0x000043cc + lVar15);
      *(undefined8 *)(&stack0x000046a0 + lVar15) = 0;
      *(undefined8 *)(&stack0x000046a8 + lVar15) = 8;
      *(undefined8 *)(&stack0x000046c0 + lVar15) = 8;
      *(undefined8 *)(&stack0x000046d8 + lVar15) = 8;
      *(undefined8 *)(&stack0x000046e0 + lVar15) = 0;
      *(undefined8 *)(&stack0x000046e8 + lVar15) = 0x8000000000000000;
      *(undefined8 *)(&stack0x00004700 + lVar15) = 0x8000000000000000;
      *(undefined **)(&stack0x00004718 + lVar15) = &UNK_142f39cf2;
      *(undefined8 *)(&stack0x00004720 + lVar15) = 0x10;
      *(undefined8 *)(&stack0x00004728 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004730 + lVar15) = *(undefined8 *)(&stack0x00004460 + lVar15);
      *(undefined8 *)(&stack0x00004738 + lVar15) = 0;
      *(undefined8 *)(&stack0x00004740 + lVar15) = *(undefined8 *)(&stack0x00004470 + lVar15);
      *(undefined8 *)(&stack0x00004748 + lVar15) = uVar21;
      *(undefined8 *)(&stack0x00004750 + lVar15) = uVar23;
      if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
         (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
        *(undefined8 *)(&stack0x00004788 + lVar15) = *(undefined8 *)(&stack0x00004588 + lVar15);
        *(undefined8 **)(&stack0x00004790 + lVar15) = *(undefined8 **)(&stack0x00004590 + lVar15);
        pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
        if (pcVar11 != (code *)0x0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f5b91;
          (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
        }
        uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
        if (uVar24 != 0) {
          uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f5bb2;
          pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
        }
      }
      *(undefined8 *)(&stack0x00004580 + lVar15) = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f5bd6;
      pub_142e32760(&stack0x000037f8 + lVar15,&stack0x00004530 + lVar15,0x224);
      *(undefined2 *)(&stack0x00003a1d + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
      (&stack0x00003a1f)[lVar15] = (&stack0x00004757)[lVar15];
      (&stack0x00003a1c)[lVar15] = 0;
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f5c11;
      pdb_140eb2530(&stack0x00004260 + lVar15,&UNK_142f39f6e,0x32);
      lVar22 = *(longlong *)(&stack0x00004260 + lVar15);
      if (!SBORROW8(0,lVar22)) {
        *(undefined8 *)(&stack0x00004530 + lVar15) = *(undefined8 *)(&stack0x00004268 + lVar15);
        *(undefined8 *)(&stack0x00004538 + lVar15) = *(undefined8 *)(&stack0x00004270 + lVar15);
      }
      uVar24 = *(ulonglong *)(&stack0x000039b0 + lVar15);
      if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f5c52;
        pub_1406abac0(*(byte **)(&stack0x000039b8 + lVar15),uVar24,1);
      }
      *(longlong *)(&stack0x000039b0 + lVar15) = lVar22;
      *(undefined4 *)(&stack0x000039b8 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
      *(undefined4 *)(&stack0x000039bc + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
      *(undefined4 *)(&stack0x000039c0 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
      *(undefined4 *)(&stack0x000039c4 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f5c80;
      pub_142e32760(&stack0x00004530 + lVar15,&stack0x000037f8 + lVar15,0x228);
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f5c8f;
      pdb_140eccac0(&stack0x00004260 + lVar15,0);
      lVar22 = *(longlong *)(&stack0x00004260 + lVar15);
      if (!SBORROW8(0,lVar22)) {
        *(undefined8 *)(&stack0x00003d30 + lVar15) = *(undefined8 *)(&stack0x00004268 + lVar15);
        *(undefined8 *)(&stack0x00003d38 + lVar15) = *(undefined8 *)(&stack0x00004270 + lVar15);
      }
      uVar24 = *(ulonglong *)(&stack0x00004700 + lVar15);
      if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f5cd0;
        pub_1406abac0(*(byte **)(&stack0x00004708 + lVar15),uVar24,1);
      }
      *(longlong *)(&stack0x00004700 + lVar15) = lVar22;
      *(undefined4 *)(&stack0x00004708 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
      *(undefined4 *)(&stack0x0000470c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
      *(undefined4 *)(&stack0x00004710 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
      *(undefined4 *)(&stack0x00004714 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f5cfe;
      pub_142e32760(&stack0x00004260 + lVar15,&stack0x000037f8 + lVar15,0x180);
      *(undefined8 *)(&stack0x000043e8 + lVar15) = *(undefined8 *)(&stack0x000046b8 + lVar15);
      *(undefined8 *)(&stack0x000043f0 + lVar15) = *(undefined8 *)(&stack0x000046c0 + lVar15);
      *(undefined8 *)(&stack0x000043f8 + lVar15) = *(undefined8 *)(&stack0x000046c8 + lVar15);
      *(undefined8 *)(&stack0x00004400 + lVar15) = *(undefined8 *)(&stack0x000046d0 + lVar15);
      *(undefined8 *)(&stack0x00004408 + lVar15) = *(undefined8 *)(&stack0x000046d8 + lVar15);
      *(undefined8 *)(&stack0x00004410 + lVar15) = *(undefined8 *)(&stack0x000046e0 + lVar15);
      *(undefined8 *)(&stack0x00004418 + lVar15) = *(undefined8 *)(&stack0x000046e8 + lVar15);
      *(undefined8 *)(&stack0x00004420 + lVar15) = *(undefined8 *)(&stack0x000046f0 + lVar15);
      *(undefined8 *)(&stack0x00004428 + lVar15) = *(undefined8 *)(&stack0x000046f8 + lVar15);
      *(undefined8 *)(&stack0x00004430 + lVar15) = *(undefined8 *)(&stack0x00004700 + lVar15);
      *(undefined8 *)(&stack0x00004438 + lVar15) = *(undefined8 *)(&stack0x00004708 + lVar15);
      *(undefined8 *)(&stack0x00004440 + lVar15) = *(undefined8 *)(&stack0x00004710 + lVar15);
      *(undefined8 *)(&stack0x00004448 + lVar15) = *(undefined8 *)(&stack0x00004718 + lVar15);
      *(undefined8 *)(&stack0x00004450 + lVar15) = *(undefined8 *)(&stack0x00004720 + lVar15);
      *(undefined4 *)(&stack0x00004468 + lVar15) = *(undefined4 *)(&stack0x00003a00 + lVar15);
      *(undefined4 *)(&stack0x0000446c + lVar15) = *(undefined4 *)(&stack0x00003a04 + lVar15);
      *(undefined4 *)(&stack0x00004470 + lVar15) = *(undefined4 *)(&stack0x00003a08 + lVar15);
      *(undefined4 *)(&stack0x00004474 + lVar15) = *(undefined4 *)(&stack0x00003a0c + lVar15);
      *(undefined8 *)(&stack0x00004478 + lVar15) = *(undefined8 *)(&stack0x00003a10 + lVar15);
      uVar6 = *(uint *)(&stack0x00004750 + lVar15);
      uVar7 = *(undefined4 *)(&stack0x00004754 + lVar15);
      *(undefined8 *)(&stack0x000043e0 + lVar15) = *(undefined8 *)(&stack0x000046b0 + lVar15);
      *(undefined4 *)(&stack0x00004458 + lVar15) = *(undefined4 *)(&stack0x00004728 + lVar15);
      *(undefined4 *)(&stack0x0000445c + lVar15) = *(undefined4 *)(&stack0x0000472c + lVar15);
      *(undefined4 *)(&stack0x00004460 + lVar15) = *(undefined4 *)(&stack0x00004730 + lVar15);
      *(undefined4 *)(&stack0x00004464 + lVar15) = *(undefined4 *)(&stack0x00004734 + lVar15);
      *(uint *)(&stack0x00004480 + lVar15) = uVar6;
      *(undefined4 *)(&stack0x00004484 + lVar15) = uVar7;
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f5db7;
      pdb_14007ee60();
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f5dc6;
      pbVar16 = pub_1406abab0(0x10,8);
      if (pbVar16 == (byte *)0x0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fef97;
        pdb_142dc7e2a(8,0x10);
      }
      else {
        *(undefined **)pbVar16 = &UNK_142f39fa0;
        pbVar16[8] = 7;
        pbVar16[9] = 0;
        pbVar16[10] = 0;
        pbVar16[0xb] = 0;
        pbVar16[0xc] = 0;
        pbVar16[0xd] = 0;
        pbVar16[0xe] = 0;
        pbVar16[0xf] = 0;
        if (*(longlong *)(&stack0x000043d0 + lVar15) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f5e0d;
          pub_1406abac0(*(byte **)(&stack0x000043d8 + lVar15),
                        *(longlong *)(&stack0x000043d0 + lVar15) << 4,8);
        }
        *(undefined8 *)(&stack0x000043d0 + lVar15) = 1;
        *(byte **)(&stack0x000043d8 + lVar15) = pbVar16;
        *(undefined8 *)(&stack0x000043e0 + lVar15) = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f5e46;
        pub_142e32760(&stack0x00004530 + lVar15,&stack0x00004260 + lVar15,0x180);
        *(undefined8 *)(&stack0x00004718 + lVar15) = *(undefined8 *)(&stack0x00004448 + lVar15);
        *(undefined8 *)(&stack0x00004720 + lVar15) = *(undefined8 *)(&stack0x00004450 + lVar15);
        *(undefined8 *)(&stack0x00004708 + lVar15) = *(undefined8 *)(&stack0x00004438 + lVar15);
        *(undefined8 *)(&stack0x00004710 + lVar15) = *(undefined8 *)(&stack0x00004440 + lVar15);
        *(undefined8 *)(&stack0x000046f8 + lVar15) = *(undefined8 *)(&stack0x00004428 + lVar15);
        *(undefined8 *)(&stack0x00004700 + lVar15) = *(undefined8 *)(&stack0x00004430 + lVar15);
        *(undefined4 *)(&stack0x000046e8 + lVar15) = *(undefined4 *)(&stack0x00004418 + lVar15);
        *(undefined4 *)(&stack0x000046ec + lVar15) = *(undefined4 *)(&stack0x0000441c + lVar15);
        *(undefined4 *)(&stack0x000046f0 + lVar15) = *(undefined4 *)(&stack0x00004420 + lVar15);
        *(undefined4 *)(&stack0x000046f4 + lVar15) = *(undefined4 *)(&stack0x00004424 + lVar15);
        *(undefined4 *)(&stack0x000046d8 + lVar15) = *(undefined4 *)(&stack0x00004408 + lVar15);
        *(undefined4 *)(&stack0x000046dc + lVar15) = *(undefined4 *)(&stack0x0000440c + lVar15);
        *(undefined4 *)(&stack0x000046e0 + lVar15) = *(undefined4 *)(&stack0x00004410 + lVar15);
        *(undefined4 *)(&stack0x000046e4 + lVar15) = *(undefined4 *)(&stack0x00004414 + lVar15);
        *(undefined4 *)(&stack0x000046c8 + lVar15) = *(undefined4 *)(&stack0x000043f8 + lVar15);
        *(undefined4 *)(&stack0x000046cc + lVar15) = *(undefined4 *)(&stack0x000043fc + lVar15);
        *(undefined4 *)(&stack0x000046d0 + lVar15) = *(undefined4 *)(&stack0x00004400 + lVar15);
        *(undefined4 *)(&stack0x000046d4 + lVar15) = *(undefined4 *)(&stack0x00004404 + lVar15);
        *(undefined8 *)(&stack0x000046b8 + lVar15) = *(undefined8 *)(&stack0x000043e8 + lVar15);
        *(undefined8 *)(&stack0x000046c0 + lVar15) = *(undefined8 *)(&stack0x000043f0 + lVar15);
        *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00003a00 + lVar15);
        *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x00003a04 + lVar15);
        *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00003a08 + lVar15);
        *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x00003a0c + lVar15);
        *(undefined8 *)(&stack0x00004748 + lVar15) = *(undefined8 *)(&stack0x00003a10 + lVar15);
        *(undefined8 *)(&stack0x000046b0 + lVar15) = 1;
        *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f39fa7;
        *(undefined8 *)(&stack0x00004730 + lVar15) = 0x10;
        *(uint *)(&stack0x00004750 + lVar15) = uVar6 | 4;
        *(undefined4 *)(&stack0x00004754 + lVar15) = uVar7;
        *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f5eec;
        pdb_140ec70b0(&stack0x00003f90 + lVar15,&stack0x00004530 + lVar15);
        *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f5f06;
        pub_142e32760(&stack0x00004260 + lVar15,&stack0x00003f90 + lVar15,0x2c8);
        *(undefined8 *)(&stack0x00004008 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004010 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004020 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004028 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004038 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004040 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004050 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004058 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004068 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004070 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004080 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004088 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004098 + lVar15) = 0;
        *(undefined8 *)(&stack0x000040a0 + lVar15) = 0;
        *(undefined8 *)(&stack0x000040b0 + lVar15) = 0;
        *(undefined8 *)(&stack0x000040b8 + lVar15) = 0;
        *(undefined8 *)(&stack0x000040c8 + lVar15) = 0;
        *(undefined8 *)(&stack0x000040d0 + lVar15) = 0;
        *(undefined8 *)(&stack0x000040e0 + lVar15) = 0;
        *(undefined8 *)(&stack0x000040e8 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004110 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004118 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004128 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004130 + lVar15) = 0;
        *(undefined8 *)(&stack0x00003f90 + lVar15) = 0;
        *(undefined8 *)(&stack0x00003fa0 + lVar15) = 0;
        *(undefined8 *)(&stack0x00003fb8 + lVar15) = 0;
        *(undefined8 *)(&stack0x00003fc8 + lVar15) = 0;
        *(undefined8 *)(&stack0x00003fe0 + lVar15) = 5;
        *(undefined8 *)(&stack0x00003ff8 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004000 + lVar15) = 8;
        *(undefined8 *)(&stack0x00004018 + lVar15) = 8;
        *(undefined8 *)(&stack0x00004030 + lVar15) = 8;
        *(undefined8 *)(&stack0x00004048 + lVar15) = 8;
        *(undefined8 *)(&stack0x00004060 + lVar15) = 8;
        *(undefined8 *)(&stack0x00004078 + lVar15) = 8;
        *(undefined8 *)(&stack0x00004090 + lVar15) = 8;
        *(undefined8 *)(&stack0x000040a8 + lVar15) = 8;
        *(undefined8 *)(&stack0x000040c0 + lVar15) = 8;
        *(undefined8 *)(&stack0x000040d8 + lVar15) = 4;
        *(undefined8 *)(&stack0x000040f0 + lVar15) = 8;
        *(undefined8 *)(&stack0x000040f8 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004100 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004108 + lVar15) = 8;
        *(undefined8 *)(&stack0x00004120 + lVar15) = 8;
        *(undefined8 *)(&stack0x00004138 + lVar15) = 8;
        *(undefined8 *)(&stack0x00004140 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004148 + lVar15) = 0x8000000000000000;
        *(undefined8 *)(&stack0x00004160 + lVar15) = 0x8000000000000000;
        *(undefined **)(&stack0x00004178 + lVar15) = &UNK_142f39d02;
        *(undefined8 *)(&stack0x00004180 + lVar15) = 0x12;
        *(undefined8 *)(&stack0x00004188 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004198 + lVar15) = 0;
        *(undefined8 *)(&stack0x000041a8 + lVar15) = uVar21;
        *(undefined8 *)(&stack0x000041b0 + lVar15) = uVar23;
        *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
        *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
        *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f39fb7;
        *(undefined8 *)(&stack0x00003d48 + lVar15) = 0x12;
        *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f60db;
        pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
        if (*(longlong *)(&stack0x000040e8 + lVar15) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f610d;
          pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000040e8 + lVar15) << 4,8);
        }
        *(undefined8 *)(&stack0x000040f8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
        *(undefined8 *)(&stack0x000040e8 + lVar15) = *(undefined8 *)(&stack0x00004530 + lVar15);
        *(undefined8 *)(&stack0x000040f0 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
        *(undefined8 *)(&stack0x00004548 + lVar15) = *(undefined8 *)(&stack0x00003fa8 + lVar15);
        *(undefined8 *)(&stack0x00004550 + lVar15) = *(undefined8 *)(&stack0x00003fb0 + lVar15);
        *(undefined8 *)(&stack0x00004570 + lVar15) = *(undefined8 *)(&stack0x00003fd0 + lVar15);
        *(undefined8 *)(&stack0x00004578 + lVar15) = *(undefined8 *)(&stack0x00003fd8 + lVar15);
        *(undefined8 *)(&stack0x00004588 + lVar15) = *(undefined8 *)(&stack0x00003fe8 + lVar15);
        *(undefined8 *)(&stack0x00004590 + lVar15) = *(undefined8 *)(&stack0x00003ff0 + lVar15);
        *(undefined8 *)(&stack0x000045a8 + lVar15) = *puVar1;
        *(undefined8 *)(&stack0x000045b0 + lVar15) = *(undefined8 *)(&stack0x00004010 + lVar15);
        *(undefined8 *)(&stack0x000045c0 + lVar15) = *(undefined8 *)(&stack0x00004020 + lVar15);
        *(undefined8 *)(&stack0x000045c8 + lVar15) = *(undefined8 *)(&stack0x00004028 + lVar15);
        *(undefined8 *)(&stack0x000045d8 + lVar15) = *(undefined8 *)(&stack0x00004038 + lVar15);
        *(undefined8 *)(&stack0x000045e0 + lVar15) = *(undefined8 *)(&stack0x00004040 + lVar15);
        *(undefined8 *)(&stack0x000045f0 + lVar15) = *(undefined8 *)(&stack0x00004050 + lVar15);
        *(undefined8 *)(&stack0x000045f8 + lVar15) = *(undefined8 *)(&stack0x00004058 + lVar15);
        *(undefined8 *)(&stack0x00004608 + lVar15) = *(undefined8 *)(&stack0x00004068 + lVar15);
        *(undefined8 *)(&stack0x00004610 + lVar15) = *(undefined8 *)(&stack0x00004070 + lVar15);
        *(undefined8 *)(&stack0x00004620 + lVar15) = *(undefined8 *)(&stack0x00004080 + lVar15);
        *(undefined8 *)(&stack0x00004628 + lVar15) = *(undefined8 *)(&stack0x00004088 + lVar15);
        *(undefined8 *)(&stack0x00004638 + lVar15) = *(undefined8 *)(&stack0x00004098 + lVar15);
        *(undefined8 *)(&stack0x00004640 + lVar15) = *(undefined8 *)(&stack0x000040a0 + lVar15);
        *(undefined8 *)(&stack0x00004650 + lVar15) = *(undefined8 *)(&stack0x000040b0 + lVar15);
        *(undefined8 *)(&stack0x00004658 + lVar15) = *(undefined8 *)(&stack0x000040b8 + lVar15);
        *(undefined8 *)(&stack0x00004668 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004670 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004680 + lVar15) = *(undefined8 *)(&stack0x000040e0 + lVar15);
        *(undefined8 *)(&stack0x00004688 + lVar15) = *(undefined8 *)(&stack0x000040e8 + lVar15);
        *(undefined8 *)(&stack0x000046b0 + lVar15) = 0;
        *(undefined8 *)(&stack0x000046b8 + lVar15) = 0;
        *(undefined8 *)(&stack0x000046c8 + lVar15) = 0;
        *(undefined8 *)(&stack0x000046d0 + lVar15) = 0;
        *(undefined8 *)(&stack0x000046f0 + lVar15) = *(undefined8 *)(&stack0x00004150 + lVar15);
        *(undefined8 *)(&stack0x000046f8 + lVar15) = *(undefined8 *)(&stack0x00004158 + lVar15);
        *(undefined8 *)(&stack0x00004708 + lVar15) = *(undefined8 *)(&stack0x00004168 + lVar15);
        *(undefined8 *)(&stack0x00004710 + lVar15) = *(undefined8 *)(&stack0x00004170 + lVar15);
        *(undefined4 *)(&stack0x00004530 + lVar15) = *(undefined4 *)(&stack0x00003f90 + lVar15);
        *(undefined4 *)(&stack0x00004534 + lVar15) = *(undefined4 *)(&stack0x00003f94 + lVar15);
        *(undefined4 *)(&stack0x00004538 + lVar15) = *(undefined4 *)(&stack0x00003f98 + lVar15);
        *(undefined4 *)(&stack0x0000453c + lVar15) = *(undefined4 *)(&stack0x00003f9c + lVar15);
        *(undefined8 *)(&stack0x00004540 + lVar15) = *(undefined8 *)(&stack0x00003fa0 + lVar15);
        *(undefined4 *)(&stack0x00004558 + lVar15) = *(undefined4 *)(&stack0x00003fb8 + lVar15);
        *(undefined4 *)(&stack0x0000455c + lVar15) = *(undefined4 *)(&stack0x00003fbc + lVar15);
        *(undefined4 *)(&stack0x00004560 + lVar15) = *(undefined4 *)(&stack0x00003fc0 + lVar15);
        *(undefined4 *)(&stack0x00004564 + lVar15) = *(undefined4 *)(&stack0x00003fc4 + lVar15);
        *(undefined8 *)(&stack0x00004568 + lVar15) = *(undefined8 *)(&stack0x00003fc8 + lVar15);
        *(undefined8 *)(&stack0x00004580 + lVar15) = 5;
        *(undefined8 *)(&stack0x00004598 + lVar15) = 0;
        *(undefined8 *)(&stack0x000045a0 + lVar15) = 8;
        *(undefined8 *)(&stack0x000045b8 + lVar15) = 8;
        *(undefined8 *)(&stack0x000045d0 + lVar15) = 8;
        *(undefined8 *)(&stack0x000045e8 + lVar15) = 8;
        *(undefined8 *)(&stack0x00004600 + lVar15) = 8;
        *(undefined8 *)(&stack0x00004618 + lVar15) = 8;
        *(undefined8 *)(&stack0x00004630 + lVar15) = 8;
        *(undefined8 *)(&stack0x00004648 + lVar15) = 8;
        *(undefined8 *)(&stack0x00004660 + lVar15) = 8;
        *(undefined8 *)(&stack0x00004678 + lVar15) = 4;
        *(undefined4 *)(&stack0x00004690 + lVar15) = *(undefined4 *)(&stack0x000040f0 + lVar15);
        *(undefined4 *)(&stack0x00004694 + lVar15) = *(undefined4 *)(&stack0x000040f4 + lVar15);
        *(undefined4 *)(&stack0x00004698 + lVar15) = *(undefined4 *)(&stack0x000040f8 + lVar15);
        *(undefined4 *)(&stack0x0000469c + lVar15) = *(undefined4 *)(&stack0x000040fc + lVar15);
        *(undefined8 *)(&stack0x000046a0 + lVar15) = 0;
        *(undefined8 *)(&stack0x000046a8 + lVar15) = 8;
        *(undefined8 *)(&stack0x000046c0 + lVar15) = 8;
        *(undefined8 *)(&stack0x000046d8 + lVar15) = 8;
        *(undefined8 *)(&stack0x000046e0 + lVar15) = 0;
        *(undefined8 *)(&stack0x000046e8 + lVar15) = 0x8000000000000000;
        *(undefined8 *)(&stack0x00004700 + lVar15) = 0x8000000000000000;
        *(undefined **)(&stack0x00004718 + lVar15) = &UNK_142f39d02;
        *(undefined8 *)(&stack0x00004720 + lVar15) = 0x12;
        *(undefined8 *)(&stack0x00004728 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004730 + lVar15) = *(undefined8 *)(&stack0x00004190 + lVar15);
        *(undefined8 *)(&stack0x00004738 + lVar15) = 0;
        *(undefined8 *)(&stack0x00004740 + lVar15) = *(undefined8 *)(&stack0x000041a0 + lVar15);
        *(undefined8 *)(&stack0x00004748 + lVar15) = uVar21;
        *(undefined8 *)(&stack0x00004750 + lVar15) = uVar23;
        (&stack0x00004766)[lVar15] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f6362;
        pdb_140ed1370(&stack0x00003d30 + lVar15);
        (&stack0x00004766)[lVar15] = 0;
        *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f6384;
        pdb_14037aef0(&stack0x00003f90 + lVar15,&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15)
        ;
        (&stack0x000041b4)[lVar15] = 0;
        *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f63a2;
        pub_142e32760(&stack0xffffffffffffffe8 + lVar15,&stack0x00003f90 + lVar15,0x228);
        *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f63bc;
        pdb_140eb2530(&stack0x00003f90 + lVar15,&UNK_142f39fc9,0x2c);
        lVar22 = *(longlong *)(&stack0x00003f90 + lVar15);
        if (!SBORROW8(0,lVar22)) {
          *(undefined8 *)(&stack0x00004530 + lVar15) = *(undefined8 *)(&stack0x00003f98 + lVar15);
          *(undefined8 *)(&stack0x00004538 + lVar15) = *(undefined8 *)(&stack0x00003fa0 + lVar15);
        }
        uVar24 = *(ulonglong *)(&stack0x000001a0 + lVar15);
        if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f63fd;
          pub_1406abac0(*(byte **)(&stack0x000001a8 + lVar15),uVar24,1);
        }
        *(longlong *)(&stack0x000001a0 + lVar15) = lVar22;
        *(undefined4 *)(&stack0x000001a8 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
        *(undefined4 *)(&stack0x000001ac + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
        *(undefined4 *)(&stack0x000001b0 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
        *(undefined4 *)(&stack0x000001b4 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
        *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f6428;
        pub_142e32760(&stack0x00003f90 + lVar15,&stack0xffffffffffffffe8 + lVar15,0x228);
        *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f6437;
        pdb_140eccac0(&stack0x00004530 + lVar15,0);
        lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
        if (!SBORROW8(0,lVar22)) {
          *(undefined8 *)(&stack0x00003d30 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
          *(undefined8 *)(&stack0x00003d38 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
        }
        uVar24 = *(ulonglong *)(&stack0x00004160 + lVar15);
        if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f6478;
          pub_1406abac0(*(byte **)(&stack0x00004168 + lVar15),uVar24,1);
        }
        *(longlong *)(&stack0x00004160 + lVar15) = lVar22;
        *(undefined4 *)(&stack0x00004168 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
        *(undefined4 *)(&stack0x0000416c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
        *(undefined4 *)(&stack0x00004170 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
        *(undefined4 *)(&stack0x00004174 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
        *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f64a6;
        pub_142e32760(&stack0x00003d30 + lVar15,&stack0x00003f90 + lVar15,0x228);
        if (_DAT_143ca3120 != 0) {
          (&stack0x00004767)[lVar15] = 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fef5e;
          pdb_142d8476f(0x143ca3108);
        }
        uVar19 = _DAT_143ca3118;
        uVar26 = _DAT_143ca3110;
        *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f64db;
        pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00003d30 + lVar15,0x228);
        *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f64e0;
        pdb_14007ee60();
        *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f64ef;
        pbVar16 = pub_1406abab0(0x10,8);
        if (pbVar16 != (byte *)0x0) {
          *(undefined8 *)pbVar16 = uVar26;
          *(undefined8 *)(pbVar16 + 8) = uVar19;
          if (*(longlong *)(&stack0x00004100 + lVar15) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f6524;
            pub_1406abac0(*(byte **)(&stack0x00004108 + lVar15),
                          *(longlong *)(&stack0x00004100 + lVar15) << 4,8);
          }
          *(undefined8 *)(&stack0x00004100 + lVar15) = 1;
          *(byte **)(&stack0x00004108 + lVar15) = pbVar16;
          *(undefined8 *)(&stack0x00004110 + lVar15) = 1;
          puVar2 = &stack0x00004530 + lVar15;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f655d;
          pub_142e32760(puVar2,&stack0x00003f90 + lVar15,0x1f8);
          *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00003f38 + lVar15);
          *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x00003f3c + lVar15);
          *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00003f40 + lVar15);
          *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x00003f44 + lVar15);
          *(undefined8 *)(&stack0x00004748 + lVar15) = *(undefined8 *)(&stack0x00003f48 + lVar15);
          *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f39ff5;
          *(undefined8 *)(&stack0x00004730 + lVar15) = 0x12;
          *(ulonglong *)(&stack0x00004750 + lVar15) = *(ulonglong *)(&stack0x000041b0 + lVar15) | 4;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f65b3;
          pdb_140ec70b0(&stack0x00004260 + lVar15,puVar2);
          puVar3 = (undefined8 *)(&stack0x000040e8 + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f65d4;
          pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00004260 + lVar15,0x2c8);
          *(undefined8 *)(&stack0x000042d8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042f0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004308 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004310 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004320 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004328 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004338 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004340 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004350 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004358 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004368 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004370 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004380 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004388 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004398 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043e8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004400 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004260 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004270 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004288 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004298 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042b0 + lVar15) = 5;
          *(undefined8 *)(&stack0x000042c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042d0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000042e8 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004300 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004318 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004330 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004348 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004360 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004378 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004390 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043a8 + lVar15) = 4;
          *(undefined8 *)(&stack0x000043c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043d8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043f0 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004408 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004410 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004418 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004430 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004448 + lVar15) = &UNK_142f39d14;
          *(undefined8 *)(&stack0x00004450 + lVar15) = 0x12;
          *(undefined8 *)(&stack0x00004458 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004468 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004478 + lVar15) = uVar21;
          *(undefined8 *)(&stack0x00004480 + lVar15) = uVar23;
          *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
          *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3a007;
          *(undefined8 *)(&stack0x00003d48 + lVar15) = 0x12;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f679f;
          pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
          if (*(longlong *)(&stack0x000043b8 + lVar15) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f67c0;
            pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000043b8 + lVar15) << 4,8);
          }
          *(undefined8 *)(&stack0x000043c8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          *(undefined8 *)(&stack0x000043b8 + lVar15) = *(undefined8 *)(&stack0x00004530 + lVar15);
          *(undefined8 *)(&stack0x000043c0 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
          *(undefined8 *)(&stack0x00004548 + lVar15) = *(undefined8 *)(&stack0x00004278 + lVar15);
          *(undefined8 *)(&stack0x00004550 + lVar15) = *(undefined8 *)(&stack0x00004280 + lVar15);
          *(undefined8 *)(&stack0x00004570 + lVar15) = *(undefined8 *)(&stack0x000042a0 + lVar15);
          *(undefined8 *)(&stack0x00004578 + lVar15) = *(undefined8 *)(&stack0x000042a8 + lVar15);
          *(undefined8 *)(&stack0x00004588 + lVar15) = *(undefined8 *)(&stack0x000042b8 + lVar15);
          *(undefined8 *)(&stack0x00004590 + lVar15) = *(undefined8 *)(&stack0x000042c0 + lVar15);
          *(undefined8 *)(&stack0x000045a8 + lVar15) = *puVar4;
          *(undefined8 *)(&stack0x000045b0 + lVar15) = *(undefined8 *)(&stack0x000042e0 + lVar15);
          *(undefined8 *)(&stack0x000045c0 + lVar15) = *(undefined8 *)(&stack0x000042f0 + lVar15);
          *(undefined8 *)(&stack0x000045c8 + lVar15) = *(undefined8 *)(&stack0x000042f8 + lVar15);
          *(undefined8 *)(&stack0x000045d8 + lVar15) = *(undefined8 *)(&stack0x00004308 + lVar15);
          *(undefined8 *)(&stack0x000045e0 + lVar15) = *(undefined8 *)(&stack0x00004310 + lVar15);
          *(undefined8 *)(&stack0x000045f0 + lVar15) = *(undefined8 *)(&stack0x00004320 + lVar15);
          *(undefined8 *)(&stack0x000045f8 + lVar15) = *(undefined8 *)(&stack0x00004328 + lVar15);
          *(undefined8 *)(&stack0x00004608 + lVar15) = *(undefined8 *)(&stack0x00004338 + lVar15);
          *(undefined8 *)(&stack0x00004610 + lVar15) = *(undefined8 *)(&stack0x00004340 + lVar15);
          *(undefined8 *)(&stack0x00004620 + lVar15) = *(undefined8 *)(&stack0x00004350 + lVar15);
          *(undefined8 *)(&stack0x00004628 + lVar15) = *(undefined8 *)(&stack0x00004358 + lVar15);
          *(undefined8 *)(&stack0x00004638 + lVar15) = *(undefined8 *)(&stack0x00004368 + lVar15);
          *(undefined8 *)(&stack0x00004640 + lVar15) = *(undefined8 *)(&stack0x00004370 + lVar15);
          *(undefined8 *)(&stack0x00004650 + lVar15) = *(undefined8 *)(&stack0x00004380 + lVar15);
          *(undefined8 *)(&stack0x00004658 + lVar15) = *(undefined8 *)(&stack0x00004388 + lVar15);
          *(undefined8 *)(&stack0x00004668 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004670 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004680 + lVar15) = *(undefined8 *)(&stack0x000043b0 + lVar15);
          *(undefined8 *)(&stack0x00004688 + lVar15) = *(undefined8 *)(&stack0x000043b8 + lVar15);
          *(undefined8 *)(&stack0x000046b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046f0 + lVar15) = *(undefined8 *)(&stack0x00004420 + lVar15);
          *(undefined8 *)(&stack0x000046f8 + lVar15) = *(undefined8 *)(&stack0x00004428 + lVar15);
          *(undefined8 *)(&stack0x00004708 + lVar15) = *(undefined8 *)(&stack0x00004438 + lVar15);
          *(undefined8 *)(&stack0x00004710 + lVar15) = *(undefined8 *)(&stack0x00004440 + lVar15);
          *(undefined4 *)(&stack0x00004530 + lVar15) = *(undefined4 *)(&stack0x00004260 + lVar15);
          *(undefined4 *)(&stack0x00004534 + lVar15) = *(undefined4 *)(&stack0x00004264 + lVar15);
          *(undefined4 *)(&stack0x00004538 + lVar15) = *(undefined4 *)(&stack0x00004268 + lVar15);
          *(undefined4 *)(&stack0x0000453c + lVar15) = *(undefined4 *)(&stack0x0000426c + lVar15);
          *(undefined8 *)(&stack0x00004540 + lVar15) = *(undefined8 *)(&stack0x00004270 + lVar15);
          *(undefined4 *)(&stack0x00004558 + lVar15) = *(undefined4 *)(&stack0x00004288 + lVar15);
          *(undefined4 *)(&stack0x0000455c + lVar15) = *(undefined4 *)(&stack0x0000428c + lVar15);
          *(undefined4 *)(&stack0x00004560 + lVar15) = *(undefined4 *)(&stack0x00004290 + lVar15);
          *(undefined4 *)(&stack0x00004564 + lVar15) = *(undefined4 *)(&stack0x00004294 + lVar15);
          *(undefined8 *)(&stack0x00004568 + lVar15) = *(undefined8 *)(&stack0x00004298 + lVar15);
          *(undefined8 *)(&stack0x00004580 + lVar15) = 5;
          *(undefined8 *)(&stack0x00004598 + lVar15) = 0;
          *(undefined8 *)(&stack0x000045a0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045b8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045d0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045e8 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004600 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004618 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004630 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004648 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004660 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004678 + lVar15) = 4;
          *(undefined4 *)(&stack0x00004690 + lVar15) = *(undefined4 *)(&stack0x000043c0 + lVar15);
          *(undefined4 *)(&stack0x00004694 + lVar15) = *(undefined4 *)(&stack0x000043c4 + lVar15);
          *(undefined4 *)(&stack0x00004698 + lVar15) = *(undefined4 *)(&stack0x000043c8 + lVar15);
          *(undefined4 *)(&stack0x0000469c + lVar15) = *(undefined4 *)(&stack0x000043cc + lVar15);
          *(undefined8 *)(&stack0x000046a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046a8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046d8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046e8 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004700 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004718 + lVar15) = &UNK_142f39d14;
          *(undefined8 *)(&stack0x00004720 + lVar15) = 0x12;
          *(undefined8 *)(&stack0x00004728 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004730 + lVar15) = *(undefined8 *)(&stack0x00004460 + lVar15);
          *(undefined8 *)(&stack0x00004738 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004740 + lVar15) = *(undefined8 *)(&stack0x00004470 + lVar15);
          *(undefined8 *)(&stack0x00004748 + lVar15) = uVar21;
          *(undefined8 *)(&stack0x00004750 + lVar15) = uVar23;
          if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
             (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
            *(undefined8 *)(&stack0x00004788 + lVar15) = *(undefined8 *)(&stack0x00004588 + lVar15);
            *(undefined8 **)(&stack0x00004790 + lVar15) =
                 *(undefined8 **)(&stack0x00004590 + lVar15);
            pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
            if (pcVar11 != (code *)0x0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f6a54;
              (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
            }
            uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
            if (uVar24 != 0) {
              uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f6a75;
              pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
            }
          }
          *(undefined8 *)(&stack0x00004580 + lVar15) = 0;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f6a99;
          pub_142e32760(&stack0x000035d0 + lVar15,&stack0x00004530 + lVar15,0x224);
          *(undefined2 *)(&stack0x000037f5 + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
          (&stack0x000037f7)[lVar15] = (&stack0x00004757)[lVar15];
          (&stack0x000037f4)[lVar15] = 2;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f6ad4;
          pdb_140eb2530(&stack0x00004260 + lVar15,&UNK_142f3a019,0x56);
          lVar22 = *(longlong *)(&stack0x00004260 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00004530 + lVar15) = *(undefined8 *)(&stack0x00004268 + lVar15);
            *(undefined8 *)(&stack0x00004538 + lVar15) = *(undefined8 *)(&stack0x00004270 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00003788 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f6b15;
            pub_1406abac0(*(byte **)(&stack0x00003790 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00003788 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00003790 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
          *(undefined4 *)(&stack0x00003794 + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
          *(undefined4 *)(&stack0x00003798 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
          *(undefined4 *)(&stack0x0000379c + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f6b43;
          pub_142e32760(&stack0x00004260 + lVar15,&stack0x000035d0 + lVar15,0x228);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f6b52;
          pdb_140eccac0(&stack0x00004530 + lVar15,0);
          lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00003d30 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
            *(undefined8 *)(&stack0x00003d38 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00004430 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f6b93;
            pub_1406abac0(*(byte **)(&stack0x00004438 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00004430 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00004438 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
          *(undefined4 *)(&stack0x0000443c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
          *(undefined4 *)(&stack0x00004440 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
          *(undefined4 *)(&stack0x00004444 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f6bc1;
          pub_142e32760(&stack0x00003d30 + lVar15,&stack0x00004260 + lVar15,0x1f8);
          *(undefined4 *)(&stack0x00003f38 + lVar15) = *(undefined4 *)(&stack0x000037d8 + lVar15);
          *(undefined4 *)(&stack0x00003f3c + lVar15) = *(undefined4 *)(&stack0x000037dc + lVar15);
          *(undefined4 *)(&stack0x00003f40 + lVar15) = *(undefined4 *)(&stack0x000037e0 + lVar15);
          *(undefined4 *)(&stack0x00003f44 + lVar15) = *(undefined4 *)(&stack0x000037e4 + lVar15);
          *(undefined8 *)(&stack0x00003f48 + lVar15) = *(undefined8 *)(&stack0x000037e8 + lVar15);
          *(undefined **)(&stack0x00003f28 + lVar15) = &UNK_142f3a06f;
          *(undefined8 *)(&stack0x00003f30 + lVar15) = 0x12;
          *(ulonglong *)(&stack0x00003f50 + lVar15) = *(ulonglong *)(&stack0x00004480 + lVar15) | 4;
          lVar22 = *(longlong *)(&stack0x00003e68 + lVar15);
          if (lVar22 == *(longlong *)(&stack0x00003e58 + lVar15)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f6c24;
            pdb_142d7e830(&stack0x00003e58 + lVar15);
          }
          lVar25 = *(longlong *)(&stack0x00003e60 + lVar15);
          *(undefined **)(lVar25 + lVar22 * 0x18) = &UNK_142f3a081;
          *(undefined8 *)(lVar25 + 8 + lVar22 * 0x18) = 0x13;
          *(undefined1 *)(lVar25 + 0x10 + lVar22 * 0x18) = 0;
          *(longlong *)(&stack0x00003e68 + lVar15) = lVar22 + 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f6c68;
          pub_142e32760(puVar2,&stack0x00003d30 + lVar15,0x228);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f6c78;
          pdb_140ec70b0(&stack0x00003f90 + lVar15,puVar2);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f6c92;
          pub_142e32760(&stack0x00004260 + lVar15,&stack0x00003f90 + lVar15,0x2c8);
          *(undefined8 *)(&stack0x00004008 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004010 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004020 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004028 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004038 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004040 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004050 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004058 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004068 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004070 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004080 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004088 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004098 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040e8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004110 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004118 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004128 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004130 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003f90 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fa0 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fb8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fc8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fe0 + lVar15) = 5;
          *(undefined8 *)(&stack0x00003ff8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004000 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004018 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004030 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004048 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004060 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004078 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004090 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040a8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040d8 + lVar15) = 4;
          *(undefined8 *)(&stack0x000040f0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004100 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004108 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004120 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004138 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004140 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004148 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004160 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004178 + lVar15) = &UNK_142f39d26;
          *(undefined8 *)(&stack0x00004180 + lVar15) = 0x15;
          *(undefined8 *)(&stack0x00004188 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004198 + lVar15) = 0;
          *(undefined8 *)(&stack0x000041a8 + lVar15) = uVar21;
          *(undefined8 *)(&stack0x000041b0 + lVar15) = uVar23;
          *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
          *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3a094;
          *(undefined8 *)(&stack0x00003d48 + lVar15) = 0x15;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f6e5d;
          pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
          if (*(longlong *)(&stack0x000040e8 + lVar15) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f6e7e;
            pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000040e8 + lVar15) << 4,8);
          }
          *(undefined8 *)(&stack0x000040f8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          *puVar3 = *(undefined8 *)(&stack0x00004530 + lVar15);
          *(undefined8 *)(&stack0x000040f0 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
          *(undefined8 *)(&stack0x00004548 + lVar15) = *(undefined8 *)(&stack0x00003fa8 + lVar15);
          *(undefined8 *)(&stack0x00004550 + lVar15) = *(undefined8 *)(&stack0x00003fb0 + lVar15);
          *(undefined8 *)(&stack0x00004570 + lVar15) = *(undefined8 *)(&stack0x00003fd0 + lVar15);
          *(undefined8 *)(&stack0x00004578 + lVar15) = *(undefined8 *)(&stack0x00003fd8 + lVar15);
          *(undefined8 *)(&stack0x00004588 + lVar15) = *(undefined8 *)(&stack0x00003fe8 + lVar15);
          *(undefined8 *)(&stack0x00004590 + lVar15) = *(undefined8 *)(&stack0x00003ff0 + lVar15);
          *(undefined8 *)(&stack0x000045a8 + lVar15) = *puVar1;
          *(undefined8 *)(&stack0x000045b0 + lVar15) = *(undefined8 *)(&stack0x00004010 + lVar15);
          *(undefined8 *)(&stack0x000045c0 + lVar15) = *(undefined8 *)(&stack0x00004020 + lVar15);
          *(undefined8 *)(&stack0x000045c8 + lVar15) = *(undefined8 *)(&stack0x00004028 + lVar15);
          *(undefined8 *)(&stack0x000045d8 + lVar15) = *(undefined8 *)(&stack0x00004038 + lVar15);
          *(undefined8 *)(&stack0x000045e0 + lVar15) = *(undefined8 *)(&stack0x00004040 + lVar15);
          *(undefined8 *)(&stack0x000045f0 + lVar15) = *(undefined8 *)(&stack0x00004050 + lVar15);
          *(undefined8 *)(&stack0x000045f8 + lVar15) = *(undefined8 *)(&stack0x00004058 + lVar15);
          *(undefined8 *)(&stack0x00004608 + lVar15) = *(undefined8 *)(&stack0x00004068 + lVar15);
          *(undefined8 *)(&stack0x00004610 + lVar15) = *(undefined8 *)(&stack0x00004070 + lVar15);
          *(undefined8 *)(&stack0x00004620 + lVar15) = *(undefined8 *)(&stack0x00004080 + lVar15);
          *(undefined8 *)(&stack0x00004628 + lVar15) = *(undefined8 *)(&stack0x00004088 + lVar15);
          *(undefined8 *)(&stack0x00004638 + lVar15) = *(undefined8 *)(&stack0x00004098 + lVar15);
          *(undefined8 *)(&stack0x00004640 + lVar15) = *(undefined8 *)(&stack0x000040a0 + lVar15);
          *(undefined8 *)(&stack0x00004650 + lVar15) = *(undefined8 *)(&stack0x000040b0 + lVar15);
          *(undefined8 *)(&stack0x00004658 + lVar15) = *(undefined8 *)(&stack0x000040b8 + lVar15);
          *(undefined8 *)(&stack0x00004668 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004670 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004680 + lVar15) = *(undefined8 *)(&stack0x000040e0 + lVar15);
          *(undefined8 *)(&stack0x00004688 + lVar15) = *(undefined8 *)(&stack0x000040e8 + lVar15);
          *(undefined8 *)(&stack0x000046b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046f0 + lVar15) = *(undefined8 *)(&stack0x00004150 + lVar15);
          *(undefined8 *)(&stack0x000046f8 + lVar15) = *(undefined8 *)(&stack0x00004158 + lVar15);
          *(undefined8 *)(&stack0x00004708 + lVar15) = *(undefined8 *)(&stack0x00004168 + lVar15);
          *(undefined8 *)(&stack0x00004710 + lVar15) = *(undefined8 *)(&stack0x00004170 + lVar15);
          *(undefined4 *)(&stack0x00004530 + lVar15) = *(undefined4 *)(&stack0x00003f90 + lVar15);
          *(undefined4 *)(&stack0x00004534 + lVar15) = *(undefined4 *)(&stack0x00003f94 + lVar15);
          *(undefined4 *)(&stack0x00004538 + lVar15) = *(undefined4 *)(&stack0x00003f98 + lVar15);
          *(undefined4 *)(&stack0x0000453c + lVar15) = *(undefined4 *)(&stack0x00003f9c + lVar15);
          *(undefined8 *)(&stack0x00004540 + lVar15) = *(undefined8 *)(&stack0x00003fa0 + lVar15);
          *(undefined4 *)(&stack0x00004558 + lVar15) = *(undefined4 *)(&stack0x00003fb8 + lVar15);
          *(undefined4 *)(&stack0x0000455c + lVar15) = *(undefined4 *)(&stack0x00003fbc + lVar15);
          *(undefined4 *)(&stack0x00004560 + lVar15) = *(undefined4 *)(&stack0x00003fc0 + lVar15);
          *(undefined4 *)(&stack0x00004564 + lVar15) = *(undefined4 *)(&stack0x00003fc4 + lVar15);
          *(undefined8 *)(&stack0x00004568 + lVar15) = *(undefined8 *)(&stack0x00003fc8 + lVar15);
          *(undefined8 *)(&stack0x00004580 + lVar15) = 5;
          *(undefined8 *)(&stack0x00004598 + lVar15) = 0;
          *(undefined8 *)(&stack0x000045a0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045b8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045d0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045e8 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004600 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004618 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004630 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004648 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004660 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004678 + lVar15) = 4;
          *(undefined4 *)(&stack0x00004690 + lVar15) = *(undefined4 *)(&stack0x000040f0 + lVar15);
          *(undefined4 *)(&stack0x00004694 + lVar15) = *(undefined4 *)(&stack0x000040f4 + lVar15);
          *(undefined4 *)(&stack0x00004698 + lVar15) = *(undefined4 *)(&stack0x000040f8 + lVar15);
          *(undefined4 *)(&stack0x0000469c + lVar15) = *(undefined4 *)(&stack0x000040fc + lVar15);
          *(undefined8 *)(&stack0x000046a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046a8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046d8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046e8 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004700 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004718 + lVar15) = &UNK_142f39d26;
          *(undefined8 *)(&stack0x00004720 + lVar15) = 0x15;
          *(undefined8 *)(&stack0x00004728 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004730 + lVar15) = *(undefined8 *)(&stack0x00004190 + lVar15);
          *(undefined8 *)(&stack0x00004738 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004740 + lVar15) = *(undefined8 *)(&stack0x000041a0 + lVar15);
          *(undefined8 *)(&stack0x00004748 + lVar15) = uVar21;
          *(undefined8 *)(&stack0x00004750 + lVar15) = uVar23;
          if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
             (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
            *(undefined8 *)(&stack0x00004788 + lVar15) = *(undefined8 *)(&stack0x00004588 + lVar15);
            *(undefined8 **)(&stack0x00004790 + lVar15) =
                 *(undefined8 **)(&stack0x00004590 + lVar15);
            pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
            if (pcVar11 != (code *)0x0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f70ff;
              (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
            }
            uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
            if (uVar24 != 0) {
              uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7120;
              pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
            }
          }
          *(undefined8 *)(&stack0x00004580 + lVar15) = 0;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7144;
          pub_142e32760(&stack0x000033a8 + lVar15,&stack0x00004530 + lVar15,0x224);
          *(undefined2 *)(&stack0x000035cd + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
          (&stack0x000035cf)[lVar15] = (&stack0x00004757)[lVar15];
          (&stack0x000035cc)[lVar15] = 2;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f717f;
          pdb_140eb2530(&stack0x00003f90 + lVar15,&UNK_142f3a0a9,0x43);
          lVar22 = *(longlong *)(&stack0x00003f90 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00004530 + lVar15) = *(undefined8 *)(&stack0x00003f98 + lVar15);
            *(undefined8 *)(&stack0x00004538 + lVar15) = *(undefined8 *)(&stack0x00003fa0 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00003560 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f71c0;
            pub_1406abac0(*(byte **)(&stack0x00003568 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00003560 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00003568 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
          *(undefined4 *)(&stack0x0000356c + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
          *(undefined4 *)(&stack0x00003570 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
          *(undefined4 *)(&stack0x00003574 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f71ee;
          pub_142e32760(&stack0x00003f90 + lVar15,&stack0x000033a8 + lVar15,0x228);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f71fd;
          pdb_140eccac0(&stack0x00004530 + lVar15,0);
          lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00003d30 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
            *(undefined8 *)(&stack0x00003d38 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00004160 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f723e;
            pub_1406abac0(*(byte **)(&stack0x00004168 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00004160 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00004168 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
          *(undefined4 *)(&stack0x0000416c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
          *(undefined4 *)(&stack0x00004170 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
          *(undefined4 *)(&stack0x00004174 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7268;
          pub_142e32760(puVar2,&stack0x00003f90 + lVar15,0x1f8);
          *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x000035b0 + lVar15);
          *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x000035b4 + lVar15);
          *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x000035b8 + lVar15);
          *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x000035bc + lVar15);
          *(undefined8 *)(&stack0x00004748 + lVar15) = *(undefined8 *)(&stack0x000035c0 + lVar15);
          *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f3a0ec;
          *(undefined8 *)(&stack0x00004730 + lVar15) = 0x15;
          *(ulonglong *)(&stack0x00004750 + lVar15) = *(ulonglong *)(&stack0x000041b0 + lVar15) | 4;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f72be;
          pdb_140ec70b0(&stack0x00004260 + lVar15,puVar2);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f72d8;
          pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00004260 + lVar15,0x2c8);
          *(undefined8 *)(&stack0x000042d8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042f0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004308 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004310 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004320 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004328 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004338 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004340 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004350 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004358 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004368 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004370 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004380 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004388 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004398 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043e8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004400 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004260 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004270 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004288 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004298 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042b0 + lVar15) = 5;
          *(undefined8 *)(&stack0x000042c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042d0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000042e8 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004300 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004318 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004330 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004348 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004360 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004378 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004390 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043a8 + lVar15) = 4;
          *(undefined8 *)(&stack0x000043c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043d8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043f0 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004408 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004410 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004418 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004430 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004448 + lVar15) = &UNK_142f39d3b;
          *(undefined8 *)(&stack0x00004450 + lVar15) = 0x1b;
          *(undefined8 *)(&stack0x00004458 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004468 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004478 + lVar15) = uVar21;
          *(undefined8 *)(&stack0x00004480 + lVar15) = uVar23;
          *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
          *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3a101;
          *(undefined8 *)(&stack0x00003d48 + lVar15) = 0x1b;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f74a3;
          pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
          if (*(longlong *)(&stack0x000043b8 + lVar15) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f74c4;
            pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000043b8 + lVar15) << 4,8);
          }
          *(undefined8 *)(&stack0x000043c8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          *(undefined8 *)(&stack0x000043b8 + lVar15) = *(undefined8 *)(&stack0x00004530 + lVar15);
          *(undefined8 *)(&stack0x000043c0 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
          *(undefined8 *)(&stack0x00004548 + lVar15) = *(undefined8 *)(&stack0x00004278 + lVar15);
          *(undefined8 *)(&stack0x00004550 + lVar15) = *(undefined8 *)(&stack0x00004280 + lVar15);
          *(undefined8 *)(&stack0x00004570 + lVar15) = *(undefined8 *)(&stack0x000042a0 + lVar15);
          *(undefined8 *)(&stack0x00004578 + lVar15) = *(undefined8 *)(&stack0x000042a8 + lVar15);
          *(undefined8 *)(&stack0x00004588 + lVar15) = *(undefined8 *)(&stack0x000042b8 + lVar15);
          *(undefined8 *)(&stack0x00004590 + lVar15) = *(undefined8 *)(&stack0x000042c0 + lVar15);
          *(undefined8 *)(&stack0x000045a8 + lVar15) = *puVar4;
          *(undefined8 *)(&stack0x000045b0 + lVar15) = *(undefined8 *)(&stack0x000042e0 + lVar15);
          *(undefined8 *)(&stack0x000045c0 + lVar15) = *(undefined8 *)(&stack0x000042f0 + lVar15);
          *(undefined8 *)(&stack0x000045c8 + lVar15) = *(undefined8 *)(&stack0x000042f8 + lVar15);
          *(undefined8 *)(&stack0x000045d8 + lVar15) = *(undefined8 *)(&stack0x00004308 + lVar15);
          *(undefined8 *)(&stack0x000045e0 + lVar15) = *(undefined8 *)(&stack0x00004310 + lVar15);
          *(undefined8 *)(&stack0x000045f0 + lVar15) = *(undefined8 *)(&stack0x00004320 + lVar15);
          *(undefined8 *)(&stack0x000045f8 + lVar15) = *(undefined8 *)(&stack0x00004328 + lVar15);
          *(undefined8 *)(&stack0x00004608 + lVar15) = *(undefined8 *)(&stack0x00004338 + lVar15);
          *(undefined8 *)(&stack0x00004610 + lVar15) = *(undefined8 *)(&stack0x00004340 + lVar15);
          *(undefined8 *)(&stack0x00004620 + lVar15) = *(undefined8 *)(&stack0x00004350 + lVar15);
          *(undefined8 *)(&stack0x00004628 + lVar15) = *(undefined8 *)(&stack0x00004358 + lVar15);
          *(undefined8 *)(&stack0x00004638 + lVar15) = *(undefined8 *)(&stack0x00004368 + lVar15);
          *(undefined8 *)(&stack0x00004640 + lVar15) = *(undefined8 *)(&stack0x00004370 + lVar15);
          *(undefined8 *)(&stack0x00004650 + lVar15) = *(undefined8 *)(&stack0x00004380 + lVar15);
          *(undefined8 *)(&stack0x00004658 + lVar15) = *(undefined8 *)(&stack0x00004388 + lVar15);
          *(undefined8 *)(&stack0x00004668 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004670 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004680 + lVar15) = *(undefined8 *)(&stack0x000043b0 + lVar15);
          *(undefined8 *)(&stack0x00004688 + lVar15) = *(undefined8 *)(&stack0x000043b8 + lVar15);
          *(undefined8 *)(&stack0x000046b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046f0 + lVar15) = *(undefined8 *)(&stack0x00004420 + lVar15);
          *(undefined8 *)(&stack0x000046f8 + lVar15) = *(undefined8 *)(&stack0x00004428 + lVar15);
          *(undefined8 *)(&stack0x00004708 + lVar15) = *(undefined8 *)(&stack0x00004438 + lVar15);
          *(undefined8 *)(&stack0x00004710 + lVar15) = *(undefined8 *)(&stack0x00004440 + lVar15);
          *(undefined4 *)(&stack0x00004530 + lVar15) = *(undefined4 *)(&stack0x00004260 + lVar15);
          *(undefined4 *)(&stack0x00004534 + lVar15) = *(undefined4 *)(&stack0x00004264 + lVar15);
          *(undefined4 *)(&stack0x00004538 + lVar15) = *(undefined4 *)(&stack0x00004268 + lVar15);
          *(undefined4 *)(&stack0x0000453c + lVar15) = *(undefined4 *)(&stack0x0000426c + lVar15);
          *(undefined8 *)(&stack0x00004540 + lVar15) = *(undefined8 *)(&stack0x00004270 + lVar15);
          *(undefined4 *)(&stack0x00004558 + lVar15) = *(undefined4 *)(&stack0x00004288 + lVar15);
          *(undefined4 *)(&stack0x0000455c + lVar15) = *(undefined4 *)(&stack0x0000428c + lVar15);
          *(undefined4 *)(&stack0x00004560 + lVar15) = *(undefined4 *)(&stack0x00004290 + lVar15);
          *(undefined4 *)(&stack0x00004564 + lVar15) = *(undefined4 *)(&stack0x00004294 + lVar15);
          *(undefined8 *)(&stack0x00004568 + lVar15) = *(undefined8 *)(&stack0x00004298 + lVar15);
          *(undefined8 *)(&stack0x00004580 + lVar15) = 5;
          *(undefined8 *)(&stack0x00004598 + lVar15) = 0;
          *(undefined8 *)(&stack0x000045a0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045b8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045d0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045e8 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004600 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004618 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004630 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004648 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004660 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004678 + lVar15) = 4;
          *(undefined4 *)(&stack0x00004690 + lVar15) = *(undefined4 *)(&stack0x000043c0 + lVar15);
          *(undefined4 *)(&stack0x00004694 + lVar15) = *(undefined4 *)(&stack0x000043c4 + lVar15);
          *(undefined4 *)(&stack0x00004698 + lVar15) = *(undefined4 *)(&stack0x000043c8 + lVar15);
          *(undefined4 *)(&stack0x0000469c + lVar15) = *(undefined4 *)(&stack0x000043cc + lVar15);
          *(undefined8 *)(&stack0x000046a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046a8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046d8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046e8 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004700 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004718 + lVar15) = &UNK_142f39d3b;
          *(undefined8 *)(&stack0x00004720 + lVar15) = 0x1b;
          *(undefined8 *)(&stack0x00004728 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004730 + lVar15) = *(undefined8 *)(&stack0x00004460 + lVar15);
          *(undefined8 *)(&stack0x00004738 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004740 + lVar15) = *(undefined8 *)(&stack0x00004470 + lVar15);
          *(undefined8 *)(&stack0x00004748 + lVar15) = uVar21;
          *(undefined8 *)(&stack0x00004750 + lVar15) = uVar23;
          if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
             (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
            *(undefined8 *)(&stack0x00004788 + lVar15) = *(undefined8 *)(&stack0x00004588 + lVar15);
            *(undefined8 **)(&stack0x00004790 + lVar15) =
                 *(undefined8 **)(&stack0x00004590 + lVar15);
            pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
            if (pcVar11 != (code *)0x0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7758;
              (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
            }
            uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
            if (uVar24 != 0) {
              uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7779;
              pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
            }
          }
          *(undefined8 *)(&stack0x00004580 + lVar15) = 0;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f779d;
          pub_142e32760(&stack0x00003180 + lVar15,&stack0x00004530 + lVar15,0x224);
          *(undefined2 *)(&stack0x000033a5 + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
          (&stack0x000033a7)[lVar15] = (&stack0x00004757)[lVar15];
          (&stack0x000033a4)[lVar15] = 2;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f77d8;
          pdb_140eb2530(&stack0x00004260 + lVar15,&UNK_142f3a11c,0x95);
          lVar22 = *(longlong *)(&stack0x00004260 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00004530 + lVar15) = *(undefined8 *)(&stack0x00004268 + lVar15);
            *(undefined8 *)(&stack0x00004538 + lVar15) = *(undefined8 *)(&stack0x00004270 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00003338 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7819;
            pub_1406abac0(*(byte **)(&stack0x00003340 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00003338 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00003340 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
          *(undefined4 *)(&stack0x00003344 + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
          *(undefined4 *)(&stack0x00003348 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
          *(undefined4 *)(&stack0x0000334c + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7847;
          pub_142e32760(&stack0x00004260 + lVar15,&stack0x00003180 + lVar15,0x228);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7856;
          pdb_140eccac0(&stack0x00004530 + lVar15,0);
          lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00003d30 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
            *(undefined8 *)(&stack0x00003d38 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00004430 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7897;
            pub_1406abac0(*(byte **)(&stack0x00004438 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00004430 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00004438 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
          *(undefined4 *)(&stack0x0000443c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
          *(undefined4 *)(&stack0x00004440 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
          *(undefined4 *)(&stack0x00004444 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f78c1;
          pub_142e32760(puVar2,&stack0x00004260 + lVar15,0x1f8);
          *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00003388 + lVar15);
          *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x0000338c + lVar15);
          *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00003390 + lVar15);
          *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x00003394 + lVar15);
          *(undefined4 *)(&stack0x00004748 + lVar15) = *(undefined4 *)(&stack0x00003398 + lVar15);
          *(undefined4 *)(&stack0x0000474c + lVar15) = *(undefined4 *)(&stack0x0000339c + lVar15);
          *(undefined4 *)(&stack0x00004750 + lVar15) = *(undefined4 *)(&stack0x000033a0 + lVar15);
          *(undefined4 *)(&stack0x00004754 + lVar15) = *(undefined4 *)(&stack0x000033a4 + lVar15);
          *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f3a1b1;
          *(undefined8 *)(&stack0x00004730 + lVar15) = 0x1b;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7905;
          pdb_140ec70b0(&stack0x00003f90 + lVar15,puVar2);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f791f;
          pub_142e32760(&stack0x00004260 + lVar15,&stack0x00003f90 + lVar15,0x2c8);
          *(undefined8 *)(&stack0x00004008 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004010 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004020 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004028 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004038 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004040 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004050 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004058 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004068 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004070 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004080 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004088 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004098 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040e8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004110 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004118 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004128 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004130 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003f90 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fa0 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fb8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fc8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fe0 + lVar15) = 5;
          *(undefined8 *)(&stack0x00003ff8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004000 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004018 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004030 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004048 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004060 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004078 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004090 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040a8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040d8 + lVar15) = 4;
          *(undefined8 *)(&stack0x000040f0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004100 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004108 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004120 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004138 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004140 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004148 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004160 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004178 + lVar15) = &UNK_142f39d56;
          *(undefined8 *)(&stack0x00004180 + lVar15) = 10;
          *(undefined8 *)(&stack0x00004188 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004198 + lVar15) = 0;
          *(undefined8 *)(&stack0x000041a8 + lVar15) = uVar21;
          *(undefined8 *)(&stack0x000041b0 + lVar15) = uVar23;
          *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
          *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3a1cc;
          *(undefined8 *)(&stack0x00003d48 + lVar15) = 10;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7aea;
          pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
          if (*(longlong *)(&stack0x000040e8 + lVar15) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7b0b;
            pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000040e8 + lVar15) << 4,8);
          }
          *(undefined8 *)(&stack0x000040f8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          *puVar3 = *(undefined8 *)(&stack0x00004530 + lVar15);
          *(undefined8 *)(&stack0x000040f0 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
          *(undefined8 *)(&stack0x00004548 + lVar15) = *(undefined8 *)(&stack0x00003fa8 + lVar15);
          *(undefined8 *)(&stack0x00004550 + lVar15) = *(undefined8 *)(&stack0x00003fb0 + lVar15);
          *(undefined8 *)(&stack0x00004570 + lVar15) = *(undefined8 *)(&stack0x00003fd0 + lVar15);
          *(undefined8 *)(&stack0x00004578 + lVar15) = *(undefined8 *)(&stack0x00003fd8 + lVar15);
          *(undefined8 *)(&stack0x00004588 + lVar15) = *(undefined8 *)(&stack0x00003fe8 + lVar15);
          *(undefined8 *)(&stack0x00004590 + lVar15) = *(undefined8 *)(&stack0x00003ff0 + lVar15);
          *(undefined8 *)(&stack0x000045a8 + lVar15) = *puVar1;
          *(undefined8 *)(&stack0x000045b0 + lVar15) = *(undefined8 *)(&stack0x00004010 + lVar15);
          *(undefined8 *)(&stack0x000045c0 + lVar15) = *(undefined8 *)(&stack0x00004020 + lVar15);
          *(undefined8 *)(&stack0x000045c8 + lVar15) = *(undefined8 *)(&stack0x00004028 + lVar15);
          *(undefined8 *)(&stack0x000045d8 + lVar15) = *(undefined8 *)(&stack0x00004038 + lVar15);
          *(undefined8 *)(&stack0x000045e0 + lVar15) = *(undefined8 *)(&stack0x00004040 + lVar15);
          *(undefined8 *)(&stack0x000045f0 + lVar15) = *(undefined8 *)(&stack0x00004050 + lVar15);
          *(undefined8 *)(&stack0x000045f8 + lVar15) = *(undefined8 *)(&stack0x00004058 + lVar15);
          *(undefined8 *)(&stack0x00004608 + lVar15) = *(undefined8 *)(&stack0x00004068 + lVar15);
          *(undefined8 *)(&stack0x00004610 + lVar15) = *(undefined8 *)(&stack0x00004070 + lVar15);
          *(undefined8 *)(&stack0x00004620 + lVar15) = *(undefined8 *)(&stack0x00004080 + lVar15);
          *(undefined8 *)(&stack0x00004628 + lVar15) = *(undefined8 *)(&stack0x00004088 + lVar15);
          *(undefined8 *)(&stack0x00004638 + lVar15) = *(undefined8 *)(&stack0x00004098 + lVar15);
          *(undefined8 *)(&stack0x00004640 + lVar15) = *(undefined8 *)(&stack0x000040a0 + lVar15);
          *(undefined8 *)(&stack0x00004650 + lVar15) = *(undefined8 *)(&stack0x000040b0 + lVar15);
          *(undefined8 *)(&stack0x00004658 + lVar15) = *(undefined8 *)(&stack0x000040b8 + lVar15);
          *(undefined8 *)(&stack0x00004668 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004670 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004680 + lVar15) = *(undefined8 *)(&stack0x000040e0 + lVar15);
          *(undefined8 *)(&stack0x00004688 + lVar15) = *(undefined8 *)(&stack0x000040e8 + lVar15);
          *(undefined8 *)(&stack0x000046b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046f0 + lVar15) = *(undefined8 *)(&stack0x00004150 + lVar15);
          *(undefined8 *)(&stack0x000046f8 + lVar15) = *(undefined8 *)(&stack0x00004158 + lVar15);
          *(undefined8 *)(&stack0x00004708 + lVar15) = *(undefined8 *)(&stack0x00004168 + lVar15);
          *(undefined8 *)(&stack0x00004710 + lVar15) = *(undefined8 *)(&stack0x00004170 + lVar15);
          *(undefined4 *)(&stack0x00004530 + lVar15) = *(undefined4 *)(&stack0x00003f90 + lVar15);
          *(undefined4 *)(&stack0x00004534 + lVar15) = *(undefined4 *)(&stack0x00003f94 + lVar15);
          *(undefined4 *)(&stack0x00004538 + lVar15) = *(undefined4 *)(&stack0x00003f98 + lVar15);
          *(undefined4 *)(&stack0x0000453c + lVar15) = *(undefined4 *)(&stack0x00003f9c + lVar15);
          *(undefined8 *)(&stack0x00004540 + lVar15) = *(undefined8 *)(&stack0x00003fa0 + lVar15);
          *(undefined4 *)(&stack0x00004558 + lVar15) = *(undefined4 *)(&stack0x00003fb8 + lVar15);
          *(undefined4 *)(&stack0x0000455c + lVar15) = *(undefined4 *)(&stack0x00003fbc + lVar15);
          *(undefined4 *)(&stack0x00004560 + lVar15) = *(undefined4 *)(&stack0x00003fc0 + lVar15);
          *(undefined4 *)(&stack0x00004564 + lVar15) = *(undefined4 *)(&stack0x00003fc4 + lVar15);
          *(undefined8 *)(&stack0x00004568 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004580 + lVar15) = 5;
          *(undefined8 *)(&stack0x00004598 + lVar15) = 0;
          *(undefined8 *)(&stack0x000045a0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045b8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045d0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045e8 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004600 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004618 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004630 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004648 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004660 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004678 + lVar15) = 4;
          *(undefined4 *)(&stack0x00004690 + lVar15) = *(undefined4 *)(&stack0x000040f0 + lVar15);
          *(undefined4 *)(&stack0x00004694 + lVar15) = *(undefined4 *)(&stack0x000040f4 + lVar15);
          *(undefined4 *)(&stack0x00004698 + lVar15) = *(undefined4 *)(&stack0x000040f8 + lVar15);
          *(undefined4 *)(&stack0x0000469c + lVar15) = *(undefined4 *)(&stack0x000040fc + lVar15);
          *(undefined8 *)(&stack0x000046a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046a8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046d8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046e8 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004700 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004718 + lVar15) = &UNK_142f39d56;
          *(undefined8 *)(&stack0x00004720 + lVar15) = 10;
          *(undefined8 *)(&stack0x00004728 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004738 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004748 + lVar15) = uVar21;
          *(undefined8 *)(&stack0x00004750 + lVar15) = uVar23;
          if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
             (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
            *(undefined8 *)(&stack0x00004788 + lVar15) = *(undefined8 *)(&stack0x00004588 + lVar15);
            *(undefined8 **)(&stack0x00004790 + lVar15) =
                 *(undefined8 **)(&stack0x00004590 + lVar15);
            pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
            if (pcVar11 != (code *)0x0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7d6d;
              (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
            }
            uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
            if (uVar24 != 0) {
              uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7d8e;
              pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
            }
          }
          *(undefined8 *)(&stack0x00004580 + lVar15) = 0;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7db2;
          pub_142e32760(&stack0x00002f58 + lVar15,&stack0x00004530 + lVar15,0x224);
          *(undefined2 *)(&stack0x0000317d + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
          (&stack0x0000317f)[lVar15] = (&stack0x00004757)[lVar15];
          (&stack0x0000317c)[lVar15] = 2;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7ded;
          pdb_140eb2530(&stack0x00003f90 + lVar15,&UNK_142f3a1d6,0x2e);
          lVar22 = *(longlong *)(&stack0x00003f90 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00004530 + lVar15) = *(undefined8 *)(&stack0x00003f98 + lVar15);
            *(undefined8 *)(&stack0x00004538 + lVar15) = *(undefined8 *)(&stack0x00003fa0 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00003110 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7e2e;
            pub_1406abac0(*(byte **)(&stack0x00003118 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00003110 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00003118 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
          *(undefined4 *)(&stack0x0000311c + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
          *(undefined4 *)(&stack0x00003120 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
          *(undefined4 *)(&stack0x00003124 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7e5c;
          pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00002f58 + lVar15,0x228);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7e6b;
          pdb_140eccac0(&stack0x00004530 + lVar15,0);
          lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00003d30 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
            *(undefined8 *)(&stack0x00003d38 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00004160 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7eac;
            pub_1406abac0(*(byte **)(&stack0x00004168 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00004160 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00004168 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
          *(undefined4 *)(&stack0x0000416c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
          *(undefined4 *)(&stack0x00004170 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
          *(undefined4 *)(&stack0x00004174 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7ed6;
          pub_142e32760(puVar2,&stack0x00003f90 + lVar15,0x1f8);
          *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00003160 + lVar15);
          *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x00003164 + lVar15);
          *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00003168 + lVar15);
          *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x0000316c + lVar15);
          *(undefined4 *)(&stack0x00004748 + lVar15) = *(undefined4 *)(&stack0x00003170 + lVar15);
          *(undefined4 *)(&stack0x0000474c + lVar15) = *(undefined4 *)(&stack0x00003174 + lVar15);
          *(undefined4 *)(&stack0x00004750 + lVar15) = *(undefined4 *)(&stack0x00003178 + lVar15);
          *(undefined4 *)(&stack0x00004754 + lVar15) = *(undefined4 *)(&stack0x0000317c + lVar15);
          *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f3a204;
          *(undefined8 *)(&stack0x00004730 + lVar15) = 10;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7f1a;
          pdb_140ec70b0(&stack0x00004260 + lVar15,puVar2);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f7f34;
          pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00004260 + lVar15,0x2c8);
          *(undefined8 *)(&stack0x000042d8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042f0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004308 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004310 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004320 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004328 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004338 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004340 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004350 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004358 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004368 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004370 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004380 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004388 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004398 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043e8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004400 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004260 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004270 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004288 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004298 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042b0 + lVar15) = 5;
          *(undefined8 *)(&stack0x000042c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042d0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000042e8 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004300 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004318 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004330 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004348 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004360 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004378 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004390 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043a8 + lVar15) = 4;
          *(undefined8 *)(&stack0x000043c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043d8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043f0 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004408 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004410 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004418 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004430 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004448 + lVar15) = &UNK_142f39d60;
          *(undefined8 *)(&stack0x00004450 + lVar15) = 0x10;
          *(undefined8 *)(&stack0x00004458 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004468 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004478 + lVar15) = uVar21;
          *(undefined8 *)(&stack0x00004480 + lVar15) = uVar23;
          *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
          *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3a20e;
          *(undefined8 *)(&stack0x00003d48 + lVar15) = 0x10;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f80ff;
          pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
          if (*(longlong *)(&stack0x000043b8 + lVar15) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f8120;
            pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000043b8 + lVar15) << 4,8);
          }
          *(undefined8 *)(&stack0x000043c8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          *(undefined8 *)(&stack0x000043b8 + lVar15) = *(undefined8 *)(&stack0x00004530 + lVar15);
          *(undefined8 *)(&stack0x000043c0 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
          *(undefined8 *)(&stack0x00004548 + lVar15) = *(undefined8 *)(&stack0x00004278 + lVar15);
          *(undefined8 *)(&stack0x00004550 + lVar15) = *(undefined8 *)(&stack0x00004280 + lVar15);
          *(undefined8 *)(&stack0x00004570 + lVar15) = *(undefined8 *)(&stack0x000042a0 + lVar15);
          *(undefined8 *)(&stack0x00004578 + lVar15) = *(undefined8 *)(&stack0x000042a8 + lVar15);
          *(undefined8 *)(&stack0x00004588 + lVar15) = *(undefined8 *)(&stack0x000042b8 + lVar15);
          *(undefined8 *)(&stack0x00004590 + lVar15) = *(undefined8 *)(&stack0x000042c0 + lVar15);
          *(undefined8 *)(&stack0x000045a8 + lVar15) = *puVar4;
          *(undefined8 *)(&stack0x000045b0 + lVar15) = *(undefined8 *)(&stack0x000042e0 + lVar15);
          *(undefined8 *)(&stack0x000045c0 + lVar15) = *(undefined8 *)(&stack0x000042f0 + lVar15);
          *(undefined8 *)(&stack0x000045c8 + lVar15) = *(undefined8 *)(&stack0x000042f8 + lVar15);
          *(undefined8 *)(&stack0x000045d8 + lVar15) = *(undefined8 *)(&stack0x00004308 + lVar15);
          *(undefined8 *)(&stack0x000045e0 + lVar15) = *(undefined8 *)(&stack0x00004310 + lVar15);
          *(undefined8 *)(&stack0x000045f0 + lVar15) = *(undefined8 *)(&stack0x00004320 + lVar15);
          *(undefined8 *)(&stack0x000045f8 + lVar15) = *(undefined8 *)(&stack0x00004328 + lVar15);
          *(undefined8 *)(&stack0x00004608 + lVar15) = *(undefined8 *)(&stack0x00004338 + lVar15);
          *(undefined8 *)(&stack0x00004610 + lVar15) = *(undefined8 *)(&stack0x00004340 + lVar15);
          *(undefined8 *)(&stack0x00004620 + lVar15) = *(undefined8 *)(&stack0x00004350 + lVar15);
          *(undefined8 *)(&stack0x00004628 + lVar15) = *(undefined8 *)(&stack0x00004358 + lVar15);
          *(undefined8 *)(&stack0x00004638 + lVar15) = *(undefined8 *)(&stack0x00004368 + lVar15);
          *(undefined8 *)(&stack0x00004640 + lVar15) = *(undefined8 *)(&stack0x00004370 + lVar15);
          *(undefined8 *)(&stack0x00004650 + lVar15) = *(undefined8 *)(&stack0x00004380 + lVar15);
          *(undefined8 *)(&stack0x00004658 + lVar15) = *(undefined8 *)(&stack0x00004388 + lVar15);
          *(undefined8 *)(&stack0x00004668 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004670 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004680 + lVar15) = *(undefined8 *)(&stack0x000043b0 + lVar15);
          *(undefined8 *)(&stack0x00004688 + lVar15) = *(undefined8 *)(&stack0x000043b8 + lVar15);
          *(undefined8 *)(&stack0x000046b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046f0 + lVar15) = *(undefined8 *)(&stack0x00004420 + lVar15);
          *(undefined8 *)(&stack0x000046f8 + lVar15) = *(undefined8 *)(&stack0x00004428 + lVar15);
          *(undefined8 *)(&stack0x00004708 + lVar15) = *(undefined8 *)(&stack0x00004438 + lVar15);
          *(undefined8 *)(&stack0x00004710 + lVar15) = *(undefined8 *)(&stack0x00004440 + lVar15);
          *(undefined4 *)(&stack0x00004530 + lVar15) = *(undefined4 *)(&stack0x00004260 + lVar15);
          *(undefined4 *)(&stack0x00004534 + lVar15) = *(undefined4 *)(&stack0x00004264 + lVar15);
          *(undefined4 *)(&stack0x00004538 + lVar15) = *(undefined4 *)(&stack0x00004268 + lVar15);
          *(undefined4 *)(&stack0x0000453c + lVar15) = *(undefined4 *)(&stack0x0000426c + lVar15);
          *(undefined8 *)(&stack0x00004540 + lVar15) = *(undefined8 *)(&stack0x00004270 + lVar15);
          *(undefined4 *)(&stack0x00004558 + lVar15) = *(undefined4 *)(&stack0x00004288 + lVar15);
          *(undefined4 *)(&stack0x0000455c + lVar15) = *(undefined4 *)(&stack0x0000428c + lVar15);
          *(undefined4 *)(&stack0x00004560 + lVar15) = *(undefined4 *)(&stack0x00004290 + lVar15);
          *(undefined4 *)(&stack0x00004564 + lVar15) = *(undefined4 *)(&stack0x00004294 + lVar15);
          *(undefined8 *)(&stack0x00004568 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004580 + lVar15) = 5;
          *(undefined8 *)(&stack0x00004598 + lVar15) = 0;
          *(undefined8 *)(&stack0x000045a0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045b8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045d0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045e8 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004600 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004618 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004630 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004648 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004660 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004678 + lVar15) = 4;
          *(undefined4 *)(&stack0x00004690 + lVar15) = *(undefined4 *)(&stack0x000043c0 + lVar15);
          *(undefined4 *)(&stack0x00004694 + lVar15) = *(undefined4 *)(&stack0x000043c4 + lVar15);
          *(undefined4 *)(&stack0x00004698 + lVar15) = *(undefined4 *)(&stack0x000043c8 + lVar15);
          *(undefined4 *)(&stack0x0000469c + lVar15) = *(undefined4 *)(&stack0x000043cc + lVar15);
          *(undefined8 *)(&stack0x000046a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046a8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046d8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046e8 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004700 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004718 + lVar15) = &UNK_142f39d60;
          *(undefined8 *)(&stack0x00004720 + lVar15) = 0x10;
          *(undefined8 *)(&stack0x00004728 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004738 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004748 + lVar15) = uVar21;
          *(undefined8 *)(&stack0x00004750 + lVar15) = uVar23;
          if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
             (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
            *(undefined8 *)(&stack0x00004788 + lVar15) = *(undefined8 *)(&stack0x00004588 + lVar15);
            *(undefined8 **)(&stack0x00004790 + lVar15) =
                 *(undefined8 **)(&stack0x00004590 + lVar15);
            pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
            if (pcVar11 != (code *)0x0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f8395;
              (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
            }
            uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
            if (uVar24 != 0) {
              uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f83b6;
              pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
            }
          }
          *(undefined8 *)(&stack0x00004580 + lVar15) = 0;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f83da;
          pub_142e32760(&stack0x00002d30 + lVar15,&stack0x00004530 + lVar15,0x224);
          *(undefined2 *)(&stack0x00002f55 + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
          (&stack0x00002f57)[lVar15] = (&stack0x00004757)[lVar15];
          (&stack0x00002f54)[lVar15] = 2;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f8415;
          pdb_140eb2530(&stack0x00004260 + lVar15,&UNK_142f3a21e,0x2b);
          lVar22 = *(longlong *)(&stack0x00004260 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00004530 + lVar15) = *(undefined8 *)(&stack0x00004268 + lVar15);
            *(undefined8 *)(&stack0x00004538 + lVar15) = *(undefined8 *)(&stack0x00004270 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00002ee8 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f8456;
            pub_1406abac0(*(byte **)(&stack0x00002ef0 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00002ee8 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00002ef0 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
          *(undefined4 *)(&stack0x00002ef4 + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
          *(undefined4 *)(&stack0x00002ef8 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
          *(undefined4 *)(&stack0x00002efc + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f8484;
          pub_142e32760(&stack0x00004260 + lVar15,&stack0x00002d30 + lVar15,0x228);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f8493;
          pdb_140eccac0(&stack0x00004530 + lVar15,0);
          lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00003d30 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
            *(undefined8 *)(&stack0x00003d38 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00004430 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f84d4;
            pub_1406abac0(*(byte **)(&stack0x00004438 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00004430 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00004438 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
          *(undefined4 *)(&stack0x0000443c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
          *(undefined4 *)(&stack0x00004440 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
          *(undefined4 *)(&stack0x00004444 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f84fe;
          pub_142e32760(puVar2,&stack0x00004260 + lVar15,0x1f8);
          *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00002f38 + lVar15);
          *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x00002f3c + lVar15);
          *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00002f40 + lVar15);
          *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x00002f44 + lVar15);
          *(undefined4 *)(&stack0x00004748 + lVar15) = *(undefined4 *)(&stack0x00002f48 + lVar15);
          *(undefined4 *)(&stack0x0000474c + lVar15) = *(undefined4 *)(&stack0x00002f4c + lVar15);
          *(undefined4 *)(&stack0x00004750 + lVar15) = *(undefined4 *)(&stack0x00002f50 + lVar15);
          *(undefined4 *)(&stack0x00004754 + lVar15) = *(undefined4 *)(&stack0x00002f54 + lVar15);
          *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f3a249;
          *(undefined8 *)(&stack0x00004730 + lVar15) = 0x10;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f8542;
          pdb_140ec70b0(&stack0x00003f90 + lVar15,puVar2);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f855c;
          pub_142e32760(&stack0x00004260 + lVar15,&stack0x00003f90 + lVar15,0x2c8);
          *(undefined8 *)(&stack0x00004008 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004010 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004020 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004028 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004038 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004040 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004050 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004058 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004068 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004070 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004080 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004088 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004098 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040e8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004110 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004118 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004128 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004130 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003f90 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fa0 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fb8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fc8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fe0 + lVar15) = 5;
          *(undefined8 *)(&stack0x00003ff8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004000 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004018 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004030 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004048 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004060 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004078 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004090 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040a8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040d8 + lVar15) = 4;
          *(undefined8 *)(&stack0x000040f0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004100 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004108 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004120 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004138 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004140 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004148 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004160 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004178 + lVar15) = &UNK_142f39d70;
          *(undefined8 *)(&stack0x00004180 + lVar15) = 0x10;
          *(undefined8 *)(&stack0x00004188 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004198 + lVar15) = 0;
          *(undefined8 *)(&stack0x000041a8 + lVar15) = uVar21;
          *(undefined8 *)(&stack0x000041b0 + lVar15) = uVar23;
          *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
          *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3a259;
          *(undefined8 *)(&stack0x00003d48 + lVar15) = 0x10;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f8727;
          pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
          if (*(longlong *)(&stack0x000040e8 + lVar15) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f8748;
            pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000040e8 + lVar15) << 4,8);
          }
          *(undefined8 *)(&stack0x000040f8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          *puVar3 = *(undefined8 *)(&stack0x00004530 + lVar15);
          *(undefined8 *)(&stack0x000040f0 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
          *(undefined8 *)(&stack0x00004548 + lVar15) = *(undefined8 *)(&stack0x00003fa8 + lVar15);
          *(undefined8 *)(&stack0x00004550 + lVar15) = *(undefined8 *)(&stack0x00003fb0 + lVar15);
          *(undefined8 *)(&stack0x00004570 + lVar15) = *(undefined8 *)(&stack0x00003fd0 + lVar15);
          *(undefined8 *)(&stack0x00004578 + lVar15) = *(undefined8 *)(&stack0x00003fd8 + lVar15);
          *(undefined8 *)(&stack0x00004588 + lVar15) = *(undefined8 *)(&stack0x00003fe8 + lVar15);
          *(undefined8 *)(&stack0x00004590 + lVar15) = *(undefined8 *)(&stack0x00003ff0 + lVar15);
          *(undefined8 *)(&stack0x000045a8 + lVar15) = *puVar1;
          *(undefined8 *)(&stack0x000045b0 + lVar15) = *(undefined8 *)(&stack0x00004010 + lVar15);
          *(undefined8 *)(&stack0x000045c0 + lVar15) = *(undefined8 *)(&stack0x00004020 + lVar15);
          *(undefined8 *)(&stack0x000045c8 + lVar15) = *(undefined8 *)(&stack0x00004028 + lVar15);
          *(undefined8 *)(&stack0x000045d8 + lVar15) = *(undefined8 *)(&stack0x00004038 + lVar15);
          *(undefined8 *)(&stack0x000045e0 + lVar15) = *(undefined8 *)(&stack0x00004040 + lVar15);
          *(undefined8 *)(&stack0x000045f0 + lVar15) = *(undefined8 *)(&stack0x00004050 + lVar15);
          *(undefined8 *)(&stack0x000045f8 + lVar15) = *(undefined8 *)(&stack0x00004058 + lVar15);
          *(undefined8 *)(&stack0x00004608 + lVar15) = *(undefined8 *)(&stack0x00004068 + lVar15);
          *(undefined8 *)(&stack0x00004610 + lVar15) = *(undefined8 *)(&stack0x00004070 + lVar15);
          *(undefined8 *)(&stack0x00004620 + lVar15) = *(undefined8 *)(&stack0x00004080 + lVar15);
          *(undefined8 *)(&stack0x00004628 + lVar15) = *(undefined8 *)(&stack0x00004088 + lVar15);
          *(undefined8 *)(&stack0x00004638 + lVar15) = *(undefined8 *)(&stack0x00004098 + lVar15);
          *(undefined8 *)(&stack0x00004640 + lVar15) = *(undefined8 *)(&stack0x000040a0 + lVar15);
          *(undefined8 *)(&stack0x00004650 + lVar15) = *(undefined8 *)(&stack0x000040b0 + lVar15);
          *(undefined8 *)(&stack0x00004658 + lVar15) = *(undefined8 *)(&stack0x000040b8 + lVar15);
          *(undefined8 *)(&stack0x00004668 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004670 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004680 + lVar15) = *(undefined8 *)(&stack0x000040e0 + lVar15);
          *(undefined8 *)(&stack0x00004688 + lVar15) = *(undefined8 *)(&stack0x000040e8 + lVar15);
          *(undefined8 *)(&stack0x000046b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046f0 + lVar15) = *(undefined8 *)(&stack0x00004150 + lVar15);
          *(undefined8 *)(&stack0x000046f8 + lVar15) = *(undefined8 *)(&stack0x00004158 + lVar15);
          *(undefined8 *)(&stack0x00004708 + lVar15) = *(undefined8 *)(&stack0x00004168 + lVar15);
          *(undefined8 *)(&stack0x00004710 + lVar15) = *(undefined8 *)(&stack0x00004170 + lVar15);
          *(undefined4 *)(&stack0x00004530 + lVar15) = *(undefined4 *)(&stack0x00003f90 + lVar15);
          *(undefined4 *)(&stack0x00004534 + lVar15) = *(undefined4 *)(&stack0x00003f94 + lVar15);
          *(undefined4 *)(&stack0x00004538 + lVar15) = *(undefined4 *)(&stack0x00003f98 + lVar15);
          *(undefined4 *)(&stack0x0000453c + lVar15) = *(undefined4 *)(&stack0x00003f9c + lVar15);
          *(undefined8 *)(&stack0x00004540 + lVar15) = *(undefined8 *)(&stack0x00003fa0 + lVar15);
          *(undefined4 *)(&stack0x00004558 + lVar15) = *(undefined4 *)(&stack0x00003fb8 + lVar15);
          *(undefined4 *)(&stack0x0000455c + lVar15) = *(undefined4 *)(&stack0x00003fbc + lVar15);
          *(undefined4 *)(&stack0x00004560 + lVar15) = *(undefined4 *)(&stack0x00003fc0 + lVar15);
          *(undefined4 *)(&stack0x00004564 + lVar15) = *(undefined4 *)(&stack0x00003fc4 + lVar15);
          *(undefined8 *)(&stack0x00004568 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004580 + lVar15) = 5;
          *(undefined8 *)(&stack0x00004598 + lVar15) = 0;
          *(undefined8 *)(&stack0x000045a0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045b8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045d0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045e8 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004600 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004618 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004630 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004648 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004660 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004678 + lVar15) = 4;
          *(undefined4 *)(&stack0x00004690 + lVar15) = *(undefined4 *)(&stack0x000040f0 + lVar15);
          *(undefined4 *)(&stack0x00004694 + lVar15) = *(undefined4 *)(&stack0x000040f4 + lVar15);
          *(undefined4 *)(&stack0x00004698 + lVar15) = *(undefined4 *)(&stack0x000040f8 + lVar15);
          *(undefined4 *)(&stack0x0000469c + lVar15) = *(undefined4 *)(&stack0x000040fc + lVar15);
          *(undefined8 *)(&stack0x000046a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046a8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046d8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046e8 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004700 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004718 + lVar15) = &UNK_142f39d70;
          *(undefined8 *)(&stack0x00004720 + lVar15) = 0x10;
          *(undefined8 *)(&stack0x00004728 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004738 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004748 + lVar15) = uVar21;
          *(undefined8 *)(&stack0x00004750 + lVar15) = uVar23;
          if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
             (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
            *(undefined8 *)(&stack0x00004788 + lVar15) = *(undefined8 *)(&stack0x00004588 + lVar15);
            *(undefined8 **)(&stack0x00004790 + lVar15) =
                 *(undefined8 **)(&stack0x00004590 + lVar15);
            pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
            if (pcVar11 != (code *)0x0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f89aa;
              (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
            }
            uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
            if (uVar24 != 0) {
              uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f89cb;
              pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
            }
          }
          *(undefined8 *)(&stack0x00004580 + lVar15) = 0;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f89ef;
          pub_142e32760(&stack0x00002b08 + lVar15,&stack0x00004530 + lVar15,0x224);
          *(undefined2 *)(&stack0x00002d2d + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
          (&stack0x00002d2f)[lVar15] = (&stack0x00004757)[lVar15];
          (&stack0x00002d2c)[lVar15] = 2;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f8a2a;
          pdb_140eb2530(&stack0x00003f90 + lVar15,&UNK_142f3a269,0x39);
          lVar22 = *(longlong *)(&stack0x00003f90 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00004530 + lVar15) = *(undefined8 *)(&stack0x00003f98 + lVar15);
            *(undefined8 *)(&stack0x00004538 + lVar15) = *(undefined8 *)(&stack0x00003fa0 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00002cc0 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f8a6b;
            pub_1406abac0(*(byte **)(&stack0x00002cc8 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00002cc0 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00002cc8 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
          *(undefined4 *)(&stack0x00002ccc + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
          *(undefined4 *)(&stack0x00002cd0 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
          *(undefined4 *)(&stack0x00002cd4 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f8a99;
          pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00002b08 + lVar15,0x228);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f8aa8;
          pdb_140eccac0(&stack0x00004530 + lVar15,0);
          lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00003d30 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
            *(undefined8 *)(&stack0x00003d38 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00004160 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f8ae9;
            pub_1406abac0(*(byte **)(&stack0x00004168 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00004160 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00004168 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
          *(undefined4 *)(&stack0x0000416c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
          *(undefined4 *)(&stack0x00004170 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
          *(undefined4 *)(&stack0x00004174 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f8b17;
          pub_142e32760(&stack0x00003d30 + lVar15,&stack0x00003f90 + lVar15,0x1f8);
          *(undefined4 *)(&stack0x00003f38 + lVar15) = *(undefined4 *)(&stack0x00002d10 + lVar15);
          *(undefined4 *)(&stack0x00003f3c + lVar15) = *(undefined4 *)(&stack0x00002d14 + lVar15);
          *(undefined4 *)(&stack0x00003f40 + lVar15) = *(undefined4 *)(&stack0x00002d18 + lVar15);
          *(undefined4 *)(&stack0x00003f44 + lVar15) = *(undefined4 *)(&stack0x00002d1c + lVar15);
          *(undefined4 *)(&stack0x00003f48 + lVar15) = *(undefined4 *)(&stack0x00002d20 + lVar15);
          *(undefined4 *)(&stack0x00003f4c + lVar15) = *(undefined4 *)(&stack0x00002d24 + lVar15);
          *(undefined4 *)(&stack0x00003f50 + lVar15) = *(undefined4 *)(&stack0x00002d28 + lVar15);
          *(undefined4 *)(&stack0x00003f54 + lVar15) = *(undefined4 *)(&stack0x00002d2c + lVar15);
          *(undefined **)(&stack0x00003f28 + lVar15) = &UNK_142f3a2a2;
          *(undefined8 *)(&stack0x00003f30 + lVar15) = 0x10;
          lVar22 = *(longlong *)(&stack0x00003e68 + lVar15);
          if (lVar22 == *(longlong *)(&stack0x00003e58 + lVar15)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f8b68;
            pdb_142d7e830(&stack0x00003e58 + lVar15);
          }
          lVar25 = *(longlong *)(&stack0x00003e60 + lVar15);
          *(undefined **)(lVar25 + lVar22 * 0x18) = &UNK_142f3a2b2;
          *(undefined8 *)(lVar25 + 8 + lVar22 * 0x18) = 0xf;
          *(undefined1 *)(lVar25 + 0x10 + lVar22 * 0x18) = 0;
          *(longlong *)(&stack0x00003e68 + lVar15) = lVar22 + 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f8bac;
          pub_142e32760(puVar2,&stack0x00003d30 + lVar15,0x228);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f8bbc;
          pdb_140ec70b0(&stack0x00004260 + lVar15,puVar2);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f8bd6;
          pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00004260 + lVar15,0x2c8);
          *(undefined8 *)(&stack0x000042d8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042f0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004308 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004310 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004320 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004328 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004338 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004340 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004350 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004358 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004368 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004370 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004380 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004388 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004398 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043e8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004400 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004260 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004270 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004288 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004298 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042b0 + lVar15) = 5;
          *(undefined8 *)(&stack0x000042c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042d0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000042e8 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004300 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004318 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004330 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004348 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004360 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004378 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004390 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043a8 + lVar15) = 4;
          *(undefined8 *)(&stack0x000043c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043d8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043f0 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004408 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004410 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004418 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004430 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004448 + lVar15) = &UNK_142f39d80;
          *(undefined8 *)(&stack0x00004450 + lVar15) = 0x10;
          *(undefined8 *)(&stack0x00004458 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004468 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004478 + lVar15) = uVar21;
          *(undefined8 *)(&stack0x00004480 + lVar15) = uVar23;
          *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
          *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3a2c1;
          *(undefined8 *)(&stack0x00003d48 + lVar15) = 0x10;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f8da1;
          pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
          if (*(longlong *)(&stack0x000043b8 + lVar15) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f8dc2;
            pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000043b8 + lVar15) << 4,8);
          }
          *(undefined8 *)(&stack0x000043c8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          *(undefined8 *)(&stack0x000043b8 + lVar15) = *(undefined8 *)(&stack0x00004530 + lVar15);
          *(undefined8 *)(&stack0x000043c0 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
          *(undefined8 *)(&stack0x00004548 + lVar15) = *(undefined8 *)(&stack0x00004278 + lVar15);
          *(undefined8 *)(&stack0x00004550 + lVar15) = *(undefined8 *)(&stack0x00004280 + lVar15);
          *(undefined8 *)(&stack0x00004570 + lVar15) = *(undefined8 *)(&stack0x000042a0 + lVar15);
          *(undefined8 *)(&stack0x00004578 + lVar15) = *(undefined8 *)(&stack0x000042a8 + lVar15);
          *(undefined8 *)(&stack0x00004588 + lVar15) = *(undefined8 *)(&stack0x000042b8 + lVar15);
          *(undefined8 *)(&stack0x00004590 + lVar15) = *(undefined8 *)(&stack0x000042c0 + lVar15);
          *(undefined8 *)(&stack0x000045a8 + lVar15) = *puVar4;
          *(undefined8 *)(&stack0x000045b0 + lVar15) = *(undefined8 *)(&stack0x000042e0 + lVar15);
          *(undefined8 *)(&stack0x000045c0 + lVar15) = *(undefined8 *)(&stack0x000042f0 + lVar15);
          *(undefined8 *)(&stack0x000045c8 + lVar15) = *(undefined8 *)(&stack0x000042f8 + lVar15);
          *(undefined8 *)(&stack0x000045d8 + lVar15) = *(undefined8 *)(&stack0x00004308 + lVar15);
          *(undefined8 *)(&stack0x000045e0 + lVar15) = *(undefined8 *)(&stack0x00004310 + lVar15);
          *(undefined8 *)(&stack0x000045f0 + lVar15) = *(undefined8 *)(&stack0x00004320 + lVar15);
          *(undefined8 *)(&stack0x000045f8 + lVar15) = *(undefined8 *)(&stack0x00004328 + lVar15);
          *(undefined8 *)(&stack0x00004608 + lVar15) = *(undefined8 *)(&stack0x00004338 + lVar15);
          *(undefined8 *)(&stack0x00004610 + lVar15) = *(undefined8 *)(&stack0x00004340 + lVar15);
          *(undefined8 *)(&stack0x00004620 + lVar15) = *(undefined8 *)(&stack0x00004350 + lVar15);
          *(undefined8 *)(&stack0x00004628 + lVar15) = *(undefined8 *)(&stack0x00004358 + lVar15);
          *(undefined8 *)(&stack0x00004638 + lVar15) = *(undefined8 *)(&stack0x00004368 + lVar15);
          *(undefined8 *)(&stack0x00004640 + lVar15) = *(undefined8 *)(&stack0x00004370 + lVar15);
          *(undefined8 *)(&stack0x00004650 + lVar15) = *(undefined8 *)(&stack0x00004380 + lVar15);
          *(undefined8 *)(&stack0x00004658 + lVar15) = *(undefined8 *)(&stack0x00004388 + lVar15);
          *(undefined8 *)(&stack0x00004668 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004670 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004680 + lVar15) = *(undefined8 *)(&stack0x000043b0 + lVar15);
          *(undefined8 *)(&stack0x00004688 + lVar15) = *(undefined8 *)(&stack0x000043b8 + lVar15);
          *(undefined8 *)(&stack0x000046b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046f0 + lVar15) = *(undefined8 *)(&stack0x00004420 + lVar15);
          *(undefined8 *)(&stack0x000046f8 + lVar15) = *(undefined8 *)(&stack0x00004428 + lVar15);
          *(undefined8 *)(&stack0x00004708 + lVar15) = *(undefined8 *)(&stack0x00004438 + lVar15);
          *(undefined8 *)(&stack0x00004710 + lVar15) = *(undefined8 *)(&stack0x00004440 + lVar15);
          *(undefined4 *)(&stack0x00004530 + lVar15) = *(undefined4 *)(&stack0x00004260 + lVar15);
          *(undefined4 *)(&stack0x00004534 + lVar15) = *(undefined4 *)(&stack0x00004264 + lVar15);
          *(undefined4 *)(&stack0x00004538 + lVar15) = *(undefined4 *)(&stack0x00004268 + lVar15);
          *(undefined4 *)(&stack0x0000453c + lVar15) = *(undefined4 *)(&stack0x0000426c + lVar15);
          *(undefined8 *)(&stack0x00004540 + lVar15) = *(undefined8 *)(&stack0x00004270 + lVar15);
          *(undefined4 *)(&stack0x00004558 + lVar15) = *(undefined4 *)(&stack0x00004288 + lVar15);
          *(undefined4 *)(&stack0x0000455c + lVar15) = *(undefined4 *)(&stack0x0000428c + lVar15);
          *(undefined4 *)(&stack0x00004560 + lVar15) = *(undefined4 *)(&stack0x00004290 + lVar15);
          *(undefined4 *)(&stack0x00004564 + lVar15) = *(undefined4 *)(&stack0x00004294 + lVar15);
          *(undefined8 *)(&stack0x00004568 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004580 + lVar15) = 5;
          *(undefined8 *)(&stack0x00004598 + lVar15) = 0;
          *(undefined8 *)(&stack0x000045a0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045b8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045d0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045e8 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004600 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004618 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004630 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004648 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004660 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004678 + lVar15) = 4;
          *(undefined4 *)(&stack0x00004690 + lVar15) = *(undefined4 *)(&stack0x000043c0 + lVar15);
          *(undefined4 *)(&stack0x00004694 + lVar15) = *(undefined4 *)(&stack0x000043c4 + lVar15);
          *(undefined4 *)(&stack0x00004698 + lVar15) = *(undefined4 *)(&stack0x000043c8 + lVar15);
          *(undefined4 *)(&stack0x0000469c + lVar15) = *(undefined4 *)(&stack0x000043cc + lVar15);
          *(undefined8 *)(&stack0x000046a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046a8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046d8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046e8 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004700 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004718 + lVar15) = &UNK_142f39d80;
          *(undefined8 *)(&stack0x00004720 + lVar15) = 0x10;
          *(undefined8 *)(&stack0x00004728 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004738 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004748 + lVar15) = uVar21;
          *(undefined8 *)(&stack0x00004750 + lVar15) = uVar23;
          if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
             (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
            *(undefined8 *)(&stack0x00004788 + lVar15) = *(undefined8 *)(&stack0x00004588 + lVar15);
            *(undefined8 **)(&stack0x00004790 + lVar15) =
                 *(undefined8 **)(&stack0x00004590 + lVar15);
            pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
            if (pcVar11 != (code *)0x0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9037;
              (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
            }
            uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
            if (uVar24 != 0) {
              uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9058;
              pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
            }
          }
          *(undefined8 *)(&stack0x00004580 + lVar15) = 0;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f907c;
          pub_142e32760(&stack0x000028e0 + lVar15,&stack0x00004530 + lVar15,0x224);
          *(undefined2 *)(&stack0x00002b05 + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
          (&stack0x00002b07)[lVar15] = (&stack0x00004757)[lVar15];
          (&stack0x00002b04)[lVar15] = 2;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f90b7;
          pdb_140eb2530(&stack0x00004260 + lVar15,&UNK_142f3a2d1,0x48);
          lVar22 = *(longlong *)(&stack0x00004260 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00004530 + lVar15) = *(undefined8 *)(&stack0x00004268 + lVar15);
            *(undefined8 *)(&stack0x00004538 + lVar15) = *(undefined8 *)(&stack0x00004270 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00002a98 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f90f8;
            pub_1406abac0(*(byte **)(&stack0x00002aa0 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00002a98 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00002aa0 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
          *(undefined4 *)(&stack0x00002aa4 + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
          *(undefined4 *)(&stack0x00002aa8 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
          *(undefined4 *)(&stack0x00002aac + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9126;
          pub_142e32760(&stack0x00004260 + lVar15,&stack0x000028e0 + lVar15,0x228);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9135;
          pdb_140eccac0(&stack0x00004530 + lVar15,0);
          lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00003d30 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
            *(undefined8 *)(&stack0x00003d38 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00004430 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9176;
            pub_1406abac0(*(byte **)(&stack0x00004438 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00004430 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00004438 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
          *(undefined4 *)(&stack0x0000443c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
          *(undefined4 *)(&stack0x00004440 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
          *(undefined4 *)(&stack0x00004444 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f91a0;
          pub_142e32760(puVar2,&stack0x00004260 + lVar15,0x1f8);
          *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00002ae8 + lVar15);
          *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x00002aec + lVar15);
          *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00002af0 + lVar15);
          *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x00002af4 + lVar15);
          *(undefined4 *)(&stack0x00004748 + lVar15) = *(undefined4 *)(&stack0x00002af8 + lVar15);
          *(undefined4 *)(&stack0x0000474c + lVar15) = *(undefined4 *)(&stack0x00002afc + lVar15);
          *(undefined4 *)(&stack0x00004750 + lVar15) = *(undefined4 *)(&stack0x00002b00 + lVar15);
          *(undefined4 *)(&stack0x00004754 + lVar15) = *(undefined4 *)(&stack0x00002b04 + lVar15);
          *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f3a319;
          *(undefined8 *)(&stack0x00004730 + lVar15) = 0x10;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f91e4;
          pdb_140ec70b0(&stack0x00003f90 + lVar15,puVar2);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f91fe;
          pub_142e32760(&stack0x00004260 + lVar15,&stack0x00003f90 + lVar15,0x2c8);
          *(undefined8 *)(&stack0x00004008 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004010 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004020 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004028 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004038 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004040 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004050 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004058 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004068 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004070 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004080 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004088 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004098 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040e8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004110 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004118 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004128 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004130 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003f90 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fa0 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fb8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fc8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fe0 + lVar15) = 5;
          *(undefined8 *)(&stack0x00003ff8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004000 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004018 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004030 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004048 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004060 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004078 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004090 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040a8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040d8 + lVar15) = 4;
          *(undefined8 *)(&stack0x000040f0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004100 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004108 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004120 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004138 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004140 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004148 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004160 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004178 + lVar15) = &UNK_142f39d90;
          *(undefined8 *)(&stack0x00004180 + lVar15) = 0x10;
          *(undefined8 *)(&stack0x00004188 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004198 + lVar15) = 0;
          *(undefined8 *)(&stack0x000041a8 + lVar15) = 0x11000000110000;
          *(undefined4 *)(&stack0x000041b0 + lVar15) = 0;
          *(undefined2 *)(&stack0x000041b4 + lVar15) = 0xd09;
          *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
          *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3a329;
          *(undefined8 *)(&stack0x00003d48 + lVar15) = 0x10;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f93dc;
          pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
          if (*(longlong *)(&stack0x000040e8 + lVar15) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f93fd;
            pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000040e8 + lVar15) << 4,8);
          }
          *(undefined8 *)(&stack0x000040f8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          *(undefined4 *)puVar3 = *(undefined4 *)(&stack0x00004530 + lVar15);
          *(undefined4 *)(&stack0x000040ec + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
          *(undefined4 *)(&stack0x000040f0 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
          *(undefined4 *)(&stack0x000040f4 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f942b;
          pub_142e32760(&stack0x00004530 + lVar15,&stack0x00003f90 + lVar15,0x228);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9430;
          pdb_14007ee60();
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f943f;
          pbVar16 = pub_1406abab0(8,8);
          if (pbVar16 == (byte *)0x0) {
            *(undefined8 *)(&stack0x00004790 + lVar15) = 0;
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fef13;
            pdb_142dc7e11(8,8);
          }
          *(code **)pbVar16 = pdb_1400f18e0;
          if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
             (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
            *(byte **)(&stack0x00004790 + lVar15) = pbVar16;
            *(undefined8 *)(&stack0x00004788 + lVar15) = *(undefined8 *)(&stack0x00004588 + lVar15);
            *(undefined8 **)(&stack0x00003f88 + lVar15) =
                 *(undefined8 **)(&stack0x00004590 + lVar15);
            pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
            if (pcVar11 != (code *)0x0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f949b;
              (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
            }
            uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00003f88 + lVar15) + 8);
            pbVar16 = *(byte **)(&stack0x00004790 + lVar15);
            if (uVar24 != 0) {
              uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00003f88 + lVar15) + 0x10);
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f94c3;
              pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
            }
          }
          *(undefined8 *)(&stack0x00004580 + lVar15) = 4;
          *(byte **)(&stack0x00004588 + lVar15) = pbVar16;
          *(undefined **)(&stack0x00004590 + lVar15) = &UNK_142e414b0;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f94fc;
          pub_142e32760(&stack0x000026b8 + lVar15,&stack0x00004530 + lVar15,0x224);
          *(undefined2 *)(&stack0x000028dd + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
          (&stack0x000028df)[lVar15] = (&stack0x00004757)[lVar15];
          (&stack0x000028dc)[lVar15] = 0;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9537;
          pdb_140eb2530(&stack0x00003f90 + lVar15,&UNK_142f3a339,0x91);
          lVar22 = *(longlong *)(&stack0x00003f90 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00004530 + lVar15) = *(undefined8 *)(&stack0x00003f98 + lVar15);
            *(undefined8 *)(&stack0x00004538 + lVar15) = *(undefined8 *)(&stack0x00003fa0 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00002870 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9578;
            pub_1406abac0(*(byte **)(&stack0x00002878 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00002870 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00002878 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
          *(undefined4 *)(&stack0x0000287c + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
          *(undefined4 *)(&stack0x00002880 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
          *(undefined4 *)(&stack0x00002884 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f95a6;
          pub_142e32760(&stack0x00003f90 + lVar15,&stack0x000026b8 + lVar15,0x228);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f95b5;
          pdb_140eccac0(&stack0x00004530 + lVar15,0);
          lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00003d30 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
            *(undefined8 *)(&stack0x00003d38 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00004160 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f95f6;
            pub_1406abac0(*(byte **)(&stack0x00004168 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00004160 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00004168 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
          *(undefined4 *)(&stack0x0000416c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
          *(undefined4 *)(&stack0x00004170 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
          *(undefined4 *)(&stack0x00004174 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9627;
          pub_142e32760(&stack0x00004530 + lVar15,&stack0x00003f90 + lVar15,0x1f8);
          *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x000028c0 + lVar15);
          *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x000028c4 + lVar15);
          *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x000028c8 + lVar15);
          *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x000028cc + lVar15);
          *(undefined4 *)(&stack0x00004748 + lVar15) = *(undefined4 *)(&stack0x000028d0 + lVar15);
          *(undefined4 *)(&stack0x0000474c + lVar15) = *(undefined4 *)(&stack0x000028d4 + lVar15);
          *(undefined4 *)(&stack0x00004750 + lVar15) = *(undefined4 *)(&stack0x000028d8 + lVar15);
          *(undefined4 *)(&stack0x00004754 + lVar15) = *(undefined4 *)(&stack0x000028dc + lVar15);
          *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f3a3ca;
          *(undefined8 *)(&stack0x00004730 + lVar15) = 0x10;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f966b;
          pdb_140ec70b0(&stack0x00004260 + lVar15,&stack0x00004530 + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9685;
          pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00004260 + lVar15,0x2c8);
          *(undefined8 *)(&stack0x000042d8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042f0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004308 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004310 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004320 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004328 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004338 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004340 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004350 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004358 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004368 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004370 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004380 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004388 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004398 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043e8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004400 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004260 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004270 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004288 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004298 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042b0 + lVar15) = 5;
          *(undefined8 *)(&stack0x000042c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042d0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000042e8 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004300 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004318 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004330 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004348 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004360 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004378 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004390 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043a8 + lVar15) = 4;
          *(undefined8 *)(&stack0x000043c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043d8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043f0 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004408 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004410 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004418 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004430 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004448 + lVar15) = &UNK_142f39da0;
          *(undefined8 *)(&stack0x00004450 + lVar15) = 0x18;
          *(undefined8 *)(&stack0x00004458 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004468 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004478 + lVar15) = uVar21;
          *(undefined8 *)(&stack0x00004480 + lVar15) = uVar23;
          *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
          *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3a3da;
          *(undefined8 *)(&stack0x00003d48 + lVar15) = 0x18;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9850;
          pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
          if (*(longlong *)(&stack0x000043b8 + lVar15) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9871;
            pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000043b8 + lVar15) << 4,8);
          }
          *(undefined8 *)(&stack0x000043c8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          *(undefined8 *)(&stack0x000043b8 + lVar15) = *(undefined8 *)(&stack0x00004530 + lVar15);
          *(undefined8 *)(&stack0x000043c0 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
          *(undefined8 *)(&stack0x00004548 + lVar15) = *(undefined8 *)(&stack0x00004278 + lVar15);
          *(undefined8 *)(&stack0x00004550 + lVar15) = *(undefined8 *)(&stack0x00004280 + lVar15);
          *(undefined8 *)(&stack0x00004570 + lVar15) = *(undefined8 *)(&stack0x000042a0 + lVar15);
          *(undefined8 *)(&stack0x00004578 + lVar15) = *(undefined8 *)(&stack0x000042a8 + lVar15);
          *(undefined8 *)(&stack0x00004588 + lVar15) = *(undefined8 *)(&stack0x000042b8 + lVar15);
          *(undefined8 *)(&stack0x00004590 + lVar15) = *(undefined8 *)(&stack0x000042c0 + lVar15);
          *(undefined8 *)(&stack0x000045a8 + lVar15) = *puVar4;
          *(undefined8 *)(&stack0x000045b0 + lVar15) = *(undefined8 *)(&stack0x000042e0 + lVar15);
          *(undefined8 *)(&stack0x000045c0 + lVar15) = *(undefined8 *)(&stack0x000042f0 + lVar15);
          *(undefined8 *)(&stack0x000045c8 + lVar15) = *(undefined8 *)(&stack0x000042f8 + lVar15);
          *(undefined8 *)(&stack0x000045d8 + lVar15) = *(undefined8 *)(&stack0x00004308 + lVar15);
          *(undefined8 *)(&stack0x000045e0 + lVar15) = *(undefined8 *)(&stack0x00004310 + lVar15);
          *(undefined8 *)(&stack0x000045f0 + lVar15) = *(undefined8 *)(&stack0x00004320 + lVar15);
          *(undefined8 *)(&stack0x000045f8 + lVar15) = *(undefined8 *)(&stack0x00004328 + lVar15);
          *(undefined8 *)(&stack0x00004608 + lVar15) = *(undefined8 *)(&stack0x00004338 + lVar15);
          *(undefined8 *)(&stack0x00004610 + lVar15) = *(undefined8 *)(&stack0x00004340 + lVar15);
          *(undefined8 *)(&stack0x00004620 + lVar15) = *(undefined8 *)(&stack0x00004350 + lVar15);
          *(undefined8 *)(&stack0x00004628 + lVar15) = *(undefined8 *)(&stack0x00004358 + lVar15);
          *(undefined8 *)(&stack0x00004638 + lVar15) = *(undefined8 *)(&stack0x00004368 + lVar15);
          *(undefined8 *)(&stack0x00004640 + lVar15) = *(undefined8 *)(&stack0x00004370 + lVar15);
          *(undefined8 *)(&stack0x00004650 + lVar15) = *(undefined8 *)(&stack0x00004380 + lVar15);
          *(undefined8 *)(&stack0x00004658 + lVar15) = *(undefined8 *)(&stack0x00004388 + lVar15);
          *(undefined8 *)(&stack0x00004668 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004670 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004680 + lVar15) = *(undefined8 *)(&stack0x000043b0 + lVar15);
          *(undefined8 *)(&stack0x00004688 + lVar15) = *(undefined8 *)(&stack0x000043b8 + lVar15);
          *(undefined8 *)(&stack0x000046b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046f0 + lVar15) = *(undefined8 *)(&stack0x00004420 + lVar15);
          *(undefined8 *)(&stack0x000046f8 + lVar15) = *(undefined8 *)(&stack0x00004428 + lVar15);
          *(undefined8 *)(&stack0x00004708 + lVar15) = *(undefined8 *)(&stack0x00004438 + lVar15);
          *(undefined8 *)(&stack0x00004710 + lVar15) = *(undefined8 *)(&stack0x00004440 + lVar15);
          *(undefined4 *)(&stack0x00004530 + lVar15) = *(undefined4 *)(&stack0x00004260 + lVar15);
          *(undefined4 *)(&stack0x00004534 + lVar15) = *(undefined4 *)(&stack0x00004264 + lVar15);
          *(undefined4 *)(&stack0x00004538 + lVar15) = *(undefined4 *)(&stack0x00004268 + lVar15);
          *(undefined4 *)(&stack0x0000453c + lVar15) = *(undefined4 *)(&stack0x0000426c + lVar15);
          *(undefined8 *)(&stack0x00004540 + lVar15) = *(undefined8 *)(&stack0x00004270 + lVar15);
          *(undefined4 *)(&stack0x00004558 + lVar15) = *(undefined4 *)(&stack0x00004288 + lVar15);
          *(undefined4 *)(&stack0x0000455c + lVar15) = *(undefined4 *)(&stack0x0000428c + lVar15);
          *(undefined4 *)(&stack0x00004560 + lVar15) = *(undefined4 *)(&stack0x00004290 + lVar15);
          *(undefined4 *)(&stack0x00004564 + lVar15) = *(undefined4 *)(&stack0x00004294 + lVar15);
          *(undefined8 *)(&stack0x00004568 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004580 + lVar15) = 5;
          *(undefined8 *)(&stack0x00004598 + lVar15) = 0;
          *(undefined8 *)(&stack0x000045a0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045b8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045d0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000045e8 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004600 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004618 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004630 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004648 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004660 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004678 + lVar15) = 4;
          *(undefined4 *)(&stack0x00004690 + lVar15) = *(undefined4 *)(&stack0x000043c0 + lVar15);
          *(undefined4 *)(&stack0x00004694 + lVar15) = *(undefined4 *)(&stack0x000043c4 + lVar15);
          *(undefined4 *)(&stack0x00004698 + lVar15) = *(undefined4 *)(&stack0x000043c8 + lVar15);
          *(undefined4 *)(&stack0x0000469c + lVar15) = *(undefined4 *)(&stack0x000043cc + lVar15);
          *(undefined8 *)(&stack0x000046a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046a8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046d8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000046e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000046e8 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004700 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004718 + lVar15) = &UNK_142f39da0;
          *(undefined8 *)(&stack0x00004720 + lVar15) = 0x18;
          *(undefined8 *)(&stack0x00004728 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004738 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004748 + lVar15) = uVar21;
          *(undefined8 *)(&stack0x00004750 + lVar15) = uVar23;
          if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
             (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
            *(undefined8 *)(&stack0x00004788 + lVar15) = *(undefined8 *)(&stack0x00004588 + lVar15);
            *(undefined8 **)(&stack0x00004790 + lVar15) =
                 *(undefined8 **)(&stack0x00004590 + lVar15);
            pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
            if (pcVar11 != (code *)0x0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9ae6;
              (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
            }
            uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
            if (uVar24 != 0) {
              uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9b07;
              pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
            }
          }
          *(undefined8 *)(&stack0x00004580 + lVar15) = 0;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9b2b;
          pub_142e32760(&stack0x00002490 + lVar15,&stack0x00004530 + lVar15,0x224);
          *(undefined2 *)(&stack0x000026b5 + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
          (&stack0x000026b7)[lVar15] = (&stack0x00004757)[lVar15];
          (&stack0x000026b4)[lVar15] = 2;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9b66;
          pdb_140eb2530(&stack0x00004260 + lVar15,&UNK_142f3a3f2,0x34);
          lVar22 = *(longlong *)(&stack0x00004260 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00004530 + lVar15) = *(undefined8 *)(&stack0x00004268 + lVar15);
            *(undefined8 *)(&stack0x00004538 + lVar15) = *(undefined8 *)(&stack0x00004270 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00002648 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9ba7;
            pub_1406abac0(*(byte **)(&stack0x00002650 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00002648 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00002650 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
          *(undefined4 *)(&stack0x00002654 + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
          *(undefined4 *)(&stack0x00002658 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
          *(undefined4 *)(&stack0x0000265c + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9bd5;
          pub_142e32760(&stack0x00004260 + lVar15,&stack0x00002490 + lVar15,0x228);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9be4;
          pdb_140eccac0(&stack0x00004530 + lVar15,0);
          lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00003d30 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
            *(undefined8 *)(&stack0x00003d38 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00004430 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9c25;
            pub_1406abac0(*(byte **)(&stack0x00004438 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00004430 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00004438 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
          *(undefined4 *)(&stack0x0000443c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
          *(undefined4 *)(&stack0x00004440 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
          *(undefined4 *)(&stack0x00004444 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9c56;
          pub_142e32760(&stack0x00004530 + lVar15,&stack0x00004260 + lVar15,0x1f8);
          *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00002698 + lVar15);
          *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x0000269c + lVar15);
          *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x000026a0 + lVar15);
          *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x000026a4 + lVar15);
          *(undefined4 *)(&stack0x00004748 + lVar15) = *(undefined4 *)(&stack0x000026a8 + lVar15);
          *(undefined4 *)(&stack0x0000474c + lVar15) = *(undefined4 *)(&stack0x000026ac + lVar15);
          *(undefined4 *)(&stack0x00004750 + lVar15) = *(undefined4 *)(&stack0x000026b0 + lVar15);
          *(undefined4 *)(&stack0x00004754 + lVar15) = *(undefined4 *)(&stack0x000026b4 + lVar15);
          *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f3a426;
          *(undefined8 *)(&stack0x00004730 + lVar15) = 0x18;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9c9a;
          pdb_140ec70b0(&stack0x00003f90 + lVar15,&stack0x00004530 + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9cb4;
          pub_142e32760(&stack0x00004260 + lVar15,&stack0x00003f90 + lVar15,0x2c8);
          *(undefined8 *)(&stack0x00004008 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004010 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004020 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004028 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004038 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004040 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004050 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004058 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004068 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004070 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004080 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004088 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004098 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040e8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004110 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004118 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004128 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004130 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003f90 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fa0 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fb8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fc8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fe0 + lVar15) = 5;
          *(undefined8 *)(&stack0x00003ff8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004000 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004018 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004030 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004048 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004060 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004078 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004090 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040a8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040d8 + lVar15) = 4;
          *(undefined8 *)(&stack0x000040f0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004100 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004108 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004120 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004138 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004140 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004148 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004160 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004178 + lVar15) = &UNK_142f39db8;
          *(undefined8 *)(&stack0x00004180 + lVar15) = 0x12;
          *(undefined8 *)(&stack0x00004188 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004198 + lVar15) = 0;
          *(undefined8 *)(&stack0x000041a8 + lVar15) = 0x11000000110000;
          *(undefined4 *)(&stack0x000041b0 + lVar15) = 0;
          *(undefined2 *)(&stack0x000041b4 + lVar15) = 0xd09;
          *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
          *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3a43e;
          *(undefined8 *)(&stack0x00003d48 + lVar15) = 0x12;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9e92;
          pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
          if (*(longlong *)(&stack0x000040e8 + lVar15) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9eb3;
            pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000040e8 + lVar15) << 4,8);
          }
          *(undefined8 *)(&stack0x000040f8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          *(undefined4 *)puVar3 = *(undefined4 *)(&stack0x00004530 + lVar15);
          *(undefined4 *)(&stack0x000040ec + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
          *(undefined4 *)(&stack0x000040f0 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
          *(undefined4 *)(&stack0x000040f4 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9ee1;
          pub_142e32760(&stack0x00004530 + lVar15,&stack0x00003f90 + lVar15,0x228);
          if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
             (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
            *(undefined8 *)(&stack0x00004788 + lVar15) = *(undefined8 *)(&stack0x00004588 + lVar15);
            *(undefined8 **)(&stack0x00004790 + lVar15) =
                 *(undefined8 **)(&stack0x00004590 + lVar15);
            pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
            if (pcVar11 != (code *)0x0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9f20;
              (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
            }
            uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
            if (uVar24 != 0) {
              uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9f41;
              pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
            }
          }
          *(undefined8 *)(&stack0x00004580 + lVar15) = 3;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9f65;
          pub_142e32760(&stack0x00002268 + lVar15,&stack0x00004530 + lVar15,0x224);
          *(undefined2 *)(&stack0x0000248d + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
          (&stack0x0000248f)[lVar15] = (&stack0x00004757)[lVar15];
          (&stack0x0000248c)[lVar15] = 0;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9fa0;
          pdb_140eb2530(&stack0x00003f90 + lVar15,&UNK_142f3a450,0xae);
          lVar22 = *(longlong *)(&stack0x00003f90 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00004530 + lVar15) = *(undefined8 *)(&stack0x00003f98 + lVar15);
            *(undefined8 *)(&stack0x00004538 + lVar15) = *(undefined8 *)(&stack0x00003fa0 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00002420 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402f9fe1;
            pub_1406abac0(*(byte **)(&stack0x00002428 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00002420 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00002428 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
          *(undefined4 *)(&stack0x0000242c + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
          *(undefined4 *)(&stack0x00002430 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
          *(undefined4 *)(&stack0x00002434 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa00f;
          pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00002268 + lVar15,0x228);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa01e;
          pdb_140eccac0(&stack0x00004530 + lVar15,0);
          lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00003d30 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
            *(undefined8 *)(&stack0x00003d38 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00004160 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa05f;
            pub_1406abac0(*(byte **)(&stack0x00004168 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00004160 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00004168 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
          *(undefined4 *)(&stack0x0000416c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
          *(undefined4 *)(&stack0x00004170 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
          *(undefined4 *)(&stack0x00004174 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa090;
          pub_142e32760(&stack0x00004530 + lVar15,&stack0x00003f90 + lVar15,0x1f8);
          *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00002470 + lVar15);
          *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x00002474 + lVar15);
          *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00002478 + lVar15);
          *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x0000247c + lVar15);
          *(undefined4 *)(&stack0x00004748 + lVar15) = *(undefined4 *)(&stack0x00002480 + lVar15);
          *(undefined4 *)(&stack0x0000474c + lVar15) = *(undefined4 *)(&stack0x00002484 + lVar15);
          *(undefined4 *)(&stack0x00004750 + lVar15) = *(undefined4 *)(&stack0x00002488 + lVar15);
          *(undefined4 *)(&stack0x00004754 + lVar15) = *(undefined4 *)(&stack0x0000248c + lVar15);
          *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f3a4fe;
          *(undefined8 *)(&stack0x00004730 + lVar15) = 0x12;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa0d4;
          pdb_140ec70b0(&stack0x00004260 + lVar15,&stack0x00004530 + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa0ee;
          pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00004260 + lVar15,0x2c8);
          *(undefined8 *)(&stack0x000042d8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042f0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004308 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004310 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004320 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004328 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004338 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004340 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004350 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004358 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004368 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004370 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004380 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004388 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004398 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043e8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004400 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004260 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004270 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004288 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004298 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042b0 + lVar15) = 5;
          *(undefined8 *)(&stack0x000042c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042d0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000042e8 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004300 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004318 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004330 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004348 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004360 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004378 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004390 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043a8 + lVar15) = 4;
          *(undefined8 *)(&stack0x000043c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043d8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043f0 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004408 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004410 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004418 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004430 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004448 + lVar15) = &UNK_142f39dca;
          *(undefined8 *)(&stack0x00004450 + lVar15) = 0x1a;
          *(undefined8 *)(&stack0x00004458 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004468 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004478 + lVar15) = 0x11000000110000;
          *(undefined4 *)(&stack0x00004480 + lVar15) = 0;
          *(undefined2 *)(&stack0x00004484 + lVar15) = 0xd09;
          *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
          *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3a510;
          *(undefined8 *)(&stack0x00003d48 + lVar15) = 0x1a;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa2cc;
          pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
          if (*(longlong *)(&stack0x000043b8 + lVar15) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa2ed;
            pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000043b8 + lVar15) << 4,8);
          }
          *(undefined8 *)(&stack0x000043c8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          *(undefined4 *)(&stack0x000043b8 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
          *(undefined4 *)(&stack0x000043bc + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
          *(undefined4 *)(&stack0x000043c0 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
          *(undefined4 *)(&stack0x000043c4 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa325;
          pub_142e32760(&stack0x00004530 + lVar15,&stack0x00004260 + lVar15,0x228);
          (&stack0x00004765)[lVar15] = 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa338;
          pdb_140ed1350(&stack0x00003d30 + lVar15);
          (&stack0x00004765)[lVar15] = 0;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa35a;
          pdb_14037b080(&stack0x00004260 + lVar15,&stack0x00004530 + lVar15,
                        &stack0x00003d30 + lVar15);
          (&stack0x00004484)[lVar15] = 0;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa37b;
          pub_142e32760(&stack0x00000210 + lVar15,&stack0x00004260 + lVar15,0x228);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa395;
          pdb_140eb2530(&stack0x00004260 + lVar15,&UNK_142f3a52a,0x48);
          lVar22 = *(longlong *)(&stack0x00004260 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00004530 + lVar15) = *(undefined8 *)(&stack0x00004268 + lVar15);
            *(undefined8 *)(&stack0x00004538 + lVar15) = *(undefined8 *)(&stack0x00004270 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x000003c8 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa3d6;
            pub_1406abac0(*(byte **)(&stack0x000003d0 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x000003c8 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x000003d0 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
          *(undefined4 *)(&stack0x000003d4 + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
          *(undefined4 *)(&stack0x000003d8 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
          *(undefined4 *)(&stack0x000003dc + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa404;
          pub_142e32760(&stack0x00004260 + lVar15,&stack0x00000210 + lVar15,0x228);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa413;
          pdb_140eccac0(&stack0x00004530 + lVar15,0);
          lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00003d30 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
            *(undefined8 *)(&stack0x00003d38 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00004430 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa454;
            pub_1406abac0(*(byte **)(&stack0x00004438 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00004430 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00004438 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
          *(undefined4 *)(&stack0x0000443c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
          *(undefined4 *)(&stack0x00004440 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
          *(undefined4 *)(&stack0x00004444 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa485;
          pub_142e32760(&stack0x00004530 + lVar15,&stack0x00004260 + lVar15,0x1f8);
          *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00000418 + lVar15);
          *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x0000041c + lVar15);
          *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00000420 + lVar15);
          *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x00000424 + lVar15);
          *(undefined4 *)(&stack0x00004748 + lVar15) = *(undefined4 *)(&stack0x00000428 + lVar15);
          *(undefined4 *)(&stack0x0000474c + lVar15) = *(undefined4 *)(&stack0x0000042c + lVar15);
          *(undefined4 *)(&stack0x00004750 + lVar15) = *(undefined4 *)(&stack0x00000430 + lVar15);
          *(undefined4 *)(&stack0x00004754 + lVar15) = *(undefined4 *)(&stack0x00000434 + lVar15);
          *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f3a572;
          *(undefined8 *)(&stack0x00004730 + lVar15) = 0x1a;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa4c9;
          pdb_140ec70b0(&stack0x00003f90 + lVar15,&stack0x00004530 + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa4e3;
          pub_142e32760(&stack0x00004260 + lVar15,&stack0x00003f90 + lVar15,0x2c8);
          *(undefined8 *)(&stack0x00004008 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004010 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004020 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004028 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004038 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004040 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004050 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004058 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004068 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004070 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004080 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004088 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004098 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040e8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004110 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004118 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004128 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004130 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003f90 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fa0 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fb8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fc8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fe0 + lVar15) = 5;
          *(undefined8 *)(&stack0x00003ff8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004000 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004018 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004030 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004048 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004060 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004078 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004090 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040a8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040d8 + lVar15) = 4;
          *(undefined8 *)(&stack0x000040f0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004100 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004108 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004120 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004138 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004140 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004148 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004160 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004178 + lVar15) = &UNK_142f39de4;
          *(undefined8 *)(&stack0x00004180 + lVar15) = 0xc;
          *(undefined8 *)(&stack0x00004188 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004198 + lVar15) = 0;
          *(undefined8 *)(&stack0x000041a8 + lVar15) = 0x11000000110000;
          *(undefined4 *)(&stack0x000041b0 + lVar15) = 0;
          *(undefined2 *)(&stack0x000041b4 + lVar15) = 0xd09;
          *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
          *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3a58c;
          *(undefined8 *)(&stack0x00003d48 + lVar15) = 0xc;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa6c1;
          pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
          if (*(longlong *)(&stack0x000040e8 + lVar15) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa6e2;
            pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000040e8 + lVar15) << 4,8);
          }
          *(undefined8 *)(&stack0x000040f8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          *(undefined4 *)puVar3 = *(undefined4 *)(&stack0x00004530 + lVar15);
          *(undefined4 *)(&stack0x000040ec + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
          *(undefined4 *)(&stack0x000040f0 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
          *(undefined4 *)(&stack0x000040f4 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa710;
          pub_142e32760(&stack0x00004530 + lVar15,&stack0x00003f90 + lVar15,0x228);
          if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
             (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
            *(undefined8 *)(&stack0x00004788 + lVar15) = *(undefined8 *)(&stack0x00004588 + lVar15);
            *(undefined8 **)(&stack0x00004790 + lVar15) =
                 *(undefined8 **)(&stack0x00004590 + lVar15);
            pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
            if (pcVar11 != (code *)0x0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa74f;
              (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
            }
            uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
            if (uVar24 != 0) {
              uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa770;
              pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
            }
          }
          *(undefined8 *)(&stack0x00004580 + lVar15) = 3;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa794;
          pub_142e32760(&stack0x00002040 + lVar15,&stack0x00004530 + lVar15,0x224);
          *(undefined2 *)(&stack0x00002265 + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
          (&stack0x00002267)[lVar15] = (&stack0x00004757)[lVar15];
          (&stack0x00002264)[lVar15] = 0;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa7cf;
          pdb_140eb2530(&stack0x00003f90 + lVar15,&UNK_142f3a598,0x73);
          lVar22 = *(longlong *)(&stack0x00003f90 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00004530 + lVar15) = *(undefined8 *)(&stack0x00003f98 + lVar15);
            *(undefined8 *)(&stack0x00004538 + lVar15) = *(undefined8 *)(&stack0x00003fa0 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x000021f8 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa810;
            pub_1406abac0(*(byte **)(&stack0x00002200 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x000021f8 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00002200 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
          *(undefined4 *)(&stack0x00002204 + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
          *(undefined4 *)(&stack0x00002208 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
          *(undefined4 *)(&stack0x0000220c + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa83e;
          pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00002040 + lVar15,0x228);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa84d;
          pdb_140eccac0(&stack0x00004530 + lVar15,0);
          lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00003d30 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
            *(undefined8 *)(&stack0x00003d38 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00004160 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa88e;
            pub_1406abac0(*(byte **)(&stack0x00004168 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00004160 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00004168 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
          *(undefined4 *)(&stack0x0000416c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
          *(undefined4 *)(&stack0x00004170 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
          *(undefined4 *)(&stack0x00004174 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa8bf;
          pub_142e32760(&stack0x00004530 + lVar15,&stack0x00003f90 + lVar15,0x1f8);
          *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00002248 + lVar15);
          *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x0000224c + lVar15);
          *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00002250 + lVar15);
          *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x00002254 + lVar15);
          *(undefined4 *)(&stack0x00004748 + lVar15) = *(undefined4 *)(&stack0x00002258 + lVar15);
          *(undefined4 *)(&stack0x0000474c + lVar15) = *(undefined4 *)(&stack0x0000225c + lVar15);
          *(undefined4 *)(&stack0x00004750 + lVar15) = *(undefined4 *)(&stack0x00002260 + lVar15);
          *(undefined4 *)(&stack0x00004754 + lVar15) = *(undefined4 *)(&stack0x00002264 + lVar15);
          *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f3a60b;
          *(undefined8 *)(&stack0x00004730 + lVar15) = 0xc;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa903;
          pdb_140ec70b0(&stack0x00004260 + lVar15,&stack0x00004530 + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fa91d;
          pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00004260 + lVar15,0x2c8);
          *(undefined8 *)(&stack0x000042d8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042f0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004308 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004310 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004320 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004328 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004338 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004340 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004350 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004358 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004368 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004370 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004380 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004388 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004398 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043e8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004400 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004260 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004270 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004288 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004298 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042b0 + lVar15) = 5;
          *(undefined8 *)(&stack0x000042c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042d0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000042e8 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004300 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004318 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004330 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004348 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004360 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004378 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004390 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043a8 + lVar15) = 4;
          *(undefined8 *)(&stack0x000043c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043d8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043f0 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004408 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004410 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004418 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004430 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004448 + lVar15) = &UNK_142f39df0;
          *(undefined8 *)(&stack0x00004450 + lVar15) = 0xc;
          *(undefined8 *)(&stack0x00004458 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004468 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004478 + lVar15) = 0x11000000110000;
          *(undefined4 *)(&stack0x00004480 + lVar15) = 0;
          *(undefined2 *)(&stack0x00004484 + lVar15) = 0xd09;
          *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
          *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3a617;
          *(undefined8 *)(&stack0x00003d48 + lVar15) = 0xc;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402faafb;
          pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
          if (*(longlong *)(&stack0x000043b8 + lVar15) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fab1c;
            pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000043b8 + lVar15) << 4,8);
          }
          *(undefined8 *)(&stack0x000043c8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          *(undefined4 *)(&stack0x000043b8 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
          *(undefined4 *)(&stack0x000043bc + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
          *(undefined4 *)(&stack0x000043c0 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
          *(undefined4 *)(&stack0x000043c4 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fab54;
          pub_142e32760(&stack0x00004530 + lVar15,&stack0x00004260 + lVar15,0x228);
          if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
             (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
            *(undefined8 *)(&stack0x00004788 + lVar15) = *(undefined8 *)(&stack0x00004588 + lVar15);
            *(undefined8 **)(&stack0x00004790 + lVar15) =
                 *(undefined8 **)(&stack0x00004590 + lVar15);
            pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
            if (pcVar11 != (code *)0x0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fab93;
              (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
            }
            uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
            if (uVar24 != 0) {
              uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fabb4;
              pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
            }
          }
          *(undefined8 *)(&stack0x00004580 + lVar15) = 3;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fabd8;
          pub_142e32760(&stack0x00001e18 + lVar15,&stack0x00004530 + lVar15,0x224);
          *(undefined2 *)(&stack0x0000203d + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
          (&stack0x0000203f)[lVar15] = (&stack0x00004757)[lVar15];
          (&stack0x0000203c)[lVar15] = 0;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fac13;
          pdb_140eb2530(&stack0x00004260 + lVar15,&UNK_142f3a623,0x4f);
          lVar22 = *(longlong *)(&stack0x00004260 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00004530 + lVar15) = *(undefined8 *)(&stack0x00004268 + lVar15);
            *(undefined8 *)(&stack0x00004538 + lVar15) = *(undefined8 *)(&stack0x00004270 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00001fd0 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fac54;
            pub_1406abac0(*(byte **)(&stack0x00001fd8 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00001fd0 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00001fd8 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
          *(undefined4 *)(&stack0x00001fdc + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
          *(undefined4 *)(&stack0x00001fe0 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
          *(undefined4 *)(&stack0x00001fe4 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fac82;
          pub_142e32760(&stack0x00004260 + lVar15,&stack0x00001e18 + lVar15,0x228);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fac91;
          pdb_140eccac0(&stack0x00004530 + lVar15,0);
          lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00003d30 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
            *(undefined8 *)(&stack0x00003d38 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00004430 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402facd2;
            pub_1406abac0(*(byte **)(&stack0x00004438 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00004430 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00004438 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
          *(undefined4 *)(&stack0x0000443c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
          *(undefined4 *)(&stack0x00004440 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
          *(undefined4 *)(&stack0x00004444 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fad03;
          pub_142e32760(&stack0x00004530 + lVar15,&stack0x00004260 + lVar15,0x1f8);
          *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00002020 + lVar15);
          *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x00002024 + lVar15);
          *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00002028 + lVar15);
          *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x0000202c + lVar15);
          *(undefined4 *)(&stack0x00004748 + lVar15) = *(undefined4 *)(&stack0x00002030 + lVar15);
          *(undefined4 *)(&stack0x0000474c + lVar15) = *(undefined4 *)(&stack0x00002034 + lVar15);
          *(undefined4 *)(&stack0x00004750 + lVar15) = *(undefined4 *)(&stack0x00002038 + lVar15);
          *(undefined4 *)(&stack0x00004754 + lVar15) = *(undefined4 *)(&stack0x0000203c + lVar15);
          *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f3a672;
          *(undefined8 *)(&stack0x00004730 + lVar15) = 0xc;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fad47;
          pdb_140ec70b0(&stack0x00003f90 + lVar15,&stack0x00004530 + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fad61;
          pub_142e32760(&stack0x00004260 + lVar15,&stack0x00003f90 + lVar15,0x2c8);
          *(undefined8 *)(&stack0x00004008 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004010 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004020 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004028 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004038 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004040 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004050 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004058 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004068 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004070 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004080 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004088 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004098 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000040e8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004110 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004118 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004128 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004130 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003f90 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fa0 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fb8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fc8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003fe0 + lVar15) = 5;
          *(undefined8 *)(&stack0x00003ff8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004000 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004018 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004030 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004048 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004060 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004078 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004090 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040a8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040d8 + lVar15) = 4;
          *(undefined8 *)(&stack0x000040f0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000040f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004100 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004108 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004120 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004138 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004140 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004148 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004160 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004178 + lVar15) = &UNK_142f39dfc;
          *(undefined8 *)(&stack0x00004180 + lVar15) = 0xb;
          *(undefined8 *)(&stack0x00004188 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004198 + lVar15) = 0;
          *(undefined8 *)(&stack0x000041a8 + lVar15) = 0x11000000110000;
          *(undefined4 *)(&stack0x000041b0 + lVar15) = 0;
          *(undefined2 *)(&stack0x000041b4 + lVar15) = 0xd09;
          *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
          *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3a67e;
          *(undefined8 *)(&stack0x00003d48 + lVar15) = 0xb;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402faf3f;
          pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
          if (*(longlong *)(&stack0x000040e8 + lVar15) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402faf60;
            pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000040e8 + lVar15) << 4,8);
          }
          *(undefined8 *)(&stack0x000040f8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          *(undefined4 *)puVar3 = *(undefined4 *)(&stack0x00004530 + lVar15);
          *(undefined4 *)(&stack0x000040ec + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
          *(undefined4 *)(&stack0x000040f0 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
          *(undefined4 *)(&stack0x000040f4 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402faf8e;
          pub_142e32760(&stack0x00004530 + lVar15,&stack0x00003f90 + lVar15,0x228);
          if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
             (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
            *(undefined8 *)(&stack0x00004788 + lVar15) = *(undefined8 *)(&stack0x00004588 + lVar15);
            *(undefined8 **)(&stack0x00004790 + lVar15) =
                 *(undefined8 **)(&stack0x00004590 + lVar15);
            pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
            if (pcVar11 != (code *)0x0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fafcd;
              (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
            }
            uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
            if (uVar24 != 0) {
              uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fafee;
              pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
            }
          }
          *(undefined8 *)(&stack0x00004580 + lVar15) = 3;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb012;
          pub_142e32760(&stack0x00001bf0 + lVar15,&stack0x00004530 + lVar15,0x224);
          *(undefined2 *)(&stack0x00001e15 + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
          (&stack0x00001e17)[lVar15] = (&stack0x00004757)[lVar15];
          (&stack0x00001e14)[lVar15] = 0;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb04d;
          pdb_140eb2530(&stack0x00003f90 + lVar15,&UNK_142f3a689,0x4f);
          lVar22 = *(longlong *)(&stack0x00003f90 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00004530 + lVar15) = *(undefined8 *)(&stack0x00003f98 + lVar15);
            *(undefined8 *)(&stack0x00004538 + lVar15) = *(undefined8 *)(&stack0x00003fa0 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00001da8 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb08e;
            pub_1406abac0(*(byte **)(&stack0x00001db0 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00001da8 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00001db0 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
          *(undefined4 *)(&stack0x00001db4 + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
          *(undefined4 *)(&stack0x00001db8 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
          *(undefined4 *)(&stack0x00001dbc + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb0bc;
          pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00001bf0 + lVar15,0x228);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb0cb;
          pdb_140eccac0(&stack0x00004530 + lVar15,0);
          lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
          if (!SBORROW8(0,lVar22)) {
            *(undefined8 *)(&stack0x00003d30 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
            *(undefined8 *)(&stack0x00003d38 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          }
          uVar24 = *(ulonglong *)(&stack0x00004160 + lVar15);
          if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb10c;
            pub_1406abac0(*(byte **)(&stack0x00004168 + lVar15),uVar24,1);
          }
          *(longlong *)(&stack0x00004160 + lVar15) = lVar22;
          *(undefined4 *)(&stack0x00004168 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
          *(undefined4 *)(&stack0x0000416c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
          *(undefined4 *)(&stack0x00004170 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
          *(undefined4 *)(&stack0x00004174 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb13d;
          pub_142e32760(&stack0x00004530 + lVar15,&stack0x00003f90 + lVar15,0x1f8);
          *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00001df8 + lVar15);
          *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x00001dfc + lVar15);
          *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00001e00 + lVar15);
          *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x00001e04 + lVar15);
          *(undefined4 *)(&stack0x00004748 + lVar15) = *(undefined4 *)(&stack0x00001e08 + lVar15);
          *(undefined4 *)(&stack0x0000474c + lVar15) = *(undefined4 *)(&stack0x00001e0c + lVar15);
          *(undefined4 *)(&stack0x00004750 + lVar15) = *(undefined4 *)(&stack0x00001e10 + lVar15);
          *(undefined4 *)(&stack0x00004754 + lVar15) = *(undefined4 *)(&stack0x00001e14 + lVar15);
          *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f3a6d8;
          *(undefined8 *)(&stack0x00004730 + lVar15) = 0xb;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb181;
          pdb_140ec70b0(&stack0x00004260 + lVar15,&stack0x00004530 + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb19b;
          pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00004260 + lVar15,0x2c8);
          *(undefined8 *)(&stack0x000042d8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042f0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004308 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004310 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004320 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004328 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004338 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004340 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004350 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004358 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004368 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004370 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004380 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004388 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004398 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043a0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043b0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043b8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043e0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043e8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043f8 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004400 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004260 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004270 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004288 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004298 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042b0 + lVar15) = 5;
          *(undefined8 *)(&stack0x000042c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000042d0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000042e8 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004300 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004318 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004330 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004348 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004360 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004378 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004390 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043a8 + lVar15) = 4;
          *(undefined8 *)(&stack0x000043c0 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043c8 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043d0 + lVar15) = 0;
          *(undefined8 *)(&stack0x000043d8 + lVar15) = 8;
          *(undefined8 *)(&stack0x000043f0 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004408 + lVar15) = 8;
          *(undefined8 *)(&stack0x00004410 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004418 + lVar15) = 0x8000000000000000;
          *(undefined8 *)(&stack0x00004430 + lVar15) = 0x8000000000000000;
          *(undefined **)(&stack0x00004448 + lVar15) = &UNK_142f39e07;
          *(undefined8 *)(&stack0x00004450 + lVar15) = 0x12;
          *(undefined8 *)(&stack0x00004458 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004468 + lVar15) = 0;
          *(undefined8 *)(&stack0x00004478 + lVar15) = 0x11000000110000;
          *(undefined4 *)(&stack0x00004480 + lVar15) = 0;
          *(undefined2 *)(&stack0x00004484 + lVar15) = 0xd09;
          *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
          *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
          *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3a6e3;
          *(undefined8 *)(&stack0x00003d48 + lVar15) = 0x12;
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb379;
          pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
          if (*(longlong *)(&stack0x000043b8 + lVar15) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb39a;
            pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000043b8 + lVar15) << 4,8);
          }
          *(undefined8 *)(&stack0x000043c8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
          *(undefined4 *)(&stack0x000043b8 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
          *(undefined4 *)(&stack0x000043bc + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
          *(undefined4 *)(&stack0x000043c0 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
          *(undefined4 *)(&stack0x000043c4 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb3d2;
          pub_142e32760(&stack0x00004530 + lVar15,&stack0x00004260 + lVar15,0x228);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb3d7;
          pdb_14007ee60();
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb3e6;
          pbVar16 = pub_1406abab0(8,8);
          if (pbVar16 != (byte *)0x0) {
            *(code **)pbVar16 = pdb_1400f18e0;
            if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
               (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
              *(byte **)(&stack0x00004790 + lVar15) = pbVar16;
              *(undefined8 *)(&stack0x00004788 + lVar15) =
                   *(undefined8 *)(&stack0x00004588 + lVar15);
              *(undefined8 **)(&stack0x00003f88 + lVar15) =
                   *(undefined8 **)(&stack0x00004590 + lVar15);
              pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
              if (pcVar11 != (code *)0x0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb43b;
                (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
              }
              uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00003f88 + lVar15) + 8);
              pbVar16 = *(byte **)(&stack0x00004790 + lVar15);
              if (uVar24 != 0) {
                uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00003f88 + lVar15) + 0x10);
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb463;
                pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
              }
            }
            *(undefined8 *)(&stack0x00004580 + lVar15) = 4;
            *(byte **)(&stack0x00004588 + lVar15) = pbVar16;
            *(undefined **)(&stack0x00004590 + lVar15) = &UNK_142e414b0;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb49c;
            pub_142e32760(&stack0x000019c8 + lVar15,&stack0x00004530 + lVar15,0x224);
            *(undefined2 *)(&stack0x00001bed + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
            (&stack0x00001bef)[lVar15] = (&stack0x00004757)[lVar15];
            (&stack0x00001bec)[lVar15] = 0;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb4d7;
            pdb_140eb2530(&stack0x00004260 + lVar15,&UNK_142f3a6f5,0x9c);
            lVar22 = *(longlong *)(&stack0x00004260 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00004530 + lVar15) =
                   *(undefined8 *)(&stack0x00004268 + lVar15);
              *(undefined8 *)(&stack0x00004538 + lVar15) =
                   *(undefined8 *)(&stack0x00004270 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x00001b80 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb518;
              pub_1406abac0(*(byte **)(&stack0x00001b88 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x00001b80 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x00001b88 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
            *(undefined4 *)(&stack0x00001b8c + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
            *(undefined4 *)(&stack0x00001b90 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
            *(undefined4 *)(&stack0x00001b94 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb546;
            pub_142e32760(&stack0x00004260 + lVar15,&stack0x000019c8 + lVar15,0x228);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb555;
            pdb_140eccac0(&stack0x00004530 + lVar15,0);
            lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00003d30 + lVar15) =
                   *(undefined8 *)(&stack0x00004538 + lVar15);
              *(undefined8 *)(&stack0x00003d38 + lVar15) =
                   *(undefined8 *)(&stack0x00004540 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x00004430 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb596;
              pub_1406abac0(*(byte **)(&stack0x00004438 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x00004430 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x00004438 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
            *(undefined4 *)(&stack0x0000443c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
            *(undefined4 *)(&stack0x00004440 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
            *(undefined4 *)(&stack0x00004444 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
            puVar2 = &stack0x00004530 + lVar15;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb5c7;
            pub_142e32760(puVar2,&stack0x00004260 + lVar15,0x1f8);
            *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00001bd0 + lVar15);
            *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x00001bd4 + lVar15);
            *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00001bd8 + lVar15);
            *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x00001bdc + lVar15);
            *(undefined4 *)(&stack0x00004748 + lVar15) = *(undefined4 *)(&stack0x00001be0 + lVar15);
            *(undefined4 *)(&stack0x0000474c + lVar15) = *(undefined4 *)(&stack0x00001be4 + lVar15);
            *(undefined4 *)(&stack0x00004750 + lVar15) = *(undefined4 *)(&stack0x00001be8 + lVar15);
            *(undefined4 *)(&stack0x00004754 + lVar15) = *(undefined4 *)(&stack0x00001bec + lVar15);
            *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f3a791;
            *(undefined8 *)(&stack0x00004730 + lVar15) = 0x12;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb60b;
            pdb_140ec70b0(&stack0x00003f90 + lVar15,puVar2);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb625;
            pub_142e32760(&stack0x00004260 + lVar15,&stack0x00003f90 + lVar15,0x2c8);
            *(undefined8 *)(&stack0x00004008 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004010 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004020 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004028 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004038 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004040 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004050 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004058 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004068 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004070 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004080 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004088 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004098 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040a0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040b0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040b8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040c8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040d0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040e0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040e8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004110 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004118 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004128 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004130 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003f90 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003fa0 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003fb8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003fc8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003fe0 + lVar15) = 5;
            *(undefined8 *)(&stack0x00003ff8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004000 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004018 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004030 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004048 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004060 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004078 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004090 + lVar15) = 8;
            *(undefined8 *)(&stack0x000040a8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000040c0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000040d8 + lVar15) = 4;
            *(undefined8 *)(&stack0x000040f0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000040f8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004100 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004108 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004120 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004138 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004140 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004148 + lVar15) = 0x8000000000000000;
            *(undefined8 *)(&stack0x00004160 + lVar15) = 0x8000000000000000;
            *(undefined **)(&stack0x00004178 + lVar15) = &UNK_142f39e19;
            *(undefined8 *)(&stack0x00004180 + lVar15) = 0xb;
            *(undefined8 *)(&stack0x00004188 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004198 + lVar15) = 0;
            *(undefined8 *)(&stack0x000041a8 + lVar15) = uVar21;
            *(undefined8 *)(&stack0x000041b0 + lVar15) = uVar23;
            *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
            *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3a7a3;
            *(undefined8 *)(&stack0x00003d48 + lVar15) = 0xb;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb7f0;
            pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
            if (*(longlong *)(&stack0x000040e8 + lVar15) != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fb811;
              pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000040e8 + lVar15) << 4,8);
            }
            *(undefined8 *)(&stack0x000040f8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
            *puVar3 = *(undefined8 *)(&stack0x00004530 + lVar15);
            *(undefined8 *)(&stack0x000040f0 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
            *(undefined8 *)(&stack0x00004548 + lVar15) = *(undefined8 *)(&stack0x00003fa8 + lVar15);
            *(undefined8 *)(&stack0x00004550 + lVar15) = *(undefined8 *)(&stack0x00003fb0 + lVar15);
            *(undefined8 *)(&stack0x00004570 + lVar15) = *(undefined8 *)(&stack0x00003fd0 + lVar15);
            *(undefined8 *)(&stack0x00004578 + lVar15) = *(undefined8 *)(&stack0x00003fd8 + lVar15);
            *(undefined8 *)(&stack0x00004588 + lVar15) = *(undefined8 *)(&stack0x00003fe8 + lVar15);
            *(undefined8 *)(&stack0x00004590 + lVar15) = *(undefined8 *)(&stack0x00003ff0 + lVar15);
            *(undefined8 *)(&stack0x000045a8 + lVar15) = *puVar1;
            *(undefined8 *)(&stack0x000045b0 + lVar15) = *(undefined8 *)(&stack0x00004010 + lVar15);
            *(undefined8 *)(&stack0x000045c0 + lVar15) = *(undefined8 *)(&stack0x00004020 + lVar15);
            *(undefined8 *)(&stack0x000045c8 + lVar15) = *(undefined8 *)(&stack0x00004028 + lVar15);
            *(undefined8 *)(&stack0x000045d8 + lVar15) = *(undefined8 *)(&stack0x00004038 + lVar15);
            *(undefined8 *)(&stack0x000045e0 + lVar15) = *(undefined8 *)(&stack0x00004040 + lVar15);
            *(undefined8 *)(&stack0x000045f0 + lVar15) = *(undefined8 *)(&stack0x00004050 + lVar15);
            *(undefined8 *)(&stack0x000045f8 + lVar15) = *(undefined8 *)(&stack0x00004058 + lVar15);
            *(undefined8 *)(&stack0x00004608 + lVar15) = *(undefined8 *)(&stack0x00004068 + lVar15);
            *(undefined8 *)(&stack0x00004610 + lVar15) = *(undefined8 *)(&stack0x00004070 + lVar15);
            *(undefined8 *)(&stack0x00004620 + lVar15) = *(undefined8 *)(&stack0x00004080 + lVar15);
            *(undefined8 *)(&stack0x00004628 + lVar15) = *(undefined8 *)(&stack0x00004088 + lVar15);
            *(undefined8 *)(&stack0x00004638 + lVar15) = *(undefined8 *)(&stack0x00004098 + lVar15);
            *(undefined8 *)(&stack0x00004640 + lVar15) = *(undefined8 *)(&stack0x000040a0 + lVar15);
            *(undefined8 *)(&stack0x00004650 + lVar15) = *(undefined8 *)(&stack0x000040b0 + lVar15);
            *(undefined8 *)(&stack0x00004658 + lVar15) = *(undefined8 *)(&stack0x000040b8 + lVar15);
            *(undefined8 *)(&stack0x00004668 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004670 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004680 + lVar15) = *(undefined8 *)(&stack0x000040e0 + lVar15);
            *(undefined8 *)(&stack0x00004688 + lVar15) = *(undefined8 *)(&stack0x000040e8 + lVar15);
            *(undefined8 *)(&stack0x000046b0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046b8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046c8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046d0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046f0 + lVar15) = *(undefined8 *)(&stack0x00004150 + lVar15);
            *(undefined8 *)(&stack0x000046f8 + lVar15) = *(undefined8 *)(&stack0x00004158 + lVar15);
            *(undefined8 *)(&stack0x00004708 + lVar15) = *(undefined8 *)(&stack0x00004168 + lVar15);
            *(undefined8 *)(&stack0x00004710 + lVar15) = *(undefined8 *)(&stack0x00004170 + lVar15);
            *(undefined4 *)(&stack0x00004530 + lVar15) = *(undefined4 *)(&stack0x00003f90 + lVar15);
            *(undefined4 *)(&stack0x00004534 + lVar15) = *(undefined4 *)(&stack0x00003f94 + lVar15);
            *(undefined4 *)(&stack0x00004538 + lVar15) = *(undefined4 *)(&stack0x00003f98 + lVar15);
            *(undefined4 *)(&stack0x0000453c + lVar15) = *(undefined4 *)(&stack0x00003f9c + lVar15);
            *(undefined8 *)(&stack0x00004540 + lVar15) = *(undefined8 *)(&stack0x00003fa0 + lVar15);
            *(undefined4 *)(&stack0x00004558 + lVar15) = *(undefined4 *)(&stack0x00003fb8 + lVar15);
            *(undefined4 *)(&stack0x0000455c + lVar15) = *(undefined4 *)(&stack0x00003fbc + lVar15);
            *(undefined4 *)(&stack0x00004560 + lVar15) = *(undefined4 *)(&stack0x00003fc0 + lVar15);
            *(undefined4 *)(&stack0x00004564 + lVar15) = *(undefined4 *)(&stack0x00003fc4 + lVar15);
            *(undefined8 *)(&stack0x00004568 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004580 + lVar15) = 5;
            *(undefined8 *)(&stack0x00004598 + lVar15) = 0;
            *(undefined8 *)(&stack0x000045a0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000045b8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000045d0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000045e8 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004600 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004618 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004630 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004648 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004660 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004678 + lVar15) = 4;
            *(undefined4 *)(&stack0x00004690 + lVar15) = *(undefined4 *)(&stack0x000040f0 + lVar15);
            *(undefined4 *)(&stack0x00004694 + lVar15) = *(undefined4 *)(&stack0x000040f4 + lVar15);
            *(undefined4 *)(&stack0x00004698 + lVar15) = *(undefined4 *)(&stack0x000040f8 + lVar15);
            *(undefined4 *)(&stack0x0000469c + lVar15) = *(undefined4 *)(&stack0x000040fc + lVar15);
            *(undefined8 *)(&stack0x000046a0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046a8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000046c0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000046d8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000046e0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046e8 + lVar15) = 0x8000000000000000;
            *(undefined8 *)(&stack0x00004700 + lVar15) = 0x8000000000000000;
            *(undefined **)(&stack0x00004718 + lVar15) = &UNK_142f39e19;
            *(undefined8 *)(&stack0x00004720 + lVar15) = 0xb;
            *(undefined8 *)(&stack0x00004728 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004738 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004748 + lVar15) = uVar21;
            *(undefined8 *)(&stack0x00004750 + lVar15) = uVar23;
            if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
               (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
              *(undefined8 *)(&stack0x00004788 + lVar15) =
                   *(undefined8 *)(&stack0x00004588 + lVar15);
              *(undefined8 **)(&stack0x00004790 + lVar15) =
                   *(undefined8 **)(&stack0x00004590 + lVar15);
              pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
              if (pcVar11 != (code *)0x0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fba73;
                (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
              }
              uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
              if (uVar24 != 0) {
                uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fba94;
                pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
              }
            }
            *(undefined8 *)(&stack0x00004580 + lVar15) = 0;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fbab8;
            pub_142e32760(&stack0x000017a0 + lVar15,&stack0x00004530 + lVar15,0x224);
            *(undefined2 *)(&stack0x000019c5 + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
            (&stack0x000019c7)[lVar15] = (&stack0x00004757)[lVar15];
            (&stack0x000019c4)[lVar15] = 2;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fbaf3;
            pdb_140eb2530(&stack0x00003f90 + lVar15,&UNK_142f3a7ae,0x31);
            lVar22 = *(longlong *)(&stack0x00003f90 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00004530 + lVar15) =
                   *(undefined8 *)(&stack0x00003f98 + lVar15);
              *(undefined8 *)(&stack0x00004538 + lVar15) =
                   *(undefined8 *)(&stack0x00003fa0 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x00001958 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fbb34;
              pub_1406abac0(*(byte **)(&stack0x00001960 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x00001958 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x00001960 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
            *(undefined4 *)(&stack0x00001964 + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
            *(undefined4 *)(&stack0x00001968 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
            *(undefined4 *)(&stack0x0000196c + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fbb62;
            pub_142e32760(&stack0x00003f90 + lVar15,&stack0x000017a0 + lVar15,0x228);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fbb71;
            pdb_140eccac0(&stack0x00004530 + lVar15,0);
            lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00003d30 + lVar15) =
                   *(undefined8 *)(&stack0x00004538 + lVar15);
              *(undefined8 *)(&stack0x00003d38 + lVar15) =
                   *(undefined8 *)(&stack0x00004540 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x00004160 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fbbb2;
              pub_1406abac0(*(byte **)(&stack0x00004168 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x00004160 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x00004168 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
            *(undefined4 *)(&stack0x0000416c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
            *(undefined4 *)(&stack0x00004170 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
            *(undefined4 *)(&stack0x00004174 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fbbdc;
            pub_142e32760(puVar2,&stack0x00003f90 + lVar15,0x1f8);
            *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x000019a8 + lVar15);
            *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x000019ac + lVar15);
            *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x000019b0 + lVar15);
            *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x000019b4 + lVar15);
            *(undefined4 *)(&stack0x00004748 + lVar15) = *(undefined4 *)(&stack0x000019b8 + lVar15);
            *(undefined4 *)(&stack0x0000474c + lVar15) = *(undefined4 *)(&stack0x000019bc + lVar15);
            *(undefined4 *)(&stack0x00004750 + lVar15) = *(undefined4 *)(&stack0x000019c0 + lVar15);
            *(undefined4 *)(&stack0x00004754 + lVar15) = *(undefined4 *)(&stack0x000019c4 + lVar15);
            *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f3a7df;
            *(undefined8 *)(&stack0x00004730 + lVar15) = 0xb;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fbc20;
            pdb_140ec70b0(&stack0x00004260 + lVar15,puVar2);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fbc3a;
            pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00004260 + lVar15,0x2c8);
            *(undefined8 *)(&stack0x000042d8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042e0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042f0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042f8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004308 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004310 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004320 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004328 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004338 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004340 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004350 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004358 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004368 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004370 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004380 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004388 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004398 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043a0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043b0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043b8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043e0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043e8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043f8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004400 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004260 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004270 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004288 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004298 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042b0 + lVar15) = 5;
            *(undefined8 *)(&stack0x000042c8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042d0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000042e8 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004300 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004318 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004330 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004348 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004360 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004378 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004390 + lVar15) = 8;
            *(undefined8 *)(&stack0x000043a8 + lVar15) = 4;
            *(undefined8 *)(&stack0x000043c0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000043c8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043d0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043d8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000043f0 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004408 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004410 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004418 + lVar15) = 0x8000000000000000;
            *(undefined8 *)(&stack0x00004430 + lVar15) = 0x8000000000000000;
            *(undefined **)(&stack0x00004448 + lVar15) = &UNK_142f39e24;
            *(undefined8 *)(&stack0x00004450 + lVar15) = 0x11;
            *(undefined8 *)(&stack0x00004458 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004468 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004478 + lVar15) = uVar21;
            *(undefined8 *)(&stack0x00004480 + lVar15) = uVar23;
            *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
            *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3a7ea;
            *(undefined8 *)(&stack0x00003d48 + lVar15) = 0x11;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fbe05;
            pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
            if (*(longlong *)(&stack0x000043b8 + lVar15) != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fbe26;
              pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000043b8 + lVar15) << 4,8);
            }
            *(undefined8 *)(&stack0x000043c8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
            *(undefined8 *)(&stack0x000043b8 + lVar15) = *(undefined8 *)(&stack0x00004530 + lVar15);
            *(undefined8 *)(&stack0x000043c0 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
            *(undefined8 *)(&stack0x00004548 + lVar15) = *(undefined8 *)(&stack0x00004278 + lVar15);
            *(undefined8 *)(&stack0x00004550 + lVar15) = *(undefined8 *)(&stack0x00004280 + lVar15);
            *(undefined8 *)(&stack0x00004570 + lVar15) = *(undefined8 *)(&stack0x000042a0 + lVar15);
            *(undefined8 *)(&stack0x00004578 + lVar15) = *(undefined8 *)(&stack0x000042a8 + lVar15);
            *(undefined8 *)(&stack0x00004588 + lVar15) = *(undefined8 *)(&stack0x000042b8 + lVar15);
            *(undefined8 *)(&stack0x00004590 + lVar15) = *(undefined8 *)(&stack0x000042c0 + lVar15);
            *(undefined8 *)(&stack0x000045a8 + lVar15) = *puVar4;
            *(undefined8 *)(&stack0x000045b0 + lVar15) = *(undefined8 *)(&stack0x000042e0 + lVar15);
            *(undefined8 *)(&stack0x000045c0 + lVar15) = *(undefined8 *)(&stack0x000042f0 + lVar15);
            *(undefined8 *)(&stack0x000045c8 + lVar15) = *(undefined8 *)(&stack0x000042f8 + lVar15);
            *(undefined8 *)(&stack0x000045d8 + lVar15) = *(undefined8 *)(&stack0x00004308 + lVar15);
            *(undefined8 *)(&stack0x000045e0 + lVar15) = *(undefined8 *)(&stack0x00004310 + lVar15);
            *(undefined8 *)(&stack0x000045f0 + lVar15) = *(undefined8 *)(&stack0x00004320 + lVar15);
            *(undefined8 *)(&stack0x000045f8 + lVar15) = *(undefined8 *)(&stack0x00004328 + lVar15);
            *(undefined8 *)(&stack0x00004608 + lVar15) = *(undefined8 *)(&stack0x00004338 + lVar15);
            *(undefined8 *)(&stack0x00004610 + lVar15) = *(undefined8 *)(&stack0x00004340 + lVar15);
            *(undefined8 *)(&stack0x00004620 + lVar15) = *(undefined8 *)(&stack0x00004350 + lVar15);
            *(undefined8 *)(&stack0x00004628 + lVar15) = *(undefined8 *)(&stack0x00004358 + lVar15);
            *(undefined8 *)(&stack0x00004638 + lVar15) = *(undefined8 *)(&stack0x00004368 + lVar15);
            *(undefined8 *)(&stack0x00004640 + lVar15) = *(undefined8 *)(&stack0x00004370 + lVar15);
            *(undefined8 *)(&stack0x00004650 + lVar15) = *(undefined8 *)(&stack0x00004380 + lVar15);
            *(undefined8 *)(&stack0x00004658 + lVar15) = *(undefined8 *)(&stack0x00004388 + lVar15);
            *(undefined8 *)(&stack0x00004668 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004670 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004680 + lVar15) = *(undefined8 *)(&stack0x000043b0 + lVar15);
            *(undefined8 *)(&stack0x00004688 + lVar15) = *(undefined8 *)(&stack0x000043b8 + lVar15);
            *(undefined8 *)(&stack0x000046b0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046b8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046c8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046d0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046f0 + lVar15) = *(undefined8 *)(&stack0x00004420 + lVar15);
            *(undefined8 *)(&stack0x000046f8 + lVar15) = *(undefined8 *)(&stack0x00004428 + lVar15);
            *(undefined8 *)(&stack0x00004708 + lVar15) = *(undefined8 *)(&stack0x00004438 + lVar15);
            *(undefined8 *)(&stack0x00004710 + lVar15) = *(undefined8 *)(&stack0x00004440 + lVar15);
            *(undefined4 *)(&stack0x00004530 + lVar15) = *(undefined4 *)(&stack0x00004260 + lVar15);
            *(undefined4 *)(&stack0x00004534 + lVar15) = *(undefined4 *)(&stack0x00004264 + lVar15);
            *(undefined4 *)(&stack0x00004538 + lVar15) = *(undefined4 *)(&stack0x00004268 + lVar15);
            *(undefined4 *)(&stack0x0000453c + lVar15) = *(undefined4 *)(&stack0x0000426c + lVar15);
            *(undefined8 *)(&stack0x00004540 + lVar15) = *(undefined8 *)(&stack0x00004270 + lVar15);
            *(undefined4 *)(&stack0x00004558 + lVar15) = *(undefined4 *)(&stack0x00004288 + lVar15);
            *(undefined4 *)(&stack0x0000455c + lVar15) = *(undefined4 *)(&stack0x0000428c + lVar15);
            *(undefined4 *)(&stack0x00004560 + lVar15) = *(undefined4 *)(&stack0x00004290 + lVar15);
            *(undefined4 *)(&stack0x00004564 + lVar15) = *(undefined4 *)(&stack0x00004294 + lVar15);
            *(undefined8 *)(&stack0x00004568 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004580 + lVar15) = 5;
            *(undefined8 *)(&stack0x00004598 + lVar15) = 0;
            *(undefined8 *)(&stack0x000045a0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000045b8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000045d0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000045e8 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004600 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004618 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004630 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004648 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004660 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004678 + lVar15) = 4;
            *(undefined4 *)(&stack0x00004690 + lVar15) = *(undefined4 *)(&stack0x000043c0 + lVar15);
            *(undefined4 *)(&stack0x00004694 + lVar15) = *(undefined4 *)(&stack0x000043c4 + lVar15);
            *(undefined4 *)(&stack0x00004698 + lVar15) = *(undefined4 *)(&stack0x000043c8 + lVar15);
            *(undefined4 *)(&stack0x0000469c + lVar15) = *(undefined4 *)(&stack0x000043cc + lVar15);
            *(undefined8 *)(&stack0x000046a0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046a8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000046c0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000046d8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000046e0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046e8 + lVar15) = 0x8000000000000000;
            *(undefined8 *)(&stack0x00004700 + lVar15) = 0x8000000000000000;
            *(undefined **)(&stack0x00004718 + lVar15) = &UNK_142f39e24;
            *(undefined8 *)(&stack0x00004720 + lVar15) = 0x11;
            *(undefined8 *)(&stack0x00004728 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004738 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004748 + lVar15) = uVar21;
            *(undefined8 *)(&stack0x00004750 + lVar15) = uVar23;
            if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
               (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
              *(undefined8 *)(&stack0x00004788 + lVar15) =
                   *(undefined8 *)(&stack0x00004588 + lVar15);
              *(undefined8 **)(&stack0x00004790 + lVar15) =
                   *(undefined8 **)(&stack0x00004590 + lVar15);
              pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
              if (pcVar11 != (code *)0x0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc09b;
                (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
              }
              uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
              if (uVar24 != 0) {
                uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc0bc;
                pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
              }
            }
            *(undefined8 *)(&stack0x00004580 + lVar15) = 0;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc0e0;
            pub_142e32760(&stack0x00001578 + lVar15,&stack0x00004530 + lVar15,0x224);
            *(undefined2 *)(&stack0x0000179d + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
            (&stack0x0000179f)[lVar15] = (&stack0x00004757)[lVar15];
            (&stack0x0000179c)[lVar15] = 2;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc11b;
            pdb_140eb2530(&stack0x00004260 + lVar15,&UNK_142f3a7fb,0x27);
            lVar22 = *(longlong *)(&stack0x00004260 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00004530 + lVar15) =
                   *(undefined8 *)(&stack0x00004268 + lVar15);
              *(undefined8 *)(&stack0x00004538 + lVar15) =
                   *(undefined8 *)(&stack0x00004270 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x00001730 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc15c;
              pub_1406abac0(*(byte **)(&stack0x00001738 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x00001730 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x00001738 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
            *(undefined4 *)(&stack0x0000173c + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
            *(undefined4 *)(&stack0x00001740 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
            *(undefined4 *)(&stack0x00001744 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc18a;
            pub_142e32760(&stack0x00004260 + lVar15,&stack0x00001578 + lVar15,0x228);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc199;
            pdb_140eccac0(&stack0x00004530 + lVar15,0);
            lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00003d30 + lVar15) =
                   *(undefined8 *)(&stack0x00004538 + lVar15);
              *(undefined8 *)(&stack0x00003d38 + lVar15) =
                   *(undefined8 *)(&stack0x00004540 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x00004430 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc1da;
              pub_1406abac0(*(byte **)(&stack0x00004438 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x00004430 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x00004438 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
            *(undefined4 *)(&stack0x0000443c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
            *(undefined4 *)(&stack0x00004440 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
            *(undefined4 *)(&stack0x00004444 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc204;
            pub_142e32760(puVar2,&stack0x00004260 + lVar15,0x1f8);
            *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00001780 + lVar15);
            *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x00001784 + lVar15);
            *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00001788 + lVar15);
            *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x0000178c + lVar15);
            *(undefined4 *)(&stack0x00004748 + lVar15) = *(undefined4 *)(&stack0x00001790 + lVar15);
            *(undefined4 *)(&stack0x0000474c + lVar15) = *(undefined4 *)(&stack0x00001794 + lVar15);
            *(undefined4 *)(&stack0x00004750 + lVar15) = *(undefined4 *)(&stack0x00001798 + lVar15);
            *(undefined4 *)(&stack0x00004754 + lVar15) = *(undefined4 *)(&stack0x0000179c + lVar15);
            *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f3a822;
            *(undefined8 *)(&stack0x00004730 + lVar15) = 0x11;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc248;
            pdb_140ec70b0(&stack0x00003f90 + lVar15,puVar2);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc262;
            pub_142e32760(&stack0x00004260 + lVar15,&stack0x00003f90 + lVar15,0x2c8);
            *(undefined8 *)(&stack0x00004008 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004010 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004020 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004028 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004038 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004040 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004050 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004058 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004068 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004070 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004080 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004088 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004098 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040a0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040b0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040b8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040c8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040d0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040e0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040e8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004110 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004118 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004128 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004130 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003f90 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003fa0 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003fb8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003fc8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003fe0 + lVar15) = 5;
            *(undefined8 *)(&stack0x00003ff8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004000 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004018 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004030 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004048 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004060 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004078 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004090 + lVar15) = 8;
            *(undefined8 *)(&stack0x000040a8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000040c0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000040d8 + lVar15) = 4;
            *(undefined8 *)(&stack0x000040f0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000040f8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004100 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004108 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004120 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004138 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004140 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004148 + lVar15) = 0x8000000000000000;
            *(undefined8 *)(&stack0x00004160 + lVar15) = 0x8000000000000000;
            *(undefined **)(&stack0x00004178 + lVar15) = &UNK_142f39e35;
            *(undefined8 *)(&stack0x00004180 + lVar15) = 0xb;
            *(undefined8 *)(&stack0x00004188 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004198 + lVar15) = 0;
            *(undefined8 *)(&stack0x000041a8 + lVar15) = uVar21;
            *(undefined8 *)(&stack0x000041b0 + lVar15) = uVar23;
            *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
            *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3a833;
            *(undefined8 *)(&stack0x00003d48 + lVar15) = 0xb;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc42d;
            pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
            if (*(longlong *)(&stack0x000040e8 + lVar15) != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc44e;
              pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000040e8 + lVar15) << 4,8);
            }
            *(undefined8 *)(&stack0x000040f8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
            *puVar3 = *(undefined8 *)(&stack0x00004530 + lVar15);
            *(undefined8 *)(&stack0x000040f0 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
            *(undefined8 *)(&stack0x00004548 + lVar15) = *(undefined8 *)(&stack0x00003fa8 + lVar15);
            *(undefined8 *)(&stack0x00004550 + lVar15) = *(undefined8 *)(&stack0x00003fb0 + lVar15);
            *(undefined8 *)(&stack0x00004570 + lVar15) = *(undefined8 *)(&stack0x00003fd0 + lVar15);
            *(undefined8 *)(&stack0x00004578 + lVar15) = *(undefined8 *)(&stack0x00003fd8 + lVar15);
            *(undefined8 *)(&stack0x00004588 + lVar15) = *(undefined8 *)(&stack0x00003fe8 + lVar15);
            *(undefined8 *)(&stack0x00004590 + lVar15) = *(undefined8 *)(&stack0x00003ff0 + lVar15);
            *(undefined8 *)(&stack0x000045a8 + lVar15) = *puVar1;
            *(undefined8 *)(&stack0x000045b0 + lVar15) = *(undefined8 *)(&stack0x00004010 + lVar15);
            *(undefined8 *)(&stack0x000045c0 + lVar15) = *(undefined8 *)(&stack0x00004020 + lVar15);
            *(undefined8 *)(&stack0x000045c8 + lVar15) = *(undefined8 *)(&stack0x00004028 + lVar15);
            *(undefined8 *)(&stack0x000045d8 + lVar15) = *(undefined8 *)(&stack0x00004038 + lVar15);
            *(undefined8 *)(&stack0x000045e0 + lVar15) = *(undefined8 *)(&stack0x00004040 + lVar15);
            *(undefined8 *)(&stack0x000045f0 + lVar15) = *(undefined8 *)(&stack0x00004050 + lVar15);
            *(undefined8 *)(&stack0x000045f8 + lVar15) = *(undefined8 *)(&stack0x00004058 + lVar15);
            *(undefined8 *)(&stack0x00004608 + lVar15) = *(undefined8 *)(&stack0x00004068 + lVar15);
            *(undefined8 *)(&stack0x00004610 + lVar15) = *(undefined8 *)(&stack0x00004070 + lVar15);
            *(undefined8 *)(&stack0x00004620 + lVar15) = *(undefined8 *)(&stack0x00004080 + lVar15);
            *(undefined8 *)(&stack0x00004628 + lVar15) = *(undefined8 *)(&stack0x00004088 + lVar15);
            *(undefined8 *)(&stack0x00004638 + lVar15) = *(undefined8 *)(&stack0x00004098 + lVar15);
            *(undefined8 *)(&stack0x00004640 + lVar15) = *(undefined8 *)(&stack0x000040a0 + lVar15);
            *(undefined8 *)(&stack0x00004650 + lVar15) = *(undefined8 *)(&stack0x000040b0 + lVar15);
            *(undefined8 *)(&stack0x00004658 + lVar15) = *(undefined8 *)(&stack0x000040b8 + lVar15);
            *(undefined8 *)(&stack0x00004668 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004670 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004680 + lVar15) = *(undefined8 *)(&stack0x000040e0 + lVar15);
            *(undefined8 *)(&stack0x00004688 + lVar15) = *(undefined8 *)(&stack0x000040e8 + lVar15);
            *(undefined8 *)(&stack0x000046b0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046b8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046c8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046d0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046f0 + lVar15) = *(undefined8 *)(&stack0x00004150 + lVar15);
            *(undefined8 *)(&stack0x000046f8 + lVar15) = *(undefined8 *)(&stack0x00004158 + lVar15);
            *(undefined8 *)(&stack0x00004708 + lVar15) = *(undefined8 *)(&stack0x00004168 + lVar15);
            *(undefined8 *)(&stack0x00004710 + lVar15) = *(undefined8 *)(&stack0x00004170 + lVar15);
            *(undefined4 *)(&stack0x00004530 + lVar15) = *(undefined4 *)(&stack0x00003f90 + lVar15);
            *(undefined4 *)(&stack0x00004534 + lVar15) = *(undefined4 *)(&stack0x00003f94 + lVar15);
            *(undefined4 *)(&stack0x00004538 + lVar15) = *(undefined4 *)(&stack0x00003f98 + lVar15);
            *(undefined4 *)(&stack0x0000453c + lVar15) = *(undefined4 *)(&stack0x00003f9c + lVar15);
            *(undefined8 *)(&stack0x00004540 + lVar15) = *(undefined8 *)(&stack0x00003fa0 + lVar15);
            *(undefined4 *)(&stack0x00004558 + lVar15) = *(undefined4 *)(&stack0x00003fb8 + lVar15);
            *(undefined4 *)(&stack0x0000455c + lVar15) = *(undefined4 *)(&stack0x00003fbc + lVar15);
            *(undefined4 *)(&stack0x00004560 + lVar15) = *(undefined4 *)(&stack0x00003fc0 + lVar15);
            *(undefined4 *)(&stack0x00004564 + lVar15) = *(undefined4 *)(&stack0x00003fc4 + lVar15);
            *(undefined8 *)(&stack0x00004568 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004580 + lVar15) = 5;
            *(undefined8 *)(&stack0x00004598 + lVar15) = 0;
            *(undefined8 *)(&stack0x000045a0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000045b8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000045d0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000045e8 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004600 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004618 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004630 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004648 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004660 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004678 + lVar15) = 4;
            *(undefined4 *)(&stack0x00004690 + lVar15) = *(undefined4 *)(&stack0x000040f0 + lVar15);
            *(undefined4 *)(&stack0x00004694 + lVar15) = *(undefined4 *)(&stack0x000040f4 + lVar15);
            *(undefined4 *)(&stack0x00004698 + lVar15) = *(undefined4 *)(&stack0x000040f8 + lVar15);
            *(undefined4 *)(&stack0x0000469c + lVar15) = *(undefined4 *)(&stack0x000040fc + lVar15);
            *(undefined8 *)(&stack0x000046a0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046a8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000046c0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000046d8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000046e0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046e8 + lVar15) = 0x8000000000000000;
            *(undefined8 *)(&stack0x00004700 + lVar15) = 0x8000000000000000;
            *(undefined **)(&stack0x00004718 + lVar15) = &UNK_142f39e35;
            *(undefined8 *)(&stack0x00004720 + lVar15) = 0xb;
            *(undefined8 *)(&stack0x00004728 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004738 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004748 + lVar15) = uVar21;
            *(undefined8 *)(&stack0x00004750 + lVar15) = uVar23;
            if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
               (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
              *(undefined8 *)(&stack0x00004788 + lVar15) =
                   *(undefined8 *)(&stack0x00004588 + lVar15);
              *(undefined8 **)(&stack0x00004790 + lVar15) =
                   *(undefined8 **)(&stack0x00004590 + lVar15);
              pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
              if (pcVar11 != (code *)0x0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc6b0;
                (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
              }
              uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
              if (uVar24 != 0) {
                uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc6d1;
                pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
              }
            }
            *(undefined8 *)(&stack0x00004580 + lVar15) = 0;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc6f5;
            pub_142e32760(&stack0x00001350 + lVar15,&stack0x00004530 + lVar15,0x224);
            *(undefined2 *)(&stack0x00001575 + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
            (&stack0x00001577)[lVar15] = (&stack0x00004757)[lVar15];
            (&stack0x00001574)[lVar15] = 2;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc730;
            pdb_140eb2530(&stack0x00003f90 + lVar15,&UNK_142f3a83e,0x23);
            lVar22 = *(longlong *)(&stack0x00003f90 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00004530 + lVar15) =
                   *(undefined8 *)(&stack0x00003f98 + lVar15);
              *(undefined8 *)(&stack0x00004538 + lVar15) =
                   *(undefined8 *)(&stack0x00003fa0 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x00001508 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc771;
              pub_1406abac0(*(byte **)(&stack0x00001510 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x00001508 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x00001510 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
            *(undefined4 *)(&stack0x00001514 + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
            *(undefined4 *)(&stack0x00001518 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
            *(undefined4 *)(&stack0x0000151c + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc79f;
            pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00001350 + lVar15,0x228);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc7ae;
            pdb_140eccac0(&stack0x00004530 + lVar15,0);
            lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00003d30 + lVar15) =
                   *(undefined8 *)(&stack0x00004538 + lVar15);
              *(undefined8 *)(&stack0x00003d38 + lVar15) =
                   *(undefined8 *)(&stack0x00004540 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x00004160 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc7ef;
              pub_1406abac0(*(byte **)(&stack0x00004168 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x00004160 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x00004168 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
            *(undefined4 *)(&stack0x0000416c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
            *(undefined4 *)(&stack0x00004170 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
            *(undefined4 *)(&stack0x00004174 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc819;
            pub_142e32760(puVar2,&stack0x00003f90 + lVar15,0x1f8);
            *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00001558 + lVar15);
            *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x0000155c + lVar15);
            *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00001560 + lVar15);
            *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x00001564 + lVar15);
            *(undefined4 *)(&stack0x00004748 + lVar15) = *(undefined4 *)(&stack0x00001568 + lVar15);
            *(undefined4 *)(&stack0x0000474c + lVar15) = *(undefined4 *)(&stack0x0000156c + lVar15);
            *(undefined4 *)(&stack0x00004750 + lVar15) = *(undefined4 *)(&stack0x00001570 + lVar15);
            *(undefined4 *)(&stack0x00004754 + lVar15) = *(undefined4 *)(&stack0x00001574 + lVar15);
            *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f3a861;
            *(undefined8 *)(&stack0x00004730 + lVar15) = 0xb;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc85d;
            pdb_140ec70b0(&stack0x00004260 + lVar15,puVar2);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fc877;
            pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00004260 + lVar15,0x2c8);
            *(undefined8 *)(&stack0x000042d8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042e0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042f0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042f8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004308 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004310 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004320 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004328 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004338 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004340 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004350 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004358 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004368 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004370 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004380 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004388 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004398 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043a0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043b0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043b8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043e0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043e8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043f8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004400 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004260 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004270 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004288 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004298 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042b0 + lVar15) = 5;
            *(undefined8 *)(&stack0x000042c8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042d0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000042e8 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004300 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004318 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004330 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004348 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004360 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004378 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004390 + lVar15) = 8;
            *(undefined8 *)(&stack0x000043a8 + lVar15) = 4;
            *(undefined8 *)(&stack0x000043c0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000043c8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043d0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043d8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000043f0 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004408 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004410 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004418 + lVar15) = 0x8000000000000000;
            *(undefined8 *)(&stack0x00004430 + lVar15) = 0x8000000000000000;
            *(undefined **)(&stack0x00004448 + lVar15) = &UNK_142f39e40;
            *(undefined8 *)(&stack0x00004450 + lVar15) = 2;
            *(undefined8 *)(&stack0x00004458 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004468 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004478 + lVar15) = 0x11000000110000;
            *(undefined4 *)(&stack0x00004480 + lVar15) = 0;
            *(undefined2 *)(&stack0x00004484 + lVar15) = 0xd09;
            *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
            *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3a86c;
            *(undefined8 *)(&stack0x00003d48 + lVar15) = 2;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fca55;
            pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
            if (*(longlong *)(&stack0x000043b8 + lVar15) != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fca76;
              pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000043b8 + lVar15) << 4,8);
            }
            *(undefined8 *)(&stack0x000043c8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
            *(undefined4 *)(&stack0x000043b8 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
            *(undefined4 *)(&stack0x000043bc + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
            *(undefined4 *)(&stack0x000043c0 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
            *(undefined4 *)(&stack0x000043c4 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fcaae;
            pub_142e32760(&stack0x00004530 + lVar15,&stack0x00004260 + lVar15,0x228);
            if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
               (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
              *(undefined8 *)(&stack0x00004788 + lVar15) =
                   *(undefined8 *)(&stack0x00004588 + lVar15);
              *(undefined8 **)(&stack0x00004790 + lVar15) =
                   *(undefined8 **)(&stack0x00004590 + lVar15);
              pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
              if (pcVar11 != (code *)0x0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fcaed;
                (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
              }
              uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
              if (uVar24 != 0) {
                uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fcb0e;
                pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
              }
            }
            *(undefined8 *)(&stack0x00004580 + lVar15) = 3;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fcb32;
            pub_142e32760(&stack0x00001128 + lVar15,&stack0x00004530 + lVar15,0x224);
            *(undefined2 *)(&stack0x0000134d + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
            (&stack0x0000134f)[lVar15] = (&stack0x00004757)[lVar15];
            (&stack0x0000134c)[lVar15] = 0;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fcb6d;
            pdb_140eb2530(&stack0x00004260 + lVar15,&UNK_142f3a86e,0x49);
            lVar22 = *(longlong *)(&stack0x00004260 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00004530 + lVar15) =
                   *(undefined8 *)(&stack0x00004268 + lVar15);
              *(undefined8 *)(&stack0x00004538 + lVar15) =
                   *(undefined8 *)(&stack0x00004270 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x000012e0 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fcbae;
              pub_1406abac0(*(byte **)(&stack0x000012e8 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x000012e0 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x000012e8 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
            *(undefined4 *)(&stack0x000012ec + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
            *(undefined4 *)(&stack0x000012f0 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
            *(undefined4 *)(&stack0x000012f4 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fcbdc;
            pub_142e32760(&stack0x00004260 + lVar15,&stack0x00001128 + lVar15,0x228);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fcbeb;
            pdb_140eccac0(&stack0x00004530 + lVar15,0);
            lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00003d30 + lVar15) =
                   *(undefined8 *)(&stack0x00004538 + lVar15);
              *(undefined8 *)(&stack0x00003d38 + lVar15) =
                   *(undefined8 *)(&stack0x00004540 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x00004430 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fcc2c;
              pub_1406abac0(*(byte **)(&stack0x00004438 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x00004430 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x00004438 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
            *(undefined4 *)(&stack0x0000443c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
            *(undefined4 *)(&stack0x00004440 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
            *(undefined4 *)(&stack0x00004444 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fcc56;
            pub_142e32760(puVar2,&stack0x00004260 + lVar15,0x1f8);
            *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00001330 + lVar15);
            *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x00001334 + lVar15);
            *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00001338 + lVar15);
            *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x0000133c + lVar15);
            *(undefined4 *)(&stack0x00004748 + lVar15) = *(undefined4 *)(&stack0x00001340 + lVar15);
            *(undefined4 *)(&stack0x0000474c + lVar15) = *(undefined4 *)(&stack0x00001344 + lVar15);
            *(undefined4 *)(&stack0x00004750 + lVar15) = *(undefined4 *)(&stack0x00001348 + lVar15);
            *(undefined4 *)(&stack0x00004754 + lVar15) = *(undefined4 *)(&stack0x0000134c + lVar15);
            *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f39e40;
            *(undefined8 *)(&stack0x00004730 + lVar15) = 2;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fcc9a;
            pdb_140ec70b0(&stack0x00003f90 + lVar15,puVar2);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fccb4;
            pub_142e32760(&stack0x00004260 + lVar15,&stack0x00003f90 + lVar15,0x2c8);
            *(undefined8 *)(&stack0x00004008 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004010 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004020 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004028 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004038 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004040 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004050 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004058 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004068 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004070 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004080 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004088 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004098 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040a0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040b0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040b8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040c8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040d0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040e0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040e8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004110 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004118 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004128 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004130 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003f90 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003fa0 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003fb8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003fc8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003fe0 + lVar15) = 5;
            *(undefined8 *)(&stack0x00003ff8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004000 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004018 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004030 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004048 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004060 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004078 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004090 + lVar15) = 8;
            *(undefined8 *)(&stack0x000040a8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000040c0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000040d8 + lVar15) = 4;
            *(undefined8 *)(&stack0x000040f0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000040f8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004100 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004108 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004120 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004138 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004140 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004148 + lVar15) = 0x8000000000000000;
            *(undefined8 *)(&stack0x00004160 + lVar15) = 0x8000000000000000;
            *(undefined **)(&stack0x00004178 + lVar15) = &UNK_142f39e42;
            *(undefined8 *)(&stack0x00004180 + lVar15) = 0x14;
            *(undefined8 *)(&stack0x00004188 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004198 + lVar15) = 0;
            *(undefined8 *)(&stack0x000041a8 + lVar15) = 0x11000000110000;
            *(undefined4 *)(&stack0x000041b0 + lVar15) = 0;
            *(undefined2 *)(&stack0x000041b4 + lVar15) = 0xd09;
            *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
            *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3a8b7;
            *(undefined8 *)(&stack0x00003d48 + lVar15) = 0x14;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fce92;
            pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
            if (*(longlong *)(&stack0x000040e8 + lVar15) != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fceb3;
              pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000040e8 + lVar15) << 4,8);
            }
            *(undefined8 *)(&stack0x000040f8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
            *(undefined4 *)puVar3 = *(undefined4 *)(&stack0x00004530 + lVar15);
            *(undefined4 *)(&stack0x000040ec + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
            *(undefined4 *)(&stack0x000040f0 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
            *(undefined4 *)(&stack0x000040f4 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fcee1;
            pub_142e32760(&stack0x00004530 + lVar15,&stack0x00003f90 + lVar15,0x228);
            if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
               (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
              *(undefined8 *)(&stack0x00004788 + lVar15) =
                   *(undefined8 *)(&stack0x00004588 + lVar15);
              *(undefined8 **)(&stack0x00004790 + lVar15) =
                   *(undefined8 **)(&stack0x00004590 + lVar15);
              pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
              if (pcVar11 != (code *)0x0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fcf20;
                (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
              }
              uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
              if (uVar24 != 0) {
                uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fcf41;
                pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
              }
            }
            *(undefined8 *)(&stack0x00004580 + lVar15) = 3;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fcf65;
            pub_142e32760(&stack0x00000f00 + lVar15,&stack0x00004530 + lVar15,0x224);
            *(undefined2 *)(&stack0x00001125 + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
            (&stack0x00001127)[lVar15] = (&stack0x00004757)[lVar15];
            (&stack0x00001124)[lVar15] = 0;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fcfa0;
            pdb_140eb2530(&stack0x00003f90 + lVar15,&UNK_142f3a8cb,0x68);
            lVar22 = *(longlong *)(&stack0x00003f90 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00004530 + lVar15) =
                   *(undefined8 *)(&stack0x00003f98 + lVar15);
              *(undefined8 *)(&stack0x00004538 + lVar15) =
                   *(undefined8 *)(&stack0x00003fa0 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x000010b8 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fcfe1;
              pub_1406abac0(*(byte **)(&stack0x000010c0 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x000010b8 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x000010c0 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
            *(undefined4 *)(&stack0x000010c4 + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
            *(undefined4 *)(&stack0x000010c8 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
            *(undefined4 *)(&stack0x000010cc + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd00f;
            pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00000f00 + lVar15,0x228);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd01e;
            pdb_140eccac0(&stack0x00004530 + lVar15,0);
            lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00003d30 + lVar15) =
                   *(undefined8 *)(&stack0x00004538 + lVar15);
              *(undefined8 *)(&stack0x00003d38 + lVar15) =
                   *(undefined8 *)(&stack0x00004540 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x00004160 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd05f;
              pub_1406abac0(*(byte **)(&stack0x00004168 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x00004160 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x00004168 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
            *(undefined4 *)(&stack0x0000416c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
            *(undefined4 *)(&stack0x00004170 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
            *(undefined4 *)(&stack0x00004174 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd089;
            pub_142e32760(puVar2,&stack0x00003f90 + lVar15,0x1f8);
            *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00001108 + lVar15);
            *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x0000110c + lVar15);
            *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00001110 + lVar15);
            *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x00001114 + lVar15);
            *(undefined4 *)(&stack0x00004748 + lVar15) = *(undefined4 *)(&stack0x00001118 + lVar15);
            *(undefined4 *)(&stack0x0000474c + lVar15) = *(undefined4 *)(&stack0x0000111c + lVar15);
            *(undefined4 *)(&stack0x00004750 + lVar15) = *(undefined4 *)(&stack0x00001120 + lVar15);
            *(undefined4 *)(&stack0x00004754 + lVar15) = *(undefined4 *)(&stack0x00001124 + lVar15);
            *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f3a933;
            *(undefined8 *)(&stack0x00004730 + lVar15) = 0x14;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd0cd;
            pdb_140ec70b0(&stack0x00004260 + lVar15,puVar2);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd0e7;
            pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00004260 + lVar15,0x2c8);
            *(undefined8 *)(&stack0x000042d8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042e0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042f0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042f8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004308 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004310 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004320 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004328 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004338 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004340 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004350 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004358 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004368 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004370 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004380 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004388 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004398 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043a0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043b0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043b8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043e0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043e8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043f8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004400 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004260 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004270 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004288 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004298 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042b0 + lVar15) = 5;
            *(undefined8 *)(&stack0x000042c8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042d0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000042e8 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004300 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004318 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004330 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004348 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004360 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004378 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004390 + lVar15) = 8;
            *(undefined8 *)(&stack0x000043a8 + lVar15) = 4;
            *(undefined8 *)(&stack0x000043c0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000043c8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043d0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043d8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000043f0 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004408 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004410 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004418 + lVar15) = 0x8000000000000000;
            *(undefined8 *)(&stack0x00004430 + lVar15) = 0x8000000000000000;
            *(undefined **)(&stack0x00004448 + lVar15) = &UNK_142f39e56;
            *(undefined8 *)(&stack0x00004450 + lVar15) = 0x13;
            *(undefined8 *)(&stack0x00004458 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004468 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004478 + lVar15) = 0x11000000110000;
            *(undefined4 *)(&stack0x00004480 + lVar15) = 0;
            *(undefined2 *)(&stack0x00004484 + lVar15) = 0xd09;
            *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
            *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3a947;
            *(undefined8 *)(&stack0x00003d48 + lVar15) = 0x13;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd2c5;
            pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
            if (*(longlong *)(&stack0x000043b8 + lVar15) != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd2e6;
              pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000043b8 + lVar15) << 4,8);
            }
            *(undefined8 *)(&stack0x000043c8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
            *(undefined4 *)(&stack0x000043b8 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
            *(undefined4 *)(&stack0x000043bc + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
            *(undefined4 *)(&stack0x000043c0 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
            *(undefined4 *)(&stack0x000043c4 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd31e;
            pub_142e32760(&stack0x00004530 + lVar15,&stack0x00004260 + lVar15,0x228);
            if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
               (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
              *(undefined8 *)(&stack0x00004788 + lVar15) =
                   *(undefined8 *)(&stack0x00004588 + lVar15);
              *(undefined8 **)(&stack0x00004790 + lVar15) =
                   *(undefined8 **)(&stack0x00004590 + lVar15);
              pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
              if (pcVar11 != (code *)0x0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd35d;
                (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
              }
              uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
              if (uVar24 != 0) {
                uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd37e;
                pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
              }
            }
            *(undefined8 *)(&stack0x00004580 + lVar15) = 1;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd3a2;
            pub_142e32760(&stack0x00000cd8 + lVar15,&stack0x00004530 + lVar15,0x224);
            *(undefined2 *)(&stack0x00000efd + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
            (&stack0x00000eff)[lVar15] = (&stack0x00004757)[lVar15];
            (&stack0x00000efc)[lVar15] = 0;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd3dd;
            pdb_140eb2530(&stack0x00004260 + lVar15,&UNK_142f3a95a,0x4f);
            lVar22 = *(longlong *)(&stack0x00004260 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00004530 + lVar15) =
                   *(undefined8 *)(&stack0x00004268 + lVar15);
              *(undefined8 *)(&stack0x00004538 + lVar15) =
                   *(undefined8 *)(&stack0x00004270 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x00000e90 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd41e;
              pub_1406abac0(*(byte **)(&stack0x00000e98 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x00000e90 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x00000e98 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
            *(undefined4 *)(&stack0x00000e9c + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
            *(undefined4 *)(&stack0x00000ea0 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
            *(undefined4 *)(&stack0x00000ea4 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd44c;
            pub_142e32760(&stack0x00004260 + lVar15,&stack0x00000cd8 + lVar15,0x228);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd45b;
            pdb_140eccac0(&stack0x00004530 + lVar15,0);
            lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00003d30 + lVar15) =
                   *(undefined8 *)(&stack0x00004538 + lVar15);
              *(undefined8 *)(&stack0x00003d38 + lVar15) =
                   *(undefined8 *)(&stack0x00004540 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x00004430 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd49c;
              pub_1406abac0(*(byte **)(&stack0x00004438 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x00004430 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x00004438 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
            *(undefined4 *)(&stack0x0000443c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
            *(undefined4 *)(&stack0x00004440 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
            *(undefined4 *)(&stack0x00004444 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd4c6;
            pub_142e32760(puVar2,&stack0x00004260 + lVar15,0x1f8);
            *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00000ee0 + lVar15);
            *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x00000ee4 + lVar15);
            *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00000ee8 + lVar15);
            *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x00000eec + lVar15);
            *(undefined8 *)(&stack0x00004748 + lVar15) = *(undefined8 *)(&stack0x00000ef0 + lVar15);
            *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f3a9a9;
            *(undefined8 *)(&stack0x00004730 + lVar15) = 0x13;
            *(ulonglong *)(&stack0x00004750 + lVar15) =
                 *(ulonglong *)(&stack0x00004480 + lVar15) | 4;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd51c;
            pdb_140ec70b0(&stack0x00003f90 + lVar15,puVar2);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd536;
            pub_142e32760(&stack0x00004260 + lVar15,&stack0x00003f90 + lVar15,0x2c8);
            *(undefined8 *)(&stack0x00004008 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004010 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004020 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004028 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004038 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004040 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004050 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004058 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004068 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004070 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004080 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004088 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004098 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040a0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040b0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040b8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040c8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040d0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040e0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040e8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004110 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004118 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004128 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004130 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003f90 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003fa0 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003fb8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003fc8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003fe0 + lVar15) = 5;
            *(undefined8 *)(&stack0x00003ff8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004000 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004018 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004030 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004048 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004060 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004078 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004090 + lVar15) = 8;
            *(undefined8 *)(&stack0x000040a8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000040c0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000040d8 + lVar15) = 4;
            *(undefined8 *)(&stack0x000040f0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000040f8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004100 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004108 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004120 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004138 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004140 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004148 + lVar15) = 0x8000000000000000;
            *(undefined8 *)(&stack0x00004160 + lVar15) = 0x8000000000000000;
            *(undefined **)(&stack0x00004178 + lVar15) = &UNK_142f39e69;
            *(undefined8 *)(&stack0x00004180 + lVar15) = 0x16;
            *(undefined8 *)(&stack0x00004188 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004198 + lVar15) = 0;
            *(undefined8 *)(&stack0x000041a8 + lVar15) = uVar21;
            *(undefined8 *)(&stack0x000041b0 + lVar15) = uVar23;
            *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
            *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3a9bc;
            *(undefined8 *)(&stack0x00003d48 + lVar15) = 0x16;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd701;
            pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
            if (*(longlong *)(&stack0x000040e8 + lVar15) != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd722;
              pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000040e8 + lVar15) << 4,8);
            }
            *(undefined8 *)(&stack0x000040f8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
            *puVar3 = *(undefined8 *)(&stack0x00004530 + lVar15);
            *(undefined8 *)(&stack0x000040f0 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
            *(undefined8 *)(&stack0x00004548 + lVar15) = *(undefined8 *)(&stack0x00003fa8 + lVar15);
            *(undefined8 *)(&stack0x00004550 + lVar15) = *(undefined8 *)(&stack0x00003fb0 + lVar15);
            *(undefined8 *)(&stack0x00004570 + lVar15) = *(undefined8 *)(&stack0x00003fd0 + lVar15);
            *(undefined8 *)(&stack0x00004578 + lVar15) = *(undefined8 *)(&stack0x00003fd8 + lVar15);
            *(undefined8 *)(&stack0x00004588 + lVar15) = *(undefined8 *)(&stack0x00003fe8 + lVar15);
            *(undefined8 *)(&stack0x00004590 + lVar15) = *(undefined8 *)(&stack0x00003ff0 + lVar15);
            *(undefined8 *)(&stack0x000045a8 + lVar15) = *puVar1;
            *(undefined8 *)(&stack0x000045b0 + lVar15) = *(undefined8 *)(&stack0x00004010 + lVar15);
            *(undefined8 *)(&stack0x000045c0 + lVar15) = *(undefined8 *)(&stack0x00004020 + lVar15);
            *(undefined8 *)(&stack0x000045c8 + lVar15) = *(undefined8 *)(&stack0x00004028 + lVar15);
            *(undefined8 *)(&stack0x000045d8 + lVar15) = *(undefined8 *)(&stack0x00004038 + lVar15);
            *(undefined8 *)(&stack0x000045e0 + lVar15) = *(undefined8 *)(&stack0x00004040 + lVar15);
            *(undefined8 *)(&stack0x000045f0 + lVar15) = *(undefined8 *)(&stack0x00004050 + lVar15);
            *(undefined8 *)(&stack0x000045f8 + lVar15) = *(undefined8 *)(&stack0x00004058 + lVar15);
            *(undefined8 *)(&stack0x00004608 + lVar15) = *(undefined8 *)(&stack0x00004068 + lVar15);
            *(undefined8 *)(&stack0x00004610 + lVar15) = *(undefined8 *)(&stack0x00004070 + lVar15);
            *(undefined8 *)(&stack0x00004620 + lVar15) = *(undefined8 *)(&stack0x00004080 + lVar15);
            *(undefined8 *)(&stack0x00004628 + lVar15) = *(undefined8 *)(&stack0x00004088 + lVar15);
            *(undefined8 *)(&stack0x00004638 + lVar15) = *(undefined8 *)(&stack0x00004098 + lVar15);
            *(undefined8 *)(&stack0x00004640 + lVar15) = *(undefined8 *)(&stack0x000040a0 + lVar15);
            *(undefined8 *)(&stack0x00004650 + lVar15) = *(undefined8 *)(&stack0x000040b0 + lVar15);
            *(undefined8 *)(&stack0x00004658 + lVar15) = *(undefined8 *)(&stack0x000040b8 + lVar15);
            *(undefined8 *)(&stack0x00004668 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004670 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004680 + lVar15) = *(undefined8 *)(&stack0x000040e0 + lVar15);
            *(undefined8 *)(&stack0x00004688 + lVar15) = *(undefined8 *)(&stack0x000040e8 + lVar15);
            *(undefined8 *)(&stack0x000046b0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046b8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046c8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046d0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046f0 + lVar15) = *(undefined8 *)(&stack0x00004150 + lVar15);
            *(undefined8 *)(&stack0x000046f8 + lVar15) = *(undefined8 *)(&stack0x00004158 + lVar15);
            *(undefined8 *)(&stack0x00004708 + lVar15) = *(undefined8 *)(&stack0x00004168 + lVar15);
            *(undefined8 *)(&stack0x00004710 + lVar15) = *(undefined8 *)(&stack0x00004170 + lVar15);
            *(undefined4 *)(&stack0x00004530 + lVar15) = *(undefined4 *)(&stack0x00003f90 + lVar15);
            *(undefined4 *)(&stack0x00004534 + lVar15) = *(undefined4 *)(&stack0x00003f94 + lVar15);
            *(undefined4 *)(&stack0x00004538 + lVar15) = *(undefined4 *)(&stack0x00003f98 + lVar15);
            *(undefined4 *)(&stack0x0000453c + lVar15) = *(undefined4 *)(&stack0x00003f9c + lVar15);
            *(undefined8 *)(&stack0x00004540 + lVar15) = *(undefined8 *)(&stack0x00003fa0 + lVar15);
            *(undefined4 *)(&stack0x00004558 + lVar15) = *(undefined4 *)(&stack0x00003fb8 + lVar15);
            *(undefined4 *)(&stack0x0000455c + lVar15) = *(undefined4 *)(&stack0x00003fbc + lVar15);
            *(undefined4 *)(&stack0x00004560 + lVar15) = *(undefined4 *)(&stack0x00003fc0 + lVar15);
            *(undefined4 *)(&stack0x00004564 + lVar15) = *(undefined4 *)(&stack0x00003fc4 + lVar15);
            *(undefined8 *)(&stack0x00004568 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004580 + lVar15) = 5;
            *(undefined8 *)(&stack0x00004598 + lVar15) = 0;
            *(undefined8 *)(&stack0x000045a0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000045b8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000045d0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000045e8 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004600 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004618 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004630 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004648 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004660 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004678 + lVar15) = 4;
            *(undefined4 *)(&stack0x00004690 + lVar15) = *(undefined4 *)(&stack0x000040f0 + lVar15);
            *(undefined4 *)(&stack0x00004694 + lVar15) = *(undefined4 *)(&stack0x000040f4 + lVar15);
            *(undefined4 *)(&stack0x00004698 + lVar15) = *(undefined4 *)(&stack0x000040f8 + lVar15);
            *(undefined4 *)(&stack0x0000469c + lVar15) = *(undefined4 *)(&stack0x000040fc + lVar15);
            *(undefined8 *)(&stack0x000046a0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046a8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000046c0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000046d8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000046e0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046e8 + lVar15) = 0x8000000000000000;
            *(undefined8 *)(&stack0x00004700 + lVar15) = 0x8000000000000000;
            *(undefined **)(&stack0x00004718 + lVar15) = &UNK_142f39e69;
            *(undefined8 *)(&stack0x00004720 + lVar15) = 0x16;
            *(undefined8 *)(&stack0x00004728 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004738 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004748 + lVar15) = uVar21;
            *(undefined8 *)(&stack0x00004750 + lVar15) = uVar23;
            if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
               (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
              *(undefined8 *)(&stack0x00004788 + lVar15) =
                   *(undefined8 *)(&stack0x00004588 + lVar15);
              *(undefined8 **)(&stack0x00004790 + lVar15) =
                   *(undefined8 **)(&stack0x00004590 + lVar15);
              pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
              if (pcVar11 != (code *)0x0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd984;
                (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
              }
              uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
              if (uVar24 != 0) {
                uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd9a5;
                pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
              }
            }
            *(undefined8 *)(&stack0x00004580 + lVar15) = 0;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fd9c9;
            pub_142e32760(&stack0x00000ab0 + lVar15,&stack0x00004530 + lVar15,0x224);
            *(undefined2 *)(&stack0x00000cd5 + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
            (&stack0x00000cd7)[lVar15] = (&stack0x00004757)[lVar15];
            (&stack0x00000cd4)[lVar15] = 2;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fda04;
            pdb_140eb2530(&stack0x00003f90 + lVar15,&UNK_142f3a9d2,0x3f);
            lVar22 = *(longlong *)(&stack0x00003f90 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00004530 + lVar15) =
                   *(undefined8 *)(&stack0x00003f98 + lVar15);
              *(undefined8 *)(&stack0x00004538 + lVar15) =
                   *(undefined8 *)(&stack0x00003fa0 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x00000c68 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fda45;
              pub_1406abac0(*(byte **)(&stack0x00000c70 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x00000c68 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x00000c70 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
            *(undefined4 *)(&stack0x00000c74 + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
            *(undefined4 *)(&stack0x00000c78 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
            *(undefined4 *)(&stack0x00000c7c + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fda73;
            pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00000ab0 + lVar15,0x228);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fda82;
            pdb_140eccac0(&stack0x00004530 + lVar15,0);
            lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00003d30 + lVar15) =
                   *(undefined8 *)(&stack0x00004538 + lVar15);
              *(undefined8 *)(&stack0x00003d38 + lVar15) =
                   *(undefined8 *)(&stack0x00004540 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x00004160 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fdac3;
              pub_1406abac0(*(byte **)(&stack0x00004168 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x00004160 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x00004168 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
            *(undefined4 *)(&stack0x0000416c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
            *(undefined4 *)(&stack0x00004170 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
            *(undefined4 *)(&stack0x00004174 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fdaed;
            pub_142e32760(puVar2,&stack0x00003f90 + lVar15,0x1f8);
            *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00000cb8 + lVar15);
            *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x00000cbc + lVar15);
            *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00000cc0 + lVar15);
            *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x00000cc4 + lVar15);
            *(undefined8 *)(&stack0x00004748 + lVar15) = *(undefined8 *)(&stack0x00000cc8 + lVar15);
            *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f3aa11;
            *(undefined8 *)(&stack0x00004730 + lVar15) = 0x16;
            *(ulonglong *)(&stack0x00004750 + lVar15) =
                 *(ulonglong *)(&stack0x000041b0 + lVar15) | 4;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fdb43;
            pdb_140ec70b0(&stack0x00004260 + lVar15,puVar2);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fdb5d;
            pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00004260 + lVar15,0x2c8);
            *(undefined8 *)(&stack0x000042d8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042e0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042f0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042f8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004308 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004310 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004320 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004328 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004338 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004340 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004350 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004358 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004368 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004370 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004380 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004388 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004398 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043a0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043b0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043b8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043e0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043e8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043f8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004400 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004260 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004270 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004288 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004298 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042b0 + lVar15) = 5;
            *(undefined8 *)(&stack0x000042c8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042d0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000042e8 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004300 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004318 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004330 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004348 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004360 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004378 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004390 + lVar15) = 8;
            *(undefined8 *)(&stack0x000043a8 + lVar15) = 4;
            *(undefined8 *)(&stack0x000043c0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000043c8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043d0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043d8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000043f0 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004408 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004410 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004418 + lVar15) = 0x8000000000000000;
            *(undefined8 *)(&stack0x00004430 + lVar15) = 0x8000000000000000;
            *(undefined **)(&stack0x00004448 + lVar15) = &UNK_142f39e7f;
            *(undefined8 *)(&stack0x00004450 + lVar15) = 0x17;
            *(undefined8 *)(&stack0x00004458 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004468 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004478 + lVar15) = uVar21;
            *(undefined8 *)(&stack0x00004480 + lVar15) = uVar23;
            *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
            *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3aa27;
            *(undefined8 *)(&stack0x00003d48 + lVar15) = 0x17;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fdd28;
            pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
            if (*(longlong *)(&stack0x000043b8 + lVar15) != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fdd49;
              pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000043b8 + lVar15) << 4,8);
            }
            *(undefined8 *)(&stack0x000043c8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
            *(undefined8 *)(&stack0x000043b8 + lVar15) = *(undefined8 *)(&stack0x00004530 + lVar15);
            *(undefined8 *)(&stack0x000043c0 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
            *(undefined8 *)(&stack0x00004548 + lVar15) = *(undefined8 *)(&stack0x00004278 + lVar15);
            *(undefined8 *)(&stack0x00004550 + lVar15) = *(undefined8 *)(&stack0x00004280 + lVar15);
            *(undefined8 *)(&stack0x00004570 + lVar15) = *(undefined8 *)(&stack0x000042a0 + lVar15);
            *(undefined8 *)(&stack0x00004578 + lVar15) = *(undefined8 *)(&stack0x000042a8 + lVar15);
            *(undefined8 *)(&stack0x00004588 + lVar15) = *(undefined8 *)(&stack0x000042b8 + lVar15);
            *(undefined8 *)(&stack0x00004590 + lVar15) = *(undefined8 *)(&stack0x000042c0 + lVar15);
            *(undefined8 *)(&stack0x000045a8 + lVar15) = *puVar4;
            *(undefined8 *)(&stack0x000045b0 + lVar15) = *(undefined8 *)(&stack0x000042e0 + lVar15);
            *(undefined8 *)(&stack0x000045c0 + lVar15) = *(undefined8 *)(&stack0x000042f0 + lVar15);
            *(undefined8 *)(&stack0x000045c8 + lVar15) = *(undefined8 *)(&stack0x000042f8 + lVar15);
            *(undefined8 *)(&stack0x000045d8 + lVar15) = *(undefined8 *)(&stack0x00004308 + lVar15);
            *(undefined8 *)(&stack0x000045e0 + lVar15) = *(undefined8 *)(&stack0x00004310 + lVar15);
            *(undefined8 *)(&stack0x000045f0 + lVar15) = *(undefined8 *)(&stack0x00004320 + lVar15);
            *(undefined8 *)(&stack0x000045f8 + lVar15) = *(undefined8 *)(&stack0x00004328 + lVar15);
            *(undefined8 *)(&stack0x00004608 + lVar15) = *(undefined8 *)(&stack0x00004338 + lVar15);
            *(undefined8 *)(&stack0x00004610 + lVar15) = *(undefined8 *)(&stack0x00004340 + lVar15);
            *(undefined8 *)(&stack0x00004620 + lVar15) = *(undefined8 *)(&stack0x00004350 + lVar15);
            *(undefined8 *)(&stack0x00004628 + lVar15) = *(undefined8 *)(&stack0x00004358 + lVar15);
            *(undefined8 *)(&stack0x00004638 + lVar15) = *(undefined8 *)(&stack0x00004368 + lVar15);
            *(undefined8 *)(&stack0x00004640 + lVar15) = *(undefined8 *)(&stack0x00004370 + lVar15);
            *(undefined8 *)(&stack0x00004650 + lVar15) = *(undefined8 *)(&stack0x00004380 + lVar15);
            *(undefined8 *)(&stack0x00004658 + lVar15) = *(undefined8 *)(&stack0x00004388 + lVar15);
            *(undefined8 *)(&stack0x00004668 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004670 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004680 + lVar15) = *(undefined8 *)(&stack0x000043b0 + lVar15);
            *(undefined8 *)(&stack0x00004688 + lVar15) = *(undefined8 *)(&stack0x000043b8 + lVar15);
            *(undefined8 *)(&stack0x000046b0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046b8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046c8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046d0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046f0 + lVar15) = *(undefined8 *)(&stack0x00004420 + lVar15);
            *(undefined8 *)(&stack0x000046f8 + lVar15) = *(undefined8 *)(&stack0x00004428 + lVar15);
            *(undefined8 *)(&stack0x00004708 + lVar15) = *(undefined8 *)(&stack0x00004438 + lVar15);
            *(undefined8 *)(&stack0x00004710 + lVar15) = *(undefined8 *)(&stack0x00004440 + lVar15);
            *(undefined4 *)(&stack0x00004530 + lVar15) = *(undefined4 *)(&stack0x00004260 + lVar15);
            *(undefined4 *)(&stack0x00004534 + lVar15) = *(undefined4 *)(&stack0x00004264 + lVar15);
            *(undefined4 *)(&stack0x00004538 + lVar15) = *(undefined4 *)(&stack0x00004268 + lVar15);
            *(undefined4 *)(&stack0x0000453c + lVar15) = *(undefined4 *)(&stack0x0000426c + lVar15);
            *(undefined8 *)(&stack0x00004540 + lVar15) = *(undefined8 *)(&stack0x00004270 + lVar15);
            *(undefined4 *)(&stack0x00004558 + lVar15) = *(undefined4 *)(&stack0x00004288 + lVar15);
            *(undefined4 *)(&stack0x0000455c + lVar15) = *(undefined4 *)(&stack0x0000428c + lVar15);
            *(undefined4 *)(&stack0x00004560 + lVar15) = *(undefined4 *)(&stack0x00004290 + lVar15);
            *(undefined4 *)(&stack0x00004564 + lVar15) = *(undefined4 *)(&stack0x00004294 + lVar15);
            *(undefined8 *)(&stack0x00004568 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004580 + lVar15) = 5;
            *(undefined8 *)(&stack0x00004598 + lVar15) = 0;
            *(undefined8 *)(&stack0x000045a0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000045b8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000045d0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000045e8 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004600 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004618 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004630 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004648 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004660 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004678 + lVar15) = 4;
            *(undefined4 *)(&stack0x00004690 + lVar15) = *(undefined4 *)(&stack0x000043c0 + lVar15);
            *(undefined4 *)(&stack0x00004694 + lVar15) = *(undefined4 *)(&stack0x000043c4 + lVar15);
            *(undefined4 *)(&stack0x00004698 + lVar15) = *(undefined4 *)(&stack0x000043c8 + lVar15);
            *(undefined4 *)(&stack0x0000469c + lVar15) = *(undefined4 *)(&stack0x000043cc + lVar15);
            *(undefined8 *)(&stack0x000046a0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046a8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000046c0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000046d8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000046e0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046e8 + lVar15) = 0x8000000000000000;
            *(undefined8 *)(&stack0x00004700 + lVar15) = 0x8000000000000000;
            *(undefined **)(&stack0x00004718 + lVar15) = &UNK_142f39e7f;
            *(undefined8 *)(&stack0x00004720 + lVar15) = 0x17;
            *(undefined8 *)(&stack0x00004728 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004738 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004748 + lVar15) = uVar21;
            *(undefined8 *)(&stack0x00004750 + lVar15) = uVar23;
            if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
               (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
              *(undefined8 *)(&stack0x00004788 + lVar15) =
                   *(undefined8 *)(&stack0x00004588 + lVar15);
              *(undefined8 **)(&stack0x00004790 + lVar15) =
                   *(undefined8 **)(&stack0x00004590 + lVar15);
              pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
              if (pcVar11 != (code *)0x0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fdfbe;
                (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
              }
              uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
              if (uVar24 != 0) {
                uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fdfdf;
                pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
              }
            }
            *(undefined8 *)(&stack0x00004580 + lVar15) = 0;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe003;
            pub_142e32760(&stack0x00000888 + lVar15,&stack0x00004530 + lVar15,0x224);
            *(undefined2 *)(&stack0x00000aad + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
            (&stack0x00000aaf)[lVar15] = (&stack0x00004757)[lVar15];
            (&stack0x00000aac)[lVar15] = 2;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe03e;
            pdb_140eb2530(&stack0x00004260 + lVar15,&UNK_142f3aa3e,0x34);
            lVar22 = *(longlong *)(&stack0x00004260 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00004530 + lVar15) =
                   *(undefined8 *)(&stack0x00004268 + lVar15);
              *(undefined8 *)(&stack0x00004538 + lVar15) =
                   *(undefined8 *)(&stack0x00004270 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x00000a40 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe07f;
              pub_1406abac0(*(byte **)(&stack0x00000a48 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x00000a40 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x00000a48 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
            *(undefined4 *)(&stack0x00000a4c + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
            *(undefined4 *)(&stack0x00000a50 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
            *(undefined4 *)(&stack0x00000a54 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe0ad;
            pub_142e32760(&stack0x00004260 + lVar15,&stack0x00000888 + lVar15,0x228);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe0bc;
            pdb_140eccac0(&stack0x00004530 + lVar15,0);
            lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00003d30 + lVar15) =
                   *(undefined8 *)(&stack0x00004538 + lVar15);
              *(undefined8 *)(&stack0x00003d38 + lVar15) =
                   *(undefined8 *)(&stack0x00004540 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x00004430 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe0fd;
              pub_1406abac0(*(byte **)(&stack0x00004438 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x00004430 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x00004438 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
            *(undefined4 *)(&stack0x0000443c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
            *(undefined4 *)(&stack0x00004440 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
            *(undefined4 *)(&stack0x00004444 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe127;
            pub_142e32760(puVar2,&stack0x00004260 + lVar15,0x1f8);
            *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00000a90 + lVar15);
            *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x00000a94 + lVar15);
            *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00000a98 + lVar15);
            *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x00000a9c + lVar15);
            *(undefined8 *)(&stack0x00004748 + lVar15) = *(undefined8 *)(&stack0x00000aa0 + lVar15);
            *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f3aa72;
            *(undefined8 *)(&stack0x00004730 + lVar15) = 0x17;
            *(ulonglong *)(&stack0x00004750 + lVar15) =
                 *(ulonglong *)(&stack0x00004480 + lVar15) | 4;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe17d;
            pdb_140ec70b0(&stack0x00003f90 + lVar15,puVar2);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe197;
            pub_142e32760(&stack0x00004260 + lVar15,&stack0x00003f90 + lVar15,0x2c8);
            *(undefined8 *)(&stack0x00004008 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004010 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004020 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004028 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004038 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004040 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004050 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004058 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004068 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004070 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004080 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004088 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004098 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040a0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040b0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040b8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040c8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040d0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040e0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000040e8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004110 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004118 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004128 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004130 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003f90 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003fa0 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003fb8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003fc8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003fe0 + lVar15) = 5;
            *(undefined8 *)(&stack0x00003ff8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004000 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004018 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004030 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004048 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004060 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004078 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004090 + lVar15) = 8;
            *(undefined8 *)(&stack0x000040a8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000040c0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000040d8 + lVar15) = 4;
            *(undefined8 *)(&stack0x000040f0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000040f8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004100 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004108 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004120 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004138 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004140 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004148 + lVar15) = 0x8000000000000000;
            *(undefined8 *)(&stack0x00004160 + lVar15) = 0x8000000000000000;
            *(undefined **)(&stack0x00004178 + lVar15) = &UNK_142f39e96;
            *(undefined8 *)(&stack0x00004180 + lVar15) = 0x15;
            *(undefined8 *)(&stack0x00004188 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004198 + lVar15) = 0;
            *(undefined8 *)(&stack0x000041a8 + lVar15) = uVar21;
            *(undefined8 *)(&stack0x000041b0 + lVar15) = uVar23;
            *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
            *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3aa89;
            *(undefined8 *)(&stack0x00003d48 + lVar15) = 0x15;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe362;
            pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
            if (*(longlong *)(&stack0x000040e8 + lVar15) != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe383;
              pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000040e8 + lVar15) << 4,8);
            }
            *(undefined8 *)(&stack0x000040f8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
            *puVar3 = *(undefined8 *)(&stack0x00004530 + lVar15);
            *(undefined8 *)(&stack0x000040f0 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
            *(undefined8 *)(&stack0x00004548 + lVar15) = *(undefined8 *)(&stack0x00003fa8 + lVar15);
            *(undefined8 *)(&stack0x00004550 + lVar15) = *(undefined8 *)(&stack0x00003fb0 + lVar15);
            *(undefined8 *)(&stack0x00004570 + lVar15) = *(undefined8 *)(&stack0x00003fd0 + lVar15);
            *(undefined8 *)(&stack0x00004578 + lVar15) = *(undefined8 *)(&stack0x00003fd8 + lVar15);
            *(undefined8 *)(&stack0x00004588 + lVar15) = *(undefined8 *)(&stack0x00003fe8 + lVar15);
            *(undefined8 *)(&stack0x00004590 + lVar15) = *(undefined8 *)(&stack0x00003ff0 + lVar15);
            *(undefined8 *)(&stack0x000045a8 + lVar15) = *puVar1;
            *(undefined8 *)(&stack0x000045b0 + lVar15) = *(undefined8 *)(&stack0x00004010 + lVar15);
            *(undefined8 *)(&stack0x000045c0 + lVar15) = *(undefined8 *)(&stack0x00004020 + lVar15);
            *(undefined8 *)(&stack0x000045c8 + lVar15) = *(undefined8 *)(&stack0x00004028 + lVar15);
            *(undefined8 *)(&stack0x000045d8 + lVar15) = *(undefined8 *)(&stack0x00004038 + lVar15);
            *(undefined8 *)(&stack0x000045e0 + lVar15) = *(undefined8 *)(&stack0x00004040 + lVar15);
            *(undefined8 *)(&stack0x000045f0 + lVar15) = *(undefined8 *)(&stack0x00004050 + lVar15);
            *(undefined8 *)(&stack0x000045f8 + lVar15) = *(undefined8 *)(&stack0x00004058 + lVar15);
            *(undefined8 *)(&stack0x00004608 + lVar15) = *(undefined8 *)(&stack0x00004068 + lVar15);
            *(undefined8 *)(&stack0x00004610 + lVar15) = *(undefined8 *)(&stack0x00004070 + lVar15);
            *(undefined8 *)(&stack0x00004620 + lVar15) = *(undefined8 *)(&stack0x00004080 + lVar15);
            *(undefined8 *)(&stack0x00004628 + lVar15) = *(undefined8 *)(&stack0x00004088 + lVar15);
            *(undefined8 *)(&stack0x00004638 + lVar15) = *(undefined8 *)(&stack0x00004098 + lVar15);
            *(undefined8 *)(&stack0x00004640 + lVar15) = *(undefined8 *)(&stack0x000040a0 + lVar15);
            *(undefined8 *)(&stack0x00004650 + lVar15) = *(undefined8 *)(&stack0x000040b0 + lVar15);
            *(undefined8 *)(&stack0x00004658 + lVar15) = *(undefined8 *)(&stack0x000040b8 + lVar15);
            *(undefined8 *)(&stack0x00004668 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004670 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004680 + lVar15) = *(undefined8 *)(&stack0x000040e0 + lVar15);
            *(undefined8 *)(&stack0x00004688 + lVar15) = *(undefined8 *)(&stack0x000040e8 + lVar15);
            *(undefined8 *)(&stack0x000046b0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046b8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046c8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046d0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046f0 + lVar15) = *(undefined8 *)(&stack0x00004150 + lVar15);
            *(undefined8 *)(&stack0x000046f8 + lVar15) = *(undefined8 *)(&stack0x00004158 + lVar15);
            *(undefined8 *)(&stack0x00004708 + lVar15) = *(undefined8 *)(&stack0x00004168 + lVar15);
            *(undefined8 *)(&stack0x00004710 + lVar15) = *(undefined8 *)(&stack0x00004170 + lVar15);
            *(undefined4 *)(&stack0x00004530 + lVar15) = *(undefined4 *)(&stack0x00003f90 + lVar15);
            *(undefined4 *)(&stack0x00004534 + lVar15) = *(undefined4 *)(&stack0x00003f94 + lVar15);
            *(undefined4 *)(&stack0x00004538 + lVar15) = *(undefined4 *)(&stack0x00003f98 + lVar15);
            *(undefined4 *)(&stack0x0000453c + lVar15) = *(undefined4 *)(&stack0x00003f9c + lVar15);
            *(undefined8 *)(&stack0x00004540 + lVar15) = *(undefined8 *)(&stack0x00003fa0 + lVar15);
            *(undefined4 *)(&stack0x00004558 + lVar15) = *(undefined4 *)(&stack0x00003fb8 + lVar15);
            *(undefined4 *)(&stack0x0000455c + lVar15) = *(undefined4 *)(&stack0x00003fbc + lVar15);
            *(undefined4 *)(&stack0x00004560 + lVar15) = *(undefined4 *)(&stack0x00003fc0 + lVar15);
            *(undefined4 *)(&stack0x00004564 + lVar15) = *(undefined4 *)(&stack0x00003fc4 + lVar15);
            *(undefined8 *)(&stack0x00004568 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004580 + lVar15) = 5;
            *(undefined8 *)(&stack0x00004598 + lVar15) = 0;
            *(undefined8 *)(&stack0x000045a0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000045b8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000045d0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000045e8 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004600 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004618 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004630 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004648 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004660 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004678 + lVar15) = 4;
            *(undefined4 *)(&stack0x00004690 + lVar15) = *(undefined4 *)(&stack0x000040f0 + lVar15);
            *(undefined4 *)(&stack0x00004694 + lVar15) = *(undefined4 *)(&stack0x000040f4 + lVar15);
            *(undefined4 *)(&stack0x00004698 + lVar15) = *(undefined4 *)(&stack0x000040f8 + lVar15);
            *(undefined4 *)(&stack0x0000469c + lVar15) = *(undefined4 *)(&stack0x000040fc + lVar15);
            *(undefined8 *)(&stack0x000046a0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046a8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000046c0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000046d8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000046e0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046e8 + lVar15) = 0x8000000000000000;
            *(undefined8 *)(&stack0x00004700 + lVar15) = 0x8000000000000000;
            *(undefined **)(&stack0x00004718 + lVar15) = &UNK_142f39e96;
            *(undefined8 *)(&stack0x00004720 + lVar15) = 0x15;
            *(undefined8 *)(&stack0x00004728 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004738 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004748 + lVar15) = uVar21;
            *(undefined8 *)(&stack0x00004750 + lVar15) = uVar23;
            if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
               (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
              *(undefined8 *)(&stack0x00004788 + lVar15) =
                   *(undefined8 *)(&stack0x00004588 + lVar15);
              *(undefined8 **)(&stack0x00004790 + lVar15) =
                   *(undefined8 **)(&stack0x00004590 + lVar15);
              pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
              if (pcVar11 != (code *)0x0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe5e5;
                (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
              }
              uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
              if (uVar24 != 0) {
                uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe606;
                pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
              }
            }
            *(undefined8 *)(&stack0x00004580 + lVar15) = 0;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe62a;
            pub_142e32760(&stack0x00000660 + lVar15,&stack0x00004530 + lVar15,0x224);
            *(undefined2 *)(&stack0x00000885 + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
            (&stack0x00000887)[lVar15] = (&stack0x00004757)[lVar15];
            (&stack0x00000884)[lVar15] = 2;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe665;
            pdb_140eb2530(&stack0x00003f90 + lVar15,&UNK_142f3aa9e,0x20);
            lVar22 = *(longlong *)(&stack0x00003f90 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00004530 + lVar15) =
                   *(undefined8 *)(&stack0x00003f98 + lVar15);
              *(undefined8 *)(&stack0x00004538 + lVar15) =
                   *(undefined8 *)(&stack0x00003fa0 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x00000818 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe6a6;
              pub_1406abac0(*(byte **)(&stack0x00000820 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x00000818 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x00000820 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
            *(undefined4 *)(&stack0x00000824 + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
            *(undefined4 *)(&stack0x00000828 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
            *(undefined4 *)(&stack0x0000082c + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe6d4;
            pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00000660 + lVar15,0x228);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe6e3;
            pdb_140eccac0(&stack0x00004530 + lVar15,0);
            lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00003d30 + lVar15) =
                   *(undefined8 *)(&stack0x00004538 + lVar15);
              *(undefined8 *)(&stack0x00003d38 + lVar15) =
                   *(undefined8 *)(&stack0x00004540 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x00004160 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe724;
              pub_1406abac0(*(byte **)(&stack0x00004168 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x00004160 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x00004168 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
            *(undefined4 *)(&stack0x0000416c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
            *(undefined4 *)(&stack0x00004170 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
            *(undefined4 *)(&stack0x00004174 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe74e;
            pub_142e32760(puVar2,&stack0x00003f90 + lVar15,0x1f8);
            *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00000868 + lVar15);
            *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x0000086c + lVar15);
            *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00000870 + lVar15);
            *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x00000874 + lVar15);
            *(undefined8 *)(&stack0x00004748 + lVar15) = *(undefined8 *)(&stack0x00000878 + lVar15);
            *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f3aabe;
            *(undefined8 *)(&stack0x00004730 + lVar15) = 0x15;
            *(ulonglong *)(&stack0x00004750 + lVar15) =
                 *(ulonglong *)(&stack0x000041b0 + lVar15) | 4;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe7a4;
            pdb_140ec70b0(&stack0x00004260 + lVar15,puVar2);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe7be;
            pub_142e32760(&stack0x00003f90 + lVar15,&stack0x00004260 + lVar15,0x2c8);
            *(undefined8 *)(&stack0x000042d8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042e0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042f0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042f8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004308 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004310 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004320 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004328 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004338 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004340 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004350 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004358 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004368 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004370 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004380 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004388 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004398 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043a0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043b0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043b8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043e0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043e8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043f8 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004400 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004260 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004270 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004288 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004298 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042b0 + lVar15) = 5;
            *(undefined8 *)(&stack0x000042c8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000042d0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000042e8 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004300 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004318 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004330 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004348 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004360 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004378 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004390 + lVar15) = 8;
            *(undefined8 *)(&stack0x000043a8 + lVar15) = 4;
            *(undefined8 *)(&stack0x000043c0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000043c8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043d0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000043d8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000043f0 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004408 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004410 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004418 + lVar15) = 0x8000000000000000;
            *(undefined8 *)(&stack0x00004430 + lVar15) = 0x8000000000000000;
            *(undefined **)(&stack0x00004448 + lVar15) = &UNK_142f39eab;
            *(undefined8 *)(&stack0x00004450 + lVar15) = 0x12;
            *(undefined8 *)(&stack0x00004458 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004468 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004478 + lVar15) = uVar21;
            *(undefined8 *)(&stack0x00004480 + lVar15) = uVar23;
            *(undefined8 *)(&stack0x00003d30 + lVar15) = 0;
            *(undefined8 *)(&stack0x00003d38 + lVar15) = 1;
            *(undefined **)(&stack0x00003d40 + lVar15) = &UNK_142f3aad3;
            *(undefined8 *)(&stack0x00003d48 + lVar15) = 0x12;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe989;
            pdb_1401783b0(&stack0x00004530 + lVar15,&stack0x00003d30 + lVar15);
            if (*(longlong *)(&stack0x000043b8 + lVar15) != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fe9aa;
              pub_1406abac0((byte *)0x8,*(longlong *)(&stack0x000043b8 + lVar15) << 4,8);
            }
            *(undefined8 *)(&stack0x000043c8 + lVar15) = *(undefined8 *)(&stack0x00004540 + lVar15);
            *(undefined8 *)(&stack0x000043b8 + lVar15) = *(undefined8 *)(&stack0x00004530 + lVar15);
            *(undefined8 *)(&stack0x000043c0 + lVar15) = *(undefined8 *)(&stack0x00004538 + lVar15);
            *(undefined8 *)(&stack0x00004548 + lVar15) = *(undefined8 *)(&stack0x00004278 + lVar15);
            *(undefined8 *)(&stack0x00004550 + lVar15) = *(undefined8 *)(&stack0x00004280 + lVar15);
            *(undefined8 *)(&stack0x00004570 + lVar15) = *(undefined8 *)(&stack0x000042a0 + lVar15);
            *(undefined8 *)(&stack0x00004578 + lVar15) = *(undefined8 *)(&stack0x000042a8 + lVar15);
            *(undefined8 *)(&stack0x00004588 + lVar15) = *(undefined8 *)(&stack0x000042b8 + lVar15);
            *(undefined8 *)(&stack0x00004590 + lVar15) = *(undefined8 *)(&stack0x000042c0 + lVar15);
            *(undefined8 *)(&stack0x000045a8 + lVar15) = *puVar4;
            *(undefined8 *)(&stack0x000045b0 + lVar15) = *(undefined8 *)(&stack0x000042e0 + lVar15);
            *(undefined8 *)(&stack0x000045c0 + lVar15) = *(undefined8 *)(&stack0x000042f0 + lVar15);
            *(undefined8 *)(&stack0x000045c8 + lVar15) = *(undefined8 *)(&stack0x000042f8 + lVar15);
            *(undefined8 *)(&stack0x000045d8 + lVar15) = *(undefined8 *)(&stack0x00004308 + lVar15);
            *(undefined8 *)(&stack0x000045e0 + lVar15) = *(undefined8 *)(&stack0x00004310 + lVar15);
            *(undefined8 *)(&stack0x000045f0 + lVar15) = *(undefined8 *)(&stack0x00004320 + lVar15);
            *(undefined8 *)(&stack0x000045f8 + lVar15) = *(undefined8 *)(&stack0x00004328 + lVar15);
            *(undefined8 *)(&stack0x00004608 + lVar15) = *(undefined8 *)(&stack0x00004338 + lVar15);
            *(undefined8 *)(&stack0x00004610 + lVar15) = *(undefined8 *)(&stack0x00004340 + lVar15);
            *(undefined8 *)(&stack0x00004620 + lVar15) = *(undefined8 *)(&stack0x00004350 + lVar15);
            *(undefined8 *)(&stack0x00004628 + lVar15) = *(undefined8 *)(&stack0x00004358 + lVar15);
            *(undefined8 *)(&stack0x00004638 + lVar15) = *(undefined8 *)(&stack0x00004368 + lVar15);
            *(undefined8 *)(&stack0x00004640 + lVar15) = *(undefined8 *)(&stack0x00004370 + lVar15);
            *(undefined8 *)(&stack0x00004650 + lVar15) = *(undefined8 *)(&stack0x00004380 + lVar15);
            *(undefined8 *)(&stack0x00004658 + lVar15) = *(undefined8 *)(&stack0x00004388 + lVar15);
            *(undefined8 *)(&stack0x00004668 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004670 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004680 + lVar15) = *(undefined8 *)(&stack0x000043b0 + lVar15);
            *(undefined8 *)(&stack0x00004688 + lVar15) = *(undefined8 *)(&stack0x000043b8 + lVar15);
            *(undefined8 *)(&stack0x000046b0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046b8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046c8 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046d0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046f0 + lVar15) = *(undefined8 *)(&stack0x00004420 + lVar15);
            *(undefined8 *)(&stack0x000046f8 + lVar15) = *(undefined8 *)(&stack0x00004428 + lVar15);
            *(undefined8 *)(&stack0x00004708 + lVar15) = *(undefined8 *)(&stack0x00004438 + lVar15);
            *(undefined8 *)(&stack0x00004710 + lVar15) = *(undefined8 *)(&stack0x00004440 + lVar15);
            *(undefined4 *)(&stack0x00004530 + lVar15) = *(undefined4 *)(&stack0x00004260 + lVar15);
            *(undefined4 *)(&stack0x00004534 + lVar15) = *(undefined4 *)(&stack0x00004264 + lVar15);
            *(undefined4 *)(&stack0x00004538 + lVar15) = *(undefined4 *)(&stack0x00004268 + lVar15);
            *(undefined4 *)(&stack0x0000453c + lVar15) = *(undefined4 *)(&stack0x0000426c + lVar15);
            *(undefined8 *)(&stack0x00004540 + lVar15) = *(undefined8 *)(&stack0x00004270 + lVar15);
            *(undefined4 *)(&stack0x00004558 + lVar15) = *(undefined4 *)(&stack0x00004288 + lVar15);
            *(undefined4 *)(&stack0x0000455c + lVar15) = *(undefined4 *)(&stack0x0000428c + lVar15);
            *(undefined4 *)(&stack0x00004560 + lVar15) = *(undefined4 *)(&stack0x00004290 + lVar15);
            *(undefined4 *)(&stack0x00004564 + lVar15) = *(undefined4 *)(&stack0x00004294 + lVar15);
            *(undefined8 *)(&stack0x00004568 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004580 + lVar15) = 5;
            *(undefined8 *)(&stack0x00004598 + lVar15) = 0;
            *(undefined8 *)(&stack0x000045a0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000045b8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000045d0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000045e8 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004600 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004618 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004630 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004648 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004660 + lVar15) = 8;
            *(undefined8 *)(&stack0x00004678 + lVar15) = 4;
            *(undefined4 *)(&stack0x00004690 + lVar15) = *(undefined4 *)(&stack0x000043c0 + lVar15);
            *(undefined4 *)(&stack0x00004694 + lVar15) = *(undefined4 *)(&stack0x000043c4 + lVar15);
            *(undefined4 *)(&stack0x00004698 + lVar15) = *(undefined4 *)(&stack0x000043c8 + lVar15);
            *(undefined4 *)(&stack0x0000469c + lVar15) = *(undefined4 *)(&stack0x000043cc + lVar15);
            *(undefined8 *)(&stack0x000046a0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046a8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000046c0 + lVar15) = 8;
            *(undefined8 *)(&stack0x000046d8 + lVar15) = 8;
            *(undefined8 *)(&stack0x000046e0 + lVar15) = 0;
            *(undefined8 *)(&stack0x000046e8 + lVar15) = 0x8000000000000000;
            *(undefined8 *)(&stack0x00004700 + lVar15) = 0x8000000000000000;
            *(undefined **)(&stack0x00004718 + lVar15) = &UNK_142f39eab;
            *(undefined8 *)(&stack0x00004720 + lVar15) = 0x12;
            *(undefined8 *)(&stack0x00004728 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004738 + lVar15) = 0;
            *(undefined8 *)(&stack0x00004748 + lVar15) = uVar21;
            *(undefined8 *)(&stack0x00004750 + lVar15) = uVar23;
            if ((*(longlong *)(&stack0x00004580 + lVar15) != 5) &&
               (3 < (uint)*(longlong *)(&stack0x00004580 + lVar15))) {
              *(undefined8 *)(&stack0x00004788 + lVar15) =
                   *(undefined8 *)(&stack0x00004588 + lVar15);
              *(undefined8 **)(&stack0x00004790 + lVar15) =
                   *(undefined8 **)(&stack0x00004590 + lVar15);
              pcVar11 = (code *)**(undefined8 **)(&stack0x00004590 + lVar15);
              if (pcVar11 != (code *)0x0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fec1f;
                (*pcVar11)(*(undefined8 *)(&stack0x00004788 + lVar15));
              }
              uVar24 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 8);
              if (uVar24 != 0) {
                uVar12 = *(ulonglong *)(*(longlong *)(&stack0x00004790 + lVar15) + 0x10);
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fec40;
                pub_1406abac0(*(byte **)(&stack0x00004788 + lVar15),uVar24,uVar12);
              }
            }
            *(undefined8 *)(&stack0x00004580 + lVar15) = 0;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fec64;
            pub_142e32760(&stack0x00000438 + lVar15,&stack0x00004530 + lVar15,0x224);
            *(undefined2 *)(&stack0x0000065d + lVar15) = *(undefined2 *)(&stack0x00004755 + lVar15);
            (&stack0x0000065f)[lVar15] = (&stack0x00004757)[lVar15];
            (&stack0x0000065c)[lVar15] = 2;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fec9f;
            pdb_140eb2530(&stack0x00004260 + lVar15,&UNK_142f3aae5,0xaa);
            lVar22 = *(longlong *)(&stack0x00004260 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00004530 + lVar15) =
                   *(undefined8 *)(&stack0x00004268 + lVar15);
              *(undefined8 *)(&stack0x00004538 + lVar15) =
                   *(undefined8 *)(&stack0x00004270 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x000005f0 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fece0;
              pub_1406abac0(*(byte **)(&stack0x000005f8 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x000005f0 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x000005f8 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
            *(undefined4 *)(&stack0x000005fc + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
            *(undefined4 *)(&stack0x00000600 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
            *(undefined4 *)(&stack0x00000604 + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fed0e;
            pub_142e32760(&stack0x00004260 + lVar15,&stack0x00000438 + lVar15,0x228);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fed1d;
            pdb_140eccac0(&stack0x00004530 + lVar15,0);
            lVar22 = *(longlong *)(&stack0x00004530 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00003d30 + lVar15) =
                   *(undefined8 *)(&stack0x00004538 + lVar15);
              *(undefined8 *)(&stack0x00003d38 + lVar15) =
                   *(undefined8 *)(&stack0x00004540 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x00004430 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fed5e;
              pub_1406abac0(*(byte **)(&stack0x00004438 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x00004430 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x00004438 + lVar15) = *(undefined4 *)(&stack0x00003d30 + lVar15);
            *(undefined4 *)(&stack0x0000443c + lVar15) = *(undefined4 *)(&stack0x00003d34 + lVar15);
            *(undefined4 *)(&stack0x00004440 + lVar15) = *(undefined4 *)(&stack0x00003d38 + lVar15);
            *(undefined4 *)(&stack0x00004444 + lVar15) = *(undefined4 *)(&stack0x00003d3c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fed88;
            pub_142e32760(puVar2,&stack0x00004260 + lVar15,0x1f8);
            *(undefined4 *)(&stack0x00004738 + lVar15) = *(undefined4 *)(&stack0x00000640 + lVar15);
            *(undefined4 *)(&stack0x0000473c + lVar15) = *(undefined4 *)(&stack0x00000644 + lVar15);
            *(undefined4 *)(&stack0x00004740 + lVar15) = *(undefined4 *)(&stack0x00000648 + lVar15);
            *(undefined4 *)(&stack0x00004744 + lVar15) = *(undefined4 *)(&stack0x0000064c + lVar15);
            *(undefined8 *)(&stack0x00004748 + lVar15) = *(undefined8 *)(&stack0x00000650 + lVar15);
            *(undefined **)(&stack0x00004728 + lVar15) = &UNK_142f3ab8f;
            *(undefined8 *)(&stack0x00004730 + lVar15) = 0x12;
            *(ulonglong *)(&stack0x00004750 + lVar15) =
                 *(ulonglong *)(&stack0x00004480 + lVar15) | 4;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fedde;
            pdb_140ec70b0(&stack0x00003f90 + lVar15,puVar2);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fedf8;
            pub_142e32760(&stack0x00004260 + lVar15,&stack0x00003f90 + lVar15,0x260);
            *(undefined8 *)(&stack0x000044d0 + lVar15) = *(undefined8 *)(&stack0x00004200 + lVar15);
            *(undefined8 *)(&stack0x000044d8 + lVar15) = *(undefined8 *)(&stack0x00004208 + lVar15);
            *(undefined4 *)(&stack0x000044e0 + lVar15) = *(undefined4 *)(&stack0x00004210 + lVar15);
            *(undefined4 *)(&stack0x000044e4 + lVar15) = *(undefined4 *)(&stack0x00004214 + lVar15);
            *(undefined4 *)(&stack0x000044e8 + lVar15) = *(undefined4 *)(&stack0x00004218 + lVar15);
            *(undefined4 *)(&stack0x000044ec + lVar15) = *(undefined4 *)(&stack0x0000421c + lVar15);
            *(undefined4 *)(&stack0x000044f0 + lVar15) = *(undefined4 *)(&stack0x00004220 + lVar15);
            *(undefined4 *)(&stack0x000044f4 + lVar15) = *(undefined4 *)(&stack0x00004224 + lVar15);
            *(undefined4 *)(&stack0x000044f8 + lVar15) = *(undefined4 *)(&stack0x00004228 + lVar15);
            *(undefined4 *)(&stack0x000044fc + lVar15) = *(undefined4 *)(&stack0x0000422c + lVar15);
            *(undefined4 *)(&stack0x00004500 + lVar15) = *(undefined4 *)(&stack0x00004230 + lVar15);
            *(undefined4 *)(&stack0x00004504 + lVar15) = *(undefined4 *)(&stack0x00004234 + lVar15);
            *(undefined4 *)(&stack0x00004508 + lVar15) = *(undefined4 *)(&stack0x00004238 + lVar15);
            *(undefined4 *)(&stack0x0000450c + lVar15) = *(undefined4 *)(&stack0x0000423c + lVar15);
            *(undefined4 *)(&stack0x00004510 + lVar15) = *(undefined4 *)(&stack0x00004240 + lVar15);
            *(undefined4 *)(&stack0x00004514 + lVar15) = *(undefined4 *)(&stack0x00004244 + lVar15);
            *(undefined4 *)(&stack0x00004518 + lVar15) = *(undefined4 *)(&stack0x00004248 + lVar15);
            *(undefined4 *)(&stack0x0000451c + lVar15) = *(undefined4 *)(&stack0x0000424c + lVar15);
            *(undefined8 *)(&stack0x00004520 + lVar15) = *(undefined8 *)(&stack0x00004250 + lVar15);
            *(undefined **)(&stack0x000044c0 + lVar15) = &UNK_142f3aba1;
            *(undefined8 *)(&stack0x000044c8 + lVar15) = 5;
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fee73;
            pdb_140eccac0(&stack0x00003f90 + lVar15,0);
            lVar22 = *(longlong *)(&stack0x00003f90 + lVar15);
            if (!SBORROW8(0,lVar22)) {
              *(undefined8 *)(&stack0x00004530 + lVar15) =
                   *(undefined8 *)(&stack0x00003f98 + lVar15);
              *(undefined8 *)(&stack0x00004538 + lVar15) =
                   *(undefined8 *)(&stack0x00003fa0 + lVar15);
            }
            uVar24 = *(ulonglong *)(&stack0x000043b8 + lVar15);
            if ((!SBORROW8(0,uVar24)) && (uVar24 != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402feeb4;
              pub_1406abac0(*(byte **)(&stack0x000043c0 + lVar15),uVar24,1);
            }
            *(longlong *)(&stack0x000043b8 + lVar15) = lVar22;
            *(undefined4 *)(&stack0x000043c0 + lVar15) = *(undefined4 *)(&stack0x00004530 + lVar15);
            *(undefined4 *)(&stack0x000043c4 + lVar15) = *(undefined4 *)(&stack0x00004534 + lVar15);
            *(undefined4 *)(&stack0x000043c8 + lVar15) = *(undefined4 *)(&stack0x00004538 + lVar15);
            *(undefined4 *)(&stack0x000043cc + lVar15) = *(undefined4 *)(&stack0x0000453c + lVar15);
            *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402feee2;
            pub_142e32760(*(undefined8 *)(&stack0x00003d08 + lVar15),&stack0x00004260 + lVar15,0x2c8
                         );
            return;
          }
          *(undefined8 *)(&stack0x00004790 + lVar15) = 0;
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fef2f;
          pdb_142dc7e11(8,8);
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1402fefa9;
        pdb_142dc7e2a(8,0x10);
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar11 = (code *)invalidInstructionException();
  (*pcVar11)();
}

