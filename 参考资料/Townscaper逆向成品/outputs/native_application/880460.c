// RVA 0x880460 | Placemaker.Life.Bird$$System.IComparable<Placemaker.Life.Bird>.CompareTo
// PDB: Bird_System_IComparableU3CPlacemaker_Life_BirdU3E_CompareTo_m73F2BF691C97727B68FD4F0466092363321B85AF
// Body: [[10880460, 1088048c]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10c10d10 Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4

int __cdecl
Bird_System_IComparableU3CPlacemaker_Life_BirdU3E_CompareTo_m73F2BF691C97727B68FD4F0466092363321B85AF
          (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *param_1,
          Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *param_2,MethodInfo *param_3)

{
  int iVar1;

  if (param_2 != (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)0x0) {
    iVar1 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4
                      (&(param_1->___pos_14).___x_2,(param_2->___pos_14).___x_2,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
