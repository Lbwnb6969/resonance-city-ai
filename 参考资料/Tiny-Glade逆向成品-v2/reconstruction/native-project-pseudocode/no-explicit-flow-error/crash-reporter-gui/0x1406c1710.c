// VA 0x1406c1710, PDB extent 143 bytes
// crash_reporter_gui::impl$6::active
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: crash_reporter_gui::impl$6::active
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
   Extent: 143 */

undefined4 * pdb_1406c1710(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_124 [196];
  undefined8 uStack_60;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  pdb_140fc2aa0(auStack_124);
  *(undefined8 *)(param_1 + 0x31) = uStack_60;
  *param_1 = 3;
  uVar1 = _UNK_142f98008;
  *(undefined8 *)(param_1 + 0x33) = _DAT_142f98000;
  *(undefined8 *)(param_1 + 0x35) = uVar1;
  *(undefined8 *)(param_1 + 0x37) = uStack_48;
  *(undefined8 *)(param_1 + 0x39) = uStack_40;
  *(undefined8 *)(param_1 + 0x3b) = uStack_38;
  *(undefined8 *)(param_1 + 0x3d) = uStack_30;
  param_1[0x3f] = uStack_28;
  *(undefined8 *)(param_1 + 0x40) = uStack_24;
  *(ulonglong *)(param_1 + 0x42) = CONCAT44(uStack_18,uStack_1c);
  *(ulonglong *)(param_1 + 0x43) = CONCAT44(uStack_14,uStack_18);
  *(undefined8 *)(param_1 + 0x45) = uStack_10;
  return param_1;
}

