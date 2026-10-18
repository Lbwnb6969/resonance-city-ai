// VA 0x1400f0890, PDB extent 1199 bytes
// theme_fetcher::ThemeFetcher::new<std::path::PathBuf>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/theme-fetcher/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: theme_fetcher::ThemeFetcher::new<std::path::PathBuf>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/theme-fetcher/src/lib.rs
   Extent: 1199 */

undefined8 *
pdb_1400f0890(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  ulonglong uStack_50;
  byte *pbStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uStack_50 = *param_2;
  pbStack_48 = (byte *)param_2[1];
  uStack_308 = CONCAT71(uStack_308._1_7_,1);
  uStack_39 = 1;
  uStack_78 = param_3;
  uStack_70 = param_4;
  lVar4 = pdb_140f46c40(&uStack_308,pbStack_48,param_2[2]);
  if (lVar4 == 0) {
    pdb_1407c3490(&uStack_308);
    uStack_88 = 0x3c;
    uStack_80 = 0;
    pub_142e32760(&uStack_598,&uStack_308,0x238);
    uStack_358 = uStack_c8;
    uStack_350 = uStack_c0;
    uStack_348 = uStack_b8;
    uStack_344 = uStack_b4;
    uStack_340 = uStack_b0;
    uStack_33c = uStack_ac;
    uStack_338 = uStack_a8;
    uStack_334 = uStack_a4;
    uStack_330 = uStack_a0;
    uStack_32c = uStack_9c;
    uStack_328 = uStack_98;
    uStack_324 = uStack_94;
    uStack_320 = uStack_90;
    uStack_31c = uStack_8c;
    uStack_318 = (undefined4)uStack_88;
    uStack_314 = uStack_88._4_4_;
    uStack_310 = uStack_80;
    uStack_30c = uStack_7c;
    uStack_360 = 0;
    pdb_1407c2af0(&uStack_308,&uStack_598);
    if ((int)uStack_2f8 == 0x3b9aca01) {
      uStack_598 = uStack_308;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_142e40f88,0x2b,&uStack_598,&UNK_142e40fb8,&UNK_142e40f50);
    }
    uStack_58 = uStack_2f8;
    uStack_68 = (undefined4)uStack_308;
    uStack_64 = uStack_308._4_4_;
    uStack_60 = (undefined4)uStack_300;
    uStack_5c = uStack_300._4_4_;
    uStack_590 = 0;
    uStack_588 = 1;
    uStack_580 = 0;
    uStack_598 = 1;
    uStack_308 = 1;
    uStack_300 = 1;
    uStack_2f8 = 0;
    uStack_2f0 = 8;
    uStack_2e8 = 0;
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0x28,8);
    if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x28);
    }
    *(undefined8 *)(pbVar6 + 0x20) = uStack_2e8;
    *(undefined8 *)(pbVar6 + 0x10) = uStack_2f8;
    *(undefined8 *)(pbVar6 + 0x18) = uStack_2f0;
    *(undefined8 *)pbVar6 = uStack_308;
    *(undefined8 *)(pbVar6 + 8) = uStack_300;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[3];
    param_1[8] = param_2[2];
    param_1[9] = uVar3;
    param_1[6] = uVar1;
    param_1[7] = uVar2;
    param_1[0x13] = CONCAT44(uStack_64,uStack_68);
    param_1[0x14] = CONCAT44(uStack_5c,uStack_60);
    param_1[0x15] = uStack_58;
    param_1[10] = 0;
    param_1[0xb] = 1;
    param_1[0xc] = 0;
    *param_1 = uStack_598;
    param_1[1] = uStack_590;
    param_1[2] = uStack_588;
    param_1[3] = uStack_580;
    param_1[4] = param_3;
    param_1[5] = param_4;
    param_1[0xd] = 0x8000000000000000;
    param_1[0xe] = 0x8000000000000000;
    param_1[0x16] = 0;
    param_1[0x17] = pbVar6 + 0x10;
  }
  else {
    uStack_39 = 1;
    uVar5 = pdb_142d88fc0(lVar4);
    param_1[1] = uVar5;
    *param_1 = 2;
    if (uStack_50 != 0) {
      pub_1406abac0(pbStack_48,uStack_50,1);
    }
    pdb_1404a3e50(&uStack_78);
  }
  return param_1;
}

