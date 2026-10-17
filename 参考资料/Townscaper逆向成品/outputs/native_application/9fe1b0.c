// RVA 0x9fe1b0 | Placemaker.Ui.SaveMenu$$Button_Focus_Load
// PDB: SaveMenu_Button_Focus_Load_m0485D2727AF2139C46DFC9F8783AE3A819A4D8F9
// Body: [[109fe1b0, 109fe1d8]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e5d30 UiMaster_LoadMetaSave_mCB9566F46D9425D1AD0463AF2601CD265BEBF4E4

void __cdecl
SaveMenu_Button_Focus_Load_m0485D2727AF2139C46DFC9F8783AE3A819A4D8F9
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,MethodInfo *param_2)

{
  if ((param_1->___focusedCard_16 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) &&
     (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)) {
    UiMaster_LoadMetaSave_mCB9566F46D9425D1AD0463AF2601CD265BEBF4E4
              (param_1->___master_4,param_1->___focusedCard_16->___metaSave_9,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
