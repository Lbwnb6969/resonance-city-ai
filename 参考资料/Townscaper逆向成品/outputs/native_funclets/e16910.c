// RVA 0xe16910 | Recovered.function.called_by_e162a0
// PDB: FUN_10e16910
// Body: [[10e16910, 10e172cb] [10e172d4, 10e172db]]
// Direct callees:
// 10068ec0 List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
// 10068f50 List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
// 10069330 List_1_get_Item_m3923EAB2EC6624334DD50618C8C65B37CBF04BEF_inline
// 101280f0 il2cpp_runtime_class_init
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10227350 Dictionary_2_get_Item_mE1B2F7062D22B64BA21A5518CF0DE2A35A7B2E36_gshared
// 1040e0d0 HexMath_RotateCW2_mD1082E727BC8D5F3EA036E2B6B8F0397D09AF1DB
// 10836d80 ExtraMath_Rotate2D180_mCBAB607481B3DBAFDD1F1EA608747A4B1CCF66CC
// 10836dc0 ExtraMath_Rotate2D270_m00D4CDB2568A3FC8E82C02FDC757C2F4E43BE847
// 10836df0 ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
// 10957bb0 Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared
// 10e0ec40 math_normalize_mE8F2347FAC9C185C8F233533AA5CDCEB995F0718_inline
// 10e10e90 GridGenerator_GetPatchOffset_m025E033F6EF8E282C9DC571A2001949E6E73511D
// 10e1faf0 GridGenerator_UnmotivateClusterChildren_mB300EC8BB32EA947A751C1D01217C12F2DE58F33
// 11087e60 List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
// 1108ddc0 List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared

