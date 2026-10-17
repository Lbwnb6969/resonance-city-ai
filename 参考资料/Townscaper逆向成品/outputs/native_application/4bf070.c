// RVA 0x4bf070 | Placemaker.Ui.CreditsMenu$$MaybeAdaptAutoScrollSpeed
// PDB: CreditsMenu_MaybeAdaptAutoScrollSpeed_m13BEFEF277E8D416C386CB8C3A50C97AD221735F
// Body: [[104bf070, 104bf178]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 104bf180 CreditsMenu_MaybeUpdateScreenSize_m2342F013A0B59CE19FB5ECF3C78A102EC783C73C
// 1066d8c0 Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0
// 10875060 BetterScrollRect_GetScrollableSize_mA1A82514CE3585D7631C7228C4AC67E564676758
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43af0 Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
// 10ed4b60 LayoutRebuilder_ForceRebuildLayoutImmediate_mD06D080BA3FC8111AF814FA67ED8764F8CFECC2C

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
CreditsMenu_MaybeAdaptAutoScrollSpeed_m13BEFEF277E8D416C386CB8C3A50C97AD221735F
          (CreditsMenu_tE101B90DEBA1E200189C86C0CFA340BA4872BB12 *param_1,MethodInfo *param_2)

{
  bool bVar1;
  int iVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar4;
  bool bVar5;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar6;
  float fVar7;

  if (DAT_1151d0ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    DAT_1151d0ff = '\x01';
  }
  iVar2 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0((MethodInfo *)0x0);
  bVar5 = false;
  if (param_1->___openingFrame_11 < iVar2) {
    bVar5 = (param_1->___autoScroll_10).___U3CspeedIsSetU3Ek__BackingField_1 == false;
  }
  bVar1 = CreditsMenu_MaybeUpdateScreenSize_m2342F013A0B59CE19FB5ECF3C78A102EC783C73C
                    (param_1,(MethodInfo *)0x0);
  if (!bVar1 && !bVar5) {
    return;
  }
  if (param_1->___scrollRect_6 != (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)0x0)
  {
    pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___scrollRect_6,(MethodInfo *)0x0);
    if ((LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585_il2cpp_TypeInfo_var->
        cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585_il2cpp_TypeInfo_var);
    }
    pRVar4 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
    if ((pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
       (*(Il2CppClass **)pTVar3 ==
        RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)) {
      pRVar4 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar3;
    }
    LayoutRebuilder_ForceRebuildLayoutImmediate_mD06D080BA3FC8111AF814FA67ED8764F8CFECC2C
              (pRVar4,(MethodInfo *)0x0);
    if (param_1->___scrollRect_6 !=
        (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)0x0) {
      VVar6 = BetterScrollRect_GetScrollableSize_mA1A82514CE3585D7631C7228C4AC67E564676758
                        (param_1->___scrollRect_6,(MethodInfo *)0x0);
      fVar7 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
                        (VVar6.___y_1 * ___real_37d6bf95,0.035,0.05,(MethodInfo *)0x0);
      (param_1->___autoScroll_10).___U3CspeedU3Ek__BackingField_2 = fVar7;
      (param_1->___autoScroll_10).___U3CspeedIsSetU3Ek__BackingField_1 = true;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
