// VA 0x1400fd380, PDB extent 257 bytes
// tiny_glade::render_loop::handle_screenshot_error
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/render_loop.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::render_loop::handle_screenshot_error
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/render_loop.rs
   Extent: 257 */

void pdb_1400fd380(longlong param_1)

{
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 **ppuStack_38;
  longlong *plStack_30;
  code *pcStack_28;
  longlong lStack_20;
  undefined1 uStack_11;
  undefined8 uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  if (param_1 != 0) {
    lStack_20 = param_1;
    if (*_DAT_143ca8e90 != 0) {
      plStack_30 = &lStack_20;
      pcStack_28 = pdb_140f36c30;
      uStack_90 = 0;
      puStack_88 = &UNK_142e4282b;
      uStack_80 = 0x17;
      uStack_78 = 0;
      puStack_70 = &UNK_142e4250e;
      uStack_68 = 0x24;
      uStack_60 = 1;
      puStack_58 = &UNK_142e4282b;
      uStack_50 = 0x17;
      uStack_48 = 0x43d00000001;
      puStack_40 = &UNK_142e42800;
      ppuStack_38 = &plStack_30;
      pdb_140f332f0(&uStack_11,&uStack_90);
    }
    pdb_140f36c40(&lStack_20);
  }
  return;
}

