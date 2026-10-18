// VA 0x1403943c0, PDB extent 116 bytes
// usdl::video::impl$39::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::video::impl$39::fmt
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
   Extent: 116 */

void pdb_1403943c0(longlong *param_1,undefined8 param_2)

{
  longlong *plStack_8;
  
  if (SBORROW8(0,*param_1)) {
    plStack_8 = param_1 + 1;
    pdb_140f66090(param_2,&UNK_142f486d4,8,&plStack_8,&UNK_142f47f50);
    return;
  }
  plStack_8 = param_1;
  pdb_140f66090(param_2,&UNK_142f486c8,0xc,&plStack_8,&UNK_142f486a8);
  return;
}

