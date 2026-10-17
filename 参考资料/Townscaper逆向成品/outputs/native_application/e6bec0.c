// RVA 0xe6bec0 | Placemaker.Graphs.Graph$$GetOrCreateCorner
// PDB: Graph_GetOrCreateCorner_m6C8F0359621DA3A1F5E189E663A9B54485D9183F
// Body: [[10e6bec0, 10e6c0f4]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1021c6c0 Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066efe0 Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
// 1066f040 Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10ae2b50 UnityFunctions_GetNewObject_TisRuntimeObject_mA14E611AB49243963CF26AB0DCA1EEC1BB87D953_gshared

Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 * __cdecl
Graph_GetOrCreateCorner_m6C8F0359621DA3A1F5E189E663A9B54485D9183F
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,MethodInfo *param_3)

{
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **ppTVar1;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar2;
  bool bVar3;
  int iVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  Il2CppObject *pIVar6;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *local_8;

  pGVar2 = param_1;
  if (DAT_11522832 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_m1D4C4BC6AEE051B16B97754FB393E38D86988453_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
              );
    DAT_11522832 = '\x01';
  }
  local_8 = (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0;
  if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___cornerDict_16 !=
      (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
    bVar3 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                      ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                       param_1->___cornerDict_16,param_2,(Il2CppObject **)&local_8,
                       Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                      );
    if (bVar3) {
      return local_8;
    }
    if (DAT_1152283f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&
                         Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
                );
      DAT_1152283f = '\x01';
    }
    ppTVar1 = &param_1->___corners_6;
    param_1 = (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0;
    if (*ppTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      iVar4 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                        (*ppTVar1,(MethodInfo *)0x0);
      iVar4 = iVar4 + -1;
      uVar10 = 0;
      iVar9 = 0;
      if (-1 < iVar4) {
        do {
          uVar10 = ((int)&param_1->_padding_ + iVar4) / 2;
          if (((pGVar2->___corners_6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
              || (pTVar5 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                     (pGVar2->___corners_6,uVar10,(MethodInfo *)0x0),
                 pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
             (pIVar6 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar5,
                                  Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
                                 ), pIVar6 == (Il2CppObject *)0x0)) goto LAB_10e6c0f0;
          if ((MonitorData *)param_2.___x_0 == pIVar6[1].monitor) {
            iVar9 = param_2.___y_1 - (int)pIVar6[2].field0_0x0.klass;
          }
          else {
            iVar9 = param_2.___x_0 - (int)pIVar6[1].monitor;
          }
          if (iVar9 == 0) goto LAB_10e6bfeb;
          pGVar7 = (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)(uVar10 + 1);
          if (iVar9 < 0) {
            pGVar7 = param_1;
            iVar4 = uVar10 - 1;
          }
          param_1 = pGVar7;
        } while ((int)pGVar7 <= iVar4);
      }
      uVar8 = uVar10 + 1;
      if (iVar9 < 1) {
        uVar8 = uVar10;
      }
      uVar10 = ~uVar8;
LAB_10e6bfeb:
      if (pGVar2->___cornerPool_7 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        iVar4 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                          (pGVar2->___cornerPool_7,(MethodInfo *)0x0);
        if (iVar4 < 1) {
          pTVar5 = pGVar2->___corners_6;
          if (DAT_11522831 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      ((uint *)&
                               UnityFunctions_GetNewObject_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_mDB906E87FE170CA0279C521C85ABC30DF170BB49_RuntimeMethod_var
                      );
            DAT_11522831 = '\x01';
          }
          local_8 = (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)
                    UnityFunctions_GetNewObject_TisRuntimeObject_mA14E611AB49243963CF26AB0DCA1EEC1BB87D953_gshared
                              (pTVar5,
                               UnityFunctions_GetNewObject_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_mDB906E87FE170CA0279C521C85ABC30DF170BB49_RuntimeMethod_var
                              );
        }
        else {
          pTVar5 = pGVar2->___cornerPool_7;
          if (pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
          goto LAB_10e6c0f0;
          iVar4 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                            (pTVar5,(MethodInfo *)0x0);
          pTVar5 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                             (pTVar5,iVar4 + -1,(MethodInfo *)0x0);
          if (((pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
              (local_8 = (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)
                         Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                   ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar5,
                                    Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
                                   ),
              local_8 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)) ||
             (pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)local_8,
                                  (MethodInfo *)0x0),
             pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
          goto LAB_10e6c0f0;
          Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                    (pTVar5,pGVar2->___corners_6,(MethodInfo *)0x0);
        }
        if ((local_8 != (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) &&
           (pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)local_8,
                                (MethodInfo *)0x0),
           pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
          Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
                    (pTVar5,~uVar10,(MethodInfo *)0x0);
          if (((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)pGVar2->___cornerDict_16 !=
               (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) &&
             (Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
                        ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                         pGVar2->___cornerDict_16,param_2,(Il2CppObject *)local_8,
                         Dictionary_2_Add_m1D4C4BC6AEE051B16B97754FB393E38D86988453_RuntimeMethod_var
                        ), local_8 != (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)) {
            (local_8->___hexPos_4).___y_1 = param_2.___y_1;
            (local_8->___hexPos_4).___x_0 = param_2.___x_0;
            return local_8;
          }
        }
      }
    }
  }
LAB_10e6c0f0:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
