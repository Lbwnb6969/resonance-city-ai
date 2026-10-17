// RVA 0x1e4fa0 | Placemaker.WorldMeshes$$ReturnMeshFilter
// PDB: WorldMeshes_ReturnMeshFilter_m6F4BBA8DEC2C496B7DB111215DCE0F5B1F2D534F
// Body: [[101e4fa0, 101e5197]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1065fe60 Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702
// 1066f010 Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 1066ff60 Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a3df00 GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6
// 10a46900 MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
// 10a46da0 Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

void __cdecl
WorldMeshes_ReturnMeshFilter_m6F4BBA8DEC2C496B7DB111215DCE0F5B1F2D534F
          (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *param_1,
          MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *param_2,MethodInfo *param_3)

{
  bool bVar1;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar2;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar3;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar7;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar8;
  undefined1 local_14 [16];

  if (DAT_1151af32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151af32 = '\x01';
  }
  if (param_2 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) goto LAB_101e5193;
  pOVar2 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
           MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                     (param_2,(MethodInfo *)0x0);
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar2,(MethodInfo *)0x0);
  if (bVar1) {
    OVar3 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
            MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                      (param_2,(MethodInfo *)0x0);
    if (DAT_1151af30 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73_RuntimeMethod_var);
      DAT_1151af30 = '\x01';
    }
    if (OVar3 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) goto LAB_101e5193;
    Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE
              ((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)OVar3,(MethodInfo *)0x0);
    if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___meshStack_6 ==
        (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_101e5193;
    List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
              ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___meshStack_6,OVar3,
               List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73_RuntimeMethod_var);
    MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
              (param_2,(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0,(MethodInfo *)0x0);
  }
  if (DAT_1151af31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var);
    DAT_1151af31 = '\x01';
  }
  pGVar4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                      (MethodInfo *)0x0);
  if (pGVar4 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
    GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar4,false,(MethodInfo *)0x0);
    pGVar4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                        (MethodInfo *)0x0);
    if ((LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->cctor_finished ==
        0)) {
      il2cpp_runtime_class_init
                (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var);
    }
    if (pGVar4 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
      GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6
                (pGVar4,*(int *)LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var
                                ->static_fields,(MethodInfo *)0x0);
      pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                          (MethodInfo *)0x0);
      pTVar6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
      if (pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
                  (pTVar5,pTVar6,false,(MethodInfo *)0x0);
        pVVar7 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                           ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_14 + 4),
                            (MethodInfo *)0x0);
        Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                  (pTVar5,*pVVar7,(MethodInfo *)0x0);
        pVVar7 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                           ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_14 + 4),
                            (MethodInfo *)0x0);
        Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                  (pTVar5,*pVVar7,(MethodInfo *)0x0);
        pQVar8 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702
                           ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)local_14,
                            (MethodInfo *)0x0);
        Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C
                  (pTVar5,*pQVar8,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_101e5193:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
