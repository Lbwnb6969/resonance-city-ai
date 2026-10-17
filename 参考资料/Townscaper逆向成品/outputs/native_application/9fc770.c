// RVA 0x9fc770 | Placemaker.SaveCardsHandler$$DeleteCard
// PDB: SaveCardsHandler_DeleteCard_m3DB23774D9D1E8C484A03AD6A2C6BE1918471735
// Body: [[109fc770, 109fc7ca]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d60 U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8

Il2CppObject * __cdecl
SaveCardsHandler_DeleteCard_m3DB23774D9D1E8C484A03AD6A2C6BE1918471735
          (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *param_1,
          SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *param_2,
          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *param_3,MethodInfo *param_4)

{
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar1;

  if (DAT_11520191 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CDeleteCardU3Ed__36_t50B6A85E9050E18BBE4C76ECA818069684A60F97_il2cpp_TypeInfo_var
              );
    DAT_11520191 = '\x01';
  }
  pUVar1 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (
                     U3CDeleteCardU3Ed__36_t50B6A85E9050E18BBE4C76ECA818069684A60F97_il2cpp_TypeInfo_var
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
