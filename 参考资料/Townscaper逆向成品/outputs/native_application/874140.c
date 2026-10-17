// RVA 0x874140 | Placemaker.Ui.BaseButton$$UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick
// PDB: BaseButton_UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick_mF6DD79D96B61B61850D773A5A6E2B350033B2A5C
// Body: [[10874140, 108741b9]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 10670f70 UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5
// 108838a0 ButtonAudio_Play_mA88FCF686BF0E8A1A00EDC47DF998054B60E4093
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

void __cdecl
BaseButton_UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick_mF6DD79D96B61B61850D773A5A6E2B350033B2A5C
          (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar1;
  int iVar2;

  param_1->___eventData_8 = param_2;
  if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
    (**(code **)(param_2->_padding_ + 0xe4))(param_2,*(undefined4 *)(param_2->_padding_ + 0xe8));
    pTVar1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        (MethodInfo *)0x0);
    iVar2 = 0;
    if (param_1->____disabled_9 == false) {
      iVar2 = 2;
    }
    ButtonAudio_Play_mA88FCF686BF0E8A1A00EDC47DF998054B60E4093(pTVar1,iVar2,1.0,(MethodInfo *)0x0);
    if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->___onClickAction_11
        != (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 param_1->___onClickAction_11,(MethodInfo *)0x0);
      if (param_1->___onClick_4 != (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)0x0) {
        UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5
                  (param_1->___onClick_4,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
