// VA 0x140486ba0, PDB extent 886 bytes
// tiny_glade::panic_reporter::panic_screenshot::create_graphics_resources
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/panic_screenshot.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   tiny_glade::panic_reporter::panic_screenshot::create_graphics_resources
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/panic_screenshot.rs
   Extent: 886 */

void pdb_140486ba0(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *arg0;
  ulonglong arg1;
  bool bVar3;
  int iStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 *puStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uVar1 = pdb_140e1d070(0x71008,0x30);
  pdb_140e55ce0(&iStack_148,param_1,&UNK_142f5dbc8,0x19,uVar1);
  if (iStack_148 != 0xb) {
    uStack_48 = uStack_108;
    uStack_40 = uStack_100;
    uStack_58 = uStack_118;
    uStack_54 = uStack_114;
    uStack_50 = uStack_110;
    uStack_4c = uStack_10c;
    uStack_68 = uStack_128;
    uStack_64 = uStack_124;
    uStack_60 = uStack_120;
    uStack_5c = uStack_11c;
    uStack_78 = uStack_138;
    uStack_74 = uStack_134;
    uStack_70 = uStack_130;
    uStack_6c = uStack_12c;
    uStack_88 = CONCAT44(uStack_144,iStack_148);
    uStack_80 = uStack_140;
    uStack_7c = uStack_13c;
    if (*_DAT_143ca8e90 != 0) {
      puStack_98 = &uStack_88;
      pcStack_90 = pdb_140489990;
      lStack_f8 = 0;
      puStack_f0 = &UNK_142f5dcbd;
      uStack_e8 = 0x2c;
      uStack_e0 = 0;
      puStack_d8 = &UNK_142f5d9c0;
      uStack_d0 = 0x38;
      uStack_c8 = 1;
      puStack_c0 = &UNK_142f5dcbd;
      uStack_b8 = 0x2c;
      uStack_b0 = 0x3600000001;
      puStack_a8 = &UNK_142f5dc90;
      ppuStack_a0 = &puStack_98;
      pdb_140f332f0(&uStack_32,&lStack_f8);
    }
    lVar2 = 0;
    if (7 < uStack_88) {
      lVar2 = uStack_88 - 8;
    }
    if (lVar2 == 0) {
      if (((uStack_88 < 6) && ((0x32UL >> (uStack_88 & 0x3f) & 1) != 0)) &&
         (CONCAT44(uStack_7c,uStack_80) != 0)) {
        pub_1406abac0((byte *)CONCAT44(uStack_74,uStack_78),CONCAT44(uStack_7c,uStack_80),1);
      }
      arg1 = CONCAT44(uStack_64,uStack_68);
      if (arg1 == 0) {
        return;
      }
      arg0 = (byte *)CONCAT44(uStack_5c,uStack_60);
    }
    else {
      if (lVar2 == 1) {
        pdb_1404b83f0(&uStack_80);
        return;
      }
      arg1 = CONCAT44(uStack_7c,uStack_80);
      if (arg1 == 0) {
        return;
      }
      arg0 = (byte *)CONCAT44(uStack_74,uStack_78);
    }
    pub_1406abac0(arg0,arg1,1);
    return;
  }
  LOCK();
  bVar3 = DAT_143cb2ba8 == '\0';
  if (bVar3) {
    DAT_143cb2ba8 = '\x01';
  }
  UNLOCK();
  if (!bVar3) {
    uStack_31 = 1;
    pdb_142dbd1a0(&DAT_143cb2ba8);
  }
  uStack_31 = 1;
  pdb_140e9a150(&DAT_143cb2ba8);
  lStack_f8 = _DAT_143cb2bb0;
  puStack_f0 = (undefined *)_DAT_143cb2bb8;
  uStack_e8 = _DAT_143cb2bc0;
  _DAT_143cb2bb8 = CONCAT44(uStack_134,uStack_138);
  _DAT_143cb2bc0 = CONCAT44(uStack_12c,uStack_130);
  if (_DAT_143cb2bb0 != 0) {
    _DAT_143cb2bb0 = CONCAT44(uStack_13c,uStack_140);
    pdb_1404b8e50(&lStack_f8);
    uStack_31 = 0;
    pdb_140094990(&DAT_143cb2ba8);
    uStack_31 = 0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_142f5dbe1,0x96,&UNK_142f5dc78);
  }
  uStack_31 = 0;
  _DAT_143cb2bb0 = CONCAT44(uStack_13c,uStack_140);
  pdb_140e9a350();
  LOCK();
  bVar3 = DAT_143cb2ba8 == '\x01';
  if (bVar3) {
    DAT_143cb2ba8 = '\0';
  }
  UNLOCK();
  if (bVar3) {
    return;
  }
  uStack_31 = 0;
  pdb_142dbcef0(&DAT_143cb2ba8,0);
  return;
}

