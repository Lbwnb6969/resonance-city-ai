// VA 0x141d3fca0, PDB extent 291 bytes
// asset_pipe::cache_root
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset_pipe::cache_root
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/lib.rs
   Extent: 291 */

undefined8 pdb_141d3fca0(undefined8 param_1)

{
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_140dc7240(&uStack_68);
  if (SBORROW8(0,CONCAT44(uStack_64,uStack_68))) {
    pdb_140f60120(&uStack_48,&UNK_1433cf2e0,1);
    pdb_140f36c40(auStack_28);
  }
  else {
    uStack_38 = uStack_58;
    uStack_30 = uStack_50;
    uStack_48 = uStack_68;
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
  }
  pbStack_20 = (byte *)CONCAT44(uStack_3c,uStack_40);
  pdb_140f3e9e0(param_1,pbStack_20,uStack_38,&UNK_1433cf2d0,0x10);
  if (CONCAT44(uStack_44,uStack_48) != 0) {
    pub_1406abac0(pbStack_20,CONCAT44(uStack_44,uStack_48),1);
  }
  return param_1;
}

