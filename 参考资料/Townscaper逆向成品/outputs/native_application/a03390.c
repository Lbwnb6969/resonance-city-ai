// RVA 0xa03390 | Placemaker.SaveSystem$$SaveMetaSaveToDisk
// PDB: SaveSystem_SaveMetaSaveToDisk_m4DDBB593663A7178F39202B656EF31DF52BC88D4
// Body: [[10a03390, 10a034c9]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17b0 AxisCalibrator_get_isValid_m25146C1631F789BB711CB06CFDC49656185F63FD
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101df9c0 U3CU3Ec__DisplayClass53_0_U3CSaveMetaSaveToDiskU3Eg__NoPathRoutineU7C1_m8B05C7B8C47A95949FF2F7010B1B8B6611F8D36F
// 101dfa10 U3CU3Ec__DisplayClass53_0_U3CSaveMetaSaveToDiskU3Eg__SaveSaveU7C0_m3C0F9E91E6A06211847BB588ADA31FB06B2FAE4F
// 103d5e50 MetaSave_get_isSaving_mD2807EB3C36D3BCCD996AED23296922A0B30ADC3
// 10a3c770 Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
// 10a48ec0 MonoBehaviour_StartCoroutine_Auto_m78A5B32C9E51A3C64C19BB73ED4A9A9B7536677A
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B

void __cdecl
SaveSystem_SaveMetaSaveToDisk_m4DDBB593663A7178F39202B656EF31DF52BC88D4
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,
          MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *param_2,bool param_3,
          MethodInfo *param_4)

{
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar1;
  bool bVar2;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar3;
  Il2CppObject *pIVar4;
  String_t *pSVar5;
  String_t *pSVar6;

  if (DAT_115201ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass53_0_tA404E1D2C349CD6D736063A0EECC54877C1B2CBA_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral42F46214EF20E823A9EACD214B75488E5358C336);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralC1F0B00E89DC0784D9D17927E029160471F0D45A);
    DAT_115201ad = '\x01';
  }
  pBVar3 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass53_0_tA404E1D2C349CD6D736063A0EECC54877C1B2CBA_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar3,(MethodInfo *)0x0);
  if (pBVar3 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar3->___name_0 = (String_t *)param_2;
    pBVar3->___screenAspectRatio_1 = (float)param_1;
    *(bool *)&(pBVar3->___referenceResolution_2).___x_0 = param_3;
    if (param_2 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
      bVar2 = AxisCalibrator_get_isValid_m25146C1631F789BB711CB06CFDC49656185F63FD
                        ((AxisCalibrator_t12B3A7D897E39A8D6B763A9485C82D37762A0E2D *)param_2,
                         (MethodInfo *)0x0);
      pMVar1 = (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)pBVar3->___name_0;
      if (bVar2) {
        if (pMVar1 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
          pSVar6 = pMVar1->___path_4;
          pSVar5 = _stringLiteralC1F0B00E89DC0784D9D17927E029160471F0D45A;
LAB_10a0348a:
          pSVar5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                             (pSVar5,pSVar6,(MethodInfo *)0x0);
          pSVar6 = pBVar3->___name_0;
          if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
              0)) {
            il2cpp_runtime_class_init
                      (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
          }
          Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
                    ((Il2CppObject *)pSVar5,
                     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar6,(MethodInfo *)0x0);
          return;
        }
      }
      else if (pMVar1 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
        bVar2 = MetaSave_get_isSaving_mD2807EB3C36D3BCCD996AED23296922A0B30ADC3
                          (pMVar1,(MethodInfo *)0x0);
        pSVar6 = pBVar3->___name_0;
        if (bVar2) {
          if (pSVar6 != (String_t *)0x0) {
            pSVar6 = *(String_t **)&pSVar6->___m_firstChar_1;
            pSVar5 = _stringLiteral42F46214EF20E823A9EACD214B75488E5358C336;
            goto LAB_10a0348a;
          }
        }
        else if (pSVar6 != (String_t *)0x0) {
          if ((char)pSVar6[3].___m_stringLength_0 != '\0') {
            U3CU3Ec__DisplayClass53_0_U3CSaveMetaSaveToDiskU3Eg__SaveSaveU7C0_m3C0F9E91E6A06211847BB588ADA31FB06B2FAE4F
                      ((U3CU3Ec__DisplayClass53_0_tA404E1D2C349CD6D736063A0EECC54877C1B2CBA *)pBVar3
                       ,false,(MethodInfo *)0x0);
            return;
          }
          pIVar4 = U3CU3Ec__DisplayClass53_0_U3CSaveMetaSaveToDiskU3Eg__NoPathRoutineU7C1_m8B05C7B8C47A95949FF2F7010B1B8B6611F8D36F
                             ((U3CU3Ec__DisplayClass53_0_tA404E1D2C349CD6D736063A0EECC54877C1B2CBA *
                              )pBVar3,(MethodInfo *)0x0);
          MonoBehaviour_StartCoroutine_Auto_m78A5B32C9E51A3C64C19BB73ED4A9A9B7536677A
                    ((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)param_1,pIVar4,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
