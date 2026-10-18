// VA 0x14270d120, PDB extent 752 bytes
// asset::inheritable::impl$1::inherit_from<asset::prefab::config::AudioTriggerConfig>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/inheritable.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   asset::inheritable::impl$1::inherit_from<asset::prefab::config::AudioTriggerConfig>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/inheritable.rs
   Extent: 752 */

void pdb_14270d120(ulonglong *param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 unaff_BL;
  int unaff_EDI;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined **ppuVar6;
  undefined **ppuStack_60;
  code *pcStack_58;
  ulonglong uStack_50;
  undefined *puStack_48;
  ulonglong uStack_40;
  undefined *puStack_38;
  undefined4 uStack_30;
  
  uVar4 = *param_1;
  lVar3 = uVar4 + 0x7ffffffffffffffe;
  if (uVar4 < 0x8000000000000002) {
    lVar3 = 2;
  }
  if (lVar3 == 0) {
    uVar2 = *param_2;
    lVar3 = 2;
    if (0x8000000000000001 < uVar2) {
      lVar3 = uVar2 + 0x7ffffffffffffffe;
    }
    if (lVar3 == 0) {
      ppuVar6 = (undefined **)0x8000000000000002;
    }
    else if (lVar3 == 1) {
      ppuVar6 = (undefined **)0x8000000000000003;
    }
    else {
      unaff_EDI = (int)param_2[3];
      if (unaff_EDI == 2) {
        uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)((longlong)param_2 + 0x24));
        puStack_48 = *(undefined **)((longlong)param_2 + 0x1c);
      }
      unaff_BL = (undefined1)param_2[5];
      uVar5 = 2;
      if ((longlong)uVar2 < 0) {
        uVar5 = uVar2 ^ 0x8000000000000000;
      }
      ppuVar6 = (undefined **)0x8000000000000000;
      if (uVar5 != 0) {
        if (uVar5 == 1) {
          ppuVar6 = (undefined **)0x8000000000000001;
        }
        else {
          pdb_140f60be0(&ppuStack_60);
          ppuVar6 = ppuStack_60;
        }
      }
      uStack_30 = (undefined4)uStack_40;
      puStack_38 = puStack_48;
      puStack_48 = pcStack_58;
      uStack_40 = uStack_50;
    }
    if (((uVar4 < 0x8000000000000002) && (-0x7fffffffffffffff < (longlong)uVar4)) && (uVar4 != 0)) {
      pub_1406abac0((byte *)param_1[1],uVar4,1);
    }
    *param_1 = (ulonglong)ppuVar6;
    param_1[1] = (ulonglong)puStack_48;
    param_1[2] = uStack_40;
    *(int *)(param_1 + 3) = unaff_EDI;
    *(undefined **)((longlong)param_1 + 0x1c) = puStack_38;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_30;
    *(undefined1 *)(param_1 + 5) = unaff_BL;
  }
  else {
    if (lVar3 != 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14358a3f5,0x28,&UNK_14358a420);
    }
    uVar2 = *param_2;
    lVar3 = 2;
    if (0x8000000000000001 < uVar2) {
      lVar3 = uVar2 + 0x7ffffffffffffffe;
    }
    if (lVar3 != 2) {
      if (lVar3 != 0) {
        puStack_48 = &UNK_14358a283;
        uStack_40 = 0x29;
        ppuStack_60 = &puStack_48;
        pcStack_58 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14358a361,&ppuStack_60,&UNK_14358a438);
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14358a313,0x9d,&UNK_14358a438);
    }
    if ((char)param_1[5] == '\0') {
      *(char *)(param_1 + 5) = (char)param_2[5];
      iVar1 = (int)param_1[3];
    }
    else {
      iVar1 = (int)param_1[3];
    }
    if (iVar1 == 0) {
      if ((int)param_2[3] == 2) {
        pcStack_58 = (code *)CONCAT44(pcStack_58._4_4_,*(undefined4 *)((longlong)param_2 + 0x24));
        ppuStack_60 = *(undefined ***)((longlong)param_2 + 0x1c);
      }
      *(int *)(param_1 + 3) = (int)param_2[3];
      *(undefined ***)((longlong)param_1 + 0x1c) = ppuStack_60;
      *(undefined4 *)((longlong)param_1 + 0x24) = pcStack_58._0_4_;
    }
    if (SBORROW8(0,uVar4)) {
      uVar4 = 2;
      if ((longlong)uVar2 < 0) {
        uVar4 = uVar2 ^ 0x8000000000000000;
      }
      if (uVar4 == 0) {
        ppuStack_60 = (undefined **)0x8000000000000000;
      }
      else if (uVar4 == 1) {
        ppuStack_60 = (undefined **)0x8000000000000001;
      }
      else {
        pdb_140f60be0(&ppuStack_60);
      }
      param_1[2] = uStack_50;
      *param_1 = (ulonglong)ppuStack_60;
      param_1[1] = (ulonglong)pcStack_58;
    }
  }
  return;
}

