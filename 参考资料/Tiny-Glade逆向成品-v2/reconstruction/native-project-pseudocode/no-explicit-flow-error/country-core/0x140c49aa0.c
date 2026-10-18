// VA 0x140c49aa0, PDB extent 280 bytes
// country_core::systems::ui_wall_transform_gizmos::RigidXZTransform::interpolated
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_wall_transform_gizmos.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_wall_transform_gizmos::RigidXZTransform::interpolated
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_wall_transform_gizmos.rs
   Extent: 280 */

float * pdb_140c49aa0(float *param_1,float *param_2,float param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (param_3 <= 0.0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    uVar1 = _UNK_14306e1c8;
    *(undefined8 *)param_1 = _DAT_14306e1c0;
    *(undefined8 *)(param_1 + 2) = uVar1;
    uVar1 = _UNK_14306e1d8;
    *(undefined8 *)(param_1 + 4) = _DAT_14306e1d0;
    *(undefined8 *)(param_1 + 6) = uVar1;
  }
  else if (param_3 < _DAT_142e36f28) {
    fVar9 = (float)pub_142e32980(param_2[1],*param_2);
    fVar10 = (float)pub_142e32b30(fVar9 * param_3);
    fVar11 = (float)pub_142e329e0(fVar9 * param_3);
    fVar14 = (float)((uint)fVar10 ^ _DAT_142e37820);
    fVar9 = *param_2;
    fVar3 = param_2[1];
    fVar4 = param_2[2];
    fVar5 = param_2[3];
    *param_1 = fVar11;
    param_1[1] = fVar10;
    param_1[2] = fVar14;
    param_1[3] = fVar11;
    uVar1 = *(undefined8 *)(param_2 + 8);
    fVar12 = (float)uVar1;
    fVar13 = (float)((ulonglong)uVar1 >> 0x20);
    uVar2 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(ulonglong *)(param_1 + 4) =
         CONCAT44((param_3 * ((fVar5 * fVar13 + fVar3 * fVar12 + (float)((ulonglong)uVar2 >> 0x20))
                             - fVar13) + fVar13) - (fVar13 * fVar11 + fVar12 * fVar10),
                  (param_3 * ((fVar4 * fVar13 + fVar9 * fVar12 + (float)uVar2) - fVar12) + fVar12) -
                  (fVar13 * fVar14 + fVar12 * fVar11));
  }
  else {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + 2);
    uVar6 = *(undefined8 *)(param_2 + 4);
    uVar7 = *(undefined8 *)(param_2 + 6);
    uVar8 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 10) = uVar8;
    *(undefined8 *)(param_1 + 4) = uVar6;
    *(undefined8 *)(param_1 + 6) = uVar7;
    *(undefined8 *)param_1 = uVar1;
    *(undefined8 *)(param_1 + 2) = uVar2;
  }
  return param_1;
}

