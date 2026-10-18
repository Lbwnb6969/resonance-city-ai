// VA 0x14100a780, PDB extent 79 bytes
// usdl_sys::uSDL_Quit
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: usdl_sys::uSDL_Quit
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/lib.rs
   Extent: 79 */

void pdb_14100a780(void)

{
  if (_DAT_143ca3368 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014100a7b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000143ca3220)();
    return;
  }
  if (_DAT_143ca3378 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014100a7a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_143ca3370 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142f9aba9,0x1d,&UNK_142f9abd8);
}

