// RVA 0x235020 | Placemaker.Ui.ControlBinding$$SetupMenu
// PDB: ControlBinding_SetupMenu_m4B0AAD65FB7DEC005CC5961BA35BF85A187D9342
// Body: [[10235020, 10235696]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 102356ae FUN_102356ae
// 10267d60 Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10b30850 Options_set_isElementAllowedCallback_mC561D3B880A61BDECC2549B20C8476153AB8C071
// 10b30980 Options_set_timeout_mB1E9153230CD80C10DC7368569C8C4D18FF74B26
// 10db68d0 InputMapper_add_ConflictFoundEvent_mB8C4D5AD89D0F9DE353672F524CFA5F942CA2B19
// 10db6a60 InputMapper_add_InputMappedEvent_mE20346CC0473E1CDD4621CDB2F3BAEA7E8115EB7
// 10db6c00 InputMapper_add_StoppedEvent_mBF45E8DF95E58ECBCB82E22AC5809A2D8A5A5BB7
// 10db7100 InputMapper_get_options_m9997687D643A67C139C8B6F2E848027922513E44
// 11032ae0 List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared

void __cdecl
ControlBinding_SetupMenu_m4B0AAD65FB7DEC005CC5961BA35BF85A187D9342
          (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *param_1,MethodInfo *param_2)

