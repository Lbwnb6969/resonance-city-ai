// RVA 0x1e0490 | Placemaker.Ui.DisableableButton.<>c__DisplayClass7_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__1
// PDB: U3CU3Ec__DisplayClass7_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_mE060CA5CA8CF5D25D26983D6763CD98014F7861A
// Body: [[101e0490, 101e0580]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10836f90 ExtraMath_SetA_m5B95B685E9833790822EFD1B8FC45910FB071830
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616

void __cdecl
U3CU3Ec__DisplayClass7_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_mE060CA5CA8CF5D25D26983D6763CD98014F7861A
          (U3CU3Ec__DisplayClass7_0_t2D2D5F44546698252BBD5E1151B6BEC677BE60FF *param_1,float param_2
          ,MethodInfo *param_3)

{
  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *pGVar1;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar2;
  float *pfVar3;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar4;
  float fVar5;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_14;

  if (DAT_1151afa7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_1151afa7 = '\x01';
  }
  if ((param_1->___U3CU3E4__this_0 !=
       (DisableableButton_t1FFBF591208239F608B0F9F3FADEFF79EA469513 *)0x0) &&
     (pGVar1 = param_1->___U3CU3E4__this_0->___text_5,
     pGVar1 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0)) {
    pfVar3 = (float *)(**(code **)(pGVar1->_padding_ + 0x16c))
                                (&local_14,pGVar1,*(undefined4 *)(pGVar1->_padding_ + 0x170));
    local_14.___r_0 = *pfVar3;
    local_14.___g_1 = pfVar3[1];
    local_14.___b_2 = pfVar3[2];
    local_14.___a_3 = pfVar3[3];
    fVar5 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(1.0,0.5,param_2,(MethodInfo *)0x0);
    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
           == 0)) {
      il2cpp_runtime_class_init
                (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    }
    CVar2.___g_1 = local_14.___g_1;
    CVar2.___r_0 = local_14.___r_0;
    CVar2.___b_2 = local_14.___b_2;
    CVar2.___a_3 = local_14.___a_3;
    pCVar4 = ExtraMath_SetA_m5B95B685E9833790822EFD1B8FC45910FB071830
                       (&local_14,CVar2,fVar5,(MethodInfo *)0x0);
    (**(code **)(pGVar1->_padding_ + 0x174))
              (pGVar1,pCVar4->___r_0,pCVar4->___g_1,pCVar4->___b_2,pCVar4->___a_3,
               *(undefined4 *)(pGVar1->_padding_ + 0x178));
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
