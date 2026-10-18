// VA 0x14100aa80, PDB extent 85 bytes
// usdl_sys::mouse::uSDL_CaptureMouse
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/mouse.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: usdl_sys::mouse::uSDL_CaptureMouse
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/mouse.rs
   Extent: 85 */

void pdb_14100aa80(void)

{
  if (_DAT_143ca3368 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014100aab5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000143ca32f0)();
    return;
  }
  if (_DAT_143ca3378 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014100aaa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_143ca3370 + 0xe8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142f9aba9,0x1d,&UNK_142f9abd8);
}

