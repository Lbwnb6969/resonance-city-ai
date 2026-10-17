// RVA 0x75b280 | Placemaker.PropPlacer$$IterateDeconstructProps
// PDB: PropPlacer_IterateDeconstructProps_mEDD9FD340D7FACEF220200E85AA260E43EC45ED4
// Body: [[1075b280, 1075b31a]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103f82e0 WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10760410 PropPlacer_ReturnProp_m61935D08F4E38386FC9F2A80F94E0EA78D8EBE9E

bool __cdecl
PropPlacer_IterateDeconstructProps_mEDD9FD340D7FACEF220200E85AA260E43EC45ED4
          (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *param_1,MethodInfo *param_2)

{
  bool bVar1;
  int iVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  Prop_tFB36A7E740F843093CDC437435E4BA4054D50B46 *pPVar4;

  if (DAT_1151ec4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisProp_tFB36A7E740F843093CDC437435E4BA4054D50B46_m11E571026AE6746578D872F6731F627BAA2C195D_RuntimeMethod_var
              );
    DAT_1151ec4b = '\x01';
  }
  if (param_1->___deconstructionContainer_9 !=
      (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    iVar2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (param_1->___deconstructionContainer_9,(MethodInfo *)0x0);
    if (iVar2 < 1) {
      return false;
    }
    while( true ) {
      iVar2 = iVar2 + -1;
      if (param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
      break;
      bVar1 = WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
                        (param_1->___master_4,(MethodInfo *)0x0);
      if (!bVar1) {
        return true;
      }
      if ((param_1->___deconstructionContainer_9 ==
           (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
         (pTVar3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                             (param_1->___deconstructionContainer_9,iVar2,(MethodInfo *)0x0),
         pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) break;
      pPVar4 = (Prop_tFB36A7E740F843093CDC437435E4BA4054D50B46 *)
               Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar3,
                          Component_GetComponent_TisProp_tFB36A7E740F843093CDC437435E4BA4054D50B46_m11E571026AE6746578D872F6731F627BAA2C195D_RuntimeMethod_var
                         );
      PropPlacer_ReturnProp_m61935D08F4E38386FC9F2A80F94E0EA78D8EBE9E
                (param_1,pPVar4,(MethodInfo *)0x0);
      if (iVar2 < 1) {
        return true;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
