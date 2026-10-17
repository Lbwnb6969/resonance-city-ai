// RVA 0x871830 | Placemaker.Graphs.Action$$GetReverse
// PDB: Action_GetReverse_m2A97B6361217A8CE7CB8EB2DC4473B4B6D9D82C5
// Body: [[10871830, 10871866]]
// Direct callees:

Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 * __cdecl
Action_GetReverse_m2A97B6361217A8CE7CB8EB2DC4473B4B6D9D82C5
          (Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *__return_storage_ptr__,
          Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *param_1,MethodInfo *param_2)

{
  schar sVar1;
  int iVar2;
  int iVar3;
  uchar uVar4;
  schar sVar5;
  schar sVar6;
  undefined1 uVar7;

  iVar2 = (param_1->___hexPos_0).___y_1;
  uVar4 = param_1->___height_1;
  sVar5 = param_1->___inType_2;
  sVar6 = param_1->___outType_3;
  uVar7 = param_1->field_0xb;
  iVar3 = param_1->___actionId_4;
  sVar1 = param_1->___outType_3;
  (__return_storage_ptr__->___hexPos_0).___x_0 = (param_1->___hexPos_0).___x_0;
  (__return_storage_ptr__->___hexPos_0).___y_1 = iVar2;
  __return_storage_ptr__->___height_1 = uVar4;
  __return_storage_ptr__->___inType_2 = sVar5;
  __return_storage_ptr__->___outType_3 = sVar6;
  __return_storage_ptr__->field_0xb = uVar7;
  __return_storage_ptr__->___actionId_4 = iVar3;
  __return_storage_ptr__->___outType_3 = param_1->___inType_2;
  __return_storage_ptr__->___inType_2 = sVar1;
  return __return_storage_ptr__;
}
