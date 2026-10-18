
undefined8 * FUN_14015a8e0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined2 uStack_58;
  undefined1 auStack_48 [64];
  
  uVar2 = 0;
  uStack_70 = 0x67452301;
  uStack_6c = 0xefcdab89;
  uStack_68 = 0x98badcfe;
  uStack_64 = 0x10325476;
  uStack_60 = 0;
  uStack_58 = 0;
  do {
    lVar1 = fread(auStack_48,1,0x40,*param_2,uVar2);
    param_2[4] = param_2[4] + lVar1;
    FUN_1401404e0(&uStack_70,auStack_48,lVar1);
  } while (uStack_58._1_1_ == '\0');
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  FUN_14014ec70(&uStack_70,param_1);
  return param_1;
}

