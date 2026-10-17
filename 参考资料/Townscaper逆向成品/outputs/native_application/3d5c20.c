// RVA 0x3d5c20 | Placemaker.MetaSave$$System.IComparable<Placemaker.MetaSave>.CompareTo
// PDB: MetaSave_System_IComparableU3CPlacemaker_MetaSaveU3E_CompareTo_m8EB1CDD22AD0A1BA4FADD30949253CC59DC6AE99
// Body: [[103d5c20, 103d5ca3]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10905ba0 Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3
// 10906570 Int64_CompareTo_m279CC69D4B5B5F32B648DD217FCA3F727BB9EA51
// 10a49db0 Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501

int __cdecl
MetaSave_System_IComparableU3CPlacemaker_MetaSaveU3E_CompareTo_m8EB1CDD22AD0A1BA4FADD30949253CC59DC6AE99
          (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *param_1,
          MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *param_2,MethodInfo *param_3)

{
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar1;
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar2;
  int iVar3;
  MethodInfo *unaff_EDI;

  pMVar2 = param_2;
  pMVar1 = param_1;
  param_1 = (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)
            (uint)((param_1->___state_18 & 0xe0U) != 0);
  if (param_2 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
    iVar3 = Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3
                      ((int *)&param_1,(uint)((param_2->___state_18 & 0xe0U) != 0),(MethodInfo *)0x0
                      );
    if (iVar3 == 0) {
      iVar3 = Int64_CompareTo_m279CC69D4B5B5F32B648DD217FCA3F727BB9EA51
                        (&pMVar1->___lastFileWriteTime_8,
                         (ulonglong)*(uint *)((int)&pMVar2->___lastFileWriteTime_8 + 4),unaff_EDI);
      iVar3 = -iVar3;
      if (iVar3 == 0) {
        param_2 = (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)
                  Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501
                            ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar1,
                             (MethodInfo *)0x0);
        iVar3 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501
                          ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar2,
                           (MethodInfo *)0x0);
        iVar3 = Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3
                          ((int *)&param_2,iVar3,(MethodInfo *)0x0);
      }
    }
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