void FUN_10e16910(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  HexCluster_tBF30C42359904C9666E094787C2C4DB5F36A5C9B *pHVar3;
  Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *pDVar4;
  List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *pLVar5;
  undefined4 uVar6;
  List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *pLVar7;
  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *pLVar8;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar9;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar10;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar11;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar12;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar13;
  MethodInfo *pMVar14;
  bool bVar15;
  ushort uVar17;
  byte bVar16;
  ushort uVar18;
  Il2CppObject *pIVar19;
  Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *pFVar20;
  Il2CppClass *pIVar21;
  int iVar22;
  int iVar23;
  int unaff_EBX;
  int unaff_EBP;
  GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *unaff_ESI;
  int iVar24;
  int iVar25;
  int unaff_EDI;
  GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *pGVar26;
  float fVar27;
  float fVar28;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar29;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar30;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar31;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x2d),
             (MethodInfo *)0x0);
  if (*(Exception_t **)(unaff_EBP + -0x3c) != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x3c),(MethodInfo *)0x0);
  }
  if ((unaff_EDI == 0) || (*(int *)(unaff_EBP + -0x9c + unaff_EDI * 4) != 0x5f1)) {
    pHVar3 = *(HexCluster_tBF30C42359904C9666E094787C2C4DB5F36A5C9B **)(unaff_EBX + 0xc);
    if (pHVar3->___relaxationSteps_2 == 0xff) {
      GridGenerator_UnmotivateClusterChildren_mB300EC8BB32EA947A751C1D01217C12F2DE58F33
                (unaff_ESI,pHVar3,(MethodInfo *)0x0);
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      pHVar3->___done_4 = true;
      return;
    }
    iVar24 = *(int *)(unaff_EBX + 0xc);
    pGVar26 = *(GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 **)(unaff_EBX + 8);
    iVar29 = GridGenerator_GetPatchOffset_m025E033F6EF8E282C9DC571A2001949E6E73511D
                       (pGVar26,*(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)(iVar24 + 8),
                        (MethodInfo *)0x0);
    iVar25 = *(int *)(iVar24 + 8);
    *(int *)(unaff_EBP + -0x24) = iVar29.___x_0;
    iVar22 = *(int *)(iVar24 + 0xc);
    *(int *)(unaff_EBP + -0x34) = iVar29.___y_1;
    if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)pGVar26->___patchDict_10 !=
        (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
      iVar29.___y_1 = iVar22 + *(int *)(unaff_EBP + -0x34);
      iVar29.___x_0 = iVar25 + *(int *)(unaff_EBP + -0x24);
      pIVar19 = Dictionary_2_get_Item_mE1B2F7062D22B64BA21A5518CF0DE2A35A7B2E36_gshared
                          ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                           pGVar26->___patchDict_10,iVar29,
                           Dictionary_2_get_Item_m8E7431B030DD0D30A3B90BC0E64E08576AE76DBE_RuntimeMethod_var
                          );
      pIVar21 = HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var;
      *(Il2CppObject **)(unaff_EBP + -0x4c) = pIVar19;
      if ((pIVar21->has_cctor != '\0') && (pIVar21->cctor_finished == 0)) {
        il2cpp_runtime_class_init(pIVar21);
      }
      iVar11.___y_1 = *(int *)(unaff_EBP + -0x34);
      iVar11.___x_0 = *(int *)(unaff_EBP + -0x24);
      iVar29 = HexMath_RotateCW2_mD1082E727BC8D5F3EA036E2B6B8F0397D09AF1DB(iVar11,(MethodInfo *)0x0)
      ;
      pDVar4 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)pGVar26->___patchDict_10;
      *(int *)(unaff_EBP + -0x24) = iVar29.___x_0;
      iVar25 = *(int *)(iVar24 + 0xc);
      *(int *)(unaff_EBP + -0x34) = iVar29.___y_1;
      if (pDVar4 != (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
        iVar12.___y_1 = iVar25 + *(int *)(unaff_EBP + -0x34);
        iVar12.___x_0 = *(int *)(unaff_EBP + -0x24) + *(int *)(iVar24 + 8);
        pIVar19 = Dictionary_2_get_Item_mE1B2F7062D22B64BA21A5518CF0DE2A35A7B2E36_gshared
                            (pDVar4,iVar12,
                             Dictionary_2_get_Item_m8E7431B030DD0D30A3B90BC0E64E08576AE76DBE_RuntimeMethod_var
                            );
        *(Il2CppObject **)(unaff_EBP + -0x9c) = pIVar19;
        iVar9.___y_1 = *(int *)(unaff_EBP + -0x34);
        iVar9.___x_0 = *(int *)(unaff_EBP + -0x24);
        iVar29 = HexMath_RotateCW2_mD1082E727BC8D5F3EA036E2B6B8F0397D09AF1DB
                           (iVar9,(MethodInfo *)0x0);
        if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)pGVar26->___patchDict_10 !=
            (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
          iVar13.___y_1 = iVar29.___y_1 + *(int *)(iVar24 + 0xc);
          iVar13.___x_0 = *(int *)(iVar24 + 8) + iVar29.___x_0;
          pIVar19 = Dictionary_2_get_Item_mE1B2F7062D22B64BA21A5518CF0DE2A35A7B2E36_gshared
                              ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                               pGVar26->___patchDict_10,iVar13,
                               Dictionary_2_get_Item_m8E7431B030DD0D30A3B90BC0E64E08576AE76DBE_RuntimeMethod_var
                              );
          *(Il2CppObject **)(unaff_EBP + -0x34) = pIVar19;
          iVar25 = *(int *)(iVar24 + 0x24);
          *(int *)(unaff_EBP + -0x3c) = iVar25;
          if (iVar25 != 0) {
            pLVar5 = pGVar26->___deltas_14;
            iVar25 = *(int *)(iVar25 + 0xc);
            *(int *)(unaff_EBP + -0x24) = iVar25;
            while (pLVar5 != (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)0x0) {
              if (iVar25 <= pLVar5->____size_2) {
                uVar1 = *(undefined8 *)(iVar24 + 0x14);
                *(undefined4 *)(unaff_EBP + -0xa0) = *(undefined4 *)(iVar24 + 0x1c);
                pFVar20 = *(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F **)(unaff_EBX + 0x10);
                *(undefined8 *)(unaff_EBP + -0xb8) = uVar1;
                if (pFVar20 != (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)0x0)
                goto LAB_10e16ad7;
                break;
              }
              *(undefined4 *)(unaff_EBP + -100) = 0;
              *(undefined4 *)(unaff_EBP + -0x60) = 0;
              if (pLVar5 == (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)0x0) break;
              List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                        (pLVar5,*(float2_tCB7B81181978EDE17722C533A55E345D9A413274 *)
                                 (unaff_EBP + -100),
                         List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_RuntimeMethod_var);
              iVar25 = *(int *)(unaff_EBP + -0x24);
              pLVar5 = pGVar26->___deltas_14;
            }
          }
        }
      }
    }
