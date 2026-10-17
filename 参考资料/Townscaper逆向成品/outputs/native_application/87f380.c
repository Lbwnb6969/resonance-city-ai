// RVA 0x87f380 | Placemaker.Life.BirdFlock$$UprootAllBirds
// PDB: BirdFlock_UprootAllBirds_mF10E5E01D99ADFAE8D7EC49F2C1AAACA7EB00637
// Body: [[1087f380, 1087f480]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10267d60 Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
// 1087f492 FUN_1087f492
// 1087f4d0 BirdFlock_UprootBird_mFC6249072B6FF234B72CD0060E94EDA0AB728F6D
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 11032ae0 List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared

void __cdecl
BirdFlock_UprootAllBirds_mF10E5E01D99ADFAE8D7EC49F2C1AAACA7EB00637
          (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *param_1,MethodInfo *param_2)

{
  BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *pBVar1;
  Il2CppObject *pIVar2;
  undefined1 *puVar3;
  bool bVar4;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *pEVar5;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 local_38;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 local_28;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__BirdFlock_UprootAllBirds_mF10E5E01D99ADFAE8D7EC49F2C1AAACA7EB00637;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  ExceptionList = &pvStack_10;
  puVar3 = &stack0xffffffbc;
  if (DAT_1151f5c2 == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_m78986E4D25A26D9942245F4117AA6FDD1C3D6B7E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_m8174F90BCE80F079D064765C23559BF674105402_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_m049AA992585B374E562B1088B6157657285EA63C_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_GetEnumerator_m054F4FD763A3C9A105EED1A8682D15E82F1731B7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f5c2 = '\x01';
    puVar3 = local_14;
  }
  local_14 = puVar3;
  if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___birds_17 !=
      (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
    pEVar5 = List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared
                       (&local_38,
                        (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___birds_17,
                        List_1_GetEnumerator_m054F4FD763A3C9A105EED1A8682D15E82F1731B7_RuntimeMethod_var
                       );
    local_28.___list_0 = pEVar5->___list_0;
    local_28.___index_1 = pEVar5->___index_1;
    local_28.___version_2 = pEVar5->___version_2;
    local_28.___current_3 = pEVar5->___current_3;
    local_8 = 0;
    while( true ) {
      bVar4 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                        (&local_28,
                         Enumerator_MoveNext_m8174F90BCE80F079D064765C23559BF674105402_RuntimeMethod_var
                        );
      pIVar2 = local_28.___current_3;
      if (!bVar4) {
        FUN_1087f492();
        return;
      }
      if ((Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)local_28.___current_3 ==
          (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)0x0) break;
      pBVar1 = *(BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB **)
                ((int)local_28.___current_3 + 0x7c);
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                        ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBVar1,
                         (MethodInfo *)0x0);
      if (bVar4) {
        BirdFlock_UprootBird_mFC6249072B6FF234B72CD0060E94EDA0AB728F6D
                  (param_1,(Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)pIVar2,1.0,
                   (MethodInfo *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
