// VA 0x140fbaf80, PDB extent 5 bytes
// tg_integrity_report::controls::impl$5::active
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-integrity-report/src/controls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_integrity_report::controls::impl$5::active
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-integrity-report/src/controls.rs
   Extent: 5 */

undefined4 * pdb_140fbaf80(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x3b) = 0;
  *(undefined8 *)(param_1 + 0x3d) = 0;
  *(undefined8 *)(param_1 + 0x31) = 0;
  *param_1 = 3;
  uVar1 = _UNK_1432699ac;
  *(undefined8 *)(param_1 + 0x33) = _UNK_1432699a4;
  *(undefined8 *)(param_1 + 0x35) = uVar1;
  *(undefined8 *)(param_1 + 0x37) = 0;
  *(undefined8 *)(param_1 + 0x39) = 0;
  *(undefined8 *)(param_1 + 0x3f) = 0;
  *(undefined8 *)(param_1 + 0x41) = 0;
  *(undefined8 *)(param_1 + 0x43) = 0;
  *(undefined8 *)(param_1 + 0x45) = 0;
  return param_1;
}

