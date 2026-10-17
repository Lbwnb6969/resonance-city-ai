// RVA 0x74c930 | Placemaker.Ui.OrbitalCamera$$Placemaker.Ui.UiMaster.IUiSetup.OnStart
// PDB: OrbitalCamera_Placemaker_Ui_UiMaster_IUiSetup_OnStart_m271C07BE96AE15E25A6FB63649CED82DCD868ED8
// Body: [[1074c930, 1074c958]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a388a0 Camera_set_opaqueSortMode_mB5F37D92D5E7E57870A45F6AB94148538CA0058A

void __cdecl
OrbitalCamera_Placemaker_Ui_UiMaster_IUiSetup_OnStart_m271C07BE96AE15E25A6FB63649CED82DCD868ED8
          (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  if (param_1->___cam_5 != (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) {
    Camera_set_opaqueSortMode_mB5F37D92D5E7E57870A45F6AB94148538CA0058A
              (param_1->___cam_5,2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
