// RVA 0x9fdee0 | Placemaker.Ui.SaveMenu$$Button_Focus_CopyToClipboard
// PDB: SaveMenu_Button_Focus_CopyToClipboard_m3AEADE9BF881DC4DE70AB930AD596220566D3DDB
// Body: [[109fdee0, 109fdf0e]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 110e2aa0 GUIUtility_set_systemCopyBuffer_m1C5EAC38441C94C430AA13DF9942E1786CFCAC95

void __cdecl
SaveMenu_Button_Focus_CopyToClipboard_m3AEADE9BF881DC4DE70AB930AD596220566D3DDB
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,MethodInfo *param_2)

{
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar1;
  SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *pSVar2;

  if (((param_1->___focusedCard_16 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) &&
      (pMVar1 = param_1->___focusedCard_16->___metaSave_9,
      pMVar1 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0)) &&
     (pSVar2 = pMVar1->___saveData_9,
     pSVar2 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0)) {
    GUIUtility_set_systemCopyBuffer_m1C5EAC38441C94C430AA13DF9942E1786CFCAC95
              (pSVar2->___saveString_0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
