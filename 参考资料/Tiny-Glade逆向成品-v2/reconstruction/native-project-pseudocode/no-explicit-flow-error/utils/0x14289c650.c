// VA 0x14289c650, PDB extent 568 bytes
// utils::curve::Curve::get_pos_at_u<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::get_pos_at_u<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 568 */

ulonglong pdb_14289c650(longlong param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  float afStack_60 [6];
  float *pfStack_48;
  code *pcStack_40;
  float *pfStack_38;
  code *pcStack_30;
  float afStack_24 [3];
  
  afStack_24[1] = -NAN;
  afStack_24[2] = -NAN;
  if (0x7f7fffff < (uint)ABS(param_2)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1435acafa,0x23,&UNK_1435acb20);
  }
  if (_DAT_142e36f28 <= param_2) {
    uVar6 = *(longlong *)(param_1 + 0x10) + 0xfffffffe;
    fVar8 = _DAT_142e36f28;
  }
  else if (param_2 <= 0.0) {
    uVar6 = 0;
    fVar8 = 0.0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x20);
    uVar6 = *(ulonglong *)(param_1 + 0x28);
    if (uVar6 == 1) {
      lVar5 = 0;
    }
    else {
      if (uVar6 == 0) goto LAB_14289c7f5;
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
    if (uVar6 <= uVar7) {
LAB_14289c7f5:
      afStack_24[0] = param_2;
      pdb_140567680(afStack_60,lVar1,lVar1 + uVar6 * 4);
      pfStack_48 = afStack_24;
      pcStack_40 = pdb_140f70fc0;
      pcStack_30 = pdb_14209a270;
      pfStack_38 = afStack_60;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_1435acb38,&pfStack_48,&UNK_1435acb58);
    }
    uVar6 = uVar7 - 1;
    if (uVar7 == 0) {
      pdb_142e2b1d0(param_2);
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    afStack_60[0] = *(float *)(lVar1 + uVar6 * 4);
    fVar8 = *(float *)(lVar1 + uVar7 * 4);
    pfStack_48 = (float *)CONCAT44(pfStack_48._4_4_,fVar8);
    if ((afStack_60[0] == fVar8) && (!NAN(afStack_60[0]) && !NAN(fVar8))) {
      uVar6 = pdb_142db0bc2(1,afStack_60,&pfStack_48,0);
      goto LAB_14289c7d7;
    }
    fVar8 = (float)pdb_140de8220();
    fVar3 = 0.0;
    if (0.0 <= fVar8) {
      fVar3 = fVar8;
    }
    fVar8 = _DAT_142e36f28;
    if (fVar3 <= _DAT_142e36f28) {
      fVar8 = fVar3;
    }
  }
  uVar7 = *(ulonglong *)(param_1 + 0x10);
  uVar6 = uVar6 & 0xffffffff;
  if (uVar6 < uVar7) {
    if (uVar7 <= uVar6 + 1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar6 + 1,uVar7,&UNK_1435acbe0);
    }
    return (ulonglong)
           (uint)(*(float *)(*(longlong *)(param_1 + 8) + 8 + uVar6 * 8) * fVar8 +
                 *(float *)(*(longlong *)(param_1 + 8) + uVar6 * 8) * (_DAT_142e36f28 - fVar8));
  }
LAB_14289c7d7:
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar6);
}

