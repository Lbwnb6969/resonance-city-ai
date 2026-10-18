
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140128170(longlong *param_1,longlong *param_2,char param_3)

{
  int **ppiVar1;
  longlong *plVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong *plStackX_8;
  undefined8 *puStackX_10;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 uVar17;
  undefined8 in_stack_ffffffffffffff20;
  undefined4 uVar18;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar19;
  undefined8 in_stack_ffffffffffffff30;
  undefined4 uVar20;
  int *piStack_b8;
  undefined4 uStack_b0;
  longlong lStack_a8;
  int *piStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  int *apiStack_88 [2];
  undefined8 uStack_78;
  int *apiStack_70 [3];
  longlong alStack_58 [3];
  ulonglong uStack_40;
  
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
  puVar16 = (undefined8 *)0x0;
  *param_1 = 0;
  plVar13 = param_1 + 1;
  *plVar13 = 0;
  *(int *)(param_1 + 2) = (int)param_2[1];
  param_1[3] = 0;
  lVar9 = param_2[2];
  param_1[3] = lVar9;
  if (((lVar9 == 0) && ((int)param_2[1] != 0)) && (plVar13 != param_2)) {
    piVar4 = (int *)*param_2;
    *plVar13 = (longlong)piVar4;
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  ppiVar1 = (int **)(param_1 + 6);
  *ppiVar1 = (int *)0x0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  plStackX_8 = param_1;
  FUN_140152070(_DAT_143fcd440,&piStack_a0,param_1);
  puVar8 = (undefined8 *)func_0x000142a8c93e(0x38);
  puVar10 = puVar16;
  puStackX_10 = puVar8;
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = 0;
    *(undefined4 *)(puVar8 + 1) = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    *(undefined1 *)(puVar8 + 5) = 0;
    puVar8[6] = 0;
    FUN_140160090(puVar8,piStack_a0,CONCAT44(uStack_94,uStack_98),0);
    puVar10 = puVar8;
  }
  puVar8 = (undefined8 *)*param_1;
  if (puVar8 != puVar10) {
    if (puVar8 != (undefined8 *)0x0) {
      FUN_14012c350(puVar8);
      func_0x000142a8cbe0(puVar8,0x38);
    }
    *param_1 = (longlong)puVar10;
    puVar8 = puVar10;
  }
  lVar9 = fread(&puStackX_10,4,1,*puVar8);
  puVar8[4] = puVar8[4] + lVar9;
  *(int *)(param_1 + 4) = (int)puStackX_10;
  if (*(longlong *)*param_1 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
    puVar10 = _DAT_143fcd428;
    if (((_DAT_143fcd428 == (undefined8 *)0x0) && (DAT_143fcd3f6 == '\0')) &&
       (puStackX_10 = (undefined8 *)func_0x000142a8c93e(0x150), puVar10 = puVar16,
       puStackX_10 != (undefined8 *)0x0)) {
      puVar10 = (undefined8 *)FUN_140127e80(puStackX_10);
    }
    _DAT_143fcd428 = puVar10;
    puVar16 = _DAT_143fcd428;
    uVar11 = FUN_14014ef90(plVar13);
    uVar14 = CONCAT44(uVar17,0x19);
    FUN_140159350(puVar16,0x143fcd548,2,&UNK_142c786a0,uVar14,"ComCPackage::ComCPackage",
                  &UNK_142c78630,uVar11);
    uVar17 = (undefined4)((ulonglong)uVar14 >> 0x20);
  }
  else if (1 < (int)puStackX_10 - 1U) {
    *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
    puVar10 = _DAT_143fcd428;
    if (((_DAT_143fcd428 == (undefined8 *)0x0) && (DAT_143fcd3f6 == '\0')) &&
       (puStackX_10 = (undefined8 *)func_0x000142a8c93e(0x150), puVar10 = puVar16,
       puStackX_10 != (undefined8 *)0x0)) {
      puVar10 = (undefined8 *)FUN_140127e80(puStackX_10);
    }
    _DAT_143fcd428 = puVar10;
    puVar16 = _DAT_143fcd428;
    uVar11 = FUN_14014ef90(plVar13);
    uVar14 = CONCAT44(uVar17,0x1e);
    FUN_140159350(puVar16,0x143fcd548,2,&UNK_142c786a0,uVar14,"ComCPackage::ComCPackage",
                  &UNK_142c78730,CONCAT44(uVar18,1),CONCAT44(uVar19,2),
                  CONCAT44(uVar20,(int)param_1[4]),uVar11);
    uVar17 = (undefined4)((ulonglong)uVar14 >> 0x20);
  }
  if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
    puVar16 = (undefined8 *)*param_1;
    FUN_1401235f0(&piStack_b8,0x20);
    uVar11 = FUN_14014ee10(&piStack_b8);
    uVar12 = fread(uVar11,1,0x20,*puVar16);
    plVar2 = puVar16 + 4;
    *plVar2 = *plVar2 + uVar12;
    FUN_14016c020(&piStack_b8,uVar12 & 0xffffffff,0x20);
    *(undefined4 *)(param_1 + 7) = uStack_b0;
    if (ppiVar1 != &piStack_b8) {
      piVar4 = *ppiVar1;
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar3 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          func_0x000142a8c94a();
        }
      }
      *ppiVar1 = piStack_b8;
      piStack_b8 = (int *)0x0;
    }
    param_1[8] = lStack_a8;
    uStack_b0 = 0;
    lStack_a8 = 0;
    if (piStack_b8 != (int *)0x0) {
      LOCK();
      iVar3 = *piStack_b8;
      *piStack_b8 = *piStack_b8 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        func_0x000142a8c94a();
      }
    }
    if (param_3 != '\0') {
      puVar16 = (undefined8 *)*param_1;
      lVar9 = _ftelli64(*puVar16);
      lVar9 = lVar9 - puVar16[3];
      piStack_a0 = (int *)0x0;
      uStack_98 = 0;
      uStack_90 = 0;
      cVar6 = FUN_1401812b0(param_1,&piStack_a0);
      if (cVar6 == '\0') {
        if ((int)param_1[4] == 1) {
          lVar9 = lVar9 + -0x20;
        }
        else {
          *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
          puStackX_10 = (undefined8 *)FUN_140110f80();
          uVar11 = FUN_1401493d0(&piStack_a0,alStack_58);
          FUN_140123a80(apiStack_70,uVar11);
          if (7 < uStack_40) {
            if ((0xfff < uStack_40 * 2 + 2) &&
               (0x1f < (alStack_58[0] - *(longlong *)(alStack_58[0] + -8)) - 8U)) {
              _invoke_watson(0,0,0,0,0);
              pcVar5 = (code *)swi(3);
              plVar13 = (longlong *)(*pcVar5)();
              return plVar13;
            }
            func_0x000142a8cbe0();
          }
          uVar11 = FUN_14014ef90(apiStack_70);
          uVar14 = FUN_14017ade0(ppiVar1,apiStack_88);
          uVar14 = FUN_14014ef90(uVar14);
          uVar15 = FUN_14014ef90(plVar13);
          FUN_140159350(puStackX_10,0x143fcd548,2,&UNK_142c786a0,CONCAT44(uVar17,0x36),
                        "ComCPackage::ComCPackage",&UNK_142c787d0,uVar15,uVar14,uVar11);
          if (apiStack_88[0] != (int *)0x0) {
            LOCK();
            iVar3 = *apiStack_88[0];
            *apiStack_88[0] = *apiStack_88[0] + -1;
            UNLOCK();
            if (iVar3 == 1) {
              func_0x000142a8c94a();
            }
          }
          apiStack_88[0] = (int *)0x0;
          uStack_78 = 0;
          if (apiStack_70[0] != (int *)0x0) {
            LOCK();
            iVar3 = *apiStack_70[0];
            *apiStack_70[0] = *apiStack_70[0] + -1;
            UNLOCK();
            if (iVar3 == 1) {
              func_0x000142a8c94a();
            }
          }
        }
      }
      else {
        uVar7 = *(uint *)(param_1 + 4);
        if (uVar7 < 2) {
          uVar7 = 2;
        }
        *(uint *)(param_1 + 4) = uVar7;
      }
      puVar16 = (undefined8 *)*param_1;
      puVar16[4] = lVar9;
      _fseeki64(*puVar16,puVar16[3] + lVar9,0);
      if (piStack_a0 != (int *)0x0) {
        LOCK();
        iVar3 = *piStack_a0;
        *piStack_a0 = *piStack_a0 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          func_0x000142a8c94a();
        }
      }
    }
    if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
      puVar16 = (undefined8 *)*param_1;
      lVar9 = fread(&plStackX_8,4,1,*puVar16);
      plVar13 = puVar16 + 4;
      *plVar13 = *plVar13 + lVar9;
      *(undefined4 *)((longlong)param_1 + 0x24) = plStackX_8._0_4_;
      puVar16 = (undefined8 *)*param_1;
      lVar9 = fread(&plStackX_8,4,1,*puVar16);
      plVar13 = puVar16 + 4;
      *plVar13 = *plVar13 + lVar9;
      *(undefined4 *)(param_1 + 5) = plStackX_8._0_4_;
    }
  }
  return param_1;
}

