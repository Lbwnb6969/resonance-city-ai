// RVA 0xe1faf0 | Placemaker.GridGenerator$$UnmotivateClusterChildren
// PDB: GridGenerator_UnmotivateClusterChildren_mB300EC8BB32EA947A751C1D01217C12F2DE58F33
// Body: [[10e1faf0, 10e1fbab]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1040e0d0 HexMath_RotateCW2_mD1082E727BC8D5F3EA036E2B6B8F0397D09AF1DB
// 10e10e90 GridGenerator_GetPatchOffset_m025E033F6EF8E282C9DC571A2001949E6E73511D
// 10e1fbf0 GridGenerator_UnmotivatePatch_m6BD5A9EE5049C6640E7C01A666B5D43B029F419A

void __cdecl
GridGenerator_UnmotivateClusterChildren_mB300EC8BB32EA947A751C1D01217C12F2DE58F33
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          HexCluster_tBF30C42359904C9666E094787C2C4DB5F36A5C9B *param_2,MethodInfo *param_3)

{
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *piVar1;
  int iVar2;
  int iVar3;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar4;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar5;
  int iVar6;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar7;

  if (DAT_11522666 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_11522666 = '\x01';
  }
  if (param_2 != (HexCluster_tBF30C42359904C9666E094787C2C4DB5F36A5C9B *)0x0) {
    piVar1 = &param_2->___hexPos_0;
    iVar2 = piVar1->___x_0;
    iVar3 = (param_2->___hexPos_0).___y_1;
    iVar5 = *piVar1;
    iVar7 = GridGenerator_GetPatchOffset_m025E033F6EF8E282C9DC571A2001949E6E73511D
                      (param_1,*piVar1,(MethodInfo *)0x0);
    iVar6 = 3;
    do {
      iVar4.___y_1 = iVar7.___y_1 + iVar3;
      iVar4.___x_0 = iVar7.___x_0 + iVar2;
      GridGenerator_UnmotivatePatch_m6BD5A9EE5049C6640E7C01A666B5D43B029F419A
                (param_1,iVar4,iVar5,(MethodInfo *)0x0);
      if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished
             == 0)) {
        il2cpp_runtime_class_init
                  (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
      }
      iVar7 = HexMath_RotateCW2_mD1082E727BC8D5F3EA036E2B6B8F0397D09AF1DB(iVar7,(MethodInfo *)0x0);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
