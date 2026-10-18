
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1402730b0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  FUN_140159460(*(undefined8 *)(_DAT_143fd77d0 + 0x120),0x143fd5f78,1,&UNK_142c97070,0x1bd,
                "GamCLuaManager::s_modRegister",
                "The function \'register\' is deprecated, use \'registerAsset\' instead");
  FUN_1426cb370(param_1,2);
  FUN_1426c9c00(param_1,0xfffffffe,7);
  FUN_1426c9c00(param_1,0xffffffff,5);
  puVar2 = (undefined8 *)FUN_1426cb680(param_1,0xfffffffe);
  uVar1 = FUN_1401b4d40(*puVar2,param_1);
  FUN_1426cb370(param_1,0xfffffffd);
  return uVar1;
}

