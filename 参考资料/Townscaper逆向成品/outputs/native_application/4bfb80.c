// RVA 0x4bfb80 | Placemaker.Ui.CreditsMenu$$Update
// PDB: CreditsMenu_Update_m1CE87234A0892BF970BAB5B84CB3CF1E2AEA5C3B
// Body: [[104bfb80, 104bffe1]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d13a0 AutoScroll_ChangeDirection_m463415D006A8DE9DF7D7743C1D917285753FD5D7
// 101d1420 AutoScroll_ResetTimer_m8C1E2E380D89E28F1AAA57A4DE2CF559FB482886
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 104beff0 CreditsMenu_Close_m8D29C2EC80917B0D8226C064ED5407FA7186E2AA
// 104bf180 CreditsMenu_MaybeUpdateScreenSize_m2342F013A0B59CE19FB5ECF3C78A102EC783C73C
// 104c46e0 Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
// 1066d8c0 Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0
// 1066d9d0 Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10875060 BetterScrollRect_GetScrollableSize_mA1A82514CE3585D7631C7228C4AC67E564676758
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43830 Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10a43af0 Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
// 10ed4b60 LayoutRebuilder_ForceRebuildLayoutImmediate_mD06D080BA3FC8111AF814FA67ED8764F8CFECC2C
// 10f1a250 Player_GetAnyButtonDown_m914E51A27FEE5F7C6CDB812F96E194BF44EF944E
// 10f1c7d0 Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
// 10f1d410 Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
// 10f1f180 Player_GetButtonUp_m9522F0879526E6DECFA1ACA80B45B5F8ADFD9364
// 10f21de0 Player_GetNegativeButtonUp_m04B037622B94C19C563171BB1758F48889CAE8FF

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
CreditsMenu_Update_m1CE87234A0892BF970BAB5B84CB3CF1E2AEA5C3B
          (CreditsMenu_tE101B90DEBA1E200189C86C0CFA340BA4872BB12 *param_1,MethodInfo *param_2)

