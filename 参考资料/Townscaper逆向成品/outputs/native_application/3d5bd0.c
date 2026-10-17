// RVA 0x3d5bd0 | Placemaker.MetaSave$$SaveThis
// PDB: MetaSave_SaveThis_mA8BFA822B4C7207F281D5C7A32BEB8EAE9EB5B58
// Body: [[103d5bd0, 103d5c1b]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f090 Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared
// 10a03390 SaveSystem_SaveMetaSaveToDisk_m4DDBB593663A7178F39202B656EF31DF52BC88D4

void __cdecl
MetaSave_SaveThis_mA8BFA822B4C7207F281D5C7A32BEB8EAE9EB5B58
          (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *param_1,MethodInfo *param_2)

{
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar1;

  if (DAT_1151c86e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInParent_TisSaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92_mECE02EF4FF2BC063AA91110FC2E34EA2164FB957_RuntimeMethod_var
              );
    DAT_1151c86e = '\x01';
  }
  pSVar1 = (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)
           Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      Component_GetComponentInParent_TisSaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92_mECE02EF4FF2BC063AA91110FC2E34EA2164FB957_RuntimeMethod_var
                     );
  if (pSVar1 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0) {
    SaveSystem_SaveMetaSaveToDisk_m4DDBB593663A7178F39202B656EF31DF52BC88D4
              (pSVar1,param_1,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
