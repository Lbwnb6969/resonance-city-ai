// Matched PDB: utils::swizzlers::impl$0::x0y
// VA 0x140df4520, PDB extent 21 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: utils::swizzlers::impl$0::x0y
   Extent: 21 bytes. No whole-program auto-analysis. */

ulonglong * pdb_140df4520(ulonglong *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = param_2[1];
  *param_1 = (ulonglong)*param_2;
  *(uint *)(param_1 + 1) = uVar1;
  return param_1;
}

