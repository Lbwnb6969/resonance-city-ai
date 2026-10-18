// VA 0x14100b4d0, PDB extent 87 bytes
// usdl_sys::keyboard::uSDL_GetModState
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/keyboard.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: usdl_sys::keyboard::uSDL_GetModState
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/keyboard.rs
   Extent: 87 */

void pdb_14100b4d0(void)

{
  if (_DAT_143ca3368 == 0) {
    (*pcRam0000000143ca3338)();
    return;
  }
  if (_DAT_143ca3378 == 0) {
    (**(code **)(_DAT_143ca3370 + 0x130))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142f9aba9,0x1d,&UNK_142f9abd8);
}

