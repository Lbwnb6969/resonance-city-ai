// VA 0x140a58db0, PDB extent 276 bytes
// country_core::resources::render::mesh_atlas_library::impl$1::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/render/mesh_atlas_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::render::mesh_atlas_library::impl$1::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/render/mesh_atlas_library.rs
   Extent: 276 */

undefined8 pdb_140a58db0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uStack_70;
  byte *pbStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  byte *pbStack_38;
  longlong *plStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  plStack_30 = param_1;
  uStack_28 = param_2;
  uStack_48 = pdb_1418bded0(&plStack_30);
  puStack_58 = &uStack_48;
  pcStack_50 = pdb_1402ed400;
  uStack_40 = param_2;
  pdb_140f60760(&uStack_70,&UNK_14303de48,&puStack_58);
  uStack_20 = uStack_70;
  pbStack_38 = pbStack_68;
  uVar1 = pdb_140df4400(pbStack_68,uStack_60);
  if (uStack_20 != 0) {
    pub_1406abac0(pbStack_38,uStack_20,1);
  }
  LOCK();
  *plStack_30 = *plStack_30 + -1;
  UNLOCK();
  if (*plStack_30 == 0) {
    pdb_1406ed6a0(&plStack_30);
  }
  return uVar1;
}

