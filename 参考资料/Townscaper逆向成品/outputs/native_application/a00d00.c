// RVA 0xa00d00 | Placemaker.Ui.SaveMenu$$.ctor
// PDB: SaveMenu__ctor_m338D738F4F7B99E705ACEAD84AF92EA1CCC7B570
// Body: [[10a00d00, 10a00f99]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 102322c0 CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
// 103e8fa0 UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared

void __cdecl
SaveMenu__ctor_m338D738F4F7B99E705ACEAD84AF92EA1CCC7B570
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,MethodInfo *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  Il2CppObject *pIVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar7;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar8;
  Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *pSVar9;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar10;

  if (DAT_115201a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m98BF889E4F0A072C652588750E83050ADA21498A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mE5A7800AD394D8EB9239CA41E4E68D0FA49EF997_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t2DE248F6EC5B30FE6F150B99D0229C4072C3F4CF_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RapidButton_t1DC17FBA0032598FFC6C42C0B053F8EBDB1F5D05_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3C_ctorU3Eb__71_0_m13068FA29B4BD87328598F3F9896555A03521907_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&U3CU3Ec_t27393F999974CEE635AAA298E15332073F7270FE_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
    DAT_115201a3 = '\x01';
  }
  pLVar7 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t2DE248F6EC5B30FE6F150B99D0229C4072C3F4CF_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar7,List_1__ctor_mE5A7800AD394D8EB9239CA41E4E68D0FA49EF997_RuntimeMethod_var);
  param_1->___focusButtons_20 = (List_1_t2DE248F6EC5B30FE6F150B99D0229C4072C3F4CF *)pLVar7;
  if ((RapidButton_t1DC17FBA0032598FFC6C42C0B053F8EBDB1F5D05_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (RapidButton_t1DC17FBA0032598FFC6C42C0B053F8EBDB1F5D05_il2cpp_TypeInfo_var->cctor_finished
         == 0)) {
    il2cpp_runtime_class_init
              (RapidButton_t1DC17FBA0032598FFC6C42C0B053F8EBDB1F5D05_il2cpp_TypeInfo_var);
  }
  pvVar2 = RapidButton_t1DC17FBA0032598FFC6C42C0B053F8EBDB1F5D05_il2cpp_TypeInfo_var->static_fields;
  iVar4 = *(int *)((int)pvVar2 + 0x34);
  fVar5 = *(float *)((int)pvVar2 + 0x38);
  iVar6 = *(int *)((int)pvVar2 + 0x3c);
  uVar1 = *(undefined8 *)((int)pvVar2 + 0x40);
  (param_1->___rapidGamepadButton_25).___lastFrame_0 = *(int *)((int)pvVar2 + 0x30);
  (param_1->___rapidGamepadButton_25).___count_1 = iVar4;
  (param_1->___rapidGamepadButton_25).___t_2 = fVar5;
  (param_1->___rapidGamepadButton_25).___countThreshold_3 = iVar6;
  (param_1->___rapidGamepadButton_25).___slowSpeed_4 = (float)(int)uVar1;
  (param_1->___rapidGamepadButton_25).___fastSpeed_5 = (float)(int)((ulonglong)uVar1 >> 0x20);
  pLVar7 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar7,List_1__ctor_m98BF889E4F0A072C652588750E83050ADA21498A_RuntimeMethod_var);
  param_1->___saveCards_27 = (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)pLVar7;
  pUVar8 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar8,0.0,(MethodInfo *)0x0);
  param_1->___visibleState_28 = pUVar8;
  pUVar8 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar8,0.0,(MethodInfo *)0x0);
  param_1->___openState_29 = pUVar8;
  pUVar8 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar8,0.0,(MethodInfo *)0x0);
  param_1->___focusCardState_30 = pUVar8;
  pUVar8 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar8,1.2,(MethodInfo *)0x0);
  param_1->___menuScaleState_31 = pUVar8;
  pUVar8 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar8,0.0,(MethodInfo *)0x0);
  param_1->___gamepadState_32 = pUVar8;
  pUVar8 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar8,0.0,(MethodInfo *)0x0);
  param_1->___focusGamepadState_33 = pUVar8;
  param_1->___snapFocusGamepad_34 = true;
  pSVar9 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)
           il2cpp_codegen_object_new
                     (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
            ((BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)pSVar9,(MethodInfo *)0x0);
  param_1->___stopwatch_38 = pSVar9;
  if ((U3CU3Ec_t27393F999974CEE635AAA298E15332073F7270FE_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (U3CU3Ec_t27393F999974CEE635AAA298E15332073F7270FE_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(U3CU3Ec_t27393F999974CEE635AAA298E15332073F7270FE_il2cpp_TypeInfo_var)
    ;
  }
  pOVar10 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
             ((int)U3CU3Ec_t27393F999974CEE635AAA298E15332073F7270FE_il2cpp_TypeInfo_var->
                   static_fields + 4);
  if (pOVar10 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
    if ((U3CU3Ec_t27393F999974CEE635AAA298E15332073F7270FE_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_t27393F999974CEE635AAA298E15332073F7270FE_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_t27393F999974CEE635AAA298E15332073F7270FE_il2cpp_TypeInfo_var);
    }
    pIVar3 = *(Il2CppObject **)
              U3CU3Ec_t27393F999974CEE635AAA298E15332073F7270FE_il2cpp_TypeInfo_var->static_fields;
    pOVar10 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
              il2cpp_codegen_object_new
                        (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar10,pIVar3,
               (int)
               U3CU3Ec_U3C_ctorU3Eb__71_0_m13068FA29B4BD87328598F3F9896555A03521907_RuntimeMethod_var
               ,Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
    *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
     ((int)U3CU3Ec_t27393F999974CEE635AAA298E15332073F7270FE_il2cpp_TypeInfo_var->static_fields + 4)
         = pOVar10;
  }
  param_1->___onTotalSaveGameCountUpdate_40 =
       (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)pOVar10;
  CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
            ((CanvasScalerFitter_t7CDF0284DC89B01D6C79EF924DAF49D9DA4263C8 *)param_1,
             (MethodInfo *)0x0);
  return;
}
