
void FUN_1401c3860(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 in_stack_fffffffffffffed8;
  undefined4 uVar6;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [56];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [96];
  
  uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  if (((*(longlong *)(param_1 + 0x90) != 0) && (*(longlong *)(param_1 + 0xa0) != 0)) &&
     ((*(byte *)(param_1 + 0xa8) & 2) != 0)) {
    uVar2 = FUN_140110f80();
    uVar3 = FUN_14014ef90(*(longlong *)(param_1 + 8) + 0x80);
    FUN_140159350(uVar2,0x143fd1080,0,&UNK_142c7f600,CONCAT44(uVar6,0x2e5),
                  "GamCFbxImportProcessor::uploadCacheToServer",&UNK_142c7fe70,uVar3);
    FUN_14014e0f0(auStack_d8,"fbx-%d-%d",1,*(undefined4 *)(param_1 + 0x20));
    lVar4 = func_0x0001402186c0();
    uVar2 = FUN_14017ae70(*(longlong *)(param_1 + 8) + 0x35,auStack_88);
    uVar2 = FUN_140130320(lVar4 + 0x318,auStack_108,uVar2);
    FUN_140130650(uVar2,auStack_f0,&UNK_142c7ef08);
    FUN_14012aab0(auStack_108);
    FUN_14012aab0(auStack_88);
    FUN_140149ab0(auStack_f0);
    FUN_140128c90(auStack_68,1);
    FUN_140177090(auStack_68);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x70))
                      (*(longlong **)(param_1 + 0x28),auStack_c0,0x143fcf100,
                       *(longlong *)(param_1 + 8) + 0x35);
    FUN_1401236c0(auStack_108,&UNK_142c7fc34);
    FUN_140162a50(auStack_68,auStack_108,uVar2);
    FUN_14012aab0(auStack_108);
    FUN_14012e030(auStack_c0);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x70))
                      (*(longlong **)(param_1 + 0x28),auStack_c0,0x143fcf118,
                       *(longlong *)(param_1 + 8) + 0x35);
    FUN_1401236c0(auStack_108,"data.xbin");
    FUN_140162a50(auStack_68,auStack_108,uVar2);
    FUN_14012aab0(auStack_108);
    FUN_14012e030(auStack_c0);
    if ((*(byte *)(param_1 + 0xa8) & 0x80) != 0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))
                        (*(longlong **)(param_1 + 0x28),0x143fcf148,
                         *(longlong *)(param_1 + 8) + 0x35);
      if (cVar1 != '\0') {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x70))
                          (*(longlong **)(param_1 + 0x28),auStack_c0,0x143fcf148,
                           *(longlong *)(param_1 + 8) + 0x35);
        FUN_1401236c0(auStack_108,&UNK_142c7fc4c);
        FUN_140162a50(auStack_68,auStack_108,uVar2);
        FUN_14012aab0(auStack_108);
        FUN_14012e030(auStack_c0);
      }
    }
    FUN_14014b730(auStack_68,auStack_f0);
    uVar2 = FUN_1401bae50();
    uVar3 = FUN_1401a2a00(param_1,*(char *)(*(longlong *)(param_1 + 0x98) + 0x62) !=
                                  *(char *)(*(longlong *)(param_1 + 0x10) + 0x5f));
    uVar5 = FUN_1401a29b0(param_1);
    FUN_1403d7e60(uVar2,uVar5,uVar3,auStack_d8,auStack_f0);
    FUN_140149ab0(auStack_f0);
    FUN_14012d270(auStack_68);
    FUN_14012aab0(auStack_f0);
    FUN_14012aab0(auStack_d8);
  }
  return;
}

