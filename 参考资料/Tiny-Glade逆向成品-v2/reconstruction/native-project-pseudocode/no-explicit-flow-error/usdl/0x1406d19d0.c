// VA 0x1406d19d0, PDB extent 19 bytes
// usdl::keyboard::KeyboardUtil::mod_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/keyboard.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::keyboard::KeyboardUtil::mod_state
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/keyboard.rs
   Extent: 19 */

uint pdb_1406d19d0(void)

{
  uint uVar1;
  
  uVar1 = pdb_14100b4d0();
  return uVar1 & 0xffc3;
}

