// RVA 0x878300 | Placemaker.BigMeshMaster$$OnLateUpdate
// PDB: BigMeshMaster_OnLateUpdate_mCA8934163A16F42B5655CA5DB8AD9BBF54BFB8E3
// Body: [[10878300, 10878374] [10878378, 108783d4]]
// Direct callees:
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10877e50 BigMeshMaster_MaybeApply_m6C936D1366555E081A077E07A671E15D90A56AA6
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
BigMeshMaster_OnLateUpdate_mCA8934163A16F42B5655CA5DB8AD9BBF54BFB8E3
          (BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *param_1,MethodInfo *param_2)

{
  List_1_t08300A472E0CFF4BBE62C0B4AD27A46AA6C87FC0 *pLVar1;
  int iVar2;
  int iVar3;
  BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *pBVar4;
  uint uVar5;
  int iVar6;

  if (DAT_1151f5b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m4AD01DA3C5F20CFDBEA7423107E96C21288AB3DF_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mE81B511122AAAADD36791AC8402B66AEFAA8B1C1_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m65897993C4E975002C9FBA25B7037EF0FD2B023B_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mDF83BB6FDA85468BB5D8E88932F7D79390E6701F_RuntimeMethod_var)
    ;
    DAT_1151f5b5 = '\x01';
  }
  if (param_1->___bigMeshGroups_5 != (List_1_t08300A472E0CFF4BBE62C0B4AD27A46AA6C87FC0 *)0x0) {
    uVar5 = param_1->___bigMeshGroups_5->____size_2 - 1;
    if (-1 < (int)uVar5) {
      iVar6 = uVar5 * 4 + 0x10;
      do {
        pLVar1 = param_1->___bigMeshGroups_5;
        if (pLVar1 == (List_1_t08300A472E0CFF4BBE62C0B4AD27A46AA6C87FC0 *)0x0) goto LAB_108783d0;
        if ((uint)pLVar1->____size_2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        iVar2 = *(int *)(pLVar1->____items_1 + iVar6);
        if ((iVar2 == 0) || (*(int *)(iVar2 + 0x10) == 0)) goto LAB_108783d0;
        iVar3 = *(int *)(*(int *)(iVar2 + 0x10) + 0xc);
        while (iVar3 = iVar3 + -1, -1 < iVar3) {
          if (*(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)(iVar2 + 0x10) ==
              (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) goto LAB_108783d0;
          pBVar4 = (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)
                   List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                             (*(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)(iVar2 + 0x10),
                              iVar3,
                              List_1_get_Item_m65897993C4E975002C9FBA25B7037EF0FD2B023B_RuntimeMethod_var
                             );
          BigMeshMaster_MaybeApply_m6C936D1366555E081A077E07A671E15D90A56AA6
                    (param_1,pBVar4,(MethodInfo *)0x0);
        }
        iVar6 = iVar6 + -4;
        uVar5 = uVar5 - 1;
      } while (-1 < (int)uVar5);
    }
    return;
  }
LAB_108783d0:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
