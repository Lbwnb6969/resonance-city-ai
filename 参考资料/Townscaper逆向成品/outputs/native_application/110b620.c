// RVA 0x110b620 | FuryStudios.FurySDK.Internal.AsyncRequest$$Start
// PDB: AsyncRequest_Start_mCE4621F21063B7935EA90D20A8F3519E979D29D2
// Body: [[1110b620, 1110b690]]
// Direct callees:
// 1066d8e0 Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B

void __cdecl
AsyncRequest_Start_mCE4621F21063B7935EA90D20A8F3519E979D29D2
          (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *param_1,MethodInfo *param_2)

{
  float fVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__AsyncRequest_Start_mCE4621F21063B7935EA90D20A8F3519E979D29D2;
  local_10 = ExceptionList;
  if (param_1->___U3CStateU3Ek__BackingField_0 == 0) {
    ExceptionList = &local_10;
    param_1->___U3CStateU3Ek__BackingField_0 = 1;
    fVar1 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B
                      ((MethodInfo *)0x0);
    param_1->___timeStarted_5 = fVar1;
    local_8 = 0;
    (**(code **)(param_1->_padding_ + 300))(param_1,*(undefined4 *)(param_1->_padding_ + 0x130));
  }
  ExceptionList = local_10;
  return;
}
