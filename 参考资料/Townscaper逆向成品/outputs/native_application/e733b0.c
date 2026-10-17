// RVA 0xe733b0 | Placemaker.Graphs.Graph$$OnStart
// PDB: Graph_OnStart_m5703171F10D1A6E809F709C97938BD7F7C9B73B7
// Body: [[10e733b0, 10e73602]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e8070 UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683
// 10871c00 AoBaker_BakeAo_m1B1A17024F0AA5D608D3A5916A08213525B4CCA9
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a3ded0 GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34

void __cdecl
Graph_OnStart_m5703171F10D1A6E809F709C97938BD7F7C9B73B7
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,MethodInfo *param_2)

{
  AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *pAVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar3;

  if (DAT_11522829 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral3ECC3F21B636A5B47BB18B4BF2925DF0B33A9315);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral4E573B6D308EBE6F6C114881BB03C7A079DFC59D);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5755D22BCB0AC1C6F3E7635C6114922E114FC705);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralB9A36EF32E5C142CBAA226F6BEE231E028062768);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralBB09F553CAA43CF7FE642673E9EF36B559BD850E);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralED5B64F19708A71A0210562F2E9C4AA2FAAB8E6B);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralFF9716CABAEBE292F65F85BE3F1FD32C35ADD06E);
    DAT_11522829 = '\x01';
  }
  pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  pGVar3 = UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683
                     (_stringLiteral5755D22BCB0AC1C6F3E7635C6114922E114FC705,pTVar2,
                      (MethodInfo *)0x0);
  if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
    pTVar2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34
                       (pGVar3,(MethodInfo *)0x0);
    param_1->___corners_6 = pTVar2;
    pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        (MethodInfo *)0x0);
    pGVar3 = UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683
                       (_stringLiteralED5B64F19708A71A0210562F2E9C4AA2FAAB8E6B,pTVar2,
                        (MethodInfo *)0x0);
    if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
      pTVar2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34
                         (pGVar3,(MethodInfo *)0x0);
      param_1->___squares_8 = pTVar2;
      pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
      pGVar3 = UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683
                         (_stringLiteralFF9716CABAEBE292F65F85BE3F1FD32C35ADD06E,pTVar2,
                          (MethodInfo *)0x0);
      if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
        pTVar2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34
                           (pGVar3,(MethodInfo *)0x0);
        param_1->___looseVoxels_10 = pTVar2;
        pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                            (MethodInfo *)0x0);
        pGVar3 = UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683
                           (_stringLiteral3ECC3F21B636A5B47BB18B4BF2925DF0B33A9315,pTVar2,
                            (MethodInfo *)0x0);
        if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
          pTVar2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34
                             (pGVar3,(MethodInfo *)0x0);
          param_1->___qubePool_5 = pTVar2;
          pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                              (MethodInfo *)0x0);
          pGVar3 = UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683
                             (_stringLiteral4E573B6D308EBE6F6C114881BB03C7A079DFC59D,pTVar2,
                              (MethodInfo *)0x0);
          if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
            pTVar2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34
                               (pGVar3,(MethodInfo *)0x0);
            param_1->___cornerPool_7 = pTVar2;
            pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                                (MethodInfo *)0x0);
            pGVar3 = UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683
                               (_stringLiteralB9A36EF32E5C142CBAA226F6BEE231E028062768,pTVar2,
                                (MethodInfo *)0x0);
            if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
              pTVar2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34
                                 (pGVar3,(MethodInfo *)0x0);
              param_1->___squarePool_9 = pTVar2;
              pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                                  (MethodInfo *)0x0);
              pGVar3 = UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683
                                 (_stringLiteralBB09F553CAA43CF7FE642673E9EF36B559BD850E,pTVar2,
                                  (MethodInfo *)0x0);
              if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
                pTVar2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34
                                   (pGVar3,(MethodInfo *)0x0);
                param_1->___voxelPool_11 = pTVar2;
                if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___qubePool_5 !=
                    (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
                  pGVar3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                      param_1->___qubePool_5,(MethodInfo *)0x0);
                  if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
                    GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                              (pGVar3,false,(MethodInfo *)0x0);
                    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___cornerPool_7 !=
                        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
                      pGVar3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                          param_1->___cornerPool_7,(MethodInfo *)0x0);
                      if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
                        GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                                  (pGVar3,false,(MethodInfo *)0x0);
                        if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                            param_1->___squarePool_9 !=
                            (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
                          pGVar3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *
                                              )param_1->___squarePool_9,(MethodInfo *)0x0);
                          if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)
                          {
                            GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                                      (pGVar3,false,(MethodInfo *)0x0);
                            if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                param_1->___voxelPool_11 !=
                                (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
                              pGVar3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                                                 ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)param_1->___voxelPool_11,(MethodInfo *)0x0);
                              if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)
                                            0x0) {
                                GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                                          (pGVar3,false,(MethodInfo *)0x0);
                                if ((param_1->___master_4 !=
                                     (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
                                   && (pAVar1 = param_1->___master_4->___aoBaker_11,
                                      pAVar1 != (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *
                                                )0x0)) {
                                  AoBaker_BakeAo_m1B1A17024F0AA5D608D3A5916A08213525B4CCA9
                                            (pAVar1,(MethodInfo *)0x0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
