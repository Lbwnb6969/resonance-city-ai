// RVA 0xa03ad0 | Placemaker.SaveSystem$$<IterateRefresh>g__IsValid|49_0
// PDB: SaveSystem_U3CIterateRefreshU3Eg__IsValidU7C49_0_m0B0535DC97F0879102BBE8DDDBA894E65CE36E6C
// Body: [[10a03ad0, 10a03b92]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10ed9c20 Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE
// 10f03e90 String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE
// 10f0a070 String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2

bool __cdecl
SaveSystem_U3CIterateRefreshU3Eg__IsValidU7C49_0_m0B0535DC97F0879102BBE8DDDBA894E65CE36E6C
          (U3CU3Ec__DisplayClass49_0_tAD03B01ADD5981B97DAD2F18C5A89679CE08C362 *param_1,
          MethodInfo *param_2)

{
  bool bVar1;
  String_t *pSVar2;

  if (DAT_115201bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral919FBC713DA3D137E06A974504E1D16C00FD51F2);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral996C963F173C87BB8D89913B87082558702DF114);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF9603110CD994850BB7E88E6FC7174E5BDE2D2EC);
    DAT_115201bc = '\x01';
  }
  if (param_1->___fileName_0 != (String_t *)0x0) {
    bVar1 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE
                      (param_1->___fileName_0,_stringLiteralF9603110CD994850BB7E88E6FC7174E5BDE2D2EC
                       ,(MethodInfo *)0x0);
    if (!bVar1) {
      if (param_1->___fileName_0 == (String_t *)0x0) goto LAB_10a03b8e;
      bVar1 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE
                        (param_1->___fileName_0,
                         _stringLiteral996C963F173C87BB8D89913B87082558702DF114,(MethodInfo *)0x0);
      if (!bVar1) {
        return false;
      }
    }
    pSVar2 = param_1->___fileName_0;
    if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    }
    pSVar2 = Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE
                       (pSVar2,(MethodInfo *)0x0);
    bVar1 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2
                      (pSVar2,_stringLiteral919FBC713DA3D137E06A974504E1D16C00FD51F2,
                       (MethodInfo *)0x0);
    if (bVar1) {
      return false;
    }
    return true;
  }
LAB_10a03b8e:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
