// VA 0x140df1c80, PDB extent 310 bytes
// utils::geometry::rectangle::Rectangle2d::expand_along_edge
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::expand_along_edge
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 310 */

void pdb_140df1c80(undefined8 *param_1,ulonglong param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_28;
  float fStack_24;
  float *pfStack_20;
  code *pcStack_18;
  float *pfStack_10;
  code *pcStack_8;
  
  if ((param_2 | 2) == 3) {
    if (param_5 < param_4) {
LAB_140df1d54:
      fStack_24 = param_5;
      pfStack_20 = &fStack_28;
      pcStack_18 = pdb_140f705d0;
      pfStack_10 = &fStack_24;
      pcStack_8 = pdb_140f705d0;
      fStack_28 = param_4;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_1431ff904,&pfStack_20,&UNK_1431ff9a0);
    }
    fVar1 = *(float *)((longlong)param_1 + 0x14);
    if (param_4 <= param_3 + fVar1) {
      param_4 = param_3 + fVar1;
    }
    if (param_4 <= param_5) {
      param_5 = param_4;
    }
    *(float *)((longlong)param_1 + 0x14) = param_5;
  }
  else {
    if (param_5 < param_4) goto LAB_140df1d54;
    fVar1 = *(float *)(param_1 + 2);
    if (param_4 <= param_3 + fVar1) {
      param_4 = param_3 + fVar1;
    }
    if (param_4 <= param_5) {
      param_5 = param_4;
    }
    *(float *)(param_1 + 2) = param_5;
    if (3 < param_2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_1431ffb58,0x2b,&UNK_1431ffb88);
    }
  }
  fVar2 = _DAT_1431ff8d0;
  fVar3 = _UNK_1431ff8d4;
  fVar4 = _UNK_1431ff8d8;
  fVar5 = _UNK_1431ff8dc;
  if (param_2 < 3) {
    fVar2 = *(float *)(&UNK_1431ffd34 + param_2 * 4);
    fVar3 = *(float *)(&UNK_1431ffd34 + param_2 * 4);
    fVar4 = *(float *)(&UNK_1431ffd28 + param_2 * 4);
    fVar5 = *(float *)(&UNK_1431ffd28 + param_2 * 4);
  }
  fVar6 = (float)*param_1;
  fVar7 = (float)((ulonglong)*param_1 >> 0x20);
  fVar1 = (param_5 - fVar1) * _DAT_142e36f50;
  param_1[1] = CONCAT44((fVar6 * fVar5 + fVar7 * fVar3) * fVar1 +
                        (float)((ulonglong)param_1[1] >> 0x20),
                        ((float)(_UNK_142e37824 ^ (uint)fVar7) * fVar4 + fVar6 * fVar2) * fVar1 +
                        (float)param_1[1]);
  return;
}

