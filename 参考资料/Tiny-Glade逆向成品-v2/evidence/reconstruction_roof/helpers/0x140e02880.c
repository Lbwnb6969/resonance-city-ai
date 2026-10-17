// Matched PDB: fastrand::Rng::f32
// VA 0x140e02880, PDB extent 56 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: fastrand::Rng::f32
   Extent: 56 bytes. No whole-program auto-analysis. */

float pdb_140e02880(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  
  uVar3 = *param_1 + 0xa0761d6478bd642f;
  *param_1 = uVar3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3 ^ 0xe7037ed1a0b428db;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3;
  return (float)((SUB164(auVar1 * auVar2,8) ^ SUB164(auVar1 * auVar2,0)) >> 9 | 0x3f800000) +
         _DAT_142e36f34;
}

