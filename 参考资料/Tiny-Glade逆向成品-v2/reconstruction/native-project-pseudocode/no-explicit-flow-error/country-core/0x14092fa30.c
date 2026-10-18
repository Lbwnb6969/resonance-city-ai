// VA 0x14092fa30, PDB extent 120 bytes
// country_core::resources::walls::public_wall_state::PublicWallState::corner_pos_and_normal_xz
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::public_wall_state::PublicWallState::corner_pos_and_normal_xz
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
   Extent: 120 */

uint * pdb_14092fa30(uint *param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint in_XMM1_Da;
  uint uVar4;
  
  bVar1 = *(int *)(param_2 + 600) == 1;
  if (bVar1) {
    uVar2 = pdb_140df3e10(param_2 + 0x25c,param_3);
    uVar4 = in_XMM1_Da;
    uVar3 = pdb_140df1dc0(param_2 + 0x25c,param_3);
    param_1[1] = uVar2;
    param_1[2] = in_XMM1_Da;
    param_1[3] = uVar3;
    param_1[4] = uVar4;
  }
  *param_1 = (uint)bVar1;
  return param_1;
}

