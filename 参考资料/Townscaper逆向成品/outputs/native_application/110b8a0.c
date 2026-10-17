// RVA 0x110b8a0 | FuryStudios.FurySDK.Internal.BasePlatformSDK$$GetSystemLanguage
// PDB: BasePlatformSDK_GetSystemLanguage_m4DAA3F824A2FEC61481ADBB0CF407088D5536EC6
// Body: [[1110b8a0, 1110b8b2]]
// Direct callees:
// 10a35dc0 Application_get_systemLanguage_m97271242ECD614FD02DC6BEB912CDDB6DD2BD045
// 110cf5a0 LanguageExtensions_ToPlatformLanguage_m00D492C82EFD2347949210FACBCB4F16A8E27501

int __cdecl
BasePlatformSDK_GetSystemLanguage_m4DAA3F824A2FEC61481ADBB0CF407088D5536EC6
          (BasePlatformSDK_t289E609F49DAF94E98CCB795ECEAA157F2437731 *param_1,MethodInfo *param_2)

{
  int iVar1;

  iVar1 = Application_get_systemLanguage_m97271242ECD614FD02DC6BEB912CDDB6DD2BD045
                    ((MethodInfo *)0x0);
  iVar1 = LanguageExtensions_ToPlatformLanguage_m00D492C82EFD2347949210FACBCB4F16A8E27501
                    (iVar1,(MethodInfo *)0x0);
  return iVar1;
}
