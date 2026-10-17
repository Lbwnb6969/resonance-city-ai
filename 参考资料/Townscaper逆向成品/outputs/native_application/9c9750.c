// RVA 0x9c9750 | Placemaker.Ui.UpdateState.<>c__DisplayClass34_0$$<Subscribe>b__0
// PDB: U3CU3Ec__DisplayClass34_0_U3CSubscribeU3Eb__0_m8A9644C0F273D0C702F68467CFC66DBF4D655729
// Body: [[109c9750, 109c9841]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10836f90 ExtraMath_SetA_m5B95B685E9833790822EFD1B8FC45910FB071830
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
U3CU3Ec__DisplayClass34_0_U3CSubscribeU3Eb__0_m8A9644C0F273D0C702F68467CFC66DBF4D655729
          (U3CU3Ec__DisplayClass34_0_t4DC58D194034C3F2893EDE8DD373CB597B4ED21E *param_1,
          float param_2,MethodInfo *param_3)

{
  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *pGVar1;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar2;
  float *pfVar3;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar4;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar5;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_14;

  if (DAT_1151ff69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_1151ff69 = '\x01';
  }
  pGVar1 = param_1->___graphic_0;
  if (pGVar1 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0) {
    pfVar3 = (float *)(**(code **)(pGVar1->_padding_ + 0x16c))
                                (&local_14,pGVar1,*(undefined4 *)(pGVar1->_padding_ + 0x170));
    local_14.___r_0 = *pfVar3;
    local_14.___g_1 = pfVar3[1];
    local_14.___b_2 = pfVar3[2];
    local_14.___a_3 = pfVar3[3];
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
                       (&local_14,CVar2,param_2,(MethodInfo *)0x0);
    (**(code **)(pGVar1->_padding_ + 0x174))
              (pGVar1,pCVar4->___r_0,pCVar4->___g_1,pCVar4->___b_2,pCVar4->___a_3,
               *(undefined4 *)(pGVar1->_padding_ + 0x178));
    if (param_1->___graphic_0 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0) {
      pGVar5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                          param_1->___graphic_0,(MethodInfo *)0x0);
      if (pGVar5 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
        GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                  (pGVar5,___real_00000000 < param_2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
