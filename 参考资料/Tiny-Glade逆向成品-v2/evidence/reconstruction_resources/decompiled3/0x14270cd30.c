// Matched PDB: asset::inheritable::impl$1::inherit_from<asset::prefab::config::PrefabRenderConfig>
// VA 0x14270cd30, PDB extent 998 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: asset::inheritable::impl$1::inherit_from<asset::prefab::config::PrefabRenderConfig>
   Extent: 998 bytes. No whole-program auto-analysis. */

void pdb_14270cd30(ulonglong *param_1,ulonglong *param_2,undefined8 param_3,code *param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong *unaff_RBX;
  ulonglong *unaff_RSI;
  ulonglong unaff_RDI;
  undefined **ppuVar5;
  ulonglong unaff_R13;
  undefined *puVar6;
  ulonglong uVar7;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined **ppuStack_a8;
  ulonglong uStack_a0;
  ulonglong *puStack_98;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined **ppuStack_68;
  code *pcStack_60;
  ulonglong *puStack_58;
  undefined **ppuStack_50;
  ulonglong uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar2 = *param_1;
  lVar4 = uVar2 + 0x7ffffffffffffffe;
  ppuVar5 = (undefined **)0x8000000000000001;
  if (uVar2 < 0x8000000000000002) {
    lVar4 = 2;
  }
  if (lVar4 == 0) {
    uVar7 = *param_2;
    lVar4 = 2;
    if (0x8000000000000001 < uVar7) {
      lVar4 = uVar7 + 0x7ffffffffffffffe;
    }
    if (lVar4 == 0) {
      puVar6 = (undefined *)0x8000000000000002;
    }
    else if (lVar4 == 1) {
      puVar6 = (undefined *)0x8000000000000003;
    }
    else {
      uVar3 = 2;
      if ((longlong)uVar7 < 0) {
        uVar3 = uVar7 ^ 0x8000000000000000;
      }
      if (uVar3 == 0) {
        puStack_80 = (undefined *)0x8000000000000000;
      }
      else if (uVar3 == 1) {
        puStack_80 = (undefined *)0x8000000000000001;
      }
      else {
        pdb_140f60be0(&puStack_80);
        unaff_RBX = param_2;
      }
      uVar7 = param_2[6];
      lVar4 = uVar7 + 0x7fffffffffffffff;
      if (uVar7 < 0x8000000000000001) {
        lVar4 = 2;
      }
      ppuStack_50 = ppuVar5;
      if (lVar4 != 0) {
        if (lVar4 == 1) {
          ppuStack_50 = (undefined **)0x8000000000000002;
        }
        else {
          ppuStack_50 = (undefined **)0x8000000000000000;
          if (!SBORROW8(0,uVar7)) {
            pdb_140f60be0(&ppuStack_68,param_2 + 6);
            unaff_RBX = puStack_58;
            param_4 = pcStack_60;
            ppuStack_50 = ppuStack_68;
          }
        }
      }
      uVar7 = 2;
      if ((longlong)param_2[3] < 0) {
        uVar7 = param_2[3] ^ 0x8000000000000000;
      }
      ppuVar5 = (undefined **)0x8000000000000000;
      if (uVar7 != 0) {
        if (uVar7 == 1) {
          ppuVar5 = (undefined **)0x8000000000000001;
        }
        else {
          pdb_140f60be0(&ppuStack_68,param_2 + 3);
          ppuVar5 = ppuStack_68;
        }
      }
      ppuStack_68 = ppuVar5;
      unaff_R13 = (ulonglong)param_4;
      uStack_b8 = (undefined4)uStack_78;
      uStack_b4 = uStack_78._4_4_;
      uStack_b0 = uStack_70;
      uStack_ac = uStack_6c;
      ppuStack_a8 = ppuStack_68;
      uStack_a0 = (ulonglong)pcStack_60;
      puStack_98 = puStack_58;
      puVar6 = puStack_80;
      ppuVar5 = ppuStack_50;
    }
    if (uVar2 < 0x8000000000000002) {
      if ((-0x7fffffffffffffff < (longlong)uVar2) && (uVar2 != 0)) {
        func_0x0001406abac0(param_1[1],uVar2,1);
      }
      uVar2 = param_1[6];
      if ((-0x7ffffffffffffffe < (longlong)uVar2) && (uVar2 != 0)) {
        func_0x0001406abac0(param_1[7],uVar2,1);
      }
      uVar2 = param_1[3];
      if ((-0x7fffffffffffffff < (longlong)uVar2) && (uVar2 != 0)) {
        func_0x0001406abac0(param_1[4],uVar2,1);
      }
    }
    *param_1 = (ulonglong)puVar6;
    param_1[1] = CONCAT44(uStack_b4,uStack_b8);
    param_1[2] = CONCAT44(uStack_ac,uStack_b0);
    param_1[3] = (ulonglong)ppuStack_a8;
    param_1[4] = uStack_a0;
    param_1[5] = (ulonglong)puStack_98;
    param_1[6] = (ulonglong)ppuVar5;
    param_1[7] = unaff_R13;
    param_1[8] = (ulonglong)unaff_RBX;
    return;
  }
  if (lVar4 == 2) {
    lVar4 = 2;
    if (0x8000000000000001 < *param_2) {
      lVar4 = *param_2 + 0x7ffffffffffffffe;
    }
    if (lVar4 == 2) {
      if (SBORROW8(0,*param_1)) {
        uVar2 = 2;
        if ((longlong)*param_2 < 0) {
          uVar2 = *param_2 ^ 0x8000000000000000;
        }
        ppuVar5 = (undefined **)0x8000000000000000;
        if (uVar2 != 0) {
          if (uVar2 == 1) {
            ppuVar5 = (undefined **)0x8000000000000001;
          }
          else {
            puStack_80 = (undefined *)0x14270a8f5;
            pdb_140f60be0(&ppuStack_50);
            ppuVar5 = ppuStack_50;
          }
        }
        ppuStack_50 = ppuVar5;
        param_1[2] = (ulonglong)unaff_RBX;
        *param_1 = (ulonglong)ppuStack_50;
        param_1[1] = uStack_48;
        uVar2 = param_1[6];
      }
      else {
        uVar2 = param_1[6];
      }
      if (uVar2 == 0x8000000000000001) {
        uVar2 = param_2[6];
        lVar4 = 2;
        if (0x8000000000000000 < uVar2) {
          lVar4 = uVar2 + 0x7fffffffffffffff;
        }
        ppuVar5 = (undefined **)0x8000000000000001;
        if (lVar4 != 0) {
          if (lVar4 == 1) {
            ppuVar5 = (undefined **)0x8000000000000002;
          }
          else {
            ppuVar5 = (undefined **)0x8000000000000000;
            unaff_RDI = uStack_48;
            unaff_RSI = unaff_RBX;
            if (!SBORROW8(0,uVar2)) {
              puStack_80 = (undefined *)0x14270a957;
              pdb_140f60be0(&ppuStack_50,param_2 + 6);
              ppuVar5 = ppuStack_50;
              unaff_RDI = uStack_48;
            }
          }
        }
        param_1[6] = (ulonglong)ppuVar5;
        *(int *)(param_1 + 7) = (int)unaff_RDI;
        *(int *)((longlong)param_1 + 0x3c) = (int)(unaff_RDI >> 0x20);
        *(int *)(param_1 + 8) = (int)unaff_RSI;
        *(int *)((longlong)param_1 + 0x44) = (int)((ulonglong)unaff_RSI >> 0x20);
        uVar2 = param_1[3];
      }
      else {
        uVar2 = param_1[3];
      }
      if (SBORROW8(0,uVar2)) {
        uVar2 = 2;
        if ((longlong)param_2[3] < 0) {
          uVar2 = param_2[3] ^ 0x8000000000000000;
        }
        if (uVar2 == 0) {
          ppuStack_50 = (undefined **)0x8000000000000000;
        }
        else if (uVar2 == 1) {
          ppuStack_50 = (undefined **)0x8000000000000001;
        }
        else {
          puStack_80 = (undefined *)0x14270a9bc;
          pdb_140f60be0(&ppuStack_50);
        }
        param_1[5] = (ulonglong)unaff_RBX;
        param_1[3] = (ulonglong)ppuStack_50;
        param_1[4] = uStack_48;
      }
      return;
    }
    if (lVar4 != 0) goto LAB_14270d02c;
    pdb_142dc83d0(&UNK_14358a313,0x9d,&UNK_14358a438);
  }
  pdb_142dc83b0(&UNK_14358a3f5,0x28,&UNK_14358a420);
LAB_14270d02c:
  puStack_80 = &UNK_14358a2ac;
  uStack_78 = 0x29;
  ppuStack_68 = &puStack_80;
  pcStack_60 = pdb_1402ed400;
  pdb_142dc83d0(&UNK_14358a361,&ppuStack_68,&UNK_14358a438);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

