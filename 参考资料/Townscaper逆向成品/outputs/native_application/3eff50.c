// RVA 0x3eff50 | Placemaker.VoxelBobEffect$$UpdateShader
// PDB: VoxelBobEffect_UpdateShader_m2C355F9825155740D677B34CBA00994C438817BC
// Body: [[103eff50, 103f0022]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 106685e0 Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
// 10836fe0 ExtraMath_SetW_m9164BE628F6F11B09140233538951964E88E6B58

void __cdecl
VoxelBobEffect_UpdateShader_m2C355F9825155740D677B34CBA00994C438817BC
          (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *param_1,MethodInfo *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar5;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_14;

  if (DAT_1151c90e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1_il2cpp_TypeInfo_var
              );
    DAT_1151c90e = '\x01';
  }
  if ((VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1_il2cpp_TypeInfo_var->cctor_finished
      == 0)) {
    il2cpp_runtime_class_init
              (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1_il2cpp_TypeInfo_var);
  }
  iVar2 = *(int *)VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1_il2cpp_TypeInfo_var->
                  static_fields;
  local_14.___z_3 = (param_1->___bobPos_4).___x_2;
  local_14.___w_4 = (param_1->___bobPos_4).___y_3;
  fVar1 = param_1->___bobCurrent_5;
  fVar3 = (param_1->___bobPos_4).___z_4;
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  VVar4.___z_4 = fVar3;
  VVar4.___x_2 = local_14.___z_3;
  VVar4.___y_3 = local_14.___w_4;
  pVVar5 = ExtraMath_SetW_m9164BE628F6F11B09140233538951964E88E6B58
                     (&local_14,VVar4,fVar1,(MethodInfo *)0x0);
  Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3(iVar2,*pVVar5,(MethodInfo *)0x0);
  return;
}
