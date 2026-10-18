// VA 0x140340df0, PDB extent 354 bytes
// country_core::utils::dirty_tiles::DirtyTiles::iter_world_space_stroke_cells<array$<glam::f32::vec2::Vec2,2>,system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::playermade_stairs_assemble::closure_env$15<true> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::utils::dirty_tiles::DirtyTiles::iter_world_space_stroke_cells<array$<glam::f32::vec2::Vec2,2>,system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::playermade_stairs_assemble::closure_env$15<true>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
   Extent: 354 */

void pdb_140340df0(undefined4 *param_1,float param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 uStack_81;
  undefined8 auStack_80 [16];
  
  fVar9 = _DAT_142f3e5f8;
  fVar10 = param_2 * _DAT_142f3e5f8 + _DAT_142f3e5fc;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uStack_81 = 0;
  auStack_80[0] = param_3;
  uVar4 = pub_142e32a50(*param_1,_DAT_142f3e5f8);
  fVar8 = fVar9;
  lVar5 = pub_142e32a50(uVar1,fVar9);
  uVar6 = pdb_140cb17a0(uVar4 & 0xffffffff | lVar5 << 0x20);
  uVar4 = pub_142e32a50(uVar2,fVar9);
  lVar5 = pub_142e32a50(uVar3,fVar9);
  uVar7 = pdb_140cb17a0(uVar4 & 0xffffffff | lVar5 << 0x20);
  pdb_140471460(uVar6,fVar8,uVar7,fVar9,fVar10,auStack_80,&uStack_81);
  return;
}

