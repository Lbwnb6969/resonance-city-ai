// VA 0x140a3a200, PDB extent 2227 bytes
// country_core::game_profile::load_game_profile
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_profile.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::game_profile::load_game_profile
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_profile.rs
   Extent: 2227 */

void pdb_140a3a200(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte **ppbStack_d00;
  code *pcStack_cf8;
  byte **ppbStack_928;
  code *pcStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined *puStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined *puStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined *puStack_8d8;
  byte **ppbStack_8d0;
  undefined1 auStack_550 [16];
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined2 uStack_520;
  undefined6 uStack_51e;
  undefined2 uStack_518;
  undefined8 uStack_516;
  longlong lStack_508;
  undefined *puStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined *puStack_4b8;
  byte ***pppbStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  byte *pbStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
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
  undefined8 uStack_a8;
  undefined *puStack_a0;
  byte ***pppbStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulonglong uStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  ulonglong uStack_58;
  byte **ppbStack_50;
  undefined8 uStack_48;
  byte **ppbStack_40;
  byte *pbStack_38;
  ulonglong uStack_30;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  uVar2 = pdb_140dc7520();
  pdb_140f3e9e0(&uStack_78,uVar2,param_2,&UNK_14303b8c0,0xb);
  uStack_21 = 1;
  pbStack_38 = pbStack_70;
  cVar1 = pdb_140f3ec10(pbStack_70,uStack_68);
  if (cVar1 == '\0') {
    if (2 < *_DAT_143ca8e90) {
      lStack_508 = 0;
      puStack_500 = &UNK_14303b7d6;
      uStack_4f8 = 0x1a;
      uStack_4f0 = 0;
      uStack_4e8 = &UNK_14303b7ae;
      uStack_4e0 = 0x27;
      uStack_4d8 = 3;
      uStack_4d0 = &UNK_14303b7d6;
      uStack_4c8 = 0x1a;
      uStack_4c0 = 0x7f00000001;
      puStack_4b8 = &UNK_14303b780;
      pppbStack_4b0 = (byte ***)0x5d;
      uStack_21 = 1;
      pdb_140f332f0(&uStack_23,&lStack_508);
    }
    uStack_518 = 0;
    uStack_516 = 0;
    uStack_528 = 0;
    uStack_520 = 0;
    uStack_51e = 0;
    uStack_538 = 0;
    uStack_530 = 0;
    uStack_21 = 1;
    pdb_140eacc10(auStack_550);
    uStack_21 = 1;
    pdb_140a1edc0(&lStack_508);
    uVar2 = pub_142e32760(&ppbStack_928,&lStack_508,0x3d8);
    uStack_540 = 0;
    uStack_30 = CONCAT44(uStack_30._4_4_,(int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1));
  }
  else {
    uStack_30 = uStack_78;
    pdb_140f55d10(&uStack_58,pbStack_38,uStack_68);
    if (uStack_30 != 0) {
      pub_1406abac0(pbStack_38,uStack_30,1);
    }
    if (SBORROW8(0,uStack_58)) {
      ppbStack_d00 = ppbStack_50;
      if (*_DAT_143ca8e90 != 0) {
        ppbStack_928 = (byte **)&ppbStack_d00;
        pcStack_920 = pdb_140f56800;
        lStack_508 = 0;
        puStack_500 = &UNK_14303b7d6;
        uStack_4f8 = 0x1a;
        uStack_4f0 = 0;
        uStack_4e8 = &UNK_14303b7ae;
        uStack_4e0 = 0x27;
        uStack_4d8 = 1;
        uStack_4d0 = &UNK_14303b7d6;
        uStack_4c8 = 0x1a;
        uStack_4c0 = 0x7300000001;
        puStack_4b8 = &UNK_14303b83e;
        pppbStack_4b0 = &ppbStack_928;
        pdb_140f332f0(&uStack_23,&lStack_508);
      }
      uStack_518 = 0;
      uStack_516 = 0;
      uStack_528 = 0;
      uStack_520 = 0;
      uStack_51e = 0;
      uStack_538 = 0;
      uStack_530 = 0;
      pdb_140eacc10(auStack_550);
      pdb_140a1edc0(&lStack_508);
      pub_142e32760(&ppbStack_928,&lStack_508,0x3d8);
      uStack_540 = 0;
      uStack_21 = 0;
      pdb_1404b38e0(&ppbStack_d00);
    }
    else {
      uStack_30 = uStack_58;
      uStack_918 = 0;
      ppbStack_928 = (byte **)0x1;
      pcStack_920 = (code *)0x80;
      ppbStack_40 = ppbStack_50;
      pdb_1417413a0(&lStack_508,&ppbStack_928,ppbStack_50,uStack_48);
      if (SBORROW8(0,lStack_508)) {
        uStack_88 = uStack_4a0;
        pppbStack_98 = pppbStack_4b0;
        uStack_90 = uStack_4a8;
        uStack_a8 = uStack_4c0;
        puStack_a0 = puStack_4b8;
        uStack_b8 = (undefined4)uStack_4d0;
        uStack_b4 = uStack_4d0._4_4_;
        uStack_b0 = (undefined4)uStack_4c8;
        uStack_ac = uStack_4c8._4_4_;
        uStack_c8 = (undefined4)uStack_4e0;
        uStack_c4 = uStack_4e0._4_4_;
        uStack_c0 = (undefined4)uStack_4d8;
        uStack_bc = uStack_4d8._4_4_;
        uStack_d8 = (undefined4)uStack_4f0;
        uStack_d4 = uStack_4f0._4_4_;
        uStack_d0 = (undefined4)uStack_4e8;
        uStack_cc = uStack_4e8._4_4_;
        pbStack_e8 = puStack_500;
        uStack_e0 = (undefined4)uStack_4f8;
        uStack_dc = uStack_4f8._4_4_;
        if (*_DAT_143ca8e90 != 0) {
          ppbStack_d00 = &pbStack_e8;
          pcStack_cf8 = pdb_140a45710;
          ppbStack_928 = (byte **)0x0;
          pcStack_920 = (code *)&UNK_14303b7d6;
          uStack_918 = 0x1a;
          uStack_910 = 0;
          puStack_908 = &UNK_14303b7ae;
          uStack_900 = 0x27;
          uStack_8f8 = 1;
          puStack_8f0 = &UNK_14303b7d6;
          uStack_8e8 = 0x1a;
          uStack_8e0 = 0x6700000001;
          puStack_8d8 = &UNK_14303b7f0;
          ppbStack_8d0 = (byte **)&ppbStack_d00;
          pdb_140f332f0(&uStack_23,&ppbStack_928);
        }
        uStack_518 = 0;
        uStack_516 = 0;
        uStack_528 = 0;
        uStack_520 = 0;
        uStack_51e = 0;
        uStack_538 = 0;
        uStack_530 = 0;
        pdb_140eacc10(auStack_550);
        pdb_140a1edc0(&ppbStack_d00);
        pub_142e32760(&ppbStack_928,&ppbStack_d00,0x3d8);
        uStack_540 = 0;
        pdb_140987e50(&pbStack_e8);
      }
      else {
        pub_142e32760(&ppbStack_928,&lStack_508,0x420);
      }
      if (uStack_30 != 0) {
        pub_1406abac0((byte *)ppbStack_40,uStack_30,1);
      }
    }
    uStack_30 = uStack_30 & 0xffffffff00000000;
  }
  uStack_22 = 1;
  pbVar3 = (byte *)pdb_140a3ab00(&ppbStack_928);
  if (pbVar3 != (byte *)0x0) {
    pbStack_e8 = pbVar3;
    if (*_DAT_143ca8e90 != 0) {
      ppbStack_d00 = &pbStack_e8;
      pcStack_cf8 = pdb_140f36c20;
      lStack_508 = 0;
      puStack_500 = &UNK_14303b7d6;
      uStack_4f8 = 0x1a;
      uStack_4f0 = 0;
      uStack_4e8 = &UNK_14303b7ae;
      uStack_4e0 = 0x27;
      uStack_4d8 = 1;
      uStack_4d0 = &UNK_14303b7d6;
      uStack_4c8 = 0x1a;
      uStack_4c0 = 0x8500000001;
      puStack_4b8 = &UNK_14303b886;
      pppbStack_4b0 = &ppbStack_d00;
      pdb_140f332f0(&uStack_23,&lStack_508);
    }
    uStack_22 = 1;
    pdb_140f36c40(&pbStack_e8);
  }
  pub_142e32760(&lStack_508,&ppbStack_928,0x420);
  uStack_22 = 0;
  pdb_1416193a0(param_1,&lStack_508,&UNK_14303b8a8);
  if (((char)uStack_30 != '\0') && (uStack_78 != 0)) {
    pub_1406abac0(pbStack_38,uStack_78,1);
  }
  return;
}

