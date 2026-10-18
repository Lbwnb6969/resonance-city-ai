// VA 0x140678d00, PDB extent 116 bytes
// usdl::video::impl$39::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::video::impl$39::fmt
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
   Extent: 116 */

void pdb_140678d00(longlong *param_1,undefined8 param_2)

{
  longlong *plStack_8;
  
  if (SBORROW8(0,*param_1)) {
    plStack_8 = param_1 + 1;
    pdb_140f66090(param_2,&UNK_142f9139c,8,&plStack_8,&UNK_142f90bd8);
    return;
  }
  plStack_8 = param_1;
  pdb_140f66090(param_2,&UNK_142f91390,0xc,&plStack_8,&UNK_142f91370);
  return;
}

