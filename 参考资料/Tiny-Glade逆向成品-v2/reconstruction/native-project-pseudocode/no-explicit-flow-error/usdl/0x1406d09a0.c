// VA 0x1406d09a0, PDB extent 11 bytes
// usdl::rect::Rect::width
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/rect.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::rect::Rect::width
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/rect.rs
   Extent: 11 */

int pdb_1406d09a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 8);
  }
  return iVar1;
}

