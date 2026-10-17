// RVA 0x3e5740 | Placemaker.Ui.UiMaster$$ControllerSetup
// PDB: UiMaster_ControllerSetup_m4EB7EEEF59FE2ED4D744FA2153CCA2643FE3137B
// Body: [[103e5740, 103e5926]]
// Direct callees:
// 1003e330 Invoke
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 107d0c60 ReInput_get_players_m27E69FD611F1DC81C4D62AD1097D3E60034F866B
// 108bed00 PlayerHelper_GetPlayer_mF695331098F335939AC534A8B42B82CC8136374E
// 10d68080 ControllerHelper_get_Joysticks_m32CF666C3C2D8D76EAC5E57B73E872FA14E581B9
// 10e5f670 MapHelper_LoadDefaultMaps_m25CC1F3FF95AECA82FB310518E8DF38E0F13021A
// 10e5f800 MapHelper_LoadMap_m794A05252426888BA3BC55B66B93A5DE46EDEB5D
// 10e615c0 MapHelper_SetMapsEnabled_m15D15677995FCA7AB5158C103F6CA97FFF365B7E

void __cdecl
UiMaster_ControllerSetup_m4EB7EEEF59FE2ED4D744FA2153CCA2643FE3137B
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,MethodInfo *param_2)

{
  MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *pMVar1;
  ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *pCVar2;
  PlayerHelper_tE04CA1F995394B5A151627679981DAB10E122D5A *pPVar3;
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar4;
  Il2CppObject *pIVar5;
  int iVar6;
  int extraout_EAX;

  if (DAT_1151c8ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ICollection_1_t84E8AB8517E141C403B773FBAC7A7107225B4ADB_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IList_1_t4C256DCB6292E6FC4CF9A153C6B659F8126048FB_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
    DAT_1151c8ad = '\x01';
  }
  if ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var)
    ;
  }
  pPVar3 = ReInput_get_players_m27E69FD611F1DC81C4D62AD1097D3E60034F866B((MethodInfo *)0x0);
  if (pPVar3 != (PlayerHelper_tE04CA1F995394B5A151627679981DAB10E122D5A *)0x0) {
    pPVar4 = PlayerHelper_GetPlayer_mF695331098F335939AC534A8B42B82CC8136374E
                       (pPVar3,0,(MethodInfo *)0x0);
    param_1->___player_43 = pPVar4;
    if (((pPVar4 != (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0) &&
        (pPVar4->___controllers_7 !=
         (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0)) &&
       (pMVar1 = pPVar4->___controllers_7->___maps_12,
       pMVar1 != (MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *)0x0)) {
      MapHelper_LoadDefaultMaps_m25CC1F3FF95AECA82FB310518E8DF38E0F13021A
                (pMVar1,2,(MethodInfo *)0x0);
      if ((param_1->___player_43 != (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0) &&
         (pCVar2 = param_1->___player_43->___controllers_7,
         pCVar2 != (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0)) {
        pIVar5 = ControllerHelper_get_Joysticks_m32CF666C3C2D8D76EAC5E57B73E872FA14E581B9
                           (pCVar2,(MethodInfo *)0x0);
        if (pIVar5 != (Il2CppObject *)0x0) {
          iVar6 = InterfaceFuncInvoker0<int>::Invoke
                            (0,
                             ICollection_1_t84E8AB8517E141C403B773FBAC7A7107225B4ADB_il2cpp_TypeInfo_var
                             ,pIVar5);
          if (0 < iVar6) {
            if ((param_1->___player_43 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)
               || (pCVar2 = param_1->___player_43->___controllers_7,
                  pCVar2 == (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0))
            goto LAB_103e5922;
            pIVar5 = ControllerHelper_get_Joysticks_m32CF666C3C2D8D76EAC5E57B73E872FA14E581B9
                               (pCVar2,(MethodInfo *)0x0);
            if (pIVar5 == (Il2CppObject *)0x0) goto LAB_103e5922;
            InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                      (0,IList_1_t4C256DCB6292E6FC4CF9A153C6B659F8126048FB_il2cpp_TypeInfo_var,
                       pIVar5,(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0);
            if ((((param_1->___player_43 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)
                 || (pCVar2 = param_1->___player_43->___controllers_7,
                    pCVar2 == (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0)) ||
                (extraout_EAX == 0)) ||
               (pMVar1 = pCVar2->___maps_12,
               pMVar1 == (MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *)0x0))
            goto LAB_103e5922;
            MapHelper_LoadMap_m794A05252426888BA3BC55B66B93A5DE46EDEB5D
                      (pMVar1,2,*(int *)(extraout_EAX + 8),
                       _stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A,
                       _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E,false,
                       (MethodInfo *)0x0);
          }
          if (((param_1->___player_43 != (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0) &&
              (pCVar2 = param_1->___player_43->___controllers_7,
              pCVar2 != (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0)) &&
             (pMVar1 = pCVar2->___maps_12,
             pMVar1 != (MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *)0x0)) {
            MapHelper_SetMapsEnabled_m15D15677995FCA7AB5158C103F6CA97FFF365B7E
                      (pMVar1,true,2,_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E,
                       (MethodInfo *)0x0);
            if (((param_1->___player_43 != (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)
                && (pCVar2 = param_1->___player_43->___controllers_7,
                   pCVar2 != (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0)) &&
               (pMVar1 = pCVar2->___maps_12,
               pMVar1 != (MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *)0x0)) {
              MapHelper_SetMapsEnabled_m15D15677995FCA7AB5158C103F6CA97FFF365B7E
                        (pMVar1,true,2,_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_103e5922:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
