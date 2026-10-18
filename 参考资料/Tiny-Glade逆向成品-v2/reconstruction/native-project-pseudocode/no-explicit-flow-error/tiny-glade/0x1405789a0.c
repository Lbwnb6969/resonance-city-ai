// VA 0x1405789a0, PDB extent 285 bytes
// tiny_glade::gui::gui_debug::date_spinner
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_debug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_debug::date_spinner
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_debug.rs
   Extent: 285 */

void pdb_1405789a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 uStack_e8;
  byte *pbStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a0;
  undefined1 auStack_98 [16];
  longlong *aplStack_88 [15];
  
  pdb_14007ee60();
  pbStack_e0 = pub_1406abab0(8,8);
  if (pbStack_e0 != (byte *)0x0) {
    *(undefined8 *)pbStack_e0 = param_2;
    uStack_138 = 1;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 1;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 1;
    uStack_100 = 0;
    uStack_f8 = _DAT_142f6bf50;
    uStack_f4 = _UNK_142f6bf54;
    uStack_f0 = _UNK_142f6bf58;
    uStack_ec = _UNK_142f6bf5c;
    uStack_e8 = 0;
    puStack_d8 = &UNK_142f62230;
    uStack_d0 = 0x3fb999999999999a;
    uStack_c8 = 0;
    uStack_c0 = 1;
    puStack_b8 = &UNK_142f621d8;
    uStack_b0 = 0;
    uStack_a0 = 1;
    pdb_140d35c10(auStack_98,&uStack_138,param_1);
    LOCK();
    *aplStack_88[0] = *aplStack_88[0] + -1;
    UNLOCK();
    if (*aplStack_88[0] == 0) {
      pdb_140d71bf0(aplStack_88);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,8);
}

