// VA 0x1408a7560, PDB extent 699 bytes
// system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::split_segment_into_supported_and_unsupported_subsegments::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::split_segment_into_supported_and_unsupported_subsegments::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
   Extent: 699 */

void pdb_1408a7560(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  float in_XMM1_Da;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined8 uStack_98;
  float fStack_90;
  float fStack_8c;
  undefined8 uStack_88;
  uint uStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  float fStack_68;
  float fStack_60;
  
  fVar8 = (float)pdb_140c01480(*param_2);
  fVar14 = _UNK_142e3782c;
  fVar12 = _UNK_142e37828;
  uVar4 = _UNK_142e37824;
  uVar5 = _DAT_142e37820;
  lVar1 = param_2[1];
  if (*(ulonglong *)(lVar1 + 0x48) <= param_3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(param_3,*(ulonglong *)(lVar1 + 0x48),&UNK_1430143d8);
  }
  fVar9 = *(float *)(*(longlong *)(lVar1 + 0x40) + param_3 * 8);
  fVar10 = *(float *)(*(longlong *)(lVar1 + 0x40) + 4 + param_3 * 8);
  fVar8 = fVar8 * fVar10;
  in_XMM1_Da = in_XMM1_Da * fVar9;
  uStack_98 = CONCAT44(fVar9,(uint)fVar10 ^ _DAT_142e37820);
  pdb_140df4520(&uStack_80,&uStack_98);
  uVar7 = -(uint)(fVar8 < in_XMM1_Da);
  fStack_8c = (float)((uStack_80 ^ uVar5) & uVar7 | ~uVar7 & uStack_80);
  fVar9 = fStack_78;
  fVar10 = 0.0;
  fVar11 = 0.0;
  if (fVar8 < in_XMM1_Da) {
    fStack_7c = (float)((uint)fStack_7c ^ uVar5);
    fVar9 = (float)((uint)fStack_78 ^ uVar4);
    fVar10 = fVar12;
    fVar11 = fVar14;
  }
  fVar12 = _DAT_142e36f28 / SQRT(fVar9 * fVar9 + fStack_8c * fStack_8c + fStack_7c * fStack_7c);
  bVar3 = (int)fVar12 - 1U < 0x7fffff ||
          (int)ABS(fVar12) - 0x800000U < 0x7f000000 && -1 < (int)fVar12;
  if (bVar3) {
    fStack_8c = fStack_8c * fVar12;
  }
  else {
    fStack_8c = 0.0;
  }
  if (*(ulonglong *)(lVar1 + 0x10) <= param_3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(param_3,*(ulonglong *)(lVar1 + 0x10),&UNK_1430143f0);
  }
  if (*(ulonglong *)(lVar1 + 0x60) <= param_3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(param_3,*(ulonglong *)(lVar1 + 0x60),&UNK_143014408);
  }
  uVar5 = (uint)bVar3;
  auVar13._0_4_ = (int)(uVar5 << 0x1f) >> 0x1f;
  auVar13._4_4_ = (int)(uVar5 << 0x1f) >> 0x1f;
  auVar13._8_4_ = (int)(uVar5 << 0x1f) >> 0x1f;
  auVar13._12_4_ = (int)(uVar5 << 0x1f) >> 0x1f;
  auVar2._4_4_ = fVar9 * fVar12;
  auVar2._0_4_ = fStack_7c * fVar12;
  auVar2._8_4_ = fVar10 * 0.0;
  auVar2._12_4_ = fVar11 * 0.0;
  auVar13 = auVar13 & auVar2;
  fVar12 = *(float *)(*(longlong *)(lVar1 + 0x58) + param_3 * 4);
  fVar14 = auVar13._4_4_ * fVar12 * _DAT_142e36f38 +
           *(float *)(*(longlong *)(lVar1 + 8) + 8 + param_3 * 0xc);
  uVar6 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + param_3 * 0xc);
  fVar8 = fVar12 * fStack_8c * _DAT_142e61230 + (float)uVar6 + _DAT_143014110;
  uStack_98 = CONCAT44(fVar12 * auVar13._0_4_ * _UNK_142e61234 +
                       (float)((ulonglong)uVar6 >> 0x20) + _UNK_143014114,fVar8);
  uStack_88 = auVar13._0_8_;
  fStack_90 = fVar14;
  pdb_1409edd20(&uStack_80,*(undefined8 *)param_2[2],&uStack_98,*(undefined4 *)param_2[3],1);
  if ((char)uStack_80 == '\x11') {
    uVar6 = 0;
  }
  else {
    if (*(ulonglong *)(lVar1 + 0x60) <= param_3) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(param_3,*(ulonglong *)(lVar1 + 0x60),&UNK_143014420);
    }
    if ((char)uStack_80 != '\0') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143014438,0x28,&UNK_143014460);
    }
    fVar8 = fVar8 - fStack_68;
    fVar14 = fVar14 - fStack_60;
    *(float *)(param_1 + 1) =
         *(float *)(*(longlong *)(lVar1 + 0x58) + param_3 * 4) * _DAT_142e36f38 +
         SQRT(fVar14 * fVar14 + fVar8 * fVar8);
    param_1[2] = CONCAT44(uStack_74,fStack_78);
    uVar6 = 1;
  }
  *param_1 = uVar6;
  return;
}

