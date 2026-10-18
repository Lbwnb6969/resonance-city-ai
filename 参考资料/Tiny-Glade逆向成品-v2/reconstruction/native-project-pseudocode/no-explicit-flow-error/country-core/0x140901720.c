// VA 0x140901720, PDB extent 32 bytes
// country_core::resources::walls::decorator::TransientDecoratorIdGen::generate
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::TransientDecoratorIdGen::generate
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 32 */

int pdb_140901720(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)*param_1;
  if (*(char *)(param_1 + 2) != '\0') {
    *(int *)*param_1 = iVar1 + 1;
    return iVar1;
  }
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return iVar1 + (int)lVar2;
}

