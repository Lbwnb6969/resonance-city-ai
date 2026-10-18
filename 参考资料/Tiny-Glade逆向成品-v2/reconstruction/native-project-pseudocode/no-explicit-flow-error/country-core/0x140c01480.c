// VA 0x140c01480, PDB extent 88 bytes
// country_core::resources::stairs::stairs_assembly_params::StairWallAnchor::wall_normal
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_assembly_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_assembly_params::StairWallAnchor::wall_normal
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_assembly_params.rs
   Extent: 88 */

undefined8 pdb_140c01480(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = pub_142e32b30(uVar1);
  uVar3 = (uint)uVar2 ^ _DAT_142e37820;
  uVar4 = (uint)((ulonglong)uVar2 >> 0x20) ^ _UNK_142e37824;
  pub_142e329e0(uVar1);
  return CONCAT44(uVar4,uVar3);
}

