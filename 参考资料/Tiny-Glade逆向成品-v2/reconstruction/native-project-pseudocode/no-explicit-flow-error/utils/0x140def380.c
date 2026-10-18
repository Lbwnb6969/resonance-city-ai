// VA 0x140def380, PDB extent 197 bytes
// utils::geometry::circle::Circle2d::intersect_ray
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::circle::Circle2d::intersect_ray
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 197 */

void pdb_140def380(undefined4 *param_1,undefined8 *param_2,float param_3,float param_4,float param_5
                  ,float param_6)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  
  fVar2 = param_6 * param_6 + param_5 * param_5;
  uVar1 = 0;
  if ((fVar2 != 0.0) || (NAN(fVar2))) {
    param_3 = param_3 - (float)*param_2;
    param_4 = param_4 - (float)((ulonglong)*param_2 >> 0x20);
    fVar3 = param_6 * param_4 + param_5 * param_3;
    fVar3 = fVar3 + fVar3;
    fVar6 = _DAT_142f69450 * fVar2 *
            ((param_4 * param_4 + param_3 * param_3) -
            *(float *)(param_2 + 1) * *(float *)(param_2 + 1)) + fVar3 * fVar3;
    if (0.0 <= fVar6) {
      fVar6 = SQRT(fVar6);
      auVar4._0_4_ = (float)((uint)fVar3 ^ _DAT_142e37820) - fVar6;
      auVar4._4_4_ = fVar6 - fVar3;
      auVar4._8_4_ = (uint)(param_6 * param_4) ^ _UNK_142e37824;
      auVar4._12_4_ = 0;
      auVar5._4_4_ = fVar2 + fVar2;
      auVar5._0_4_ = fVar2 + fVar2;
      auVar5._8_8_ = 0;
      auVar5 = divps(auVar4,auVar5);
      *(longlong *)(param_1 + 1) = auVar5._0_8_;
      uVar1 = 1;
    }
  }
  *param_1 = uVar1;
  return;
}

