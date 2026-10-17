// RVA 0x2fa330 | Placemaker.Ui.Slider$$UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown
// PDB: Slider_UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown_mF14E0D285B50075EB013C265BE4F02A819FAD9D2
// Body: [[102fa330, 102fa37e]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 108838a0 ButtonAudio_Play_mA88FCF686BF0E8A1A00EDC47DF998054B60E4093
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

void __cdecl
Slider_UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown_mF14E0D285B50075EB013C265BE4F02A819FAD9D2
          (Slider_tD8A2D42879D86E2025759D2A26C7F53F08A56B6D *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar1;

  param_1->___buttonDown_6 = true;
  pTVar1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  ButtonAudio_Play_mA88FCF686BF0E8A1A00EDC47DF998054B60E4093(pTVar1,1,1.0,(MethodInfo *)0x0);
  if (param_1->___pressedState_14 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___pressedState_14,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
