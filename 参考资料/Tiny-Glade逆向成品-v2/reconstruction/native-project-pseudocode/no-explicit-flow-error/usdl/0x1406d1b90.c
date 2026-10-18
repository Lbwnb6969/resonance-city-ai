// VA 0x1406d1b90, PDB extent 9 bytes
// usdl::sdl::impl$4::drop
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/sdl.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::sdl::impl$4::drop
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/sdl.rs
   Extent: 9 */

undefined1 pdb_1406d1b90(void)

{
  undefined1 uVar1;
  
  uVar1 = DAT_143cb2be0;
  LOCK();
  DAT_143cb2be0 = 0;
  UNLOCK();
  return uVar1;
}

