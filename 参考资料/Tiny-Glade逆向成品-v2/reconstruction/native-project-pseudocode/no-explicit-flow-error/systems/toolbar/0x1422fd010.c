// VA 0x1422fd010, PDB extent 327 bytes
// toolbar::menu::report_bug::try_remove_file
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::report_bug::try_remove_file
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
   Extent: 327 */

ulonglong pdb_1422fd010(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
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
  longlong *plStack_60;
  code *pcStack_58;
  longlong *plStack_50;
  code *pcStack_48;
  longlong lStack_40;
  longlong lStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_40 = param_1;
  cVar3 = pdb_140f3ec10(uVar1,uVar2);
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar3 != '\0') {
    lStack_38 = pdb_140f4eda0(uVar1,uVar2);
    if (lStack_38 != 0) {
      if (*_DAT_143ca8e90 != 0) {
        plStack_60 = &lStack_40;
        pcStack_58 = pdb_140117660;
        plStack_50 = &lStack_38;
        pcStack_48 = pdb_140f56800;
        uStack_c0 = 0;
        puStack_b8 = &UNK_1434d72ba;
        uStack_b0 = 0x19;
        uStack_a8 = 0;
        puStack_a0 = &UNK_1434d7248;
        uStack_98 = 0x2d;
        uStack_90 = 1;
        puStack_88 = &UNK_1434d72ba;
        uStack_80 = 0x19;
        uStack_78 = 0x1be00000001;
        puStack_70 = &UNK_1434d7290;
        ppuStack_68 = &plStack_60;
        pdb_140f332f0(&uStack_29,&uStack_c0);
      }
      pdb_1404b38e0(&lStack_38);
      uVar4 = 0;
    }
  }
  return uVar4 & 0xffffffff;
}

