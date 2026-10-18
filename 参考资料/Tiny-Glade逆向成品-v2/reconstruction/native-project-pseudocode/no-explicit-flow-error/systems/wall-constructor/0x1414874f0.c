// VA 0x1414874f0, PDB extent 731 bytes
// system_wall_constructor::construct_wooden_walls::construct_wall_boards::gable_roof_side_x_span_at_y
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::gable_roof_side_x_span_at_y
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
   Extent: 731 */

void pdb_1414874f0(undefined4 *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  float param_5,undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
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
  float fVar13;
  float fVar14;
  float fStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_b8 [144];
  
  fStack_e0 = param_5;
  uStack_dc = param_6;
  pdb_140df4540(auStack_b8,&fStack_e0,param_7);
  pdb_140b77d90(&iStack_d8,param_2,auStack_b8);
  if ((iStack_d8 == 1) &&
     (fVar2 = (float)pdb_140df3e10(auStack_b8,param_4), (*(byte *)(param_3 + 0x1c) & 1) != 0)) {
    uStack_c8 = (undefined4)*(undefined8 *)(param_3 + 0x30);
    uStack_c4 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x30) >> 0x20);
    iStack_d8 = (int)*(undefined8 *)(param_3 + 0x20);
    uStack_d4 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x20) >> 0x20);
    uStack_d0 = (undefined4)*(undefined8 *)(param_3 + 0x28);
    uStack_cc = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x28) >> 0x20);
    fVar7 = param_5;
    fVar3 = (float)pdb_140df0700(&iStack_d8,param_4);
    fVar13 = *(float *)(param_3 + 0x3c);
    fVar4 = (float)pdb_140df3e10(&iStack_d8,param_4);
    lVar1 = param_4 + 1;
    fVar11 = fVar7;
    fVar5 = (float)pdb_140df3e10(&iStack_d8,lVar1);
    fVar14 = _DAT_143006dc0;
    fVar6 = fVar5 - fVar4;
    fVar8 = fVar11 - fVar7;
    fVar9 = fVar8 * fVar8 + fVar6 * fVar6;
    if (fVar9 <= _DAT_143006dc0) {
      fVar9 = _DAT_143006dc0;
    }
    fVar12 = (((param_5 - fVar7) * fVar8 + (fVar2 - fVar4) * fVar6) / fVar9) *
             SQRT((fVar7 - fVar11) * (fVar7 - fVar11) + (fVar4 - fVar5) * (fVar4 - fVar5)) +
             fVar3 * fVar13;
    fVar3 = (float)pdb_140df3e10(auStack_b8,lVar1);
    uStack_c8 = (undefined4)*(undefined8 *)(param_3 + 0x30);
    uStack_c4 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x30) >> 0x20);
    iStack_d8 = (int)*(undefined8 *)(param_3 + 0x20);
    uStack_d4 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x20) >> 0x20);
    uStack_d0 = (undefined4)*(undefined8 *)(param_3 + 0x28);
    uStack_cc = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x28) >> 0x20);
    fVar2 = fVar9;
    fVar4 = (float)pdb_140df0700(&iStack_d8,param_4);
    fVar5 = (float)pdb_140df3e10(&iStack_d8,param_4);
    fVar7 = fVar2;
    fVar6 = (float)pdb_140df3e10(&iStack_d8,lVar1);
    fVar8 = fVar6 - fVar5;
    fVar10 = fVar7 - fVar2;
    fVar11 = fVar10 * fVar10 + fVar8 * fVar8;
    if (fVar11 <= fVar14) {
      fVar11 = fVar14;
    }
    fVar13 = (((fVar9 - fVar2) * fVar10 + (fVar3 - fVar5) * fVar8) / fVar11) *
             SQRT((fVar2 - fVar7) * (fVar2 - fVar7) + (fVar5 - fVar6) * (fVar5 - fVar6)) +
             fVar4 * fVar13;
    fVar2 = fVar13;
    if (fVar12 <= fVar13) {
      fVar2 = fVar12;
    }
    fVar14 = fVar13;
    if (fVar13 <= fVar12) {
      fVar14 = fVar12;
    }
    param_1[1] = ~-(uint)NAN(fVar12) & (uint)fVar2 | -(uint)NAN(fVar12) & (uint)fVar13;
    param_1[2] = fVar14;
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
  return;
}

