// VA 0x140dea260, PDB extent 700 bytes
// utils::wall_space::WallSpaceCoord::to_world_space
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/wall_space.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::wall_space::WallSpaceCoord::to_world_space
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/wall_space.rs
   Extent: 700 */

undefined8 * pdb_140dea260(undefined8 *param_1,float *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_7c;
  float *pfStack_78;
  code *pcStack_70;
  
  fVar16 = _DAT_142e36f28;
  fVar15 = *param_2;
  fVar9 = *(float *)(param_3 + 0x30);
  fVar8 = fVar15 / fVar9;
  if ((fVar15 < 0.0) || (fVar9 < fVar15)) {
    if (NAN(fVar8)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_1433ecdf3,0x1d,&UNK_1431fee58);
    }
    if (ABS(fVar8) == INFINITY) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_1433ece78,0x22,&UNK_1431fee58);
    }
    fVar10 = 0.0;
    if (0.0 <= fVar8) {
      fVar10 = fVar8;
    }
    fVar8 = _DAT_142e36f28;
    if (fVar10 <= _DAT_142e36f28) {
      fVar8 = fVar10;
    }
    uVar4 = pdb_141e38dd0(param_3,fVar8);
    uVar6 = (ulonglong)uVar4;
    uVar7 = *(ulonglong *)(param_3 + 0x10);
    if (uVar7 <= uVar6) goto LAB_140dea500;
    uVar5 = uVar6 + 1;
    if (uVar7 <= uVar5) goto LAB_140dea50c;
    uVar1 = *(undefined8 *)(*(longlong *)(param_3 + 8) + uVar6 * 8);
    uVar2 = *(undefined8 *)(*(longlong *)(param_3 + 8) + 8 + uVar6 * 8);
    fVar12 = (float)((ulonglong)uVar1 >> 0x20);
    fVar11 = (float)uVar1;
    fVar13 = (float)uVar2;
    fVar14 = (float)((ulonglong)uVar2 >> 0x20);
    fVar10 = fVar14 * extraout_XMM0_Da_00 + fVar12 * (fVar16 - extraout_XMM0_Da_00);
    fVar8 = extraout_XMM0_Da_00 * fVar13 + (fVar16 - extraout_XMM0_Da_00) * fVar11;
    fVar13 = fVar13 - fVar11;
    fVar14 = fVar14 - fVar12;
    fVar11 = fVar16 / SQRT(fVar14 * fVar14 + fVar13 * fVar13);
    fVar13 = fVar11 * fVar13;
    fVar11 = fVar11 * fVar14;
    fVar16 = fVar16 / SQRT(fVar11 * fVar11 + fVar13 * fVar13);
    if (fVar15 <= fVar9) {
      fVar8 = fVar8 - fVar15 * fVar13 * fVar16;
      fVar9 = param_2[1] - fVar15 * fVar16 * 0.0;
      fVar10 = fVar10 - fVar11 * fVar16 * fVar15;
    }
    else {
      fVar15 = fVar15 - fVar9;
      fVar8 = fVar8 + fVar15 * fVar13 * fVar16;
      fVar9 = param_2[1] + fVar15 * fVar16 * 0.0;
      fVar10 = fVar10 + fVar15 * fVar11 * fVar16;
    }
  }
  else {
    fStack_7c = fVar8;
    if ((fVar8 < 0.0) || (_DAT_142e36f28 < fVar8)) {
      pfStack_78 = &fStack_7c;
      pcStack_70 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_1433ecdc8,&pfStack_78,&UNK_1431fee40);
    }
    uVar4 = pdb_141e38dd0(param_3);
    uVar6 = (ulonglong)uVar4;
    uVar7 = *(ulonglong *)(param_3 + 0x10);
    if (uVar7 <= uVar6) {
LAB_140dea500:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar6,uVar7,&UNK_1433ecc50);
    }
    uVar5 = uVar6 + 1;
    if (uVar7 <= uVar5) {
LAB_140dea50c:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar5,uVar7,&UNK_1433ecc68);
    }
    lVar3 = *(longlong *)(param_3 + 8);
    fVar10 = *(float *)(lVar3 + 0xc + uVar6 * 8) * extraout_XMM0_Da +
             (fVar16 - extraout_XMM0_Da) * *(float *)(lVar3 + 4 + uVar6 * 8);
    fVar8 = *(float *)(lVar3 + 8 + uVar6 * 8) * extraout_XMM0_Da +
            *(float *)(lVar3 + uVar6 * 8) * (fVar16 - extraout_XMM0_Da);
    fVar9 = param_2[1];
  }
  *param_1 = CONCAT44(fVar9,fVar8);
  *(float *)(param_1 + 1) = fVar10;
  return param_1;
}

