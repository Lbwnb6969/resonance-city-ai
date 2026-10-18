// VA 0x1400871f0, PDB extent 660 bytes
// tiny_glade::rollercoaster::CoasterAudioInstance::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/rollercoaster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::rollercoaster::CoasterAudioInstance::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/rollercoaster.rs
   Extent: 660 */

longlong *
pdb_1400871f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             float param_5,undefined8 *param_6,longlong param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 **ppuStack_e8;
  int iStack_e0;
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
  undefined8 *puStack_b0;
  code *pcStack_a8;
  undefined4 **ppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  undefined4 *puStack_50;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  if (_DAT_142e37840 <= param_5) {
    uStack_90 = param_3;
    uStack_88 = param_4;
    pdb_140a8ccc0(&iStack_e0);
    if ((iStack_e0 == 2) && (puStack_50 = &uStack_d8, *_DAT_143ca8e90 != 0)) {
      puStack_b0 = &uStack_90;
      pcStack_a8 = pdb_1402ed420;
      ppuStack_a0 = &puStack_50;
      pcStack_98 = pdb_140677370;
      uStack_140 = 0;
      puStack_138 = &UNK_142e37e55;
      uStack_130 = 0x19;
      uStack_128 = 0;
      puStack_120 = &UNK_142e37ca8;
      uStack_118 = 0x26;
      uStack_110 = 1;
      puStack_108 = &UNK_142e37e55;
      uStack_100 = 0x19;
      uStack_f8 = 0x5600000001;
      puStack_f0 = &UNK_142e37e40;
      ppuStack_e8 = &puStack_b0;
      pdb_140f332f0(&uStack_41,&uStack_140);
    }
    lStack_80 = CONCAT44(uStack_dc,iStack_e0);
    if (lStack_80 == 2) {
      pdb_140f36c40();
      *param_1 = 2;
    }
    else {
      lStack_58 = CONCAT44(uStack_b4,uStack_b8);
      lStack_68 = CONCAT44(uStack_c4,uStack_c8);
      lStack_60 = CONCAT44(uStack_bc,uStack_c0);
      uStack_78 = uStack_d8;
      uStack_74 = uStack_d4;
      uStack_70 = uStack_d0;
      uStack_6c = uStack_cc;
      pdb_140a8e0c0(&lStack_80,param_5);
      puVar1 = param_6 + param_7 * 3;
      for (; param_6 != puVar1; param_6 = param_6 + 3) {
        pdb_140a8e730(&lStack_80,*param_6,param_6[1],*(undefined4 *)(param_6 + 2));
      }
      param_1[4] = lStack_60;
      param_1[5] = lStack_58;
      param_1[2] = CONCAT44(uStack_6c,uStack_70);
      param_1[3] = lStack_68;
      *param_1 = lStack_80;
      param_1[1] = CONCAT44(uStack_74,uStack_78);
      *(float *)(param_1 + 6) = param_5;
    }
  }
  else {
    *param_1 = 2;
  }
  return param_1;
}

