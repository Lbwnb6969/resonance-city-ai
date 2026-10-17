// RVA 0x417d40 | Placemaker.Ui.InputModeManager$$<Update>g__ShouldChange|8_0
// PDB: InputModeManager_U3CUpdateU3Eg__ShouldChangeU7C8_0_m3ECCC6FD3710A7990609646E2019CB22605B2080
// Body: [[10417d40, 10417e13]]
// Direct callees:
// 1003e420 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10d68080 ControllerHelper_get_Joysticks_m32CF666C3C2D8D76EAC5E57B73E872FA14E581B9

/* WARNING: Removing unreachable block (ram,0x10418163) */
/* WARNING: Removing unreachable block (ram,0x10418127) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool __cdecl
InputModeManager_U3CUpdateU3Eg__ShouldChangeU7C8_0_m3ECCC6FD3710A7990609646E2019CB22605B2080
          (U3CU3Ec__DisplayClass8_0_tF19414188969407E93BC82375E2D8499569CC645 *param_1,
          MethodInfo *param_2)

{
  ushort uVar1;
  ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *pCVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  undefined1 uVar4;
  ushort uVar5;
  Il2CppObject *pIVar6;
  int iVar7;
  VirtualInvokeData *pVVar8;
  ControllerWithAxes_t164B33E4223EEE8A3D485285B4AA5BFA1B0F780F *pCVar9;
  Axis_t865C266E186BB1814ECB79B591EC721E6B742596 *pAVar10;
  float fVar11;
  void *pvStack_10;
  undefined1 *puStack_c;
  int local_8;

  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &
              __ehhandler__InputModeManager_U3CUpdateU3Eg__ShouldChangeU7C8_0_m3ECCC6FD3710A7990609646E2019CB22605B2080
  ;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if (DAT_1151caba == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerable_1_t2836629A97ED31CDD3CF5AF3EEB21594D18EC12D_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerable_1_t8E35C574BEAF32A237EFE7796451DFFB6F999F15_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerable_1_tD80F1686DB1A7CE75F6A87D9E3473DD85937D5E6_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_1_t060CC7DFD5DECFD6795F5D4B6135404B20E3265C_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_1_t2DED1CA734C176F63E9C46653AF7E16AAE7BF1B2_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_1_t96E678BD4A58B8F3B9916485417D05DE876E6E3C_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    DAT_1151caba = '\x01';
  }
  if (((param_1->___player_0 != (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0) &&
      (pCVar2 = param_1->___player_0->___controllers_7,
      pCVar2 != (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0)) &&
     (pIVar6 = ControllerHelper_get_Joysticks_m32CF666C3C2D8D76EAC5E57B73E872FA14E581B9
                         (pCVar2,(MethodInfo *)0x0), pIVar6 != (Il2CppObject *)0x0)) {
    pIVar6 = (Il2CppObject *)
             InterfaceFuncInvoker0<int>::Invoke
                       (0,
                        IEnumerable_1_tD80F1686DB1A7CE75F6A87D9E3473DD85937D5E6_il2cpp_TypeInfo_var,
                        pIVar6);
    local_8._0_1_ = 0;
    local_8._1_3_ = 0;
    if (pIVar6 != (Il2CppObject *)0x0) {
      iVar7 = InterfaceFuncInvoker0<int>::Invoke
                        (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                         ,pIVar6);
      if ((char)iVar7 == '\0') {
        local_8 = 0xffffffff;
        if (pIVar6 != (Il2CppObject *)0x0) {
          InterfaceFuncInvoker0<int>::Invoke
                    (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,
                     pIVar6);
        }
        ExceptionList = pvStack_10;
        return false;
      }
      uVar5 = 0;
      uVar1 = ((pIVar6->field0_0x0).klass)->interface_offsets_count;
      if (uVar1 != 0) {
        pIVar3 = ((pIVar6->field0_0x0).klass)->interfaceOffsets;
        do {
          if (pIVar3[uVar5].interfaceType ==
              IEnumerator_1_t2DED1CA734C176F63E9C46653AF7E16AAE7BF1B2_il2cpp_TypeInfo_var) {
            pVVar8 = (VirtualInvokeData *)
                     (&((pIVar6->field0_0x0).klass)->field_0xbc + pIVar3[uVar5].offset * 8);
            goto LAB_10417e83;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
      }
      pVVar8 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar6,
                          IEnumerator_1_t2DED1CA734C176F63E9C46653AF7E16AAE7BF1B2_il2cpp_TypeInfo_var
                          ,0);
LAB_10417e83:
      pCVar9 = (ControllerWithAxes_t164B33E4223EEE8A3D485285B4AA5BFA1B0F780F *)
               (*pVVar8->methodPtr)(pIVar6,pVVar8->method);
      if ((pCVar9 != (ControllerWithAxes_t164B33E4223EEE8A3D485285B4AA5BFA1B0F780F *)0x0) &&
         (pIVar6 = ControllerWithAxes_get_Axes_mF7BE8ED2FFFB553DD87CA51B81D4DDDED8E09473
                             (pCVar9,(MethodInfo *)0x0), pIVar6 != (Il2CppObject *)0x0)) {
        pIVar6 = (Il2CppObject *)
                 InterfaceFuncInvoker0<int>::Invoke
                           (0,
                            IEnumerable_1_t2836629A97ED31CDD3CF5AF3EEB21594D18EC12D_il2cpp_TypeInfo_var
                            ,pIVar6);
        local_8._0_1_ = 1;
        while (pIVar6 != (Il2CppObject *)0x0) {
          iVar7 = InterfaceFuncInvoker0<int>::Invoke
                            (0,
                             IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                             ,pIVar6);
          if ((char)iVar7 == '\0') {
            local_8 = (uint)local_8._1_3_ << 8;
            uVar4 = FUN_10417f85();
            return (bool)uVar4;
          }
          pAVar10 = (Axis_t865C266E186BB1814ECB79B591EC721E6B742596 *)
                    InterfaceFuncInvoker0<int>::Invoke
                              (0,
                               IEnumerator_1_t060CC7DFD5DECFD6795F5D4B6135404B20E3265C_il2cpp_TypeInfo_var
                               ,pIVar6);
          if (pAVar10 == (Axis_t865C266E186BB1814ECB79B591EC721E6B742596 *)0x0) break;
          fVar11 = Axis_get_value_mC9FEA525999F9EF9C9BB16BBB8390138044BCD05
                             (pAVar10,(MethodInfo *)0x0);
          if (fVar11 != ___real_00000000) {
            local_8 = (uint)local_8._1_3_ << 8;
            uVar4 = FUN_10417f85();
            return (bool)uVar4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
