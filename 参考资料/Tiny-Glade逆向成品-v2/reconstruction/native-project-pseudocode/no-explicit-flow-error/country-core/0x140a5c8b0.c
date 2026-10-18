// VA 0x140a5c8b0, PDB extent 534 bytes
// country_core::startup::startup_terrain::grid_gen_ccw
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_terrain.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::startup::startup_terrain::grid_gen_ccw
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_terrain.rs
   Extent: 534 */

void pdb_140a5c8b0(longlong *param_1,ulonglong param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  uVar9 = (uint)param_2;
  if (uVar9 <= param_3) {
    while (5 < (param_3 + 1) - uVar9) {
      uVar9 = (int)param_2 + 4;
      if (param_3 < uVar9) {
        uVar9 = param_3;
      }
      pdb_140a5c8b0(param_1,param_2,(ulonglong)uVar9,param_4,param_5);
      param_2 = (ulonglong)uVar9;
    }
    if ((param_4 != 0) && (uVar9 < param_3)) {
      iVar1 = param_5 + 1;
      lVar7 = param_1[2];
      param_5 = param_5 + 2;
      iVar3 = 0;
      iVar2 = 0;
      iVar5 = iVar1;
      do {
        iVar2 = iVar2 + 1;
        iVar10 = iVar3;
        iVar11 = iVar5;
        uVar8 = param_3;
        iVar12 = param_5;
        do {
          lVar6 = lVar7;
          if (lVar6 == *param_1) {
            pdb_142db0990(param_1);
          }
          *(uint *)(param_1[1] + lVar6 * 4) = uVar9 + iVar10;
          param_1[2] = lVar6 + 1;
          if (lVar6 + 1 == *param_1) {
            pdb_142db0990(param_1);
          }
          iVar4 = uVar9 + iVar10 + 1;
          *(int *)(param_1[1] + 4 + lVar6 * 4) = iVar4;
          param_1[2] = lVar6 + 2;
          if (lVar6 + 2 == *param_1) {
            pdb_142db0990(param_1);
          }
          *(uint *)(param_1[1] + 8 + lVar6 * 4) = uVar9 + iVar11;
          param_1[2] = lVar6 + 3;
          if (lVar6 + 3 == *param_1) {
            pdb_142db0990(param_1);
          }
          *(uint *)(param_1[1] + 0xc + lVar6 * 4) = uVar9 + iVar11;
          param_1[2] = lVar6 + 4;
          if (lVar6 + 4 == *param_1) {
            pdb_142db0990(param_1);
          }
          *(int *)(param_1[1] + 0x10 + lVar6 * 4) = iVar4;
          param_1[2] = lVar6 + 5;
          if (lVar6 + 5 == *param_1) {
            pdb_142db0990(param_1);
          }
          *(uint *)(param_1[1] + 0x14 + lVar6 * 4) = uVar9 + iVar12;
          param_1[2] = lVar6 + 6;
          iVar11 = iVar11 + 1;
          iVar10 = iVar10 + 1;
          uVar8 = uVar8 - 1;
          iVar12 = iVar12 + 1;
          lVar7 = lVar6 + 6;
        } while (uVar9 != uVar8);
        lVar7 = lVar6 + 6;
        iVar5 = iVar5 + iVar1;
        iVar3 = iVar3 + iVar1;
        param_5 = param_5 + iVar1;
      } while (iVar2 != param_4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14303ea50);
}

