// VA 0x1424b6b90, PDB extent 588 bytes
// system_wall_constructor::construct_platform_stairs::bottom_riser::extend_bottom_risers_to_terrain<system_wall_constructor::construct_platform_stairs::wooden::build_rectangle::closure_env$4>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/bottom_riser.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_platform_stairs::bottom_riser::extend_bottom_risers_to_terrain<system_wall_constructor::construct_platform_stairs::wooden::build_rectangle::closure_env$4>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/bottom_riser.rs
   Extent: 588 */

void pdb_1424b6b90(longlong param_1,longlong param_2,undefined8 param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = _DAT_142f684a8;
  if (param_2 != 0) {
    lVar5 = 0;
    do {
      if (*(int *)(param_1 + 0x20 + lVar5) == 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x18 + lVar5);
        uVar3 = *(undefined4 *)(param_1 + 0x1c + lVar5);
        pub_142e329e0(uVar2);
        pub_142e32b30(uVar2);
        pub_142e329e0(uVar3);
        pub_142e32b30(uVar3);
      }
      fVar6 = (float)pdb_14140ce00(param_3);
      fVar7 = (float)pdb_14140ce00(param_3);
      fVar8 = fVar7;
      if (fVar6 <= fVar7) {
        fVar8 = fVar6;
      }
      fVar1 = *(float *)(param_1 + 4 + lVar5);
      fVar6 = (float)(~-(uint)NAN(fVar6) & (uint)fVar8 | -(uint)NAN(fVar6) & (uint)fVar7) + fVar4;
      fVar8 = fVar6;
      if (fVar1 <= fVar6) {
        fVar8 = fVar1;
      }
      fVar8 = (float)(~-(uint)NAN(fVar1) & (uint)fVar8 | -(uint)NAN(fVar1) & (uint)fVar6);
      *(float *)(param_1 + 0x28 + lVar5) = (fVar1 - fVar8) + *(float *)(param_1 + 0x28 + lVar5);
      *(float *)(param_1 + 4 + lVar5) = fVar8;
      lVar5 = lVar5 + 0x50;
    } while (param_2 * 0x50 != lVar5);
  }
  return;
}

