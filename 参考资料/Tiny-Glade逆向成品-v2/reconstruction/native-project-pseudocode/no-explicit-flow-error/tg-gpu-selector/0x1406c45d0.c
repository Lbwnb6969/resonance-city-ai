// VA 0x1406c45d0, PDB extent 2624 bytes
// tg_gpu_selector::gpu_selection::render_error_to_ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/gpu_selection.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_gpu_selector::gpu_selection::render_error_to_ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/gpu_selection.rs
   Extent: 2624 */

byte * pdb_1406c45d0(ulonglong *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulonglong *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  bool bVar14;
  ulonglong *puStack_130;
  byte *pbStack_128;
  undefined4 uStack_120;
  int iStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  ulonglong *puStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  ulonglong *puStack_a0;
  ulonglong *puStack_98;
  byte *pbStack_90;
  ulonglong *puStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  ulonglong *puStack_70;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_80 = pub_1406abab0(0x10,8);
  puStack_a0 = param_1;
  if (pbStack_80 == (byte *)0x0) {
    uStack_63 = 1;
    uStack_64 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x10);
  }
  pcStack_e0 = pdb_140001020;
  puStack_e8 = param_1;
  pdb_140f60760(&puStack_130,&UNK_142f990c0,&puStack_e8);
  pbStack_78 = pbStack_128;
  puVar1 = puStack_130;
  uVar4 = CONCAT44(iStack_11c,uStack_120);
  if (iStack_11c < 0) {
    uVar13 = 0;
LAB_1406c4659:
    puStack_70 = puVar1;
    pdb_142dc7e2a(uVar13,uVar4);
    goto LAB_1406c4b5a;
  }
  if (uVar4 == 0) {
    pbVar9 = (byte *)0x1;
    puVar11 = puStack_a0;
  }
  else {
    pdb_14007ee60();
    uVar13 = 1;
    pbVar9 = pub_1406abab0(uVar4,1);
    if (pbVar9 == (byte *)0x0) goto LAB_1406c4659;
    pub_142e32760(pbVar9,pbStack_78,uVar4);
    puVar11 = puStack_a0;
  }
  puStack_a0 = puVar11;
  if (puVar1 != (ulonglong *)0x0) {
    pub_1406abac0(pbStack_78,(ulonglong)puVar1,1);
  }
  pdb_14007ee60();
  pbVar10 = pub_1406abab0(0x70,8);
  pbStack_90 = pbStack_80;
  if (pbVar10 == (byte *)0x0) {
    pbStack_78 = pbVar9;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x70);
  }
  pbVar10[0] = 0;
  pbVar10[1] = 0;
  pbVar10[2] = 0;
  pbVar10[3] = 0;
  pbVar10[4] = 0;
  pbVar10[5] = 0;
  pbVar10[6] = 0;
  pbVar10[7] = 0;
  *(undefined **)(pbVar10 + 8) = &UNK_14326ed08;
  pbVar10[0x10] = 9;
  pbVar10[0x11] = 0;
  pbVar10[0x12] = 0;
  pbVar10[0x13] = 0;
  pbVar10[0x14] = 0;
  pbVar10[0x15] = 0;
  pbVar10[0x16] = 0;
  pbVar10[0x17] = 0;
  pbVar10[0x18] = 0;
  pbVar10[0x19] = 3;
  pbVar10[0x1a] = 4;
  *(ulonglong *)(pbVar10 + 0x20) = uVar4;
  *(byte **)(pbVar10 + 0x28) = pbVar9;
  *(ulonglong *)(pbVar10 + 0x30) = uVar4;
  uVar8 = _UNK_142f99078;
  uVar4 = _DAT_142f99070;
  *(ulonglong *)(pbVar10 + 0x38) = _DAT_142f99070;
  *(ulonglong *)(pbVar10 + 0x40) = uVar8;
  pbVar10[0x48] = 2;
  pbVar10[0x49] = 0;
  pbVar10[0x50] = 2;
  pbVar10[0x51] = 0;
  pbVar10[0x58] = 1;
  uVar7 = _UNK_142f9473c;
  uVar6 = _UNK_142f94738;
  uVar5 = _UNK_142f94734;
  pbVar10[0x59] = 0;
  pbVar10[0x5a] = 0;
  pbVar10[0x5b] = 0;
  *(undefined4 *)(pbVar10 + 0x5c) = _DAT_142f94730;
  *(undefined4 *)(pbVar10 + 0x60) = uVar5;
  *(undefined4 *)(pbVar10 + 100) = uVar6;
  *(undefined4 *)(pbVar10 + 0x68) = uVar7;
  pbVar10[0x6c] = 1;
  pbVar10[0x6d] = 0;
  pbVar10[0x6e] = 0;
  *(byte **)pbStack_80 = pbVar10;
  *(undefined **)(pbStack_80 + 8) = &UNK_14326f4c8;
  puStack_98 = (ulonglong *)0x1;
  puStack_88 = (ulonglong *)0x1;
  puVar1 = (ulonglong *)puVar11[6];
  pbStack_80 = (byte *)CONCAT71(pbStack_80._1_7_,SBORROW8(0,(longlong)puVar1));
  if (!SBORROW8(0,(longlong)puVar1)) {
    pbVar9 = (byte *)puVar11[7];
    uVar2 = puVar11[8];
    if ((longlong)uVar2 < 0) {
      uVar13 = 0;
LAB_1406c4788:
      pbStack_78 = pbVar9;
      puStack_70 = puVar1;
      pdb_142dc7e2a(uVar13,uVar2);
      goto LAB_1406c4b5a;
    }
    if (uVar2 == 0) {
      pbVar10 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar13 = 1;
      pbVar10 = pub_1406abab0(uVar2,1);
      if (pbVar10 == (byte *)0x0) goto LAB_1406c4788;
      pub_142e32760(pbVar10,pbVar9,uVar2);
    }
    if (puVar1 != (ulonglong *)0x0) {
      pub_1406abac0(pbVar9,(ulonglong)puVar1,1);
    }
    pdb_14007ee60();
    puVar11 = (ulonglong *)pub_1406abab0(0x70,8);
    puVar1 = puStack_88;
    if (puVar11 == (ulonglong *)0x0) {
      pbStack_78 = pbVar10;
      puStack_70 = (ulonglong *)uVar2;
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x70);
    }
    *puVar11 = 2;
    *(undefined2 *)(puVar11 + 3) = 0x301;
    *(byte *)((longlong)puVar11 + 0x1a) = 4;
    puVar11[4] = uVar2;
    puVar11[5] = (ulonglong)pbVar10;
    puVar11[6] = uVar2;
    puVar11[7] = uVar4;
    puVar11[8] = uVar8;
    *(undefined2 *)(puVar11 + 9) = 2;
    *(undefined2 *)(puVar11 + 10) = 2;
    *(undefined4 *)(puVar11 + 0xb) = 0;
    ((byte *)((longlong)puVar11 + 0x6c))[0] = 1;
    ((byte *)((longlong)puVar11 + 0x6c))[1] = 0;
    *(byte *)((longlong)puVar11 + 0x6e) = 0;
    pbStack_128 = &UNK_14326f4c8;
    puStack_130 = puVar11;
    if (puStack_88 == puStack_98) {
      pdb_142d7e980(&puStack_98);
    }
    lVar12 = (longlong)puVar1 * 0x10;
    *(ulonglong **)(pbStack_90 + lVar12) = puVar11;
    *(undefined **)(pbStack_90 + lVar12 + 8) = &UNK_14326f4c8;
    puStack_88 = (ulonglong *)((longlong)puVar1 + 1);
    puVar11 = puStack_a0;
  }
  pbVar9 = (byte *)puVar11[3];
  bVar14 = SBORROW8(0,(longlong)pbVar9);
  if (bVar14) goto LAB_1406c49ce;
  puStack_70 = (ulonglong *)puVar11[4];
  uVar2 = puVar11[5];
  if ((longlong)uVar2 < 0) {
    uVar13 = 0;
LAB_1406c48c2:
    pbStack_78 = pbVar9;
    pdb_142dc7e2a(uVar13,uVar2);
LAB_1406c4b5a:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (uVar2 == 0) {
    pbVar10 = (byte *)0x1;
  }
  else {
    pdb_14007ee60();
    uVar13 = 1;
    pbVar10 = pub_1406abab0(uVar2,1);
    if (pbVar10 == (byte *)0x0) goto LAB_1406c48c2;
    pub_142e32760(pbVar10,puStack_70,uVar2);
  }
  if (pbVar9 != (byte *)0x0) {
    pub_1406abac0((byte *)puStack_70,(ulonglong)pbVar9,1);
  }
  pdb_14007ee60();
  puVar11 = (ulonglong *)pub_1406abab0(0x70,8);
  puVar1 = puStack_88;
  if (puVar11 == (ulonglong *)0x0) {
    pbStack_78 = pbVar10;
    puStack_70 = (ulonglong *)uVar2;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x70);
  }
  *puVar11 = 0;
  puVar11[1] = (ulonglong)&UNK_14326ed08;
  puVar11[2] = 9;
  *(undefined2 *)(puVar11 + 3) = 0x300;
  *(byte *)((longlong)puVar11 + 0x1a) = 4;
  puVar11[4] = uVar2;
  puVar11[5] = (ulonglong)pbVar10;
  puVar11[6] = uVar2;
  puVar11[7] = uVar4;
  puVar11[8] = uVar8;
  *(undefined2 *)(puVar11 + 9) = 2;
  *(undefined2 *)(puVar11 + 10) = 2;
  *(undefined4 *)(puVar11 + 0xb) = 1;
  uVar7 = _UNK_142f9908c;
  uVar6 = _UNK_142f99088;
  uVar5 = _UNK_142f99084;
  *(undefined4 *)((longlong)puVar11 + 0x5c) = _DAT_142f99080;
  *(undefined4 *)(puVar11 + 0xc) = uVar5;
  *(undefined4 *)((longlong)puVar11 + 100) = uVar6;
  *(undefined4 *)(puVar11 + 0xd) = uVar7;
  ((byte *)((longlong)puVar11 + 0x6c))[0] = 1;
  ((byte *)((longlong)puVar11 + 0x6c))[1] = 0;
  *(byte *)((longlong)puVar11 + 0x6e) = 0;
  pbStack_128 = &UNK_14326f4c8;
  puStack_130 = puVar11;
  if (puStack_88 == puStack_98) {
    pdb_142d7e980(&puStack_98);
  }
  lVar12 = (longlong)puVar1 * 0x10;
  *(ulonglong **)(pbStack_90 + lVar12) = puVar11;
  *(undefined **)(pbStack_90 + lVar12 + 8) = &UNK_14326f4c8;
  puStack_88 = (ulonglong *)((longlong)puVar1 + 1);
