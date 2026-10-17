// RVA 0x877e50 | Placemaker.BigMeshMaster$$MaybeApply
// PDB: BigMeshMaster_MaybeApply_m6C936D1366555E081A077E07A671E15D90A56AA6
// Body: [[10877e50, 10878083] [1087808a, 108782f9]]
// Direct callees:
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 105d1290 List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 105d1fe0 List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
// 10672e80 Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10675010 Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200
// 10906300 Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411
// 10928710 List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3ccb0 Debug_Log_mF3A49A8FCD5EC1535CADCDFF57432813A8790DF6
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a46da0 Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE
// 10a479b0 Mesh_RecalculateBounds_mC39556595CFE3E4D8EFA777476ECD22B97FC2737
// 10a47c10 Mesh_SetNormals_m10B6C93B59F4BC8F5D959CD79494F3FCDB67B168
// 10a47fe0 Mesh_SetTangents_m728C5E61FD6656209686AE3F6734686A2F4E549E
// 10a482b0 Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129
// 10a48560 Mesh_SetUVs_mDDD16F3EC3434233E34F18221FFD47F8AEA7BCCE
// 10a48620 Mesh_SetVertices_m08C90A1665735C09E15E17DE1A8CD9F196762BCD
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
// 11036ff0 List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared
// 11087e60 List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared

void __cdecl
BigMeshMaster_MaybeApply_m6C936D1366555E081A077E07A671E15D90A56AA6
          (BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *param_1,
          BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *param_2,MethodInfo *param_3)

