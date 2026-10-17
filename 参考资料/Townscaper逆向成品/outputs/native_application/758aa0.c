// RVA 0x758aa0 | Placemaker.Props.PropNode$$System.IComparable<Placemaker.Props.PropNode>.CompareTo
// PDB: PropNode_System_IComparableU3CPlacemaker_Props_PropNodeU3E_CompareTo_m66F4F3B11E0A41045CBE92FBE9F35B4E0CF1E1D2
// Body: [[10758aa0, 10758acc]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10c10d10 Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4

int __cdecl
PropNode_System_IComparableU3CPlacemaker_Props_PropNodeU3E_CompareTo_m66F4F3B11E0A41045CBE92FBE9F35B4E0CF1E1D2
          (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_1,
          PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_2,MethodInfo *param_3)

{
  int iVar1;

  if (param_2 != (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)0x0) {
    iVar1 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4
                      (&param_1->___priority_4,param_2->___priority_4,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
