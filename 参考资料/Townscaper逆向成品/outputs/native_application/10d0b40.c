// RVA 0x10d0b40 | FuryStudios.FurySDK.Utils.PlatformSystemMessengerBase$$LateUpdate
// PDB: PlatformSystemMessengerBase_LateUpdate_mB8AC2BE0D673C15E9F54179E7A993C29A1B147AB
// Body: [[110d0b40, 110d0d27]]
// Direct callees:
// 1003e070 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10513690 Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared
// 1066d9d0 Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
PlatformSystemMessengerBase_LateUpdate_mB8AC2BE0D673C15E9F54179E7A993C29A1B147AB
          (PlatformSystemMessengerBase_t0DAC2C6021ACFA4428ACF4A1231D2CE0521A5F84 *param_1,
          MethodInfo *param_2)

{
  float fVar1;
  Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *pQVar2;
  int iVar3;
  String_t *pSVar4;
  String_t *pSVar5;
  String_t *pSVar6;
  char cVar7;
  Message_tF9014B5C4DF3B4DF8A24C2D6979F4918360E6EB9 *pMVar8;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar9;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar10;
  float fVar11;

  if (DAT_11523a9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       PlatformSystemMessengerBase_OnPrimaryButtonClick_mE1BB1755763A6D9D79B34E9CF91EFAAE63D21378_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       PlatformSystemMessengerBase_OnSecondaryButtonClick_m715108D29D0ED4CF65C41FC946BE73E04DBE37E7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Queue_1_Dequeue_mA25DA10C8F49DDAC098B2A50688C054E314D053D_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Queue_1_get_Count_m05A5F41F78D4BEE9C8D2FD57F954B5C7BFA5F97C_RuntimeMethod_var
              );
    DAT_11523a9c = '\x01';
  }
  pMVar8 = param_1->___activeMessage_4;
  if ((pMVar8 == (Message_tF9014B5C4DF3B4DF8A24C2D6979F4918360E6EB9 *)0x0) ||
     (pMVar8->___type_0 != 0)) {
LAB_110d0bee:
    if (pMVar8 != (Message_tF9014B5C4DF3B4DF8A24C2D6979F4918360E6EB9 *)0x0) {
      return;
    }
  }
  else {
    fVar1 = pMVar8->___duration_1;
    if (___real_00000000 < fVar1) {
      fVar11 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84
                         ((MethodInfo *)0x0);
      pMVar8->___duration_1 = fVar1 - fVar11;
      pMVar8 = param_1->___activeMessage_4;
      goto LAB_110d0bee;
    }
    (**(code **)(param_1->_padding_ + 0x104))(param_1,*(undefined4 *)(param_1->_padding_ + 0x108));
    param_1->___activeMessage_4 = (Message_tF9014B5C4DF3B4DF8A24C2D6979F4918360E6EB9 *)0x0;
  }
  cVar7 = (**(code **)(param_1->_padding_ + 0x124))
                    (param_1,*(undefined4 *)(param_1->_padding_ + 0x128));
  if (cVar7 != '\0') {
    pQVar2 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)param_1->___messages_5;
    if (pQVar2 == (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)0x0) {
LAB_110d0d23:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    if (pQVar2->____size_3 != 0) {
      pMVar8 = (Message_tF9014B5C4DF3B4DF8A24C2D6979F4918360E6EB9 *)
               Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared
                         (pQVar2,
                          Queue_1_Dequeue_mA25DA10C8F49DDAC098B2A50688C054E314D053D_RuntimeMethod_var
                         );
      param_1->___activeMessage_4 = pMVar8;
      if (pMVar8 == (Message_tF9014B5C4DF3B4DF8A24C2D6979F4918360E6EB9 *)0x0) goto LAB_110d0d23;
      iVar3 = pMVar8->___type_0;
      if (iVar3 == 0) {
        VirtFuncInvoker1<bool,Il2CppObject_*>::Invoke
                  (8,(Il2CppObject *)param_1,(Il2CppObject *)pMVar8->___message_2);
        return;
      }
      if (iVar3 == 1) {
        pSVar4 = pMVar8->___message_2;
        pSVar5 = pMVar8->___btnPrimaryText_3;
        pOVar9 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 il2cpp_codegen_object_new
                           (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                  (pOVar9,(Il2CppObject *)param_1,
                   (int)
                   PlatformSystemMessengerBase_OnPrimaryButtonClick_mE1BB1755763A6D9D79B34E9CF91EFAAE63D21378_RuntimeMethod_var
                   ,(MethodInfo *)0x0);
        (**(code **)(param_1->_padding_ + 0x10c))
                  (param_1,pSVar4,pSVar5,pOVar9,*(undefined4 *)(param_1->_padding_ + 0x110));
        return;
      }
      if (iVar3 == 2) {
        pSVar4 = pMVar8->___message_2;
        pSVar5 = pMVar8->___btnSecondaryText_4;
        pSVar6 = pMVar8->___btnPrimaryText_3;
        pOVar9 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 il2cpp_codegen_object_new
                           (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                  (pOVar9,(Il2CppObject *)param_1,
                   (int)
                   PlatformSystemMessengerBase_OnPrimaryButtonClick_mE1BB1755763A6D9D79B34E9CF91EFAAE63D21378_RuntimeMethod_var
                   ,(MethodInfo *)0x0);
        pOVar10 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                  il2cpp_codegen_object_new
                            (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                  (pOVar10,(Il2CppObject *)param_1,
                   (int)
                   PlatformSystemMessengerBase_OnSecondaryButtonClick_m715108D29D0ED4CF65C41FC946BE73E04DBE37E7_RuntimeMethod_var
                   ,(MethodInfo *)0x0);
        (**(code **)(param_1->_padding_ + 0x114))
                  (param_1,pSVar4,pSVar6,pSVar5,pOVar9,pOVar10,
                   *(undefined4 *)(param_1->_padding_ + 0x118));
      }
    }
  }
  return;
}
