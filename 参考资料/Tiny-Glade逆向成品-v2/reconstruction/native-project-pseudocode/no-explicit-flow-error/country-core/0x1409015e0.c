// VA 0x1409015e0, PDB extent 89 bytes
// country_core::resources::walls::decorator::DecoratorRotationXZ::to_quat
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator::DecoratorRotationXZ::to_quat
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 89 */

undefined4 * pdb_1409015e0(undefined4 *param_1,float *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = *param_2 * _DAT_142e36f50;
  uVar1 = pub_142e32b30(fVar3);
  uVar2 = pub_142e329e0(fVar3);
  *param_1 = 0;
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = uVar2;
  return param_1;
}

