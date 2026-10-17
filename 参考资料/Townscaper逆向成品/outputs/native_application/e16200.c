// RVA 0xe16200 | Placemaker.GridGenerator$$IterateBits
// PDB: GridGenerator_IterateBits_m2290B4B0850924B74F7147F88BF533F6AB7826DD
// Body: [[10e16200, 10e16251] [10e16255, 10e16297]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e14000 GridGenerator_IterateBit_mF26D0807021BAE5BAF362E29DF459A8153FF8A43

bool __cdecl
GridGenerator_IterateBits_m2290B4B0850924B74F7147F88BF533F6AB7826DD
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *param_2,MethodInfo *param_3)

{
  List_1_t5A00B7A64847DB878CB4EDF91D8446FB9D071E19 *pLVar1;
  GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 *pGVar2;
  uint uVar3;

  if (DAT_11522670 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m92C421DB981FD941732BF841E250A4509985C039_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m36CA1D15680963401408C8E959F3F59313A9D1E3_RuntimeMethod_var)
    ;
    DAT_11522670 = '\x01';
  }
  pLVar1 = param_1->___bits_7;
  if (pLVar1 != (List_1_t5A00B7A64847DB878CB4EDF91D8446FB9D071E19 *)0x0) {
    uVar3 = (uint)param_1->___bitProcessIndex_13;
    if (pLVar1->____size_2 <= (int)uVar3) {
      return false;
    }
    if ((uint)pLVar1->____size_2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    pGVar2 = *(GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 **)
              (pLVar1->____items_1 + uVar3 * 4 + 0x10);
    if (pGVar2 != (GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 *)0x0) {
      if (((pGVar2->___state_9 != '\x05') || (pGVar2->___patchDone_8 == false)) &&
         (pGVar2->___motivations_5 != '\0')) {
        GridGenerator_IterateBit_mF26D0807021BAE5BAF362E29DF459A8153FF8A43
                  (param_1,pGVar2,param_2,(MethodInfo *)0x0);
        return true;
      }
      param_1->___bitProcessIndex_13 = param_1->___bitProcessIndex_13 + 1;
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