{
  List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *pLVar1;
  List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *pLVar2;
  List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *pLVar3;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar4;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar5;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar10;
  BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *pBVar11;
  Il2CppObject *pIVar12;
  bool bVar13;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar14;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 *plVar15;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar16;
  String_t *pSVar17;
  MethodInfo *unaff_EDI;
  int iVar18;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar19;
  undefined1 local_1c [16];
  Il2CppObject *local_c;
  Il2CppObject *local_8;

  pBVar11 = param_2;
  if (DAT_1151f5b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m637DB31CF77746D0A935939E71999D8D3741EC7A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_RemoveRange_m415CC40F3C018F1D693A921F3C55EBA0C7E36086_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_RuntimeMethod_var);
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
              ((uint *)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralCA06A7008C54EE30895CE39D58CB73434E363FC9);
    DAT_1151f5b7 = '\x01';
  }
  local_8 = (Il2CppObject *)0x0;
  if (param_2 != (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)0x0) {
    if (param_2->___dirty_6 == false) {
      return;
    }
    param_2->___dirty_6 = false;
    if (param_2->___availableIndexes_8 != (List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *)0x0) {
      if (param_2->___createdCount_5 == param_2->___availableIndexes_8->____size_2) {
        pGVar14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                             (MethodInfo *)0x0);
        if (pGVar14 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
          GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                    (pGVar14,false,(MethodInfo *)0x0);
          if (DAT_1151f5ae == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      ((uint *)&
                               List_1_Clear_m06065F47F36FB47C1D674BF6D5AC5A767DF614DC_RuntimeMethod_var
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      ((uint *)&
                               List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50_RuntimeMethod_var
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      ((uint *)&
                               List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      ((uint *)&
                               List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      ((uint *)&
                               List_1_Clear_mF8F71E7E816FF23D7B695E08E43893C83A814C22_RuntimeMethod_var
                      );
            DAT_1151f5ae = '\x01';
          }
          if (param_2->___verts_10 != (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0) {
            List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                      ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_2->___verts_10,
                       List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
            if (param_2->___normals_11 != (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0) {
              List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                        ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_2->___normals_11,
                         List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
              if (param_2->___tangents_12 != (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)0x0
                 ) {
                List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                          ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                           param_2->___tangents_12,
                           List_1_Clear_m06065F47F36FB47C1D674BF6D5AC5A767DF614DC_RuntimeMethod_var)
                ;
                if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_2->___uvs_13 !=
                    (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
                  List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_2->___uvs_13,
                             List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50_RuntimeMethod_var
                            );
                  if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_2->___tris_14 !=
                      (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
                    List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                              ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                               param_2->___tris_14,
                               List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var
                              );
                    if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                        param_2->___availableIndexes_8 !=
                        (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
                      List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                                 param_2->___availableIndexes_8,
                                 List_1_Clear_mF8F71E7E816FF23D7B695E08E43893C83A814C22_RuntimeMethod_var
                                );
                      if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                          param_2->___availableTris_9 !=
                          (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
                        List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                                   param_2->___availableTris_9,
                                   List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var
                                  );
                        param_2->___createdCount_5 = 0;
                        if (param_2->___mesh_7 !=
                            (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
                          Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE
                                    (param_2->___mesh_7,(MethodInfo *)0x0);
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
      else {
        pGVar14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                             (MethodInfo *)0x0);
        if (pGVar14 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
          GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                    (pGVar14,true,(MethodInfo *)0x0);
          if (param_2->___normals_11 != (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0) {
            iVar18 = param_2->___normals_11->____size_2;
            if (0 < iVar18) {
              for (; iVar18 < param_2->___createdCount_5; iVar18 = iVar18 + 1) {
                pLVar1 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)param_2->___normals_11;
                plVar15 = (lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 *)
                          Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                                    ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                     (local_1c + 4),(MethodInfo *)0x0);
                if (pLVar1 == (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0)
                goto LAB_108782f5;
                List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                          (pLVar1,*plVar15,
                           List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
              }
            }
            if (param_2->___tangents_12 != (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)0x0)
            {
              iVar18 = param_2->___tangents_12->____size_2;
              if (0 < iVar18) {
                for (; iVar18 < param_2->___createdCount_5; iVar18 = iVar18 + 1) {
                  pLVar2 = param_2->___tangents_12;
                  pVVar16 = Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200
                                      ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)local_1c
                                       ,(MethodInfo *)0x0);
                  if (pLVar2 == (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)0x0)
                  goto LAB_108782f5;
                  uVar7 = pVVar16->___y_2;
                  uVar8 = pVVar16->___z_3;
                  uVar9 = pVVar16->___w_4;
                  KVar6.___value_1 = (Il2CppObject *)uVar9;
                  KVar6.___key_0.___dateData_44._4_4_ = uVar8;
                  KVar6.___key_0.___dateData_44._0_4_ = uVar7;
                  KVar6._12_4_ =
                  List_1_Add_m637DB31CF77746D0A935939E71999D8D3741EC7A_RuntimeMethod_var;
                  List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
                            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar2,KVar6,
                             unaff_EDI);
                }
              }
              if (param_2->___uvs_13 != (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0) {
                iVar18 = param_2->___uvs_13->____size_2;
                if (0 < iVar18) {
                  for (; iVar18 < param_2->___createdCount_5; iVar18 = iVar18 + 1) {
                    pLVar3 = (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)param_2->___uvs_13;
                    pVVar16 = Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200
                                        ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)
                                         local_1c,(MethodInfo *)0x0);
                    VVar10.___x_2 = pVVar16->___x_1;
                    VVar10.___y_3 = pVVar16->___y_2;
                    VVar10.___z_4 = pVVar16->___z_3;
                    VVar19 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A
                                       (VVar10,(MethodInfo *)pVVar16->___w_4);
                    if (pLVar3 == (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)0x0)
                    goto LAB_108782f5;
                    List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                              (pLVar3,(float2_tCB7B81181978EDE17722C533A55E345D9A413274)VVar19,
                               List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var
                              );
                  }
                }
                pLVar4 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_2->___tris_14;
                param_2 = (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)0x0;
                if (pLVar4 != (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
                  local_8 = (Il2CppObject *)pLVar4->____size_2;
                  local_c = local_8;
                  if (0 < (int)local_8) {
                    do {
                      pIVar12 = (Il2CppObject *)((int)&local_8[-1].monitor + 3);
                      if ((Il2CppObject *)pLVar4->____size_2 <= pIVar12) {
                        local_8 = pIVar12;
                    /* WARNING: Subroutine does not return */
                        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                  ((MethodInfo *)0x0);
                      }
                      if (*(int *)(&pLVar4->____items_1->m_Items[0].field_0xc +
                                  (int)&local_8[-1].monitor * 4) != 0) break;
                      local_8 = (Il2CppObject *)((int)&local_8[-1].monitor + 2);
                      pGVar14 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                          ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)
                                           pLVar4,(int)local_8,
                                           List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                                          );
                      pIVar12 = local_8;
                      if (pGVar14 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)
                      break;
                      local_8 = (Il2CppObject *)((int)&local_8[-1].monitor + 3);
                      pGVar14 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                          ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)
                                           pLVar4,(int)local_8,
                                           List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                                          );
                      pIVar12 = local_8;
                      if (pGVar14 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)
                      break;
                      if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                          pBVar11->___availableTris_9 ==
                          (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0)
                      goto LAB_108782f5;
                      bVar13 = List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared
                                         ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                                          pBVar11->___availableTris_9,local_8,
                                          List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_RuntimeMethod_var
                                         );
                      if (!bVar13) {
                        pSVar17 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411
                                            ((int *)&local_8,(MethodInfo *)0x0);
                        pSVar17 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                                            (_stringLiteralCA06A7008C54EE30895CE39D58CB73434E363FC9,
                                             pSVar17,(MethodInfo *)0x0);
                        if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->
                             has_cctor != '\0') &&
                           (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->
                            cctor_finished == 0)) {
                          il2cpp_runtime_class_init
                                    (
                                    Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var
                                    );
                        }
                        Debug_Log_mF3A49A8FCD5EC1535CADCDFF57432813A8790DF6
                                  ((Il2CppObject *)pSVar17,
                                   (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBVar11,
                                   (MethodInfo *)0x0);
                        pIVar12 = local_8;
                        break;
                      }
                      param_2 = (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)
                                ((int)&param_2->_padding_ + 1);
                      pIVar12 = local_8;
                    } while (0 < (int)local_8);
                    local_8 = pIVar12;
                    if (0 < (int)param_2) {
                      List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
                                (pLVar4,(int)local_c + (int)param_2 * -3,(int)param_2 * 3,
                                 List_1_RemoveRange_m415CC40F3C018F1D693A921F3C55EBA0C7E36086_RuntimeMethod_var
                                );
                    }
                  }
                  pMVar5 = pBVar11->___mesh_7;
                  if (pMVar5 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
                    Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE(pMVar5,(MethodInfo *)0x0);
                    Mesh_SetVertices_m08C90A1665735C09E15E17DE1A8CD9F196762BCD
                              (pMVar5,pBVar11->___verts_10,(MethodInfo *)0x0);
                    Mesh_SetNormals_m10B6C93B59F4BC8F5D959CD79494F3FCDB67B168
                              (pMVar5,pBVar11->___normals_11,(MethodInfo *)0x0);
                    Mesh_SetTangents_m728C5E61FD6656209686AE3F6734686A2F4E549E
                              (pMVar5,pBVar11->___tangents_12,(MethodInfo *)0x0);
                    Mesh_SetUVs_mDDD16F3EC3434233E34F18221FFD47F8AEA7BCCE
                              (pMVar5,0,pBVar11->___uvs_13,(MethodInfo *)0x0);
                    Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129
                              (pMVar5,pBVar11->___tris_14,0,(MethodInfo *)0x0);
                    Mesh_RecalculateBounds_mC39556595CFE3E4D8EFA777476ECD22B97FC2737
                              (pMVar5,(MethodInfo *)0x0);
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
LAB_108782f5:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
