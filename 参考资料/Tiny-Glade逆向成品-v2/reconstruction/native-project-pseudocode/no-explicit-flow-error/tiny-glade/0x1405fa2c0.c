// VA 0x1405fa2c0, PDB extent 277 bytes
// tiny_glade::log_time_to_first_frame
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::log_time_to_first_frame
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 277 */

void pdb_1405fa2c0(undefined8 param_1,undefined4 param_2)

{
  undefined1 uStack_91;
  undefined8 uStack_90;
  int iStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined *puStack_10;
  undefined8 **ppuStack_8;
  
  iStack_88 = _DAT_143ca31f0;
  _DAT_143ca31f0 = 1000000000;
  if (iStack_88 != 1000000000) {
    uStack_90 = _DAT_143cb2bd0;
    if (2 < *_DAT_143ca8e90) {
      uStack_78 = param_2;
      uStack_80 = pdb_140f3cb70(&uStack_90);
      puStack_70 = &uStack_80;
      pcStack_68 = pdb_140f72840;
      uStack_60 = 0;
      puStack_58 = &UNK_142f75822;
      uStack_50 = 10;
      uStack_48 = 0;
      puStack_40 = &UNK_142f75766;
      uStack_38 = 0x1d;
      uStack_30 = 3;
      puStack_28 = &UNK_142f75822;
      uStack_20 = 10;
      uStack_18 = 0x4500000001;
      puStack_10 = &UNK_142f7580a;
      ppuStack_8 = &puStack_70;
      pdb_140f332f0(&uStack_91,&uStack_60);
    }
  }
  return;
}

