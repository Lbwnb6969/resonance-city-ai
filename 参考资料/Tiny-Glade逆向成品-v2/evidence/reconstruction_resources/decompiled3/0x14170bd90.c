// Matched PDB: core::fmt::impl$80::fmt<asset::texture::desc::TextureChannels>
// VA 0x14170bd90, PDB extent 52 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: core::fmt::impl$80::fmt<asset::texture::desc::TextureChannels>
   Extent: 52 bytes. No whole-program auto-analysis. */

void pdb_14170bd90(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_14332a0db;
  if ((ulonglong)*(byte *)*param_1 != 0) {
    puVar1 = &UNK_14332a0df;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,puVar1,((ulonglong)*(byte *)*param_1 ^ 1) * 3 + 1,
             *(code **)(param_2[1] + 0x18));
  return;
}

