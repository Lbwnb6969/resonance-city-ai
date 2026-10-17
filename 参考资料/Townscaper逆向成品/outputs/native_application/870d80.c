// RVA 0x870d80 | Placemaker.Ui.ActionInputManager$$Update
// PDB: ActionInputManager_Update_m7849C114537D4FD4384F861ACF464F464249A3C3
// Body: [[10870d80, 10871827]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10233df0 CommandFeedbacker_Feedback_mEE4F5EE3E478F56D5B53F16D86CC8EC71FE1D5E9
// 10236d20 ControlLegend_Open_m83C3AFC5161EBD9BB146AB45A99C7AE18B7DCD39
// 103d2070 Maker_HoldRedo_m929447CD54819FA3745AB4D5F9A2652A478798A6
// 103d20d0 Maker_HoldUndo_m053A57BEFBC9BBA1825020A962A6D36C7BC3396A
// 103e5c10 UiMaster_GetSmoothAxis2D_m34BBE48972B315AF58B4E3D1101F8D1FB11F0C18
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1066d9d0 Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84
// 10672d70 Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10674620 Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710
// 10749590 OrbitalCamera_GamepadZoom_m037ED8CCBF438DC4576F6E338A561406E9818F38
// 1074cd50 OrbitalCamera_RotateCamera_m14BF8D0602D4FB258657AD6114A51CC1712E0B67
// 1074d360 OrbitalCamera_WASDCamera_m8ABA519BE3A243A7A068DD40800AA49016169197
// 1074e910 PaletteMenu_HoldSelectNextPicker_m292444E1B1C754D009B42F4063F4D39F294EB986
// 1074f300 PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
// 1083e550 GamepadScreenCursor_OnCameraRotate_mD64E8FA0469684F7DC1244910FA34B12E8793E04
// 10a0cc30 SideMenu_Toggle_mACD1F01D06929DAA462BEEC83BBD55F6A045A9C2
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10d183c0 Controller_get_type_mADBE045CF65DAEADA33460C5F1AEC6F0A206A71E
// 10d662c0 ControllerHelper_GetLastActiveController_mB2923A2560C998865D9AF56E5825F082F9F00D6B
// 10f1a250 Player_GetAnyButtonDown_m914E51A27FEE5F7C6CDB812F96E194BF44EF944E
// 10f1a460 Player_GetAnyButton_m1D11D46554676B814AD56C5BE93A18282595D106
// 10f1a500 Player_GetAnyNegativeButtonDown_m799EFDF18DC8CB2D1EDAEA0025611C4749E18B17
// 10f1a6e0 Player_GetAnyNegativeButton_m98F4E3603D0736CC528FC9FDACE690356603F7B2
// 10f1c7d0 Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
// 10f1d410 Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
// 10f1f2e0 Player_GetButton_m3A5FD78D51E3D08C47ADFAB33E1DF2CEC2F81976
// 10f22000 Player_GetNegativeButton_m5C6ABDFC3CEDADC26025EBED847DB1F44560A27A

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ActionInputManager_Update_m7849C114537D4FD4384F861ACF464F464249A3C3
          (ActionInputManager_t5A1DB58B471D890F8E6A3314C6F6B597E49AD32F *param_1,MethodInfo *param_2
          )

