// VA 0x1407f0100, PDB extent 31 bytes
// system_wall_constructor::construct_arches::impl$0::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::construct_arches::impl$0::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/mod.rs
   Extent: 31 */

undefined8 * pdb_1407f0100(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 3) = 0;
  uVar1 = _UNK_143005d08;
  *param_1 = _DAT_143005d00;
  param_1[1] = uVar1;
  param_1[2] = _DAT_143005d10;
  return param_1;
}

