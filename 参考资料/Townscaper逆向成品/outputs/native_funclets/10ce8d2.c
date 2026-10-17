// RVA 0x10ce8d2 | Recovered.function.called_by_10ce580
// PDB: FUN_110ce8d2
// Body: [[110ce8d2, 110ce968]]
// Direct callees:
// 1018e700 il2cpp_codegen_get_array_type_mismatch_exception
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 11025c70 GUILayout_EndArea_mFC73B49A3F2C5319D280E2C1B09E78CA23D0B151
// 11025e20 GUILayout_EndHorizontal_mFB38A81D7D34D7928ECECF82B9C2C993BE5A0946
// 11025e70 GUILayout_EndScrollView_m7A2EFB6B6DFC43302979FD6E2AF032C0D21BA163
// 11025f70 GUILayout_EndVertical_mBCF5058C9591A4064722C2B763EF98D066BFDCAD

void FUN_110ce8d2(void)

{
  String_t *pSVar1;
  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *pLVar2;
  int iVar3;
  Il2CppClass *pIVar4;
  bool bVar5;
  GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 *pGVar6;
  int iVar7;
  GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B *pGVar8;
  GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *pGVar9;
  Il2CppObject *pIVar10;
  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *pEVar11;
  Il2CppObject *pIVar12;
  Exception_t *pEVar13;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar14;
  MethodInfo *pMVar15;

  *(int *)(unaff_EBP + -0x14) = unaff_ESI;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x50),
             Enumerator_Dispose_mB8C8A27C6EE4CE2A7FEACFCC6C285A12C5249F1D_RuntimeMethod_var);
  if (*(Exception_t **)(unaff_EBP + -0x1c) != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x1c),(MethodInfo *)0x0);
  }
  if ((unaff_ESI != 0) && (*(int *)(unaff_EBP + -0x34 + unaff_ESI * 4) == 0xf3)) {
    *(int *)(unaff_EBP + -0x14) = unaff_ESI + -1;
    *(int *)(unaff_EBP + -0x2c) = unaff_ESI + -1;
  }
  GUILayout_EndScrollView_m7A2EFB6B6DFC43302979FD6E2AF032C0D21BA163((MethodInfo *)0x0);
  GUILayout_EndVertical_mBCF5058C9591A4064722C2B763EF98D066BFDCAD((MethodInfo *)0x0);
  pIVar4 = GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
  if (unaff_EDI == 0) {
    GUILayout_EndHorizontal_mFB38A81D7D34D7928ECECF82B9C2C993BE5A0946((MethodInfo *)0x0);
    GUILayout_EndArea_mFC73B49A3F2C5319D280E2C1B09E78CA23D0B151((MethodInfo *)0x0);
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  *(int *)(unaff_EBP + 8) = unaff_EDI;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if ((pIVar4->has_cctor != '\0') && (pIVar4->cctor_finished == 0)) {
    il2cpp_runtime_class_init(pIVar4);
  }
  pGVar6 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F((MethodInfo *)0x0);
  if (pGVar6 != (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 *)0x0) {
    iVar7 = ControllerSelection_get_type_m6AC6176846B43F7E596DA48E8780F05DCFD3740A
                      ((ControllerSelection_t9870C49D5444501858F864E31B530269D961307C *)pGVar6,
                       (MethodInfo *)0x0);
    pIVar4 = GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var;
    *(int *)(unaff_EBP + -0x24) = iVar7;
    pGVar8 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B *)
             il2cpp_array_new_specific(pIVar4,2);
    iVar7 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
    pGVar9 = GUILayout_MaxWidth_mE6C754AB0A4366AB7E0BECE6D85A254CA7E553FB
                       ((float)iVar7 * __real_3e800000,(MethodInfo *)0x0);
    *(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB **)(unaff_EBP + -0x20) = pGVar9;
    if (pGVar8 != (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B *)0x0) {
      pIVar10 = (Il2CppObject *)0x0;
      if (pGVar9 != (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)0x0) {
        pIVar10 = IsInst((Il2CppObject *)pGVar9,*(Il2CppClass **)(pGVar8->_padding_ + 0x20));
        if (pIVar10 == (Il2CppObject *)0x0) {
          pMVar15 = (MethodInfo *)0x0;
          pEVar13 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar13,pMVar15);
        }
        pIVar10 = *(Il2CppObject **)(unaff_EBP + -0x20);
      }
      ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt
                ((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)pGVar8,0,pIVar10);
      iVar7 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
      pGVar9 = GUILayout_Height_m6705C2917595CCEA6D934DBB5DD8399DF6F5E464
                         ((float)iVar7,(MethodInfo *)0x0);
      *(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB **)(unaff_EBP + -0x20) = pGVar9;
      pIVar10 = (Il2CppObject *)0x0;
      if (pGVar9 != (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)0x0) {
        pIVar10 = IsInst((Il2CppObject *)pGVar9,*(Il2CppClass **)(pGVar8->_padding_ + 0x20));
        if (pIVar10 == (Il2CppObject *)0x0) {
          pMVar15 = (MethodInfo *)0x0;
          pEVar13 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar13,pMVar15);
        }
        pIVar10 = *(Il2CppObject **)(unaff_EBP + -0x20);
      }
      ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt
                ((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)pGVar8,1,pIVar10);
      GUILayout_BeginVertical_m4609A5F918583C9D6AA571FABAADDC0F0A54EEF3
                (*(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 **)(unaff_EBP + -0x24),pGVar8,
                 (MethodInfo *)0x0);
      pMVar15 =
      Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var
      ;
      iVar7 = *(int *)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(iVar7 + 0x1c);
      *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(iVar7 + 0x20);
      pGVar8 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline
                         (pMVar15);
      VVar14 = GUILayout_BeginScrollView_m605976F974526E1D17F6555A35B6CCBBE7ADB492
                         (*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(unaff_EBP + -0x38),
                          false,true,pGVar8,(MethodInfo *)0x0);
      *(float *)(unaff_EBP + -0x40) = VVar14.___x_0;
      *(undefined4 *)(iVar7 + 0x1c) = *(undefined4 *)(unaff_EBP + -0x40);
      *(float *)(unaff_EBP + -0x3c) = VVar14.___y_1;
      *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(unaff_EBP + -0x3c);
      pSVar1 = *(String_t **)(iVar7 + 8);
      pGVar8 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline
                         (
                         Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var
                         );
      GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(pSVar1,pGVar8,(MethodInfo *)0x0);
      pLVar2 = *(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 **)
                (*(int *)(unaff_EBP + 8) + 0x14);
      if (pLVar2 != (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) {
        pEVar11 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF
                            ((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)
                             (unaff_EBP + -0x70),pLVar2,
                             List_1_GetEnumerator_m7682428CEA645E683C24036BC18A210063AF19D2_RuntimeMethod_var
                            );
        iVar7 = pEVar11->___index_1;
        iVar3 = pEVar11->___version_2;
        pSVar1 = pEVar11->___current_3;
        *(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 **)(unaff_EBP + -0x50) =
             pEVar11->___list_0;
        *(int *)(unaff_EBP + -0x4c) = iVar7;
        *(int *)(unaff_EBP + -0x48) = iVar3;
        *(String_t **)(unaff_EBP + -0x44) = pSVar1;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        while( true ) {
          do {
            bVar5 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                              ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)
                               (unaff_EBP + -0x50),
                               Enumerator_MoveNext_m95FF5A5648AA0531AB6C64FA97B2404010F58B83_RuntimeMethod_var
                              );
            if (!bVar5) {
              *(undefined4 *)(unaff_EBP + -0x30 + *(int *)(unaff_EBP + -0x14) * 4) = 0xf3;
              *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
              FUN_110ce8d2();
              return;
            }
            pIVar10 = *(Il2CppObject **)(unaff_EBP + -0x44);
            if (pIVar10 == (Il2CppObject *)0x0) goto LAB_110ce95c;
            VirtFuncInvoker0<int>::Invoke(5,pIVar10);
            pIVar12 = IsInstClass(pIVar10,
                                  MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var
                                 );
          } while (pIVar12 == (Il2CppObject *)0x0);
          pIVar10 = CastclassClass(pIVar10,
                                   MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var
                                  );
          if (pIVar10 == (Il2CppObject *)0x0) break;
          if (*(char *)&pIVar10[3].field0_0x0 != '\0') {
            *(Il2CppObject **)(unaff_EBP + -0x18) = pIVar10;
          }
        }
      }
    }
  }
LAB_110ce95c:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
