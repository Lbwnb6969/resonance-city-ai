// RVA 0x1146390 | FuryStudios.FurySDK.Noop.NoopPlatformSDK$$SetStat
// PDB: NoopPlatformSDK_SetStat_mAFCA0567ECBAE53B60F032B0A8763E3BF9C01E14
// Body: [[11146390, 111463cb]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1110cae0 NoopAsyncRequest__ctor_m3C80465D24380685B9B878DEF161559A5603C012

Il2CppObject * __cdecl
NoopPlatformSDK_SetStat_mAFCA0567ECBAE53B60F032B0A8763E3BF9C01E14
          (NoopPlatformSDK_tA104E858FC242EF96C85577FCDBCD109DE2D4EF4 *param_1,
          StatID_t49358985665638845884309A782C9128E571E796 param_2,float param_3,
          Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32 *param_4,MethodInfo *param_5)

{
  NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF *pNVar1;

  if (DAT_11524703 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF_il2cpp_TypeInfo_var
              );
    DAT_11524703 = '\x01';
  }
  pNVar1 = (NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF *)
           il2cpp_codegen_object_new
                     (NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF_il2cpp_TypeInfo_var
                     );
  NoopAsyncRequest__ctor_m3C80465D24380685B9B878DEF161559A5603C012(pNVar1,0x10,(MethodInfo *)0x0);
  return (Il2CppObject *)pNVar1;
}
