// Matched PDB: asset::texture::desc::impl$52::fmt
// VA 0x14170c1f0, PDB extent 47 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: asset::texture::desc::impl$52::fmt
   Extent: 47 bytes. No whole-program auto-analysis. */

void pdb_14170c1f0(char *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = 7;
  if (*param_1 != '\0') {
    uVar2 = 0x11;
  }
  puVar1 = &UNK_14332a0c3;
  if (*param_1 != '\0') {
    puVar1 = &UNK_14332a0ca;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,puVar1,uVar2,*(code **)(param_2[1] + 0x18));
  return;
}

