// VA 0x14068bab0, PDB extent 276 bytes
// tiny_glade::gui::settings::ui_settings_keybindings::closure$3
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::settings::ui_settings_keybindings::closure$3
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
   Extent: 276 */

void pdb_14068bab0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_60 [24];
  ulonglong uStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_140a12cf0(&uStack_48,param_1);
  if (lStack_30 == 0) {
    if (SBORROW8(0,uStack_48)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142f95658);
    }
    pdb_140734440(auStack_60,param_2,pbStack_40,uStack_38);
    uVar1 = pdb_140726ff0(auStack_60);
    pdb_14060a7e0(uVar1,_DAT_142f95190);
  }
  else {
    pdb_140306cd0(auStack_60,param_2,lStack_30,uStack_28,lStack_30,uStack_28,0x42800000);
    if (SBORROW8(0,uStack_48)) {
      return;
    }
  }
  if (uStack_48 != 0) {
    pub_1406abac0(pbStack_40,uStack_48,1);
  }
  return;
}