LAB_10e172c7:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
LAB_10e16562:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
LAB_10e16ad7:
  while ((bVar15 = Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared
                             (pFVar20,
                              Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var
                             ), bVar15 && (*(char *)(iVar24 + 0x11) != -1))) {
    iVar25 = *(int *)(unaff_EBP + -0x4c);
    *(char *)(iVar24 + 0x11) = *(char *)(iVar24 + 0x11) + '\x01';
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    do {
      if (iVar25 == 0) goto LAB_10e172c7;
      iVar22 = *(int *)(iVar25 + 0x14);
      uVar1 = *(undefined8 *)(unaff_EBP + -0xb8);
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar24 + 0x20);
      iVar23 = *(int *)(unaff_EBP + -0x9c);
      *(undefined4 *)(unaff_EBP + -0x9c) = *(undefined4 *)(unaff_EBP + -0x34);
      *(int *)(unaff_EBP + -0x34) = iVar25;
      uVar6 = *(undefined4 *)(unaff_EBP + -0xb8);
      *(undefined4 *)(unaff_EBP + -0xb8) = *(undefined4 *)(unaff_EBP + -0xb4);
      *(undefined4 *)(unaff_EBP + -0xb4) = *(undefined4 *)(unaff_EBP + -0xa0);
      iVar25 = 0;
      *(int *)(unaff_EBP + -0xa4) = iVar22;
      *(int *)(unaff_EBP + -0x4c) = iVar23;
      *(undefined4 *)(unaff_EBP + -0x50) = uVar6;
      *(undefined8 *)(unaff_EBP + -0x94) = uVar1;
      *(undefined4 *)(unaff_EBP + -0xa0) = uVar6;
      if (iVar22 == 0) goto LAB_10e172c7;
      iVar22 = *(int *)(iVar22 + 0xc);
      *(int *)(unaff_EBP + -0x170) = iVar22;
      if (0 < iVar22) {
        do {
          pLVar7 = *(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF **)(unaff_EBP + -0xa4);
          bVar16 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                             (pLVar7,iVar25,
                              List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                             );
          if (*(List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 **)(unaff_EBP + -0x20) ==
              (List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *)0x0) goto LAB_10e172c7;
          uVar17 = List_1_get_Item_m3923EAB2EC6624334DD50618C8C65B37CBF04BEF_inline
                             (*(List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 **)
                               (unaff_EBP + -0x20),(uint)bVar16 + *(int *)(unaff_EBP + -0x50),
                              List_1_get_Item_m09CA40A5136306FEEFD7553315B567BB4724F33C_RuntimeMethod_var
                             );
          pMVar14 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var;
          *(uint *)(unaff_EBP + -0x48) = (uint)uVar17;
          bVar16 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                             (pLVar7,iVar25 + 1,pMVar14);
          uVar17 = List_1_get_Item_m3923EAB2EC6624334DD50618C8C65B37CBF04BEF_inline
                             (*(List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 **)
                               (unaff_EBP + -0x20),(uint)bVar16 + *(int *)(unaff_EBP + -0x50),
                              List_1_get_Item_m09CA40A5136306FEEFD7553315B567BB4724F33C_RuntimeMethod_var
                             );
          pMVar14 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var;
          *(uint *)(unaff_EBP + -0x54) = (uint)uVar17;
          bVar16 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                             (pLVar7,iVar25 + 2,pMVar14);
          uVar17 = List_1_get_Item_m3923EAB2EC6624334DD50618C8C65B37CBF04BEF_inline
                             (*(List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 **)
                               (unaff_EBP + -0x20),(uint)bVar16 + *(int *)(unaff_EBP + -0x50),
                              List_1_get_Item_m09CA40A5136306FEEFD7553315B567BB4724F33C_RuntimeMethod_var
                             );
          pMVar14 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var;
          *(int *)(unaff_EBP + -0x16c) = iVar25 + 4;
          bVar16 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                             (*(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF **)
                               (unaff_EBP + -0xa4),iVar25 + 3,pMVar14);
          uVar18 = List_1_get_Item_m3923EAB2EC6624334DD50618C8C65B37CBF04BEF_inline
                             (*(List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 **)
                               (unaff_EBP + -0x20),(uint)bVar16 + *(int *)(unaff_EBP + -0x50),
                              List_1_get_Item_m09CA40A5136306FEEFD7553315B567BB4724F33C_RuntimeMethod_var
                             );
          pMVar14 = List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var;
          iVar25 = (int)(short)*(undefined4 *)(unaff_EBP + -0x48);
          *(int *)(unaff_EBP + -0x58) = iVar25;
          VVar30 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                             (*(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 **)
                               (unaff_EBP + -0x3c),iVar25,pMVar14);
          pMVar14 = List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var;
          iVar25 = (int)(short)*(undefined4 *)(unaff_EBP + -0x54);
          *(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(unaff_EBP + -0xac) = VVar30;
          *(int *)(unaff_EBP + -0x5c) = iVar25;
          VVar30 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                             (*(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 **)
                               (unaff_EBP + -0x3c),iVar25,pMVar14);
          pMVar14 = List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var;
          pLVar8 = *(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 **)(unaff_EBP + -0x3c);
          *(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(unaff_EBP + -100) = VVar30;
          *(int *)(unaff_EBP + -0x54) = (int)(short)uVar17;
          VVar30 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                             (pLVar8,(int)(short)uVar17,pMVar14);
          pMVar14 = List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var;
          *(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(unaff_EBP + -0x6c) = VVar30;
          *(int *)(unaff_EBP + -0x48) = (int)(short)uVar18;
          VVar30 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                             (pLVar8,(int)(short)uVar18,pMVar14);
          pIVar21 = ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var;
          *(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(unaff_EBP + -0x74) = VVar30;
          fVar27 = (*(float *)(unaff_EBP + -100) + *(float *)(unaff_EBP + -0xac) +
                    *(float *)(unaff_EBP + -0x6c) + *(float *)(unaff_EBP + -0x74)) * __real_3e800000
          ;
          fVar28 = (*(float *)(unaff_EBP + -0x60) + *(float *)(unaff_EBP + -0xa8) +
                    *(float *)(unaff_EBP + -0x68) + *(float *)(unaff_EBP + -0x70)) * __real_3e800000
          ;
          *(float *)(unaff_EBP + -0x38) = fVar27;
          *(float *)(unaff_EBP + -0x28) = fVar28;
          *(float *)(unaff_EBP + -0x1c) = *(float *)(unaff_EBP + -0xac) - fVar27;
          *(float *)(unaff_EBP + -0x40) = *(float *)(unaff_EBP + -0xa8) - fVar28;
          *(float *)(unaff_EBP + -0xc0) = *(float *)(unaff_EBP + -100) - fVar27;
          *(float *)(unaff_EBP + -0xbc) = *(float *)(unaff_EBP + -0x60) - fVar28;
          if ((pIVar21->has_cctor != '\0') && (pIVar21->cctor_finished == 0)) {
            il2cpp_runtime_class_init(pIVar21);
          }
          fVar31 = ExtraMath_Rotate2D270_m00D4CDB2568A3FC8E82C02FDC757C2F4E43BE847
                             (*(float2_tCB7B81181978EDE17722C533A55E345D9A413274 *)
                               (unaff_EBP + -0xc0),(MethodInfo *)0x0);
          fVar27 = *(float *)(unaff_EBP + -200);
          *(float2_tCB7B81181978EDE17722C533A55E345D9A413274 *)(unaff_EBP + -200) = fVar31;
          *(float *)(unaff_EBP + -0xd0) =
               *(float *)(unaff_EBP + -0x6c) - *(float *)(unaff_EBP + -0x38);
          *(float *)(unaff_EBP + -0x1c) = *(float *)(unaff_EBP + -0x1c) + fVar27;
          *(float *)(unaff_EBP + -0x40) =
               *(float *)(unaff_EBP + -0x40) + *(float *)(unaff_EBP + -0xc4);
          *(float *)(unaff_EBP + -0xcc) =
               *(float *)(unaff_EBP + -0x68) - *(float *)(unaff_EBP + -0x28);
          fVar31 = ExtraMath_Rotate2D180_mCBAB607481B3DBAFDD1F1EA608747A4B1CCF66CC
                             (*(float2_tCB7B81181978EDE17722C533A55E345D9A413274 *)
                               (unaff_EBP + -0xd0),(MethodInfo *)0x0);
          fVar27 = *(float *)(unaff_EBP + -0xd8);
          *(float2_tCB7B81181978EDE17722C533A55E345D9A413274 *)(unaff_EBP + -0xd8) = fVar31;
          *(float *)(unaff_EBP + -0xe0) =
               *(float *)(unaff_EBP + -0x74) - *(float *)(unaff_EBP + -0x38);
          *(float *)(unaff_EBP + -0x1c) = fVar27 + *(float *)(unaff_EBP + -0x1c);
          *(float *)(unaff_EBP + -0x40) =
               *(float *)(unaff_EBP + -0xd4) + *(float *)(unaff_EBP + -0x40);
          *(float *)(unaff_EBP + -0xdc) =
               *(float *)(unaff_EBP + -0x70) - *(float *)(unaff_EBP + -0x28);
          VVar30 = ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
                             (*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)
                               (unaff_EBP + -0xe0),(MethodInfo *)0x0);
          *(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(unaff_EBP + -0xe8) = VVar30;
          *(float *)(unaff_EBP + -0xec) =
               *(float *)(unaff_EBP + -0xe4) + *(float *)(unaff_EBP + -0x40);
          *(float *)(unaff_EBP + -0xf0) =
               *(float *)(unaff_EBP + -0xe8) + *(float *)(unaff_EBP + -0x1c);
          fVar31.___y_1 = *(float *)(unaff_EBP + -0xec);
          fVar31.___x_0 = *(float *)(unaff_EBP + -0xf0);
          fVar31 = math_normalize_mE8F2347FAC9C185C8F233533AA5CDCEB995F0718_inline
                             (fVar31,(MethodInfo *)0x0);
          pIVar21 = GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var;
          *(float2_tCB7B81181978EDE17722C533A55E345D9A413274 *)(unaff_EBP + -0xf8) = fVar31;
          if ((pIVar21->has_cctor != '\0') && (pIVar21->cctor_finished == 0)) {
            il2cpp_runtime_class_init(pIVar21);
            pIVar21 = GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var;
          }
          pGVar26 = *(GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 **)(unaff_EBX + 8);
          pLVar8 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pGVar26->___deltas_14;
          fVar28 = *(float *)pIVar21->static_fields * *(float *)(unaff_EBP + -0xf8);
          fVar27 = *(float *)pIVar21->static_fields * *(float *)(unaff_EBP + -0xf4);
          *(float *)(unaff_EBP + -0x40) = fVar28;
          *(float *)(unaff_EBP + -0x88) = fVar28;
          *(float *)(unaff_EBP + -0x1c) = fVar27;
          *(float *)(unaff_EBP + -0x84) = fVar27;
          if (pLVar8 == (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0) goto LAB_10e172c7;
          VVar30 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                             (pLVar8,*(int *)(unaff_EBP + -0x58),
                              List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                             );
          pMVar14 = List_1_set_Item_mBF58896A1D4FE03DDF216AD7F78706A915F8878B_RuntimeMethod_var;
          fVar27 = *(float *)(unaff_EBP + -0x100);
          *(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(unaff_EBP + -0x100) = VVar30;
          *(float *)(unaff_EBP + -0x108) =
               fVar27 + ((*(float *)(unaff_EBP + -0x38) + *(float *)(unaff_EBP + -0x40)) -
                        *(float *)(unaff_EBP + -0xac));
          *(float *)(unaff_EBP + -0x104) =
               *(float *)(unaff_EBP + -0xfc) +
               ((*(float *)(unaff_EBP + -0x28) + *(float *)(unaff_EBP + -0x1c)) -
               *(float *)(unaff_EBP + -0xa8));
          List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                    (pLVar8,*(int *)(unaff_EBP + -0x58),
                     *(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(unaff_EBP + -0x108),
                     pMVar14);
          pLVar8 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pGVar26->___deltas_14;
          *(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 **)(unaff_EBP + -0x58) = pLVar8;
          if (pLVar8 == (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0) goto LAB_10e172c7;
          VVar30 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                             (pLVar8,*(int *)(unaff_EBP + -0x5c),
                              List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                             );
          fVar28 = *(float *)(unaff_EBP + -0x84);
          *(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(unaff_EBP + -0x118) = VVar30;
          VVar30 = ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
                             (*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)
                               (unaff_EBP + -0x88),(MethodInfo *)0x0);
          pMVar14 = List_1_set_Item_mBF58896A1D4FE03DDF216AD7F78706A915F8878B_RuntimeMethod_var;
          fVar27 = *(float *)(unaff_EBP + -0x110);
          *(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(unaff_EBP + -0x110) = VVar30;
          *(float *)(unaff_EBP + -0x148) =
               *(float *)(unaff_EBP + -0x118) +
               ((*(float *)(unaff_EBP + -0x38) + fVar27) - *(float *)(unaff_EBP + -100));
          *(float *)(unaff_EBP + -0x144) =
               *(float *)(unaff_EBP + -0x114) +
               ((*(float *)(unaff_EBP + -0x28) + *(float *)(unaff_EBP + -0x10c)) -
               *(float *)(unaff_EBP + -0x60));
          List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                    (*(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 **)(unaff_EBP + -0x58),
                     *(int *)(unaff_EBP + -0x5c),
                     *(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(unaff_EBP + -0x148),
                     pMVar14);
          pLVar8 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pGVar26->___deltas_14;
          *(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 **)(unaff_EBP + -0x5c) = pLVar8;
          if (pLVar8 == (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0) goto LAB_10e172c7;
          VVar30 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                             (pLVar8,*(int *)(unaff_EBP + -0x54),
                              List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                             );
          *(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(unaff_EBP + -0x128) = VVar30;
          fVar10.___y_1 = fVar28;
          fVar10.___x_0 = *(float *)(unaff_EBP + -0x88);
          fVar31 = ExtraMath_Rotate2D180_mCBAB607481B3DBAFDD1F1EA608747A4B1CCF66CC
                             (fVar10,(MethodInfo *)0x0);
          pMVar14 = List_1_set_Item_mBF58896A1D4FE03DDF216AD7F78706A915F8878B_RuntimeMethod_var;
          fVar27 = *(float *)(unaff_EBP + -0x120);
          *(float2_tCB7B81181978EDE17722C533A55E345D9A413274 *)(unaff_EBP + -0x120) = fVar31;
          *(float *)(unaff_EBP + -0x130) =
               *(float *)(unaff_EBP + -0x128) +
               ((*(float *)(unaff_EBP + -0x38) + fVar27) - *(float *)(unaff_EBP + -0x6c));
          *(float *)(unaff_EBP + -300) =
               *(float *)(unaff_EBP + -0x124) +
               ((*(float *)(unaff_EBP + -0x28) + *(float *)(unaff_EBP + -0x11c)) -
               *(float *)(unaff_EBP + -0x68));
          List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                    (*(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 **)(unaff_EBP + -0x5c),
                     *(int *)(unaff_EBP + -0x54),
                     *(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(unaff_EBP + -0x130),
                     pMVar14);
          pLVar8 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pGVar26->___deltas_14;
          if (pLVar8 == (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0) goto LAB_10e172c7;
          VVar30 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                             (pLVar8,*(int *)(unaff_EBP + -0x48),
                              List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                             );
          *(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(unaff_EBP + -0x140) = VVar30;
          fVar31 = ExtraMath_Rotate2D270_m00D4CDB2568A3FC8E82C02FDC757C2F4E43BE847
                             (*(float2_tCB7B81181978EDE17722C533A55E345D9A413274 *)
                               (unaff_EBP + -0x88),(MethodInfo *)0x0);
          pMVar14 = List_1_set_Item_mBF58896A1D4FE03DDF216AD7F78706A915F8878B_RuntimeMethod_var;
          fVar27 = *(float *)(unaff_EBP + -0x138);
          *(float2_tCB7B81181978EDE17722C533A55E345D9A413274 *)(unaff_EBP + -0x138) = fVar31;
          *(float *)(unaff_EBP + -0x178) =
               *(float *)(unaff_EBP + -0x140) +
               ((*(float *)(unaff_EBP + -0x38) + fVar27) - *(float *)(unaff_EBP + -0x74));
          *(float *)(unaff_EBP + -0x174) =
               *(float *)(unaff_EBP + -0x13c) +
               ((*(float *)(unaff_EBP + -0x28) + *(float *)(unaff_EBP + -0x134)) -
               *(float *)(unaff_EBP + -0x70));
          List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                    (pLVar8,*(int *)(unaff_EBP + -0x48),
                     *(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(unaff_EBP + -0x178),
                     pMVar14);
          iVar25 = *(int *)(unaff_EBP + -0x16c);
        } while (iVar25 < *(int *)(unaff_EBP + -0x170));
        iVar23 = *(int *)(unaff_EBP + -0x4c);
      }
      iVar24 = *(int *)(unaff_EBX + 0xc);
      iVar22 = *(int *)(unaff_EBP + -0x2c) + 1;
      *(int *)(unaff_EBP + -0x2c) = iVar22;
      iVar25 = iVar23;
    } while (iVar22 < 3);
    pFVar20 = *(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F **)(unaff_EBX + 0x10);
    iVar25 = 0;
    if (0 < *(int *)(unaff_EBP + -0x24)) {
      do {
        VVar30 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                           (*(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 **)
                             (unaff_EBP + -0x3c),iVar25,
                            List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                           );
        pLVar8 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pGVar26->___deltas_14;
        *(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(unaff_EBP + -0x158) = VVar30;
        if (pLVar8 == (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0) goto LAB_10e172c7;
        VVar30 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                           (pLVar8,iVar25,
                            List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                           );
        pMVar14 = List_1_set_Item_mBF58896A1D4FE03DDF216AD7F78706A915F8878B_RuntimeMethod_var;
        fVar27 = *(float *)(unaff_EBP + -0x150) * __real_3ecccccd;
        *(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(unaff_EBP + -0x150) = VVar30;
        fVar28 = *(float *)(unaff_EBP + -0x14c) * __real_3ecccccd;
        *(float *)(unaff_EBP + -0x164) = *(float *)(unaff_EBP + -0x158) + fVar27;
        *(float *)(unaff_EBP + -0x160) = *(float *)(unaff_EBP + -0x154) + fVar28;
        List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                  (*(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 **)(unaff_EBP + -0x3c),iVar25,
                   *(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(unaff_EBP + -0x164),
                   pMVar14);
        pLVar8 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pGVar26->___deltas_14;
        *(undefined4 *)(unaff_EBP + -0x7c) = 0;
        iVar22 = iVar25 + 1;
        *(undefined4 *)(unaff_EBP + -0x78) = 0;
        if (pLVar8 == (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0) goto LAB_10e172c7;
        List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                  (pLVar8,iVar25,
                   *(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(unaff_EBP + -0x7c),
                   List_1_set_Item_mBF58896A1D4FE03DDF216AD7F78706A915F8878B_RuntimeMethod_var);
        iVar25 = iVar22;
      } while (iVar22 < *(int *)(unaff_EBP + -0x24));
      pFVar20 = *(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F **)(unaff_EBX + 0x10);
    }
    iVar24 = *(int *)(unaff_EBX + 0xc);
  }
  goto LAB_10e16562;
}
