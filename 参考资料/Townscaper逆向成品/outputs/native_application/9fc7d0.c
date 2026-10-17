// RVA 0x9fc7d0 | Placemaker.SaveCardsHandler$$DuplicateCard
// PDB: SaveCardsHandler_DuplicateCard_m785E2231636695036A26E4A61240A582FB76F36B
// Body: [[109fc7d0, 109fc82a]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d60 U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8

Il2CppObject * __cdecl
SaveCardsHandler_DuplicateCard_m785E2231636695036A26E4A61240A582FB76F36B
          (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *param_1,
          SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *param_2,
          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *param_3,MethodInfo *param_4)

{
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar1;

  if (DAT_11520190 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CDuplicateCardU3Ed__35_t9F0138B90BB06D58CF0B884930B2F8E9A29B664F_il2cpp_TypeInfo_var
              );
    DAT_11520190 = '\x01';
  }
  pUVar1 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (
                     U3CDuplicateCardU3Ed__35_t9F0138B90BB06D58CF0B884930B2F8E9A29B664F_il2cpp_TypeInfo_var
                     );
  U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8(pUVar1,0,(MethodInfo *)0x0);
  if (pUVar1 != (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)0x0) {
    pUVar1->___U3CU3E4__this_2 = (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 *)param_2;
    pUVar1[1]._padding_ = (int)param_3;
    pUVar1[1]._padding_ = (int)param_1;
    return (Il2CppObject *)pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
