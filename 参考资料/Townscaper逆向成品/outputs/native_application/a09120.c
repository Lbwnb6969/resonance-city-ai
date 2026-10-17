// RVA 0xa09120 | Placemaker.Ui.ShadingButtons$$SetShadingTarget
// PDB: ShadingButtons_SetShadingTarget_m9CA092D44C29598795ED6452DDC71520C9B6E8E7
// Body: [[10a09120, 10a09280]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10674d80 Vector4__ctor_m3F4862542E920800BF07C3F6175238F165DD4E7E
// 108356d0 Extensions_SetSingleLayer_mDC98D826B03E3AD5D27D619F3E26112FFFD69B04
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55

void __cdecl
ShadingButtons_SetShadingTarget_m9CA092D44C29598795ED6452DDC71520C9B6E8E7
          (ShadingButtons_t2ED81F76F9E0A03D3A7A629AC27B30AF05EE4DB0 *param_1,float param_2,
          float param_3,float param_4,MethodInfo *param_5)

{
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar1;
  OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *pOVar2;
  bool bVar3;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar4;
  Delegate_t *pDVar5;
  Delegate_t *pDVar6;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_14;

  if (DAT_115201e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ShadingButtons_OnUpdate_mA969909E030ABF36D8FA6EF3C3879090730444EB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral07A75D8C871D61B87874F21F826D430590E69E3C);
    DAT_115201e0 = '\x01';
  }
  local_14.___x_1 = 0.0;
  local_14.___y_2 = 0.0;
  local_14.___z_3 = 0.0;
  local_14.___w_4 = 0.0;
  Vector4__ctor_m3F4862542E920800BF07C3F6175238F165DD4E7E
            (&local_14,param_2,param_3,param_4,(MethodInfo *)0x0);
  pUVar1 = param_1->___master_4;
  (param_1->___shadingTarget_15).___x_1 = local_14.___x_1;
  (param_1->___shadingTarget_15).___y_2 = local_14.___y_2;
  (param_1->___shadingTarget_15).___z_3 = local_14.___z_3;
  (param_1->___shadingTarget_15).___w_4 = local_14.___w_4;
  if ((pUVar1 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (pOVar2 = pUVar1->___orbitalCamera_15,
     pOVar2 != (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0)) {
    if ((param_1->___shadingTarget_15).___z_3 <= 0.0) {
      bVar3 = 0.0 < (param_1->___shadingCurrent_14).___z_3;
    }
    else {
      bVar3 = true;
    }
    Extensions_SetSingleLayer_mDC98D826B03E3AD5D27D619F3E26112FFFD69B04
              (pOVar2->___cam_5,_stringLiteral07A75D8C871D61B87874F21F826D430590E69E3C,bVar3,
               (MethodInfo *)0x0);
    if (param_1->___isUpdating_16 == false) {
      if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0'
          ) && (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
      }
      pDVar6 = *(Delegate_t **)
                ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                      static_fields + 8);
      pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar4,(Il2CppObject *)param_1,
                 (int)
                 ShadingButtons_OnUpdate_mA969909E030ABF36D8FA6EF3C3879090730444EB_RuntimeMethod_var
                 ,(MethodInfo *)0x0);
      pDVar5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                         (pDVar6,(Delegate_t *)pOVar4,(MethodInfo *)0x0);
      pDVar6 = (Delegate_t *)0x0;
      if (pDVar5 != (Delegate_t *)0x0) {
        if ((Il2CppClass *)pDVar5->_padding_ ==
            Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
          pDVar6 = pDVar5;
        }
        if (pDVar6 == (Delegate_t *)0x0) {
                    /* WARNING: Subroutine does not return */
          RaiseInvalidCastException
                    ((Il2CppObject *)pDVar5,
                     Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
        }
      }
      *(Delegate_t **)
       ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->static_fields +
       8) = pDVar6;
      param_1->___isUpdating_16 = true;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
