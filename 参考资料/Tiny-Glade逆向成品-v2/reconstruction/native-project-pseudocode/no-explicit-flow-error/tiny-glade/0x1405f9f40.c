// VA 0x1405f9f40, PDB extent 895 bytes
// tiny_glade::mock_crash_reporter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::mock_crash_reporter
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 895 */

void pdb_1405f9f40(ulonglong *param_1)

{
  undefined8 auStack_1d0 [9];
  undefined8 auStack_188 [4];
  ulonglong *puStack_168;
  code *pcStack_160;
  undefined8 *puStack_158;
  code *pcStack_150;
  undefined8 *puStack_148;
  code *pcStack_140;
  undefined8 *puStack_138;
  code *pcStack_130;
  undefined8 *puStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  code *pcStack_110;
  undefined8 *puStack_108;
  code *pcStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  undefined8 *puStack_d8;
  code *pcStack_d0;
  undefined8 *puStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  code *pcStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  code *pcStack_90;
  code *pcStack_88;
  code *pcStack_80;
  code *pcStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  ulonglong *puStack_38;
  byte *pbStack_30;
  undefined4 uStack_28;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pbStack_30 = (byte *)param_1[1];
  pcStack_98 = (code *)0x0;
  pcStack_a8 = (code *)0x1;
  pcStack_a0 = (code *)0x80;
  puStack_38 = param_1;
  pdb_1403925a0(&pcStack_110,&pcStack_a8,pbStack_30,param_1[2]);
  if ((char)pcStack_110 == '2') {
    pcStack_a8 = pcStack_100;
    pcStack_a0 = pcStack_f8;
    pcStack_98 = pcStack_f0;
    pcStack_90 = pcStack_e8;
    pcStack_88 = pcStack_e0;
    pcStack_80 = (code *)puStack_d8;
    pcStack_78 = pcStack_d0;
    pcStack_70 = (code *)puStack_c8;
    uStack_68 = (code *)CONCAT44(uStack_bc,uStack_c0);
    uStack_60 = (code *)CONCAT44(uStack_b4,uStack_b8);
    if ((code *)puStack_108 != (code *)0x800000000000000d) {
      puStack_168 = puStack_108;
      pcStack_160 = pcStack_100;
      puStack_158 = (undefined8 *)pcStack_f8;
      pcStack_150 = pcStack_f0;
      puStack_148 = (undefined8 *)pcStack_e8;
      pcStack_140 = pcStack_e0;
      puStack_138 = puStack_d8;
      pcStack_130 = pcStack_d0;
      puStack_128 = puStack_c8;
      uStack_120 = uStack_c0;
      uStack_11c = uStack_bc;
      uStack_118 = uStack_b8;
      uStack_114 = uStack_b4;
      uStack_28 = (undefined4)
                  CONCAT71((int7)((ulonglong)puStack_108 >> 8),
                           puStack_108 < (code *)0x8000000000000005);
      goto LAB_1405fa0f9;
    }
  }
  else {
    uStack_48 = uStack_b0;
    uStack_68 = pcStack_d0;
    uStack_60 = (code *)puStack_c8;
    pcStack_78 = pcStack_e0;
    pcStack_70 = (code *)puStack_d8;
    pcStack_88 = pcStack_f0;
    pcStack_80 = pcStack_e8;
    pcStack_98 = pcStack_100;
    pcStack_90 = pcStack_f8;
    pcStack_a8 = pcStack_110;
    pcStack_a0 = (code *)puStack_108;
    pcStack_160 = pdb_140dd7350;
    puStack_168 = (ulonglong *)&pcStack_a8;
    pdb_140f4e780(&UNK_142f75784,&puStack_168);
    pdb_1404b4a50(&pcStack_a8);
  }
  puStack_168 = (ulonglong *)0x800000000000000d;
  uStack_28 = 0;
LAB_1405fa0f9:
  uStack_21 = 1;
  pdb_140f60120(&pcStack_a8,1,0);
  pcStack_e8 = pcStack_98;
  pcStack_e0 = pcStack_90;
  pcStack_f8 = pcStack_a8;
  pcStack_f0 = pcStack_a0;
  uStack_c0 = 0x1000100;
  uStack_bc = CONCAT31(uStack_bc._1_3_,1);
  pcStack_110 = (code *)0x0;
  puStack_108 = (undefined8 *)0x8;
  pcStack_100 = (code *)0x0;
  puStack_d8 = (undefined8 *)0x8000000000000000;
  auStack_1d0[0] = 0x8000000000000004;
  auStack_188[0] = 0x8000000000000000;
  uStack_58 = CONCAT44(uStack_114,uStack_118);
  uStack_60 = (code *)CONCAT44(uStack_11c,uStack_120);
  uStack_68 = (code *)puStack_128;
  pcStack_78 = (code *)puStack_138;
  pcStack_70 = pcStack_130;
  pcStack_88 = (code *)puStack_148;
  pcStack_80 = pcStack_140;
  pcStack_98 = (code *)puStack_158;
  pcStack_90 = pcStack_150;
  pcStack_a8 = (code *)puStack_168;
  pcStack_a0 = pcStack_160;
  uStack_21 = 0;
  pdb_140005570(&pcStack_110,auStack_1d0,auStack_188,&pcStack_a8);
  if (*puStack_38 != 0) {
    pub_1406abac0(pbStack_30,*puStack_38,1);
  }
  return;
}

