// VA 0x140a5c690, PDB extent 535 bytes
// country_core::startup::startup_terrain::grid_gen_cw
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_terrain.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::startup::startup_terrain::grid_gen_cw
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_terrain.rs
   Extent: 535 */

void pdb_140a5c690(longlong *param_1,ulonglong param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  uVar8 = (uint)param_2;
  if (uVar8 <= param_3) {
    while (5 < (param_3 + 1) - uVar8) {
      uVar8 = (int)param_2 + 4;
      if (param_3 < uVar8) {
        uVar8 = param_3;
      }
      pdb_140a5c690(param_1,param_2,(ulonglong)uVar8,param_4,param_5);
      param_2 = (ulonglong)uVar8;
    }
    if ((param_4 != 0) && (uVar8 < param_3)) {
      iVar1 = param_5 + 1;
      lVar6 = param_1[2];
      param_5 = param_5 + 2;
      iVar3 = 0;
      iVar2 = 0;
      iVar4 = iVar1;
      do {
        iVar2 = iVar2 + 1;
        iVar9 = iVar3;
        iVar10 = iVar4;
        uVar7 = param_3;
        iVar12 = param_5;
        do {
          lVar5 = lVar6;
          if (lVar5 == *param_1) {
            pdb_142db0990(param_1);
          }
          *(uint *)(param_1[1] + lVar5 * 4) = uVar8 + iVar9;
          param_1[2] = lVar5 + 1;
          if (lVar5 + 1 == *param_1) {
            pdb_142db0990(param_1);
          }
          *(uint *)(param_1[1] + 4 + lVar5 * 4) = uVar8 + iVar10;
          param_1[2] = lVar5 + 2;
          if (lVar5 + 2 == *param_1) {
            pdb_142db0990(param_1);
          }
          iVar11 = uVar8 + iVar9 + 1;
          *(int *)(param_1[1] + 8 + lVar5 * 4) = iVar11;
          param_1[2] = lVar5 + 3;
          if (lVar5 + 3 == *param_1) {
            pdb_142db0990(param_1);
          }
          *(int *)(param_1[1] + 0xc + lVar5 * 4) = iVar11;
          param_1[2] = lVar5 + 4;
          if (lVar5 + 4 == *param_1) {
            pdb_142db0990(param_1);
          }
          *(uint *)(param_1[1] + 0x10 + lVar5 * 4) = uVar8 + iVar10;
          param_1[2] = lVar5 + 5;
          if (lVar5 + 5 == *param_1) {
            pdb_142db0990(param_1);
          }
          *(uint *)(param_1[1] + 0x14 + lVar5 * 4) = uVar8 + iVar12;
          param_1[2] = lVar5 + 6;
          iVar10 = iVar10 + 1;
          iVar9 = iVar9 + 1;
          uVar7 = uVar7 - 1;
          iVar12 = iVar12 + 1;
          lVar6 = lVar5 + 6;
        } while (uVar8 != uVar7);
        lVar6 = lVar5 + 6;
        iVar4 = iVar4 + iVar1;
        iVar3 = iVar3 + iVar1;
        param_5 = param_5 + iVar1;
      } while (iVar2 != param_4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14303ea38);
}

