// RVA 0xe6bce0 | Placemaker.Graphs.Graph$$GetNewSquare
// PDB: Graph_GetNewSquare_mA2098E98F734E268FDE5392B5A16DBEBF61816F6
// Body: [[10e6bce0, 10e6bd6d]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10ae2b50 UnityFunctions_GetNewObject_TisRuntimeObject_mA14E611AB49243963CF26AB0DCA1EEC1BB87D953_gshared

Square_tD1B7B6748B35059E198069769341DA3192352B8F * __cdecl
Graph_GetNewSquare_mA2098E98F734E268FDE5392B5A16DBEBF61816F6
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *param_2,MethodInfo *param_3)

{
  Square_tD1B7B6748B35059E198069769341DA3192352B8F *pSVar1;
  undefined4 uVar2;
  Square_tD1B7B6748B35059E198069769341DA3192352B8F *pSVar3;

  if (DAT_11522836 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Relation_t07BA215683F5DEECD10099A66D2387A00F8BB1FC_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       UnityFunctions_GetNewObject_TisSquare_tD1B7B6748B35059E198069769341DA3192352B8F_m1BF05720301A62F4C31A36D65FA5DDDCF13876AC_RuntimeMethod_var
              );
    DAT_11522836 = '\x01';
  }
  pSVar3 = (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)
           UnityFunctions_GetNewObject_TisRuntimeObject_mA14E611AB49243963CF26AB0DCA1EEC1BB87D953_gshared
                     (param_2,
                      UnityFunctions_GetNewObject_TisSquare_tD1B7B6748B35059E198069769341DA3192352B8F_m1BF05720301A62F4C31A36D65FA5DDDCF13876AC_RuntimeMethod_var
                     );
  if ((Relation_t07BA215683F5DEECD10099A66D2387A00F8BB1FC_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Relation_t07BA215683F5DEECD10099A66D2387A00F8BB1FC_il2cpp_TypeInfo_var->cctor_finished == 0))
  {
    il2cpp_runtime_class_init
              (Relation_t07BA215683F5DEECD10099A66D2387A00F8BB1FC_il2cpp_TypeInfo_var);
  }
  pSVar1 = *(Square_tD1B7B6748B35059E198069769341DA3192352B8F **)
            Relation_t07BA215683F5DEECD10099A66D2387A00F8BB1FC_il2cpp_TypeInfo_var->static_fields;
  uVar2 = *(undefined4 *)
           ((int)Relation_t07BA215683F5DEECD10099A66D2387A00F8BB1FC_il2cpp_TypeInfo_var->
                 static_fields + 4);
  if (pSVar3 != (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0) {
    *(undefined4 *)&(pSVar3->___q3_7).___indexInOther_1 = uVar2;
    *(undefined4 *)&(pSVar3->___q2_6).___indexInOther_1 = uVar2;
    *(undefined4 *)&(pSVar3->___q1_5).___indexInOther_1 = uVar2;
    (pSVar3->___q3_7).___square_0 = pSVar1;
    (pSVar3->___q2_6).___square_0 = pSVar1;
    (pSVar3->___q1_5).___square_0 = pSVar1;
    *(undefined4 *)&(pSVar3->___q0_4).___indexInOther_1 = uVar2;
    (pSVar3->___q0_4).___square_0 = pSVar1;
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
