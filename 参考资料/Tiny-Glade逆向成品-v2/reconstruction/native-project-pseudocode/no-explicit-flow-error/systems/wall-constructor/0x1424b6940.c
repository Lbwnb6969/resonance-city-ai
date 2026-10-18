// VA 0x1424b6940, PDB extent 588 bytes
// system_wall_constructor::construct_platform_stairs::bottom_riser::extend_bottom_risers_to_terrain<ref$<system_wall_constructor::construct_platform_stairs::wooden::build_rectangle::closure_env$5> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/bottom_riser.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_platform_stairs::bottom_riser::extend_bottom_risers_to_terrain<ref$<system_wall_constructor::construct_platform_stairs::wooden::build_rectangle::closure_env$5>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/bottom_riser.rs
   Extent: 588 */

void pdb_1424b6940(longlong param_1,longlong param_2,undefined8 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float fVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar5 = _DAT_142f684a8;
  if (param_2 != 0) {
    uVar4 = *param_3;
    lVar6 = 0;
    do {
      if (*(int *)(param_1 + 0x20 + lVar6) == 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x18 + lVar6);
        uVar3 = *(undefined4 *)(param_1 + 0x1c + lVar6);
        pub_142e329e0(uVar2);
        pub_142e32b30(uVar2);
        pub_142e329e0(uVar3);
        pub_142e32b30(uVar3);
      }
      fVar7 = (float)pdb_14140ce00(uVar4);
      fVar8 = (float)pdb_14140ce00(uVar4);
      fVar9 = fVar8;
      if (fVar7 <= fVar8) {
        fVar9 = fVar7;
      }
      fVar1 = *(float *)(param_1 + 4 + lVar6);
      fVar7 = (float)(~-(uint)NAN(fVar7) & (uint)fVar9 | -(uint)NAN(fVar7) & (uint)fVar8) + fVar5;
      fVar9 = fVar7;
      if (fVar1 <= fVar7) {
        fVar9 = fVar1;
      }
      fVar9 = (float)(~-(uint)NAN(fVar1) & (uint)fVar9 | -(uint)NAN(fVar1) & (uint)fVar7);
      *(float *)(param_1 + 0x28 + lVar6) = (fVar1 - fVar9) + *(float *)(param_1 + 0x28 + lVar6);
      *(float *)(param_1 + 4 + lVar6) = fVar9;
      lVar6 = lVar6 + 0x50;
    } while (param_2 * 0x50 != lVar6);
  }
  return;
}

