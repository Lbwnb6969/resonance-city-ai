// Matched PDB: asset::texture::desc::impl$28::fmt
// VA 0x14170c220, PDB extent 39 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: asset::texture::desc::impl$28::fmt
   Extent: 39 bytes. No whole-program auto-analysis. */

void pdb_14170c220(byte *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,&UNK_14332a130 + *(int *)(&UNK_14332a130 + (ulonglong)*param_1 * 4),
             *(undefined8 *)(&UNK_14332a110 + (ulonglong)*param_1 * 8),*(code **)(param_2[1] + 0x18)
            );
  return;
}

