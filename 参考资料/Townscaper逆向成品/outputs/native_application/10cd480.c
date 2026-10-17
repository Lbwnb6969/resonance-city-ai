// RVA 0x10cd480 | FuryStudios.FurySDK.ClassTypeConstraintAttribute$$IsConstraintSatisfied
// PDB: ClassTypeConstraintAttribute_IsConstraintSatisfied_m6229326A51B466A8F3365DC87C0C2E216B751AF3
// Body: [[110cd480, 110cd4ad]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 108296f0 Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F

bool __cdecl
ClassTypeConstraintAttribute_IsConstraintSatisfied_m6229326A51B466A8F3365DC87C0C2E216B751AF3
          (ClassTypeConstraintAttribute_t7520EA4152F9F7B850DC2208A3162D7D1AC77A18 *param_1,
          Type_t *param_2,MethodInfo *param_3)

{
  bool bVar1;

  if (param_1->____allowAbstract_1 != false) {
    return true;
  }
  if (param_2 != (Type_t *)0x0) {
    bVar1 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F(param_2,(MethodInfo *)0x0)
    ;
    return !bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