{
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar1;
  InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *pIVar2;
  undefined1 *puVar3;
  bool bVar4;
  Options_t7F9F8B0DFD8E72E64B2FF901DE82613CDB7371F1 *pOVar5;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar6;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *pEVar7;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar8;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 local_68;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  Predicate_1_t7354879274B8E5AA7CC4EB72C117B04DA9258D00 *local_28;
  undefined4 local_24;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__ControlBinding_SetupMenu_m4B0AAD65FB7DEC005CC5961BA35BF85A187D9342;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffff78;
  ExceptionList = &pvStack_10;
  puVar3 = &stack0xffffff78;
  if (DAT_1151b593 == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m930D5687987A10360296603212E07F2B421BFAD5_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m9A3E0D0EAF0757B7656DC91B52751791F3032B69_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_mD8593DB6B2310453952707542C55E919B737F1AA_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t76F41B21D42BE1EDC86987BB4CF0F9124563618C_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_tDC63530029BF48655B990A0739FE8E5E2C194629_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_tF1FF1B97143680997846E86EEDCE3E480ADA8603_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ControlBinding_OnConflictFound_m1F6A811C338CD31826EEFDC35D829AF827683AF6_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ControlBinding_OnInputMapped_m6984AB97DD99A3836ECF75B83EBD14751B481C46_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ControlBinding_OnIsElementAllowed_m330B4006BC0A2063B1A845DB2D2CBD87CE4AC266_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ControlBinding_OnStopped_m8404F5F41D95F5D582B879089CA4F5B12A5D0998_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_mBB19CDDD586BD985616DB9D667F6217775C975D6_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_mECC9CBC784608A6AFF7F257970079A89C431500D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_mDDB796D450FD74695B80F4246065221FB84AA1C4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerable_1_t30B1CF132C29935077E288332B94617FF4337171_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_1_t6134A20D2499DC6D27A5860ECCB41D08D19C9FAD_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m321438F9FA03080E996556E1AEE2EF2B37704176_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_GetEnumerator_m6A3611E436A76D38CFAB131A21347CFC3B84CAA3_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mBBDE98034E04313E2624ABDFE10113B9F342CD6F_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Predicate_1__ctor_m626F3F1E9A5D996602C00B7AA992D4090B677B05_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Predicate_1_t7354879274B8E5AA7CC4EB72C117B04DA9258D00_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5F321914A9DA6EFAF07CD59F27BBB0ADEEE026D4);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralC270919EEAE3793C4DE2CDD18B665AB0B04693D4);
    DAT_1151b593 = '\x01';
    puVar3 = local_14;
  }
  local_14 = puVar3;
  local_24 = 0;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  if ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var)
    ;
  }
  if (`bool___cdecl_ReInput_get_isReady_mB524470981623D3BBF529259E252979E1E3408CF_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized == false) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
    `bool___cdecl_ReInput_get_isReady_mB524470981623D3BBF529259E252979E1E3408CF_inline(MethodInfo_const*)'
    ::__l2::s_Il2CppMethodInitialized = true;
  }
  if ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var)
    ;
  }
  if (*(char *)((int)ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->
                     static_fields + 0x1c) != '\0') {
    pUVar1 = param_1->___master_4;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pUVar1,
                       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      pIVar2 = param_1->___inputMapperJoystickKeyboard_18;
      param_1->___conflictFound_14 = false;
      param_1->___buttonMapState_15 = false;
      if (pIVar2 != (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
        pOVar5 = InputMapper_get_options_m9997687D643A67C139C8B6F2E848027922513E44
                           (pIVar2,(MethodInfo *)0x0);
        if (pOVar5 != (Options_t7F9F8B0DFD8E72E64B2FF901DE82613CDB7371F1 *)0x0) {
          Options_set_timeout_mB1E9153230CD80C10DC7368569C8C4D18FF74B26
                    (pOVar5,0.0,(MethodInfo *)0x0);
          if (param_1->___inputMapperMouse_19 !=
              (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
            pOVar5 = InputMapper_get_options_m9997687D643A67C139C8B6F2E848027922513E44
                               (param_1->___inputMapperMouse_19,(MethodInfo *)0x0);
            if (pOVar5 != (Options_t7F9F8B0DFD8E72E64B2FF901DE82613CDB7371F1 *)0x0) {
              Options_set_timeout_mB1E9153230CD80C10DC7368569C8C4D18FF74B26
                        (pOVar5,0.0,(MethodInfo *)0x0);
              if (param_1->___inputMapperJoystickKeyboard_18 !=
                  (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
                pOVar5 = InputMapper_get_options_m9997687D643A67C139C8B6F2E848027922513E44
                                   (param_1->___inputMapperJoystickKeyboard_18,(MethodInfo *)0x0);
                if (pOVar5 != (Options_t7F9F8B0DFD8E72E64B2FF901DE82613CDB7371F1 *)0x0) {
                  pOVar5->___RLkchipDEbIPOmgapUMFSTlyRTk_11 = true;
                  if (param_1->___inputMapperJoystickKeyboard_18 !=
                      (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
                    pOVar5 = InputMapper_get_options_m9997687D643A67C139C8B6F2E848027922513E44
                                       (param_1->___inputMapperJoystickKeyboard_18,(MethodInfo *)0x0
                                       );
                    if (pOVar5 != (Options_t7F9F8B0DFD8E72E64B2FF901DE82613CDB7371F1 *)0x0) {
                      pOVar5->___lSyABECnMyNaLrgzdRBsOFCJkeP_12 = true;
                      if (param_1->___inputMapperMouse_19 !=
                          (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
                        pOVar5 = InputMapper_get_options_m9997687D643A67C139C8B6F2E848027922513E44
                                           (param_1->___inputMapperMouse_19,(MethodInfo *)0x0);
                        if (pOVar5 != (Options_t7F9F8B0DFD8E72E64B2FF901DE82613CDB7371F1 *)0x0) {
                          pOVar5->___RLkchipDEbIPOmgapUMFSTlyRTk_11 = true;
                          if (param_1->___inputMapperMouse_19 !=
                              (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
                            pOVar5 = InputMapper_get_options_m9997687D643A67C139C8B6F2E848027922513E44
                                               (param_1->___inputMapperMouse_19,(MethodInfo *)0x0);
                            if (pOVar5 != (Options_t7F9F8B0DFD8E72E64B2FF901DE82613CDB7371F1 *)0x0)
                            {
                              pOVar5->___lSyABECnMyNaLrgzdRBsOFCJkeP_12 = true;
                              if (param_1->___inputMapperJoystickKeyboard_18 !=
                                  (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
                                pOVar5 = InputMapper_get_options_m9997687D643A67C139C8B6F2E848027922513E44
                                                   (param_1->___inputMapperJoystickKeyboard_18,
                                                    (MethodInfo *)0x0);
                                if (pOVar5 != (Options_t7F9F8B0DFD8E72E64B2FF901DE82613CDB7371F1 *)
                                              0x0) {
                                  pOVar5->___QHRBAXJnkFvKxcRLToZXXTSekNl_3 = false;
                                  if (param_1->___inputMapperMouse_19 !=
                                      (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0)
                                  {
                                    pOVar5 = InputMapper_get_options_m9997687D643A67C139C8B6F2E848027922513E44
                                                       (param_1->___inputMapperMouse_19,
                                                        (MethodInfo *)0x0);
                                    if (pOVar5 != (Options_t7F9F8B0DFD8E72E64B2FF901DE82613CDB7371F1
                                                   *)0x0) {
                                      pOVar5->___QHRBAXJnkFvKxcRLToZXXTSekNl_3 = false;
                                      if (param_1->___inputMapperJoystickKeyboard_18 !=
                                          (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)
                                          0x0) {
                                        pOVar5 = InputMapper_get_options_m9997687D643A67C139C8B6F2E848027922513E44
                                                           (param_1->
                                                  ___inputMapperJoystickKeyboard_18,
                                                  (MethodInfo *)0x0);
                                        local_28 = (
                                                  Predicate_1_t7354879274B8E5AA7CC4EB72C117B04DA9258D00
                                                  *)il2cpp_codegen_object_new
                                                              (
                                                  Predicate_1_t7354879274B8E5AA7CC4EB72C117B04DA9258D00_il2cpp_TypeInfo_var
                                                  );
                                        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                                                  ((
                                                  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE
                                                  *)local_28,(Il2CppObject *)param_1,
                                                  (int)
                                                  ControlBinding_OnIsElementAllowed_m330B4006BC0A2063B1A845DB2D2CBD87CE4AC266_RuntimeMethod_var
                                                  ,
                                                  Predicate_1__ctor_m626F3F1E9A5D996602C00B7AA992D4090B677B05_RuntimeMethod_var
                                                  );
                                        if (pOVar5 != (
                                                  Options_t7F9F8B0DFD8E72E64B2FF901DE82613CDB7371F1
                                                  *)0x0) {
                                          Options_set_isElementAllowedCallback_mC561D3B880A61BDECC2549B20C8476153AB8C071
                                                    (pOVar5,local_28,(MethodInfo *)0x0);
                                          if (param_1->___inputMapperJoystickKeyboard_18 !=
                                              (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505
                                               *)0x0) {
                                            pOVar5 =
                                                  InputMapper_get_options_m9997687D643A67C139C8B6F2E848027922513E44
                                                            (param_1->
                                                  ___inputMapperJoystickKeyboard_18,
                                                  (MethodInfo *)0x0);
                                            if (pOVar5 != (
                                                  Options_t7F9F8B0DFD8E72E64B2FF901DE82613CDB7371F1
                                                  *)0x0) {
                                              pOVar5->___dzSKczxVUGmPLGemzBrimbiwBIm_13 = false;
                                              if (param_1->___inputMapperJoystickKeyboard_18 !=
                                                  (
                                                  InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505
                                                  *)0x0) {
                                                pOVar5 =
                                                  InputMapper_get_options_m9997687D643A67C139C8B6F2E848027922513E44
                                                            (param_1->
                                                  ___inputMapperJoystickKeyboard_18,
                                                  (MethodInfo *)0x0);
                                                if (pOVar5 != (
                                                  Options_t7F9F8B0DFD8E72E64B2FF901DE82613CDB7371F1
                                                  *)0x0) {
                                                  pOVar5->___qBqlBkKFWuJVQTAJOboXaAilZPO_14 = true;
                                                  if (param_1->___inputMapperMouse_19 !=
                                                      (
                                                  InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505
                                                  *)0x0) {
                                                    pOVar5 =
                                                  InputMapper_get_options_m9997687D643A67C139C8B6F2E848027922513E44
                                                            (param_1->___inputMapperMouse_19,
                                                             (MethodInfo *)0x0);
                                                  local_28 = (
                                                  Predicate_1_t7354879274B8E5AA7CC4EB72C117B04DA9258D00
                                                  *)il2cpp_codegen_object_new
                                                              (
                                                  Predicate_1_t7354879274B8E5AA7CC4EB72C117B04DA9258D00_il2cpp_TypeInfo_var
                                                  );
                                                  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                                                            ((
                                                  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE
                                                  *)local_28,(Il2CppObject *)param_1,
                                                  (int)
                                                  ControlBinding_OnIsElementAllowed_m330B4006BC0A2063B1A845DB2D2CBD87CE4AC266_RuntimeMethod_var
                                                  ,
                                                  Predicate_1__ctor_m626F3F1E9A5D996602C00B7AA992D4090B677B05_RuntimeMethod_var
                                                  );
                                                  if (pOVar5 != (
                                                  Options_t7F9F8B0DFD8E72E64B2FF901DE82613CDB7371F1
                                                  *)0x0) {

                                                  Options_set_isElementAllowedCallback_mC561D3B880A61BDECC2549B20C8476153AB8C071
                                                            (pOVar5,local_28,(MethodInfo *)0x0);
                                                  pIVar2 = param_1->
                                                  ___inputMapperJoystickKeyboard_18;
                                                  local_28 = (
                                                  Predicate_1_t7354879274B8E5AA7CC4EB72C117B04DA9258D00
                                                  *)il2cpp_codegen_object_new
                                                              (
                                                  Action_1_tDC63530029BF48655B990A0739FE8E5E2C194629_il2cpp_TypeInfo_var
                                                  );
                                                  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                                                            ((
                                                  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE
                                                  *)local_28,(Il2CppObject *)param_1,
                                                  (int)
                                                  ControlBinding_OnInputMapped_m6984AB97DD99A3836ECF75B83EBD14751B481C46_RuntimeMethod_var
                                                  ,
                                                  Action_1__ctor_mD8593DB6B2310453952707542C55E919B737F1AA_RuntimeMethod_var
                                                  );
                                                  if (pIVar2 != (
                                                  InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505
                                                  *)0x0) {

                                                  InputMapper_add_InputMappedEvent_mE20346CC0473E1CDD4621CDB2F3BAEA7E8115EB7
                                                            (pIVar2,(
                                                  Action_1_tDC63530029BF48655B990A0739FE8E5E2C194629
                                                  *)local_28,(MethodInfo *)0x0);
                                                  pIVar2 = param_1->
                                                  ___inputMapperJoystickKeyboard_18;
                                                  local_28 = (
                                                  Predicate_1_t7354879274B8E5AA7CC4EB72C117B04DA9258D00
                                                  *)il2cpp_codegen_object_new
                                                              (
                                                  Action_1_tF1FF1B97143680997846E86EEDCE3E480ADA8603_il2cpp_TypeInfo_var
                                                  );
                                                  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                                                            ((
                                                  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE
                                                  *)local_28,(Il2CppObject *)param_1,
                                                  (int)
                                                  ControlBinding_OnStopped_m8404F5F41D95F5D582B879089CA4F5B12A5D0998_RuntimeMethod_var
                                                  ,
                                                  Action_1__ctor_m930D5687987A10360296603212E07F2B421BFAD5_RuntimeMethod_var
                                                  );
                                                  if (pIVar2 != (
                                                  InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505
                                                  *)0x0) {

                                                  InputMapper_add_StoppedEvent_mBF45E8DF95E58ECBCB82E22AC5809A2D8A5A5BB7
                                                            (pIVar2,(
                                                  Action_1_tF1FF1B97143680997846E86EEDCE3E480ADA8603
                                                  *)local_28,(MethodInfo *)0x0);
                                                  pIVar2 = param_1->___inputMapperMouse_19;
                                                  local_28 = (
                                                  Predicate_1_t7354879274B8E5AA7CC4EB72C117B04DA9258D00
                                                  *)il2cpp_codegen_object_new
                                                              (
                                                  Action_1_tDC63530029BF48655B990A0739FE8E5E2C194629_il2cpp_TypeInfo_var
                                                  );
                                                  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                                                            ((
                                                  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE
                                                  *)local_28,(Il2CppObject *)param_1,
                                                  (int)
                                                  ControlBinding_OnInputMapped_m6984AB97DD99A3836ECF75B83EBD14751B481C46_RuntimeMethod_var
                                                  ,
                                                  Action_1__ctor_mD8593DB6B2310453952707542C55E919B737F1AA_RuntimeMethod_var
                                                  );
                                                  if (pIVar2 != (
                                                  InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505
                                                  *)0x0) {

                                                  InputMapper_add_InputMappedEvent_mE20346CC0473E1CDD4621CDB2F3BAEA7E8115EB7
                                                            (pIVar2,(
                                                  Action_1_tDC63530029BF48655B990A0739FE8E5E2C194629
                                                  *)local_28,(MethodInfo *)0x0);
                                                  pIVar2 = param_1->___inputMapperMouse_19;
                                                  local_28 = (
                                                  Predicate_1_t7354879274B8E5AA7CC4EB72C117B04DA9258D00
                                                  *)il2cpp_codegen_object_new
                                                              (
                                                  Action_1_tF1FF1B97143680997846E86EEDCE3E480ADA8603_il2cpp_TypeInfo_var
                                                  );
                                                  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                                                            ((
                                                  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE
                                                  *)local_28,(Il2CppObject *)param_1,
                                                  (int)
                                                  ControlBinding_OnStopped_m8404F5F41D95F5D582B879089CA4F5B12A5D0998_RuntimeMethod_var
                                                  ,
                                                  Action_1__ctor_m930D5687987A10360296603212E07F2B421BFAD5_RuntimeMethod_var
                                                  );
                                                  if (pIVar2 != (
                                                  InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505
                                                  *)0x0) {

                                                  InputMapper_add_StoppedEvent_mBF45E8DF95E58ECBCB82E22AC5809A2D8A5A5BB7
                                                            (pIVar2,(
                                                  Action_1_tF1FF1B97143680997846E86EEDCE3E480ADA8603
                                                  *)local_28,(MethodInfo *)0x0);
                                                  pIVar2 = param_1->
                                                  ___inputMapperJoystickKeyboard_18;
                                                  local_28 = (
                                                  Predicate_1_t7354879274B8E5AA7CC4EB72C117B04DA9258D00
                                                  *)il2cpp_codegen_object_new
                                                              (
                                                  Action_1_t76F41B21D42BE1EDC86987BB4CF0F9124563618C_il2cpp_TypeInfo_var
                                                  );
                                                  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                                                            ((
                                                  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE
                                                  *)local_28,(Il2CppObject *)param_1,
                                                  (int)
                                                  ControlBinding_OnConflictFound_m1F6A811C338CD31826EEFDC35D829AF827683AF6_RuntimeMethod_var
                                                  ,
                                                  Action_1__ctor_m9A3E0D0EAF0757B7656DC91B52751791F3032B69_RuntimeMethod_var
                                                  );
                                                  if (pIVar2 != (
                                                  InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505
                                                  *)0x0) {

                                                  InputMapper_add_ConflictFoundEvent_mB8C4D5AD89D0F9DE353672F524CFA5F942CA2B19
                                                            (pIVar2,(
                                                  Action_1_t76F41B21D42BE1EDC86987BB4CF0F9124563618C
                                                  *)local_28,(MethodInfo *)0x0);
                                                  pIVar2 = param_1->___inputMapperMouse_19;
                                                  local_28 = (
                                                  Predicate_1_t7354879274B8E5AA7CC4EB72C117B04DA9258D00
                                                  *)il2cpp_codegen_object_new
                                                              (
                                                  Action_1_t76F41B21D42BE1EDC86987BB4CF0F9124563618C_il2cpp_TypeInfo_var
                                                  );
                                                  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                                                            ((
                                                  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE
                                                  *)local_28,(Il2CppObject *)param_1,
                                                  (int)
                                                  ControlBinding_OnConflictFound_m1F6A811C338CD31826EEFDC35D829AF827683AF6_RuntimeMethod_var
                                                  ,
                                                  Action_1__ctor_m9A3E0D0EAF0757B7656DC91B52751791F3032B69_RuntimeMethod_var
                                                  );
                                                  if (pIVar2 != (
                                                  InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505
                                                  *)0x0) {

                                                  InputMapper_add_ConflictFoundEvent_mB8C4D5AD89D0F9DE353672F524CFA5F942CA2B19
                                                            (pIVar2,(
                                                  Action_1_t76F41B21D42BE1EDC86987BB4CF0F9124563618C
                                                  *)local_28,(MethodInfo *)0x0);
                                                  if (param_1->___bindingRowsPool_9 ==
                                                      (
                                                  List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3 *
                                                  )0x0) {
                                                    pLVar6 = (
                                                  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *
                                                  )il2cpp_codegen_object_new
                                                             (
                                                  List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3_il2cpp_TypeInfo_var
                                                  );
                                                  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
                                                            (pLVar6,
                                                  List_1__ctor_mBBDE98034E04313E2624ABDFE10113B9F342CD6F_RuntimeMethod_var
                                                  );
                                                  param_1->___bindingRowsPool_9 =
                                                       (
                                                  List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3 *
                                                  )pLVar6;
                                                  }
                                                  pLVar6 = (
                                                  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *
                                                  )param_1->___bindingRows_8;
                                                  if (pLVar6 == (
                                                  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *
                                                  )0x0) {
                                                    pLVar6 = (
                                                  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *
                                                  )il2cpp_codegen_object_new
                                                             (
                                                  List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3_il2cpp_TypeInfo_var
                                                  );
                                                  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
                                                            (pLVar6,
                                                  List_1__ctor_mBBDE98034E04313E2624ABDFE10113B9F342CD6F_RuntimeMethod_var
                                                  );
                                                  param_1->___bindingRows_8 =
                                                       (
                                                  List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3 *
                                                  )pLVar6;
                                                  if (pLVar6 == (
                                                  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *
                                                  )0x0) goto LAB_10235a35;
                                                  }
                                                  pEVar7 =
                                                  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared
                                                            (&local_68,
                                                             (
                                                  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *
                                                  )pLVar6,
                                                  List_1_GetEnumerator_m6A3611E436A76D38CFAB131A21347CFC3B84CAA3_RuntimeMethod_var
                                                  );
                                                  local_58.___list_0 = pEVar7->___list_0;
                                                  local_58.___index_1 = pEVar7->___index_1;
                                                  local_58.___version_2 = pEVar7->___version_2;
                                                  local_58.___current_3 = pEVar7->___current_3;
                                                  local_8 = 0;
                                                  while( true ) {
                                                    bVar4 =
                                                  Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                                                            (&local_58,

                                                  Enumerator_MoveNext_mECC9CBC784608A6AFF7F257970079A89C431500D_RuntimeMethod_var
                                                  );
                                                  if (!bVar4) {
                                                    FUN_102356ae();
                                                    return;
                                                  }
                                                  if ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)local_58.___current_3 ==
                                                  (
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)0x0) break;
                                                  pGVar8 =
                                                  Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                                                            ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)local_58.___current_3,(MethodInfo *)0x0);
                                                  if (pGVar8 == (
                                                  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319
                                                  *)0x0) break;
                                                  GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                                                            (pGVar8,false,(MethodInfo *)0x0);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_10235a35:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
  }
  ExceptionList = pvStack_10;
  return;
}
