// VA 0x142d902b0, PDB extent 288 bytes
// country_core::render::vao::encode_vertex_data::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/vao.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::vao::encode_vertex_data::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/vao.rs
   Extent: 288 */

void pdb_142d902b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lStack_60;
  code *pcStack_58;
  longlong lStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  lStack_60 = param_1 + 0x68;
  lStack_50 = param_1 + 0x18;
  pcStack_58 = pdb_1402ed420;
  pcStack_48 = pdb_140b963a0;
  pcStack_38 = pdb_140b966f0;
  pcStack_28 = pdb_1402ed400;
  uStack_40 = param_3;
  uStack_30 = param_2;
  uStack_20 = param_3;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14305e494,&lStack_60,&UNK_14305e4d8);
}

