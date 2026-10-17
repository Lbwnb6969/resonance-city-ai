// RVA 0x74dc70 | Placemaker.Orientation$$MultiplyPoint
// PDB: Orientation_MultiplyPoint_m1AB97C83FC6A82B8558D33E2EEB8C0739C2C84B5
// Body: [[1074dc70, 1074dd28]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 103da1c0 ModuleMath_MultiplyPoint_mCF666D2BF72E5888A44A50BE82BF3AD58886DD38

SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 __cdecl
Orientation_MultiplyPoint_m1AB97C83FC6A82B8558D33E2EEB8C0739C2C84B5
          (Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 *param_1,
          SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 param_2,MethodInfo *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  int4x4_t2CD7A9F659C5BF8B1C7C3961BC5573E009868331 iVar17;
  SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 SVar18;
  undefined1 extraout_var;
  undefined4 in_ECX;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 uVar19;
  undefined1 in_stack_0000000b;

  uVar19 = (undefined1)((uint)in_ECX >> 0x18);
  if (DAT_1151ebdb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
    DAT_1151ebdb = '\x01';
    uVar19 = extraout_var_00;
  }
  uVar1 = *_param_2;
  uVar2 = _param_2[1];
  uVar3 = _param_2[2];
  uVar4 = _param_2[3];
  uVar5 = _param_2[4];
  uVar6 = _param_2[5];
  uVar7 = _param_2[6];
  uVar8 = _param_2[7];
  uVar9 = _param_2[8];
  uVar10 = _param_2[9];
  uVar11 = _param_2[10];
  uVar12 = _param_2[0xb];
  uVar13 = _param_2[0xc];
  uVar14 = _param_2[0xd];
  iVar15 = _param_2[0xe];
  uVar16 = _param_2[0xf];
  if ((ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
    uVar19 = extraout_var_01;
  }
  iVar17.___c0_0.___y_1 = uVar1;
  iVar17.___c0_0.___x_0 = (int)&param_3;
  iVar17.___c0_0.___z_2 = uVar2;
  iVar17.___c0_0.___w_3 = uVar3;
  iVar17.___c1_1.___x_0 = uVar4;
  iVar17.___c1_1.___y_1 = uVar5;
  iVar17.___c1_1.___z_2 = uVar6;
  iVar17.___c1_1.___w_3 = uVar7;
  iVar17.___c2_2.___x_0 = uVar8;
  iVar17.___c2_2.___y_1 = uVar9;
  iVar17.___c2_2.___z_2 = uVar10;
  iVar17.___c2_2.___w_3 = uVar11;
  iVar17.___c3_3.___x_0 = uVar12;
  iVar17.___c3_3.___y_1 = uVar13;
  iVar17.___c3_3.___z_2 = uVar14;
  iVar17.___c3_3.___w_3 = iVar15;
  SVar18 = ModuleMath_MultiplyPoint_mCF666D2BF72E5888A44A50BE82BF3AD58886DD38
                     (iVar17,SUB43(uVar16,0),(MethodInfo *)CONCAT13(uVar19,(int3)param_3));
  *(undefined2 *)&(param_1->___int4x4_0).___c0_0.___x_0 =
       *(undefined2 *)CONCAT13(extraout_var,SVar18);
  *(undefined1 *)((int)&(param_1->___int4x4_0).___c0_0.___x_0 + 2) =
       *(undefined1 *)((undefined2 *)CONCAT13(extraout_var,SVar18) + 1);
  return SUB43(param_1,0);
}
