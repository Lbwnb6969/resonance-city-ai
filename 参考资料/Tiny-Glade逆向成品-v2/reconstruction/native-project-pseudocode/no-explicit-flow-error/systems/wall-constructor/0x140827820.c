// VA 0x140827820, PDB extent 459 bytes
// system_wall_constructor::construct_playermade_stairs::wooden_supports::support_station_at
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/wooden_supports.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_playermade_stairs::wooden_supports::support_station_at
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/wooden_supports.rs
   Extent: 459 */

undefined8
pdb_140827820(undefined8 param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,
             ulonglong param_5,longlong param_6,ulonglong param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10,undefined8 param_11)

{
  ulonglong uVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  float extraout_XMM0_Da;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 auStack_34 [2];
  undefined4 uStack_2c;
  
  uStack_3c = *param_2;
  uStack_38 = param_2[2];
  pdb_140df4540(auStack_34,&uStack_3c,(float)param_2[1] + _DAT_143009d30);
  uVar5 = pdb_1413fa210(param_3,auStack_34[0],uStack_2c);
  uVar6 = (ulonglong)uVar5;
  if (param_5 <= uVar6) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar6,param_5,&UNK_143009ef8);
  }
  uVar1 = uVar6 + 1;
  if (param_5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar1,param_5,&UNK_143009ef8);
  }
  if (param_7 <= uVar6) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar6,param_7,&UNK_143009f10);
  }
  if (uVar1 < param_7) {
    fVar2 = *(float *)(param_4 + uVar6 * 4);
    uVar3 = *(undefined8 *)(param_6 + uVar6 * 8);
    uVar4 = *(undefined8 *)(param_6 + 8 + uVar6 * 8);
    fVar8 = (float)uVar3;
    fVar9 = (float)((ulonglong)uVar3 >> 0x20);
    fVar8 = extraout_XMM0_Da * ((float)uVar4 - fVar8) + fVar8;
    fVar9 = extraout_XMM0_Da * ((float)((ulonglong)uVar4 >> 0x20) - fVar9) + fVar9;
    fVar7 = _DAT_142e36f28 / SQRT(fVar9 * fVar9 + fVar8 * fVar8);
    if ((int)fVar7 - 1U < 0x7fffff || (int)ABS(fVar7) - 0x800000U < 0x7f000000 && -1 < (int)fVar7) {
      fVar8 = fVar8 * fVar7;
      fVar9 = fVar9 * fVar7;
    }
    else {
      fVar9 = 0.0;
      fVar8 = 0.0;
    }
    pdb_1408279f0(param_1,param_2,
                  (*(float *)(param_4 + 4 + uVar6 * 4) - fVar2) * extraout_XMM0_Da + fVar2,fVar8,
                  fVar9,param_8,param_9,param_10,param_11);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar1,param_7,&UNK_143009f10);
}

