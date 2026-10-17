// RVA 0x4c2390 | Placemaker.Quads.GridGeneration.CustomGridLibrary$$GetRandom
// PDB: CustomGridLibrary_GetRandom_m0D656C75B6A74C0A834F7BFA7FF1E52DBB011268
// Body: [[104c2390, 104c23fc] [104c2400, 104c2424] [104c2428, 104c243f]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

CustomGridPatch_tDB4C184FBDA8288935A3B1B000D1B4A27BDBCBD4 * __cdecl
CustomGridLibrary_GetRandom_m0D656C75B6A74C0A834F7BFA7FF1E52DBB011268
          (CustomGridLibrary_t0B27CCE8FEB891CE054D8E5D1CFD6CD366DBC38B *param_1,
          List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *param_2,
          Random_tAA667D9E4475C884ADEB5B16274B7D4C4E90CC12 *param_3,MethodInfo *param_4)

{
  byte bVar1;
  List_1_t05808FE4F7C728291275E1EFE5D52176507D13D2 *pLVar2;
  uint uVar3;
  uint uVar4;

  if (DAT_1151d116 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m57D918CCCF12AF10E74504F9CFC59BDE86CD5B8D_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var)
    ;
    DAT_1151d116 = '\x01';
  }
  if (param_2 != (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0) {
    uVar4 = param_3->___state_0;
    uVar3 = uVar4 << 0xd ^ uVar4;
    uVar3 = uVar3 >> 0x11 ^ uVar3;
    uVar4 = (uint)((ulonglong)(uint)param_2->____size_2 * (ulonglong)uVar4 >> 0x20);
    param_3->___state_0 = uVar3 << 5 ^ uVar3;
    if ((uint)param_2->____size_2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    bVar1 = param_2->____items_1->m_Items[uVar4];
    if (bVar1 == 0xff) {
      return (CustomGridPatch_tDB4C184FBDA8288935A3B1B000D1B4A27BDBCBD4 *)0x0;
    }
    pLVar2 = param_1->___allCustomPatches_4;
    if (pLVar2 != (List_1_t05808FE4F7C728291275E1EFE5D52176507D13D2 *)0x0) {
      if ((uint)pLVar2->____size_2 <= (uint)bVar1) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      return *(CustomGridPatch_tDB4C184FBDA8288935A3B1B000D1B4A27BDBCBD4 **)
              (pLVar2->____items_1 + (uint)bVar1 * 4 + 0x10);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
