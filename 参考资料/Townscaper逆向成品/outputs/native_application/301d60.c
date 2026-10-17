// RVA 0x301d60 | Placemaker.TextSaveSystem$$LoadFromString
// PDB: TextSaveSystem_LoadFromString_mCADEA552BBD342F6290459E31BB3F0CC6C4857E3
// Body: [[10301d60, 103026e8]]
// Direct callees:
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 1003e770 SetAt
// 101275a0 il2cpp_array_new_specific
// 101280f0 il2cpp_runtime_class_init
// 10128ae0 il2cpp_value_box
// 1018e500 IsInst
// 1018e700 il2cpp_codegen_get_array_type_mismatch_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103027e0 TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
// 10441630 DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// 105cffe0 ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
// 1088f200 BitArray_Get_m8F334881C262C112865FE98A64C11C5090CFCA86
// 1088f2b0 BitArray_Set_mA16A2CBB10C6F3FB78885109803F2C7325864F8A
// 1088f7b0 BitArray_set_Length_mA4B0BAC652E52B67C499AAC1B7CE4CF673149AB0
// 10928710 List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
// 10a3c6b0 Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
// 10d00a20 Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared
// 10f04ed0 String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B
// 10f09d80 String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
// 1103ef20 List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_gshared

bool __cdecl
TextSaveSystem_LoadFromString_mCADEA552BBD342F6290459E31BB3F0CC6C4857E3
          (String_t *param_1,List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *param_2,
          List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *param_3,MethodInfo *param_4)

