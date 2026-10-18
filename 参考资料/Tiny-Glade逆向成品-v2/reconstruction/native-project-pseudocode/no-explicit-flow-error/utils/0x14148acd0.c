// VA 0x14148acd0, PDB extent 609 bytes
// utils::geometry::split_heightmap::split_heightmap_by_threshold<system_wall_constructor::utils::trim_rows::RowTrimmerSink>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/split_heightmap.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::geometry::split_heightmap::split_heightmap_by_threshold<system_wall_constructor::utils::trim_rows::RowTrimmerSink>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/split_heightmap.rs
   Extent: 609 */

void pdb_14148acd0(float *param_1,longlong param_2,float param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  float fVar14;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_14330d368);
  }
  fVar14 = *param_1;
  lVar6 = *param_4;
  plVar7 = (longlong *)param_4[1];
  lVar8 = param_4[2];
  lVar11 = param_4[3];
  uVar10 = *(undefined4 *)((longlong)param_4 + 0x1c);
  uVar3 = _UNK_142e378e4;
  if (param_3 < fVar14) {
    if (*(longlong *)(lVar6 + 0x28) == 0) {
LAB_14148af14:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14300b968);
    }
    uVar3 = **(undefined4 **)(lVar6 + 0x20);
    lVar13 = plVar7[2];
    if (lVar13 != lVar8) {
      if (lVar13 != 0) {
        if (plVar7[1] + lVar13 * 0x20 != 0x20) {
          *(undefined4 *)(plVar7[1] + lVar13 * 0x20 + -4) = uVar3;
          uVar3 = _UNK_142e378e4;
          goto joined_r0x00014148adfc;
        }
      }
LAB_14148af08:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14300b980);
    }
    if (lVar8 == *plVar7) {
      pdb_142d7e6e0(plVar7);
    }
    lVar13 = plVar7[1];
    puVar1 = (undefined8 *)(lVar13 + lVar8 * 0x20);
    *puVar1 = 0;
    puVar1[1] = 0;
    uVar5 = _UNK_142e378e4;
    puVar2 = (undefined4 *)(lVar13 + 0x10 + lVar8 * 0x20);
    *puVar2 = (int)lVar11;
    puVar2[1] = uVar10;
    puVar2[2] = uVar3;
    puVar2[3] = uVar5;
    plVar7[2] = lVar8 + 1;
    uVar3 = _UNK_142e378e4;
  }
joined_r0x00014148adfc:
  _UNK_142e378e4 = uVar3;
  if (param_2 != 1) {
    lVar13 = param_2 * 4 + -4;
    uVar12 = 1;
    do {
      fVar4 = param_1[uVar12];
      if (fVar14 <= param_3) {
        if (param_3 < fVar4) {
          pdb_140847cd0(param_4,uVar12 - 1,(param_3 - fVar14) / (fVar4 - fVar14));
          goto LAB_14148ae83;
        }
      }
      else if (fVar4 <= param_3) {
        pdb_140847c10(param_4,uVar12 - 1,(param_3 - fVar14) / (fVar4 - fVar14));
      }
      else {
LAB_14148ae83:
        if (*(ulonglong *)(lVar6 + 0x28) <= uVar12) goto LAB_14148af14;
        uVar5 = *(undefined4 *)(*(longlong *)(lVar6 + 0x20) + uVar12 * 4);
        lVar9 = plVar7[2];
        if (lVar9 == lVar8) {
          if (lVar8 == *plVar7) {
            pdb_142d7e6e0(plVar7);
          }
          lVar9 = plVar7[1];
          puVar1 = (undefined8 *)(lVar9 + lVar8 * 0x20);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar2 = (undefined4 *)(lVar9 + 0x10 + lVar8 * 0x20);
          *puVar2 = (int)lVar11;
          puVar2[1] = uVar10;
          puVar2[2] = uVar5;
          puVar2[3] = uVar3;
          plVar7[2] = lVar8 + 1;
        }
        else {
          if (lVar9 == 0) goto LAB_14148af08;
          if (plVar7[1] + lVar9 * 0x20 == 0x20) goto LAB_14148af08;
          *(undefined4 *)(plVar7[1] + lVar9 * 0x20 + -4) = uVar5;
        }
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + -4;
      fVar14 = fVar4;
    } while (lVar13 != 0);
  }
  return;
}

