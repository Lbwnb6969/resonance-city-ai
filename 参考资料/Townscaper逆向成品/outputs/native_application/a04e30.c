// RVA 0xa04e30 | Placemaker.Ui.ScreenshotButtons$$Button_ScreenshotPNG
// PDB: ScreenshotButtons_Button_ScreenshotPNG_mCFC0A0F139419113BA15B422159BE6DA592F3082
// Body: [[10a04e30, 10a0526c]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e5930 UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
// 103e9560 UpdateState_set_current_m4572798247E29F668F5B2D3BDDFC6BC78D302BE5
// 106677e0 Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE
// 10667890 Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 106ea990 DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204
// 106ebbe0 DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C
// 10a05b50 ScreenshotCamera_Capture_m558A8A6C45D1A9D53BAA68E96B8ECCDF12F34AF8
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a70db0 File_Create_m2C278C920C8B40322EB632EC620A83B021C90725
// 10afb9d0 TailStream_Clear_m342CD7E4F95BA76B3C061A63D471A34CEBAC138C
// 10b19040 Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A
// 10b198a0 Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE
// 10eda000 Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD
// 10f04510 String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
// 10f04a30 String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
// 10f04d40 String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17
// 10f0a070 String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2
// 111490d0 ImageConversion_EncodeToJPG_mE32249F45E643405652057EA8A35112AB4721641
// 11149100 ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED

void __cdecl
ScreenshotButtons_Button_ScreenshotPNG_mCFC0A0F139419113BA15B422159BE6DA592F3082
          (ScreenshotButtons_t36FF37FF4142755CD948572FF8DFA7B3E9E67307 *param_1,MethodInfo *param_2)

