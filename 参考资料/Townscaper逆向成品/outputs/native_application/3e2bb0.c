// RVA 0x3e2bb0 | Placemaker.Ui.ObjExporter$$Export
// PDB: ObjExporter_Export_mFAFD7875E3193B5E4200FF32CC1672FA1F98DAFE
// Body: [[103e2bb0, 103e2e07]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 101280f0 il2cpp_runtime_class_init
// 1018e500 IsInst
// 1018e700 il2cpp_codegen_get_array_type_mismatch_exception
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103dd4b0 ObjExporter_Action_mB96C5D6092946BC5786C6BE2C6CD015A04392778
// 103e5930 UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10ac5b70 FileBrowser_SaveFile_m451DC3FCEFCF4419587DB0DF3C292D2BF9E6AA82
// 10b19040 Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A
// 10b198a0 Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE
// 10c1d150 Singleton_1_get_Instance_m4E8C37BD2935D7C403E1FC595DD35897728836B4_gshared
// 10eda110 Path_GetFileNameWithoutExtension_m52BA8E84FC8949E8A9F60D024742189907B997D2
// 10f0a070 String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2

void __cdecl
ObjExporter_Export_mFAFD7875E3193B5E4200FF32CC1672FA1F98DAFE
          (ObjExporter_t9F614C11BF7AC2CAC258AD8A31553921ACD0C77D *param_1,MethodInfo *param_2)

{
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar1;
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar2;
  String_t *pSVar3;
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar4;
  ObjExporter_t9F614C11BF7AC2CAC258AD8A31553921ACD0C77D *pOVar5;
  bool bVar6;
  String_t *pSVar7;
  FileBrowser_t31868B98C085AF75757CAD6D10A9911254D0028E *pFVar8;
  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *pSVar9;
  Il2CppObject *pIVar10;
  Exception_t *pEVar11;
  MethodInfo *pMVar12;

  pOVar5 = param_1;
  if (DAT_1151c896 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Singleton_1_get_Instance_mCED330DE853BBDFBF90FDB47109C277CC35E9E3C_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Singleton_1_t887DC8229FBD4CC71E760D8D1CF1867EDCBA6673_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral15B6D44C83AA14827938C10E0B8529385D1D138D);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2E7287D28F636AC612F369BF9EFB2B6F0AE29363);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5D0DA8227C9BA628271EF153D972C241A212ABC2);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral690BF02630AC0BD6AA6BD08D2C36A28E1FC54F3E);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
    DAT_1151c896 = '\x01';
  }
  if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
      (pSVar1 = param_1->___master_4->___saveSystem_35,
      pSVar1 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) &&
     (pSVar1->___settingsData_10 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0))
  {
    pMVar2 = pSVar1->___currentMetaSave_14;
    pSVar7 = (pSVar1->___settingsData_10->___objExport_10).___path_0;
    param_1 = (ObjExporter_t9F614C11BF7AC2CAC258AD8A31553921ACD0C77D *)
              _stringLiteral5D0DA8227C9BA628271EF153D972C241A212ABC2;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar2,(MethodInfo *)0x0)
    ;
    if (bVar6) {
      if (((pOVar5->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
          (pSVar1 = pOVar5->___master_4->___saveSystem_35,
          pSVar1 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) ||
         (pMVar2 = pSVar1->___currentMetaSave_14,
         pMVar2 == (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0)) goto LAB_103e2de9;
      if (pMVar2->___state_18 != 8) {
        pSVar3 = pMVar2->___fileName_5;
        if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0')
           && (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished ==
               0)) {
          il2cpp_runtime_class_init
                    (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
        }
        param_1 = (ObjExporter_t9F614C11BF7AC2CAC258AD8A31553921ACD0C77D *)
                  Path_GetFileNameWithoutExtension_m52BA8E84FC8949E8A9F60D024742189907B997D2
                            (pSVar3,(MethodInfo *)0x0);
      }
    }
    if (((pSVar7 == (String_t *)0x0) ||
        (bVar6 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2
                           (pSVar7,_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709,
                            (MethodInfo *)0x0), !bVar6)) ||
       (bVar6 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(pSVar7,(MethodInfo *)0x0)
       , !bVar6)) {
      if ((pOVar5->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
         (pUVar4 = pOVar5->___master_4->___uiMaster_4,
         pUVar4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)) goto LAB_103e2de9;
      pSVar7 = UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
                         (pUVar4,_stringLiteral2E7287D28F636AC612F369BF9EFB2B6F0AE29363,
                          (MethodInfo *)0x0);
      bVar6 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(pSVar7,(MethodInfo *)0x0);
      if (!bVar6) {
        Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A
                  (pSVar7,(MethodInfo *)0x0);
      }
    }
    if ((Singleton_1_t887DC8229FBD4CC71E760D8D1CF1867EDCBA6673_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (Singleton_1_t887DC8229FBD4CC71E760D8D1CF1867EDCBA6673_il2cpp_TypeInfo_var->cctor_finished ==
        0)) {
      il2cpp_runtime_class_init
                (Singleton_1_t887DC8229FBD4CC71E760D8D1CF1867EDCBA6673_il2cpp_TypeInfo_var);
    }
    pFVar8 = (FileBrowser_t31868B98C085AF75757CAD6D10A9911254D0028E *)
             Singleton_1_get_Instance_m4E8C37BD2935D7C403E1FC595DD35897728836B4_gshared
                       (
                       Singleton_1_get_Instance_mCED330DE853BBDFBF90FDB47109C277CC35E9E3C_RuntimeMethod_var
                       );
    pSVar9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)
             il2cpp_array_new_specific
                       (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var,1
                       );
    if (pSVar9 != (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)0x0) {
      if ((_stringLiteral690BF02630AC0BD6AA6BD08D2C36A28E1FC54F3E != (String_t *)0x0) &&
         (pIVar10 = IsInst((Il2CppObject *)_stringLiteral690BF02630AC0BD6AA6BD08D2C36A28E1FC54F3E,
                           *(Il2CppClass **)(pSVar9->_padding_ + 0x20)),
         pIVar10 == (Il2CppObject *)0x0)) {
        pMVar12 = (MethodInfo *)0x0;
        pEVar11 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar11,pMVar12);
      }
      if (pSVar9->_padding_ == 0) {
        pMVar12 = (MethodInfo *)0x0;
        pEVar11 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar11,pMVar12);
      }
      pSVar9->m_Items[0] = _stringLiteral690BF02630AC0BD6AA6BD08D2C36A28E1FC54F3E;
      if (pFVar8 != (FileBrowser_t31868B98C085AF75757CAD6D10A9911254D0028E *)0x0) {
        pSVar7 = FileBrowser_SaveFile_m451DC3FCEFCF4419587DB0DF3C292D2BF9E6AA82
                           (pFVar8,_stringLiteral15B6D44C83AA14827938C10E0B8529385D1D138D,pSVar7,
                            (String_t *)param_1,pSVar9,(MethodInfo *)0x0);
        ObjExporter_Action_mB96C5D6092946BC5786C6BE2C6CD015A04392778
                  (pOVar5,pSVar7,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_103e2de9:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
