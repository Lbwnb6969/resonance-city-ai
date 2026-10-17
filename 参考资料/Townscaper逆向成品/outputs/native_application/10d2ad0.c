// RVA 0x10d2ad0 | FuryStudios.FurySDK.ShowIfAttribute$$Validate
// PDB: ShowIfAttribute_Validate_m1C9781F8F0756FE091BF354850DA4F8607DCADD3
// Body: [[110d2ad0, 110d2ccc]]
// Direct callees:
// 1003e070 Invoke
// 1003e600 Invoke
// 1003e660 Invoke
// 10128030 il2cpp_object_unbox
// 101280f0 il2cpp_runtime_class_init
// 1018e530 RaiseInvalidCastException
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103bcea0 Ref_Equal_mA7CCFB984697A4E40EE7BE8919C2A31BF952ED6F
// 10533880 ConstructorInfo_op_Inequality_m14EF5800ABCDCE484FEC9C73ED6D84E8343442CC
// 10827320 Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C
// 10827c80 Type_GetProperty_mF9677E24A43BADE21DE5E45E0BD0CB881BAB4C89
// 10827ef0 Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E
// 10d85030 Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B

bool __cdecl
ShowIfAttribute_Validate_m1C9781F8F0756FE091BF354850DA4F8607DCADD3
          (Il2CppObject *param_1,StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *param_2,
          MethodInfo *param_3)

{
  Il2CppType *pIVar1;
  bool bVar2;
  Type_t *pTVar3;
  Il2CppObject *pIVar4;
  String_t *pSVar5;
  String_t *pSVar6;
  undefined3 extraout_var;
  String_t *pSVar7;
  Il2CppObject *extraout_EAX;
  char *pcVar8;
  Exception_t *pEVar9;
  String_t **ppSVar10;
  uint uVar11;
  MethodInfo *pMVar12;

  if (DAT_11523aaf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata((uint *)&Type_t_il2cpp_TypeInfo_var);
    DAT_11523aaf = '\x01';
  }
  if (param_1 != (Il2CppObject *)0x0) {
    pTVar3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(param_1,(MethodInfo *)0x0);
    uVar11 = 0;
    if (param_2 != (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)0x0) {
      ppSVar10 = param_2->m_Items;
      do {
        if (param_2->_padding_ <= (int)uVar11) {
          return true;
        }
        if ((uint)param_2->_padding_ <= uVar11) {
          pMVar12 = (MethodInfo *)0x0;
          pEVar9 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar9,pMVar12);
        }
        if (pTVar3 == (Type_t *)0x0) break;
        pSVar7 = *ppSVar10;
        pIVar4 = (Il2CppObject *)
                 Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C
                           (pTVar3,pSVar7,(MethodInfo *)0x0);
        bVar2 = ConstructorInfo_op_Inequality_m14EF5800ABCDCE484FEC9C73ED6D84E8343442CC
                          ((ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B *)pIVar4,
                           (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          if (pIVar4 == (Il2CppObject *)0x0) break;
          pSVar5 = (String_t *)VirtFuncInvoker0<int>::Invoke(0x13,pIVar4);
          pIVar1 = Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
          if ((Type_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
             (Type_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
            il2cpp_runtime_class_init(Type_t_il2cpp_TypeInfo_var);
          }
          pSVar6 = (String_t *)
                   Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E
                             ((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9)pIVar1,
                              (MethodInfo *)0x0);
          bVar2 = Ref_Equal_mA7CCFB984697A4E40EE7BE8919C2A31BF952ED6F
                            (pSVar5,pSVar6,(MethodInfo *)0x0);
          if (!bVar2) goto LAB_110d2be6;
          bVar2 = VirtFuncInvoker1<bool,Il2CppObject_*>::Invoke(0x14,pIVar4,param_1);
          pIVar4 = (Il2CppObject *)CONCAT31(extraout_var,bVar2);
LAB_110d2c6c:
          if (pIVar4 == (Il2CppObject *)0x0) break;
          if (((pIVar4->field0_0x0).klass)->element_class !=
              Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var->element_class)
          {
                    /* WARNING: Subroutine does not return */
            RaiseInvalidCastException
                      (pIVar4,Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)
            ;
          }
          pcVar8 = il2cpp_object_unbox(pIVar4);
          if (*pcVar8 == '\0') {
            return false;
          }
        }
        else {
LAB_110d2be6:
          pIVar4 = (Il2CppObject *)
                   Type_GetProperty_mF9677E24A43BADE21DE5E45E0BD0CB881BAB4C89
                             (pTVar3,pSVar7,(MethodInfo *)0x0);
          bVar2 = ConstructorInfo_op_Inequality_m14EF5800ABCDCE484FEC9C73ED6D84E8343442CC
                            ((ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B *)pIVar4,
                             (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B *)0x0,
                             (MethodInfo *)0x0);
          if (bVar2) {
            if (pIVar4 == (Il2CppObject *)0x0) break;
            pSVar7 = (String_t *)VirtFuncInvoker0<int>::Invoke(0x14,pIVar4);
            pIVar1 = Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
            if ((Type_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
               (Type_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
              il2cpp_runtime_class_init(Type_t_il2cpp_TypeInfo_var);
            }
            pSVar5 = (String_t *)
                     Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E
                               ((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9)pIVar1,
                                (MethodInfo *)0x0);
            bVar2 = Ref_Equal_mA7CCFB984697A4E40EE7BE8919C2A31BF952ED6F
                              (pSVar7,pSVar5,(MethodInfo *)0x0);
            if (bVar2) {
              VirtActionInvoker2<String_t_*,String_t_*>::Invoke
                        (0x1b,pIVar4,(String_t *)param_1,(String_t *)0x0);
              pIVar4 = extraout_EAX;
              goto LAB_110d2c6c;
            }
          }
        }
        uVar11 = uVar11 + 1;
        ppSVar10 = ppSVar10 + 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
