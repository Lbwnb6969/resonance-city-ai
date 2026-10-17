// RVA 0xe10340 | Placemaker.GridGenerator$$GetAdjecentQuad
// PDB: GridGenerator_GetAdjecentQuad_m94BE2893CC50CBA14DB2DC7B8361A54360B6FDAA
// Body: [[10e10340, 10e105b8] [10e105c2, 10e105ed] [10e105f7, 10e10622] [10e1062c, 10e10657] [10e1065e, 10e1068a] [10e10691, 10e106c4] [10e106cb, 10e106fe] [10e10705, 10e1073a] [10e10741, 10e109b1]]
// Direct callees:
// 10068ec0 List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1040d9e0 HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e131d0 GridGenerator_HexToPatchHex_m76C2EC3C4EFBEF2BDE06D1E3238721BE5D57FD02

Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB * __cdecl
GridGenerator_GetAdjecentQuad_m94BE2893CC50CBA14DB2DC7B8361A54360B6FDAA
          (Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *__return_storage_ptr__,
          GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB param_2,MethodInfo *param_3)

{
  SemaphoreImpl *pSVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  MonitorData *pMVar7;
  Il2CppClass *pIVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar21;
  undefined3 uVar22;
  int iVar23;
  bool bVar24;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar25;
  byte bVar26;
  int iVar27;
  int iVar28;
  char *pcVar29;
  int iVar30;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar31;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar32;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_58;
  int local_4c;
  int iStack_48;
  float fStack_44;
  SemaphoreImpl *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  SemaphoreImpl *local_14;
  Il2CppObject *local_10;
  Il2CppObject *local_c;
  byte local_7;
  byte local_6;
  byte local_5;

  fVar10 = param_2.___p3_8.___x_0;
  if (DAT_11522673 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m58AABB44A11FAADEB67D43D2492E3EAF4D3710F4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_mC63137D5FA2A69BCC84781B1FC7639F5406175F7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var)
    ;
    DAT_11522673 = '\x01';
  }
  local_c = (Il2CppObject *)0x0;
  local_10 = (Il2CppObject *)0x0;
  memset(&__return_storage_ptr__->___quadIndex_0,'\0',0x44);
  iStack_48 = (param_2.___v3_4.___x_0 + param_2.___v0_1.___x_0) * 5 -
              (param_2.___v1_2.___x_0 + param_2.___v2_3.___x_0);
  iVar28 = (param_2.___v0_1.___y_1 + param_2.___v3_4.___y_1) * 5 -
           (param_2.___v1_2.___y_1 + param_2.___v2_3.___y_1);
  fStack_44 = 0.0;
  iVar27 = (iStack_48 >> 0x1f & 7U) + iStack_48;
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  iVar31.___y_1 = (int)((iVar28 >> 0x1f & 7U) + iVar28) >> 3;
  iVar31.___x_0 = iVar27 >> 3;
  piVar25 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                      (&local_58,iVar31,(MethodInfo *)0x0);
  uVar2 = piVar25->___x_0;
  uVar4 = piVar25->___y_1;
  uVar3 = piVar25->___x_0;
  uVar5 = piVar25->___y_1;
  fStack_44 = (float)piVar25->___z_2;
  fVar21.___y_1 = (float)(int)uVar4;
  fVar21.___x_0 = (float)(int)uVar2;
  fVar21.___z_2 = fStack_44;
  local_4c = uVar3;
  iStack_48 = uVar5;
  piVar25 = GridGenerator_HexToPatchHex_m76C2EC3C4EFBEF2BDE06D1E3238721BE5D57FD02
                      (&local_58,param_1,fVar21,(MethodInfo *)0x0);
  iVar31 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(*piVar25,(MethodInfo *)0x0);
  if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___patchDict_10 ==
      (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
LAB_10e109ad:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  bVar24 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                     ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                      param_1->___patchDict_10,iVar31,&local_c,
                      Dictionary_2_TryGetValue_mC63137D5FA2A69BCC84781B1FC7639F5406175F7_RuntimeMethod_var
                     );
  iVar27 = local_24;
  if (bVar24) {
    if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___bitDict_8 ==
        (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) goto LAB_10e109ad;
    bVar24 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                       ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                        param_1->___bitDict_8,iVar31,&local_10,
                        Dictionary_2_TryGetValue_m58AABB44A11FAADEB67D43D2492E3EAF4D3710F4_RuntimeMethod_var
                       );
    iVar27 = local_24;
    if (bVar24) {
      if (local_10 == (Il2CppObject *)0x0) goto LAB_10e109ad;
      if (*(char *)&local_10[3].field0_0x0 == '\x05') {
        if ((local_c == (Il2CppObject *)0x0) || (local_c[2].monitor == (MonitorData *)0x0))
        goto LAB_10e109ad;
        local_40 = ((local_c[2].monitor)->semaphore).m_Semaphore;
        fStack_44 = (float)((int)(local_40 + ((param_2._0_4_ & 0xff) - 0x14)) % (int)local_40);
        local_34 = 0;
        if (0 < (int)local_40) {
          do {
            local_24 = iVar27;
            local_14 = (SemaphoreImpl *)((local_34 + (int)fStack_44) % (int)local_40);
            if ((local_c == (Il2CppObject *)0x0) ||
               (pMVar7 = local_c[2].monitor, pMVar7 == (MonitorData *)0x0)) goto LAB_10e109ad;
            if ((pMVar7->semaphore).m_Semaphore <= local_14) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            local_5 = *(byte *)((int)&local_14[4].m_Handle + pMVar7->recursiveLockingCount);
            if ((local_c == (Il2CppObject *)0x0) ||
               (pMVar7 = local_c[2].monitor, pMVar7 == (MonitorData *)0x0)) goto LAB_10e109ad;
            pSVar1 = (SemaphoreImpl *)((int)&local_14->m_Handle + 1);
            if ((pMVar7->semaphore).m_Semaphore <= pSVar1) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            local_6 = *(byte *)((int)&pSVar1[4].m_Handle + pMVar7->recursiveLockingCount);
            if ((local_c == (Il2CppObject *)0x0) ||
               (pMVar7 = local_c[2].monitor, pMVar7 == (MonitorData *)0x0)) goto LAB_10e109ad;
            pSVar1 = (SemaphoreImpl *)((int)&local_14->m_Handle + 2);
            if ((pMVar7->semaphore).m_Semaphore <= pSVar1) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            local_7 = *(byte *)((int)&pSVar1[4].m_Handle + pMVar7->recursiveLockingCount);
            if ((local_c == (Il2CppObject *)0x0) ||
               (pMVar7 = local_c[2].monitor, pMVar7 == (MonitorData *)0x0)) goto LAB_10e109ad;
            pSVar1 = (SemaphoreImpl *)((int)&local_14->m_Handle + 3);
            if ((pMVar7->semaphore).m_Semaphore <= pSVar1) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            bVar6 = *(byte *)((int)&pSVar1[4].m_Handle + pMVar7->recursiveLockingCount);
            if ((local_c == (Il2CppObject *)0x0) ||
               (pIVar8 = local_c[3].field0_0x0.klass, pIVar8 == (Il2CppClass *)0x0))
            goto LAB_10e109ad;
            pcVar29 = (char *)(uint)local_5;
            if (pIVar8->namespaze <= pcVar29) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            local_24 = *(int *)(pIVar8->name + (int)pcVar29 * 8 + 0x10);
            local_18 = *(int *)(pIVar8->name + (int)pcVar29 * 8 + 0x14);
            if ((local_c == (Il2CppObject *)0x0) ||
               (pIVar8 = local_c[3].field0_0x0.klass, pIVar8 == (Il2CppClass *)0x0))
            goto LAB_10e109ad;
            pcVar29 = (char *)(uint)local_6;
            if (pIVar8->namespaze <= pcVar29) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            local_38 = *(int *)(pIVar8->name + (int)pcVar29 * 8 + 0x10);
            local_3c = *(int *)(pIVar8->name + (int)pcVar29 * 8 + 0x14);
            if ((local_c == (Il2CppObject *)0x0) ||
               (pIVar8 = local_c[3].field0_0x0.klass, pIVar8 == (Il2CppClass *)0x0))
            goto LAB_10e109ad;
            pcVar29 = (char *)(uint)local_7;
            if (pIVar8->namespaze <= pcVar29) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            local_28 = *(int *)(pIVar8->name + (int)pcVar29 * 8 + 0x10);
            local_2c = *(int *)(pIVar8->name + (int)pcVar29 * 8 + 0x14);
            if ((local_c == (Il2CppObject *)0x0) ||
               (pIVar8 = local_c[3].field0_0x0.klass, pIVar8 == (Il2CppClass *)0x0))
            goto LAB_10e109ad;
            pcVar29 = (char *)(uint)bVar6;
            if (pIVar8->namespaze <= pcVar29) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            local_30 = 0;
            local_1c = *(int *)(pIVar8->name + (int)pcVar29 * 8 + 0x10);
            local_20 = *(int *)(pIVar8->name + (int)pcVar29 * 8 + 0x14);
            iVar23 = local_38;
            iVar27 = local_24;
            iVar28 = local_3c;
            do {
              bVar26 = bVar6;
              iVar30 = iVar28;
              local_24 = iVar27;
              iVar27 = iVar23;
              bVar6 = local_5;
              iVar23 = local_28;
              iVar28 = local_2c;
              if ((((local_24 == param_2.___v0_1.___x_0) && (local_18 == param_2.___v0_1.___y_1)) &&
                  (iVar27 == param_2.___v3_4.___x_0)) && (iVar30 == param_2.___v3_4.___y_1)) {
                *(undefined4 *)__return_storage_ptr__ = 0;
                (__return_storage_ptr__->___p0_5).___x_0 = 0.0;
                (__return_storage_ptr__->___p0_5).___y_1 = 0.0;
                (__return_storage_ptr__->___p1_6).___x_0 = 0.0;
                (__return_storage_ptr__->___p1_6).___y_1 = 0.0;
                (__return_storage_ptr__->___p2_7).___x_0 = 0.0;
                (__return_storage_ptr__->___p2_7).___y_1 = 0.0;
                (__return_storage_ptr__->___p3_8).___x_0 = 0.0;
                (__return_storage_ptr__->___p3_8).___y_1 = 0.0;
                (__return_storage_ptr__->___v0_1).___x_0 = local_1c;
                (__return_storage_ptr__->___v0_1).___y_1 = local_20;
                (__return_storage_ptr__->___v1_2).___x_0 = local_24;
                (__return_storage_ptr__->___v1_2).___y_1 = local_18;
                (__return_storage_ptr__->___v2_3).___x_0 = iVar27;
                (__return_storage_ptr__->___v2_3).___y_1 = iVar30;
                (__return_storage_ptr__->___v3_4).___x_0 = local_28;
                (__return_storage_ptr__->___v3_4).___y_1 = local_2c;
                if ((local_10 != (Il2CppObject *)0x0) && (local_10[3].monitor != (MonitorData *)0x0)
                   ) {
                  VVar32 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                     ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                      local_10[3].monitor,(uint)bVar26,
                                      List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                     );
                  param_2.___p3_8.___x_0 = VVar32.___x_0;
                  fVar14 = param_2.___p3_8.___x_0;
                  param_2.___p3_8.___y_1 = VVar32.___y_1;
                  (__return_storage_ptr__->___p0_5).___x_0 = fVar10;
                  (__return_storage_ptr__->___p0_5).___y_1 = param_2.___p3_8.___y_1;
                  if ((local_10 != (Il2CppObject *)0x0) &&
                     (local_10[3].monitor != (MonitorData *)0x0)) {
                    VVar32 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                       ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                        local_10[3].monitor,(uint)local_5,
                                        List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                       );
                    param_2.___p3_8.___x_0 = VVar32.___x_0;
                    param_2.___p3_8.___y_1 = VVar32.___y_1;
                    (__return_storage_ptr__->___p1_6).___x_0 = fVar14;
                    (__return_storage_ptr__->___p1_6).___y_1 = param_2.___p3_8.___y_1;
                    if ((local_10 != (Il2CppObject *)0x0) &&
                       (local_10[3].monitor != (MonitorData *)0x0)) {
                      VVar32 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                         ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                          local_10[3].monitor,(uint)local_6,
                                          List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                         );
                      param_2.___p3_8.___y_1 = VVar32.___y_1;
                      (__return_storage_ptr__->___p2_7).___x_0 = param_2.___p3_8.___x_0;
                      (__return_storage_ptr__->___p2_7).___y_1 = param_2.___p3_8.___y_1;
                      if ((local_10 != (Il2CppObject *)0x0) &&
                         (local_10[3].monitor != (MonitorData *)0x0)) {
                        VVar32 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                           ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                            local_10[3].monitor,(uint)local_7,
                                            List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                           );
                        (__return_storage_ptr__->___p3_8).___x_0 = VVar32.___x_0;
                        (__return_storage_ptr__->___p3_8).___y_1 = VVar32.___y_1;
                        __return_storage_ptr__->___quadIndex_0 =
                             (uchar)((int)((int)&local_14->m_Handle + ((int)local_14 >> 0x1f & 3U))
                                    >> 2);
                        uVar22 = *(undefined3 *)&__return_storage_ptr__->field_0x1;
                        iVar27 = (__return_storage_ptr__->___v0_1).___x_0;
                        iVar28 = (__return_storage_ptr__->___v0_1).___y_1;
                        iVar23 = (__return_storage_ptr__->___v1_2).___x_0;
                        fVar10 = (__return_storage_ptr__->___p3_8).___y_1;
                        iVar30 = (__return_storage_ptr__->___v1_2).___y_1;
                        iVar9 = (__return_storage_ptr__->___v2_3).___x_0;
                        iVar11 = (__return_storage_ptr__->___v2_3).___y_1;
                        iVar12 = (__return_storage_ptr__->___v3_4).___x_0;
                        iVar13 = (__return_storage_ptr__->___v3_4).___y_1;
                        fVar14 = (__return_storage_ptr__->___p0_5).___x_0;
                        fVar15 = (__return_storage_ptr__->___p0_5).___y_1;
                        fVar16 = (__return_storage_ptr__->___p1_6).___x_0;
                        fVar17 = (__return_storage_ptr__->___p1_6).___y_1;
                        fVar18 = (__return_storage_ptr__->___p2_7).___x_0;
                        fVar19 = (__return_storage_ptr__->___p2_7).___y_1;
                        fVar20 = (__return_storage_ptr__->___p3_8).___x_0;
                        __return_storage_ptr__->___quadIndex_0 =
                             __return_storage_ptr__->___quadIndex_0;
                        *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar22;
                        (__return_storage_ptr__->___v0_1).___x_0 = iVar27;
                        (__return_storage_ptr__->___v0_1).___y_1 = iVar28;
                        (__return_storage_ptr__->___v1_2).___x_0 = iVar23;
                        (__return_storage_ptr__->___v1_2).___y_1 = iVar30;
                        (__return_storage_ptr__->___v2_3).___x_0 = iVar9;
                        (__return_storage_ptr__->___v2_3).___y_1 = iVar11;
                        (__return_storage_ptr__->___v3_4).___x_0 = iVar12;
                        (__return_storage_ptr__->___v3_4).___y_1 = iVar13;
                        (__return_storage_ptr__->___p0_5).___x_0 = fVar14;
                        (__return_storage_ptr__->___p0_5).___y_1 = fVar15;
                        (__return_storage_ptr__->___p1_6).___x_0 = fVar16;
                        (__return_storage_ptr__->___p1_6).___y_1 = fVar17;
                        (__return_storage_ptr__->___p2_7).___x_0 = fVar18;
                        (__return_storage_ptr__->___p2_7).___y_1 = fVar19;
                        (__return_storage_ptr__->___p3_8).___x_0 = fVar20;
                        (__return_storage_ptr__->___p3_8).___y_1 = fVar10;
                        return __return_storage_ptr__;
                      }
                    }
                  }
                }
                goto LAB_10e109ad;
              }
              local_5 = local_6;
              local_28 = local_1c;
              local_6 = local_7;
              local_30 = local_30 + 1;
              iVar9 = local_18;
              local_2c = local_20;
              local_20 = local_18;
              local_1c = local_24;
              local_18 = iVar30;
              local_7 = bVar26;
            } while (local_30 < 4);
            local_34 = local_34 + 4;
          } while (local_34 < (int)local_40);
        }
      }
    }
  }
  local_24 = iVar27;
  memset(&__return_storage_ptr__->___quadIndex_0,'\0',0x44);
  return __return_storage_ptr__;
}
