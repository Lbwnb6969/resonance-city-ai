// VA 0x1408b95b0, PDB extent 714 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_wooden_railings_assemble::push_wooden_railing_post
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_wooden_railings_assemble.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_wooden_railings_assemble::push_wooden_railing_post
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_wooden_railings_assemble.rs
   Extent: 714 */

void pdb_1408b95b0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,byte param_6,float param_7,float param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  float fStack_a8;
  undefined8 uStack_a4;
  float fStack_9c;
  
  if (1 < param_6) {
    fVar11 = _DAT_14301592c;
    if (param_6 == 2) {
      fVar11 = _DAT_143015928;
    }
    fVar1 = (float)pdb_140e02880();
    fVar2 = (float)pdb_140e02880(param_1);
    fVar3 = (float)pdb_140e02880(param_1);
    fVar11 = fVar11 + param_8;
    fVar4 = (param_8 + _DAT_1430151b0) * 0.0;
    fStack_9c = *(float *)(param_4 + 1) - fVar4;
    fVar3 = param_7 * (fVar3 + _DAT_142e61230) * _DAT_143009bd0 * fVar11;
    fVar7 = param_7 * (fVar1 + _UNK_142e61234) * _UNK_143009bd4 * fVar11;
    fVar1 = (fVar2 + _DAT_142e36f38) * param_7 * _DAT_142e37988 * fVar11;
    fVar9 = fVar11 * 0.0;
    fStack_b8 = fVar11 + fVar1;
    fStack_b4 = fVar3 + fVar9;
    fVar11 = fVar11 + fVar1;
    fStack_bc = fVar7 + fVar9;
    fVar6 = (float)((ulonglong)*(undefined8 *)((longlong)param_5 + 4) >> 0x20);
    fVar5 = (float)*param_5;
    fVar8 = (float)((ulonglong)*param_5 >> 0x20);
    fVar1 = fStack_b8 * fVar5 - fStack_bc * (float)*(undefined8 *)((longlong)param_5 + 4);
    fVar2 = fStack_b4 * fVar8 - fVar11 * fVar6;
    fVar6 = fVar6 * fStack_bc - fStack_b4 * fVar5;
    fVar10 = _DAT_142e36f28 / SQRT(fVar2 * fVar2 + fVar6 * fVar6 + fVar1 * fVar1);
    fVar2 = fVar2 * fVar10;
    fVar6 = fVar6 * fVar10;
    fVar12 = _DAT_142e36f28 /
             SQRT(fStack_b4 * fStack_b4 + fStack_bc * fStack_bc + fStack_b8 * fStack_b8);
    fVar7 = (fVar9 + fVar7) * fVar12;
    fStack_c0 = (fVar7 * fVar6 - fVar2 * fStack_b8 * fVar12) * _DAT_14300c2e0;
    fStack_a8 = _DAT_14300c2e0 * fVar1 * fVar10;
    uStack_c8 = CONCAT44((fStack_b4 * fVar12 * fVar2 -
                         fVar7 * (fVar5 * fVar11 - fStack_bc * fVar8) * fVar10) * _UNK_14300c2d4,
                         (fStack_b8 * fVar12 * fVar1 * fVar10 - (fVar9 + fVar3) * fVar12 * fVar6) *
                         _DAT_14300c2d0);
    uStack_b0 = CONCAT44(fVar6 * _UNK_14300c2d4,fVar2 * _DAT_14300c2d0);
    uStack_a4 = CONCAT44((float)((ulonglong)*param_4 >> 0x20) - (param_8 + _DAT_1430151b0),
                         (float)*param_4 - fVar4);
    pdb_1408b9880(param_1,param_2,param_3,&uStack_c8);
  }
  return;
}

