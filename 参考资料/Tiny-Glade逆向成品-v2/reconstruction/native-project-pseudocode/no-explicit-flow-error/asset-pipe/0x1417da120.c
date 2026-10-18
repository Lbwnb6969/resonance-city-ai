// VA 0x1417da120, PDB extent 302 bytes
// asset_pipe::texture_processing::process_texture_array_layer
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture_processing.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: asset_pipe::texture_processing::process_texture_array_layer
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture_processing.rs
   Extent: 302 */

undefined8
pdb_1417da120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 **ppuStack_38;
  
  uStack_b0 = param_2;
  uStack_a8 = param_3;
  if (3 < *_DAT_143ca8e90) {
    puStack_a0 = &uStack_b0;
    pcStack_98 = pdb_1402ed420;
    uStack_90 = 0;
    puStack_88 = &UNK_143338c11;
    uStack_80 = 0x1e;
    uStack_78 = 0;
    puStack_70 = &UNK_143338be5;
    uStack_68 = 0x2b;
    uStack_60 = 4;
    puStack_58 = &UNK_143338c11;
    uStack_50 = 0x1e;
    uStack_48 = 0x29e00000001;
    puStack_40 = &UNK_143338f98;
    ppuStack_38 = &puStack_a0;
    pdb_140f332f0(&uStack_b1,&uStack_90);
  }
  pdb_1417d8230(param_1,param_2,param_3,param_4,param_5,param_6);
  return param_1;
}

