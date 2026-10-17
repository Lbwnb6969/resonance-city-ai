// RVA 0x1df76a | Recovered.function.called_by_1df560
// PDB: FUN_101df76a
// Body: [[101df76a, 101df8de] [101df9aa, 101df9b1]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 101df92e FUN_101df92e
// 103e5930 UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 106ebae0 DateTime_get_InternalTicks_mCFC896BACE13EE3E20CF7AC035040F00F7CEF55B
// 109fde20 SaveData__ctor_m54D969F11736980DA37FE2AF8CE92BC49FB3E927
// 10a00fa0 SaveSystem_ChangeState_m9CEF27747C53226925145C52040950CB19866597
// 10a02f70 SaveSystem_MaybeUpdateTexture_mDCDA658E3B2C087F8388E5FB72D1C59306D9D48E
// 10a71350 File_GetLastWriteTimeUtc_m57ABF9D7B4CDAF0FC8F279DC52DAD63E73FC4E05
// 10ed9980 Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF

void FUN_101df76a(void)

{
  int iVar1;
  int iVar2;
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar3;
  Il2CppClass *pIVar4;
  String_t *pSVar5;
  SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *pSVar6;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  Il2CppObject *unaff_EDI;
  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 DVar7;
  long64 lVar8;
  float fVar9;

  if (unaff_EDI != (Il2CppObject *)0x0) {
    InterfaceFuncInvoker0<int>::Invoke
              (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,unaff_EDI
              );
  }
  if (*(Exception_t **)(unaff_EBP + -0x14) == (Exception_t *)0x0) {
    iVar1 = *unaff_ESI;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x28) == 0) {
        pSVar6 = (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)
                 il2cpp_codegen_object_new
                           (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188_il2cpp_TypeInfo_var);
        *(SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 **)(unaff_EBP + -0x20) = pSVar6;
        SaveData__ctor_m54D969F11736980DA37FE2AF8CE92BC49FB3E927(pSVar6,(MethodInfo *)0x0);
        *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(unaff_EBP + -0x20);
        if (*(SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 **)(unaff_EBX + 0x10) !=
            (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0) {
          SaveSystem_ChangeState_m9CEF27747C53226925145C52040950CB19866597
                    (*(SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 **)(unaff_EBX + 0x10),
                     (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)*unaff_ESI,0x20,
                     (MethodInfo *)0x0);
          ExceptionList = *(void **)(unaff_EBP + -0xc);
          return;
        }
      }
      else if (((*(int *)(unaff_EBX + 0x10) != 0) &&
               (iVar2 = *(int *)(*(int *)(unaff_EBX + 0x10) + 0xc), iVar2 != 0)) &&
              (pUVar3 = *(UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 **)(iVar2 + 0xc),
              pUVar3 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)) {
        pSVar5 = UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
                           (pUVar3,_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709,
                            (MethodInfo *)0x0);
        iVar2 = *unaff_ESI;
        *(String_t **)(unaff_EBP + -0x1c) = pSVar5;
        pIVar4 = Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
        if (iVar2 != 0) {
          pSVar5 = *(String_t **)(iVar2 + 0xc);
          *(String_t **)(unaff_EBP + -0x20) = pSVar5;
          if ((pIVar4->has_cctor != '\0') && (pIVar4->cctor_finished == 0)) {
            il2cpp_runtime_class_init(pIVar4);
            pSVar5 = *(String_t **)(unaff_EBP + -0x20);
          }
          pSVar5 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF
                             (*(String_t **)(unaff_EBP + -0x1c),pSVar5,(MethodInfo *)0x0);
          DVar7 = File_GetLastWriteTimeUtc_m57ABF9D7B4CDAF0FC8F279DC52DAD63E73FC4E05
                            (pSVar5,(MethodInfo *)0x0);
          *(ulong64 *)(unaff_EBP + -0x34) = DVar7.___dateData_44;
          lVar8 = DateTime_get_InternalTicks_mCFC896BACE13EE3E20CF7AC035040F00F7CEF55B
                            ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)
                             (unaff_EBP + -0x34),(MethodInfo *)0x0);
          *(long64 *)(iVar1 + 0x20) = lVar8;
          iVar1 = *unaff_ESI;
          fVar9 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0)
          ;
          *(float *)(unaff_EBP + -0x20) = fVar9;
          if (iVar1 != 0) {
            *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(unaff_EBP + -0x20);
            if (*(SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 **)(unaff_EBX + 0x10) !=
                (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0) {
              SaveSystem_MaybeUpdateTexture_mDCDA658E3B2C087F8388E5FB72D1C59306D9D48E
                        (*(SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 **)
                          (unaff_EBX + 0x10),
                         (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)*unaff_ESI,
                         (MethodInfo *)0x0);
              if (*(SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 **)(unaff_EBX + 0x10) !=
                  (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0) {
                SaveSystem_ChangeState_m9CEF27747C53226925145C52040950CB19866597
                          (*(SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 **)
                            (unaff_EBX + 0x10),
                           (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)*unaff_ESI,4,
                           (MethodInfo *)0x0);
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                FUN_101df92e();
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x14),(MethodInfo *)0x0);
}
