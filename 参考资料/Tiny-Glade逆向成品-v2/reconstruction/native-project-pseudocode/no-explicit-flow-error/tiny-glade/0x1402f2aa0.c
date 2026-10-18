// VA 0x1402f2aa0, PDB extent 926 bytes
// tiny_glade::app_config::write_game_config_to_disk
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/app_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::app_config::write_game_config_to_disk
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/app_config.rs
   Extent: 926 */

void pdb_1402f2aa0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong *puStack_170;
  code *pcStack_168;
  byte *pbStack_160;
  code *pcStack_158;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulonglong uStack_80;
  byte *pbStack_78;
  undefined8 uStack_70;
  longlong alStack_60 [3];
  byte *pbStack_48;
  code *pcStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uVar1 = pdb_140dc7520();
  pdb_140f3e9e0(&uStack_80,uVar1,param_2,&UNK_142f3964a,0xc);
  uStack_98 = 0xffffffffffffffff;
  uStack_128 = 0x8000000000000000;
  puStack_120 = &UNK_142f39ca4;
  uStack_118 = 2;
  uStack_110 = 0x8000000000000000;
  puStack_108 = &UNK_142f39ca6;
  uStack_100 = 4;
  uStack_f8 = 0x8000000000000000;
  puStack_f0 = &UNK_142f39caa;
  uStack_e8 = 1;
  uStack_88 = 0x100000000;
  uStack_90 = 0;
  uStack_e0 = 0x8000000000000000;
  alStack_60[2] = 0;
  alStack_60[0] = 1;
  alStack_60[1] = 0x80;
  pdb_1403929b0(&puStack_170,alStack_60,param_1,&uStack_128);
  if ((char)puStack_170 == '2') {
    pcStack_40 = pcStack_168;
    pbStack_48 = pbStack_160;
    lVar2 = pdb_140f561c0(pbStack_78,uStack_70,pbStack_160,pcStack_158);
    if (pcStack_40 != (code *)0x0) {
      pub_1406abac0(pbStack_48,(ulonglong)pcStack_40,1);
    }
    if (lVar2 != 0) {
      alStack_60[0] = lVar2;
      if (*_DAT_143ca8e90 != 0) {
        pcStack_168 = pdb_140f58250;
        pcStack_158 = pdb_140f56800;
        uStack_128 = 0;
        puStack_120 = &UNK_142f39634;
        uStack_118 = 0x16;
        uStack_110 = 0;
        puStack_108 = &UNK_142f39610;
        uStack_100 = 0x23;
        uStack_f8 = 1;
        puStack_f0 = &UNK_142f39634;
        uStack_e8 = 0x16;
        uStack_e0 = 0x11c00000001;
        puStack_d8 = &UNK_142f396a8;
        puStack_170 = &uStack_80;
        pbStack_160 = (byte *)alStack_60;
        ppuStack_d0 = &puStack_170;
        pdb_140f332f0(&uStack_31,&uStack_128);
      }
      pdb_1404b38e0(alStack_60);
    }
    if (uStack_80 != 0) {
      pub_1406abac0(pbStack_78,uStack_80,1);
    }
    return;
  }
  uStack_e8 = uStack_130;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_142f39788,0x2b,&uStack_128,&UNK_142f39768,&UNK_142f39690);
}

