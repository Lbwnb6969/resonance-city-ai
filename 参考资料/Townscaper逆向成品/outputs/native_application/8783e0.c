// RVA 0x8783e0 | Placemaker.BigMeshMaster$$OnStart
// PDB: BigMeshMaster_OnStart_m60F214644DEE56BB57418EB83A84800B6F2E83B0
// Body: [[108783e0, 10878416]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1043f280 Component_GetComponentsInChildren_TisRuntimeObject_mDA299B32A10B9FC9BF05FC2829E86C75EFD096B5_gshared

void __cdecl
BigMeshMaster_OnStart_m60F214644DEE56BB57418EB83A84800B6F2E83B0
          (BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *param_1,MethodInfo *param_2)

{
  if (DAT_1151f5b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentsInChildren_TisBigMeshGroup_tB2D1DB71F09DC046B11A7F58D3F4D80EB4A6B542_m4C07FEAFFFB9B36BC50D0F9DC39639325949D60D_RuntimeMethod_var
              );
    DAT_1151f5b6 = '\x01';
  }
  Component_GetComponentsInChildren_TisRuntimeObject_mDA299B32A10B9FC9BF05FC2829E86C75EFD096B5_gshared
            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
             (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___bigMeshGroups_5,
             Component_GetComponentsInChildren_TisBigMeshGroup_tB2D1DB71F09DC046B11A7F58D3F4D80EB4A6B542_m4C07FEAFFFB9B36BC50D0F9DC39639325949D60D_RuntimeMethod_var
            );
  return;
}
