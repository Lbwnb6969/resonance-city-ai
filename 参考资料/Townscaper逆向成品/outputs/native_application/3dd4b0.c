// RVA 0x3dd4b0 | Placemaker.Ui.ObjExporter$$Action
// PDB: ObjExporter_Action_mB96C5D6092946BC5786C6BE2C6CD015A04392778
// Body: [[103dd4b0, 103dd82a]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103de5e0 ObjExporter_Do_mAE4A7AEF7ACDC3A97A024D2364A4630471D25083
// 103e5930 UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
// 10a037d0 SaveSystem_SetSettingsDirty_mD4FFF1F8BED42A5DBE32A3F956E5B0BC9B9F5219
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10a70db0 File_Create_m2C278C920C8B40322EB632EC620A83B021C90725
// 10afb9d0 TailStream_Clear_m342CD7E4F95BA76B3C061A63D471A34CEBAC138C
// 10ed9c20 Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE
// 10eff0b0 StreamWriter__ctor_m6A81CE9EDAB3AAB4270E88539EA83D945954CD0E
// 10f04510 String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
// 10f04a30 String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
// 10f04d40 String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17
// 10f0a070 String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2
// 11149100 ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED

void __cdecl
ObjExporter_Action_mB96C5D6092946BC5786C6BE2C6CD015A04392778
          (ObjExporter_t9F614C11BF7AC2CAC258AD8A31553921ACD0C77D *param_1,String_t *param_2,
          MethodInfo *param_3)

