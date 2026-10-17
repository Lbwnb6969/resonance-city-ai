// RVA 0x9c3730 | Placemaker.WaveFunctionCollapse.Propagation$$System.IComparable<Placemaker.WaveFunctionCollapse.Propagation>.CompareTo
// PDB: Propagation_System_IComparableU3CPlacemaker_WaveFunctionCollapse_PropagationU3E_CompareTo_m3315FFE61F7A902B86023C90B834390A54C89CE0
// Body: [[109c3730, 109c3905]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d9bd0 ModuleMath_GetMaterialCount_m80C13C427533C8EAB910A47EE6985FE1E12E6538
// 10524ae0 Char_CompareTo_m9F4915009A1AD54CF6977E9E16CE112FD244499D
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10833fa0 math_sin_mFE9768BE04BEBBD19B08FB6694319C9FECCC95FE_inline
// 108936c0 Byte_CompareTo_m9B9F61F5B96CED94E4848B71CECBF02F495BDB88
// 10905ba0 Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10c10d10 Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4

int __cdecl
Propagation_System_IComparableU3CPlacemaker_WaveFunctionCollapse_PropagationU3E_CompareTo_m3315FFE61F7A902B86023C90B834390A54C89CE0
          (Propagation_tFD3C7A39084AE25C9740FC8A98A0BCA4079543BA *param_1,
          Propagation_tFD3C7A39084AE25C9740FC8A98A0BCA4079543BA param_2,MethodInfo *param_3)

{
  undefined8 uVar1;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar2;
  ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 BVar3;
  int iVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar6;
  float fVar7;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_30;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_24;
  undefined8 local_18;
  float local_10;
  float local_c;
  int local_8;

  if (DAT_1151ff6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
    DAT_1151ff6c = '\x01';
  }
  pQVar2 = param_1->___qube_0;
  uStack_3c = *(undefined4 *)&param_1->___propagationIndex_1;
  uStack_38 = param_1->___existanceIndex_2;
  uStack_34 = *(undefined4 *)&param_1->___sideVariationMask_3;
  iVar4 = Char_CompareTo_m9F4915009A1AD54CF6977E9E16CE112FD244499D
                    ((wchar_t *)&uStack_3c,param_2.___propagationIndex_1,(MethodInfo *)0x0);
  if (iVar4 != 0) {
    return iVar4;
  }
  if ((pQVar2 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) &&
     (pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pQVar2,
                          (MethodInfo *)0x0),
     pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
    pVVar6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                       (&local_24,pTVar5,(MethodInfo *)0x0);
    local_18._0_4_ = pVVar6->___x_2;
    local_18._4_4_ = pVVar6->___y_3;
    local_10 = pVVar6->___z_4;
    if ((param_2.___qube_0 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) &&
       (pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2.___qube_0
                            ,(MethodInfo *)0x0),
       pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
      pVVar6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                         (&local_30,pTVar5,(MethodInfo *)0x0);
      uVar1._0_4_ = pVVar6->___x_2;
      uVar1._4_4_ = pVVar6->___y_3;
      fVar7 = pVVar6->___z_4;
      local_24._0_8_ = uVar1;
      iVar4 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4
                        ((float *)((int)&local_18 + 4),uVar1._4_4_,(MethodInfo *)0x0);
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar4 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4
                        (&(param_2.___qube_0)->___cost_12,pQVar2->___cost_12,(MethodInfo *)0x0);
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar4 = Byte_CompareTo_m9B9F61F5B96CED94E4848B71CECBF02F495BDB88
                        (&pQVar2->___voxelCount_4,(param_2.___qube_0)->___voxelCount_4,
                         (MethodInfo *)0x0);
      if (iVar4 != 0) {
        return iVar4;
      }
      BVar3 = (param_2.___qube_0)->___cornerValues_13;
      if ((ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->cctor_finished
          == 0)) {
        il2cpp_runtime_class_init
                  (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
      }
      local_8 = ModuleMath_GetMaterialCount_m80C13C427533C8EAB910A47EE6985FE1E12E6538
                          (BVar3,(MethodInfo *)0x0);
      iVar4 = ModuleMath_GetMaterialCount_m80C13C427533C8EAB910A47EE6985FE1E12E6538
                        (pQVar2->___cornerValues_13,(MethodInfo *)0x0);
      iVar4 = Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3
                        (&local_8,iVar4,(MethodInfo *)0x0);
      if (iVar4 != 0) {
        return iVar4;
      }
      local_c = math_sin_mFE9768BE04BEBBD19B08FB6694319C9FECCC95FE_inline
                          (local_10 + (float)local_18,(MethodInfo *)0x0);
      fVar7 = math_sin_mFE9768BE04BEBBD19B08FB6694319C9FECCC95FE_inline
                        (fVar7 + (float)uVar1,(MethodInfo *)0x0);
      iVar4 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4
                        (&local_c,fVar7,(MethodInfo *)0x0);
      return iVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
