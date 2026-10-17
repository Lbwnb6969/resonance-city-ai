// RVA 0x4bf9d0 | Placemaker.Ui.CreditsMenu$$Toggle
// PDB: CreditsMenu_Toggle_mE078B3E4B862FA8F50DED59C87A47DDDA69D3E46
// Body: [[104bf9d0, 104bfb13]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d13f0 AutoScroll_OnOpen_mF5B28F3303FA021615FDFABD8B1B8CCA544B80B1
// 103d5740 MenuMusic_StartPlaying_m1B3147C144240015D6A9D6321210155B71DFC6F9
// 103e8590 UpdateState_Snap_m4E46213E0C57037828811FB0C271E6FB3CD3E632
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 104beff0 CreditsMenu_Close_m8D29C2EC80917B0D8226C064ED5407FA7186E2AA
// 104ee9c0 KeyboardControlsMenu_DarkenerClicked_mD8C47D0735D72B4ED505E2B0B6CFD30E3AAE7428
// 1066d8c0 Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
CreditsMenu_Toggle_mE078B3E4B862FA8F50DED59C87A47DDDA69D3E46
          (CreditsMenu_tE101B90DEBA1E200189C86C0CFA340BA4872BB12 *param_1,MethodInfo *param_2)

{
  Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *pDVar1;
  SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *pSVar2;
  bool bVar3;
  int iVar4;

  if (param_1->___openState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    bVar3 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                      (param_1->___openState_5,(MethodInfo *)0x0);
    if (bVar3) {
      CreditsMenu_Close_m8D29C2EC80917B0D8226C064ED5407FA7186E2AA(param_1,(MethodInfo *)0x0);
      return;
    }
    if (param_1->___openState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (param_1->___openState_5,true,(MethodInfo *)0x0);
      if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
          (pDVar1 = param_1->___master_4->___dim_10,
          pDVar1 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) &&
         (pDVar1->___alphaState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0))
      {
        pDVar1->___alphaState_5->___speed_7 = 16.0;
        if (pDVar1->___alphaState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
        {
          UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                    (pDVar1->___alphaState_5,true,(MethodInfo *)0x0);
          if (pDVar1->___dimOrDark_6 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0
             ) {
            UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                      (pDVar1->___dimOrDark_6,true,(MethodInfo *)0x0);
            if (pDVar1->___alphaState_5 !=
                (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
              if (pDVar1->___alphaState_5->____current_0 == ___real_00000000) {
                if (pDVar1->___dimOrDark_6 ==
                    (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_104bfb0f;
                UpdateState_Snap_m4E46213E0C57037828811FB0C271E6FB3CD3E632
                          (pDVar1->___dimOrDark_6,(MethodInfo *)0x0);
              }
              if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0
                  ) && (pSVar2 = param_1->___master_4->___sideMenu_8,
                       pSVar2 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)) {
                KeyboardControlsMenu_DarkenerClicked_mD8C47D0735D72B4ED505E2B0B6CFD30E3AAE7428
                          ((KeyboardControlsMenu_t8A1421617C595C06F6BA074D899E4D4C458562D2 *)pSVar2,
                           (MethodInfo *)0x0);
                if (param_1->___scrollRect_6 !=
                    (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)0x0) {
                  (param_1->___scrollRect_6->___normPosTarget_8).___y_1 = 1.0;
                  if (param_1->___scrollRect_6 !=
                      (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)0x0) {
                    (param_1->___scrollRect_6->___normPosCurrent_7).___y_1 = 1.0;
                    AutoScroll_OnOpen_mF5B28F3303FA021615FDFABD8B1B8CCA544B80B1
                              (&param_1->___autoScroll_10,(MethodInfo *)0x0);
                    iVar4 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0
                                      ((MethodInfo *)0x0);
                    param_1->___openingFrame_11 = iVar4 + 1;
                    if (param_1->___menuMusic_13 !=
                        (MenuMusic_tCC3CECB135330E554AD36BA81ADAA963CDEA8F00 *)0x0) {
                      MenuMusic_StartPlaying_m1B3147C144240015D6A9D6321210155B71DFC6F9
                                (param_1->___menuMusic_13,(MethodInfo *)0x0);
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
LAB_104bfb0f:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
