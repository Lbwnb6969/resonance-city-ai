// RVA 0x3f71f0 | Placemaker.Props.Window$$Placemaker.Props.IPropModifier.Apply
// PDB: Window_Placemaker_Props_IPropModifier_Apply_m1B0F8E498CAEE10844234B920731CFA8C6FAB8BB
// Body: [[103f71f0, 103f72f5]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102fb3b0 Square_GetCorner_mDF1C111277CAF42FA6601F1A4D8001776B800E93
// 103f6be0 Window_GetMeshWithVoxelType_m19B4FC22FA3AD7CCDF59CFE5FB6C22F44F09BDFB
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a437e0 Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
// 10a46900 MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958

void __cdecl
Window_Placemaker_Props_IPropModifier_Apply_m1B0F8E498CAEE10844234B920731CFA8C6FAB8BB
          (Window_tF268360B358A768EB2632DE63E5B7351562643B7 *param_1,
          WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_2,
          Random_tAA667D9E4475C884ADEB5B16274B7D4C4E90CC12 *param_3,
          PropModifierStruct_tEA20DD1E5AC1C0D4BBC7D9B440411A7A5CE1CF53 param_4,MethodInfo *param_5)

{
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar1;
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *pCVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar4;
  int iVar5;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1c;
  undefined8 local_10;

  if (DAT_1151c928 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
              );
    DAT_1151c928 = '\x01';
  }
  pMVar1 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
           Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
                     );
  if (param_4.___square_0 != (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0) {
    pCVar2 = Square_GetCorner_mDF1C111277CAF42FA6601F1A4D8001776B800E93
                       (param_4.___square_0,param_4.___cornerIndex_3 & 3,(MethodInfo *)0x0);
    if (param_4.___qube_1 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) {
      pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_4.___qube_1,
                          (MethodInfo *)0x0);
      if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        pVVar4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                           (&local_1c,pTVar3,(MethodInfo *)0x0);
        local_10._0_4_ = pVVar4->___x_2;
        local_10._4_4_ = pVVar4->___y_3;
        iVar5 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                          ((float)local_10._4_4_,(MethodInfo *)0x0);
        if (pCVar2 != (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) {
          iVar5 = Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0
                            ((pCVar2->___hexPos_4).___x_0 * 0x4c7f6dd1 +
                             (pCVar2->___hexPos_4).___y_1 * 0x4822a3e9 + iVar5 * -0x553c3da3 +
                             -0x2de2f6bb,(MethodInfo *)0x0);
          if (pMVar1 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) {
            pMVar6 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                               (pMVar1,(MethodInfo *)0x0);
            pMVar6 = Window_GetMeshWithVoxelType_m19B4FC22FA3AD7CCDF59CFE5FB6C22F44F09BDFB
                               (param_1,pMVar6,param_4.___cornerValue_5,iVar5,(MethodInfo *)0x0);
            MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                      (pMVar1,pMVar6,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
