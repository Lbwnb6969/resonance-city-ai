// RVA 0x804a40 | Placemaker.Props.PropPropeller$$OnValidate
// PDB: PropPropeller_OnValidate_m5379F41D787DECBB907E64593F094936EBF46DA6
// Body: [[10804a40, 10804afb]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dea0 GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F
// 10a3df00 GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6

void __cdecl
PropPropeller_OnValidate_m5379F41D787DECBB907E64593F094936EBF46DA6
          (PropPropeller_t7EE18E92A76ECB9800732906E4117BDA2ACF49D5 *param_1,MethodInfo *param_2)

{
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar1;
  int iVar2;

  if (DAT_1151f1ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var);
    DAT_1151f1ef = '\x01';
  }
  pGVar1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pGVar1 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
    iVar2 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(pGVar1,(MethodInfo *)0x0)
    ;
    if ((LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->cctor_finished ==
        0)) {
      il2cpp_runtime_class_init
                (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var);
    }
    if (iVar2 != *(int *)((int)LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var
                               ->static_fields + 0x1c)) {
      pGVar1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
      if ((LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->cctor_finished
          == 0)) {
        il2cpp_runtime_class_init
                  (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var);
      }
      if (pGVar1 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) goto LAB_10804af7;
      GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6
                (pGVar1,*(int *)((int)LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var
                                      ->static_fields + 0x1c),(MethodInfo *)0x0);
    }
    return;
  }
LAB_10804af7:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
