// VA 0x14090e0e0, PDB extent 74 bytes
// country_core::asset_libraries::ssbo_library::impl$6::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::asset_libraries::ssbo_library::impl$6::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
   Extent: 74 */

void pdb_14090e0e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined7 uStack_1f;
  undefined1 uStack_18;
  undefined7 uStack_17;
  undefined1 uStack_10;
  undefined7 uStack_f;
  undefined1 uStack_8;
  
  uVar1 = _UNK_1430662a8;
  uStack_10 = (undefined1)_DAT_1430662a0;
  uStack_f = (undefined7)((ulonglong)_DAT_1430662a0 >> 8);
  uStack_8 = (undefined1)_UNK_1430662a8;
  uStack_20 = (undefined1)_DAT_143066290;
  uStack_1f = (undefined7)((ulonglong)_DAT_143066290 >> 8);
  uStack_18 = (undefined1)_UNK_143066298;
  uStack_17 = (undefined7)((ulonglong)_UNK_143066298 >> 8);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(ulonglong *)((longlong)param_1 + 9) = CONCAT17(uStack_20,uStack_27);
  *(ulonglong *)((longlong)param_1 + 0x11) = CONCAT17(uStack_18,uStack_1f);
  *(ulonglong *)((longlong)param_1 + 0x19) = CONCAT17(uStack_10,uStack_17);
  *(ulonglong *)((longlong)param_1 + 0x21) = CONCAT17(uStack_8,uStack_f);
  param_1[5] = uVar1;
  return;
}

