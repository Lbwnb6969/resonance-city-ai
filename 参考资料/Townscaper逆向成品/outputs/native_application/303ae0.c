// RVA 0x303ae0 | Placemaker.TexturePngMaster$$ReadOrWriteTexture
// PDB: TexturePngMaster_ReadOrWriteTexture_m90FD8B789720AC3CBB1FFA3C55646A49D5FA4092
// Body: [[10303ae0, 10303e4d]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e5930 UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
// 106684d0 Shader_SetGlobalTexture_m0566B97B8028F374E445F7CC59DBFDD74911FCA4
// 106ebde0 DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090
// 106ebf70 DateTime_op_GreaterThan_m87A988E247EFDFFE61474088700F29840758E3DD
// 10871af0 AoBaker_ApplyMaterialColors_m9C15BE29563D6B586C6B11536F51F58BB90D7394
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10a70db0 File_Create_m2C278C920C8B40322EB632EC620A83B021C90725
// 10a710b0 File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B
// 10a71350 File_GetLastWriteTimeUtc_m57ABF9D7B4CDAF0FC8F279DC52DAD63E73FC4E05
// 10a71d40 File_ReadAllBytes_mFB47FB50E938AE90CC822442D30E896441D95829
// 10afb9d0 TailStream_Clear_m342CD7E4F95BA76B3C061A63D471A34CEBAC138C
// 10b19040 Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A
// 10b198a0 Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE
// 10c789f0 Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
// 10f04a30 String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
// 11149100 ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED
// 11149190 ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477

void __cdecl
TexturePngMaster_ReadOrWriteTexture_m90FD8B789720AC3CBB1FFA3C55646A49D5FA4092
          (TexturePngMaster_t66DC98DAEB68DC2C477793AAAD65DD4068F9A252 *param_1,
          PngTexture_t89D9DA2502E70FAFB9C1AA22ED6922734AEB6457 *param_2,MethodInfo *param_3)

