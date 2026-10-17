// RVA 0x880b90 | Placemaker.BorderDrawer$$OnStart
// PDB: BorderDrawer_OnStart_m9DE7FDDFFF59B276F8D5EBCD017F0FBE7445A701
// Body: [[10880b90, 10880bdf]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 10880be0 BorderDrawer_SetupBlock_m5A934DC296C252B9519F54CA1650098071C93DFC
// 10a486e0 Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6

void __cdecl
BorderDrawer_OnStart_m9DE7FDDFFF59B276F8D5EBCD017F0FBE7445A701
          (BorderDrawer_t5CCF0A662FEFF553A6CDA812C86BCB079D1B618C *param_1,MethodInfo *param_2)

{
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar1;

  if (DAT_1151f5d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
    DAT_1151f5d0 = '\x01';
  }
  pMVar1 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)
           il2cpp_codegen_object_new
                     (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
  Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(pMVar1,(MethodInfo *)0x0);
  param_1->___mesh_5 = pMVar1;
  BorderDrawer_SetupBlock_m5A934DC296C252B9519F54CA1650098071C93DFC(param_1,(MethodInfo *)0x0);
  return;
}
