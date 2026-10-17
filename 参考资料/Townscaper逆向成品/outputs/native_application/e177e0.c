// RVA 0xe177e0 | Placemaker.GridGenerator$$IterateGenerateCenter
// PDB: GridGenerator_IterateGenerateCenter_m4D54C84008E6731BFD51B7C7D6450D8410CB0108
// Body: [[10e177e0, 10e1787f]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10e14000 GridGenerator_IterateBit_mF26D0807021BAE5BAF362E29DF459A8153FF8A43
// 10e1b130 GridGenerator_MotivateBit_m7A45A63DB98425844274A56EC6010ABF46706836

bool __cdecl
GridGenerator_IterateGenerateCenter_m4D54C84008E6731BFD51B7C7D6450D8410CB0108
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,MethodInfo *param_2)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 *pGVar2;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar3;
  bool bVar4;

  if (DAT_1152266e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9_RuntimeMethod_var
              );
    DAT_1152266e = '\x01';
  }
  pGVar2 = GridGenerator_MotivateBit_m7A45A63DB98425844274A56EC6010ABF46706836
                     (param_1,param_1->___hexOrigo_21,(MethodInfo *)0x0);
  if (pGVar2 != (GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 *)0x0) {
    bVar4 = pGVar2->___state_9 == '\x05';
    if (!bVar4) {
      pWVar1 = param_1->___master_4;
      pOVar3 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar3,(Il2CppObject *)pWVar1,
                 (int)
                 WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9_RuntimeMethod_var,
                 Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
      GridGenerator_IterateBit_mF26D0807021BAE5BAF362E29DF459A8153FF8A43
                (param_1,pGVar2,(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)pOVar3,
                 (MethodInfo *)0x0);
      bVar4 = pGVar2->___state_9 == '\x05';
    }
    return !bVar4;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
