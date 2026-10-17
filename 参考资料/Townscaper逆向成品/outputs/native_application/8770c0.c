// RVA 0x8770c0 | Placemaker.BigMeshMaster$$AddMesh
// PDB: BigMeshMaster_AddMesh_m770D0281531D13A971A7F9EAB060221DE1466A9B
// Body: [[108770c0, 108773c6] [108773cd, 108773e8] [108773f2, 1087759b] [108775a5, 10877736] [1087773d, 10877787] [10877793, 108777b0] [108777ba, 10877808] [10877815, 10877832] [1087783c, 10877889] [10877896, 108778b3] [108778bd, 10877987] [10877990, 108779ad] [108779b4, 108779f7] [10877a01, 10877a1e] [10877a25, 10877a6b] [10877a75, 10877a8e] [10877a95, 10877ae7]]
// Direct callees:
// 100547c0 List_1_get_Item_m05503F475DFF429174902337394B6C6DE3713CCD_inline
// 10068e90 List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
// 10068ec0 List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 105d1290 List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
// 105d1fe0 List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
// 105d34c0 List_1_set_Item_m403F0570AA35580309E3C4DF5E58D9172C8E589E_gshared
// 10672e80 Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10675010 Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200
// 10877af0 BigMeshMaster_GetBigMesh_m99347F654681A77B9F1680CFAF4CFDEDFE49C90C
// 10928710 List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
// 1092cd60 List_1_set_Item_m3A55C649578FEA19B80D35A7BF3694FCF0ABB07B_gshared
// 10a440d0 Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
// 1103ecc0 List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared
// 1103ef20 List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_gshared
// 11087e60 List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
// 1108ddc0 List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared

void __cdecl
BigMeshMaster_AddMesh_m770D0281531D13A971A7F9EAB060221DE1466A9B
          (BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *param_1,
          BigMeshPart_tE11B7C01E4DE678DA0A0F85B75A7F28BAE201B25 *param_2,
          Material_t8927C00353A72755313F046D0CE85178AE8218EE *param_3,
          List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *param_4,
          List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *param_5,
          List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *param_6,
          List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *param_7,
          List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *param_8,MethodInfo *param_9)

