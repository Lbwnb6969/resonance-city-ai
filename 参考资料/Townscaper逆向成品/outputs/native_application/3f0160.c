// RVA 0x3f0160 | Placemaker.VoxelBounceEffect$$AddVoxel
// PDB: VoxelBounceEffect_AddVoxel_m4AB3A6CF2BDD5801A01C1485ACEAFA011507B25C
// Body: [[103f0160, 103f055f]]
// Direct callees:
// 10068ec0 List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10928710 List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
// 10a38cf0 Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

void __cdecl
VoxelBounceEffect_AddVoxel_m4AB3A6CF2BDD5801A01C1485ACEAFA011507B25C
          (VoxelBounceEffect_t9A0497D3BDA6C41FE20D42092A7FC74B8253BE98 *param_1,
          Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *param_2,
          Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *param_3,bool param_4,MethodInfo *param_5
          )

{
  List_1_tAC387D40AA794C98425777894B362093CF4E78AC *pLVar1;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar2;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar3;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar4;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar5;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar7;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar8;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar9;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar10;
  int iVar11;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar12;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_a8;
  undefined8 local_9c;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_90;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_80;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_70;
  undefined8 local_64;
  undefined8 local_58;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_50;
  undefined8 local_44;
  float local_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float local_2c;
  float fStack_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_14;
  float local_10;
  int local_c;
  float local_8;

  if (DAT_1151c911 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m97DC82736F0DD1CB475124571831124BBDC57847_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var)
    ;
    DAT_1151c911 = '\x01';
  }
  if ((((param_1->___verts_11 != (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0) &&
       (OVar10 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                 param_1->___verts_11->____size_2, local_14 = OVar10,
       param_3 != (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)) &&
      (param_3->___blitVerts_7 != (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0)) &&
     ((local_c = param_3->___blitVerts_7->____size_2,
      param_2 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0 &&
      (pTVar6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                           (MethodInfo *)0x0),
      pTVar6 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)))) {
    pVVar7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                       (&local_50,pTVar6,(MethodInfo *)0x0);
    local_9c._0_4_ = pVVar7->___x_2;
    local_9c._4_4_ = pVVar7->___y_3;
    local_20 = pVVar7->___z_4;
    local_10 = __real_bf000000;
    if (param_4) {
      local_10 = __real_3f000000;
    }
    local_18 = 0;
    local_58 = local_9c;
    while( true ) {
      iVar11 = local_18;
      if (!param_4) {
        iVar11 = 1 - local_18;
      }
      local_8 = (float)iVar11;
      local_1c = (float)local_18 + local_9c._4_4_;
      local_2c = (float)local_58;
      _local_2c = CONCAT44(local_1c,local_2c);
      local_24 = local_20;
      if ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)param_1->___verts_11 ==
          (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0) break;
      lVar4.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = (int)local_1c;
      lVar4.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (int)local_2c;
      lVar4.___goUQCKzJmFEdxabJRHcPmEGvlCq_2 = local_20;
      List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)param_1->___verts_11,lVar4,
                 List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
      pLVar1 = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___colors_12;
      local_80.___m_Left_0 = 0.0;
      local_80.___m_Right_1 = 0.0;
      local_80.___m_Top_2 = 0.0;
      local_80.___m_Bottom_3 = 0.0;
      TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                (&local_80,0.5,local_8,0.5,1.0,(MethodInfo *)0x0);
      CVar2.___g_1 = local_80.___m_Right_1;
      CVar2.___r_0 = local_80.___m_Left_0;
      CVar2.___b_2 = local_80.___m_Top_2;
      CVar2.___a_3 = local_80.___m_Bottom_3;
      OVar8 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
              Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(CVar2,(MethodInfo *)0x0)
      ;
      if (pLVar1 == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) break;
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                (pLVar1,OVar8,List_1_Add_m97DC82736F0DD1CB475124571831124BBDC57847_RuntimeMethod_var
                );
      local_8 = local_8 * __real_3f333333;
      iVar11 = 0;
      if (0 < local_c) {
        do {
          if (param_3->___blitVerts_7 == (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0)
          goto LAB_103f055b;
          VVar12 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                             (param_3->___blitVerts_7,iVar11,
                              List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var
                             );
          if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
          }
          pfVar9 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                             (&local_a8,(float2_tCB7B81181978EDE17722C533A55E345D9A413274)VVar12,0.0
                              ,(MethodInfo *)0x0);
          local_64._0_4_ = pfVar9->___x_0;
          local_64._4_4_ = pfVar9->___y_1;
          local_50.___z_4 = pfVar9->___z_2;
          local_70.___x_2 = pfVar9->___x_0;
          local_70.___y_3 = pfVar9->___y_1;
          local_38 = local_2c + (float)(undefined4)local_64;
          fStack_34 = local_1c + local_70.___y_3;
          local_30 = local_24 + local_50.___z_4;
          local_50._0_8_ = local_70._0_8_;
          local_44 = local_64;
          local_3c = local_50.___z_4;
          if ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)param_1->___verts_11 ==
              (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0) goto LAB_103f055b;
          lVar5.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = (int)fStack_34;
          lVar5.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (int)local_38;
          lVar5.___goUQCKzJmFEdxabJRHcPmEGvlCq_2 = local_30;
          List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                    ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)param_1->___verts_11,lVar5,
                     List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
          pLVar1 = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___colors_12;
          local_90.___m_Left_0 = 0.0;
          local_90.___m_Right_1 = 0.0;
          local_90.___m_Top_2 = 0.0;
          local_90.___m_Bottom_3 = 0.0;
          TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                    (&local_90,(float)local_44 * local_10 + __real_3f000000,local_8,
                     local_3c * local_10 + __real_3f000000,0.0,(MethodInfo *)0x0);
          CVar3.___g_1 = local_90.___m_Right_1;
          CVar3.___r_0 = local_90.___m_Left_0;
          CVar3.___b_2 = local_90.___m_Top_2;
          CVar3.___a_3 = local_90.___m_Bottom_3;
          OVar10 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                   Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4
                             (CVar3,(MethodInfo *)0x0);
          if (pLVar1 == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_103f055b;
          List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                    (pLVar1,OVar10,
                     List_1_Add_m97DC82736F0DD1CB475124571831124BBDC57847_RuntimeMethod_var);
          OVar10 = local_14;
          if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___tris_13 ==
              (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_103f055b;
          List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                    ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___tris_13,
                     local_14,List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var
                    );
          if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___tris_13 ==
              (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_103f055b;
          iVar11 = iVar11 + 1;
          List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                    ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___tris_13,
                     (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                     (iVar11 + (int)OVar10),
                     List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
          if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___tris_13 ==
              (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_103f055b;
          List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                    ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___tris_13,
                     (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                     ((int)OVar10 + 1 + iVar11 % local_c),
                     List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
        } while (iVar11 < local_c);
      }
      local_18 = local_18 + 1;
      OVar10 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)OVar10 + 1 + local_c)
      ;
      local_14 = OVar10;
      if (1 < local_18) {
        return;
      }
    }
  }
LAB_103f055b:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
