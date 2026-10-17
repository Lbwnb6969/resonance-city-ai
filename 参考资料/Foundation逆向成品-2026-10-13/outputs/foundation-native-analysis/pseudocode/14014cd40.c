
longlong *
FUN_14014cd40(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  longlong alStack_18 [2];
  
  FUN_14014c710(param_1,alStack_18);
  if ((alStack_18[0] != 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x30) + 8 + alStack_18[0]) == param_5)) {
    *param_2 = alStack_18[0];
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

