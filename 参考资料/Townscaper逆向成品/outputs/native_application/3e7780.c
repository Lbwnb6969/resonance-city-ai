// RVA 0x3e7780 | Placemaker.Ui.UiScaler$$OnEnable
// PDB: UiScaler_OnEnable_m87024A245CD6B661782E0758DD6B025ADC4FC6D7
// Body: [[103e7780, 103e782f]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10667770 Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55
// 107b0390 CanvasScaler_set_scaleFactor_mB0976DB810D4AB2410D7F50CD39BC75E1A143197
// 10a44170 Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14

void __cdecl
UiScaler_OnEnable_m87024A245CD6B661782E0758DD6B025ADC4FC6D7
          (UiScaler_tB6DEA5BD451A2C98DD89553F66D4888CFFD1E081 *param_1,MethodInfo *param_2)

{
  CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1 *pCVar1;
  float fVar2;
  float fVar3;

  if (DAT_1151c8be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1_mFEFB9F34C9F24A5D70DBCE73DA08CACC5A231536_RuntimeMethod_var
              );
    DAT_1151c8be = '\x01';
  }
  pCVar1 = (CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1 *)
           Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      Component_GetComponent_TisCanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1_mFEFB9F34C9F24A5D70DBCE73DA08CACC5A231536_RuntimeMethod_var
                     );
  fVar2 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55((MethodInfo *)0x0);
  fVar3 = __real_3f800000;
  if (__real_42f00000 <= fVar2) {
    fVar3 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14
                      (3.0,(fVar2 / __real_42f00000) * __real_3f4ccccd + __real_3e4ccccd,
                       (MethodInfo *)0x0);
  }
  if (pCVar1 == (CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  CanvasScaler_set_scaleFactor_mB0976DB810D4AB2410D7F50CD39BC75E1A143197
            (pCVar1,fVar3,(MethodInfo *)0x0);
  return;
}
