// RVA 0x234760 | Placemaker.Ui.ControlBinding$$OnInputFieldClicked
// PDB: ControlBinding_OnInputFieldClicked_mE78B97210363925AC1804DE6E2959D95522035DD
// Body: [[10234760, 10234952]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10235a60 ControlBinding_StartListeningDelayedJoystick_m2B82BCFB29C792C35EFDF30DD2C5F5D3E4A812DE
// 10235c70 ControlBinding_StartListeningDelayedMouseAndKeyboard_mC14470302E254017C56D43E89617AC5695A60EE0
// 10d65c40 ControllerHelper_GetController_mE9DC5BCA052A02CBA31555EA094DC93343EA4346
// 10e5cf00 MapHelper_GetMap_mC3654CDC5CE98A0B6B46B4CEEFBD1942E5FB822E
// 10e62330 MapHelper_SetMapsEnabled_m7CFAEE9C134C8970940A6DD4301D6F3315CAD5D4
// 10e94840 ControllerMap_ContainsElementMap_m498CC2C80F81765387CA67B65C8075E843F4819C

void __cdecl
ControlBinding_OnInputFieldClicked_mE78B97210363925AC1804DE6E2959D95522035DD
          (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *param_1,int param_2,int param_3
          ,bool param_4,MethodInfo *param_5)

{
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar1;
  ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *pCVar2;
  MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *pMVar3;
  bool bVar4;
  Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33 *pCVar5;
  ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *pCVar6;
  ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *pCVar7;
  ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *pCVar8;

  if (DAT_1151b59c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mF953D9003DA4060A94A2A0FDFB75A8000503AC9A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
    DAT_1151b59c = '\x01';
  }
  if ((param_1->___buttonMapState_15 != false) || (param_2 < 0)) {
    return;
  }
  if (param_1->___bindingRows_8 != (List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3 *)0x0) {
    if (param_1->___bindingRows_8->____size_2 <= param_2) {
      return;
    }
    param_1->___buttonMapState_15 = true;
    if ((((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pPVar1 = param_1->___master_4->___player_43,
         pPVar1 != (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) &&
        (pCVar2 = pPVar1->___controllers_7,
        pCVar2 != (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0)) &&
       (pMVar3 = pCVar2->___maps_12,
       pMVar3 != (MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *)0x0)) {
      MapHelper_SetMapsEnabled_m7CFAEE9C134C8970940A6DD4301D6F3315CAD5D4
                (pMVar3,false,_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F,
                 (MethodInfo *)0x0);
      if (param_1->___selectedControllerGroupType_20 == 0) {
        if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
            (pPVar1 = param_1->___master_4->___player_43,
            pPVar1 != (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) &&
           ((pCVar2 = pPVar1->___controllers_7,
            pCVar2 != (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0 &&
            (pMVar3 = pCVar2->___maps_12,
            pMVar3 != (MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *)0x0)))) {
          pCVar6 = MapHelper_GetMap_mC3654CDC5CE98A0B6B46B4CEEFBD1942E5FB822E
                             (pMVar3,0,0,_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E,
                              _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E,
                              (MethodInfo *)0x0);
          if ((((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
               && (pPVar1 = param_1->___master_4->___player_43,
                  pPVar1 != (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) &&
              (pCVar2 = pPVar1->___controllers_7,
              pCVar2 != (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0)) &&
             ((pMVar3 = pCVar2->___maps_12,
              pMVar3 != (MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *)0x0 &&
              (pCVar7 = MapHelper_GetMap_mC3654CDC5CE98A0B6B46B4CEEFBD1942E5FB822E
                                  (pMVar3,1,0,_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E
                                   ,_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E,
                                   (MethodInfo *)0x0),
              pCVar6 != (ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)0x0)))) {
            bVar4 = ControllerMap_ContainsElementMap_m498CC2C80F81765387CA67B65C8075E843F4819C
                              (pCVar6,param_3,(MethodInfo *)0x0);
            pCVar8 = pCVar6;
            if (!bVar4) {
              if (pCVar7 == (ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)0x0)
              goto LAB_1023494e;
              bVar4 = ControllerMap_ContainsElementMap_m498CC2C80F81765387CA67B65C8075E843F4819C
                                (pCVar7,param_3,(MethodInfo *)0x0);
              pCVar8 = pCVar7;
              if (!bVar4) {
                pCVar8 = (ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)0x0;
              }
            }
            (param_1->___replaceTargetMapping_22).___controllerMap_0 = pCVar8;
            (param_1->___replaceTargetMapping_22).___actionElementMapId_1 = param_3;
            ControlBinding_StartListeningDelayedMouseAndKeyboard_mC14470302E254017C56D43E89617AC5695A60EE0
                      (param_1,param_2,pCVar6,pCVar7,param_3,param_4,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        if (param_1->___selectedControllerGroupType_20 != 1) {
          return;
        }
        if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
            (pPVar1 = param_1->___master_4->___player_43,
            pPVar1 != (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) &&
           (pCVar2 = pPVar1->___controllers_7,
           pCVar2 != (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0)) {
          pCVar5 = ControllerHelper_GetController_mE9DC5BCA052A02CBA31555EA094DC93343EA4346
                             (pCVar2,2,0,(MethodInfo *)0x0);
          if (pCVar5 == (Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33 *)0x0) {
            return;
          }
          ControlBinding_StartListeningDelayedJoystick_m2B82BCFB29C792C35EFDF30DD2C5F5D3E4A812DE
                    (param_1,param_2,param_3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_1023494e:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
