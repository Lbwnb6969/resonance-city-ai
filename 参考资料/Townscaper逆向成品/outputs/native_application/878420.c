// RVA 0x878420 | Placemaker.BigMeshMaster$$ReturnMesh
// PDB: BigMeshMaster_ReturnMesh_m303991D3B4431E7690F92222ACB930C45F40D82B
// Body: [[10878420, 10878506] [1087850d, 10878607]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 105d1260 List_1_AddRange_m8704F52E688E545812CCE7D22B75C986E0EF9135_gshared
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 1103ecc0 List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared

void __cdecl
BigMeshMaster_ReturnMesh_m303991D3B4431E7690F92222ACB930C45F40D82B
          (BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *param_1,
          BigMeshPart_tE11B7C01E4DE678DA0A0F85B75A7F28BAE201B25 *param_2,MethodInfo *param_3)

{
  BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *pBVar1;
  int iVar2;
  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *pLVar3;
  int iVar4;
  BigMeshPart_tE11B7C01E4DE678DA0A0F85B75A7F28BAE201B25 *pBVar5;
  bool bVar6;
  uint local_8;

  pBVar5 = param_2;
  if (DAT_1151f5b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_AddRange_m0394479E2E18992C79C8AAFCBF631D659AE01FAE_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_AddRange_mC88D9925C6FF0E600794E6235CED09BE7537AB4A_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_mF8F71E7E816FF23D7B695E08E43893C83A814C22_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f5b9 = '\x01';
  }
  if (param_2 != (BigMeshPart_tE11B7C01E4DE678DA0A0F85B75A7F28BAE201B25 *)0x0) {
    pBVar1 = param_2->___bigMesh_0;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBVar1,(MethodInfo *)0x0)
    ;
    if (bVar6) {
      if (param_2->___triIndexes_2 != (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0) {
        iVar2 = param_2->___triIndexes_2->____size_2;
        local_8 = 0;
        if (0 < iVar2) {
          param_2 = (BigMeshPart_tE11B7C01E4DE678DA0A0F85B75A7F28BAE201B25 *)0x10;
          do {
            pLVar3 = pBVar5->___triIndexes_2;
            if (pLVar3 == (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0)
            goto LAB_10878603;
            if ((uint)pLVar3->____size_2 <= local_8) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            if (pBVar1 == (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)0x0)
            goto LAB_10878603;
            iVar4 = *(int *)((int)pLVar3->____items_1->m_Items + (int)&param_2[-1]._padding_);
            if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pBVar1->___tris_14 ==
                (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) goto LAB_10878603;
            List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared
                      ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pBVar1->___tris_14,iVar4,
                       (Il2CppObject *)0x0,
                       List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
            if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pBVar1->___tris_14 ==
                (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) goto LAB_10878603;
            List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared
                      ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pBVar1->___tris_14,
                       iVar4 + 1,(Il2CppObject *)0x0,
                       List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
            if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pBVar1->___tris_14 ==
                (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) goto LAB_10878603;
            List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared
                      ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pBVar1->___tris_14,
                       iVar4 + 2,(Il2CppObject *)0x0,
                       List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
            local_8 = local_8 + 1;
            param_2 = (BigMeshPart_tE11B7C01E4DE678DA0A0F85B75A7F28BAE201B25 *)&param_2->_padding_;
          } while ((int)local_8 < iVar2);
        }
        if ((pBVar1 != (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)0x0) &&
           ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pBVar1->___availableIndexes_8 !=
            (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0)) {
          List_1_AddRange_m8704F52E688E545812CCE7D22B75C986E0EF9135_gshared
                    ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                     pBVar1->___availableIndexes_8,(Il2CppObject *)pBVar5->___vertIndexes_1,
                     List_1_AddRange_m0394479E2E18992C79C8AAFCBF631D659AE01FAE_RuntimeMethod_var);
          if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pBVar1->___availableTris_9 !=
              (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
            List_1_AddRange_m8704F52E688E545812CCE7D22B75C986E0EF9135_gshared
                      ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                       pBVar1->___availableTris_9,(Il2CppObject *)pBVar5->___triIndexes_2,
                       List_1_AddRange_mC88D9925C6FF0E600794E6235CED09BE7537AB4A_RuntimeMethod_var);
            if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pBVar5->___vertIndexes_1 !=
                (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
              List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                        ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                         pBVar5->___vertIndexes_1,
                         List_1_Clear_mF8F71E7E816FF23D7B695E08E43893C83A814C22_RuntimeMethod_var);
              if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pBVar5->___triIndexes_2 !=
                  (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
                List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                          ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                           pBVar5->___triIndexes_2,
                           List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var)
                ;
                pBVar5->___bigMesh_0 = (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)0x0;
                pBVar1->___dirty_6 = true;
                return;
              }
            }
          }
        }
      }
LAB_10878603:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
  }
  return;
}
