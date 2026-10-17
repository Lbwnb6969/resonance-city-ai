// RVA 0x40f700 | Os.Hex.HexOnionVisualizer$$OnDrawGizmos
// PDB: HexOnionVisualizer_OnDrawGizmos_m898EEFC92734A0F209AE1664766722D210362E26
// Body: [[1040f700, 1040f934]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10192150 memset
// 1040f270 HexOnionIterator_Increment_m11DD829AD1260E23386A320057BABEAC5FC75B71
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10a3e4f0 Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
// 10a3e5d0 Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF
// 10a3e8a0 Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C

void __cdecl
HexOnionVisualizer_OnDrawGizmos_m898EEFC92734A0F209AE1664766722D210362E26
          (HexOnionVisualizer_t10C5E8E5FAD35DD53EC843F38A625D3CBF2CE053 *param_1,MethodInfo *param_2
          )

{
  float fVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  undefined8 *extraout_EAX;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_00;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_01;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_9c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_90;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_84;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_78;
  float local_64;
  undefined8 local_60;
  undefined8 local_54;
  HexOnionIterator_tE8578AFBA6B4BFBD516B38EF522902EB5E0CD82B local_48;
  float local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;

  if (DAT_1151ca8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_1151ca8e = '\x01';
  }
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C
            (*(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
              ((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                    static_fields + 0x1c),(MethodInfo *)0x0);
  memset((uchar *)&local_48,'\0',0x2c);
  do {
    local_64 = (float)local_48.____hexPos_5.___z_2;
    Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
              (&local_90,(float)local_48.____hexPos_5.___x_0,(float)local_48.____hexPos_5.___y_1,
               local_64,(MethodInfo *)0x0);
    fVar1 = *(float *)(extraout_EAX + 1);
    uStack_c = (undefined4)*extraout_EAX;
    uStack_8 = (undefined4)((ulonglong)*extraout_EAX >> 0x20);
    piVar4 = HexOnionIterator_Increment_m11DD829AD1260E23386A320057BABEAC5FC75B71
                       (&local_9c,&local_48,(MethodInfo *)0x0);
    local_60._0_4_ = piVar4->___x_0;
    local_60._4_4_ = piVar4->___y_1;
    local_78.___x_0 = piVar4->___x_0;
    local_78.___y_1 = piVar4->___y_1;
    local_14 = (float)piVar4->___z_2;
    local_54 = local_60;
    Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
              (&local_84,(float)(int)(undefined4)local_60,(float)(int)local_60._4_4_,local_14,
               (MethodInfo *)0x0);
    VVar2.___y_3 = (float)uStack_8;
    VVar2.___x_2 = (float)uStack_c;
    VVar2.___z_4 = fVar1;
    Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
              (VVar2,*extraout_EAX_00,(MethodInfo *)0x0);
  } while (local_48.____layerIndex_2 < 6);
  memset((uchar *)&local_48,'\0',0x2c);
  uStack_8 = 0x3dcccccd;
  local_10 = 0x3dcccccd;
  uStack_c = 0x3dcccccd;
  do {
    local_14 = (float)local_48.____hexPos_5.___z_2;
    Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
              (&local_84,(float)local_48.____hexPos_5.___x_0,(float)local_48.____hexPos_5.___y_1,
               local_14,(MethodInfo *)0x0);
    VVar3.___y_3 = (float)uStack_c;
    VVar3.___x_2 = (float)local_10;
    VVar3.___z_4 = 0.1;
    Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF
              (*extraout_EAX_01,VVar3,(MethodInfo *)0x0);
    HexOnionIterator_Increment_m11DD829AD1260E23386A320057BABEAC5FC75B71
              (&local_78,&local_48,(MethodInfo *)0x0);
  } while (local_48.____layerIndex_2 < 6);
  return;
}
