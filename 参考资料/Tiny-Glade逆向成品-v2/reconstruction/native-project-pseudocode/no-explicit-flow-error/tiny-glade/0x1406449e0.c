// VA 0x1406449e0, PDB extent 1717 bytes
// tiny_glade::hang_watchdog::hang_watchdog
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/hang_watchdog.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::hang_watchdog::hang_watchdog
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/hang_watchdog.rs
   Extent: 1717 */

void pdb_1406449e0(void)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  int *piVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined **ppuVar12;
  longlong lVar13;
  int iVar14;
  undefined8 *puVar15;
  bool bVar16;
  bool bVar17;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  undefined8 *puStack_108;
  code *pcStack_100;
  undefined8 **ppuStack_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 **ppuStack_d8;
  code *pcStack_d0;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 **ppuStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  ppuVar12 = (undefined **)0x0;
  pdb_140723e80(&iStack_c8);
  if (iStack_c8 == 4) {
    if (*_DAT_143ca8e90 < 3) goto LAB_140644b4c;
    uStack_80 = 3;
    uStack_68 = 0xe00000001;
    puStack_60 = &UNK_142f8c330;
    ppuStack_58 = (undefined8 **)0x5d;
  }
  else {
    ppuStack_d8 = ppuStack_b8;
    uStack_e8 = (longlong *)CONCAT44(uStack_c4,iStack_c8);
    uStack_e0 = (code *)CONCAT44(uStack_bc,uStack_c0);
    if (*_DAT_143ca8e90 == 0) goto LAB_140644b4c;
    puStack_108 = &uStack_e8;
    pcStack_100 = pdb_1406497d0;
    uStack_80 = 1;
    uStack_68 = 0x1100000001;
    puStack_60 = &UNK_142f8c39e;
    ppuStack_58 = &puStack_108;
  }
  uStack_70 = 0x19;
  puStack_78 = &UNK_142f8c385;
  uStack_88 = 0x26;
  puStack_90 = &UNK_142f8c35e;
  uStack_98 = 0;
  puStack_a0 = (undefined *)0x19;
  puStack_a8 = &UNK_142f8c385;
  puStack_b0 = (undefined *)0x0;
  ppuVar12 = &puStack_b0;
  pdb_140f332f0(&uStack_49);
