// RVA 0x4bca30 | Placemaker.Graphs.Corner$$AddSquare
// PDB: Corner_AddSquare_m0897B19262311384E8B700D7E5337E0B90EF3928
// Body: [[104bca30, 104bcbac] [104bcbb0, 104bccef]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10196a10 _CIatan2
// 1066f730 Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
// 110352e0 List_1_Insert_m754F79C99EC14024CB7D424CB588B3923719F992_gshared

void __cdecl
Corner_AddSquare_m0897B19262311384E8B700D7E5337E0B90EF3928
          (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *param_1,
          Square_tD1B7B6748B35059E198069769341DA3192352B8F *param_2,MethodInfo *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar3;
  float fVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar6;
  uint uVar7;
  List_1_tAC387D40AA794C98425777894B362093CF4E78AC *pLVar8;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_50;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_44;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_38;
  undefined8 local_2c;
  float local_24;
  float local_20;
  undefined8 uStack_1c;
  float local_14;
  undefined8 uStack_10;
  float local_8;

  if (DAT_1151d0f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mC6A5E8994E791266A70B048AB7974F305426D823_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Insert_m0B55D249B2D41BECC6F44285AFD85C046D112E00_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mBE1EB191A0C65AEC9394B95448BE10D5F8D60CB6_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m88F84B8C8231023D91AE957F85606EBA9A563083_RuntimeMethod_var)
    ;
    DAT_1151d0f5 = '\x01';
  }
  pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pVVar6 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                       (&local_44,pTVar5,(MethodInfo *)0x0);
    local_2c._0_4_ = pVVar6->___x_2;
    local_2c._4_4_ = pVVar6->___y_3;
    local_24 = pVVar6->___z_4;
    if (param_2 != (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0) {
      pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                          (MethodInfo *)0x0);
      if (pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        pVVar6 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                           (&local_44,pTVar5,(MethodInfo *)0x0);
        uVar1 = pVVar6->___x_2;
        uVar2 = pVVar6->___y_3;
        uStack_1c._4_4_ = pVVar6->___z_4;
        local_20 = (float)uVar1;
        uStack_1c._0_4_ = uVar2;
        local_14 = (float)uVar1;
        uStack_10._0_4_ = uVar2;
        uStack_10._4_4_ = uStack_1c._4_4_;
        if (`float___cdecl_math_atan2_mFFA7942F9F41993E3F752E630DB45D0B4104034C_inline(float,float,MethodInfo_const*)'
            ::__l2::s_Il2CppMethodInitialized == false) {
          il2cpp_codegen_initialize_runtime_metadata
                    ((uint *)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
          `float___cdecl_math_atan2_mFFA7942F9F41993E3F752E630DB45D0B4104034C_inline(float,float,MethodInfo_const*)'
          ::__l2::s_Il2CppMethodInitialized = true;
        }
        local_8 = local_20 - (float)local_2c;
        uStack_10._4_4_ = uStack_10._4_4_ - local_24;
        if ((Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->has_cctor != '\0')
           && (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->cctor_finished ==
               0)) {
          il2cpp_runtime_class_init
                    (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
        }
        uStack_10 = (double)uStack_10._4_4_;
        _CIatan2();
        pLVar8 = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___squares_5;
        uVar7 = 0;
        uStack_1c = (double)extraout_ST0;
        if (pLVar8 != (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) {
          local_8 = 2.24208e-44;
          do {
            fVar4 = local_8;
            if (pLVar8->____size_2 <= (int)uVar7) {
              if (pLVar8 != (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) {
                List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                          (pLVar8,(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)param_2,
                           List_1_Add_mC6A5E8994E791266A70B048AB7974F305426D823_RuntimeMethod_var);
                return;
              }
              break;
            }
            if (pLVar8 == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) break;
            if ((uint)pLVar8->____size_2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            pCVar3 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                      ((int)&((OrientedModuleU5BU5D_t5FB3F51015D20D376230E56F126039FF90EE44C4 *)
                             (pLVar8->____items_1->m_Items + -4))->_padding_ + (int)local_8);
            if (pCVar3 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) break;
            pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               (pCVar3,(MethodInfo *)0x0);
            if (pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
            pVVar6 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                               (&local_50,pTVar5,(MethodInfo *)0x0);
            local_44.___x_2 = pVVar6->___x_2;
            local_44.___y_3 = pVVar6->___y_3;
            local_44.___z_4 = pVVar6->___z_4;
            local_38._0_8_ = local_44._0_8_;
            if (`float___cdecl_math_atan2_mFFA7942F9F41993E3F752E630DB45D0B4104034C_inline(float,float,MethodInfo_const*)'
                ::__l2::s_Il2CppMethodInitialized == false) {
              il2cpp_codegen_initialize_runtime_metadata
                        ((uint *)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var
                        );
              `float___cdecl_math_atan2_mFFA7942F9F41993E3F752E630DB45D0B4104034C_inline(float,float,MethodInfo_const*)'
              ::__l2::s_Il2CppMethodInitialized = true;
            }
            uStack_10._4_4_ = local_38.___x_2 - (float)local_2c;
            local_8 = local_44.___z_4 - local_24;
            if ((Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
            }
            pLVar8 = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___squares_5;
            uStack_10 = (double)local_8;
            _CIatan2();
            uStack_10 = (double)extraout_ST0_00;
            if ((float)uStack_1c < (float)extraout_ST0_00) {
              if (pLVar8 != (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) {
                List_1_Insert_m754F79C99EC14024CB7D424CB588B3923719F992_gshared
                          (pLVar8,uVar7,
                           (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)param_2,
                           List_1_Insert_m0B55D249B2D41BECC6F44285AFD85C046D112E00_RuntimeMethod_var
                          );
                return;
              }
              break;
            }
            local_8 = (float)((int)fVar4 + 4);
            uVar7 = uVar7 + 1;
          } while (pLVar8 != (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
