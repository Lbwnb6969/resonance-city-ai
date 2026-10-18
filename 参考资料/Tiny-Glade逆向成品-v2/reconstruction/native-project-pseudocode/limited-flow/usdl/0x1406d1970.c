// VA 0x1406d1970, PDB extent 91 bytes
// usdl::video::impl$6::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::video::impl$6::fmt
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
   Extent: 91 */

void pdb_1406d1970(longlong *param_1,undefined8 *param_2)

{
  longlong *plStack_18;
  longlong **pplStack_10;
  code *pcStack_8;
  
  if (SBORROW8(0,*param_1)) {
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,param_1[2],param_1[3],*(code **)(param_2[1] + 0x18));
    return;
  }
  pplStack_10 = &plStack_18;
  pcStack_8 = pdb_14100b460;
  plStack_18 = param_1;
  pdb_140f681d0(*param_2,param_2[1],&UNK_142f99e90,&pplStack_10);
  return;
}

