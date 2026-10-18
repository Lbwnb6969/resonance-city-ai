// VA 0x140901330, PDB extent 18 bytes
// country_core::resources::walls::decorator::DecoratorType::max_rank
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::decorator::DecoratorType::max_rank
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 18 */

char pdb_140901330(ulonglong param_1)

{
  return (param_1 < 3) * '\x02' + '\x01';
}

