// RVA 0x805ae0 | Placemaker.Props.PropWireFlagMesh$$Setup
// PDB: PropWireFlagMesh_Setup_m748F4EE0AB9B78D8BB554DC20D5EBBEAA158FB8A
// Body: [[10805ae0, 1080637a]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101e4ba0 WorldMeshes_GetMesh_m35A9AB7BEC53E705DCA10480B67C29B93947DE7E
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10441630 DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// 105cffe0 ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
// 10674430 Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
// 106744d0 Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44
// 10928710 List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
// 10a47c10 Mesh_SetNormals_m10B6C93B59F4BC8F5D959CD79494F3FCDB67B168
// 10a482b0 Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129
// 10a48560 Mesh_SetUVs_mDDD16F3EC3434233E34F18221FFD47F8AEA7BCCE
// 10a48620 Mesh_SetVertices_m08C90A1665735C09E15E17DE1A8CD9F196762BCD
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
// 11087e60 List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
PropWireFlagMesh_Setup_m748F4EE0AB9B78D8BB554DC20D5EBBEAA158FB8A
          (PropWireFlagMesh_tF947C4B731B76D44E46A94372A9502CB5F4822C5 *param_1,
          WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_2,
          PropWire_t2A3274AA576D94C89E0731D63E12F3FC4B112F5B *param_3,float param_4,
          MethodInfo *param_5)

