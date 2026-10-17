// RVA 0x3d54f0 | Placemaker.MaterialMaster$$Placemaker.WorldMaster.IOnOnEnable.OnOnEnable
// PDB: MaterialMaster_Placemaker_WorldMaster_IOnOnEnable_OnOnEnable_m405DB0E59EDE3564D81313A86D072C9EDC523551
// Body: [[103d54f0, 103d55a4]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10668320 Shader_SetGlobalColor_m7F33ABD41EE010CA6B805F100FA02992381A8C7F
// 10675240 Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111

void __cdecl
MaterialMaster_Placemaker_WorldMaster_IOnOnEnable_OnOnEnable_m405DB0E59EDE3564D81313A86D072C9EDC523551
          (MaterialMaster_t05C2ECC9C51C32378E694E1CCEBD25CAC007B7B5 *param_1,
          WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_2,MethodInfo *param_3)

{
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar1;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_14;

  if (DAT_1151c868 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral05395195F2F654E33B9BC69BC5AB1881A80152A9);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralAC0932BA6428825C433518C5A63A96E8C84DCDE3);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralCB29407CEEDC5A19F283310E6747E110A68211D5);
    DAT_1151c868 = '\x01';
  }
  Shader_SetGlobalColor_m7F33ABD41EE010CA6B805F100FA02992381A8C7F
            (_stringLiteralCB29407CEEDC5A19F283310E6747E110A68211D5,param_1->___grassColor_19,
             (MethodInfo *)0x0);
  pCVar1 = (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)
           Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111
                     (&local_14,
                      (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7)
                      param_1->___backgroundColor_18,0.6,(MethodInfo *)0x0);
  Shader_SetGlobalColor_m7F33ABD41EE010CA6B805F100FA02992381A8C7F
            (_stringLiteralAC0932BA6428825C433518C5A63A96E8C84DCDE3,*pCVar1,(MethodInfo *)0x0);
  Shader_SetGlobalColor_m7F33ABD41EE010CA6B805F100FA02992381A8C7F
            (_stringLiteral05395195F2F654E33B9BC69BC5AB1881A80152A9,param_1->___roofColor_20,
             (MethodInfo *)0x0);
  return;
}
