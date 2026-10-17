// RVA 0x2fe720 | Placemaker.Ui.SunButtonGamepad$$Update
// PDB: SunButtonGamepad_Update_m6C4481BB04F977CF0C8A19B31BC61A70DC370E50
// Body: [[102fe720, 102fe922]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 104ee9c0 KeyboardControlsMenu_DarkenerClicked_mD8C47D0735D72B4ED505E2B0B6CFD30E3AAE7428
// 1066d9d0 Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84
// 10672d70 Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
// 10a0aef0 ShadowBaker_RotateAngle_m5FBE993216995B5D55267C98361B193FD06588EE
// 10f1b180 Player_GetAxis2D_m3BF4976E5A5736D3A31A01338F998ABB7D81191A
// 10f1d410 Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96

void __cdecl
SunButtonGamepad_Update_m6C4481BB04F977CF0C8A19B31BC61A70DC370E50
          (SunButtonGamepad_tCDC81D6FE61C37B5713FFE96C01FD96152CAFE07 *param_1,MethodInfo *param_2)

{
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar1;
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar2;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar3;
  ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *pSVar4;
  bool bVar5;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar6;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar7;
  float fVar8;
  float local_14;
  float local_10;
  float local_c;
  float local_8;

  if (DAT_1151c208 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral14BC80A4FCEB21C92921A978B940ECB3BFA86E80);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5C70E2DF6C4DF3077BF0E77F8FC2F3E1E6FE697B);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA23E48142038CF1CD099CB5392A499B251831409);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA9753FAA8F290A9AAF4381B61383AC2B2A23CC39);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralD7B66E675B52355490EDEEAA35C2F067F69817CC);
    DAT_1151c208 = '\x01';
  }
  if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
     (pPVar1 = param_1->___master_4->___player_43,
     pPVar1 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) goto LAB_102fe91e;
  bVar5 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                    (pPVar1,_stringLiteralA23E48142038CF1CD099CB5392A499B251831409,(MethodInfo *)0x0
                    );
  if (!bVar5) {
    if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
       (pPVar1 = param_1->___master_4->___player_43,
       pPVar1 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) goto LAB_102fe91e;
    bVar5 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                      (pPVar1,_stringLiteral5C70E2DF6C4DF3077BF0E77F8FC2F3E1E6FE697B,
                       (MethodInfo *)0x0);
    if (!bVar5) {
      if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pPVar1 = param_1->___master_4->___player_43,
         pPVar1 != (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) {
        bVar5 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                          (pPVar1,_stringLiteralD7B66E675B52355490EDEEAA35C2F067F69817CC,
                           (MethodInfo *)0x0);
        pUVar2 = param_1->___master_4;
        if (bVar5) {
          if ((pUVar2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
             (pUVar2->___sideMenu_8 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)) {
            KeyboardControlsMenu_DarkenerClicked_mD8C47D0735D72B4ED505E2B0B6CFD30E3AAE7428
                      ((KeyboardControlsMenu_t8A1421617C595C06F6BA074D899E4D4C458562D2 *)
                       pUVar2->___sideMenu_8,(MethodInfo *)0x0);
            return;
          }
        }
        else if ((pUVar2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                (pUVar2->___player_43 != (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) {
          VVar6 = Player_GetAxis2D_m3BF4976E5A5736D3A31A01338F998ABB7D81191A
                            (pUVar2->___player_43,
                             _stringLiteral14BC80A4FCEB21C92921A978B940ECB3BFA86E80,
                             _stringLiteralA9753FAA8F290A9AAF4381B61383AC2B2A23CC39,
                             (MethodInfo *)0x0);
          VVar7 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
          local_10 = VVar6.___y_1;
          local_14 = VVar6.___x_0;
          local_8 = VVar7.___y_1;
          if ((local_10 - local_8) * (local_10 - local_8) +
              (local_14 - local_c) * (local_14 - local_c) < __real_2edbe6fe) {
            return;
          }
          local_10 = (float)((uint)local_10 ^ __xmm_80000000800000008000000080000000);
          if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
             (pWVar3 = param_1->___master_4->___worldMaster_5,
             pWVar3 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
            pSVar4 = pWVar3->___shadowBaker_31;
            fVar8 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84
                              ((MethodInfo *)0x0);
            local_10 = local_10 * fVar8;
            if (pSVar4 != (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *)0x0) {
              VVar6.___y_1 = local_10 + local_10;
              VVar6.___x_0 = local_14 * fVar8 + local_14 * fVar8;
              ShadowBaker_RotateAngle_m5FBE993216995B5D55267C98361B193FD06588EE
                        (pSVar4,VVar6,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto LAB_102fe91e;
    }
  }
  if (param_1->___focusedState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___focusedState_5,false,(MethodInfo *)0x0);
    return;
  }
LAB_102fe91e:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
