// VA 0x1409010f0, PDB extent 57 bytes
// country_core::resources::walls::decorator::DecoratorInfo::dst_as_roof
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::DecoratorInfo::dst_as_roof
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 57 */

void pdb_1409010f0(longlong param_1,undefined8 param_2)

{
  longlong lStack_10;
  code *pcStack_8;
  
  lStack_10 = param_1 + 0x10;
  if (*(char *)(param_1 + 0x32) == '\x02') {
    return;
  }
  pcStack_8 = pdb_140905420;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14301e328,&lStack_10,param_2);
}

