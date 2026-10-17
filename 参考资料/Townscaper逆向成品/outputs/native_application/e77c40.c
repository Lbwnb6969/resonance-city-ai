// RVA 0xe77c40 | Placemaker.Graphs.Graph$$Save
// PDB: Graph_Save_m07C6707CB3FA81485C1705D028ABA557CE1711EA
// Body: [[10e77c40, 10e77f91]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10836080 ExtraMath_Center_mA17CB832B764FF16B283E1D50FFD9BD6762D680E
// 10928710 List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
// 10f04a30 String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
// 1103ef20 List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_gshared

void __cdecl
Graph_Save_m07C6707CB3FA81485C1705D028ABA557CE1711EA
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *param_2,MethodInfo *param_3)

{
  ulonglong uVar1;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar2;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar3;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar4;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *pIVar8;
  String_t *pSVar9;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar10;
  int iVar11;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar12;
  int iVar13;
  SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *pSVar14;
  undefined8 uVar15;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iStack_3c;
  undefined8 local_30;
  ulonglong local_24;
  undefined4 local_1c;
  SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *pSStack_18;
  undefined4 local_14;
  int iStack_10;
  int local_c;
  int local_8;

  if (DAT_11522840 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mBC1BDC84024AB09ECE18905C216A3123CA3E0B50_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m6BB46856D8BA929F469492C9CA2F7CAFFA6E3B99_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m3849B6EE17AA2EB6BD3221159E97746E36B4E8DF_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m3A42793E42914F1251A2F05F7818CC40E397D76E_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral01A6A7DF2E7F9CD18B5A2D05E9CEF496EC94D9D0);
    DAT_11522840 = '\x01';
  }
  pSVar14 = param_2;
  local_24 = 0;
  local_1c = 0;
  if ((param_2 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) &&
     ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_2->___voxels_5 !=
      (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0)) {
    List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
              ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_2->___voxels_5,
               List_1_Clear_m3A42793E42914F1251A2F05F7818CC40E397D76E_RuntimeMethod_var);
    if (pSVar14->___corners_4 != (List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *)0x0) {
      List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pSVar14->___corners_4,
                 List_1_Clear_m3849B6EE17AA2EB6BD3221159E97746E36B4E8DF_RuntimeMethod_var);
      if (param_1->___corners_6 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        iStack_10 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                              (param_1->___corners_6,(MethodInfo *)0x0);
        if (0 < iStack_10) {
          local_c = 0;
          do {
            if ((param_1->___corners_6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0
                ) || (pTVar10 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                          (param_1->___corners_6,local_c,(MethodInfo *)0x0),
                     pTVar10 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
            goto LAB_10e77f8d;
            iVar11 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                               (pTVar10,(MethodInfo *)0x0);
            if (iVar11 != 0) {
              pIVar6 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar10,
                                  Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
                                 );
              if (pIVar6 == (Il2CppObject *)0x0) goto LAB_10e77f8d;
              local_24 = *(ulonglong *)&pIVar6[1].monitor;
              if ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pSVar14->___corners_4 ==
                  (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0) goto LAB_10e77f8d;
              lVar4.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._0_2_ = (short)iVar11;
              lVar4._0_8_ = *(undefined8 *)&pIVar6[1].monitor;
              lVar4.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ = (short)((uint)iVar11 >> 0x10);
              List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                        ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pSVar14->___corners_4,
                         lVar4,
                         List_1_Add_m6BB46856D8BA929F469492C9CA2F7CAFFA6E3B99_RuntimeMethod_var);
              iVar13 = 0;
              pSVar14 = param_2;
              if (0 < iVar11) {
                do {
                  pTVar12 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                      (pTVar10,iVar13,(MethodInfo *)0x0);
                  if (pTVar12 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                  goto LAB_10e77f8d;
                  pIVar6 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar12
                                      ,
                                      Component_GetComponent_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mBC1BDC84024AB09ECE18905C216A3123CA3E0B50_RuntimeMethod_var
                                     );
                  if (pIVar6 == (Il2CppObject *)0x0) goto LAB_10e77f8d;
                  local_8 = CONCAT22(local_8._2_2_,
                                     *(V_t2C4FF2B994717C0763FC7587F2B998766A7145F5 *)
                                      &pIVar6[1].monitor);
                  if (param_2->___voxels_5 ==
                      (List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *)0x0) goto LAB_10e77f8d;
                  List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_gshared
                            (param_2->___voxels_5,
                             *(V_t2C4FF2B994717C0763FC7587F2B998766A7145F5 *)&pIVar6[1].monitor,
                             List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_RuntimeMethod_var)
                  ;
                  iVar13 = iVar13 + 1;
                  pSVar14 = param_2;
                } while (iVar13 < iVar11);
              }
            }
            local_c = local_c + 1;
            if (iStack_10 <= local_c) {
              return;
            }
          } while( true );
        }
        iVar11 = (param_1->___bounds_28).___c0_0.___x_0;
        iStack_3c.___x_0 = (param_1->___bounds_28).___c0_0.___y_1;
        iStack_3c.___y_1 = (param_1->___bounds_28).___c0_0.___z_2;
        iStack_3c.___z_2 = (param_1->___bounds_28).___c1_1.___x_0;
        uVar15._0_4_ = (param_1->___bounds_28).___c1_1.___y_1;
        uVar15._4_4_ = (param_1->___bounds_28).___c1_1.___z_2;
        local_14 = (undefined4)uVar15;
        iStack_10 = uVar15._4_4_;
        if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
          uVar15 = CONCAT44(iStack_10,local_14);
        }
        iVar2.___c0_0.___y_1 = iStack_3c.___x_0;
        iVar2.___c0_0.___x_0 = iVar11;
        iVar2.___c0_0.___z_2 = iStack_3c.___y_1;
        iVar2.___c1_1.___x_0 = iStack_3c.___z_2;
        iVar2.___c1_1.___y_1 = (int)uVar15;
        iVar2.___c1_1.___z_2._0_2_ = (short)((ulonglong)uVar15 >> 0x20);
        iVar2.___c1_1.___z_2._2_2_ = (short)((ulonglong)uVar15 >> 0x30);
        piVar5 = ExtraMath_Center_mA17CB832B764FF16B283E1D50FFD9BD6762D680E
                           (&iStack_3c,iVar2,(MethodInfo *)0x0);
        uVar1._0_4_ = piVar5->___x_0;
        uVar1._4_4_ = piVar5->___y_1;
        iVar11 = piVar5->___z_2;
        local_30 = uVar1;
        local_24 = uVar1;
        pSStack_18 = (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)(undefined4)uVar1;
        local_14 = uVar1._4_4_;
        if ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pSVar14->___corners_4 !=
            (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0) {
          lVar3.___goUQCKzJmFEdxabJRHcPmEGvlCq_2 = 0.0;
          lVar3.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (undefined4)uVar1;
          lVar3.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = uVar1._4_4_;
          List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                    ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pSVar14->___corners_4,lVar3
                     ,List_1_Add_m6BB46856D8BA929F469492C9CA2F7CAFFA6E3B99_RuntimeMethod_var);
          if (`struct_String_t*___cdecl_int3_ToString_m174725CCEE10A8880C17E44DB21966CF484EE667_inline(int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921*,MethodInfo_const*)'
              ::__l2::s_Il2CppMethodInitialized == false) {
            il2cpp_codegen_initialize_runtime_metadata
                      ((uint *)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)
            ;
            il2cpp_codegen_initialize_runtime_metadata
                      ((uint *)&_stringLiteral0245A598901314C98F3EE8F1FABA26B281081D8E);
            `struct_String_t*___cdecl_int3_ToString_m174725CCEE10A8880C17E44DB21966CF484EE667_inline(int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921*,MethodInfo_const*)'
            ::__l2::s_Il2CppMethodInitialized = true;
          }
          param_2 = (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)(undefined4)uVar1;
          pIVar6 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                    ,&param_2);
          local_c = local_30._4_4_;
          pIVar7 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                    ,&local_c);
          local_8 = iVar11;
          pIVar8 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                    ,&local_8);
          pSVar9 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                             (_stringLiteral0245A598901314C98F3EE8F1FABA26B281081D8E,pIVar6,pIVar7,
                              pIVar8,(MethodInfo *)0x0);
          pSVar9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                             (_stringLiteral01A6A7DF2E7F9CD18B5A2D05E9CEF496EC94D9D0,pSVar9,
                              (MethodInfo *)0x0);
          if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
              0)) {
            il2cpp_runtime_class_init
                      (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
          }
          Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
                    ((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_10e77f8d:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
