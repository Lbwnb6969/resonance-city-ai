// RVA 0x236fa0 | Placemaker.Ui.ControlLegend$$Update
// PDB: ControlLegend_Update_m275BA9B0206C387210B4D2C9F3E3F7303159034B
// Body: [[10236fa0, 102370d8]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10236cc0 ControlLegend_Close_m2D58D146318557B6244EEBA7A047876763F87047
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10f1a250 Player_GetAnyButtonDown_m914E51A27FEE5F7C6CDB812F96E194BF44EF944E
// 10f1d410 Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96

void __cdecl
ControlLegend_Update_m275BA9B0206C387210B4D2C9F3E3F7303159034B
          (ControlLegend_tB336AC9E8DC444437364CA0FDD6C0BBEFB647025 *param_1,MethodInfo *param_2)

{
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar1;
  bool bVar2;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar3;

  if (DAT_1151b5a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5C70E2DF6C4DF3077BF0E77F8FC2F3E1E6FE697B);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5D801DA57C7CA80192EC3DFD6B4E7AAB80B67CA7);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralFE8412772CA2903F3E7E2D2EF7AEF5758301150F);
    DAT_1151b5a7 = '\x01';
  }
  if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
     (pPVar1 = param_1->___master_4->___player_43,
     pPVar1 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) goto LAB_102370d4;
  bVar2 = Player_GetAnyButtonDown_m914E51A27FEE5F7C6CDB812F96E194BF44EF944E
                    (pPVar1,(MethodInfo *)0x0);
  if (bVar2) {
    if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
       (pPVar1 = param_1->___master_4->___player_43,
       pPVar1 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) goto LAB_102370d4;
    bVar2 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                      (pPVar1,_stringLiteral5C70E2DF6C4DF3077BF0E77F8FC2F3E1E6FE697B,
                       (MethodInfo *)0x0);
    if (!bVar2) {
      if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
         (pPVar1 = param_1->___master_4->___player_43,
         pPVar1 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) goto LAB_102370d4;
      bVar2 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                        (pPVar1,_stringLiteral5D801DA57C7CA80192EC3DFD6B4E7AAB80B67CA7,
                         (MethodInfo *)0x0);
      if (!bVar2) {
        if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
           (pPVar1 = param_1->___master_4->___player_43,
           pPVar1 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) goto LAB_102370d4;
        bVar2 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                          (pPVar1,_stringLiteralFE8412772CA2903F3E7E2D2EF7AEF5758301150F,
                           (MethodInfo *)0x0);
        if (!bVar2) goto LAB_10237091;
      }
    }
    ControlLegend_Close_m2D58D146318557B6244EEBA7A047876763F87047(param_1,(MethodInfo *)0x0);
  }
LAB_10237091:
  if (param_1->___firstFrame_7 == false) {
    return;
  }
  pGVar3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if ((param_1->___openState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) &&
     (bVar2 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                        (param_1->___openState_5,(MethodInfo *)0x0),
     pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) {
    GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar3,bVar2,(MethodInfo *)0x0);
    param_1->___firstFrame_7 = false;
    return;
  }
LAB_102370d4:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
