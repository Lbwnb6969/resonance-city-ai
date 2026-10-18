// VA 0x1406d09b0, PDB extent 11 bytes
// usdl::rect::Rect::height
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/rect.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::rect::Rect::height
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/rect.rs
   Extent: 11 */

int pdb_1406d09b0(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  return iVar1;
}

