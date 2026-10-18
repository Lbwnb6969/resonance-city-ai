// VA 0x140123960, PDB extent 651 bytes
// tiny_glade::tgsr_capture::join_clip_writers_on_shutdown
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::tgsr_capture::join_clip_writers_on_shutdown
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
   Extent: 651 */

ulonglong * pdb_140123960(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  undefined8 *arg1;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
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
  uVar9 = 0;
  uVar11 = uVar4 - *(ulonglong *)(lVar3 + 0x18);
  if (uVar4 < *(ulonglong *)(lVar3 + 0x18)) {
    uVar11 = uVar9;
  }
  uVar8 = uVar4 - *(ulonglong *)(lVar3 + 0x38);
  if (uVar4 < *(ulonglong *)(lVar3 + 0x38)) {
    uVar8 = uVar9;
  }
  uVar4 = *(ulonglong *)(lVar3 + 0x30);
  uVar12 = uVar4 - uVar8;
  if (uVar4 < uVar8) {
    uVar12 = uVar9;
  }
  uVar5 = *(ulonglong *)(lVar3 + 0x10);
  uVar13 = uVar5 - uVar11;
  if (uVar5 < uVar11) {
    uVar13 = uVar9;
  }
  uVar9 = *(ulonglong *)(lVar3 + 0x40);
  *puVar7 = uVar9 - (uVar13 + uVar12);
  if (uVar5 >= uVar11 && uVar5 - uVar11 != 0 || uVar4 >= uVar8 && uVar4 - uVar8 != 0) {
    *puVar7 = uVar9;
    if (_DAT_143ca30b0 == 2) {
      LOCK();
      bVar14 = DAT_143ca30c0 == 0;
      if (bVar14) {
        DAT_143ca30c0 = 1;
      }
      UNLOCK();
    }
    else {
      pdb_142d84c30(&DAT_143ca30b0,&DAT_143ca30b0);
      LOCK();
      bVar14 = DAT_143ca30c0 == 0;
      if (bVar14) {
        DAT_143ca30c0 = 1;
      }
      UNLOCK();
    }
    if (!bVar14) {
      pdb_142dbd1a0(&DAT_143ca30c0);
    }
    pdb_140e9a150(&DAT_143ca30c0);
    lStack_50 = _DAT_143ca30d8;
    _DAT_143ca30d8 = 0;
    plVar2 = _DAT_143ca30d0 + lStack_50 * 3;
    arg1 = (undefined8 *)&DAT_143ca30c8;
    puStack_58 = &DAT_143ca30c8;
    uStack_48 = 0;
    plVar10 = _DAT_143ca30d0;
    plStack_60 = plVar2;
    while (plVar10 != plVar2) {
      plVar1 = plVar10 + 3;
      plStack_68 = plVar1;
      if (*plVar10 == 0) {
        if ((longlong)plVar2 - (longlong)plVar1 != 0) {
          pdb_1404d6d30(plVar1,((ulonglong)((longlong)plVar2 - (longlong)plVar1) >> 3) *
                               -0x5555555555555555);
        }
        break;
      }
      uStack_78 = (undefined4)plVar10[1];
      uStack_74 = *(undefined4 *)((longlong)plVar10 + 0xc);
      uStack_70 = (undefined4)plVar10[2];
      uStack_6c = *(undefined4 *)((longlong)plVar10 + 0x14);
      lStack_80 = *plVar10;
      pbVar6 = (byte *)pdb_14022f670(&lStack_80);
      plVar10 = plVar1;
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
    }
    pdb_140e9a350();
    puVar7 = (ulonglong *)0x1;
    LOCK();
    bVar14 = DAT_143ca30c0 == 1;
    if (bVar14) {
      DAT_143ca30c0 = 0;
    }
    else {
      puVar7 = (ulonglong *)(ulonglong)DAT_143ca30c0;
    }
    UNLOCK();
    if (!bVar14) {
      puVar7 = (ulonglong *)pdb_142dbcef0(&DAT_143ca30c0,0);
    }
  }
  return puVar7;
}

