// RVA 0xe1de60 | Placemaker.GridGenerator$$OnEnable
// PDB: GridGenerator_OnEnable_mD5D8226B2E3616B2E4F5290E3DB64E3AE8BD54A7
// Body: [[10e1de60, 10e1e034]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1021c6c0 Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
// 1021c780 Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
// 10267d60 Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
// 10e1e04f FUN_10e1e04f
// 11032ae0 List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared

void __cdecl
GridGenerator_OnEnable_mD5D8226B2E3616B2E4F5290E3DB64E3AE8BD54A7
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,MethodInfo *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *pEVar3;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 local_80;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__GridGenerator_OnEnable_mD5D8226B2E3616B2E4F5290E3DB64E3AE8BD54A7;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffff74;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xffffff74;
  if (DAT_11522661 == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_m34AE37553D78729D41753F107B3A7ACB1462F602_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_m68EE23513C52E3FE408862847956D829A44F9A81_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_m7C6B5B44FC91AD65F298CB4C5B825C8BB0DEEB28_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Clear_m6702601C8047FEAEE6F785100C618AEE54386CCC_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Clear_m9B5D39FF8E020BB44ACB60028E2D6E3F848BB8D4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Clear_m9E7CFED24CEE61E78287F03BC1C7A601DA3E25A4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_m0D4815060AC903CE2A779C5E6E4893549C46D065_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_m58DEA16F051C468A0E0FDC14C5A2AA18967974BF_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_mF1D7B9D0E73DC003F6DC49C28BE6365793606FAC_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_m59A5DA656C0F7A38CE725D9F6C66928F3218D2FA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_m9F4BB491709407F032A17E25AAE60FAF4FBC9715_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_mEFAA469356EA0ECAAF15CFBBB274DB1412855033_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_m4BF3B80A9AD118ADCCA44B1064E6B6A3872D8AD6_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_m60B458D3F9F79F2D48B12089979A33E0B13B767E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_m73854385E08029D25A3B620C398D02ADB0A1677B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m6BE528E6DE3484A7ADBCF7A125B9D3B399AAD8D2_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_GetEnumerator_m76EEACE1D91A088E4499D8E07A48DA832068CBEB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_GetEnumerator_mCF44D814677867402865EDB920194700F57957D0_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_GetEnumerator_mFE3F929921B16A7638A07DD5B0601D19C259B2DA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral0C2C7A9E7436DA4E0013C1BB4B0A6143CE0F38ED);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralC24ADD3C3162599CC76CDA8C08E47DEB60C03EF2);
    DAT_11522661 = '\x01';
    puVar1 = local_14;
  }
  local_14 = puVar1;
  local_18 = 0;
  local_34 = 0;
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_20 = 0;
  local_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___patchDict_10 !=
      (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
    Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
              ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___patchDict_10,
               Dictionary_2_Clear_m6702601C8047FEAEE6F785100C618AEE54386CCC_RuntimeMethod_var);
    if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___patches_9 !=
        (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
      pEVar3 = List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared
                         (&local_80,
                          (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___patches_9,
                          List_1_GetEnumerator_mFE3F929921B16A7638A07DD5B0601D19C259B2DA_RuntimeMethod_var
                         );
      local_70.___list_0 = pEVar3->___list_0;
      local_70.___index_1 = pEVar3->___index_1;
      local_70.___version_2 = pEVar3->___version_2;
      local_70.___current_3 = pEVar3->___current_3;
      local_8 = 0;
      while( true ) {
        bVar2 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                          (&local_70,
                           Enumerator_MoveNext_m59A5DA656C0F7A38CE725D9F6C66928F3218D2FA_RuntimeMethod_var
                          );
        if (!bVar2) {
          local_40 = 0x4c;
          local_34 = 1;
          FUN_10e1e04f();
          return;
        }
        if ((local_70.___current_3 == (Il2CppObject *)0x0) ||
           ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___patchDict_10 ==
            (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)) break;
        Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
                  ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                   param_1->___patchDict_10,
                   *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)(local_70.___current_3 + 1),
                   local_70.___current_3,
                   Dictionary_2_Add_m68EE23513C52E3FE408862847956D829A44F9A81_RuntimeMethod_var);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
