// VA 0x14100a640, PDB extent 79 bytes
// usdl_sys::uSDL_GetError
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: usdl_sys::uSDL_GetError
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/lib.rs
   Extent: 79 */

void pdb_14100a640(void)

{
  if (_DAT_143ca3368 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014100a672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000143ca3230)();
    return;
  }
  if (_DAT_143ca3378 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014100a663. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_143ca3370 + 0x28))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142f9aba9,0x1d,&UNK_142f9abd8);
}

