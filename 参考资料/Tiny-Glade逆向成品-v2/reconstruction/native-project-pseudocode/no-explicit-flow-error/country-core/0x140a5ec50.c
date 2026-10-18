// VA 0x140a5ec50, PDB extent 535 bytes
// country_core::resources::stairs::stairs_state::StairsState::apply_diff
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::StairsState::apply_diff
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 535 */

void pdb_140a5ec50(undefined8 *param_1,longlong param_2,char param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 uVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  int aiStack_78 [2];
  longlong lStack_70;
  ulonglong uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pdb_140a5f920();
  lVar9 = 0x38;
  lVar6 = param_2 + 0x20;
  if (param_3 != '\0') {
    lVar9 = 0x20;
    lVar6 = param_2 + 0x38;
  }
  if (*(longlong *)(lVar6 + 0x10) != 0) {
    piVar10 = *(int **)(lVar6 + 8);
    piVar8 = piVar10 + *(longlong *)(lVar6 + 0x10) * 2;
    piVar5 = piVar10;
    do {
      piVar1 = piVar5 + 2;
      pdb_140a5f790(param_1,*piVar5,piVar5[1]);
      piVar5 = piVar1;
    } while (piVar1 != piVar8);
    puVar2 = param_1 + 5;
    do {
      iVar3 = *piVar10;
      iVar4 = piVar10[1];
      aiStack_78[0] = iVar3;
      lVar6 = pdb_140936c10(puVar2,aiStack_78);
      if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x10) == 0)) {
        pdb_140a61ea0(puVar2,iVar3);
      }
      aiStack_78[0] = iVar4;
      lVar6 = pdb_140936c10(puVar2,aiStack_78);
      if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x10) == 0)) {
        pdb_140a61ea0(puVar2,iVar4);
      }
      piVar10 = piVar10 + 2;
    } while (piVar10 != piVar8);
  }
  lVar6 = *(longlong *)(param_2 + 0x10 + lVar9);
  if (lVar6 != 0) {
    piVar10 = *(int **)(param_2 + 8 + lVar9);
    piVar5 = piVar10 + lVar6 * 2;
    do {
      while (iVar3 = *piVar10, iVar3 != piVar10[1]) {
        pdb_140a61170(param_1,iVar3);
        piVar10 = piVar10 + 2;
        if (piVar10 == piVar5) goto LAB_140a5ee33;
      }
      *param_1 = 0;
      *(undefined1 *)(param_1 + 0x2f) = 0;
      uStack_58 = CONCAT44(uStack_58._4_4_,iVar3);
      uVar7 = pdb_1400aede0(param_1 + 0xc,&uStack_58);
      pdb_1417c9a50(aiStack_78,param_1 + 5,uVar7,iVar3);
      if (aiStack_78[0] == 1) {
        uStack_58 = 0;
        uStack_50 = 4;
        uStack_48 = 0;
        pdb_1417c7df0(lStack_70,uStack_68,uStack_60,&uStack_58);
      }
      else if (*(ulonglong *)(lStack_70 + 0x10) <= uStack_68) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uStack_68,*(ulonglong *)(lStack_70 + 0x10),&UNK_143337a68);
      }
      pdb_1403afce0(param_1 + 0x29,iVar3,iVar3);
      piVar10 = piVar10 + 2;
    } while (piVar10 != piVar5);
  }
LAB_140a5ee33:
  *param_1 = 0;
  pdb_140a5f920(param_1);
  return;
}

