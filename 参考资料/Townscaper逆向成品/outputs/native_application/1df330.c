// RVA 0x1df330 | Placemaker.Ui.SaveMenu.<>c__DisplayClass44_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__8
// PDB: U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__8_m6E0CF71DA11749C1D27FFF4CC785A1FCD0FC0139
// Body: [[101df330, 101df41b]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 109fbd80 SaveCard_Setup_mD9851B4197E1CF1CFC09A8912125F8136601C822
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10c6a920 RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99
// 10c78ba0 Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

void __cdecl
U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__8_m6E0CF71DA11749C1D27FFF4CC785A1FCD0FC0139
          (U3CU3Ec__DisplayClass44_0_tE7C4E51611B4F53D9BAB77C326867432E712C0BC *param_1,
          MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *param_2,MethodInfo *param_3)

{
  SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *pSVar1;
  SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *pSVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  List_1_tAC387D40AA794C98425777894B362093CF4E78AC *pLVar4;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar5;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar6;

  if (DAT_1151affe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mDA16FCC73AF81F0995E3D6275BC8BC2AF5059597_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Object_Instantiate_TisSaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67_m34386CBB9AAEE4B8C71DCD0C6B3DA4662776C25B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151affe = '\x01';
  }
  pSVar1 = param_1->___U3CU3E4__this_0;
  if (pSVar1 != (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0) {
    pSVar2 = pSVar1->___srcSaveCard_21;
    pTVar3 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)pSVar1->___saveCardContainer_12;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    OVar5 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
            Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared
                      ((Il2CppObject *)pSVar2,pTVar3,
                       Object_Instantiate_TisSaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67_m34386CBB9AAEE4B8C71DCD0C6B3DA4662776C25B_RuntimeMethod_var
                      );
    if (OVar5 != (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) {
      pGVar6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)OVar5,
                          (MethodInfo *)0x0);
      if (pGVar6 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
        GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                  (pGVar6,true,(MethodInfo *)0x0);
        *(MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB **)((int)OVar5 + 0x20) = param_2;
        if ((param_2 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) &&
           (*(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A **)((int)OVar5 + 0xc) !=
            (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A *)0x0)) {
          RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99
                    (*(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A **)((int)OVar5 + 0xc),
                     (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)param_2->___texture_7,
                     (MethodInfo *)0x0);
          SaveCard_Setup_mD9851B4197E1CF1CFC09A8912125F8136601C822
                    ((SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)OVar5,
                     param_1->___master_1,(MethodInfo *)0x0);
          if ((param_1->___U3CU3E4__this_0 !=
               (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0) &&
             (pLVar4 = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                       param_1->___U3CU3E4__this_0->___saveCards_27,
             pLVar4 != (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0)) {
            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      (pLVar4,OVar5,
                       List_1_Add_mDA16FCC73AF81F0995E3D6275BC8BC2AF5059597_RuntimeMethod_var);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
