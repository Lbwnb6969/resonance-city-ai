// Matched PDB: asset::inheritable::impl$1::inherit_from<enum2$<core::option::Option<asset::prefab::config::PrefabAudioConfig> > >
// VA 0x14270ca70, PDB extent 702 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   asset::inheritable::impl$1::inherit_from<enum2$<core::option::Option<asset::prefab::config::PrefabAudioConfig>
   > >
   Extent: 702 bytes. No whole-program auto-analysis. */

void pdb_14270ca70(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined1 unaff_BL;
  int unaff_ESI;
  undefined **ppuVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined4 uStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar3 = *param_1;
  lVar5 = uVar3 + 0x7ffffffffffffffb;
  ppuVar4 = (undefined **)0x8000000000000004;
  if (uVar3 < 0x8000000000000005) {
    lVar5 = 2;
  }
  if (lVar5 == 0) {
    uVar1 = *param_2;
    lVar5 = 2;
    if (0x8000000000000004 < uVar1) {
      lVar5 = uVar1 + 0x7ffffffffffffffb;
    }
    if (lVar5 == 0) {
      ppuVar4 = (undefined **)0x8000000000000005;
    }
    else if (lVar5 == 1) {
      ppuVar4 = (undefined **)0x8000000000000006;
    }
    else if (uVar1 != 0x8000000000000004) {
      lVar5 = 2;
      if (0x8000000000000001 < uVar1) {
        lVar5 = uVar1 + 0x7ffffffffffffffe;
      }
      if (lVar5 == 0) {
        ppuVar4 = (undefined **)0x8000000000000002;
      }
      else if (lVar5 == 1) {
        ppuVar4 = (undefined **)0x8000000000000003;
      }
      else {
        unaff_ESI = (int)param_2[3];
        if (unaff_ESI == 2) {
          uStack_80 = CONCAT44(uStack_80._4_4_,*(undefined4 *)((longlong)param_2 + 0x24));
          puStack_88 = *(undefined **)((longlong)param_2 + 0x1c);
        }
        unaff_BL = (undefined1)param_2[5];
        uVar6 = 2;
        if ((longlong)uVar1 < 0) {
          uVar6 = uVar1 ^ 0x8000000000000000;
        }
        ppuVar4 = (undefined **)0x8000000000000000;
        if (uVar6 != 0) {
          if (uVar6 == 1) {
            ppuVar4 = (undefined **)0x8000000000000001;
          }
          else {
            pdb_140f60be0(&ppuStack_68,param_2);
            ppuVar4 = ppuStack_68;
          }
        }
        uStack_70 = (undefined4)uStack_80;
        puStack_78 = puStack_88;
        uStack_38 = (undefined4)uStack_60;
        uStack_34 = uStack_60._4_4_;
        uStack_30 = uStack_58;
        uStack_2c = uStack_54;
      }
    }
    if (((uVar3 < 0x8000000000000004) && (-0x7ffffffffffffffd < (longlong)uVar3)) && (uVar3 != 0)) {
      func_0x0001406abac0(param_1[1],uVar3,1);
    }
    *param_1 = (ulonglong)ppuVar4;
    param_1[1] = CONCAT44(uStack_34,uStack_38);
    param_1[2] = CONCAT44(uStack_2c,uStack_30);
    *(int *)(param_1 + 3) = unaff_ESI;
    *(undefined **)((longlong)param_1 + 0x1c) = puStack_78;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_70;
    *(undefined1 *)(param_1 + 5) = unaff_BL;
    return;
  }
  if (lVar5 == 2) {
    uVar1 = *param_2;
    lVar5 = 2;
    if (0x8000000000000004 < uVar1) {
      lVar5 = uVar1 + 0x7ffffffffffffffb;
    }
    if (lVar5 == 2) {
      if ((uVar3 != 0x8000000000000004) && (uVar1 != 0x8000000000000004)) {
        pdb_14270d120(param_1,param_2);
        uVar3 = *param_1;
      }
      if (uVar3 == 0x8000000000000004) {
        return;
      }
      uStack_40 = 1;
      uStack_50 = 2;
      uStack_4c = _DAT_142e37950;
      uStack_44 = 0x3f800000;
      ppuStack_68 = (undefined **)0x8000000000000001;
      pdb_14270d120(param_1,&ppuStack_68);
      return;
    }
    if (lVar5 != 0) goto LAB_14270ccea;
    pdb_142dc83d0(&UNK_14358a313,0x9d,&UNK_14358a438);
  }
  pdb_142dc83b0(&UNK_14358a3f5,0x28,&UNK_14358a420);
LAB_14270ccea:
  puStack_88 = &UNK_14358a2d5;
  uStack_80 = 0x3e;
  ppuStack_68 = &puStack_88;
  uStack_60 = pdb_1402ed400;
  pdb_142dc83d0(&UNK_14358a361,&ppuStack_68,&UNK_14358a438);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

