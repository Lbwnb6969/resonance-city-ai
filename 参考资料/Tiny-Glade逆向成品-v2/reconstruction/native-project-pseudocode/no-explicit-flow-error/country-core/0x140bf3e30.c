// VA 0x140bf3e30, PDB extent 414 bytes
// country_core::resources::ivy::ivy_storage::Ivy::last_segment_point_ids
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ivy/ivy_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::ivy::ivy_storage::Ivy::last_segment_point_ids
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ivy/ivy_storage.rs
   Extent: 414 */

void pdb_140bf3e30(ulonglong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  uVar3 = param_1[3];
  if (uVar3 < 2) {
    pdb_142dc8110(&UNK_143065f38,0x14,&UNK_1430661c8);
LAB_140bf3f9d:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1430661e0,0x34,&UNK_143066218);
  }
  uVar8 = param_1[2];
  uVar6 = (uVar3 + uVar8) - 2;
  uVar12 = *param_1;
  uVar4 = param_1[1];
  uVar9 = 0;
  uVar7 = uVar12;
  if (uVar6 < uVar12) {
    uVar7 = uVar9;
  }
  lVar11 = *(longlong *)(uVar4 + (uVar6 - uVar7) * 0x28);
  uVar6 = (uVar3 + uVar8) - 1;
  uVar7 = uVar12;
  if (uVar6 < uVar12) {
    uVar7 = uVar9;
  }
  lVar5 = *(longlong *)(uVar4 + (uVar6 - uVar7) * 0x28);
  uVar7 = uVar12;
  if (uVar8 < uVar12) {
    uVar7 = uVar9;
  }
  uVar12 = uVar12 - (uVar8 - uVar7);
  lVar1 = uVar4 + (uVar8 - uVar7) * 0x28;
  uVar8 = uVar12;
  if (uVar3 < uVar12) {
    uVar8 = uVar3;
  }
  do {
    if (uVar8 * 0x28 == uVar9) {
      uVar9 = uVar12;
      if (uVar3 < uVar12) {
        uVar9 = uVar3;
      }
      lVar10 = 0;
      goto LAB_140bf3f00;
    }
    plVar2 = (longlong *)(lVar1 + uVar9);
    uVar9 = uVar9 + 0x28;
  } while (*plVar2 != lVar11);
LAB_140bf3f13:
  uVar9 = uVar12;
  if (uVar3 < uVar12) {
    uVar9 = uVar3;
  }
  lVar11 = 0;
  while (uVar9 * 0x28 != lVar11) {
    plVar2 = (longlong *)(lVar1 + lVar11);
    lVar11 = lVar11 + 0x28;
    if (*plVar2 == lVar5) {
      return;
    }
  }
  if (uVar3 < uVar12) {
    uVar12 = uVar3;
  }
  lVar11 = 0;
  do {
    if (uVar3 * 0x28 + uVar12 * -0x28 == lVar11) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143066230,0x32,&UNK_143066268);
    }
    plVar2 = (longlong *)(uVar4 + lVar11);
    lVar11 = lVar11 + 0x28;
  } while (*plVar2 != lVar5);
  return;
LAB_140bf3f00:
  do {
    if (uVar3 * 0x28 + uVar9 * -0x28 == lVar10) goto LAB_140bf3f9d;
    plVar2 = (longlong *)(uVar4 + lVar10);
    lVar10 = lVar10 + 0x28;
  } while (*plVar2 != lVar11);
  goto LAB_140bf3f13;
}

