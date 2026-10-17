// RVA 0x419890 | Os.Utils.Intersections$$OrientedBoxOrientedBox
// PDB: Intersections_OrientedBoxOrientedBox_m894BFB99DB493B356A4359E30861B8FDE7751B72
// Body: [[10419890, 10419a16]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10418670 Intersections_OrientedBoxOrientedBoxInternal_m762718EBC76CC2CC786336EBF9AD4231CCAE32B3
// 1058b010 HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared
// 10c1df00 Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared
// 10c1df60 Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared

bool __cdecl
Intersections_OrientedBoxOrientedBox_m894BFB99DB493B356A4359E30861B8FDE7751B72
          (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 param_1,
          Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 param_2,MethodInfo *param_3)

{
  int iVar1;
  Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *pSVar2;
  bool bVar3;
  HashSet_1_tC4DB94C2B7A5A7B4A5B17F2ED3550004FAAA314C *pHVar4;

  if (DAT_1151cabf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HashSet_1__ctor_m8BC65F2CA8A08EA61773E17980A79379818BA9DE_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HashSet_1_tC4DB94C2B7A5A7B4A5B17F2ED3550004FAAA314C_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Stack_1_Pop_m3079553559961772164FE68086FF2E2CA00B8E09_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Stack_1_Push_mDF70889AFD9D3E7D82806F704E22D39B33529AE0_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Stack_1_get_Count_m20C2024721419FF907EC84961956401E280EE45B_RuntimeMethod_var
              );
    DAT_1151cabf = '\x01';
  }
  if ((Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->cctor_finished ==
      0)) {
    il2cpp_runtime_class_init
              (Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var);
  }
  iVar1 = *(int *)((int)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                        ->static_fields + 4);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) < 1) {
      pHVar4 = (HashSet_1_tC4DB94C2B7A5A7B4A5B17F2ED3550004FAAA314C *)
               il2cpp_codegen_object_new
                         (HashSet_1_tC4DB94C2B7A5A7B4A5B17F2ED3550004FAAA314C_il2cpp_TypeInfo_var);
      HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared
                ((HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B *)pHVar4,
                 HashSet_1__ctor_m8BC65F2CA8A08EA61773E17980A79379818BA9DE_RuntimeMethod_var);
    }
    else {
      if ((Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->
          cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var);
      }
      pSVar2 = *(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 **)
                ((int)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->
                      static_fields + 4);
      if (pSVar2 == (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)0x0) goto LAB_10419a12;
      pHVar4 = (HashSet_1_tC4DB94C2B7A5A7B4A5B17F2ED3550004FAAA314C *)
               Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared
                         (pSVar2,
                          Stack_1_Pop_m3079553559961772164FE68086FF2E2CA00B8E09_RuntimeMethod_var);
    }
    if ((Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var);
    }
    bVar3 = Intersections_OrientedBoxOrientedBoxInternal_m762718EBC76CC2CC786336EBF9AD4231CCAE32B3
                      (param_1,param_2,pHVar4,(MethodInfo *)0x0);
    pSVar2 = *(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 **)
              ((int)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->
                    static_fields + 4);
    if (pSVar2 != (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)0x0) {
      Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared
                (pSVar2,(Il2CppObject *)pHVar4,
                 Stack_1_Push_mDF70889AFD9D3E7D82806F704E22D39B33529AE0_RuntimeMethod_var);
      return bVar3;
    }
  }
LAB_10419a12:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
