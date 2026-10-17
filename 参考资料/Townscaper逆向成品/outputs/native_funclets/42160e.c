// RVA 0x42160e | Recovered.function.called_by_421260
// PDB: FUN_1042160e
// Body: [[1042160e, 10421656]]
// Direct callees:
// 1003e420 Invoke
// 10421668 FUN_10421668

void FUN_1042160e(void)

{
  bool bVar1;
  MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126 *pMVar2;
  Il2CppObject *pIVar3;
  int iVar4;
  InputAction_tD22CF065BFD88C292C239741BE6F8E37F5AE7ADE *pIVar5;
  String_t *pSVar6;
  int unaff_EBP;
  Exception_t *unaff_ESI;
  int unaff_EDI;

  if (*(Il2CppObject **)(unaff_EBP + -0x18) != (Il2CppObject *)0x0) {
    InterfaceFuncInvoker0<int>::Invoke
              (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,
               *(Il2CppObject **)(unaff_EBP + -0x18));
  }
  if (unaff_ESI != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(unaff_ESI,(MethodInfo *)0x0);
  }
  if ((unaff_EDI != 0) && (*(int *)(unaff_EBP + -0x60 + unaff_EDI * 4) == 0x13b)) {
    unaff_EDI = unaff_EDI + -1;
    *(int *)(unaff_EBP + -0x4c) = unaff_EDI;
  }
  bVar1 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                    ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(unaff_EBP + -0x38),
                     Enumerator_MoveNext_m1353A10EE0CB00180EDAF9389E548EEDD7BA887E_RuntimeMethod_var
                    );
  if (!bVar1) {
    *(undefined4 *)(unaff_EBP + -0x5c + unaff_EDI * 4) = 0x157;
    FUN_10421668();
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x2c);
  if ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var)
    ;
  }
  pMVar2 = ReInput_get_mapping_m6A5EE8A93174AAA84C9C37C1CC3C340A485C19E3((MethodInfo *)0x0);
  if (pMVar2 != (MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126 *)0x0) {
    pIVar3 = MappingHelper_ActionsInCategory_mC66639760FEC669B2B1CA03DE82C87649DD43464
                       (pMVar2,_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E,
                        (MethodInfo *)0x0);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar3 = (Il2CppObject *)
               InterfaceFuncInvoker0<int>::Invoke
                         (0,
                          IEnumerable_1_t30B1CF132C29935077E288332B94617FF4337171_il2cpp_TypeInfo_var
                          ,pIVar3);
      *(Il2CppObject **)(unaff_EBP + -0x18) = pIVar3;
      *(Il2CppObject **)(unaff_EBP + -0x20) = pIVar3;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      while (pIVar3 != (Il2CppObject *)0x0) {
        iVar4 = InterfaceFuncInvoker0<int>::Invoke
                          (0,
                           IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                           ,pIVar3);
        if ((char)iVar4 == '\0') goto LAB_104215d2;
        pIVar5 = (InputAction_tD22CF065BFD88C292C239741BE6F8E37F5AE7ADE *)
                 InterfaceFuncInvoker0<int>::Invoke
                           (0,
                            IEnumerator_1_t6134A20D2499DC6D27A5860ECCB41D08D19C9FAD_il2cpp_TypeInfo_var
                            ,*(Il2CppObject **)(unaff_EBP + -0x18));
        if (pIVar5 == (InputAction_tD22CF065BFD88C292C239741BE6F8E37F5AE7ADE *)0x0) break;
        if (pIVar5->____type_2 != 1) {
          pSVar6 = InputAction_get_positiveDescriptiveName_mA742606F52F1DD385F661621EC5CB23B2D03A92D
                             (pIVar5,(MethodInfo *)0x0);
          if ((*(int *)(unaff_EBP + -0x14) != 0) && (pSVar6 != (String_t *)0x0)) {
            bVar1 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D
                              (pSVar6,*(String_t **)(*(int *)(unaff_EBP + -0x14) + 0xc),
                               (MethodInfo *)0x0);
            if (!bVar1) {
              pSVar6 = InputAction_get_negativeDescriptiveName_mEE74C324DFD2047C5F8A7E31C226F5C99B276F39
                                 (pIVar5,(MethodInfo *)0x0);
              if (pSVar6 == (String_t *)0x0) break;
              bVar1 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D
                                (pSVar6,*(String_t **)(*(int *)(unaff_EBP + -0x14) + 0xc),
                                 (MethodInfo *)0x0);
              if (!bVar1) goto LAB_104214b9;
            }
            *(InputAction_tD22CF065BFD88C292C239741BE6F8E37F5AE7ADE **)
             (*(int *)(unaff_EBP + -0x14) + 0x10) = pIVar5;
            pSVar6 = InputAction_get_positiveDescriptiveName_mA742606F52F1DD385F661621EC5CB23B2D03A92D
                               (pIVar5,(MethodInfo *)0x0);
            iVar4 = *(int *)(unaff_EBP + -0x14);
            if (pSVar6 != (String_t *)0x0) {
              bVar1 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D
                                (pSVar6,*(String_t **)(iVar4 + 0xc),(MethodInfo *)0x0);
              *(uint *)(iVar4 + 0x14) = !bVar1 + 1;
LAB_104215d2:
              *(undefined4 *)(unaff_EBP + -0x5c + unaff_EDI * 4) = 0x13b;
              *(undefined1 *)(unaff_EBP + -4) = 0;
              *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x4c) + 1;
              FUN_1042160e();
              return;
            }
          }
          break;
        }
        if ((*(int *)(unaff_EBP + -0x14) == 0) || (pIVar5->____name_1 == (String_t *)0x0)) break;
        bVar1 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D
                          (pIVar5->____name_1,*(String_t **)(*(int *)(unaff_EBP + -0x14) + 0xc),
                           (MethodInfo *)0x0);
        if (bVar1) {
          iVar4 = *(int *)(unaff_EBP + -0x14);
          *(InputAction_tD22CF065BFD88C292C239741BE6F8E37F5AE7ADE **)(iVar4 + 0x10) = pIVar5;
          *(undefined4 *)(iVar4 + 0x14) = 1;
          goto LAB_104215d2;
        }
LAB_104214b9:
        pIVar3 = *(Il2CppObject **)(unaff_EBP + -0x18);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
