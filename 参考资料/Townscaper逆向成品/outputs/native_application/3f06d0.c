// RVA 0x3f06d0 | Placemaker.VoxelBounceEffect$$Begin
// PDB: VoxelBounceEffect_Begin_mE144E69B19193D2D2F5838456D40777A7238503D
// Body: [[103f06d0, 103f07a9]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 106683a0 Shader_SetGlobalFloatImpl_m02A206C366CB1EC84C3A579786F64397CC07EE18
// 1066d970 Time_get_timeSinceLevelLoad_m47A90DE6CB3A3180D64F0049290BC72C186FC7FB

void __cdecl
VoxelBounceEffect_Begin_mE144E69B19193D2D2F5838456D40777A7238503D
          (VoxelBounceEffect_t9A0497D3BDA6C41FE20D42092A7FC74B8253BE98 *param_1,MethodInfo *param_2)

{
  int iVar1;
  float fVar2;

  if (DAT_1151c912 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m83FE75551E6A40A29FDFF65DF681289573D8A03D_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       VoxelBounceEffect_t9A0497D3BDA6C41FE20D42092A7FC74B8253BE98_il2cpp_TypeInfo_var
              );
    DAT_1151c912 = '\x01';
  }
  if (param_1->___verts_11 != (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0) {
    List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
              ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___verts_11,
               List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
    if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___colors_12 !=
        (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
      List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___colors_12,
                 List_1_Clear_m83FE75551E6A40A29FDFF65DF681289573D8A03D_RuntimeMethod_var);
      if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___tris_13 !=
          (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
        List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___tris_13,
                   List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
        if ((VoxelBounceEffect_t9A0497D3BDA6C41FE20D42092A7FC74B8253BE98_il2cpp_TypeInfo_var->
             has_cctor != '\0') &&
           (VoxelBounceEffect_t9A0497D3BDA6C41FE20D42092A7FC74B8253BE98_il2cpp_TypeInfo_var->
            cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (VoxelBounceEffect_t9A0497D3BDA6C41FE20D42092A7FC74B8253BE98_il2cpp_TypeInfo_var
                    );
        }
        iVar1 = *(int *)VoxelBounceEffect_t9A0497D3BDA6C41FE20D42092A7FC74B8253BE98_il2cpp_TypeInfo_var
                        ->static_fields;
        fVar2 = Time_get_timeSinceLevelLoad_m47A90DE6CB3A3180D64F0049290BC72C186FC7FB
                          ((MethodInfo *)0x0);
        Shader_SetGlobalFloatImpl_m02A206C366CB1EC84C3A579786F64397CC07EE18
                  (iVar1,fVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
