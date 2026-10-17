// RVA 0x1146410 | FuryStudios.FurySDK.Noop.NoopPlatformSDK$$ShowWishlistUI
// PDB: NoopPlatformSDK_ShowWishlistUI_mC1EBE43A239CCC448C10DCDBD2C7529D1E3CBACF
// Body: [[11146410, 1114644e]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1110cae0 NoopAsyncRequest__ctor_m3C80465D24380685B9B878DEF161559A5603C012

Il2CppObject * __cdecl
NoopPlatformSDK_ShowWishlistUI_mC1EBE43A239CCC448C10DCDBD2C7529D1E3CBACF
          (NoopPlatformSDK_tA104E858FC242EF96C85577FCDBCD109DE2D4EF4 *param_1,MethodInfo *param_2)

{
  NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF *pNVar1;

  if (DAT_11524701 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF_il2cpp_TypeInfo_var
              );
    DAT_11524701 = '\x01';
  }
  pNVar1 = (NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF *)
           il2cpp_codegen_object_new
                     (NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF_il2cpp_TypeInfo_var
                     );
  NoopAsyncRequest__ctor_m3C80465D24380685B9B878DEF161559A5603C012(pNVar1,0x4000,(MethodInfo *)0x0);
  return (Il2CppObject *)pNVar1;
}