{
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar1;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar2;
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar3;
  TexturePngMaster_t66DC98DAEB68DC2C477793AAAD65DD4068F9A252 *pTVar4;
  PngTexture_t89D9DA2502E70FAFB9C1AA22ED6922734AEB6457 *pPVar5;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar6;
  bool bVar7;
  String_t *pSVar8;
  String_t *pSVar9;
  StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 *pSVar10;
  Il2CppObject *pIVar11;
  FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *pFVar12;
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar13;
  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *pTVar14;
  String_t *local_10;
  uint local_c;
  String_t *local_8;

  if (DAT_1151c897 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2703934E990F4D74F9E97D5985CDF284A870C0E0);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2E7287D28F636AC612F369BF9EFB2B6F0AE29363);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral6D96869340ADD87F7447F6AFF75B4780B7B8816F);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralB8115336A2D45330497C785FD08801D420C6D239);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralE9D283F5FAA05C8B124BD3D50D0E4887BA93C4E8);
    DAT_1151c897 = '\x01';
  }
  if ((param_2 == (String_t *)0x0) ||
     (bVar7 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                        (param_2,_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709,
                         (MethodInfo *)0x0), bVar7)) {
    return;
  }
  if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     ((pSVar1 = param_1->___master_4->___saveSystem_35,
      pSVar1 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0 &&
      (pSVar2 = pSVar1->___settingsData_10,
      pSVar2 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)))) {
    if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    }
    pSVar8 = Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE
                       (param_2,(MethodInfo *)0x0);
    local_8 = pSVar8;
    if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
       (pUVar3 = param_1->___master_4->___uiMaster_4,
       pUVar3 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)) {
      pSVar9 = UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
                         (pUVar3,_stringLiteral2E7287D28F636AC612F369BF9EFB2B6F0AE29363,
                          (MethodInfo *)0x0);
      bVar7 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                        (pSVar8,pSVar9,(MethodInfo *)0x0);
      if (bVar7) {
        pSVar8 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
      }
      bVar7 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2
                        (pSVar8,(pSVar2->___objExport_10).___path_0,(MethodInfo *)0x0);
      if (bVar7) {
        (pSVar2->___objExport_10).___path_0 = pSVar8;
        if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           || (pSVar1 = param_1->___master_4->___saveSystem_35,
              pSVar1 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0))
        goto LAB_103dd826;
        SaveSystem_SetSettingsDirty_mD4FFF1F8BED42A5DBE32A3F956E5B0BC9B9F5219
                  (pSVar1,(MethodInfo *)0x0);
      }
      pSVar8 = _stringLiteralB8115336A2D45330497C785FD08801D420C6D239;
      local_10 = _stringLiteralE9D283F5FAA05C8B124BD3D50D0E4887BA93C4E8;
      ObjExporter_Do_mAE4A7AEF7ACDC3A97A024D2364A4630471D25083
                (param_1,_stringLiteralE9D283F5FAA05C8B124BD3D50D0E4887BA93C4E8,(MethodInfo *)0x0);
      pSVar10 = (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 *)
                il2cpp_codegen_object_new
                          (
                          StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var
                          );
      StreamWriter__ctor_m6A81CE9EDAB3AAB4270E88539EA83D945954CD0E
                (pSVar10,param_2,false,(MethodInfo *)0x0);
      if (pSVar10 != (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 *)0x0) {
        (**(code **)(pSVar10->_padding_ + 0x154))
                  (pSVar10,param_1->___outputString_6,*(undefined4 *)(pSVar10->_padding_ + 0x158));
        (**(code **)(pSVar10->_padding_ + 0xfc))
                  (pSVar10,*(undefined4 *)(pSVar10->_padding_ + 0x100));
        pSVar9 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17
                           (_stringLiteral6D96869340ADD87F7447F6AFF75B4780B7B8816F,
                            (Il2CppObject *)pSVar8,(MethodInfo *)0x0);
        param_1->___mtlString_7 = pSVar9;
        if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0')
           && (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished ==
               0)) {
          il2cpp_runtime_class_init
                    (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
        }
        local_c = (uint)*(ushort *)
                         ((int)Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->
                               static_fields + 6);
        pIVar11 = il2cpp_value_box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var
                                   ,&local_c);
        pSVar9 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                           (_stringLiteral2703934E990F4D74F9E97D5985CDF284A870C0E0,
                            (Il2CppObject *)local_8,pIVar11,(Il2CppObject *)local_10,
                            (MethodInfo *)0x0);
        pSVar10 = (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 *)
                  il2cpp_codegen_object_new
                            (
                            StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var
                            );
        StreamWriter__ctor_m6A81CE9EDAB3AAB4270E88539EA83D945954CD0E
                  (pSVar10,pSVar9,false,(MethodInfo *)0x0);
        if (pSVar10 != (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 *)0x0) {
          (**(code **)(pSVar10->_padding_ + 0x154))
                    (pSVar10,param_1->___mtlString_7,*(undefined4 *)(pSVar10->_padding_ + 0x158));
          (**(code **)(pSVar10->_padding_ + 0xfc))
                    (pSVar10,*(undefined4 *)(pSVar10->_padding_ + 0x100));
          if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0
               ) && (pTVar4 = param_1->___master_4->___texturePngMaster_34,
                    pTVar4 != (TexturePngMaster_t66DC98DAEB68DC2C477793AAAD65DD4068F9A252 *)0x0)) &&
             (pPVar5 = pTVar4->___houseTex_5,
             pPVar5 != (PngTexture_t89D9DA2502E70FAFB9C1AA22ED6922734AEB6457 *)0x0)) {
            pOVar6 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pPVar5->___gameTex_1;
            if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
            }
            bVar7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                              (pOVar6,(MethodInfo *)0x0);
            if (bVar7) {
              pTVar14 = pPVar5->___gameTex_1;
            }
            else {
              pTVar14 = pPVar5->___srcTex_0;
            }
            if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
            }
            local_10 = (String_t *)
                       (uint)*(ushort *)
                              ((int)Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var
                                    ->static_fields + 6);
            pIVar11 = il2cpp_value_box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var
                                       ,&local_10);
            pSVar8 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                               (_stringLiteral2703934E990F4D74F9E97D5985CDF284A870C0E0,
                                (Il2CppObject *)local_8,pIVar11,(Il2CppObject *)pSVar8,
                                (MethodInfo *)0x0);
            pFVar12 = File_Create_m2C278C920C8B40322EB632EC620A83B021C90725
                                (pSVar8,(MethodInfo *)0x0);
            pBVar13 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED
                                (pTVar14,(MethodInfo *)0x0);
            if ((pBVar13 != (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)0x0) &&
               (pFVar12 != (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)0x0)) {
              (**(code **)(pFVar12->_padding_ + 0x1a4))
                        (pFVar12,pBVar13,0,pBVar13->_padding_,
                         *(undefined4 *)(pFVar12->_padding_ + 0x1a8));
              TailStream_Clear_m342CD7E4F95BA76B3C061A63D471A34CEBAC138C
                        ((TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C *)pFVar12,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_103dd826:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
