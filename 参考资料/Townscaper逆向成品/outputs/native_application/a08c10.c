// RVA 0xa08c10 | Placemaker.Ui.ShadingButtons$$OnUpdate
// PDB: ShadingButtons_OnUpdate_mA969909E030ABF36D8FA6EF3C3879090730444EB
// Body: [[10a08c10, 10a08e46]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 106685e0 Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
// 10674850 Vector4_Lerp_m3D0C60E9155ADC907763450A987474243F550EDD
// 10674fb0 Vector4_get_sqrMagnitude_m1450744F6AAD57773CE0208B6F51DDEEE9A48E07
// 108356d0 Extensions_SetSingleLayer_mDC98D826B03E3AD5D27D619F3E26112FFFD69B04
// 10b17b90 Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ShadingButtons_OnUpdate_mA969909E030ABF36D8FA6EF3C3879090730444EB
          (ShadingButtons_t2ED81F76F9E0A03D3A7A629AC27B30AF05EE4DB0 *param_1,MethodInfo *param_2)

{
  OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *pOVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar9;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar10;
  Delegate_t *pDVar11;
  Delegate_t *pDVar12;
  float fVar13;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_24;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_14;

  if (DAT_115201df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ShadingButtons_OnUpdate_mA969909E030ABF36D8FA6EF3C3879090730444EB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral07A75D8C871D61B87874F21F826D430590E69E3C);
    DAT_115201df = '\x01';
  }
  pVVar9 = Vector4_Lerp_m3D0C60E9155ADC907763450A987474243F550EDD
                     ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)&local_14,
                      param_1->___shadingTarget_15,param_1->___shadingCurrent_14,
                      *(float *)((int)WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var
                                      ->static_fields + 0x10),(MethodInfo *)0x0);
  fVar13 = (param_1->___shadingTarget_15).___x_1;
  fVar2 = (param_1->___shadingTarget_15).___y_2;
  fVar3 = (param_1->___shadingTarget_15).___z_3;
  fVar4 = (param_1->___shadingTarget_15).___w_4;
  fVar5 = pVVar9->___x_1;
  fVar6 = pVVar9->___y_2;
  fVar7 = pVVar9->___z_3;
  fVar8 = pVVar9->___w_4;
  local_14.___m_Left_0 = 0.0;
  local_14.___m_Right_1 = 0.0;
  local_14.___m_Top_2 = 0.0;
  local_14.___m_Bottom_3 = 0.0;
  (param_1->___shadingCurrent_14).___x_1 = fVar5;
  (param_1->___shadingCurrent_14).___y_2 = fVar6;
  (param_1->___shadingCurrent_14).___z_3 = fVar7;
  (param_1->___shadingCurrent_14).___w_4 = fVar8;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_14,fVar5 - fVar13,fVar6 - fVar2,fVar7 - fVar3,fVar8 - fVar4,(MethodInfo *)0x0);
  local_24.___x_1 = local_14.___m_Left_0;
  local_24.___y_2 = local_14.___m_Right_1;
  local_24.___z_3 = local_14.___m_Top_2;
  local_24.___w_4 = local_14.___m_Bottom_3;
  fVar13 = Vector4_get_sqrMagnitude_m1450744F6AAD57773CE0208B6F51DDEEE9A48E07
                     (&local_24,(MethodInfo *)0x0);
  if (fVar13 < __real_3a83126f) {
    fVar13 = (param_1->___shadingTarget_15).___y_2;
    fVar2 = (param_1->___shadingTarget_15).___z_3;
    fVar3 = (param_1->___shadingTarget_15).___w_4;
    (param_1->___shadingCurrent_14).___x_1 = (param_1->___shadingTarget_15).___x_1;
    (param_1->___shadingCurrent_14).___y_2 = fVar13;
    (param_1->___shadingCurrent_14).___z_3 = fVar2;
    (param_1->___shadingCurrent_14).___w_4 = fVar3;
    if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    }
    pDVar12 = *(Delegate_t **)
               ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                     static_fields + 8);
    pOVar10 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
              il2cpp_codegen_object_new
                        (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar10,(Il2CppObject *)param_1,
               (int)
               ShadingButtons_OnUpdate_mA969909E030ABF36D8FA6EF3C3879090730444EB_RuntimeMethod_var,
               (MethodInfo *)0x0);
    pDVar11 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4
                        (pDVar12,(Delegate_t *)pOVar10,(MethodInfo *)0x0);
    pDVar12 = (Delegate_t *)0x0;
    if (pDVar11 != (Delegate_t *)0x0) {
      if ((Il2CppClass *)pDVar11->_padding_ ==
          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
        pDVar12 = pDVar11;
      }
      if (pDVar12 == (Delegate_t *)0x0) {
                    /* WARNING: Subroutine does not return */
        RaiseInvalidCastException
                  ((Il2CppObject *)pDVar11,
                   Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
      }
    }
    *(Delegate_t **)
     ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->static_fields + 8
     ) = pDVar12;
    param_1->___isUpdating_16 = false;
    if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
       (pOVar1 = param_1->___master_4->___orbitalCamera_15,
       pOVar1 == (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    Extensions_SetSingleLayer_mDC98D826B03E3AD5D27D619F3E26112FFFD69B04
              (pOVar1->___cam_5,_stringLiteral07A75D8C871D61B87874F21F826D430590E69E3C,
               ___real_00000000 < (param_1->___shadingCurrent_14).___z_3,(MethodInfo *)0x0);
  }
  if ((ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var);
  }
  Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
            (*(int *)((int)ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var->
                           static_fields + 0x10),param_1->___shadingCurrent_14,(MethodInfo *)0x0);
  return;
}
