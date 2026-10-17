// RVA 0x760a70 | Placemaker.PropPlacer$$<RecursivePropNodeSetup>g__ShouldBeBatched|24_0
// PDB: PropPlacer_U3CRecursivePropNodeSetupU3Eg__ShouldBeBatchedU7C24_0_m3148F587944B65BBB1A564BCE05D2E5CEBD4BED7
// Body: [[10760a70, 10760b7d]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10665c10 Renderer_GetSharedMaterial_m273D9ED2135F4A6808C4E814BA13E346F4231DFD
// 10665d70 Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dea0 GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54

bool __cdecl
PropPlacer_U3CRecursivePropNodeSetupU3Eg__ShouldBeBatchedU7C24_0_m3148F587944B65BBB1A564BCE05D2E5CEBD4BED7
          (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *param_1,
          MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *param_2,MethodInfo *param_3)

{
  MaterialMaster_t05C2ECC9C51C32378E694E1CCEBD25CAC007B7B5 *pMVar1;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar2;
  bool bVar3;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar4;
  int iVar5;
  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *pRVar6;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar7;

  if (DAT_1151ec50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151ec50 = '\x01';
  }
  if ((param_2 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) &&
     (pGVar4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                          (MethodInfo *)0x0),
     pGVar4 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) {
    iVar5 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(pGVar4,(MethodInfo *)0x0)
    ;
    if ((LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->cctor_finished ==
        0)) {
      il2cpp_runtime_class_init
                (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var);
    }
    if (iVar5 == *(int *)((int)LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var
                               ->static_fields + 0x1c)) {
      return false;
    }
    pRVar6 = (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)
             Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                        Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var
                       );
    if (pRVar6 != (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)0x0) {
      pOVar7 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
               Renderer_GetSharedMaterial_m273D9ED2135F4A6808C4E814BA13E346F4231DFD
                         (pRVar6,(MethodInfo *)0x0);
      if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
         (pMVar1 = param_1->___master_4->___materialMaster_13,
         pMVar1 != (MaterialMaster_t05C2ECC9C51C32378E694E1CCEBD25CAC007B7B5 *)0x0)) {
        pOVar2 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar1->___doorMaterial_11;
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        bVar3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                          (pOVar7,pOVar2,(MethodInfo *)0x0);
        if (bVar3) {
          return false;
        }
        Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B
                  (pRVar6,false,(MethodInfo *)0x0);
        return true;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
