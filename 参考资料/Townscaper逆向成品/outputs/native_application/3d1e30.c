// RVA 0x3d1e30 | Placemaker.Maker$$Clear
// PDB: Maker_Clear_mDB53101E066C84708F4D9DF200E3BCAF32DD3BAA
// Body: [[103d1e30, 103d203d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d1920 Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
// 103d1b50 Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6
// 103f8b10 WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10e73950 Graph_RemoveVoxel_m9B246D14F5015274B972E354D37931BBF4DAA64B
// 10e79e40 Graph_get_anyVoxels_m9D90C592308B99A9264FA727570D36E17E0AC7FD

bool __cdecl
Maker_Clear_mDB53101E066C84708F4D9DF200E3BCAF32DD3BAA
          (Maker_t537981F2ED20294ACF4C94693B3268049739203D *param_1,MethodInfo *param_2)

{
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar1;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar6;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar7;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *pVVar8;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 local_18;
  int local_8;

  if (DAT_1151c855 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mBC1BDC84024AB09ECE18905C216A3123CA3E0B50_RuntimeMethod_var
              );
    DAT_1151c855 = '\x01';
  }
  if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (pGVar1 = param_1->___master_4->___graph_7,
     pGVar1 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
    bVar3 = Graph_get_anyVoxels_m9D90C592308B99A9264FA727570D36E17E0AC7FD(pGVar1,(MethodInfo *)0x0);
    if (!bVar3) {
      return false;
    }
    Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6(param_1,(MethodInfo *)0x0);
    if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
        (pGVar1 = param_1->___master_4->___graph_7,
        pGVar1 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) &&
       (pTVar6 = pGVar1->___corners_6,
       pTVar6 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
      for (iVar4 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                             (pTVar6,(MethodInfo *)0x0); local_8 = iVar4, -1 < iVar4;
          iVar4 = iVar4 + -1) {
        if (((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
            || (pGVar1 = param_1->___master_4->___graph_7,
               pGVar1 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) ||
           (pTVar6 = pGVar1->___corners_6,
           pTVar6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_103d2039;
        iVar5 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                          (pTVar6,(MethodInfo *)0x0);
        if (iVar4 < iVar5) {
          if (((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0
               ) || (pGVar1 = param_1->___master_4->___graph_7,
                    pGVar1 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) ||
             ((pTVar6 = pGVar1->___corners_6,
              pTVar6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0 ||
              (((pTVar6 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                    (pTVar6,iVar4,(MethodInfo *)0x0),
                pTVar6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0 ||
                (pCVar7 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                          Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar6,
                                     Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
                                    ),
                pCVar7 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) ||
               (pTVar6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                   (pCVar7,(MethodInfo *)0x0),
               pTVar6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))))))
          goto LAB_103d2039;
          iVar5 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                            (pTVar6,(MethodInfo *)0x0);
          while (iVar5 = iVar5 + -1, -1 < iVar5) {
            pTVar6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               (pCVar7,(MethodInfo *)0x0);
            if (((pTVar6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
                (pTVar6 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                    (pTVar6,iVar5,(MethodInfo *)0x0),
                pTVar6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
               (pVVar8 = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)
                         Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                   ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar6,
                                    Component_GetComponent_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mBC1BDC84024AB09ECE18905C216A3123CA3E0B50_RuntimeMethod_var
                                   ),
               pVVar8 == (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0)) goto LAB_103d2039;
            iVar2.___x_0 = *(int *)&pCVar7[1].field_0x0;
            iVar2.___y_1 = *(int *)&pCVar7[1].field_0x4;
            Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
                      (&local_18,param_1,iVar2,pVVar8->___height_5,pVVar8->___type_4,'\x12',
                       (MethodInfo *)0x0);
            if ((param_1->___master_4 ==
                 (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
               (pGVar1 = param_1->___master_4->___graph_7,
               pGVar1 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) goto LAB_103d2039;
            Graph_RemoveVoxel_m9B246D14F5015274B972E354D37931BBF4DAA64B
                      (pGVar1,pVVar8,(MethodInfo *)0x0);
            iVar4 = local_8;
          }
        }
      }
      if (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
        WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
                  (param_1->___master_4,(MethodInfo *)0x0);
        return true;
      }
    }
  }
LAB_103d2039:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
