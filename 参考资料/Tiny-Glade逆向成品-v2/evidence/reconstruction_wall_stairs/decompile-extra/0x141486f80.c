// Matched PDB: system_wall_constructor::construct_wooden_walls::construct_wall_boards::top_rim_step_pattern_info
// VA 0x141486f80, PDB extent 546 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::top_rim_step_pattern_info
   Extent: 546 bytes. No whole-program auto-analysis. */

float * pdb_141486f80(float *param_1,longlong param_2,longlong param_3,ulonglong param_4,
                     float param_5)

{
  float fVar1;
  code *pcVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float afStack_d8 [4];
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  
  if ((param_3 == 1) && ((*(byte *)(param_2 + 0x1c) & 1) != 0)) {
    uStack_c8 = *(undefined8 *)(param_2 + 0x30);
    afStack_d8[0] = *(float *)(param_2 + 0x20);
    afStack_d8[1] = *(float *)(param_2 + 0x24);
    afStack_d8[2] = *(float *)(param_2 + 0x28);
    afStack_d8[3] = *(float *)(param_2 + 0x2c);
    fVar4 = (float)pdb_140df0700(afStack_d8,0);
    fVar1 = *(float *)(param_2 + 0x3c);
    fVar5 = (float)pdb_140df0700(afStack_d8,1);
    fVar6 = (float)pdb_140df0700(afStack_d8,1);
    fVar7 = (float)pdb_140df0700(afStack_d8,2);
    fVar8 = (float)pdb_140df0700(afStack_d8,2);
    fVar9 = (float)pdb_140df0700(afStack_d8,3);
    fVar10 = (float)pdb_140df0700(afStack_d8,3);
    fVar11 = (float)pdb_140df0700(afStack_d8,4);
    afStack_d8[0] = fVar4 * fVar1;
    afStack_d8[1] = fVar5 * fVar1;
    afStack_d8[2] = fVar6 * fVar1;
    afStack_d8[3] = fVar7 * fVar1;
    uStack_c8 = CONCAT44(fVar9 * fVar1,fVar8 * fVar1);
    fStack_c0 = fVar10 * fVar1;
    fStack_bc = fVar11 * fVar1;
    if (3 < param_4) {
      pdb_142dc81f2(param_4,4,&UNK_14330d240);
      pcVar2 = (code *)swi(3);
      pfVar3 = (float *)(*pcVar2)();
      return pfVar3;
    }
    fVar1 = afStack_d8[param_4 * 2];
    fVar4 = afStack_d8[param_4 * 2 + 1];
    param_5 = param_5 - fVar1;
    if (param_5 <= 0.0) {
      param_5 = 0.0;
    }
    *param_1 = param_5;
    param_1[1] = fVar4 - fVar1;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  else {
    fVar1 = *(float *)(param_2 + 0x3c);
    fVar4 = (float)func_0x000142e32a70(param_5,fVar1);
    *param_1 = (float)(-(uint)(fVar4 < 0.0) & (uint)((float)(_DAT_142e377e0 & (uint)fVar1) + fVar4)
                      | ~-(uint)(fVar4 < 0.0) & (uint)fVar4);
    param_1[1] = fVar1;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return param_1;
}

