// RVA 0x8761d0 | Placemaker.Ui.BetterScrollRect$$UnityEngine.EventSystems.IDragHandler.OnDrag
// PDB: BetterScrollRect_UnityEngine_EventSystems_IDragHandler_OnDrag_m998E8D62FA0B518285EF8F4C3200110CB531869B
// Body: [[108761d0, 1087626f] [10876273, 108762d6] [108762da, 10876487]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 101d1990 Context__ctor_m05CE0CDB31FF30D1963F60DC9ADD6BF213F365DD
// 105d1fe0 List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10928710 List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
BetterScrollRect_UnityEngine_EventSystems_IDragHandler_OnDrag_m998E8D62FA0B518285EF8F4C3200110CB531869B
          (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  undefined1 *puVar1;
  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *pLVar2;
  List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *pLVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar5;
  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *pLVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar7;
  float fVar8;
  Context_tF9BF19177ADB327138B851A6543B2973E6EA7EC6 local_8c;
  float local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_50;
  undefined8 local_40;
  float local_38;
  undefined8 local_34;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_28;
  float local_20;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *local_1c;
  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *local_18;
  float local_14;

  if (DAT_1151f5a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
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
    DAT_1151f5a8 = '\x01';
  }
  if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
    if (param_2->___U3CpointerIdU3Ek__BackingField_12 != param_1->___dragPointerId_13) {
      return;
    }
    local_18 = param_1->___drags_10;
    if (local_18 != (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0) {
      local_1c = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)local_18->____size_2;
      if (0 < (int)local_1c) {
        puVar1 = &local_1c[-1].field_0xb;
        if (local_1c <= puVar1) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        local_28 = *(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)
                    (local_18->____items_1->m_Items + (int)puVar1);
        local_20 = local_18->____items_1->m_Items[(int)puVar1].___z_4;
        fVar8 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
        if (local_20 == fVar8) {
          return;
        }
        local_18 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0;
        local_14 = 0.0;
        do {
          fVar8 = local_14;
          pLVar6 = local_18;
          pLVar2 = param_1->___drags_10;
          if (pLVar2 == (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0) goto LAB_10876483;
          if ((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)pLVar2->____size_2 <= local_18) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          local_28 = *(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)
                      ((int)&pLVar2->____items_1->m_Items[0].___x_2 + (int)local_14);
          local_20 = *(float *)((int)&pLVar2->____items_1->m_Items[0].___z_4 + (int)local_14);
          local_14 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
                               ((MethodInfo *)0x0);
          local_14 = local_14 - __real_3e4ccccd;
          if (local_14 <= local_20) break;
          local_18 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)
                     ((int)&pLVar6->_padding_ + 1);
          local_14 = (float)((int)fVar8 + 0xc);
        } while ((int)local_18 < (int)local_1c);
        if (param_1->___drags_10 == (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0)
        goto LAB_10876483;
        List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___drags_10,0,
                   (int)local_18,
                   List_1_RemoveRange_m6F9613E1C2746876E545063C93784CE25DAA24EB_RuntimeMethod_var);
      }
      memset((uchar *)&local_8c,'\0',0x2c);
      Context__ctor_m05CE0CDB31FF30D1963F60DC9ADD6BF213F365DD(&local_8c,param_1,(MethodInfo *)0x0);
      local_18 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)
                 (param_2->___U3CdeltaU3Ek__BackingField_14).___y_1;
      local_60 = (param_2->___U3CdeltaU3Ek__BackingField_14).___x_0;
      if (local_8c.___horizontalNow_4 == false) {
        local_60 = 0.0;
      }
      uStack_54 = 0;
      uStack_58 = 0;
      uStack_5c = 0;
      if (local_8c.___verticalNow_5 == false) {
        local_18 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0;
      }
      local_1c = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                            (MethodInfo *)0x0);
      if (local_1c != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        pVVar7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                           (&local_50,local_1c,(MethodInfo *)0x0);
        local_34._0_4_ = pVVar7->___x_2;
        local_34._4_4_ = pVVar7->___y_3;
        local_20 = pVVar7->___z_4;
        local_40._0_4_ = pVVar7->___x_2;
        local_40._4_4_ = pVVar7->___y_3;
        local_38 = local_20 + 0.0;
        VVar4.___y_3 = (float)local_34._4_4_ + (float)local_18;
        VVar4.___x_2 = local_60 + (float)(undefined4)local_34;
        VVar4.___z_4 = local_38;
        local_28 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)local_34;
        Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                  (local_1c,VVar4,(MethodInfo *)0x0);
        local_28 = param_2->___U3CpositionU3Ek__BackingField_13;
        pLVar3 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)param_1->___drags_10;
        local_20 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
                             ((MethodInfo *)0x0);
        if (pLVar3 != (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0) {
          lVar5.___goUQCKzJmFEdxabJRHcPmEGvlCq_2 = local_20;
          lVar5.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (int)local_28.___x_0;
          lVar5.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = (int)local_28.___y_1;
          List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                    (pLVar3,lVar5,
                     List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
          return;
        }
      }
    }
  }
LAB_10876483:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
