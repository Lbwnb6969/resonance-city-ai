// VA 0x1406c15d0, PDB extent 145 bytes
// crash_reporter_gui::impl$4::hovered
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: crash_reporter_gui::impl$4::hovered
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
   Extent: 145 */

undefined4 * pdb_1406c15d0(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_124 [196];
  undefined8 uStack_60;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  pdb_140fc2aa0(auStack_124);
  *(undefined8 *)(param_1 + 0x31) = uStack_60;
  *param_1 = 2;
  uVar1 = _UNK_142f97fe8;
  *(undefined8 *)(param_1 + 1) = _DAT_142f97fe0;
  *(undefined8 *)(param_1 + 3) = uVar1;
  uVar1 = _UNK_142f98dd0;
  *(undefined8 *)(param_1 + 0x33) = _DAT_142f98dc8;
  *(undefined8 *)(param_1 + 0x35) = uVar1;
  *(undefined8 *)(param_1 + 0x37) = 0;
  *(undefined8 *)(param_1 + 0x39) = 0;
  uVar1 = _UNK_142f97fd8;
  *(undefined8 *)(param_1 + 0x3b) = _DAT_142f97fd0;
  *(undefined8 *)(param_1 + 0x3d) = uVar1;
  param_1[0x3f] = 0;
  *(undefined8 *)(param_1 + 0x40) = uStack_24;
  *(ulonglong *)(param_1 + 0x42) = CONCAT44(uStack_18,uStack_1c);
  *(ulonglong *)(param_1 + 0x43) = CONCAT44(uStack_14,uStack_18);
  *(undefined8 *)(param_1 + 0x45) = uStack_10;
  return param_1;
}

