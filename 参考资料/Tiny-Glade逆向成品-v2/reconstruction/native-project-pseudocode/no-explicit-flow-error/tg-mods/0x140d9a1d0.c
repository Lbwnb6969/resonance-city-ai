// VA 0x140d9a1d0, PDB extent 550 bytes
// tg_mods::discovery::touch_last_used
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::discovery::touch_last_used
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
   Extent: 550 */

void pdb_140d9a1d0(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puStack_e0;
  code *pcStack_d8;
  longlong *plStack_d0;
  code *pcStack_c8;
  ulonglong uStack_c0;
  byte *pbStack_b8;
  ulonglong uStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 **ppuStack_48;
  byte *pbStack_40;
  longlong lStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_140f3e9e0(&uStack_a0,param_1,param_2,&UNK_1431e56eb,10);
  pbStack_40 = pbStack_98;
  lStack_38 = pdb_140f561c0(pbStack_98,uStack_90,1,0);
  if (uStack_a0 != 0) {
    pub_1406abac0(pbStack_40,uStack_a0,1);
  }
  if (lStack_38 != 0) {
    if (1 < *_DAT_143ca8e90) {
      pdb_141b1e240(&uStack_c0,param_1,param_2,2);
      pcStack_d8 = pdb_140f58250;
      plStack_d0 = &lStack_38;
      pcStack_c8 = pdb_140f59780;
      uStack_a0 = 0;
      pbStack_98 = &UNK_1431e55d2;
      uStack_90 = 0x12;
      uStack_88 = 0;
      puStack_80 = &UNK_1431e555f;
      uStack_78 = 0x1f;
      uStack_70 = 2;
      puStack_68 = &UNK_1431e55d2;
      uStack_60 = 0x12;
      uStack_58 = 0x1ec00000001;
      puStack_50 = &UNK_1431e5760;
      ppuStack_48 = &puStack_e0;
      puStack_e0 = &uStack_c0;
      pdb_140f332f0(&uStack_29,&uStack_a0);
      if (uStack_c0 != 0) {
        pub_1406abac0(pbStack_b8,uStack_c0,1);
      }
    }
    pdb_1404b38e0(&lStack_38);
  }
  return;
}

