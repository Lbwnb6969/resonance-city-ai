// VA 0x14270ca70, PDB extent 702 bytes
// asset::inheritable::impl$1::inherit_from<enum2$<core::option::Option<asset::prefab::config::PrefabAudioConfig> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/inheritable.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   asset::inheritable::impl$1::inherit_from<enum2$<core::option::Option<asset::prefab::config::PrefabAudioConfig>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/inheritable.rs
   Extent: 702 */

void pdb_14270ca70(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong arg1;
  undefined1 unaff_BL;
  int unaff_ESI;
  undefined **ppuVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined4 uStack_70;
  undefined **ppuStack_68;
  code *pcStack_60;
  ulonglong uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined1 uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  
  arg1 = *param_1;
  lVar3 = arg1 + 0x7ffffffffffffffb;
  ppuVar2 = (undefined **)0x8000000000000004;
  if (arg1 < 0x8000000000000005) {
    lVar3 = 2;
  }
  if (lVar3 == 0) {
    uVar1 = *param_2;
    lVar3 = 2;
    if (0x8000000000000004 < uVar1) {
      lVar3 = uVar1 + 0x7ffffffffffffffb;
    }
    if (lVar3 == 0) {
      ppuVar2 = (undefined **)0x8000000000000005;
    }
    else if (lVar3 == 1) {
      ppuVar2 = (undefined **)0x8000000000000006;
    }
    else if (uVar1 != 0x8000000000000004) {
      lVar3 = 2;
      if (0x8000000000000001 < uVar1) {
        lVar3 = uVar1 + 0x7ffffffffffffffe;
      }
      if (lVar3 == 0) {
        ppuVar2 = (undefined **)0x8000000000000002;
      }
      else if (lVar3 == 1) {
        ppuVar2 = (undefined **)0x8000000000000003;
      }
      else {
        unaff_ESI = (int)param_2[3];
        if (unaff_ESI == 2) {
          uStack_80 = CONCAT44(uStack_80._4_4_,*(undefined4 *)((longlong)param_2 + 0x24));
          puStack_88 = *(undefined **)((longlong)param_2 + 0x1c);
        }
        unaff_BL = (undefined1)param_2[5];
        uVar4 = 2;
        if ((longlong)uVar1 < 0) {
          uVar4 = uVar1 ^ 0x8000000000000000;
        }
        ppuVar2 = (undefined **)0x8000000000000000;
        if (uVar4 != 0) {
          if (uVar4 == 1) {
            ppuVar2 = (undefined **)0x8000000000000001;
          }
          else {
            pdb_140f60be0(&ppuStack_68,param_2);
            ppuVar2 = ppuStack_68;
          }
        }
        uStack_70 = (undefined4)uStack_80;
        puStack_78 = puStack_88;
        uStack_38 = (ulonglong)pcStack_60;
        uStack_30 = uStack_58;
      }
    }
    if (((arg1 < 0x8000000000000004) && (-0x7ffffffffffffffd < (longlong)arg1)) && (arg1 != 0)) {
      pub_1406abac0((byte *)param_1[1],arg1,1);
    }
    *param_1 = (ulonglong)ppuVar2;
    param_1[1] = uStack_38;
    param_1[2] = uStack_30;
    *(int *)(param_1 + 3) = unaff_ESI;
    *(undefined **)((longlong)param_1 + 0x1c) = puStack_78;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_70;
    *(undefined1 *)(param_1 + 5) = unaff_BL;
  }
  else {
    if (lVar3 != 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14358a3f5,0x28,&UNK_14358a420);
    }
    uVar1 = *param_2;
    lVar3 = 2;
    if (0x8000000000000004 < uVar1) {
      lVar3 = uVar1 + 0x7ffffffffffffffb;
    }
    if (lVar3 != 2) {
      if (lVar3 != 0) {
        puStack_88 = &UNK_14358a2d5;
        uStack_80 = 0x3e;
        ppuStack_68 = &puStack_88;
        pcStack_60 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14358a361,&ppuStack_68,&UNK_14358a438);
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14358a313,0x9d,&UNK_14358a438);
    }
    if ((arg1 != 0x8000000000000004) && (uVar1 != 0x8000000000000004)) {
      pdb_14270d120(param_1,param_2);
      arg1 = *param_1;
    }
    if (arg1 != 0x8000000000000004) {
      uStack_40 = 1;
      uStack_50 = 2;
      uStack_4c = _DAT_142e37950;
      uStack_44 = 0x3f800000;
      ppuStack_68 = (undefined **)0x8000000000000001;
      pdb_14270d120(param_1,&ppuStack_68);
    }
  }
  return;
}

