// VA 0x140123890, PDB extent 193 bytes
// tiny_glade::tgsr_capture::tgsr_capture_gfx_ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::tgsr_capture::tgsr_capture_gfx_ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
   Extent: 193 */

void pdb_140123890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_f0 [16];
  longlong *aplStack_e0 [6];
  int iStack_b0;
  longlong *aplStack_80 [11];
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  pdb_140438930(auStack_f0,param_1,&UNK_142e46f7c,0xc,&uStack_28);
  LOCK();
  *aplStack_80[0] = *aplStack_80[0] + -1;
  UNLOCK();
  if (*aplStack_80[0] == 0) {
    pdb_140d71bf0(aplStack_80);
  }
  if (iStack_b0 != 2) {
    LOCK();
    *aplStack_e0[0] = *aplStack_e0[0] + -1;
    UNLOCK();
    if (*aplStack_e0[0] == 0) {
      pdb_140d71bf0(aplStack_e0);
    }
  }
  return;
}

