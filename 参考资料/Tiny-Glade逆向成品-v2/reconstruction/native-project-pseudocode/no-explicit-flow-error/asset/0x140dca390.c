// VA 0x140dca390, PDB extent 66 bytes
// asset::foliage::grass2_runtime_config_name
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/foliage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset::foliage::grass2_runtime_config_name
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/foliage.rs
   Extent: 66 */

undefined8 pdb_140dca390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 *puStack_18;
  code *pcStack_10;
  
  puStack_18 = &uStack_28;
  pcStack_10 = pdb_1402ed400;
  uStack_28 = param_2;
  uStack_20 = param_3;
  pdb_140f60760(param_1,&UNK_1431f3830,&puStack_18);
  return param_1;
}

