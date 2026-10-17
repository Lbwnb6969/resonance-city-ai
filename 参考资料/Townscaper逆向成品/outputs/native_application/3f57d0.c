// RVA 0x3f57d0 | Placemaker.WaveFunctionCollapse$$ResetPropagationCounter
// PDB: WaveFunctionCollapse_ResetPropagationCounter_m148E35363E8F6497E50429D47362BDD7EF9C16D0
// Body: [[103f57d0, 103f58b5]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05

void __cdecl
WaveFunctionCollapse_ResetPropagationCounter_m148E35363E8F6497E50429D47362BDD7EF9C16D0
          (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *param_1,
          MethodInfo *param_2)

{
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar1;
  int iVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  int iVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  Il2CppObject *pIVar6;

  if (DAT_1151c91d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
              );
    DAT_1151c91d = '\x01';
  }
  if (0x7fff < param_1->___propagationCounter_5) {
    if (((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
        (pGVar1 = param_1->___master_4->___graph_7,
        pGVar1 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) ||
       (pTVar3 = pGVar1->___squares_8,
       pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
LAB_103f58b1:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    iVar2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (pTVar3,(MethodInfo *)0x0);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      if (((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
          (pGVar1 = param_1->___master_4->___graph_7,
          pGVar1 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) ||
         ((pTVar3 = pGVar1->___squares_8,
          pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0 ||
          (pTVar3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                              (pTVar3,iVar2,(MethodInfo *)0x0),
          pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))))
      goto LAB_103f58b1;
      iVar4 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                        (pTVar3,(MethodInfo *)0x0);
      while (iVar4 = iVar4 + -1, -1 < iVar4) {
        pTVar5 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                           (pTVar3,iVar4,(MethodInfo *)0x0);
        if ((pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
           (pIVar6 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar5,
                                Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                               ), pIVar6 == (Il2CppObject *)0x0)) goto LAB_103f58b1;
        *(undefined2 *)((int)&pIVar6[3].monitor + 2) = 0;
      }
    }
    param_1->___propagationCounter_5 = 0;
    param_1->___lastStartedPropagation_6 = 0;
  }
  return;
}
