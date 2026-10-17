// RVA 0xa01820 | Placemaker.SaveSystem$$GetUniqueSaveName
// PDB: SaveSystem_GetUniqueSaveName_m4361F255F7ABCDE44047A6B01D6E89182AE56F5A
// Body: [[10a01820, 10a01974]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 106e9540 DateTime_GetHashCode_mC94DC52667BB5C0DE7A78C53BE24FDF5469BA49D
// 106ebbe0 DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C
// 10f03680 String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344
// 10f04a30 String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
// 10f09d80 String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70

String_t * __cdecl
SaveSystem_GetUniqueSaveName_m4361F255F7ABCDE44047A6B01D6E89182AE56F5A
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,MethodInfo *param_2)

{
  wchar_t wVar1;
  uint uVar2;
  CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *pCVar3;
  String_t *pSVar4;
  Exception_t *pEVar5;
  uint uVar6;
  uint uVar7;
  MethodInfo *pMVar8;
  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 local_10;
  int local_8;

  if (DAT_115201a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2703934E990F4D74F9E97D5985CDF284A870C0E0);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5D0DA8227C9BA628271EF153D972C241A212ABC2);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF9603110CD994850BB7E88E6FC7174E5BDE2D2EC);
    DAT_115201a6 = '\x01';
  }
  if ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var->cctor_finished == 0))
  {
    il2cpp_runtime_class_init
              (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
  }
  local_10 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C((MethodInfo *)0x0);
  uVar2 = DateTime_GetHashCode_mC94DC52667BB5C0DE7A78C53BE24FDF5469BA49D
                    (&local_10,(MethodInfo *)0x0);
  uVar2 = uVar2 ^ uVar2 << 0xd;
  uVar2 = uVar2 ^ uVar2 >> 0x11;
  pCVar3 = param_1->___charArray_26;
  if (pCVar3 == (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)0x0) {
LAB_10a01963:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  uVar7 = pCVar3->_padding_ - 1;
  if (-1 < (int)uVar7) {
    local_8 = uVar7 * 2 + 0x10;
    uVar2 = uVar2 ^ uVar2 << 5;
    do {
      pCVar3 = param_1->___charArray_26;
      if (param_1->___saveChars_27 == (String_t *)0x0) goto LAB_10a01963;
      uVar6 = uVar2 ^ uVar2 << 0xd;
      uVar6 = uVar6 ^ uVar6 >> 0x11;
      wVar1 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70
                        (param_1->___saveChars_27,
                         (int)((ulonglong)(uint)param_1->___saveChars_27->___m_stringLength_0 *
                               (ulonglong)uVar2 >> 0x20),(MethodInfo *)0x0);
      if (pCVar3 == (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)0x0) goto LAB_10a01963;
      if ((uint)pCVar3->_padding_ <= uVar7) {
        pMVar8 = (MethodInfo *)0x0;
        pEVar5 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar5,pMVar8);
      }
      *(wchar_t *)((int)pCVar3->m_Items + local_8 + -0x10) = wVar1;
      local_8 = local_8 + -2;
      uVar7 = uVar7 - 1;
      uVar2 = uVar6 ^ uVar6 << 5;
    } while (-1 < (int)uVar7);
    pCVar3 = param_1->___charArray_26;
  }
  pSVar4 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344
                     ((String_t *)0x0,pCVar3,(MethodInfo *)0x0);
  pSVar4 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                     (_stringLiteral2703934E990F4D74F9E97D5985CDF284A870C0E0,
                      (Il2CppObject *)_stringLiteral5D0DA8227C9BA628271EF153D972C241A212ABC2,
                      (Il2CppObject *)pSVar4,
                      (Il2CppObject *)_stringLiteralF9603110CD994850BB7E88E6FC7174E5BDE2D2EC,
                      (MethodInfo *)0x0);
  return pSVar4;
}
