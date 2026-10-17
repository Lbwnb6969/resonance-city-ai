// Matched PDB: utils::geometry::circle::Circle2d::get_normal_at_u
// VA 0x140def5e0, PDB extent 135 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: utils::geometry::circle::Circle2d::get_normal_at_u
   Extent: 135 bytes. No whole-program auto-analysis. */

undefined4 pdb_140def5e0(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar1 = _DAT_142f57bcc;
  fVar4 = (_DAT_142e36f28 - param_2) * _DAT_142f57bcc;
  fVar2 = (float)func_0x000142e32a70(*(undefined4 *)(param_1 + 0xc),_DAT_142f57bcc);
  fVar4 = (float)(~-(uint)(fVar2 < 0.0) & (uint)fVar2 | (uint)(fVar1 + fVar2) & -(uint)(fVar2 < 0.0)
                 ) + fVar4;
  uVar3 = func_0x000142e329e0(fVar4);
  func_0x000142e32b30(fVar4);
  return uVar3;
}

