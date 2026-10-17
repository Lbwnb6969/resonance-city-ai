// Matched PDB: utils::wall_space::WallSpaceCoord::from_world_space
// VA 0x140dea520, PDB extent 72 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: utils::wall_space::WallSpaceCoord::from_world_space
   Extent: 72 bytes. No whole-program auto-analysis. */

float pdb_140dea520(undefined4 *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)pdb_141e38fb0(param_2,*param_1,param_1[2],&UNK_1431fee70);
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = _DAT_142e36f28;
  if (fVar2 <= _DAT_142e36f28) {
    fVar1 = fVar2;
  }
  return fVar1 * *(float *)(param_2 + 0x30);
}

