// RVA 0x83fad0 | Placemaker.Ui.GamepadStepper$$OnDisable
// PDB: GamepadStepper_OnDisable_m5241A40C8C3A703D4E578FC8582AAFE465024B66
// Body: [[1083fad0, 1083fb06]]
// Direct callees:
// 10672d70 Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828

void __cdecl
GamepadStepper_OnDisable_m5241A40C8C3A703D4E578FC8582AAFE465024B66
          (GamepadStepper_tB783B5F0133E8F1214002089AA55086072FBC7A6 *param_1,MethodInfo *param_2)

{
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar1;
  float local_c;
  float local_8;

  VVar1 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
  (param_1->___stepper_7).___x_0 = local_c;
  local_8 = VVar1.___y_1;
  (param_1->___stepper_7).___y_1 = local_8;
  param_1->___steps_6 = 0;
  param_1->___stepLeft_8 = false;
  param_1->___stepRight_9 = false;
  param_1->___stepUp_10 = false;
  param_1->___stepDown_11 = false;
  return;
}
