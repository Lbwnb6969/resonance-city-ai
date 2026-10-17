// Matched PDB: utils::swizzlers::impl$1::xvy
// VA 0x140df4540, PDB extent 27 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: utils::swizzlers::impl$1::xvy
   Extent: 27 bytes. No whole-program auto-analysis. */

undefined4 * pdb_140df4540(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = param_3;
  param_1[2] = uVar1;
  return param_1;
}

