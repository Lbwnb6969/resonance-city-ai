// RVA 0x420c40 | Placemaker.Ui.KeyboardAndMouseControlRemap$$RefreshControls
// PDB: KeyboardAndMouseControlRemap_RefreshControls_m13ED4C5DE37B41139DB961C2C42330D333E342AE
// Body: [[10420c40, 10420eb8]]
// Direct callees:
// 1003e420 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10234080 ControlBindingKey_SetOnClickListener_mC8857BF99B8D262880AC4B52973F0DDBA7C3224B
// 10267d60 Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
// 10420eda FUN_10420eda
// 10e5cf00 MapHelper_GetMap_mC3654CDC5CE98A0B6B46B4CEEFBD1942E5FB822E
// 10e96700 ControllerMap_ElementMapsWithAction_mEF5E5A6CE97879AADA9FD8488279ADDBF4634F41
// 10f044a0 String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D
// 11032ae0 List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared

void __cdecl
KeyboardAndMouseControlRemap_RefreshControls_m13ED4C5DE37B41139DB961C2C42330D333E342AE
          (KeyboardAndMouseControlRemap_t2C7DF50DD90CC4E9372E1B2BB2E5935B9578EC37 *param_1,
          MethodInfo *param_2)

{
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar1;
  ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *pCVar2;
  MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *pMVar3;
  undefined1 *puVar4;
  bool bVar5;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *pEVar6;
  Il2CppObject *pIVar7;
  int iVar8;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 local_5c;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 local_4c [2];
  int local_2c;
  Action_1_t69017E290BC714F08969E04E3C9CD1A5D0C99F82 *local_28;
  ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *local_24;
  ControlBindingKey_t8AEA78973EA9D7777243BEFE675B13C562714798 *local_20;
  Il2CppObject *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint local_8;

  local_8 = 0xffffffff;
  puStack_c = &
              __ehhandler__KeyboardAndMouseControlRemap_RefreshControls_m13ED4C5DE37B41139DB961C2C42330D333E342AE
  ;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffff78;
  ExceptionList = &pvStack_10;
  puVar4 = &stack0xffffff78;
  if (DAT_1151cb0e == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_mFE345106ED67467BC2B458C4494F844295479141_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t69017E290BC714F08969E04E3C9CD1A5D0C99F82_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_mCC070A6CF25532BF99D3FC625D7FB52024B786B3_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_m1353A10EE0CB00180EDAF9389E548EEDD7BA887E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_m42431BA8815E54F3EEBAF870B265EB133BBAD9F9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerable_1_t8BE6E1F258DEA8EDC30D58FB2205A944F35AB737_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_1_tBDE3CDDEFEB1DD73A6387AC43023FE6600D80759_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyboardAndMouseControlRemap_OnInputFieldClicked_m677D82E8FDE5D969533AA0FE0F84D946966E8071_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_GetEnumerator_m90FE9FBDA698E3663ACF7048B85927BAE7232C2A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
    DAT_1151cb0e = '\x01';
    puVar4 = local_14;
  }
  local_14 = puVar4;
  local_18 = 0;
  if ((((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pPVar1 = param_1->___master_4->___player_43,
       pPVar1 != (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) &&
      (pCVar2 = pPVar1->___controllers_7,
      pCVar2 != (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0)) &&
     (pMVar3 = pCVar2->___maps_12,
     pMVar3 != (MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *)0x0)) {
    local_24 = MapHelper_GetMap_mC3654CDC5CE98A0B6B46B4CEEFBD1942E5FB822E
                         (pMVar3,0,0,_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E,
                          _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E,(MethodInfo *)0x0);
    if (param_1->___controlBindingKeys_19 != (List_1_tAAE752DCE5B69FD241A43EC1DB083DAE962E12A4 *)0x0
       ) {
      pEVar6 = List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared
                         (&local_5c,
                          (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                          param_1->___controlBindingKeys_19,
                          List_1_GetEnumerator_m90FE9FBDA698E3663ACF7048B85927BAE7232C2A_RuntimeMethod_var
                         );
      local_4c[0].___list_0 = pEVar6->___list_0;
      local_4c[0].___index_1 = pEVar6->___index_1;
      local_4c[0].___version_2 = pEVar6->___version_2;
      local_4c[0].___current_3 = pEVar6->___current_3;
      local_8 = 0;
      bVar5 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                        (local_4c,
                         Enumerator_MoveNext_m1353A10EE0CB00180EDAF9389E548EEDD7BA887E_RuntimeMethod_var
                        );
      if (!bVar5) {
        FUN_10420f41();
        return;
      }
      local_20 = (ControlBindingKey_t8AEA78973EA9D7777243BEFE675B13C562714798 *)
                 local_4c[0].___current_3;
      if ((((ControlBindingKey_t8AEA78973EA9D7777243BEFE675B13C562714798 *)local_4c[0].___current_3
            != (ControlBindingKey_t8AEA78973EA9D7777243BEFE675B13C562714798 *)0x0) &&
          (*(InputAction_tD22CF065BFD88C292C239741BE6F8E37F5AE7ADE **)
            ((int)local_4c[0].___current_3 + 0x10) !=
           (InputAction_tD22CF065BFD88C292C239741BE6F8E37F5AE7ADE *)0x0)) &&
         ((local_24 != (ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)0x0 &&
          (pIVar7 = ControllerMap_ElementMapsWithAction_mEF5E5A6CE97879AADA9FD8488279ADDBF4634F41
                              (local_24,(*(InputAction_tD22CF065BFD88C292C239741BE6F8E37F5AE7ADE **)
                                          ((int)local_4c[0].___current_3 + 0x10))->____id_0,
                               (MethodInfo *)0x0), pIVar7 != (Il2CppObject *)0x0)))) {
        pIVar7 = (Il2CppObject *)
                 InterfaceFuncInvoker0<int>::Invoke
                           (0,
                            IEnumerable_1_t8BE6E1F258DEA8EDC30D58FB2205A944F35AB737_il2cpp_TypeInfo_var
                            ,pIVar7);
        local_8 = CONCAT31(local_8._1_3_,1);
        local_1c = pIVar7;
        do {
          do {
            if (pIVar7 == (Il2CppObject *)0x0) goto LAB_1042117b;
            iVar8 = InterfaceFuncInvoker0<int>::Invoke
                              (0,
                               IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                               ,pIVar7);
            if ((char)iVar8 == '\0') goto LAB_10420ea4;
            local_28 = (Action_1_t69017E290BC714F08969E04E3C9CD1A5D0C99F82 *)
                       InterfaceFuncInvoker0<int>::Invoke
                                 (0,
                                  IEnumerator_1_tBDE3CDDEFEB1DD73A6387AC43023FE6600D80759_il2cpp_TypeInfo_var
                                  ,pIVar7);
            if (local_20->___inputAction_5 ==
                (InputAction_tD22CF065BFD88C292C239741BE6F8E37F5AE7ADE *)0x0) goto LAB_1042117b;
            iVar8 = local_20->___inputAction_5->____type_2;
            if (iVar8 == 1) goto LAB_10420e59;
          } while (iVar8 != 0);
          if ((local_28 == (Action_1_t69017E290BC714F08969E04E3C9CD1A5D0C99F82 *)0x0) ||
             (local_20->___actionName_4 == (String_t *)0x0)) goto LAB_1042117b;
          bVar5 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D
                            (local_20->___actionName_4,*(String_t **)&local_28[1].field_0x8,
                             (MethodInfo *)0x0);
        } while (!bVar5);
LAB_10420e59:
        if (local_28 != (Action_1_t69017E290BC714F08969E04E3C9CD1A5D0C99F82 *)0x0) {
          local_2c = *(int *)&local_28[1].field_0x10;
          local_28 = (Action_1_t69017E290BC714F08969E04E3C9CD1A5D0C99F82 *)
                     il2cpp_codegen_object_new
                               (
                               Action_1_t69017E290BC714F08969E04E3C9CD1A5D0C99F82_il2cpp_TypeInfo_var
                               );
          OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                    ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)local_28,
                     (Il2CppObject *)param_1,
                     (int)
                     KeyboardAndMouseControlRemap_OnInputFieldClicked_m677D82E8FDE5D969533AA0FE0F84D946966E8071_RuntimeMethod_var
                     ,Action_1__ctor_mFE345106ED67467BC2B458C4494F844295479141_RuntimeMethod_var);
          ControlBindingKey_SetOnClickListener_mC8857BF99B8D262880AC4B52973F0DDBA7C3224B
                    (local_20,local_2c,local_28,(MethodInfo *)0x0);
LAB_10420ea4:
          local_8 = local_8 & 0xffffff00;
          FUN_10420eda();
          return;
        }
      }
    }
  }
LAB_1042117b:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
