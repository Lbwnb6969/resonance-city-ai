// RVA 0x9c7fe0 | Placemaker.SaveSystem.<>c__DisplayClass53_0.<<SaveMetaSaveToDisk>g__NoPathRoutine|1>d$$MoveNext
// PDB: U3CU3CSaveMetaSaveToDiskU3Eg__NoPathRoutineU7C1U3Ed_MoveNext_mFE884819248C363945C27E1988AE0526BC52603C
// Body: [[109c7fe0, 109c83e8]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101dfa10 U3CU3Ec__DisplayClass53_0_U3CSaveMetaSaveToDiskU3Eg__SaveSaveU7C0_m3C0F9E91E6A06211847BB588ADA31FB06B2FAE4F
// 106e9540 DateTime_GetHashCode_mC94DC52667BB5C0DE7A78C53BE24FDF5469BA49D
// 106ebbe0 DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C
// 10a01780 SaveSystem_GetSaveFilePath_m55F508809C173C93543E383A79653644C009497E
// 10a04020 SaveSystem_get_storageContainer_mED5F478B1B99CE01EE6AD829DAE146705411F68E
// 10f03680 String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344
// 10f04a30 String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
// 10f09d80 String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70

bool __cdecl
U3CU3CSaveMetaSaveToDiskU3Eg__NoPathRoutineU7C1U3Ed_MoveNext_mFE884819248C363945C27E1988AE0526BC52603C
          (U3CU3CSaveMetaSaveToDiskU3Eg__NoPathRoutineU7C1U3Ed_t51FDCFC75ECB30E480E045F8AE2C6EFC0491C764
           *param_1,MethodInfo *param_2)

