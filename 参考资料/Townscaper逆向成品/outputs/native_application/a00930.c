// RVA 0xa00930 | Placemaker.Ui.SaveMenu$$SortAllCards
// PDB: SaveMenu_SortAllCards_m993802779307F8A45174ABCFB8CABB468894053B
// Body: [[10a00930, 10a00989] [10a0098d, 10a009c8]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3de70 GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
SaveMenu_SortAllCards_m993802779307F8A45174ABCFB8CABB468894053B
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,MethodInfo *param_2)

{
  int iVar1;
  List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *pLVar2;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar3;
  int iVar4;
  uint uVar5;

  if (DAT_115201a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m3CCF0BBABB9195D0C8702E9581A57472A1738B93_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m3CF61E21718800106308F17641E859E62B891FFF_RuntimeMethod_var)
    ;
    DAT_115201a2 = '\x01';
  }
  if (param_1->___saveCards_27 == (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0) {
LAB_10a009c4:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  iVar1 = param_1->___saveCards_27->____size_2;
  uVar5 = 0;
  if (0 < iVar1) {
    iVar4 = 0x10;
    do {
      pLVar2 = param_1->___saveCards_27;
      if (pLVar2 == (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0) goto LAB_10a009c4;
      if ((uint)pLVar2->____size_2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      if ((*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(pLVar2->____items_1 + iVar4) ==
           (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
         (pGVar3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                             (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                               (pLVar2->____items_1 + iVar4),(MethodInfo *)0x0),
         pGVar3 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) goto LAB_10a009c4;
      GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(pGVar3,(MethodInfo *)0x0);
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while ((int)uVar5 < iVar1);
  }
  return;
}
