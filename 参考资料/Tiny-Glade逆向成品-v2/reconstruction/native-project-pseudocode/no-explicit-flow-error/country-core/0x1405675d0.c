// VA 0x1405675d0, PDB extent 173 bytes
// country_core::render::render_config::impl$21::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::render_config::impl$21::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
   Extent: 173 */

void pdb_1405675d0(longlong param_1,undefined8 param_2)

{
  longlong lStack_8;
  
  lStack_8 = param_1 + 0x20;
  pdb_140f66ff0(param_2,&UNK_142f68ae0,0xc,&UNK_142f68aec,4,param_1,&UNK_142f68a80,&UNK_142f68af0,
                0x10,param_1 + 0x18,&UNK_142f68aa0,&UNK_142f68b00,0xc,&lStack_8,&UNK_142f68ac0);
  return;
}

