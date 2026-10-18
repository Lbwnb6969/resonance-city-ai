// VA 0x1406d0e60, PDB extent 91 bytes
// usdl::mouse::Cursor::from_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/mouse.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::mouse::Cursor::from_system
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/mouse.rs
   Extent: 91 */

longlong * pdb_1406d0e60(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lStack_28;
  longlong lStack_20;
  longlong lStack_18;
  
  lVar1 = pdb_14100ab40(param_2);
  if ((lVar1 == 0) &&
     (pdb_1406d0840(&lStack_28), lVar1 = lStack_20, lStack_28 != -0x8000000000000000)) {
    *param_1 = lStack_28;
    param_1[1] = lStack_20;
    param_1[2] = lStack_18;
    return param_1;
  }
  param_1[1] = lVar1;
  *param_1 = -0x8000000000000000;
  return param_1;
}

