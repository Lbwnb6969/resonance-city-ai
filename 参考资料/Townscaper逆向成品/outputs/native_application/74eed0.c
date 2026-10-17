// RVA 0x74eed0 | Placemaker.Ui.PaletteMenu$$Placemaker.Ui.UiMaster.IUiSetup.OnStart
// PDB: PaletteMenu_Placemaker_Ui_UiMaster_IUiSetup_OnStart_m9BA15AE971D3E5B98EF8FD9BBFA93C41DD4BE746
// Body: [[1074eed0, 1074f060]]
// Direct callees:
// 1003e660 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10196f40 _libm_sse2_pow_precise
// 1043ef30 Component_GetComponentInChildren_TisRuntimeObject_m1F2C143B578F30EE0CD30A57F890C239E3B5FA81_gshared
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 1066efb0 Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187
// 1074e6c0 PaletteMenu_ClampTargetScroll_m61F5EE326BFC397883B251B3BD992D94DF95FB77
// 1074f430 PaletteMenu_UpdateAnchors_mDA81138BE5DB7ACFBEFA3FFDA5E7968B2031B1B5
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10c78ba0 Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

void __cdecl
PaletteMenu_Placemaker_Ui_UiMaster_IUiSetup_OnStart_m9BA15AE971D3E5B98EF8FD9BBFA93C41DD4BE746
          (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar3;
  Il2CppObject *pIVar4;
  MonitorData *pMVar5;
  double dVar6;

  if (DAT_1151ebe9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInChildren_TisPalettePicker_t7DE72AF9D552804578E6E75218808113F2153103_m8142B68D5B5A7F4BB1C5BF8EC27A5750648959C8_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCornerImage_tFE05FFD4093FAB3D12C2523D9DC70CED309CF6F2_m4ECD6A05CCF7CA66CFA4B70B0F7118C1EBC90E80_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m18ADDCF4C591F1E39BFB257C90CC4BEC548E39D0_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Object_Instantiate_TisPalettePicker_t7DE72AF9D552804578E6E75218808113F2153103_m603D9F4CD460401A4EF489419A2FE350CC666977_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151ebe9 = '\x01';
  }
  OVar1 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
          Component_GetComponentInChildren_TisRuntimeObject_m1F2C143B578F30EE0CD30A57F890C239E3B5FA81_gshared
                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,true,
                     Component_GetComponentInChildren_TisPalettePicker_t7DE72AF9D552804578E6E75218808113F2153103_m8142B68D5B5A7F4BB1C5BF8EC27A5750648959C8_RuntimeMethod_var
                    );
  if ((OVar1 != (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) &&
     (pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)OVar1,
                          (MethodInfo *)0x0),
     pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
    pTVar2 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B(pTVar2,(MethodInfo *)0x0)
    ;
    pMVar5 = (MonitorData *)0x0;
    do {
      OVar3 = OVar1;
      if (pMVar5 < (MonitorData *)0xe) {
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        OVar3 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared
                          ((Il2CppObject *)OVar1,pTVar2,
                           Object_Instantiate_TisPalettePicker_t7DE72AF9D552804578E6E75218808113F2153103_m603D9F4CD460401A4EF489419A2FE350CC666977_RuntimeMethod_var
                          );
      }
      if (OVar3 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) goto LAB_1074f05c;
      dVar6 = __real_3ff19999a0000000;
      _libm_sse2_pow_precise();
      *(float *)((int)OVar3 + 0x18) = (float)dVar6;
      if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___palettePickers_7 ==
          (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_1074f05c;
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___palettePickers_7,
                 OVar3,List_1_Add_m18ADDCF4C591F1E39BFB257C90CC4BEC548E39D0_RuntimeMethod_var);
      if ((*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)((int)OVar3 + 0xc) ==
           (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
         (pIVar4 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                             (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                               ((int)OVar3 + 0xc),
                              Component_GetComponent_TisCornerImage_tFE05FFD4093FAB3D12C2523D9DC70CED309CF6F2_m4ECD6A05CCF7CA66CFA4B70B0F7118C1EBC90E80_RuntimeMethod_var
                             ), pIVar4 == (Il2CppObject *)0x0)) goto LAB_1074f05c;
      pIVar4[0x12].monitor = pMVar5;
      VirtFuncInvoker0<int>::Invoke(0x1c,pIVar4);
      pMVar5 = (MonitorData *)((int)&pMVar5->_padding_ + 1);
    } while ((int)pMVar5 < 0xf);
    pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)OVar1,
                        (MethodInfo *)0x0);
    if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187(pTVar2,(MethodInfo *)0x0)
      ;
      PaletteMenu_UpdateAnchors_mDA81138BE5DB7ACFBEFA3FFDA5E7968B2031B1B5(param_1,(MethodInfo *)0x0)
      ;
      PaletteMenu_ClampTargetScroll_m61F5EE326BFC397883B251B3BD992D94DF95FB77
                (param_1,(MethodInfo *)0x0);
      param_1->___currentScroll_9 = param_1->___targetScroll_8;
      return;
    }
  }
LAB_1074f05c:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
