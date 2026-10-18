
undefined8 FUN_14014ec70(undefined1 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int *apiStack_28 [4];
  
  piVar2 = (int *)*param_2;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x000142a8c94a();
    }
  }
  *param_2 = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  uVar3 = FUN_14014e0f0(apiStack_28,"%2.2x%2.2x%2.2x%2.2x",*param_1,param_1[1],param_1[2],param_1[3]
                       );
  FUN_140131000(param_2,uVar3);
  if (apiStack_28[0] != (int *)0x0) {
    LOCK();
    iVar1 = *apiStack_28[0];
    *apiStack_28[0] = *apiStack_28[0] + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x000142a8c94a();
    }
  }
  uVar3 = FUN_14014e0f0(apiStack_28,"%2.2x%2.2x%2.2x%2.2x",param_1[4],param_1[5],param_1[6],
                        param_1[7]);
  FUN_140131000(param_2,uVar3);
  if (apiStack_28[0] != (int *)0x0) {
    LOCK();
    iVar1 = *apiStack_28[0];
    *apiStack_28[0] = *apiStack_28[0] + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x000142a8c94a();
    }
  }
  uVar3 = FUN_14014e0f0(apiStack_28,"%2.2x%2.2x%2.2x%2.2x",param_1[8],param_1[9],param_1[10],
                        param_1[0xb]);
  FUN_140131000(param_2,uVar3);
  if (apiStack_28[0] != (int *)0x0) {
    LOCK();
    iVar1 = *apiStack_28[0];
    *apiStack_28[0] = *apiStack_28[0] + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x000142a8c94a();
    }
  }
  uVar3 = FUN_14014e0f0(apiStack_28,"%2.2x%2.2x%2.2x%2.2x",param_1[0xc],param_1[0xd],param_1[0xe],
                        param_1[0xf]);
  FUN_140131000(param_2,uVar3);
  if (apiStack_28[0] != (int *)0x0) {
    LOCK();
    iVar1 = *apiStack_28[0];
    *apiStack_28[0] = *apiStack_28[0] + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x000142a8c94a();
    }
  }
  return 1;
}

