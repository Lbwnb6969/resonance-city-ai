// VA 0x14100b3b0, PDB extent 77 bytes
// usdl_sys::syswm::uSDL_GetVersion
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/syswm.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: usdl_sys::syswm::uSDL_GetVersion
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/syswm.rs
   Extent: 77 */

void pdb_14100b3b0(void)

{
  if (_DAT_143ca3368 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014100b3e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000143ca3208)();
    return;
  }
  if (_DAT_143ca3378 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014100b3d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*_DAT_143ca3370)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142f9aba9,0x1d,&UNK_142f9abd8);
}

