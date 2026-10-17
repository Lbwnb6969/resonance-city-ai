// RVA 0x41bb90 | Os.Utils.Intersections$$.cctor
// PDB: Intersections__cctor_m29160F1A43BFC9D701FEDE215204115664DFFBCF
// Body: [[1041bb90, 1041be01]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10514ce0 Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared

void __cdecl Intersections__cctor_m29160F1A43BFC9D701FEDE215204115664DFFBCF(MethodInfo *param_1)

{
  uint uVar1;
  Il2CppArray *pIVar2;
  Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *pQVar3;
  Exception_t *pEVar4;
  MethodInfo *pMVar5;

  if (DAT_1151cac2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Stack_1__ctor_mF747A08F75265DAF628616985A384BFD6E63F88E_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Stack_1_t79102D483192EBCC8B4A92B7AB89A642E481EEFB_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var)
    ;
    DAT_1151cac2 = '\x01';
  }
  pIVar2 = il2cpp_array_new_specific
                     (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var,8)
  ;
  if (pIVar2 == (Il2CppArray *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  uVar1 = pIVar2->max_length;
  if (uVar1 == 0) {
    pMVar5 = (MethodInfo *)0x0;
    pEVar4 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar4,pMVar5);
  }
  pIVar2[1]._padding_ = 0x3f800000;
  pIVar2[1]._padding_ = 0x3f800000;
  pIVar2[1].bounds = (Il2CppArrayBounds *)0x3f800000;
  if (uVar1 < 2) {
    pMVar5 = (MethodInfo *)0x0;
    pEVar4 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar4,pMVar5);
  }
  *(undefined8 *)&pIVar2[1].max_length = 0x3f8000003f800000;
  pIVar2[2]._padding_ = -0x40800000;
  if (uVar1 < 3) {
    pMVar5 = (MethodInfo *)0x0;
    pEVar4 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar4,pMVar5);
  }
  pIVar2[2].bounds = (Il2CppArrayBounds *)0x3f800000;
  pIVar2[2].max_length = 0xbf800000;
  pIVar2[3]._padding_ = 0x3f800000;
  if (uVar1 < 4) {
    pMVar5 = (MethodInfo *)0x0;
    pEVar4 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar4,pMVar5);
  }
  pIVar2[3]._padding_ = 0x3f800000;
  pIVar2[3].bounds = (Il2CppArrayBounds *)0xbf800000;
  pIVar2[3].max_length = 0xbf800000;
  if (uVar1 < 5) {
    pMVar5 = (MethodInfo *)0x0;
    pEVar4 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar4,pMVar5);
  }
  pIVar2[4]._padding_ = -0x40800000;
  pIVar2[4]._padding_ = 0x3f800000;
  pIVar2[4].bounds = (Il2CppArrayBounds *)0x3f800000;
  if (5 < uVar1) {
    *(undefined8 *)&pIVar2[4].max_length = 0x3f800000bf800000;
    pIVar2[5]._padding_ = -0x40800000;
    if (uVar1 < 7) {
      pMVar5 = (MethodInfo *)0x0;
      pEVar4 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar4,pMVar5);
    }
    pIVar2[5].bounds = (Il2CppArrayBounds *)0xbf800000;
    pIVar2[5].max_length = 0xbf800000;
    pIVar2[6]._padding_ = 0x3f800000;
    if (7 < uVar1) {
      pIVar2[6]._padding_ = -0x40800000;
      pIVar2[6].bounds = (Il2CppArrayBounds *)0xbf800000;
      pIVar2[6].max_length = 0xbf800000;
      *(Il2CppArray **)
       Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->static_fields =
           pIVar2;
      pQVar3 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)
               il2cpp_codegen_object_new
                         (Stack_1_t79102D483192EBCC8B4A92B7AB89A642E481EEFB_il2cpp_TypeInfo_var);
      Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared
                (pQVar3,Stack_1__ctor_mF747A08F75265DAF628616985A384BFD6E63F88E_RuntimeMethod_var);
      *(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 **)
       ((int)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->
             static_fields + 4) = pQVar3;
      return;
    }
    pMVar5 = (MethodInfo *)0x0;
    pEVar4 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar4,pMVar5);
  }
  pMVar5 = (MethodInfo *)0x0;
  pEVar4 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar4,pMVar5);
}
