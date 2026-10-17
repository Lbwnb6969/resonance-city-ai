// RVA 0x876c30 | Placemaker.BigMeshList$$Populate
// PDB: BigMeshList_Populate_mBABED717F6A55BD2EF86CDF3F9B4FE49DF708CB4
// Body: [[10876c30, 10876db5] [10876dbc, 10876e56] [10876e5d, 10876ef9] [10876f03, 10876fec]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 105d34c0 List_1_set_Item_m403F0570AA35580309E3C4DF5E58D9172C8E589E_gshared
// 1066f880 Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
// 10675130 Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
// 10836fe0 ExtraMath_SetW_m9164BE628F6F11B09140233538951964E88E6B58
// 1092cd60 List_1_set_Item_m3A55C649578FEA19B80D35A7BF3694FCF0ABB07B_gshared
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a44e70 Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
// 10a44f60 Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C
// 10a46900 MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
// 10a470d0 Mesh_GetNormals_m6B9DD7FDA70DF058D215915597BCBF6450D6E243
// 10a47180 Mesh_GetTangents_m950F26B38C1009C9B65C3C5B27785A2076C28351
// 10a472a0 Mesh_GetTriangles_m2A219EA6034D366619F22C912BF4BB911E2D06FB
// 10a47630 Mesh_GetUVs_m96301FD499B68EE943AAD288935AD0E3012B4E22
// 10a47670 Mesh_GetVertices_mCC533BC8D4A9F14BA1A54BABB11B01750C153015
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
BigMeshList_Populate_mBABED717F6A55BD2EF86CDF3F9B4FE49DF708CB4
          (BigMeshList_t3F987CA1D1189C06B52252DF8E11DDDEFC5F7336 *param_1,
          MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *param_2,MethodInfo *param_3)

