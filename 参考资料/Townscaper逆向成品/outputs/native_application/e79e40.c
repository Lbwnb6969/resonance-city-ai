// RVA 0xe79e40 | Placemaker.Graphs.Graph$$get_anyVoxels
// PDB: Graph_get_anyVoxels_m9D90C592308B99A9264FA727570D36E17E0AC7FD
// Body: [[10e79e40, 10e79eb7]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

bool __cdecl
Graph_get_anyVoxels_m9D90C592308B99A9264FA727570D36E17E0AC7FD
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,MethodInfo *param_2)

{
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar1;
  bool bVar2;
  int iVar3;

  if (DAT_11522828 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_11522828 = '\x01';
  }
  pOVar1 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1->___corners_6;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar1,(MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  if (param_1->___corners_6 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    iVar3 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (param_1->___corners_6,(MethodInfo *)0x0);
    return 0 < iVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
