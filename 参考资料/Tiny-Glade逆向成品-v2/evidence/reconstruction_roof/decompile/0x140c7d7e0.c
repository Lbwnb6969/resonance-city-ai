// Matched PDB: country_core::resources::roofs::roof_shape::impl$38::fmt
// VA 0x140c7d7e0, PDB extent 42 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: country_core::resources::roofs::roof_shape::impl$38::fmt
   Extent: 42 bytes. No whole-program auto-analysis. */

void pdb_140c7d7e0(byte *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_143074500;
  if (*param_1 != 0) {
    puVar1 = &UNK_143074503;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,puVar1,(ulonglong)*param_1 * 2 + 3,*(code **)(param_2[1] + 0x18));
  return;
}

