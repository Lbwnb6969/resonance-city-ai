// RVA 0x2ffbe0 | Placemaker.Ui.SunButton$$PushBulbColors
// PDB: SunButton_PushBulbColors_m6396A2A7D8829F79810D5C93146B37EE5EA6FBA1
// Body: [[102ffbe0, 102ffcbf]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043ef30 Component_GetComponentInChildren_TisRuntimeObject_m1F2C143B578F30EE0CD30A57F890C239E3B5FA81_gshared
// 10a3eaf0 Gradient_Evaluate_m02EA0BFD41864C8673A29333EBC4569C9DAA3E37

void __cdecl
SunButton_PushBulbColors_m6396A2A7D8829F79810D5C93146B37EE5EA6FBA1
          (SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *param_1,MethodInfo *param_2)

{
  Il2CppClass *pIVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar4;
  Il2CppObject *pIVar5;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_14;

  if (DAT_1151c203 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInChildren_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_m4097B20F8597826885B7A134E4FFB52E84A9EC8F_RuntimeMethod_var
              );
    DAT_1151c203 = '\x01';
  }
  if (param_1->___bulbColor_23 != (Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 *)0x0) {
    pCVar4 = Gradient_Evaluate_m02EA0BFD41864C8673A29333EBC4569C9DAA3E37
                       (&local_14,param_1->___bulbColor_23,(param_1->___current_17).___y_1,
                        (MethodInfo *)0x0);
    local_14.___r_0 = pCVar4->___r_0;
    local_14.___g_1 = pCVar4->___g_1;
    local_14.___b_2 = pCVar4->___b_2;
    local_14.___a_3 = 1.0;
    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___handleBoth_8 !=
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
      pIVar5 = Component_GetComponentInChildren_TisRuntimeObject_m1F2C143B578F30EE0CD30A57F890C239E3B5FA81_gshared
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                          param_1->___handleBoth_8,true,
                          Component_GetComponentInChildren_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_m4097B20F8597826885B7A134E4FFB52E84A9EC8F_RuntimeMethod_var
                         );
      if (pIVar5 != (Il2CppObject *)0x0) {
        pIVar1 = (pIVar5->field0_0x0).klass;
        uVar2._0_1_ = pIVar1[1].naturalAligment;
        uVar2._1_1_ = pIVar1[1].packingSize;
        uVar2._2_2_ = *(undefined2 *)&pIVar1[1].field_0xba;
        (**(code **)&pIVar1[1].typeHierarchyDepth)
                  (pIVar5,local_14.___r_0,local_14.___g_1,local_14.___b_2,local_14.___a_3,uVar2);
        if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___handleBoth1_9 !=
            (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
          pIVar5 = Component_GetComponentInChildren_TisRuntimeObject_m1F2C143B578F30EE0CD30A57F890C239E3B5FA81_gshared
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                              param_1->___handleBoth1_9,true,
                              Component_GetComponentInChildren_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_m4097B20F8597826885B7A134E4FFB52E84A9EC8F_RuntimeMethod_var
                             );
          if (pIVar5 != (Il2CppObject *)0x0) {
            pIVar1 = (pIVar5->field0_0x0).klass;
            uVar3._0_1_ = pIVar1[1].naturalAligment;
            uVar3._1_1_ = pIVar1[1].packingSize;
            uVar3._2_2_ = *(undefined2 *)&pIVar1[1].field_0xba;
            (**(code **)&pIVar1[1].typeHierarchyDepth)
                      (pIVar5,local_14.___r_0,local_14.___g_1,local_14.___b_2,local_14.___a_3,uVar3)
            ;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
