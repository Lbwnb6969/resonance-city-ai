// VA 0x140df0920, PDB extent 665 bytes
// utils::geometry::rectangle::Rectangle2d::get_pos_at_u
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::get_pos_at_u
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 665 */

ulonglong pdb_140df0920(undefined8 *param_1,float param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_3c;
  float *pfStack_38;
  code *pcStack_30;
  
  fVar5 = (float)((ulonglong)param_1[2] >> 0x20);
  fVar3 = (float)param_1[2];
  fVar6 = fVar5 + fVar3;
  fVar8 = fVar6 + fVar6;
  fVar7 = fVar5 / fVar8;
  fStack_3c = fVar7;
  if ((fVar7 < 0.0) || (_DAT_142e36f28 < fVar7)) {
LAB_140df0b72:
    pfStack_38 = &fStack_3c;
    pcStack_30 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_1433ecdc8,&pfStack_38,&UNK_1431ffaa0);
  }
  fVar6 = fVar6 / fVar8;
  fStack_3c = fVar6;
  if ((fVar6 < 0.0) || (_DAT_142e36f28 < fVar6)) goto LAB_140df0b72;
  fStack_3c = (fVar5 + fVar5 + fVar3) / fVar8;
  if ((fStack_3c < 0.0) || (_DAT_142e36f28 < fStack_3c)) goto LAB_140df0b72;
  if ((param_2 != 0.0) || (NAN(param_2))) {
    if ((param_2 != _DAT_142e36f28) || (NAN(param_2) || NAN(_DAT_142e36f28))) {
      if ((param_2 != fVar7) || (NAN(param_2) || NAN(fVar7))) {
        if ((param_2 != fVar6) || (NAN(param_2) || NAN(fVar6))) {
          if ((param_2 != fStack_3c) || (NAN(param_2) || NAN(fStack_3c))) {
            if ((param_2 < 0.0) || (fVar7 <= param_2)) {
              if ((param_2 < fVar7) || (fVar6 <= param_2)) {
                if ((param_2 < fVar6) || (fStack_3c <= param_2)) {
                  lVar1 = 3;
                  uVar2 = 4;
                }
                else {
                  lVar1 = 2;
                  uVar2 = 3;
                }
              }
              else {
                lVar1 = 1;
                uVar2 = 2;
              }
            }
            else {
              uVar2 = 1;
              lVar1 = 0;
            }
                    /* WARNING: Could not recover jumptable at 0x000140df0beb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar4 = (*(code *)(&UNK_1431ffd74 + *(int *)(&UNK_1431ffd74 + lVar1 * 4)))
                              (0,&UNK_1431ffd74 + *(int *)(&UNK_1431ffd74 + lVar1 * 4),0,uVar2);
            return uVar4;
          }
          if (fVar5 * fVar3 <= 0.0) goto LAB_140df0ba0;
          fVar6 = (float)*param_1;
          fVar7 = (float)(_UNK_142e37824 ^ (uint)((ulonglong)*param_1 >> 0x20));
          fVar3 = fVar3 * _DAT_1431ff8b0;
          fVar5 = fVar5 * _UNK_1431ff8b8;
          goto LAB_140df0a35;
        }
        if (0.0 < fVar5 * fVar3) {
          fVar6 = (float)*param_1;
          fVar7 = (float)(_UNK_142e37824 ^ (uint)((ulonglong)*param_1 >> 0x20));
          fVar3 = fVar3 * _DAT_142e36f40;
          fVar5 = fVar5 * _UNK_142e36f48;
          goto LAB_140df0a35;
        }
        goto LAB_140df0ba0;
      }
      if (fVar5 * fVar3 <= 0.0) goto LAB_140df0ba0;
      fVar6 = (float)*param_1;
      fVar7 = (float)(_UNK_142e37824 ^ (uint)((ulonglong)*param_1 >> 0x20));
      fVar3 = fVar3 * _DAT_143057f30;
      fVar5 = fVar5 * _UNK_143057f38;
      goto LAB_140df0a35;
    }
  }
  if (fVar5 * fVar3 <= 0.0) {
LAB_140df0ba0:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ffa1a,0x23,&UNK_1431ffc38);
  }
  fVar6 = (float)*param_1;
  fVar7 = (float)(_UNK_142e37824 ^ (uint)((ulonglong)*param_1 >> 0x20));
  fVar3 = fVar3 * _DAT_1431ff8c0;
  fVar5 = fVar5 * _UNK_1431ff8c8;
LAB_140df0a35:
  return (ulonglong)(uint)(*(float *)(param_1 + 1) + fVar5 * fVar7 + fVar3 * fVar6);
}

