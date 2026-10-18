// VA 0x1406d1b30, PDB extent 37 bytes
// usdl::keyboard::Scancode::from_i32
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/keyboard.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::keyboard::Scancode::from_i32
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/keyboard.rs
   Extent: 37 */

undefined4 pdb_1406d1b30(int param_1)

{
  if (param_1 - 4U < 0xe4) {
    return *(undefined4 *)(&UNK_142f9a23c + (ulonglong)(param_1 - 4U) * 4);
  }
  return 0;
}

