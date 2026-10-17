// RVA 0x2fdca0 | Placemaker.StorageUtils$$.ctor
// PDB: StorageUtils__ctor_mDC046FB80289C7CA0CF8AAD252834886E7FA3B55
// Body: [[102fdca0, 102fddc7]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 10397d20 XmlSerializer__ctor_mF7CC2501D7EF3FF3D559F457AB84A9393D086881
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10827ef0 Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
StorageUtils__ctor_mDC046FB80289C7CA0CF8AAD252834886E7FA3B55
          (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *param_1,MethodInfo *param_2)

{
  Il2CppType *pIVar1;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar2;
  Type_t *pTVar3;
  XmlSerializer_t2960FF2C2C062704541774440D09CA3DAFFCB01B *pXVar4;
  CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *pCVar5;

  if (DAT_1151c1f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&SaveData_t108FDD1E782E68BC3B924BE75B58816350034188_0_0_0_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617_0_0_0_var);
    il2cpp_codegen_initialize_runtime_metadata((uint *)&Type_t_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&XmlSerializer_t2960FF2C2C062704541774440D09CA3DAFFCB01B_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralEDCFCEEDD069E4775C926ADDF83D09E3657D3855);
    DAT_1151c1f7 = '\x01';
  }
  pLVar2 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar2,List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
  param_1->___loadedFiles_7 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)pLVar2;
  param_1->___fileInfoFrame_8 = -2;
  pIVar1 = SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617_0_0_0_var;
  if ((Type_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Type_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Type_t_il2cpp_TypeInfo_var);
  }
  pTVar3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E
                     ((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9)pIVar1,
                      (MethodInfo *)0x0);
  pXVar4 = (XmlSerializer_t2960FF2C2C062704541774440D09CA3DAFFCB01B *)
           il2cpp_codegen_object_new
                     (XmlSerializer_t2960FF2C2C062704541774440D09CA3DAFFCB01B_il2cpp_TypeInfo_var);
  XmlSerializer__ctor_mF7CC2501D7EF3FF3D559F457AB84A9393D086881(pXVar4,pTVar3,(MethodInfo *)0x0);
  param_1->___settingsXmlSerializer_13 = pXVar4;
  pTVar3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E
                     ((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9)
                      SaveData_t108FDD1E782E68BC3B924BE75B58816350034188_0_0_0_var,(MethodInfo *)0x0
                     );
  pXVar4 = (XmlSerializer_t2960FF2C2C062704541774440D09CA3DAFFCB01B *)
           il2cpp_codegen_object_new
                     (XmlSerializer_t2960FF2C2C062704541774440D09CA3DAFFCB01B_il2cpp_TypeInfo_var);
  XmlSerializer__ctor_mF7CC2501D7EF3FF3D559F457AB84A9393D086881(pXVar4,pTVar3,(MethodInfo *)0x0);
  param_1->___saveXmlSerializer_14 = pXVar4;
  pCVar5 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)
           il2cpp_array_new_specific
                     (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var,0x10)
  ;
  param_1->___charArray_15 = pCVar5;
  param_1->___saveChars_16 = _stringLiteralEDCFCEEDD069E4775C926ADDF83D09E3657D3855;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
