// RVA 0x9c54d0 | Placemaker.StorageUtils.<GetUniqueSaveName>d__28$$MoveNext
// PDB: U3CGetUniqueSaveNameU3Ed__28_MoveNext_m1811BFBEB38B766469BA706A518A87408D433812
// Body: [[109c54d0, 109c5772]]
// Direct callees:
// 1003e330 Invoke
// 1003e420 Invoke
// 10054090 SetAt
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1026bae0 SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
// 102fd6f0 StorageUtils_GetSaveFilePath_m0DB39B9F24B0160CBE4CEE8526905B58A9A70153
// 104b1d70 Random_NextInt_m4071AFFFC517311F93184A40BC4C407CEFB9F119_inline
// 106a23b0 TMPro_ExtensionMethods_ArrayToString_mD8EC305013B6FD2A984518E78C263EB6CE2C19E3
// 106e9540 DateTime_GetHashCode_mC94DC52667BB5C0DE7A78C53BE24FDF5469BA49D
// 106ebbe0 DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C
// 10749050 Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline
// 10f04a30 String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
// 10f09d80 String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70

bool __cdecl
U3CGetUniqueSaveNameU3Ed__28_MoveNext_m1811BFBEB38B766469BA706A518A87408D433812
          (U3CGetUniqueSaveNameU3Ed__28_t3DAEFC5A03CE5FB77762CDA52CD782657631710A *param_1,
          MethodInfo *param_2)

{
  StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *pSVar1;
  wchar_t wVar2;
  int iVar3;
  CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *pCVar4;
  String_t *pSVar5;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar6;
  Il2CppObject *pIVar7;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar8;
  Il2CppObject *extraout_EAX;
  Il2CppObject *extraout_EAX_00;
  uint uVar9;
  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 local_10;
  CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *local_8;

  if (DAT_1151ff3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IAsyncRequest_1_t2300E24B26E92488C4EAC7E4C6D696921CB2830C_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2703934E990F4D74F9E97D5985CDF284A870C0E0);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5D0DA8227C9BA628271EF153D972C241A212ABC2);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF9603110CD994850BB7E88E6FC7174E5BDE2D2EC);
    DAT_1151ff3f = '\x01';
  }
  local_10.___dateData_44 = 0;
  pSVar1 = param_1->___U3CU3E4__this_2;
  switch(param_1->___U3CU3E1__state_0) {
  case 0:
    param_1->___U3CU3E1__state_0 = -1;
    if ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
    }
    local_10 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C((MethodInfo *)0x0);
    uVar9 = DateTime_GetHashCode_mC94DC52667BB5C0DE7A78C53BE24FDF5469BA49D
                      (&local_10,(MethodInfo *)0x0);
    uVar9 = uVar9 ^ uVar9 << 0xd;
    uVar9 = uVar9 ^ uVar9 >> 0x11;
    (param_1->___U3CrandomU3E5__2_3).___state_0 = uVar9 << 5 ^ uVar9;
    param_1->___U3CsaveNameU3E5__3_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
    break;
  case 1:
    param_1->___U3CU3E1__state_0 = -1;
    goto LAB_109c56e0;
  case 2:
    param_1->___U3CU3E1__state_0 = -1;
    param_1->___U3CfileExistsRequestU3E5__4_5 = (Il2CppObject *)0x0;
    break;
  case 3:
    param_1->___U3CU3E1__state_0 = -1;
  default:
    return false;
  }
  if ((pSVar1 != (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) &&
     (pCVar4 = pSVar1->___charArray_15,
     pCVar4 != (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)0x0)) {
    uVar9 = pCVar4->_padding_ - 1;
    if (-1 < (int)uVar9) {
      do {
        local_8 = pSVar1->___charArray_15;
        pSVar5 = pSVar1->___saveChars_16;
        if (pSVar5 == (String_t *)0x0) goto LAB_109c576e;
        iVar3 = Random_NextInt_m4071AFFFC517311F93184A40BC4C407CEFB9F119_inline
                          (&param_1->___U3CrandomU3E5__2_3,0,pSVar5->___m_stringLength_0,
                           (MethodInfo *)0x0);
        wVar2 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70
                          (pSVar5,iVar3,(MethodInfo *)0x0);
        if (local_8 == (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)0x0)
        goto LAB_109c576e;
        CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34::SetAt(local_8,uVar9,wVar2);
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
      pCVar4 = pSVar1->___charArray_15;
    }
    pSVar5 = TMPro_ExtensionMethods_ArrayToString_mD8EC305013B6FD2A984518E78C263EB6CE2C19E3
                       (pCVar4,(MethodInfo *)0x0);
    pSVar5 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                       (_stringLiteral2703934E990F4D74F9E97D5985CDF284A870C0E0,
                        (Il2CppObject *)_stringLiteral5D0DA8227C9BA628271EF153D972C241A212ABC2,
                        (Il2CppObject *)pSVar5,
                        (Il2CppObject *)_stringLiteralF9603110CD994850BB7E88E6FC7174E5BDE2D2EC,
                        (MethodInfo *)0x0);
    param_1->___U3CsaveNameU3E5__3_4 = pSVar5;
    pAVar6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
             StorageUtils_GetSaveFilePath_m0DB39B9F24B0160CBE4CEE8526905B58A9A70153
                       (pSVar1,pSVar5,(MethodInfo *)0x0);
    pIVar7 = Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline((MethodInfo *)0x0);
    pAVar8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
             SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
                       (_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8,(MethodInfo *)0x0);
    if ((pIVar7 != (Il2CppObject *)0x0) &&
       (InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                  (0xb,IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var,
                   pIVar7,pAVar8), extraout_EAX != (Il2CppObject *)0x0)) {
      InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                (6,IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var,
                 extraout_EAX,pAVar6);
      param_1->___U3CfileExistsRequestU3E5__4_5 = extraout_EAX_00;
LAB_109c56e0:
      if (param_1->___U3CfileExistsRequestU3E5__4_5 != (Il2CppObject *)0x0) {
        iVar3 = InterfaceFuncInvoker0<int>::Invoke
                          (0,
                           IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                           ,param_1->___U3CfileExistsRequestU3E5__4_5);
        if ((char)iVar3 != '\0') {
          param_1->___U3CU3E2__current_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
          param_1->___U3CU3E1__state_0 = 1;
          return true;
        }
        if (param_1->___U3CfileExistsRequestU3E5__4_5 != (Il2CppObject *)0x0) {
          iVar3 = InterfaceFuncInvoker0<int>::Invoke
                            (0,
                             IAsyncRequest_1_t2300E24B26E92488C4EAC7E4C6D696921CB2830C_il2cpp_TypeInfo_var
                             ,param_1->___U3CfileExistsRequestU3E5__4_5);
          if ((char)iVar3 != '\0') {
            param_1->___U3CU3E2__current_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
            param_1->___U3CU3E1__state_0 = 2;
            return true;
          }
          param_1->___U3CU3E2__current_1 = param_1->___U3CsaveNameU3E5__3_4;
          param_1->___U3CU3E1__state_0 = 3;
          return true;
        }
      }
    }
  }
LAB_109c576e:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
