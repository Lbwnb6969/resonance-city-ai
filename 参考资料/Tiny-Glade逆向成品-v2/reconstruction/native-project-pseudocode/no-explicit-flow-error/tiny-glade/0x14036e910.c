// VA 0x14036e910, PDB extent 2938 bytes
// tiny_glade::crash_pickup::server::impl$1::on_minidump_created
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/server.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::crash_pickup::server::impl$1::on_minidump_created
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/server.rs
   Extent: 2938 */

undefined8 pdb_14036e910(longlong param_1,longlong *param_2)

{
  undefined8 **ppuVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  undefined8 **ppuVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 *puStack_530;
  undefined8 **ppuStack_528;
  longlong lStack_520;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  uint uStack_308;
  undefined4 uStack_304;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  undefined8 **ppuStack_2d0;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 **ppuStack_70;
  longlong lStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *plStack_58;
  undefined8 **ppuStack_50;
  undefined8 *puStack_48;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  puVar5 = _DAT_143ca8e90;
  uStack_38 = 0xfffffffffffffffe;
  lVar3 = *param_2;
  plStack_58 = param_2;
  if (2 < *_DAT_143ca8e90) {
    uStack_d8 = CONCAT71(uStack_d8._1_7_,!SBORROW8(0,lVar3));
    puStack_530 = &uStack_d8;
    ppuStack_528 = (undefined8 **)pdb_140f72cf0;
    uStack_328 = (undefined8 *)0x0;
    uStack_320 = (undefined8 **)&UNK_142f44078;
    uStack_318 = 0x20;
    uStack_314 = 0;
    uStack_310 = 0;
    uStack_30c = 0;
    uStack_308 = 0x42f4404b;
    uStack_304 = 1;
    uStack_300 = (undefined8 **)0x2c;
    uStack_2f8 = 3;
    uStack_2f0 = &UNK_142f44078;
    uStack_2e8 = 0x20;
    uStack_2e0 = 0x9700000001;
    puStack_2d8 = &UNK_142f44548;
    ppuStack_2d0 = &puStack_530;
    uStack_3e = 1;
    pdb_140f332f0(&uStack_3c,&uStack_328);
  }
  if (SBORROW8(0,lVar3)) goto LAB_14036f0d9;
  uStack_98 = (undefined4)*plStack_58;
  uStack_94 = *(undefined4 *)((longlong)plStack_58 + 4);
  uStack_90 = (undefined4)plStack_58[1];
  uStack_8c = *(undefined4 *)((longlong)plStack_58 + 0xc);
  uStack_88 = (undefined4)plStack_58[2];
  uStack_84 = *(undefined4 *)((longlong)plStack_58 + 0x14);
  uStack_80 = (undefined4)plStack_58[3];
  uStack_7c = *(undefined4 *)((longlong)plStack_58 + 0x1c);
  uStack_78 = (undefined8 *)plStack_58[4];
  ppuStack_70 = (undefined8 **)plStack_58[5];
  lStack_68 = plStack_58[6];
  uStack_60 = (undefined4)plStack_58[7];
  uStack_5c = *(undefined4 *)((longlong)plStack_58 + 0x3c);
  if (2 < *puVar5) {
    uStack_d8 = CONCAT71(uStack_d8._1_7_,!SBORROW8(0,(longlong)uStack_78));
    puStack_530 = &uStack_d8;
    ppuStack_528 = (undefined8 **)pdb_140f72cf0;
    uStack_328 = (undefined8 *)0x0;
    uStack_320 = (undefined8 **)&UNK_142f44078;
    uStack_318 = 0x20;
    uStack_314 = 0;
    uStack_310 = 0;
    uStack_30c = 0;
    uStack_308 = 0x42f4404b;
    uStack_304 = 1;
    uStack_300 = (undefined8 **)0x2c;
    uStack_2f8 = 3;
    uStack_2f0 = &UNK_142f44078;
    uStack_2e8 = 0x20;
    uStack_2e0 = 0x9a00000001;
    puStack_2d8 = &UNK_142f44570;
    ppuStack_2d0 = &puStack_530;
    uStack_39 = 1;
    uStack_3a = 1;
    pdb_140f332f0(&uStack_3c,&uStack_328);
  }
  ppuVar7 = ppuStack_70;
  puVar9 = uStack_78;
  lVar6 = lStack_68;
  if (SBORROW8(0,(longlong)uStack_78)) {
    if (2 < *puVar5) {
      puStack_530 = (undefined8 *)&uStack_98;
      ppuStack_528 = (undefined8 **)pdb_140f58250;
      uStack_328 = (undefined8 *)0x0;
      uStack_320 = (undefined8 **)&UNK_142f44078;
      uStack_318 = 0x20;
      uStack_314 = 0;
      uStack_310 = 0;
      uStack_30c = 0;
      uStack_308 = 0x42f4404b;
      uStack_304 = 1;
      uStack_300 = (undefined8 **)0x2c;
      uStack_2f8 = 3;
      uStack_2f0 = &UNK_142f44078;
      uStack_2e8 = 0x20;
      uStack_2e0 = 0xa100000001;
      puStack_2d8 = &UNK_142f445af;
      ppuStack_2d0 = &puStack_530;
      uStack_39 = 0;
      uStack_3a = 1;
      pdb_140f332f0(&uStack_3c,&uStack_328);
    }
    puStack_530 = (undefined8 *)0x0;
    ppuStack_528 = (undefined8 **)0x1;
    lStack_520 = 0;
    uStack_328 = (undefined8 *)((ulonglong)uStack_328 & 0xffffffff00000000);
    uStack_320 = (undefined8 **)0x0;
    uStack_318 = 7;
    uStack_314 = 0;
    uStack_30c = 0;
    uStack_308 = uStack_308 & 0xffffff00;
    uStack_310 = 1;
    uVar8 = CONCAT44(uStack_8c,uStack_90);
    uStack_3b = 1;
    lVar6 = pdb_140f4a2a0(&uStack_328,uVar8,CONCAT44(uStack_84,uStack_88));
    if (lVar6 == 1) {
      uStack_328 = (undefined8 *)uVar8;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_142f444f8,0x2b,&uStack_328,&UNK_142f444d8,&UNK_142f445d8);
    }
    uStack_3f = 1;
    ppuVar7 = &puStack_530;
    uStack_d8 = uVar8;
    lVar6 = pdb_140f5aaf0(&uStack_d8);
    if (lVar6 == 1) {
      uStack_328 = (undefined8 *)0x8000000000000000;
      uStack_320 = ppuVar7;
      if (puStack_530 != (undefined8 *)0x0) {
        pub_1406abac0((byte *)ppuStack_528,(ulonglong)puStack_530,1);
      }
LAB_14036ed34:
      uStack_3f = 0;
      pdb_1404b38e0(&uStack_320);
      puVar9 = (undefined8 *)0x8000000000000000;
      lVar6 = -lVar3;
    }
    else {
      uStack_328 = puStack_530;
      uStack_320 = ppuStack_528;
      uStack_318 = (undefined4)lStack_520;
      uStack_314 = (undefined4)((ulonglong)lStack_520 >> 0x20);
      if (SBORROW8(0,(longlong)puStack_530)) goto LAB_14036ed34;
      ppuStack_50 = ppuStack_528;
      puVar9 = puStack_530;
      lVar6 = lStack_520;
    }
    CloseHandle(uStack_d8);
    ppuVar7 = ppuStack_50;
    if (2 < *puVar5) {
      uStack_328 = (undefined8 *)0x0;
      uStack_320 = (undefined8 **)&UNK_142f44078;
      uStack_318 = 0x20;
      uStack_314 = 0;
      uStack_310 = 0;
      uStack_30c = 0;
      uStack_308 = 0x42f4404b;
      uStack_304 = 1;
      uStack_300 = (undefined8 **)0x2c;
      uStack_2f8 = 3;
      uStack_2f0 = &UNK_142f44078;
      uStack_2e8 = 0x20;
      uStack_2e0 = 0xaa00000001;
      puStack_2d8 = &UNK_142f445f0;
      ppuStack_2d0 = (undefined8 **)0x4f;
      puStack_48 = puVar9;
      pdb_140f332f0(&uStack_3c,&uStack_328);
      ppuVar7 = ppuStack_50;
      puVar9 = puStack_48;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  ppuVar1 = (undefined8 **)(lVar3 + 0x10);
  LOCK();
  bVar10 = *(char *)(lVar3 + 0x10) == '\0';
  if (bVar10) {
    *(char *)(lVar3 + 0x10) = '\x01';
  }
  UNLOCK();
  uStack_78 = puVar9;
  ppuStack_70 = ppuVar7;
  lStack_68 = lVar6;
  if (!bVar10) {
    uStack_39 = 1;
    uStack_3a = 1;
    pdb_142dbd1a0(ppuVar1);
  }
  uStack_39 = 1;
  uStack_3a = 1;
  pdb_140e9a150(ppuVar1);
  ppuStack_50 = ppuVar1;
  if (SBORROW8(0,*(longlong *)(lVar3 + 0x18))) {
    uStack_d8 = 0x8000000000000001;
    pdb_140573110(&puStack_530);
    uStack_f0 = uStack_a8;
    uStack_ec = uStack_a4;
    uStack_e8 = uStack_a0;
    uStack_e4 = uStack_9c;
    uStack_100 = uStack_b8;
    uStack_fc = uStack_b4;
    uStack_f8 = uStack_b0;
    uStack_f4 = uStack_ac;
    uStack_110 = uStack_c8;
    uStack_10c = uStack_c4;
    uStack_108 = uStack_c0;
    uStack_104 = uStack_bc;
    uStack_120 = (undefined4)uStack_d8;
    uStack_11c = uStack_d8._4_4_;
    uStack_118 = uStack_d0;
    uStack_114 = uStack_cc;
    pub_142e32760(&uStack_328,&puStack_530,0x208);
    pub_142e32760(lVar3 + 0x18,&uStack_328,0x248);
  }
  uStack_2f8 = lStack_68;
  uStack_2f0 = (undefined *)CONCAT44(uStack_5c,uStack_60);
  uStack_308 = (uint)uStack_78;
  uStack_304 = uStack_78._4_4_;
  uStack_300 = ppuStack_70;
  uStack_318 = uStack_88;
  uStack_314 = uStack_84;
  uStack_310 = uStack_80;
  uStack_30c = uStack_7c;
  uStack_328 = (undefined8 *)CONCAT44(uStack_94,uStack_98);
  uStack_320 = (undefined8 **)CONCAT44(uStack_8c,uStack_90);
  puStack_48 = (undefined8 *)(lVar3 + 0x220);
  uVar4 = *(ulonglong *)(lVar3 + 0x220);
  if (SBORROW8(0,uVar4)) {
    pdb_1404d45b0(lVar3 + 0x228);
  }
  else if (uVar4 != 0x8000000000000001) {
    CloseHandle(*(undefined8 *)(lVar3 + 600));
    if (uVar4 != 0) {
      pub_1406abac0(*(byte **)(lVar3 + 0x228),uVar4,1);
    }
    uVar4 = *(ulonglong *)(lVar3 + 0x240);
    if ((!SBORROW8(0,uVar4)) && (uVar4 != 0)) {
      pub_1406abac0(*(byte **)(lVar3 + 0x248),uVar4,1);
    }
  }
  *(undefined4 *)(puStack_48 + 6) = (undefined4)uStack_2f8;
  *(undefined4 *)((longlong)puStack_48 + 0x34) = uStack_2f8._4_4_;
  *(undefined4 *)(puStack_48 + 7) = (undefined4)uStack_2f0;
  *(undefined4 *)((longlong)puStack_48 + 0x3c) = uStack_2f0._4_4_;
  *(uint *)(puStack_48 + 4) = uStack_308;
  *(undefined4 *)((longlong)puStack_48 + 0x24) = uStack_304;
  *(undefined4 *)(puStack_48 + 5) = (undefined4)uStack_300;
  *(undefined4 *)((longlong)puStack_48 + 0x2c) = uStack_300._4_4_;
  *(undefined4 *)(puStack_48 + 2) = uStack_318;
  *(undefined4 *)((longlong)puStack_48 + 0x14) = uStack_314;
  *(undefined4 *)(puStack_48 + 3) = uStack_310;
  *(undefined4 *)((longlong)puStack_48 + 0x1c) = uStack_30c;
  *(undefined4 *)puStack_48 = (undefined4)uStack_328;
  *(undefined4 *)((longlong)puStack_48 + 4) = uStack_328._4_4_;
  *(undefined4 *)(puStack_48 + 1) = (undefined4)uStack_320;
  *(undefined4 *)((longlong)puStack_48 + 0xc) = uStack_320._4_4_;
  if (2 < *puVar5) {
    uStack_328 = (undefined8 *)0x0;
    uStack_320 = (undefined8 **)&UNK_142f44078;
    uStack_318 = 0x20;
    uStack_314 = 0;
    uStack_310 = 0;
    uStack_30c = 0;
    uStack_308 = 0x42f4404b;
    uStack_304 = 1;
    uStack_300 = (undefined8 **)0x2c;
    uStack_2f8 = 3;
    uStack_2f0 = &UNK_142f44078;
    uStack_2e8 = 0x20;
    uStack_2e0 = 0xb400000001;
    puStack_2d8 = &UNK_142f44590;
    ppuStack_2d0 = (undefined8 **)0x3f;
    uStack_3d = 0;
    pdb_140f332f0(&uStack_3c,&uStack_328);
  }
  ppuVar7 = ppuStack_50;
  uStack_39 = 0;
  uStack_3a = 0;
  pdb_140e9a350();
  LOCK();
  cVar2 = *(char *)ppuVar7;
  if (cVar2 == '\x01') {
    *(char *)ppuVar7 = '\0';
  }
  UNLOCK();
  if (cVar2 != '\x01') {
    uStack_39 = 0;
    uStack_3a = 0;
    pdb_142dbcef0(ppuVar7,0);
  }
  if (!SBORROW8(0,*plStack_58)) {
    return 1;
  }
LAB_14036f0d9:
  pdb_14036cb70(plStack_58);
  return 1;
}

