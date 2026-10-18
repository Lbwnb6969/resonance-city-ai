// VA 0x14062e7c0, PDB extent 340 bytes
// tiny_glade::gui::gui_tod_editor::color_inspector_row
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_tod_editor::color_inspector_row
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod_editor.rs
   Extent: 340 */

void pdb_14062e7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4,
                  char param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  ulonglong uStack_f8;
  float fStack_f0;
  longlong *aplStack_e8 [10];
  undefined1 auStack_98 [16];
  longlong *aplStack_88 [9];
  char cStack_3e;
  undefined2 uStack_28;
  undefined1 uStack_26;
  undefined1 uStack_23;
  
  pdb_140572d40(auStack_98);
  uStack_28 = 0x200;
  uStack_26 = 2;
  uStack_23 = 2;
  pdb_140d7b910(&uStack_f8,auStack_98,param_1);
  LOCK();
  *aplStack_e8[0] = *aplStack_e8[0] + -1;
  UNLOCK();
  if (*aplStack_e8[0] == 0) {
    pdb_140d71bf0(aplStack_e8);
  }
  uStack_f8 = *param_4;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uStack_f8;
  fStack_f0 = *(float *)(param_4 + 1);
  if (param_5 != '\0') {
    fVar5 = (float)(uStack_f8 >> 0x20);
    if (fVar5 <= fStack_f0) {
      fVar5 = fStack_f0;
    }
    fVar6 = (float)uStack_f8;
    if ((float)uStack_f8 <= fVar5) {
      fVar6 = fVar5;
    }
    if (fVar6 <= _DAT_142e37934) {
      fVar6 = _DAT_142e37934;
    }
    fVar6 = fVar6 * _DAT_142e37838;
    auVar1._4_4_ = fVar6;
    auVar1._0_4_ = fVar6;
    auVar1._8_8_ = 0;
    auVar3 = divps(auVar3,auVar1);
    uStack_f8 = auVar3._0_8_;
    fStack_f0 = fStack_f0 / fVar6;
  }
  pdb_140d25f10(auStack_98,param_1,&uStack_f8);
  LOCK();
  *aplStack_88[0] = *aplStack_88[0] + -1;
  UNLOCK();
  if (*aplStack_88[0] == 0) {
    pdb_140d71bf0(aplStack_88);
  }
  if (cStack_3e != '\0') {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uStack_f8;
    *param_4 = uStack_f8;
    *(float *)(param_4 + 1) = fStack_f0;
    if (param_5 != '\0') {
      fVar5 = _DAT_142f8966c * fStack_f0 +
              (float)((ulonglong)_DAT_142f89670 >> 0x20) * (float)(uStack_f8 >> 0x20) +
              (float)_DAT_142f89670 * (float)uStack_f8;
      if (fVar5 <= _DAT_142e37934) {
        fVar5 = _DAT_142e37934;
      }
      auVar2._4_4_ = fVar5;
      auVar2._0_4_ = fVar5;
      auVar2._8_8_ = 0;
      auVar3 = divps(auVar4,auVar2);
      *param_4 = auVar3._0_8_;
      *(float *)(param_4 + 1) = fStack_f0 / fVar5;
    }
  }
  pdb_140d19e20(param_1);
  return;
}

