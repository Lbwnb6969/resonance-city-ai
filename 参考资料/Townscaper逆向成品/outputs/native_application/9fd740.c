// RVA 0x9fd740 | Placemaker.SaveCardsHandler$$SetNewCard
// PDB: SaveCardsHandler_SetNewCard_mD92DE25AD880A2C4990CE6B2D8DBD370942B152A
// Body: [[109fd740, 109fd783]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 109fc520 SaveCardsHandler_AddCardToActiveCardsList_mE3A45B648F8F1C4D01DBB260E1531623B671F7B8
// 109fca20 SaveCardsHandler_InstantiateNewCard_mF86E099211F8FC7102B1E5A59C5FCA496AEBB692
// 10a4ac90 Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781

void __cdecl
SaveCardsHandler_SetNewCard_mD92DE25AD880A2C4990CE6B2D8DBD370942B152A
          (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *param_1,
          SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *param_2,String_t *param_3,
          String_t *param_4,MethodInfo *param_5)

{
  SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *pSVar1;

  pSVar1 = SaveCardsHandler_InstantiateNewCard_mF86E099211F8FC7102B1E5A59C5FCA496AEBB692
                     (param_1,(MethodInfo *)0x0);
  if (pSVar1 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) {
    Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781
              ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar1,param_3,(MethodInfo *)0x0)
    ;
    pSVar1->___filePath_10 = param_4;
    pSVar1->___saveData_8 = param_2;
    SaveCardsHandler_AddCardToActiveCardsList_mE3A45B648F8F1C4D01DBB260E1531623B671F7B8
              (param_1,pSVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
