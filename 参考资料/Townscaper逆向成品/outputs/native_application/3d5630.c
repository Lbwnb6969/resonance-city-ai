// RVA 0x3d5630 | Placemaker.Ui.MaxSavesCounter$$UpdateCountText
// PDB: MaxSavesCounter_UpdateCountText_m04F92FB2C93CC35FF67D394E48DB0BD389F9D564
// Body: [[103d5630, 103d56ef]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10501a90 LocalizationParamsManager_SetParameterValue_m845F9E2F2AEC81F9C21A4B11A1ABAD810DA1B520
// 105040e0 Localize_SetTerm_m1E79C9D83AC0C1C282115F6F1D3BE5C4035D6445
// 10f027d0 String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44

void __cdecl
MaxSavesCounter_UpdateCountText_m04F92FB2C93CC35FF67D394E48DB0BD389F9D564
          (MaxSavesCounter_t2334DAABC68899583264380C9F9C6637980D2DF2 *param_1,String_t *param_2,
          String_t *param_3,MethodInfo *param_4)

{
  String_t *pSVar1;

  if (DAT_1151c86a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA18E784C84762DFFFFA0DCFDA6BBAABEF55A100A);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralD300F5CDE2926BD3D3149687EF54639E3A118EE7);
    DAT_1151c86a = '\x01';
  }
  pSVar1 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44
                     (param_2,_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1,param_3,
                      (MethodInfo *)0x0);
  if (param_1->___localizationParamsManagerTop_4 !=
      (LocalizationParamsManager_tFB190AA86466FADF7B1AE386E83D6A6512657FF2 *)0x0) {
    LocalizationParamsManager_SetParameterValue_m845F9E2F2AEC81F9C21A4B11A1ABAD810DA1B520
              (param_1->___localizationParamsManagerTop_4,
               _stringLiteralA18E784C84762DFFFFA0DCFDA6BBAABEF55A100A,pSVar1,true,(MethodInfo *)0x0)
    ;
    if (param_1->___localizeTop_5 != (Localize_t7BFA4E2A8B445A9E2F49DEA4F4C1D5399C42E088 *)0x0) {
      Localize_SetTerm_m1E79C9D83AC0C1C282115F6F1D3BE5C4035D6445
                (param_1->___localizeTop_5,_stringLiteralD300F5CDE2926BD3D3149687EF54639E3A118EE7,
                 (MethodInfo *)0x0);
      if (param_1->___localizationParamsManagerChild_6 !=
          (LocalizationParamsManager_tFB190AA86466FADF7B1AE386E83D6A6512657FF2 *)0x0) {
        LocalizationParamsManager_SetParameterValue_m845F9E2F2AEC81F9C21A4B11A1ABAD810DA1B520
                  (param_1->___localizationParamsManagerChild_6,
                   _stringLiteralA18E784C84762DFFFFA0DCFDA6BBAABEF55A100A,pSVar1,true,
                   (MethodInfo *)0x0);
        if (param_1->___localizeChild_7 != (Localize_t7BFA4E2A8B445A9E2F49DEA4F4C1D5399C42E088 *)0x0
           ) {
          Localize_SetTerm_m1E79C9D83AC0C1C282115F6F1D3BE5C4035D6445
                    (param_1->___localizeChild_7,
                     _stringLiteralD300F5CDE2926BD3D3149687EF54639E3A118EE7,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
