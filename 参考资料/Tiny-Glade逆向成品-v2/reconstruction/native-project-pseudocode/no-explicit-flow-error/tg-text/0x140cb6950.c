// VA 0x140cb6950, PDB extent 251 bytes
// tg_text::TextRenderer::set_clip_rect
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_text::TextRenderer::set_clip_rect
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 251 */

void pdb_140cb6950(longlong param_1,int *param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 auVar10 [16];
  float fVar13;
  
  *(int *)(param_1 + 0x4b0) = param_2[4];
  uVar4 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 0x4a8) = uVar4;
  uVar4 = 0;
  if (*param_2 == 1) {
    auVar10._4_4_ = (float)param_2[4] * _UNK_142e6add4;
    auVar10._0_4_ = (float)param_2[2] * _DAT_142e6add0;
    auVar10._8_4_ = (float)param_2[1] * _UNK_142e6add8;
    auVar10._12_4_ = (float)param_2[3] * _UNK_142e6addc;
    auVar10 = maxps((undefined1  [16])0x0,auVar10);
    fVar9 = auVar10._0_4_;
    fVar11 = auVar10._4_4_;
    fVar12 = auVar10._8_4_;
    fVar13 = auVar10._12_4_;
    uVar7 = (uint)(longlong)fVar12;
    if (fVar12 < 0.0) {
      uVar7 = 0;
    }
    auVar1._4_4_ = -(uint)(_UNK_14307a674 < fVar11);
    auVar1._0_4_ = -(uint)(_DAT_14307a670 < fVar9);
    auVar1._8_4_ = -(uint)(_UNK_14307a678 < fVar12);
    auVar1._12_4_ = -(uint)(_UNK_14307a67c < fVar13);
    uVar5 = movmskps(param_3,auVar1);
    if (_DAT_142e46a48 < fVar12) {
      uVar7 = 0xffffffff;
    }
    if ((uVar5 & 4) != 0) {
      uVar7 = 0xffff;
    }
    iVar2 = (int)(longlong)fVar9;
    if (fVar9 < 0.0) {
      iVar2 = 0;
    }
    if (_DAT_142e46a48 < fVar9) {
      iVar2 = -1;
    }
    uVar3 = iVar2 << 0x10;
    if ((uVar5 & 1) != 0) {
      uVar3 = 0xffff0000;
    }
    uVar8 = (uint)(longlong)fVar13;
    if (fVar13 < 0.0) {
      uVar8 = 0;
    }
    if (_DAT_142e46a48 < fVar13) {
      uVar8 = 0xffffffff;
    }
    if ((uVar5 & 8) != 0) {
      uVar8 = 0xffff;
    }
    iVar2 = (int)(longlong)fVar11;
    if (fVar11 < 0.0) {
      iVar2 = 0;
    }
    if (_DAT_142e46a48 < fVar11) {
      iVar2 = -1;
    }
    uVar6 = iVar2 << 0x10;
    if ((uVar5 & 2) != 0) {
      uVar6 = 0xffff0000;
    }
    uVar4 = CONCAT44(uVar6 | uVar8,uVar3 | uVar7);
  }
  *(undefined8 *)(param_1 + 0x498) = uVar4;
  return;
}

