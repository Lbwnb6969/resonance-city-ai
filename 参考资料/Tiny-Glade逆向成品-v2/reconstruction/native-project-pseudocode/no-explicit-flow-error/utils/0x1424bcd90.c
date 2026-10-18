// VA 0x1424bcd90, PDB extent 116 bytes
// utils::subtractive_1d_boolean::SubtractiveBoolean1D::new_range
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/subtractive_1d_boolean.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::subtractive_1d_boolean::SubtractiveBoolean1D::new_range
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/subtractive_1d_boolean.rs
   Extent: 116 */

undefined8 * pdb_1424bcd90(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(0xc,4);
  if (pbVar1 != (byte *)0x0) {
    *(undefined4 *)pbVar1 = param_2;
    *(undefined4 *)(pbVar1 + 4) = param_3;
    pbVar1[8] = 0;
    *param_1 = 1;
    param_1[1] = pbVar1;
    param_1[2] = 1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,0xc);
}