{
  Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *pDVar1;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar2;
  V_t2C4FF2B994717C0763FC7587F2B998766A7145F5 VVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  wchar_t wVar7;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar8;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar9;
  int iVar10;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar11;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *this;
  Il2CppObject *pIVar12;
  Il2CppObject *pIVar13;
  String_t *pSVar14;
  Exception_t *pEVar15;
  uint uVar16;
  char cVar17;
  AchievementID_t13562D86FC9C116E950E863A44792F46EBFFE67D AVar18;
  int iVar19;
  List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *pLVar20;
  int iVar21;
  MethodInfo *pMVar22;
  undefined8 local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_20;
  int local_1c;
  Il2CppObject *local_18;
  int local_14;
  int local_10;
  undefined2 local_c;
  undefined2 uStack_a;
  int local_8;

  if (DAT_1151c223 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m47B1353567BAAAADCDE97525F692911B90D4A216_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_mDACBB18E39AD629118308EC0D7936A3FD5B73A91_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m6BB46856D8BA929F469492C9CA2F7CAFFA6E3B99_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral1B907846A1129B9EE076E1326AF8AD2F72C25B4B);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral8F9FF3B1C930027A842164E69BB459E3B16D6CC0);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA3ED9566B8976A292BDA91905361994EC2D90085);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralBCB84C3CA9F0097077DEFA7C6BACFF38DC27BA84);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_il2cpp_TypeInfo_var);
    DAT_1151c223 = '\x01';
  }
  pSVar14 = param_1;
  local_18 = (Il2CppObject *)0x0;
  local_40 = 0;
  if (param_1 == (String_t *)0x0) goto LAB_103026e4;
  iVar10 = param_1->___m_stringLength_0;
  if (iVar10 != 0) {
    if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
    }
    local_10 = *(int *)((int)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                             ->static_fields + 8) * iVar10;
    if (0x13 < local_10) {
      local_8 = 0;
      if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor
           != '\0') &&
         (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
          cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
      }
      if (*(int *)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                  static_fields == 0) {
LAB_103026e4:
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_null_reference_exception();
      }
      if (*(int *)(*(int *)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                           ->static_fields + 0xc) < local_10) {
        if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor
             != '\0') &&
           (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
            cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
        }
        if (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
             TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
             static_fields == (BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 *)0x0)
        goto LAB_103026e4;
        BitArray_set_Length_mA4B0BAC652E52B67C499AAC1B7CE4CF673149AB0
                  (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                    TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                    static_fields,local_10,(MethodInfo *)0x0);
      }
      iVar21 = 0;
      iVar19 = local_10;
      if (0 < iVar10) {
        do {
          wVar7 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70
                            (pSVar14,iVar21,(MethodInfo *)0x0);
          AVar18.___id_0._2_2_ = 0;
          AVar18.___id_0._0_2_ = wVar7;
          if ((TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var->
               has_cctor != '\0') &&
             (TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (
                      TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var
                      );
          }
          pDVar1 = *(Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B **)
                    ((int)TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var
                          ->static_fields + 4);
          if (pDVar1 == (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)0x0)
          goto LAB_103026e4;
          bVar6 = Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared
                            (pDVar1,AVar18,&local_18,
                             Dictionary_2_TryGetValue_m47B1353567BAAAADCDE97525F692911B90D4A216_RuntimeMethod_var
                            );
          if (!bVar6) {
            return false;
          }
          iVar19 = 0;
          while( true ) {
            if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                 has_cctor != '\0') &&
               (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (
                        TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                        );
            }
            if (*(int *)((int)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                              ->static_fields + 8) <= iVar19) break;
            if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                 has_cctor != '\0') &&
               (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (
                        TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                        );
            }
            iVar5 = local_8;
            local_8 = local_8 + 1;
            if (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                 TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                 static_fields == (BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 *)0x0)
            goto LAB_103026e4;
            BitArray_Set_mA16A2CBB10C6F3FB78885109803F2C7325864F8A
                      (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                        TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                        ->static_fields,iVar5,(bool)((byte)local_18 & 1),(MethodInfo *)0x0);
            local_18 = (Il2CppObject *)((int)local_18 >> 1);
            iVar19 = iVar19 + 1;
          }
          iVar21 = iVar21 + 1;
          pSVar14 = param_1;
          iVar19 = local_10;
        } while (iVar21 < iVar10);
      }
      do {
        local_10 = iVar19;
        iVar10 = local_10;
        if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor
             != '\0') &&
           (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
            cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
        }
        if (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
             TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
             static_fields == (BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 *)0x0)
        goto LAB_103026e4;
        bVar6 = BitArray_Get_m8F334881C262C112865FE98A64C11C5090CFCA86
                          (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                            TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                            ->static_fields,iVar10 + -1,(MethodInfo *)0x0);
      } while ((!bVar6) && (iVar19 = iVar10 + -1, 0 < iVar10));
      local_8 = 0;
      if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor
           != '\0') &&
         (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
          cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
      }
      iVar19 = TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                         (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                           TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                           ->static_fields,&local_8,5,(MethodInfo *)0x0);
      local_2c = TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                           (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                             TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                             ->static_fields,&local_8,5,(MethodInfo *)0x0);
      local_30 = TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                           (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                             TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                             ->static_fields,&local_8,5,(MethodInfo *)0x0);
      if (iVar10 < local_8 + iVar19 * 2 + 1) {
        if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
           && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished
               == 0)) {
          il2cpp_runtime_class_init
                    (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
        }
        Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
                  ((Il2CppObject *)_stringLiteralA3ED9566B8976A292BDA91905361994EC2D90085,
                   (MethodInfo *)0x0);
        return false;
      }
      if (iVar19 == 0) {
        iVar21 = 0;
      }
      else {
        iVar21 = 1 << ((char)iVar19 - 1U & 0x1f);
      }
      if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor
           != '\0') &&
         (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
          cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
      }
      local_1c = TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                           (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                             TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                             ->static_fields,&local_8,iVar19,(MethodInfo *)0x0);
      local_1c = local_1c - iVar21;
      local_38 = TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                           (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                             TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                             ->static_fields,&local_8,iVar19,(MethodInfo *)0x0);
      local_38 = local_38 - iVar21;
      if (local_8 + 4 <= iVar10) {
        if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor
             != '\0') &&
           (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
            cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
        }
        iVar19 = TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                           (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                             TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                             ->static_fields,&local_8,4,(MethodInfo *)0x0);
        local_14 = iVar19;
        if (local_8 + iVar19 * 4 <= iVar10) {
          if ((ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->has_cctor
               != '\0') &&
             (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
          }
          pDVar8 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                   ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
                             (iVar19,
                              ListPool_1_Get_mDACBB18E39AD629118308EC0D7936A3FD5B73A91_RuntimeMethod_var
                             );
          iVar19 = 0;
          local_20 = pDVar8;
          if (0 < local_14) {
            do {
              if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                   has_cctor != '\0') &&
                 (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (
                          TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                          );
              }
              OVar9 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                      TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                                (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                                  TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                                  ->static_fields,&local_8,4,(MethodInfo *)0x0);
              if (pDVar8 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
              goto LAB_103026e4;
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar8,OVar9,
                         List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
              iVar19 = iVar19 + 1;
            } while (iVar19 < local_14);
          }
          if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
               has_cctor != '\0') &&
             (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var)
            ;
          }
          iVar19 = 0;
          local_24 = 0;
          if (0 < local_14 + 1) {
            uVar16 = 1;
            do {
              uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
              iVar19 = iVar19 + 1;
              local_24 = iVar19;
            } while ((int)uVar16 <= local_14 + 1);
          }
          cVar17 = '\x01';
          param_1 = (String_t *)CONCAT13(1,param_1._0_3_);
          local_40 = CONCAT44((1 << ((byte)local_24 & 0x1f)) + -1,(undefined4)local_40);
          pLVar20 = param_3;
          if (local_8 < iVar10) {
            do {
              if (cVar17 == '\0') {
                if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (
                            TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                            );
                }
                iVar10 = TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                                   (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                                     TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                                     ->static_fields,&local_8,1,(MethodInfo *)0x0);
                if (iVar10 == 1) {
                  if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                       ->has_cctor != '\0') &&
                     (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (
                              TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                              );
                  }
                  iVar10 = TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                                     (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                                       TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                                       ->static_fields,&local_8,local_2c,(MethodInfo *)0x0);
                  local_1c = local_1c + iVar10;
                }
              }
              else {
                param_1 = (String_t *)((uint)param_1 & 0xffffff);
              }
              if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                   has_cctor != '\0') &&
                 (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (
                          TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                          );
              }
              local_28 = TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                                   (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                                     TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                                     ->static_fields,&local_8,local_30,(MethodInfo *)0x0);
              iVar19 = 0;
              local_28 = local_28 + local_38;
              iVar10 = TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                                 (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                                   TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                                   ->static_fields,&local_8,1,(MethodInfo *)0x0);
              if (iVar10 == 1) {
                _local_c = CONCAT22(uStack_a,0xf);
                if (pLVar20 == (List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *)0x0)
                goto LAB_103026e4;
                List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_gshared
                          (pLVar20,(V_t2C4FF2B994717C0763FC7587F2B998766A7145F5)0xf,
                           List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_RuntimeMethod_var);
                iVar19 = 1;
              }
              cVar17 = '\x01';
              while( true ) {
                if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (
                            TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                            );
                }
                iVar10 = TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                                   (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                                     TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                                     ->static_fields,&local_8,local_24,(MethodInfo *)0x0);
                if (iVar10 == local_40._4_4_) break;
                if (iVar10 != 0) {
                  iVar10 = iVar10 + -1;
                  if ((local_14 <= iVar10) || (iVar10 < 0)) {
                    this = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
                           il2cpp_array_new_specific
                                     (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var
                                      ,4);
                    local_40 = CONCAT44(iVar10,(undefined4)local_40);
                    pIVar12 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                               ,(void *)((int)&local_40 + 4));
                    if (this != (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0) {
                      if ((pIVar12 != (Il2CppObject *)0x0) &&
                         (pIVar13 = IsInst(pIVar12,*(Il2CppClass **)(this->_padding_ + 0x20)),
                         pIVar13 == (Il2CppObject *)0x0)) {
                        pMVar22 = (MethodInfo *)0x0;
                        pEVar15 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                        il2cpp_codegen_raise_exception(pEVar15,pMVar22);
                      }
                      ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(this,0,pIVar12);
                      local_38 = local_14;
                      pIVar12 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                                 ,&local_38);
                      if ((pIVar12 != (Il2CppObject *)0x0) &&
                         (pIVar13 = IsInst(pIVar12,*(Il2CppClass **)(this->_padding_ + 0x20)),
                         pIVar13 == (Il2CppObject *)0x0)) {
                        pMVar22 = (MethodInfo *)0x0;
                        pEVar15 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                        il2cpp_codegen_raise_exception(pEVar15,pMVar22);
                      }
                      ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(this,1,pIVar12);
                      param_1 = (String_t *)CONCAT13(cVar17,param_1._0_3_);
                      pIVar12 = il2cpp_value_box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var
                                                 ,(void *)((int)&param_1 + 3));
                      if ((pIVar12 != (Il2CppObject *)0x0) &&
                         (pIVar13 = IsInst(pIVar12,*(Il2CppClass **)(this->_padding_ + 0x20)),
                         pIVar13 == (Il2CppObject *)0x0)) {
                        pMVar22 = (MethodInfo *)0x0;
                        pEVar15 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                        il2cpp_codegen_raise_exception(pEVar15,pMVar22);
                      }
                      ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(this,2,pIVar12);
                      local_34 = local_1c;
                      local_30 = local_28;
                      pIVar12 = il2cpp_value_box(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_il2cpp_TypeInfo_var
                                                 ,&local_34);
                      if ((pIVar12 != (Il2CppObject *)0x0) &&
                         (pIVar13 = IsInst(pIVar12,*(Il2CppClass **)(this->_padding_ + 0x20)),
                         pIVar13 == (Il2CppObject *)0x0)) {
                        pMVar22 = (MethodInfo *)0x0;
                        pEVar15 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                        il2cpp_codegen_raise_exception(pEVar15,pMVar22);
                      }
                      ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(this,3,pIVar12);
                      pSVar14 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B
                                          (_stringLiteralBCB84C3CA9F0097077DEFA7C6BACFF38DC27BA84,
                                           this,(MethodInfo *)0x0);
                      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->
                           has_cctor != '\0') &&
                         (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->
                          cctor_finished == 0)) {
                        il2cpp_runtime_class_init
                                  (
                                  Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var
                                  );
                      }
                      Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
                                ((Il2CppObject *)pSVar14,(MethodInfo *)0x0);
                      DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                                (local_20,
                                 ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
                                );
                      return false;
                    }
                    goto LAB_103026e4;
                  }
                  if (local_20 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
                  goto LAB_103026e4;
                  local_c = CONCAT11(cVar17,(undefined1)local_c);
                  pGVar11 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                      ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)local_20,
                                       iVar10,
                                       List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                                      );
                  uVar4 = _local_c;
                  pLVar20 = param_3;
                  _local_c = CONCAT31(stack0xfffffff5,(uchar)pGVar11);
                  if (param_3 == (List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *)0x0)
                  goto LAB_103026e4;
                  VVar3.___h_1 = (uchar)((uint)uVar4 >> 8);
                  VVar3.___t_0 = (uchar)pGVar11;
                  List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_gshared
                            (param_3,VVar3,
                             List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_RuntimeMethod_var)
                  ;
                  iVar19 = iVar19 + 1;
                  if (cVar17 == -1) break;
                }
                cVar17 = cVar17 + '\x01';
              }
              if (param_2 == (List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *)0x0)
              goto LAB_103026e4;
              lVar2.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = local_28;
              lVar2.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = local_1c;
              lVar2.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._0_1_ = (char)iVar19;
              lVar2.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._1_1_ = (char)((uint)iVar19 >> 8);
              lVar2.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ = (short)((uint)iVar19 >> 0x10);
              List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                        ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)param_2,lVar2,
                         List_1_Add_m6BB46856D8BA929F469492C9CA2F7CAFFA6E3B99_RuntimeMethod_var);
              pDVar8 = local_20;
              if (local_10 <= local_8) break;
              cVar17 = param_1._3_1_;
            } while( true );
          }
          DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                    (pDVar8,
                     ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
                    );
          return true;
        }
      }
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      }
      Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
                ((Il2CppObject *)_stringLiteral8F9FF3B1C930027A842164E69BB459E3B16D6CC0,
                 (MethodInfo *)0x0);
      return false;
    }
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
              ((Il2CppObject *)_stringLiteral1B907846A1129B9EE076E1326AF8AD2F72C25B4B,
               (MethodInfo *)0x0);
  }
  return false;
}