{
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar1;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar2;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar3;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar4;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar5;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar6;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar7;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar8;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar9;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar10;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar11;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar12;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar13;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar14;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar15;
  uint uVar16;
  PropWireAnchor_tCB7650546235D6E4FD7E7A3A450C2D9B9491BF1A *pPVar17;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 *plVar18;
  int iVar19;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar20;
  float fVar21;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_180;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_170;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_160;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_150;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_140 [2];
  float local_124;
  float local_118;
  float local_10c;
  float local_100;
  float local_f4;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e4;
  float local_dc;
  undefined8 local_d8;
  undefined8 local_cc;
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  undefined8 local_9c;
  float local_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  uint uStack_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_50;
  float local_44;
  float local_40;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *local_3c;
  int local_38;
  undefined8 local_34;
  float local_2c;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_28;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_24;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_20;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_1c;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_18;
  float local_14;

  if (DAT_1151f1f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD3F429D6B9C185725B5C44BFB5C3E7823D97F166_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m11374E7CCB77FCB77D3C672C64C47DDA6EF2BD06_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_m9F28C3E654977D961EDC9DB9F0C86C84FDE997A3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_mD475E0F293B8576520F79BAC8835B3FDA8F889A9_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_mDACBB18E39AD629118308EC0D7936A3FD5B73A91_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    DAT_1151f1f4 = '\x01';
  }
  local_50.___y_3 = 0.0;
  if ((param_2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (param_2->___worldMeshes_9 != (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *)0x0)) {
    pMVar12 = WorldMeshes_GetMesh_m35A9AB7BEC53E705DCA10480B67C29B93947DE7E
                        (param_2->___worldMeshes_9,(MethodInfo *)0x0);
    local_3c = pMVar12;
    pMVar13 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
              Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                         Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
                        );
    if (pMVar13 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) {
      MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                (pMVar13,pMVar12,(MethodInfo *)0x0);
      local_38 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                           (param_4 * ___real_40a00000,(MethodInfo *)0x0);
      local_38 = local_38 * 2;
      iVar19 = (local_38 + 1) * 2 + 2;
      local_18 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((local_38 + 1) * 6);
      if ((ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var->cctor_finished
          == 0)) {
        il2cpp_runtime_class_init
                  (ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var);
      }
      local_1c = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                 ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
                           (iVar19,
                            ListPool_1_Get_m9F28C3E654977D961EDC9DB9F0C86C84FDE997A3_RuntimeMethod_var
                           );
      local_20 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                 ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
                           (iVar19,
                            ListPool_1_Get_m9F28C3E654977D961EDC9DB9F0C86C84FDE997A3_RuntimeMethod_var
                           );
      if ((ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var->cctor_finished
          == 0)) {
        il2cpp_runtime_class_init
                  (ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var);
      }
      local_24 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                 ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
                           (iVar19,
                            ListPool_1_Get_mD475E0F293B8576520F79BAC8835B3FDA8F889A9_RuntimeMethod_var
                           );
      if ((ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->cctor_finished
          == 0)) {
        il2cpp_runtime_class_init
                  (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
      }
      pDVar14 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
                          ((int)local_18,
                           ListPool_1_Get_mDACBB18E39AD629118308EC0D7936A3FD5B73A91_RuntimeMethod_var
                          );
      local_34 = 0;
      iVar19 = local_38 + 1;
      local_2c = (float)((uint)param_4 ^ __xmm_80000000800000008000000080000000) * __real_3f000000;
      local_50.___y_3 = __real_bcf5c28f - param_4 * __real_3c23d70a;
      local_50.___x_2 = 0.0;
      fVar21 = local_50.___x_2;
      local_50.___x_2 = 0.0;
      local_50.___z_4 = (__real_3f800000 / (float)iVar19) * param_4;
      local_18.___moduleIndex_0 = 0;
      local_18.___flags_1 = '\0';
      local_18._3_1_ = 0;
      local_54 = (__real_3f800000 / (float)local_38) *
                 (float)((uint)local_50.___y_3 ^ __xmm_80000000800000008000000080000000);
      local_54 = local_54 + local_54;
      local_28 = pDVar14;
      if (iVar19 < 0) {
LAB_108061fd:
        local_50.___x_2 = fVar21;
        local_14 = 0.0;
        if (0 < iVar19) {
          local_18.___moduleIndex_0 = 2;
          local_18.___flags_1 = '\0';
          local_18._3_1_ = 0;
          do {
            OVar20 = local_18;
            if (pDVar14 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
            goto LAB_10806376;
            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar14,
                       (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                       ((int)local_18 + -2),
                       List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar14,OVar20,
                       List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
            OVar20 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)OVar20 + 2);
            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar14,OVar20,
                       List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar14,OVar20,
                       List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
            OVar20 = local_18;
            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar14,local_18,
                       List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar14,
                       (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)OVar20 + 4),
                       List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar14,
                       (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)OVar20 + -1),
                       List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_28,
                       (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)OVar20 + 3),
                       List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_28,
                       (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)OVar20 + 1),
                       List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_28,
                       (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)OVar20 + 1),
                       List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
            pDVar14 = local_28;
            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_28,
                       (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)OVar20 + 3),
                       List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
            OVar20 = local_18;
            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar14,
                       (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)local_18 + 5)
                       ,List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
            local_18 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)OVar20 + 4);
            local_14 = (float)((int)local_14 + 1);
          } while ((int)local_14 < local_38 + 1);
        }
        pMVar12 = local_3c;
        if (local_3c != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
          Mesh_SetVertices_m08C90A1665735C09E15E17DE1A8CD9F196762BCD
                    (local_3c,(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)local_1c,
                     (MethodInfo *)0x0);
          Mesh_SetNormals_m10B6C93B59F4BC8F5D959CD79494F3FCDB67B168
                    (pMVar12,(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)local_20,
                     (MethodInfo *)0x0);
          pDVar11 = local_24;
          Mesh_SetUVs_mDDD16F3EC3434233E34F18221FFD47F8AEA7BCCE
                    (local_3c,0,(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)local_24,
                     (MethodInfo *)0x0);
          Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129
                    (local_3c,(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pDVar14,0,
                     (MethodInfo *)0x0);
          DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                    (local_1c,
                     ListPoolExtension_ReturnToPool_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m11374E7CCB77FCB77D3C672C64C47DDA6EF2BD06_RuntimeMethod_var
                    );
          DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                    (local_20,
                     ListPoolExtension_ReturnToPool_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m11374E7CCB77FCB77D3C672C64C47DDA6EF2BD06_RuntimeMethod_var
                    );
          DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                    (pDVar11,
                     ListPoolExtension_ReturnToPool_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD3F429D6B9C185725B5C44BFB5C3E7823D97F166_RuntimeMethod_var
                    );
          DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                    (pDVar14,
                     ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
                    );
          return;
        }
      }
      else {
        local_90 = 0.0;
        fStack_8c = 0.0;
        uStack_88 = 0;
        uStack_84 = 0;
        local_14 = local_2c;
        while( true ) {
          local_2c = local_14;
          pVVar15 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
                              (local_140,&local_50,(MethodInfo *)0x0);
          local_f0._0_4_ = pVVar15->___x_2;
          local_f0._4_4_ = pVVar15->___y_3;
          local_e8 = pVVar15->___z_4;
          local_40 = local_e8 * __real_3e4ccccd;
          local_44 = (float)(local_f0._4_4_ ^ __xmm_80000000800000008000000080000000) *
                     __real_3e4ccccd;
          local_9c = local_f0;
          if (local_1c == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) break;
          lVar4.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = (int)fStack_8c;
          lVar4.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (int)local_90;
          lVar4.___goUQCKzJmFEdxabJRHcPmEGvlCq_2 = local_2c;
          List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                    ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)local_1c,lVar4,
                     List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
          lVar5.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = (int)fStack_8c;
          lVar5.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (int)local_90;
          lVar5.___goUQCKzJmFEdxabJRHcPmEGvlCq_2 = local_2c;
          List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                    ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)local_1c,lVar5,
                     List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
          local_f4 = local_14 - local_44;
          local_90 = (float)local_34 - ___real_00000000;
          local_40 = local_34._4_4_ - local_40;
          fStack_8c = 0.0;
          uStack_88 = 0;
          uStack_84 = 0;
          lVar6.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = (int)local_40;
          lVar6.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (int)local_90;
          lVar6.___goUQCKzJmFEdxabJRHcPmEGvlCq_2 = local_f4;
          local_44 = local_f4;
          List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                    ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)local_1c,lVar6,
                     List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
          local_100 = local_44;
          lVar7.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = (int)local_40;
          lVar7.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (int)local_90;
          lVar7.___goUQCKzJmFEdxabJRHcPmEGvlCq_2 = local_44;
          List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                    ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)local_1c,lVar7,
                     List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
          local_10c = local_50.___z_4 + local_14;
          local_90 = local_50.___x_2 + (float)local_34;
          fStack_8c = local_50.___y_3 + local_34._4_4_;
          local_50.___y_3 = local_54 + local_50.___y_3;
          local_118 = local_50.___z_4 + 0.0;
          local_34 = CONCAT44(fStack_8c,local_90);
          uStack_88 = 0;
          uStack_84 = 0;
          local_50.___x_2 = local_50.___x_2 + 0.0;
          if (((uint)local_18 & 2) == 0) {
            fVar21 = (param_1->___uv_4).___x_1;
          }
          else {
            fVar21 = (param_1->___uv_4).___z_3;
          }
          local_18 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)local_18 + 1);
          uVar16 = (int)local_18 / 2 & 0x80000001;
          if ((int)uVar16 < 0) {
            uVar16 = (uVar16 - 1 | 0xfffffffe) + 1;
          }
          local_50.___z_4 = local_118;
          local_2c = local_10c;
          if (param_3 == (PropWire_t2A3274AA576D94C89E0731D63E12F3FC4B112F5B *)0x0) break;
          if (uVar16 == 1) {
            pPVar17 = param_3->___anchor0_4;
          }
          else {
            pPVar17 = param_3->___anchor1_5;
          }
          if (pPVar17 == (PropWireAnchor_tCB7650546235D6E4FD7E7A3A450C2D9B9491BF1A *)0x0) break;
          local_14 = (float)pPVar17->___voxelType_6 + fVar21;
          fVar21 = (param_1->___uv_4).___y_2;
          if (local_24 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) break;
          fVar10.___y_1 = fVar21;
          fVar10.___x_0 = local_14;
          local_5c = local_14;
          local_58 = fVar21;
          List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                    ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)local_24,fVar10,
                     List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
          local_60 = (param_1->___uv_4).___y_2 + __real_40000000;
          local_64 = local_14;
          fVar3.___y_1 = local_60;
          fVar3.___x_0 = local_14;
          List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                    ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)local_24,fVar3,
                     List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
          local_68 = (param_1->___uv_4).___w_4 + __real_3f800000;
          local_6c = local_14;
          fVar2.___y_1 = local_68;
          fVar2.___x_0 = local_14;
          List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                    ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)local_24,fVar2,
                     List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
          local_70 = (param_1->___uv_4).___w_4 + __real_40400000;
          local_74 = local_14;
          fVar1.___y_1 = local_70;
          fVar1.___x_0 = local_14;
          List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                    ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)local_24,fVar1,
                     List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
          pVVar15 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44
                              (&local_150,(MethodInfo *)0x0);
          local_b4._0_4_ = pVVar15->___x_2;
          local_b4._4_4_ = pVVar15->___y_3;
          local_b8 = pVVar15->___z_4;
          local_c0._0_4_ = pVVar15->___x_2;
          local_c0._4_4_ = pVVar15->___y_3;
          local_80 = (undefined4)local_b4 ^ __xmm_80000000800000008000000080000000;
          uStack_7c = local_b4._4_4_ ^ __xmm_80000000800000008000000080000000;
          local_78 = (float)((uint)local_b8 ^ __xmm_80000000800000008000000080000000);
          local_a8 = local_b4;
          if (local_20 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) break;
          lVar8.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = uStack_7c;
          lVar8.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = local_80;
          lVar8.___goUQCKzJmFEdxabJRHcPmEGvlCq_2 = local_78;
          List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                    ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)local_20,lVar8,
                     List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
          plVar18 = (lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 *)
                    Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44
                              (&local_160,(MethodInfo *)0x0);
          List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                    ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)local_20,*plVar18,
                     List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
          pVVar15 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44
                              (&local_170,(MethodInfo *)0x0);
          local_d8._0_4_ = pVVar15->___x_2;
          local_d8._4_4_ = pVVar15->___y_3;
          local_dc = pVVar15->___z_4;
          local_e4._0_4_ = pVVar15->___x_2;
          local_e4._4_4_ = pVVar15->___y_3;
          local_124 = (float)((uint)local_dc ^ __xmm_80000000800000008000000080000000);
          lVar9.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 =
               local_d8._4_4_ ^ __xmm_80000000800000008000000080000000;
          lVar9.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 =
               (undefined4)local_d8 ^ __xmm_80000000800000008000000080000000;
          lVar9.___goUQCKzJmFEdxabJRHcPmEGvlCq_2 = local_124;
          local_cc = local_d8;
          List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                    ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)local_20,lVar9,
                     List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
          plVar18 = (lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 *)
                    Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44
                              (&local_180,(MethodInfo *)0x0);
          List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                    ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)local_20,*plVar18,
                     List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
          iVar19 = local_38 + 1;
          fVar21 = local_50.___x_2;
          if (iVar19 < (int)local_18) goto LAB_108061fd;
          local_14 = local_2c;
        }
      }
    }
  }
LAB_10806376:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