{
  undefined4 *puVar1;
  List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *pLVar2;
  List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *pLVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  float fVar7;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar8;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar9;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar10;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 *plVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar12;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar13;
  int iVar14;
  uint uVar15;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_cc;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_8c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_7c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_70;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_64;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_14;
  float local_8;

  if (DAT_1151f5b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m06065F47F36FB47C1D674BF6D5AC5A767DF614DC_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m65035CF9CB2C49CFD5E7AB76FE5A7D860BDCD530_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mBC15B4BA533085E756DCF99A50854221DC56EACD_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_m8FD13D7FBB9FF111E04333055A0048CD53D0F6C7_RuntimeMethod_var)
    ;
    DAT_1151f5b3 = '\x01';
  }
  if (param_2 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) {
    pMVar8 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                       (param_2,(MethodInfo *)0x0);
    pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                        (MethodInfo *)0x0);
    if (pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pMVar10 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
                          (&local_cc,pTVar9,(MethodInfo *)0x0);
      local_64.___m00_0 = pMVar10->___m00_0;
      local_64.___m10_1 = pMVar10->___m10_1;
      local_64.___m20_2 = pMVar10->___m20_2;
      local_64.___m30_3 = pMVar10->___m30_3;
      local_64.___m01_4 = pMVar10->___m01_4;
      local_64.___m11_5 = pMVar10->___m11_5;
      local_64.___m21_6 = pMVar10->___m21_6;
      local_64.___m31_7 = pMVar10->___m31_7;
      local_64.___m02_8 = pMVar10->___m02_8;
      local_64.___m12_9 = pMVar10->___m12_9;
      local_64.___m22_10 = pMVar10->___m22_10;
      local_64.___m32_11 = pMVar10->___m32_11;
      local_64.___m03_12 = pMVar10->___m03_12;
      local_64.___m13_13 = pMVar10->___m13_13;
      local_64.___m23_14 = pMVar10->___m23_14;
      local_64.___m33_15 = pMVar10->___m33_15;
      if (param_1->___tangents_2 != (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)0x0) {
        List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___tangents_2,
                   List_1_Clear_m06065F47F36FB47C1D674BF6D5AC5A767DF614DC_RuntimeMethod_var);
        if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___uvs_3 !=
            (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
          List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                    ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___uvs_3,
                     List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50_RuntimeMethod_var);
          if (pMVar8 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
            Mesh_GetVertices_mCC533BC8D4A9F14BA1A54BABB11B01750C153015
                      (pMVar8,param_1->___verts_0,(MethodInfo *)0x0);
            Mesh_GetNormals_m6B9DD7FDA70DF058D215915597BCBF6450D6E243
                      (pMVar8,param_1->___normals_1,(MethodInfo *)0x0);
            Mesh_GetTangents_m950F26B38C1009C9B65C3C5B27785A2076C28351
                      (pMVar8,param_1->___tangents_2,(MethodInfo *)0x0);
            Mesh_GetUVs_m96301FD499B68EE943AAD288935AD0E3012B4E22
                      (pMVar8,0,param_1->___uvs_3,(MethodInfo *)0x0);
            Mesh_GetTriangles_m2A219EA6034D366619F22C912BF4BB911E2D06FB
                      (pMVar8,param_1->___tris_4,0,(MethodInfo *)0x0);
            if (param_1->___verts_0 != (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0) {
              uVar15 = param_1->___verts_0->____size_2 - 1;
              if (-1 < (int)uVar15) {
                iVar14 = uVar15 * 0xc;
                do {
                  pLVar2 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)param_1->___verts_0;
                  if (pLVar2 == (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0)
                  goto LAB_10876fe8;
                  if ((uint)pLVar2->____size_2 <= uVar15) {
                    /* WARNING: Subroutine does not return */
                    ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                              ((MethodInfo *)0x0);
                  }
                  VVar5.___z_4 = *(float *)((int)&pLVar2->____items_1->m_Items[0].
                                                  ___goUQCKzJmFEdxabJRHcPmEGvlCq_2 + iVar14);
                  VVar5._0_8_ = *(undefined8 *)
                                 ((int)&pLVar2->____items_1->m_Items[0].
                                        ___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 + iVar14);
                  plVar11 = (lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 *
                            )Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                       (&local_14,&local_64,VVar5,(MethodInfo *)0x0);
                  List_1_set_Item_m3A55C649578FEA19B80D35A7BF3694FCF0ABB07B_gshared
                            (pLVar2,uVar15,*plVar11,
                             List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var
                            );
                  iVar14 = iVar14 + -0xc;
                  uVar15 = uVar15 - 1;
                } while (-1 < (int)uVar15);
              }
              if (param_1->___normals_1 != (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0)
              {
                uVar15 = param_1->___normals_1->____size_2 - 1;
                if (-1 < (int)uVar15) {
                  iVar14 = uVar15 * 0xc;
                  do {
                    pLVar2 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                             param_1->___normals_1;
                    if (pLVar2 == (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0)
                    goto LAB_10876fe8;
                    if ((uint)pLVar2->____size_2 <= uVar15) {
                    /* WARNING: Subroutine does not return */
                      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                ((MethodInfo *)0x0);
                    }
                    VVar6.___z_4 = *(float *)((int)&pLVar2->____items_1->m_Items[0].
                                                    ___goUQCKzJmFEdxabJRHcPmEGvlCq_2 + iVar14);
                    VVar6._0_8_ = *(undefined8 *)
                                   ((int)&pLVar2->____items_1->m_Items[0].
                                          ___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 + iVar14);
                    plVar11 = (lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430
                               *)Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C
                                           (&local_14,&local_64,VVar6,(MethodInfo *)0x0);
                    List_1_set_Item_m3A55C649578FEA19B80D35A7BF3694FCF0ABB07B_gshared
                              (pLVar2,uVar15,*plVar11,
                               List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var
                              );
                    iVar14 = iVar14 + -0xc;
                    uVar15 = uVar15 - 1;
                  } while (-1 < (int)uVar15);
                }
                if (param_1->___tangents_2 !=
                    (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)0x0) {
                  uVar15 = param_1->___tangents_2->____size_2 - 1;
                  if (-1 < (int)uVar15) {
                    local_8 = (float)(uVar15 * 0x10);
                    do {
                      fVar7 = local_8;
                      pLVar3 = param_1->___tangents_2;
                      if (pLVar3 == (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)0x0)
                      goto LAB_10876fe8;
                      if ((uint)pLVar3->____size_2 <= uVar15) {
                    /* WARNING: Subroutine does not return */
                        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                  ((MethodInfo *)0x0);
                      }
                      puVar1 = (undefined4 *)
                               ((int)&((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)
                                      &pLVar3->____items_1->m_Items[0].___x_1)->___dateData_44 +
                               (int)local_8);
                      local_24 = *puVar1;
                      uStack_20 = puVar1[1];
                      uStack_1c = puVar1[2];
                      fStack_18 = (float)puVar1[3];
                      pVVar12 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
                                          (&local_70,
                                           *(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)
                                            ((int)&((
                                                  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405
                                                  *)&pLVar3->____items_1->m_Items[0].___x_1)->
                                                  ___dateData_44 + (int)local_8),(MethodInfo *)0x0);
                      pVVar12 = Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C
                                          (&local_7c,&local_64,*pVVar12,(MethodInfo *)0x0);
                      local_14.___y_3 = pVVar12->___x_2;
                      local_14.___z_4 = pVVar12->___y_3;
                      local_8 = pVVar12->___z_4;
                      if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                           has_cctor != '\0') &&
                         (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                          cctor_finished == 0)) {
                        il2cpp_runtime_class_init
                                  (
                                  ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                  );
                      }
                      VVar4.___z_4 = local_8;
                      VVar4.___x_2 = local_14.___y_3;
                      VVar4.___y_3 = local_14.___z_4;
                      pVVar13 = ExtraMath_SetW_m9164BE628F6F11B09140233538951964E88E6B58
                                          (&local_8c,VVar4,fStack_18,(MethodInfo *)0x0);
                      if (pLVar3 == (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)0x0)
                      goto LAB_10876fe8;
                      List_1_set_Item_m403F0570AA35580309E3C4DF5E58D9172C8E589E_gshared
                                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar3,uVar15,
                                 (KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57)*pVVar13,
                                 List_1_set_Item_m8FD13D7FBB9FF111E04333055A0048CD53D0F6C7_RuntimeMethod_var
                                );
                      local_8 = (float)((int)fVar7 + -0x10);
                      uVar15 = uVar15 - 1;
                    } while (-1 < (int)uVar15);
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_10876fe8:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
