// RVA 0x10d1f30 | FuryStudios.FurySDK.Utils.SafeArea$$Awake
// PDB: SafeArea_Awake_m70F9181439B14BBF7293C951B2D9220243B683CC
// Body: [[110d1f30, 110d2081]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f090 Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared
// 10661fa0 RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D
// 10662000 RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798
// 106681c0 Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A
// 10672c50 Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43400 Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E
// 10a4ac60 Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC

void __cdecl
SafeArea_Awake_m70F9181439B14BBF7293C951B2D9220243B683CC
          (SafeArea_t2A5ADA7E8D8C5CF656B470D65FC75AB0603DBB58 *param_1,MethodInfo *param_2)

{
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar1;
  Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 *pSVar2;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar3;
  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA *pCVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar6;
  float fVar7;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar8;
  float local_c;
  float local_8;

  if (DAT_11523aaa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral4E8A8460777BA546EF33027F63BAAF6396716FBE);
    DAT_11523aaa = '\x01';
  }
  pSVar2 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A
                     (_stringLiteral4E8A8460777BA546EF33027F63BAAF6396716FBE,(MethodInfo *)0x0);
  pOVar3 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
           il2cpp_codegen_object_new
                     (Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
  Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E
            ((Material_t8927C00353A72755313F046D0CE85178AE8218EE *)pOVar3,pSVar2,(MethodInfo *)0x0);
  param_1->___debugDrawMat_18 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)pOVar3;
  if (pOVar3 != (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) {
    Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(pOVar3,0x3d,(MethodInfo *)0x0);
    pCVar4 = (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA *)
             Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5_RuntimeMethod_var
                       );
    param_1->___parentCanvas_10 = pCVar4;
    pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        (MethodInfo *)0x0);
    pRVar6 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
    if ((pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
       (*(Il2CppClass **)pTVar5 ==
        RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)) {
      pRVar6 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar5;
    }
    param_1->___rectTransform_9 = pRVar6;
    VVar8 = Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42((MethodInfo *)0x0);
    fVar7 = local_c * __real_3f000000;
    local_8 = VVar8.___y_1;
    if (pRVar6 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
      VVar8.___y_1 = local_8 * __real_3f000000;
      VVar8.___x_0 = fVar7;
      RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798
                (pRVar6,VVar8,(MethodInfo *)0x0);
      pRVar6 = param_1->___rectTransform_9;
      VVar8 = Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42((MethodInfo *)0x0);
      local_8 = VVar8.___y_1;
      if (pRVar6 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
        VVar1.___y_1 = local_8 * __real_3f000000;
        VVar1.___x_0 = fVar7 * __real_3f000000;
        RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D
                  (pRVar6,VVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
