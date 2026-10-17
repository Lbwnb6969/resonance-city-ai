// RVA 0xe77fa0 | Placemaker.Graphs.Graph$$SetEmptyBoundsCenter
// PDB: Graph_SetEmptyBoundsCenter_m9D03266BF4FA7332EF802EA72E1E234E64194C58
// Body: [[10e77fa0, 10e78029]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1040d9e0 HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D

void __cdecl
Graph_SetEmptyBoundsCenter_m9D03266BF4FA7332EF802EA72E1E234E64194C58
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,MethodInfo *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar4;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_10;

  if (DAT_1152282f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_1152282f = '\x01';
  }
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  piVar4 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                     (&local_10,param_2,(MethodInfo *)0x0);
  uVar1 = piVar4->___x_0;
  uVar2 = piVar4->___y_1;
  iVar3 = piVar4->___z_2;
  (param_1->___bounds_28).___c0_0.___x_0 = uVar1;
  (param_1->___bounds_28).___c0_0.___y_1 = uVar2;
  (param_1->___bounds_28).___c0_0.___z_2 = iVar3;
  (param_1->___bounds_28).___c1_1.___x_0 = uVar1;
  (param_1->___bounds_28).___c1_1.___y_1 = uVar2;
  (param_1->___bounds_28).___c1_1.___z_2 = iVar3;
  param_1->___boundsUpdated_41 = true;
  return;
}
