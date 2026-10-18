// VA 0x141c2d650, PDB extent 66 bytes
// turbosloth::store::AssetRecipeId::to_hex
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::store::AssetRecipeId::to_hex
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 66 */

undefined8 pdb_141c2d650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 *puStack_18;
  code *pcStack_10;
  
  puStack_18 = &uStack_28;
  pcStack_10 = pdb_140f71da0;
  uStack_28 = param_2;
  uStack_20 = param_3;
  pdb_140f60760(param_1,&UNK_14339ee67,&puStack_18);
  return param_1;
}