{
  String_t *pSVar1;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar2;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar3;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar4;
  ScreenshotCamera_t4E8C267455459B778FADF5011EA58AACA4DA9D6B *pSVar5;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar6;
  OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *pOVar7;
  ScreenshotButtons_t36FF37FF4142755CD948572FF8DFA7B3E9E67307 *pSVar8;
  bool bVar9;
  String_t *pSVar10;
  Il2CppObject *pIVar11;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar12;
  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *pTVar13;
  FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *pFVar14;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar15;
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar16;
  float fVar17;
  String_t *local_2c;
  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 local_20;
  String_t *local_18;
  int local_14;
  int local_10;
  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *local_c;
  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *local_8;

  if (DAT_115201c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral62E7F40D4D70722F7E502E5C0E252311A2795564);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral6F252890751C6D4A3A55A4B9F8142104F5A924EA);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralEC6C9850160DF27E1EE0FC02A93051971508F6A3);
    DAT_115201c3 = '\x01';
  }
  pSVar8 = param_1;
  local_20.___dateData_44 =
       CONCAT44(local_20.___dateData_44._4_4_,(undefined4)local_20.___dateData_44);
  if (param_1->___sideDimState_11 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_current_m4572798247E29F668F5B2D3BDDFC6BC78D302BE5
              (param_1->___sideDimState_11,1.0,(MethodInfo *)0x0);
    local_20.___dateData_44 =
         CONCAT44(local_20.___dateData_44._4_4_,(undefined4)local_20.___dateData_44);
    if ((((pSVar8->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pWVar2 = pSVar8->___master_4->___worldMaster_5,
         local_20.___dateData_44 =
              CONCAT44(local_20.___dateData_44._4_4_,(undefined4)local_20.___dateData_44),
         pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
        (pSVar3 = pWVar2->___saveSystem_35,
        local_20.___dateData_44 =
             CONCAT44(local_20.___dateData_44._4_4_,(undefined4)local_20.___dateData_44),
        pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) &&
       (pSVar4 = pSVar3->___settingsData_10,
       local_20.___dateData_44 =
            CONCAT44(local_20.___dateData_44._4_4_,(undefined4)local_20.___dateData_44),
       pSVar4 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)) {
      pSVar1 = (pSVar4->___screenshot_9).___path_0;
      bVar9 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                        (pSVar1,_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709,
                         (MethodInfo *)0x0);
      if (bVar9) {
        if (pSVar8->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
        goto LAB_10a05268;
        pSVar1 = UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
                           (pSVar8->___master_4,
                            _stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093,(MethodInfo *)0x0
                           );
        bVar9 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(pSVar1,(MethodInfo *)0x0)
        ;
        if (!bVar9) {
          Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A
                    (pSVar1,(MethodInfo *)0x0);
        }
      }
      else {
        bVar9 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(pSVar1,(MethodInfo *)0x0)
        ;
        if (!bVar9) {
          local_20.___dateData_44 =
               CONCAT44(local_20.___dateData_44._4_4_,(undefined4)local_20.___dateData_44);
          if (pSVar8->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
          goto LAB_10a05268;
          pSVar1 = UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
                             (pSVar8->___master_4,
                              _stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093,
                              (MethodInfo *)0x0);
          local_20.___dateData_44 =
               CONCAT44(local_20.___dateData_44._4_4_,(undefined4)local_20.___dateData_44);
          if (((pSVar8->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
              (pWVar2 = pSVar8->___master_4->___worldMaster_5,
              local_20.___dateData_44 =
                   CONCAT44(local_20.___dateData_44._4_4_,(undefined4)local_20.___dateData_44),
              pWVar2 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) ||
             (pSVar3 = pWVar2->___saveSystem_35,
             local_20.___dateData_44 =
                  CONCAT44(local_20.___dateData_44._4_4_,(undefined4)local_20.___dateData_44),
             pSVar3 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0))
          goto LAB_10a05268;
          if (pSVar3->___settingsChangeTime_11 <= pSVar3->___settingsSaveTime_12) {
            fVar17 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
                               ((MethodInfo *)0x0);
            pSVar3->___settingsStartChangeTime_13 = fVar17;
          }
          fVar17 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
                             ((MethodInfo *)0x0);
          pSVar3->___settingsChangeTime_11 = fVar17;
        }
      }
      if ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var->has_cctor != '\0'
          ) && (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
      }
      local_20 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C((MethodInfo *)0x0);
      pSVar10 = DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204
                          (&local_20,_stringLiteralEC6C9850160DF27E1EE0FC02A93051971508F6A3,
                           (MethodInfo *)0x0);
      pSVar10 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17
                          (_stringLiteral6F252890751C6D4A3A55A4B9F8142104F5A924EA,
                           (Il2CppObject *)pSVar10,(MethodInfo *)0x0);
      local_14 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
      local_10 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
      if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0') &&
         (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished == 0))
      {
        il2cpp_runtime_class_init
                  (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
      }
      param_1 = (ScreenshotButtons_t36FF37FF4142755CD948572FF8DFA7B3E9E67307 *)
                (uint)*(ushort *)
                       ((int)Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->
                             static_fields + 6);
      pIVar11 = il2cpp_value_box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var,
                                 &param_1);
      pSVar1 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                         (_stringLiteral62E7F40D4D70722F7E502E5C0E252311A2795564,
                          (Il2CppObject *)pSVar1,pIVar11,(Il2CppObject *)pSVar10,(MethodInfo *)0x0);
      if (pSVar1 != (String_t *)0x0) {
        local_18 = pSVar1;
        bVar9 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2
                          (pSVar1,_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709,
                           (MethodInfo *)0x0);
        if (bVar9) {
          if ((pSVar8->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
             (pWVar2 = pSVar8->___master_4->___worldMaster_5,
             pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
            pSVar5 = pWVar2->___screenshotCamera_26;
            if ((pSVar8->___frame_9 !=
                 (ScreenshotFrame_t8DAC4269F3A291128EB54EA2741416DBF9981E45 *)0x0) &&
               (pCVar6 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                         pSVar8->___frame_9->___center_5,
               pCVar6 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) {
              pTVar12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  (pCVar6,(MethodInfo *)0x0);
              if ((pSVar8->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
                 && (pOVar7 = pSVar8->___master_4->___orbitalCamera_15,
                    pOVar7 != (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0)) {
                local_8 = pOVar7->___cam_5;
                local_c = pOVar7->___skyBoxCam_6;
                if (pSVar5 != (ScreenshotCamera_t4E8C267455459B778FADF5011EA58AACA4DA9D6B *)0x0) {
                  pRVar15 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
                  if ((pTVar12 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
                     (*(Il2CppClass **)pTVar12 ==
                      RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var))
                  {
                    pRVar15 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar12;
                  }
                  pTVar13 = ScreenshotCamera_Capture_m558A8A6C45D1A9D53BAA68E96B8ECCDF12F34AF8
                                      (pSVar5,pRVar15,pSVar8->___width_19,pSVar8->___height_20,
                                       local_14,local_10,local_8,local_c,(MethodInfo *)0x0);
                  if (((pSVar8->___master_4 !=
                        (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                      (pWVar2 = pSVar8->___master_4->___worldMaster_5,
                      pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
                     (pWVar2->___screenshotCamera_26 !=
                      (ScreenshotCamera_t4E8C267455459B778FADF5011EA58AACA4DA9D6B *)0x0)) {
                    if (DAT_115201cb == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata
                                ((uint *)&
                                         Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var
                                );
                      il2cpp_codegen_initialize_runtime_metadata
                                ((uint *)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
                      il2cpp_codegen_initialize_runtime_metadata
                                ((uint *)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
                      DAT_115201cb = '\x01';
                    }
                    if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->
                         has_cctor != '\0') &&
                       (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->
                        cctor_finished == 0)) {
                      il2cpp_runtime_class_init
                                (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var)
                      ;
                    }
                    pSVar1 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD
                                       (pSVar1,(MethodInfo *)0x0);
                    if (pSVar1 == (String_t *)0x0) {
                      return;
                    }
                    bVar9 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                                      (pSVar1,_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A
                                       ,(MethodInfo *)0x0);
                    if (!bVar9) {
                      bVar9 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                                        (pSVar1,
                                         _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26,
                                         (MethodInfo *)0x0);
                      if (!bVar9) {
                        return;
                      }
                    }
                    pBVar16 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)0x0;
                    bVar9 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                                      (pSVar1,_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A
                                       ,(MethodInfo *)0x0);
                    if (bVar9) {
                      pBVar16 = ImageConversion_EncodeToJPG_mE32249F45E643405652057EA8A35112AB4721641
                                          (pTVar13,0x62,(MethodInfo *)0x0);
                    }
                    else {
                      bVar9 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                                        (pSVar1,
                                         _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26,
                                         (MethodInfo *)0x0);
                      if (bVar9) {
                        pBVar16 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED
                                            (pTVar13,(MethodInfo *)0x0);
                      }
                    }
                    pFVar14 = File_Create_m2C278C920C8B40322EB632EC620A83B021C90725
                                        (local_18,(MethodInfo *)0x0);
                    if ((pBVar16 != (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)0x0) &&
                       (pFVar14 != (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)0x0)) {
                      (**(code **)(pFVar14->_padding_ + 0x1a4))
                                (pFVar14,pBVar16,0,pBVar16->_padding_,
                                 *(undefined4 *)(pFVar14->_padding_ + 0x1a8));
                      TailStream_Clear_m342CD7E4F95BA76B3C061A63D471A34CEBAC138C
                                ((TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C *)pFVar14,
                                 (MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
          goto LAB_10a05268;
        }
      }
      return;
    }
  }
LAB_10a05268:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
