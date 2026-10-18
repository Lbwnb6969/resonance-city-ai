// VA 0x140c42160, PDB extent 86 bytes
// country_core::resources::walls::decorator_archivist::DecoratorArchivist::decorator_cull_allow_stairs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_archivist::DecoratorArchivist::decorator_cull_allow_stairs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
   Extent: 86 */

void pdb_140c42160(longlong param_1,longlong param_2)

{
  undefined8 uStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_28;
  
  lStack_58 = param_2 + 0x120;
  if (*(longlong *)(param_2 + 0x120) == 0) {
    lStack_58 = 0;
  }
  uStack_60 = 1;
  uStack_50 = 0;
  uStack_28 = 0;
  pdb_1414e0e70(&uStack_60,param_1 + 0x30);
  return;
}

