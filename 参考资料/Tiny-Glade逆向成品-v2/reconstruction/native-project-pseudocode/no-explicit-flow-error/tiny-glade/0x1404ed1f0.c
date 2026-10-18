// VA 0x1404ed1f0, PDB extent 228 bytes
// tiny_glade::gui::gui_debug::date_spinner::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_debug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_debug::date_spinner::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_debug.rs
   Extent: 228 */

undefined8 pdb_1404ed1f0(undefined8 param_1,undefined8 param_2,double param_3)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  uint uStack_3c;
  uint *puStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  ulonglong uStack_18;
  undefined1 uStack_10;
  
  dVar2 = _DAT_142e33008;
  if (_DAT_142e33008 <= param_3) {
    dVar2 = param_3;
  }
  dVar3 = _DAT_142f61b80;
  if (dVar2 <= _DAT_142f61b80) {
    dVar3 = dVar2;
  }
  dVar2 = 0.0;
  if (0.0 <= dVar3) {
    dVar2 = dVar3;
  }
  dVar3 = _DAT_142f61b88;
  if (dVar2 <= _DAT_142f61b88) {
    dVar3 = dVar2;
  }
  uVar1 = (uint)dVar3;
  if ((uVar1 - 1 & 0xffff) < 0x16d) {
    uStack_3c = uVar1 & 0xffff | 0xfce00;
    puStack_38 = &uStack_3c;
    pcStack_30 = pdb_140e046b0;
    pdb_140f60760(param_1,&UNK_142f61d68,&puStack_38);
    return param_1;
  }
  uStack_18 = (ulonglong)(uVar1 & 0xffff);
  puStack_38 = (uint *)&UNK_142f622a8;
  pcStack_30 = (code *)0x7;
  uStack_28 = 1;
  uStack_20 = 0x16d;
  uStack_10 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_142f621a8,0x2b,&puStack_38,&UNK_142f62188,&UNK_142f61d50);
}

