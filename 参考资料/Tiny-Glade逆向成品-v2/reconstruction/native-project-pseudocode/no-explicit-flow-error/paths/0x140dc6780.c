// VA 0x140dc6780, PDB extent 46 bytes
// paths::backup_saves
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/paths/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: paths::backup_saves
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/paths/src/lib.rs
   Extent: 46 */

undefined8 pdb_140dc6780(void)

{
  if (_DAT_143cb2d20 != 0) {
    return _DAT_143cb2d80;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1431f29c0);
}

