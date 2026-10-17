// RVA 0x75b740 | Placemaker.PropPlacer$$OnEnable
// PDB: PropPlacer_OnEnable_m1AB301E8121599081D7AEDF449737354C819CEB3
// Body: [[1075b740, 1075b82f] [1075b833, 1075b8fb] [1075b8ff, 1075b941]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10225cb0 Dictionary_2__ctor_m12FE70A54A1FBD146CB345A06031AB8A5DB02BBA_gshared
// 1043f240 Component_GetComponentsInChildren_TisRuntimeObject_mCFD9EE28706E43CCE81CF186BF0E5EED482B56D9_gshared
// 10441630 DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// 105d0600 ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 10758e50 PropPlacer_AddColliderToDict_m7AC8E57507C644A8730830BA8241DE1523AEEECE
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10cf75f0 Dictionary_2_Add_m0FF70AAADDD2640FDE073BB8D7573E95DD3C5954_gshared

void __cdecl
PropPlacer_OnEnable_m1AB301E8121599081D7AEDF449737354C819CEB3
          (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *param_1,MethodInfo *param_2)

{
  int iVar1;
  Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *pDVar2;
  ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259 CVar3;
  PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *pPVar4;
  PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *pPVar5;
  Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *pDVar6;
  List_1_tFE549FD498ED34A4D4F0083DC8C23515183299FC *pLVar7;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar8;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar9;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *pEVar10;
  uint uVar11;

  pPVar5 = param_1;
  if (DAT_1151ec41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentsInChildren_TisPropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952_m4855E1401A14BD068363ED5E5E91852D615351FA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_mB5CA7F54B15962D18F90CBC0C2E115A022E76C6C_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2__ctor_mD3E8216023D7B1FDF9CE98F707CA7D2916E8FF80_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_tC0EA07E90412CDCF8CD0DA8F14ED9F89D1418150_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisPropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952_m2EF2943103E032B4CBDA2F6CBC0FA9033AB8E263_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_mC71C3F877F797B42B3C87A0EA915E73115A74B87_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t70211753232011E4DDAB77454CD1D783A9B7DDD9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m49C86ACB56010B48B535FFA65569B1B483D99035_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mAEE32D900FD9A4D1DF10FBBB71C949CEE88156C5_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m47A74E280C71A1FA7104E0D525D70C885FC56314_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m486DF8B07AEE7B48FE9CE099397FC7A4D11DBB98_RuntimeMethod_var)
    ;
    DAT_1151ec41 = '\x01';
  }
  if (param_1->___srcProps_5 != (List_1_tFE549FD498ED34A4D4F0083DC8C23515183299FC *)0x0) {
    iVar1 = param_1->___srcProps_5->____size_2;
    pDVar6 = (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)
             il2cpp_codegen_object_new
                       (Dictionary_2_tC0EA07E90412CDCF8CD0DA8F14ED9F89D1418150_il2cpp_TypeInfo_var);
    Dictionary_2__ctor_m12FE70A54A1FBD146CB345A06031AB8A5DB02BBA_gshared
              (pDVar6,iVar1,
               Dictionary_2__ctor_mD3E8216023D7B1FDF9CE98F707CA7D2916E8FF80_RuntimeMethod_var);
    pLVar7 = param_1->___srcProps_5;
    param_1->___propPools_6 = (Dictionary_2_tC0EA07E90412CDCF8CD0DA8F14ED9F89D1418150 *)pDVar6;
    uVar11 = 0;
    if (pLVar7 != (List_1_tFE549FD498ED34A4D4F0083DC8C23515183299FC *)0x0) {
      param_1 = (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *)0x10;
      while ((int)uVar11 < pLVar7->____size_2) {
        pDVar2 = (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)pPVar5->___propPools_6;
        if (pLVar7 == (List_1_tFE549FD498ED34A4D4F0083DC8C23515183299FC *)0x0) goto LAB_1075b93d;
        if ((uint)pLVar7->____size_2 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        CVar3.___id_0 = *(String_t **)(pLVar7->____items_1 + (int)&param_1->_padding_);
        if ((pPVar5->___propPoolContainer_7 ==
             (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
           (pTVar8 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                               (pPVar5->___propPoolContainer_7,uVar11,(MethodInfo *)0x0),
           pDVar2 == (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)0x0))
        goto LAB_1075b93d;
        Dictionary_2_Add_m0FF70AAADDD2640FDE073BB8D7573E95DD3C5954_gshared
                  (pDVar2,CVar3,(Il2CppObject *)pTVar8,
                   Dictionary_2_Add_mB5CA7F54B15962D18F90CBC0C2E115A022E76C6C_RuntimeMethod_var);
        pLVar7 = pPVar5->___srcProps_5;
        param_1 = (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *)&param_1->_padding_;
        uVar11 = uVar11 + 1;
        if (pLVar7 == (List_1_tFE549FD498ED34A4D4F0083DC8C23515183299FC *)0x0) goto LAB_1075b93d;
      }
      if ((ListPool_1_t70211753232011E4DDAB77454CD1D783A9B7DDD9_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ListPool_1_t70211753232011E4DDAB77454CD1D783A9B7DDD9_il2cpp_TypeInfo_var->cctor_finished
          == 0)) {
        il2cpp_runtime_class_init
                  (ListPool_1_t70211753232011E4DDAB77454CD1D783A9B7DDD9_il2cpp_TypeInfo_var);
      }
      pDVar9 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
               ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                         (ListPool_1_Get_mC71C3F877F797B42B3C87A0EA915E73115A74B87_RuntimeMethod_var
                         );
      if ((pPVar5->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
         (Component_GetComponentsInChildren_TisRuntimeObject_mCFD9EE28706E43CCE81CF186BF0E5EED482B56D9_gshared
                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pPVar5->___master_4,true
                     ,(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pDVar9,
                     Component_GetComponentsInChildren_TisPropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952_m4855E1401A14BD068363ED5E5E91852D615351FA_RuntimeMethod_var
                    ), pDVar9 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)) {
        pEVar10 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                  ((int)&pDVar9->___entries_1[-1].m_Items[0].___value_3 + 3);
        if ((int)pEVar10 < 0) goto LAB_1075b927;
        param_1 = (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *)((int)pEVar10 * 4 + 0x10);
        while( true ) {
          if (pDVar9->___entries_1 <= pEVar10) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          pPVar4 = *(PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 **)
                    ((int)pDVar9->___buckets_0->m_Items +
                    (int)&param_1[-1].___secondaryPropsContainer_8);
          if (pPVar4 == (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)0x0) break;
          if (pPVar4->___inDict_7 != false) {
            PropPlacer_AddColliderToDict_m7AC8E57507C644A8730830BA8241DE1523AEEECE
                      (pPVar5,pPVar4,(MethodInfo *)0x0);
          }
          param_1 = (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *)
                    &param_1[-1].___materialMeshes_11;
          pEVar10 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                    ((int)&pEVar10[-1].m_Items[0].___value_3 + 3);
          if ((int)pEVar10 < 0) {
LAB_1075b927:
            DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                      (pDVar9,
                       ListPoolExtension_ReturnToPool_TisPropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952_m2EF2943103E032B4CBDA2F6CBC0FA9033AB8E263_RuntimeMethod_var
                      );
            return;
          }
        }
      }
    }
  }
LAB_1075b93d:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
