// RVA 0x3e5930 | Placemaker.Ui.UiMaster$$DefaultPath
// PDB: UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
// Body: [[103e5930, 103e5bf0]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 101280f0 il2cpp_runtime_class_init
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10527080 Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8
// 10626950 ValidationHelper_IsBlankString_m36C36F665203B4C29D68521575BA043C79AE6997
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
// 10f027d0 String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44
// 10f02d80 String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A
// 10f06590 String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509
// 10f084f0 String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B
// 11030e80 List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared
// 11036bc0 List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared
// 11036ff0 List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared
// 1103c680 List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared
// 110cf350 FilePathRootExtensions_Path_mB547D0EC6CAADF29442349F5AF59AB3CC3CE033B

String_t * __cdecl
UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,String_t *param_2,
          MethodInfo *param_3)

{
  StandalonePlatformSettings_t44D95CAF8B7F3010B7B48B35FE75EE08D38B8916 *pSVar1;
  bool bVar2;
  String_t *pSVar3;
  CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *pCVar4;
  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *pSVar5;
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar6;
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar7;
  String_t *pSVar8;
  String_t *pSVar9;
  Exception_t *pEVar10;
  wchar_t wVar11;
  wchar_t wVar12;
  MethodInfo *pMVar13;
  uint local_c;
  String_t *local_8;

  if (DAT_1151c8b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_RemoveAt_mF6A5472156C6CDBD7737FB15168FD637ED470C73_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
    DAT_1151c8b9 = '\x01';
  }
  if ((param_1->___furyPlatformSettings_14 !=
       (PlatformSettings_t3FEC8BA69291E07F62699229910DA7E6828AA8AA *)0x0) &&
     (pSVar1 = param_1->___furyPlatformSettings_14->___standalone_7,
     pSVar1 != (StandalonePlatformSettings_t44D95CAF8B7F3010B7B48B35FE75EE08D38B8916 *)0x0)) {
    pSVar3 = FilePathRootExtensions_Path_mB547D0EC6CAADF29442349F5AF59AB3CC3CE033B
                       (pSVar1->___storageRoot_0,
                        _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709,(MethodInfo *)0x0);
    if ((param_1->___furyPlatformSettings_14 !=
         (PlatformSettings_t3FEC8BA69291E07F62699229910DA7E6828AA8AA *)0x0) &&
       (pSVar1 = param_1->___furyPlatformSettings_14->___standalone_7,
       pSVar1 != (StandalonePlatformSettings_t44D95CAF8B7F3010B7B48B35FE75EE08D38B8916 *)0x0)) {
      pSVar8 = pSVar1->___storageRootSuffixPc_1;
      if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0') &&
         (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished == 0))
      {
        il2cpp_runtime_class_init
                  (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
      }
      local_c = (uint)*(ushort *)
                       ((int)Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->
                             static_fields + 6);
      local_8 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8
                          ((wchar_t *)&local_c,(MethodInfo *)0x0);
      pCVar4 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)
               il2cpp_array_new_specific
                         (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var,1
                         );
      if (pSVar3 != (String_t *)0x0) {
        bVar2 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A
                          (pSVar3,_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40,
                           (MethodInfo *)0x0);
        wVar12 = L'/';
        wVar11 = L'/';
        if (bVar2) {
          wVar11 = L'\\';
        }
        if (pCVar4 != (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)0x0) {
          pMVar13 = (MethodInfo *)0x0;
          if (pCVar4->_padding_ == 0) {
            pEVar10 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar10,pMVar13);
          }
          pCVar4->m_Items[0] = wVar11;
          pSVar5 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B
                             (pSVar3,pCVar4,(MethodInfo *)0x0);
          pLVar6 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                   il2cpp_codegen_object_new
                             (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
          List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared
                    (pLVar6,(Il2CppObject *)pSVar5,
                     List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var);
          pCVar4 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)
                   il2cpp_array_new_specific
                             (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var
                              ,1);
          if (pSVar8 != (String_t *)0x0) {
            bVar2 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A
                              (pSVar8,_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40,
                               (MethodInfo *)0x0);
            if (bVar2) {
              wVar12 = L'\\';
            }
            if (pCVar4 != (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)0x0) {
              pMVar13 = (MethodInfo *)0x0;
              if (pCVar4->_padding_ == 0) {
                pEVar10 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                il2cpp_codegen_raise_exception(pEVar10,pMVar13);
              }
              pCVar4->m_Items[0] = wVar12;
              pSVar5 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B
                                 (pSVar8,pCVar4,(MethodInfo *)0x0);
              pLVar7 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                       il2cpp_codegen_object_new
                                 (
                                 List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var
                                 );
              List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared
                        (pLVar7,(Il2CppObject *)pSVar5,
                         List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var);
              if (pLVar7 != (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
                while( true ) {
                  bVar2 = List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared
                                    (pLVar7,(Il2CppObject *)
                                            _stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F,
                                     List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var
                                    );
                  if (!bVar2) {
                    pSVar8 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509
                                       (local_8,(Il2CppObject *)pLVar6,(MethodInfo *)0x0);
                    pSVar3 = local_8;
                    pSVar9 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509
                                       (local_8,(Il2CppObject *)pLVar7,(MethodInfo *)0x0);
                    pSVar8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                                       (pSVar8,pSVar9,(MethodInfo *)0x0);
                    bVar2 = ValidationHelper_IsBlankString_m36C36F665203B4C29D68521575BA043C79AE6997
                                      (param_2,(MethodInfo *)0x0);
                    if (!bVar2) {
                      pSVar8 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44
                                         (pSVar8,pSVar3,param_2,(MethodInfo *)0x0);
                    }
                    return pSVar8;
                  }
                  List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared
                            (pLVar7,(Il2CppObject *)
                                    _stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F,
                             List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var
                            );
                  if (pLVar6 == (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) break;
                  List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared
                            (pLVar6,pLVar6->____size_2 + -1,
                             List_1_RemoveAt_mF6A5472156C6CDBD7737FB15168FD637ED470C73_RuntimeMethod_var
                            );
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