{
  Axis_t86B3B312CB3BFF0650F3EFCA96B325694A1377A0 AVar1;
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar2;
  GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *pGVar3;
  OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *pOVar4;
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar5;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar6;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar7;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar8;
  Maker_t537981F2ED20294ACF4C94693B3268049739203D *pMVar9;
  InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *pIVar10;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar11;
  SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *pSVar12;
  ControlLegend_tB336AC9E8DC444437364CA0FDD6C0BBEFB647025 *pCVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar14;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar15;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar16;
  bool bVar17;
  Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33 *pCVar18;
  int iVar19;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar20;
  CommandFeedbacker_t476CB1AAEE70903FB99B435AD4211A0714263692 *pCVar21;
  PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *pPVar22;
  MethodInfo *unaff_EDI;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar23;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar24;
  float fVar25;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1c;
  undefined1 local_10 [8];
  float local_8;

  if (DAT_1151f58d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral0057E5B09A0B1D6C5BFF7C8E2659AD1EDCA0CAE2);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral18E6316ADA637DB2A17BD50EEDBE17672A060DED);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2B688FEC1C5963DF868D1C220FC430D26F09D446);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2F341A531DD3EB9069C8ECD752B622131880DEE4);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral42E468BB7A2B02210D9028EF1F46DD660609E1EB);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral54E7FE0A6CCD37786532EEC6E7C887B815DE7603);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5D801DA57C7CA80192EC3DFD6B4E7AAB80B67CA7);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral613F48ED6182E4798F6A4F55704639C0E85460DE);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral7658FB35C79C6DD973249030E049D8750AC5D3A7);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral79D9DEA6810B56C9550EDA58CE1A145D53478507);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral7FF91F25421EA2C956A80BC67A2E718FDDAF7D1F);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral85CC9C2242FDEC5E8C733F1216706FC9DA66AA83);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral88547CFAF5AB9F8B80AD9E3FEA8F6B0C2F316D9B);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral906D4CEA4D36D12CCF9AA85FF5577543B979FA35);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA27C417E6D32418D7DCE681211EDADD684A87AAA);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralB328877C1DB6F9B0686602041A5E85E53E39B262);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralB33F4B4E0FF129008E749B8B712638253CD555A0);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralCAA46419FC7BD5D42C561977A2BAC4F2AD55835A);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralCC46685EB5E95A384993E8AA30BE0A01AA8101F6);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralD16EE1865792E115514D073AAE88ADDA76678163);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralE11498CF91157950F41BC7EA2EBD5FAD00B6E68A);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralFE8412772CA2903F3E7E2D2EF7AEF5758301150F);
    DAT_1151f58d = '\x01';
  }
  if (param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
  goto LAB_10871823;
  pPVar2 = param_1->___master_4->___player_43;
  if (pPVar2 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0) {
    return;
  }
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
                     static_fields + 0x1c) == '\0') {
    return;
  }
  bVar17 = Player_GetAnyButton_m1D11D46554676B814AD56C5BE93A18282595D106(pPVar2,(MethodInfo *)0x0);
  if ((bVar17) ||
     (bVar17 = Player_GetAnyNegativeButton_m98F4E3603D0736CC528FC9FDACE690356603F7B2
                         (pPVar2,(MethodInfo *)0x0), bVar17)) {
    fVar25 = Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
                       (pPVar2,_stringLiteral18E6316ADA637DB2A17BD50EEDBE17672A060DED,
                        (MethodInfo *)0x0);
    if (fVar25 != ___real_00000000) {
      if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
         (pGVar3 = param_1->___master_4->___gamepadScreenCursor_18,
         pGVar3 == (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *)0x0))
      goto LAB_10871823;
      GamepadScreenCursor_OnCameraRotate_mD64E8FA0469684F7DC1244910FA34B12E8793E04
                (pGVar3,(MethodInfo *)0x0);
      if (pPVar2->___controllers_7 ==
          (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0) goto LAB_10871823;
      pCVar18 = ControllerHelper_GetLastActiveController_mB2923A2560C998865D9AF56E5825F082F9F00D6B
                          (pPVar2->___controllers_7,(MethodInfo *)0x0);
      if ((pCVar18 != (Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33 *)0x0) &&
         (iVar19 = Controller_get_type_mADBE045CF65DAEADA33460C5F1AEC6F0A206A71E
                             (pCVar18,(MethodInfo *)0x0), iVar19 == 0)) {
        fVar25 = fVar25 * __real_3ecccccd;
      }
      if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
         (pOVar4 = param_1->___master_4->___orbitalCamera_15,
         pOVar4 == (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0))
      goto LAB_10871823;
      OrbitalCamera_GamepadZoom_m037ED8CCBF438DC4576F6E338A561406E9818F38
                (pOVar4,fVar25,(MethodInfo *)0x0);
    }
    if (param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
    goto LAB_10871823;
    join_0x00000008_0x00000000_ =
         UiMaster_GetSmoothAxis2D_m34BBE48972B315AF58B4E3D1101F8D1FB11F0C18
                   (param_1->___master_4,_stringLiteralB328877C1DB6F9B0686602041A5E85E53E39B262,
                    _stringLiteral7FF91F25421EA2C956A80BC67A2E718FDDAF7D1F,(MethodInfo *)0x0);
    VVar23 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
    fVar25 = (float)local_10._4_4_ - local_1c.___y_3;
    local_1c.___y_3 = VVar23.___x_0;
    local_1c.___z_4 = VVar23.___y_1;
    if (__real_2edbe6fe <=
        (local_8 - local_1c.___z_4) * (local_8 - local_1c.___z_4) + fVar25 * fVar25) {
      pUVar5 = param_1->___master_4;
      if (pUVar5 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) goto LAB_10871823;
      pOVar4 = pUVar5->___orbitalCamera_15;
      if (pUVar5->___gamepadScreenCursor_18 ==
          (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *)0x0) goto LAB_10871823;
      GamepadScreenCursor_OnCameraRotate_mD64E8FA0469684F7DC1244910FA34B12E8793E04
                (pUVar5->___gamepadScreenCursor_18,(MethodInfo *)0x0);
      fVar25 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84
                         ((MethodInfo *)0x0);
      if ((((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
           (pWVar6 = param_1->___master_4->___worldMaster_5,
           pWVar6 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) ||
          (pSVar7 = pWVar6->___saveSystem_35,
          pSVar7 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) ||
         (pSVar8 = pSVar7->___settingsData_10,
         pSVar8 == (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0))
      goto LAB_10871823;
      AVar1 = pSVar8->___axis_5;
      local_1c.___y_3 = __real_3f800000;
      if (AVar1.___rotationXInverted_0 != false) {
        local_1c.___y_3 = __real_bf800000;
      }
      local_1c.___y_3 = (float)local_10._4_4_ * fVar25 * __real_43340000 * local_1c.___y_3;
      local_1c.___z_4 = __real_bf800000;
      if (AVar1.___rotationYInverted_1 == false) {
        local_1c.___z_4 = __real_3f800000;
      }
      local_1c.___z_4 = local_8 * fVar25 * __real_43340000 * local_1c.___z_4;
      iVar16.___y_1 = (int)local_1c.___z_4;
      iVar16.___x_0 = (int)local_1c.___y_3;
      iVar16.___z_2 = 0;
      fVar24 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
               HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar16,unaff_EDI);
      if (pOVar4 == (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0)
      goto LAB_10871823;
      OrbitalCamera_RotateCamera_m14BF8D0602D4FB258657AD6114A51CC1712E0B67
                (pOVar4,fVar24,(MethodInfo *)0x0);
    }
    Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(&local_1c,(MethodInfo *)0x0);
    local_1c.___z_4 =
         Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
                   (pPVar2,_stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1,(MethodInfo *)0x0)
    ;
    local_1c.___y_3 =
         Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
                   (pPVar2,_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A,(MethodInfo *)0x0)
    ;
    local_1c.___x_2 =
         Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
                   (pPVar2,_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E,(MethodInfo *)0x0)
    ;
    pVVar20 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)local_10,
                         (MethodInfo *)0x0);
    fVar25 = local_1c.___z_4;
    VVar14.___y_3 = local_1c.___y_3;
    VVar14.___x_2 = local_1c.___x_2;
    VVar14.___z_4 = local_1c.___z_4;
    bVar17 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710
                       (VVar14,*pVVar20,(MethodInfo *)0x0);
    if (bVar17) {
      if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
         (pOVar4 = param_1->___master_4->___orbitalCamera_15,
         pOVar4 == (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0))
      goto LAB_10871823;
      VVar15.___y_3 = local_1c.___y_3;
      VVar15.___x_2 = local_1c.___x_2;
      VVar15.___z_4 = fVar25;
      OrbitalCamera_WASDCamera_m8ABA519BE3A243A7A068DD40800AA49016169197
                (pOVar4,VVar15,(MethodInfo *)0x0);
    }
    bVar17 = Player_GetButton_m3A5FD78D51E3D08C47ADFAB33E1DF2CEC2F81976
                       (pPVar2,_stringLiteralE11498CF91157950F41BC7EA2EBD5FAD00B6E68A,
                        (MethodInfo *)0x0);
    if (bVar17) {
      if (((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
          (pWVar6 = param_1->___master_4->___worldMaster_5,
          pWVar6 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) ||
         (pMVar9 = pWVar6->___maker_6,
         pMVar9 == (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) goto LAB_10871823;
      bVar17 = Maker_HoldUndo_m053A57BEFBC9BBA1825020A962A6D36C7BC3396A(pMVar9,(MethodInfo *)0x0);
      if (bVar17) {
        if (param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
        goto LAB_10871823;
        pCVar21 = param_1->___master_4->___undoFeedbacker_21;
LAB_108712b3:
        if (pCVar21 != (CommandFeedbacker_t476CB1AAEE70903FB99B435AD4211A0714263692 *)0x0) {
          CommandFeedbacker_Feedback_mEE4F5EE3E478F56D5B53F16D86CC8EC71FE1D5E9
                    (pCVar21,(MethodInfo *)0x0);
        }
      }
    }
    else {
      bVar17 = Player_GetNegativeButton_m5C6ABDFC3CEDADC26025EBED847DB1F44560A27A
                         (pPVar2,_stringLiteralE11498CF91157950F41BC7EA2EBD5FAD00B6E68A,
                          (MethodInfo *)0x0);
      if (bVar17) {
        if (((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
            (pWVar6 = param_1->___master_4->___worldMaster_5,
            pWVar6 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) ||
           (pMVar9 = pWVar6->___maker_6,
           pMVar9 == (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) goto LAB_10871823;
        bVar17 = Maker_HoldRedo_m929447CD54819FA3745AB4D5F9A2652A478798A6(pMVar9,(MethodInfo *)0x0);
        if (bVar17) {
          if (param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
          goto LAB_10871823;
          pCVar21 = param_1->___master_4->___redoFeedbacker_22;
          goto LAB_108712b3;
        }
      }
    }
    if (((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
        (pIVar10 = param_1->___master_4->___inputModeManager_19,
        pIVar10 == (InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *)0x0)) ||
       (pUVar11 = pIVar10->___gamepadState_6,
       pUVar11 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) goto LAB_10871823;
    bVar17 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                       (pUVar11,(MethodInfo *)0x0);
    if (bVar17) {
      if (((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
          (pSVar12 = param_1->___master_4->___sideMenu_8,
          pSVar12 == (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)) ||
         (pUVar11 = pSVar12->___openState_8,
         pUVar11 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0))
      goto LAB_10871823;
      bVar17 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                         (pUVar11,(MethodInfo *)0x0);
      if (bVar17) goto LAB_1087138b;
    }
    bVar17 = Player_GetButton_m3A5FD78D51E3D08C47ADFAB33E1DF2CEC2F81976
                       (pPVar2,_stringLiteral42E468BB7A2B02210D9028EF1F46DD660609E1EB,
                        (MethodInfo *)0x0);
    if (bVar17) {
      if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
         (pPVar22 = param_1->___master_4->___paletteMenu_9,
         pPVar22 == (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0))
      goto LAB_10871823;
      iVar19 = 1;
    }
    else {
      bVar17 = Player_GetNegativeButton_m5C6ABDFC3CEDADC26025EBED847DB1F44560A27A
                         (pPVar2,_stringLiteral42E468BB7A2B02210D9028EF1F46DD660609E1EB,
                          (MethodInfo *)0x0);
      if (!bVar17) goto LAB_1087138b;
      if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
         (pPVar22 = param_1->___master_4->___paletteMenu_9,
         pPVar22 == (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0))
      goto LAB_10871823;
      iVar19 = -1;
    }
    PaletteMenu_HoldSelectNextPicker_m292444E1B1C754D009B42F4063F4D39F294EB986
              (pPVar22,iVar19,(MethodInfo *)0x0);
  }
LAB_1087138b:
  bVar17 = Player_GetAnyButtonDown_m914E51A27FEE5F7C6CDB812F96E194BF44EF944E
                     (pPVar2,(MethodInfo *)0x0);
  if ((!bVar17) &&
     (bVar17 = Player_GetAnyNegativeButtonDown_m799EFDF18DC8CB2D1EDAEA0025611C4749E18B17
                         (pPVar2,(MethodInfo *)0x0), !bVar17)) {
    return;
  }
  bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                     (pPVar2,_stringLiteral5D801DA57C7CA80192EC3DFD6B4E7AAB80B67CA7,
                      (MethodInfo *)0x0);
  pUVar5 = param_1->___master_4;
  if (bVar17) {
    if ((pUVar5 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pUVar5->___sideMenu_8 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)) {
      SideMenu_Toggle_mACD1F01D06929DAA462BEEC83BBD55F6A045A9C2
                (pUVar5->___sideMenu_8,(MethodInfo *)0x0);
      return;
    }
  }
  else if (pUVar5 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    pCVar13 = pUVar5->___switchControlLegend_20;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar17 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                       ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pCVar13,
                        (MethodInfo *)0x0);
    if ((bVar17) &&
       (bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                           (pPVar2,_stringLiteralFE8412772CA2903F3E7E2D2EF7AEF5758301150F,
                            (MethodInfo *)0x0), bVar17)) {
      if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pCVar13 = param_1->___master_4->___switchControlLegend_20,
         pCVar13 != (ControlLegend_tB336AC9E8DC444437364CA0FDD6C0BBEFB647025 *)0x0)) {
        ControlLegend_Open_m83C3AFC5161EBD9BB146AB45A99C7AE18B7DCD39(pCVar13,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                         (pPVar2,_stringLiteralB33F4B4E0FF129008E749B8B712638253CD555A0,
                          (MethodInfo *)0x0);
      if (bVar17) {
        if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
           (pPVar22 = param_1->___master_4->___paletteMenu_9,
           pPVar22 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
          PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                    (pPVar22,0,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                           (pPVar2,_stringLiteralA27C417E6D32418D7DCE681211EDADD684A87AAA,
                            (MethodInfo *)0x0);
        if (bVar17) {
          if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
             (pPVar22 = param_1->___master_4->___paletteMenu_9,
             pPVar22 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
            PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                      (pPVar22,1,(MethodInfo *)0x0);
            return;
          }
        }
        else {
          bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                             (pPVar2,_stringLiteralCAA46419FC7BD5D42C561977A2BAC4F2AD55835A,
                              (MethodInfo *)0x0);
          if (bVar17) {
            if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
               && (pPVar22 = param_1->___master_4->___paletteMenu_9,
                  pPVar22 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
              PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                        (pPVar22,2,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                               (pPVar2,_stringLiteral85CC9C2242FDEC5E8C733F1216706FC9DA66AA83,
                                (MethodInfo *)0x0);
            if (bVar17) {
              if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0
                  ) && (pPVar22 = param_1->___master_4->___paletteMenu_9,
                       pPVar22 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
                PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                          (pPVar22,3,(MethodInfo *)0x0);
                return;
              }
            }
            else {
              bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                                 (pPVar2,_stringLiteralCC46685EB5E95A384993E8AA30BE0A01AA8101F6,
                                  (MethodInfo *)0x0);
              if (bVar17) {
                if ((param_1->___master_4 !=
                     (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                   (pPVar22 = param_1->___master_4->___paletteMenu_9,
                   pPVar22 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
                  PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                            (pPVar22,4,(MethodInfo *)0x0);
                  return;
                }
              }
              else {
                bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                                   (pPVar2,_stringLiteral2F341A531DD3EB9069C8ECD752B622131880DEE4,
                                    (MethodInfo *)0x0);
                if (bVar17) {
                  if ((param_1->___master_4 !=
                       (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                     (pPVar22 = param_1->___master_4->___paletteMenu_9,
                     pPVar22 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
                    PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                              (pPVar22,5,(MethodInfo *)0x0);
                    return;
                  }
                }
                else {
                  bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                                     (pPVar2,_stringLiteral906D4CEA4D36D12CCF9AA85FF5577543B979FA35,
                                      (MethodInfo *)0x0);
                  if (bVar17) {
                    if ((param_1->___master_4 !=
                         (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                       (pPVar22 = param_1->___master_4->___paletteMenu_9,
                       pPVar22 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
                      PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                                (pPVar22,6,(MethodInfo *)0x0);
                      return;
                    }
                  }
                  else {
                    bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                                       (pPVar2,
                                        _stringLiteral88547CFAF5AB9F8B80AD9E3FEA8F6B0C2F316D9B,
                                        (MethodInfo *)0x0);
                    if (bVar17) {
                      if ((param_1->___master_4 !=
                           (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                         (pPVar22 = param_1->___master_4->___paletteMenu_9,
                         pPVar22 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
                        PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                                  (pPVar22,7,(MethodInfo *)0x0);
                        return;
                      }
                    }
                    else {
                      bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                                         (pPVar2,
                                          _stringLiteralD16EE1865792E115514D073AAE88ADDA76678163,
                                          (MethodInfo *)0x0);
                      if (bVar17) {
                        if ((param_1->___master_4 !=
                             (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                           (pPVar22 = param_1->___master_4->___paletteMenu_9,
                           pPVar22 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0))
                        {
                          PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                                    (pPVar22,8,(MethodInfo *)0x0);
                          return;
                        }
                      }
                      else {
                        bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                                           (pPVar2,
                                            _stringLiteral613F48ED6182E4798F6A4F55704639C0E85460DE,
                                            (MethodInfo *)0x0);
                        if (bVar17) {
                          if ((param_1->___master_4 !=
                               (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                             (pPVar22 = param_1->___master_4->___paletteMenu_9,
                             pPVar22 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0
                             )) {
                            PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                                      (pPVar22,9,(MethodInfo *)0x0);
                            return;
                          }
                        }
                        else {
                          bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                                             (pPVar2,
                                              _stringLiteral2B688FEC1C5963DF868D1C220FC430D26F09D446
                                              ,(MethodInfo *)0x0);
                          if (bVar17) {
                            if ((param_1->___master_4 !=
                                 (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                               (pPVar22 = param_1->___master_4->___paletteMenu_9,
                               pPVar22 !=
                               (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
                              PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                                        (pPVar22,10,(MethodInfo *)0x0);
                              return;
                            }
                          }
                          else {
                            bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                                               (pPVar2,
                                                _stringLiteral0057E5B09A0B1D6C5BFF7C8E2659AD1EDCA0CAE2
                                                ,(MethodInfo *)0x0);
                            if (bVar17) {
                              if ((param_1->___master_4 !=
                                   (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                                 (pPVar22 = param_1->___master_4->___paletteMenu_9,
                                 pPVar22 !=
                                 (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
                                PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                                          (pPVar22,0xb,(MethodInfo *)0x0);
                                return;
                              }
                            }
                            else {
                              bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                                                 (pPVar2,
                                                  _stringLiteral54E7FE0A6CCD37786532EEC6E7C887B815DE7603
                                                  ,(MethodInfo *)0x0);
                              if (bVar17) {
                                if ((param_1->___master_4 !=
                                     (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                                   (pPVar22 = param_1->___master_4->___paletteMenu_9,
                                   pPVar22 !=
                                   (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
                                  PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                                            (pPVar22,0xc,(MethodInfo *)0x0);
                                  return;
                                }
                              }
                              else {
                                bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                                                   (pPVar2,
                                                  _stringLiteral7658FB35C79C6DD973249030E049D8750AC5D3A7
                                                  ,(MethodInfo *)0x0);
                                if (!bVar17) {
                                  bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                                                     (pPVar2,
                                                  _stringLiteral79D9DEA6810B56C9550EDA58CE1A145D53478507
                                                  ,(MethodInfo *)0x0);
                                  if (bVar17) {
                                    if ((param_1->___master_4 ==
                                         (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
                                       || (pPVar22 = param_1->___master_4->___paletteMenu_9,
                                          pPVar22 ==
                                          (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)
                                          0x0)) goto LAB_10871823;
                                    PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                                              (pPVar22,0xe,(MethodInfo *)0x0);
                                  }
                                  return;
                                }
                                if ((param_1->___master_4 !=
                                     (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                                   (pPVar22 = param_1->___master_4->___paletteMenu_9,
                                   pPVar22 !=
                                   (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
                                  PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                                            (pPVar22,0xd,(MethodInfo *)0x0);
                                  return;
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
LAB_10871823:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
