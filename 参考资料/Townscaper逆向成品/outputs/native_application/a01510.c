// RVA 0xa01510 | Placemaker.SaveSystem$$GetMetaSave
// PDB: SaveSystem_GetMetaSave_m0F9523F10ED70353647C0E7B6182A885040F3D56
// Body: [[10a01510, 10a01561]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C

MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB * __cdecl
SaveSystem_GetMetaSave_m0F9523F10ED70353647C0E7B6182A885040F3D56
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,int param_2,
          MethodInfo *param_3)

{
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar1;
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar2;

  if (DAT_115201a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB_mBB9DA225704AE067D654F3C50333BDF7FDC1A1B6_RuntimeMethod_var
              );
    DAT_115201a7 = '\x01';
  }
  if (param_1->___metaSaveContainer_9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
  {
    pTVar1 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                       (param_1->___metaSaveContainer_9,param_2,(MethodInfo *)0x0);
    if (pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pMVar2 = (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)
               Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar1,
                          Component_GetComponent_TisMetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB_mBB9DA225704AE067D654F3C50333BDF7FDC1A1B6_RuntimeMethod_var
                         );
      return pMVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
