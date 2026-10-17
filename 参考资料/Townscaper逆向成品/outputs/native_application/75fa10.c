// RVA 0x75fa10 | Placemaker.PropPlacer$$RemoveColliderFromDict
// PDB: PropPlacer_RemoveColliderFromDict_mD96376F4804CECD7D3BF5121CE52796901CA247A
// Body: [[1075fa10, 1075fbcb]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 1043f2b0 Component_GetComponents_TisRuntimeObject_mB0812CB4355C4F5E2EA27C7049C668609E72F31D_gshared
// 105d0600 ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
// 1075fbf0 FUN_1075fbf0

void __cdecl
PropPlacer_RemoveColliderFromDict_mD96376F4804CECD7D3BF5121CE52796901CA247A
          (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *param_1,
          PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_2,MethodInfo *param_3)

{
  undefined1 *puVar1;
  List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *pLVar2;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int local_8;

  local_8 = 0xffffffff;
  puStack_c = &
              __ehhandler__PropPlacer_RemoveColliderFromDict_mD96376F4804CECD7D3BF5121CE52796901CA247A
  ;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xfffffe48;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xfffffe48;
  if (DAT_1151ec43 == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponents_TisPropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47_mB4C8F8445ED81276163E16DCD3774D786DFA86D3_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Remove_m02498A015139DB0F08510D6C3D8EEE0CA39410B8_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_get_Item_m0A8D95A9C3C5FB68DB8348F91524BA84A1637321_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisPropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47_mA32742D86A2C7EE78AF473047B555860BCCBC2F2_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_m3FCDC6C6757E0EDCAFC23B2A450375F345D9FFC1_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t21E60C9F6240A49695800EA50D89D90BC268E604_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_RemoveRange_mD7944535F498FB773DCD8556ADB20AC5EBE51713_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Remove_m8133B882B471FAA0D8C4F7655E672C0EDF943EBF_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mBB6B7336DF41C6B52694DC743F8865A02DDAA9FA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m47A74E280C71A1FA7104E0D525D70C885FC56314_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m9053981E4F86329B862DCD556ECC7AABFA63BD00_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral01C1AA0F3C077B4B71069FF32BE845F2DB39AF71);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral32BC759334F82BC30EA8F2FA120EECDC861850A6);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral6B9009A6EF9552C3B2E31F64496CC44380FEA4C6);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralDA492A6BB9530F4E631834FABB6B9E63E3E4FEF1);
    DAT_1151ec43 = '\x01';
    puVar1 = local_14;
  }
  local_14 = puVar1;
  local_17 = 0;
  local_15 = 0;
  local_16 = 0;
  if (param_2 != (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)0x0) {
    if (param_2->___inDict_7 != false) {
      param_2->___inDict_7 = false;
      U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)&local_17,
                 (MethodInfo *)_stringLiteral01C1AA0F3C077B4B71069FF32BE845F2DB39AF71);
      local_8 = 0;
      if ((ListPool_1_t21E60C9F6240A49695800EA50D89D90BC268E604_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ListPool_1_t21E60C9F6240A49695800EA50D89D90BC268E604_il2cpp_TypeInfo_var->cctor_finished
          == 0)) {
        il2cpp_runtime_class_init
                  (ListPool_1_t21E60C9F6240A49695800EA50D89D90BC268E604_il2cpp_TypeInfo_var);
      }
      pLVar2 = ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                         (ListPool_1_Get_m3FCDC6C6757E0EDCAFC23B2A450375F345D9FFC1_RuntimeMethod_var
                         );
      U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)&local_15,
                 (MethodInfo *)_stringLiteral32BC759334F82BC30EA8F2FA120EECDC861850A6);
      local_8._0_1_ = 1;
      Component_GetComponents_TisRuntimeObject_mB0812CB4355C4F5E2EA27C7049C668609E72F31D_gshared
                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                 (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pLVar2,
                 Component_GetComponents_TisPropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47_mB4C8F8445ED81276163E16DCD3774D786DFA86D3_RuntimeMethod_var
                );
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_1075fbf0();
      return;
    }
    ExceptionList = pvStack_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
