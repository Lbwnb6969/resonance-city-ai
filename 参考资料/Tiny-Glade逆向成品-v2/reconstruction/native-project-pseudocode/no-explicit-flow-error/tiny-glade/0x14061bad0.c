// VA 0x14061bad0, PDB extent 1884 bytes
// tiny_glade::theme_fetcher_plugin::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/theme_fetcher_plugin.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::theme_fetcher_plugin::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/theme_fetcher_plugin.rs
   Extent: 1884 */

void pdb_14061bad0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong *plVar2;
  byte *pbVar3;
  undefined8 uVar4;
  byte **ppbVar5;
  undefined1 uStack_491;
  longlong *plStack_490;
  byte *pbStack_488;
  undefined8 uStack_480;
  longlong *plStack_478;
  byte *pbStack_470;
  undefined8 uStack_468;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined8 uStack_458;
  undefined1 uStack_450;
  byte *pbStack_448;
  undefined8 uStack_440;
  byte *pbStack_438;
  undefined8 uStack_430;
  byte *pbStack_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined8 uStack_410;
  byte *pbStack_400;
  undefined *puStack_3f8;
  byte *pbStack_3f0;
  undefined8 uStack_3e8;
  undefined *puStack_3e0;
  ulonglong uStack_3d8;
  undefined8 uStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  longlong ***ppplStack_3a8;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined2 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 uStack_2c8;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 uStack_270;
  int aiStack_1c0 [2];
  longlong *plStack_1b8;
  longlong **pplStack_100;
  code *pcStack_f8;
  longlong **pplStack_40;
  undefined8 uStack_30;
  
  pplStack_40 = &plStack_478;
  uStack_30 = 0xfffffffffffffffe;
  uStack_280 = 1;
  uStack_278 = 1;
  uStack_270 = 0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  pbStack_400 = (byte *)0x0;
  puStack_3f8 = (undefined *)0x0;
  uStack_380 = 0;
  uStack_378 = 0;
  uStack_2f0 = 8;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  uStack_2d8 = 8;
  uStack_2d0 = 0;
  uStack_2c8 = 1;
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0x200,0x80);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(0x80,0x200);
  }
  ppbVar5 = &pbStack_400;
  pub_142e32760(pbVar3,ppbVar5,0x200);
  uStack_440 = 1;
  uStack_430 = 1;
  pbStack_438 = pbVar3;
  pbStack_428 = pbVar3;
  uVar4 = pdb_140dc7210();
  pdb_140f3e9e0(&pbStack_400,uVar4,ppbVar5,&UNK_142f88dfa,9);
  pdb_1400f0890(aiStack_1c0,&pbStack_400,1,pbVar3);
  if (aiStack_1c0[0] == 2) {
    plStack_490 = plStack_1b8;
    if (*_DAT_143ca8e90 != 0) {
      pplStack_100 = &plStack_490;
      pcStack_f8 = pdb_140f36c20;
      pbStack_400 = (byte *)0x0;
      puStack_3f8 = &UNK_142f88e5d;
      pbStack_3f0 = (byte *)0x20;
      uStack_3e8 = 0;
      puStack_3e0 = &UNK_142f889ba;
      uStack_3d8 = 0x2d;
      uStack_3d0 = 1;
      puStack_3c8 = &UNK_142f88e5d;
      uStack_3c0 = 0x20;
      uStack_3b8 = 0x2600000001;
      puStack_3b0 = &UNK_142f88e38;
      ppplStack_3a8 = &pplStack_100;
      pdb_140f332f0(&uStack_491,&pbStack_400);
    }
    plStack_478 = (longlong *)0x0;
    pdb_140f36c40(&plStack_490);
  }
  else {
    pub_142e32760(&pplStack_100,aiStack_1c0,0xc0);
    pbStack_3f0 = (byte *)0x8000000000000000;
    pbStack_400 = (byte *)0x0;
    uStack_3d8 = uStack_3d8 & 0xffffffffffffff00;
    pdb_14007ee60();
    pbStack_488 = pub_1406abab0(0xd,1);
    pbStack_448 = pbStack_488;
    if (pbStack_488 == (byte *)0x0) {
      pdb_142dc7e2a(1,0xd);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    pbStack_488[5] = 0x20;
    pbStack_488[6] = 0x66;
    pbStack_488[7] = 0x65;
    pbStack_488[8] = 0x74;
    pbStack_488[9] = 99;
    pbStack_488[10] = 0x68;
    pbStack_488[0xb] = 0x65;
    pbStack_488[0xc] = 0x72;
    pbStack_488[0] = 0x74;
    pbStack_488[1] = 0x68;
    pbStack_488[2] = 0x65;
    pbStack_488[3] = 0x6d;
    pbStack_488[4] = 0x65;
    pbStack_488[5] = 0x20;
    pbStack_488[6] = 0x66;
    pbStack_488[7] = 0x65;
    plStack_490 = (longlong *)0xd;
    uStack_480 = 0xd;
    pdb_140f3cec0(&plStack_478,&pbStack_400,&plStack_490);
    pub_142e32760(&pbStack_400,aiStack_1c0,0xc0);
    uStack_410 = uStack_458;
    uStack_420 = (undefined4)uStack_468;
    uStack_41c = uStack_468._4_4_;
    uStack_418 = uStack_460;
    uStack_414 = uStack_45c;
    pdb_140229060(&plStack_490,&uStack_420,plStack_478,pbStack_470,uStack_450,0,&pbStack_400);
    if (plStack_490 == (longlong *)0x0) {
      pbStack_400 = pbStack_488;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_142f88e03,0x1c,&pbStack_400,&UNK_142f88d08,&UNK_142f88e20);
    }
    plStack_478 = plStack_490;
    pbStack_470 = pbStack_488;
    uStack_468 = uStack_480;
  }
  pdb_140a82ef0(&pbStack_400);
  uVar4 = pdb_140293060(param_2,&pbStack_400);
  pbStack_400 = (byte *)((ulonglong)pbStack_400 & 0xffffffffffffff00);
  puStack_3f8 = (undefined *)0x1;
  pbStack_3f0 = pbVar3;
  uVar4 = pdb_140271bf0(uVar4,&pbStack_400);
  pdb_1405e7e10(uVar4);
  plVar2 = plStack_478;
  if (plStack_478 != (longlong *)0x0) {
    CloseHandle(uStack_468);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      pdb_140f4a410(&plStack_478);
    }
    LOCK();
    *(longlong *)pbStack_470 = *(longlong *)pbStack_470 + -1;
    UNLOCK();
    if (*(longlong *)pbStack_470 == 0) {
      pdb_140f4a2d0(&pbStack_470);
    }
  }
  return;
}

