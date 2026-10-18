// VA 0x140a77410, PDB extent 54 bytes
// country_core::resources::roofs::roof_buffers::impl$4::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_buffers.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::roofs::roof_buffers::impl$4::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_buffers.rs
   Extent: 54 */

undefined8 * pdb_140a77410(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _UNK_143041dc8;
  param_1[4] = _DAT_143041dc0;
  param_1[5] = uVar1;
  uVar1 = _UNK_143041db8;
  param_1[2] = _DAT_143041db0;
  param_1[3] = uVar1;
  uVar1 = _UNK_143041da8;
  *param_1 = _DAT_143041da0;
  param_1[1] = uVar1;
  uVar1 = _UNK_14303f318;
  param_1[6] = _DAT_14303f310;
  param_1[7] = uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}

