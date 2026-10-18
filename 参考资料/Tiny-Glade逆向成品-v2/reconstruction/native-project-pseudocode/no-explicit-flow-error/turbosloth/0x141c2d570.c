// VA 0x141c2d570, PDB extent 209 bytes
// turbosloth::store::AssetRecipeId::package_file_name
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::store::AssetRecipeId::package_file_name
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 209 */

longlong * pdb_141c2d570(longlong *param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong uStack_68;
  byte *pbStack_60;
  undefined8 **ppuStack_50;
  code *pcStack_48;
  longlong lStack_40;
  ulonglong *puStack_38;
  code *pcStack_30;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  ppuStack_50 = &puStack_38;
  pcStack_48 = pdb_140f71da0;
  puStack_38 = param_2;
  pcStack_30 = (code *)param_3;
  pdb_140f60760(&uStack_68,&UNK_14339ee67,&ppuStack_50);
  pcStack_30 = pdb_140001020;
  puStack_38 = &uStack_68;
  pdb_140f60760(&ppuStack_50,&UNK_14339ee60,&puStack_38);
  if (uStack_68 != 0) {
    pub_1406abac0(pbStack_60,uStack_68,1);
  }
  param_1[2] = lStack_40;
  *param_1 = (longlong)ppuStack_50;
  param_1[1] = (longlong)pcStack_48;
  return param_1;
}