{
  Il2CppClass *pIVar1;
  CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *pCVar2;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar3;
  uint uVar4;
  char cVar5;
  ushort uVar6;
  wchar_t wVar7;
  uint uVar8;
  String_t *pSVar9;
  VirtualInvokeData *pVVar10;
  Il2CppObject *pIVar11;
  Exception_t *pEVar12;
  uint uVar13;
  int iVar14;
  U3CU3Ec__DisplayClass53_0_tA404E1D2C349CD6D736063A0EECC54877C1B2CBA *pUVar15;
  char *pcVar16;
  MethodInfo *pMVar17;
  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 local_20;
  String_t *local_18;
  String_t *local_14;
  Il2CppClass *local_10;
  Il2CppClass *local_c;
  U3CU3Ec__DisplayClass53_0_tA404E1D2C349CD6D736063A0EECC54877C1B2CBA *local_8;

  if (DAT_1151ff88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IAsyncRequest_1_t2300E24B26E92488C4EAC7E4C6D696921CB2830C_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2703934E990F4D74F9E97D5985CDF284A870C0E0);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5D0DA8227C9BA628271EF153D972C241A212ABC2);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF9603110CD994850BB7E88E6FC7174E5BDE2D2EC);
    DAT_1151ff88 = '\x01';
  }
  local_20.___dateData_44 = 0;
  pUVar15 = param_1->___U3CU3E4__this_2;
  local_8 = pUVar15;
  if (param_1->___U3CU3E1__state_0 != 0) {
    if (param_1->___U3CU3E1__state_0 != 1) {
      return false;
    }
    param_1->___U3CU3E1__state_0 = -1;
    goto LAB_109c80dd;
  }
  param_1->___U3CU3E1__state_0 = -1;
  if ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var->cctor_finished == 0))
  {
    il2cpp_runtime_class_init
              (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
  }
  local_20 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C((MethodInfo *)0x0);
  uVar8 = DateTime_GetHashCode_mC94DC52667BB5C0DE7A78C53BE24FDF5469BA49D
                    (&local_20,(MethodInfo *)0x0);
  uVar8 = uVar8 ^ uVar8 << 0xd;
  uVar8 = uVar8 ^ uVar8 >> 0x11;
  (param_1->___U3CrandomU3E5__2_3).___state_0 = uVar8 << 5 ^ uVar8;
  if ((pUVar15 == (U3CU3Ec__DisplayClass53_0_tA404E1D2C349CD6D736063A0EECC54877C1B2CBA *)0x0) ||
     (pUVar15->___metaSave_0 == (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0)) {
LAB_109c83d7:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  pUVar15->___metaSave_0->___isBin_6 = false;
  do {
    if (((pUVar15 == (U3CU3Ec__DisplayClass53_0_tA404E1D2C349CD6D736063A0EECC54877C1B2CBA *)0x0) ||
        (pUVar15->___U3CU3E4__this_1 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)
        ) || (pCVar2 = pUVar15->___U3CU3E4__this_1->___charArray_26,
             pCVar2 == (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)0x0))
    goto LAB_109c83d7;
    pcVar16 = (char *)(pCVar2->_padding_ + -1);
    if (-1 < (int)pcVar16) {
      iVar14 = (int)pcVar16 * 2 + 0x10;
      do {
        pSVar3 = local_8->___U3CU3E4__this_1;
        if (pSVar3 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)
        goto LAB_109c83d7;
        local_10 = (Il2CppClass *)pSVar3->___charArray_26;
        local_14 = pSVar3->___saveChars_27;
        if (local_14 == (String_t *)0x0) goto LAB_109c83d7;
        uVar8 = (param_1->___U3CrandomU3E5__2_3).___state_0;
        uVar4 = local_14->___m_stringLength_0;
        uVar13 = uVar8 << 0xd ^ uVar8;
        uVar13 = uVar13 >> 0x11 ^ uVar13;
        (param_1->___U3CrandomU3E5__2_3).___state_0 = uVar13 << 5 ^ uVar13;
        wVar7 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70
                          (local_14,(int)((ulonglong)uVar4 * (ulonglong)uVar8 >> 0x20),
                           (MethodInfo *)0x0);
        if (local_10 == (Il2CppClass *)0x0) goto LAB_109c83d7;
        if (local_10->namespaze <= pcVar16) {
          pMVar17 = (MethodInfo *)0x0;
          pEVar12 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar12,pMVar17);
        }
        *(wchar_t *)((int)&local_10->image + iVar14) = wVar7;
        iVar14 = iVar14 + -2;
        pcVar16 = pcVar16 + -1;
        pUVar15 = local_8;
      } while (-1 < (int)pcVar16);
    }
    if (pUVar15->___U3CU3E4__this_1 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)
    goto LAB_109c83d7;
    pSVar9 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344
                       ((String_t *)0x0,pUVar15->___U3CU3E4__this_1->___charArray_26,
                        (MethodInfo *)0x0);
    pSVar9 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                       (_stringLiteral2703934E990F4D74F9E97D5985CDF284A870C0E0,
                        (Il2CppObject *)_stringLiteral5D0DA8227C9BA628271EF153D972C241A212ABC2,
                        (Il2CppObject *)pSVar9,
                        (Il2CppObject *)_stringLiteralF9603110CD994850BB7E88E6FC7174E5BDE2D2EC,
                        (MethodInfo *)0x0);
    param_1->___U3CfileNameU3E5__3_4 = pSVar9;
    if (pUVar15->___U3CU3E4__this_1 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)
    goto LAB_109c83d7;
    pSVar9 = SaveSystem_GetSaveFilePath_m55F508809C173C93543E383A79653644C009497E
                       (pUVar15->___U3CU3E4__this_1,pSVar9,(MethodInfo *)0x0);
    param_1->___U3CpathU3E5__4_5 = pSVar9;
    if (pUVar15->___U3CU3E4__this_1 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)
    goto LAB_109c83d7;
    local_c = (Il2CppClass *)
              SaveSystem_get_storageContainer_mED5F478B1B99CE01EE6AD829DAE146705411F68E
                        (pUVar15->___U3CU3E4__this_1,(MethodInfo *)0x0);
    local_18 = param_1->___U3CpathU3E5__4_5;
    if (local_c == (Il2CppClass *)0x0) goto LAB_109c83d7;
    local_10 = (((Il2CppObject *)local_c)->field0_0x0).klass;
    uVar6 = 0;
    local_14 = (String_t *)0x0;
    if (local_10->interface_offsets_count != 0) {
      do {
        pUVar15 = local_8;
        if (local_10->interfaceOffsets[uVar6].interfaceType ==
            IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var) {
          pVVar10 = (VirtualInvokeData *)
                    (&local_10[1].parent + local_10->interfaceOffsets[uVar6].offset * 2);
          goto LAB_109c8329;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_10->interface_offsets_count);
    }
    pVVar10 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)local_c,
                         IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
                         ,6);
LAB_109c8329:
    pIVar11 = (Il2CppObject *)(*(code *)pVVar10->methodPtr)(local_c,local_18,pVVar10->method);
    param_1->___U3CrequestU3E5__5_6 = pIVar11;
LAB_109c80dd:
    pIVar1 = (Il2CppClass *)param_1->___U3CrequestU3E5__5_6;
    local_10 = pIVar1;
    if (pIVar1 == (Il2CppClass *)0x0) goto LAB_109c83d7;
    local_c = ((Il2CppObject_u_0 *)&pIVar1->image)->klass;
    uVar6 = 0;
    local_14 = (String_t *)0x0;
    if (local_c->interface_offsets_count != 0) {
      do {
        pUVar15 = local_8;
        if (local_c->interfaceOffsets[uVar6].interfaceType ==
            IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var) {
          pVVar10 = (VirtualInvokeData *)
                    (&local_c->field_0xbc + local_c->interfaceOffsets[uVar6].offset * 8);
          goto LAB_109c8134;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_c->interface_offsets_count);
    }
    pVVar10 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)pIVar1,
                         IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,0
                        );
LAB_109c8134:
    cVar5 = (*pVVar10->methodPtr)(pIVar1,pVVar10->method);
    if (cVar5 != '\0') {
      param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
      param_1->___U3CU3E1__state_0 = 1;
      return true;
    }
    pIVar11 = param_1->___U3CrequestU3E5__5_6;
    local_c = (Il2CppClass *)pIVar11;
    if (pIVar11 == (Il2CppObject *)0x0) goto LAB_109c83d7;
    local_10 = (pIVar11->field0_0x0).klass;
    uVar6 = 0;
    local_14 = (String_t *)0x0;
    if (local_10->interface_offsets_count != 0) {
      do {
        pUVar15 = local_8;
        if (local_10->interfaceOffsets[uVar6].interfaceType ==
            IAsyncRequest_1_t2300E24B26E92488C4EAC7E4C6D696921CB2830C_il2cpp_TypeInfo_var) {
          pVVar10 = (VirtualInvokeData *)
                    (&local_10->field_0xbc + local_10->interfaceOffsets[uVar6].offset * 8);
          goto LAB_109c819e;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_10->interface_offsets_count);
    }
    pVVar10 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar11,
                         IAsyncRequest_1_t2300E24B26E92488C4EAC7E4C6D696921CB2830C_il2cpp_TypeInfo_var
                         ,0);
LAB_109c819e:
    cVar5 = (*pVVar10->methodPtr)(pIVar11,pVVar10->method);
    if (cVar5 == '\0') {
      if ((pUVar15 != (U3CU3Ec__DisplayClass53_0_tA404E1D2C349CD6D736063A0EECC54877C1B2CBA *)0x0) &&
         (pUVar15->___metaSave_0 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0)) {
        pUVar15->___metaSave_0->___path_4 = param_1->___U3CpathU3E5__4_5;
        if (pUVar15->___metaSave_0 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
          pUVar15->___metaSave_0->___fileName_5 = param_1->___U3CfileNameU3E5__3_4;
          U3CU3Ec__DisplayClass53_0_U3CSaveMetaSaveToDiskU3Eg__SaveSaveU7C0_m3C0F9E91E6A06211847BB588ADA31FB06B2FAE4F
                    (pUVar15,true,(MethodInfo *)0x0);
          return false;
        }
      }
      goto LAB_109c83d7;
    }
    param_1->___U3CrequestU3E5__5_6 = (Il2CppObject *)0x0;
  } while( true );
}
