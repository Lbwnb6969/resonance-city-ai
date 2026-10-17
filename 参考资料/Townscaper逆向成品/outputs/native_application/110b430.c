// RVA 0x110b430 | FuryStudios.FurySDK.Internal.AsyncRequest$$MoveNext
// PDB: AsyncRequest_MoveNext_m4151FEF04945D82CC510A58F840F0BDAA7D783F3
// Body: [[1110b430, 1110b567] [1110b5be, 1110b5d0]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1066d8e0 Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B
// 10a6be20 Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B
// 1110b350 AsyncRequest_Fail_m1EFE7CEE7A95111F75012791117896366D729469

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
AsyncRequest_MoveNext_m4151FEF04945D82CC510A58F840F0BDAA7D783F3
          (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *param_1,MethodInfo *param_2)

{
  int iVar1;
  Exception_t *pEVar2;
  float fVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__AsyncRequest_MoveNext_m4151FEF04945D82CC510A58F840F0BDAA7D783F3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_11523e71 == '\0') {
    ExceptionList = &local_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       AsyncRequestTimedOutException_t7ED30167764125239135470BCEB0323931EE4558_il2cpp_TypeInfo_var
              );
    DAT_11523e71 = '\x01';
  }
  iVar1 = param_1->___U3CStateU3Ek__BackingField_0;
  if (iVar1 != 0) {
    if ((iVar1 != 2) && (iVar1 != 4)) {
      if ((___real_00000000 < param_1->___U3CTimeoutU3Ek__BackingField_4) &&
         (fVar3 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B
                            ((MethodInfo *)0x0), fVar3 = fVar3 - param_1->___timeStarted_5,
         param_1->___U3CTimeoutU3Ek__BackingField_4 <= fVar3 &&
         fVar3 != param_1->___U3CTimeoutU3Ek__BackingField_4)) {
        pEVar2 = (Exception_t *)
                 il2cpp_codegen_object_new
                           (
                           AsyncRequestTimedOutException_t7ED30167764125239135470BCEB0323931EE4558_il2cpp_TypeInfo_var
                           );
        if (DAT_11523e7f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata((uint *)&Exception_t_il2cpp_TypeInfo_var);
          DAT_11523e7f = '\x01';
        }
        if ((Exception_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
           (Exception_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
          il2cpp_runtime_class_init(Exception_t_il2cpp_TypeInfo_var);
        }
        Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(pEVar2,(MethodInfo *)0x0);
        AsyncRequest_Fail_m1EFE7CEE7A95111F75012791117896366D729469
                  (param_1,pEVar2,(MethodInfo *)0x0);
        ExceptionList = local_10;
        return false;
      }
      local_8 = 0;
      (**(code **)(param_1->_padding_ + 0x134))(param_1,*(undefined4 *)(param_1->_padding_ + 0x138))
      ;
      if (param_1->___U3CStateU3Ek__BackingField_0 != 2) {
        ExceptionList = local_10;
        return param_1->___U3CStateU3Ek__BackingField_0 != 4;
      }
    }
    ExceptionList = local_10;
    return false;
  }
  ExceptionList = local_10;
  return true;
}
