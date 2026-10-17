// RVA 0x10d03d0 | FuryStudios.FurySDK.Settings.NintendoSwitchPlatformSettings$$.ctor
// PDB: NintendoSwitchPlatformSettings__ctor_mB6E56CC2DEEAD915520BE9D16E99F1FD76CFEA4C
// Body: [[110d03d0, 110d0420]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43

void __cdecl
NintendoSwitchPlatformSettings__ctor_mB6E56CC2DEEAD915520BE9D16E99F1FD76CFEA4C
          (NintendoSwitchPlatformSettings_t7D16F172EDE4528612B2925A630F22F5176BDDB9 *param_1,
          MethodInfo *param_2)

{
  if (DAT_11523a88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral608D2432B9FF573677D3C91B290C6EB06A4F353C);
    DAT_11523a88 = '\x01';
  }
  param_1->___mountName_1 = _stringLiteral608D2432B9FF573677D3C91B290C6EB06A4F353C;
  param_1->___writeFrequencyLimit_2 = true;
  param_1->___writeFrequencyBudget_3 = 0x20;
  param_1->___writeAmountLimit_4 = true;
  param_1->___writeAmountBudget_5 = 0x10;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
             (MethodInfo *)0x0);
  return;
}
