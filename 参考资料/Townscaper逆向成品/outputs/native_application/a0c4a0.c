// RVA 0xa0c4a0 | Placemaker.Ui.SideMenu$$Button_ExportObj
// PDB: SideMenu_Button_ExportObj_mF36BAD085967FA987FFC29B167F0F2CFDFBA1E8A
// Body: [[10a0c4a0, 10a0c4cf]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e2bb0 ObjExporter_Export_mFAFD7875E3193B5E4200FF32CC1672FA1F98DAFE

void __cdecl
SideMenu_Button_ExportObj_mF36BAD085967FA987FFC29B167F0F2CFDFBA1E8A
          (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *param_1,
          BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *param_2,MethodInfo *param_3)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  ObjExporter_t9F614C11BF7AC2CAC258AD8A31553921ACD0C77D *pOVar2;

  if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
      (pWVar1 = param_1->___master_4->___worldMaster_5,
      pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
     (pOVar2 = pWVar1->___objExporter_37,
     pOVar2 != (ObjExporter_t9F614C11BF7AC2CAC258AD8A31553921ACD0C77D *)0x0)) {
    ObjExporter_Export_mFAFD7875E3193B5E4200FF32CC1672FA1F98DAFE(pOVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
