// RVA 0x75b060 | Placemaker.PropPlacer$$GetProp
// PDB: PropPlacer_GetProp_m648B4508E8549CC65FC29EAE1826B07925A6CB18
// Body: [[1075b060, 1075b22f]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e8070 UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f010 Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1075f5f0 PropPlacer_RecursivePropNodeSetup_m4A6512F05BC6258A2AC5A8EFFD2E3AA22E933E35
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3ded0 GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34
// 10a4a8b0 Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
// 10c78c00 Object_Instantiate_TisRuntimeObject_mD346AB5980B67F04B2C7E12D88693520FFBAD37D_gshared
// 10cf75f0 Dictionary_2_Add_m0FF70AAADDD2640FDE073BB8D7573E95DD3C5954_gshared
// 10d00a20 Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

Prop_tFB36A7E740F843093CDC437435E4BA4054D50B46 * __cdecl
PropPlacer_GetProp_m648B4508E8549CC65FC29EAE1826B07925A6CB18
          (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *param_1,
          Prop_tFB36A7E740F843093CDC437435E4BA4054D50B46 *param_2,
          Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *param_3,MethodInfo *param_4)

{
  bool bVar1;
  String_t *pSVar2;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar3;
  int iVar4;
  Prop_tFB36A7E740F843093CDC437435E4BA4054D50B46 *pPVar5;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar6;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar7;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *local_8;

  if (DAT_1151ec47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisProp_tFB36A7E740F843093CDC437435E4BA4054D50B46_m11E571026AE6746578D872F6731F627BAA2C195D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_mB5CA7F54B15962D18F90CBC0C2E115A022E76C6C_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_mC827288A8815C810DF5FD8003254BF3D90BC3559_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mA14E8D2067F52F7FD9585D250554D08F7789F87D_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Object_Instantiate_TisProp_tFB36A7E740F843093CDC437435E4BA4054D50B46_mD5206B74290AB46BBA2E3C02AC9921C681D99BF8_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151ec47 = '\x01';
  }
  local_8 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0;
  if ((Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)param_1->___propPools_6 ==
      (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)0x0) goto LAB_1075b22b;
  bVar1 = Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared
                    ((Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)
                     param_1->___propPools_6,
                     (AchievementID_t13562D86FC9C116E950E863A44792F46EBFFE67D)param_2,
                     (Il2CppObject **)&local_8,
                     Dictionary_2_TryGetValue_mC827288A8815C810DF5FD8003254BF3D90BC3559_RuntimeMethod_var
                    );
  if (!bVar1) {
    if (param_2 == (Prop_tFB36A7E740F843093CDC437435E4BA4054D50B46 *)0x0) goto LAB_1075b22b;
    pSVar2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
                       ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_2,
                        (MethodInfo *)0x0);
    pGVar3 = UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683
                       (pSVar2,param_1->___propPoolContainer_7,(MethodInfo *)0x0);
    if (pGVar3 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) goto LAB_1075b22b;
    local_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34
                        (pGVar3,(MethodInfo *)0x0);
    if ((Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)param_1->___propPools_6 ==
        (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)0x0) goto LAB_1075b22b;
    Dictionary_2_Add_m0FF70AAADDD2640FDE073BB8D7573E95DD3C5954_gshared
              ((Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)param_1->___propPools_6,
               (ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259)param_2,
               (Il2CppObject *)local_8,
               Dictionary_2_Add_mB5CA7F54B15962D18F90CBC0C2E115A022E76C6C_RuntimeMethod_var);
    if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___srcProps_5 ==
        (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_1075b22b;
    List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
              ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___srcProps_5,
               (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)param_2,
               List_1_Add_mA14E8D2067F52F7FD9585D250554D08F7789F87D_RuntimeMethod_var);
  }
  if (local_8 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    iVar4 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (local_8,(MethodInfo *)0x0);
    if (iVar4 < 1) {
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      pPVar5 = (Prop_tFB36A7E740F843093CDC437435E4BA4054D50B46 *)
               Object_Instantiate_TisRuntimeObject_mD346AB5980B67F04B2C7E12D88693520FFBAD37D_gshared
                         ((Il2CppObject *)param_2,param_3,false,
                          Object_Instantiate_TisProp_tFB36A7E740F843093CDC437435E4BA4054D50B46_mD5206B74290AB46BBA2E3C02AC9921C681D99BF8_RuntimeMethod_var
                         );
      if ((pPVar5 != (Prop_tFB36A7E740F843093CDC437435E4BA4054D50B46 *)0x0) &&
         (pPVar5->___srcProp_4 = param_2,
         param_2 != (Prop_tFB36A7E740F843093CDC437435E4BA4054D50B46 *)0x0)) {
        pTVar6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                            (MethodInfo *)0x0);
        pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pPVar5,
                            (MethodInfo *)0x0);
        PropPlacer_RecursivePropNodeSetup_m4A6512F05BC6258A2AC5A8EFFD2E3AA22E933E35
                  (param_1,(PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)0x0,pTVar6,pTVar7,
                   (MethodInfo *)0x0);
        return pPVar5;
      }
    }
    else if (local_8 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pTVar6 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                         (local_8,iVar4 + -1,(MethodInfo *)0x0);
      if (pTVar6 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        pPVar5 = (Prop_tFB36A7E740F843093CDC437435E4BA4054D50B46 *)
                 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar6,
                            Component_GetComponent_TisProp_tFB36A7E740F843093CDC437435E4BA4054D50B46_m11E571026AE6746578D872F6731F627BAA2C195D_RuntimeMethod_var
                           );
        if (pPVar5 != (Prop_tFB36A7E740F843093CDC437435E4BA4054D50B46 *)0x0) {
          pTVar6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pPVar5,
                              (MethodInfo *)0x0);
          if (pTVar6 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
            Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
                      (pTVar6,param_3,false,(MethodInfo *)0x0);
            return pPVar5;
          }
        }
      }
    }
  }
LAB_1075b22b:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
