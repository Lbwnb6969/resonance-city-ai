// VA 0x140df2a20, PDB extent 472 bytes
// utils::geometry::rectangle::Rectangle2d::closest_point_on_perimeter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::geometry::rectangle::Rectangle2d::closest_point_on_perimeter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 472 */

undefined8 pdb_140df2a20(undefined8 *param_1,longlong param_2,float param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_XMM1_Da;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float afStack_68 [4];
  float fStack_58;
  undefined8 uStack_54;
  float fStack_4c;
  
  lVar1 = pdb_140df2c60();
  fStack_58 = (float)param_1[2];
  afStack_68[3] = (float)((ulonglong)param_1[2] >> 0x20);
  if (0.0 < afStack_68[3] * fStack_58) {
    if (lVar1 == 4) {
      lVar1 = 0;
    }
    afStack_68[1] = afStack_68[3] * _DAT_143057f30;
    afStack_68[0] = fStack_58 * _UNK_143057f34;
    afStack_68[3] = afStack_68[3] * _UNK_143057f38;
    fStack_58 = fStack_58 * _UNK_143057f3c;
    afStack_68[2] = afStack_68[0];
    uStack_54 = CONCAT44(fStack_58,afStack_68[3]);
    fStack_4c = afStack_68[1];
    fVar7 = (float)((ulonglong)*(undefined8 *)(afStack_68 + lVar1 * 2) >> 0x20);
    fVar6 = (float)*(undefined8 *)(afStack_68 + lVar1 * 2);
    fVar5 = (float)*param_1;
    fVar8 = (float)((ulonglong)*param_1 >> 0x20);
    fVar3 = (float)(_UNK_142e37824 ^ (uint)fVar8);
    if (param_2 == 4) {
      param_2 = 0;
    }
    uStack_54 = CONCAT44(fStack_58,afStack_68[3]);
    fVar9 = (float)*(undefined8 *)(afStack_68 + param_2 * 2);
    fVar10 = (float)((ulonglong)*(undefined8 *)(afStack_68 + param_2 * 2) >> 0x20);
    fVar2 = (float)param_1[1];
    fVar11 = fVar7 * fVar3 + fVar6 * fVar5 + fVar2;
    fVar4 = (float)((ulonglong)param_1[1] >> 0x20);
    fVar12 = fVar7 * fVar5 + fVar6 * fVar8 + fVar4;
    fVar6 = (fVar10 * fVar3 + fVar9 * fVar5 + fVar2) - fVar11;
    fVar7 = (fVar10 * fVar5 + fVar9 * fVar8 + fVar4) - fVar12;
    fVar8 = fVar7 * fVar7 + fVar6 * fVar6;
    if (fVar8 <= _DAT_143006dc0) {
      fVar8 = _DAT_143006dc0;
    }
    fVar8 = ((param_3 - fVar12) * fVar7 + (in_XMM1_Da - fVar11) * fVar6) / fVar8;
    fVar6 = 0.0;
    if (0.0 <= fVar8) {
      fVar6 = fVar8;
    }
    fVar8 = _DAT_142e36f28;
    if (fVar6 <= _DAT_142e36f28) {
      fVar8 = fVar6;
    }
    uStack_54 = CONCAT44(fStack_58,afStack_68[3]);
    uStack_54 = CONCAT44(fStack_58,afStack_68[3]);
    return CONCAT44(fVar4,(fVar2 + (float)((ulonglong)*(undefined8 *)(afStack_68 + param_2 * 2) >>
                                          0x20) * fVar3 +
                                   (float)*(undefined8 *)(afStack_68 + param_2 * 2) * fVar5) * fVar8
                          + (fVar2 + (float)((ulonglong)*(undefined8 *)(afStack_68 + lVar1 * 2) >>
                                            0x20) * fVar3 +
                                     (float)*(undefined8 *)(afStack_68 + lVar1 * 2) * fVar5) *
                            (_DAT_142e36f28 - fVar8));
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1431ffa1a,0x23,&UNK_1431ffc38);
}