LAB_1406c49ce:
  uStack_d8 = puStack_88;
  puStack_e8 = puStack_98;
  pcStack_e0 = (code *)pbStack_90;
  uStack_62 = 0;
  uStack_61 = bVar14;
  pdb_140fbca80(&puStack_130,&puStack_e8);
  uStack_f8 = 0x41200000;
  puStack_e8 = puStack_130;
  pcStack_e0 = (code *)pbStack_128;
  uStack_d8 = (ulonglong *)CONCAT44(iStack_11c,uStack_120);
  uStack_d0 = uStack_118;
  uStack_cc = uStack_114;
  uStack_c8 = uStack_110;
  uStack_c4 = uStack_10c;
  uStack_c0 = uStack_108;
  uStack_bc = uStack_104;
  uStack_a8 = uStack_f0;
  uStack_b8 = uStack_100;
  uStack_b0 = 0x41200000;
  uStack_ac = uStack_f4;
  pdb_14007ee60();
  pbVar9 = pub_1406abab0(0x48,8);
  if (pbVar9 != (byte *)0x0) {
    *(undefined8 *)(pbVar9 + 0x40) = uStack_a8;
    *(undefined8 *)(pbVar9 + 0x30) = uStack_b8;
    *(ulonglong *)(pbVar9 + 0x38) = CONCAT44(uStack_ac,uStack_b0);
    *(ulonglong *)(pbVar9 + 0x20) = CONCAT44(uStack_c4,uStack_c8);
    *(ulonglong *)(pbVar9 + 0x28) = CONCAT44(uStack_bc,uStack_c0);
    *(ulonglong **)(pbVar9 + 0x10) = uStack_d8;
    *(ulonglong *)(pbVar9 + 0x18) = CONCAT44(uStack_cc,uStack_d0);
    *(ulonglong **)pbVar9 = puStack_e8;
    *(code **)(pbVar9 + 8) = pcStack_e0;
    if (*puStack_a0 != 0) {
      pub_1406abac0((byte *)puStack_a0[1],*puStack_a0,1);
    }
    return pbVar9;
  }
  puStack_70 = (ulonglong *)CONCAT71(puStack_70._1_7_,bVar14);
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x48);
}

