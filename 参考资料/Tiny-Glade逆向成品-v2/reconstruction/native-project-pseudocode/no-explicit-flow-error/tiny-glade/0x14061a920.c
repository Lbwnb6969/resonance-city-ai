// VA 0x14061a920, PDB extent 3908 bytes
// tiny_glade::theme_fetcher_plugin::update_daily_theme
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/theme_fetcher_plugin.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::theme_fetcher_plugin::update_daily_theme
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/theme_fetcher_plugin.rs
   Extent: 3908 */

byte ******* pdb_14061a920(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  char cVar5;
  byte *******pppppppbVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  byte ******ppppppbVar9;
  byte *******pppppppbVar10;
  byte *******pppppppbVar11;
  byte *******pppppppbVar12;
  undefined1 auStack_3b0 [152];
  longlong lStack_318;
  longlong lStack_310;
  byte ******ppppppbStack_308;
  byte ******ppppppbStack_300;
  byte ******ppppppbStack_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  byte ******ppppppbStack_260;
  byte ******ppppppbStack_258;
  byte ******ppppppbStack_250;
  byte ******ppppppbStack_248;
  byte ******ppppppbStack_240;
  byte ******ppppppbStack_238;
  longlong lStack_230;
  longlong lStack_228;
  longlong lStack_220;
  byte ******ppppppbStack_218;
  byte ******ppppppbStack_210;
  longlong lStack_208;
  longlong lStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  byte ******ppppppbStack_188;
  longlong lStack_180;
  longlong lStack_178;
  byte ******ppppppbStack_118;
  longlong lStack_110;
  byte ******ppppppbStack_108;
  byte ******ppppppbStack_100;
  byte ******ppppppbStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  byte ******ppppppbStack_d0;
  byte ******ppppppbStack_c8;
  byte ******ppppppbStack_c0;
  byte ******ppppppbStack_b8;
  undefined8 *puStack_a0;
  byte ******ppppppbStack_98;
  byte ******ppppppbStack_90;
  undefined1 uStack_81;
  byte ******ppppppbStack_80;
  byte ******ppppppbStack_78;
  byte ******ppppppbStack_70;
  byte ******ppppppbStack_68;
  byte *pbStack_60;
  byte ******ppppppbStack_58;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pbVar8 = (byte *)*param_1;
  LOCK();
  bVar1 = *pbVar8;
  if (bVar1 == 0) {
    *pbVar8 = 1;
  }
  UNLOCK();
  if (bVar1 != 0) {
    pdb_142dbd1a0(pbVar8,param_2,1000000000);
  }
  pdb_140e9a150(pbVar8);
  pbStack_60 = pbVar8;
  if (*(longlong *)(pbVar8 + 8) == 0) {
    pdb_140478260(&uStack_1b8,*(undefined8 *)(pbVar8 + 0x10));
  }
  else if ((int)*(longlong *)(pbVar8 + 8) == 1) {
    pdb_140162290(&uStack_1b8);
  }
  else {
    pdb_14053b2b0(&uStack_1b8);
  }
  pbVar8 = pbStack_60;
  if (uStack_1b8 == (byte *******)0x8000000000000001) {
    pdb_140e9a350();
    pppppppbVar6 = (byte *******)0x1;
    LOCK();
    bVar1 = *pbVar8;
    if (bVar1 == 1) {
      *pbVar8 = 0;
    }
    else {
      pppppppbVar6 = (byte *******)(ulonglong)bVar1;
    }
    UNLOCK();
    if (bVar1 == 1) {
      return pppppppbVar6;
    }
    pppppppbVar6 = (byte *******)pdb_142dbcef0(pbVar8,0);
    return pppppppbVar6;
  }
  uStack_1d8 = uStack_198;
  uStack_1d4 = uStack_194;
  uStack_1d0 = uStack_190;
  uStack_1cc = uStack_18c;
  uStack_1e8 = (undefined4)uStack_1a8;
  uStack_1e4 = uStack_1a8._4_4_;
  uStack_1e0 = uStack_1a0;
  uStack_1dc = uStack_19c;
  uStack_1f8 = (undefined4)uStack_1b8;
  uStack_1f4 = uStack_1b8._4_4_;
  uStack_1f0 = (undefined4)uStack_1b0;
  uStack_1ec = uStack_1b0._4_4_;
  uStack_49 = 1;
  pdb_140e9a350();
  LOCK();
  bVar1 = *pbVar8;
  if (bVar1 == 1) {
    *pbVar8 = 0;
  }
  UNLOCK();
  if (bVar1 != 1) {
    uStack_49 = 1;
    pdb_142dbcef0(pbVar8,0);
  }
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  puVar3 = (undefined4 *)param_2[2];
  *puVar3 = uVar2;
  pbStack_60 = (byte *)*param_2;
  if (SBORROW8(0,*(longlong *)pbStack_60)) {
    uVar4 = *(ulonglong *)((longlong)pbStack_60 + 8);
    if ((-1 < (longlong)uVar4) && (uVar4 != 0)) {
      pub_1406abac0(*(byte **)((longlong)pbStack_60 + 0x10),uVar4,1);
    }
  }
  else {
    pdb_1404cca60();
  }
  pbVar8 = pbStack_60;
  pbStack_60[0] = 0;
  pbStack_60[1] = 0;
  pbStack_60[2] = 0;
  pbStack_60[3] = 0;
  pbStack_60[4] = 0;
  pbStack_60[5] = 0;
  pbStack_60[6] = 0;
  pbStack_60[7] = 0x80;
  ppppppbStack_80 = (byte ******)0x8000000000000000;
  *(longlong *)((longlong)pbStack_60 + 8) = -0x8000000000000000;
  ppppppbStack_70 = (byte ******)CONCAT44(uStack_1f4,uStack_1f8);
  pppppppbVar6 = (byte *******)CONCAT44(uStack_1ec,uStack_1f0);
  pppppppbVar12 = (byte *******)CONCAT44(uStack_1e4,uStack_1e8);
  if (SBORROW8(0,(longlong)ppppppbStack_70)) {
    pppppppbVar10 = (byte *******)CONCAT44(uStack_1dc,uStack_1e0);
    pppppppbVar11 = pppppppbVar12;
  }
  else {
    uStack_1c8 = uStack_1d8;
    uStack_1c4 = uStack_1d4;
    uStack_1c0 = uStack_1d0;
    uStack_1bc = uStack_1cc;
    ppppppbStack_68 = (byte ******)pppppppbVar6;
    pdb_140f3e9e0(&uStack_1b8,pppppppbVar6,pppppppbVar12,&UNK_142f889e8,10);
    ppppppbStack_58 = (byte ******)uStack_1b0;
    pdb_140f55fb0(&ppppppbStack_100,uStack_1b0,uStack_1a8);
    if (uStack_1b8 != (byte *******)0x0) {
      pub_1406abac0((byte *)ppppppbStack_58,(ulonglong)uStack_1b8,1);
    }
    if (SBORROW8(0,(longlong)ppppppbStack_100)) {
      ppppppbStack_118 = ppppppbStack_f8;
      uStack_4a = 1;
      pdb_140f3f5b0(&uStack_1b8);
      uStack_2e8 = uStack_198;
      uStack_2e4 = uStack_194;
      uStack_2e0 = uStack_190;
      uStack_2dc = uStack_18c;
      uStack_2f0 = uStack_1a0;
      uStack_2ec = uStack_19c;
      ppppppbStack_308 = (byte ******)uStack_1b8;
      ppppppbStack_300 = (byte ******)uStack_1b0;
      uStack_1b8 = (byte *******)&UNK_142f889f2;
      uStack_1b0 = (byte *******)0x12;
      uStack_1a8 = (byte *******)ppppppbStack_f8;
      uStack_4a = 0;
      pppppppbVar6 = (byte *******)pdb_142d88850(&uStack_1b8,&ppppppbStack_308);
    }
    else {
      ppppppbStack_58 = ppppppbStack_100;
      ppppppbStack_78 = ppppppbStack_f8;
      pdb_140403850(&ppppppbStack_c8,ppppppbStack_f8,lStack_f0);
      pppppppbVar11 = (byte *******)ppppppbStack_b8;
      ppppppbVar9 = ppppppbStack_c0;
      if (SBORROW8(0,(longlong)ppppppbStack_c8)) {
        ppppppbStack_100 = ppppppbStack_c0;
        uStack_4b = 1;
        pdb_140f3f5b0(&uStack_1b8);
        uStack_2e8 = uStack_198;
        uStack_2e4 = uStack_194;
        uStack_2e0 = uStack_190;
        uStack_2dc = uStack_18c;
        uStack_2f0 = uStack_1a0;
        uStack_2ec = uStack_19c;
        ppppppbStack_308 = (byte ******)uStack_1b8;
        ppppppbStack_300 = (byte ******)uStack_1b0;
        uStack_1b8 = (byte *******)&UNK_142f88a04;
        uStack_1b0 = (byte *******)0x12;
        uStack_1a8 = (byte *******)ppppppbVar9;
        uStack_4b = 0;
        pppppppbVar6 = (byte *******)pdb_142d87b40(&uStack_1b8,&ppppppbStack_308);
        if ((byte *******)ppppppbStack_58 != (byte *******)0x0) {
          pub_1406abac0((byte *)ppppppbStack_78,(ulonglong)ppppppbStack_58,1);
        }
      }
      else {
        ppppppbStack_d0 = ppppppbStack_c8;
        ppppppbStack_260 = ppppppbStack_c8;
        ppppppbStack_258 = ppppppbStack_c0;
        ppppppbStack_250 = ppppppbStack_b8;
        if ((byte *******)ppppppbStack_58 != (byte *******)0x0) {
          pub_1406abac0((byte *)ppppppbStack_78,(ulonglong)ppppppbStack_58,1);
        }
        pdb_140f3e9e0(&ppppppbStack_c8,ppppppbStack_68,pppppppbVar12,&UNK_142f88a16,9);
        ppppppbStack_98 = ppppppbVar9;
        ppppppbStack_58 = ppppppbStack_c0;
        pdb_140a926d0(&uStack_1b8,ppppppbStack_c0,ppppppbStack_b8);
        pppppppbVar10 = uStack_1b0;
        pppppppbVar6 = uStack_1b8;
        if (SBORROW8(0,(longlong)uStack_1b8)) {
          ppppppbStack_118 = (byte ******)&UNK_142f88a1f;
          lStack_110 = 0x14;
          ppppppbStack_108 = (byte ******)uStack_1b0;
          ppppppbStack_100 = (byte ******)0x3;
          pppppppbVar6 = (byte *******)pdb_142d88150(&ppppppbStack_118,&ppppppbStack_100);
          if ((byte *******)ppppppbStack_c8 != (byte *******)0x0) {
            pub_1406abac0((byte *)ppppppbStack_58,(ulonglong)ppppppbStack_c8,1);
          }
        }
        else {
          pub_142e32760(&ppppppbStack_2f8,&uStack_1a8,0x90);
          ppppppbStack_308 = (byte ******)pppppppbVar6;
          ppppppbStack_300 = (byte ******)pppppppbVar10;
          if ((byte *******)ppppppbStack_c8 != (byte *******)0x0) {
            pub_1406abac0((byte *)ppppppbStack_58,(ulonglong)ppppppbStack_c8,1);
          }
          pdb_140f3e9e0(&ppppppbStack_100,ppppppbStack_68,pppppppbVar12,&UNK_142f88a33,0xc);
          pppppppbVar6 = (byte *******)ppppppbStack_98;
          ppppppbStack_58 = ppppppbStack_f8;
          cVar5 = pdb_140f3ec10(ppppppbStack_f8,lStack_f0);
          if (cVar5 != '\0') {
            pdb_140f3e9e0(&uStack_1b8,ppppppbStack_68,pppppppbVar12,&UNK_142f88a53,0xc);
            pdb_1403ee030(&ppppppbStack_c8,&uStack_1b8);
            if (SBORROW8(0,(longlong)ppppppbStack_c8)) {
              pdb_1404b38e0(&ppppppbStack_c0);
              pppppppbVar12 = (byte *******)0x8000000000000000;
              puStack_a0 = (undefined8 *)0x8000000000000000;
              ppppppbStack_78 = (byte ******)0x8000000000000000;
              ppppppbVar9 = ppppppbStack_70;
            }
            else {
              ppppppbStack_80 = ppppppbStack_c8;
              ppppppbStack_90 = ppppppbStack_c0;
              pdb_1404052c0(&uStack_1b8,ppppppbStack_c0,ppppppbStack_b8);
              pppppppbVar12 = uStack_1b8;
              puVar7 = &uStack_1b0;
              if (uStack_1b8 == (byte *******)0x8000000000000001) {
                ppppppbStack_188 = (byte ******)pdb_1404b4b10();
              }
              else {
                ppppppbStack_c8 = (byte ******)uStack_1b0;
                ppppppbStack_c0 = (byte ******)uStack_1a8;
                puVar7 = (undefined8 *)CONCAT44(uStack_19c,uStack_1a0);
                ppppppbStack_118 = (byte ******)CONCAT44(uStack_194,uStack_198);
                lStack_110 = CONCAT44(uStack_18c,uStack_190);
                lStack_318 = lStack_180;
                lStack_310 = lStack_178;
              }
              ppppppbVar9 = ppppppbStack_70;
              ppppppbStack_78 = ppppppbStack_188;
              if ((byte *******)ppppppbStack_80 != (byte *******)0x0) {
                pub_1406abac0((byte *)ppppppbStack_90,(ulonglong)ppppppbStack_80,1);
                pppppppbVar6 = (byte *******)ppppppbStack_98;
              }
              if (pppppppbVar12 == (byte *******)0x8000000000000001) {
                pppppppbVar12 = (byte *******)0x8000000000000000;
                puStack_a0 = (undefined8 *)0x8000000000000000;
                ppppppbStack_78 = (byte ******)0x8000000000000000;
              }
              else {
                ppppppbStack_248 = ppppppbStack_c8;
                ppppppbStack_240 = ppppppbStack_c0;
                ppppppbStack_238 = ppppppbStack_118;
                lStack_230 = lStack_110;
                lStack_228 = lStack_318;
                lStack_220 = lStack_310;
                puStack_a0 = puVar7;
              }
            }
            pppppppbVar10 = (byte *******)ppppppbStack_308;
            ppppppbStack_90 = (byte ******)pppppppbVar12;
            pub_142e32760(auStack_3b0,&ppppppbStack_300,0x98);
            ppppppbStack_218 = ppppppbStack_100;
            ppppppbStack_210 = ppppppbStack_f8;
            lStack_208 = lStack_f0;
            lStack_200 = lStack_e8;
            if (ppppppbVar9 != (byte ******)0x0) {
              pub_1406abac0((byte *)ppppppbStack_68,(ulonglong)ppppppbVar9,1);
            }
            ppppppbStack_80 = ppppppbStack_d0;
            pbVar8 = pbStack_60;
            goto LAB_14061b00d;
          }
          pppppppbVar6 = (byte *******)pdb_142d877a0(&UNK_142f88a3f,0x14);
          if ((byte *******)ppppppbStack_100 != (byte *******)0x0) {
            pub_1406abac0((byte *)ppppppbStack_58,(ulonglong)ppppppbStack_100,1);
          }
          pdb_1404cc180(&ppppppbStack_308);
        }
        if (pppppppbVar11 != (byte *******)0x0) {
          pppppppbVar12 = (byte *******)(ppppppbStack_98 + 1);
          do {
            if (pppppppbVar12[-1] != (byte ******)0x0) {
              pub_1406abac0((byte *)*pppppppbVar12,(ulonglong)pppppppbVar12[-1],1);
            }
            pppppppbVar12 = pppppppbVar12 + 3;
            pppppppbVar11 = (byte *******)((longlong)pppppppbVar11 + -1);
          } while (pppppppbVar11 != (byte *******)0x0);
        }
        pbVar8 = pbStack_60;
        if ((byte *******)ppppppbStack_d0 != (byte *******)0x0) {
          pub_1406abac0((byte *)ppppppbStack_98,(longlong)ppppppbStack_d0 * 0x18,8);
          pbVar8 = pbStack_60;
        }
      }
    }
    if (ppppppbStack_70 != (byte ******)0x0) {
      pub_1406abac0((byte *)ppppppbStack_68,(ulonglong)ppppppbStack_70,1);
    }
    ppppppbStack_308 = (byte ******)0x0;
    ppppppbStack_300 = (byte ******)0x1;
    ppppppbStack_2f8 = (byte ******)0x0;
    uStack_1a8 = (byte *******)0x60000020;
    uStack_1b8 = &ppppppbStack_308;
    uStack_1b0 = (byte *******)&UNK_142f88b58;
    ppppppbStack_100 = (byte ******)pppppppbVar6;
    cVar5 = pdb_140f36c30(&ppppppbStack_100,&uStack_1b8);
    pppppppbVar10 = (byte *******)ppppppbStack_2f8;
    pppppppbVar11 = (byte *******)ppppppbStack_300;
    pppppppbVar6 = (byte *******)ppppppbStack_308;
    if (cVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_142f88b88,0x37,&uStack_81,&UNK_142f88d28,&UNK_142f88c30);
    }
    uStack_49 = 0;
    pdb_140f36c40(&ppppppbStack_100);
  }
