// RVA 0xe75480 | Placemaker.Graphs.Graph$$SampleNormalCoverage
// PDB: Graph_SampleNormalCoverage_mCDDEB568B7C6DC8ADD9688CF3EB467A41DF3A9D1
// Body: [[10e75480, 10e7552f]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 1043f090 Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared
// 10e74b90 Graph_SampleNormalCoverage_m0095268DCEC141F82F1C8A83C831280FD2071713
// 10e75544 FUN_10e75544

ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 * __cdecl
Graph_SampleNormalCoverage_mCDDEB568B7C6DC8ADD9688CF3EB467A41DF3A9D1
          (ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *__return_storage_ptr__,
          Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,
          Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *param_3,MethodInfo *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  String_t *pSVar4;
  undefined1 *puVar5;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar6;
  ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *pVVar7;
  ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 local_2c;
  undefined1 local_15;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__Graph_SampleNormalCoverage_mCDDEB568B7C6DC8ADD9688CF3EB467A41DF3A9D1;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  ExceptionList = &pvStack_10;
  puVar5 = &stack0xffffffc8;
  if (DAT_11522844 == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInParent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m70C7B2C75DF3FC0EFAD7316D820E3A22C85FAB39_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral9524BC26517BEAFFAA3F68ADB118FB3B10E4F516);
    DAT_11522844 = '\x01';
    puVar5 = local_14;
  }
  local_14 = puVar5;
  pSVar4 = _stringLiteral9524BC26517BEAFFAA3F68ADB118FB3B10E4F516;
  local_15 = 0;
  (__return_storage_ptr__->___Item1_0).___x_2 = 0.0;
  (__return_storage_ptr__->___Item1_0).___y_3 = 0.0;
  (__return_storage_ptr__->___Item1_0).___z_4 = 0.0;
  __return_storage_ptr__->___Item2_1 = 0.0;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)&local_15,
             (MethodInfo *)pSVar4);
  local_8 = 0;
  if (param_3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pQVar6 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
             Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_3,
                        Component_GetComponentInParent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m70C7B2C75DF3FC0EFAD7316D820E3A22C85FAB39_RuntimeMethod_var
                       );
    pVVar7 = Graph_SampleNormalCoverage_m0095268DCEC141F82F1C8A83C831280FD2071713
                       (&local_2c,param_1,param_2,pQVar6,(MethodInfo *)0x0);
    fVar1 = (pVVar7->___Item1_0).___y_3;
    fVar2 = (pVVar7->___Item1_0).___z_4;
    fVar3 = pVVar7->___Item2_1;
    (__return_storage_ptr__->___Item1_0).___x_2 = (pVVar7->___Item1_0).___x_2;
    (__return_storage_ptr__->___Item1_0).___y_3 = fVar1;
    (__return_storage_ptr__->___Item1_0).___z_4 = fVar2;
    __return_storage_ptr__->___Item2_1 = fVar3;
    pVVar7 = (ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *)FUN_10e75544();
    return pVVar7;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
