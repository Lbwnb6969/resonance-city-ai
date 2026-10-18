// VA 0x140c4b290, PDB extent 331 bytes
// country_core::systems::ui_wall_transform_gizmos::first_clear_gizmo_distance
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_wall_transform_gizmos.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui_wall_transform_gizmos::first_clear_gizmo_distance
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_wall_transform_gizmos.rs
   Extent: 331 */

undefined8 pdb_140c4b290(undefined8 param_1,float param_2,longlong *param_3)

{
  float *arg0;
  ulonglong uVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 *puStack_60;
  longlong *plStack_58;
  float *pfStack_50;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
  fVar4 = (float)param_1;
  uStack_40 = 0xfffffffffffffffe;
  arg0 = (float *)param_3[1];
  uVar1 = param_3[2];
  puStack_60 = &uStack_41;
  plStack_58 = param_3;
  if (1 < uVar1) {
    pfStack_50 = arg0;
    if (uVar1 < 0x15) {
      pdb_14151a8d0(arg0,uVar1,1,&puStack_60);
    }
    else {
      pdb_140a90d00(arg0,uVar1,&puStack_60);
    }
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  pfVar2 = arg0;
  while (pfVar3 = pfVar2, pfVar3 != arg0 + uVar1 * 2) {
    pfVar2 = pfVar3 + 2;
    if (fVar4 <= pfVar3[1]) {
      if (fVar4 < *pfVar3) break;
      fVar4 = pfVar3[1] + param_2;
      uVar5 = 0;
    }
  }
  if (*plStack_58 != 0) {
    pub_1406abac0((byte *)arg0,*plStack_58 << 3,4);
  }
  return CONCAT44(uVar5,fVar4);
}

