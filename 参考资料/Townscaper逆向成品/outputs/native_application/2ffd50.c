// RVA 0x2ffd50 | Placemaker.Ui.SunButton$$Update
// PDB: SunButton_Update_m636C67DB95F29B8CF12DC7AE4B29F82374C299AC
// Body: [[102ffd50, 102ffdb4]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 102fe980 SunButton_ImportSunValues_m7CEA379D7927AE9DC48EE93E773B81EE8808183B
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54

void __cdecl
SunButton_Update_m636C67DB95F29B8CF12DC7AE4B29F82374C299AC
          (SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *param_1,MethodInfo *param_2)

{
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar1;
  bool bVar2;

  if (DAT_1151c205 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151c205 = '\x01';
  }
  pUVar1 = param_1->___master_4;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pUVar1,
                     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    SunButton_ImportSunValues_m7CEA379D7927AE9DC48EE93E773B81EE8808183B(param_1,(MethodInfo *)0x0);
  }
  return;
}
