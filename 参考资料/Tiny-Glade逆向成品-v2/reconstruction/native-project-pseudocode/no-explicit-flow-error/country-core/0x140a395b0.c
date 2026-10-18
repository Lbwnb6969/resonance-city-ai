// VA 0x140a395b0, PDB extent 352 bytes
// country_core::game_config::impl$14::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::game_config::impl$14::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
   Extent: 352 */

void pdb_140a395b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_16;
  undefined6 uStack_e;
  ushort uStack_8;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 8;
  param_1[4] = 8;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0x8000000000000001;
  param_1[0xc] = 0x43800000780;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x7e) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0x4270000000000000;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xaa) = 0x1010001;
  *(undefined1 *)((longlong)param_1 + 0xae) = 0;
  *(ulonglong *)((longlong)param_1 + 0xbd) = (ulonglong)uStack_8;
  *(undefined8 *)((longlong)param_1 + 0xaf) = uStack_16;
  *(ulonglong *)((longlong)param_1 + 0xb7) = CONCAT26(uStack_8,uStack_e);
  *(undefined2 *)((longlong)param_1 + 0xc5) = 0x300;
  uVar1 = _UNK_142e3c648;
  param_1[0x1f] = _DAT_142e3c640;
  param_1[0x20] = uVar1;
  param_1[0x1d] = _DAT_14303aa90;
  *(undefined4 *)(param_1 + 0x1e) = 0x1010000;
  *(undefined1 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x1c] = 0x1000101;
  uVar1 = _UNK_14303aaa8;
  param_1[0x21] = _DAT_14303aaa0;
  param_1[0x22] = uVar1;
  *(undefined4 *)(param_1 + 0x23) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 0x306;
  *(undefined1 *)((longlong)param_1 + 0x11e) = 6;
  *(undefined4 *)((longlong)param_1 + 0x11f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x123) = 1;
  param_1[0x19] = 0x8000000000000000;
  return;
}

