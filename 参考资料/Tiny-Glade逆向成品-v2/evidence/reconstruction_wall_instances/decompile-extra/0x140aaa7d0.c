// Matched PDB: country_core::render::nani::instance_data::CurvedHalfTimberInstanceData::with_flags
// VA 0x140aaa7d0, PDB extent 46 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: country_core::render::nani::instance_data::CurvedHalfTimberInstanceData::with_flags
   Extent: 46 bytes. No whole-program auto-analysis. */

undefined8 * pdb_140aaa7d0(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(uint *)(param_2 + 7) = *(uint *)(param_2 + 7) | param_3;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar7;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  return param_1;
}

