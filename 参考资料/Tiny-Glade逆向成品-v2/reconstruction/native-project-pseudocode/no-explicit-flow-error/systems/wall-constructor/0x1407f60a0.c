// VA 0x1407f60a0, PDB extent 80 bytes
// system_wall_constructor::construct_platform_stairs::impl$0::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_platform_stairs::impl$0::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/mod.rs
   Extent: 80 */

undefined8 * pdb_1407f60a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _UNK_143006338;
  *param_1 = _DAT_143006330;
  param_1[1] = uVar1;
  uVar1 = _UNK_143006348;
  param_1[2] = _DAT_143006340;
  param_1[3] = uVar1;
  uVar1 = _UNK_143006358;
  param_1[4] = _DAT_143006350;
  param_1[5] = uVar1;
  uVar1 = _UNK_143006368;
  param_1[6] = _DAT_143006360;
  param_1[7] = uVar1;
  uVar1 = _UNK_143006378;
  param_1[8] = _DAT_143006370;
  param_1[9] = uVar1;
  uVar1 = _UNK_143006388;
  param_1[10] = _DAT_143006380;
  param_1[0xb] = uVar1;
  uVar1 = _UNK_143006398;
  param_1[0xc] = _DAT_143006390;
  param_1[0xd] = uVar1;
  return param_1;
}

