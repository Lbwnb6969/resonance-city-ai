// RVA 0x842dc0 | Placemaker.Ui.GenericMenuNavigator$$<UpdateControls>g__Move|14_0
// PDB: GenericMenuNavigator_U3CUpdateControlsU3Eg__MoveU7C14_0_m77EAB8BDEA200B904AABF75441C9A172CE3B8D3C
// Body: [[10842dc0, 10842e5c] [10842e60, 10842ea2]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10842cc0 GenericMenuNavigator_SelectButton_mAF6FDB8622BD2B6DEEA955A9D718A95D635B7063
// 108838a0 ButtonAudio_Play_mA88FCF686BF0E8A1A00EDC47DF998054B60E4093
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 11032cc0 List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared

void __cdecl
GenericMenuNavigator_U3CUpdateControlsU3Eg__MoveU7C14_0_m77EAB8BDEA200B904AABF75441C9A172CE3B8D3C
          (GenericMenuNavigator_t8DD7647D5CEEB4AE0E944F8565B0F21478F1A333 *param_1,int param_2,
          MethodInfo *param_3)

{
  List_1_tC930FD3BB6BA4225ACDD3DC317BCA69F43A80325 *pLVar1;
  int iVar2;
  uint uVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;
  uint uVar5;

  if (DAT_1151f44c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_IndexOf_m303B0EBC115DC00DCC20B97C7A34B93A38C6E369_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m65B6D484849CB5EE299A6401D50198A6209E1825_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mBC6E3BE334F9069B54AF6841F840740F75D621E2_RuntimeMethod_var)
    ;
    DAT_1151f44c = '\x01';
  }
  if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___navigableButtons_7 ==
      (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) goto LAB_10842e9e;
  uVar3 = List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared
                    ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                     param_1->___navigableButtons_7,(Il2CppObject *)param_1->___selectedButton_8,
                     List_1_IndexOf_m303B0EBC115DC00DCC20B97C7A34B93A38C6E369_RuntimeMethod_var);
  pLVar1 = param_1->___navigableButtons_7;
  uVar5 = uVar3 + param_2;
  if (pLVar1 == (List_1_tC930FD3BB6BA4225ACDD3DC317BCA69F43A80325 *)0x0) goto LAB_10842e9e;
  iVar2 = pLVar1->____size_2;
  if ((int)uVar5 < 0) {
LAB_10842e3f:
    uVar5 = uVar5 + iVar2;
    (param_1->___rapidY_10).___t_2 = (param_1->___rapidY_10).___t_2 - __real_3f800000;
  }
  else if (iVar2 <= (int)uVar5) {
    iVar2 = -iVar2;
    goto LAB_10842e3f;
  }
  if (uVar5 != uVar3) {
    if ((uint)pLVar1->____size_2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    GenericMenuNavigator_SelectButton_mAF6FDB8622BD2B6DEEA955A9D718A95D635B7063
              (param_1,*(NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 **)
                        (pLVar1->____items_1 + uVar5 * 4 + 0x10),(MethodInfo *)0x0);
    if (param_1->___selectedButton_8 ==
        (NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *)0x0) {
LAB_10842e9e:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___selectedButton_8,(MethodInfo *)0x0);
    ButtonAudio_Play_mA88FCF686BF0E8A1A00EDC47DF998054B60E4093(pTVar4,4,1.0,(MethodInfo *)0x0);
  }
  return;
}
