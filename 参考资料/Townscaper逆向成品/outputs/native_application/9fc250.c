// RVA 0x9fc250 | Placemaker.Ui.SaveCard$$System.IComparable<Placemaker.Ui.SaveCard>.CompareTo
// PDB: SaveCard_System_IComparableU3CPlacemaker_Ui_SaveCardU3E_CompareTo_m6349943B9DFA2562FAFBF631CE2ACE676ADB4078
// Body: [[109fc250, 109fc2b2]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10906570 Int64_CompareTo_m279CC69D4B5B5F32B648DD217FCA3F727BB9EA51
// 10a4a8b0 Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
// 10f01560 String_CompareTo_m01AF97548BE97133E2DC648B2E63BB16708354CF

int __cdecl
SaveCard_System_IComparableU3CPlacemaker_Ui_SaveCardU3E_CompareTo_m6349943B9DFA2562FAFBF631CE2ACE676ADB4078
          (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *param_1,
          SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *param_2,MethodInfo *param_3)

{
  int iVar1;
  String_t *pSVar2;
  String_t *pSVar3;
  MethodInfo *unaff_EDI;

  if (((param_1->___saveData_8 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) &&
      (param_2 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0)) &&
     (param_2->___saveData_8 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0)) {
    iVar1 = Int64_CompareTo_m279CC69D4B5B5F32B648DD217FCA3F727BB9EA51
                      (&param_1->___saveData_8->___lastWriteTime_1,
                       (ulonglong)*(uint *)((int)&param_2->___saveData_8->___lastWriteTime_1 + 4),
                       unaff_EDI);
    iVar1 = -iVar1;
    if (iVar1 == 0) {
      pSVar2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
                         ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1,
                          (MethodInfo *)0x0);
      pSVar3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
                         ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_2,
                          (MethodInfo *)0x0);
      if (pSVar2 == (String_t *)0x0) goto LAB_109fc2ae;
      iVar1 = String_CompareTo_m01AF97548BE97133E2DC648B2E63BB16708354CF
                        (pSVar2,pSVar3,(MethodInfo *)0x0);
    }
    return iVar1;
  }
LAB_109fc2ae:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
