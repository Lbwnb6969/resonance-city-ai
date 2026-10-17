// RVA 0x417e14 | Recovered.function.called_by_41808a
// PDB: FUN_10417e14
// Body: [[10417e14, 10417f60]]
// Direct callees:
// 1003e420 Invoke
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 10417f85 FUN_10417f85
// 10ebbd70 ControllerWithAxes_get_Axes_mF7BE8ED2FFFB553DD87CA51B81D4DDDED8E09473
// 10f26430 Axis_get_value_mC9FEA525999F9EF9C9BB16BBB8390138044BCD05

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10417e14(void)

{
  ushort uVar1;
  undefined1 uVar2;
  ushort uVar3;
  int iVar4;
  VirtualInvokeData *pVVar5;
  ControllerWithAxes_t164B33E4223EEE8A3D485285B4AA5BFA1B0F780F *pCVar6;
  Il2CppObject *pIVar7;
  Axis_t865C266E186BB1814ECB79B591EC721E6B742596 *pAVar8;
  int *piVar9;
  Exception_t *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  float fVar10;

  if (*(Il2CppObject **)(unaff_EBP + 8) != (Il2CppObject *)0x0) {
    iVar4 = InterfaceFuncInvoker0<int>::Invoke
                      (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                       *(Il2CppObject **)(unaff_EBP + 8));
    if ((char)iVar4 == '\0') {
      *(undefined4 *)(unaff_EBP + -0x48 + unaff_ESI * 4) = 0xa3;
      iVar4 = *(int *)(unaff_EBP + -0x34) + 1;
      *(int *)(unaff_EBP + -0x34) = iVar4;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(Il2CppObject **)(unaff_EBP + 8) != (Il2CppObject *)0x0) {
        InterfaceFuncInvoker0<int>::Invoke
                  (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,
                   *(Il2CppObject **)(unaff_EBP + 8));
      }
      if (unaff_EBX == (Exception_t *)0x0) {
        if ((iVar4 != 0) && (*(int *)(unaff_EBP + -0x4c + iVar4 * 4) == 0xa5)) {
          ExceptionList = *(void **)(unaff_EBP + -0xc);
          return *(undefined1 *)(unaff_EBP + -0x11);
        }
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(unaff_EBX,(MethodInfo *)0x0);
    }
    uVar3 = 0;
    uVar1 = *(ushort *)(**(int **)(unaff_EBP + 8) + 0xb2);
    if (uVar1 != 0) {
      iVar4 = *(int *)(**(int **)(unaff_EBP + 8) + 0x58);
      do {
        if (*(Il2CppClass **)(iVar4 + (uint)uVar3 * 8) ==
            IEnumerator_1_t2DED1CA734C176F63E9C46653AF7E16AAE7BF1B2_il2cpp_TypeInfo_var) {
          piVar9 = *(int **)(unaff_EBP + 8);
          pVVar5 = (VirtualInvokeData *)(*(int *)(iVar4 + 4 + (uint)uVar3 * 8) * 8 + 0xbc + *piVar9)
          ;
          goto LAB_10417e83;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    pVVar5 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                       (*(Il2CppObject **)(unaff_EBP + 8),
                        IEnumerator_1_t2DED1CA734C176F63E9C46653AF7E16AAE7BF1B2_il2cpp_TypeInfo_var,
                        0);
    piVar9 = *(int **)(unaff_EBP + 8);
LAB_10417e83:
    pCVar6 = (ControllerWithAxes_t164B33E4223EEE8A3D485285B4AA5BFA1B0F780F *)
             (*pVVar5->methodPtr)(piVar9,pVVar5->method);
    *(ControllerWithAxes_t164B33E4223EEE8A3D485285B4AA5BFA1B0F780F **)(unaff_EBP + -0x20) = pCVar6;
    if (pCVar6 != (ControllerWithAxes_t164B33E4223EEE8A3D485285B4AA5BFA1B0F780F *)0x0) {
      pIVar7 = ControllerWithAxes_get_Axes_mF7BE8ED2FFFB553DD87CA51B81D4DDDED8E09473
                         (pCVar6,(MethodInfo *)0x0);
      if (pIVar7 != (Il2CppObject *)0x0) {
        pIVar7 = (Il2CppObject *)
                 InterfaceFuncInvoker0<int>::Invoke
                           (0,
                            IEnumerable_1_t2836629A97ED31CDD3CF5AF3EEB21594D18EC12D_il2cpp_TypeInfo_var
                            ,pIVar7);
        *(Il2CppObject **)(unaff_EBP + -0x24) = pIVar7;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        while (pIVar7 != (Il2CppObject *)0x0) {
          iVar4 = InterfaceFuncInvoker0<int>::Invoke
                            (0,
                             IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                             ,pIVar7);
          if ((char)iVar4 == '\0') {
            *(undefined4 *)(unaff_EBP + -0x48 + unaff_ESI * 4) = 0x57;
            *(undefined1 *)(unaff_EBP + -4) = 0;
            *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1;
            uVar2 = FUN_10417f85();
            return uVar2;
          }
          pAVar8 = (Axis_t865C266E186BB1814ECB79B591EC721E6B742596 *)
                   InterfaceFuncInvoker0<int>::Invoke
                             (0,
                              IEnumerator_1_t060CC7DFD5DECFD6795F5D4B6135404B20E3265C_il2cpp_TypeInfo_var
                              ,pIVar7);
          if (pAVar8 == (Axis_t865C266E186BB1814ECB79B591EC721E6B742596 *)0x0) break;
          fVar10 = Axis_get_value_mC9FEA525999F9EF9C9BB16BBB8390138044BCD05
                             (pAVar8,(MethodInfo *)0x0);
          *(float *)(unaff_EBP + -0x1c) = fVar10;
          if (*(float *)(unaff_EBP + -0x1c) != ___real_00000000) {
            *(undefined4 *)(unaff_EBP + -0x48 + unaff_ESI * 4) = 0xa5;
            *(undefined1 *)(unaff_EBP + -0x11) = 1;
            *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1;
            *(undefined1 *)(unaff_EBP + -4) = 0;
            uVar2 = FUN_10417f85();
            return uVar2;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
