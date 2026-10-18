// VA 0x140c016f0, PDB extent 91 bytes
// country_core::resources::stairs::stairs_assembly_params::AlignKind::outgoing_dir
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_assembly_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_assembly_params::AlignKind::outgoing_dir
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_assembly_params.rs
   Extent: 91 */

undefined4 pdb_140c016f0(char *param_1)

{
  if (*param_1 == '\0') {
    return *(undefined4 *)(param_1 + 4);
  }
  if (*param_1 == '\x01') {
    return *(undefined4 *)(param_1 + 0xc);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143067fe2,0x57,&UNK_143068050);
}

