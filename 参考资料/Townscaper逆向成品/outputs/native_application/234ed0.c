// RVA 0x234ed0 | Placemaker.Ui.ControlBinding$$SetRow
// PDB: ControlBinding_SetRow_m8D3BCD1A109CACE46DF2C9D3AFC6BE156EFA8A53
// Body: [[10234ed0, 10234f39] [10234f3d, 10234fe4]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066efb0 Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187
// 108789c0 BindingRow_SetAction_mC8E5A2502E3232EA9347BAA336B50316B01B664B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10c78ba0 Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

void __cdecl
ControlBinding_SetRow_m8D3BCD1A109CACE46DF2C9D3AFC6BE156EFA8A53
          (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *param_1,
          InputAction_tD22CF065BFD88C292C239741BE6F8E37F5AE7ADE *param_2,int param_3,
          String_t *param_4,int param_5,int param_6,MethodInfo *param_7)

{
  List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3 *pLVar1;
  BindingRow_t56D7B2F34271796B77D8360E8DF57BA956DC0BA7 *pBVar2;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;

  if (DAT_1151b599 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m6BF3E9E403BE950E08B7A17DA61F6E695399A7E1_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mF953D9003DA4060A94A2A0FDFB75A8000503AC9A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m9938DEC7940787960C6206941B1A6F338F9162CC_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Object_Instantiate_TisBindingRow_t56D7B2F34271796B77D8360E8DF57BA956DC0BA7_m68E8DA04224B2B33DE9176B360AE43D7DF41F280_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151b599 = '\x01';
  }
  pLVar1 = param_1->___bindingRowsPool_9;
  if (pLVar1 != (List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3 *)0x0) {
    if (param_6 < pLVar1->____size_2) {
      if ((uint)pLVar1->____size_2 <= (uint)param_6) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      OVar3 = *(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *)
               (pLVar1->____items_1 + param_6 * 4 + 0x10);
    }
    else {
      pBVar2 = param_1->___srcBindingRow_5;
      pTVar4 = param_1->___rowsLayout_6;
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      OVar3 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
              Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared
                        ((Il2CppObject *)pBVar2,pTVar4,
                         Object_Instantiate_TisBindingRow_t56D7B2F34271796B77D8360E8DF57BA956DC0BA7_m68E8DA04224B2B33DE9176B360AE43D7DF41F280_RuntimeMethod_var
                        );
      if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___bindingRowsPool_9 ==
          (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_10234fe0;
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___bindingRowsPool_9,
                 OVar3,List_1_Add_m6BF3E9E403BE950E08B7A17DA61F6E695399A7E1_RuntimeMethod_var);
    }
    if (OVar3 != (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) {
      BindingRow_SetAction_mC8E5A2502E3232EA9347BAA336B50316B01B664B
                ((BindingRow_t56D7B2F34271796B77D8360E8DF57BA956DC0BA7 *)OVar3,param_2,param_3,
                 param_4,param_5,(MethodInfo *)0x0);
      pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)OVar3,
                          (MethodInfo *)0x0);
      if (pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187
                  (pTVar4,(MethodInfo *)0x0);
        if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___bindingRows_8 !=
            (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) {
          List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                    ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___bindingRows_8,
                     OVar3,List_1_Add_m6BF3E9E403BE950E08B7A17DA61F6E695399A7E1_RuntimeMethod_var);
          return;
        }
      }
    }
  }
LAB_10234fe0:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
