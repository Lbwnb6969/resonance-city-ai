// VA 0x140108c30, PDB extent 1453 bytes
// tiny_glade::asset_usage_snapshot::dump_asset_usage_snapshot
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/asset_usage_snapshot.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::asset_usage_snapshot::dump_asset_usage_snapshot
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/asset_usage_snapshot.rs
   Extent: 1453 */

longlong pdb_140108c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulonglong *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined1 auStack_128 [8];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  ulonglong uStack_118;
  undefined1 *puStack_110;
  longlong lStack_108;
  ulonglong uStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  ulonglong uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  longlong lStack_b0;
  ulonglong uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  ulonglong uStack_90;
  ulonglong uStack_80;
  byte *pbStack_78;
  undefined8 uStack_70;
  byte *pbStack_68;
  undefined1 uStack_59;
  ulonglong uStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_160 = param_3;
  uStack_158 = param_4;
  pbStack_68 = (byte *)param_4;
  pdb_140a2e880(&puStack_f8,param_1);
  puVar4 = puStack_f8;
  puStack_e0 = puStack_f0 + (longlong)puStack_e8 * 0x30;
  puStack_f8 = puStack_f0;
  puStack_e8 = puVar4;
  pdb_1402255f0(&puStack_110,&puStack_f8);
  uVar3 = uStack_100;
  lVar7 = lStack_108;
  puStack_f8 = &uStack_59;
  if (1 < uStack_100) {
    if (uStack_100 < 0x15) {
      uStack_58 = uStack_100 * 0x30 + lStack_108;
      lVar10 = lStack_108 + 0x30;
      do {
        uStack_4a = 1;
        pdb_1400de900(lVar7,lVar10);
        lVar10 = lVar10 + 0x30;
      } while (lVar10 != uStack_58);
    }
    else {
      uStack_4a = 1;
      pdb_140224800(lStack_108,uStack_100,&puStack_f8);
    }
  }
  uStack_4a = 1;
  pdb_140a2c5c0(&puStack_f8,param_2);
  puVar4 = puStack_f8;
  puStack_e0 = puStack_f0 + (longlong)puStack_e8 * 0x50;
  puStack_f8 = puStack_f0;
  puStack_e8 = puVar4;
  uStack_4a = 1;
  pdb_140225a50(auStack_128,&puStack_f8);
  uVar2 = uStack_118;
  lVar7 = CONCAT44(uStack_11c,uStack_120);
  puStack_f8 = &uStack_59;
  if (1 < uStack_118) {
    if (uStack_118 < 0x15) {
      uStack_58 = uStack_118 * 0x50 + lVar7;
      lVar10 = lVar7 + 0x50;
      do {
        uStack_49 = 1;
        pdb_1400dec70(lVar7,lVar10);
        lVar10 = lVar10 + 0x50;
      } while (lVar10 != uStack_58);
    }
    else {
      uStack_49 = 1;
      pdb_140224990(lVar7,uStack_118,&puStack_f8);
    }
  }
  uStack_49 = 1;
  uVar6 = pdb_140a1a890(param_1);
  uStack_49 = 1;
  lVar7 = pdb_140a1a890(param_1);
  uStack_49 = 1;
  uVar8 = pdb_140a2b170(param_2);
  uStack_49 = 1;
  lStack_98 = pdb_140a2b170(param_2);
  pbVar5 = pbStack_68;
  lStack_b0 = lVar7 - uVar3;
  lStack_98 = lStack_98 - uVar2;
  puStack_e8 = (undefined1 *)uStack_100;
  puStack_f8 = puStack_110;
  puStack_f0 = (undefined1 *)lStack_108;
  uStack_d8 = uStack_120;
  uStack_d4 = uStack_11c;
  uStack_d0 = uStack_118;
  puStack_c8 = &UNK_142e44a6b;
  uStack_c0 = 0xbe;
  uStack_a8 = uVar3;
  uStack_90 = uVar2;
  pbVar9 = pbStack_68;
  uStack_b8 = uVar6;
  uStack_a0 = uVar8;
  lVar7 = pdb_140f3eaf0(param_3);
  if (lVar7 != 0) {
    puStack_150 = (ulonglong *)CONCAT71(puStack_150._1_7_,1);
    lStack_170 = lVar7;
    uStack_168 = pbVar9;
    uVar6 = pdb_140f46c40(&puStack_150,lVar7,pbVar9);
    lVar7 = pdb_1401647b0(uVar6,&lStack_170);
    if (lVar7 != 0) goto LAB_140108eda;
  }
  pdb_14007ee60();
  pbStack_78 = pub_1406abab0(0x80,1);
  if (pbStack_78 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x80);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uStack_80 = 0x80;
  uStack_70 = 0;
  puStack_150 = &uStack_80;
  puStack_148 = &UNK_142e44a69;
  uStack_140 = 2;
  uStack_138 = 0;
  uStack_130 = 0;
  pbVar9 = (byte *)pdb_14016b4f0(&puStack_f8,&puStack_150);
  if (pbVar9 == (byte *)0x0) {
    pbVar9 = pbStack_78;
    if (!SBORROW8(0,uStack_80)) {
      uStack_58 = uStack_80;
      pbStack_68 = pbStack_78;
      uVar6 = pdb_140f561c0(param_3,pbVar5,pbStack_78,uStack_70);
      if (uStack_58 != 0) {
        pub_1406abac0(pbStack_68,uStack_58,1);
      }
      lVar7 = pdb_140165490(uVar6,&uStack_160);
      uStack_49 = 0;
      pdb_1404d0890(&puStack_f8);
      return lVar7;
    }
  }
  else if (uStack_80 != 0) {
    pub_1406abac0(pbStack_78,uStack_80,1);
  }
  lVar7 = pdb_142d88d30(pbVar9);
LAB_140108eda:
  uStack_49 = 0;
  pdb_1404d0890(&puStack_f8);
  return lVar7;
}

