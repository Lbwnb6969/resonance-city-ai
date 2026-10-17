// RVA 0x87f1e0 | Placemaker.Life.BirdFlock$$TryGetRandomLanding
// PDB: BirdFlock_TryGetRandomLanding_mB8EDABF6CBC9EC5AC69F54BE98AAF2FFC3A9F015
// Body: [[1087f1e0, 1087f37b]]
// Direct callees:
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f280 Component_GetComponentsInChildren_TisRuntimeObject_mDA299B32A10B9FC9BF05FC2829E86C75EFD096B5_gshared
// 10441630 DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// 105d0600 ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
// 10660370 Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

bool __cdecl
BirdFlock_TryGetRandomLanding_mB8EDABF6CBC9EC5AC69F54BE98AAF2FFC3A9F015
          (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *param_1,
          BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB **param_2,MethodInfo *param_3)

{
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar1;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  int iVar4;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar5;
  int iVar6;
  BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *pBVar7;
  int iVar8;

  if (DAT_1151f5bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentsInChildren_TisBirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB_m27A28CCE8FABFE52F3D904FBC797A42A1471321E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisBirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB_m163EEBD0696266590E598402326D0B066F76D545_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_mA435E8895F4AE06695351F80D78B5D1ED4CAB927_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t5DF68A00FDAEEBEC79164F72CEDE5DFC6B485319_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m869C5927A641202E7A518C175EF4525F03DE0E95_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mF27318CBF880D1BA22BBFFE19B1149DF4DF5CF00_RuntimeMethod_var)
    ;
    DAT_1151f5bf = '\x01';
  }
  if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
      (pGVar1 = param_1->___master_4->___graph_7,
      pGVar1 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) &&
     (pCVar2 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pGVar1->___squares_8,
     pCVar2 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) {
    pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       (pCVar2,(MethodInfo *)0x0);
    if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      iVar4 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                        (pTVar3,(MethodInfo *)0x0);
      *param_2 = (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0;
      if (iVar4 == 0) {
        return false;
      }
      if ((ListPool_1_t5DF68A00FDAEEBEC79164F72CEDE5DFC6B485319_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ListPool_1_t5DF68A00FDAEEBEC79164F72CEDE5DFC6B485319_il2cpp_TypeInfo_var->cctor_finished
          == 0)) {
        il2cpp_runtime_class_init
                  (ListPool_1_t5DF68A00FDAEEBEC79164F72CEDE5DFC6B485319_il2cpp_TypeInfo_var);
      }
      pDVar5 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
               ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                         (ListPool_1_Get_mA435E8895F4AE06695351F80D78B5D1ED4CAB927_RuntimeMethod_var
                         );
      iVar8 = 0;
      while ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0
             && (pGVar1 = param_1->___master_4->___graph_7,
                pGVar1 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0))) {
        pTVar3 = pGVar1->___squares_8;
        iVar6 = Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
                          (0,iVar4,(MethodInfo *)0x0);
        if (pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
        pTVar3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                           (pTVar3,iVar6,(MethodInfo *)0x0);
        if (pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
        Component_GetComponentsInChildren_TisRuntimeObject_mDA299B32A10B9FC9BF05FC2829E86C75EFD096B5_gshared
                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar3,
                   (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pDVar5,
                   Component_GetComponentsInChildren_TisBirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB_m27A28CCE8FABFE52F3D904FBC797A42A1471321E_RuntimeMethod_var
                  );
        if (pDVar5 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) break;
        if (0 < (int)pDVar5->___entries_1) {
          iVar4 = Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
                            (0,(int)pDVar5->___entries_1,(MethodInfo *)0x0);
          pBVar7 = (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)
                   List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                             ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)pDVar5,iVar4,
                              List_1_get_Item_mF27318CBF880D1BA22BBFFE19B1149DF4DF5CF00_RuntimeMethod_var
                             );
          *param_2 = pBVar7;
          DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                    (pDVar5,
                     ListPoolExtension_ReturnToPool_TisBirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB_m163EEBD0696266590E598402326D0B066F76D545_RuntimeMethod_var
                    );
          return true;
        }
        iVar8 = iVar8 + 1;
        if (99 < iVar8) {
          DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                    (pDVar5,
                     ListPoolExtension_ReturnToPool_TisBirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB_m163EEBD0696266590E598402326D0B066F76D545_RuntimeMethod_var
                    );
          return false;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