{
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar1;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar2;
  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *pTVar3;
  AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *pAVar4;
  bool bVar5;
  String_t *pSVar6;
  Il2CppObject *pIVar7;
  String_t *pSVar8;
  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *pTVar9;
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar10;
  FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *pFVar11;
  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 DVar12;
  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 DVar13;
  uint local_8;

  if (DAT_1151c227 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Object_Instantiate_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m5FBE0271575DA03AC87A6BACC1D048FDEADDE1E7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral336A551F5336FDCB861F2DCAFF4C1C69F6940C6F);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral62E7F40D4D70722F7E502E5C0E252311A2795564);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral6AC6CD7EE5D0B9E2CC35FA1645A2A93609C6C8A0);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralCE22A5EE746F86F7E83C8DC0598E5C5DD424CD02);
    DAT_1151c227 = '\x01';
  }
  if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (pUVar1 = param_1->___master_4->___uiMaster_4,
     pUVar1 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)) {
    pSVar6 = UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
                       (pUVar1,_stringLiteralCE22A5EE746F86F7E83C8DC0598E5C5DD424CD02,
                        (MethodInfo *)0x0);
    if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    }
    local_8 = (uint)*(ushort *)
                     ((int)Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->
                           static_fields + 6);
    pIVar7 = il2cpp_value_box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var,
                              &local_8);
    if (param_2 != (PngTexture_t89D9DA2502E70FAFB9C1AA22ED6922734AEB6457 *)0x0) {
      pSVar8 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                         (_stringLiteral62E7F40D4D70722F7E502E5C0E252311A2795564,
                          (Il2CppObject *)pSVar6,pIVar7,(Il2CppObject *)param_2->___diskName_3,
                          (MethodInfo *)0x0);
      bVar5 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(pSVar8,(MethodInfo *)0x0);
      if (bVar5) {
        DVar12 = File_GetLastWriteTimeUtc_m57ABF9D7B4CDAF0FC8F279DC52DAD63E73FC4E05
                           (pSVar8,(MethodInfo *)0x0);
        DVar13.___dateData_44 = (param_2->___lastReadTime_2).___dateData_44;
        if ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
        }
        bVar5 = DateTime_op_GreaterThan_m87A988E247EFDFFE61474088700F29840758E3DD
                          (DVar12,DVar13,(MethodInfo *)0x0);
        if (bVar5) {
          pSVar6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                             (_stringLiteral336A551F5336FDCB861F2DCAFF4C1C69F6940C6F,pSVar8,
                              (MethodInfo *)0x0);
          if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
              0)) {
            il2cpp_runtime_class_init
                      (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
          }
          Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
                    ((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
          pOVar2 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_2->___gameTex_1;
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          bVar5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                            (pOVar2,(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0,
                             (MethodInfo *)0x0);
          if (bVar5) {
            pTVar9 = param_2->___srcTex_0;
            if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
            }
            pTVar9 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)
                     Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared
                               ((Il2CppObject *)pTVar9,
                                Object_Instantiate_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m5FBE0271575DA03AC87A6BACC1D048FDEADDE1E7_RuntimeMethod_var
                               );
            param_2->___gameTex_1 = pTVar9;
          }
          pBVar10 = File_ReadAllBytes_mFB47FB50E938AE90CC822442D30E896441D95829
                              (pSVar8,(MethodInfo *)0x0);
          ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477
                    (param_2->___gameTex_1,pBVar10,(MethodInfo *)0x0);
          if ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
          }
          DVar13 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090((MethodInfo *)0x0);
          pTVar3 = (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)param_2->___gameTex_1;
          pSVar6 = param_2->___shaderName_4;
          (param_2->___lastReadTime_2).___dateData_44 = DVar13.___dateData_44;
          Shader_SetGlobalTexture_m0566B97B8028F374E445F7CC59DBFDD74911FCA4
                    (pSVar6,pTVar3,(MethodInfo *)0x0);
          if (param_2 == param_1->___paletteTex_7) {
            if ((param_1->___master_4 ==
                 (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
               (pAVar4 = param_1->___master_4->___aoBaker_11,
               pAVar4 == (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *)0x0))
            goto LAB_10303e49;
            AoBaker_ApplyMaterialColors_m9C15BE29563D6B586C6B11536F51F58BB90D7394
                      (pAVar4,(MethodInfo *)0x0);
          }
        }
        return;
      }
      bVar5 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(pSVar6,(MethodInfo *)0x0);
      if (!bVar5) {
        Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A
                  (pSVar6,(MethodInfo *)0x0);
      }
      pSVar6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                         (_stringLiteral6AC6CD7EE5D0B9E2CC35FA1645A2A93609C6C8A0,pSVar8,
                          (MethodInfo *)0x0);
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      }
      Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
      pFVar11 = File_Create_m2C278C920C8B40322EB632EC620A83B021C90725(pSVar8,(MethodInfo *)0x0);
      pBVar10 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED
                          (param_2->___srcTex_0,(MethodInfo *)0x0);
      if ((pBVar10 != (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)0x0) &&
         (pFVar11 != (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)0x0)) {
        (**(code **)(pFVar11->_padding_ + 0x1a4))
                  (pFVar11,pBVar10,0,pBVar10->_padding_,*(undefined4 *)(pFVar11->_padding_ + 0x1a8))
        ;
        TailStream_Clear_m342CD7E4F95BA76B3C061A63D471A34CEBAC138C
                  ((TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C *)pFVar11,(MethodInfo *)0x0
                  );
        if ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
        }
        DVar13 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090((MethodInfo *)0x0);
        pTVar3 = (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)param_2->___srcTex_0;
        pSVar6 = param_2->___shaderName_4;
        (param_2->___lastReadTime_2).___dateData_44 = DVar13.___dateData_44;
        Shader_SetGlobalTexture_m0566B97B8028F374E445F7CC59DBFDD74911FCA4
                  (pSVar6,pTVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_10303e49:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
