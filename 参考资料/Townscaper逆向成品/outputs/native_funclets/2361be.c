// RVA 0x2361be | Recovered.function.called_by_235f00
// PDB: FUN_102361be
// Body: [[102361be, 10236262]]
// Direct callees:
// 1003e420 Invoke
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10878a00 BindingRow_SetButton_m08D3BD7C711391D0DA78B7FDAC5F72AD7C8E7ED6

void FUN_102361be(void)

{
  MonitorData *pMVar1;
  atomic<unsigned_int> aVar2;
  MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *pMVar3;
  bool bVar4;
  ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *pCVar5;
  Il2CppObject *pIVar6;
  int iVar7;
  ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *pAVar8;
  String_t *pSVar9;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar10;
  Exception_t *pEVar11;
  uint uVar12;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  Il2CppObject *unaff_EDI;
  MethodInfo *pMVar13;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (unaff_EDI != (Il2CppObject *)0x0) {
    InterfaceFuncInvoker0<int>::Invoke
              (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,unaff_EDI
              );
  }
  if (*(Exception_t **)(unaff_EBP + -0x20) != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x20),(MethodInfo *)0x0);
  }
  if ((unaff_EBX != 0) && (*(int *)(unaff_EBP + -0x40 + unaff_EBX * 4) == 0x103)) {
    unaff_EBX = unaff_EBX + -1;
    *(int *)(unaff_EBP + -0x38) = unaff_EBX;
  }
  pIVar6 = *(Il2CppObject **)(unaff_EBP + 8);
  uVar12 = *(int *)(unaff_EBP + -0x24) + 1;
  *(uint *)(unaff_EBP + -0x24) = uVar12;
  if ((int)*(uint *)(unaff_ESI + 0xc) <= (int)uVar12) {
    pOVar10 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
              il2cpp_codegen_object_new
                        (Action_3_t8C989E8B6758A78BA011EE84316DF870E598D4AE_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar10,pIVar6,
               (int)
               ControlBinding_OnInputFieldClicked_mE78B97210363925AC1804DE6E2959D95522035DD_RuntimeMethod_var
               ,Action_3__ctor_m216A1342070CF206959A5487AB0CBA16A2ECAEA7_RuntimeMethod_var);
    BindingRow_SetButton_m08D3BD7C711391D0DA78B7FDAC5F72AD7C8E7ED6
              (*(BindingRow_t56D7B2F34271796B77D8360E8DF57BA956DC0BA7 **)(unaff_EBP + 0xc),
               *(String_t **)(unaff_EBP + -0x14),
               (Action_3_t8C989E8B6758A78BA011EE84316DF870E598D4AE *)pOVar10,
               *(int *)(unaff_EBP + 0x10),*(int *)(unaff_EBP + -0x28),false,(MethodInfo *)0x0);
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  if (*(uint *)(unaff_ESI + 0xc) <= uVar12) {
    pMVar13 = (MethodInfo *)0x0;
    pEVar11 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar11,pMVar13);
  }
  pMVar1 = pIVar6[1].monitor;
  if ((((pMVar1 != (MonitorData *)0x0) &&
       (aVar2 = pMVar1[5].numThreadsWaitingForSemaphore, aVar2 != (atomic<unsigned_int>)0x0)) &&
      (iVar7 = *(int *)((int)aVar2 + 0x24), iVar7 != 0)) &&
     (pMVar3 = *(MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D **)(iVar7 + 0x38),
     pMVar3 != (MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *)0x0)) {
    pCVar5 = MapHelper_GetMap_mC3654CDC5CE98A0B6B46B4CEEFBD1942E5FB822E
                       (pMVar3,*(int *)(unaff_ESI + 0x10 + uVar12 * 4),*(int *)(unaff_EBP + 0x14),
                        _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E,
                        _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E,(MethodInfo *)0x0);
    if ((*(int *)(unaff_EBP + -0x18) != 0) &&
       (pCVar5 != (ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)0x0)) {
      pIVar6 = ControllerMap_ElementMapsWithAction_mEF5E5A6CE97879AADA9FD8488279ADDBF4634F41
                         (pCVar5,*(int *)(*(int *)(unaff_EBP + -0x18) + 8),(MethodInfo *)0x0);
      if (pIVar6 != (Il2CppObject *)0x0) {
        pIVar6 = (Il2CppObject *)
                 InterfaceFuncInvoker0<int>::Invoke
                           (0,
                            IEnumerable_1_t8BE6E1F258DEA8EDC30D58FB2205A944F35AB737_il2cpp_TypeInfo_var
                            ,pIVar6);
        *(Il2CppObject **)(unaff_EBP + -0x30) = pIVar6;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        while (pIVar6 != (Il2CppObject *)0x0) {
          iVar7 = InterfaceFuncInvoker0<int>::Invoke
                            (0,
                             IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                             ,pIVar6);
          if ((char)iVar7 == '\0') {
            *(undefined4 *)(unaff_EBP + -0x3c + unaff_EBX * 4) = 0x103;
            *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x38) + 1;
            FUN_102361be();
            return;
          }
          pAVar8 = (ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *)
                   InterfaceFuncInvoker0<int>::Invoke
                             (0,
                              IEnumerator_1_tBDE3CDDEFEB1DD73A6387AC43023FE6600D80759_il2cpp_TypeInfo_var
                              ,pIVar6);
          if (pAVar8 == (ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *)0x0) break;
          bVar4 = ActionElementMap_ShowInField_mDFCB5A661388799E55E2B7C6F17C334EF27784EB
                            (pAVar8,*(int *)(*(int *)(unaff_EBP + 0xc) + 0x1c),(MethodInfo *)0x0);
          if (bVar4) {
            bVar4 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                              (*(String_t **)(unaff_EBP + -0x14),
                               *(String_t **)String_t_il2cpp_TypeInfo_var->static_fields,
                               (MethodInfo *)0x0);
            if (bVar4) {
              pSVar9 = ActionElementMap_get_elementIdentifierName_mB12B33305EB177C9C7ADC9234467076B770FDFA6
                                 (pAVar8,(MethodInfo *)0x0);
              iVar7 = pAVar8->___EPKCDchEYzXNdkVlXPBcLtJDQuC_16;
              *(String_t **)(unaff_EBP + -0x14) = pSVar9;
              *(String_t **)(unaff_EBP + -0x1c) = pSVar9;
              *(int *)(unaff_EBP + -0x28) = iVar7;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
