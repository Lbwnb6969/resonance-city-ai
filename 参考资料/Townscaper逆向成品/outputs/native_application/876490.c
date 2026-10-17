// RVA 0x876490 | Placemaker.Ui.BetterScrollRect$$UnityEngine.EventSystems.IEndDragHandler.OnEndDrag
// PDB: BetterScrollRect_UnityEngine_EventSystems_IEndDragHandler_OnEndDrag_mFD153D2965B1DC95CDFA01D6405B9D78BA5CFB76
// Body: [[10876490, 10876566] [1087656a, 10876656] [1087665d, 10876817]]
// Direct callees:
// 100547c0 List_1_get_Item_m05503F475DFF429174902337394B6C6DE3713CCD_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 101d1990 Context__ctor_m05CE0CDB31FF30D1963F60DC9ADD6BF213F365DD
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 10441630 DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// 105d1fe0 List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 108360d0 ExtraMath_Clamp01_mA0E4F5A88B54C564A4C6AEDB7ED05FF6CDF7CF3F
// 10874e80 BetterScrollRect_GetNormalizedPos_m3381B10AC1601983094FB2D9B6D31E1CEFEAA777
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
BetterScrollRect_UnityEngine_EventSystems_IEndDragHandler_OnEndDrag_mFD153D2965B1DC95CDFA01D6405B9D78BA5CFB76
          (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *pLVar1;
  Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4 *pVVar2;
  Context_tF9BF19177ADB327138B851A6543B2973E6EA7EC6 CVar3;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar4;
  BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *pBVar5;
  float fVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar7;
  eoeYwvfgkcyqvOuhSvCpfjKvcGW_t36596F2FF79D37D2776C7BB369E698B363118273 *peVar8;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar9;
  int iVar10;
  float fVar11;
  Context_tF9BF19177ADB327138B851A6543B2973E6EA7EC6 local_84;
  eoeYwvfgkcyqvOuhSvCpfjKvcGW_t36596F2FF79D37D2776C7BB369E698B363118273 local_58;
  undefined8 local_4c;
  float local_44;
  undefined8 local_40;
  undefined8 local_34;
  undefined8 local_28;
  String_t *local_20;
  undefined8 local_1c;
  String_t *local_14;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_10;
  float local_8;

  pBVar5 = param_1;
  if (DAT_1151f5a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m11374E7CCB77FCB77D3C672C64C47DDA6EF2BD06_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_RemoveRange_m6F9613E1C2746876E545063C93784CE25DAA24EB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var)
    ;
    DAT_1151f5a9 = '\x01';
  }
  memset((uchar *)&local_84,'\0',0x2c);
  if (param_1->___dragging_11 == false) {
    return;
  }
  if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
    if (param_2->___U3CpointerIdU3Ek__BackingField_12 != param_1->___dragPointerId_13) {
      return;
    }
    Context__ctor_m05CE0CDB31FF30D1963F60DC9ADD6BF213F365DD(&local_84,param_1,(MethodInfo *)0x0);
    if (param_1->___drags_10 != (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0) {
      local_10.___y_1 = (float)param_1->___drags_10->____size_2;
      if (1 < (int)local_10.___y_1) {
        param_1 = (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)0x0;
        local_8 = 0.0;
        do {
          fVar11 = local_8;
          pLVar1 = pBVar5->___drags_10;
          if (pLVar1 == (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0) goto LAB_10876813;
          if ((BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)pLVar1->____size_2 <=
              param_1) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          local_28 = *(undefined8 *)((int)&pLVar1->____items_1->m_Items[0].___x_2 + (int)local_8);
          local_20 = *(String_t **)((int)&pLVar1->____items_1->m_Items[0].___z_4 + (int)local_8);
          local_8 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
                              ((MethodInfo *)0x0);
          fVar6 = local_10.___y_1;
          local_8 = local_8 - __real_3e4ccccd;
          if (local_8 <= (float)local_20) break;
          local_8 = (float)((int)fVar11 + 0xc);
          param_1 = (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)
                    ((int)&param_1->_padding_ + 1);
        } while ((int)param_1 < (int)local_10.___y_1);
        if (pBVar5->___drags_10 == (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0)
        goto LAB_10876813;
        List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pBVar5->___drags_10,0,
                   (int)param_1,
                   List_1_RemoveRange_m6F9613E1C2746876E545063C93784CE25DAA24EB_RuntimeMethod_var);
        iVar10 = (int)fVar6 - (int)param_1;
        if (1 < iVar10) {
          pVVar7 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                             ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_58,
                              (MethodInfo *)0x0);
          local_1c._0_4_ = pVVar7->___x_2;
          local_1c._4_4_ = pVVar7->___y_3;
          local_14 = (String_t *)pVVar7->___z_4;
          if ((List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *)pBVar5->___drags_10 ==
              (List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *)0x0) goto LAB_10876813;
          peVar8 = List_1_get_Item_m05503F475DFF429174902337394B6C6DE3713CCD_inline
                             (&local_58,
                              (List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *)
                              pBVar5->___drags_10,0,
                              List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var
                             );
          local_28._0_4_ = (float)peVar8->___MqzGhJGEFjxUdcjoHTfdmpUvoKhv_0;
          local_28._4_4_ = (float)peVar8->___JcmgDDuATuYwIOWhebgtdHoiXsW_1;
          local_20 = peVar8->___pMiBnalMLaKhnIIVCmUXzEYnDvX_2;
          param_1 = (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)0x0;
          local_10.___y_1 = 0.0;
          do {
            pLVar1 = pBVar5->___drags_10;
            if (pLVar1 == (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0)
            goto LAB_10876813;
            if ((BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)pLVar1->____size_2 <=
                param_1) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            pVVar2 = pLVar1->____items_1;
            local_34 = *(undefined8 *)((int)&pVVar2->m_Items[0].___x_2 + (int)local_10.___y_1);
            local_44 = *(float *)((int)&pVVar2->m_Items[0].___z_4 + (int)local_10.___y_1);
            local_4c = *(undefined8 *)((int)&pVVar2->m_Items[0].___x_2 + (int)local_10.___y_1);
            local_40._4_4_ = (float)((ulonglong)local_34 >> 0x20);
            local_58.___pMiBnalMLaKhnIIVCmUXzEYnDvX_2 =
                 (String_t *)((local_44 - (float)local_20) + (float)local_14);
            fVar11 = ((float)local_34 - (float)local_28) + (float)local_1c;
            local_1c._4_4_ = (local_40._4_4_ - local_28._4_4_) + local_1c._4_4_;
            local_28 = *(undefined8 *)((int)&pVVar2->m_Items[0].___x_2 + (int)local_10.___y_1);
            local_20 = *(String_t **)((int)&pVVar2->m_Items[0].___z_4 + (int)local_10.___y_1);
            local_10.___y_1 = (float)((int)local_10.___y_1 + 0xc);
            param_1 = (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)
                      ((int)&param_1->_padding_ + 1);
            local_1c = CONCAT44(local_1c._4_4_,fVar11);
            local_40 = local_34;
            local_14 = local_58.___pMiBnalMLaKhnIIVCmUXzEYnDvX_2;
          } while ((int)param_1 < iVar10);
          (pBVar5->___velocity_9).___x_0 = fVar11 / (float)local_58.___pMiBnalMLaKhnIIVCmUXzEYnDvX_2
          ;
          (pBVar5->___velocity_9).___y_1 =
               local_1c._4_4_ / (float)local_58.___pMiBnalMLaKhnIIVCmUXzEYnDvX_2;
          if (local_84.___horizontalNow_4 == false) {
            (pBVar5->___velocity_9).___x_0 = 0.0;
          }
          if (local_84.___verticalNow_5 == false) {
            (pBVar5->___velocity_9).___y_1 = 0.0;
          }
        }
      }
      pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar5,
                          (MethodInfo *)0x0);
      if (pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        pVVar7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                           ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_58,pTVar9,
                            (MethodInfo *)0x0);
        CVar3.___parentRt_1 = local_84.___parentRt_1;
        CVar3.___contentRt_0 = local_84.___contentRt_0;
        CVar3.___contentRect_2.___m_XMin_0 = local_84.___contentRect_2.___m_XMin_0;
        CVar3.___contentRect_2.___m_YMin_1 = local_84.___contentRect_2.___m_YMin_1;
        CVar3.___contentRect_2.___m_Width_2 = local_84.___contentRect_2.___m_Width_2;
        CVar3.___contentRect_2.___m_Height_3 = local_84.___contentRect_2.___m_Height_3;
        CVar3.___parentRect_3.___m_XMin_0 = local_84.___parentRect_3.___m_XMin_0;
        CVar3.___parentRect_3.___m_YMin_1 = local_84.___parentRect_3.___m_YMin_1;
        CVar3.___parentRect_3.___m_Width_2 = local_84.___parentRect_3.___m_Width_2;
        CVar3.___parentRect_3.___m_Height_3 = local_84.___parentRect_3.___m_Height_3;
        CVar3.___horizontalNow_4 = local_84.___horizontalNow_4;
        CVar3.___verticalNow_5 = local_84.___verticalNow_5;
        CVar3._42_2_ = local_84._42_2_;
        BetterScrollRect_GetNormalizedPos_m3381B10AC1601983094FB2D9B6D31E1CEFEAA777
                  (pBVar5,*pVVar7,&pBVar5->___normPosCurrent_7,CVar3,(MethodInfo *)0x0);
        local_10.___x_0 = (pBVar5->___normPosCurrent_7).___x_0;
        local_10.___y_1 = (pBVar5->___normPosCurrent_7).___y_1;
        if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
        }
        VVar4.___y_1 = local_10.___y_1;
        VVar4.___x_0 = local_10.___x_0;
        local_10 = ExtraMath_Clamp01_mA0E4F5A88B54C564A4C6AEDB7ED05FF6CDF7CF3F
                             (VVar4,(MethodInfo *)0x0);
        pBVar5->___normPosTarget_8 = local_10;
        pBVar5->___dragging_11 = false;
        DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                  ((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)pBVar5->___drags_10,
                   ListPoolExtension_ReturnToPool_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m11374E7CCB77FCB77D3C672C64C47DDA6EF2BD06_RuntimeMethod_var
                  );
        if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)pBVar5->___onEndDrag_15
            != (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
          OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                    ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                     pBVar5->___onEndDrag_15,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_10876813:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
