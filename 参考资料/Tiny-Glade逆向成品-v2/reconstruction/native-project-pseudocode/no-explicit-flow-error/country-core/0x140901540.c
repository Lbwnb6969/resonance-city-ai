// VA 0x140901540, PDB extent 96 bytes
// country_core::resources::walls::decorator::DecoratorRotationXZ::to_projective_xz_mat2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator::DecoratorRotationXZ::to_projective_xz_mat2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 96 */

undefined4 * pdb_140901540(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = pub_142e32b30(param_2);
  uVar3 = _DAT_142e37820 ^ uVar1;
  uVar2 = pub_142e329e0(param_2);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}

