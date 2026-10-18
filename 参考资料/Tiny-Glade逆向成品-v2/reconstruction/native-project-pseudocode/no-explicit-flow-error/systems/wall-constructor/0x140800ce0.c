// VA 0x140800ce0, PDB extent 832 bytes
// system_wall_constructor::segmentation::calculate_wall_path_segmentation::score_split_candidate
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/segmentation/calculate_wall_path_segmentation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::segmentation::calculate_wall_path_segmentation::score_split_candidate
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/segmentation/calculate_wall_path_segmentation.rs
   Extent: 832 */

float pdb_140800ce0(ulonglong param_1,longlong *param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong *plStack_c8;
  code *pcStack_c0;
  int iStack_b8;
  float fStack_b4;
  int iStack_b0;
  float fStack_ac;
  undefined1 auStack_a8 [8];
  float fStack_a0;
  undefined1 auStack_98 [8];
  float fStack_90;
  
  if (param_1 != 0) {
    uVar8 = param_1 + 1;
    plVar1 = param_2 + 2;
    uVar6 = pdb_1413f84b0(plVar1);
    if (uVar8 < uVar6) {
      if (param_4 <= param_1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(param_1,param_4,&UNK_143007010);
      }
      fVar10 = 0.0;
      if ((*(byte *)(param_3 + param_1) & 0xf) == 0) {
        uVar6 = pdb_1413f84b0(0);
        if (uVar6 <= param_1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143308518,0x2d,&UNK_143308548);
        }
        uVar6 = pdb_1413f84b0(plVar1);
        fStack_ac = _DAT_142e36f28;
        fStack_b4 = _DAT_142e36f28;
        if (uVar8 < uVar6) {
          fStack_b4 = 0.0;
        }
        iVar9 = (int)param_1;
        uVar7 = pdb_1413f84b0(plVar1);
        uVar5 = _DAT_142e37830;
        if (uVar8 < uVar7) {
          fStack_ac = 0.0;
        }
        iStack_b0 = iVar9 + -1 + (uint)(uVar8 < uVar7);
        pcStack_c0 = pdb_14141d7c0;
        plStack_c8 = param_2;
        iStack_b8 = iVar9 + -1 + (uint)(uVar8 < uVar6);
        pdb_14141dbc0(&plStack_c8,_DAT_142e37830,param_3,param_4);
        pdb_14141e440(&plStack_c8,uVar5,param_3,param_4);
        pdb_141421f10(auStack_a8,param_2,iStack_b8,fStack_b4,&UNK_143007028);
        pdb_141421f10(auStack_98,param_2,iStack_b0,fStack_ac,&UNK_143007040);
        uVar3 = *(uint *)(param_2 + 3);
        if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8510(&UNK_143007058);
        }
        iVar9 = iVar9 + (int)param_2[2];
        if (iVar9 == -0x80000000 && uVar3 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8550(&UNK_143007058);
        }
        iVar9 = iVar9 % (int)uVar3;
        uVar4 = -uVar3;
        if ((int)-uVar3 < 0) {
          uVar4 = uVar3;
        }
        uVar8 = (ulonglong)(int)((iVar9 >> 0x1f & uVar4) + iVar9);
        if ((ulonglong)param_2[1] <= uVar8) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar8,param_2[1],&UNK_143007058);
        }
        fVar10 = *(float *)(*param_2 + 8 + uVar8 * 0xc);
        fVar14 = fStack_90 - fStack_a0;
        uVar2 = *(undefined8 *)(*param_2 + uVar8 * 0xc);
        fVar11 = (float)uVar2;
        fVar18 = (float)((ulonglong)uVar2 >> 0x20);
        fVar12 = auStack_a8._0_4_;
        fVar13 = auStack_a8._4_4_;
        fVar16 = auStack_98._0_4_ - fVar12;
        fVar17 = auStack_98._4_4_ - fVar13;
        fVar15 = fVar14 * fVar14 + fVar17 * fVar17 + fVar16 * fVar16;
        if (fVar15 <= _DAT_143006dc0) {
          fVar15 = _DAT_143006dc0;
        }
        fVar15 = ((fVar10 - fStack_a0) * fVar14 +
                 (fVar18 - fVar13) * fVar17 + (fVar11 - fVar12) * fVar16) / fVar15;
        fVar14 = 0.0;
        if (0.0 <= fVar15) {
          fVar14 = fVar15;
        }
        fVar15 = _DAT_142e36f28;
        if (fVar14 <= _DAT_142e36f28) {
          fVar15 = fVar14;
        }
        fVar14 = _DAT_142e36f28 - fVar15;
        fVar11 = fVar11 - (fVar15 * auStack_98._0_4_ + fVar14 * fVar12);
        fVar10 = fVar10 - (fVar15 * fStack_90 + fVar14 * fStack_a0);
        fVar10 = ((SQRT(fVar10 * fVar10 + fVar11 * fVar11) +
                  auStack_98._4_4_ * fVar15 + fVar13 * fVar14) - fVar18) * _DAT_142e36f50;
      }
      return fVar10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_143006fa8,0x4d,&UNK_143006ff8);
}

