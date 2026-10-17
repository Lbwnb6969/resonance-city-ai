// RVA 0x3d9360 | Placemaker.ModuleBuilder$$<ApplyModule>g__GetNewBigMeshPart|8_0
// PDB: ModuleBuilder_U3CApplyModuleU3Eg__GetNewBigMeshPartU7C8_0_m035F91B71822E37AEDF3957079FE626C746D8BEB
// Body: [[103d9360, 103d93fb] [103d93ff, 103d940f]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10878670 BigMeshPart__ctor_mD8CF289126DD94832802FEE461C3CB8DE329325C
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

BigMeshPart_tE11B7C01E4DE678DA0A0F85B75A7F28BAE201B25 * __cdecl
ModuleBuilder_U3CApplyModuleU3Eg__GetNewBigMeshPartU7C8_0_m035F91B71822E37AEDF3957079FE626C746D8BEB
          (U3CU3Ec__DisplayClass8_0_tDDD6F0EE309B15990152E4517AE6A208E99E31CD *param_1,
          MethodInfo *param_2)

{
  uint uVar1;
  List_1_tAC387D40AA794C98425777894B362093CF4E78AC *pLVar2;
  List_1_t2C4900CD521971848CC77E564E7BAD6B2CECD405 *pLVar3;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar4;

  if (DAT_1151c87d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&BigMeshPart_tE11B7C01E4DE678DA0A0F85B75A7F28BAE201B25_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mEF03E75A570E2D117B571564502EFEA81C5840F8_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m1F2529F24F7F3DA0C46F4DA83A5298B02429C399_RuntimeMethod_var)
    ;
    DAT_1151c87d = '\x01';
  }
  uVar1 = param_1->___bigMeshPartIndex_0;
  if ((int)uVar1 < param_1->___bigMeshPartCount_1) {
    if (param_1->___moduleContainer_2 !=
        (ModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18 *)0x0) {
      pLVar3 = param_1->___moduleContainer_2->___bigMeshParts_6;
      param_1->___bigMeshPartIndex_0 = uVar1 + 1;
      if (pLVar3 != (List_1_t2C4900CD521971848CC77E564E7BAD6B2CECD405 *)0x0) {
        if ((uint)pLVar3->____size_2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        return *(BigMeshPart_tE11B7C01E4DE678DA0A0F85B75A7F28BAE201B25 **)
                (pLVar3->____items_1 + uVar1 * 4 + 0x10);
      }
    }
  }
  else {
    OVar4 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
            il2cpp_codegen_object_new
                      (BigMeshPart_tE11B7C01E4DE678DA0A0F85B75A7F28BAE201B25_il2cpp_TypeInfo_var);
    BigMeshPart__ctor_mD8CF289126DD94832802FEE461C3CB8DE329325C
              ((BigMeshPart_tE11B7C01E4DE678DA0A0F85B75A7F28BAE201B25 *)OVar4,(MethodInfo *)0x0);
    if ((param_1->___moduleContainer_2 !=
         (ModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18 *)0x0) &&
       (pLVar2 = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                 param_1->___moduleContainer_2->___bigMeshParts_6,
       pLVar2 != (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0)) {
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                (pLVar2,OVar4,List_1_Add_mEF03E75A570E2D117B571564502EFEA81C5840F8_RuntimeMethod_var
                );
      return (BigMeshPart_tE11B7C01E4DE678DA0A0F85B75A7F28BAE201B25 *)OVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
