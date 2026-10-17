// RVA 0x3f8c30 | Placemaker.WorldMaster$$Update
// PDB: WorldMaster_Update_mA51BB90FC12CED5E410106F6744ACBA5B9F421F9
// Body: [[103f8c30, 103f8f2c] [103f8f36, 103f8f86]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10196230 _libm_sse2_exp_precise
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10278860 Stopwatch_Restart_mCACD336DA0A4A8BF67F2E74C9C2DA93484047D3B
// 103f4470 WaveFunctionCollapse_LaterUpdate_mEC567391A3F73207189D4A88AF7EE72C7819D49A
// 103f7b30 WorldMaster_Iterate_mAB1D38EDB8394C82044F067D5E245C0CD7D91844
// 103f82e0 WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
// 103f8fa8 FUN_103f8fa8
// 1066d8c0 Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0
// 1066d9d0 Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10a02b40 SaveSystem_MaybeSaveCurrent_m6D4D92DDAB91A3F5EB58F6180E5B93B746F5B2D3
// 10a02c00 SaveSystem_MaybeSaveSettings_mF1FD0D97C328223744996634EC08D16CDCD3FD01
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
WorldMaster_Update_mA51BB90FC12CED5E410106F6744ACBA5B9F421F9
          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_1,MethodInfo *param_2)

