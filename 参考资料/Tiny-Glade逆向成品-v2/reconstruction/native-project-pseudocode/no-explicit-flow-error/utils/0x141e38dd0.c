// VA 0x141e38dd0, PDB extent 470 bytes
// utils::curve::Curve::get_coord_at_u<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D,utils::curve::curve_u::CurveU<utils::curve::CurveCoordSemantic2D> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::get_coord_at_u<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D,utils::curve::curve_u::CurveU<utils::curve::CurveCoordSemantic2D>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 470 */

ulonglong pdb_141e38dd0(longlong param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_60 [24];
  float *pfStack_48;
  code *pcStack_40;
  undefined1 *puStack_38;
  code *pcStack_30;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float afStack_1c [3];
  
  afStack_1c[1] = -NAN;
  afStack_1c[2] = -NAN;
  afStack_1c[0] = param_2;
  if (0x7f7fffff < (uint)ABS(param_2)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1433ecb51,0x23,&UNK_1433ecb78);
  }
  if (_DAT_142e36f28 <= param_2) {
    uVar3 = *(int *)(param_1 + 0x10) - 2;
LAB_141e38e6d:
    return (ulonglong)uVar3;
  }
  uVar3 = 0;
  if (param_2 <= 0.0) goto LAB_141e38e6d;
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar5 = *(ulonglong *)(param_1 + 0x28);
  if (uVar5 == 1) {
    lVar7 = 0;
  }
  else {
    if (uVar5 == 0) goto LAB_141e38f11;
    uVar4 = uVar5;
    lVar6 = 0;
    do {
      lVar7 = lVar6 + (uVar4 >> 1);
      if (param_2 < *(float *)(lVar1 + lVar7 * 4)) {
        lVar7 = lVar6;
      }
      uVar4 = uVar4 - (uVar4 >> 1);
      lVar6 = lVar7;
    } while (1 < uVar4);
  }
  uVar4 = (lVar7 + 1) - (ulonglong)(param_2 < *(float *)(lVar1 + lVar7 * 4));
  if (uVar4 < uVar5) {
    if (uVar4 == 0) {
      pdb_142e075a0(afStack_1c);
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    fStack_24 = *(float *)(lVar1 + (uVar4 - 1) * 4);
    fStack_28 = *(float *)(lVar1 + uVar4 * 4);
    if ((fStack_24 != fStack_28) || (NAN(fStack_24) || NAN(fStack_28))) {
      return uVar4 - 1;
    }
    pdb_142e0769b(CONCAT71((int7)(uVar4 >> 8),1),&fStack_24,&fStack_28,0);
  }
LAB_141e38f11:
  fStack_20 = param_2;
  pdb_140567680(auStack_60);
  pfStack_48 = &fStack_20;
  pcStack_40 = pdb_140f70fc0;
  pcStack_30 = pdb_141e3ae40;
  puStack_38 = auStack_60;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_1433ecb90,&pfStack_48,&UNK_1433ecbb0);
}

