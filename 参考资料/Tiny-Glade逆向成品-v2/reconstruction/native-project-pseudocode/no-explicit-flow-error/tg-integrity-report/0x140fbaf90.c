// VA 0x140fbaf90, PDB extent 171 bytes
// tg_integrity_report::controls::impl$5::hovered
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-integrity-report/src/controls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_integrity_report::controls::impl$5::hovered
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-integrity-report/src/controls.rs
   Extent: 171 */

longlong pdb_140fbaf90(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_12c [196];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  uVar2 = _UNK_143268a9c;
  uVar1 = _DAT_143268a94;
  pdb_140fc2aa0(auStack_12c);
  *(undefined8 *)(param_1 + 0xc4) = uStack_68;
  pub_142e32760(param_1,auStack_12c,0xc4);
  *(undefined8 *)(param_1 + 0xcc) = uStack_60;
  *(undefined8 *)(param_1 + 0xd4) = uStack_58;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xdc) = uVar1;
  *(undefined8 *)(param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0xfc) = 0x3f800000;
  *(ulonglong *)(param_1 + 0x10c) = CONCAT44(uStack_1c,uStack_20);
  *(undefined8 *)(param_1 + 0x114) = uStack_18;
  *(undefined8 *)(param_1 + 0x100) = uStack_2c;
  *(ulonglong *)(param_1 + 0x108) = CONCAT44(uStack_20,uStack_24);
  return param_1;
}

