// VA 0x1402f2e40, PDB extent 1507 bytes
// tiny_glade::app_config::update_vulkan_allowlist_defaults
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/app_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::app_config::update_vulkan_allowlist_defaults
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/app_config.rs
   Extent: 1507 */

void pdb_1402f2e40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong *puStack_1e0;
  code *pcStack_1d8;
  byte **ppbStack_1d0;
  code *pcStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  byte **ppbStack_1a0;
  byte **ppbStack_198;
  code *pcStack_190;
  byte **ppbStack_188;
  byte **ppbStack_180;
  undefined8 **ppuStack_178;
  code *pcStack_170;
  byte *pbStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 **ppuStack_110;
  ulonglong uStack_108;
  byte *pbStack_100;
  undefined8 uStack_f8;
  ulonglong uStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d0;
  ulonglong *puStack_c8;
  code *pcStack_c0;
  byte **ppbStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  byte **ppbStack_88;
  byte **ppbStack_80;
  code *pcStack_78;
  byte **ppbStack_70;
  byte **ppbStack_68;
  longlong lStack_60;
  ulonglong uStack_50;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uVar5 = pdb_140dc7550();
  pdb_140f3e9e0(&uStack_f0,uVar5,param_2,&UNK_142f396d0,0x24);
  pdb_140f55d10(&uStack_108,pbStack_e8,uStack_e0);
  if (SBORROW8(0,uStack_108)) {
    pbStack_168 = pbStack_100;
    if (*_DAT_143ca8e90 != 0) {
      pcStack_1d8 = pdb_140f58250;
      ppbStack_1d0 = &pbStack_168;
      pcStack_1c8 = pdb_140f56800;
      puStack_c8 = (ulonglong *)0x0;
      pcStack_c0 = (code *)&UNK_142f39634;
      ppbStack_b8 = (byte **)0x16;
      pcStack_b0 = (code *)0x0;
      uStack_a8 = &UNK_142f39610;
      uStack_a0 = 0x23;
      uStack_98 = 1;
      uStack_90 = &UNK_142f39634;
      ppbStack_88 = (byte **)0x16;
      ppbStack_80 = (byte **)0x15000000001;
      pcStack_78 = (code *)&UNK_142f39752;
      ppbStack_70 = (byte **)&puStack_1e0;
      puStack_1e0 = &uStack_f0;
      pdb_140f332f0(&uStack_41,&puStack_c8);
    }
    pdb_1404b38e0(&pbStack_168);
  }
  else {
    uStack_50 = uStack_108;
    ppbStack_b8 = (byte **)0x0;
    puStack_c8 = (ulonglong *)0x1;
    pcStack_c0 = (code *)0x80;
    pbStack_d0 = pbStack_100;
    pdb_140392130(&puStack_1e0,&puStack_c8,pbStack_100,uStack_f8);
    if ((char)puStack_1e0 == '2') {
      pbStack_168 = (byte *)((ulonglong)pbStack_168 & 0xffffffff00000000);
      lVar1 = *(longlong *)(param_1 + 0x28);
      ppbStack_70 = ppbStack_1d0 + (longlong)pcStack_1c8 * 4;
      lStack_60 = param_1 + 0x30;
      puStack_c8 = (ulonglong *)0x0;
      uStack_a8 = (undefined *)0x0;
      ppbStack_88 = ppbStack_1d0;
      ppbStack_80 = ppbStack_1d0;
      pcStack_78 = pcStack_1d8;
      ppbStack_68 = &pbStack_168;
      pdb_140176cc0(param_1 + 0x18,&puStack_c8);
      uVar4 = *(uint *)(param_1 + 0x30);
      if (*(uint *)(param_1 + 0x30) < (uint)pbStack_168) {
        uVar4 = (uint)pbStack_168;
      }
      *(uint *)(param_1 + 0x30) = uVar4;
      uVar2 = *(ulonglong *)(param_1 + 0x28);
      if (1 < uVar2) {
        lVar3 = *(longlong *)(param_1 + 0x20);
        if (uVar2 < 0x15) {
          lVar6 = lVar3 + 0x20;
          do {
            pdb_1400defe0(lVar3,lVar6);
            lVar6 = lVar6 + 0x20;
          } while (lVar6 != uVar2 * 0x20 + lVar3);
        }
        else {
          pdb_140224660(lVar3,uVar2,&uStack_41);
        }
      }
      pdb_140173710(param_1 + 0x18);
      if ((lVar1 != *(longlong *)(param_1 + 0x28)) && (2 < *_DAT_143ca8e90)) {
        puStack_c8 = (ulonglong *)0x0;
        pcStack_c0 = (code *)&UNK_142f39634;
        ppbStack_b8 = (byte **)0x16;
        pcStack_b0 = (code *)0x0;
        uStack_a8 = &UNK_142f39610;
        uStack_a0 = 0x23;
        uStack_98 = 3;
        uStack_90 = &UNK_142f39634;
        ppbStack_88 = (byte **)0x16;
        ppbStack_80 = (byte **)0x14500000001;
        pcStack_78 = (code *)&UNK_142f396f4;
        ppbStack_70 = (byte **)0x59;
        pdb_140f332f0(&uStack_41,&puStack_c8);
      }
      pdb_1402f2aa0(param_1);
    }
    else {
      ppbStack_68 = ppbStack_180;
      pcStack_78 = pcStack_190;
      ppbStack_70 = ppbStack_188;
      ppbStack_88 = ppbStack_1a0;
      ppbStack_80 = ppbStack_198;
      uStack_98 = CONCAT44(uStack_1ac,uStack_1b0);
      uStack_90 = (undefined *)CONCAT44(uStack_1a4,uStack_1a8);
      uStack_a8 = (undefined *)CONCAT44(uStack_1bc,uStack_1c0);
      uStack_a0 = CONCAT44(uStack_1b4,uStack_1b8);
      ppbStack_b8 = ppbStack_1d0;
      pcStack_b0 = pcStack_1c8;
      puStack_c8 = puStack_1e0;
      pcStack_c0 = pcStack_1d8;
      if (*_DAT_143ca8e90 != 0) {
        pcStack_170 = pdb_1402f3e90;
        pbStack_168 = (byte *)0x0;
        puStack_160 = &UNK_142f39634;
        uStack_158 = 0x16;
        uStack_150 = 0;
        puStack_148 = &UNK_142f39610;
        uStack_140 = 0x23;
        uStack_138 = 1;
        puStack_130 = &UNK_142f39634;
        uStack_128 = 0x16;
        uStack_120 = 0x14b00000001;
        puStack_118 = &UNK_142f39720;
        ppuStack_110 = &ppuStack_178;
        ppuStack_178 = &puStack_c8;
        pdb_140f332f0(&uStack_41,&pbStack_168);
      }
      pdb_1404b4a50(&puStack_c8);
    }
    if (uStack_50 != 0) {
      pub_1406abac0(pbStack_d0,uStack_50,1);
    }
  }
  if (uStack_f0 != 0) {
    pub_1406abac0(pbStack_e8,uStack_f0,1);
  }
  return;
}

