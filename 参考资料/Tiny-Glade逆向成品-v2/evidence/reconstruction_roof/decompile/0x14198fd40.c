// Matched PDB: country_core::resources::roofs::roof_shape::impl$30::fmt
// VA 0x14198fd40, PDB extent 42 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: country_core::resources::roofs::roof_shape::impl$30::fmt
   Extent: 42 bytes. No whole-program auto-analysis. */

void pdb_14198fd40(byte *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_14335c7b0;
  if (*param_1 != 0) {
    puVar1 = &UNK_14335c7b5;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,puVar1,*param_1 ^ 5,*(code **)(param_2[1] + 0x18));
  return;
}

