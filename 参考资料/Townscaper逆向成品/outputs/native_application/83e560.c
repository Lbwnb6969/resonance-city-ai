// RVA 0x83e560 | Placemaker.Ui.GamepadScreenCursor$$Pan
// PDB: GamepadScreenCursor_Pan_mF2C5DE331F9947924DE87DFA26163E03D14942D4
// Body: [[1083e560, 1083e6cf]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e5c10 UiMaster_GetSmoothAxis2D_m34BBE48972B315AF58B4E3D1101F8D1FB11F0C18
// 106677e0 Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE
// 10667890 Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C
// 1066d9d0 Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84
// 10672b80 Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85
// 10672d70 Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
// 1074b8a0 OrbitalCamera_PanCamera_m3404926FA753D2FB06235BAA04A5047C9007E6EE

void __cdecl
GamepadScreenCursor_Pan_mF2C5DE331F9947924DE87DFA26163E03D14942D4
          (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *param_1,
          MethodInfo *param_2)

{
  OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *pOVar1;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar2;
  int iVar3;
  int iVar4;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar5;
  float fVar6;
  float fVar7;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_1c;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_14;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_c;

  if (DAT_1151f417 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral511CAE850456FB6542A9949DD069A871ADC57F63);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralE9C05E918C2FE15195E4BB1248BDB26963E64DA4);
    DAT_1151f417 = '\x01';
  }
  if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    local_14 = UiMaster_GetSmoothAxis2D_m34BBE48972B315AF58B4E3D1101F8D1FB11F0C18
                         (param_1->___master_4,
                          _stringLiteral511CAE850456FB6542A9949DD069A871ADC57F63,
                          _stringLiteralE9C05E918C2FE15195E4BB1248BDB26963E64DA4,(MethodInfo *)0x0);
    VVar5 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
    local_c.___y_1 = VVar5.___y_1;
    if ((local_14.___y_1 - local_c.___y_1) * (local_14.___y_1 - local_c.___y_1) +
        (local_14.___x_0 - local_c.___x_0) * (local_14.___x_0 - local_c.___x_0) < __real_2edbe6fe) {
      return;
    }
    local_c = VVar5;
    iVar3 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
    iVar4 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
    local_1c.___x_0 = (float)iVar3;
    local_1c.___y_1 = (float)iVar4;
    fVar6 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85
                      (&local_1c,(MethodInfo *)0x0);
    local_c.___y_1 = fVar6;
    fVar7 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84((MethodInfo *)0x0);
    fVar6 = local_c.___y_1 * __real_3ecccccd;
    if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
      pOVar1 = param_1->___master_4->___orbitalCamera_15;
      local_c.___y_1 = local_1c.___y_1 * __real_3f000000;
      local_c.___x_0 = local_1c.___x_0 * __real_3f000000;
      local_14.___x_0 =
           (float)((uint)(local_14.___x_0 * fVar7 * fVar6) ^ __xmm_80000000800000008000000080000000)
      ;
      local_14.___y_1 =
           (float)((uint)(local_14.___y_1 * fVar7 * fVar6) ^ __xmm_80000000800000008000000080000000)
      ;
      if (pOVar1 != (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0) {
        VVar5.___y_1 = local_1c.___y_1 * __real_3f000000;
        VVar5.___x_0 = local_1c.___x_0 * __real_3f000000;
        VVar2.___y_1 = local_14.___y_1;
        VVar2.___x_0 = local_14.___x_0;
        OrbitalCamera_PanCamera_m3404926FA753D2FB06235BAA04A5047C9007E6EE
                  (pOVar1,VVar5,VVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
