// VA 0x1406d0630, PDB extent 51 bytes
// usdl::sdl::Sdl::mouse
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/sdl.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: usdl::sdl::Sdl::mouse
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/sdl.rs
   Extent: 51 */

void pdb_1406d0630(void)

{
  int iVar1;
  
  iVar1 = _DAT_143cb2bdc;
  LOCK();
  _DAT_143cb2bdc = _DAT_143cb2bdc + 1;
  UNLOCK();
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142f99db7,0x53,&UNK_142f99df8);
}

