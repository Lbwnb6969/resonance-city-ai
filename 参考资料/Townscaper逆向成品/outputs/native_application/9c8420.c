// RVA 0x9c8420 | Placemaker.Ui.UiMaster.<>c__DisplayClass75_0.<<StartFinishLoading>g__Routine|0>d$$MoveNext
// PDB: U3CU3CStartFinishLoadingU3Eg__RoutineU7C0U3Ed_MoveNext_m96C6E1F11AB2B04077D5F7DDE395A411E8103486
// Body: [[109c8420, 109c85d3]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d5740 MenuMusic_StartPlaying_m1B3147C144240015D6A9D6321210155B71DFC6F9
// 103f9290 WorldMaster_get_shouldBeLoading_mB91FB09CE57E0AB72AA5734CA0A349B2AB2896F0
// 104c46e0 Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
// 104c4920 Dim_get_awaitingDarkDim_mEF4E437EBBAD831912856C8F80A8BF70A97DC064
// 104fade0 LoadingUi_StopLoading_m2E7B375A18E86A27F5BDAED998AE3C25E7FAE971
// 104fb5f0 LoadingUi_get_isLoading_m01FAA8FEC66FA4179591D42FBC664E416974967C
// 10a00900 SaveMenu_SnapScrolls_m2CA091FF84C226CEF8EF08B460C4D74750EF2E40

bool __cdecl
U3CU3CStartFinishLoadingU3Eg__RoutineU7C0U3Ed_MoveNext_m96C6E1F11AB2B04077D5F7DDE395A411E8103486
          (U3CU3CStartFinishLoadingU3Eg__RoutineU7C0U3Ed_t33531804BC391416FE96CB628C2CB90B217CD912
           *param_1,MethodInfo *param_2)

{
  U3CU3Ec__DisplayClass75_0_t249EC1AA889B3C20E41E679B209A83CE8E1F8543 *pUVar1;
  LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F *pLVar2;
  Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *pDVar3;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar4;
  bool bVar5;
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar6;
  MenuMusic_tCC3CECB135330E554AD36BA81ADAA963CDEA8F00 *pMVar7;

  pUVar1 = param_1->___U3CU3E4__this_2;
  switch(param_1->___U3CU3E1__state_0) {
  case 0:
  case 1:
    param_1->___U3CU3E1__state_0 = -1;
    if (((pUVar1 == (U3CU3Ec__DisplayClass75_0_t249EC1AA889B3C20E41E679B209A83CE8E1F8543 *)0x0) ||
        (pUVar1->___U3CU3E4__this_0 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0))
       || (pDVar3 = pUVar1->___U3CU3E4__this_0->___dim_10,
          pDVar3 == (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) goto LAB_109c85cf;
    bVar5 = Dim_get_awaitingDarkDim_mEF4E437EBBAD831912856C8F80A8BF70A97DC064
                      (pDVar3,(MethodInfo *)0x0);
    if (bVar5) {
      param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
      param_1->___U3CU3E1__state_0 = 1;
      return true;
    }
    if ((pUVar1->___U3CU3E4__this_0 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
       (pWVar4 = pUVar1->___U3CU3E4__this_0->___worldMaster_5,
       pWVar4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) goto LAB_109c85cf;
    pWVar4->___awaitingDim_56 = false;
    break;
  case 2:
    param_1->___U3CU3E1__state_0 = -1;
    break;
  case 3:
    param_1->___U3CU3E1__state_0 = -1;
    goto LAB_109c8517;
  default:
    goto switchD_109c8437_default;
  }
  if (((pUVar1 != (U3CU3Ec__DisplayClass75_0_t249EC1AA889B3C20E41E679B209A83CE8E1F8543 *)0x0) &&
      (pUVar1->___U3CU3E4__this_0 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)) &&
     (pWVar4 = pUVar1->___U3CU3E4__this_0->___worldMaster_5,
     pWVar4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
    bVar5 = WorldMaster_get_shouldBeLoading_mB91FB09CE57E0AB72AA5734CA0A349B2AB2896F0
                      (pWVar4,(MethodInfo *)0x0);
    if (bVar5) {
      param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
      param_1->___U3CU3E1__state_0 = 2;
      return true;
    }
    if ((pUVar1->___U3CU3E4__this_0 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pLVar2 = pUVar1->___U3CU3E4__this_0->___loadingUi_12,
       pLVar2 != (LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F *)0x0)) {
      LoadingUi_StopLoading_m2E7B375A18E86A27F5BDAED998AE3C25E7FAE971(pLVar2,(MethodInfo *)0x0);
LAB_109c8517:
      if (((pUVar1 != (U3CU3Ec__DisplayClass75_0_t249EC1AA889B3C20E41E679B209A83CE8E1F8543 *)0x0) &&
          (pUVar1->___U3CU3E4__this_0 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0))
         && (pLVar2 = pUVar1->___U3CU3E4__this_0->___loadingUi_12,
            pLVar2 != (LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F *)0x0)) {
        bVar5 = LoadingUi_get_isLoading_m01FAA8FEC66FA4179591D42FBC664E416974967C
                          (pLVar2,(MethodInfo *)0x0);
        if (bVar5) {
          param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
          param_1->___U3CU3E1__state_0 = 3;
          return true;
        }
        if ((pUVar1->___U3CU3E4__this_0 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0
            ) && (pDVar3 = pUVar1->___U3CU3E4__this_0->___dim_10,
                 pDVar3 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) {
          Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7(pDVar3,0,(MethodInfo *)0x0);
          if ((pUVar1->___U3CU3E4__this_0 !=
               (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
             (pWVar4 = pUVar1->___U3CU3E4__this_0->___worldMaster_5,
             pWVar4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
            pWVar4->___isDimmed_55 = false;
            pUVar6 = pUVar1->___U3CU3E4__this_0;
            if (pUVar6 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
              if (pUVar6->___saveMenu_6 != (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0
                 ) {
                SaveMenu_SnapScrolls_m2CA091FF84C226CEF8EF08B460C4D74750EF2E40
                          (pUVar6->___saveMenu_6,(MethodInfo *)0x0);
                pUVar6 = pUVar1->___U3CU3E4__this_0;
              }
              if (pUVar1->___playNewSound_1 == false) {
                if (pUVar6 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
                goto LAB_109c85cf;
                pMVar7 = pUVar6->___loadGameMusic_26;
              }
              else {
                if (pUVar6 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
                goto LAB_109c85cf;
                pMVar7 = pUVar6->___newGameMusic_25;
              }
              if (pMVar7 != (MenuMusic_tCC3CECB135330E554AD36BA81ADAA963CDEA8F00 *)0x0) {
                MenuMusic_StartPlaying_m1B3147C144240015D6A9D6321210155B71DFC6F9
                          (pMVar7,(MethodInfo *)0x0);
switchD_109c8437_default:
                return false;
              }
            }
          }
        }
      }
    }
  }
LAB_109c85cf:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
