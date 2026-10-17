// RVA 0x74dba0 | Placemaker.Orientation$$MultiplyBounds
// PDB: Orientation_MultiplyBounds_m97675D0DA0CB3CF6B2612765E19F6B8510B2DA76
// Body: [[1074dba0, 1074dc62]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 103d9fe0 ModuleMath_MultiplyBounds_m9E639031813823E10AFE337B3392B7C7ADDB1EDE

int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F * __cdecl
Orientation_MultiplyBounds_m97675D0DA0CB3CF6B2612765E19F6B8510B2DA76
          (int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F *__return_storage_ptr__,
          Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 *param_1,
          int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F param_2,MethodInfo *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar4;
  int4x4_t2CD7A9F659C5BF8B1C7C3961BC5573E009868331 iVar5;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F *piVar6;

  if (DAT_1151ebdd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
    DAT_1151ebdd = '\x01';
  }
  iVar5 = param_1->___int4x4_0;
  if ((ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
  }
  iVar4.___c0_0.___y_1 = param_2.___c0_0.___y_1;
  iVar4.___c0_0.___x_0 = param_2.___c0_0.___x_0;
  iVar4.___c0_0.___z_2 = param_2.___c0_0.___z_2;
  iVar4.___c1_1.___x_0 = param_2.___c1_1.___x_0;
  iVar4.___c1_1.___y_1 = param_2.___c1_1.___y_1;
  iVar4.___c1_1.___z_2 = param_2.___c1_1.___z_2;
  piVar6 = ModuleMath_MultiplyBounds_m9E639031813823E10AFE337B3392B7C7ADDB1EDE
                     (&param_2,iVar5,iVar4,(MethodInfo *)0x0);
  iVar1 = (piVar6->___c0_0).___y_1;
  iVar2 = (piVar6->___c0_0).___z_2;
  iVar3 = (piVar6->___c1_1).___x_0;
  (__return_storage_ptr__->___c0_0).___x_0 = (piVar6->___c0_0).___x_0;
  (__return_storage_ptr__->___c0_0).___y_1 = iVar1;
  (__return_storage_ptr__->___c0_0).___z_2 = iVar2;
  (__return_storage_ptr__->___c1_1).___x_0 = iVar3;
  iVar1 = (piVar6->___c1_1).___z_2;
  (__return_storage_ptr__->___c1_1).___y_1 = (piVar6->___c1_1).___y_1;
  (__return_storage_ptr__->___c1_1).___z_2 = iVar1;
  return __return_storage_ptr__;
}
