// RVA 0x83fb10 | Placemaker.Ui.GamepadStepper$$StopMoving
// PDB: GamepadStepper_StopMoving_mD2F44713620027386FCD98B6658A7B9F67E2210E
// Body: [[1083fb10, 1083fb48]]
// Direct callees:
// 10672d70 Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828

void __cdecl
GamepadStepper_StopMoving_mD2F44713620027386FCD98B6658A7B9F67E2210E
          (GamepadStepper_tB783B5F0133E8F1214002089AA55086072FBC7A6 *param_1,MethodInfo *param_2)

{
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar1;

  param_1->___steps_6 = 0;
  VVar1 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
  param_1->___stepper_7 = VVar1;
  param_1->___stepLeft_8 = false;
  param_1->___stepRight_9 = false;
  param_1->___stepUp_10 = false;
  param_1->___stepDown_11 = false;
  return;
}
