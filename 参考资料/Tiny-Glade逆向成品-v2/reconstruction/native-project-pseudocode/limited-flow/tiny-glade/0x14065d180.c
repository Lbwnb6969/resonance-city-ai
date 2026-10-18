// VA 0x14065d180, PDB extent 41599 bytes
// tiny_glade::run_game::run_game
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/run_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140661558) */
/* WARNING: Removing unreachable block (ram,0x000140661566) */
/* WARNING: Removing unreachable block (ram,0x00014066159c) */
/* WARNING: Removing unreachable block (ram,0x0001406615a5) */
/* WARNING: Removing unreachable block (ram,0x0001406615b4) */
/* WARNING: Removing unreachable block (ram,0x0001406615c0) */
/* WARNING: Removing unreachable block (ram,0x0001406615c2) */
/* WARNING: Removing unreachable block (ram,0x0001406615d1) */
/* WARNING: Removing unreachable block (ram,0x0001406615dd) */
/* WARNING: Removing unreachable block (ram,0x0001406615df) */
/* WARNING: Removing unreachable block (ram,0x000140661590) */
/* WARNING: Removing unreachable block (ram,0x0001406615ef) */
/* WARNING: Removing unreachable block (ram,0x000140661646) */
/* WARNING: Removing unreachable block (ram,0x00014066164f) */
/* WARNING: Removing unreachable block (ram,0x00014066165c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::run_game::run_game
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/run_game.rs
   Extent: 41599 */

