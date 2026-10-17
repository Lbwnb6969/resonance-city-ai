// RVA 0x3d1920 | Placemaker.Maker$$AddAction
// PDB: Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
// Body: [[103d1920, 103d1999]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 105d1290 List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
// 10871ac0 Action__ctor_m376F0C3C467175ED64CD18A600A02B8B771F6658

Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 * __cdecl
Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
          (Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *__return_storage_ptr__,
          Maker_t537981F2ED20294ACF4C94693B3268049739203D *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,uchar param_3,schar param_4,
          schar param_5,MethodInfo *param_6)

{
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar1;
  MethodInfo *unaff_EDI;

  if (DAT_1151c851 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m2B27ACB1E9BADC8339D8742B4049377C3EE4E960_RuntimeMethod_var);
    DAT_1151c851 = '\x01';
  }
  (__return_storage_ptr__->___hexPos_0).___x_0 = 0;
  (__return_storage_ptr__->___hexPos_0).___y_1 = 0;
  __return_storage_ptr__->___height_1 = '\0';
  __return_storage_ptr__->___inType_2 = '\0';
  __return_storage_ptr__->___outType_3 = '\0';
  __return_storage_ptr__->field_0xb = 0;
  __return_storage_ptr__->___actionId_4 = 0;
  Action__ctor_m376F0C3C467175ED64CD18A600A02B8B771F6658
            (__return_storage_ptr__,param_2,param_3,param_4,param_5,param_1->___actionId_10,
             (MethodInfo *)0x0);
  if (param_1->___actions_5 != (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0) {
    KVar1._12_4_ = List_1_Add_m2B27ACB1E9BADC8339D8742B4049377C3EE4E960_RuntimeMethod_var;
    KVar1._0_12_ = *(undefined1 (*) [12])&(__return_storage_ptr__->___hexPos_0).___y_1;
    List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
              ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___actions_5,KVar1,
               unaff_EDI);
    param_1->___actionIndex_6 = param_1->___actionIndex_6 + 1;
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
