// VA 0x1409ed190, PDB extent 383 bytes
// country_core::systems::collision::world::Raycasting::spherecast
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::collision::world::Raycasting::spherecast
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 383 */

undefined1 *
pdb_1409ed190(undefined1 *param_1,undefined8 *param_2,float *param_3,undefined8 param_4,
             float *param_5,uint param_6)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  int aiStack_5c [2];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  pdb_1409ed510(param_1,*param_2,param_3,param_4,param_5,param_6);
  if ((param_6 & 0x20) == 0) {
    if (*(int *)(param_1 + 0x34) != 2) {
      return param_1;
    }
LAB_1409ed296:
    *(undefined4 *)(param_1 + 0x34) = 2;
  }
  else {
    fVar1 = *param_5;
    fVar3 = (float)pdb_1419c14e0(aiStack_5c,param_2[4],param_3,(float)param_4 + fVar1);
    if (aiStack_5c[0] == 1) {
      fVar7 = (float)*(undefined8 *)(param_3 + 3);
      fVar8 = (float)((ulonglong)*(undefined8 *)(param_3 + 3) >> 0x20);
      fVar3 = param_3[5];
      auVar4._0_4_ = (param_3[2] - fStack_4c) * (param_3[2] - fStack_4c) +
                     (param_3[1] - fStack_50) * (param_3[1] - fStack_50) +
                     (*param_3 - fStack_54) * (*param_3 - fStack_54);
      auVar4._4_4_ = fVar3 * fVar3 + fVar8 * fVar8 + fVar7 * fVar7;
      auVar4._8_8_ = 0;
      auVar4 = sqrtps(ZEXT416((uint)fVar3),auVar4);
      auVar5._0_4_ = auVar4._0_4_ - (float)param_4;
      auVar5._4_4_ = auVar4._4_4_ - 0.0;
      auVar5._8_4_ = auVar4._8_4_ - 0.0;
      auVar5._12_4_ = auVar4._12_4_ - 0.0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = _DAT_143033140;
      auVar4 = maxps(auVar6,auVar5);
      fVar3 = (float)(~-(uint)NAN(auVar5._0_4_) & auVar4._0_4_ |
                     (uint)_DAT_143033140 & -(uint)NAN(auVar5._0_4_)) /
              (float)(~-(uint)NAN(auVar5._4_4_) & auVar4._4_4_ |
                     (uint)(_DAT_143033140 >> 0x20) & -(uint)NAN(auVar5._4_4_));
    }
    bVar2 = fVar3 <= fVar1 & (byte)aiStack_5c[0];
    if (*(int *)(param_1 + 0x34) == 2) {
      if (bVar2 == 0) goto LAB_1409ed296;
    }
    else {
      if (bVar2 == 0) {
        return param_1;
      }
      if (*(float *)(param_1 + 0x30) <= fVar3 && fVar3 != *(float *)(param_1 + 0x30)) {
        return param_1;
      }
    }
    fVar1 = param_3[5];
    fVar7 = param_3[2];
    *param_1 = 0xb;
    *(ulonglong *)(param_1 + 0x18) =
         CONCAT44(fVar3 * (float)((ulonglong)*(undefined8 *)(param_3 + 3) >> 0x20) +
                  (float)((ulonglong)*(undefined8 *)param_3 >> 0x20),
                  fVar3 * (float)*(undefined8 *)(param_3 + 3) + (float)*(undefined8 *)param_3);
    *(float *)(param_1 + 0x20) = fVar1 * fVar3 + fVar7;
    *(undefined8 *)(param_1 + 0x24) = 0x3f80000000000000;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(float *)(param_1 + 0x30) = fVar3;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return param_1;
}

