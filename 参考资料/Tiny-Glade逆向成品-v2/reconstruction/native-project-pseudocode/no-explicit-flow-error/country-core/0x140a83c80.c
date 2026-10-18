// VA 0x140a83c80, PDB extent 697 bytes
// country_core::utils::dirty_tiles::DirtyTiles::rasterize_world_space_stroke<core::iter::adapters::map::Map<core::slice::iter::Iter<glam::f32::vec3::Vec3>,country_core::resources::raster_stroke::impl$2::iter_points_xz::closure_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::utils::dirty_tiles::DirtyTiles::rasterize_world_space_stroke<core::iter::adapters::map::Map<core::slice::iter::Iter<glam::f32::vec3::Vec3>,country_core::resources::raster_stroke::impl$2::iter_points_xz::closure_env$0>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
   Extent: 697 */

void pdb_140a83c80(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,float param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char cStack_b1;
  undefined8 auStack_b0 [18];
  
  fVar6 = _DAT_142f3e5f8;
  uVar5 = _DAT_142e37994;
  if ((param_2 != param_3) && (param_2 + 3 != param_3)) {
    fVar12 = param_4 * _DAT_142f3e5f8 + _DAT_142f3e5fc;
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    uVar3 = param_2[5];
    cStack_b1 = '\0';
    auVar14 = ZEXT416((uint)_DAT_142f3e5f8);
    auStack_b0[0] = param_1;
    uVar7 = pub_142e32a50(*param_2,_DAT_142f3e5f8,_DAT_142e37994);
    auVar13 = auVar14;
    lVar8 = pub_142e32a50(uVar1,fVar6,uVar5);
    uVar9 = pdb_140cb17a0(uVar7 & 0xffffffff | lVar8 << 0x20);
    uVar7 = pub_142e32a50(uVar2,fVar6,uVar5);
    lVar8 = pub_142e32a50(uVar3,fVar6,uVar5);
    uVar10 = pdb_140cb17a0(uVar7 & 0xffffffff | lVar8 << 0x20);
    pdb_1417de160(uVar9,auVar13._0_8_,uVar10,auVar14._0_8_,fVar12,auStack_b0,&cStack_b1);
    fVar6 = _DAT_142f3e5f8;
    uVar5 = _DAT_142e37994;
    if (cStack_b1 == '\0') {
      param_2 = param_2 + 6;
      auVar13 = ZEXT416((uint)_DAT_142f3e5f8);
      do {
        if (param_2 == param_3) {
          return;
        }
        uVar1 = *param_2;
        uVar4 = param_2[2];
        cStack_b1 = '\0';
        uVar7 = pub_142e32a50(uVar2,fVar6,uVar5);
        auVar14 = auVar13;
        lVar8 = pub_142e32a50(uVar3,fVar6,uVar5);
        uVar9 = pdb_140cb17a0(uVar7 & 0xffffffff | lVar8 << 0x20);
        uVar7 = pub_142e32a50(uVar1,fVar6,uVar5);
        auVar11 = auVar13;
        lVar8 = pub_142e32a50(uVar4,fVar6,uVar5);
        uVar10 = pdb_140cb17a0(uVar7 & 0xffffffff | lVar8 << 0x20);
        pdb_1417de160(uVar9,auVar14._0_8_,uVar10,auVar11._0_8_,fVar12,auStack_b0,&cStack_b1);
        param_2 = param_2 + 3;
        uVar2 = uVar1;
        uVar3 = uVar4;
      } while (cStack_b1 != '\x01');
    }
  }
  return;
}

