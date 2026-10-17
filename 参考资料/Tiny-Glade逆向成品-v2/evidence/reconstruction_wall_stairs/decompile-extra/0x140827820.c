// Matched PDB: system_wall_constructor::construct_playermade_stairs::wooden_supports::support_station_at
// VA 0x140827820, PDB extent 459 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   system_wall_constructor::construct_playermade_stairs::wooden_supports::support_station_at
   Extent: 459 bytes. No whole-program auto-analysis. */

undefined8
pdb_140827820(undefined8 param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,
             ulonglong param_5,longlong param_6,ulonglong param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10,undefined8 param_11)

{
  float fVar1;
  undefined8 uVar2;
  code *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  float extraout_XMM0_Da;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 auStack_34 [2];
  undefined4 uStack_2c;
  
  uStack_3c = *param_2;
  uStack_38 = param_2[2];
  pdb_140df4540(auStack_34,&uStack_3c,(float)param_2[1] + _DAT_143009d30);
  uVar4 = pdb_1413fa210(param_3,auStack_34[0],uStack_2c);
  uVar7 = (ulonglong)uVar4;
  if (uVar7 < param_5) {
    uVar5 = uVar7 + 1;
    if (param_5 <= uVar5) goto LAB_1408279bd;
    if (uVar7 < param_7) {
      if (uVar5 < param_7) {
        fVar1 = *(float *)(param_4 + uVar7 * 4);
        uVar6 = *(undefined8 *)(param_6 + uVar7 * 8);
        uVar2 = *(undefined8 *)(param_6 + 8 + uVar7 * 8);
        fVar9 = (float)uVar6;
        fVar10 = (float)((ulonglong)uVar6 >> 0x20);
        fVar9 = extraout_XMM0_Da * ((float)uVar2 - fVar9) + fVar9;
        fVar10 = extraout_XMM0_Da * ((float)((ulonglong)uVar2 >> 0x20) - fVar10) + fVar10;
        fVar8 = _DAT_142e36f28 / SQRT(fVar10 * fVar10 + fVar9 * fVar9);
        if ((int)fVar8 - 1U < 0x7fffff ||
            (int)ABS(fVar8) - 0x800000U < 0x7f000000 && -1 < (int)fVar8) {
          fVar9 = fVar9 * fVar8;
          fVar10 = fVar10 * fVar8;
        }
        else {
          fVar10 = 0.0;
          fVar9 = 0.0;
        }
        pdb_1408279f0(param_1,param_2,
                      (*(float *)(param_4 + 4 + uVar7 * 4) - fVar1) * extraout_XMM0_Da + fVar1,fVar9
                      ,fVar10,param_8,param_9,param_10,param_11);
        return param_1;
      }
      goto LAB_1408279db;
    }
  }
  else {
    uVar5 = pdb_142dc81f2(uVar7,param_5,&UNK_143009ef8);
LAB_1408279bd:
    pdb_142dc81f2(uVar5,param_5,&UNK_143009ef8);
  }
  uVar5 = pdb_142dc81f2();
LAB_1408279db:
  pdb_142dc81f2(uVar5);
  pcVar3 = (code *)swi(3);
  uVar6 = (*pcVar3)();
  return uVar6;
}

