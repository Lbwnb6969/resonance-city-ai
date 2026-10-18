// VA 0x140c9ac70, PDB extent 519 bytes
// country_core::systems::wooden_stair_support::inset_wooden_stair_terminal_station_points
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wooden_stair_support.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wooden_stair_support::inset_wooden_stair_terminal_station_points
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wooden_stair_support.rs
   Extent: 519 */

void pdb_140c9ac70(undefined8 *param_1,ulonglong param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (1 < param_2) {
    if ((param_3 & 1) != 0) {
      fVar6 = *(float *)((longlong)param_1 + 0x14) - *(float *)(param_1 + 1);
      fVar7 = (float)*param_1;
      fVar10 = (float)*(undefined8 *)((longlong)param_1 + 0xc) - fVar7;
      fVar8 = (float)((ulonglong)*param_1 >> 0x20);
      fVar11 = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0xc) >> 0x20) - fVar8;
      fVar9 = _DAT_142e36f28 / SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar6 * fVar6);
      bVar4 = (int)ABS(fVar9) - 0x800000U < 0x7f000000;
      bVar5 = (int)fVar9 - 1U < 0x7fffff;
      bVar3 = bVar5 || bVar4 && -1 < (int)fVar9;
      if (bVar3) {
        fVar6 = fVar6 * fVar9 * _DAT_142e37ae4;
      }
      else {
        fVar6 = 0.0;
      }
      *param_1 = CONCAT44(fVar8 + (float)((int)((uint)bVar3 << 0x1f) >> 0x1f &
                                         (uint)(_DAT_142e37ae4 * fVar9 * fVar11)),
                          fVar7 + (float)((int)((uint)(bVar5 || bVar4 && -1 < (int)fVar9) << 0x1f)
                                          >> 0x1f & (uint)(_DAT_142e37ae4 * fVar9 * fVar10)));
      *(float *)(param_1 + 1) = *(float *)(param_1 + 1) + fVar6;
    }
    if ((param_3 & 0x100) != 0) {
      fVar6 = *(float *)((longlong)param_1 + param_2 * 0xc + -4);
      fVar7 = *(float *)((longlong)param_1 + param_2 * 0xc + -0x10) - fVar6;
      uVar1 = *(undefined8 *)((longlong)param_1 + param_2 * 0xc + -0x18);
      uVar2 = *(undefined8 *)((longlong)param_1 + param_2 * 0xc + -0xc);
      fVar8 = (float)uVar2;
      fVar11 = (float)uVar1 - fVar8;
      fVar9 = (float)((ulonglong)uVar2 >> 0x20);
      fVar12 = (float)((ulonglong)uVar1 >> 0x20) - fVar9;
      fVar10 = _DAT_142e36f28 / SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar7 * fVar7);
      bVar4 = (int)ABS(fVar10) - 0x800000U < 0x7f000000;
      bVar5 = (int)fVar10 - 1U < 0x7fffff;
      bVar3 = bVar5 || bVar4 && -1 < (int)fVar10;
      if (bVar3) {
        fVar7 = fVar7 * fVar10 * _DAT_142e37ae4;
      }
      else {
        fVar7 = 0.0;
      }
      *(ulonglong *)((longlong)param_1 + param_2 * 0xc + -0xc) =
           CONCAT44(fVar9 + (float)((int)((uint)bVar3 << 0x1f) >> 0x1f &
                                   (uint)(_DAT_142e37ae4 * fVar10 * fVar12)),
                    fVar8 + (float)((int)((uint)(bVar5 || bVar4 && -1 < (int)fVar10) << 0x1f) >>
                                    0x1f & (uint)(_DAT_142e37ae4 * fVar10 * fVar11)));
      *(float *)((longlong)param_1 + param_2 * 0xc + -4) = fVar6 + fVar7;
    }
  }
  return;
}

