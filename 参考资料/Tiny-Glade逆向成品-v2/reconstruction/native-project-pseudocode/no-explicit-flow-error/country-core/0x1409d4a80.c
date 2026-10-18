// VA 0x1409d4a80, PDB extent 175 bytes
// country_core::resources::clutter_meshes::ClutterMeshTy::id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::clutter_meshes::ClutterMeshTy::id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
   Extent: 175 */

undefined8 pdb_1409d4a80(undefined1 param_1)

{
  undefined8 uVar1;
  undefined1 *puStack_50;
  code *pcStack_48;
  ulonglong uStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  byte *pbStack_28;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  puStack_50 = &uStack_19;
  pcStack_48 = pdb_140c2a9d0;
  uStack_19 = param_1;
  pdb_140f60760(&uStack_40,&UNK_14306af45,&puStack_50);
  pbStack_28 = pbStack_38;
  uVar1 = pdb_140e940b0(pbStack_38,uStack_30);
  if (uStack_40 != 0) {
    pub_1406abac0(pbStack_28,uStack_40,1);
  }
  return uVar1;
}

