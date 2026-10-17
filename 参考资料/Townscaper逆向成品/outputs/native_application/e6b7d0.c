// RVA 0xe6b7d0 | Placemaker.Graphs.Graph$$BinaryTreeSearchCorner
// PDB: Graph_BinaryTreeSearchCorner_m4AB28BA7404E185F7692691389679BBFCE46A7EE
// Body: [[10e6b7d0, 10e6b8a3]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05

int __cdecl
Graph_BinaryTreeSearchCorner_m4AB28BA7404E185F7692691389679BBFCE46A7EE
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,MethodInfo *param_3)

{
  int iVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  Il2CppObject *pIVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int local_8;

  if (DAT_1152283f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
              );
    DAT_1152283f = '\x01';
  }
  local_8 = 0;
  if (param_1->___corners_6 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    iVar1 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (param_1->___corners_6,(MethodInfo *)0x0);
    iVar1 = iVar1 + -1;
    uVar7 = 0;
    iVar6 = 0;
    if (-1 < iVar1) {
      do {
        uVar7 = (local_8 + iVar1) / 2;
        if (((param_1->___corners_6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
            || (pTVar2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                   (param_1->___corners_6,uVar7,(MethodInfo *)0x0),
               pTVar2 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
           (pIVar3 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar2,
                                Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
                               ), pIVar3 == (Il2CppObject *)0x0)) goto LAB_10e6b89f;
        if ((MonitorData *)param_2.___x_0 == pIVar3[1].monitor) {
          iVar6 = param_2.___y_1 - (int)pIVar3[2].field0_0x0.klass;
        }
        else {
          iVar6 = param_2.___x_0 - (int)pIVar3[1].monitor;
        }
        if (iVar6 == 0) {
          return uVar7;
        }
        iVar4 = uVar7 + 1;
        if (iVar6 < 0) {
          iVar4 = local_8;
          iVar1 = uVar7 - 1;
        }
        local_8 = iVar4;
      } while (iVar4 <= iVar1);
    }
    uVar5 = uVar7 + 1;
    if (iVar6 < 1) {
      uVar5 = uVar7;
    }
    return ~uVar5;
  }
LAB_10e6b89f:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
