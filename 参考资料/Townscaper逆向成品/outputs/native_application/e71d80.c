// RVA 0xe71d80 | Placemaker.Graphs.Graph$$IterateRefillPools
// PDB: Graph_IterateRefillPools_m86828483DCA9FB1B6E025354376F3E41F90A3864
// Body: [[10e71d80, 10e71ef0]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103f82e0 WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10ae2b50 UnityFunctions_GetNewObject_TisRuntimeObject_mA14E611AB49243963CF26AB0DCA1EEC1BB87D953_gshared
// 10e6bce0 Graph_GetNewSquare_mA2098E98F734E268FDE5392B5A16DBEBF61816F6
// 10e6bd70 Graph_GetNewVoxel_m0B09771C46996923D1D5FB695A23F7A9ED146893

bool __cdecl
Graph_IterateRefillPools_m86828483DCA9FB1B6E025354376F3E41F90A3864
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,MethodInfo *param_2)

{
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar1;
  bool bVar2;
  int iVar3;
  Il2CppObject *pIVar4;

  if (param_1->___voxelPool_11 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    iVar3 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (param_1->___voxelPool_11,(MethodInfo *)0x0);
    if (iVar3 < 1) {
      Graph_GetNewVoxel_m0B09771C46996923D1D5FB695A23F7A9ED146893
                (param_1,param_1->___voxelPool_11,(MethodInfo *)0x0);
    }
    if (param_1->___qubePool_5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      for (iVar3 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                             (param_1->___qubePool_5,(MethodInfo *)0x0); iVar3 < 0x18;
          iVar3 = iVar3 + 1) {
        pTVar1 = param_1->___qubePool_5;
        if (DAT_11522835 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    ((uint *)&
                             UnityFunctions_GetNewObject_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_mFAB3FE95F0C7D9C8A8FEA3ECF44B0EB53724D0C3_RuntimeMethod_var
                    );
          DAT_11522835 = '\x01';
        }
        pIVar4 = UnityFunctions_GetNewObject_TisRuntimeObject_mA14E611AB49243963CF26AB0DCA1EEC1BB87D953_gshared
                           (pTVar1,
                            UnityFunctions_GetNewObject_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_mFAB3FE95F0C7D9C8A8FEA3ECF44B0EB53724D0C3_RuntimeMethod_var
                           );
        if (pIVar4 == (Il2CppObject *)0x0) goto LAB_10e71eec;
        pIVar4[3].field0_0x0 = (Il2CppObject_u_0)0x1;
        if (param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
        goto LAB_10e71eec;
        bVar2 = WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
                          (param_1->___master_4,(MethodInfo *)0x0);
        if (!bVar2) {
          return true;
        }
      }
      if (param_1->___cornerPool_7 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        for (iVar3 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                               (param_1->___cornerPool_7,(MethodInfo *)0x0); iVar3 < 7;
            iVar3 = iVar3 + 1) {
          pTVar1 = param_1->___cornerPool_7;
          if (DAT_11522831 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      ((uint *)&
                               UnityFunctions_GetNewObject_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_mDB906E87FE170CA0279C521C85ABC30DF170BB49_RuntimeMethod_var
                      );
            DAT_11522831 = '\x01';
          }
          UnityFunctions_GetNewObject_TisRuntimeObject_mA14E611AB49243963CF26AB0DCA1EEC1BB87D953_gshared
                    (pTVar1,
                     UnityFunctions_GetNewObject_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_mDB906E87FE170CA0279C521C85ABC30DF170BB49_RuntimeMethod_var
                    );
          if (param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
          goto LAB_10e71eec;
          bVar2 = WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
                            (param_1->___master_4,(MethodInfo *)0x0);
          if (!bVar2) {
            return true;
          }
        }
        if (param_1->___squarePool_9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
        {
          iVar3 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                            (param_1->___squarePool_9,(MethodInfo *)0x0);
          while( true ) {
            if (5 < iVar3) {
              return false;
            }
            Graph_GetNewSquare_mA2098E98F734E268FDE5392B5A16DBEBF61816F6
                      (param_1,param_1->___squarePool_9,(MethodInfo *)0x0);
            if (param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0
               ) break;
            bVar2 = WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
                              (param_1->___master_4,(MethodInfo *)0x0);
            if (!bVar2) {
              return true;
            }
            iVar3 = iVar3 + 1;
          }
        }
      }
    }
  }
LAB_10e71eec:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
