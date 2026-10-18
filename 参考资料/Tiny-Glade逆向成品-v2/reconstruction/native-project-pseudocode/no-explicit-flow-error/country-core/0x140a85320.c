// VA 0x140a85320, PDB extent 272 bytes
// country_core::resources::plant_sample_raster::PlantSampleRaster::has_non_grass
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/plant_sample_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::plant_sample_raster::PlantSampleRaster::has_non_grass
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/plant_sample_raster.rs
   Extent: 272 */

ulonglong pdb_140a85320(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar12;
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar10._0_8_ = in_XMM1._0_8_;
  auVar10._8_4_ = in_XMM1._4_4_;
  auVar10._12_4_ = (int)((ulonglong)param_3 >> 0x20);
  auVar11._8_8_ = auVar10._8_8_;
  auVar11._0_4_ = in_XMM1._0_4_;
  auVar11._4_4_ = (int)param_3;
  auVar11 = divps(auVar11,_DAT_142e61200);
  fVar9 = auVar11._0_4_ + _DAT_142e36f60;
  fVar12 = auVar11._4_4_ + _UNK_142e36f64;
  uVar3 = 0;
  if ((0.0 <= fVar9) && (0.0 <= fVar12)) {
    auVar2._4_4_ = -(uint)(_DAT_142e37950 < fVar9);
    auVar2._0_4_ = -(uint)(_DAT_142e37950 < fVar9);
    auVar2._8_4_ = -(uint)(_UNK_142e37954 < fVar12);
    auVar2._12_4_ = -(uint)(_UNK_142e37954 < fVar12);
    iVar4 = movmskpd(param_2,auVar2);
    uVar3 = 0;
    if (iVar4 == 0) {
      fVar9 = fVar9 * _DAT_142e61210;
      uVar5 = (uint)(longlong)fVar9;
      if (fVar9 < 0.0) {
        uVar5 = 0;
      }
      fVar12 = fVar12 * _DAT_142e61210;
      if (_DAT_142e46a48 < fVar9) {
        uVar5 = 0xffffffff;
      }
      uVar7 = (uint)(longlong)fVar12;
      if (fVar12 < 0.0) {
        uVar7 = 0;
      }
      if (_DAT_142e46a48 < fVar12) {
        uVar7 = 0xffffffff;
      }
      if (0x1fe < uVar5) {
        uVar5 = 0x1ff;
      }
      if (0x1fe < uVar7) {
        uVar7 = 0x1ff;
      }
      uVar6 = 0x18;
      if (*(char *)(param_1 + 0x282) == '\0') {
        uVar6 = uVar3;
      }
      uVar8 = (ulonglong)(uVar7 << 9 | uVar5);
      uVar3 = *(ulonglong *)(param_1 + 0x10 + uVar6);
      if (uVar3 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar8,uVar3,&UNK_143043440);
      }
      lVar1 = *(longlong *)(param_1 + 8 + uVar6);
      uVar3 = 1;
      if (((*(char *)(lVar1 + uVar8 * 4) == '\0') && (*(char *)(lVar1 + 1 + uVar8 * 4) == '\0')) &&
         (*(char *)(lVar1 + 2 + uVar8 * 4) == '\0')) {
        return (ulonglong)(*(char *)(lVar1 + 3 + uVar8 * 4) != '\0');
      }
    }
  }
  return uVar3;
}

