// RVA 0x2f8540 | Placemaker.Ui.SimpleMessage$$Placemaker.Ui.UiMaster.IUiSetup.OnStart
// PDB: SimpleMessage_Placemaker_Ui_UiMaster_IUiSetup_OnStart_mEE8938056BDC19B109D330CF3B29D2D8E4A34D91
// Body: [[102f8540, 102f85a8] [102f85ac, 102f85df]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f730 Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
SimpleMessage_Placemaker_Ui_UiMaster_IUiSetup_OnStart_mEE8938056BDC19B109D330CF3B29D2D8E4A34D91
          (SimpleMessage_t9F2B162AE3E95AE6F3559BBA44801038293C7A3A *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  List_1_tD77D7CA7819E09437A2C5E4710D0A71B56A0FED3 *pLVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar7;
  float *pfVar8;
  undefined1 local_14 [4];
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_10;

  if (DAT_1151c18a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m6953B0A9D37DE036A0CCF4C07B1B397CCF176CC0_RuntimeMethod_var)
    ;
    DAT_1151c18a = '\x01';
  }
  pTVar6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar6 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pVVar7 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                       (&local_10,pTVar6,(MethodInfo *)0x0);
    pLVar1 = param_1->___backgrounds_9;
    fVar4 = pVVar7->___y_3;
    fVar2 = pVVar7->___z_4;
    (param_1->___startPos_7).___x_2 = pVVar7->___x_2;
    (param_1->___startPos_7).___y_3 = fVar4;
    (param_1->___startPos_7).___z_4 = fVar2;
    if (pLVar1 != (List_1_tD77D7CA7819E09437A2C5E4710D0A71B56A0FED3 *)0x0) {
      if (pLVar1->____size_2 == 0) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      piVar3 = *(int **)(pLVar1->____items_1 + 0x10);
      if (piVar3 != (int *)0x0) {
        pfVar8 = (float *)(**(code **)(*piVar3 + 0x16c))
                                    (local_14,piVar3,*(undefined4 *)(*piVar3 + 0x170));
        fVar2 = pfVar8[1];
        fVar4 = pfVar8[2];
        fVar5 = pfVar8[3];
        (param_1->___defaultColor_8).___r_0 = *pfVar8;
        (param_1->___defaultColor_8).___g_1 = fVar2;
        (param_1->___defaultColor_8).___b_2 = fVar4;
        (param_1->___defaultColor_8).___a_3 = fVar5;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
