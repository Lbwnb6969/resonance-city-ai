// RVA 0x10d2090 | FuryStudios.FurySDK.Utils.SafeArea$$GetDebugSafeArea
// PDB: SafeArea_GetDebugSafeArea_m3F28E699C92AFAD1E2E3DF03E51C63D2BE632055
// Body: [[110d2090, 110d236f]]
// Direct callees:
// 10069600 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 106677e0 Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE
// 10667890 Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C

Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __cdecl
SafeArea_GetDebugSafeArea_m3F28E699C92AFAD1E2E3DF03E51C63D2BE632055
          (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *__return_storage_ptr__,
          SafeArea_t2A5ADA7E8D8C5CF656B470D65FC75AB0603DBB58 *param_1,MethodInfo *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  Guid_t *pGVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  Guid_t local_14;

  if (DAT_11523aad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var);
    DAT_11523aad = '\x01';
  }
  switch(param_1->___debugAreaIndex_16) {
  default:
    if (`struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
        ::__l2::s_Il2CppMethodInitialized == false) {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
      `struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized = true;
    }
    if (*(Il2CppObject **)
         Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields !=
        (Il2CppObject *)0x0) {
      pGVar5 = InterfaceFuncInvoker0<Guid_t>::Invoke
                         (&local_14,6,
                          IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var
                          ,*(Il2CppObject **)
                            Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->
                            static_fields);
      fVar8 = *(float *)&pGVar5->____b_2;
      fVar1 = *(float *)&pGVar5->____d_4;
      fVar2 = *(float *)&pGVar5->____h_8;
      __return_storage_ptr__->___m_XMin_0 = (float)pGVar5->____a_1;
      __return_storage_ptr__->___m_YMin_1 = fVar8;
      __return_storage_ptr__->___m_Width_2 = fVar1;
      __return_storage_ptr__->___m_Height_3 = fVar2;
      return __return_storage_ptr__;
    }
  case 1:
    iVar6 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
    iVar7 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
    __return_storage_ptr__->___m_XMin_0 = 0.0;
    __return_storage_ptr__->___m_YMin_1 = 0.0;
    __return_storage_ptr__->___m_Width_2 = 0.0;
    __return_storage_ptr__->___m_Height_3 = 0.0;
    TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
              ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)__return_storage_ptr__,0.0,
               0.0,(float)iVar6,(float)iVar7,(MethodInfo *)0x0);
    return __return_storage_ptr__;
  case 2:
    iVar6 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
    iVar7 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
    iVar4 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
    iVar3 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
    __return_storage_ptr__->___m_XMin_0 = 0.0;
    __return_storage_ptr__->___m_YMin_1 = 0.0;
    __return_storage_ptr__->___m_Width_2 = 0.0;
    __return_storage_ptr__->___m_Height_3 = 0.0;
    TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
              ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)__return_storage_ptr__,
               (float)((iVar6 * 5) / 100),(float)((iVar7 * 5) / 100),(float)((iVar4 * 0x5a) / 100),
               (float)((iVar3 * 0x5a) / 100),(MethodInfo *)0x0);
    return __return_storage_ptr__;
  case 3:
    iVar6 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
    iVar3 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
    iVar4 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
    iVar7 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
    iVar7 = iVar7 / 2;
    __return_storage_ptr__->___m_XMin_0 = 0.0;
    __return_storage_ptr__->___m_YMin_1 = 0.0;
    __return_storage_ptr__->___m_Width_2 = 0.0;
    __return_storage_ptr__->___m_Height_3 = 0.0;
    iVar4 = iVar4 / 2;
    fVar8 = (float)((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
    iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
    break;
  case 4:
    iVar6 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
    iVar4 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
    iVar7 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
    __return_storage_ptr__->___m_XMin_0 = 0.0;
    __return_storage_ptr__->___m_YMin_1 = 0.0;
    __return_storage_ptr__->___m_Width_2 = 0.0;
    __return_storage_ptr__->___m_Height_3 = 0.0;
    iVar7 = (iVar7 * 0x32) / 100;
    iVar4 = (iVar4 * 0x4b) / 100;
    iVar6 = (iVar6 * 0x19) / 100;
    fVar8 = 0.0;
  }
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)__return_storage_ptr__,
             (float)iVar6,fVar8,(float)iVar4,(float)iVar7,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}
