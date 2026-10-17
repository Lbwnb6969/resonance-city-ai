// RVA 0xa03ba0 | Placemaker.SaveSystem$$<SaveSettings>b__54_0
// PDB: SaveSystem_U3CSaveSettingsU3Eb__54_0_m28402B423354C904F27A651FAB6574C85AE1BD3D
// Body: [[10a03ba0, 10a03c34]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 107426b0 Action_2_Invoke_m559D51ED807DC96F41CB2A2812DBD8BAA5BB05D9_gshared
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8

void __cdecl
SaveSystem_U3CSaveSettingsU3Eb__54_0_m28402B423354C904F27A651FAB6574C85AE1BD3D
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,MethodInfo *param_2)

{
  int iVar1;
  int iVar2;

  if (DAT_115201bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralD5B46D0954A7CE48815FB53582E76205F92D2EDD);
    DAT_115201bd = '\x01';
  }
  if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
  }
  Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
            ((Il2CppObject *)_stringLiteralD5B46D0954A7CE48815FB53582E76205F92D2EDD,
             (MethodInfo *)0x0);
  iVar2 = param_1->___activeRequestsCounter_39;
  param_1->___saveSettingsRequest_37 = (Il2CppObject *)0x0;
  iVar1 = iVar2 + -1;
  param_1->___activeRequestsCounter_39 = iVar1;
  if ((Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)param_1->___onSaveRequestCountChange_38
      != (Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)0x0) {
    Action_2_Invoke_m559D51ED807DC96F41CB2A2812DBD8BAA5BB05D9_gshared
              ((Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)
               param_1->___onSaveRequestCountChange_38,iVar2,iVar1,
               Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670_RuntimeMethod_var);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