{
  AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *pAVar1;
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar2;
  Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *pDVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar7;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar8;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar9;
  float fVar10;
  float fVar11;

  if (DAT_1151d100 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5C70E2DF6C4DF3077BF0E77F8FC2F3E1E6FE697B);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5D801DA57C7CA80192EC3DFD6B4E7AAB80B67CA7);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA23E48142038CF1CD099CB5392A499B251831409);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA9753FAA8F290A9AAF4381B61383AC2B2A23CC39);
    DAT_1151d100 = '\x01';
  }
  if (param_1->___openState_5 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
  goto LAB_104bffdd;
  bVar4 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                    (param_1->___openState_5,(MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  if (DAT_1151d0ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    DAT_1151d0ff = '\x01';
  }
  iVar6 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0((MethodInfo *)0x0);
  if (param_1->___openingFrame_11 < iVar6) {
    bVar4 = (param_1->___autoScroll_10).___U3CspeedIsSetU3Ek__BackingField_1 == false;
  }
  else {
    bVar4 = false;
  }
  bVar5 = CreditsMenu_MaybeUpdateScreenSize_m2342F013A0B59CE19FB5ECF3C78A102EC783C73C
                    (param_1,(MethodInfo *)0x0);
  if (bVar5 || bVar4) {
    if (param_1->___scrollRect_6 ==
        (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)0x0) goto LAB_104bffdd;
    pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___scrollRect_6,(MethodInfo *)0x0);
    if ((LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585_il2cpp_TypeInfo_var->
        cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585_il2cpp_TypeInfo_var);
    }
    pRVar8 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
    if ((pTVar7 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
       (*(Il2CppClass **)pTVar7 ==
        RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)) {
      pRVar8 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar7;
    }
    LayoutRebuilder_ForceRebuildLayoutImmediate_mD06D080BA3FC8111AF814FA67ED8764F8CFECC2C
              (pRVar8,(MethodInfo *)0x0);
    if (param_1->___scrollRect_6 ==
        (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)0x0) goto LAB_104bffdd;
    VVar9 = BetterScrollRect_GetScrollableSize_mA1A82514CE3585D7631C7228C4AC67E564676758
                      (param_1->___scrollRect_6,(MethodInfo *)0x0);
    fVar10 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
                       (VVar9.___y_1 * ___real_37d6bf95,0.035,0.05,(MethodInfo *)0x0);
    (param_1->___autoScroll_10).___U3CspeedU3Ek__BackingField_2 = fVar10;
    (param_1->___autoScroll_10).___U3CspeedIsSetU3Ek__BackingField_1 = true;
  }
  if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
     (pPVar2 = param_1->___master_4->___player_43,
     pPVar2 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) goto LAB_104bffdd;
  fVar10 = Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
                     (pPVar2,_stringLiteralA9753FAA8F290A9AAF4381B61383AC2B2A23CC39,
                      (MethodInfo *)0x0);
  if (__real_3dcccccd < (float)((uint)fVar10 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar11 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84((MethodInfo *)0x0)
    ;
    if (param_1->___scrollRect_6 ==
        (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)0x0) goto LAB_104bffdd;
    fVar10 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                       (fVar11 * fVar10 * ___real_3eb33333 * __real_bf800000 +
                        (param_1->___scrollRect_6->___normPosTarget_8).___y_1,(MethodInfo *)0x0);
    if (param_1->___scrollRect_6 ==
        (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)0x0) goto LAB_104bffdd;
    (param_1->___scrollRect_6->___normPosTarget_8).___y_1 = fVar10;
    (param_1->___autoScroll_10).___U3CisActiveU3Ek__BackingField_0 = false;
  }
  if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
     (pPVar2 = param_1->___master_4->___player_43,
     pPVar2 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) goto LAB_104bffdd;
  bVar4 = Player_GetAnyButtonDown_m914E51A27FEE5F7C6CDB812F96E194BF44EF944E
                    (pPVar2,(MethodInfo *)0x0);
  if (bVar4) {
    if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
       (pPVar2 = param_1->___master_4->___player_43,
       pPVar2 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) goto LAB_104bffdd;
    bVar4 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                      (pPVar2,_stringLiteral5C70E2DF6C4DF3077BF0E77F8FC2F3E1E6FE697B,
                       (MethodInfo *)0x0);
    if (!bVar4) {
      if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
         (pPVar2 = param_1->___master_4->___player_43,
         pPVar2 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) goto LAB_104bffdd;
      bVar4 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                        (pPVar2,_stringLiteralA23E48142038CF1CD099CB5392A499B251831409,
                         (MethodInfo *)0x0);
      if (!bVar4) {
        if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
           (pPVar2 = param_1->___master_4->___player_43,
           pPVar2 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) goto LAB_104bffdd;
        bVar4 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                          (pPVar2,_stringLiteral5D801DA57C7CA80192EC3DFD6B4E7AAB80B67CA7,
                           (MethodInfo *)0x0);
        if (bVar4) {
          if (param_1->___openState_5 ==
              (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_104bffdd;
          UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                    (param_1->___openState_5,false,(MethodInfo *)0x0);
          if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
             (pDVar3 = param_1->___master_4->___dim_10,
             pDVar3 == (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) goto LAB_104bffdd;
          Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7(pDVar3,0,(MethodInfo *)0x0);
        }
        goto LAB_104bfe89;
      }
    }
    CreditsMenu_Close_m8D29C2EC80917B0D8226C064ED5407FA7186E2AA(param_1,(MethodInfo *)0x0);
  }
LAB_104bfe89:
  if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
     (pPVar2 = param_1->___master_4->___player_43,
     pPVar2 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) goto LAB_104bffdd;
  bVar4 = Player_GetButtonUp_m9522F0879526E6DECFA1ACA80B45B5F8ADFD9364
                    (pPVar2,_stringLiteralA9753FAA8F290A9AAF4381B61383AC2B2A23CC39,(MethodInfo *)0x0
                    );
  if (bVar4) {
LAB_104bfee5:
    (param_1->___autoScroll_10).___U3CisActiveU3Ek__BackingField_0 = true;
    AutoScroll_ResetTimer_m8C1E2E380D89E28F1AAA57A4DE2CF559FB482886
              (&param_1->___autoScroll_10,10.0,(MethodInfo *)0x0);
  }
  else {
    if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
       (pPVar2 = param_1->___master_4->___player_43,
       pPVar2 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) goto LAB_104bffdd;
    bVar4 = Player_GetNegativeButtonUp_m04B037622B94C19C563171BB1758F48889CAE8FF
                      (pPVar2,_stringLiteralA9753FAA8F290A9AAF4381B61383AC2B2A23CC39,
                       (MethodInfo *)0x0);
    if (bVar4) goto LAB_104bfee5;
  }
  fVar10 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
  if (fVar10 < (param_1->___autoScroll_10).___U3CtimeU3Ek__BackingField_3) {
    return;
  }
  pAVar1 = &param_1->___autoScroll_10;
  if ((param_1->___autoScroll_10).___U3CisActiveU3Ek__BackingField_0 == false) {
LAB_104bffc4:
    AutoScroll_ResetTimer_m8C1E2E380D89E28F1AAA57A4DE2CF559FB482886(pAVar1,5.0,(MethodInfo *)0x0);
    return;
  }
  if (param_1->___scrollRect_6 != (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)0x0)
  {
    bVar4 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55
                      ((param_1->___scrollRect_6->___normPosTarget_8).___y_1,
                       (param_1->___autoScroll_10).___U3CtargetPositionU3Ek__BackingField_4,
                       (MethodInfo *)0x0);
    if (bVar4) {
      if (pAVar1->___U3CisActiveU3Ek__BackingField_0 != false) {
        AutoScroll_ChangeDirection_m463415D006A8DE9DF7D7743C1D917285753FD5D7
                  (pAVar1,(MethodInfo *)0x0);
      }
      goto LAB_104bffc4;
    }
    fVar10 = (param_1->___autoScroll_10).___U3CdirectionU3Ek__BackingField_5;
    fVar11 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84((MethodInfo *)0x0)
    ;
    if (param_1->___scrollRect_6 !=
        (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)0x0) {
      fVar10 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                         (fVar11 * fVar10 *
                          (param_1->___autoScroll_10).___U3CspeedU3Ek__BackingField_2 +
                          (param_1->___scrollRect_6->___normPosTarget_8).___y_1,(MethodInfo *)0x0);
      if (param_1->___scrollRect_6 !=
          (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)0x0) {
        (param_1->___scrollRect_6->___normPosTarget_8).___y_1 = fVar10;
        return;
      }
    }
  }
LAB_104bffdd:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
