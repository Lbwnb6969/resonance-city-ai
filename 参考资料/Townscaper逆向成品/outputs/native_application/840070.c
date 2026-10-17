// RVA 0x840070 | Placemaker.Ui.GamepadStepper$$.ctor
// PDB: GamepadStepper__ctor_mB29B902BE05A1ECE0DBB46930CF68FE00897DD46
// Body: [[10840070, 108400a0]]
// Direct callees:
// 10672d70 Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
GamepadStepper__ctor_mB29B902BE05A1ECE0DBB46930CF68FE00897DD46
          (GamepadStepper_tB783B5F0133E8F1214002089AA55086072FBC7A6 *param_1,MethodInfo *param_2)

{
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar1;
  float local_c;
  float local_8;

  VVar1 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
  (param_1->___stepper_7).___x_0 = local_c;
  local_8 = VVar1.___y_1;
  (param_1->___stepper_7).___y_1 = local_8;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
