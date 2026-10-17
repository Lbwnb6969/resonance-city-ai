// RVA 0x3f6be0 | Placemaker.Props.Window$$GetMeshWithVoxelType
// PDB: Window_GetMeshWithVoxelType_m19B4FC22FA3AD7CCDF59CFE5FB6C22F44F09BDFB
// Body: [[103f6be0, 103f6fb2] [103f6fb6, 103f6fc7]]
// Direct callees:
// 10068ec0 List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10195ff0 _CIfmod
// 10441630 DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// 105d0600 ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
// 10a44440 Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB
// 10a47630 Mesh_GetUVs_m96301FD499B68EE943AAD288935AD0E3012B4E22
// 10a48560 Mesh_SetUVs_mDDD16F3EC3434233E34F18221FFD47F8AEA7BCCE
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10c789f0 Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
// 11032cc0 List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared
// 1108ddc0 List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared

Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __cdecl
Window_GetMeshWithVoxelType_m19B4FC22FA3AD7CCDF59CFE5FB6C22F44F09BDFB
          (Window_tF268360B358A768EB2632DE63E5B7351562643B7 *param_1,
          Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *param_2,uchar param_3,int param_4,
          MethodInfo *param_5)

{
  List_1_tAC387D40AA794C98425777894B362093CF4E78AC *pLVar1;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *pEVar2;
  int iVar3;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar4;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar9;
  float fVar10;
  float fVar11;
  float local_2c;
  float local_28;
  int local_c;

  if (DAT_1151c927 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD3F429D6B9C185725B5C44BFB5C3E7823D97F166_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_mC058C3EA28BE749501B71D6C9F86C90181EBC5C6_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_IndexOf_mC9BE962224B76210C52FE15DC35D75CFC71FE132_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mF86A27C4FC0596167E330736ED4DED4A4D3D5240_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m5CE3970E0F3AC573EEB484A6AEA4F62BA9218499_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Object_Instantiate_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m4D3AD1754716F16F51BC1FCA9B22759AB583CE56_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Window_tF268360B358A768EB2632DE63E5B7351562643B7_il2cpp_TypeInfo_var);
    DAT_1151c927 = '\x01';
  }
  if ((Window_tF268360B358A768EB2632DE63E5B7351562643B7_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Window_tF268360B358A768EB2632DE63E5B7351562643B7_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Window_tF268360B358A768EB2632DE63E5B7351562643B7_il2cpp_TypeInfo_var);
  }
  if (*(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)
       Window_tF268360B358A768EB2632DE63E5B7351562643B7_il2cpp_TypeInfo_var->static_fields ==
      (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) goto LAB_103f6fc3;
  iVar3 = List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared
                    (*(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)
                      Window_tF268360B358A768EB2632DE63E5B7351562643B7_il2cpp_TypeInfo_var->
                      static_fields,(Il2CppObject *)param_2,
                     List_1_IndexOf_mC9BE962224B76210C52FE15DC35D75CFC71FE132_RuntimeMethod_var);
  if (iVar3 == -1) {
    if ((Window_tF268360B358A768EB2632DE63E5B7351562643B7_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Window_tF268360B358A768EB2632DE63E5B7351562643B7_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Window_tF268360B358A768EB2632DE63E5B7351562643B7_il2cpp_TypeInfo_var);
    }
    pLVar1 = *(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)
              Window_tF268360B358A768EB2632DE63E5B7351562643B7_il2cpp_TypeInfo_var->static_fields;
    if (pLVar1 == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_103f6fc3;
    iVar3 = pLVar1->____size_2;
    List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
              (pLVar1,(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)param_2,
               List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73_RuntimeMethod_var);
    if ((ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var->has_cctor != '\0'
        ) && (ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var);
    }
    pDVar4 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
             ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                       (ListPool_1_Get_mC058C3EA28BE749501B71D6C9F86C90181EBC5C6_RuntimeMethod_var);
    if ((param_2 == (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) ||
       (Mesh_GetUVs_m96301FD499B68EE943AAD288935AD0E3012B4E22
                  (param_2,0,(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pDVar4,
                   (MethodInfo *)0x0),
       pDVar4 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)) goto LAB_103f6fc3;
    pEVar2 = pDVar4->___entries_1;
    iVar8 = 1;
    local_c = 0;
    do {
      do {
        iVar7 = 0;
        if (0 < (int)pEVar2) {
          do {
            VVar9 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                              ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pDVar4,iVar7,
                               List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var
                              );
            _CIfmod();
            local_2c = VVar9.___x_0;
            fVar10 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB
                               (local_2c,(MethodInfo *)0x0);
            local_28 = VVar9.___y_1;
            _CIfmod();
            fVar11 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB
                               (local_28,(MethodInfo *)0x0);
            VVar9.___y_1 = fVar11 * ((float)extraout_ST0_00 + (float)iVar8);
            VVar9.___x_0 = fVar10 * ((float)extraout_ST0 + (float)local_c);
            List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                      ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pDVar4,iVar7,VVar9,
                       List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_RuntimeMethod_var);
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)pEVar2);
        }
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        OVar5 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared
                          ((Il2CppObject *)param_2,
                           Object_Instantiate_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m4D3AD1754716F16F51BC1FCA9B22759AB583CE56_RuntimeMethod_var
                          );
        if (OVar5 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0)
        goto LAB_103f6fc3;
        Mesh_SetUVs_mDDD16F3EC3434233E34F18221FFD47F8AEA7BCCE
                  ((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)OVar5,0,
                   (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pDVar4,(MethodInfo *)0x0);
        if ((Window_tF268360B358A768EB2632DE63E5B7351562643B7_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Window_tF268360B358A768EB2632DE63E5B7351562643B7_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Window_tF268360B358A768EB2632DE63E5B7351562643B7_il2cpp_TypeInfo_var);
        }
        if (*(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)
             Window_tF268360B358A768EB2632DE63E5B7351562643B7_il2cpp_TypeInfo_var->static_fields ==
            (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_103f6fc3;
        List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                  (*(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)
                    Window_tF268360B358A768EB2632DE63E5B7351562643B7_il2cpp_TypeInfo_var->
                    static_fields,OVar5,
                   List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73_RuntimeMethod_var);
        iVar8 = iVar8 + 1;
      } while (iVar8 < 4);
      iVar8 = 0;
      local_c = local_c + 1;
    } while (local_c < 0xf);
    DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
              (pDVar4,
               ListPoolExtension_ReturnToPool_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD3F429D6B9C185725B5C44BFB5C3E7823D97F166_RuntimeMethod_var
              );
  }
  uVar6 = param_4 & 0x80000003;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
  }
  uVar6 = uVar6 + ((iVar3 / 0x3c) * 0xf + (uint)param_3) * 4;
  if ((Window_tF268360B358A768EB2632DE63E5B7351562643B7_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Window_tF268360B358A768EB2632DE63E5B7351562643B7_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Window_tF268360B358A768EB2632DE63E5B7351562643B7_il2cpp_TypeInfo_var);
  }
  iVar3 = *(int *)Window_tF268360B358A768EB2632DE63E5B7351562643B7_il2cpp_TypeInfo_var->
                  static_fields;
  if (iVar3 != 0) {
    if (uVar6 < *(uint *)(iVar3 + 0xc)) {
      return *(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 **)
              (*(int *)(iVar3 + 8) + 0x10 + uVar6 * 4);
    }
                    /* WARNING: Subroutine does not return */
    ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
              ((MethodInfo *)0x0);
  }
LAB_103f6fc3:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
