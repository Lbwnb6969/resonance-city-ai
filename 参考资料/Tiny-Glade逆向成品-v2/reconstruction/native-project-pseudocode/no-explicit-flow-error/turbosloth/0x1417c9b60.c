// VA 0x1417c9b60, PDB extent 25 bytes
// turbosloth::id::asset_id_set
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/id.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::id::asset_id_set
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/id.rs
   Extent: 25 */

undefined8 * pdb_1417c9b60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _UNK_143337b88;
  param_1[2] = _DAT_143337b80;
  param_1[3] = uVar1;
  uVar1 = _UNK_143337b78;
  *param_1 = _DAT_143337b70;
  param_1[1] = uVar1;
  return param_1;
}

