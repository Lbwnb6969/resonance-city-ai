// VA 0x1406d1ba0, PDB extent 20 bytes
// usdl::video::impl$1::drop
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: usdl::video::impl$1::drop
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
   Extent: 20 */

void pdb_1406d1ba0(void)

{
  LOCK();
  _DAT_143cb2be4 = _DAT_143cb2be4 + -1;
  UNLOCK();
  if (_DAT_143cb2be4 != 0) {
    return;
  }
  if (_DAT_143ca3368 != 0) {
    if (_DAT_143ca3378 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014100a703. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_143ca3370 + 0x20))();
      return;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_142f9aba9,0x1d,&UNK_142f9abd8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014100a712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000143ca3228)(0x20);
  return;
}

