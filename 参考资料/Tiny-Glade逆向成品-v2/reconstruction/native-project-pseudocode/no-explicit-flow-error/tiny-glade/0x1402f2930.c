// VA 0x1402f2930, PDB extent 358 bytes
// tiny_glade::app_config::write_settings_file
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/app_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::app_config::write_settings_file
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/app_config.rs
   Extent: 358 */

void pdb_1402f2930(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 **ppuStack_68;
  ulonglong uStack_60;
  byte *pbStack_58;
  ulonglong *puStack_40;
  code *pcStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  puVar3 = param_2;
  uVar2 = pdb_140dc7520();
  pdb_140f3e9e0(&uStack_60,uVar2,puVar3,&UNK_142f3964a,0xc);
  cVar1 = pdb_140901380(*param_2);
  if (cVar1 == '\0') {
    if (2 < *_DAT_143ca8e90) {
      pcStack_38 = pdb_140f58250;
      uStack_c0 = 0;
      puStack_b8 = &UNK_142f39634;
      uStack_b0 = 0x16;
      uStack_a8 = 0;
      puStack_a0 = &UNK_142f39610;
      uStack_98 = 0x23;
      uStack_90 = 3;
      puStack_88 = &UNK_142f39634;
      uStack_80 = 0x16;
      uStack_78 = 0x15e00000001;
      puStack_70 = &UNK_142f39656;
      ppuStack_68 = &puStack_40;
      puStack_40 = &uStack_60;
      pdb_140f332f0(&uStack_29,&uStack_c0);
    }
  }
  else {
    pdb_1402f2aa0(*param_1);
  }
  if (uStack_60 != 0) {
    pub_1406abac0(pbStack_58,uStack_60,1);
  }
  return;
}

