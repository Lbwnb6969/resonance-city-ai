// Matched PDB: country_core::resources::roofs::roof_shape::Roof::pivot_3d
// VA 0x140b77b90, PDB extent 38 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: country_core::resources::roofs::roof_shape::Roof::pivot_3d
   Extent: 38 bytes. No whole-program auto-analysis. */

void pdb_140b77b90(undefined4 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10 + (ulonglong)*(uint *)(param_2 + 8) * 8);
  uVar2 = *(undefined4 *)(param_2 + 0x4c);
  *param_1 = *(undefined4 *)(param_2 + 0xc + (ulonglong)*(uint *)(param_2 + 8) * 8);
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  return;
}

