// RVA 0xa00fa0 | Placemaker.SaveSystem$$ChangeState
// PDB: SaveSystem_ChangeState_m9CEF27747C53226925145C52040950CB19866597
// Body: [[10a00fa0, 10a01095]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 103d5e30 MetaSave_get_isBroken_m975083F67D58355316AD58AE0BF439CDF946354C
// 103d5e70 MetaSave_get_shouldBeInPool_m16F8C76FBAACCC5432BB207B82CFBABC476B9DB9
// 103d5e90 MetaSave_get_shouldBeVisible_mFE7309D4ADC82785D27EB14CDFCE33C9589B350B
// 1066efe0 Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
// 109fdb90 SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a3ded0 GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34

void __cdecl
SaveSystem_ChangeState_m9CEF27747C53226925145C52040950CB19866597
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,
          MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *param_2,int param_3,
          MethodInfo *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar4;
  int iVar5;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar6;

  if (param_2 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
    bVar1 = MetaSave_get_shouldBeVisible_mFE7309D4ADC82785D27EB14CDFCE33C9589B350B
                      (param_2,(MethodInfo *)0x0);
    bVar2 = MetaSave_get_isBroken_m975083F67D58355316AD58AE0BF439CDF946354C
                      (param_2,(MethodInfo *)0x0);
    param_2->___state_18 = param_3;
    if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_2->___onStateChange_16
        != (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 param_2->___onStateChange_16,(MethodInfo *)0x0);
      bVar3 = MetaSave_get_shouldBeVisible_mFE7309D4ADC82785D27EB14CDFCE33C9589B350B
                        (param_2,(MethodInfo *)0x0);
      if ((!bVar2) &&
         (bVar2 = MetaSave_get_isBroken_m975083F67D58355316AD58AE0BF439CDF946354C
                            (param_2,(MethodInfo *)0x0), bVar2)) {
        if (param_2->___saveData_9 == (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0)
        goto LAB_10a01091;
        SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52
                  (param_2->___saveData_9,(MethodInfo *)0x0);
      }
      pGVar4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                          (MethodInfo *)0x0);
      if (pGVar4 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
        GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                  (pGVar4,bVar3,(MethodInfo *)0x0);
        if (bVar1 != bVar3) {
          if (bVar3) {
            iVar5 = param_1->___validMetaSaveCount_33 + 1;
          }
          else {
            iVar5 = param_1->___validMetaSaveCount_33 + -1;
          }
          param_1->___validMetaSaveCount_33 = iVar5;
        }
        bVar1 = MetaSave_get_shouldBeInPool_m16F8C76FBAACCC5432BB207B82CFBABC476B9DB9
                          (param_2,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pGVar4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                            (MethodInfo *)0x0);
        if ((pGVar4 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) &&
           (pTVar6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34
                               (pGVar4,(MethodInfo *)0x0),
           pTVar6 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
          Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                    (pTVar6,param_1->___metaSavePool_8,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_10a01091:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
