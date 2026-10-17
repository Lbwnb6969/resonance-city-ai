// RVA 0x305520 | Placemaker.Ui.ToolsButton$$Setup
// PDB: ToolsButton_Setup_m9A2D9DE201774292F533ED36D8245D248FBE956A
// Body: [[10305520, 10305730]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10a39900 Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

void __cdecl
ToolsButton_Setup_m9A2D9DE201774292F533ED36D8245D248FBE956A
          (ToolsButton_t82FD1730196D131A12C4C86C08ACDAA30952BF26 *param_1,MethodInfo *param_2)

{
  Il2CppClass *pIVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  float *pfVar11;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar12;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar14;
  float local_34;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_30;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_24;
  undefined8 local_14;
  undefined8 local_c;

  if (DAT_1151c232 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var
              );
    DAT_1151c232 = '\x01';
  }
  if (param_1->___foreground_13 !=
      (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)0x0) {
    pIVar9 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___foreground_13,
                        Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var
                       );
    if (param_1->___backround_12 !=
        (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)0x0) {
      pIVar10 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                           param_1->___backround_12,
                           Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var
                          );
      if (pIVar9 != (Il2CppObject *)0x0) {
        pIVar1 = (pIVar9->field0_0x0).klass;
        uVar2._0_2_ = pIVar1[1].interfaces_count;
        uVar2._2_2_ = pIVar1[1].interface_offsets_count;
        pfVar11 = (float *)(**(code **)&pIVar1[1].nested_type_count)(&local_34,pIVar9,uVar2);
        local_34 = *pfVar11;
        VStack_30.___x_2 = pfVar11[1];
        VStack_30.___y_3 = pfVar11[2];
        VStack_30.___z_4 = pfVar11[3];
        if (pIVar10 != (Il2CppObject *)0x0) {
          pIVar1 = (pIVar10->field0_0x0).klass;
          uVar3._0_2_ = pIVar1[1].interfaces_count;
          uVar3._2_2_ = pIVar1[1].interface_offsets_count;
          pCVar12 = (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)
                    (**(code **)&pIVar1[1].nested_type_count)(&local_24,pIVar10,uVar3);
          CVar6.___g_1 = VStack_30.___x_2;
          CVar6.___r_0 = local_34;
          CVar6.___b_2 = VStack_30.___y_3;
          CVar6.___a_3 = VStack_30.___z_4;
          pCVar12 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197
                              (&local_24,CVar6,*pCVar12,0.5,(MethodInfo *)0x0);
          pIVar1 = (pIVar9->field0_0x0).klass;
          local_34 = pCVar12->___r_0;
          VStack_30.___x_2 = pCVar12->___g_1;
          VStack_30.___y_3 = pCVar12->___b_2;
          VStack_30.___z_4 = pCVar12->___a_3;
          uVar4._0_1_ = pIVar1[1].naturalAligment;
          uVar4._1_1_ = pIVar1[1].packingSize;
          uVar4._2_2_ = *(undefined2 *)&pIVar1[1].field_0xba;
          (**(code **)&pIVar1[1].typeHierarchyDepth)
                    (pIVar9,pCVar12->___r_0,pCVar12->___g_1,pCVar12->___b_2,pCVar12->___a_3,uVar4);
          pIVar1 = (pIVar10->field0_0x0).klass;
          uVar5._0_1_ = pIVar1[1].naturalAligment;
          uVar5._1_1_ = pIVar1[1].packingSize;
          uVar5._2_2_ = *(undefined2 *)&pIVar1[1].field_0xba;
          (**(code **)&pIVar1[1].typeHierarchyDepth)
                    (pIVar10,local_34,VStack_30.___x_2,VStack_30.___y_3,VStack_30.___z_4,uVar5);
          if (param_1->___foreground_13 !=
              (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)0x0) {
            pTVar13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                 param_1->___foreground_13,(MethodInfo *)0x0);
            if (pTVar13 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              pVVar14 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                                  (&VStack_30,pTVar13,(MethodInfo *)0x0);
              local_c._0_4_ = pVVar14->___x_2;
              local_c._4_4_ = pVVar14->___y_3;
              local_24.___a_3 = pVVar14->___z_4;
              if (param_1->___backround_12 !=
                  (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)0x0) {
                pTVar13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                     param_1->___backround_12,(MethodInfo *)0x0);
                if (pTVar13 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                  pVVar14 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                                      (&VStack_30,pTVar13,(MethodInfo *)0x0);
                  local_24.___a_3 = 1.2;
                  local_14._0_4_ = pVVar14->___x_2;
                  local_14._4_4_ = pVVar14->___y_3;
                  VStack_30.___z_4 = 0.9;
                  if (param_1->___foreground_13 !=
                      (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)0x0) {
                    pTVar13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                         param_1->___foreground_13,(MethodInfo *)0x0);
                    if (pTVar13 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                      VVar7.___z_4 = local_24.___a_3;
                      VVar7.___x_2 = (float)(undefined4)local_c;
                      VVar7.___y_3 = (float)local_c._4_4_;
                      Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                                (pTVar13,VVar7,(MethodInfo *)0x0);
                      if (param_1->___backround_12 !=
                          (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)0x0) {
                        pTVar13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                             param_1->___backround_12,(MethodInfo *)0x0);
                        if (pTVar13 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                          VVar8.___z_4 = VStack_30.___z_4;
                          VVar8.___x_2 = (float)(undefined4)local_14;
                          VVar8.___y_3 = (float)local_14._4_4_;
                          Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                                    (pTVar13,VVar8,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
