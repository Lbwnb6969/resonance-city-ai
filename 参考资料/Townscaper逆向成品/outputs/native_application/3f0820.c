// RVA 0x3f0820 | Placemaker.VoxelBounceEffect$$OnStart
// PDB: VoxelBounceEffect_OnStart_m9C561DB1ACC927DDFE54D5BE1CF5D393041946AB
// Body: [[103f0820, 103f093d]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10665440 RenderTexture__ctor_m5D8D36B284951F95A048C6B9ACA24FC7509564FF
// 106683a0 Shader_SetGlobalFloatImpl_m02A206C366CB1EC84C3A579786F64397CC07EE18
// 106684a0 Shader_SetGlobalTextureImpl_mA0CAE25859DE59F4AA6A47929D2CB3E183EC6BF2
// 10a43400 Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E
// 10a46930 MeshFilter_set_mesh_m13177C1A6C29D76DDCD858CEF2B28C2AA7CC46FC
// 10a477b0 Mesh_MarkDynamic_m11FFDC281C64F11C36EDDA47BC132EAC95082999
// 10a486e0 Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6

void __cdecl
VoxelBounceEffect_OnStart_m9C561DB1ACC927DDFE54D5BE1CF5D393041946AB
          (VoxelBounceEffect_t9A0497D3BDA6C41FE20D42092A7FC74B8253BE98 *param_1,MethodInfo *param_2)

{
  Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 *pSVar1;
  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *pRVar2;
  Material_t8927C00353A72755313F046D0CE85178AE8218EE *pMVar3;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar4;

  if (DAT_1151c910 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       VoxelBounceEffect_t9A0497D3BDA6C41FE20D42092A7FC74B8253BE98_il2cpp_TypeInfo_var
              );
    DAT_1151c910 = '\x01';
  }
  pRVar2 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)
           il2cpp_codegen_object_new
                     (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
  RenderTexture__ctor_m5D8D36B284951F95A048C6B9ACA24FC7509564FF
            (pRVar2,0x200,0x200,0x18,(MethodInfo *)0x0);
  pSVar1 = param_1->___shader_5;
  param_1->___tex_7 = pRVar2;
  pMVar3 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)
           il2cpp_codegen_object_new
                     (Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
  Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(pMVar3,pSVar1,(MethodInfo *)0x0);
  param_1->___material_6 = pMVar3;
  if ((VoxelBounceEffect_t9A0497D3BDA6C41FE20D42092A7FC74B8253BE98_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (VoxelBounceEffect_t9A0497D3BDA6C41FE20D42092A7FC74B8253BE98_il2cpp_TypeInfo_var->
      cctor_finished == 0)) {
    il2cpp_runtime_class_init
              (VoxelBounceEffect_t9A0497D3BDA6C41FE20D42092A7FC74B8253BE98_il2cpp_TypeInfo_var);
  }
  Shader_SetGlobalTextureImpl_mA0CAE25859DE59F4AA6A47929D2CB3E183EC6BF2
            (*(int *)((int)VoxelBounceEffect_t9A0497D3BDA6C41FE20D42092A7FC74B8253BE98_il2cpp_TypeInfo_var
                           ->static_fields + 4),
             (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)param_1->___tex_7,
             (MethodInfo *)0x0);
  Shader_SetGlobalFloatImpl_m02A206C366CB1EC84C3A579786F64397CC07EE18
            (*(int *)VoxelBounceEffect_t9A0497D3BDA6C41FE20D42092A7FC74B8253BE98_il2cpp_TypeInfo_var
                     ->static_fields,-100.0,(MethodInfo *)0x0);
  pMVar4 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)
           il2cpp_codegen_object_new
                     (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
  Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(pMVar4,(MethodInfo *)0x0);
  param_1->___voxelBounceMesh_14 = pMVar4;
  if (pMVar4 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
    Mesh_MarkDynamic_m11FFDC281C64F11C36EDDA47BC132EAC95082999(pMVar4,(MethodInfo *)0x0);
    if (param_1->___mf_4 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) {
      MeshFilter_set_mesh_m13177C1A6C29D76DDCD858CEF2B28C2AA7CC46FC
                (param_1->___mf_4,param_1->___voxelBounceMesh_14,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
