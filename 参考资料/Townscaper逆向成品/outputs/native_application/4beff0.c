// RVA 0x4beff0 | Placemaker.Ui.CreditsMenu$$Close
// PDB: CreditsMenu_Close_m8D29C2EC80917B0D8226C064ED5407FA7186E2AA
// Body: [[104beff0, 104bf060]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d5930 MenuMusic_StopPlaying_m23076D3D1D9A280E214522CB9BE38A8A7D10B65A
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 104c46e0 Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
// 10a0c7d0 SideMenu_Open_mBB91D95970ED849216B1D14742AD330000743CF6

void __cdecl
CreditsMenu_Close_m8D29C2EC80917B0D8226C064ED5407FA7186E2AA
          (CreditsMenu_tE101B90DEBA1E200189C86C0CFA340BA4872BB12 *param_1,MethodInfo *param_2)

{
  Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *pDVar1;
  SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *pSVar2;

  if (param_1->___openState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___openState_5,false,(MethodInfo *)0x0);
    if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pDVar1 = param_1->___master_4->___dim_10,
       pDVar1 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) {
      Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7(pDVar1,0,(MethodInfo *)0x0);
      if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pSVar2 = param_1->___master_4->___sideMenu_8,
         pSVar2 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)) {
        SideMenu_Open_mBB91D95970ED849216B1D14742AD330000743CF6(pSVar2,(MethodInfo *)0x0);
        if (param_1->___menuMusic_13 != (MenuMusic_tCC3CECB135330E554AD36BA81ADAA963CDEA8F00 *)0x0)
        {
          MenuMusic_StopPlaying_m23076D3D1D9A280E214522CB9BE38A8A7D10B65A
                    (param_1->___menuMusic_13,1.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
