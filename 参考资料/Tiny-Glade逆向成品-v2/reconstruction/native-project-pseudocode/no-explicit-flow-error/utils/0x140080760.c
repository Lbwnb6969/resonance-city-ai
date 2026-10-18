// VA 0x140080760, PDB extent 454 bytes
// utils::curve::Curve::get_coord_at_u<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D,utils::curve::curve_u::CurveU<utils::curve::CurveCoordSemantic2D> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::get_coord_at_u<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D,utils::curve::curve_u::CurveU<utils::curve::CurveCoordSemantic2D>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 454 */

ulonglong pdb_140080760(longlong param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar8 [16];
  undefined1 auStack_60 [24];
  float *pfStack_48;
  code *pcStack_40;
  undefined1 *puStack_38;
  code *pcStack_30;
  float fStack_24;
  float fStack_20;
  float afStack_1c [3];
  
  afStack_1c[1] = -NAN;
  afStack_1c[2] = -NAN;
  if (0x7f7fffff < (uint)ABS(param_2)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_142e37030,0x23,&UNK_142e37058);
  }
  auVar8._4_4_ = 0;
  auVar8._0_4_ = param_2;
  auVar8._8_4_ = in_XMM1_Dc;
  auVar8._12_4_ = in_XMM1_Dd;
  if (_DAT_142e36f28 <= param_2) {
    uVar3 = *(int *)(param_1 + 0x10) - 2;
LAB_1400807ed:
    return (ulonglong)uVar3;
  }
  uVar3 = 0;
  if (param_2 <= 0.0) goto LAB_1400807ed;
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar7 = *(ulonglong *)(param_1 + 0x28);
  afStack_1c[0] = param_2;
  if (uVar7 == 1) {
    lVar5 = 0;
  }
  else {
    if (uVar7 == 0) goto LAB_140080890;
    lVar4 = 0;
    uVar6 = uVar7;
    do {
      lVar5 = lVar4 + (uVar6 >> 1);
      if (param_2 < *(float *)(lVar1 + lVar5 * 4)) {
        lVar5 = lVar4;
      }
      uVar6 = uVar6 - (uVar6 >> 1);
      lVar4 = lVar5;
    } while (1 < uVar6);
  }
  uVar6 = (lVar5 + 1) - (ulonglong)(param_2 < *(float *)(lVar1 + lVar5 * 4));
  if (uVar6 < uVar7) {
    uVar7 = uVar6 - 1;
    if (uVar6 == 0) {
      pdb_142d7d530(param_2);
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return uVar7;
    }
    fStack_20 = *(float *)(lVar1 + uVar7 * 4);
    fStack_24 = *(float *)(lVar1 + uVar6 * 4);
    if ((fStack_20 != fStack_24) || (NAN(fStack_20) || NAN(fStack_24))) {
      pdb_140de8220();
      return uVar7;
    }
    pdb_142db0bc2(CONCAT71((int7)(uVar7 >> 8),1),&fStack_20,&fStack_24,0);
    afStack_1c[0] = auVar8._0_4_;
  }
LAB_140080890:
  pdb_140567680(auStack_60);
  pfStack_48 = afStack_1c;
  pcStack_40 = pdb_140f70fc0;
  pcStack_30 = pdb_1401748e0;
  puStack_38 = auStack_60;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142e37070,&pfStack_48,&UNK_142e37090);
}

