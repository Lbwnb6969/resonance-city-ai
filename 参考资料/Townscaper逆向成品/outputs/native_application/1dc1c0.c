// RVA 0x1dc1c0 | Placemaker.SaveSystem.<SaveAndQuit>d__70$$MoveNext
// PDB: U3CSaveAndQuitU3Ed__70_MoveNext_m82AE16EC993DEEBC09F96C7857D8FD34B5F3861C
// Body: [[101dc1c0, 101dc299]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 103d5e50 MetaSave_get_isSaving_mD2807EB3C36D3BCCD996AED23296922A0B30ADC3
// 10a02b40 SaveSystem_MaybeSaveCurrent_m6D4D92DDAB91A3F5EB58F6180E5B93B746F5B2D3
// 10a02c00 SaveSystem_MaybeSaveSettings_mF1FD0D97C328223744996634EC08D16CDCD3FD01

bool __cdecl
U3CSaveAndQuitU3Ed__70_MoveNext_m82AE16EC993DEEBC09F96C7857D8FD34B5F3861C
          (U3CSaveAndQuitU3Ed__70_t7E65C98538C13C1F60D429C93A9643B0467A7F4A *param_1,
          MethodInfo *param_2)

{
  int iVar1;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar2;
  bool bVar3;
  bool bVar4;

  iVar1 = param_1->___U3CU3E1__state_0;
  pSVar2 = param_1->___U3CU3E4__this_2;
  if (iVar1 == 0) {
    param_1->___U3CU3E1__state_0 = -1;
    if (pSVar2 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0) goto LAB_101dc295;
    bVar4 = SaveSystem_MaybeSaveCurrent_m6D4D92DDAB91A3F5EB58F6180E5B93B746F5B2D3
                      (pSVar2,(MethodInfo *)0x0);
    bVar3 = SaveSystem_MaybeSaveSettings_mF1FD0D97C328223744996634EC08D16CDCD3FD01
                      (pSVar2,0.0,(MethodInfo *)0x0);
    param_1->___U3CsaveSettingsU3E5__2_4 = bVar3;
    if (bVar4) goto LAB_101dc22b;
LAB_101dc259:
    if (param_1->___U3CsaveSettingsU3E5__2_4 == false) goto LAB_101dc27d;
  }
  else {
    if (iVar1 == 1) {
      param_1->___U3CU3E1__state_0 = -1;
LAB_101dc22b:
      if ((pSVar2 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0) ||
         (pSVar2->___currentMetaSave_14 == (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0
         )) goto LAB_101dc295;
      bVar4 = MetaSave_get_isSaving_mD2807EB3C36D3BCCD996AED23296922A0B30ADC3
                        (pSVar2->___currentMetaSave_14,(MethodInfo *)0x0);
      if (bVar4) {
        param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
        param_1->___U3CU3E1__state_0 = 1;
        return true;
      }
      goto LAB_101dc259;
    }
    if (iVar1 != 2) {
      return false;
    }
    param_1->___U3CU3E1__state_0 = -1;
  }
  if (pSVar2 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0) {
LAB_101dc295:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  if (pSVar2->___saveSettingsRequest_37 != (Il2CppObject *)0x0) {
    param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
    param_1->___U3CU3E1__state_0 = 2;
    return true;
  }
LAB_101dc27d:
  if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->___callback_3 !=
      (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
    OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
              ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               param_1->___callback_3,(MethodInfo *)0x0);
  }
  return false;
}
