// VA 0x140b4b010, PDB extent 449 bytes
// country_core::systems::ui_wall_transform_gizmos::declipped_wall_gizmo_distance<core::iter::adapters::copied::Copied<core::slice::iter::Iter<ref$<utils::curve::Curve<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D> > > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_wall_transform_gizmos.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_wall_transform_gizmos::declipped_wall_gizmo_distance<core::iter::adapters::copied::Copied<core::slice::iter::Iter<ref$<utils::curve::Curve<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   > > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_wall_transform_gizmos.rs
   Extent: 449 */

ulonglong pdb_140b4b010(undefined4 param_1,undefined4 param_2,float param_3,float param_4,
                       float param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                       undefined8 param_9,undefined4 *param_10,longlong param_11)

{
  undefined4 *puVar1;
  longlong lVar2;
  float fVar3;
  ulonglong uVar4;
  undefined4 *puStack_128;
  undefined8 *puStack_120;
  undefined4 *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_d0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 uStack_51;
  undefined8 uStack_50;
  
  lVar2 = param_11;
  puVar1 = param_10;
  uStack_50 = 0xfffffffffffffffe;
  fVar3 = _DAT_142e36f28 / SQRT(param_4 * param_4 + param_3 * param_3);
  if ((int)fVar3 - 1U < 0x7fffff || (int)ABS(fVar3) - 0x800000U < 0x7f000000 && -1 < (int)fVar3) {
    uStack_68 = CONCAT44(fVar3 * param_4,fVar3 * param_3);
    puStack_118 = (undefined4 *)&param_6;
    puStack_110 = (undefined8 *)0x0;
    uStack_d0 = 0;
    uStack_90 = param_8;
    uStack_88 = param_9;
    puStack_128 = &uStack_5c;
    puStack_120 = &uStack_68;
    uStack_5c = param_1;
    uStack_58 = param_2;
    pdb_1415fe7e0(&puStack_80,&puStack_128);
    puStack_120 = (undefined8 *)(puVar1 + lVar2 * 3);
    puStack_128 = puVar1;
    uStack_51 = 1;
    puStack_118 = &uStack_5c;
    puStack_110 = &uStack_68;
    pdb_1415e8a20(&puStack_80,&puStack_128);
    puStack_118 = (undefined4 *)uStack_70;
    puStack_128 = puStack_80;
    puStack_120 = (undefined8 *)uStack_78;
    uStack_51 = 0;
    uVar4 = pdb_140c4b290(param_5,param_7,&puStack_128);
  }
  else {
    if (param_5 <= 0.0) {
      param_5 = 0.0;
    }
    uVar4 = (ulonglong)(uint)param_5;
  }
  return uVar4;
}

