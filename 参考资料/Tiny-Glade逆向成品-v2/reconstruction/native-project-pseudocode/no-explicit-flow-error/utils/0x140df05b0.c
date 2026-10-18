// VA 0x140df05b0, PDB extent 331 bytes
// utils::geometry::rectangle::Rectangle2d::edge_length
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::edge_length
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 331 */

float pdb_140df05b0(undefined8 *param_1,ulonglong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar1 = *(float *)(param_1 + 2);
  fVar5 = *(float *)((longlong)param_1 + 0x14);
  if (fVar1 * fVar5 <= 0.0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ffa1a,0x23,&UNK_1431ffa40);
  }
  if (param_2 < 4) {
    fVar7 = (float)*param_1;
    fVar8 = (float)((ulonglong)*param_1 >> 0x20);
    fVar3 = (float)(_UNK_142e37824 ^ (uint)fVar8);
    fVar11 = fVar1 * _DAT_142e36f38;
    fVar9 = _DAT_142e36f38 * fVar5;
    fVar5 = fVar5 * _DAT_142e36f50;
    fVar1 = fVar1 * _DAT_142e36f50;
    fVar2 = fVar9 * fVar3 + fVar11 * fVar7;
    fVar4 = fVar9 * fVar7 + fVar11 * fVar8;
    fVar10 = fVar5 * fVar3 + fVar11 * fVar7;
    fVar11 = fVar5 * fVar7 + fVar11 * fVar8;
    fVar6 = fVar5 * fVar3 + fVar1 * fVar7;
    fVar5 = fVar5 * fVar7 + fVar1 * fVar8;
    fVar3 = fVar9 * fVar3 + fVar1 * fVar7;
    fVar1 = fVar9 * fVar7 + fVar1 * fVar8;
    switch(param_2) {
    case 0:
      fVar7 = fVar2;
      fVar8 = fVar4;
      break;
    case 1:
      fVar7 = fVar10;
      fVar8 = fVar11;
      fVar10 = fVar6;
      fVar11 = fVar5;
      break;
    case 2:
      fVar7 = fVar6;
      fVar8 = fVar5;
      fVar10 = fVar3;
      fVar11 = fVar1;
      break;
    case 3:
      fVar7 = fVar3;
      fVar8 = fVar1;
      fVar10 = fVar2;
      fVar11 = fVar4;
    }
    fVar1 = (float)param_1[1];
    fVar5 = (float)((ulonglong)param_1[1] >> 0x20);
    fVar1 = (fVar1 + fVar7) - (fVar1 + fVar10);
    fVar5 = (fVar5 + fVar8) - (fVar5 + fVar11);
    return SQRT(fVar5 * fVar5 + fVar1 * fVar1);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1431ffab8,0x28,&UNK_1431ffae0);
}

