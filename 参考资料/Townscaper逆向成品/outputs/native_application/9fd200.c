// RVA 0x9fd200 | Placemaker.SaveCardsHandler$$ResetCardPool
// PDB: SaveCardsHandler_ResetCardPool_m191963A0A8AAFE506C574E8DE68DC46408C25135
// Body: [[109fd200, 109fd27c] [109fd280, 109fd3df]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10662d80 Rect_get_zero_m4F738804E40698120CC691AB45A6416C4FF52589
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
SaveCardsHandler_ResetCardPool_m191963A0A8AAFE506C574E8DE68DC46408C25135
          (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *param_1,MethodInfo *param_2)

{
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar1;
  int *piVar2;
  List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *pLVar3;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar4;
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar5;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar6;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar7;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_20;
  SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *local_10;
  int local_c;
  uint local_8;

  if (DAT_11520186 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m3CCF0BBABB9195D0C8702E9581A57472A1738B93_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m3CF61E21718800106308F17641E859E62B891FFF_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&SaveData_t108FDD1E782E68BC3B924BE75B58816350034188_il2cpp_TypeInfo_var);
    DAT_11520186 = '\x01';
  }
  local_10 = param_1;
  local_8 = 0;
  pLVar3 = param_1->___cardPool_7;
  if (pLVar3 != (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0) {
    local_c = 0x10;
    while( true ) {
      if (pLVar3->____size_2 <= (int)local_8) {
        return;
      }
      if (pLVar3 == (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0) break;
      if ((uint)pLVar3->____size_2 <= local_8) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      pCVar1 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                (pLVar3->____items_1 + local_c);
      if ((pCVar1 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
         (pGVar4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                             (pCVar1,(MethodInfo *)0x0),
         pGVar4 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) break;
      GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar4,false,(MethodInfo *)0x0)
      ;
      if (*(Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 **)(pCVar1 + 2) ==
          (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)0x0) break;
      Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                (*(Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 **)(pCVar1 + 2),false,
                 (MethodInfo *)0x0);
      pUVar5 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
               il2cpp_codegen_object_new
                         (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188_il2cpp_TypeInfo_var);
      if (DAT_11520195 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&List_1__ctor_m0C958192C9BDB86D1808AA821DD9F98CBB7AC802_RuntimeMethod_var
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&List_1__ctor_mFDA6442D329E5DF2C627CF30FB28A694D0CAEF50_RuntimeMethod_var
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043_il2cpp_TypeInfo_var);
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B_il2cpp_TypeInfo_var);
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
        DAT_11520195 = '\x01';
      }
      pUVar5->___U3CU3E1__state_0 = (int)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
      *(undefined2 *)&pUVar5[1]._padding_ = 0x7f;
      *(undefined1 *)((int)&pUVar5[1]._padding_ + 2) = 0x7f;
      *(undefined2 *)((int)&pUVar5[1]._padding_ + 3) = 0x7f7f;
      pLVar6 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
               il2cpp_codegen_object_new
                         (List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043_il2cpp_TypeInfo_var);
      List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
                (pLVar6,List_1__ctor_m0C958192C9BDB86D1808AA821DD9F98CBB7AC802_RuntimeMethod_var);
      pUVar5[1].___U3CU3E2__current_1 = (Il2CppObject *)pLVar6;
      pLVar6 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
               il2cpp_codegen_object_new
                         (List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B_il2cpp_TypeInfo_var);
      List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
                (pLVar6,List_1__ctor_mFDA6442D329E5DF2C627CF30FB28A694D0CAEF50_RuntimeMethod_var);
      pUVar5[1].___U3CU3E4__this_2 =
           (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 *)pLVar6;
      U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                (pUVar5,(MethodInfo *)0x0);
      piVar2 = *(int **)(pCVar1 + 1);
      *(U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 **)&pCVar1[2].field_0x4 =
           pUVar5;
      pRVar7 = Rect_get_zero_m4F738804E40698120CC691AB45A6416C4FF52589(&local_20,(MethodInfo *)0x0);
      if (piVar2 == (int *)0x0) break;
      (**(code **)(*piVar2 + 0x174))
                (piVar2,pRVar7->___m_XMin_0,pRVar7->___m_YMin_1,pRVar7->___m_Width_2,
                 pRVar7->___m_Height_3,*(undefined4 *)(*piVar2 + 0x178));
      local_8 = local_8 + 1;
      local_c = local_c + 4;
      pLVar3 = local_10->___cardPool_7;
      if (pLVar3 == (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
