
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140270430(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_28 [32];
  
  plVar1 = *(longlong **)(_DAT_143fd5f70 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    UNLOCK();
  }
  if (*(char *)((longlong)plVar1 + 0xda) == '\0') {
    LOCK();
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    UNLOCK();
    *(undefined2 *)((longlong)plVar1 + 0xd9) = 0x101;
    plVar3 = (longlong *)FUN_1426ca830(param_1,8);
    *plVar3 = (longlong)plVar1;
    FUN_1426ca120(param_1,0,1);
    FUN_1426caa60(param_1,FUN_1402728d0,0);
    FUN_1426cb110(param_1,0xfffffffe,"__index");
    FUN_1426caa60(param_1,FUN_140272850,0);
    FUN_1426cb110(param_1,0xfffffffe,&UNK_142c975d8);
    FUN_1426cb1c0(param_1,0xfffffffe);
  }
  else {
    uVar4 = func_0x0001401a36f0(plVar1);
    uVar5 = FUN_14017ade0(plVar1 + 0x12,auStack_28);
    uVar5 = FUN_14014ef90(uVar5);
    FUN_140159350(uVar4,0x143fd5f78,2,&UNK_142c97070,0x18b,"GamCLuaManager::s_createMod",
                  &UNK_142c975e0,uVar5);
    FUN_14012aab0(auStack_28);
    func_0x0001426cac50(param_1);
    *(undefined1 *)((longlong)plVar1 + 0xd9) = 0;
  }
  LOCK();
  plVar3 = plVar1 + 2;
  lVar2 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
  }
  return 1;
}

