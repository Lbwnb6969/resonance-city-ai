// RVA 0x301ba0 | Placemaker.TextSaveSystem$$GetSpacedString
// PDB: TextSaveSystem_GetSpacedString_m640131953D755FC43F4E371B695519E6F95D3350
// Body: [[10301ba0, 10301d4f]]
// Direct callees:
// 10054090 SetAt
// 101275a0 il2cpp_array_new_specific
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10f03210 String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E
// 10f09d80 String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70

String_t * __cdecl
TextSaveSystem_GetSpacedString_m640131953D755FC43F4E371B695519E6F95D3350
          (String_t *param_1,MethodInfo *param_2)

{
  uint uVar1;
  int iVar2;
  CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *pCVar3;
  wchar_t wVar4;
  Il2CppArray *pIVar5;
  String_t *pSVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;

  if (DAT_1151c21f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
              );
    DAT_1151c21f = '\x01';
  }
  if (param_1 != (String_t *)0x0) {
    iVar2 = param_1->___m_stringLength_0;
    uVar1 = iVar2 * 2 - 1;
    uVar7 = uVar1;
    if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
      uVar7 = iVar2 * 2 - 1;
    }
    iVar9 = *(int *)((int)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                          ->static_fields + 4);
    if (iVar9 != 0) {
      if (*(int *)(iVar9 + 0xc) < (int)uVar7) {
        pIVar5 = il2cpp_array_new_specific
                           (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var
                            ,uVar7);
        if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor
             != '\0') &&
           (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
            cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
        }
        *(Il2CppArray **)
         ((int)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
               static_fields + 4) = pIVar5;
      }
      uVar7 = 0;
      iVar9 = 0;
      if (0 < iVar2) {
        do {
          uVar8 = uVar7;
          if (iVar9 != 0) {
            if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                 has_cctor != '\0') &&
               (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (
                        TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                        );
            }
            pCVar3 = *(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 **)
                      ((int)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                            ->static_fields + 4);
            uVar8 = uVar7 + 1;
            if (pCVar3 == (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)0x0)
            goto LAB_10301d4b;
            CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34::SetAt(pCVar3,uVar7,L' ');
          }
          if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
               has_cctor != '\0') &&
             (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var)
            ;
          }
          uVar7 = uVar8 + 1;
          pCVar3 = *(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 **)
                    ((int)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                          ->static_fields + 4);
          iVar10 = iVar9 + 1;
          wVar4 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70
                            (param_1,iVar9,(MethodInfo *)0x0);
          if (pCVar3 == (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)0x0)
          goto LAB_10301d4b;
          CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34::SetAt(pCVar3,uVar8,wVar4);
          iVar9 = iVar10;
        } while (iVar10 < iVar2);
      }
      if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor
           != '\0') &&
         (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
          cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
      }
      pSVar6 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E
                         ((String_t *)0x0,
                          *(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 **)
                           ((int)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                                 ->static_fields + 4),0,uVar1,(MethodInfo *)0x0);
      return pSVar6;
    }
  }
LAB_10301d4b:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
