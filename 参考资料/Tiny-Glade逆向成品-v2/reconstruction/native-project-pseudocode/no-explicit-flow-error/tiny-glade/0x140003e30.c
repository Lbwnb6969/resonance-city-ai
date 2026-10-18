// VA 0x140003e30, PDB extent 3520 bytes
// tiny_glade::vulkan_config_main::run_vulkan_configuration_app
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/vulkan_config_main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::vulkan_config_main::run_vulkan_configuration_app
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/vulkan_config_main.rs
   Extent: 3520 */

void pdb_140003e30(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  ulonglong arg1;
  code *pcVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  longlong lVar13;
  byte *pbVar14;
  undefined4 uVar15;
  byte *pbVar16;
  longlong lVar17;
  undefined1 auStack_3d0 [24];
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  byte *pbStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined1 auStack_2dc [12];
  undefined4 uStack_2d0;
  undefined4 uStack_2b8;
  undefined4 uStack_2a0;
  undefined4 uStack_288;
  undefined4 uStack_270;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined8 uStack_24c;
  undefined2 uStack_244;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined1 uStack_1d4;
  undefined1 uStack_1d3;
  undefined1 uStack_1d2;
  undefined1 uStack_1d1;
  undefined8 uStack_1d0;
  byte *pbStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1ac [156];
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
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_88;
  undefined8 *puStack_80;
  byte *pbStack_78;
  longlong lStack_70;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_c8 = (byte *)0x0;
  uStack_b8 = CONCAT22(uStack_b8._2_2_,0x100);
  LOCK();
  cVar2 = *_DAT_143ca3878;
  *_DAT_143ca3878 = '\x01';
  UNLOCK();
  lStack_70 = param_1;
  if (cVar2 == '\0') {
    pdb_14010b300(&uStack_1f8,&uStack_c8);
    pbVar14 = pbStack_1c8;
    uVar15 = uStack_1f0;
    uVar9 = uStack_1f8;
    uStack_328 = CONCAT44(uStack_1e8,uStack_1ec);
    uStack_320 = CONCAT44(uStack_1e0,uStack_1e4);
    uStack_310 = CONCAT13(uStack_1d1,CONCAT12(uStack_1d2,CONCAT11(uStack_1d3,uStack_1d4)));
    uStack_318 = uStack_1dc;
    uStack_314 = uStack_1d8;
    uStack_30c = (undefined4)uStack_1d0;
    _uStack_308 = CONCAT44(uStack_304,uStack_1d0._4_4_);
    pbStack_78 = uStack_c8;
    if (uStack_c8 != (byte *)0x0) {
      puStack_80 = (undefined8 *)CONCAT44(uStack_bc,uStack_c0);
      if ((code *)*puStack_80 != (code *)0x0) {
        (*(code *)*puStack_80)(uStack_c8);
      }
      if (puStack_80[1] != 0) {
        pub_1406abac0(pbStack_78,puStack_80[1],puStack_80[2]);
      }
    }
    if ((int)uVar9 != 3) {
      uStack_360 = uVar9;
      uStack_358 = uVar15;
      uStack_354 = (int)uStack_328;
      uStack_350 = uStack_328._4_4_;
      uStack_34c = (undefined4)uStack_320;
      uStack_348 = uStack_320._4_4_;
      uStack_344 = uStack_318;
      uStack_340 = uStack_314;
      uStack_33c = uStack_310;
      uStack_338 = uStack_30c;
      uStack_334 = uStack_308;
      pbStack_330 = pbVar14;
      pdb_140e12c30(0);
      pdb_140e12c40(&uStack_328);
      if ((int)uStack_328 != 0x18) {
        uStack_1b8 = uStack_2e8;
        uStack_1d8 = uStack_308;
        uStack_1d4 = (undefined1)((ulonglong)_uStack_308 >> 0x20);
        uStack_1d3 = (undefined1)((ulonglong)_uStack_308 >> 0x28);
        uStack_1d2 = (undefined1)((ulonglong)_uStack_308 >> 0x30);
        uStack_1d1 = (undefined1)((ulonglong)_uStack_308 >> 0x38);
        uStack_1e8 = uStack_318;
        uStack_1e4 = uStack_314;
        uStack_1e0 = uStack_310;
        uStack_1dc = uStack_30c;
        uStack_1f0 = (undefined4)uStack_320;
        uStack_1ec = uStack_320._4_4_;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_142e33648,0x2b,&uStack_1f8,&UNK_142e336d8,&UNK_142e332a0);
      }
      uStack_368 = uStack_2f0;
      uStack_378 = (undefined4)uStack_300;
      uStack_374 = uStack_300._4_4_;
      uStack_370 = (undefined4)uStack_2f8;
      uStack_36c = uStack_2f8._4_4_;
      uStack_388 = uStack_310;
      uStack_384 = uStack_30c;
      uStack_380 = uStack_308;
      uStack_37c = uStack_304;
      uStack_398 = (undefined4)uStack_320;
      uStack_394 = uStack_320._4_4_;
      uStack_390 = uStack_318;
      uStack_38c = uStack_314;
      pdb_14007ee60();
      pbVar14 = pub_1406abab0(0xc,1);
      if (pbVar14 == (byte *)0x0) {
        pdb_142dc7e2a(1,0xc);
      }
      else {
        pbVar14[0] = 0x77;
        pbVar14[1] = 0x69;
        pbVar14[2] = 0x6e;
        pbVar14[3] = 0x69;
        pbVar14[4] = 0x74;
        pbVar14[5] = 0x20;
        pbVar14[6] = 0x77;
        pbVar14[7] = 0x69;
        pbVar14[8] = 0x6e;
        pbVar14[9] = 100;
        pbVar14[10] = 0x6f;
        pbVar14[0xb] = 0x77;
        uStack_2e8 = CONCAT44(uStack_2e8._4_4_,2);
        uStack_2d0 = 2;
        uStack_2b8 = 2;
        uStack_2a0 = 2;
        uStack_250 = 7;
        uStack_300 = 0xc;
        uStack_2f0 = 0xc;
        uStack_258 = 0;
        uStack_244 = 0x102;
        uStack_288 = 2;
        uStack_24c = 0x100010000010001;
        uStack_270 = 0xf;
        uStack_328 = 0;
        uStack_2f8 = pbVar14;
        pdb_14073f420(&uStack_c8);
        pub_142e32760(&uStack_1f8,&uStack_328,0xe8);
        uStack_110 = (undefined4)uStack_c8;
        uStack_10c = uStack_c8._4_4_;
        uStack_108 = uStack_c0;
        uStack_104 = uStack_bc;
        uStack_100 = uStack_b8;
        uStack_fc = uStack_b4;
        uStack_f8 = uStack_b0;
        uStack_f4 = uStack_ac;
        uStack_f0 = uStack_a8;
        uStack_ec = uStack_a4;
        uStack_e8 = uStack_a0;
        uStack_e4 = uStack_9c;
        uStack_e0 = uStack_98;
        uStack_dc = uStack_94;
        uStack_d8 = uStack_90;
        uStack_d4 = uStack_8c;
        uStack_d0 = uStack_88;
        pdb_14007ee60();
        pbVar14 = pub_1406abab0(0x1d,1);
        uVar9 = _UNK_142e332cd;
        if (pbVar14 != (byte *)0x0) {
          *(ulonglong *)(pbVar14 + 0xd) = CONCAT53(_UNK_142e332c8,_DAT_142e332c5);
          *(undefined8 *)(pbVar14 + 0x15) = uVar9;
          uVar9 = CONCAT35(_DAT_142e332c5,_UNK_142e332c0);
          *(undefined8 *)pbVar14 = _DAT_142e332b8;
          *(undefined8 *)(pbVar14 + 8) = uVar9;
          if (uStack_1d0 != 0) {
            pub_1406abac0(pbStack_1c8,uStack_1d0,1);
          }
          uStack_1d0 = 0x1d;
          uStack_1c0 = 0x1d;
          uStack_328._0_4_ = (int)uStack_1f8;
          uStack_328._4_4_ = uStack_1f8._4_4_;
          uStack_320._0_4_ = uStack_1f0;
          uStack_320._4_4_ = uStack_1ec;
          uStack_318 = uStack_1e8;
          uStack_314 = uStack_1e4;
          uStack_310 = uStack_1e0;
          uStack_30c = uStack_1dc;
          uStack_300 = 0x1d;
          uStack_2f0 = 0x1d;
          uStack_2f8 = pbVar14;
          pbStack_1c8 = pbVar14;
          pub_142e32760(auStack_2dc,auStack_1ac,0xe4);
          uStack_2e8 = 0x3e800000000;
          uStack_2e0 = 800;
          pdb_1400085b0(&uStack_1f8,&uStack_328,&uStack_350);
          if ((int)uStack_1f8 != 1) {
            uStack_ac = CONCAT13(uStack_1d1,CONCAT12(uStack_1d2,CONCAT11(uStack_1d3,uStack_1d4)));
            uStack_b8 = uStack_1e0;
            uStack_b4 = uStack_1dc;
            uStack_b0 = uStack_1d8;
            uStack_c8._0_4_ = uStack_1f0;
            uStack_c8._4_4_ = uStack_1ec;
            uStack_c0 = uStack_1e8;
            uStack_bc = uStack_1e4;
            uStack_61 = 1;
            pdb_140e14570(&uStack_328,&uStack_398);
            uStack_1e8 = uStack_318;
            uStack_1e4 = uStack_314;
            uStack_1e0 = uStack_310;
            uStack_1dc = uStack_30c;
            uStack_1f8 = CONCAT44(uStack_328._4_4_,(int)uStack_328);
            uStack_1f0 = (undefined4)uStack_320;
            uStack_1ec = uStack_320._4_4_;
            uStack_61 = 1;
            pdb_140173ee0(auStack_3d0,&uStack_1f8);
            lVar13 = lStack_70;
            plVar1 = (longlong *)(lStack_70 + 0x18);
            uVar15 = *(undefined4 *)(lStack_70 + 0x30);
            uStack_62 = 1;
            uStack_63 = 1;
            pdb_140175e80(&uStack_328,plVar1);
            uVar7 = *(uint *)(lVar13 + 0xa4);
            bVar3 = *(byte *)(lVar13 + 0xa9);
            bVar4 = *(byte *)(lVar13 + 0xa8);
            bVar5 = *(byte *)(lVar13 + 0xe4);
            bVar6 = *(byte *)(lVar13 + 0xc0);
            uStack_1d8 = uStack_b8;
            uStack_1d4 = (undefined1)uStack_b4;
            uStack_1d3 = (undefined1)((uint)uStack_b4 >> 8);
            uStack_1d2 = (undefined1)((uint)uStack_b4 >> 0x10);
            uStack_1d1 = (undefined1)((uint)uStack_b4 >> 0x18);
            uStack_1d0._0_4_ = uStack_b0;
            uStack_1d0._4_4_ = uStack_ac;
            uStack_1e8 = (undefined4)uStack_c8;
            uStack_1e4 = uStack_c8._4_4_;
            uStack_1e0 = uStack_c0;
            uStack_1dc = uStack_bc;
            uStack_1f8 = 1;
            uStack_1f0 = 1;
            uStack_1ec = 0;
            uStack_310 = uVar15;
            pdb_14007ee60();
            pbStack_78 = pub_1406abab0(0x30,8);
            if (pbStack_78 != (byte *)0x0) {
              *(undefined4 *)(pbStack_78 + 0x20) = uStack_1d8;
              *(uint *)(pbStack_78 + 0x24) =
                   CONCAT13(uStack_1d1,CONCAT12(uStack_1d2,CONCAT11(uStack_1d3,uStack_1d4)));
              *(undefined4 *)(pbStack_78 + 0x28) = (undefined4)uStack_1d0;
              *(undefined4 *)(pbStack_78 + 0x2c) = uStack_1d0._4_4_;
              *(undefined4 *)(pbStack_78 + 0x10) = uStack_1e8;
              *(undefined4 *)(pbStack_78 + 0x14) = uStack_1e4;
              *(undefined4 *)(pbStack_78 + 0x18) = uStack_1e0;
              *(undefined4 *)(pbStack_78 + 0x1c) = uStack_1dc;
              *(int *)pbStack_78 = (int)uStack_1f8;
              *(undefined4 *)(pbStack_78 + 4) = uStack_1f8._4_4_;
              *(undefined4 *)(pbStack_78 + 8) = uStack_1f0;
              *(undefined4 *)(pbStack_78 + 0xc) = uStack_1ec;
              pdb_1406cce10(&uStack_1f8,auStack_3d0,&uStack_328,
                            (ulonglong)bVar4 << 0x20 | (ulonglong)bVar3 << 0x28 | (ulonglong)uVar7 |
                            (ulonglong)bVar5 << 0x30 | (ulonglong)bVar6 << 0x38,&uStack_360,
                            pbStack_78);
              uVar12 = uStack_1d1;
              uVar11 = uStack_1d2;
              uVar10 = uStack_1d3;
              uVar15 = uStack_1d8;
              if (uStack_1f8 < -0x7ffffffffffffffe) {
                if (uStack_1f8 == -0x7fffffffffffffff) {
                  uStack_61 = 0;
                  pdb_140f36c40(&uStack_1f0);
                }
              }
              else {
                uStack_3b0 = CONCAT44(uStack_1ec,uStack_1f0);
                uStack_3a8 = CONCAT44(uStack_1e4,uStack_1e8);
                uStack_3a0 = CONCAT44(uStack_1dc,uStack_1e0);
                uStack_3b8 = uStack_1f8;
                pbStack_78 = (byte *)CONCAT71(pbStack_78._1_7_,uStack_1d4);
                pbVar14 = *(byte **)(lStack_70 + 0x20);
                lVar17 = *(longlong *)(lStack_70 + 0x28);
                if (lVar17 != 0) {
                  pbVar16 = pbVar14 + 0x10;
                  do {
                    if (*(ulonglong *)(pbVar16 + -8) != 0) {
                      pub_1406abac0(*(byte **)pbVar16,*(ulonglong *)(pbVar16 + -8),1);
                    }
                    pbVar16 = pbVar16 + 0x20;
                    lVar17 = lVar17 + -1;
                  } while (lVar17 != 0);
                }
                if (*plVar1 != 0) {
                  pub_1406abac0(pbVar14,*plVar1 << 5,8);
                }
                *(undefined4 *)(lVar13 + 0x28) = (undefined4)uStack_3a8;
                *(undefined4 *)(lVar13 + 0x2c) = uStack_3a8._4_4_;
                *(undefined4 *)(lVar13 + 0x30) = (undefined4)uStack_3a0;
                *(undefined4 *)(lVar13 + 0x34) = uStack_3a0._4_4_;
                *(undefined4 *)plVar1 = (undefined4)uStack_3b8;
                *(undefined4 *)(lVar13 + 0x1c) = uStack_3b8._4_4_;
                *(undefined4 *)(lVar13 + 0x20) = (undefined4)uStack_3b0;
                *(undefined4 *)(lVar13 + 0x24) = uStack_3b0._4_4_;
                *(undefined4 *)(lStack_70 + 0xa4) = uVar15;
                *(undefined1 *)(lStack_70 + 0xa8) = pbStack_78._0_1_;
                *(undefined1 *)(lStack_70 + 0xa9) = uVar10;
                *(undefined1 *)(lStack_70 + 0xe4) = uVar11;
                *(undefined1 *)(lStack_70 + 0xc0) = uVar12;
                *(undefined1 *)(lStack_70 + 0xc1) = uVar12;
                pdb_1402f2aa0();
                if (uStack_1f8 == -0x7fffffffffffffff) {
                  uStack_61 = 0;
                  pdb_140f36c40(&uStack_1f0);
                }
              }
              plVar1 = (longlong *)CONCAT44(uStack_36c,uStack_370);
              if (plVar1 != (longlong *)0x0) {
                LOCK();
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  pdb_140eaad40(&uStack_370);
                }
              }
              pdb_1404cbae0(&uStack_360);
              pdb_1404cfed0(lStack_70);
              arg1 = *(ulonglong *)(lStack_70 + 200);
              if ((!SBORROW8(0,arg1)) && (arg1 != 0)) {
                pub_1406abac0(*(byte **)(lStack_70 + 0xd0),arg1,1);
              }
              return;
            }
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x30);
          }
          uStack_318 = uStack_1e0;
          uStack_314 = uStack_1dc;
          uStack_310 = uStack_1d8;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_142e332d5,6,&uStack_328,&UNK_142e33608,&UNK_142e332e0);
        }
        pdb_142dc7e2a(1,0x1d);
      }
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
  }
  else {
    uVar15 = 3;
  }
  uStack_1f8 = CONCAT44((int)uStack_328,uVar15);
  uStack_1f0 = uStack_328._4_4_;
  uStack_1ec = (undefined4)uStack_320;
  uStack_1e8 = uStack_320._4_4_;
  uStack_1e4 = uStack_318;
  uStack_1e0 = uStack_314;
  uStack_1dc = uStack_310;
  uStack_1d8 = uStack_30c;
  uStack_1d4 = (undefined1)_uStack_308;
  uStack_1d3 = (undefined1)((ulonglong)_uStack_308 >> 8);
  uStack_1d2 = (undefined1)((ulonglong)_uStack_308 >> 0x10);
  uStack_1d1 = (undefined1)((ulonglong)_uStack_308 >> 0x18);
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_142e33648,0x2b,&uStack_1f8,&UNK_142e33698,&UNK_142e33288);
}

