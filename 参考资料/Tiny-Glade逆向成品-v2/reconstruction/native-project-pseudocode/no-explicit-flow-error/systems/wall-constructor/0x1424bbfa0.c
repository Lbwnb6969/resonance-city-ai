// VA 0x1424bbfa0, PDB extent 826 bytes
// system_wall_constructor::utils::wall_corners::find_corners
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/wall_corners.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_wall_constructor::utils::wall_corners::find_corners
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/wall_corners.rs
   Extent: 826 */

void pdb_1424bbfa0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,char param_6)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *unaff_R13;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong lStack_88;
  undefined8 *puStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  fVar7 = (float)pub_142e329e0(param_4);
  fVar8 = (float)pub_142e329e0(param_5);
  lStack_88 = 0;
  puStack_80 = (undefined8 *)0x8;
  lStack_78 = 0;
  if (param_6 == '\0') {
    lVar6 = 0;
  }
  else {
    if (param_3 < (undefined8 *)0x2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2((longlong)param_3 + -2,param_3,&UNK_1435101a0);
    }
    fVar11 = (float)*param_2;
    fVar9 = (float)param_2[(longlong)param_3 + -2] - fVar11;
    fVar12 = (float)((ulonglong)*param_2 >> 0x20);
    fVar10 = (float)((ulonglong)param_2[(longlong)param_3 + -2] >> 0x20) - fVar12;
    fVar11 = fVar11 - (float)param_2[1];
    fVar12 = fVar12 - (float)((ulonglong)param_2[1] >> 0x20);
    fVar9 = (fVar10 * fVar12 + fVar9 * fVar11) /
            SQRT((fVar11 * fVar11 + fVar12 * fVar12) * (fVar10 * fVar10 + fVar9 * fVar9));
    lVar6 = 0;
    if ((((uint)ABS(fVar9) < 0x7f800000) && (fVar8 <= fVar9)) && (fVar9 < fVar7)) {
      pdb_142d896b0(&lStack_88);
      *puStack_80 = 0;
      lStack_78 = 1;
      lVar6 = 1;
    }
  }
  puVar1 = param_2 + (longlong)param_3;
  bVar2 = true;
  lVar5 = 0;
  while (param_2 != puVar1) {
    puVar4 = param_2 + 1;
    puVar3 = param_2;
    if (bVar2) {
      if ((puVar4 == puVar1) || (param_2 + 2 == puVar1)) break;
      param_3 = puVar4;
      puVar3 = param_2 + 2;
      puVar4 = param_2 + 3;
      unaff_R13 = param_2;
    }
    fVar9 = (float)*param_3;
    fVar11 = (float)*puVar3 - fVar9;
    fVar10 = (float)((ulonglong)*param_3 >> 0x20);
    fVar12 = (float)((ulonglong)*puVar3 >> 0x20) - fVar10;
    fVar9 = fVar9 - (float)*unaff_R13;
    fVar10 = fVar10 - (float)((ulonglong)*unaff_R13 >> 0x20);
    fVar9 = (fVar10 * fVar12 + fVar9 * fVar11) /
            SQRT((fVar12 * fVar12 + fVar11 * fVar11) * (fVar10 * fVar10 + fVar9 * fVar9));
    if (((0x7f7fffff < (uint)ABS(fVar9)) || (fVar9 < fVar8)) || (fVar7 <= fVar9)) {
      lVar5 = lVar5 + 2;
      while( true ) {
        if (puVar4 == puVar1) goto LAB_1424bc231;
        fVar9 = (float)*puVar3;
        fVar11 = (float)*puVar4 - fVar9;
        fVar10 = (float)((ulonglong)*puVar3 >> 0x20);
        fVar12 = (float)((ulonglong)*puVar4 >> 0x20) - fVar10;
        fVar9 = fVar9 - (float)*param_3;
        fVar10 = fVar10 - (float)((ulonglong)*param_3 >> 0x20);
        fVar9 = (fVar10 * fVar12 + fVar9 * fVar11) /
                SQRT((fVar12 * fVar12 + fVar11 * fVar11) * (fVar10 * fVar10 + fVar9 * fVar9));
        if ((((uint)ABS(fVar9) < 0x7f800000) && (fVar8 <= fVar9)) && (fVar9 < fVar7)) break;
        lVar5 = lVar5 + 1;
        param_3 = puVar3;
        puVar3 = puVar4;
        puVar4 = puVar4 + 1;
      }
      param_2 = puVar4 + 1;
      unaff_R13 = puVar3;
      param_3 = puVar4;
    }
    else {
      lVar5 = lVar5 + 1;
      param_2 = puVar4;
      unaff_R13 = param_3;
      param_3 = puVar3;
    }
    if (lVar6 == lStack_88) {
      pdb_142d896b0(&lStack_88);
    }
    puStack_80[lVar6] = lVar5;
    lVar6 = lVar6 + 1;
    bVar2 = false;
    lStack_78 = lVar6;
  }
LAB_1424bc231:
  param_1[2] = lStack_78;
  *param_1 = lStack_88;
  param_1[1] = (longlong)puStack_80;
  return;
}