{
  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *pLVar1;
  undefined1 *puVar2;
  bool bVar3;
  int iVar4;
  double dVar5;
  float fVar6;
  undefined1 local_15;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__WorldMaster_Update_mA51BB90FC12CED5E410106F6744ACBA5B9F421F9;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  ExceptionList = &pvStack_10;
  puVar2 = &stack0xffffffc0;
  if (DAT_1151c944 == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var);
    DAT_1151c944 = '\x01';
    puVar2 = local_14;
  }
  local_14 = puVar2;
  local_15 = 0;
  if (DAT_1151c942 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var
              );
    DAT_1151c942 = '\x01';
  }
  if ((UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->has_cctor
       != '\0') &&
     (UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->
      cctor_finished == 0)) {
    il2cpp_runtime_class_init
              (UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var);
  }
  if (DAT_1151c8c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var
              );
    DAT_1151c8c5 = '\x01';
  }
  iVar4 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0((MethodInfo *)0x0);
  if ((UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->has_cctor
       != '\0') &&
     (UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->
      cctor_finished == 0)) {
    il2cpp_runtime_class_init
              (UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var);
  }
  if (iVar4 != *(int *)((int)UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var
                             ->static_fields + 4)) {
    if ((UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->has_cctor
         != '\0') &&
       (UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->
        cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var);
    }
    if (*(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 **)
         UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->
         static_fields == (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)0x0)
    goto LAB_103f9066;
    Stopwatch_Restart_mCACD336DA0A4A8BF67F2E74C9C2DA93484047D3B
              (*(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 **)
                UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->
                static_fields,(MethodInfo *)0x0);
    *(int *)((int)UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->
                  static_fields + 4) = iVar4;
  }
  fVar6 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84((MethodInfo *)0x0);
  fVar6 = (float)((uint)fVar6 ^ __xmm_80000000800000008000000080000000);
  dVar5 = (double)(fVar6 * ___real_40a00000);
  _libm_sse2_exp_precise();
  *(float *)((int)WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var->
                  static_fields + 4) = (float)dVar5;
  dVar5 = (double)(fVar6 * ___real_41300000);
  _libm_sse2_exp_precise();
  *(float *)((int)WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var->
                  static_fields + 8) = (float)dVar5;
  dVar5 = (double)(fVar6 * ___real_41880000);
  _libm_sse2_exp_precise();
  *(float *)((int)WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var->
                  static_fields + 0xc) = (float)dVar5;
  dVar5 = (double)(fVar6 * ___real_41a80000);
  _libm_sse2_exp_precise();
  *(float *)((int)WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var->
                  static_fields + 0x10) = (float)dVar5;
  param_1->___pause_51 = false;
  if (0x12 < param_1->___state_57) {
    if (param_1->___waveFunctionCollapse_10 ==
        (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *)0x0) goto LAB_103f9066;
    WaveFunctionCollapse_LaterUpdate_mEC567391A3F73207189D4A88AF7EE72C7819D49A
              (param_1->___waveFunctionCollapse_10,(MethodInfo *)0x0);
    if (param_1->___lastChangeTime_60 <= ___real_00000000) {
LAB_103f8e90:
      fVar6 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
      if (param_1->___lastStartChangeTime_61 + ___real_41700000 < fVar6) goto LAB_103f8eb7;
    }
    else {
      fVar6 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
      if (fVar6 <= param_1->___lastChangeTime_60 + __real_40000000) goto LAB_103f8e90;
      fVar6 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
      if (fVar6 <= param_1->___lastStartChangeTime_61 + __real_41200000) goto LAB_103f8e90;
LAB_103f8eb7:
      if (param_1->___saveSystem_35 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)
      goto LAB_103f9066;
      SaveSystem_MaybeSaveCurrent_m6D4D92DDAB91A3F5EB58F6180E5B93B746F5B2D3
                (param_1->___saveSystem_35,(MethodInfo *)0x0);
    }
    if (param_1->___saveSystem_35 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)
    goto LAB_103f9066;
    SaveSystem_MaybeSaveSettings_mF1FD0D97C328223744996634EC08D16CDCD3FD01
              (param_1->___saveSystem_35,10.0,(MethodInfo *)0x0);
  }
  bVar3 = WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9(param_1,(MethodInfo *)0x0)
  ;
  if (bVar3) {
    pLVar1 = param_1->___stateStrings_58;
    if (pLVar1 != (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) {
      if ((uint)pLVar1->____size_2 <= (uint)param_1->___state_57) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)&local_15,
                 (MethodInfo *)pLVar1->____items_1->m_Items[param_1->___state_57]);
      local_8 = 0;
      bVar3 = WorldMaster_Iterate_mAB1D38EDB8394C82044F067D5E245C0CD7D91844
                        (param_1,(MethodInfo *)0x0);
      local_8 = 0xffffffff;
      if (bVar3) {
        FUN_103f8fa8();
        return;
      }
      FUN_103f8fa8();
      return;
    }
  }
  else {
    if (0x12 < param_1->___state_57) {
      if (param_1->___waveFunctionCollapse_10 ==
          (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *)0x0) goto LAB_103f9066;
      WaveFunctionCollapse_LaterUpdate_mEC567391A3F73207189D4A88AF7EE72C7819D49A
                (param_1->___waveFunctionCollapse_10,(MethodInfo *)0x0);
    }
    if (param_1->___flock_21 != (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *)0x0) {
      BirdFlock_OnUpdate_m2AB5A63F1903F87173EB103C40C42F276829D78E
                (param_1->___flock_21,(MethodInfo *)0x0);
      if (param_1->___butterflyFlock_30 !=
          (ButterflyFlock_t232314275686A150CB7BF02C9493FBAB75C6DDFD *)0x0) {
        ButterflyFlock_OnUpdate_mC9722E8936069B6D6F6355C7720DAECA0EF39F0A
                  (param_1->___butterflyFlock_30,(MethodInfo *)0x0);
        if (param_1->___manySoundsManager_32 !=
            (ManySoundsManager_tC683AA822F4F7736E44162B15F0992C96CD684D6 *)0x0) {
          ManySoundsManager_OnUpdate_m767E2749F0A12DC7A9ACAD40E4271DB6CF98479C
                    (param_1->___manySoundsManager_32,(MethodInfo *)0x0);
          param_1->___startedCounting_41 = false;
          if (param_1->___stopwatch_40 != (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)0x0
             ) {
            Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63
                      (param_1->___stopwatch_40,(MethodInfo *)0x0);
            ExceptionList = pvStack_10;
            return;
          }
        }
      }
    }
  }
LAB_103f9066:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
