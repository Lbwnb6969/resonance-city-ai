// Matched PDB: utils::circular_f32::CircularF32::as_f32
// VA 0x141c40430, PDB extent 66 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: utils::circular_f32::CircularF32::as_f32
   Extent: 66 bytes. No whole-program auto-analysis. */

uint pdb_141c40430(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = _DAT_142f57bcc;
  fVar2 = (float)func_0x000142e32a70(*param_1);
  return ~-(uint)(fVar2 < 0.0) & (uint)fVar2 | (uint)(fVar1 + fVar2) & -(uint)(fVar2 < 0.0);
}

