// VA 0x14062e920, PDB extent 357 bytes
// tiny_glade::gui::gui_tod_editor::scalar_inspector_row
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::gui::gui_tod_editor::scalar_inspector_row
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod_editor.rs
   Extent: 357 */

void pdb_14062e920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 auStack_118 [2];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 uStack_c8;
  byte *pbStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined1 uStack_80;
  undefined1 auStack_78 [16];
  longlong *aplStack_68 [10];
  
  pdb_140572d40(auStack_118);
  uVar2 = uStack_a8;
  uStack_a8 = CONCAT53(uStack_a8._3_5_,0x20200);
  uVar3 = uStack_a8;
  uStack_a8._6_2_ = SUB82(uVar2,6);
  uStack_a8._0_6_ = CONCAT15(2,(int5)uVar3);
  pdb_140d7b910(auStack_78,auStack_118,param_1);
  LOCK();
  *aplStack_68[0] = *aplStack_68[0] + -1;
  UNLOCK();
  if (*aplStack_68[0] == 0) {
    pdb_140d71bf0(aplStack_68);
  }
  pdb_14007ee60();
  pbStack_c0 = pub_1406abab0(8,8);
  if (pbStack_c0 != (byte *)0x0) {
    *(undefined8 *)pbStack_c0 = param_4;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    auStack_118[0] = 0;
    uStack_108 = 0;
    uStack_100 = 1;
    uStack_e8 = 1;
    uStack_e0 = 0;
    dVar1 = (double)(float)((ulonglong)*param_5 >> 0x20);
    auStack_d8._8_4_ = SUB84(dVar1,0);
    auStack_d8._0_8_ = (double)(float)*param_5;
    auStack_d8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    uStack_c8 = 0;
    puStack_b8 = &UNK_142f62280;
    uStack_90 = 0;
    uStack_80 = 1;
    uStack_b0 = param_6;
    pdb_140d35c10(auStack_78,auStack_118,param_1);
    LOCK();
    *aplStack_68[0] = *aplStack_68[0] + -1;
    UNLOCK();
    if (*aplStack_68[0] == 0) {
      pdb_140d71bf0(aplStack_68);
    }
    pdb_140d19e20(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,8);
}

