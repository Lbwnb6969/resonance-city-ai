// RVA 0x758a60 | Placemaker.Props.PropNode$$System.Collections.Generic.IComparer<Placemaker.Props.PropNode>.Compare
// PDB: PropNode_System_Collections_Generic_IComparerU3CPlacemaker_Props_PropNodeU3E_Compare_mFBABBA103A349E64017B18557C4BFD25E2C2204D
// Body: [[10758a60, 10758a90]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10c10d10 Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4

int __cdecl
PropNode_System_Collections_Generic_IComparerU3CPlacemaker_Props_PropNodeU3E_Compare_mFBABBA103A349E64017B18557C4BFD25E2C2204D
          (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_1,
          PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_2,
          PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_3,MethodInfo *param_4)

{
  int iVar1;

  if ((param_2 != (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)0x0) &&
     (param_3 != (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)0x0)) {
    iVar1 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4
                      (&param_2->___priority_4,param_3->___priority_4,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
