// RVA 0x1dee90 | Placemaker.Ui.SaveMenu.<>c__DisplayClass44_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__0
// PDB: U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m1572FB16D9EC631EC27C27524F24E205E3D8FB1A
// Body: [[101dee90, 101defce]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066efe0 Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m1572FB16D9EC631EC27C27524F24E205E3D8FB1A
          (U3CU3Ec__DisplayClass44_0_tE7C4E51611B4F53D9BAB77C326867432E712C0BC *param_1,
          float param_2,MethodInfo *param_3)

{
  SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *pSVar1;
  SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *pSVar2;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar3;
  bool bVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_10;

  if (DAT_1151afff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151afff = '\x01';
  }
  pSVar1 = param_1->___U3CU3E4__this_0;
  if ((pSVar1 == (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0) ||
     (pSVar1->___gamepadState_32 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
LAB_101defca:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  if ((pSVar1->___gamepadState_32->____current_0 == ___real_00000000) &&
     (param_2 == __real_3f800000)) {
    pSVar2 = pSVar1->___gamepadCard_22;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar2,(MethodInfo *)0x0)
    ;
    if (bVar4) {
      if ((param_1->___U3CU3E4__this_0 != (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0)
         && (pCVar3 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                      param_1->___U3CU3E4__this_0->___gamepadCursor_23,
            pCVar3 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) {
        pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           (pCVar3,(MethodInfo *)0x0);
        if ((param_1->___U3CU3E4__this_0 !=
             (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0) &&
           ((pSVar2 = param_1->___U3CU3E4__this_0->___gamepadCard_22,
            pSVar2 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0 &&
            (pTVar6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pSVar2,
                                 (MethodInfo *)0x0),
            pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)))) {
          Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                    (pTVar5,pTVar6,(MethodInfo *)0x0);
          if ((param_1->___U3CU3E4__this_0 !=
               (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0) &&
             (pCVar3 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                       param_1->___U3CU3E4__this_0->___gamepadCursor_23,
             pCVar3 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) {
            pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               (pCVar3,(MethodInfo *)0x0);
            pVVar7 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                               (&local_10,(MethodInfo *)0x0);
            if (pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                        (pTVar5,*pVVar7,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto LAB_101defca;
    }
  }
  return;
}
