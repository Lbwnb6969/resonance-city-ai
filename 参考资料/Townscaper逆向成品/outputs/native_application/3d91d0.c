// RVA 0x3d91d0 | Placemaker.ModuleBuilder$$OnStart
// PDB: ModuleBuilder_OnStart_mF65B55B371FE735C0ED22F4218F48AC200DBE2B5
// Body: [[103d91d0, 103d9298]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e8070 UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a3ded0 GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34

void __cdecl
ModuleBuilder_OnStart_mF65B55B371FE735C0ED22F4218F48AC200DBE2B5
          (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *param_1,MethodInfo *param_2)

{
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar1;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar2;

  if (DAT_1151c877 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral41467F41E34FA37770728F258368F52589D97E06);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral8984872A3D87CB19680925BCBF98B7379A868046);
    DAT_1151c877 = '\x01';
  }
  pTVar1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  pGVar2 = UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683
                     (_stringLiteral41467F41E34FA37770728F258368F52589D97E06,pTVar1,
                      (MethodInfo *)0x0);
  if (pGVar2 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
    pTVar1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34
                       (pGVar2,(MethodInfo *)0x0);
    param_1->___moduleContainerPool_5 = pTVar1;
    if (pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pGVar2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar1,
                          (MethodInfo *)0x0);
      if (pGVar2 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
        GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                  (pGVar2,false,(MethodInfo *)0x0);
        pTVar1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                            (MethodInfo *)0x0);
        pGVar2 = UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683
                           (_stringLiteral8984872A3D87CB19680925BCBF98B7379A868046,pTVar1,
                            (MethodInfo *)0x0);
        if (pGVar2 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
          pTVar1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34
                             (pGVar2,(MethodInfo *)0x0);
          param_1->___moduleContainersToDeconstruct_6 = pTVar1;
          if (pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
            pGVar2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar1,
                                (MethodInfo *)0x0);
            if (pGVar2 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
              GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                        (pGVar2,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