LAB_14061b00d:
  *puVar3 = uVar2;
  ppppppbStack_70 = (byte ******)pppppppbVar11;
  ppppppbStack_68 = (byte ******)pppppppbVar6;
  ppppppbStack_58 = (byte ******)pppppppbVar10;
  if (SBORROW8(0,*(longlong *)pbVar8)) {
    uVar4 = *(ulonglong *)((longlong)pbVar8 + 8);
    if ((-1 < (longlong)uVar4) && (uVar4 != 0)) {
      pub_1406abac0(*(byte **)((longlong)pbStack_60 + 0x10),uVar4,1);
    }
  }
  else {
    pdb_1404cca60(pbVar8);
  }
  pbVar8 = pbStack_60;
  *(byte *******)pbStack_60 = ppppppbStack_80;
  *(byte *******)((longlong)pbStack_60 + 8) = ppppppbStack_68;
  *(byte *******)((longlong)pbStack_60 + 0x10) = ppppppbStack_70;
  *(byte *******)((longlong)pbStack_60 + 0x18) = ppppppbStack_58;
  pub_142e32760((longlong *)((longlong)pbStack_60 + 0x20),auStack_3b0,0x98);
  *(longlong *)((longlong)pbVar8 + 200) = lStack_208;
  *(longlong *)((longlong)pbVar8 + 0xd0) = lStack_200;
  *(byte *******)((longlong)pbVar8 + 0xb8) = ppppppbStack_218;
  *(byte *******)((longlong)pbVar8 + 0xc0) = ppppppbStack_210;
  *(byte *******)((longlong)pbVar8 + 0xd8) = ppppppbStack_90;
  *(byte *******)((longlong)pbVar8 + 0xe0) = ppppppbStack_248;
  *(byte *******)((longlong)pbVar8 + 0xe8) = ppppppbStack_240;
  *(undefined8 **)((longlong)pbVar8 + 0xf0) = puStack_a0;
  *(byte *******)((longlong)pbVar8 + 0xf8) = ppppppbStack_238;
  *(longlong *)((longlong)pbVar8 + 0x100) = lStack_230;
  *(byte *******)((longlong)pbVar8 + 0x108) = ppppppbStack_78;
  *(longlong *)((longlong)pbVar8 + 0x110) = lStack_228;
  *(longlong *)((longlong)pbVar8 + 0x118) = lStack_220;
  *(longlong *)((longlong)pbVar8 + 0x120) = CONCAT44(uStack_1c4,uStack_1c8);
  *(longlong *)((longlong)pbVar8 + 0x128) = CONCAT44(uStack_1bc,uStack_1c0);
  return (byte *******)ppppppbStack_78;
}

