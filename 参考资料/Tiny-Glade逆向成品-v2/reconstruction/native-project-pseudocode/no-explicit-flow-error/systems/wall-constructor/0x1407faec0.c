// VA 0x1407faec0, PDB extent 38 bytes
// system_wall_constructor::construct_arches::wooden_arch_frame::impl$0::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/wooden_arch_frame.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_arches::wooden_arch_frame::impl$0::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/wooden_arch_frame.rs
   Extent: 38 */

undefined8 * pdb_1407faec0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _UNK_143006788;
  *param_1 = _DAT_143006780;
  param_1[1] = uVar1;
  uVar1 = _UNK_143006798;
  param_1[2] = _DAT_143006790;
  param_1[3] = uVar1;
  param_1[4] = _DAT_1430067a0;
  return param_1;
}

