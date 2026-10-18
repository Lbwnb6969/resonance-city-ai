// VA 0x1406d0f00, PDB extent 8 bytes
// usdl::mouse::MouseUtil::capture
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/mouse.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: usdl::mouse::MouseUtil::capture
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/mouse.rs
   Extent: 8 */

void pdb_1406d0f00(undefined8 param_1,undefined1 param_2)

{
  if (_DAT_143ca3368 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014100aab5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000143ca32f0)(param_2);
    return;
  }
  if (_DAT_143ca3378 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014100aaa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_143ca3370 + 0xe8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142f9aba9,0x1d,&UNK_142f9abd8);
}

