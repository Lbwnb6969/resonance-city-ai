// VA 0x140619d60, PDB extent 2997 bytes
// tiny_glade::panic_reporter::sentry_reporter::report_crash_event_to_sentry
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/sentry_reporter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::panic_reporter::sentry_reporter::report_crash_event_to_sentry
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/sentry_reporter.rs
   Extent: 2997 */

undefined8
pdb_140619d60(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
             undefined1 param_5)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  byte ***pppbVar4;
  code *pcVar5;
  ulonglong *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  byte *pbVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong arg1;
  ulonglong *puVar19;
  undefined8 uVar20;
  byte *pbVar21;
  longlong lVar22;
  undefined8 *puVar23;
  byte ***pppbStack_5e0;
  byte *pbStack_5d8;
  ulonglong **ppuStack_5d0;
  byte ***pppbStack_5c8;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined8 uStack_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  ulonglong uStack_598;
  ulonglong uStack_590;
  ulonglong uStack_588;
  ulonglong uStack_580;
  ulonglong uStack_578;
  undefined8 uStack_118;
  ulonglong *puStack_110;
  byte ***pppbStack_108;
  undefined8 uStack_100;
  ulonglong **ppuStack_f8;
  ulonglong ***pppuStack_e8;
  code *pcStack_e0;
  ulonglong **ppuStack_d8;
  ulonglong *puStack_d0;
  ulonglong *puStack_c8;
  byte *pbStack_c0;
  ulonglong *puStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong *plStack_a0;
  byte ***pppbStack_98;
  byte *pbStack_90;
  ulonglong **ppuStack_88;
  undefined8 uStack_80;
  ulonglong *puStack_78;
  byte *pbStack_70;
  undefined8 *puStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pbStack_c0 = (byte *)*param_3;
  puVar2 = (ulonglong *)param_3[1];
  lVar17 = param_3[2];
  lVar22 = lVar17 * 0x70;
  puVar1 = puVar2 + lVar17 * 0xe;
  puVar19 = puVar2;
  uStack_118 = param_1;
  puStack_d0 = puVar2;
  puStack_c8 = puVar2;
  puStack_b8 = puVar1;
  plStack_a0 = param_4;
  uStack_80 = param_2;
  puStack_68 = param_3;
  pbStack_60 = pbStack_c0;
  if (lVar17 != 0) {
    puVar6 = puVar2;
    do {
      puVar19 = puVar6 + 0xe;
      puStack_c8 = puVar19;
      if (SBORROW8(0,(longlong)*puVar6)) break;
      uStack_578 = puVar6[0xd];
      uStack_588 = puVar6[0xb];
      uStack_580 = puVar6[0xc];
      uStack_598 = puVar6[9];
      uStack_590 = puVar6[10];
      pbStack_5d8 = (byte *)puVar6[1];
      ppuStack_5d0 = (ulonglong **)puVar6[2];
      pppbStack_5c8 = (byte ***)puVar6[3];
      uStack_5c0 = (undefined4)puVar6[4];
      uStack_5bc = *(undefined4 *)((longlong)puVar6 + 0x24);
      uStack_5b8 = (byte ***)puVar6[5];
      uStack_5b0 = (undefined4)puVar6[6];
      uStack_5ac = *(undefined4 *)((longlong)puVar6 + 0x34);
      uStack_5a8 = (undefined4)puVar6[7];
      uStack_5a4 = *(undefined4 *)((longlong)puVar6 + 0x3c);
      uStack_5a0 = (undefined4)puVar6[8];
      uStack_59c = *(undefined4 *)((longlong)puVar6 + 0x44);
      pppbStack_5e0 = (byte ***)*puVar6;
      pdb_140332ac0(&UNK_142e38630,&pppbStack_5e0);
      lVar22 = lVar22 + -0x70;
      puVar6 = puVar19;
    } while (lVar22 != 0);
  }
  pbStack_70 = (byte *)(((ulonglong)((longlong)puVar1 - (longlong)puVar19) >> 4) *
                       0x6db6db6db6db6db7);
  pbStack_58 = (byte *)0x0;
  puStack_110 = puVar19;
  puStack_78 = puVar2;
  while (pbStack_70 != pbStack_58) {
    pbStack_58 = pbStack_58 + 1;
    pdb_1404c4620();
  }
  if (pbStack_60 != (byte *)0x0) {
    pub_1406abac0((byte *)puStack_78,(longlong)pbStack_60 * 0x70,8);
  }
  puVar23 = puStack_68;
  if (SBORROW8(0,puStack_68[0x35])) {
    uStack_49 = 1;
    uStack_4a = 1;
    uStack_4b = 1;
    uStack_4c = 1;
    pdb_140f60be0(&pbStack_5d8,puStack_68 + 0x36);
    pbVar21 = (byte *)0x8000000000000000;
    puVar23 = puStack_68;
    if (pbStack_5d8 != (byte *)0x0) {
      pub_1406abac0((byte *)ppuStack_5d0,(ulonglong)pbStack_5d8,1);
      puVar23 = puStack_68;
    }
  }
  else {
    pbVar21 = (byte *)puStack_68[0x37];
    if ((longlong)pbVar21 < 0) {
      uVar20 = 0;
LAB_140619f86:
      uStack_49 = 1;
      uStack_4a = 1;
      uStack_4b = 1;
      uStack_4c = 1;
      pdb_142dc7e2a(uVar20,pbVar21);
      goto LAB_14061a4d7;
    }
    if (pbVar21 == (byte *)0x0) {
      pbStack_60 = (byte *)0x1;
    }
    else {
      uVar3 = puStack_68[0x36];
      pdb_14007ee60();
      uVar20 = 1;
      pbVar16 = pub_1406abab0((ulonglong)pbVar21,1);
      if (pbVar16 == (byte *)0x0) goto LAB_140619f86;
      pbStack_60 = pbVar16;
      pub_142e32760(pbVar16,uVar3,pbVar21);
    }
  }
  pdb_14007ee60();
  pbVar16 = pub_1406abab0(0x180,8);
  puStack_78 = (ulonglong *)CONCAT71(puStack_78._1_7_,pbVar16 == (byte *)0x0);
  pbStack_58 = pbVar21;
  if (pbVar16 == (byte *)0x0) {
    uStack_4d = 1;
    uStack_4e = 1;
    uStack_4f = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x180);
  }
  pbStack_c0 = (byte *)puVar23[0x31];
  puStack_b8 = (ulonglong *)puVar23[0x32];
  uStack_b0 = *(undefined4 *)(puVar23 + 0x33);
  uStack_ac = *(undefined4 *)((longlong)puVar23 + 0x19c);
  uStack_a8 = *(undefined4 *)(puVar23 + 0x34);
  uStack_a4 = *(undefined4 *)((longlong)puVar23 + 0x1a4);
  puStack_d0 = (ulonglong *)&UNK_142f88978;
  puStack_c8 = (ulonglong *)0x3;
  pppbVar4 = (byte ***)puVar23[0xb];
  ppuStack_88 = (ulonglong **)puVar23[0xe];
  pppbStack_98 = (byte ***)puVar23[0xc];
  pbStack_90 = (byte *)puVar23[0xd];
  pbStack_70 = pbVar16;
  if (SBORROW8(0,(longlong)pppbVar4)) {
    ppuStack_88 = (ulonglong **)puVar23[0xe];
    pppbStack_98 = (byte ***)puVar23[0xc];
    pbStack_90 = (byte *)puVar23[0xd];
    pppuStack_e8 = (ulonglong ***)&pppbStack_98;
    pcStack_e0 = pdb_1405730b0;
    pdb_140f60760(&pppbStack_5e0,&UNK_142f889b4,&pppuStack_e8);
    pppuStack_e8 = (ulonglong ***)pppbStack_5e0;
    pcStack_e0 = (code *)pbStack_5d8;
    ppuStack_d8 = ppuStack_5d0;
    if ((!SBORROW8(0,(longlong)pppbStack_98)) && ((ulonglong ***)pppbStack_98 != (ulonglong ***)0x0)
       ) {
      pub_1406abac0(pbStack_90,(ulonglong)pppbStack_98,1);
    }
    pppbStack_108 = (byte ***)pppuStack_e8;
    uStack_100 = (byte *)pcStack_e0;
    uStack_5b8 = (byte ***)ppuStack_d8;
  }
  else {
    pbStack_5d8 = (byte *)puVar23[0xc];
    ppuStack_5d0 = (ulonglong **)puVar23[0xd];
    pppbStack_5c8 = (byte ***)puVar23[0xe];
    pppbStack_5e0 = pppbVar4;
    pub_142e32760(&uStack_5c0,puVar23 + 0xf,0xf0);
    if (!SBORROW8(0,CONCAT44(uStack_5bc,uStack_5c0))) {
      uStack_50 = 1;
      pdb_1404d46f0(&uStack_5c0);
    }
    pppbStack_108 = pppbStack_98;
    uStack_100 = pbStack_90;
    uStack_5b8 = (byte ***)ppuStack_88;
  }
  puVar23 = puStack_68;
  uVar20 = uStack_80;
  pppbStack_5e0 = (byte ***)&UNK_142f8897b;
  pbStack_5d8 = (byte *)0x4;
  pppbStack_5c8 = pppbStack_108;
  uStack_5c0 = (undefined4)uStack_100;
  uStack_5bc = uStack_100._4_4_;
  lVar17 = *plStack_a0;
  ppuStack_5d0 = (ulonglong **)pppbVar4;
  ppuStack_f8 = (ulonglong **)uStack_5b8;
  if (SBORROW8(0,lVar17)) {
    pdb_14007ee60();
    lVar22 = 3;
    pbVar21 = pub_1406abab0(3,1);
    if (pbVar21 == (byte *)0x0) {
      pdb_142dc7e2a(1,3);
LAB_14061a4d7:
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    pbVar21[2] = 0x41;
    pbVar21[0] = 0x4e;
    pbVar21[1] = 0x2f;
    lVar18 = 3;
  }
  else {
    lVar22 = plStack_a0[1];
    pbVar21 = (byte *)plStack_a0[2];
    lVar18 = plStack_a0[3];
  }
  pbVar16 = pbStack_70;
  *(ulonglong *)(pbStack_70 + 0x20) = CONCAT44(uStack_ac,uStack_b0);
  *(ulonglong *)(pbStack_70 + 0x28) = CONCAT44(uStack_a4,uStack_a8);
  *(byte **)(pbStack_70 + 0x10) = pbStack_c0;
  *(ulonglong **)(pbStack_70 + 0x18) = puStack_b8;
  *(ulonglong **)pbStack_70 = puStack_d0;
  *(ulonglong **)(pbStack_70 + 8) = puStack_c8;
  *(byte ****)(pbStack_70 + 0x30) = pppbStack_5e0;
  *(byte **)(pbStack_70 + 0x38) = pbStack_5d8;
  *(ulonglong ***)(pbStack_70 + 0x40) = ppuStack_5d0;
  *(byte ****)(pbStack_70 + 0x48) = pppbStack_5c8;
  *(undefined4 *)(pbStack_70 + 0x50) = uStack_5c0;
  *(undefined4 *)(pbStack_70 + 0x54) = uStack_5bc;
  *(undefined4 *)(pbStack_70 + 0x58) = (undefined4)uStack_5b8;
  *(undefined4 *)(pbStack_70 + 0x5c) = uStack_5b8._4_4_;
  *(undefined **)(pbStack_70 + 0x60) = &UNK_142f8897f;
  pbStack_70[0x68] = 8;
  pbStack_70[0x69] = 0;
  pbStack_70[0x6a] = 0;
  pbStack_70[0x6b] = 0;
  pbStack_70[0x6c] = 0;
  pbStack_70[0x6d] = 0;
  pbStack_70[0x6e] = 0;
  pbStack_70[0x6f] = 0;
  *(longlong *)(pbStack_70 + 0x70) = lVar17;
  *(longlong *)(pbStack_70 + 0x78) = lVar22;
  *(byte **)(pbStack_70 + 0x80) = pbVar21;
  *(longlong *)(pbStack_70 + 0x88) = lVar18;
  *(undefined **)(pbStack_70 + 0x90) = &UNK_142f88987;
  pbStack_70[0x98] = 0xe;
  pbStack_70[0x99] = 0;
  pbStack_70[0x9a] = 0;
  pbStack_70[0x9b] = 0;
  pbStack_70[0x9c] = 0;
  pbStack_70[0x9d] = 0;
  pbStack_70[0x9e] = 0;
  pbStack_70[0x9f] = 0;
  uVar3 = puVar23[0x3e];
  uVar14 = puVar23[0x3f];
  uVar15 = puVar23[0x40];
  *(undefined8 *)(pbStack_70 + 0xa0) = puVar23[0x3d];
  *(undefined8 *)(pbStack_70 + 0xa8) = uVar3;
  *(undefined8 *)(pbStack_70 + 0xb0) = uVar14;
  *(undefined8 *)(pbStack_70 + 0xb8) = uVar15;
  *(undefined **)(pbStack_70 + 0xc0) = &UNK_142f88995;
  pbStack_70[200] = 6;
  pbStack_70[0xc9] = 0;
  pbStack_70[0xca] = 0;
  pbStack_70[0xcb] = 0;
  pbStack_70[0xcc] = 0;
  pbStack_70[0xcd] = 0;
  pbStack_70[0xce] = 0;
  pbStack_70[0xcf] = 0;
  uVar3 = puVar23[0x2d];
  uVar14 = puVar23[0x2e];
  uVar15 = puVar23[0x30];
  *(undefined8 *)(pbStack_70 + 0xe0) = puVar23[0x2f];
  *(undefined8 *)(pbStack_70 + 0xe8) = uVar15;
  *(undefined8 *)(pbStack_70 + 0xd0) = uVar3;
  *(undefined8 *)(pbStack_70 + 0xd8) = uVar14;
  *(undefined **)(pbStack_70 + 0xf0) = &UNK_142f8899b;
  pbStack_70[0xf8] = 8;
  pbStack_70[0xf9] = 0;
  pbStack_70[0xfa] = 0;
  pbStack_70[0xfb] = 0;
  pbStack_70[0xfc] = 0;
  pbStack_70[0xfd] = 0;
  pbStack_70[0xfe] = 0;
  pbStack_70[0xff] = 0;
  uVar3 = puVar23[0x39];
  uVar14 = puVar23[0x3a];
  uVar15 = puVar23[0x3c];
  *(undefined8 *)(pbStack_70 + 0x110) = puVar23[0x3b];
  *(undefined8 *)(pbStack_70 + 0x118) = uVar15;
  *(undefined8 *)(pbStack_70 + 0x100) = uVar3;
  *(undefined8 *)(pbStack_70 + 0x108) = uVar14;
  *(undefined **)(pbStack_70 + 0x120) = &UNK_142f889a3;
  pbStack_70[0x128] = 7;
  pbStack_70[0x129] = 0;
  pbStack_70[0x12a] = 0;
  pbStack_70[299] = 0;
  pbStack_70[300] = 0;
  pbStack_70[0x12d] = 0;
  pbStack_70[0x12e] = 0;
  pbStack_70[0x12f] = 0;
  uVar3 = puVar23[0x35];
  uVar14 = puVar23[0x36];
  uVar15 = puVar23[0x38];
  *(undefined8 *)(pbStack_70 + 0x140) = puVar23[0x37];
  *(undefined8 *)(pbStack_70 + 0x148) = uVar15;
  *(undefined8 *)(pbStack_70 + 0x130) = uVar3;
  *(undefined8 *)(pbStack_70 + 0x138) = uVar14;
  *(undefined **)(pbStack_70 + 0x150) = &UNK_142f889aa;
  pbStack_70[0x158] = 10;
  pbStack_70[0x159] = 0;
  pbStack_70[0x15a] = 0;
  pbStack_70[0x15b] = 0;
  pbStack_70[0x15c] = 0;
  pbStack_70[0x15d] = 0;
  pbStack_70[0x15e] = 0;
  pbStack_70[0x15f] = 0;
  uVar7 = *(undefined4 *)(puVar23 + 7);
  uVar8 = *(undefined4 *)((longlong)puVar23 + 0x3c);
  uVar9 = *(undefined4 *)(puVar23 + 8);
  uVar10 = *(undefined4 *)((longlong)puVar23 + 0x44);
  uVar11 = *(undefined4 *)((longlong)puVar23 + 0x4c);
  uVar12 = *(undefined4 *)(puVar23 + 10);
  uVar13 = *(undefined4 *)((longlong)puVar23 + 0x54);
  *(undefined4 *)(pbStack_70 + 0x170) = *(undefined4 *)(puVar23 + 9);
  *(undefined4 *)(pbStack_70 + 0x174) = uVar11;
  *(undefined4 *)(pbStack_70 + 0x178) = uVar12;
  *(undefined4 *)(pbStack_70 + 0x17c) = uVar13;
  *(undefined4 *)(pbStack_70 + 0x160) = uVar7;
  *(undefined4 *)(pbStack_70 + 0x164) = uVar8;
  *(undefined4 *)(pbStack_70 + 0x168) = uVar9;
  *(undefined4 *)(pbStack_70 + 0x16c) = uVar10;
  pub_142e32760(&pppbStack_5e0,uVar20,0x4c8);
  uVar20 = uStack_118;
  puStack_d0 = (ulonglong *)0x8;
  puStack_c8 = (ulonglong *)pbVar16;
  pbVar21 = (byte *)0x0;
  if (!SBORROW8(0,(longlong)pbStack_58)) {
    pbVar21 = pbStack_60;
  }
  pbStack_c0 = (byte *)0x8;
  uStack_4d = 0;
  uStack_4e = 0;
  uStack_4f = 0;
  pdb_1406187e0(uStack_118,&pppbStack_5e0,&puStack_d0,pbVar21,pbStack_58,param_5);
  if (((ulonglong)pbStack_58 & 0x7fffffffffffffff) == 0) {
    arg1 = puStack_68[3];
  }
  else {
    pub_1406abac0(pbStack_60,(ulonglong)pbStack_58,1);
    arg1 = puStack_68[3];
  }
  if (arg1 != 0) {
    lVar17 = 0x20;
    if (SBORROW8(0,arg1)) {
      arg1 = puStack_68[4];
      lVar17 = 0x28;
      if (arg1 == 0) {
        return uVar20;
      }
    }
    pub_1406abac0(*(byte **)((longlong)puStack_68 + lVar17),arg1,1);
  }
  return uVar20;
}

