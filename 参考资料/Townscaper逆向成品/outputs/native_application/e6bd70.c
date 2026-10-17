// RVA 0xe6bd70 | Placemaker.Graphs.Graph$$GetNewVoxel
// PDB: Graph_GetNewVoxel_m0B09771C46996923D1D5FB695A23F7A9ED146893
// Body: [[10e6bd70, 10e6beb2]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10448940 GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
// 10665c40 Renderer_SetMaterial_m45DB63437410875B21F714779FC6D68827BF9497
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3df00 GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6
// 10ae2b50 UnityFunctions_GetNewObject_TisRuntimeObject_mA14E611AB49243963CF26AB0DCA1EEC1BB87D953_gshared
// 1113d070 MeshCollider_set_convex_mE94F2BE7760587C1944992B7AF9959ED425F631A

Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 * __cdecl
Graph_GetNewVoxel_m0B09771C46996923D1D5FB695A23F7A9ED146893
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *param_2,MethodInfo *param_3)

{
  MaterialMaster_t05C2ECC9C51C32378E694E1CCEBD25CAC007B7B5 *pMVar1;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *pVVar2;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar3;
  MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 *pMVar4;
  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *pRVar5;

  if (DAT_11522834 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       GameObject_AddComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m59630B0D1B4EC15877C10A8952FAD05E4509D647_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       UnityFunctions_GetNewObject_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mEB3C0B460CB5D7C8B3F6D385BB6F8EC2EFA2AA45_RuntimeMethod_var
              );
    DAT_11522834 = '\x01';
  }
  pVVar2 = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)
           UnityFunctions_GetNewObject_TisRuntimeObject_mA14E611AB49243963CF26AB0DCA1EEC1BB87D953_gshared
                     (param_2,
                      UnityFunctions_GetNewObject_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mEB3C0B460CB5D7C8B3F6D385BB6F8EC2EFA2AA45_RuntimeMethod_var
                     );
  if (pVVar2 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) {
    pGVar3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pVVar2,
                        (MethodInfo *)0x0);
    if ((LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->cctor_finished ==
        0)) {
      il2cpp_runtime_class_init
                (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var);
    }
    if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
      GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6
                (pGVar3,*(int *)((int)LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var
                                      ->static_fields + 4),(MethodInfo *)0x0);
      pGVar3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pVVar2,
                          (MethodInfo *)0x0);
      if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
        pMVar4 = (MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 *)
                 GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
                           (pGVar3,
                            GameObject_AddComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m59630B0D1B4EC15877C10A8952FAD05E4509D647_RuntimeMethod_var
                           );
        if (pMVar4 != (MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 *)0x0) {
          MeshCollider_set_convex_mE94F2BE7760587C1944992B7AF9959ED425F631A
                    (pMVar4,true,(MethodInfo *)0x0);
          pGVar3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pVVar2,
                              (MethodInfo *)0x0);
          if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
            pRVar5 = (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)
                     GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
                               (pGVar3,
                                GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var
                               );
            pGVar3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pVVar2,
                                (MethodInfo *)0x0);
            if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
              GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
                        (pGVar3,
                         GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var
                        );
              if (((param_1->___master_4 !=
                    (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
                  (pMVar1 = param_1->___master_4->___materialMaster_13,
                  pMVar1 != (MaterialMaster_t05C2ECC9C51C32378E694E1CCEBD25CAC007B7B5 *)0x0)) &&
                 (pRVar5 != (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)0x0)) {
                Renderer_SetMaterial_m45DB63437410875B21F714779FC6D68827BF9497
                          (pRVar5,pMVar1->___voxelMaterial_16,(MethodInfo *)0x0);
                return pVVar2;
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
