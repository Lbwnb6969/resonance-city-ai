
bool FUN_140263620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1426d0c50(param_2,param_4,param_5,param_6);
  if (iVar1 != 0) {
    uVar2 = FUN_1426cb510(param_2,0xffffffff,0);
    FUN_140159460(param_3,0x143fd5f78,2,&UNK_142c97070,0x5dc,"GamCLuaManager::loadLuaBuffer",
                  "Failed to load lua script %s: %s",param_6,uVar2);
    FUN_1426cb370(param_2,0xfffffffe);
  }
  return iVar1 == 0;
}

