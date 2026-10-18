// VA 0x1405771d0, PDB extent 6093 bytes
// tiny_glade::panic_reporter::recover_game_state_after_crash
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::panic_reporter::recover_game_state_after_crash
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/mod.rs
   Extent: 6093 */

longlong * pdb_1405771d0(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte ***pppbVar5;
  byte ****ppppbVar6;
  code *pcVar7;
  byte ****ppppbVar8;
  code *pcVar9;
  undefined1 auStack_490 [168];
  byte ***pppbStack_3e8;
  byte ***pppbStack_3e0;
  byte ***pppbStack_3d8;
  byte ***pppbStack_3d0;
  byte ***pppbStack_3c8;
  code *pcStack_3c0;
  byte **ppbStack_3b8;
  byte ***pppbStack_3b0;
  byte ***pppbStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  byte ***pppbStack_390;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  byte ***pppbStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  byte ***pppbStack_2c0;
  byte **ppbStack_2b8;
  byte ***pppbStack_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  byte ***pppbStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  byte ***pppbStack_268;
  byte ***pppbStack_260;
  byte ***pppbStack_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  byte ***pppbStack_248;
  byte ***pppbStack_240;
  byte ***pppbStack_238;
  byte ***pppbStack_230;
  byte ***pppbStack_228;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  byte ***pppbStack_208;
  byte *pbStack_200;
  byte ***pppbStack_1f8;
  code *pcStack_1f0;
  byte **ppbStack_1e8;
  byte ***pppbStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  byte ***pppbStack_1c8;
  byte ***pppbStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  byte ***pppbStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 auStack_118 [48];
  byte ***pppbStack_e8;
  byte ***pppbStack_e0;
  byte ***pppbStack_d8;
  byte ***pppbStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  byte ***pppbStack_b8;
  byte ***pppbStack_b0;
  byte ***pppbStack_a8;
  byte ***pppbStack_a0;
  byte ***pppbStack_98;
  byte ***pppbStack_90;
  byte ***pppbStack_88;
  byte ***pppbStack_80;
  byte ***pppbStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  byte ***pppbStack_58;
  byte ***pppbStack_50;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pdb_140dc7240(&pppbStack_3a8);
  uStack_46 = 1;
  pdb_140f60120(&uStack_1b8,&UNK_142f6c070,3);
  ppppbVar6 = uStack_1a8;
  if (SBORROW8(0,(longlong)pppbStack_3a8)) {
    pppbStack_78 = (byte ***)uStack_1b8;
    pppbStack_50 = (byte ***)uStack_1b0;
    uStack_46 = 0;
    pdb_140f36c40(&uStack_3a0);
  }
  else {
    pppbStack_78 = pppbStack_3a8;
    pppbStack_50 = (byte ***)CONCAT44(uStack_39c,uStack_3a0);
    ppppbVar6 = (byte ****)CONCAT44(uStack_394,uStack_398);
    if (uStack_1b8 != (byte ****)0x0) {
      pub_1406abac0((byte *)uStack_1b0,(ulonglong)uStack_1b8,1);
    }
  }
  pdb_140dee3a0(&uStack_1b8);
  uStack_68 = pdb_140001020;
  uStack_70 = (byte ****)&uStack_1b8;
  pdb_140f60760(&pppbStack_3a8,&UNK_142f6c073,&uStack_70);
  if (uStack_1b8 != (byte ****)0x0) {
    pub_1406abac0((byte *)uStack_1b0,(ulonglong)uStack_1b8,1);
  }
  pppbStack_e0 = pppbStack_3a8;
  pbStack_200 = (byte *)CONCAT44(uStack_39c,uStack_3a0);
  pdb_140f3e9e0(&ppbStack_2b8,pppbStack_50,ppppbVar6,pbStack_200,CONCAT44(uStack_394,uStack_398));
  if ((byte ****)pppbStack_e0 != (byte ****)0x0) {
    pub_1406abac0(pbStack_200,(ulonglong)pppbStack_e0,1);
  }
  if ((byte ****)pppbStack_78 != (byte ****)0x0) {
    pub_1406abac0((byte *)pppbStack_50,(ulonglong)pppbStack_78,1);
  }
  uStack_1b8 = (byte ****)CONCAT71(uStack_1b8._1_7_,1);
  uVar1 = CONCAT44(uStack_2a4,uStack_2a8);
  uStack_3a = 1;
  pppbStack_50 = pppbStack_2b0;
  ppppbVar6 = (byte ****)pdb_140f46c40(&uStack_1b8,pppbStack_2b0,uVar1);
  if (ppppbVar6 == (byte ****)0x0) {
    pppbStack_e8 = (byte ***)0x0;
    if (DAT_143cb2b0a == '\0') goto LAB_140577575;
LAB_140577453:
    pdb_14007ee60();
    ppppbVar6 = (byte ****)pub_1406abab0(0x22,1);
    pppbVar5 = _UNK_142f6c0bc;
    if (ppppbVar6 == (byte ****)0x0) {
      uStack_39 = 1;
      pdb_142dc7e2a(1,0x22);
      goto LAB_1405780f6;
    }
    ppppbVar6[2] = _DAT_142f6c0b4;
    ppppbVar6[3] = pppbVar5;
    uVar4 = _UNK_142f6c0b0;
    uVar3 = _UNK_142f6c0ac;
    uVar2 = _UNK_142f6c0a8;
    *(undefined4 *)ppppbVar6 = _DAT_142f6c0a4;
    *(undefined4 *)((longlong)ppppbVar6 + 4) = uVar2;
    *(undefined4 *)(ppppbVar6 + 1) = uVar3;
    *(undefined4 *)((longlong)ppppbVar6 + 0xc) = uVar4;
    *(undefined2 *)(ppppbVar6 + 4) = 0x6e77;
    uStack_70 = (byte ****)0x22;
    uStack_60 = (byte ****)0x22;
    pppbStack_78 = (byte ***)ppppbVar6;
    uStack_68 = (code *)ppppbVar6;
    pdb_140f60be0(&uStack_1b8,&uStack_70);
    pcVar9 = (code *)0x8000000000000000;
    pppbStack_390 = (byte ***)uStack_1a8;
    uStack_3a0 = (undefined4)uStack_1b8;
    uStack_39c = uStack_1b8._4_4_;
    uStack_398 = (undefined4)uStack_1b0;
    uStack_394 = uStack_1b0._4_4_;
    pppbStack_3a8 = (byte ***)0x8000000000000000;
    pdb_140f60be0(&uStack_1b8,&uStack_70);
    pppbStack_228 = (byte ***)uStack_1a8;
    pppbStack_238 = (byte ***)uStack_1b8;
    pppbStack_230 = (byte ***)uStack_1b0;
    uStack_218 = (undefined4)uStack_70;
    uStack_214 = uStack_70._4_4_;
    uStack_210 = (undefined4)uStack_68;
    uStack_20c = uStack_68._4_4_;
    pppbStack_208 = (byte ***)uStack_60;
    pub_142e32760(&uStack_1b8,&pppbStack_3a8,0xd0);
    uStack_298 = (byte ****)0x8000000000000000;
  }
  else {
    uStack_47 = 1;
    uStack_70 = ppppbVar6;
    pdb_140f3f5b0(&uStack_1b8);
    uStack_388 = uStack_198;
    uStack_384 = uStack_194;
    uStack_380 = uStack_190;
    uStack_37c = uStack_18c;
    uStack_398 = (undefined4)uStack_1a8;
    uStack_394 = uStack_1a8._4_4_;
    pppbStack_390 = pppbStack_1a0;
    pppbStack_3a8 = (byte ***)uStack_1b8;
    uStack_3a0 = (undefined4)uStack_1b0;
    uStack_39c = uStack_1b0._4_4_;
    uStack_1b8 = (byte ****)&UNK_142f6c083;
    uStack_1b0 = (code *)0x21;
    uStack_47 = 0;
    uStack_1a8 = ppppbVar6;
    pppbStack_e8 = (byte ***)pdb_142d88850(&uStack_1b8,&pppbStack_3a8);
    if (DAT_143cb2b0a != '\0') goto LAB_140577453;
LAB_140577575:
    pppbVar5 = pppbStack_50;
    uStack_39 = 1;
    pdb_1403c6090(&pppbStack_3a8,pppbStack_50,uVar1);
    pdb_140486500(&uStack_70,pppbVar5,uVar1);
    if (SBORROW8(0,(longlong)uStack_70)) {
      pppbStack_d8 = (byte ***)&UNK_142f6c10a;
      pppbStack_d0 = (byte ***)0xa;
      pppbStack_b8 = (byte ***)uStack_68;
      uStack_1b8 = &pppbStack_d8;
      uStack_1b0 = pdb_1402ed400;
      pppbStack_1a0 = (byte ***)pdb_140f36c30;
      uStack_1a8 = &pppbStack_b8;
      pdb_140f4e8b0(&UNK_142f6c0c6,&uStack_1b8);
      pppbStack_90 = (byte ***)pdb_140f36c30;
      pppbStack_98 = (byte ***)&pppbStack_b8;
      pdb_140f60760(&uStack_1b8,&UNK_142f6c0e4,&pppbStack_98);
      pppbStack_90 = (byte ***)uStack_1b8;
      pppbStack_88 = (byte ***)uStack_1b0;
      pppbStack_80 = (byte ***)uStack_1a8;
      pdb_140f36c40(&pppbStack_b8);
      pppbStack_98 = (byte ***)0x8000000000000000;
    }
    else {
      pppbStack_88 = (byte ***)uStack_60;
      pppbStack_80 = pppbStack_58;
      pppbStack_98 = (byte ***)uStack_70;
      pppbStack_90 = (byte ***)uStack_68;
    }
    pdb_1403c5370(&uStack_70,pppbStack_50,uVar1);
    pcVar9 = (code *)uStack_70;
    if (SBORROW8(0,(longlong)uStack_70)) {
      pppbStack_b8 = (byte ***)&UNK_142f6c114;
      pppbStack_b0 = (byte ***)0x6;
      pppbStack_1d8 = (byte ***)uStack_68;
      uStack_1b8 = &pppbStack_b8;
      uStack_1b0 = pdb_1402ed400;
      pppbStack_1a0 = (byte ***)pdb_140f36c30;
      uStack_1a8 = &pppbStack_1d8;
      pdb_140f4e8b0(&UNK_142f6c0c6,&uStack_1b8);
      pppbStack_d0 = (byte ***)pdb_140f36c30;
      pppbStack_d8 = (byte ***)&pppbStack_1d8;
      pdb_140f60760(&uStack_1b8,&UNK_142f6c0e4,&pppbStack_d8);
      uStack_218 = (undefined4)uStack_1b8;
      uStack_214 = uStack_1b8._4_4_;
      uStack_210 = (undefined4)uStack_1b0;
      uStack_20c = uStack_1b0._4_4_;
      pppbStack_208 = (byte ***)uStack_1a8;
      pdb_140f36c40(&pppbStack_1d8);
    }
    else {
      pppbStack_208 = pppbStack_58;
      uStack_218 = (undefined4)uStack_68;
      uStack_214 = uStack_68._4_4_;
      uStack_210 = (undefined4)uStack_60;
      uStack_20c = uStack_60._4_4_;
    }
    pub_142e32760(&uStack_1b8,&pppbStack_3a8,0xd0);
    pppbStack_238 = pppbStack_90;
    pppbStack_230 = pppbStack_88;
    pppbStack_228 = pppbStack_80;
    uStack_298 = (byte ****)pppbStack_98;
  }
  pub_142e32760(&pppbStack_3a8,&uStack_1b8,0xd0);
  uStack_290 = (byte ****)pppbStack_238;
  uStack_288 = (byte ****)pppbStack_230;
  uStack_280 = (byte ****)pppbStack_228;
  uStack_2d0 = uStack_218;
  uStack_2cc = uStack_214;
  uStack_2c8 = uStack_210;
  uStack_2c4 = uStack_20c;
  pppbStack_2c0 = pppbStack_208;
  uStack_3b = 1;
  uStack_3c = 1;
  pppbStack_2d8 = (byte ***)pcVar9;
  pdb_1403c57a0(&uStack_70,pppbStack_50,uVar1);
  if (SBORROW8(0,(longlong)uStack_70)) {
    pppbStack_d8 = (byte ***)&UNK_142f6c0f2;
    pppbStack_d0 = (byte ***)0x3;
    pppbStack_b8 = (byte ***)uStack_68;
    uStack_1b8 = &pppbStack_d8;
    uStack_1b0 = pdb_1402ed400;
    pcVar9 = (code *)&pppbStack_b8;
    pppbStack_1a0 = (byte ***)pdb_140f36c30;
    uStack_1a8 = (byte ****)pcVar9;
    pdb_140f4e8b0(&UNK_142f6c0c6,&uStack_1b8);
    pppbStack_90 = (byte ***)pdb_140f36c30;
    pppbStack_98 = (byte ***)pcVar9;
    pdb_140f60760(&uStack_1b8,&UNK_142f6c0e4,&pppbStack_98);
    uStack_250 = (undefined4)uStack_1b8;
    uStack_24c = uStack_1b8._4_4_;
    pppbStack_248 = (byte ***)uStack_1b0;
    pppbStack_240 = (byte ***)uStack_1a8;
    uStack_3b = 1;
    uStack_3c = 1;
    pdb_140f36c40(&pppbStack_b8);
    pppbStack_258 = (byte ***)0x8000000000000000;
  }
  else {
    pppbStack_248 = (byte ***)uStack_60;
    pppbStack_240 = pppbStack_58;
    pppbStack_258 = (byte ***)uStack_70;
    uStack_250 = (undefined4)uStack_68;
    uStack_24c = uStack_68._4_4_;
  }
  uStack_3d = 1;
  uStack_3e = 1;
  pdb_1403c5c10(&uStack_70,pppbStack_50,uVar1);
  if (SBORROW8(0,(longlong)uStack_70)) {
    pppbStack_d8 = (byte ***)&UNK_142f6c0ea;
    pppbStack_d0 = (byte ***)0x8;
    pppbStack_b8 = (byte ***)uStack_68;
    uStack_1b8 = &pppbStack_d8;
    uStack_1b0 = pdb_1402ed400;
    pcVar9 = (code *)&pppbStack_b8;
    pppbStack_1a0 = (byte ***)pdb_140f36c30;
    uStack_1a8 = (byte ****)pcVar9;
    pdb_140f4e8b0(&UNK_142f6c0c6,&uStack_1b8);
    pppbStack_90 = (byte ***)pdb_140f36c30;
    pppbStack_98 = (byte ***)pcVar9;
    pdb_140f60760(&uStack_1b8,&UNK_142f6c0e4,&pppbStack_98);
    uStack_270 = (undefined4)uStack_1b8;
    uStack_26c = uStack_1b8._4_4_;
    pppbStack_268 = (byte ***)uStack_1b0;
    pppbStack_260 = (byte ***)uStack_1a8;
    uStack_3d = 1;
    uStack_3e = 1;
    pdb_140f36c40(&pppbStack_b8);
    pppbStack_278 = (byte ***)0x8000000000000000;
  }
  else {
    pppbStack_268 = (byte ***)uStack_60;
    pppbStack_260 = pppbStack_58;
    pppbStack_278 = (byte ***)uStack_70;
    uStack_270 = (undefined4)uStack_68;
    uStack_26c = uStack_68._4_4_;
  }
  uStack_3f = 1;
  uStack_40 = 1;
  pdb_1403c59a0(&uStack_70,pppbStack_50,uVar1);
  if (SBORROW8(0,(longlong)uStack_70)) {
    pppbStack_d8 = (byte ***)&UNK_142f6c103;
    pppbStack_d0 = (byte ***)0x7;
    pppbStack_b8 = (byte ***)uStack_68;
    uStack_1b8 = &pppbStack_d8;
    uStack_1b0 = pdb_1402ed400;
    pcVar9 = (code *)&pppbStack_b8;
    pppbStack_1a0 = (byte ***)pdb_140f36c30;
    uStack_1a8 = (byte ****)pcVar9;
    pdb_140f4e8b0(&UNK_142f6c0c6,&uStack_1b8);
    pppbStack_90 = (byte ***)pdb_140f36c30;
    pppbStack_98 = (byte ***)pcVar9;
    pdb_140f60760(&uStack_1b8,&UNK_142f6c0e4,&pppbStack_98);
    uStack_1d0 = (undefined4)uStack_1b8;
    uStack_1cc = uStack_1b8._4_4_;
    pppbStack_1c8 = (byte ***)uStack_1b0;
    pppbStack_1c0 = (byte ***)uStack_1a8;
    uStack_3f = 1;
    uStack_40 = 1;
    pdb_140f36c40(&pppbStack_b8);
    pppbStack_1d8 = (byte ***)0x8000000000000000;
  }
  else {
    pppbStack_1c8 = (byte ***)uStack_60;
    pppbStack_1c0 = pppbStack_58;
    pppbStack_1d8 = (byte ***)uStack_70;
    uStack_1d0 = (undefined4)uStack_68;
    uStack_1cc = uStack_68._4_4_;
  }
  uStack_41 = 1;
  uStack_42 = 1;
  pdb_1403c5e90(&uStack_70,pppbStack_50,uVar1);
  if (SBORROW8(0,(longlong)uStack_70)) {
    pppbStack_d8 = (byte ***)&UNK_142f6c0f5;
    pppbStack_d0 = (byte ***)0xe;
    pppbStack_1f8 = (byte ***)uStack_68;
    uStack_1b8 = &pppbStack_d8;
    uStack_1b0 = pdb_1402ed400;
    pcVar9 = pdb_140f36c30;
    pppbStack_1a0 = (byte ***)pdb_140f36c30;
    uStack_1a8 = &pppbStack_1f8;
    pdb_140f4e8b0(&UNK_142f6c0c6,&uStack_1b8);
    pppbStack_90 = (byte ***)pdb_140f36c30;
    pppbStack_98 = (byte ***)&pppbStack_1f8;
    pdb_140f60760(&uStack_1b8,&UNK_142f6c0e4,&pppbStack_98);
    pppbStack_b0 = (byte ***)uStack_1b8;
    pppbStack_a8 = (byte ***)uStack_1b0;
    pppbStack_a0 = (byte ***)uStack_1a8;
    uStack_41 = 1;
    uStack_42 = 1;
    pdb_140f36c40();
    pppbStack_b8 = (byte ***)0x8000000000000000;
  }
  else {
    pppbStack_a8 = (byte ***)uStack_60;
    pppbStack_a0 = pppbStack_58;
    pppbStack_b8 = (byte ***)uStack_70;
    pppbStack_b0 = (byte ***)uStack_68;
  }
  ppppbVar6 = &pppbStack_e8;
  if ((byte ****)pppbStack_e8 == (byte ****)0x0) {
    uStack_70 = (byte ****)0x0;
    pcVar7 = (code *)0x8;
    ppppbVar6 = (byte ****)0x0;
  }
  else {
    pdb_14007ee60();
    pcVar7 = (code *)pub_1406abab0(0x70,8);
    if (pcVar7 == (code *)0x0) {
      uStack_43 = 1;
      uStack_44 = 1;
      pdb_142dc7e2a(8,0x70);
LAB_1405780f6:
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    uStack_70 = (byte ****)0x1;
  }
  uStack_1b8 = (byte ****)&uStack_60;
  uStack_60 = (byte ****)0x0;
  uStack_1b0 = (code *)0x0;
  uStack_1a8 = (byte ****)pcVar7;
  uStack_68 = pcVar7;
  pdb_140564db0(ppppbVar6,&uStack_1b8);
  ppppbVar6 = (byte ****)pppbStack_e8;
  pppbStack_1f8 = (byte ***)uStack_70;
  pcStack_1f0 = uStack_68;
  ppbStack_1e8 = (byte **)uStack_60;
  if ((byte ****)pppbStack_e8 == (byte ****)0x0) {
    ppppbVar6 = (byte ****)pppbStack_50;
    if (!SBORROW8(0,(longlong)ppbStack_2b8)) {
      uStack_c0 = (code *)CONCAT44(uStack_29c,uStack_2a0);
      pppbStack_d8 = (byte ***)ppbStack_2b8;
      pppbStack_d0 = pppbStack_50;
      uStack_c8 = uStack_2a8;
      uStack_c4 = uStack_2a4;
      ppppbVar6 = uStack_1b8;
      goto joined_r0x000140577fa5;
    }
  }
  else if ((byte ***)ppbStack_2b8 != (byte ***)0x0) {
    pub_1406abac0((byte *)pppbStack_50,(ulonglong)ppbStack_2b8,1);
  }
  uStack_70 = &pppbStack_98;
  uStack_68 = pdb_140f36c30;
  pppbStack_98 = (byte ***)ppppbVar6;
  pdb_140f60760(&uStack_1b8,&UNK_142f6c0e4,&uStack_70);
  pppbStack_d0 = (byte ***)uStack_1b8;
  uStack_c8 = (undefined4)uStack_1b0;
  uStack_c4 = uStack_1b0._4_4_;
  uStack_c0 = (code *)uStack_1a8;
  uStack_45 = 1;
  pdb_140f36c40(&pppbStack_98);
  pppbStack_d8 = (byte ***)0x8000000000000000;
  ppppbVar6 = uStack_1b8;
joined_r0x000140577fa5:
  ppppbVar8 = (byte ****)pppbStack_3a8;
  uStack_1b8 = ppppbVar6;
  if (!SBORROW8(0,(longlong)pppbStack_3a8)) {
    uStack_1b8 = (byte ****)CONCAT44(uStack_384,uStack_388);
    if (SBORROW8(0,(longlong)uStack_1b8)) {
      pcVar9 = (code *)0x8000000000000000;
      uStack_1b8 = ppppbVar6;
    }
    else {
      pppbStack_e0 = (byte ***)CONCAT44(uStack_39c,uStack_3a0);
      pppbStack_78 = pppbStack_3a8;
      pub_142e32760(&uStack_1b0,&uStack_380,0xa8);
      pdb_140a937d0(&pppbStack_98,auStack_118);
      pdb_140a939a0(&uStack_70,auStack_118);
      pcVar9 = (code *)uStack_1b8;
      pub_142e32760(auStack_490,&uStack_1b0,0xa8);
      pppbStack_3e8 = pppbStack_98;
      pppbStack_3e0 = pppbStack_90;
      pppbStack_3d8 = pppbStack_88;
      pppbStack_3d0 = pppbStack_80;
      pppbStack_3c8 = (byte ***)uStack_70;
      pcStack_3c0 = uStack_68;
      ppbStack_3b8 = (byte **)uStack_60;
      pppbStack_3b0 = pppbStack_58;
      ppppbVar8 = (byte ****)pppbStack_78;
    }
  }
  param_1[0xe] = (longlong)pppbStack_390;
  param_1[0xc] = CONCAT44(uStack_39c,uStack_3a0);
  param_1[0xd] = CONCAT44(uStack_394,uStack_398);
  param_1[0x2f] = CONCAT44(uStack_2c4,uStack_2c8);
  param_1[0x30] = (longlong)pppbStack_2c0;
  param_1[0x2d] = (longlong)pppbStack_2d8;
  param_1[0x2e] = CONCAT44(uStack_2cc,uStack_2d0);
  param_1[0x33] = (longlong)pppbStack_248;
  param_1[0x34] = (longlong)pppbStack_240;
  param_1[0x31] = (longlong)pppbStack_258;
  param_1[0x32] = CONCAT44(uStack_24c,uStack_250);
  param_1[0x3b] = (longlong)pppbStack_268;
  param_1[0x3c] = (longlong)pppbStack_260;
  param_1[0x39] = (longlong)pppbStack_278;
  param_1[0x3a] = CONCAT44(uStack_26c,uStack_270);
  param_1[0x37] = (longlong)pppbStack_1c8;
  param_1[0x38] = (longlong)pppbStack_1c0;
  param_1[0x35] = (longlong)pppbStack_1d8;
  param_1[0x36] = CONCAT44(uStack_1cc,uStack_1d0);
  param_1[0x3d] = (longlong)pppbStack_b8;
  param_1[0x3e] = (longlong)pppbStack_b0;
  param_1[0x3f] = (longlong)pppbStack_a8;
  param_1[0x40] = (longlong)pppbStack_a0;
  *param_1 = (longlong)pppbStack_1f8;
  param_1[1] = (longlong)pcStack_1f0;
  param_1[2] = (longlong)ppbStack_1e8;
  param_1[5] = CONCAT44(uStack_c4,uStack_c8);
  param_1[6] = (longlong)uStack_c0;
  param_1[3] = (longlong)pppbStack_d8;
  param_1[4] = (longlong)pppbStack_d0;
  *(undefined4 *)(param_1 + 7) = (undefined4)uStack_298;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_298._4_4_;
  *(undefined4 *)(param_1 + 8) = (undefined4)uStack_290;
  *(undefined4 *)((longlong)param_1 + 0x44) = uStack_290._4_4_;
  *(undefined4 *)(param_1 + 9) = (undefined4)uStack_288;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_288._4_4_;
  *(undefined4 *)(param_1 + 10) = (undefined4)uStack_280;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_280._4_4_;
  param_1[0xb] = (longlong)ppppbVar8;
  param_1[0xf] = (longlong)pcVar9;
  pub_142e32760(param_1 + 0x10,auStack_490,0xe8);
  return param_1;
}

