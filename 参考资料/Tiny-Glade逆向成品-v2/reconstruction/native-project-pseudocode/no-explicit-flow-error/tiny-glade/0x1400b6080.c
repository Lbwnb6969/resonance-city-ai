// VA 0x1400b6080, PDB extent 987 bytes
// tiny_glade::screenshot::hurry_active_screenshots_on_shutdown
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/screenshot.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::screenshot::hurry_active_screenshots_on_shutdown
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/screenshot.rs
   Extent: 987 */

ulonglong * pdb_1400b6080(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte *pbVar6;
  ulonglong *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *arg1;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  bool bVar18;
  longlong lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *plStack_68;
  longlong *plStack_60;
  undefined *puStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  byte *pbStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  puVar7 = (ulonglong *)*param_1;
  lVar3 = param_1[1];
  uVar4 = *puVar7;
  uVar11 = 0;
  uVar13 = uVar4 - *(ulonglong *)(lVar3 + 0x18);
  if (uVar4 < *(ulonglong *)(lVar3 + 0x18)) {
    uVar13 = uVar11;
  }
  uVar9 = uVar4 - *(ulonglong *)(lVar3 + 0x38);
  if (uVar4 < *(ulonglong *)(lVar3 + 0x38)) {
    uVar9 = uVar11;
  }
  uVar4 = *(ulonglong *)(lVar3 + 0x30);
  uVar15 = uVar4 - uVar9;
  if (uVar4 < uVar9) {
    uVar15 = uVar11;
  }
  bVar18 = uVar4 < uVar9 || uVar4 - uVar9 == 0;
  uVar4 = *(ulonglong *)(lVar3 + 0x10);
  uVar16 = uVar4 - uVar13;
  if (uVar4 < uVar13) {
    uVar16 = uVar11;
  }
  uVar11 = *(ulonglong *)(lVar3 + 0x40);
  *puVar7 = uVar11 - (uVar16 + uVar15);
  if ((uVar4 < uVar13 || uVar4 - uVar13 == 0) && bVar18) {
    return puVar7;
  }
  *puVar7 = uVar11;
  LOCK();
  bVar17 = DAT_143ca3038 == '\0';
  if (bVar17) {
    DAT_143ca3038 = '\x01';
  }
  UNLOCK();
  if (!bVar17) {
    pdb_142dbd1a0(&DAT_143ca3038,CONCAT71((int7)(uVar9 >> 8),bVar18),1000000000);
  }
  pdb_140e9a150(&DAT_143ca3038);
  lVar3 = _DAT_143ca3048;
  if (_DAT_143ca3050 != 0) {
    lVar14 = _DAT_143ca3050 * 0x78;
    uVar4 = lVar14 - 0x78;
    uVar8 = (uint)(uVar4 / 0x78);
    lVar5 = _DAT_143ca3048;
    if ((~uVar8 & 7) != 0) {
      lVar10 = -(ulonglong)(uVar8 + 1 & 7);
      do {
        *(undefined4 *)(lVar5 + 0x70) = 1;
        lVar5 = lVar5 + 0x78;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0);
    }
    if (0x347 < uVar4) {
      do {
        *(undefined4 *)(lVar5 + 0x70) = 1;
        *(undefined4 *)(lVar5 + 0xe8) = 1;
        *(undefined4 *)(lVar5 + 0x160) = 1;
        *(undefined4 *)(lVar5 + 0x1d8) = 1;
        *(undefined4 *)(lVar5 + 0x250) = 1;
        *(undefined4 *)(lVar5 + 0x2c8) = 1;
        *(undefined4 *)(lVar5 + 0x340) = 1;
        *(undefined4 *)(lVar5 + 0x3b8) = 1;
        lVar5 = lVar5 + 0x3c0;
      } while (lVar5 != lVar3 + lVar14);
    }
  }
  pdb_140e9a350();
  LOCK();
  bVar18 = DAT_143ca3038 == '\x01';
  if (bVar18) {
    DAT_143ca3038 = '\0';
  }
  UNLOCK();
  if (!bVar18) {
    pdb_142dbcef0(&DAT_143ca3038,0);
  }
  if (_DAT_143ca3000 == 2) {
    LOCK();
    bVar18 = DAT_143ca3010 == 0;
    if (bVar18) {
      DAT_143ca3010 = 1;
    }
    UNLOCK();
  }
  else {
    pdb_142d84c30(&DAT_143ca3000,&DAT_143ca3000);
    LOCK();
    bVar18 = DAT_143ca3010 == 0;
    if (bVar18) {
      DAT_143ca3010 = 1;
    }
    UNLOCK();
  }
  if (!bVar18) {
    pdb_142dbd1a0(&DAT_143ca3010);
  }
  pdb_140e9a150(&DAT_143ca3010);
  lStack_50 = _DAT_143ca3028;
  _DAT_143ca3028 = 0;
  plVar2 = _DAT_143ca3020 + lStack_50 * 3;
  arg1 = (undefined8 *)&DAT_143ca3018;
  puStack_58 = &DAT_143ca3018;
  uStack_48 = 0;
  plVar12 = _DAT_143ca3020;
  plStack_60 = plVar2;
  do {
    if (plVar12 == plVar2) {
LAB_1400b6310:
      pdb_140e9a350();
      puVar7 = (ulonglong *)0x1;
      LOCK();
      bVar18 = DAT_143ca3010 == 1;
      if (bVar18) {
        DAT_143ca3010 = 0;
      }
      else {
        puVar7 = (ulonglong *)(ulonglong)DAT_143ca3010;
      }
      UNLOCK();
      if (!bVar18) {
        puVar7 = (ulonglong *)pdb_142dbcef0(&DAT_143ca3010,0);
      }
      return puVar7;
    }
    plVar1 = plVar12 + 3;
    plStack_68 = plVar1;
    if (*plVar12 == 0) {
      if ((longlong)plVar2 - (longlong)plVar1 != 0) {
        pdb_1404d6d30(plVar1,((ulonglong)((longlong)plVar2 - (longlong)plVar1) >> 3) *
                             -0x5555555555555555);
      }
      goto LAB_1400b6310;
    }
    uStack_78 = (undefined4)plVar12[1];
    uStack_74 = *(undefined4 *)((longlong)plVar12 + 0xc);
    uStack_70 = (undefined4)plVar12[2];
    uStack_6c = *(undefined4 *)((longlong)plVar12 + 0x14);
    lStack_80 = *plVar12;
    pbVar6 = (byte *)pdb_14022f670(&lStack_80);
    plVar12 = plVar1;
    if (pbVar6 != (byte *)0x0) {
      pbStack_40 = pbVar6;
      puStack_38 = arg1;
      if ((code *)*arg1 != (code *)0x0) {
        (*(code *)*arg1)(pbVar6);
      }
      arg1 = (undefined8 *)puStack_38[1];
      if (arg1 != (undefined8 *)0x0) {
        pub_1406abac0(pbStack_40,(ulonglong)arg1,puStack_38[2]);
      }
    }
  } while( true );
}