void pdb_14065d180(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  byte bVar11;
  char cVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  byte *pbVar19;
  undefined8 uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  ulonglong *puVar23;
  undefined8 uVar24;
  longlong lVar25;
  byte *pbVar26;
  ulonglong uVar27;
  undefined *puVar28;
  undefined4 uVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  char *pcVar34;
  longlong lVar35;
  byte *pbVar36;
  ulonglong uVar37;
  longlong lVar38;
  undefined8 *puVar39;
  undefined8 uVar40;
  ulonglong *arg0;
  bool bVar41;
  float fVar42;
  ulonglong uVar43;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  
  lVar18 = pdb_142d7c6d0();
  lVar18 = -lVar18;
  *(undefined4 *)(&stack0x00003ce0 + lVar18) = unaff_XMM7_Da;
  *(undefined4 *)(&stack0x00003ce4 + lVar18) = unaff_XMM7_Db;
  *(undefined4 *)(&stack0x00003ce8 + lVar18) = unaff_XMM7_Dc;
  *(undefined4 *)(&stack0x00003cec + lVar18) = unaff_XMM7_Dd;
  *(undefined8 *)(&stack0x00003cd0 + lVar18) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x00003cd8 + lVar18) = unaff_XMM6_Qb;
  uVar32 = (ulonglong)(&stack0xffffffffffffffc0 + lVar18) & 0xffffffffffffff80;
  *(undefined1 **)(uVar32 + 0x3d00) = &stack0x00000040 + lVar18;
  *(undefined8 *)(&stack0x00003cc8 + lVar18) = 0xfffffffffffffffe;
  *(undefined8 *)(uVar32 + 0x168) = param_1;
  uVar20 = *(undefined8 *)(&stack0x00003d68 + lVar18);
  uVar24 = *(undefined8 *)(&stack0x00003d70 + lVar18);
  uVar40 = *(undefined8 *)(&stack0x00003d60 + lVar18);
  *(undefined8 *)(uVar32 + 0x398) = param_4;
  *(undefined8 *)(uVar32 + 0x3a0) = uVar40;
  *(undefined8 *)(uVar32 + 0x270) = uVar20;
  *(undefined8 *)(uVar32 + 0x278) = uVar24;
  *(longlong *)(uVar32 + 0x1f0) = param_2;
  uVar14 = *(undefined1 *)(param_2 + 0x145);
  *(undefined **)(uVar32 + 0x1330) = &UNK_142f8dfe1;
  *(undefined8 *)(uVar32 + 0x1338) = 10;
  *(undefined1 *)(uVar32 + 0xd2) = 1;
  *(undefined1 *)(uVar32 + 0xd3) = 1;
  *(undefined1 *)(uVar32 + 0xd4) = 1;
  *(undefined8 *)(uVar32 - 8) = 0x14065d244;
  pdb_140558030(uVar32 + 0x600,1);
  *(undefined8 *)(uVar32 + 0x118) = param_3;
  uVar40 = *(undefined8 *)(uVar32 + 0x600);
  uVar20 = *(undefined8 *)(uVar32 + 0x608);
  uVar24 = *(undefined8 *)(uVar32 + 0x610);
  uVar5 = *(undefined8 *)(uVar32 + 0x618);
  *(undefined8 *)(uVar32 + 0x4a8) = uVar40;
  *(undefined8 *)(uVar32 + 0x4b0) = uVar20;
  *(undefined8 *)(uVar32 + 0x2b00) = uVar24;
  *(undefined8 *)(uVar32 + 0x2b08) = uVar5;
  *(undefined8 *)(uVar32 + 0x610) = 0x8000000000000000;
  *(undefined8 *)(uVar32 + 0x600) = 0;
  *(undefined1 *)(uVar32 + 0x628) = 0;
  *(undefined8 *)(uVar32 - 8) = 0x14065d2ac;
  pdb_14007ee60();
  *(undefined8 *)(uVar32 - 8) = 0x14065d2bb;
  pbVar19 = pub_1406abab0(10,1);
  *(byte **)(uVar32 + 0x120) = pbVar19;
  if (pbVar19 == (byte *)0x0) {
    *(undefined8 *)(uVar32 - 8) = 0x140662bce;
    pdb_142dc7e2a(1,10);
    goto LAB_140662d59;
  }
  pbVar19[0] = 0x61;
  pbVar19[1] = 0x75;
  pbVar19[2] = 100;
  pbVar19[3] = 0x69;
  pbVar19[4] = 0x6f;
  pbVar19[5] = 0x5f;
  pbVar19[6] = 0x69;
  pbVar19[7] = 0x6e;
  pbVar19[8] = 0x69;
  pbVar19[9] = 0x74;
  *(undefined8 *)(uVar32 + 0x1f60) = 10;
  *(byte **)(uVar32 + 0x1f68) = pbVar19;
  *(undefined8 *)(uVar32 + 0x1f70) = 10;
  lVar18 = uVar32 + 0x13c0;
  *(undefined8 *)(uVar32 - 8) = 0x14065d318;
  pdb_140f3cec0(lVar18,uVar32 + 0x600,uVar32 + 0x1f60);
  *(undefined1 *)(uVar32 + 0x3170) = uVar14;
  *(undefined8 *)(uVar32 + 0x3160) = uVar40;
  *(undefined8 *)(uVar32 + 0x3168) = uVar20;
  *(undefined8 *)(uVar32 + 0x1f70) = *(undefined8 *)(uVar32 + 0x13e0);
  *(undefined8 *)(uVar32 + 0x1f60) = *(undefined8 *)(uVar32 + 0x13d0);
  *(undefined8 *)(uVar32 + 0x1f68) = *(undefined8 *)(uVar32 + 0x13d8);
  uVar40 = *(undefined8 *)(uVar32 + 0x13c0);
  uVar20 = *(undefined8 *)(uVar32 + 0x13c8);
  *(undefined1 *)(uVar32 + 0xd1) = 0;
  *(ulonglong *)(uVar32 + 0x30) = uVar32 + 0x3160;
  *(undefined1 *)(uVar32 + 0x20) = *(undefined1 *)(uVar32 + 0x13e8);
  *(undefined8 *)(uVar32 + 0x28) = 0;
  *(undefined8 *)(uVar32 - 8) = 0x14065d394;
  pdb_14022cac0(uVar32 + 0x600,uVar32 + 0x1f60,uVar40,uVar20);
  plVar21 = *(longlong **)(uVar32 + 0x600);
  if (plVar21 == (longlong *)0x0) {
    *(undefined1 *)(uVar32 + 0xd1) = 0;
    *(undefined8 *)(uVar32 - 8) = 0x140662be7;
    pdb_142d876a0(uVar32 + 0x1330);
    goto LAB_140662d59;
  }
  *(longlong **)(uVar32 + 0x600) = plVar21;
  *(undefined8 *)(uVar32 + 0x608) = *(undefined8 *)(uVar32 + 0x608);
  *(undefined8 *)(uVar32 + 0x610) = *(undefined8 *)(uVar32 + 0x610);
  *(undefined8 *)(uVar32 - 8) = 0x14065d3ce;
  CloseHandle();
  LOCK();
  *plVar21 = *plVar21 + -1;
  UNLOCK();
  if (*plVar21 == 0) {
    *(undefined8 *)(uVar32 - 8) = 0x14065d3e0;
    pdb_140f4a410(uVar32 + 0x600);
  }
  plVar21 = *(longlong **)(uVar32 + 0x608);
  LOCK();
  *plVar21 = *plVar21 + -1;
  UNLOCK();
  if (*plVar21 == 0) {
    *(undefined1 *)(uVar32 + 0xd1) = 0;
    *(undefined8 *)(uVar32 - 8) = 0x14065d401;
    pdb_140f4a2d0(uVar32 + 0x608);
  }
  *(undefined8 *)(uVar32 + 0x478) = uVar24;
  *(undefined8 *)(uVar32 + 0x480) = uVar5;
  lVar25 = *(longlong *)(uVar32 + 0x168);
  bVar41 = *(char *)(lVar25 + 0xc0) == '\x01';
  if (bVar41) {
    *(undefined1 *)(uVar32 + 0xeb) = 1;
    *(undefined1 *)(uVar32 + 0xec) = 1;
    *(undefined1 *)(uVar32 + 0xed) = 1;
    *(undefined8 *)(uVar32 - 8) = 0x14065d441;
    pdb_1403c6bc0(uVar32 + 0x600);
    *(undefined1 *)(uVar32 + 0xeb) = 1;
    *(undefined1 *)(uVar32 + 0xec) = 1;
    *(undefined1 *)(uVar32 + 0xed) = 1;
    *(undefined8 *)(uVar32 - 8) = 0x14065d463;
    pdb_1405629e0(uVar32 + 0x600);
    lVar25 = *(longlong *)(uVar32 + 0x168);
  }
  *(bool *)(uVar32 + 0xd9) = bVar41;
  *(longlong *)(uVar32 + 0x2c0) = lVar25 + 0x38;
  if (*(char *)(*(longlong *)(uVar32 + 0x1f0) + 0x13b) == '\0') {
    *(undefined1 *)(uVar32 + 0xa8) = 1;
    *(undefined1 *)(uVar32 + 0xa9) = 1;
    *(undefined1 *)(uVar32 + 0xaa) = 1;
    *(undefined8 *)(uVar32 - 8) = 0x14065e487;
    pdb_1406d0570(uVar32 + 0x4a8);
    if (*(longlong *)(uVar32 + 0x4a8) == -0x7ffffffffffffffc) {
      if (2 < *_DAT_143ca8e90) {
        *(undefined8 *)(uVar32 + 0x600) = 0;
        *(undefined **)(uVar32 + 0x608) = &UNK_142f8d9fd;
        *(undefined8 *)(uVar32 + 0x610) = 0x14;
        *(undefined8 *)(uVar32 + 0x618) = 0;
        *(undefined **)(uVar32 + 0x620) = &UNK_142f8d911;
        *(undefined8 *)(uVar32 + 0x628) = 0x21;
        *(undefined8 *)(uVar32 + 0x630) = 3;
        *(undefined **)(uVar32 + 0x638) = &UNK_142f8d9fd;
        *(undefined8 *)(uVar32 + 0x640) = 0x14;
        *(undefined8 *)(uVar32 + 0x648) = 0x15600000001;
        *(undefined **)(uVar32 + 0x650) = &UNK_142f8e323;
        *(undefined8 *)(uVar32 + 0x658) = 0x3d;
        *(undefined1 *)(uVar32 + 0xa8) = 1;
        *(undefined1 *)(uVar32 + 0xa9) = 1;
        *(undefined1 *)(uVar32 + 0xaa) = 1;
        *(undefined8 *)(uVar32 - 8) = 0x14065e56a;
        pdb_140f332f0(uVar32 + 0xa7,uVar32 + 0x600);
      }
      *(undefined1 *)(uVar32 + 0xa8) = 1;
      *(undefined1 *)(uVar32 + 0xa9) = 1;
      *(undefined1 *)(uVar32 + 0xaa) = 1;
      *(undefined8 *)(uVar32 - 8) = 0x14065e585;
      lVar25 = pdb_140489200();
      if (lVar25 != 0) goto LAB_14065ec93;
      uVar40 = *(undefined8 *)(uVar32 + 0x2c0);
      *(undefined8 *)(uVar32 - 8) = 0x14065e5a2;
      lVar25 = pdb_140486f20(uVar32 + 0xa7);
      if (lVar25 == 1) {
        *(undefined8 *)(uVar32 + 0x13c0) = uVar40;
        *(undefined8 *)(uVar32 + 0x1410) = 2;
        *(undefined1 *)(uVar32 + 0xa8) = 1;
        *(undefined1 *)(uVar32 + 0xa9) = 1;
        *(undefined1 *)(uVar32 + 0xaa) = 1;
        *(undefined8 *)(uVar32 - 8) = 0x14065e5e0;
        pdb_1404c5e20(uVar32 + 0xa7);
        goto LAB_14065eca5;
      }
      *(undefined8 *)(uVar32 + 0x13c0) = 3;
      *(undefined8 *)(uVar32 + 0x1410) = 0;
      *(undefined8 *)(uVar32 + 0x1418) = uVar40;
    }
    else {
      *(undefined8 *)(uVar32 + 0x13f0) = *(undefined8 *)(uVar32 + 0x4d8);
      *(undefined8 *)(uVar32 + 0x13f8) = *(undefined8 *)(uVar32 + 0x4e0);
      *(undefined8 *)(uVar32 + 0x13e0) = *(undefined8 *)(uVar32 + 0x4c8);
      *(undefined8 *)(uVar32 + 0x13e8) = *(undefined8 *)(uVar32 + 0x4d0);
      *(undefined8 *)(uVar32 + 0x13d0) = *(undefined8 *)(uVar32 + 0x4b8);
      *(undefined8 *)(uVar32 + 0x13d8) = *(undefined8 *)(uVar32 + 0x4c0);
      *(undefined8 *)(uVar32 + 0x13c0) = *(undefined8 *)(uVar32 + 0x4a8);
      *(undefined8 *)(uVar32 + 0x13c8) = *(undefined8 *)(uVar32 + 0x4b0);
      *(undefined1 *)(uVar32 + 0x165) = 1;
      *(undefined8 *)(uVar32 - 8) = 0x14065ebf4;
      pdb_140f3f5b0(uVar32 + 0x600);
      *(undefined8 *)(uVar32 + 0x1350) = *(undefined8 *)(uVar32 + 0x620);
      *(undefined8 *)(uVar32 + 0x1358) = *(undefined8 *)(uVar32 + 0x628);
      *(undefined8 *)(uVar32 + 0x1340) = *(undefined8 *)(uVar32 + 0x610);
      *(undefined8 *)(uVar32 + 0x1348) = *(undefined8 *)(uVar32 + 0x618);
      *(undefined8 *)(uVar32 + 0x1330) = *(undefined8 *)(uVar32 + 0x600);
      *(undefined8 *)(uVar32 + 0x1338) = *(undefined8 *)(uVar32 + 0x608);
      *(undefined8 *)(uVar32 + 0x640) = *(undefined8 *)(uVar32 + 0x4d8);
      *(undefined8 *)(uVar32 + 0x648) = *(undefined8 *)(uVar32 + 0x4e0);
      *(undefined8 *)(uVar32 + 0x630) = *(undefined8 *)(uVar32 + 0x4c8);
      *(undefined8 *)(uVar32 + 0x638) = *(undefined8 *)(uVar32 + 0x4d0);
      *(undefined8 *)(uVar32 + 0x620) = *(undefined8 *)(uVar32 + 0x4b8);
      *(undefined8 *)(uVar32 + 0x628) = *(undefined8 *)(uVar32 + 0x4c0);
      *(undefined8 *)(uVar32 + 0x610) = *(undefined8 *)(uVar32 + 0x4a8);
      *(undefined8 *)(uVar32 + 0x618) = *(undefined8 *)(uVar32 + 0x4b0);
      *(undefined **)(uVar32 + 0x600) = &UNK_142f8e308;
      *(undefined8 *)(uVar32 + 0x608) = 0x1b;
      *(undefined1 *)(uVar32 + 0x165) = 0;
      *(undefined8 *)(uVar32 - 8) = 0x14065ec92;
      lVar25 = pdb_142d88a30(uVar32 + 0x600,uVar32 + 0x1330);
LAB_14065ec93:
      *(longlong *)(uVar32 + 0x13c0) = lVar25;
      *(undefined8 *)(uVar32 + 0x1410) = 2;
LAB_14065eca5:
      *(longlong *)(uVar32 + 0x1330) = lVar18;
      if (1 < *_DAT_143ca8e90) {
        *(ulonglong *)(uVar32 + 0x4a8) = uVar32 + 0x1330;
        *(code **)(uVar32 + 0x4b0) = pdb_140677370;
        *(undefined8 *)(uVar32 + 0x600) = 0;
        *(undefined **)(uVar32 + 0x608) = &UNK_142f8d9fd;
        *(undefined8 *)(uVar32 + 0x610) = 0x14;
        *(undefined8 *)(uVar32 + 0x618) = 0;
        *(undefined **)(uVar32 + 0x620) = &UNK_142f8d911;
        *(undefined8 *)(uVar32 + 0x628) = 0x21;
        *(undefined8 *)(uVar32 + 0x630) = 2;
        *(undefined **)(uVar32 + 0x638) = &UNK_142f8d9fd;
        *(undefined8 *)(uVar32 + 0x640) = 0x14;
        *(undefined8 *)(uVar32 + 0x648) = 0x16600000001;
        *(undefined **)(uVar32 + 0x650) = &UNK_142f8e341;
        *(ulonglong *)(uVar32 + 0x658) = uVar32 + 0x4a8;
        *(undefined8 *)(uVar32 - 8) = 0x14065ed7a;
        pdb_140f332f0(uVar32 + 0xa7,uVar32 + 0x600);
      }
    }
    *(undefined8 *)(uVar32 + 0x1fb0) = *(undefined8 *)(uVar32 + 0x1410);
    *(undefined8 *)(uVar32 + 0x1fb8) = *(undefined8 *)(uVar32 + 0x1418);
    *(undefined8 *)(uVar32 + 0x1fa0) = *(undefined8 *)(uVar32 + 0x1400);
    *(undefined8 *)(uVar32 + 0x1fa8) = *(undefined8 *)(uVar32 + 0x1408);
    *(undefined8 *)(uVar32 + 0x1f90) = *(undefined8 *)(uVar32 + 0x13f0);
    *(undefined8 *)(uVar32 + 0x1f98) = *(undefined8 *)(uVar32 + 0x13f8);
    *(undefined8 *)(uVar32 + 0x1f80) = *(undefined8 *)(uVar32 + 0x13e0);
    *(undefined8 *)(uVar32 + 0x1f88) = *(undefined8 *)(uVar32 + 0x13e8);
    *(undefined8 *)(uVar32 + 0x1f70) = *(undefined8 *)(uVar32 + 0x13d0);
    *(undefined8 *)(uVar32 + 0x1f78) = *(undefined8 *)(uVar32 + 0x13d8);
    *(undefined8 *)(uVar32 + 0x1f60) = *(undefined8 *)(uVar32 + 0x13c0);
    *(undefined8 *)(uVar32 + 0x1f68) = *(undefined8 *)(uVar32 + 0x13c8);
    lVar25 = *(longlong *)(uVar32 + 0x1fb0);
    if (lVar25 == 2) {
      *(undefined1 *)(uVar32 + 0xa8) = 1;
      *(undefined1 *)(uVar32 + 0xa9) = 1;
      *(undefined1 *)(uVar32 + 0xaa) = 1;
      *(undefined8 *)(uVar32 - 8) = 0x14065ee23;
      pdb_140667670(uVar32 + 0x1f60);
      *(undefined8 *)(uVar32 + 0x2b00) = *(undefined8 *)(uVar32 + 0x3160);
      *(undefined8 *)(uVar32 + 0x2b08) = *(undefined8 *)(uVar32 + 0x3168);
      *(undefined8 *)(uVar32 + 0x2b10) = *(undefined8 *)(uVar32 + 0x3170);
      *(undefined8 *)(uVar32 + 0x2b18) = *(undefined8 *)(uVar32 + 0x3178);
      *(undefined8 *)(uVar32 + 0x2b20) = *(undefined8 *)(uVar32 + 0x3180);
      *(undefined8 *)(uVar32 + 0x2b28) = *(undefined8 *)(uVar32 + 0x3188);
      *(undefined8 *)(uVar32 + 0x2b30) = *(undefined8 *)(uVar32 + 0x3190);
      *(undefined8 *)(uVar32 + 0x2b38) = *(undefined8 *)(uVar32 + 0x3198);
      *(undefined8 *)(uVar32 + 0x2b40) = *(undefined8 *)(uVar32 + 0x31a0);
      *(undefined8 *)(uVar32 + 0x2b48) = *(undefined8 *)(uVar32 + 0x31a8);
      *(undefined8 *)(uVar32 + 0x13c0) = *(undefined8 *)(uVar32 + 0x3160);
      *(undefined8 *)(uVar32 + 0x13c8) = *(undefined8 *)(uVar32 + 0x3168);
      *(undefined8 *)(uVar32 + 0x13d0) = *(undefined8 *)(uVar32 + 0x3170);
      *(undefined8 *)(uVar32 + 0x13d8) = *(undefined8 *)(uVar32 + 0x3178);
      *(undefined8 *)(uVar32 + 0x13e0) = *(undefined8 *)(uVar32 + 0x3180);
      *(undefined8 *)(uVar32 + 0x13e8) = *(undefined8 *)(uVar32 + 0x3188);
      *(undefined8 *)(uVar32 + 0x13f0) = *(undefined8 *)(uVar32 + 0x3190);
      *(undefined8 *)(uVar32 + 0x13f8) = *(undefined8 *)(uVar32 + 0x3198);
      *(undefined8 *)(uVar32 + 0x1400) = *(undefined8 *)(uVar32 + 0x31a0);
      *(undefined8 *)(uVar32 + 0x1408) = *(undefined8 *)(uVar32 + 0x31a8);
      uVar33 = *_DAT_143ca8e90;
      goto joined_r0x00014065eea7;
    }
    *(undefined8 *)(uVar32 + 0x31a0) = *(undefined8 *)(uVar32 + 0x1fa0);
    *(undefined8 *)(uVar32 + 0x31a8) = *(undefined8 *)(uVar32 + 0x1fa8);
    *(undefined8 *)(uVar32 + 0x3190) = *(undefined8 *)(uVar32 + 0x1f90);
    *(undefined8 *)(uVar32 + 0x3198) = *(undefined8 *)(uVar32 + 0x1f98);
    *(undefined8 *)(uVar32 + 0x3180) = *(undefined8 *)(uVar32 + 0x1f80);
    *(undefined8 *)(uVar32 + 0x3188) = *(undefined8 *)(uVar32 + 0x1f88);
    *(undefined8 *)(uVar32 + 0x3170) = *(undefined8 *)(uVar32 + 0x1f70);
    *(undefined8 *)(uVar32 + 0x3178) = *(undefined8 *)(uVar32 + 0x1f78);
    pbVar19 = *(byte **)(uVar32 + 0x1fb8);
    *(undefined8 *)(uVar32 + 0x2b00) = *(undefined8 *)(uVar32 + 0x1f60);
    *(undefined8 *)(uVar32 + 0x2b08) = *(undefined8 *)(uVar32 + 0x1f68);
    *(undefined8 *)(uVar32 + 0x2b10) = *(undefined8 *)(uVar32 + 0x1f70);
    *(undefined8 *)(uVar32 + 0x2b18) = *(undefined8 *)(uVar32 + 0x1f78);
    *(undefined8 *)(uVar32 + 0x2b20) = *(undefined8 *)(uVar32 + 0x1f80);
    *(undefined8 *)(uVar32 + 0x2b28) = *(undefined8 *)(uVar32 + 0x1f88);
    *(undefined8 *)(uVar32 + 0x2b30) = *(undefined8 *)(uVar32 + 0x1f90);
    *(undefined8 *)(uVar32 + 0x2b38) = *(undefined8 *)(uVar32 + 0x1f98);
    *(undefined8 *)(uVar32 + 0x2b40) = *(undefined8 *)(uVar32 + 0x1fa0);
    *(undefined8 *)(uVar32 + 0x2b48) = *(undefined8 *)(uVar32 + 0x1fa8);
    *(undefined8 *)(uVar32 + 0x1400) = *(undefined8 *)(uVar32 + 0x2b40);
    *(undefined8 *)(uVar32 + 0x1408) = *(undefined8 *)(uVar32 + 0x2b48);
    *(undefined8 *)(uVar32 + 0x13f0) = *(undefined8 *)(uVar32 + 0x2b30);
    *(undefined8 *)(uVar32 + 0x13f8) = *(undefined8 *)(uVar32 + 0x2b38);
    *(undefined8 *)(uVar32 + 0x13e0) = *(undefined8 *)(uVar32 + 0x2b20);
    *(undefined8 *)(uVar32 + 0x13e8) = *(undefined8 *)(uVar32 + 0x2b28);
    *(undefined8 *)(uVar32 + 0x13d0) = *(undefined8 *)(uVar32 + 0x2b10);
    *(undefined8 *)(uVar32 + 0x13d8) = *(undefined8 *)(uVar32 + 0x2b18);
    *(undefined8 *)(uVar32 + 0x13c0) = *(undefined8 *)(uVar32 + 0x2b00);
    *(undefined8 *)(uVar32 + 0x13c8) = *(undefined8 *)(uVar32 + 0x2b08);
    *(undefined8 *)(uVar32 + 0x1fa0) = *(undefined8 *)(uVar32 + 0x1400);
    *(undefined8 *)(uVar32 + 0x1fa8) = *(undefined8 *)(uVar32 + 0x1408);
    *(undefined8 *)(uVar32 + 0x1f90) = *(undefined8 *)(uVar32 + 0x13f0);
    *(undefined8 *)(uVar32 + 0x1f98) = *(undefined8 *)(uVar32 + 0x13f8);
    *(undefined8 *)(uVar32 + 0x1f80) = *(undefined8 *)(uVar32 + 0x13e0);
    *(undefined8 *)(uVar32 + 0x1f88) = *(undefined8 *)(uVar32 + 0x13e8);
    *(undefined8 *)(uVar32 + 0x1f70) = *(undefined8 *)(uVar32 + 0x13d0);
    *(undefined8 *)(uVar32 + 0x1f78) = *(undefined8 *)(uVar32 + 0x13d8);
    *(undefined8 *)(uVar32 + 0x1f60) = *(undefined8 *)(uVar32 + 0x13c0);
    *(undefined8 *)(uVar32 + 0x1f68) = *(undefined8 *)(uVar32 + 0x13c8);
  }
  else {
    uVar33 = *_DAT_143ca8e90;
joined_r0x00014065eea7:
    if (2 < uVar33) {
      *(undefined8 *)(uVar32 + 0x600) = 0;
      *(undefined **)(uVar32 + 0x608) = &UNK_142f8d9fd;
      *(undefined8 *)(uVar32 + 0x610) = 0x14;
      *(undefined8 *)(uVar32 + 0x618) = 0;
      *(undefined **)(uVar32 + 0x620) = &UNK_142f8d911;
      *(undefined8 *)(uVar32 + 0x628) = 0x21;
      *(undefined8 *)(uVar32 + 0x630) = 3;
      *(undefined **)(uVar32 + 0x638) = &UNK_142f8d9fd;
      *(undefined8 *)(uVar32 + 0x640) = 0x14;
      *(undefined8 *)(uVar32 + 0x648) = 0x16c00000001;
      *(undefined **)(uVar32 + 0x650) = &UNK_142f8e2d0;
      *(undefined8 *)(uVar32 + 0x658) = 0x3f;
      *(undefined1 *)(uVar32 + 0xa8) = 1;
      *(undefined1 *)(uVar32 + 0xa9) = 1;
      *(undefined1 *)(uVar32 + 0xaa) = 1;
      *(undefined8 *)(uVar32 - 8) = 0x14065d561;
      pdb_140f332f0(uVar32 + 0xa7,uVar32 + 0x600);
    }
    *(undefined8 *)(uVar32 + 0x3160) = 0;
    *(undefined2 *)(uVar32 + 0x3170) = 0x100;
    LOCK();
    cVar12 = *_DAT_143ca3878;
    *_DAT_143ca3878 = '\x01';
    UNLOCK();
    if (cVar12 != '\0') {
      uVar15 = 3;
LAB_140662c20:
      *(undefined1 *)(uVar32 + 0xa8) = 1;
      *(undefined1 *)(uVar32 + 0xa9) = 1;
      *(undefined1 *)(uVar32 + 0xaa) = 1;
      *(undefined8 *)(uVar32 - 8) = 0x140662c41;
      pdb_1404a63d0(uVar32 + 0x3160);
      *(undefined4 *)(uVar32 + 0x600) = uVar15;
      *(undefined8 *)(uVar32 + 0x604) = *(undefined8 *)(uVar32 + 0x2b00);
      *(undefined8 *)(uVar32 + 0x60c) = *(undefined8 *)(uVar32 + 0x2b08);
      *(undefined8 *)(uVar32 + 0x614) = *(undefined8 *)(uVar32 + 0x2b10);
      *(undefined8 *)(uVar32 + 0x61c) = *(undefined8 *)(uVar32 + 0x2b18);
      *(undefined4 *)(uVar32 + 0x624) = *(undefined4 *)(uVar32 + 0x2b20);
      *(undefined **)(uVar32 + 0x20) = &UNK_142f8e2f0;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(uVar32 - 8) = 0x140662c9f;
      pdb_142dc8170(&UNK_142f8e520,0x2b,uVar32 + 0x600,&UNK_142f8e590);
    }
    *(undefined8 *)(uVar32 - 8) = 0x14065d59c;
    pdb_14010b300(uVar32 + 0x600,uVar32 + 0x3160);
    lVar25 = *(longlong *)(uVar32 + 0x600);
    uVar15 = *(undefined4 *)(uVar32 + 0x608);
    *(undefined8 *)(uVar32 + 0x1f60) = *(undefined8 *)(uVar32 + 0x60c);
    *(undefined8 *)(uVar32 + 0x1f68) = *(undefined8 *)(uVar32 + 0x614);
    *(undefined8 *)(uVar32 + 0x1f70) = *(undefined8 *)(uVar32 + 0x61c);
    *(undefined8 *)(uVar32 + 0x1f78) = *(undefined8 *)(uVar32 + 0x624);
    *(undefined4 *)(uVar32 + 0x1f80) = *(undefined4 *)(uVar32 + 0x62c);
    if (lVar25 == 3) {
      *(undefined8 *)(uVar32 + 0x2b00) = *(undefined8 *)(uVar32 + 0x1f60);
      *(undefined8 *)(uVar32 + 0x2b08) = *(undefined8 *)(uVar32 + 0x1f68);
      *(undefined8 *)(uVar32 + 0x2b10) = *(undefined8 *)(uVar32 + 0x1f70);
      *(undefined8 *)(uVar32 + 0x2b18) = *(undefined8 *)(uVar32 + 0x1f78);
      *(undefined4 *)(uVar32 + 0x2b20) = *(undefined4 *)(uVar32 + 0x1f80);
      goto LAB_140662c20;
    }
    uVar40 = *(undefined8 *)(uVar32 + 0x630);
    *(undefined8 *)(uVar32 + 0x2b00) = *(undefined8 *)(uVar32 + 0x1f60);
    *(undefined8 *)(uVar32 + 0x2b08) = *(undefined8 *)(uVar32 + 0x1f68);
    *(undefined8 *)(uVar32 + 0x2b10) = *(undefined8 *)(uVar32 + 0x1f70);
    *(undefined8 *)(uVar32 + 0x2b18) = *(undefined8 *)(uVar32 + 0x1f78);
    *(undefined4 *)(uVar32 + 0x2b20) = *(undefined4 *)(uVar32 + 0x1f80);
    *(longlong *)(uVar32 + 0x120) = *(longlong *)(uVar32 + 0x3160);
    if (*(longlong *)(uVar32 + 0x3160) != 0) {
      *(undefined8 **)(uVar32 + 0x138) = *(undefined8 **)(uVar32 + 0x3168);
      pcVar6 = (code *)**(undefined8 **)(uVar32 + 0x3168);
      if (pcVar6 != (code *)0x0) {
        uVar20 = *(undefined8 *)(uVar32 + 0x120);
        *(undefined8 *)(uVar32 - 8) = 0x14065d641;
        (*pcVar6)(uVar20);
      }
      uVar33 = *(ulonglong *)(*(longlong *)(uVar32 + 0x138) + 8);
      if (uVar33 != 0) {
        uVar37 = *(ulonglong *)(*(longlong *)(uVar32 + 0x138) + 0x10);
        pbVar19 = *(byte **)(uVar32 + 0x120);
        *(undefined8 *)(uVar32 - 8) = 0x14065d662;
        pub_1406abac0(pbVar19,uVar33,uVar37);
      }
    }
    *(longlong *)(uVar32 + 0x3160) = lVar25;
    *(undefined4 *)(uVar32 + 0x3168) = uVar15;
    *(undefined8 *)(uVar32 + 0x316c) = *(undefined8 *)(uVar32 + 0x2b00);
    *(undefined8 *)(uVar32 + 0x3174) = *(undefined8 *)(uVar32 + 0x2b08);
    *(undefined8 *)(uVar32 + 0x317c) = *(undefined8 *)(uVar32 + 0x2b10);
    *(undefined8 *)(uVar32 + 0x3184) = *(undefined8 *)(uVar32 + 0x2b18);
    *(undefined4 *)(uVar32 + 0x318c) = *(undefined4 *)(uVar32 + 0x2b20);
    *(undefined8 *)(uVar32 + 0x3190) = uVar40;
    *(undefined1 *)(uVar32 + 0x166) = 1;
    uVar40 = *(undefined8 *)(uVar32 + 0x2c0);
    *(undefined8 *)(uVar32 - 8) = 0x14065d6c3;
    pdb_140481890(uVar32 + 0x1f60,uVar32 + 0x3160,uVar40);
    *(undefined8 *)(uVar32 + 0x2b20) = *(undefined8 *)(uVar32 + 0x1f70);
    *(undefined8 *)(uVar32 + 0x2b28) = *(undefined8 *)(uVar32 + 0x1f78);
    *(undefined8 *)(uVar32 + 0x2b10) = *(undefined8 *)(uVar32 + 0x1f60);
    *(undefined8 *)(uVar32 + 0x2b18) = *(undefined8 *)(uVar32 + 0x1f68);
    *(undefined8 *)(uVar32 + 0x648) = *(undefined8 *)(uVar32 + 0x1f90);
    *(undefined8 *)(uVar32 + 0x638) = *(undefined8 *)(uVar32 + 0x1f80);
    *(undefined8 *)(uVar32 + 0x640) = *(undefined8 *)(uVar32 + 0x1f88);
    *(undefined8 *)(uVar32 + 0x600) = *(undefined8 *)(uVar32 + 0x3160);
    *(undefined8 *)(uVar32 + 0x608) = *(undefined8 *)(uVar32 + 0x3168);
    *(undefined8 *)(uVar32 + 0x610) = *(undefined8 *)(uVar32 + 0x3170);
    *(undefined8 *)(uVar32 + 0x618) = *(undefined8 *)(uVar32 + 0x3178);
    *(undefined8 *)(uVar32 + 0x620) = *(undefined8 *)(uVar32 + 0x3180);
    *(undefined8 *)(uVar32 + 0x628) = *(undefined8 *)(uVar32 + 0x3188);
    *(undefined8 *)(uVar32 + 0x630) = *(undefined8 *)(uVar32 + 0x3190);
    *(undefined8 *)(uVar32 + 0x2b00) = 1;
    *(undefined8 *)(uVar32 + 0x2b08) = 1;
    *(undefined8 *)(uVar32 - 8) = 0x14065d755;
    pdb_14007ee60();
    *(undefined8 *)(uVar32 - 8) = 0x14065d764;
    pbVar19 = pub_1406abab0(0x30,8);
    if (pbVar19 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(uVar32 - 8) = 0x140662971;
      pdb_142dc7e11(8,0x30);
    }
    uVar40 = *(undefined8 *)(uVar32 + 0x2b00);
    uVar20 = *(undefined8 *)(uVar32 + 0x2b08);
    uVar24 = *(undefined8 *)(uVar32 + 0x2b10);
    uVar5 = *(undefined8 *)(uVar32 + 0x2b18);
    uVar7 = *(undefined8 *)(uVar32 + 0x2b28);
    *(undefined8 *)(pbVar19 + 0x20) = *(undefined8 *)(uVar32 + 0x2b20);
    *(undefined8 *)(pbVar19 + 0x28) = uVar7;
    *(undefined8 *)(pbVar19 + 0x10) = uVar24;
    *(undefined8 *)(pbVar19 + 0x18) = uVar5;
    *(undefined8 *)pbVar19 = uVar40;
    *(undefined8 *)(pbVar19 + 8) = uVar20;
    *(undefined8 *)(uVar32 + 0x1f60) = *(undefined8 *)(uVar32 + 0x600);
    *(undefined8 *)(uVar32 + 0x1f68) = *(undefined8 *)(uVar32 + 0x608);
    *(undefined8 *)(uVar32 + 0x1f70) = *(undefined8 *)(uVar32 + 0x610);
    *(undefined8 *)(uVar32 + 0x1f78) = *(undefined8 *)(uVar32 + 0x618);
    *(undefined8 *)(uVar32 + 0x1f80) = *(undefined8 *)(uVar32 + 0x620);
    *(undefined8 *)(uVar32 + 0x1f88) = *(undefined8 *)(uVar32 + 0x628);
    *(undefined8 *)(uVar32 + 0x1f90) = *(undefined8 *)(uVar32 + 0x630);
    *(undefined8 *)(uVar32 + 0x1f98) = *(undefined8 *)(uVar32 + 0x638);
    *(undefined8 *)(uVar32 + 0x1fa0) = *(undefined8 *)(uVar32 + 0x640);
    *(undefined8 *)(uVar32 + 0x1fa8) = *(undefined8 *)(uVar32 + 0x648);
    lVar25 = 1;
  }
  *(undefined8 *)(uVar32 + 0x460) = *(undefined8 *)(uVar32 + 0x1fa0);
  *(undefined8 *)(uVar32 + 0x468) = *(undefined8 *)(uVar32 + 0x1fa8);
  uVar40 = *(undefined8 *)(uVar32 + 0x1f60);
  *(undefined8 *)(uVar32 + 0x450) = *(undefined8 *)(uVar32 + 0x1f90);
  *(undefined8 *)(uVar32 + 0x458) = *(undefined8 *)(uVar32 + 0x1f98);
  *(undefined8 *)(uVar32 + 0x440) = *(undefined8 *)(uVar32 + 0x1f80);
  *(undefined8 *)(uVar32 + 0x448) = *(undefined8 *)(uVar32 + 0x1f88);
  *(undefined8 *)(uVar32 + 0x430) = *(undefined8 *)(uVar32 + 0x1f70);
  *(undefined8 *)(uVar32 + 0x438) = *(undefined8 *)(uVar32 + 0x1f78);
  *(undefined8 *)(uVar32 + 0x420) = uVar40;
  *(undefined8 *)(uVar32 + 0x428) = *(undefined8 *)(uVar32 + 0x1f68);
  *(longlong *)(uVar32 + 0x1a0) = lVar25;
  *(byte **)(uVar32 + 0x1a8) = pbVar19;
  *(undefined1 *)(uVar32 + 0xc2) = 1;
  *(undefined1 *)(uVar32 + 0xc3) = 1;
  *(undefined1 *)(uVar32 + 0xc4) = 1;
  *(undefined1 *)(uVar32 + 0xc5) = 1;
  *(undefined1 *)(uVar32 + 0xc6) = 1;
  *(undefined8 *)(uVar32 - 8) = 0x14065d871;
  uVar15 = pdb_14065ce90(uVar32 + 0x1a0);
  *(undefined4 *)(uVar32 + 0x2d4) = uVar15;
  *(int *)(uVar32 + 0x2d8) = (int)uVar40;
  if (2 < *_DAT_143ca8e90) {
    *(ulonglong *)(uVar32 + 0x13c0) = uVar32 + 0x2d4;
    *(code **)(uVar32 + 0x13c8) = pdb_140f71a50;
    *(ulonglong *)(uVar32 + 0x13d0) = uVar32 + 0x2d8;
    *(code **)(uVar32 + 0x13d8) = pdb_140f71a50;
    *(undefined8 *)(uVar32 + 0x600) = 0;
    *(undefined **)(uVar32 + 0x608) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x610) = 0x14;
    *(undefined8 *)(uVar32 + 0x618) = 0;
    *(undefined **)(uVar32 + 0x620) = &UNK_142f8d911;
    *(undefined8 *)(uVar32 + 0x628) = 0x21;
    *(undefined8 *)(uVar32 + 0x630) = 3;
    *(undefined **)(uVar32 + 0x638) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x640) = 0x14;
    *(undefined8 *)(uVar32 + 0x648) = 0x17c00000001;
    *(undefined **)(uVar32 + 0x650) = &UNK_142f8e118;
    *(longlong *)(uVar32 + 0x658) = lVar18;
    *(undefined1 *)(uVar32 + 0xc2) = 1;
    *(undefined1 *)(uVar32 + 0xc3) = 1;
    *(undefined1 *)(uVar32 + 0xc4) = 1;
    *(undefined1 *)(uVar32 + 0xc5) = 1;
    *(undefined1 *)(uVar32 + 0xc6) = 1;
    *(undefined8 *)(uVar32 - 8) = 0x14065d989;
    pdb_140f332f0(uVar32 + 0xa7,uVar32 + 0x600);
  }
  uVar14 = *(undefined1 *)(*(longlong *)(uVar32 + 0x168) + 0xbf);
  uVar20 = *(undefined8 *)(*(longlong *)(uVar32 + 0x168) + 0xa4);
  *(undefined1 *)(uVar32 + 0xc2) = 1;
  *(undefined1 *)(uVar32 + 0xc3) = 1;
  *(undefined1 *)(uVar32 + 0xc4) = 1;
  *(undefined1 *)(uVar32 + 0xc5) = 1;
  *(undefined1 *)(uVar32 + 0xc6) = 1;
  *(undefined8 *)(uVar32 - 8) = 0x14065d9d3;
  uVar20 = pdb_140a96b60(uVar20);
  uVar2 = *(undefined1 *)(*(longlong *)(uVar32 + 0x168) + 0xc0);
  uVar13 = *(undefined1 *)(*(longlong *)(uVar32 + 0x168) + 0xc1);
  uVar3 = *(undefined1 *)(*(longlong *)(uVar32 + 0x1f0) + 0x13d);
  *(undefined8 *)(uVar32 + 0x620) = 8;
  *(undefined8 *)(uVar32 + 0x628) = 0;
  *(undefined1 *)(uVar32 + 0x630) = uVar14;
  *(undefined1 *)(uVar32 + 0x631) = 0;
  *(undefined1 *)(uVar32 + 0x632) = 0;
  *(undefined1 *)(uVar32 + 0x633) = uVar2;
  *(undefined1 *)(uVar32 + 0x634) = uVar13;
  *(undefined1 *)(uVar32 + 0x635) = uVar3;
  *(int *)(uVar32 + 0x636) = (int)uVar20;
  *(char *)(uVar32 + 0x63a) = (char)((ulonglong)uVar20 >> 0x20);
  *(undefined8 *)(uVar32 + 0x600) = 0x8000000000000000;
  *(undefined1 *)(uVar32 + 0xc2) = 1;
  *(undefined1 *)(uVar32 + 0xc3) = 1;
  *(undefined1 *)(uVar32 + 0xc4) = 1;
  *(undefined1 *)(uVar32 + 0xc5) = 1;
  *(undefined1 *)(uVar32 + 0xc6) = 1;
  pcVar34 = (char *)(uVar32 + 0x1a0);
  *(undefined8 *)(uVar32 - 8) = 0x14065da9e;
  pdb_140e128c0(uVar32 + 0x13c0,uVar32 + 0x600,pcVar34,&UNK_142f8e138);
  lVar18 = *(longlong *)(uVar32 + 0x168);
  uVar29 = *(undefined4 *)(lVar18 + 0x30);
  *(undefined1 *)(uVar32 + 0x167) = 1;
  *(undefined8 *)(uVar32 - 8) = 0x14065dac0;
  pdb_140175e80(uVar32 + 0x1f60,lVar18 + 0x18);
  *(undefined4 *)(uVar32 + 0x1f78) = uVar29;
  *(undefined1 *)(uVar32 + 0x167) = 0;
  lVar18 = uVar32 + 0x13c0;
  *(undefined8 *)(uVar32 - 8) = 0x14065daeb;
  pdb_140e127b0(uVar32 + 0x600,lVar18,uVar32 + 0x1f60);
  *(undefined1 *)(uVar32 + 0xc2) = 1;
  *(undefined1 *)(uVar32 + 0xc3) = 1;
  *(undefined1 *)(uVar32 + 0xc4) = 1;
  *(undefined1 *)(uVar32 + 0xc5) = 1;
  *(undefined1 *)(uVar32 + 0xc6) = 1;
  *(undefined8 *)(uVar32 - 8) = 0x14065db22;
  pdb_140e12570(uVar32 + 0x11e8,uVar32 + 0x600);
  *(undefined4 *)(uVar32 + 0x26c) = uVar15;
  *(undefined8 *)(uVar32 + 0x780) = 1;
  *(undefined8 *)(uVar32 + 0x788) = 1;
  *(undefined1 *)(uVar32 + 0x790) = 0;
  *(undefined2 *)(uVar32 + 0x700) = 0;
  *(undefined8 *)(uVar32 + 0x708) = 0;
  *(undefined8 *)(uVar32 + 0x600) = 0;
  *(undefined8 *)(uVar32 + 0x608) = 0;
  *(undefined8 *)(uVar32 + 0x680) = 0;
  *(undefined8 *)(uVar32 + 0x688) = 0;
  *(undefined8 *)(uVar32 + 0x710) = 8;
  *(undefined8 *)(uVar32 + 0x718) = 0;
  *(undefined8 *)(uVar32 + 0x720) = 0;
  *(undefined8 *)(uVar32 + 0x728) = 8;
  *(undefined8 *)(uVar32 + 0x730) = 0;
  *(undefined1 *)(uVar32 + 0x738) = 1;
  *(undefined8 *)(uVar32 - 8) = 0x14065db9f;
  pdb_14007ee60();
  *(undefined8 *)(uVar32 - 8) = 0x14065dbae;
  pbVar19 = pub_1406abab0(0x200,0x80);
  if (pbVar19 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(uVar32 - 8) = 0x1406628cc;
    pdb_142dc7e11(0x80,0x200);
  }
  *(undefined8 *)(uVar32 - 8) = 0x14065dbcf;
  pub_142e32760(pbVar19,uVar32 + 0x600,0x200);
  *(undefined8 *)(uVar32 + 0x3a8) = 1;
  *(byte **)(uVar32 + 0x3b0) = pbVar19;
  *(undefined8 *)(uVar32 + 0x488) = 1;
  *(byte **)(uVar32 + 0x490) = pbVar19;
  *(undefined8 *)(uVar32 + 0x780) = 1;
  *(undefined8 *)(uVar32 + 0x788) = 1;
  *(undefined1 *)(uVar32 + 0x790) = 0;
  *(undefined2 *)(uVar32 + 0x700) = 0;
  *(undefined8 *)(uVar32 + 0x708) = 0;
  *(undefined8 *)(uVar32 + 0x600) = 0;
  *(undefined8 *)(uVar32 + 0x608) = 0;
  *(undefined8 *)(uVar32 + 0x680) = 0;
  *(undefined8 *)(uVar32 + 0x688) = 0;
  *(undefined8 *)(uVar32 + 0x710) = 8;
  *(undefined8 *)(uVar32 + 0x718) = 0;
  *(undefined8 *)(uVar32 + 0x720) = 0;
  *(undefined8 *)(uVar32 + 0x728) = 8;
  *(undefined8 *)(uVar32 + 0x730) = 0;
  *(undefined1 *)(uVar32 + 0x738) = 1;
  *(undefined8 *)(uVar32 - 8) = 0x14065dc66;
  pdb_14007ee60();
  *(undefined8 *)(uVar32 - 8) = 0x14065dc75;
  pbVar19 = pub_1406abab0(0x200,0x80);
  if (pbVar19 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(uVar32 - 8) = 0x1406628e1;
    pdb_142dc7e11(0x80,0x200);
  }
  *(undefined8 *)(uVar32 - 8) = 0x14065dc96;
  pub_142e32760(pbVar19,uVar32 + 0x600,0x200);
  *(undefined8 *)(uVar32 + 0x498) = 1;
  *(byte **)(uVar32 + 0x4a0) = pbVar19;
  *(undefined8 *)(uVar32 + 0x3b8) = 1;
  *(byte **)(uVar32 + 0x3c0) = pbVar19;
  if (3 < *_DAT_143ca8e90) {
    *(undefined8 *)(uVar32 + 0x600) = 0;
    *(undefined **)(uVar32 + 0x608) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x610) = 0x14;
    *(undefined8 *)(uVar32 + 0x618) = 0;
    *(undefined **)(uVar32 + 0x620) = &UNK_142f8d911;
    *(undefined8 *)(uVar32 + 0x628) = 0x21;
    *(undefined8 *)(uVar32 + 0x630) = 4;
    *(undefined **)(uVar32 + 0x638) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x640) = 0x14;
    *(undefined8 *)(uVar32 + 0x648) = 0x19200000001;
    *(undefined **)(uVar32 + 0x650) = &UNK_142f8e158;
    *(undefined8 *)(uVar32 + 0x658) = 0x23;
    *(undefined1 *)(uVar32 + 0xfb) = 1;
    *(undefined1 *)(uVar32 + 0xfc) = 1;
    *(undefined1 *)(uVar32 + 0xfd) = 1;
    *(undefined1 *)(uVar32 + 0xfe) = 1;
    *(undefined1 *)(uVar32 + 0xff) = 1;
    *(undefined1 *)(uVar32 + 0x100) = 1;
    *(undefined1 *)(uVar32 + 0x101) = 1;
    *(undefined8 *)(uVar32 - 8) = 0x14065dda1;
    pdb_140f332f0(uVar32 + 0xa7,uVar32 + 0x600);
  }
  *(undefined1 *)(uVar32 + 0xfb) = 1;
  *(undefined1 *)(uVar32 + 0xfc) = 1;
  *(undefined1 *)(uVar32 + 0xfd) = 1;
  *(undefined1 *)(uVar32 + 0xfe) = 1;
  *(undefined1 *)(uVar32 + 0xff) = 1;
  *(undefined1 *)(uVar32 + 0x100) = 1;
  *(undefined1 *)(uVar32 + 0x101) = 1;
  *(undefined8 *)(uVar32 - 8) = 0x14065ddd8;
  uVar20 = pdb_140d6cd90();
  *(undefined8 *)(uVar32 + 0x1e0) = uVar20;
  if (3 < *_DAT_143ca8e90) {
    *(undefined8 *)(uVar32 + 0x600) = 0;
    *(undefined **)(uVar32 + 0x608) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x610) = 0x14;
    *(undefined8 *)(uVar32 + 0x618) = 0;
    *(undefined **)(uVar32 + 0x620) = &UNK_142f8d911;
    *(undefined8 *)(uVar32 + 0x628) = 0x21;
    *(undefined8 *)(uVar32 + 0x630) = 4;
    *(undefined **)(uVar32 + 0x638) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x640) = 0x14;
    *(undefined8 *)(uVar32 + 0x648) = 0x19600000001;
    *(undefined **)(uVar32 + 0x650) = &UNK_142f8e169;
    *(undefined8 *)(uVar32 + 0x658) = 0x27;
    *(undefined1 *)(uVar32 + 0x102) = 1;
    *(undefined1 *)(uVar32 + 0x103) = 1;
    *(undefined1 *)(uVar32 + 0x104) = 1;
    *(undefined1 *)(uVar32 + 0x105) = 1;
    *(undefined1 *)(uVar32 + 0x106) = 1;
    *(undefined1 *)(uVar32 + 0x107) = 1;
    *(undefined1 *)(uVar32 + 0x108) = 1;
    *(undefined8 *)(uVar32 - 8) = 0x14065dec7;
    pdb_140f332f0(uVar32 + 0xa7,uVar32 + 0x600);
  }
  *(undefined1 *)(uVar32 + 0x102) = 1;
  *(undefined1 *)(uVar32 + 0x103) = 1;
  *(undefined1 *)(uVar32 + 0x104) = 1;
  *(undefined1 *)(uVar32 + 0x105) = 1;
  *(undefined1 *)(uVar32 + 0x106) = 1;
  *(undefined1 *)(uVar32 + 0x107) = 1;
  *(undefined1 *)(uVar32 + 0x108) = 1;
  *(undefined8 *)(uVar32 - 8) = 0x14065df05;
  pdb_140e02060(uVar32 + 0x2b00);
  *(undefined1 *)(uVar32 + 0xb9) = 1;
  *(undefined1 *)(uVar32 + 0xba) = 1;
  *(undefined1 *)(uVar32 + 0xbb) = 1;
  *(undefined1 *)(uVar32 + 0xbc) = 1;
  *(undefined1 *)(uVar32 + 0xbd) = 1;
  *(undefined1 *)(uVar32 + 0xbe) = 1;
  *(undefined1 *)(uVar32 + 0xbf) = 1;
  *(undefined8 *)(uVar32 - 8) = 0x14065df43;
  bVar11 = pdb_14026f7d0(uVar32 + 0x2b00);
  if (1 < bVar11) {
    *(undefined1 *)(uVar32 + 0xb9) = 1;
    *(undefined1 *)(uVar32 + 0xba) = 1;
    *(undefined1 *)(uVar32 + 0xbb) = 1;
    *(undefined1 *)(uVar32 + 0xbc) = 1;
    *(undefined1 *)(uVar32 + 0xbd) = 1;
    *(undefined1 *)(uVar32 + 0xbe) = 1;
    *(undefined1 *)(uVar32 + 0xbf) = 1;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(uVar32 - 8) = 0x1406628b7;
    pdb_142dc83d0(&UNK_142e64990,0x9d,&UNK_142f8e180);
  }
  *(undefined1 *)(uVar32 + 0xb9) = 1;
  *(undefined1 *)(uVar32 + 0xba) = 1;
  *(undefined1 *)(uVar32 + 0xbb) = 1;
  *(undefined1 *)(uVar32 + 0xbc) = 1;
  *(undefined1 *)(uVar32 + 0xbd) = 1;
  *(undefined1 *)(uVar32 + 0xbe) = 1;
  *(undefined1 *)(uVar32 + 0xbf) = 1;
  uVar20 = *(undefined8 *)(uVar32 + 0x118);
  *(undefined8 *)(uVar32 - 8) = 0x14065df97;
  pdb_140573690(uVar20,uVar32 + 0x2b00,&UNK_142f8e180);
  if (3 < *_DAT_143ca8e90) {
    *(undefined8 *)(uVar32 + 0x600) = 0;
    *(undefined **)(uVar32 + 0x608) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x610) = 0x14;
    *(undefined8 *)(uVar32 + 0x618) = 0;
    *(undefined **)(uVar32 + 0x620) = &UNK_142f8d911;
    *(undefined8 *)(uVar32 + 0x628) = 0x21;
    *(undefined8 *)(uVar32 + 0x630) = 4;
    *(undefined **)(uVar32 + 0x638) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x640) = 0x14;
    *(undefined8 *)(uVar32 + 0x648) = 0x19b00000001;
    *(undefined **)(uVar32 + 0x650) = &UNK_142f8e198;
    *(undefined8 *)(uVar32 + 0x658) = 0x2f;
    *(undefined1 *)(uVar32 + 0xb9) = 1;
    *(undefined1 *)(uVar32 + 0xba) = 1;
    *(undefined1 *)(uVar32 + 0xbb) = 1;
    *(undefined1 *)(uVar32 + 0xbc) = 1;
    *(undefined1 *)(uVar32 + 0xbd) = 1;
    *(undefined1 *)(uVar32 + 0xbe) = 1;
    *(undefined1 *)(uVar32 + 0xbf) = 1;
    *(undefined8 *)(uVar32 - 8) = 0x14065e07f;
    pdb_140f332f0(uVar32 + 0xa7,uVar32 + 0x600);
  }
  *(undefined1 *)(uVar32 + 0xb9) = 1;
  *(undefined1 *)(uVar32 + 0xba) = 1;
  *(undefined1 *)(uVar32 + 0xbb) = 1;
  *(undefined1 *)(uVar32 + 0xbc) = 1;
  *(undefined1 *)(uVar32 + 0xbd) = 1;
  *(undefined1 *)(uVar32 + 0xbe) = 1;
  *(undefined1 *)(uVar32 + 0xbf) = 1;
  *(undefined8 *)(uVar32 - 8) = 0x14065e0bd;
  pdb_14093e620(uVar32 + 0x2b00);
  if (3 < *_DAT_143ca8e90) {
    *(undefined8 *)(uVar32 + 0x600) = 0;
    *(undefined **)(uVar32 + 0x608) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x610) = 0x14;
    *(undefined8 *)(uVar32 + 0x618) = 0;
    *(undefined **)(uVar32 + 0x620) = &UNK_142f8d911;
    *(undefined8 *)(uVar32 + 0x628) = 0x21;
    *(undefined8 *)(uVar32 + 0x630) = 4;
    *(undefined **)(uVar32 + 0x638) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x640) = 0x14;
    *(undefined8 *)(uVar32 + 0x648) = 0x19e00000001;
    *(undefined **)(uVar32 + 0x650) = &UNK_142f8e1af;
    *(undefined8 *)(uVar32 + 0x658) = 0x2d;
    *(undefined1 *)(uVar32 + 0xb9) = 1;
    *(undefined1 *)(uVar32 + 0xba) = 1;
    *(undefined1 *)(uVar32 + 0xbb) = 1;
    *(undefined1 *)(uVar32 + 0xbc) = 1;
    *(undefined1 *)(uVar32 + 0xbd) = 1;
    *(undefined1 *)(uVar32 + 0xbe) = 1;
    *(undefined1 *)(uVar32 + 0xbf) = 1;
    *(undefined8 *)(uVar32 - 8) = 0x14065e1a5;
    pdb_140f332f0(uVar32 + 0xa7,uVar32 + 0x600);
  }
  *(undefined1 *)(uVar32 + 0xb9) = 1;
  *(undefined1 *)(uVar32 + 0xba) = 1;
  *(undefined1 *)(uVar32 + 0xbb) = 1;
  *(undefined1 *)(uVar32 + 0xbc) = 1;
  *(undefined1 *)(uVar32 + 0xbd) = 1;
  *(undefined1 *)(uVar32 + 0xbe) = 1;
  *(undefined1 *)(uVar32 + 0xbf) = 1;
  *(undefined8 *)(uVar32 - 8) = 0x14065e1e3;
  pdb_14093d240(uVar32 + 0x2b00);
  *(undefined1 *)(uVar32 + 0xb9) = 1;
  *(undefined1 *)(uVar32 + 0xba) = 1;
  *(undefined1 *)(uVar32 + 0xbb) = 1;
  *(undefined1 *)(uVar32 + 0xbc) = 1;
  *(undefined1 *)(uVar32 + 0xbd) = 1;
  *(undefined1 *)(uVar32 + 0xbe) = 1;
  *(undefined1 *)(uVar32 + 0xbf) = 1;
  *(undefined8 *)(uVar32 - 8) = 0x14065e224;
  pdb_1406b12e0(uVar32 + 0x11b8);
  if (2 < *_DAT_143ca8e90) {
    *(ulonglong *)(uVar32 + 0x13c0) = uVar32 + 0x11b8;
    *(code **)(uVar32 + 0x13c8) = pdb_140667fd0;
    *(undefined8 *)(uVar32 + 0x600) = 0;
    *(undefined **)(uVar32 + 0x608) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x610) = 0x14;
    *(undefined8 *)(uVar32 + 0x618) = 0;
    *(undefined **)(uVar32 + 0x620) = &UNK_142f8d911;
    *(undefined8 *)(uVar32 + 0x628) = 0x21;
    *(undefined8 *)(uVar32 + 0x630) = 3;
    *(undefined **)(uVar32 + 0x638) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x640) = 0x14;
    *(undefined8 *)(uVar32 + 0x648) = 0x1a200000001;
    *(undefined **)(uVar32 + 0x650) = &UNK_142f8e1c5;
    *(longlong *)(uVar32 + 0x658) = lVar18;
    *(undefined1 *)(uVar32 + 0xda) = 1;
    *(undefined1 *)(uVar32 + 0xdb) = 1;
    *(undefined1 *)(uVar32 + 0xdc) = 1;
    *(undefined1 *)(uVar32 + 0xdd) = 1;
    *(undefined1 *)(uVar32 + 0xde) = 1;
    *(undefined1 *)(uVar32 + 0xdf) = 1;
    *(undefined1 *)(uVar32 + 0xe0) = 1;
    *(undefined8 *)(uVar32 - 8) = 0x14065e31d;
    pdb_140f332f0(uVar32 + 0xa7,uVar32 + 0x600);
  }
  if (3 < *_DAT_143ca8e90) {
    *(undefined8 *)(uVar32 + 0x600) = 0;
    *(undefined **)(uVar32 + 0x608) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x610) = 0x14;
    *(undefined8 *)(uVar32 + 0x618) = 0;
    *(undefined **)(uVar32 + 0x620) = &UNK_142f8d911;
    *(undefined8 *)(uVar32 + 0x628) = 0x21;
    *(undefined8 *)(uVar32 + 0x630) = 4;
    *(undefined **)(uVar32 + 0x638) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x640) = 0x14;
    *(undefined8 *)(uVar32 + 0x648) = 0x1a400000001;
    *(undefined **)(uVar32 + 0x650) = &UNK_142f8e1cd;
    *(undefined8 *)(uVar32 + 0x658) = 0x31;
    *(undefined1 *)(uVar32 + 0xda) = 1;
    *(undefined1 *)(uVar32 + 0xdb) = 1;
    *(undefined1 *)(uVar32 + 0xdc) = 1;
    *(undefined1 *)(uVar32 + 0xdd) = 1;
    *(undefined1 *)(uVar32 + 0xde) = 1;
    *(undefined1 *)(uVar32 + 0xdf) = 1;
    *(undefined1 *)(uVar32 + 0xe0) = 1;
    *(undefined8 *)(uVar32 - 8) = 0x14065e405;
    pdb_140f332f0(uVar32 + 0xa7,uVar32 + 0x600);
  }
  lVar25 = *(longlong *)(uVar32 + 0x398);
  if (lVar25 == 0) {
    plVar21 = (longlong *)0x0;
  }
  else {
    uVar20 = *(undefined8 *)(uVar32 + 0x3a0);
    *(undefined1 *)(uVar32 + 0xda) = 0;
    *(undefined1 *)(uVar32 + 0xdb) = 1;
    *(undefined1 *)(uVar32 + 0xdc) = 1;
    *(undefined1 *)(uVar32 + 0xdd) = 1;
    *(undefined1 *)(uVar32 + 0xde) = 1;
    *(undefined1 *)(uVar32 + 0xdf) = 1;
    *(undefined1 *)(uVar32 + 0xe0) = 1;
    *(undefined8 *)(uVar32 - 8) = 0x14065e45a;
    plVar21 = (longlong *)pdb_140944410(uVar32 + 0x2b00,lVar25,uVar20);
  }
  bVar11 = 2 - (*(longlong *)(uVar32 + 0x11b8) == -0x7fffffffffffffee & *(byte *)(uVar32 + 0x11c0));
  *(longlong **)(uVar32 + 0x1f8) = plVar21;
  if (plVar21 == (longlong *)0x0) {
    lVar25 = 0;
  }
  *(longlong *)(uVar32 + 0x240) = lVar25;
  uVar33 = CONCAT71((int7)((ulonglong)lVar18 >> 8),bVar11);
  if (plVar21 != (longlong *)0x0) {
    *(undefined8 *)(uVar32 - 8) = 0x14065e624;
    uVar20 = pub_142e31f10();
    LOCK();
    lVar18 = *plVar21;
    *plVar21 = *plVar21 + 1;
    UNLOCK();
    if (*plVar21 == 0 || SCARRY8(lVar18,1) != *plVar21 < 0) goto LAB_140662d59;
    *(longlong **)(uVar32 + 0x600) = plVar21;
    *(undefined8 *)(uVar32 + 0x608) = uVar20;
    *(undefined8 *)(uVar32 - 8) = 0x14065e644;
    cVar12 = pub_142e31e90(uVar20);
    plVar21 = *(longlong **)(uVar32 + 0x600);
    LOCK();
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (*plVar21 == 0) {
      *(undefined1 *)(uVar32 + 199) = 1;
      *(undefined1 *)(uVar32 + 200) = 1;
      *(undefined1 *)(uVar32 + 0xc9) = 1;
      *(undefined1 *)(uVar32 + 0xca) = 1;
      *(undefined1 *)(uVar32 + 0xcb) = 1;
      *(undefined1 *)(uVar32 + 0xcc) = 1;
      *(undefined8 *)(uVar32 - 8) = 0x14065e689;
      pdb_140cb1c10(uVar32 + 0x600);
    }
    uVar33 = 0;
    if (cVar12 == '\0') {
      uVar33 = (ulonglong)bVar11;
    }
  }
  *(undefined1 *)(uVar32 + 199) = 1;
  *(undefined1 *)(uVar32 + 200) = 1;
  *(undefined1 *)(uVar32 + 0xc9) = 1;
  *(undefined1 *)(uVar32 + 0xca) = 1;
  *(undefined1 *)(uVar32 + 0xcb) = 1;
  *(undefined1 *)(uVar32 + 0xcc) = 1;
  *(undefined8 *)(uVar32 - 8) = 0x14065e6ce;
  pdb_14028bf20(uVar32 + 0x2b00,uVar33 & 0xffffffff);
  if (3 < *_DAT_143ca8e90) {
    *(undefined8 *)(uVar32 + 0x600) = 0;
    *(undefined **)(uVar32 + 0x608) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x610) = 0x14;
    *(undefined8 *)(uVar32 + 0x618) = 0;
    *(undefined **)(uVar32 + 0x620) = &UNK_142f8d911;
    *(undefined8 *)(uVar32 + 0x628) = 0x21;
    *(undefined8 *)(uVar32 + 0x630) = 4;
    *(undefined **)(uVar32 + 0x638) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x640) = 0x14;
    *(undefined8 *)(uVar32 + 0x648) = 0x1bf00000001;
    *(undefined **)(uVar32 + 0x650) = &UNK_142f8e1e5;
    *(undefined8 *)(uVar32 + 0x658) = 0x5d;
    *(undefined1 *)(uVar32 + 199) = 1;
    *(undefined1 *)(uVar32 + 200) = 1;
    *(undefined1 *)(uVar32 + 0xc9) = 1;
    *(undefined1 *)(uVar32 + 0xca) = 1;
    *(undefined1 *)(uVar32 + 0xcb) = 1;
    *(undefined1 *)(uVar32 + 0xcc) = 1;
    *(undefined8 *)(uVar32 - 8) = 0x14065e7af;
    pdb_140f332f0(uVar32 + 0xa7,uVar32 + 0x600);
  }
  *(undefined8 *)(uVar32 + 0x13d0) = *(undefined8 *)(uVar32 + 0x11f8);
  *(undefined8 *)(uVar32 + 0x13c0) = *(undefined8 *)(uVar32 + 0x11e8);
  *(undefined8 *)(uVar32 + 0x13c8) = *(undefined8 *)(uVar32 + 0x11f0);
  *(undefined1 *)(uVar32 + 199) = 1;
  *(undefined1 *)(uVar32 + 200) = 1;
  *(undefined1 *)(uVar32 + 0xc9) = 1;
  *(undefined1 *)(uVar32 + 0xca) = 0;
  *(undefined1 *)(uVar32 + 0xcb) = 1;
  *(undefined1 *)(uVar32 + 0xcc) = 1;
  *(undefined8 *)(uVar32 - 8) = 0x14065e80e;
  pdb_14022f7c0(uVar32 + 0x600,uVar32 + 0x13c0);
  if (*(int *)(uVar32 + 0x600) == 0x19) {
    *(undefined8 *)(uVar32 + 0x13c0) = *(undefined8 *)(uVar32 + 0x608);
    *(undefined8 *)(uVar32 + 0x13c8) = *(undefined8 *)(uVar32 + 0x610);
    *(undefined **)(uVar32 + 0x20) = &UNK_142f8e218;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(uVar32 - 8) = 0x140662922;
    pdb_142dc8170(&UNK_142f8e520,0x2b,uVar32 + 0x13c0,&UNK_142f8e5b0);
  }
  *(undefined8 *)(uVar32 + 0x1270) = *(undefined8 *)(uVar32 + 0x670);
  *(undefined8 *)(uVar32 + 0x1278) = *(undefined8 *)(uVar32 + 0x678);
  *(undefined8 *)(uVar32 + 0x1260) = *(undefined8 *)(uVar32 + 0x660);
  *(undefined8 *)(uVar32 + 0x1268) = *(undefined8 *)(uVar32 + 0x668);
  *(undefined8 *)(uVar32 + 0x1250) = *(undefined8 *)(uVar32 + 0x650);
  *(undefined8 *)(uVar32 + 0x1258) = *(undefined8 *)(uVar32 + 0x658);
  *(undefined8 *)(uVar32 + 0x1240) = *(undefined8 *)(uVar32 + 0x640);
  *(undefined8 *)(uVar32 + 0x1248) = *(undefined8 *)(uVar32 + 0x648);
  *(undefined8 *)(uVar32 + 0x1230) = *(undefined8 *)(uVar32 + 0x630);
  *(undefined8 *)(uVar32 + 0x1238) = *(undefined8 *)(uVar32 + 0x638);
  *(undefined8 *)(uVar32 + 0x1220) = *(undefined8 *)(uVar32 + 0x620);
  *(undefined8 *)(uVar32 + 0x1228) = *(undefined8 *)(uVar32 + 0x628);
  *(undefined8 *)(uVar32 + 0x1210) = *(undefined8 *)(uVar32 + 0x610);
  *(undefined8 *)(uVar32 + 0x1218) = *(undefined8 *)(uVar32 + 0x618);
  *(undefined8 *)(uVar32 + 0x1200) = *(undefined8 *)(uVar32 + 0x600);
  *(undefined8 *)(uVar32 + 0x1208) = *(undefined8 *)(uVar32 + 0x608);
  if (3 < *_DAT_143ca8e90) {
    *(undefined8 *)(uVar32 + 0x600) = 0;
    *(undefined **)(uVar32 + 0x608) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x610) = 0x14;
    *(undefined8 *)(uVar32 + 0x618) = 0;
    *(undefined **)(uVar32 + 0x620) = &UNK_142f8d911;
    *(undefined8 *)(uVar32 + 0x628) = 0x21;
    *(undefined8 *)(uVar32 + 0x630) = 4;
    *(undefined **)(uVar32 + 0x638) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x640) = 0x14;
    *(undefined8 *)(uVar32 + 0x648) = 0x1c200000001;
    *(undefined **)(uVar32 + 0x650) = &UNK_142f8e230;
    *(undefined8 *)(uVar32 + 0x658) = 0x2b;
    *(undefined1 *)(uVar32 + 0xab) = 1;
    *(undefined1 *)(uVar32 + 0xac) = 1;
    *(undefined1 *)(uVar32 + 0xad) = 1;
    *(undefined1 *)(uVar32 + 0xae) = 1;
    *(undefined1 *)(uVar32 + 0xaf) = 1;
    *(undefined1 *)(uVar32 + 0xb0) = 1;
    *(undefined8 *)(uVar32 - 8) = 0x14065e974;
    pdb_140f332f0(uVar32 + 0xa7,uVar32 + 0x600);
  }
  uVar20 = *(undefined8 *)(uVar32 + 0x1208);
  uVar14 = *(undefined1 *)(uVar32 + 0x1210);
  *(undefined8 *)(uVar32 + 0x1e8) = *(undefined8 *)(uVar32 + 0x1250);
  *(undefined8 *)(uVar32 + 0x1d8) = *(undefined8 *)(uVar32 + 0x1258);
  *(undefined8 *)(uVar32 + 0x1b0) = *(undefined8 *)(uVar32 + 0x1268);
  *(undefined8 *)(uVar32 + 0x228) = *(undefined8 *)(uVar32 + 0x1270);
  *(undefined8 *)(uVar32 + 0x230) = *(undefined8 *)(uVar32 + 0x1278);
  *(undefined1 *)(uVar32 + 0x164) = *(undefined1 *)(*(longlong *)(uVar32 + 0x1f0) + 0x13f);
  *(undefined8 *)(uVar32 + 0x1c0) = *(undefined8 *)(uVar32 + 0x1260);
  if (*(longlong *)(uVar32 + 0x1200) == 0x18) {
    *(undefined8 *)(uVar32 + 0x53f) = *(undefined8 *)(uVar32 + 0x1218);
    *(undefined8 *)(uVar32 + 0x538) = *(undefined8 *)(uVar32 + 0x1211);
  }
  else {
    uVar20 = *(undefined8 *)(uVar32 + 0x1248);
    *(undefined8 *)(uVar32 + 0x1310) = uVar20;
    *(undefined8 *)(uVar32 + 0x1300) = *(undefined8 *)(uVar32 + 0x1238);
    *(undefined8 *)(uVar32 + 0x1308) = *(undefined8 *)(uVar32 + 0x1240);
    *(undefined8 *)(uVar32 + 0x12f0) = *(undefined8 *)(uVar32 + 0x1228);
    *(undefined8 *)(uVar32 + 0x12f8) = *(undefined8 *)(uVar32 + 0x1230);
    *(undefined8 *)(uVar32 + 0x12e0) = *(undefined8 *)(uVar32 + 0x1218);
    *(undefined8 *)(uVar32 + 0x12e8) = *(undefined8 *)(uVar32 + 0x1220);
    *(undefined8 *)(uVar32 + 0x12d0) = *(undefined8 *)(uVar32 + 0x1208);
    *(undefined8 *)(uVar32 + 0x12d8) = *(undefined8 *)(uVar32 + 0x1210);
    uVar14 = 2;
  }
  *(undefined8 *)(uVar32 + 0x280) = uVar20;
  *(undefined1 *)(uVar32 + 0x288) = uVar14;
  *(undefined8 *)(uVar32 + 0x289) = *(undefined8 *)(uVar32 + 0x538);
  *(undefined8 *)(uVar32 + 0x290) = *(undefined8 *)(uVar32 + 0x53f);
  *(longlong *)(uVar32 + 0x5b0) = *(longlong *)(uVar32 + 0x1200);
  *(undefined8 *)(uVar32 + 0x5b8) = *(undefined8 *)(uVar32 + 0x12d0);
  *(undefined8 *)(uVar32 + 0x5c0) = *(undefined8 *)(uVar32 + 0x12d8);
  *(undefined8 *)(uVar32 + 0x5c8) = *(undefined8 *)(uVar32 + 0x12e0);
  *(undefined8 *)(uVar32 + 0x5d0) = *(undefined8 *)(uVar32 + 0x12e8);
  *(undefined8 *)(uVar32 + 0x5d8) = *(undefined8 *)(uVar32 + 0x12f0);
  *(undefined8 *)(uVar32 + 0x5e0) = *(undefined8 *)(uVar32 + 0x12f8);
  *(undefined8 *)(uVar32 + 0x5e8) = *(undefined8 *)(uVar32 + 0x1300);
  *(undefined8 *)(uVar32 + 0x5f0) = *(undefined8 *)(uVar32 + 0x1308);
  *(undefined8 *)(uVar32 + 0x5f8) = *(undefined8 *)(uVar32 + 0x1310);
  *(undefined1 *)(uVar32 + 0x12e) = 1;
  *(undefined1 *)(uVar32 + 0x12f) = 1;
  *(undefined8 *)(uVar32 - 8) = 0x14065eb04;
  pdb_140f4c440(uVar32 + 0x600,&UNK_142f8dde8,0x15);
  uVar33 = *(ulonglong *)(uVar32 + 0x600);
  *(int *)(uVar32 + 0x2d0) = (int)uVar40;
  if (SBORROW8(0,uVar33)) {
LAB_14065f160:
    *(undefined8 *)(uVar32 + 0x660) = *(undefined8 *)(uVar32 + 0x5f0);
    *(undefined8 *)(uVar32 + 0x668) = *(undefined8 *)(uVar32 + 0x5f8);
    *(undefined8 *)(uVar32 + 0x650) = *(undefined8 *)(uVar32 + 0x5e0);
    *(undefined8 *)(uVar32 + 0x658) = *(undefined8 *)(uVar32 + 0x5e8);
    *(undefined8 *)(uVar32 + 0x640) = *(undefined8 *)(uVar32 + 0x5d0);
    *(undefined8 *)(uVar32 + 0x648) = *(undefined8 *)(uVar32 + 0x5d8);
    *(undefined8 *)(uVar32 + 0x630) = *(undefined8 *)(uVar32 + 0x5c0);
    *(undefined8 *)(uVar32 + 0x638) = *(undefined8 *)(uVar32 + 0x5c8);
    *(undefined8 *)(uVar32 + 0x620) = *(undefined8 *)(uVar32 + 0x5b0);
    *(undefined8 *)(uVar32 + 0x628) = *(undefined8 *)(uVar32 + 0x5b8);
    *(undefined4 *)(uVar32 + 0x160) = 0;
    uVar40 = *(undefined8 *)(uVar32 + 0x230);
    uVar33 = *(ulonglong *)(uVar32 + 0x228);
    lVar18 = *(longlong *)(uVar32 + 0x1d8);
    *(undefined8 *)(uVar32 + 0x120) = *(undefined8 *)(uVar32 + 0x1e8);
  }
  else {
    if (uVar33 != 0x8000000000000001) {
      if (uVar33 != 0) {
        pbVar19 = *(byte **)(uVar32 + 0x608);
        *(undefined8 *)(uVar32 - 8) = 0x14065eb9c;
        pub_1406abac0(pbVar19,uVar33,1);
      }
      goto LAB_14065f160;
    }
    uVar33 = *(ulonglong *)(uVar32 + 0x608);
    if (SBORROW8(0,uVar33)) goto LAB_14065f160;
    pbVar19 = *(byte **)(uVar32 + 0x610);
    uVar37 = *(ulonglong *)(uVar32 + 0x618);
    if (uVar37 == 0) {
      uVar22 = 0;
      bVar41 = true;
    }
    else {
      if (uVar37 == 1) {
        bVar11 = *pbVar19;
        uVar22 = 0;
        bVar41 = true;
        if ((bVar11 == 0x2b) || (bVar11 == 0x2d)) goto LAB_14065f143;
      }
      else {
        bVar11 = *pbVar19;
      }
      uVar22 = (ulonglong)(bVar11 == 0x2b);
      uVar30 = uVar37 - uVar22;
      pbVar26 = pbVar19 + uVar22;
      if (uVar30 < 9) {
        if (uVar37 == uVar22) {
          uVar43 = 0;
        }
        else {
          uVar16 = *pbVar26 - 0x30;
          uVar43 = (ulonglong)uVar16;
          uVar22 = 0;
          bVar41 = true;
          if (9 < uVar16) goto LAB_14065f143;
          if (uVar30 != 1) {
            if (9 < pbVar26[1] - 0x30) goto LAB_14065f143;
            uVar16 = (pbVar26[1] - 0x30) + uVar16 * 10;
            uVar43 = (ulonglong)uVar16;
            if (uVar30 != 2) {
              if (9 < pbVar26[2] - 0x30) goto LAB_14065f143;
              uVar16 = (pbVar26[2] - 0x30) + uVar16 * 10;
              uVar43 = (ulonglong)uVar16;
              if (uVar30 != 3) {
                if (9 < pbVar26[3] - 0x30) goto LAB_14065f143;
                uVar16 = (pbVar26[3] - 0x30) + uVar16 * 10;
                uVar43 = (ulonglong)uVar16;
                if (uVar30 != 4) {
                  if (9 < pbVar26[4] - 0x30) goto LAB_14065f143;
                  uVar16 = (pbVar26[4] - 0x30) + uVar16 * 10;
                  uVar43 = (ulonglong)uVar16;
                  if (uVar30 != 5) {
                    if (9 < pbVar26[5] - 0x30) goto LAB_14065f143;
                    uVar16 = (pbVar26[5] - 0x30) + uVar16 * 10;
                    uVar43 = (ulonglong)uVar16;
                    if (uVar30 != 6) {
                      if (9 < pbVar26[6] - 0x30) goto LAB_14065f143;
                      uVar16 = (pbVar26[6] - 0x30) + uVar16 * 10;
                      uVar43 = (ulonglong)uVar16;
                      if (uVar30 != 7) {
                        if (9 < pbVar26[7] - 0x30) goto LAB_14065f143;
                        uVar43 = (ulonglong)((pbVar26[7] - 0x30) + uVar16 * 10);
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_14065f13c:
        uVar22 = uVar43 << 0x20;
        bVar41 = false;
      }
      else {
        uVar43 = 0;
        lVar18 = 0;
        do {
          if (lVar18 == uVar37 - uVar22) goto LAB_14065f13c;
          uVar16 = (uint)(uVar43 * 10);
          if ((int)(uVar43 * 10 >> 0x20) != 0) {
            uVar22 = 0;
            bVar41 = true;
            goto LAB_14065f143;
          }
          uVar17 = pbVar26[lVar18] - 0x30;
          if (9 < uVar17) {
            uVar22 = 0;
            bVar41 = true;
            goto LAB_14065f143;
          }
          lVar18 = lVar18 + 1;
          uVar43 = (ulonglong)(uVar17 + uVar16);
        } while (!CARRY4(uVar17,uVar16));
        uVar22 = 0;
        bVar41 = true;
      }
    }
LAB_14065f143:
    if (uVar33 != 0) {
      *(undefined8 *)(uVar32 - 8) = 0x14065f156;
      pub_1406abac0(pbVar19,uVar33,1);
    }
    if (bVar41) goto LAB_14065f160;
    *(undefined1 *)(uVar32 + 0x12e) = 1;
    *(undefined1 *)(uVar32 + 0x12f) = 1;
    *(undefined8 *)(uVar32 - 8) = 0x14065fe44;
    pdb_14047bc80(uVar32 + 0x600,uVar22 >> 0x20,uVar32 + 0x164);
    *(undefined8 *)(uVar32 + 0x120) = *(undefined8 *)(uVar32 + 0x600);
    lVar18 = *(longlong *)(uVar32 + 0x608);
    uVar33 = *(ulonglong *)(uVar32 + 0x610);
    *(int *)(uVar32 + 0x160) =
         (int)CONCAT71((int7)((ulonglong)*(undefined8 *)(uVar32 + 0x600) >> 8),1);
    uVar40 = *(undefined8 *)(uVar32 + 0x618);
  }
  *(undefined8 *)(uVar32 + 0x12c0) = *(undefined8 *)(uVar32 + 0x660);
  *(undefined8 *)(uVar32 + 0x12c8) = *(undefined8 *)(uVar32 + 0x668);
  *(undefined8 *)(uVar32 + 0x12b0) = *(undefined8 *)(uVar32 + 0x650);
  *(undefined8 *)(uVar32 + 0x12b8) = *(undefined8 *)(uVar32 + 0x658);
  *(undefined8 *)(uVar32 + 0x12a0) = *(undefined8 *)(uVar32 + 0x640);
  *(undefined8 *)(uVar32 + 0x12a8) = *(undefined8 *)(uVar32 + 0x648);
  *(undefined8 *)(uVar32 + 0x1290) = *(undefined8 *)(uVar32 + 0x630);
  *(undefined8 *)(uVar32 + 0x1298) = *(undefined8 *)(uVar32 + 0x638);
  *(undefined8 *)(uVar32 + 0x1280) = *(undefined8 *)(uVar32 + 0x620);
  *(undefined8 *)(uVar32 + 0x1288) = *(undefined8 *)(uVar32 + 0x628);
  *(longlong *)(uVar32 + 0x180) = lVar18;
  if (lVar18 == 0) {
    *(ulonglong *)(uVar32 + 0x248) = uVar33;
    *(undefined8 *)(uVar32 + 0x250) = uVar40;
    *(undefined1 *)(uVar32 + 0x109) = 1;
    *(undefined1 *)(uVar32 + 0x10a) = 1;
    *(undefined1 *)(uVar32 + 0x10b) = 1;
    *(undefined1 *)(uVar32 + 0x10c) = 1;
    *(undefined8 *)(uVar32 - 8) = 0x14065f26b;
    pdb_14065cf60(uVar32 + 0x1a0);
  }
  lVar18 = *(longlong *)(uVar32 + 0x180);
  lVar25 = *(longlong *)(uVar32 + 0x120);
  *(longlong *)(uVar32 + 0x1b8) = lVar18 * 0xa0;
  *(ulonglong *)(uVar32 + 0x248) = uVar33;
  *(undefined8 *)(uVar32 + 0x250) = uVar40;
  *(undefined1 *)(uVar32 + 0x109) = 1;
  *(undefined1 *)(uVar32 + 0x10a) = 1;
  *(undefined1 *)(uVar32 + 0x10b) = 1;
  *(undefined1 *)(uVar32 + 0x10c) = 1;
  *(undefined8 *)(uVar32 - 8) = 0x14065f2c6;
  pdb_140178480(uVar32 + 0x600);
  *(undefined8 *)(uVar32 + 0x178) = uVar40;
  *(ulonglong *)(uVar32 + 0x198) = uVar33;
  uVar37 = *(ulonglong *)(uVar32 + 0x610);
  if (1 < uVar37) {
    uVar33 = *(ulonglong *)(uVar32 + 0x608);
    if (uVar37 < 0x15) {
      lVar35 = uVar33 + 0x30;
      do {
        *(undefined8 *)(uVar32 - 8) = 0x140662953;
        pdb_1400dee80(uVar33);
        lVar35 = lVar35 + 0x30;
      } while (lVar35 != uVar37 * 0x30 + uVar33);
    }
    else {
      *(undefined8 *)(uVar32 - 8) = 0x140662cfe;
      pdb_140225120(uVar33);
    }
  }
  *(undefined8 *)(uVar32 + 0x370) = *(undefined8 *)(uVar32 + 0x610);
  *(undefined8 *)(uVar32 + 0x360) = *(undefined8 *)(uVar32 + 0x600);
  *(undefined8 *)(uVar32 + 0x368) = *(undefined8 *)(uVar32 + 0x608);
  lVar35 = *(longlong *)(uVar32 + 0x168);
  if (*(char *)(lVar35 + 0xae) == '\0') {
    *(undefined8 *)(uVar32 + 0x118) = 0;
    uVar40 = *(undefined8 *)(uVar32 + 0x198);
    uVar14 = *(longlong *)(uVar32 + 0x1280) == 0x18;
    *(undefined1 *)(uVar32 + 0x144) = uVar14;
joined_r0x00014065f637:
    if (!(bool)uVar14) goto LAB_14065f5c1;
LAB_14065f639:
    if (*(char *)(uVar32 + 0x164) == '\x01') {
      *(undefined8 *)(uVar32 + 0x560) = 0x18;
      goto LAB_14065f724;
    }
    if (*(longlong *)(uVar32 + 0x180) == 0) {
      *(undefined8 *)(uVar32 + 0x560) = 0x1d;
      goto LAB_14065f724;
    }
    *(undefined8 *)(uVar32 + 0x218) = uVar40;
    lVar31 = *(longlong *)(uVar32 + 0x178);
    *(longlong *)(uVar32 + 0x220) = lVar31;
    *(undefined1 *)(uVar32 + 0xe1) = 1;
    *(undefined1 *)(uVar32 + 0xe2) = 1;
    *(undefined1 *)(uVar32 + 0xe3) = 1;
    *(undefined1 *)(uVar32 + 0xe4) = 1;
    *(undefined1 *)(uVar32 + 0xe5) = 1;
    uVar20 = *(undefined8 *)(uVar32 + 0x120);
    *(undefined8 *)(uVar32 - 8) = 0x14065f6a4;
    cVar12 = pdb_140e14670(uVar20);
    if (cVar12 == '\0') {
      *(undefined8 *)(uVar32 + 0x560) = 0x19;
      pbVar19 = *(byte **)(uVar32 + 0x120);
      lVar35 = *(longlong *)(uVar32 + 0x168);
      lVar31 = *(longlong *)(uVar32 + 0x1b8);
    }
    else {
      lVar35 = *(longlong *)(uVar32 + 0x168);
      if (lVar31 != 0) {
        *(undefined8 *)(uVar32 + 0x560) = 0x1b;
        goto LAB_14065f724;
      }
      lVar31 = *(longlong *)(lVar35 + 0x10);
      if (*(longlong *)(uVar32 + 0x370) == lVar31) {
        uVar40 = *(undefined8 *)(lVar35 + 8);
        uVar20 = *(undefined8 *)(uVar32 + 0x368);
        *(undefined8 *)(uVar32 - 8) = 0x14066280e;
        cVar12 = pdb_140143890(uVar20,uVar40);
        if (cVar12 == '\0') goto LAB_140662812;
LAB_140662834:
        *(undefined8 *)(uVar32 + 0x560) = 0x1e;
      }
      else {
LAB_140662812:
        if (*(longlong *)(uVar32 + 0x180) == 1 || lVar31 == 0) goto LAB_140662834;
        *(undefined8 *)(uVar32 + 0x560) = 0x1a;
      }
      pbVar19 = *(byte **)(uVar32 + 0x120);
      uVar40 = *(undefined8 *)(uVar32 + 0x198);
      lVar31 = *(longlong *)(uVar32 + 0x1b8);
    }
  }
  else {
    uVar40 = *(undefined8 *)(lVar35 + 0xb7);
    *(undefined8 *)(uVar32 + 0x1f60) = *(undefined8 *)(lVar35 + 0xaf);
    *(undefined8 *)(uVar32 + 0x1f68) = uVar40;
    uVar40 = *(undefined8 *)(uVar32 + 0x198);
    if (2 < *_DAT_143ca8e90) {
      *(ulonglong *)(uVar32 + 0x13c0) = uVar32 + 0x1f60;
      *(code **)(uVar32 + 0x13c8) = pdb_140eaccb0;
      *(undefined8 *)(uVar32 + 0x600) = 0;
      *(undefined **)(uVar32 + 0x608) = &UNK_142f8d9fd;
      *(undefined8 *)(uVar32 + 0x610) = 0x14;
      *(undefined8 *)(uVar32 + 0x618) = 0;
      *(undefined **)(uVar32 + 0x620) = &UNK_142f8d911;
      *(undefined8 *)(uVar32 + 0x628) = 0x21;
      *(undefined8 *)(uVar32 + 0x630) = 3;
      *(undefined **)(uVar32 + 0x638) = &UNK_142f8d9fd;
      *(undefined8 *)(uVar32 + 0x640) = 0x14;
      *(undefined8 *)(uVar32 + 0x648) = 0x27400000001;
      *(undefined **)(uVar32 + 0x650) = &UNK_142f8ddfd;
      *(ulonglong *)(uVar32 + 0x658) = uVar32 + 0x13c0;
      *(undefined8 *)(uVar32 + 0x218) = uVar40;
      *(undefined8 *)(uVar32 + 0x220) = *(undefined8 *)(uVar32 + 0x178);
      *(undefined1 *)(uVar32 + 0xe1) = 1;
      *(undefined1 *)(uVar32 + 0xe2) = 1;
      *(undefined1 *)(uVar32 + 0xe3) = 1;
      *(undefined1 *)(uVar32 + 0xe4) = 1;
      *(undefined1 *)(uVar32 + 0xe5) = 1;
      *(undefined8 *)(uVar32 - 8) = 0x14065f43a;
      pdb_140f332f0(uVar32 + 0xa7);
      lVar35 = *(longlong *)(uVar32 + 0x168);
    }
    if (*(longlong *)(uVar32 + 0x180) != 0) {
      uVar33 = 0;
      lVar31 = 0;
      do {
        if (*(longlong *)(*(longlong *)(uVar32 + 0x120) + 0x80 + lVar31) ==
            *(longlong *)(uVar32 + 0x1f68) &&
            *(longlong *)(*(longlong *)(uVar32 + 0x120) + 0x78 + lVar31) ==
            *(longlong *)(uVar32 + 0x1f60)) {
          *(undefined8 *)(uVar32 + 0x118) = 1;
          uVar14 = *(longlong *)(uVar32 + 0x1280) == 0x18;
          *(undefined1 *)(uVar32 + 0x144) = uVar14;
          goto joined_r0x00014065f637;
        }
        uVar33 = uVar33 + 1;
        lVar31 = lVar31 + 0xa0;
      } while (*(longlong *)(uVar32 + 0x1b8) != lVar31);
    }
    if (*_DAT_143ca8e90 == 0) {
      *(undefined8 *)(uVar32 + 0x118) = 0;
      uVar14 = *(longlong *)(uVar32 + 0x1280) == 0x18;
      *(undefined1 *)(uVar32 + 0x144) = uVar14;
      goto joined_r0x00014065f637;
    }
    *(ulonglong *)(uVar32 + 0x13c0) = uVar32 + 0x1f60;
    *(code **)(uVar32 + 0x13c8) = pdb_140eaccb0;
    *(undefined8 *)(uVar32 + 0x600) = 0;
    *(undefined **)(uVar32 + 0x608) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x610) = 0x14;
    *(undefined8 *)(uVar32 + 0x618) = 0;
    *(undefined **)(uVar32 + 0x620) = &UNK_142f8d911;
    *(undefined8 *)(uVar32 + 0x628) = 0x21;
    *(undefined8 *)(uVar32 + 0x630) = 1;
    *(undefined **)(uVar32 + 0x638) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x640) = 0x14;
    *(undefined8 *)(uVar32 + 0x648) = 0x27d00000001;
    *(undefined **)(uVar32 + 0x650) = &UNK_142f8de2b;
    *(ulonglong *)(uVar32 + 0x658) = uVar32 + 0x13c0;
    *(undefined8 *)(uVar32 + 0x218) = uVar40;
    *(undefined8 *)(uVar32 + 0x220) = *(undefined8 *)(uVar32 + 0x178);
    *(undefined1 *)(uVar32 + 0xe1) = 1;
    *(undefined1 *)(uVar32 + 0xe2) = 1;
    *(undefined1 *)(uVar32 + 0xe3) = 1;
    *(undefined1 *)(uVar32 + 0xe4) = 1;
    *(undefined1 *)(uVar32 + 0xe5) = 1;
    *(undefined8 *)(uVar32 - 8) = 0x14065f59b;
    pdb_140f332f0(uVar32 + 0xa7,uVar32 + 0x600);
    *(undefined8 *)(uVar32 + 0x118) = 0;
    lVar35 = *(longlong *)(uVar32 + 0x168);
    *(bool *)(uVar32 + 0x144) = *(longlong *)(uVar32 + 0x1280) == 0x18;
    if (*(longlong *)(uVar32 + 0x1280) == 0x18) goto LAB_14065f639;
LAB_14065f5c1:
    *(undefined8 *)(uVar32 + 0x5a0) = *(undefined8 *)(uVar32 + 0x12c0);
    *(undefined8 *)(uVar32 + 0x5a8) = *(undefined8 *)(uVar32 + 0x12c8);
    *(undefined8 *)(uVar32 + 0x590) = *(undefined8 *)(uVar32 + 0x12b0);
    *(undefined8 *)(uVar32 + 0x598) = *(undefined8 *)(uVar32 + 0x12b8);
    *(undefined8 *)(uVar32 + 0x580) = *(undefined8 *)(uVar32 + 0x12a0);
    *(undefined8 *)(uVar32 + 0x588) = *(undefined8 *)(uVar32 + 0x12a8);
    *(undefined8 *)(uVar32 + 0x570) = *(undefined8 *)(uVar32 + 0x1290);
    *(undefined8 *)(uVar32 + 0x578) = *(undefined8 *)(uVar32 + 0x1298);
    *(undefined8 *)(uVar32 + 0x560) = *(undefined8 *)(uVar32 + 0x1280);
    *(undefined8 *)(uVar32 + 0x568) = *(undefined8 *)(uVar32 + 0x1288);
LAB_14065f724:
    pbVar19 = *(byte **)(uVar32 + 0x120);
    lVar31 = *(longlong *)(uVar32 + 0x1b8);
  }
  do {
    lVar38 = lVar31;
    if (lVar38 == 0) break;
    pbVar26 = pbVar19 + 0x58;
    pbVar19 = pbVar19 + 0xa0;
    lVar31 = lVar38 + -0xa0;
  } while (*(int *)pbVar26 != 5);
  *(longlong *)(uVar32 + 0x548) = *(longlong *)(uVar32 + 0x560);
  if (*(longlong *)(uVar32 + 0x560) == 0x1e) {
    *(undefined8 *)(uVar32 + 0x610) = *(undefined8 *)(uVar32 + 0x370);
    *(undefined8 *)(uVar32 + 0x600) = *(undefined8 *)(uVar32 + 0x360);
    *(undefined8 *)(uVar32 + 0x608) = *(undefined8 *)(uVar32 + 0x368);
    pbVar26 = *(byte **)(lVar35 + 8);
    lVar18 = *(longlong *)(lVar35 + 0x10);
    if (lVar18 != 0) {
      pbVar36 = pbVar26 + 0x20;
      do {
        uVar37 = *(ulonglong *)(pbVar36 + -0x20);
        if (uVar37 != 0) {
          pbVar19 = *(byte **)(pbVar36 + -0x18);
          *(undefined8 *)(uVar32 - 8) = 0x14065ff53;
          pub_1406abac0(pbVar19,uVar37,1);
        }
        uVar37 = *(ulonglong *)(pbVar36 + -8);
        if (uVar37 != 0) {
          pbVar19 = *(byte **)pbVar36;
          *(undefined8 *)(uVar32 - 8) = 0x14065ff6c;
          pub_1406abac0(pbVar19,uVar37,1);
        }
        pbVar36 = pbVar36 + 0x30;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    plVar21 = *(longlong **)(uVar32 + 0x168);
    lVar18 = *plVar21;
    if (lVar18 != 0) {
      *(undefined8 *)(uVar32 - 8) = 0x14065ff93;
      pub_1406abac0(pbVar26,lVar18 * 0x30,8);
      pbVar19 = pbVar26;
    }
    plVar21[2] = *(longlong *)(uVar32 + 0x610);
    lVar18 = *(longlong *)(uVar32 + 0x608);
    *plVar21 = *(longlong *)(uVar32 + 0x600);
    plVar21[1] = lVar18;
    *(undefined8 *)(uVar32 + 0x200) = 0;
    *(undefined8 *)(uVar32 + 0x208) = 8;
    *(undefined8 *)(uVar32 + 0x210) = 0;
    uVar37 = *(ulonglong *)(uVar32 + 0x180);
    if (uVar37 != 0) {
      if (*(char *)(uVar32 + 0x288) == '\x02') {
        *(undefined1 *)(uVar32 + 0xb1) = 0;
        *(undefined1 *)(uVar32 + 0xb2) = 1;
        *(undefined1 *)(uVar32 + 0xb3) = 1;
        *(undefined1 *)(uVar32 + 0xb4) = 1;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(uVar32 - 8) = 0x1406629f7;
        pdb_142dc8150(&UNK_142f8df00);
      }
      *(undefined8 *)(uVar32 + 0x2e0) = *(undefined8 *)(uVar32 + 0x280);
      *(char *)(uVar32 + 0x2e8) = *(char *)(uVar32 + 0x288);
      *(undefined8 *)(uVar32 + 0x2e9) = *(undefined8 *)(uVar32 + 0x289);
      *(undefined8 *)(uVar32 + 0x2f0) = *(undefined8 *)(uVar32 + 0x290);
      uVar22 = uVar37 * 8;
      if (uVar22 < 0x7ffffffffffffff9 && uVar37 >> 0x3d == 0) {
        *(undefined8 *)(uVar32 - 8) = 0x140660067;
        pdb_14007ee60();
        uVar40 = 8;
        *(undefined8 *)(uVar32 - 8) = 0x14066007a;
        puVar23 = (ulonglong *)pub_1406abab0(uVar22,8);
        lVar31 = _UNK_142e4ffa8;
        lVar35 = _DAT_142e4ffa0;
        lVar25 = _UNK_142e4ff98;
        lVar18 = _DAT_142e4ff90;
        if (puVar23 != (ulonglong *)0x0) {
          if (uVar37 < 4) {
            uVar22 = 0;
LAB_1406600f0:
            do {
              uVar30 = uVar22;
              puVar23[uVar30] = uVar30;
              uVar22 = uVar30 + 1;
            } while (uVar37 != uVar30 + 1);
          }
          else {
            uVar22 = uVar37 & 0x1ffffffffffffffc;
            uVar27 = 0;
            uVar30 = _DAT_142e4ff80;
            uVar43 = _UNK_142e4ff88;
            do {
              puVar23[uVar27] = uVar30;
              (puVar23 + uVar27)[1] = uVar43;
              puVar23[uVar27 + 2] = uVar30 + lVar18;
              (puVar23 + uVar27 + 2)[1] = uVar43 + lVar25;
              uVar27 = uVar27 + 4;
              uVar30 = uVar30 + lVar35;
              uVar43 = uVar43 + lVar31;
            } while (uVar22 != uVar27);
            if (uVar37 != uVar22) goto LAB_1406600f0;
            uVar30 = uVar22 - 1;
          }
          *(ulonglong *)(uVar32 + 0x2f8) = uVar37;
          *(ulonglong **)(uVar32 + 0x300) = puVar23;
          *(ulonglong *)(uVar32 + 0x308) = uVar37;
          if (*(longlong *)(uVar32 + 0x118) == 0) {
            *(ulonglong *)(uVar32 + 0x298) = uVar37;
          }
          else {
            if (uVar30 < uVar33) {
              *(undefined1 *)(uVar32 + 0x146) = 1;
              *(undefined8 *)(uVar32 - 8) = 0x140662d58;
              pdb_142dc7ef8(uVar33,uVar37,&UNK_142f8df18);
              goto LAB_140662d59;
            }
            uVar22 = puVar23[uVar33];
            *(undefined8 *)(uVar32 - 8) = 0x140660143;
            pub_142e32770(puVar23 + uVar33,puVar23 + uVar33 + 1);
            *(ulonglong *)(uVar32 + 0x308) = uVar30;
            if (uVar30 == uVar37) {
              *(undefined1 *)(uVar32 + 0x146) = 1;
              *(undefined8 *)(uVar32 - 8) = 0x140660162;
              pdb_142d7e8a0(uVar32 + 0x2f8);
              puVar23 = *(ulonglong **)(uVar32 + 0x300);
              uVar37 = *(ulonglong *)(uVar32 + 0x180);
LAB_14066019f:
              *(undefined8 *)(uVar32 - 8) = 0x1406601b2;
              pub_142e32770(puVar23 + 1,puVar23);
            }
            else if (uVar30 != 0) goto LAB_14066019f;
            *puVar23 = uVar22;
            *(ulonglong *)(uVar32 + 0x308) = uVar37;
            *(undefined8 *)(uVar32 + 0x298) = *(undefined8 *)(uVar32 + 0x2f8);
            puVar23 = *(ulonglong **)(uVar32 + 0x300);
          }
          *(ulonglong **)(uVar32 + 0x550) = puVar23 + uVar37;
          fVar10 = _DAT_142e3b1d8;
          *(ulonglong **)(uVar32 + 0x2c8) = puVar23;
          arg0 = puVar23;
LAB_14066023c:
          if (puVar23 != *(ulonglong **)(uVar32 + 0x550)) {
            *(ulonglong **)(uVar32 + 0x118) = puVar23;
            uVar33 = *puVar23;
            if (*(ulonglong *)(uVar32 + 0x180) <= uVar33) {
              uVar40 = *(undefined8 *)(uVar32 + 0x180);
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(uVar32 - 8) = 0x140662bb9;
              pdb_142dc81f2(uVar33,uVar40,&UNK_142f8eb18);
            }
            puVar39 = (undefined8 *)(uVar33 * 0xa0 + *(longlong *)(uVar32 + 0x120));
            *(undefined8 **)(uVar32 + 0x558) = puVar39;
            *(undefined8 *)(uVar32 - 8) = 0x140660285;
            pdb_140e147c0(uVar32 + 0x600,puVar39);
            puVar28 = &UNK_142f8df30;
            if (*(int *)(uVar32 + 0x600) == 5) {
              puVar28 = &UNK_142f8df3b;
            }
            *(undefined **)(uVar32 + 0x11d8) = puVar28;
            *(ulonglong *)(uVar32 + 0x11e0) = (ulonglong)(*(int *)(uVar32 + 0x600) != 5) * 2 + 9;
            if (3 < *_DAT_143ca8e90) {
              *(ulonglong *)(uVar32 + 0x13c0) = uVar32 + 0x11d8;
              *(code **)(uVar32 + 0x13c8) = pdb_1402ed400;
              *(ulonglong *)(uVar32 + 0x13d0) = uVar32 + 0x558;
              *(code **)(uVar32 + 0x13d8) = pdb_1402ed130;
              *(undefined8 *)(uVar32 + 0x600) = 0;
              *(undefined **)(uVar32 + 0x608) = &UNK_142f8d9fd;
              *(undefined8 *)(uVar32 + 0x610) = 0x14;
              *(undefined8 *)(uVar32 + 0x618) = 0;
              *(undefined **)(uVar32 + 0x620) = &UNK_142f8d911;
              *(undefined8 *)(uVar32 + 0x628) = 0x21;
              *(undefined8 *)(uVar32 + 0x630) = 4;
              *(undefined **)(uVar32 + 0x638) = &UNK_142f8d9fd;
              *(undefined8 *)(uVar32 + 0x640) = 0x14;
              *(undefined8 *)(uVar32 + 0x648) = 0x2da00000001;
              *(undefined **)(uVar32 + 0x650) = &UNK_142f8df44;
              *(ulonglong *)(uVar32 + 0x658) = uVar32 + 0x13c0;
              *(undefined8 *)(uVar32 - 8) = 0x1406603a8;
              pdb_140f332f0(uVar32 + 0xa7,uVar32 + 0x600);
            }
            if (*(ulonglong *)(uVar32 + 0x1b0) <= uVar33) {
              uVar40 = *(undefined8 *)(uVar32 + 0x1b0);
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(uVar32 - 8) = 0x140662b9d;
              pdb_142dc81f2(uVar33,uVar40,&UNK_142f8eb00);
            }
            lVar18 = *(longlong *)(uVar32 + 0x1c0);
            *(undefined8 *)(uVar32 - 8) = 0x1406603d4;
            pdb_140e58040(uVar32 + 0x3160,lVar18 + uVar33 * 8,uVar32 + 0x2e8);
            if (*(int *)(uVar32 + 0x3160) == 2) {
              lVar18 = *(longlong *)(uVar32 + 0x3168);
              *(undefined8 *)(uVar32 + 0x138) = *(undefined8 *)(uVar32 + 0x3170);
              uVar40 = *(undefined8 *)(uVar32 + 0x3178);
              uVar20 = *(undefined8 *)(uVar32 + 0x3180);
              *(undefined8 *)(uVar32 + 0x3f0) = *(undefined8 *)(uVar32 + 0x3188);
              *(undefined8 *)(uVar32 + 0x3f8) = *(undefined8 *)(uVar32 + 0x3190);
              *(undefined8 *)(uVar32 + 0x400) = *(undefined8 *)(uVar32 + 0x3198);
              *(undefined8 *)(uVar32 + 0x408) = *(undefined8 *)(uVar32 + 0x31a0);
              *(undefined8 *)(uVar32 + 0x410) = *(undefined8 *)(uVar32 + 0x31a8);
              *(undefined8 *)(uVar32 + 0x418) = *(undefined8 *)(uVar32 + 0x31b0);
              *(undefined8 *)(uVar32 + 0x170) = uVar40;
              *(undefined8 *)(uVar32 + 0x238) = uVar20;
              if (lVar18 != 0x18) goto LAB_1406607e1;
LAB_14066044a:
              *(undefined8 *)(uVar32 + 0x2a8) = *(undefined8 *)(uVar32 + 0x138);
              *(undefined8 *)(uVar32 + 0x2b0) = uVar40;
              *(undefined8 *)(uVar32 + 0x2b8) = uVar20;
            }
            else {
              lVar18 = uVar32 + 0x3160;
              *(undefined8 *)(uVar32 - 8) = 0x140660489;
              pub_142e32760(uVar32 + 0x1f60,lVar18,0xba0);
              uVar29 = (undefined4)lVar18;
              *(undefined1 *)(uVar32 + 0xe6) = 1;
              *(undefined8 *)(uVar32 - 8) = 0x14066049c;
              uVar15 = pdb_14065ce90(uVar32 + 0x1a0);
              *(undefined4 *)(uVar32 + 0x600) = uVar15;
              *(undefined4 *)(uVar32 + 0x604) = uVar29;
              *(undefined1 *)(uVar32 + 0xe6) = 1;
              *(undefined8 *)(uVar32 - 8) = 0x1406604bc;
              uVar15 = pdb_140a6ad20(uVar32 + 0x600);
              *(undefined1 *)(uVar32 + 0xe6) = 1;
              *(undefined8 *)(uVar32 - 8) = 0x1406604d2;
              fVar42 = (float)pdb_140340770(uVar32 + 0x1f60,uVar15);
              *(float *)(uVar32 + 0x2dc) = fVar42;
              if (3 < *_DAT_143ca8e90) {
                *(ulonglong *)(uVar32 + 0x13c0) = uVar32 + 0x2dc;
                *(code **)(uVar32 + 0x13c8) = pdb_140f70fc0;
                *(undefined8 *)(uVar32 + 0x600) = 0;
                *(undefined **)(uVar32 + 0x608) = &UNK_142f8d9fd;
                *(undefined8 *)(uVar32 + 0x610) = 0x14;
                *(undefined8 *)(uVar32 + 0x618) = 0;
                *(undefined **)(uVar32 + 0x620) = &UNK_142f8d911;
                *(undefined8 *)(uVar32 + 0x628) = 0x21;
                *(undefined8 *)(uVar32 + 0x630) = 4;
                *(undefined **)(uVar32 + 0x638) = &UNK_142f8d9fd;
                *(undefined8 *)(uVar32 + 0x640) = 0x14;
                *(undefined8 *)(uVar32 + 0x648) = 0x2ef00000001;
                *(undefined **)(uVar32 + 0x650) = &UNK_142f8df71;
                *(ulonglong *)(uVar32 + 0x658) = uVar32 + 0x13c0;
                *(undefined1 *)(uVar32 + 0xe6) = 1;
                *(undefined8 *)(uVar32 - 8) = 0x1406605bb;
                pdb_140f332f0(uVar32 + 0xa7,uVar32 + 0x600);
              }
              if (fVar10 <= fVar42) {
                *(undefined1 *)(uVar32 + 0xe6) = 1;
                *(undefined8 *)(uVar32 - 8) = 0x1406605fa;
                pdb_140e16c70(uVar32 + 0x380,uVar32 + 0x1f60);
                uVar14 = *(undefined1 *)(*(longlong *)(uVar32 + 0x168) + 0xaa);
                uVar2 = *(undefined1 *)(*(longlong *)(uVar32 + 0x168) + 0xab);
                *(undefined1 *)(uVar32 + 0x111) = 1;
                uVar40 = *(undefined8 *)(uVar32 + 0x2c0);
                *(undefined8 *)(uVar32 - 8) = 0x140660623;
                uVar13 = pdb_140a92200(uVar40);
                *(undefined1 *)(uVar32 + 0x3dc) = uVar14;
                *(undefined1 *)(uVar32 + 0x3dd) = uVar2;
                *(undefined1 *)(uVar32 + 0x3de) = uVar13;
                *(undefined1 *)(uVar32 + 0x111) = 1;
                *(ulonglong *)(uVar32 + 0x20) = uVar32 + 0x3dc;
                *(undefined8 *)(uVar32 - 8) = 0x14066066c;
                pdb_140352bb0(uVar32 + 0x310,uVar32 + 0x1f60,uVar32 + 0x1a0,uVar32 + 0x380);
                *(undefined8 *)(uVar32 - 8) = 0x140660686;
                pub_142e32760(uVar32 + 0x13c0,uVar32 + 0x1f60,0xba0);
                lVar18 = *(longlong *)(uVar32 + 0x310);
                uVar40 = *(undefined8 *)(uVar32 + 0x318);
                uVar20 = *(undefined8 *)(uVar32 + 800);
                if (lVar18 == 0x18) {
                  *(undefined8 *)(uVar32 - 8) = 0x1406606be;
                  pub_142e32760(uVar32 + 0x610,uVar32 + 0x1f60,0xba0);
                  *(undefined8 *)(uVar32 + 0x170) = uVar40;
                  *(undefined8 *)(uVar32 + 0x3f0) = uVar40;
                  *(undefined8 *)(uVar32 + 0x238) = uVar20;
                  *(undefined8 *)(uVar32 + 0x3f8) = uVar20;
                  *(undefined8 *)(uVar32 + 0x600) = 1;
                  *(undefined8 *)(uVar32 + 0x608) = 1;
                  *(undefined8 *)(uVar32 - 8) = 0x1406606f5;
                  pdb_14007ee60();
                  *(undefined8 *)(uVar32 - 8) = 0x140660704;
                  pbVar19 = pub_1406abab0(0xbb0,8);
                  if (pbVar19 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                    *(undefined8 *)(uVar32 - 8) = 0x140662a0c;
                    pdb_142dc7e11(8,0xbb0);
                  }
                  *(byte **)(uVar32 + 0x138) = pbVar19;
                  *(undefined8 *)(uVar32 - 8) = 0x140660729;
                  pub_142e32760(pbVar19,uVar32 + 0x600,0xbb0);
                }
                else {
                  *(undefined8 *)(uVar32 + 0x238) = *(undefined8 *)(uVar32 + 0x328);
                  *(undefined8 *)(uVar32 + 0x3f0) = *(undefined8 *)(uVar32 + 0x330);
                  *(undefined8 *)(uVar32 + 0x3f8) = *(undefined8 *)(uVar32 + 0x338);
                  *(undefined8 *)(uVar32 + 0x400) = *(undefined8 *)(uVar32 + 0x340);
                  *(undefined8 *)(uVar32 + 0x408) = *(undefined8 *)(uVar32 + 0x348);
                  *(undefined8 *)(uVar32 + 0x410) = *(undefined8 *)(uVar32 + 0x350);
                  *(undefined8 *)(uVar32 + 0x418) = *(undefined8 *)(uVar32 + 0x358);
                  *(undefined1 *)(uVar32 + 0x111) = 0;
                  *(undefined8 *)(uVar32 - 8) = 0x140660779;
                  pdb_1404c1000(uVar32 + 0x13c0);
                  *(undefined8 *)(uVar32 + 0x138) = uVar40;
                  *(undefined8 *)(uVar32 + 0x170) = uVar20;
                }
                lVar25 = *(longlong *)(uVar32 + 0x380);
                if (lVar25 != 0) {
                  pbVar19 = *(byte **)(uVar32 + 0x388);
                  *(undefined8 *)(uVar32 - 8) = 0x1406607b1;
                  pub_1406abac0(pbVar19,lVar25 << 3,4);
                }
              }
              else {
                lVar18 = 0x15;
                *(undefined8 *)(uVar32 - 8) = 0x1406605d2;
                pdb_1404c1000(uVar32 + 0x1f60);
              }
              uVar40 = *(undefined8 *)(uVar32 + 0x170);
              uVar20 = *(undefined8 *)(uVar32 + 0x238);
              *(undefined8 *)(uVar32 + 0x170) = uVar40;
              *(undefined8 *)(uVar32 + 0x238) = uVar20;
              if (lVar18 == 0x18) goto LAB_14066044a;
LAB_1406607e1:
              *(undefined8 *)(uVar32 + 0x600) = 1;
              *(undefined8 *)(uVar32 + 0x608) = 1;
              *(longlong *)(uVar32 + 0x610) = lVar18;
              *(undefined8 *)(uVar32 + 0x618) = *(undefined8 *)(uVar32 + 0x138);
              *(undefined8 *)(uVar32 + 0x620) = uVar40;
              *(undefined8 *)(uVar32 + 0x628) = uVar20;
              *(undefined8 *)(uVar32 + 0x650) = *(undefined8 *)(uVar32 + 0x410);
              *(undefined8 *)(uVar32 + 0x658) = *(undefined8 *)(uVar32 + 0x418);
              *(undefined8 *)(uVar32 + 0x640) = *(undefined8 *)(uVar32 + 0x400);
              *(undefined8 *)(uVar32 + 0x648) = *(undefined8 *)(uVar32 + 0x408);
              *(undefined8 *)(uVar32 + 0x630) = *(undefined8 *)(uVar32 + 0x3f0);
              *(undefined8 *)(uVar32 + 0x638) = *(undefined8 *)(uVar32 + 0x3f8);
              *(undefined8 *)(uVar32 - 8) = 0x14066084d;
              pdb_14007ee60();
              *(undefined8 *)(uVar32 - 8) = 0x14066085c;
              pbVar19 = pub_1406abab0(0x60,8);
              if (pbVar19 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)(uVar32 - 8) = 0x140662868;
                pdb_142dc7e11(8,0x60);
              }
              uVar40 = *(undefined8 *)(uVar32 + 0x658);
              *(undefined8 *)(pbVar19 + 0x50) = *(undefined8 *)(uVar32 + 0x650);
              *(undefined8 *)(pbVar19 + 0x58) = uVar40;
              uVar40 = *(undefined8 *)(uVar32 + 0x648);
              *(undefined8 *)(pbVar19 + 0x40) = *(undefined8 *)(uVar32 + 0x640);
              *(undefined8 *)(pbVar19 + 0x48) = uVar40;
              uVar40 = *(undefined8 *)(uVar32 + 0x600);
              uVar20 = *(undefined8 *)(uVar32 + 0x608);
              uVar24 = *(undefined8 *)(uVar32 + 0x610);
              uVar5 = *(undefined8 *)(uVar32 + 0x618);
              uVar7 = *(undefined8 *)(uVar32 + 0x620);
              uVar8 = *(undefined8 *)(uVar32 + 0x628);
              uVar9 = *(undefined8 *)(uVar32 + 0x638);
              *(undefined8 *)(pbVar19 + 0x30) = *(undefined8 *)(uVar32 + 0x630);
              *(undefined8 *)(pbVar19 + 0x38) = uVar9;
              *(undefined8 *)(pbVar19 + 0x20) = uVar7;
              *(undefined8 *)(pbVar19 + 0x28) = uVar8;
              *(undefined8 *)(pbVar19 + 0x10) = uVar24;
              *(undefined8 *)(pbVar19 + 0x18) = uVar5;
              *(undefined8 *)pbVar19 = uVar40;
              *(undefined8 *)(pbVar19 + 8) = uVar20;
              *(byte **)(uVar32 + 0x2b0) = pbVar19;
              *(undefined8 *)(uVar32 + 0x2a8) = 0;
            }
            *(undefined1 *)(uVar32 + 0x130) = 1;
            *(undefined8 *)(uVar32 - 8) = 0x1406608d3;
            cVar12 = pdb_14064bec0(uVar32 + 0x1a0);
            if (cVar12 != '\x02') {
              *(byte *)(*(longlong *)(uVar32 + 0x168) + 0x7e) =
                   *(byte *)(*(longlong *)(uVar32 + 0x168) + 0x7e) & cVar12 != '\0';
            }
            if (3 < *_DAT_143ca8e90) {
              *(undefined8 *)(uVar32 + 0x600) = 0;
              *(undefined **)(uVar32 + 0x608) = &UNK_142f8d9fd;
              *(undefined8 *)(uVar32 + 0x610) = 0x14;
              *(undefined8 *)(uVar32 + 0x618) = 0;
              *(undefined **)(uVar32 + 0x620) = &UNK_142f8d911;
              *(undefined8 *)(uVar32 + 0x628) = 0x21;
              *(undefined8 *)(uVar32 + 0x630) = 4;
              *(undefined **)(uVar32 + 0x638) = &UNK_142f8d9fd;
              *(undefined8 *)(uVar32 + 0x640) = 0x14;
              *(undefined8 *)(uVar32 + 0x648) = 0x31200000001;
              *(undefined **)(uVar32 + 0x650) = &UNK_142f8dfaa;
              *(undefined8 *)(uVar32 + 0x658) = 0x35;
              *(undefined1 *)(uVar32 + 0x130) = 1;
              *(undefined8 *)(uVar32 - 8) = 0x1406609a4;
              pdb_140f332f0(uVar32 + 0xa7,uVar32 + 0x600);
            }
            lVar18 = *(longlong *)(uVar32 + 0x2a8);
            if (lVar18 == 0) goto code_r0x0001406609b5;
            uVar37 = *(ulonglong *)(uVar32 + 0x2b0);
            lVar38 = *(longlong *)(uVar32 + 0x2b8);
            *(undefined1 *)((longlong)puVar39 + 0x9c) = 2;
            uVar40 = puVar39[0x10];
            *(undefined8 *)(uVar32 + 0x600) = puVar39[0xf];
            *(undefined8 *)(uVar32 + 0x608) = uVar40;
            lVar25 = *(longlong *)(uVar32 + 0x168);
            *(undefined1 *)(lVar25 + 0xae) = 1;
            uVar40 = *(undefined8 *)(uVar32 + 0x608);
            *(undefined8 *)(lVar25 + 0xaf) = *(undefined8 *)(uVar32 + 0x600);
            *(undefined8 *)(lVar25 + 0xb7) = uVar40;
            lVar25 = *(longlong *)(uVar32 + 0x298);
            if (lVar25 != 0) {
              pbVar19 = *(byte **)(uVar32 + 0x2c8);
              *(undefined8 *)(uVar32 - 8) = 0x140660f9a;
              pub_1406abac0(pbVar19,lVar25 << 3,8);
            }
            plVar21 = *(longlong **)(uVar32 + 0x2e0);
            LOCK();
            *plVar21 = *plVar21 + -1;
            UNLOCK();
            if (*plVar21 == 0) {
              *(undefined1 *)(uVar32 + 0xb1) = 0;
              *(undefined1 *)(uVar32 + 0xb2) = 0;
              *(undefined1 *)(uVar32 + 0xb3) = 1;
              *(undefined1 *)(uVar32 + 0xb4) = 1;
              *(undefined8 *)(uVar32 - 8) = 0x140660fcf;
              pdb_140e41090(uVar32 + 0x2e0);
            }
            *(undefined8 *)(uVar32 + 0x138) = *(undefined8 *)(uVar32 + 0x210);
            *(undefined8 *)(uVar32 + 0x118) = 0;
            *(longlong *)(uVar32 + 0x170) = *(longlong *)(uVar32 + 0x208);
            lVar25 = *(longlong *)(uVar32 + 0x208);
            while (*(longlong *)(uVar32 + 0x138) != *(longlong *)(uVar32 + 0x118)) {
              *(longlong *)(uVar32 + 0x118) = *(longlong *)(uVar32 + 0x118) + 1;
              *(undefined8 *)(uVar32 - 8) = 0x140661026;
              pdb_1404ccd80(lVar25);
              lVar25 = lVar25 + 0xa8;
            }
            lVar25 = *(longlong *)(uVar32 + 0x200);
            if (lVar25 != 0) {
              pbVar19 = *(byte **)(uVar32 + 0x170);
              *(undefined8 *)(uVar32 - 8) = 0x140661051;
              pub_1406abac0(pbVar19,lVar25 * 0xa8,8);
            }
            uVar40 = *(undefined8 *)(uVar32 + 0x198);
            uVar20 = *(undefined8 *)(uVar32 + 0x178);
            *(undefined1 *)(uVar32 + 0x147) = 0;
            *(undefined1 *)(uVar32 + 0x148) = 0;
            *(undefined8 *)(uVar32 - 8) = 0x14066154e;
            pdb_140667400(uVar40,uVar20);
            cVar12 = (char)*(undefined4 *)(uVar32 + 0x160);
            if ((cVar12 != '\0') && ((int)*(undefined8 *)(uVar32 + 0x5b0) != 0x18)) {
              *(undefined1 *)(uVar32 + 0x131) = 0;
              *(undefined1 *)(uVar32 + 0x132) = 1;
              *(undefined8 *)(uVar32 - 8) = 0x140661640;
              pdb_1406679b0(uVar32 + 0x5b0);
            }
            if ((cVar12 != '\0') && (*(longlong *)(uVar32 + 0x1d8) != 0)) {
              puVar39 = (undefined8 *)(*(longlong *)(uVar32 + 0x1e8) + 0x48);
              lVar25 = *(longlong *)(uVar32 + 0x1d8);
              do {
                uVar22 = puVar39[-7];
                if (uVar22 != 0) {
                  pbVar19 = (byte *)puVar39[-6];
                  *(undefined8 *)(uVar32 - 8) = 0x1406616c4;
                  pub_1406abac0(pbVar19,uVar22,1);
                }
                uVar22 = puVar39[-4];
                if ((!SBORROW8(0,uVar22)) && (uVar22 != 0)) {
                  pbVar19 = (byte *)puVar39[-3];
                  *(undefined8 *)(uVar32 - 8) = 0x1406616e1;
                  pub_1406abac0(pbVar19,uVar22,1);
                }
                uVar22 = puVar39[-1];
                if ((!SBORROW8(0,uVar22)) && (uVar22 != 0)) {
                  pbVar19 = (byte *)*puVar39;
                  *(undefined8 *)(uVar32 - 8) = 0x1406616fd;
                  pub_1406abac0(pbVar19,uVar22,1);
                }
                puVar39 = puVar39 + 0x14;
                lVar25 = lVar25 + -1;
              } while (lVar25 != 0);
              lVar25 = *(longlong *)(uVar32 + 0x1d8);
              pbVar19 = *(byte **)(uVar32 + 0x1e8);
              *(undefined8 *)(uVar32 - 8) = 0x140661720;
              pub_1406abac0(pbVar19,lVar25 * 0xa0,8);
              cVar12 = (char)*(undefined4 *)(uVar32 + 0x160);
            }
            lVar25 = *(longlong *)(uVar32 + 0x1b0);
            if (lVar25 != 0) {
              *(undefined8 *)(uVar32 + 0x118) = 1;
              puVar39 = *(undefined8 **)(uVar32 + 0x1c0);
              do {
                plVar21 = (longlong *)*puVar39;
                LOCK();
                *plVar21 = *plVar21 + -1;
                UNLOCK();
                if (*plVar21 == 0) {
                  *(undefined8 *)(uVar32 - 8) = 0x140661783;
                  pdb_140e411d0(puVar39);
                }
                lVar35 = *(longlong *)(uVar32 + 0x118);
                *(longlong *)(uVar32 + 0x118) = lVar35 + 1;
                puVar39 = puVar39 + 1;
              } while (lVar35 != lVar25);
              lVar25 = *(longlong *)(uVar32 + 0x1b0);
              pbVar19 = *(byte **)(uVar32 + 0x1c0);
              *(undefined8 *)(uVar32 - 8) = 0x1406617a3;
              pub_1406abac0(pbVar19,lVar25 << 3,8);
              cVar12 = (char)*(undefined4 *)(uVar32 + 0x160);
            }
            if (cVar12 != '\0') goto LAB_1406617ae;
            goto LAB_1406617ec;
          }
          lVar18 = *(longlong *)(uVar32 + 0x298);
          if (lVar18 != 0) {
            *(undefined8 *)(uVar32 - 8) = 0x140660cb0;
            pub_1406abac0((byte *)arg0,lVar18 << 3,8);
          }
          plVar21 = *(longlong **)(uVar32 + 0x2e0);
          LOCK();
          *plVar21 = *plVar21 + -1;
          UNLOCK();
          if (*plVar21 == 0) {
            *(undefined1 *)(uVar32 + 0xb1) = 0;
            *(undefined1 *)(uVar32 + 0xb2) = 1;
            *(undefined1 *)(uVar32 + 0xb3) = 1;
            *(undefined1 *)(uVar32 + 0xb4) = 1;
            *(undefined8 *)(uVar32 - 8) = 0x140660ce5;
            pdb_140e41090(uVar32 + 0x2e0);
          }
          lVar18 = *(longlong *)(uVar32 + 0x200);
          lVar25 = *(longlong *)(uVar32 + 0x210);
          *(undefined4 *)(uVar32 + 0x170) = 0;
          goto LAB_140660cfe;
        }
      }
      else {
        uVar40 = 0;
      }
      *(undefined8 *)(uVar32 - 8) = 0x14066004b;
      pdb_142dc7e2a(uVar40,uVar22);
      goto LAB_140662d59;
    }
    lVar18 = 0;
    *(int *)(uVar32 + 0x170) = (int)CONCAT71((int7)((ulonglong)pbVar19 >> 8),1);
    lVar25 = 0;
LAB_140660cfe:
    uVar33 = *(ulonglong *)(uVar32 + 0x178);
    lVar35 = *(longlong *)(uVar32 + 0x198);
    *(longlong *)(uVar32 + 0x600) = lVar35;
    *(ulonglong *)(uVar32 + 0x610) = uVar33;
    *(longlong *)(uVar32 + 0x608) = lVar35;
    *(ulonglong *)(uVar32 + 0x618) = lVar35 + uVar33 * 0xa8;
    if ((ulonglong)(lVar18 - lVar25) < uVar33) {
      *(undefined8 *)(uVar32 + 0x20) = 0xa8;
      *(undefined8 *)(uVar32 - 8) = 0x140662a58;
      pdb_142d7f1b0(uVar32 + 0x200,lVar25,uVar33,8);
      lVar25 = *(longlong *)(uVar32 + 0x210);
      lVar18 = *(longlong *)(uVar32 + 0x198);
      uVar33 = *(ulonglong *)(uVar32 + 0x178);
LAB_140660d44:
      lVar35 = *(longlong *)(uVar32 + 0x208);
      *(undefined8 *)(uVar32 - 8) = 0x140660d5d;
      pub_142e32760(lVar25 * 0xa8 + lVar35,lVar18);
      lVar35 = *(longlong *)(uVar32 + 0x608);
    }
    else {
      lVar18 = lVar35;
      if (uVar33 != 0) goto LAB_140660d44;
    }
    *(ulonglong *)(uVar32 + 0x210) = lVar25 + uVar33;
    *(longlong *)(uVar32 + 0x618) = lVar18;
    *(ulonglong *)(uVar32 + 0x138) = ((ulonglong)(lVar18 - lVar35) >> 3) * -0x30c30c30c30c30c3;
    *(undefined8 *)(uVar32 + 0x118) = 0;
    *(longlong *)(uVar32 + 0x238) = lVar35;
    while (*(longlong *)(uVar32 + 0x138) != *(longlong *)(uVar32 + 0x118)) {
      *(longlong *)(uVar32 + 0x118) = *(longlong *)(uVar32 + 0x118) + 1;
      *(undefined8 *)(uVar32 - 8) = 0x140660dd6;
      pdb_1404ccd80(lVar35);
      lVar35 = lVar35 + 0xa8;
    }
    lVar18 = *(longlong *)(uVar32 + 0x610);
    if (lVar18 != 0) {
      pbVar19 = *(byte **)(uVar32 + 0x600);
      *(undefined8 *)(uVar32 - 8) = 0x140660e01;
      pub_1406abac0(pbVar19,lVar18 * 0xa8,8);
    }
    *(char *)(uVar32 + 0xb1) = (char)*(undefined4 *)(uVar32 + 0x170);
    *(undefined1 *)(uVar32 + 0xb2) = 1;
    *(undefined1 *)(uVar32 + 0xb3) = 1;
    *(undefined1 *)(uVar32 + 0xb4) = 0;
    pcVar34 = (char *)(uVar32 + 0x1a0);
    *(undefined8 *)(uVar32 - 8) = 0x140660e31;
    pdb_14065cf60(pcVar34);
    if (lVar38 == 0) {
      uVar15 = 0;
      lVar18 = uVar32 + 0x1a8;
    }
    else {
      uVar40 = *(undefined8 *)(uVar32 + 0x1a0);
      uVar20 = *(undefined8 *)(uVar32 + 0x1a8);
      *(undefined1 *)(uVar32 + 0xe7) = 0;
      *(undefined1 *)(uVar32 + 0xe8) = 1;
      *(undefined8 *)(uVar32 - 8) = 0x140660e5f;
      uVar40 = pdb_14064c590(uVar32 + 0x420,uVar40,uVar20);
      *(undefined8 *)(uVar32 + 0x1f60) = 1;
      *(undefined8 *)(uVar32 + 0x1f68) = uVar40;
      uVar15 = (undefined4)CONCAT71((int7)((ulonglong)uVar20 >> 8),1);
      lVar18 = uVar32 + 0x1f68;
      pcVar34 = (char *)(uVar32 + 0x1f60);
    }
    *(undefined8 *)(uVar32 + 0x13c0) = 0;
    *(undefined8 *)(uVar32 + 0x13c8) = 8;
    *(undefined8 *)(uVar32 + 0x13d0) = 0;
    *(undefined8 *)(uVar32 + 0x600) = *(undefined8 *)(uVar32 + 0x200);
    *(undefined8 *)(uVar32 + 0x608) = *(undefined8 *)(uVar32 + 0x208);
    uVar37 = *(ulonglong *)(uVar32 + 0x210);
    *(ulonglong *)(uVar32 + 0x610) = uVar37;
    *(undefined4 *)(uVar32 + 0x118) = uVar15;
    if (uVar37 < *(ulonglong *)(uVar32 + 0x600)) {
      pbVar26 = *(byte **)(uVar32 + 0x608);
      uVar22 = *(ulonglong *)(uVar32 + 0x600) * 0xa8;
      if (uVar37 == 0) {
        pbVar19 = (byte *)0x8;
        *(undefined8 *)(uVar32 - 8) = 0x140661078;
        pub_1406abac0(pbVar26,uVar22,8);
      }
      else {
        uVar33 = uVar37 * 0xa8;
        *(undefined8 *)(uVar32 - 8) = 0x140660f0d;
        pbVar19 = pub_1406abad0(pbVar26,uVar22,8,uVar33);
        if (pbVar19 == (byte *)0x0) {
          *(undefined8 *)(uVar32 - 8) = 0x140660f26;
          pdb_142dc7e2a(8,uVar33);
          goto LAB_140662d59;
        }
      }
    }
    else {
      pbVar19 = *(byte **)(uVar32 + 0x608);
    }
    *(undefined8 *)(uVar32 + 0x600) = 0x1d;
    *(undefined1 *)(uVar32 + 0x149) = 0;
    *(ulonglong *)(uVar32 + 0x30) = uVar32 + 0x600;
    *(ulonglong *)(uVar32 + 0x28) = uVar37;
    *(byte **)(uVar32 + 0x20) = pbVar19;
    *(undefined8 *)(uVar32 - 8) = 0x1406610b6;
    pdb_1406ca660(uVar32 + 0x4a8,uVar32 + 0x13c0,0);
    if (*(longlong *)(uVar32 + 0x420) == 3) {
      if (*pcVar34 != '\0') {
LAB_140662a73:
        *(undefined1 *)(uVar32 + 0x14a) = 1;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(uVar32 - 8) = 0x140662a92;
        pdb_142dc83b0(&UNK_142f8d970,0x28,&UNK_142f8ddd0);
      }
      *(undefined8 *)(uVar32 - 8) = 0x1406610e8;
      pub_142e32760(uVar32 + 0x600,uVar32 + 0x4a8,0x90);
      *(undefined1 *)(uVar32 + 0x14a) = 0;
      *(undefined8 *)(uVar32 - 8) = 0x140661108;
      pdb_1401504e0(uVar32 + 0x13c0,uVar32 + 0x600,uVar32 + 0x420,lVar18);
    }
    else {
      if (*pcVar34 == '\0') goto LAB_140662a73;
      *(undefined8 *)(uVar32 - 8) = 0x14066112c;
      pub_142e32760(uVar32 + 0x600,uVar32 + 0x4a8,0x90);
      plVar21 = *(longlong **)(pcVar34 + 8);
      LOCK();
      lVar18 = *plVar21;
      *plVar21 = *plVar21 + 1;
      UNLOCK();
      if (*plVar21 == 0 || SCARRY8(lVar18,1) != *plVar21 < 0) goto LAB_140662d59;
      *(undefined1 *)(uVar32 + 0x14a) = 0;
      *(undefined8 *)(uVar32 - 8) = 0x14066115b;
      pdb_140153630(uVar32 + 0x13c0,uVar32 + 0x600,uVar32 + 0x420);
    }
    uVar15 = *(undefined4 *)(uVar32 + 0x118);
    if (*(int *)(uVar32 + 0x13c0) == 3) {
      *(char *)(uVar32 + 0xe7) = (char)uVar15;
      *(undefined1 *)(uVar32 + 0xe8) = 0;
      *(undefined8 *)(uVar32 - 8) = 0x140661185;
      pdb_140f36c40(uVar32 + 0x13c8);
    }
    if ((char)uVar15 != '\0') {
      if (*(char *)(uVar32 + 0x1f60) == '\0') {
        *(undefined8 *)(uVar32 - 8) = 0x1406611e1;
        pdb_1406d1b80(uVar32 + 0x1f68);
        *(undefined8 *)(uVar32 - 8) = 0x1406611ee;
        pdb_1406d1ba0(uVar32 + 0x1f70);
        *(char *)(uVar32 + 0xb1) = (char)*(undefined4 *)(uVar32 + 0x170);
        *(undefined1 *)(uVar32 + 0xb2) = 1;
        *(undefined1 *)(uVar32 + 0xb3) = 0;
        *(undefined1 *)(uVar32 + 0xb4) = 0;
        *(undefined8 *)(uVar32 - 8) = 0x14066121c;
        pdb_1406d1b60(uVar32 + 0x1f70);
      }
      else {
        plVar21 = *(longlong **)(uVar32 + 0x1f68);
        LOCK();
        *plVar21 = *plVar21 + -1;
        UNLOCK();
        if (*plVar21 == 0) {
          *(char *)(uVar32 + 0xb1) = (char)*(undefined4 *)(uVar32 + 0x170);
          *(undefined1 *)(uVar32 + 0xb2) = 1;
          *(undefined1 *)(uVar32 + 0xb3) = 0;
          *(undefined1 *)(uVar32 + 0xb4) = 0;
          *(undefined8 *)(uVar32 - 8) = 0x1406611d2;
          pdb_1406cd740(uVar32 + 0x1f68);
        }
      }
    }
    lVar18 = *(longlong *)(uVar32 + 0x180);
    if (lVar18 != 0) {
      puVar39 = (undefined8 *)(*(longlong *)(uVar32 + 0x120) + 0x48);
      do {
        uVar37 = puVar39[-7];
        if (uVar37 != 0) {
          pbVar19 = (byte *)puVar39[-6];
          *(undefined8 *)(uVar32 - 8) = 0x140661264;
          pub_1406abac0(pbVar19,uVar37,1);
        }
        uVar37 = puVar39[-4];
        if ((!SBORROW8(0,uVar37)) && (uVar37 != 0)) {
          pbVar19 = (byte *)puVar39[-3];
          *(undefined8 *)(uVar32 - 8) = 0x140661281;
          pub_1406abac0(pbVar19,uVar37,1);
        }
        uVar37 = puVar39[-1];
        if ((!SBORROW8(0,uVar37)) && (uVar37 != 0)) {
          pbVar19 = (byte *)*puVar39;
          *(undefined8 *)(uVar32 - 8) = 0x14066129d;
          pub_1406abac0(pbVar19,uVar37,1);
        }
        puVar39 = puVar39 + 0x14;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      pbVar19 = *(byte **)(uVar32 + 0x120);
      uVar37 = *(ulonglong *)(uVar32 + 0x1b8);
      *(undefined8 *)(uVar32 - 8) = 0x1406612b8;
      pub_1406abac0(pbVar19,uVar37,8);
    }
    cVar12 = (char)*(undefined4 *)(uVar32 + 0x160);
    if ((cVar12 != '\0') && ((int)*(undefined8 *)(uVar32 + 0x5b0) != 0x18)) {
      *(char *)(uVar32 + 0x131) = (char)*(undefined4 *)(uVar32 + 0x170);
      *(undefined1 *)(uVar32 + 0x132) = 1;
      *(undefined8 *)(uVar32 - 8) = 0x1406612ee;
      pdb_1406679b0(uVar32 + 0x5b0);
    }
    if ((*(char *)(uVar32 + 0x170) != '\0') && (*(char *)(uVar32 + 0x288) != '\x02')) {
      plVar21 = *(longlong **)(uVar32 + 0x280);
      LOCK();
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (*plVar21 == 0) {
        *(char *)(uVar32 + 0x133) = cVar12;
        *(undefined8 *)(uVar32 - 8) = 0x140661321;
        pdb_140e41090(uVar32 + 0x280);
      }
    }
    lVar18 = *(longlong *)(uVar32 + 0x1b0);
    if ((cVar12 != '\0') && (*(longlong *)(uVar32 + 0x1d8) != 0)) {
      puVar39 = (undefined8 *)(*(longlong *)(uVar32 + 0x1e8) + 0x48);
      lVar25 = *(longlong *)(uVar32 + 0x1d8);
      do {
        uVar37 = puVar39[-7];
        if (uVar37 != 0) {
          pbVar19 = (byte *)puVar39[-6];
          *(undefined8 *)(uVar32 - 8) = 0x140661384;
          pub_1406abac0(pbVar19,uVar37,1);
        }
        uVar37 = puVar39[-4];
        if ((!SBORROW8(0,uVar37)) && (uVar37 != 0)) {
          pbVar19 = (byte *)puVar39[-3];
          *(undefined8 *)(uVar32 - 8) = 0x1406613a1;
          pub_1406abac0(pbVar19,uVar37,1);
        }
        uVar37 = puVar39[-1];
        if ((!SBORROW8(0,uVar37)) && (uVar37 != 0)) {
          pbVar19 = (byte *)*puVar39;
          *(undefined8 *)(uVar32 - 8) = 0x1406613bd;
          pub_1406abac0(pbVar19,uVar37,1);
        }
        puVar39 = puVar39 + 0x14;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = *(longlong *)(uVar32 + 0x1d8);
      pbVar19 = *(byte **)(uVar32 + 0x1e8);
      *(undefined8 *)(uVar32 - 8) = 0x1406613e0;
      pub_1406abac0(pbVar19,lVar25 * 0xa0,8);
      cVar12 = (char)*(undefined4 *)(uVar32 + 0x160);
    }
    if (lVar18 != 0) {
      lVar25 = 1;
      puVar39 = *(undefined8 **)(uVar32 + 0x1c0);
      do {
        *(longlong *)(uVar32 + 0x118) = lVar25;
        plVar21 = (longlong *)*puVar39;
        LOCK();
        *plVar21 = *plVar21 + -1;
        UNLOCK();
        if (*plVar21 == 0) {
          *(undefined8 *)(uVar32 - 8) = 0x140661433;
          pdb_140e411d0(puVar39);
        }
        lVar25 = *(longlong *)(uVar32 + 0x118) + 1;
        puVar39 = puVar39 + 1;
      } while (*(longlong *)(uVar32 + 0x118) != lVar18);
      lVar18 = *(longlong *)(uVar32 + 0x1b0);
      pbVar19 = *(byte **)(uVar32 + 0x1c0);
      *(undefined8 *)(uVar32 - 8) = 0x140661453;
      pub_1406abac0(pbVar19,lVar18 << 3,8);
      cVar12 = (char)*(undefined4 *)(uVar32 + 0x160);
    }
    uVar37 = 1;
    if (cVar12 == '\0') {
LAB_140661ecd:
      if (((uVar37 & 1) != 0) && (3 < *_DAT_143ca8e90)) {
        *(undefined8 *)(uVar32 + 0x600) = 0;
        *(undefined **)(uVar32 + 0x608) = &UNK_142f8d9fd;
        *(undefined8 *)(uVar32 + 0x610) = 0x14;
        *(undefined8 *)(uVar32 + 0x618) = 0;
        *(undefined **)(uVar32 + 0x620) = &UNK_142f8d911;
        *(undefined8 *)(uVar32 + 0x628) = 0x21;
        *(undefined8 *)(uVar32 + 0x630) = 4;
        *(undefined **)(uVar32 + 0x638) = &UNK_142f8d9fd;
        *(undefined8 *)(uVar32 + 0x640) = 0x14;
        *(undefined8 *)(uVar32 + 0x648) = 0x1d100000001;
        *(undefined **)(uVar32 + 0x650) = &UNK_142f8e2a0;
        *(undefined8 *)(uVar32 + 0x658) = 0x61;
        *(undefined1 *)(uVar32 + 0xab) = 1;
        *(undefined1 *)(uVar32 + 0xac) = 1;
        *(undefined1 *)(uVar32 + 0xad) = 1;
        *(undefined1 *)(uVar32 + 0xae) = 1;
        *(undefined1 *)(uVar32 + 0xaf) = 0;
        *(undefined1 *)(uVar32 + 0xb0) = 1;
        *(undefined8 *)(uVar32 - 8) = 0x140661fb7;
        pdb_140f332f0(uVar32 + 0xa7,uVar32 + 0x600);
      }
      plVar21 = *(longlong **)(uVar32 + 0x240);
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        *plVar21 = *plVar21 + -1;
        UNLOCK();
        if (*plVar21 == 0) {
          *(undefined1 *)(uVar32 + 0x14b) = 1;
          *(undefined1 *)(uVar32 + 0x14c) = 1;
          *(undefined1 *)(uVar32 + 0x14d) = 1;
          *(undefined1 *)(uVar32 + 0x14e) = 0;
          *(undefined1 *)(uVar32 + 0x14f) = 1;
          *(undefined1 *)(uVar32 + 0x150) = 1;
          *(undefined8 *)(uVar32 - 8) = 0x140662000;
          pdb_140cb1c10(uVar32 + 0x240);
        }
      }
      plVar21 = *(longlong **)(uVar32 + 0x1f8);
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        *plVar21 = *plVar21 + -1;
        UNLOCK();
        if (*plVar21 == 0) {
          *(undefined1 *)(uVar32 + 0xda) = 0;
          *(undefined1 *)(uVar32 + 0xdb) = 1;
          *(undefined1 *)(uVar32 + 0xdc) = 1;
          *(undefined1 *)(uVar32 + 0xdd) = 1;
          *(undefined1 *)(uVar32 + 0xde) = 0;
          *(undefined1 *)(uVar32 + 0xdf) = 1;
          *(undefined1 *)(uVar32 + 0xe0) = 1;
          *(undefined8 *)(uVar32 - 8) = 0x140662050;
          pdb_140cb1c10(uVar32 + 0x1f8);
        }
      }
      *(undefined1 *)(uVar32 + 0xb9) = 0;
      *(undefined1 *)(uVar32 + 0xba) = 1;
      *(undefined1 *)(uVar32 + 0xbb) = 1;
      *(undefined1 *)(uVar32 + 0xbc) = 1;
      *(undefined1 *)(uVar32 + 0xbd) = 0;
      *(undefined1 *)(uVar32 + 0xbe) = 1;
      *(undefined1 *)(uVar32 + 0xbf) = 1;
      *(undefined8 *)(uVar32 - 8) = 0x14066208e;
      pdb_140667cf0(uVar32 + 0x11b8);
      *(undefined1 *)(uVar32 + 0x102) = 0;
      *(undefined1 *)(uVar32 + 0x103) = 1;
      *(undefined1 *)(uVar32 + 0x104) = 1;
      *(undefined1 *)(uVar32 + 0x105) = 1;
      *(undefined1 *)(uVar32 + 0x106) = 0;
      *(undefined1 *)(uVar32 + 0x107) = 1;
      *(undefined1 *)(uVar32 + 0x108) = 1;
      *(undefined8 *)(uVar32 - 8) = 0x1406620cc;
      pdb_1404b2cc0(uVar32 + 0x2b00);
      plVar21 = *(longlong **)(uVar32 + 0x1e0);
      LOCK();
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (*plVar21 == 0) {
        *(undefined1 *)(uVar32 + 0xfb) = 0;
        *(undefined1 *)(uVar32 + 0xfc) = 1;
        *(undefined1 *)(uVar32 + 0xfd) = 1;
        *(undefined1 *)(uVar32 + 0xfe) = 1;
        *(undefined1 *)(uVar32 + 0xff) = 0;
        *(undefined1 *)(uVar32 + 0x100) = 1;
        *(undefined1 *)(uVar32 + 0x101) = 1;
        *(undefined8 *)(uVar32 - 8) = 0x140662117;
        pdb_140d71bf0(uVar32 + 0x1e0);
      }
      *(undefined1 *)(uVar32 + 0x151) = 0;
      *(undefined1 *)(uVar32 + 0x152) = 1;
      *(undefined1 *)(uVar32 + 0x153) = 1;
      *(undefined1 *)(uVar32 + 0x154) = 1;
      *(undefined1 *)(uVar32 + 0x155) = 0;
      *(undefined1 *)(uVar32 + 0x156) = 1;
      *(undefined1 *)(uVar32 + 0x157) = 1;
      *(undefined8 *)(uVar32 - 8) = 0x140662155;
      pdb_1404dbd30(uVar32 + 0x3b8);
      *(undefined1 *)(uVar32 + 0xf4) = 0;
      *(undefined1 *)(uVar32 + 0xf5) = 1;
      *(undefined1 *)(uVar32 + 0xf6) = 1;
      *(undefined1 *)(uVar32 + 0xf7) = 1;
      *(undefined1 *)(uVar32 + 0xf8) = 0;
      *(undefined1 *)(uVar32 + 0xf9) = 1;
      *(undefined1 *)(uVar32 + 0xfa) = 1;
      *(undefined8 *)(uVar32 - 8) = 0x140662193;
      pdb_1404daeb0(uVar32 + 0x498);
      *(undefined1 *)(uVar32 + 0x158) = 0;
      *(undefined1 *)(uVar32 + 0x159) = 1;
      *(undefined1 *)(uVar32 + 0x15a) = 1;
      *(undefined1 *)(uVar32 + 0x15b) = 1;
      *(undefined1 *)(uVar32 + 0x15c) = 0;
      *(undefined1 *)(uVar32 + 0x15d) = 1;
      *(undefined1 *)(uVar32 + 0x15e) = 1;
      *(undefined8 *)(uVar32 - 8) = 0x1406621d1;
      pdb_1404de470(uVar32 + 0x488);
      *(undefined1 *)(uVar32 + 0xee) = 0;
      *(undefined1 *)(uVar32 + 0xef) = 1;
      *(undefined1 *)(uVar32 + 0xf0) = 1;
      *(undefined1 *)(uVar32 + 0xf1) = 1;
      *(undefined1 *)(uVar32 + 0xf2) = 0;
      *(undefined1 *)(uVar32 + 0xf3) = 1;
      *(undefined8 *)(uVar32 - 8) = 0x140662208;
      pdb_1404dd540(uVar32 + 0x3a8);
      if (*(char *)(uVar32 + 0x1a0) == '\0') {
        *(undefined8 *)(uVar32 - 8) = 0x140662402;
        pdb_1406d1b80(uVar32 + 0x1a8);
        *(undefined8 *)(uVar32 - 8) = 0x14066240f;
        pdb_1406d1ba0(uVar32 + 0x1b0);
        *(undefined1 *)(uVar32 + 0xcd) = 0;
        *(undefined1 *)(uVar32 + 0xce) = 1;
        *(undefined1 *)(uVar32 + 0xcf) = 1;
        *(undefined1 *)(uVar32 + 0xd0) = 1;
        *(undefined8 *)(uVar32 - 8) = 0x140662438;
        pdb_1406d1b60(uVar32 + 0x1b0);
      }
      else {
        plVar21 = *(longlong **)(uVar32 + 0x1a8);
        LOCK();
        *plVar21 = *plVar21 + -1;
        UNLOCK();
        if (*plVar21 == 0) {
          *(undefined1 *)(uVar32 + 0xcd) = 0;
          *(undefined1 *)(uVar32 + 0xce) = 1;
          *(undefined1 *)(uVar32 + 0xcf) = 1;
          *(undefined1 *)(uVar32 + 0xd0) = 1;
          *(undefined8 *)(uVar32 - 8) = 0x14066224f;
          pdb_1406cd740(uVar32 + 0x1a8);
        }
      }
      if (*(longlong *)(uVar32 + 0x420) == 3) {
        *(undefined1 *)(uVar32 + 0xa8) = 0;
        *(undefined1 *)(uVar32 + 0xa9) = 1;
        *(undefined1 *)(uVar32 + 0xaa) = 1;
        *(undefined8 *)(uVar32 - 8) = 0x140662464;
        pdb_1404c5e20(uVar32 + 0x420);
      }
      else {
        *(undefined8 *)(uVar32 - 8) = 0x140662473;
        pdb_1404cbae0(uVar32 + 0x420);
        lVar18 = *(longlong *)(uVar32 + 0x458);
        if (lVar18 != 0) {
          pbVar19 = *(byte **)(uVar32 + 0x460);
          *(undefined8 *)(uVar32 - 8) = 0x140662496;
          pub_1406abac0(pbVar19,lVar18 << 5,8);
        }
      }
      if (*(char *)(uVar32 + 0xd9) != '\0') {
        *(undefined1 *)(uVar32 + 0xeb) = 0;
        *(undefined1 *)(uVar32 + 0xec) = 1;
        *(undefined1 *)(uVar32 + 0xed) = 1;
        *(undefined8 *)(uVar32 - 8) = 0x1406624c0;
        pdb_140e97740(uVar32 + 0xda);
      }
      *(undefined1 *)(uVar32 + 0xd2) = 0;
      *(undefined1 *)(uVar32 + 0xd3) = 1;
      *(undefined1 *)(uVar32 + 0xd4) = 1;
      *(undefined8 *)(uVar32 - 8) = 0x1406624e2;
      pdb_14049cf70(uVar32 + 0x478);
      plVar21 = *(longlong **)(uVar32 + 0x270);
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        *plVar21 = *plVar21 + -1;
        UNLOCK();
        if (*plVar21 == 0) {
          *(undefined8 *)(uVar32 - 8) = 0x140662501;
          pdb_140315650(uVar32 + 0x270);
        }
        plVar21 = *(longlong **)(uVar32 + 0x278);
        LOCK();
        *plVar21 = *plVar21 + -1;
        UNLOCK();
        if (*plVar21 == 0) {
          *(undefined1 *)(uVar32 + 0xe9) = 0;
          *(undefined1 *)(uVar32 + 0xea) = 1;
          *(undefined8 *)(uVar32 - 8) = 0x140662529;
          pdb_140315590(uVar32 + 0x278);
        }
      }
      *(undefined1 *)(uVar32 + 0x15f) = 1;
      uVar40 = *(undefined8 *)(uVar32 + 0x1f0);
      *(undefined8 *)(uVar32 - 8) = 0x14066253d;
      pdb_1404bbe30(uVar40);
      uVar40 = *(undefined8 *)(uVar32 + 0x168);
      *(undefined8 *)(uVar32 - 8) = 0x14066254a;
      pdb_1404cfed0(uVar40);
      uVar33 = *(ulonglong *)(*(longlong *)(uVar32 + 0x168) + 200);
      if ((!SBORROW8(0,uVar33)) && (uVar33 != 0)) {
        pbVar19 = *(byte **)(*(longlong *)(uVar32 + 0x168) + 0xd0);
        *(undefined8 *)(uVar32 - 8) = 0x14066257d;
        pub_1406abac0(pbVar19,uVar33,1);
      }
      return;
    }
    lVar18 = 0;
LAB_1406617ae:
    *(undefined1 *)(uVar32 + 0xab) = 1;
    *(undefined1 *)(uVar32 + 0xac) = 1;
    *(undefined1 *)(uVar32 + 0xad) = 1;
    *(undefined1 *)(uVar32 + 0xae) = 1;
    *(undefined1 *)(uVar32 + 0xaf) = 0;
    *(undefined1 *)(uVar32 + 0xb0) = 1;
    uVar40 = *(undefined8 *)(uVar32 + 0x228);
    uVar20 = *(undefined8 *)(uVar32 + 0x230);
    *(undefined8 *)(uVar32 - 8) = 0x1406617eb;
    pdb_140667400(uVar40,uVar20);
LAB_1406617ec:
    if (lVar18 == 0) goto LAB_140661ecd;
    *(longlong *)(uVar32 + 0x3160) = lVar18;
    *(ulonglong *)(uVar32 + 0x3168) = uVar37;
    *(longlong *)(uVar32 + 0x3170) = lVar38;
    *(undefined8 *)(uVar32 + 0x3178) = *(undefined8 *)(uVar32 + 0x120);
    uVar37 = *(ulonglong *)(uVar32 + 0x180);
    *(ulonglong *)(uVar32 + 0x3180) = uVar37;
    *(ulonglong *)(uVar32 + 0x3188) = uVar33;
    lVar18 = *(longlong *)(uVar32 + 0x270);
    *(bool *)(uVar32 + 0x118) = lVar18 == 0;
    uVar15 = *(undefined4 *)(uVar32 + 0x26c);
    if (lVar18 != 0) {
      *(longlong *)(uVar32 + 0x4a8) = lVar18;
      *(undefined8 *)(uVar32 + 0x4b0) = *(undefined8 *)(uVar32 + 0x278);
      if (uVar37 <= uVar33) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(uVar32 - 8) = 0x140662d13;
        pdb_142dc81f2(uVar33,uVar37,&UNK_142f8eb00);
      }
      lVar18 = *(longlong *)(uVar32 + 0x120);
      *(undefined8 *)(uVar32 - 8) = 0x14066188b;
      pdb_140f60be0(uVar32 + 0x1f60,lVar18 + uVar33 * 0xa0 + 0x10);
      lVar18 = *(longlong *)(uVar32 + 0x120) + uVar33 * 0xa0;
      *(longlong *)(uVar32 + 0x120) = lVar18;
      puVar1 = (uint *)(lVar18 + 0x58);
      *(undefined8 *)(uVar32 + 0x13c0) = 0;
      *(undefined8 *)(uVar32 + 0x13c8) = 1;
      *(undefined8 *)(uVar32 + 0x13d0) = 0;
      *(undefined8 *)(uVar32 + 0x610) = 0x60000020;
      *(ulonglong *)(uVar32 + 0x600) = uVar32 + 0x13c0;
      *(undefined **)(uVar32 + 0x608) = &UNK_142f8e3b0;
      *(undefined8 *)(uVar32 - 8) = 0x1406618f8;
      cVar12 = pdb_140e93d50(puVar1,uVar32 + 0x600);
      if (cVar12 != '\0') {
        *(undefined **)(uVar32 + 0x20) = &UNK_142f8e488;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(uVar32 - 8) = 0x140662afd;
        pdb_142dc8170(&UNK_142f8e3e0,0x37,uVar32 + 0xa7,&UNK_142f8e4e0);
      }
      *(undefined8 *)(uVar32 + 0x138) = *(undefined8 *)(uVar32 + 0x13c0);
      uVar40 = *(undefined8 *)(uVar32 + 0x13c8);
      uVar20 = *(undefined8 *)(uVar32 + 0x13d0);
      uVar37 = (ulonglong)*puVar1;
      uVar33 = *(ulonglong *)(&UNK_142f8eb30 + uVar37 * 8);
      iVar4 = *(int *)(&UNK_142f8eb68 + uVar37 * 4);
      *(undefined8 *)(uVar32 - 8) = 0x14066193a;
      pdb_14007ee60();
      *(undefined8 *)(uVar32 - 8) = 0x140661947;
      pbVar19 = pub_1406abab0(uVar33,1);
      if (pbVar19 == (byte *)0x0) {
        *(undefined8 *)(uVar32 + 0x120) = uVar40;
        *(undefined8 *)(uVar32 - 8) = 0x140662d2a;
        pdb_142dc7e2a(1,uVar33);
        goto LAB_140662d59;
      }
      *(undefined8 *)(uVar32 - 8) = 0x140661964;
      pub_142e32760(pbVar19,&UNK_142f8eb68 + iVar4,uVar33);
      uVar37 = *(ulonglong *)(*(longlong *)(uVar32 + 0x120) + 0x88);
      *(undefined8 *)(uVar32 + 0x600) = *(undefined8 *)(uVar32 + 0x1f60);
      *(undefined8 *)(uVar32 + 0x608) = *(undefined8 *)(uVar32 + 0x1f68);
      *(undefined8 *)(uVar32 + 0x610) = *(undefined8 *)(uVar32 + 0x1f70);
      *(undefined8 *)(uVar32 + 0x618) = 0x8000000000000000;
      *(undefined8 *)(uVar32 + 0x630) = *(undefined8 *)(uVar32 + 0x138);
      *(undefined8 *)(uVar32 + 0x638) = uVar40;
      *(undefined8 *)(uVar32 + 0x640) = uVar20;
      *(undefined8 *)(uVar32 + 0x648) = 0x8000000000000000;
      *(undefined8 *)(uVar32 + 0x660) = 0x8000000000000000;
      *(ulonglong *)(uVar32 + 0x678) = uVar33;
      *(byte **)(uVar32 + 0x680) = pbVar19;
      *(ulonglong *)(uVar32 + 0x688) = uVar33;
      *(undefined4 *)(uVar32 + 0x6c0) = 1;
      *(int *)(uVar32 + 0x6c4) = (int)(uVar37 >> 0x14);
      *(undefined8 *)(uVar32 + 0x690) = 0x8000000000000000;
      *(undefined2 *)(uVar32 + 0x6e8) = 0x202;
      *(undefined4 *)(uVar32 + 0x6c8) = 0;
      *(undefined8 *)(uVar32 + 0x6a8) = 0x8000000000000000;
      *(undefined4 *)(uVar32 + 0x6ea) = 0x2020202;
      *(undefined8 *)(uVar32 + 0x6d0) = 0;
      *(undefined8 *)(uVar32 + 0x6e0) = 0;
      *(undefined8 *)(uVar32 - 8) = 0x140661a3a;
      pdb_14007ee60();
      *(undefined8 *)(uVar32 - 8) = 0x140661a49;
      pbVar19 = pub_1406abab0(0xf0,8);
      if (pbVar19 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(uVar32 - 8) = 0x140662b12;
        pdb_142dc7e11(8,0xf0);
      }
      *(undefined8 *)(uVar32 - 8) = 0x140661a6a;
      pub_142e32760(pbVar19,uVar32 + 0x600,0xf0);
      *(byte **)(uVar32 + 0x13c8) = pbVar19;
      *(undefined8 *)(uVar32 + 0x13c0) = 6;
      *(undefined8 *)(uVar32 - 8) = 0x140661a81;
      pdb_14007ee60();
      *(undefined8 *)(uVar32 - 8) = 0x140661a90;
      pbVar19 = pub_1406abab0(3,1);
      uVar15 = *(undefined4 *)(uVar32 + 0x26c);
      if (pbVar19 == (byte *)0x0) {
        *(undefined8 *)(uVar32 - 8) = 0x140662d3c;
        pdb_142dc7e2a(1,3);
        goto LAB_140662d59;
      }
      pbVar19[2] = 0x75;
      pbVar19[0] = 0x67;
      pbVar19[1] = 0x70;
      *(undefined8 *)(uVar32 + 0x618) = *(undefined8 *)(uVar32 + 0x13d0);
      *(undefined8 *)(uVar32 + 0x620) = *(undefined8 *)(uVar32 + 0x13d8);
      *(undefined8 *)(uVar32 + 0x608) = *(undefined8 *)(uVar32 + 0x13c0);
      *(undefined8 *)(uVar32 + 0x610) = *(undefined8 *)(uVar32 + 0x13c8);
      *(undefined8 *)(uVar32 + 0x628) = 3;
      *(byte **)(uVar32 + 0x630) = pbVar19;
      *(undefined8 *)(uVar32 + 0x638) = 3;
      *(undefined8 *)(uVar32 + 0x600) = 0x8000000000000003;
      *(undefined8 *)(uVar32 - 8) = 0x140661b10;
      pdb_140492b60(uVar32 + 0x13c0,uVar32 + 0x4a8,uVar32 + 0x600);
      *(undefined8 *)(uVar32 - 8) = 0x140661b1d;
      pdb_140667d70(uVar32 + 0x13c0);
      uVar40 = *(undefined8 *)(uVar32 + 0x120);
      *(undefined8 *)(uVar32 - 8) = 0x140661b2a;
      uVar14 = pdb_140e14720(uVar40);
      uVar40 = *(undefined8 *)(uVar32 + 0x120);
      *(undefined8 *)(uVar32 - 8) = 0x140661b41;
      pdb_140e147c0(uVar32 + 0x13c0,uVar40);
      cVar12 = '\x01';
      if (*(int *)(uVar32 + 0x13c0) != 5) {
        cVar12 = (*(int *)(uVar32 + 0x13c0) != 0) * '\x02';
      }
      *(undefined1 *)(uVar32 + 0x608) = uVar14;
      *(char *)(uVar32 + 0x609) = cVar12;
      *(undefined8 *)(uVar32 + 0x600) = 0x8000000000000001;
      *(undefined8 *)(uVar32 - 8) = 0x140661b95;
      pdb_140492b60(uVar32 + 0x1f60,uVar32 + 0x4a8,uVar32 + 0x600);
      *(undefined8 *)(uVar32 - 8) = 0x140661ba2;
      pdb_140667d70(uVar32 + 0x1f60);
      plVar21 = *(longlong **)(uVar32 + 0x4a8);
      LOCK();
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (*plVar21 == 0) {
        *(undefined8 *)(uVar32 - 8) = 0x140661bbc;
        pdb_140315650(uVar32 + 0x4a8);
      }
      plVar21 = *(longlong **)(uVar32 + 0x4b0);
      LOCK();
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (*plVar21 == 0) {
        *(undefined1 *)(uVar32 + 0xd5) = 1;
        *(undefined1 *)(uVar32 + 0xd6) = 1;
        *(undefined1 *)(uVar32 + 0xd7) = 1;
        *(undefined1 *)(uVar32 + 0xd8) = 1;
        *(undefined8 *)(uVar32 - 8) = 0x140661bf2;
        pdb_140315590(uVar32 + 0x4b0);
      }
    }
    *(undefined1 *)(uVar32 + 0xd5) = 1;
    *(undefined1 *)(uVar32 + 0xd6) = 1;
    *(undefined1 *)(uVar32 + 0xd7) = 1;
    *(undefined1 *)(uVar32 + 0xd8) = 1;
    *(undefined8 *)(uVar32 - 8) = 0x140661c1b;
    pdb_140dfa5b0(uVar32 + 0x600);
    *(undefined8 *)(uVar32 - 8) = 0x140661c38;
    pub_142e32760(uVar32 + 0x13c0,uVar32 + 0x2b00,0x620);
    *(undefined8 *)(uVar32 - 8) = 0x140661c4d;
    pub_142e32760(uVar32 + 0x2b00,uVar32 + 0x600,0x620);
    plVar21 = *(longlong **)(uVar32 + 0x1e0);
    LOCK();
    lVar18 = *plVar21;
    *plVar21 = *plVar21 + 1;
    UNLOCK();
    if (*plVar21 != 0 && SCARRY8(lVar18,1) == *plVar21 < 0) {
      *(longlong **)(uVar32 + 0x310) = plVar21;
      *(undefined8 *)(uVar32 + 0x610) = 0x8000000000000000;
      *(undefined8 *)(uVar32 + 0x600) = 0;
      *(undefined1 *)(uVar32 + 0x628) = 0;
      *(undefined8 *)(uVar32 - 8) = 0x140661c8d;
      pdb_14007ee60();
      *(undefined8 *)(uVar32 - 8) = 0x140661c9c;
      pbVar19 = pub_1406abab0(4,1);
      *(byte **)(uVar32 + 0x120) = pbVar19;
      if (pbVar19 != (byte *)0x0) {
        pbVar19[0] = 0x67;
        pbVar19[1] = 0x61;
        pbVar19[2] = 0x6d;
        pbVar19[3] = 0x65;
        *(undefined8 *)(uVar32 + 0x4a8) = 4;
        *(byte **)(uVar32 + 0x4b0) = pbVar19;
        *(undefined8 *)(uVar32 + 0x4b8) = 4;
        lVar18 = uVar32 + 0x600;
        *(undefined8 *)(uVar32 - 8) = 0x140661cec;
        pdb_140f3cec0(uVar32 + 0x1f60,lVar18,uVar32 + 0x4a8);
        *(undefined8 *)(uVar32 - 8) = 0x140661d06;
        pub_142e32760(uVar32 + 0x780,uVar32 + 0x13c0,0x620);
        *(undefined8 *)(uVar32 + 0x750) = *(undefined8 *)(uVar32 + 0x478);
        *(undefined8 *)(uVar32 + 0x758) = *(undefined8 *)(uVar32 + 0x480);
        *(undefined4 *)(uVar32 + 0xf00) = uVar15;
        *(undefined4 *)(uVar32 + 0xf04) = *(undefined4 *)(uVar32 + 0x2d0);
        *(undefined8 *)(uVar32 + 0xec8) = *(undefined8 *)(uVar32 + 0x3160);
        *(undefined8 *)(uVar32 + 0xed0) = *(undefined8 *)(uVar32 + 0x3168);
        *(undefined8 *)(uVar32 + 0xed8) = *(undefined8 *)(uVar32 + 0x3170);
        *(undefined8 *)(uVar32 + 0xee0) = *(undefined8 *)(uVar32 + 0x3178);
        *(undefined8 *)(uVar32 + 0xee8) = *(undefined8 *)(uVar32 + 0x3180);
        *(undefined8 *)(uVar32 + 0xef0) = *(undefined8 *)(uVar32 + 0x3188);
        *(undefined8 *)(uVar32 + 0xf08) = *(undefined8 *)(uVar32 + 0x240);
        uVar40 = *(undefined8 *)(uVar32 + 0x168);
        *(undefined8 *)(uVar32 - 8) = 0x140661d7b;
        pub_142e32760(uVar32 + 0xda0,uVar40,0x128);
        *(undefined8 *)(uVar32 + 0xef8) = *(undefined8 *)(uVar32 + 0x310);
        uVar40 = *(undefined8 *)(uVar32 + 0x1f0);
        *(undefined8 *)(uVar32 - 8) = 0x140661d9e;
        pub_142e32760(lVar18,uVar40,0x150);
        *(undefined8 *)(uVar32 + 0x760) = *(undefined8 *)(uVar32 + 0x488);
        *(undefined8 *)(uVar32 + 0x768) = *(undefined8 *)(uVar32 + 0x490);
        *(undefined8 *)(uVar32 + 0x770) = *(undefined8 *)(uVar32 + 0x498);
        *(undefined8 *)(uVar32 + 0x778) = *(undefined8 *)(uVar32 + 0x4a0);
        *(undefined8 *)(uVar32 + 0x1340) = *(undefined8 *)(uVar32 + 0x1f80);
        *(undefined8 *)(uVar32 + 0x1330) = *(undefined8 *)(uVar32 + 0x1f70);
        *(undefined8 *)(uVar32 + 0x1338) = *(undefined8 *)(uVar32 + 0x1f78);
        uVar40 = *(undefined8 *)(uVar32 + 0x1f60);
        uVar20 = *(undefined8 *)(uVar32 + 0x1f68);
        *(undefined1 *)(uVar32 + 0x113) = 0;
        *(longlong *)(uVar32 + 0x30) = lVar18;
        *(undefined1 *)(uVar32 + 0x20) = *(undefined1 *)(uVar32 + 0x1f88);
        *(undefined8 *)(uVar32 + 0x28) = 0;
        *(undefined8 *)(uVar32 - 8) = 0x140661e19;
        pdb_140229e70(uVar32 + 0x4a8,uVar32 + 0x1330,uVar40,uVar20);
        if (*(longlong *)(uVar32 + 0x4a8) == 0) {
          *(undefined8 *)(uVar32 + 0x600) = *(undefined8 *)(uVar32 + 0x4b0);
          *(undefined **)(uVar32 + 0x20) = &UNK_142f8e258;
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(uVar32 - 8) = 0x140662cec;
          pdb_142dc8170(&UNK_142f8e245,0x13,uVar32 + 0x600,&UNK_142f8e4a0);
        }
        *(longlong *)(uVar32 + 0x4a8) = *(longlong *)(uVar32 + 0x4a8);
        *(undefined8 *)(uVar32 + 0x4b0) = *(undefined8 *)(uVar32 + 0x4b0);
        *(undefined8 *)(uVar32 + 0x4b8) = *(undefined8 *)(uVar32 + 0x4b8);
        if (*(longlong *)(uVar32 + 0x420) == 3) {
          if (*(char *)(uVar32 + 0x1a0) != '\0') {
LAB_140662a98:
            *(undefined1 *)(uVar32 + 0x114) = 1;
            *(undefined1 *)(uVar32 + 0x115) = 1;
            *(undefined1 *)(uVar32 + 0x116) = 1;
            *(undefined1 *)(uVar32 + 0x117) = 1;
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(uVar32 - 8) = 0x140662acc;
            pdb_142dc83b0(&UNK_142f8d970,0x28,&UNK_142f8e288);
          }
          *(undefined1 *)(uVar32 + 0x114) = 1;
          *(undefined1 *)(uVar32 + 0x115) = 1;
          *(undefined1 *)(uVar32 + 0x116) = 0;
          *(undefined1 *)(uVar32 + 0x117) = 1;
          *(undefined8 *)(uVar32 + 0x38) = *(undefined8 *)(uVar32 + 0x3b8);
          *(undefined8 *)(uVar32 + 0x40) = *(undefined8 *)(uVar32 + 0x3c0);
          *(undefined8 *)(uVar32 + 0x28) = *(undefined8 *)(uVar32 + 0x3a8);
          *(undefined8 *)(uVar32 + 0x30) = *(undefined8 *)(uVar32 + 0x3b0);
          *(ulonglong *)(uVar32 + 0x20) = uVar32 + 0x1a8;
          puVar39 = (undefined8 *)(uVar32 + 0x420);
          *(undefined8 *)(uVar32 - 8) = 0x140661ec7;
          pdb_140645260(uVar32 + 0x1f60,puVar39,puVar39,puVar39);
        }
        else {
          if (*(char *)(uVar32 + 0x1a0) == '\0') goto LAB_140662a98;
          *(undefined1 *)(uVar32 + 0x114) = 1;
          *(undefined1 *)(uVar32 + 0x115) = 1;
          *(undefined1 *)(uVar32 + 0x116) = 0;
          *(undefined1 *)(uVar32 + 0x117) = 1;
          *(undefined8 *)(uVar32 + 0x30) = *(undefined8 *)(uVar32 + 0x3b8);
          *(undefined8 *)(uVar32 + 0x38) = *(undefined8 *)(uVar32 + 0x3c0);
          *(undefined8 *)(uVar32 + 0x20) = *(undefined8 *)(uVar32 + 0x3a8);
          *(undefined8 *)(uVar32 + 0x28) = *(undefined8 *)(uVar32 + 0x3b0);
          puVar39 = (undefined8 *)(uVar32 + 0x420);
          *(undefined8 *)(uVar32 - 8) = 0x1406622b6;
          pdb_1400ed130(uVar32 + 0x1f60,puVar39,uVar32 + 0x1a8,uVar32 + 0x458);
        }
        *(undefined8 *)(uVar32 + 0x610) = *(undefined8 *)(uVar32 + 0x4b8);
        *(undefined8 *)(uVar32 + 0x600) = *(undefined8 *)(uVar32 + 0x4a8);
        *(undefined8 *)(uVar32 + 0x608) = *(undefined8 *)(uVar32 + 0x4b0);
        *(undefined1 *)(uVar32 + 0xb6) = 1;
        *(undefined1 *)(uVar32 + 0xb7) = 1;
        *(undefined1 *)(uVar32 + 0xb8) = 1;
        *(undefined8 *)(uVar32 - 8) = 0x1406622f6;
        lVar18 = pdb_14022f670(uVar32 + 0x600);
        if (lVar18 != 0) {
          *(longlong *)(uVar32 + 0x120) = lVar18;
          *(undefined8 **)(uVar32 + 0x138) = puVar39;
          pcVar6 = (code *)*puVar39;
          if (pcVar6 != (code *)0x0) {
            uVar40 = *(undefined8 *)(uVar32 + 0x120);
            *(undefined8 *)(uVar32 - 8) = 0x14066231b;
            (*pcVar6)(uVar40);
          }
          uVar33 = *(ulonglong *)(*(longlong *)(uVar32 + 0x138) + 8);
          pbVar19 = *(byte **)(uVar32 + 0x120);
          if (uVar33 != 0) {
            uVar37 = *(ulonglong *)(*(longlong *)(uVar32 + 0x138) + 0x10);
            *(undefined8 *)(uVar32 - 8) = 0x14066233c;
            pub_1406abac0(pbVar19,uVar33,uVar37);
          }
        }
        *(undefined8 *)(uVar32 + 0x600) = *(undefined8 *)(uVar32 + 0x1f60);
        *(undefined8 *)(uVar32 + 0x608) = *(undefined8 *)(uVar32 + 0x1f68);
        *(undefined8 *)(uVar32 + 0x610) = *(undefined8 *)(uVar32 + 0x1f70);
        if (*(longlong *)(uVar32 + 0x600) != 0) {
          *(undefined8 *)(uVar32 - 8) = 0x140662370;
          pdb_1404b8e50(uVar32 + 0x608);
          plVar21 = *(longlong **)(uVar32 + 0x610);
          LOCK();
          *plVar21 = *plVar21 + -1;
          UNLOCK();
          if (*plVar21 == 0) {
            *(undefined1 *)(uVar32 + 0xb6) = 1;
            *(undefined1 *)(uVar32 + 0xb7) = 1;
            *(undefined1 *)(uVar32 + 0xb8) = 0;
            *(undefined8 *)(uVar32 - 8) = 0x14066239f;
            pdb_140e3f860(uVar32 + 0x610);
          }
        }
        plVar21 = *(longlong **)(uVar32 + 0x1a8);
        *(longlong *)(uVar32 + 0x600) = *(longlong *)(uVar32 + 0x1a0);
        *(longlong **)(uVar32 + 0x608) = plVar21;
        if (*(longlong *)(uVar32 + 0x1a0) == 0) {
          *(undefined8 *)(uVar32 - 8) = 0x140662587;
          pdb_1406d1b80(uVar32 + 0x608);
          *(undefined8 *)(uVar32 - 8) = 0x140662594;
          pdb_1406d1ba0(uVar32 + 0x610);
          *(undefined1 *)(uVar32 + 0xb6) = 1;
          *(undefined1 *)(uVar32 + 0xb7) = 0;
          *(undefined1 *)(uVar32 + 0xb8) = 0;
          *(undefined8 *)(uVar32 - 8) = 0x1406625b6;
          pdb_1406d1b60(uVar32 + 0x610);
        }
        else {
          LOCK();
          *plVar21 = *plVar21 + -1;
          UNLOCK();
          if (*plVar21 == 0) {
            *(undefined1 *)(uVar32 + 0xb6) = 1;
            *(undefined1 *)(uVar32 + 0xb7) = 0;
            *(undefined1 *)(uVar32 + 0xb8) = 0;
            *(undefined8 *)(uVar32 - 8) = 0x1406623f0;
            pdb_1406cd740();
          }
        }
        if (2 < *_DAT_143ca8e90) {
          *(undefined8 *)(uVar32 + 0x600) = 0;
          *(undefined **)(uVar32 + 0x608) = &UNK_142f8d9fd;
          *(undefined8 *)(uVar32 + 0x610) = 0x14;
          *(undefined8 *)(uVar32 + 0x618) = 0;
          *(undefined **)(uVar32 + 0x620) = &UNK_142f8d911;
          *(undefined8 *)(uVar32 + 0x628) = 0x21;
          *(undefined8 *)(uVar32 + 0x630) = 3;
          *(undefined **)(uVar32 + 0x638) = &UNK_142f8d9fd;
          *(undefined8 *)(uVar32 + 0x640) = 0x14;
          *(undefined8 *)(uVar32 + 0x648) = 0x24000000001;
          *(undefined **)(uVar32 + 0x650) = &UNK_142f8e270;
          *(undefined8 *)(uVar32 + 0x658) = 0x23;
          *(undefined1 *)(uVar32 + 0xb6) = 0;
          *(undefined1 *)(uVar32 + 0xb7) = 0;
          *(undefined1 *)(uVar32 + 0xb8) = 0;
          *(undefined8 *)(uVar32 - 8) = 0x140662682;
          pdb_140f332f0(uVar32 + 0xa7,uVar32 + 0x600);
        }
        plVar21 = *(longlong **)(uVar32 + 0x1f8);
        uVar14 = *(undefined1 *)(uVar32 + 0x118);
        if (plVar21 != (longlong *)0x0) {
          LOCK();
          *plVar21 = *plVar21 + -1;
          UNLOCK();
          if (*plVar21 == 0) {
            *(undefined1 *)(uVar32 + 0xda) = 0;
            *(undefined1 *)(uVar32 + 0xdb) = uVar14;
            *(undefined1 *)(uVar32 + 0xdc) = 0;
            *(undefined1 *)(uVar32 + 0xdd) = 0;
            *(undefined1 *)(uVar32 + 0xde) = 0;
            *(undefined1 *)(uVar32 + 0xdf) = 0;
            *(undefined1 *)(uVar32 + 0xe0) = 0;
            *(undefined8 *)(uVar32 - 8) = 0x1406626d9;
            pdb_140cb1c10(uVar32 + 0x1f8);
          }
        }
        *(undefined1 *)(uVar32 + 0xb9) = 0;
        *(undefined1 *)(uVar32 + 0xba) = uVar14;
        *(undefined1 *)(uVar32 + 0xbb) = 0;
        *(undefined1 *)(uVar32 + 0xbc) = 0;
        *(undefined1 *)(uVar32 + 0xbd) = 0;
        *(undefined1 *)(uVar32 + 0xbe) = 0;
        *(undefined1 *)(uVar32 + 0xbf) = 0;
        *(undefined8 *)(uVar32 - 8) = 0x140662717;
        pdb_140667cf0(uVar32 + 0x11b8);
        *(undefined1 *)(uVar32 + 0x102) = 0;
        *(undefined1 *)(uVar32 + 0x103) = uVar14;
        *(undefined1 *)(uVar32 + 0x104) = 0;
        *(undefined1 *)(uVar32 + 0x105) = 0;
        *(undefined1 *)(uVar32 + 0x106) = 0;
        *(undefined1 *)(uVar32 + 0x107) = 0;
        *(undefined1 *)(uVar32 + 0x108) = 0;
        *(undefined8 *)(uVar32 - 8) = 0x140662755;
        pdb_1404b2cc0(uVar32 + 0x2b00);
        plVar21 = *(longlong **)(uVar32 + 0x1e0);
        LOCK();
        *plVar21 = *plVar21 + -1;
        UNLOCK();
        if (*plVar21 == 0) {
          *(undefined1 *)(uVar32 + 0xfb) = 0;
          *(undefined1 *)(uVar32 + 0xfc) = uVar14;
          *(undefined1 *)(uVar32 + 0xfd) = 0;
          *(undefined1 *)(uVar32 + 0xfe) = 0;
          *(undefined1 *)(uVar32 + 0xff) = 0;
          *(undefined1 *)(uVar32 + 0x100) = 0;
          *(undefined1 *)(uVar32 + 0x101) = 0;
          *(undefined8 *)(uVar32 - 8) = 0x1406627a0;
          pdb_140d71bf0(uVar32 + 0x1e0);
        }
        if (*(char *)(uVar32 + 0xd9) == '\0') {
          return;
        }
        *(undefined1 *)(uVar32 + 0xeb) = 0;
        *(undefined1 *)(uVar32 + 0xec) = uVar14;
        *(undefined1 *)(uVar32 + 0xed) = 0;
        *(undefined8 *)(uVar32 - 8) = 0x1406627cb;
        pdb_140e97740(uVar32 + 0xda);
        return;
      }
      *(undefined8 *)(uVar32 - 8) = 0x140662cb4;
      pdb_142dc7e2a(1,4);
    }
    goto LAB_140662d59;
  }
  *(undefined8 *)(uVar32 + 0x1400) = *(undefined8 *)(uVar32 + 0x5a0);
  *(undefined8 *)(uVar32 + 0x1408) = *(undefined8 *)(uVar32 + 0x5a8);
  *(undefined8 *)(uVar32 + 0x13f0) = *(undefined8 *)(uVar32 + 0x590);
  *(undefined8 *)(uVar32 + 0x13f8) = *(undefined8 *)(uVar32 + 0x598);
  *(undefined8 *)(uVar32 + 0x13e0) = *(undefined8 *)(uVar32 + 0x580);
  *(undefined8 *)(uVar32 + 0x13e8) = *(undefined8 *)(uVar32 + 0x588);
  *(undefined8 *)(uVar32 + 0x13d0) = *(undefined8 *)(uVar32 + 0x570);
  *(undefined8 *)(uVar32 + 0x13d8) = *(undefined8 *)(uVar32 + 0x578);
  *(undefined8 *)(uVar32 + 0x13c0) = *(undefined8 *)(uVar32 + 0x560);
  *(undefined8 *)(uVar32 + 0x13c8) = *(undefined8 *)(uVar32 + 0x568);
  uVar20 = *(undefined8 *)(uVar32 + 0x178);
  if (3 < *_DAT_143ca8e90) {
    *(ulonglong *)(uVar32 + 0x1f60) = uVar32 + 0x13c0;
    *(code **)(uVar32 + 0x1f68) = pdb_140668b00;
    *(undefined8 *)(uVar32 + 0x600) = 0;
    *(undefined **)(uVar32 + 0x608) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x610) = 0x14;
    *(undefined8 *)(uVar32 + 0x618) = 0;
    *(undefined **)(uVar32 + 0x620) = &UNK_142f8d911;
    *(undefined8 *)(uVar32 + 0x628) = 0x21;
    *(undefined8 *)(uVar32 + 0x630) = 4;
    *(undefined **)(uVar32 + 0x638) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x640) = 0x14;
    *(undefined8 *)(uVar32 + 0x648) = 0x29f00000001;
    *(undefined **)(uVar32 + 0x650) = &UNK_142f8de76;
    *(ulonglong *)(uVar32 + 0x658) = uVar32 + 0x1f60;
    *(undefined8 *)(uVar32 + 0x188) = uVar40;
    *(undefined8 *)(uVar32 + 400) = uVar20;
    *(undefined1 *)(uVar32 + 0xb5) = 1;
    *(undefined8 *)(uVar32 - 8) = 0x14065f8b3;
    pdb_140f332f0(uVar32 + 0xa7,uVar32 + 0x600);
  }
  if (lVar38 == 0) {
    *(undefined4 *)(uVar32 + 0x138) = 0;
    lVar35 = uVar32 + 0x1a8;
    if (*(longlong *)(uVar32 + 0x180) != 0) goto LAB_14065f926;
LAB_14065f99b:
    pbVar19 = (byte *)0x8;
  }
  else {
    uVar24 = *(undefined8 *)(uVar32 + 0x1a0);
    uVar5 = *(undefined8 *)(uVar32 + 0x1a8);
    *(undefined8 *)(uVar32 + 0x1c8) = uVar40;
    *(undefined8 *)(uVar32 + 0x1d0) = uVar20;
    *(undefined1 *)(uVar32 + 0xc0) = 0;
    *(undefined1 *)(uVar32 + 0xc1) = 1;
    *(undefined8 *)(uVar32 - 8) = 0x14065f8f3;
    uVar20 = pdb_14064c590(uVar32 + 0x420,uVar24,uVar5);
    *(undefined8 *)(uVar32 + 0x310) = 1;
    *(undefined8 *)(uVar32 + 0x318) = uVar20;
    pcVar34 = (char *)(uVar32 + 0x310);
    *(int *)(uVar32 + 0x138) = (int)CONCAT71((int7)((ulonglong)uVar20 >> 8),1);
    lVar35 = uVar32 + 0x318;
    if (*(longlong *)(uVar32 + 0x180) == 0) goto LAB_14065f99b;
LAB_14065f926:
    *(undefined8 *)(uVar32 - 8) = 0x14065f92b;
    pdb_14007ee60();
    uVar37 = *(ulonglong *)(uVar32 + 0x1b8);
    *(undefined8 *)(uVar32 - 8) = 0x14065f93c;
    pbVar19 = pub_1406abab0(uVar37,8);
    if (pbVar19 == (byte *)0x0) {
      *(undefined8 *)(uVar32 + 0x1c8) = uVar40;
      *(undefined8 *)(uVar32 + 0x1d0) = *(undefined8 *)(uVar32 + 0x178);
      *(char *)(uVar32 + 0xc0) = (char)*(undefined4 *)(uVar32 + 0x138);
      *(undefined1 *)(uVar32 + 0xc1) = 1;
      uVar40 = *(undefined8 *)(uVar32 + 0x1b8);
      *(undefined8 *)(uVar32 - 8) = 0x14065f97a;
      pdb_142dc7e2a(8,uVar40);
      goto LAB_140662d59;
    }
  }
  *(undefined8 *)(uVar32 + 0x1f60) = *(undefined8 *)(uVar32 + 0x180);
  *(byte **)(uVar32 + 0x1f68) = pbVar19;
  *(undefined8 *)(uVar32 + 0x1f70) = 0;
  *(ulonglong *)(uVar32 + 0x600) = uVar32 + 0x1f70;
  *(undefined8 *)(uVar32 + 0x608) = 0;
  *(byte **)(uVar32 + 0x610) = pbVar19;
  uVar40 = *(undefined8 *)(uVar32 + 0x120);
  *(undefined8 *)(uVar32 - 8) = 0x14065f9f9;
  pdb_1403c17b0(uVar40,lVar25 + lVar18 * 0xa0,uVar32 + 0x600);
  *(undefined8 *)(uVar32 + 0x3160) = *(undefined8 *)(uVar32 + 0x1f60);
  *(undefined8 *)(uVar32 + 0x3168) = *(undefined8 *)(uVar32 + 0x1f68);
  *(undefined8 *)(uVar32 + 0x3170) = *(undefined8 *)(uVar32 + 0x1f70);
  *(undefined8 *)(uVar32 + 0x640) = *(undefined8 *)(uVar32 + 0x1400);
  *(undefined8 *)(uVar32 + 0x648) = *(undefined8 *)(uVar32 + 0x1408);
  *(undefined8 *)(uVar32 + 0x630) = *(undefined8 *)(uVar32 + 0x13f0);
  *(undefined8 *)(uVar32 + 0x638) = *(undefined8 *)(uVar32 + 0x13f8);
  *(undefined8 *)(uVar32 + 0x620) = *(undefined8 *)(uVar32 + 0x13e0);
  *(undefined8 *)(uVar32 + 0x628) = *(undefined8 *)(uVar32 + 0x13e8);
  *(undefined8 *)(uVar32 + 0x610) = *(undefined8 *)(uVar32 + 0x13d0);
  *(undefined8 *)(uVar32 + 0x618) = *(undefined8 *)(uVar32 + 0x13d8);
  *(undefined8 *)(uVar32 + 0x600) = *(undefined8 *)(uVar32 + 0x13c0);
  *(undefined8 *)(uVar32 + 0x608) = *(undefined8 *)(uVar32 + 0x13c8);
  *(undefined8 *)(uVar32 + 0x1c8) = 8;
  *(undefined8 *)(uVar32 + 0x1d0) = 0;
  *(char *)(uVar32 + 0xc0) = (char)*(undefined4 *)(uVar32 + 0x138);
  *(undefined1 *)(uVar32 + 0xc1) = 0;
  *(ulonglong *)(uVar32 + 0x30) = uVar32 + 0x600;
  *(undefined8 *)(uVar32 + 0x28) = *(undefined8 *)(uVar32 + 0x178);
  *(undefined8 *)(uVar32 + 0x20) = *(undefined8 *)(uVar32 + 0x198);
  uVar40 = *(undefined8 *)(uVar32 + 0x118);
  *(undefined8 *)(uVar32 - 8) = 0x14065fac7;
  pdb_1406ca660(uVar32 + 0x1330,uVar32 + 0x3160,uVar40,uVar33);
  if (*(longlong *)(uVar32 + 0x420) == 3) {
    if (*pcVar34 == '\0') {
      *(undefined8 *)(uVar32 - 8) = 0x14065fafb;
      pub_142e32760(uVar32 + 0x600,uVar32 + 0x1330,0x90);
      *(undefined1 *)(uVar32 + 0x145) = 0;
      *(undefined8 *)(uVar32 - 8) = 0x14065fb1b;
      pdb_1401504e0(uVar32 + 0x3c8,uVar32 + 0x600,uVar32 + 0x420,lVar35);
                    /* WARNING: Could not recover jumptable at 0x00014065fb31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_142f8eba8 + *(int *)(&UNK_142f8eba8 + *(longlong *)(uVar32 + 0x3c8) * 4)))();
      return;
    }
  }
  else if (*pcVar34 != '\0') {
    *(undefined8 *)(uVar32 - 8) = 0x14065fb54;
    pub_142e32760(uVar32 + 0x600,uVar32 + 0x1330,0x90);
    plVar21 = *(longlong **)(pcVar34 + 8);
    LOCK();
    lVar18 = *plVar21;
    *plVar21 = *plVar21 + 1;
    UNLOCK();
    if (*plVar21 != 0 && SCARRY8(lVar18,1) == *plVar21 < 0) {
      *(undefined1 *)(uVar32 + 0x145) = 0;
      *(undefined8 *)(uVar32 - 8) = 0x14065fb84;
      pdb_140153630(uVar32 + 0x3c8,uVar32 + 0x600,uVar32 + 0x420);
                    /* WARNING: Could not recover jumptable at 0x00014065fb9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_142f8eba8 + *(int *)(&UNK_142f8eba8 + *(longlong *)(uVar32 + 0x3c8) * 4)))();
      return;
    }
LAB_140662d59:
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  *(undefined1 *)(uVar32 + 0x145) = 1;
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(uVar32 - 8) = 0x140662a31;
  pdb_142dc83b0(&UNK_142f8d970,0x28,&UNK_142f8ddd0);
code_r0x0001406609b5:
  *(undefined8 *)(uVar32 + 0x2a0) = *(undefined8 *)(uVar32 + 0x2b0);
  if (*_DAT_143ca8e90 != 0) {
    *(undefined8 **)(uVar32 + 0x13c0) = puVar39 + 2;
    *(code **)(uVar32 + 0x13c8) = pdb_140094770;
    *(ulonglong *)(uVar32 + 0x13d0) = uVar32 + 0x2a0;
    *(code **)(uVar32 + 0x13d8) = pdb_140315780;
    *(undefined8 *)(uVar32 + 0x600) = 0;
    *(undefined **)(uVar32 + 0x608) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x610) = 0x14;
    *(undefined8 *)(uVar32 + 0x618) = 0;
    *(undefined **)(uVar32 + 0x620) = &UNK_142f8d911;
    *(undefined8 *)(uVar32 + 0x628) = 0x21;
    *(undefined8 *)(uVar32 + 0x630) = 1;
    *(undefined **)(uVar32 + 0x638) = &UNK_142f8d9fd;
    *(undefined8 *)(uVar32 + 0x640) = 0x14;
    *(undefined8 *)(uVar32 + 0x648) = 0x32500000001;
    *(undefined **)(uVar32 + 0x650) = &UNK_142f8dfc4;
    *(ulonglong *)(uVar32 + 0x658) = uVar32 + 0x13c0;
    *(undefined1 *)(uVar32 + 0x112) = 1;
    *(undefined8 *)(uVar32 - 8) = 0x140660ab0;
    pdb_140f332f0(uVar32 + 0xa7,uVar32 + 0x600);
  }
  *(undefined1 *)((longlong)puVar39 + 0x9c) = 1;
  *(undefined1 *)(uVar32 + 0x112) = 1;
  *(undefined8 *)(uVar32 - 8) = 0x140660ad0;
  pdb_140f60be0(uVar32 + 0x310,puVar39 + 2);
  uVar15 = *(undefined4 *)(puVar39 + 0x13);
  uVar40 = *puVar39;
  uVar20 = puVar39[1];
  uVar14 = *(undefined1 *)((longlong)puVar39 + 0x9c);
  if (SBORROW8(0,puVar39[5])) {
    *(undefined8 *)(uVar32 + 0x1f60) = 0x8000000000000000;
  }
  else {
    *(undefined8 *)(uVar32 - 8) = 0x140660b10;
    pdb_140f60be0(uVar32 + 0x1f60,puVar39 + 5);
  }
  uVar24 = 0x8000000000000000;
  if (!SBORROW8(0,puVar39[8])) {
    *(undefined8 *)(uVar32 - 8) = 0x140660b2c;
    pdb_140f60be0(uVar32 + 0x13c0,puVar39 + 8);
    uVar24 = *(undefined8 *)(uVar32 + 0x13c0);
    *(undefined8 *)(uVar32 + 0x1320) = *(undefined8 *)(uVar32 + 0x13c8);
    *(undefined8 *)(uVar32 + 0x1328) = *(undefined8 *)(uVar32 + 0x13d0);
  }
  *(undefined4 *)(uVar32 + 0x390) = *(undefined4 *)(puVar39 + 0xd);
  uVar5 = puVar39[0xc];
  *(undefined8 *)(uVar32 + 0x380) = puVar39[0xb];
  *(undefined8 *)(uVar32 + 0x388) = uVar5;
  *(undefined8 *)(uVar32 + 0x3f0) = *(undefined8 *)(uVar32 + 0x1f60);
  *(undefined8 *)(uVar32 + 0x3f8) = *(undefined8 *)(uVar32 + 0x1f68);
  *(undefined8 *)(uVar32 + 0x400) = *(undefined8 *)(uVar32 + 0x1f70);
  uVar2 = *(undefined1 *)((longlong)puVar39 + 0x9d);
  *(undefined8 *)(uVar32 + 0x13d0) = *(undefined8 *)(uVar32 + 800);
  *(undefined8 *)(uVar32 + 0x13c0) = *(undefined8 *)(uVar32 + 0x310);
  *(undefined8 *)(uVar32 + 0x13c8) = *(undefined8 *)(uVar32 + 0x318);
  uVar5 = puVar39[0x10];
  *(undefined8 *)(uVar32 + 0x3e0) = puVar39[0xf];
  *(undefined8 *)(uVar32 + 1000) = uVar5;
  uVar5 = *(undefined8 *)((longlong)puVar39 + 0x6c);
  uVar7 = puVar39[0x11];
  uVar8 = puVar39[0x12];
  *(undefined8 *)(uVar32 + 0x648) = *(undefined8 *)(uVar32 + 0x1320);
  *(undefined8 *)(uVar32 + 0x650) = *(undefined8 *)(uVar32 + 0x1328);
  *(undefined8 *)(uVar32 + 0x600) = uVar40;
  *(undefined8 *)(uVar32 + 0x608) = uVar20;
  *(undefined8 *)(uVar32 + 0x620) = *(undefined8 *)(uVar32 + 0x13d0);
  *(undefined8 *)(uVar32 + 0x610) = *(undefined8 *)(uVar32 + 0x13c0);
  *(undefined8 *)(uVar32 + 0x618) = *(undefined8 *)(uVar32 + 0x13c8);
  *(undefined8 *)(uVar32 + 0x638) = *(undefined8 *)(uVar32 + 0x400);
  *(undefined8 *)(uVar32 + 0x628) = *(undefined8 *)(uVar32 + 0x3f0);
  *(undefined8 *)(uVar32 + 0x630) = *(undefined8 *)(uVar32 + 0x3f8);
  *(undefined8 *)(uVar32 + 0x640) = uVar24;
  *(undefined4 *)(uVar32 + 0x668) = *(undefined4 *)(uVar32 + 0x390);
  *(undefined8 *)(uVar32 + 0x658) = *(undefined8 *)(uVar32 + 0x380);
  *(undefined8 *)(uVar32 + 0x660) = *(undefined8 *)(uVar32 + 0x388);
  *(undefined8 *)(uVar32 + 0x66c) = uVar5;
  *(undefined4 *)(uVar32 + 0x684) = *(undefined4 *)(uVar32 + 0x3ec);
  *(undefined8 *)(uVar32 + 0x674) = *(undefined8 *)(uVar32 + 0x3dc);
  *(undefined8 *)(uVar32 + 0x67c) = *(undefined8 *)(uVar32 + 0x3e4);
  *(undefined8 *)(uVar32 + 0x688) = uVar7;
  *(undefined8 *)(uVar32 + 0x690) = uVar8;
  *(undefined4 *)(uVar32 + 0x698) = uVar15;
  *(undefined1 *)(uVar32 + 0x69c) = uVar14;
  *(undefined1 *)(uVar32 + 0x69d) = uVar2;
  *(undefined8 *)(uVar32 + 0x6a0) = *(undefined8 *)(uVar32 + 0x2a0);
  lVar18 = *(longlong *)(uVar32 + 0x210);
  if (lVar18 == *(longlong *)(uVar32 + 0x200)) {
    *(undefined8 *)(uVar32 - 8) = 0x140660c8c;
    pdb_142dbaf50(uVar32 + 0x200);
  }
  puVar23 = (ulonglong *)(*(longlong *)(uVar32 + 0x118) + 8);
  lVar25 = *(longlong *)(uVar32 + 0x208);
  *(undefined8 *)(uVar32 - 8) = 0x14066022b;
  pub_142e32760(lVar18 * 0xa8 + lVar25,uVar32 + 0x600);
  *(longlong *)(uVar32 + 0x210) = lVar18 + 1;
  arg0 = *(ulonglong **)(uVar32 + 0x2c8);
  goto LAB_14066023c;
}

