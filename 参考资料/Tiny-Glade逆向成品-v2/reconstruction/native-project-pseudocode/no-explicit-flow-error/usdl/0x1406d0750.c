// VA 0x1406d0750, PDB extent 85 bytes
// usdl::sdl::init
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/sdl.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: usdl::sdl::init
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/sdl.rs
   Extent: 85 */

undefined8 * pdb_1406d0750(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  
  LOCK();
  iVar1 = _DAT_143cb2bdc + 1;
  UNLOCK();
  bVar2 = _DAT_143cb2bdc == 0;
  _DAT_143cb2bdc = iVar1;
  if (bVar2) {
    iVar1 = pdb_14100a730(0);
    if (iVar1 != 0) {
      _DAT_143cb2bdc = 0;
      pdb_1406d0840(param_1);
      return param_1;
    }
  }
  *param_1 = 0x8000000000000000;
  return param_1;
}

