// VA 0x140df3370, PDB extent 13 bytes
// utils::geometry::rectangle::Rectangle2d::get_normal_at_u_non_normalized_corners
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::geometry::rectangle::Rectangle2d::get_normal_at_u_non_normalized_corners
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 13 */

undefined8 pdb_140df3370(undefined8 *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_4c;
  float *pfStack_48;
  code *pcStack_40;
  
  fVar2 = *(float *)((longlong)param_1 + 0x14);
  fVar5 = fVar2 + *(float *)(param_1 + 2);
  fVar7 = fVar5 + fVar5;
  fVar6 = fVar2 / fVar7;
  fStack_4c = fVar6;
  if (((((fVar6 < 0.0) || (_DAT_142e36f28 < fVar6)) ||
       (fVar5 = fVar5 / fVar7, fStack_4c = fVar5, fVar5 < 0.0)) ||
      ((_DAT_142e36f28 < fVar5 ||
       (fStack_4c = (fVar2 + fVar2 + *(float *)(param_1 + 2)) / fVar7, fStack_4c < 0.0)))) ||
     (_DAT_142e36f28 < fStack_4c)) {
    pfStack_48 = &fStack_4c;
    pcStack_40 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_1433ecdc8,&pfStack_48,&UNK_1431ffaa0);
  }
  if ((param_2 != 0.0) || (NAN(param_2))) {
    if ((param_2 == _DAT_142e36f28) && (!NAN(param_2) && !NAN(_DAT_142e36f28))) goto LAB_140df18d8;
    if ((param_2 != fVar6) || (NAN(param_2) || NAN(fVar6))) {
      if ((param_2 == fVar5) && (!NAN(param_2) && !NAN(fVar5))) {
        fVar2 = (float)*param_1;
        fVar5 = (float)((ulonglong)*param_1 >> 0x20);
        fVar6 = (float)(_UNK_142e37824 ^ (uint)fVar5) + fVar2;
        fVar2 = fVar2 + fVar5;
        fVar5 = _DAT_142e36f28 / SQRT(fVar2 * fVar2 + fVar6 * fVar6);
        fVar6 = fVar5 * fVar6;
        fVar5 = fVar5 * fVar2;
        goto LAB_140df1918;
      }
      if ((param_2 != fStack_4c) || (NAN(param_2) || NAN(fStack_4c))) {
        if ((param_2 < 0.0) || (fVar6 <= param_2)) {
          if ((param_2 < fVar6) || (fVar5 <= param_2)) {
            fVar3 = (float)*param_1;
            fVar4 = (float)((ulonglong)*param_1 >> 0x20);
            fVar7 = _UNK_1431ff8d8;
            fVar1 = _UNK_1431ff8dc;
            fVar2 = _DAT_1431ff8d0;
            fVar6 = _UNK_1431ff8d4;
            if ((fVar5 <= param_2) && (param_2 < fStack_4c)) {
              fVar7 = _UNK_142e37958;
              fVar1 = _UNK_142e3795c;
              fVar2 = _DAT_142e37950;
              fVar6 = _UNK_142e37954;
            }
            return CONCAT44(fVar3 * fVar1 + fVar4 * fVar6,
                            (float)(_UNK_142e37824 ^ (uint)fVar4) * fVar7 + fVar3 * fVar2);
          }
          fVar2 = (float)*param_1;
          fVar6 = (float)((ulonglong)*param_1 >> 0x20);
          fVar5 = fVar2 * _DAT_142f98000;
          fVar7 = fVar6 * _UNK_142f98004;
          fVar6 = (float)(_UNK_142e37824 ^ (uint)fVar6) * _UNK_142f98008;
          fVar2 = fVar2 * _UNK_142f9800c;
        }
        else {
          fVar2 = (float)*param_1;
          fVar6 = (float)((ulonglong)*param_1 >> 0x20);
          fVar5 = fVar2 * _DAT_1431ff8e0;
          fVar7 = fVar6 * _UNK_1431ff8e4;
          fVar6 = (float)(_UNK_142e37824 ^ (uint)fVar6) * _UNK_1431ff8e8;
          fVar2 = fVar2 * _UNK_1431ff8ec;
        }
        return CONCAT44(fVar2 + fVar7,fVar6 + fVar5);
      }
      fVar2 = (float)*param_1;
      fVar6 = (float)((ulonglong)*param_1 >> 0x20);
      fVar5 = fVar2 * _DAT_142e377c0;
      fVar7 = fVar6 * _UNK_142e377c4;
      fVar6 = (float)(_UNK_142e37824 ^ (uint)fVar6) * _UNK_142e377c8;
      fVar2 = fVar2 * _UNK_142e377cc;
    }
    else {
      fVar2 = (float)*param_1;
      fVar6 = (float)((ulonglong)*param_1 >> 0x20);
      fVar5 = fVar2 * _DAT_1431ff8f0;
      fVar7 = fVar6 * _UNK_1431ff8f4;
      fVar6 = (float)(_UNK_142e37824 ^ (uint)fVar6) * _UNK_1431ff8f8;
      fVar2 = fVar2 * _UNK_1431ff8fc;
    }
    fVar6 = fVar6 + fVar5;
    fVar2 = fVar2 + fVar7;
  }
  else {
LAB_140df18d8:
    fVar5 = (float)*param_1;
    fVar2 = (float)((ulonglong)*param_1 >> 0x20);
    fVar6 = (float)(_UNK_142e37824 ^ (uint)fVar2 ^ _DAT_142e37820) - fVar5;
    fVar2 = (float)((uint)fVar5 ^ _UNK_142e37824) - fVar2;
  }
  fVar5 = _DAT_142e36f28 / SQRT(fVar2 * fVar2 + fVar6 * fVar6);
  fVar6 = fVar5 * fVar6;
  fVar5 = fVar5 * fVar2;
LAB_140df1918:
  return CONCAT44(_DAT_142f6d804 * fVar5,_DAT_142f6d804 * fVar6);
}

