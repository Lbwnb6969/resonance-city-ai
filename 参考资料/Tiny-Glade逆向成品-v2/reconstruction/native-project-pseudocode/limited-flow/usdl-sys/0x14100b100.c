// VA 0x14100b100, PDB extent 91 bytes
// usdl_sys::video::uSDL_SetWindowFullscreen
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: usdl_sys::video::uSDL_SetWindowFullscreen
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/video.rs
   Extent: 91 */

void pdb_14100b100(void)

{
  if (_DAT_143ca3368 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014100b13f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000143ca32e8)();
    return;
  }
  if (_DAT_143ca3378 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014100b12a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_143ca3370 + 0xe0))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142f9aba9,0x1d,&UNK_142f9abd8);
}

