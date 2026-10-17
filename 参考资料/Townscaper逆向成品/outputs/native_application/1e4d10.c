// RVA 0x1e4d10 | Placemaker.WorldMeshes$$IterateRefillPools
// PDB: WorldMeshes_IterateRefillPools_m1994ADA12285ACAB2A823AE3B539E3C4C2A1A852
// Body: [[101e4d10, 101e4e53]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101e49a0 WorldMeshes_GetMeshFilter_m316E3A8FDC7957FBC39804689659E7AFA15144B0
// 103f82e0 WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a477b0 Mesh_MarkDynamic_m11FFDC281C64F11C36EDDA47BC132EAC95082999
// 10a486e0 Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

bool __cdecl
WorldMeshes_IterateRefillPools_m1994ADA12285ACAB2A823AE3B539E3C4C2A1A852
          (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *param_1,
          WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_2,MethodInfo *param_3)

{
  List_1_tAC387D40AA794C98425777894B362093CF4E78AC *pLVar1;
  bool bVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  int iVar4;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar5;

  if (DAT_1151af34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mF86A27C4FC0596167E330736ED4DED4A4D3D5240_RuntimeMethod_var
              );
    DAT_1151af34 = '\x01';
  }
  pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    for (iVar4 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                           (pTVar3,(MethodInfo *)0x0); iVar4 < 10; iVar4 = iVar4 + 1) {
      pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
      WorldMeshes_GetMeshFilter_m316E3A8FDC7957FBC39804689659E7AFA15144B0
                (param_1,pTVar3,(MethodInfo *)0x0);
      if (param_2 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
      goto LAB_101e4e4f;
      bVar2 = WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
                        (param_2,(MethodInfo *)0x0);
      if (!bVar2) {
        return true;
      }
    }
    if (param_1->___meshStack_6 != (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B *)0x0) {
      iVar4 = param_1->___meshStack_6->____size_2;
      while( true ) {
        if (9 < iVar4) {
          return false;
        }
        pLVar1 = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___meshStack_6;
        if (DAT_1151af2c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    ((uint *)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
          DAT_1151af2c = '\x01';
        }
        OVar5 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                il2cpp_codegen_object_new
                          (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
        Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6
                  ((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)OVar5,(MethodInfo *)0x0);
        if (((OVar5 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) ||
            (Mesh_MarkDynamic_m11FFDC281C64F11C36EDDA47BC132EAC95082999
                       ((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)OVar5,(MethodInfo *)0x0),
            pLVar1 == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0)) ||
           (List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      (pLVar1,OVar5,
                       List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73_RuntimeMethod_var),
           param_2 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) break;
        bVar2 = WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
                          (param_2,(MethodInfo *)0x0);
        if (!bVar2) {
          return true;
        }
        iVar4 = iVar4 + 1;
      }
    }
  }
LAB_101e4e4f:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
