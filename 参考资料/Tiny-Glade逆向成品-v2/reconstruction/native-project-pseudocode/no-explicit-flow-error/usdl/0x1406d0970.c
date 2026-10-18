// VA 0x1406d0970, PDB extent 35 bytes
// usdl::rect::Rect::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/rect.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::rect::Rect::new
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/rect.rs
   Extent: 35 */

void pdb_1406d0970(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5
                  )

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 + (uint)(param_4 == 0);
  param_1[3] = param_5 + (uint)(param_5 == 0);
  return;
}

