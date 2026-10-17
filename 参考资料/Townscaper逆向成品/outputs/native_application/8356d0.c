// RVA 0x8356d0 | Os.Utils.Extensions$$SetSingleLayer
// PDB: Extensions_SetSingleLayer_mDC98D826B03E3AD5D27D619F3E26112FFFD69B04
// Body: [[108356d0, 10835782]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 1018e500 IsInst
// 1018e700 il2cpp_codegen_get_array_type_mismatch_exception
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a384a0 Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236
// 10a387b0 Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC
// 10a3fe10 LayerMask_GetMask_m46D2185735D02C7DEE01E3BAAF4A39F2AB46F67F

void __cdecl
Extensions_SetSingleLayer_mDC98D826B03E3AD5D27D619F3E26112FFFD69B04
          (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *param_1,String_t *param_2,bool param_3,
          MethodInfo *param_4)

{
  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *pSVar1;
  Il2CppObject *pIVar2;
  uint uVar3;
  uint uVar4;
  Exception_t *pEVar5;
  uint uVar6;
  MethodInfo *pMVar7;

  if (DAT_1151f3b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
    DAT_1151f3b3 = '\x01';
  }
  pSVar1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)
           il2cpp_array_new_specific
                     (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var,1);
  if (pSVar1 != (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)0x0) {
    if (param_2 != (String_t *)0x0) {
      pIVar2 = IsInst((Il2CppObject *)param_2,*(Il2CppClass **)(pSVar1->_padding_ + 0x20));
      if (pIVar2 == (Il2CppObject *)0x0) {
        pMVar7 = (MethodInfo *)0x0;
        pEVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar5,pMVar7);
      }
    }
    pMVar7 = (MethodInfo *)0x0;
    if (pSVar1->_padding_ == 0) {
      pEVar5 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar5,pMVar7);
    }
    pSVar1->m_Items[0] = param_2;
    uVar3 = LayerMask_GetMask_m46D2185735D02C7DEE01E3BAAF4A39F2AB46F67F(pSVar1,(MethodInfo *)0x0);
    if (param_1 != (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) {
      uVar4 = Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236
                        (param_1,(MethodInfo *)0x0);
      uVar6 = 0;
      if (param_3) {
        uVar6 = uVar3;
      }
      Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC
                (param_1,uVar4 & ~uVar3 | uVar6,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
