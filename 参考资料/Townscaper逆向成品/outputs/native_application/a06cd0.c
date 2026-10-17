// RVA 0xa06cd0 | Placemaker.ScreenshotCamera$$SaveImageToPath
// PDB: ScreenshotCamera_SaveImageToPath_m6FF227C52179060688DDC150C655AA78BC7C9150
// Body: [[10a06cd0, 10a06df1]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a70db0 File_Create_m2C278C920C8B40322EB632EC620A83B021C90725
// 10afb9d0 TailStream_Clear_m342CD7E4F95BA76B3C061A63D471A34CEBAC138C
// 10eda000 Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD
// 10f04510 String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
// 111490d0 ImageConversion_EncodeToJPG_mE32249F45E643405652057EA8A35112AB4721641
// 11149100 ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED

void __cdecl
ScreenshotCamera_SaveImageToPath_m6FF227C52179060688DDC150C655AA78BC7C9150
          (ScreenshotCamera_t4E8C267455459B778FADF5011EA58AACA4DA9D6B *param_1,
          Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *param_2,String_t *param_3,
          MethodInfo *param_4)

{
  bool bVar1;
  String_t *pSVar2;
  FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *pFVar3;
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar4;

  if (DAT_115201cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
    DAT_115201cb = '\x01';
  }
  if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
  }
  pSVar2 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(param_3,(MethodInfo *)0x0);
  if ((pSVar2 != (String_t *)0x0) &&
     ((bVar1 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                         (pSVar2,_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A,
                          (MethodInfo *)0x0), bVar1 ||
      (bVar1 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                         (pSVar2,_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26,
                          (MethodInfo *)0x0), bVar1)))) {
    pBVar4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)0x0;
    bVar1 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                      (pSVar2,_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A,
                       (MethodInfo *)0x0);
    if (bVar1) {
      pBVar4 = ImageConversion_EncodeToJPG_mE32249F45E643405652057EA8A35112AB4721641
                         (param_2,0x62,(MethodInfo *)0x0);
    }
    else {
      bVar1 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                        (pSVar2,_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pBVar4 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED
                           (param_2,(MethodInfo *)0x0);
      }
    }
    pFVar3 = File_Create_m2C278C920C8B40322EB632EC620A83B021C90725(param_3,(MethodInfo *)0x0);
    if ((pBVar4 == (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)0x0) ||
       (pFVar3 == (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    (**(code **)(pFVar3->_padding_ + 0x1a4))
              (pFVar3,pBVar4,0,pBVar4->_padding_,*(undefined4 *)(pFVar3->_padding_ + 0x1a8));
    TailStream_Clear_m342CD7E4F95BA76B3C061A63D471A34CEBAC138C
              ((TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C *)pFVar3,(MethodInfo *)0x0);
  }
  return;
}