{
  List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *pLVar1;
  undefined4 uVar2;
  List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *pLVar3;
  List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *pLVar4;
  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *pLVar5;
  List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *pLVar6;
  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *pLVar7;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar8;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar9;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar10;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar11;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar12;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar13;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar14;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar15;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar16;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar17;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar18;
  int *piVar19;
  BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *pBVar20;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar21;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar22;
  eoeYwvfgkcyqvOuhSvCpfjKvcGW_t36596F2FF79D37D2776C7BB369E698B363118273 *peVar23;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *pAVar24;
  int iVar25;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar26;
  MethodInfo *unaff_EDI;
  uint uVar27;
  BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *pBVar28;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar29;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 local_54;
  undefined1 local_44 [16];
  BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *local_34;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_30;
  List_1_tAC387D40AA794C98425777894B362093CF4E78AC *local_2c;
  int local_28;
  List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *local_24;
  int local_20;
  int local_1c;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;

  if (DAT_1151f5b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m637DB31CF77746D0A935939E71999D8D3741EC7A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mD0A135B88012ECC465AE0B923BDC79FFF01EA677_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_RemoveRange_m1BC6A47FB63759AA700533D24BEA241C2AF777AE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_RemoveRange_m415CC40F3C018F1D693A921F3C55EBA0C7E36086_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m65035CF9CB2C49CFD5E7AB76FE5A7D860BDCD530_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mF0887EBD72C74B3917768EEECB5D7A9DD66B75EB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m3923EAB2EC6624334DD50618C8C65B37CBF04BEF_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mBC15B4BA533085E756DCF99A50854221DC56EACD_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_m8FD13D7FBB9FF111E04333055A0048CD53D0F6C7_RuntimeMethod_var)
    ;
    DAT_1151f5b8 = '\x01';
  }
  if ((param_4 != (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0) &&
     (param_8 != (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0)) {
    iVar25 = param_4->____size_2;
    local_14 = param_8->____size_2 / 3;
    pBVar20 = BigMeshMaster_GetBigMesh_m99347F654681A77B9F1680CFAF4CFDEDFE49C90C
                        (param_1,param_3,iVar25,(MethodInfo *)0x0);
    local_34 = pBVar20;
    if ((param_2 != (BigMeshPart_tE11B7C01E4DE678DA0A0F85B75A7F28BAE201B25 *)0x0) &&
       ((param_2->___bigMesh_0 = pBVar20,
        pBVar20 != (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)0x0 &&
        (pBVar20->___availableIndexes_8 != (List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *)0x0))
       )) {
      local_28 = pBVar20->___availableIndexes_8->____size_2;
      local_c = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519
                          (iVar25,local_28,(MethodInfo *)0x0);
      local_30 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)(iVar25 - local_c);
      uVar27 = 0;
      if ((param_5 != (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0) &&
         ((param_6 != (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)0x0 &&
          (param_7 != (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0)))) {
        local_2c = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_5->____size_2;
        local_20 = param_6->____size_2;
        local_10 = param_7->____size_2;
        if (0 < (int)local_2c) {
          if (pBVar20->___normals_11 == (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0)
          goto LAB_10877ae3;
          for (iVar25 = pBVar20->___normals_11->____size_2; iVar25 < pBVar20->___createdCount_5;
              iVar25 = iVar25 + 1) {
            local_24 = (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)pBVar20->___normals_11;
            pVVar21 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_44 + 4)
                                 ,(MethodInfo *)0x0);
            if (local_24 == (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)0x0)
            goto LAB_10877ae3;
            lVar10.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ = (short)((uint)pVVar21->___z_4 >> 0x10);
            lVar10._0_10_ = *(unkbyte10 *)pVVar21;
            List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                      ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)local_24,lVar10,
                       List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
          }
        }
        if (0 < local_20) {
          if (pBVar20->___tangents_12 == (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)0x0)
          goto LAB_10877ae3;
          for (iVar25 = pBVar20->___tangents_12->____size_2; iVar25 < pBVar20->___createdCount_5;
              iVar25 = iVar25 + 1) {
            local_24 = pBVar20->___tangents_12;
            pVVar22 = Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200
                                ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)local_44,
                                 (MethodInfo *)0x0);
            if (local_24 == (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)0x0)
            goto LAB_10877ae3;
            KVar15.___value_1._2_2_ = (short)((uint)pVVar22->___w_4 >> 0x10);
            KVar15._0_10_ = *(unkbyte10 *)&pVVar22->___y_2;
            KVar15._12_4_ = List_1_Add_m637DB31CF77746D0A935939E71999D8D3741EC7A_RuntimeMethod_var;
            List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
                      ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)local_24,KVar15,unaff_EDI
                      );
          }
        }
        if (0 < local_10) {
          if (pBVar20->___uvs_13 == (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0)
          goto LAB_10877ae3;
          for (iVar25 = pBVar20->___uvs_13->____size_2; iVar25 < pBVar20->___createdCount_5;
              iVar25 = iVar25 + 1) {
            local_24 = (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)pBVar20->___uvs_13;
            pVVar22 = Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200
                                ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)local_44,
                                 (MethodInfo *)0x0);
            VVar18.___x_2 = pVVar22->___x_1;
            VVar18.___y_3 = pVVar22->___y_2;
            VVar18.___z_4 = pVVar22->___z_3;
            VVar29 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A
                               (VVar18,(MethodInfo *)pVVar22->___w_4);
            if (local_24 == (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)0x0)
            goto LAB_10877ae3;
            List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                      ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)local_24,
                       (float2_tCB7B81181978EDE17722C533A55E345D9A413274)VVar29,
                       List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
          }
        }
        if (0 < local_c) {
          local_1c = 0;
          local_24 = (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)(local_28 + -1);
          local_18 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)(local_28 * 2 + 0xe);
          do {
            pLVar1 = pBVar20->___availableIndexes_8;
            if (pLVar1 == (List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *)0x0)
            goto LAB_10877ae3;
            if ((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)pLVar1->____size_2 <= local_24)
            {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            local_8 = (uint)*(ushort *)((int)pLVar1->____items_1->m_Items + (int)local_18 + -0x10);
            if ((uint)param_4->____size_2 <= uVar27) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            if ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pBVar20->___verts_10 ==
                (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0) goto LAB_10877ae3;
            uVar2 = *(undefined4 *)((int)&param_4->____items_1->m_Items[0].___z_4 + local_1c);
            lVar11.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._0_2_ = (short)uVar2;
            lVar11._0_8_ = *(undefined8 *)((int)&param_4->____items_1->m_Items[0].___x_2 + local_1c)
            ;
            lVar11.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ = (short)((uint)uVar2 >> 0x10);
            List_1_set_Item_m3A55C649578FEA19B80D35A7BF3694FCF0ABB07B_gshared
                      ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pBVar20->___verts_10,
                       local_8,lVar11,
                       List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var);
            pBVar20 = local_34;
            if (0 < (int)local_2c) {
              pLVar3 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)local_34->___normals_11;
              peVar23 = List_1_get_Item_m05503F475DFF429174902337394B6C6DE3713CCD_inline
                                  ((eoeYwvfgkcyqvOuhSvCpfjKvcGW_t36596F2FF79D37D2776C7BB369E698B363118273
                                    *)(local_44 + 4),
                                   (List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *)param_5,
                                   uVar27,
                                   List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var
                                  );
              if (pLVar3 == (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0)
              goto LAB_10877ae3;
              lVar12.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ =
                   (short)((uint)peVar23->___pMiBnalMLaKhnIIVCmUXzEYnDvX_2 >> 0x10);
              lVar12._0_10_ = *(unkbyte10 *)peVar23;
              List_1_set_Item_m3A55C649578FEA19B80D35A7BF3694FCF0ABB07B_gshared
                        (pLVar3,local_8 & 0xffff,lVar12,
                         List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var
                        );
            }
            if (0 < local_20) {
              pLVar4 = pBVar20->___tangents_12;
              pAVar24 = List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
                                  (&local_54,
                                   (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)param_6,
                                   uVar27,
                                   List_1_get_Item_mBC15B4BA533085E756DCF99A50854221DC56EACD_RuntimeMethod_var
                                  );
              if (pLVar4 == (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)0x0)
              goto LAB_10877ae3;
              KVar9._14_2_ = (short)((uint)pAVar24->___actionId_4 >> 0x10);
              KVar9._0_14_ = *(undefined1 (*) [14])pAVar24;
              List_1_set_Item_m403F0570AA35580309E3C4DF5E58D9172C8E589E_gshared
                        ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar4,local_8 & 0xffff
                         ,KVar9,
                         List_1_set_Item_m8FD13D7FBB9FF111E04333055A0048CD53D0F6C7_RuntimeMethod_var
                        );
            }
            if (0 < local_10) {
              pLVar5 = pBVar20->___uvs_13;
              VVar29 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                 (param_7,uVar27,
                                  List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var
                                 );
              if (pLVar5 == (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0)
              goto LAB_10877ae3;
              List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                        (pLVar5,local_8 & 0xffff,VVar29,
                         List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_RuntimeMethod_var
                        );
            }
            if ((List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *)param_2->___vertIndexes_1 ==
                (List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *)0x0) goto LAB_10877ae3;
            List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_gshared
                      ((List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *)param_2->___vertIndexes_1
                       ,SUB42(local_8,0),
                       List_1_Add_mD0A135B88012ECC465AE0B923BDC79FFF01EA677_RuntimeMethod_var);
            uVar27 = uVar27 + 1;
            local_24 = (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)
                       ((int)&local_24[-1].____syncRoot_4 + 3);
            local_1c = local_1c + 0xc;
            local_18 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                       ((int)local_18 + -2);
          } while ((int)uVar27 < local_c);
        }
        if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pBVar20->___availableIndexes_8 !=
            (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
          List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
                    ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                     pBVar20->___availableIndexes_8,local_28 - local_c,local_c,
                     List_1_RemoveRange_m1BC6A47FB63759AA700533D24BEA241C2AF777AE_RuntimeMethod_var)
          ;
          local_28 = 0;
          if (0 < (int)local_30) {
            local_1c = uVar27 * 0xc;
            do {
              local_34 = (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)
                         pBVar20->___createdCount_5;
              pBVar20->___createdCount_5 = (int)((int)&local_34->_padding_ + 1);
              if ((uint)param_4->____size_2 <= uVar27) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              if ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pBVar20->___verts_10 ==
                  (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0) goto LAB_10877ae3;
              uVar2 = *(undefined4 *)((int)&param_4->____items_1->m_Items[0].___z_4 + local_1c);
              lVar13.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._0_2_ = (short)uVar2;
              lVar13._0_8_ = *(undefined8 *)
                              ((int)&param_4->____items_1->m_Items[0].___x_2 + local_1c);
              lVar13.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ = (short)((uint)uVar2 >> 0x10);
              List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                        ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pBVar20->___verts_10,
                         lVar13,
                         List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
              if (0 < (int)local_2c) {
                pLVar3 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pBVar20->___normals_11;
                peVar23 = List_1_get_Item_m05503F475DFF429174902337394B6C6DE3713CCD_inline
                                    ((eoeYwvfgkcyqvOuhSvCpfjKvcGW_t36596F2FF79D37D2776C7BB369E698B363118273
                                      *)(local_44 + 4),
                                     (List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *)param_5,
                                     uVar27,
                                     List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var
                                    );
                if (pLVar3 == (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0)
                goto LAB_10877ae3;
                lVar14.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ =
                     (short)((uint)peVar23->___pMiBnalMLaKhnIIVCmUXzEYnDvX_2 >> 0x10);
                lVar14._0_10_ = *(unkbyte10 *)peVar23;
                List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                          (pLVar3,lVar14,
                           List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
              }
              if (0 < local_20) {
                pLVar4 = pBVar20->___tangents_12;
                pAVar24 = List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
                                    (&local_54,
                                     (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)param_6,
                                     uVar27,
                                     List_1_get_Item_mBC15B4BA533085E756DCF99A50854221DC56EACD_RuntimeMethod_var
                                    );
                if (pLVar4 == (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)0x0)
                goto LAB_10877ae3;
                KVar16.___value_1._2_2_ = (short)((uint)pAVar24->___actionId_4 >> 0x10);
                KVar16._0_10_ = *(unkbyte10 *)&(pAVar24->___hexPos_0).___y_1;
                KVar16._12_4_ =
                     List_1_Add_m637DB31CF77746D0A935939E71999D8D3741EC7A_RuntimeMethod_var;
                List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
                          ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar4,KVar16,
                           unaff_EDI);
              }
              if (0 < local_10) {
                pLVar6 = (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pBVar20->___uvs_13;
                VVar29 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                   (param_7,uVar27,
                                    List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var
                                   );
                if (pLVar6 == (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)0x0)
                goto LAB_10877ae3;
                List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                          (pLVar6,(float2_tCB7B81181978EDE17722C533A55E345D9A413274)VVar29,
                           List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
              }
              if ((List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *)param_2->___vertIndexes_1 ==
                  (List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *)0x0) goto LAB_10877ae3;
              List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_gshared
                        ((List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *)
                         param_2->___vertIndexes_1,SUB42(local_34,0),
                         List_1_Add_mD0A135B88012ECC465AE0B923BDC79FFF01EA677_RuntimeMethod_var);
              local_28 = local_28 + 1;
              local_1c = local_1c + 0xc;
              uVar27 = uVar27 + 1;
            } while (local_28 < (int)local_30);
          }
          iVar25 = local_14;
          if (pBVar20->___availableTris_9 != (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0
             ) {
            local_1c = pBVar20->___availableTris_9->____size_2;
            local_20 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519
                                 (local_14,local_1c,(MethodInfo *)0x0);
            local_14 = iVar25 - local_20;
            pBVar28 = (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)0x0;
            local_28 = 0;
            if (0 < local_20) {
              local_24 = (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)(local_1c + -1);
              iVar25 = local_1c * 4 + 0xc;
              do {
                pLVar7 = pBVar20->___availableTris_9;
                if (pLVar7 == (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0)
                goto LAB_10877ae3;
                if ((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)pLVar7->____size_2 <=
                    local_24) {
                    /* WARNING: Subroutine does not return */
                  ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                            ((MethodInfo *)0x0);
                }
                if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_2->___triIndexes_2 ==
                    (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_10877ae3;
                OVar8 = *(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *)
                         ((int)pLVar7->____items_1->m_Items + iVar25 + -0x10);
                List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                          ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                           param_2->___triIndexes_2,OVar8,
                           List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
                local_2c = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pBVar20->___tris_14;
                OVar26 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)OVar8 + 1);
                local_30 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                           param_2->___vertIndexes_1;
                local_34 = pBVar28;
                local_18 = OVar8;
                if ((BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)param_8->____size_2 <=
                    pBVar28) {
                    /* WARNING: Subroutine does not return */
                  ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                            ((MethodInfo *)0x0);
                }
                if (local_30 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0)
                goto LAB_10877ae3;
                local_34 = (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)
                           param_8->____items_1->m_Items[(int)pBVar28];
                if (*(BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA **)((int)local_30 + 0xc) <=
                    local_34) {
                    /* WARNING: Subroutine does not return */
                  ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                            ((MethodInfo *)0x0);
                }
                if (local_2c == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0)
                goto LAB_10877ae3;
                List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared
                          ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)local_2c,(int)OVar8,
                           (Il2CppObject *)
                           (uint)*(ushort *)(*(int *)((int)local_30 + 8) + 0x10 + (int)local_34 * 2)
                           ,
                           List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var
                          );
                local_2c = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pBVar20->___tris_14;
                local_34 = (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)
                           ((int)&pBVar28->_padding_ + 1);
                local_30 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                           param_2->___vertIndexes_1;
                local_18 = OVar26;
                if ((BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)param_8->____size_2 <=
                    local_34) {
                    /* WARNING: Subroutine does not return */
                  ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                            ((MethodInfo *)0x0);
                }
                if (local_30 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0)
                goto LAB_10877ae3;
                local_34 = (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)
                           param_8->____items_1->m_Items[(int)((int)&pBVar28->_padding_ + 1)];
                if (*(BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA **)((int)local_30 + 0xc) <=
                    local_34) {
                    /* WARNING: Subroutine does not return */
                  ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                            ((MethodInfo *)0x0);
                }
                if (local_2c == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0)
                goto LAB_10877ae3;
                List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared
                          ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)local_2c,(int)OVar26,
                           (Il2CppObject *)
                           (uint)*(ushort *)(*(int *)((int)local_30 + 8) + 0x10 + (int)local_34 * 2)
                           ,
                           List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var
                          );
                local_2c = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pBVar20->___tris_14;
                piVar19 = &pBVar28->_padding_;
                local_34 = (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)((int)piVar19 + 2);
                pBVar28 = (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)
                          ((int)&pBVar28->_padding_ + 3);
                local_30 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                           param_2->___vertIndexes_1;
                if ((BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)param_8->____size_2 <=
                    local_34) {
                    /* WARNING: Subroutine does not return */
                  ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                            ((MethodInfo *)0x0);
                }
                if (local_30 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0)
                goto LAB_10877ae3;
                local_34 = (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)
                           param_8->____items_1[1].m_Items[(int)(piVar19 + -1)];
                if (*(BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA **)((int)local_30 + 0xc) <=
                    local_34) {
                    /* WARNING: Subroutine does not return */
                  ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                            ((MethodInfo *)0x0);
                }
                if (local_2c == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0)
                goto LAB_10877ae3;
                List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared
                          ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)local_2c,
                           (int)OVar8 + 2,
                           (Il2CppObject *)
                           (uint)*(ushort *)(*(int *)((int)local_30 + 8) + 0x10 + (int)local_34 * 2)
                           ,
                           List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var
                          );
                local_28 = local_28 + 1;
                local_24 = (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)
                           ((int)&local_24[-1].____syncRoot_4 + 3);
                iVar25 = iVar25 + -4;
              } while (local_28 < local_20);
            }
            if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pBVar20->___availableTris_9 !=
                (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
              List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
                        ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                         pBVar20->___availableTris_9,local_1c - local_20,local_20,
                         List_1_RemoveRange_m415CC40F3C018F1D693A921F3C55EBA0C7E36086_RuntimeMethod_var
                        );
              if (pBVar20->___tris_14 != (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0) {
                local_30 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                           pBVar20->___tris_14->____size_2;
                param_4 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0;
                if (0 < local_14) {
                  do {
                    if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_2->___triIndexes_2
                        == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0)
                    goto LAB_10877ae3;
                    List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                              ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                               param_2->___triIndexes_2,local_30,
                               List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var
                              );
                    local_2c = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                               pBVar20->___tris_14;
                    pLVar1 = param_2->___vertIndexes_1;
                    local_34 = pBVar28;
                    if ((BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)param_8->____size_2 <=
                        pBVar28) {
                    /* WARNING: Subroutine does not return */
                      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                ((MethodInfo *)0x0);
                    }
                    if (pLVar1 == (List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *)0x0)
                    goto LAB_10877ae3;
                    local_34 = (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)
                               param_8->____items_1->m_Items[(int)pBVar28];
                    if ((BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)pLVar1->____size_2 <=
                        local_34) {
                    /* WARNING: Subroutine does not return */
                      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                ((MethodInfo *)0x0);
                    }
                    if (local_2c == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0)
                    goto LAB_10877ae3;
                    OVar8._2_2_ = 0;
                    OVar8.___moduleIndex_0 = pLVar1->____items_1->m_Items[(int)local_34];
                    List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                              (local_2c,OVar8,
                               List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var
                              );
                    local_2c = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                               pBVar20->___tris_14;
                    local_34 = (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)
                               ((int)&pBVar28->_padding_ + 1);
                    pLVar1 = param_2->___vertIndexes_1;
                    if ((BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)param_8->____size_2 <=
                        local_34) {
                    /* WARNING: Subroutine does not return */
                      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                ((MethodInfo *)0x0);
                    }
                    if (pLVar1 == (List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *)0x0)
                    goto LAB_10877ae3;
                    local_34 = (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)
                               param_8->____items_1->m_Items[(int)((int)&pBVar28->_padding_ + 1)];
                    if ((BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)pLVar1->____size_2 <=
                        local_34) {
                    /* WARNING: Subroutine does not return */
                      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                ((MethodInfo *)0x0);
                    }
                    if (local_2c == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0)
                    goto LAB_10877ae3;
                    OVar26._2_2_ = 0;
                    OVar26.___moduleIndex_0 = pLVar1->____items_1->m_Items[(int)local_34];
                    List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                              (local_2c,OVar26,
                               List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var
                              );
                    local_2c = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                               pBVar20->___tris_14;
                    piVar19 = &pBVar28->_padding_;
                    local_34 = (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)
                               ((int)piVar19 + 2);
                    pBVar28 = (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)
                              ((int)&pBVar28->_padding_ + 3);
                    pLVar1 = param_2->___vertIndexes_1;
                    if ((BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)param_8->____size_2 <=
                        local_34) {
                    /* WARNING: Subroutine does not return */
                      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                ((MethodInfo *)0x0);
                    }
                    if (pLVar1 == (List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *)0x0)
                    goto LAB_10877ae3;
                    local_34 = (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)
                               param_8->____items_1[1].m_Items[(int)(piVar19 + -1)];
                    if ((BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)pLVar1->____size_2 <=
                        local_34) {
                    /* WARNING: Subroutine does not return */
                      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                ((MethodInfo *)0x0);
                    }
                    if (local_2c == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0)
                    goto LAB_10877ae3;
                    OVar17._2_2_ = 0;
                    OVar17.___moduleIndex_0 = pLVar1->____items_1->m_Items[(int)local_34];
                    List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                              (local_2c,OVar17,
                               List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var
                              );
                    param_4 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)
                              ((int)&param_4->_padding_ + 1);
                    local_30 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                               ((int)local_30 + 3);
                  } while ((int)param_4 < local_14);
                }
                pBVar20->___dirty_6 = true;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_10877ae3:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