LAB_140644b4c:
  piVar5 = _DAT_143ca4440;
  iVar14 = *_DAT_143ca4440;
  uVar8 = pdb_140f3c9d0();
  uVar9 = pdb_140f5a1d0(uVar8);
  while( true ) {
    uVar11 = 0;
    pdb_140f502d0(0x14);
    uVar10 = pdb_140f3c9d0();
    bVar16 = uVar10 < uVar9;
    if (uVar10 == uVar9) {
      bVar16 = uVar11 < (uint)ppuVar12;
    }
    if (bVar16 == true) {
      do {
        uVar11 = 0;
        pdb_140f502d0(1);
        uVar10 = pdb_140f3c9d0();
        bVar17 = uVar10 < uVar9;
        if (uVar10 == uVar9) {
          bVar17 = uVar11 < (uint)ppuVar12;
        }
        bVar16 = false;
      } while (bVar17);
    }
    ppuVar12 = (undefined **)(ulonglong)bVar16;
    pdb_140e98eb0(&iStack_c8);
    puVar6 = _DAT_143ca8e90;
    ppuStack_f8 = ppuStack_b8;
    if (ppuStack_b8 != (undefined8 **)0x0) break;
    iVar1 = *piVar5;
    if (iVar1 == iVar14) {
      if (*_DAT_143ca8e90 != 0) {
        uStack_e8 = (longlong *)&UNK_142f8c458;
        uStack_e0 = pdb_140f72840;
        puStack_b0 = (undefined *)0x0;
        puStack_a8 = &UNK_142f8c385;
        puStack_a0 = (undefined *)0x19;
        uStack_98 = 0;
        puStack_90 = &UNK_142f8c35e;
        uStack_88 = 0x26;
        uStack_80 = 1;
        puStack_78 = &UNK_142f8c385;
        uStack_70 = 0x19;
        uStack_68 = 0x3700000001;
        puStack_60 = &UNK_142f8c468;
        ppuStack_58 = (undefined8 **)&uStack_e8;
        pdb_140f332f0(&uStack_49,&puStack_b0);
      }
      if (2 < *puVar6) {
        puStack_b0 = (undefined *)0x0;
        puStack_a8 = &UNK_142f8c385;
        puStack_a0 = (undefined *)0x19;
        uStack_98 = 0;
        puStack_90 = &UNK_142f8c35e;
        uStack_88 = 0x26;
        uStack_80 = 3;
        puStack_78 = &UNK_142f8c385;
        uStack_70 = 0x19;
        uStack_68 = 0x5800000001;
        puStack_60 = &UNK_142f8c3e2;
        ppuStack_58 = (undefined8 **)0x4f;
        pdb_140f332f0(&uStack_49,&puStack_b0);
      }
      uRam0000000100000041 = 1;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(7);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar8 = pdb_140f3c9d0();
    uVar9 = pdb_140f5a1d0(uVar8);
    iVar14 = iVar1;
    if (CONCAT44(uStack_c4,iStack_c8) != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_bc,uStack_c0),CONCAT44(uStack_c4,iStack_c8) * 0x18,8);
    }
  }
  if (*_DAT_143ca8e90 != 0) {
    puStack_b0 = (undefined *)0x0;
    puStack_a8 = &UNK_142f8c385;
    puStack_a0 = (undefined *)0x19;
    uStack_98 = 0;
    puStack_90 = &UNK_142f8c35e;
    uStack_88 = 0x26;
    uStack_80 = 1;
    puStack_78 = &UNK_142f8c385;
    uStack_70 = 0x19;
    uStack_68 = 0x2500000001;
    puStack_60 = &UNK_142f8c3d1;
    ppuStack_58 = (undefined8 **)0x23;
    pdb_140f332f0(&uStack_49,&puStack_b0);
  }
  lStack_110 = (longlong)ppuStack_f8 * 0x18 + CONCAT44(uStack_bc,uStack_c0);
  lStack_f0 = 0;
  lVar13 = CONCAT44(uStack_bc,uStack_c0);
  while (lVar13 != lStack_110) {
    lStack_120 = lStack_f0;
    if (*puVar6 != 0) {
      uStack_e8 = &lStack_120;
      uStack_e0 = pdb_140f72a40;
      puStack_b0 = (undefined *)0x0;
      puStack_a8 = &UNK_142f8c385;
      puStack_a0 = (undefined *)0x19;
      uStack_98 = 0;
      puStack_90 = &UNK_142f8c35e;
      uStack_88 = 0x26;
      uStack_80 = 1;
      puStack_78 = &UNK_142f8c385;
      uStack_70 = 0x19;
      uStack_68 = 0x2700000001;
      puStack_60 = &UNK_142f8c428;
      ppuStack_58 = (undefined8 **)&uStack_e8;
      pdb_140f332f0(&uStack_49,&puStack_b0);
    }
    lStack_118 = lVar13 + 0x18;
    lStack_f0 = lStack_f0 + 1;
    puVar2 = *(undefined8 **)(lVar13 + 8);
    lVar3 = *(longlong *)(lVar13 + 0x10);
    puVar7 = puVar2;
    while (puVar15 = puVar7, lVar13 = lStack_118, puVar15 != puVar2 + lVar3 * 4) {
      puVar7 = puVar15 + 4;
      if (*puVar6 != 0) {
        lStack_128 = puVar15[3];
        uStack_e8 = &lStack_128;
        uStack_e0 = pdb_1406449a0;
        ppuStack_d8 = &puStack_108;
        pcStack_d0 = pdb_1400e7ba0;
        puStack_b0 = (undefined *)0x0;
        puStack_a8 = &UNK_142f8c385;
        puStack_a0 = (undefined *)0x19;
        uStack_98 = 0;
        puStack_90 = &UNK_142f8c35e;
        uStack_88 = 0x26;
        uStack_80 = 1;
        puStack_78 = &UNK_142f8c385;
        uStack_70 = 0x19;
        uStack_68 = 0x2900000001;
        puStack_60 = &UNK_142f8c43b;
        puStack_108 = puVar15;
        ppuStack_58 = (undefined8 **)&uStack_e8;
        pdb_140f332f0(&uStack_49,&puStack_b0);
      }
    }
  }
  if (2 < *puVar6) {
    puStack_b0 = &UNK_142f8c385;
    puStack_a8 = (undefined *)0x19;
    puStack_a0 = &UNK_142f8c385;
    uStack_98 = 0x19;
    puStack_90 = &UNK_142f8c410;
    pdb_1400c9be0(&UNK_142f8c3e2,0x4f,3,&puStack_b0);
  }
  uRam0000000100000041 = 1;
  pcVar4 = (code *)swi(0x29);
  (*pcVar4)(7);
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

