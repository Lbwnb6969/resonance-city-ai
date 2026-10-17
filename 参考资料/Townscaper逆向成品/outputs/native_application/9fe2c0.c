// RVA 0x9fe2c0 | Placemaker.Ui.SaveMenu$$Clicked
// PDB: SaveMenu_Clicked_m669EB125399762EE2AFDDAB903CA4DD57F43E1F5
// Body: [[109fe2c0, 109fe385]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e5d30 UiMaster_LoadMetaSave_mCB9566F46D9425D1AD0463AF2601CD265BEBF4E4
// 10874640 BaseButton_get_timeHeld_mE17A0F7A69E7F16A8A308FE0FD52AB985A79C664
// 10a00660 SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727
// 10c6a920 RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99

void __cdecl
SaveMenu_Clicked_m669EB125399762EE2AFDDAB903CA4DD57F43E1F5
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,
          SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *param_2,MethodInfo *param_3)

{
  BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *pBVar1;
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar2;
  float fVar3;

  if (((param_2 == (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) ||
      (pBVar1 = param_2->___baseButton_7,
      pBVar1 == (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0)) ||
     (pBVar1->___eventData_8 == (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0))
  goto LAB_109fe381;
  if (pBVar1->___eventData_8->___U3CpointerIdU3Ek__BackingField_12 == -2) {
LAB_109fe347:
    param_1->___focusedCard_16 = param_2;
    SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727(param_1,'\x02',(MethodInfo *)0x0);
    if (((param_1->___focusedCard_16 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0)
        && (pMVar2 = param_1->___focusedCard_16->___metaSave_9,
           pMVar2 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0)) &&
       (param_1->___focusedImage_8 != (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A *)0x0)) {
      RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99
                (param_1->___focusedImage_8,
                 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)pMVar2->___texture_7,
                 (MethodInfo *)0x0);
      return;
    }
  }
  else {
    fVar3 = BaseButton_get_timeHeld_mE17A0F7A69E7F16A8A308FE0FD52AB985A79C664
                      (pBVar1,(MethodInfo *)0x0);
    if (__real_3e4ccccd < fVar3) {
      if (pBVar1->___eventData_8 ==
          (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) goto LAB_109fe381;
      if (-2 < pBVar1->___eventData_8->___U3CpointerIdU3Ek__BackingField_12) goto LAB_109fe347;
    }
    if (pBVar1->___eventData_8 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0)
    {
      if (-2 < pBVar1->___eventData_8->___U3CpointerIdU3Ek__BackingField_12) {
        if (param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
        goto LAB_109fe381;
        UiMaster_LoadMetaSave_mCB9566F46D9425D1AD0463AF2601CD265BEBF4E4
                  (param_1->___master_4,param_2->___metaSave_9,(MethodInfo *)0x0);
      }
      return;
    }
  }
LAB_109fe381:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
