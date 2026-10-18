// VA 0x140901440, PDB extent 66 bytes
// country_core::resources::walls::decorator::DecoratorExtraInfo::as_flag
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::DecoratorExtraInfo::as_flag
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 66 */

longlong pdb_140901440(longlong param_1,undefined8 param_2)

{
  longlong lStack_18;
  longlong *plStack_10;
  code *pcStack_8;
  
  if (*(char *)(param_1 + 0x17) == '\x05') {
    return param_1;
  }
  plStack_10 = &lStack_18;
  pcStack_8 = pdb_1417c24f0;
  lStack_18 = param_1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14301e45d,&plStack_10,param_2);
}

