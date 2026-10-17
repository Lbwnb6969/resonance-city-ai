// RVA 0x3d4390 | Placemaker.Ui.MasterClicker$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: MasterClicker_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mCAAA700E277EC2A1D9CD29576F26E1F91B207277
// Body: [[103d4390, 103d4478]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e6950 UiMaster_SubscribeToMenuState_mE782237CD39DD56FB441C83148B723D4C4940272
// 106677e0 Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE
// 10667890 Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C
// 10672b80 Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85
// 10c68520 PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
MasterClicker_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mCAAA700E277EC2A1D9CD29576F26E1F91B207277
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C *pEVar1;
  PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *pPVar2;
  int iVar3;
  int iVar4;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar5;
  float fVar6;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_c;

  if (DAT_1151c864 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2__ctor_m62ADD57C1B772087EF2883885445E71CA7293100_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       MasterClicker_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__49_0_mDFDCAE61481EB2234B6B6D7D82674BED24C07478_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var
              );
    DAT_1151c864 = '\x01';
  }
  pEVar1 = param_1->___eventSystem_5;
  pPVar2 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)
           il2cpp_codegen_object_new
                     (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var
                     );
  PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(pPVar2,pEVar1,(MethodInfo *)0x0);
  param_1->___pointerEventData_6 = pPVar2;
  iVar3 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
  iVar4 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
  local_c.___y_1 = (float)iVar4;
  local_c.___x_0 = (float)iVar3;
  fVar6 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85
                    (&local_c,(MethodInfo *)0x0);
  param_1->___touchLocationThreshold_27 = fVar6 * ___real_3cb43958;
  pOVar5 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
           il2cpp_codegen_object_new
                     (Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169_il2cpp_TypeInfo_var);
  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
            (pOVar5,(Il2CppObject *)param_1,
             (int)
             MasterClicker_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__49_0_mDFDCAE61481EB2234B6B6D7D82674BED24C07478_RuntimeMethod_var
             ,Action_2__ctor_m62ADD57C1B772087EF2883885445E71CA7293100_RuntimeMethod_var);
  if (param_2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    UiMaster_SubscribeToMenuState_mE782237CD39DD56FB441C83148B723D4C4940272
              (param_2,(Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169 *)pOVar5,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
