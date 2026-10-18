// VA 0x140c017b0, PDB extent 10 bytes
// country_core::resources::stairs::stairs_assembly_params::impl$2::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_assembly_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_assembly_params::impl$2::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_assembly_params.rs
   Extent: 10 */

ulonglong pdb_140c017b0(longlong param_1,uint param_2)

{
  return (ulonglong)param_2 | param_1 << 0x20;
}

