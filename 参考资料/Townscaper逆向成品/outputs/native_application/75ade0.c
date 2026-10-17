// RVA 0x75ade0 | Placemaker.PropPlacer$$GetMeshWithVoxelType
// PDB: PropPlacer_GetMeshWithVoxelType_mEDD56BB10BFA73CB2DFA79634A65C942FD60935E
// Body: [[1075ade0, 1075b042] [1075b046, 1075b057]]
// Direct callees:
// 10068ec0 List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
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
PropPlacer_GetMeshWithVoxelType_mEDD56BB10BFA73CB2DFA79634A65C942FD60935E
          (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *param_1,
          Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *param_2,uchar param_3,MethodInfo *param_4)

{
  List_1_tAC387D40AA794C98425777894B362093CF4E78AC *pLVar1;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *pEVar2;
  List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B *pLVar3;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar4;
  int iVar5;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar6;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar7;
  int iVar8;
  uint uVar9;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar10;
  float fVar11;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_20;
  int local_10;

  if (DAT_1151ec46 == '\0') {
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
    DAT_1151ec46 = '\x01';
  }
  if (param_1->___materialMeshes_11 == (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B *)0x0)
  goto LAB_1075b053;
  iVar5 = List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared
                    ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                     param_1->___materialMeshes_11,(Il2CppObject *)param_2,
                     List_1_IndexOf_mC9BE962224B76210C52FE15DC35D75CFC71FE132_RuntimeMethod_var);
  if (iVar5 == -1) {
    pLVar1 = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___materialMeshes_11;
    if (pLVar1 == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_1075b053;
    iVar5 = pLVar1->____size_2;
    List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
              (pLVar1,(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)param_2,
               List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73_RuntimeMethod_var);
    if ((ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var->has_cctor != '\0'
        ) && (ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var);
    }
    pDVar6 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
             ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                       (ListPool_1_Get_mC058C3EA28BE749501B71D6C9F86C90181EBC5C6_RuntimeMethod_var);
    if ((param_2 == (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) ||
       (Mesh_GetUVs_m96301FD499B68EE943AAD288935AD0E3012B4E22
                  (param_2,0,(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pDVar6,
                   (MethodInfo *)0x0),
       pDVar6 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)) goto LAB_1075b053;
    pEVar2 = pDVar6->___entries_1;
    local_10 = 1;
    do {
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      OVar7 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
              Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared
                        ((Il2CppObject *)param_2,
                         Object_Instantiate_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m4D3AD1754716F16F51BC1FCA9B22759AB583CE56_RuntimeMethod_var
                        );
      iVar8 = 0;
      if (0 < (int)pEVar2) {
        do {
          VVar10 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                             ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pDVar6,iVar8,
                              List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var
                             );
          fVar11 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB
                             (local_20.___x_0,(MethodInfo *)0x0);
          local_20.___x_0 = VVar10.___x_0;
          local_20.___y_1 = VVar10.___y_1;
          VVar4.___y_1 = local_20.___y_1;
          VVar4.___x_0 = fVar11 * ((float)((uint)local_20.___x_0 &
                                          __xmm_7fffffff7fffffff7fffffff7fffffff) + __real_3f800000)
          ;
          List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                    ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pDVar6,iVar8,VVar4,
                     List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_RuntimeMethod_var);
          iVar8 = iVar8 + 1;
          local_20 = VVar10;
        } while (iVar8 < (int)pEVar2);
      }
      if (OVar7 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) goto LAB_1075b053;
      Mesh_SetUVs_mDDD16F3EC3434233E34F18221FFD47F8AEA7BCCE
                ((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)OVar7,0,
                 (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pDVar6,(MethodInfo *)0x0);
      if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___materialMeshes_11 ==
          (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_1075b053;
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___materialMeshes_11,
                 OVar7,List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73_RuntimeMethod_var);
      local_10 = local_10 + 1;
    } while (local_10 < 0x10);
    DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
              (pDVar6,
               ListPoolExtension_ReturnToPool_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD3F429D6B9C185725B5C44BFB5C3E7823D97F166_RuntimeMethod_var
              );
  }
  pLVar3 = param_1->___materialMeshes_11;
  if (pLVar3 != (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B *)0x0) {
    uVar9 = ((iVar5 >> 0x1f & 0xfU) + iVar5 & 0xfffffff0) + (uint)param_3;
    if (uVar9 < (uint)pLVar3->____size_2) {
      return pLVar3->____items_1->m_Items[uVar9];
    }
                    /* WARNING: Subroutine does not return */
    ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
              ((MethodInfo *)0x0);
  }
LAB_1075b053:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
