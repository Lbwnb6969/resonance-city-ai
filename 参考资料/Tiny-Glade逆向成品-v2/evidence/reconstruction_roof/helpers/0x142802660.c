// Matched PDB: utils::curve::Curve::get_coord_at_u<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D,utils::curve::curve_u::CurveU<utils::curve::CurveCoordSemantic2D> >
// VA 0x142802660, PDB extent 454 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   utils::curve::Curve::get_coord_at_u<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D,utils::curve::curve_u::CurveU<utils::curve::CurveCoordSemantic2D>
   >
   Extent: 454 bytes. No whole-program auto-analysis. */

ulonglong pdb_142802660(longlong param_1,float param_2)

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
  undefined1 in_XMM2 [16];
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
  if ((uint)ABS(param_2) < 0x7f800000) {
    in_XMM2._4_4_ = 0;
    in_XMM2._0_4_ = param_2;
    in_XMM2._8_4_ = in_XMM1_Dc;
    in_XMM2._12_4_ = in_XMM1_Dd;
    if (_DAT_142e36f28 <= param_2) {
      uVar3 = *(int *)(param_1 + 0x10) - 2;
LAB_1428026ed:
      return (ulonglong)uVar3;
    }
    uVar3 = 0;
    if (param_2 <= 0.0) goto LAB_1428026ed;
    lVar1 = *(longlong *)(param_1 + 0x20);
    uVar6 = *(ulonglong *)(param_1 + 0x28);
    afStack_1c[0] = param_2;
    if (uVar6 == 1) {
      lVar5 = 0;
    }
    else {
      if (uVar6 == 0) goto LAB_142802790;
      lVar4 = 0;
      uVar7 = uVar6;
      do {
        lVar5 = lVar4 + (uVar7 >> 1);
        if (param_2 < *(float *)(lVar1 + lVar5 * 4)) {
          lVar5 = lVar4;
        }
        uVar7 = uVar7 - (uVar7 >> 1);
        lVar4 = lVar5;
      } while (1 < uVar7);
    }
    uVar7 = (lVar5 + 1) - (ulonglong)(param_2 < *(float *)(lVar1 + lVar5 * 4));
    if (uVar6 <= uVar7) goto LAB_142802790;
    if (uVar7 == 0) {
      pdb_142e29250(param_2);
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    fStack_20 = *(float *)(lVar1 + (uVar7 - 1) * 4);
    fStack_24 = *(float *)(lVar1 + uVar7 * 4);
    if ((fStack_20 != fStack_24) || (NAN(fStack_20) || NAN(fStack_24))) {
      pdb_140de8220();
      return uVar7 - 1;
    }
  }
  else {
    pdb_142dc83b0(&UNK_14359b1e1,0x23,&UNK_14359b208);
  }
  pdb_142db0bc2(1,&fStack_20,&fStack_24,0);
  afStack_1c[0] = in_XMM2._0_4_;
LAB_142802790:
  pdb_140567680(auStack_60);
  pfStack_48 = afStack_1c;
  pcStack_40 = pdb_140f70fc0;
  pcStack_30 = pdb_140fc7fb0;
  puStack_38 = auStack_60;
  pdb_142dc83d0(&UNK_14359b220,&pfStack_48,&UNK_14359b240);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

