// VA 0x140615dd0, PDB extent 3419 bytes
// tiny_glade::crash_pickup::minidump_to_sentry::minidump_to_crash_trace
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/minidump_to_sentry.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::crash_pickup::minidump_to_sentry::minidump_to_crash_trace
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/minidump_to_sentry.rs
   Extent: 3419 */

undefined8 * pdb_140615dd0(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 *puVar21;
  undefined1 *puVar22;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined8 uStack_48;
  
  uStack_48 = 0x140615de6;
  lVar17 = pdb_142d7c6d0();
  lVar17 = -lVar17;
  *(undefined4 *)(&stack0x00002170 + lVar17) = unaff_XMM7_Da;
  *(undefined4 *)(&stack0x00002174 + lVar17) = unaff_XMM7_Db;
  *(undefined4 *)(&stack0x00002178 + lVar17) = unaff_XMM7_Dc;
  *(undefined4 *)(&stack0x0000217c + lVar17) = unaff_XMM7_Dd;
  *(undefined4 *)(&stack0x00002160 + lVar17) = unaff_XMM6_Da;
  *(undefined4 *)(&stack0x00002164 + lVar17) = unaff_XMM6_Db;
  *(undefined4 *)(&stack0x00002168 + lVar17) = unaff_XMM6_Dc;
  *(undefined4 *)(&stack0x0000216c + lVar17) = unaff_XMM6_Dd;
  *(undefined8 *)(&stack0x00002158 + lVar17) = 0xfffffffffffffffe;
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140615e19;
  pdb_1405c7090(&stack0x00000a60 + lVar17);
  lVar5 = *(longlong *)(&stack0x00000a60 + lVar17);
  if (lVar5 == 2) {
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14061624b;
    uVar18 = pdb_142d86610(&stack0x00000a68 + lVar17,&UNK_142f886a1,0x10);
    param_1[1] = uVar18;
    *param_1 = 3;
    return param_1;
  }
  uVar18 = *(undefined8 *)(&stack0x00000a68 + lVar17);
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140615e4a;
  pub_142e32760(&stack0x00001e90 + lVar17,&stack0x00000a70 + lVar17,0xe8);
  *(longlong *)(&stack0x00001e80 + lVar17) = lVar5;
  *(undefined8 *)(&stack0x00001e88 + lVar17) = uVar18;
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140615e6b;
  pdb_1405c6b70(&stack0x00000a60 + lVar17,&stack0x00001e80 + lVar17);
  if (*(longlong *)(&stack0x00000a60 + lVar17) == -0x7fffffffffffffff) {
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140615e9b;
    uVar18 = pdb_142d86610(&stack0x00000a68 + lVar17,&UNK_142f886b1,0x12);
    param_1[1] = uVar18;
    *param_1 = 3;
    goto LAB_140616709;
  }
  *(undefined8 *)(&stack0x000020d0 + lVar17) = *(undefined8 *)(&stack0x00000a70 + lVar17);
  *(undefined8 *)(&stack0x000020d8 + lVar17) = *(undefined8 *)(&stack0x00000a78 + lVar17);
  *(undefined8 *)(&stack0x000020e0 + lVar17) = *(undefined8 *)(&stack0x00000a80 + lVar17);
  *(undefined8 *)(&stack0x000020e8 + lVar17) = *(undefined8 *)(&stack0x00000a88 + lVar17);
  *(undefined8 *)(&stack0x000020f0 + lVar17) = *(undefined8 *)(&stack0x00000a90 + lVar17);
  *(undefined8 *)(&stack0x000020f8 + lVar17) = *(undefined8 *)(&stack0x00000a98 + lVar17);
  *(undefined8 *)(&stack0x00002100 + lVar17) = *(undefined8 *)(&stack0x00000aa0 + lVar17);
  *(undefined8 *)(&stack0x00002108 + lVar17) = *(undefined8 *)(&stack0x00000aa8 + lVar17);
  *(undefined8 *)(&stack0x00002110 + lVar17) = *(undefined8 *)(&stack0x00000ab0 + lVar17);
  *(undefined8 *)(&stack0x00002118 + lVar17) = *(undefined8 *)(&stack0x00000ab8 + lVar17);
  *(undefined4 *)(&stack0x00002120 + lVar17) = *(undefined4 *)(&stack0x00000ac0 + lVar17);
  *(undefined4 *)(&stack0x00002124 + lVar17) = *(undefined4 *)(&stack0x00000ac4 + lVar17);
  *(undefined4 *)(&stack0x00002128 + lVar17) = *(undefined4 *)(&stack0x00000ac8 + lVar17);
  *(undefined4 *)(&stack0x0000212c + lVar17) = *(undefined4 *)(&stack0x00000acc + lVar17);
  *(undefined8 *)(&stack0x00002130 + lVar17) = *(undefined8 *)(&stack0x00000ad0 + lVar17);
  *(longlong *)(&stack0x000020c0 + lVar17) = *(longlong *)(&stack0x00000a60 + lVar17);
  *(undefined8 *)(&stack0x000020c8 + lVar17) = *(undefined8 *)(&stack0x00000a68 + lVar17);
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140615f36;
  pdb_1405c6e10(&stack0x00000a60 + lVar17,&stack0x00001e80 + lVar17);
  if (*(int *)(&stack0x00000a60 + lVar17) == 5) {
    *(undefined4 *)(&stack0xfffffffffffffff0 + lVar17) = 5;
  }
  else {
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140615f5f;
    pub_142e32760(&stack0xfffffffffffffff0 + lVar17,&stack0x00000a60 + lVar17,0x560);
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140615f73;
  pdb_1405c68d0(&stack0x00000a60 + lVar17,&stack0x00001e80 + lVar17);
  if (SBORROW8(0,*(longlong *)(&stack0x00000a60 + lVar17))) {
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140615f9c;
    uVar18 = pdb_142d86610(&stack0x00000a68 + lVar17,&UNK_142f886c3,0x12);
    param_1[1] = uVar18;
    *param_1 = 3;
  }
  else {
    *(undefined8 *)(&stack0x000020a0 + lVar17) = *(undefined8 *)(&stack0x00000a70 + lVar17);
    *(undefined8 *)(&stack0x000020a8 + lVar17) = *(undefined8 *)(&stack0x00000a78 + lVar17);
    *(undefined4 *)(&stack0x000020b0 + lVar17) = *(undefined4 *)(&stack0x00000a80 + lVar17);
    *(undefined4 *)(&stack0x000020b4 + lVar17) = *(undefined4 *)(&stack0x00000a84 + lVar17);
    *(undefined4 *)(&stack0x000020b8 + lVar17) = *(undefined4 *)(&stack0x00000a88 + lVar17);
    *(undefined4 *)(&stack0x000020bc + lVar17) = *(undefined4 *)(&stack0x00000a8c + lVar17);
    *(longlong *)(&stack0x00002090 + lVar17) = *(longlong *)(&stack0x00000a60 + lVar17);
    *(undefined8 *)(&stack0x00002098 + lVar17) = *(undefined8 *)(&stack0x00000a68 + lVar17);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140615ff1;
    pdb_1405c6f50(&stack0x00000a60 + lVar17,&stack0x00001e80 + lVar17);
    cVar2 = (&stack0x00000b1c)[lVar17];
    if (cVar2 == '\x02') {
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140616017;
      uVar18 = pdb_142d86610(&stack0x00000a60 + lVar17,&UNK_142f886d5,0x11);
LAB_1406160c6:
      param_1[1] = uVar18;
      *param_1 = 3;
    }
    else {
      uVar18 = *(undefined8 *)(&stack0x00000a60 + lVar17);
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14061603d;
      pub_142e32760(&stack0x00001dc8 + lVar17,&stack0x00000a68 + lVar17,0xb4);
      *(undefined2 *)(&stack0x00001e7d + lVar17) = *(undefined2 *)(&stack0x00000b1d + lVar17);
      (&stack0x00001e7f)[lVar17] = (&stack0x00000b1f)[lVar17];
      *(undefined8 *)(&stack0x00001dc0 + lVar17) = uVar18;
      (&stack0x00001e7c)[lVar17] = cVar2;
      puVar22 = &stack0xfffffffffffffff0 + lVar17;
      if (*(int *)(&stack0xfffffffffffffff0 + lVar17) == 5) {
        puVar22 = (undefined1 *)0x0;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140616090;
      pdb_1407e4650(&stack0x00000a60 + lVar17,&stack0x00001dc0 + lVar17,&stack0x000020c0 + lVar17,
                    puVar22);
      iVar3 = *(int *)(&stack0x00000a60 + lVar17);
      if (iVar3 == 10) {
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1406160ac;
        pdb_140f3f5b0(&stack0x000018b0 + lVar17);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1406160c5;
        uVar18 = pdb_142d884c0(&UNK_142f886e6,0x11,&stack0x000018b0 + lVar17);
        goto LAB_1406160c6;
      }
      uVar4 = *(undefined4 *)(&stack0x00000a64 + lVar17);
      uVar18 = *(undefined8 *)(&stack0x00000a68 + lVar17);
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140616158;
      pub_142e32760(&stack0x00000560 + lVar17,&stack0x00000a70 + lVar17,0x500);
      *(int *)(&stack0x00000550 + lVar17) = iVar3;
      *(undefined4 *)(&stack0x00000554 + lVar17) = uVar4;
      *(undefined8 *)(&stack0x00000558 + lVar17) = uVar18;
      (&stack0x00002156)[lVar17] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140616186;
      pdb_1405c6cc0(&stack0x000018b0 + lVar17,&stack0x00001e80 + lVar17);
      if (!SBORROW8(0,*(longlong *)(&stack0x000018b0 + lVar17))) {
        *(undefined4 *)(&stack0x00000a88 + lVar17) = *(undefined4 *)(&stack0x000018d0 + lVar17);
        *(undefined4 *)(&stack0x00000a8c + lVar17) = *(undefined4 *)(&stack0x000018d4 + lVar17);
        *(undefined4 *)(&stack0x00000a90 + lVar17) = *(undefined4 *)(&stack0x000018d8 + lVar17);
        *(undefined4 *)(&stack0x00000a94 + lVar17) = *(undefined4 *)(&stack0x000018dc + lVar17);
        *(undefined4 *)(&stack0x00000a78 + lVar17) = *(undefined4 *)(&stack0x000018c0 + lVar17);
        *(undefined4 *)(&stack0x00000a7c + lVar17) = *(undefined4 *)(&stack0x000018c4 + lVar17);
        *(undefined4 *)(&stack0x00000a80 + lVar17) = *(undefined4 *)(&stack0x000018c8 + lVar17);
        *(undefined4 *)(&stack0x00000a84 + lVar17) = *(undefined4 *)(&stack0x000018cc + lVar17);
        *(undefined8 *)(&stack0x00000a68 + lVar17) = *(undefined8 *)(&stack0x000018b0 + lVar17);
        *(undefined8 *)(&stack0x00000a70 + lVar17) = *(undefined8 *)(&stack0x000018b8 + lVar17);
        uVar18 = 0;
LAB_1406162b8:
        *(undefined8 *)(&stack0x00002068 + lVar17) = *(undefined8 *)(&stack0x00000a70 + lVar17);
        *(undefined8 *)(&stack0x00002070 + lVar17) = *(undefined8 *)(&stack0x00000a78 + lVar17);
        *(undefined4 *)(&stack0x00002078 + lVar17) = *(undefined4 *)(&stack0x00000a80 + lVar17);
        *(undefined4 *)(&stack0x0000207c + lVar17) = *(undefined4 *)(&stack0x00000a84 + lVar17);
        *(undefined4 *)(&stack0x00002080 + lVar17) = *(undefined4 *)(&stack0x00000a88 + lVar17);
        *(undefined4 *)(&stack0x00002084 + lVar17) = *(undefined4 *)(&stack0x00000a8c + lVar17);
        *(undefined8 *)(&stack0x00002088 + lVar17) = *(undefined8 *)(&stack0x00000a90 + lVar17);
        *(undefined8 *)(&stack0x00002058 + lVar17) = uVar18;
        *(undefined8 *)(&stack0x00002060 + lVar17) = *(undefined8 *)(&stack0x00000a68 + lVar17);
        if (*(int *)(&stack0x00000550 + lVar17) == 9) {
          puVar22 = *(undefined1 **)(&stack0x00000558 + lVar17);
        }
        else {
          puVar22 = &stack0x00000550 + lVar17;
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140616315;
        uVar19 = pdb_14061ba80(puVar22);
        (&stack0x00002155)[lVar17] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14061632b;
        uVar20 = pdb_1407e46d0(&stack0x00002058 + lVar17);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14061634e;
        pub_142e32760(&stack0x00000a60 + lVar17,&stack0x00000550 + lVar17,0x510);
        (&stack0x00002155)[lVar17] = 0;
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140616364;
        pdb_1406865f0(&stack0x000018b0 + lVar17,&stack0x00000a60 + lVar17);
        (&stack0x00002155)[lVar17] = 0;
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14061637f;
        pdb_140758410(&stack0x00002008 + lVar17,&stack0x000018b0 + lVar17);
        *(undefined8 *)(&stack0x00002138 + lVar17) = 0;
        *(undefined8 *)(&stack0x00002140 + lVar17) = 8;
        *(undefined8 *)(&stack0x00002148 + lVar17) = 0;
        *(undefined1 **)(&stack0x00000b78 + lVar17) = &stack0x000020c0 + lVar17;
        *(undefined1 **)(&stack0x00000b80 + lVar17) = &stack0x00002090 + lVar17;
        *(undefined2 *)(&stack0x00000b8a + lVar17) = 0x100;
        (&stack0x00002157)[lVar17] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1406163dc;
        pdb_1403de980(&stack0x000018b0 + lVar17,&stack0x00000a60 + lVar17);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1406163e2;
        puVar21 = (undefined4 *)pdb_140615d70();
        uVar4 = *(undefined4 *)(&stack0x000018b0 + lVar17);
        uVar7 = *(undefined4 *)(&stack0x000018b4 + lVar17);
        uVar8 = *(undefined4 *)(&stack0x000018b8 + lVar17);
        uVar9 = *(undefined4 *)(&stack0x000018bc + lVar17);
        uVar10 = *(undefined4 *)(&stack0x000018c0 + lVar17);
        uVar11 = *(undefined4 *)(&stack0x000018c4 + lVar17);
        uVar12 = *(undefined4 *)(&stack0x000018c8 + lVar17);
        uVar13 = *(undefined4 *)(&stack0x000018cc + lVar17);
        uVar14 = *(undefined4 *)(&stack0x000018d4 + lVar17);
        uVar15 = *(undefined4 *)(&stack0x000018d8 + lVar17);
        uVar16 = *(undefined4 *)(&stack0x000018dc + lVar17);
        puVar21[8] = *(undefined4 *)(&stack0x000018d0 + lVar17);
        puVar21[9] = uVar14;
        puVar21[10] = uVar15;
        puVar21[0xb] = uVar16;
        puVar21[4] = uVar10;
        puVar21[5] = uVar11;
        puVar21[6] = uVar12;
        puVar21[7] = uVar13;
        *puVar21 = uVar4;
        puVar21[1] = uVar7;
        puVar21[2] = uVar8;
        puVar21[3] = uVar9;
        (&stack0x00002157)[lVar17] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140616423;
        pdb_14074f620(&stack0x00002138 + lVar17,puVar21,&UNK_142f88708);
        uVar18 = *(undefined8 *)(&stack0x000020f0 + lVar17);
        uVar1 = *(undefined8 *)(&stack0x00002130 + lVar17);
        (&stack0x00002157)[lVar17] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14061644e;
        pdb_1407e4890(&stack0x00001ff0 + lVar17,&stack0x000020c0 + lVar17);
        if (*(longlong *)(&stack0x00001ff0 + lVar17) == -0x7fffffffffffffff) {
          *(undefined8 *)(&stack0x00000a60 + lVar17) = 0x8000000000000000;
        }
        else {
          (&stack0x00002157)[lVar17] = 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140616485;
          pdb_140686550(&stack0x00000a60 + lVar17,&stack0x00001ff0 + lVar17);
        }
        *(undefined8 *)(&stack0x00001908 + lVar17) = uVar18;
        *(undefined8 *)(&stack0x000018c0 + lVar17) = 0x8000000000000000;
        *(undefined8 *)(&stack0x000018d8 + lVar17) = 0x8000000000000000;
        *(int *)(&stack0x00001918 + lVar17) = (int)uVar1;
        *(undefined8 *)(&stack0x000018f0 + lVar17) = *(undefined8 *)(&stack0x00000a60 + lVar17);
        *(undefined8 *)(&stack0x000018f8 + lVar17) = *(undefined8 *)(&stack0x00000a68 + lVar17);
        *(undefined8 *)(&stack0x00001900 + lVar17) = *(undefined8 *)(&stack0x00000a70 + lVar17);
        *(undefined8 *)(&stack0x000018b0 + lVar17) = 0;
        *(undefined8 *)(&stack0x00001910 + lVar17) = 1;
        *(undefined8 *)(&stack0x00000a90 + lVar17) = 0;
        *(undefined1 **)(&stack0x00000a70 + lVar17) = &stack0x00002008 + lVar17;
        *(undefined8 *)(&stack0x00000a60 + lVar17) = uVar20;
        *(undefined8 *)(&stack0x00000a68 + lVar17) = uVar19;
        *(undefined1 **)(&stack0x00000a78 + lVar17) = &stack0x00002090 + lVar17;
        *(undefined1 **)(&stack0x00000a80 + lVar17) = &stack0x000018b0 + lVar17;
        *(undefined1 **)(&stack0x00000a88 + lVar17) = &stack0x00002138 + lVar17;
        (&stack0x00000ac8)[lVar17] = 0;
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140616539;
        pdb_1403de8f0(&stack0x00000a60 + lVar17);
        (&stack0x00002157)[lVar17] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14061654d;
        pdb_1404c64e0(&stack0x000018b0 + lVar17);
        lVar5 = *(longlong *)(&stack0x00002010 + lVar17);
        *(longlong *)(&stack0x000018b0 + lVar17) = lVar5;
        *(longlong *)(&stack0x000018b8 + lVar17) = lVar5;
        *(undefined8 *)(&stack0x000018c0 + lVar17) = *(undefined8 *)(&stack0x00002008 + lVar17);
        *(longlong *)(&stack0x000018c8 + lVar17) =
             *(longlong *)(&stack0x00002018 + lVar17) * 0x6d0 + lVar5;
        (&stack0x00002154)[lVar17] = 1;
        *(undefined2 *)(&stack0xffffffffffffffe8 + lVar17) =
             *(undefined2 *)(&stack0x00002132 + lVar17);
        *(undefined2 *)(&stack0xffffffffffffffe0 + lVar17) =
             *(undefined2 *)(&stack0x00002130 + lVar17);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1406165c6;
        pdb_1407e45b0(&stack0x00001fd8 + lVar17,&stack0x00001dc0 + lVar17,
                      *(undefined4 *)(&stack0x000020f0 + lVar17),
                      *(undefined4 *)(&stack0x000020f4 + lVar17));
        *(undefined4 *)(&stack0x00000a70 + lVar17) = *(undefined4 *)(&stack0x000018c0 + lVar17);
        *(undefined4 *)(&stack0x00000a74 + lVar17) = *(undefined4 *)(&stack0x000018c4 + lVar17);
        *(undefined4 *)(&stack0x00000a78 + lVar17) = *(undefined4 *)(&stack0x000018c8 + lVar17);
        *(undefined4 *)(&stack0x00000a7c + lVar17) = *(undefined4 *)(&stack0x000018cc + lVar17);
        *(undefined4 *)(&stack0x00000a60 + lVar17) = *(undefined4 *)(&stack0x000018b0 + lVar17);
        *(undefined4 *)(&stack0x00000a64 + lVar17) = *(undefined4 *)(&stack0x000018b4 + lVar17);
        *(undefined4 *)(&stack0x00000a68 + lVar17) = *(undefined4 *)(&stack0x000018b8 + lVar17);
        *(undefined4 *)(&stack0x00000a6c + lVar17) = *(undefined4 *)(&stack0x000018bc + lVar17);
        (&stack0x00002154)[lVar17] = 0;
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1406165fd;
        pdb_140173a70(&stack0x00001f78 + lVar17,&stack0x00000a60 + lVar17);
        (&stack0x00002154)[lVar17] = 0;
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140616618;
        pdb_1407198c0(&stack0x00001f90 + lVar17,&stack0x00001f78 + lVar17);
        *(undefined8 *)(&stack0x00000aa0 + lVar17) = *(undefined8 *)(&stack0x00001fd0 + lVar17);
        uVar18 = *(undefined8 *)(&stack0x00001f90 + lVar17);
        uVar1 = *(undefined8 *)(&stack0x00001f98 + lVar17);
        uVar4 = *(undefined4 *)(&stack0x00001fa0 + lVar17);
        uVar7 = *(undefined4 *)(&stack0x00001fa4 + lVar17);
        uVar8 = *(undefined4 *)(&stack0x00001fa8 + lVar17);
        uVar9 = *(undefined4 *)(&stack0x00001fac + lVar17);
        uVar10 = *(undefined4 *)(&stack0x00001fb0 + lVar17);
        uVar11 = *(undefined4 *)(&stack0x00001fb4 + lVar17);
        uVar12 = *(undefined4 *)(&stack0x00001fb8 + lVar17);
        uVar13 = *(undefined4 *)(&stack0x00001fbc + lVar17);
        uVar14 = *(undefined4 *)(&stack0x00001fc4 + lVar17);
        uVar15 = *(undefined4 *)(&stack0x00001fc8 + lVar17);
        uVar16 = *(undefined4 *)(&stack0x00001fcc + lVar17);
        *(undefined4 *)(&stack0x00000a90 + lVar17) = *(undefined4 *)(&stack0x00001fc0 + lVar17);
        *(undefined4 *)(&stack0x00000a94 + lVar17) = uVar14;
        *(undefined4 *)(&stack0x00000a98 + lVar17) = uVar15;
        *(undefined4 *)(&stack0x00000a9c + lVar17) = uVar16;
        *(undefined4 *)(&stack0x00000a80 + lVar17) = uVar10;
        *(undefined4 *)(&stack0x00000a84 + lVar17) = uVar11;
        *(undefined4 *)(&stack0x00000a88 + lVar17) = uVar12;
        *(undefined4 *)(&stack0x00000a8c + lVar17) = uVar13;
        *(undefined4 *)(&stack0x00000a70 + lVar17) = uVar4;
        *(undefined4 *)(&stack0x00000a74 + lVar17) = uVar7;
        *(undefined4 *)(&stack0x00000a78 + lVar17) = uVar8;
        *(undefined4 *)(&stack0x00000a7c + lVar17) = uVar9;
        *(undefined8 *)(&stack0x00000a60 + lVar17) = uVar18;
        *(undefined8 *)(&stack0x00000a68 + lVar17) = uVar1;
        *(undefined8 *)(&stack0x00000ab8 + lVar17) = *(undefined8 *)(&stack0x00001fe8 + lVar17);
        *(undefined8 *)(&stack0x00000aa8 + lVar17) = *(undefined8 *)(&stack0x00001fd8 + lVar17);
        *(undefined8 *)(&stack0x00000ab0 + lVar17) = *(undefined8 *)(&stack0x00001fe0 + lVar17);
        *(undefined4 *)(param_1 + 6) = *(undefined4 *)(&stack0x00001fc0 + lVar17);
        *(undefined4 *)((longlong)param_1 + 0x34) = uVar14;
        *(undefined4 *)(param_1 + 7) = uVar15;
        *(undefined4 *)((longlong)param_1 + 0x3c) = uVar16;
        *(undefined4 *)(param_1 + 4) = uVar10;
        *(undefined4 *)((longlong)param_1 + 0x24) = uVar11;
        *(undefined4 *)(param_1 + 5) = uVar12;
        *(undefined4 *)((longlong)param_1 + 0x2c) = uVar13;
        *(undefined4 *)(param_1 + 2) = uVar4;
        *(undefined4 *)((longlong)param_1 + 0x14) = uVar7;
        *(undefined4 *)(param_1 + 3) = uVar8;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uVar9;
        *param_1 = uVar18;
        param_1[1] = uVar1;
        param_1[10] = *(undefined8 *)(&stack0x00000ab0 + lVar17);
        param_1[0xb] = *(undefined8 *)(&stack0x00000ab8 + lVar17);
        uVar4 = *(undefined4 *)(&stack0x00000aa4 + lVar17);
        uVar7 = *(undefined4 *)(&stack0x00000aa8 + lVar17);
        uVar8 = *(undefined4 *)(&stack0x00000aac + lVar17);
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(&stack0x00000aa0 + lVar17);
        *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
        *(undefined4 *)(param_1 + 9) = uVar7;
        *(undefined4 *)((longlong)param_1 + 0x4c) = uVar8;
        (&stack0x00002153)[lVar17] = 0;
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1406166be;
        pdb_140498c40(&stack0x00002138 + lVar17);
        uVar6 = *(ulonglong *)(&stack0x00002020 + lVar17);
        if ((!SBORROW8(0,uVar6)) && (uVar6 != 0)) {
          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1406166e2;
          pub_1406abac0(*(byte **)(&stack0x00002028 + lVar17),uVar6,1);
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1406166ee;
        pdb_14061b980(&stack0x00002058 + lVar17);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1406166fb;
        pdb_1404c3680(&stack0x00002090 + lVar17);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140616708;
        pdb_1404c37d0(&stack0x000020c0 + lVar17);
        goto LAB_140616709;
      }
      (&stack0x00002156)[lVar17] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1406161b0;
      pdb_1405c6a20(&stack0x000018b0 + lVar17,&stack0x00001e80 + lVar17);
      if (!SBORROW8(0,*(longlong *)(&stack0x000018b0 + lVar17))) {
        *(undefined4 *)(&stack0x00000a88 + lVar17) = *(undefined4 *)(&stack0x000018d0 + lVar17);
        *(undefined4 *)(&stack0x00000a8c + lVar17) = *(undefined4 *)(&stack0x000018d4 + lVar17);
        *(undefined4 *)(&stack0x00000a90 + lVar17) = *(undefined4 *)(&stack0x000018d8 + lVar17);
        *(undefined4 *)(&stack0x00000a94 + lVar17) = *(undefined4 *)(&stack0x000018dc + lVar17);
        *(undefined4 *)(&stack0x00000a78 + lVar17) = *(undefined4 *)(&stack0x000018c0 + lVar17);
        *(undefined4 *)(&stack0x00000a7c + lVar17) = *(undefined4 *)(&stack0x000018c4 + lVar17);
        *(undefined4 *)(&stack0x00000a80 + lVar17) = *(undefined4 *)(&stack0x000018c8 + lVar17);
        *(undefined4 *)(&stack0x00000a84 + lVar17) = *(undefined4 *)(&stack0x000018cc + lVar17);
        *(undefined8 *)(&stack0x00000a68 + lVar17) = *(undefined8 *)(&stack0x000018b0 + lVar17);
        *(undefined8 *)(&stack0x00000a70 + lVar17) = *(undefined8 *)(&stack0x000018b8 + lVar17);
        uVar18 = 1;
        goto LAB_1406162b8;
      }
      *(undefined8 *)(&stack0x00000a78 + lVar17) = *(undefined8 *)(&stack0x000018c8 + lVar17);
      *(undefined4 *)(&stack0x00000a68 + lVar17) = *(undefined4 *)(&stack0x000018b8 + lVar17);
      *(undefined4 *)(&stack0x00000a6c + lVar17) = *(undefined4 *)(&stack0x000018bc + lVar17);
      *(undefined4 *)(&stack0x00000a70 + lVar17) = *(undefined4 *)(&stack0x000018c0 + lVar17);
      *(undefined4 *)(&stack0x00000a74 + lVar17) = *(undefined4 *)(&stack0x000018c4 + lVar17);
      *(undefined8 *)(&stack0x00000a60 + lVar17) = 2;
      (&stack0x00002156)[lVar17] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140616207;
      uVar18 = pdb_142d86610(&stack0x00000a68 + lVar17,&UNK_142f886f7,0xb);
      param_1[1] = uVar18;
      *param_1 = 3;
      if (*(int *)(&stack0x00000550 + lVar17) != 9) {
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14061622c;
        pdb_1404bf170(&stack0x00000550 + lVar17);
      }
    }
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1406160dd;
    pdb_1404c3680(&stack0x00002090 + lVar17);
  }
  uVar6 = *(ulonglong *)(&stack0x000020c0 + lVar17);
  if ((!SBORROW8(0,uVar6)) && (uVar6 != 0)) {
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140616101;
    pub_1406abac0(*(byte **)(&stack0x000020c8 + lVar17),uVar6,1);
  }
  uVar6 = *(ulonglong *)(&stack0x000020d8 + lVar17);
  if ((!SBORROW8(0,uVar6)) && (uVar6 != 0)) {
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14061612c;
    pub_1406abac0(*(byte **)(&stack0x000020e0 + lVar17),uVar6,1);
  }
LAB_140616709:
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140616715;
  pdb_1404ceb50(&stack0x00001e80 + lVar17);
  return param_1;
}

