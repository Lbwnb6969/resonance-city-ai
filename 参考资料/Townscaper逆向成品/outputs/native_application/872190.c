// RVA 0x872190 | Placemaker.AoBaker$$GetShadowMesh
// PDB: AoBaker_GetShadowMesh_m62766243AA3EEF9475B3421CBA1088EF406CC372
// Body: [[10872190, 10872444] [1087244b, 1087247f]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103af0c0 Position__ctor_m3F6A5C351510265E5FCE79C95B2F4CF15BB21F35
// 10448940 GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
// 10665c40 Renderer_SetMaterial_m45DB63437410875B21F714779FC6D68827BF9497
// 1066efe0 Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
// 1066f010 Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3dd50 GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9
// 10a3ded0 GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34
// 10a3df00 GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
// 10a477b0 Mesh_MarkDynamic_m11FFDC281C64F11C36EDDA47BC132EAC95082999
// 10a486e0 Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

ValueTuple_2_t5F161220C70E1DE0316457C0E595420591447B84 __cdecl
AoBaker_GetShadowMesh_m62766243AA3EEF9475B3421CBA1088EF406CC372
          (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *param_1,int param_2,
          MethodInfo *param_3)

{
  List_1_t3B442DC7BE6A015A52219BC7596D07391CD69EFD *pLVar1;
  uint uVar2;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar6;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar7;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar8;
  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *pRVar9;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar10;
  Il2CppObject *pIVar11;
  ValueTuple_2_t5F161220C70E1DE0316457C0E595420591447B84 local_10;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *local_8;

  if (DAT_1151f590 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       GameObject_AddComponent_TisShadowMesh_t242AFD9598DDF08516763DB2C10CADE97E9C6A35_mFFFBA056F4628FC163ECCE74CED3B8FE5FF3501B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mA00D88F943DA01BB7270ED1D680527BCD355E440_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m5CA7E334EC7E959BF4669CB2973F6F4BD03A20F9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m9FC90ABB14A8F105A8ACA9A8F0DE7F93AA1CBC38_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ValueTuple_2__ctor_mBD96B7545A833101BDF7CFE4738693C462B21487_RuntimeMethod_var
              );
    DAT_1151f590 = '\x01';
  }
  pLVar1 = param_1->___shadowMeshes_6;
  uVar2 = (param_2 * 4) / 0xfffc;
  pIVar11 = (Il2CppObject *)((param_2 * 4) % 0xfffc);
  if (pLVar1 != (List_1_t3B442DC7BE6A015A52219BC7596D07391CD69EFD *)0x0) {
    if ((int)uVar2 < pLVar1->____size_2) {
      if ((uint)pLVar1->____size_2 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      local_10.___Item1_0 = (ShadowMesh_t242AFD9598DDF08516763DB2C10CADE97E9C6A35 *)0x0;
      local_10.___Item2_1 = 0;
      Position__ctor_m3F6A5C351510265E5FCE79C95B2F4CF15BB21F35
                ((Position_tD9D8C9ECCEF2EC71D72D9BEE2C4A332E402E6866 *)&local_10,
                 *(int *)(pLVar1->____items_1 + uVar2 * 4 + 0x10),pIVar11,
                 ValueTuple_2__ctor_mBD96B7545A833101BDF7CFE4738693C462B21487_RuntimeMethod_var);
      return local_10;
    }
    pGVar3 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)
             il2cpp_codegen_object_new
                       (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
    GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(pGVar3,(MethodInfo *)0x0);
    if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
      pTVar4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34
                         (pGVar3,(MethodInfo *)0x0);
      pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
      if (pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                  (pTVar4,pTVar5,(MethodInfo *)0x0);
        OVar6 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
                          (pGVar3,
                           GameObject_AddComponent_TisShadowMesh_t242AFD9598DDF08516763DB2C10CADE97E9C6A35_mFFFBA056F4628FC163ECCE74CED3B8FE5FF3501B_RuntimeMethod_var
                          );
        pMVar7 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)
                 il2cpp_codegen_object_new
                           (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
        Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(pMVar7,(MethodInfo *)0x0);
        if ((OVar6 != (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) &&
           (*(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 **)((int)OVar6 + 0x1c) = pMVar7,
           pMVar7 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0)) {
          Mesh_MarkDynamic_m11FFDC281C64F11C36EDDA47BC132EAC95082999(pMVar7,(MethodInfo *)0x0);
          pMVar8 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
                   GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
                             (pGVar3,
                              GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var
                             );
          pRVar9 = (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)
                   GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
                             (pGVar3,
                              GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var
                             );
          if (pRVar9 != (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)0x0) {
            Renderer_SetMaterial_m45DB63437410875B21F714779FC6D68827BF9497
                      (pRVar9,param_1->___material_10,(MethodInfo *)0x0);
            if (pMVar8 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) {
              MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                        (pMVar8,*(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 **)
                                 ((int)OVar6 + 0x1c),(MethodInfo *)0x0);
              if ((LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->
                   has_cctor != '\0') &&
                 (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var
                          );
              }
              GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6
                        (pGVar3,*(int *)((int)LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var
                                              ->static_fields + 0x10),(MethodInfo *)0x0);
              pGVar10 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)
                        il2cpp_codegen_object_new
                                  (
                                  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var
                                  );
              GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(pGVar10,(MethodInfo *)0x0);
              if (pGVar10 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
                local_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34
                                    (pGVar10,(MethodInfo *)0x0);
                pTVar4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34
                                   (pGVar3,(MethodInfo *)0x0);
                if (local_8 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                  Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
                            (local_8,pTVar4,false,(MethodInfo *)0x0);
                  GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6
                            (pGVar10,*(int *)((int)
                                                  LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var
                                                  ->static_fields + 0x14),(MethodInfo *)0x0);
                  pMVar8 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
                           GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
                                     (pGVar10,
                                      GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var
                                     );
                  if (pMVar8 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) {
                    MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                              (pMVar8,*(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 **)
                                       ((int)OVar6 + 0x1c),(MethodInfo *)0x0);
                    pRVar9 = (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)
                             GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
                                       (pGVar10,
                                        GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var
                                       );
                    if (pRVar9 != (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)0x0) {
                      Renderer_SetMaterial_m45DB63437410875B21F714779FC6D68827BF9497
                                (pRVar9,param_1->___stackMaterial_13,(MethodInfo *)0x0);
                      if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                          param_1->___shadowMeshes_6 !=
                          (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) {
                        List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                                  ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                                   param_1->___shadowMeshes_6,OVar6,
                                   List_1_Add_mA00D88F943DA01BB7270ED1D680527BCD355E440_RuntimeMethod_var
                                  );
                        local_10.___Item1_0 =
                             (ShadowMesh_t242AFD9598DDF08516763DB2C10CADE97E9C6A35 *)0x0;
                        local_10.___Item2_1 = 0;
                        Position__ctor_m3F6A5C351510265E5FCE79C95B2F4CF15BB21F35
                                  ((Position_tD9D8C9ECCEF2EC71D72D9BEE2C4A332E402E6866 *)&local_10,
                                   (int)OVar6,pIVar11,
                                   ValueTuple_2__ctor_mBD96B7545A833101BDF7CFE4738693C462B21487_RuntimeMethod_var
                                  );
                        return local_10;
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
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
