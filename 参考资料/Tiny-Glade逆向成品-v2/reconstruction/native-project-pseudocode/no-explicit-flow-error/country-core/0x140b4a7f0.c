// VA 0x140b4a7f0, PDB extent 499 bytes
// country_core::systems::ui_wall_transform_gizmos::wall_wire_metrics<array$<ref$<utils::curve::Curve<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D> >,1> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_wall_transform_gizmos.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_wall_transform_gizmos::wall_wire_metrics<array$<ref$<utils::curve::Curve<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   >,1> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_wall_transform_gizmos.rs
   Extent: 499 */

undefined4 * pdb_140b4a7f0(undefined4 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  byte *arg0;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 *puStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_50;
  byte *pbStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pdb_14007ee60();
  arg0 = pub_1406abab0(8,8);
  if (arg0 == (byte *)0x0) {
    pdb_142dc7e2a(8,8);
    pcVar3 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar3)();
    return puVar4;
  }
  *(longlong *)arg0 = param_2;
  uVar2 = *(ulonglong *)(param_2 + 0x10);
  uVar9 = 0;
  if (1 < uVar2) {
    puVar6 = *(undefined8 **)(param_2 + 8);
    fVar8 = (float)*puVar6;
    fVar10 = (float)((ulonglong)*puVar6 >> 0x20);
    fVar11 = (float)puVar6[1];
    fVar13 = fVar8 - fVar11;
    fVar12 = (float)((ulonglong)puVar6[1] >> 0x20);
    fVar14 = fVar10 - fVar12;
    fVar13 = SQRT(fVar14 * fVar14 + fVar13 * fVar13);
    auVar17._0_4_ = fVar13 * (fVar8 + fVar11) * _DAT_142e36f60 + 0.0;
    auVar17._4_4_ = fVar13 * (fVar10 + fVar12) * _UNK_142e36f64 + 0.0;
    auVar17._8_4_ = _UNK_142e36f68 * 0.0 * 0.0 + 0.0;
    auVar17._12_4_ = _UNK_142e36f6c * 0.0 * 0.0 + 0.0;
    if (uVar2 != 2) {
      puVar1 = puVar6 + uVar2;
      puVar7 = puVar6 + 1;
      lVar5 = uVar2 * 8 + -8;
      auVar16 = auVar17;
      do {
        auVar17 = auVar16;
        if ((lVar5 == 0) || (puVar7 = puVar7 + 1, puVar7 == puVar1)) break;
        puVar6 = puVar6 + 1;
        fVar8 = (float)*puVar6;
        fVar10 = (float)((ulonglong)*puVar6 >> 0x20);
        fVar11 = (float)*puVar7;
        fVar14 = fVar8 - fVar11;
        fVar12 = (float)((ulonglong)*puVar7 >> 0x20);
        fVar15 = fVar10 - fVar12;
        fVar14 = SQRT(fVar15 * fVar15 + fVar14 * fVar14);
        auVar17._0_4_ = auVar16._0_4_ + fVar14 * (fVar8 + fVar11) * _DAT_142e36f60;
        auVar17._4_4_ = auVar16._4_4_ + fVar14 * (fVar10 + fVar12) * _UNK_142e36f64;
        auVar17._8_4_ = auVar16._8_4_ + _UNK_142e36f68 * 0.0 * 0.0;
        auVar17._12_4_ = auVar16._12_4_ + _UNK_142e36f6c * 0.0 * 0.0;
        fVar13 = fVar13 + fVar14;
        lVar5 = lVar5 + -8;
        auVar16 = auVar17;
      } while (lVar5 != 8);
    }
    if (_DAT_142e37934 < fVar13) {
      pbStack_78 = arg0 + 8;
      auVar16._4_4_ = fVar13;
      auVar16._0_4_ = fVar13;
      auVar16._8_8_ = 0;
      auVar17 = divps(auVar17,auVar16);
      uStack_70 = 0;
      uStack_60 = 0;
      puStack_88 = &uStack_50;
      pbStack_80 = arg0;
      uStack_50 = auVar17._0_8_;
      pbStack_48 = arg0;
      uVar9 = pdb_1419b41b0(&puStack_88,0);
      *(longlong *)(param_1 + 1) = auVar17._0_8_;
      param_1[3] = uVar9;
      param_1[4] = fVar13;
      uVar9 = 1;
      arg0 = pbStack_48;
    }
  }
  *param_1 = uVar9;
  pub_1406abac0(arg0,8,8);
  return param_1;
}

